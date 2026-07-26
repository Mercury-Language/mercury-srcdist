/*
** Automatically generated from `cord.m'
** by the Mercury compiler,
** version rotd-2026-07-26
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


// :- module cord.
// :- implementation.

/*
INIT mercury__cord__init
ENDINIT
*/

#include "cord.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "benchmarking.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "calendar.mih"
#include "char.mih"
#include "construct.mih"
#include "counter.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "exception.mih"
#include "fat_sparse_bitset.mih"
#include "fatter_sparse_bitset.mih"
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
#include "one_or_more.mih"
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
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
#include "term_context.mih"
#include "term_conversion.mih"
#include "term_int.mih"
#include "term_io.mih"
#include "term_subst.mih"
#include "term_unify.mih"
#include "term_vars.mih"
#include "time.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
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
#include "io.error_util.mih"
#include "io.file.mih"
#include "io.primitives_read.mih"
#include "io.primitives_write.mih"
#include "io.stream_db.mih"
#include "io.stream_ops.mih"
#include "io.text_read.mih"
#include "stream.string_writer.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static const MR_DuFunctorDesc mercury__cord__cord__du_functor_desc_cord_1_0;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__cord__cord__pti_cord_node_1__pseudo_1;

static const MR_PseudoTypeInfo mercury__cord__cord__field_types_cord_1_1[1];

static const MR_DuFunctorDesc mercury__cord__cord__du_functor_desc_cord_1_1;

static const MR_DuFunctorDescPtr mercury__cord__cord__du_stag_ordered_cord_1_0[1];

static const MR_DuFunctorDescPtr mercury__cord__cord__du_stag_ordered_cord_1_1[1];

static const MR_DuPtagLayout mercury__cord__cord__du_ptag_ordered_cord_1[2];

static const MR_DuFunctorDescPtr mercury__cord__cord__du_name_ordered_cord_1[2];

static const MR_Integer mercury__cord__cord__functor_number_map_cord_1[2];

static const MR_FA_PseudoTypeInfo_Struct1 mercury__cord__list__pti_list_1__pseudo_1;

static const MR_PseudoTypeInfo mercury__cord__cord__field_types_cord_node_1_0[2];

static const MR_DuFunctorDesc mercury__cord__cord__du_functor_desc_cord_node_1_0;

static const MR_PseudoTypeInfo mercury__cord__cord__field_types_cord_node_1_1[2];

static const MR_DuFunctorDesc mercury__cord__cord__du_functor_desc_cord_node_1_1;

static const MR_DuFunctorDescPtr mercury__cord__cord__du_stag_ordered_cord_node_1_0[1];

static const MR_DuFunctorDescPtr mercury__cord__cord__du_stag_ordered_cord_node_1_1[1];

static const MR_DuPtagLayout mercury__cord__cord__du_ptag_ordered_cord_node_1[2];

static const MR_DuFunctorDescPtr mercury__cord__cord__du_name_ordered_cord_node_1[2];

static const MR_Integer mercury__cord__cord__functor_number_map_cord_node_1[2];

static MR_Word MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_f_in__list_0(
  MR_Word Var_20,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_Word MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_111_95_114_101_118_95_108_105_115_116_95_110_111_100_101_115_95_95_91_49_93_95_48_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_105_115_116_95_114_101_118_101_114_115_101_95_50_95_95_91_49_93_95_48_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
mercury__cord__to_list_2_2_f_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_110_111_100_101_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_93_95_48_5_p_0(
  MR_Word C_7,
  MR_Word Cs_8,
  MR_Unsigned STATE_VARIABLE_AccA_0_16,
  MR_Unsigned * STATE_VARIABLE_AccA_17);

static MR_Unsigned MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_55_95_95_91_49_44_32_50_44_32_51_93_95_48_3_f_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Unsigned HeadVar__3_3);

static void MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_110_111_100_101_95_95_104_111_53_95_95_91_49_44_32_50_44_32_51_93_95_48_5_p_0(
  MR_Word C_7,
  MR_Word Cs_8,
  MR_Integer STATE_VARIABLE_AccA_0_16,
  MR_Integer * STATE_VARIABLE_AccA_17);

static MR_Integer MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_93_95_48_3_f_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3);

static void MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_105_115_116_95_108_97_115_116_95_95_91_49_93_95_48_4_p_0(
  MR_Box Prev_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Box * HeadVar__4_4);

static void MR_CALL 
mercury__cord__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_105_115_116_95_108_97_115_116_95_95_91_49_93_95_48_95_95_49_4_p_0(
  MR_Box Prev_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_14,
  MR_Box * HeadVar__4_4);

static MR_Word MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_52_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_f_in__list_0(
  MR_Word Var_20,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
mercury__cord____Unify____cord_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__cord____Compare____cord_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__cord____Unify____cord_node_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__cord____Compare____cord_node_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);


static /* final */ const MR_Box mercury__cord_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__cord_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__cord_scalar_common_3[1][5];




static /* final */ const MR_Box mercury__cord_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__cord_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__cord_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__cord_scalar_common_3[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__cord_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
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
#include "time.mh"
#include "type_desc.mh"
#include "uint.mh"
#include "uint16.mh"
#include "uint32.mh"
#include "uint64.mh"
#include "uint8.mh"
#include "version_array.mh"
#include "io.environment.mh"
#include "io.error_util.mh"
#include "io.file.mh"
#include "io.primitives_read.mh"
#include "io.primitives_write.mh"
#include "io.stream_db.mh"
#include "io.stream_ops.mh"
#include "io.text_read.mh"


static const MR_DuFunctorDesc mercury__cord__cord__du_functor_desc_cord_1_0 = {
  (MR_String) "empty_cord",
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

static const MR_FA_PseudoTypeInfo_Struct1 mercury__cord__cord__pti_cord_node_1__pseudo_1 = {
  &mercury__cord__cord__type_ctor_info_cord_node_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_PseudoTypeInfo mercury__cord__cord__field_types_cord_1_1[1] = { (MR_PseudoTypeInfo) (&mercury__cord__cord__pti_cord_node_1__pseudo_1) };

static const MR_DuFunctorDesc mercury__cord__cord__du_functor_desc_cord_1_1 = {
  (MR_String) "nonempty_cord",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__cord__cord__field_types_cord_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__cord__cord__du_stag_ordered_cord_1_0[1] = { &mercury__cord__cord__du_functor_desc_cord_1_0 };

static const MR_DuFunctorDescPtr mercury__cord__cord__du_stag_ordered_cord_1_1[1] = { &mercury__cord__cord__du_functor_desc_cord_1_1 };

static const MR_DuPtagLayout mercury__cord__cord__du_ptag_ordered_cord_1[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__cord__cord__du_stag_ordered_cord_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__cord__cord__du_stag_ordered_cord_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__cord__cord__du_name_ordered_cord_1[2] = {
  &mercury__cord__cord__du_functor_desc_cord_1_0,
  &mercury__cord__cord__du_functor_desc_cord_1_1
};

static const MR_Integer mercury__cord__cord__functor_number_map_cord_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__cord__cord__type_ctor_info_cord_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__cord____Unify____cord_1_0_10001)),
  ((MR_Box) (mercury__cord____Compare____cord_1_0_10001)),
  (MR_String) "cord",
  (MR_String) "cord",
  { mercury__cord__cord__du_name_ordered_cord_1 },
  { mercury__cord__cord__du_ptag_ordered_cord_1 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__cord__cord__functor_number_map_cord_1,

};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__cord__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) ((MR_Integer) 1) }
};

static const MR_PseudoTypeInfo mercury__cord__cord__field_types_cord_node_1_0[2] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mercury__cord__list__pti_list_1__pseudo_1)
};

static const MR_DuFunctorDesc mercury__cord__cord__du_functor_desc_cord_node_1_0 = {
  (MR_String) "list_node",
  INT16_C(2),
  UINT16_C(3),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__cord__cord__field_types_cord_node_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__cord__cord__field_types_cord_node_1_1[2] = {
  (MR_PseudoTypeInfo) (&mercury__cord__cord__pti_cord_node_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__cord__cord__pti_cord_node_1__pseudo_1)
};

static const MR_DuFunctorDesc mercury__cord__cord__du_functor_desc_cord_node_1_1 = {
  (MR_String) "branch_node",
  INT16_C(2),
  UINT16_C(3),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__cord__cord__field_types_cord_node_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__cord__cord__du_stag_ordered_cord_node_1_0[1] = { &mercury__cord__cord__du_functor_desc_cord_node_1_0 };

static const MR_DuFunctorDescPtr mercury__cord__cord__du_stag_ordered_cord_node_1_1[1] = { &mercury__cord__cord__du_functor_desc_cord_node_1_1 };

static const MR_DuPtagLayout mercury__cord__cord__du_ptag_ordered_cord_node_1[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__cord__cord__du_stag_ordered_cord_node_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__cord__cord__du_stag_ordered_cord_node_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__cord__cord__du_name_ordered_cord_node_1[2] = {
  &mercury__cord__cord__du_functor_desc_cord_node_1_1,
  &mercury__cord__cord__du_functor_desc_cord_node_1_0
};

static const MR_Integer mercury__cord__cord__functor_number_map_cord_node_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__cord__cord__type_ctor_info_cord_node_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__cord____Unify____cord_node_1_0_10001)),
  ((MR_Box) (mercury__cord____Compare____cord_node_1_0_10001)),
  (MR_String) "cord",
  (MR_String) "cord_node",
  { mercury__cord__cord__du_name_ordered_cord_node_1 },
  { mercury__cord__cord__du_ptag_ordered_cord_node_1 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__cord__cord__functor_number_map_cord_node_1,

};

void MR_CALL 
mercury__cord____Compare____cord_1_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));

    mercury__cord____Compare____cord_node_1_0(TypeInfo_for_T_8, HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

void MR_CALL 
mercury__cord____Compare____cord_node_1_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_14 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_15 = (MR_Integer) (HeadVar__3_3);

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = (CastX_14 == CastY_15);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      {
        MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
        MR_Word ArgY1_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 0))));
        MR_Word ArgX2_12 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
        MR_Word ArgY2_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 1))));
        MR_Word SubResult1_11;

        mercury__cord____Compare____cord_node_1_0(TypeInfo_for_T_16, &SubResult1_11, ArgX1_9, ArgY1_10);
        succeeded = (SubResult1_11 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_11;
        else
        {
          MR_Word next_value_of_HeadVar__2_2 = ArgX2_12;
          MR_Word next_value_of_HeadVar__3_3 = ArgY2_13;

          // direct tailcall eliminated
          ;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
      }
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    else
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Box ArgX1_4 = (MR_hl_field(0, HeadVar__2_2, 0));
      MR_Box ArgY1_5 = (MR_hl_field(0, HeadVar__3_3, 0));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 1))));
      MR_Word SubResult1_6;

      mercury__builtin__compare_3_p_0(TypeInfo_for_T_16, &SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
        mercury__list____Compare____list_1_0(TypeInfo_for_T_16, HeadVar__1_1, ArgX2_7, ArgY2_8);
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__cord____Unify____cord_1_0(
  MR_Word TypeInfo_for_T_9,
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
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_6 == CastX_5);
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      succeeded = mercury__cord____Unify____cord_node_1_0(TypeInfo_for_T_9, ArgX1_3, ArgY1_4);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__cord____Unify____cord_node_1_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    {
      MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word ArgY1_8;
      MR_Word ArgX2_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word ArgY2_10;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
        ArgY2_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
        succeeded = mercury__cord____Unify____cord_node_1_0(TypeInfo_for_T_13, ArgX1_7, ArgY1_8);
        if (succeeded)
        {
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = ArgX2_9;
          next_value_of_HeadVar__2_2 = ArgY2_10;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          continue;
        }
      }
    }
    else
    {
      MR_Box ArgX1_3 = (MR_hl_field(0, HeadVar__1_1, 0));
      MR_Box ArgY1_4;
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
      MR_Word ArgY2_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = (MR_hl_field(0, HeadVar__2_2, 0));
        ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_13, ArgX1_3, ArgY1_4);
        if (succeeded)
          succeeded = mercury__list____Unify____list_1_0(TypeInfo_for_T_13, ArgX2_5, ArgY2_6);
      }
    }
    return succeeded;
    break;
  }
}

MR_Word MR_CALL 
mercury__cord__cord_list_to_list_2_2_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word HeadVar__1_1,
  MR_Word L_2)
{
  MR_Word HeadVar__3_3;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = L_2;
  else
  {
    MR_Word N_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Var_7;

    {
      Var_7 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_7, 0) = ((MR_Box) (N_5));
      MR_hl_field(1, Var_7, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    HeadVar__3_3 = mercury__cord__to_list_2_2_f_0(TypeInfo_for_T_9, Var_7, L_2);
  }
  return HeadVar__3_3;
}

void MR_CALL 
mercury__cord__map_foldl3_9_p_0(
  MR_Word TypeInfo_for_T1_32,
  MR_Word TypeInfo_for_T2_33,
  MR_Word TypeInfo_for_A_34,
  MR_Word TypeInfo_for_B_35,
  MR_Word TypeInfo_for_C_36,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Box STATE_VARIABLE_A_0_4,
  MR_Box * STATE_VARIABLE_A_5,
  MR_Box STATE_VARIABLE_B_0_6,
  MR_Box * STATE_VARIABLE_B_7,
  MR_Box STATE_VARIABLE_C_0_8,
  MR_Box * STATE_VARIABLE_C_9)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_C_9 = STATE_VARIABLE_C_0_8;
    *STATE_VARIABLE_B_7 = STATE_VARIABLE_B_0_6;
    *STATE_VARIABLE_A_5 = STATE_VARIABLE_A_0_4;
  }
  else
  {
    MR_Word NX_21 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word NY_22;

    mercury__cord__map_foldl3_node_9_p_0(TypeInfo_for_T1_32, TypeInfo_for_T2_33, TypeInfo_for_A_34, TypeInfo_for_B_35, TypeInfo_for_C_36, HeadVar__1_1, NX_21, &NY_22, STATE_VARIABLE_A_0_4, STATE_VARIABLE_A_5, STATE_VARIABLE_B_0_6, STATE_VARIABLE_B_7, STATE_VARIABLE_C_0_8, STATE_VARIABLE_C_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (NY_22));
    }
  }
}

void MR_CALL 
mercury__cord__LCMC__pred__map_foldl3_node__1_9_p_0(
  MR_Word TypeInfo_for_T1_47,
  MR_Word TypeInfo_for_T2_48,
  MR_Word TypeInfo_for_A_49,
  MR_Word TypeInfo_for_B_50,
  MR_Word TypeInfo_for_C_51,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_53,
  MR_Box STATE_VARIABLE_A_0_4,
  MR_Box * STATE_VARIABLE_A_5,
  MR_Box STATE_VARIABLE_B_0_6,
  MR_Box * STATE_VARIABLE_B_7,
  MR_Box STATE_VARIABLE_C_0_8,
  MR_Box * STATE_VARIABLE_C_9)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    {
      MR_Word XA_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word XB_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word YA_33;
      MR_Box STATE_VARIABLE_A_1_44;
      MR_Box STATE_VARIABLE_B_1_45;
      MR_Box STATE_VARIABLE_C_1_46;
      MR_Word HeadVar__3_3;
      MR_Word * AddrYB_52;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_53;
      MR_Box next_value_of_STATE_VARIABLE_A_0_4;
      MR_Box next_value_of_STATE_VARIABLE_B_0_6;
      MR_Box next_value_of_STATE_VARIABLE_C_0_8;

      mercury__cord__map_foldl3_node_9_p_0(TypeInfo_for_T1_47, TypeInfo_for_T2_48, TypeInfo_for_A_49, TypeInfo_for_B_50, TypeInfo_for_C_51, P_1, XA_31, &YA_33, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_1_44, STATE_VARIABLE_B_0_6, &STATE_VARIABLE_B_1_45, STATE_VARIABLE_C_0_8, &STATE_VARIABLE_C_1_46);
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (YA_33));
        MR_hl_field(1, HeadVar__3_3, 1) = NULL;
      }
      AddrYB_52 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, 1)));
      *AddrOfHeadVar__3_53 = HeadVar__3_3;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = XB_32;
      next_value_of_AddrOfHeadVar__3_53 = AddrYB_52;
      next_value_of_STATE_VARIABLE_A_0_4 = STATE_VARIABLE_A_1_44;
      next_value_of_STATE_VARIABLE_B_0_6 = STATE_VARIABLE_B_1_45;
      next_value_of_STATE_VARIABLE_C_0_8 = STATE_VARIABLE_C_1_46;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_53 = next_value_of_AddrOfHeadVar__3_53;
      STATE_VARIABLE_A_0_4 = next_value_of_STATE_VARIABLE_A_0_4;
      STATE_VARIABLE_B_0_6 = next_value_of_STATE_VARIABLE_B_0_6;
      STATE_VARIABLE_C_0_8 = next_value_of_STATE_VARIABLE_C_0_8;
      continue;
    }
    else
    {
      MR_Box XH_11 = (MR_hl_field(0, HeadVar__2_2, 0));
      MR_Word XT_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
      MR_Box YH_13;
      MR_Word YT_14;
      MR_Box STATE_VARIABLE_A_1_24;
      MR_Box STATE_VARIABLE_B_1_25;
      MR_Box STATE_VARIABLE_C_1_26;
      MR_Word HeadVar__3_54;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_1, 1))));

      func_0(((MR_Box) (P_1)), XH_11, &YH_13, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_1_24, STATE_VARIABLE_B_0_6, &STATE_VARIABLE_B_1_25, STATE_VARIABLE_C_0_8, &STATE_VARIABLE_C_1_26);
      mercury__list__map_foldl3_9_p_1(TypeInfo_for_T1_47, TypeInfo_for_T2_48, TypeInfo_for_A_49, TypeInfo_for_B_50, TypeInfo_for_C_51, P_1, XT_12, &YT_14, STATE_VARIABLE_A_1_24, STATE_VARIABLE_A_5, STATE_VARIABLE_B_1_25, STATE_VARIABLE_B_7, STATE_VARIABLE_C_1_26, STATE_VARIABLE_C_9);
      {
        HeadVar__3_54 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, HeadVar__3_54, 0) = YH_13;
        MR_hl_field(0, HeadVar__3_54, 1) = ((MR_Box) (YT_14));
      }
      *AddrOfHeadVar__3_53 = HeadVar__3_54;
    }
    break;
  }
}

void MR_CALL 
mercury__cord__map_foldl3_node_9_p_0(
  MR_Word TypeInfo_for_T1_47,
  MR_Word TypeInfo_for_T2_48,
  MR_Word TypeInfo_for_A_49,
  MR_Word TypeInfo_for_B_50,
  MR_Word TypeInfo_for_C_51,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Box STATE_VARIABLE_A_0_4,
  MR_Box * STATE_VARIABLE_A_5,
  MR_Box STATE_VARIABLE_B_0_6,
  MR_Box * STATE_VARIABLE_B_7,
  MR_Box STATE_VARIABLE_C_0_8,
  MR_Box * STATE_VARIABLE_C_9)
{
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
  {
    MR_Word XA_31 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word XB_32 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word YA_33;
    MR_Box STATE_VARIABLE_A_1_44;
    MR_Box STATE_VARIABLE_B_1_45;
    MR_Box STATE_VARIABLE_C_1_46;
    MR_Word * AddrYB_52;

    mercury__cord__map_foldl3_node_9_p_0(TypeInfo_for_T1_47, TypeInfo_for_T2_48, TypeInfo_for_A_49, TypeInfo_for_B_50, TypeInfo_for_C_51, P_1, XA_31, &YA_33, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_1_44, STATE_VARIABLE_B_0_6, &STATE_VARIABLE_B_1_45, STATE_VARIABLE_C_0_8, &STATE_VARIABLE_C_1_46);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (YA_33));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrYB_52 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__3_3, 1)));
    mercury__cord__LCMC__pred__map_foldl3_node__1_9_p_0(TypeInfo_for_T1_47, TypeInfo_for_T2_48, TypeInfo_for_A_49, TypeInfo_for_B_50, TypeInfo_for_C_51, P_1, XB_32, AddrYB_52, STATE_VARIABLE_A_1_44, STATE_VARIABLE_A_5, STATE_VARIABLE_B_1_45, STATE_VARIABLE_B_7, STATE_VARIABLE_C_1_46, STATE_VARIABLE_C_9);
  }
  else
  {
    MR_Box XH_11 = (MR_hl_field(0, HeadVar__2_2, 0));
    MR_Word XT_12 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Box YH_13;
    MR_Word YT_14;
    MR_Box STATE_VARIABLE_A_1_24;
    MR_Box STATE_VARIABLE_B_1_25;
    MR_Box STATE_VARIABLE_C_1_26;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_1, 1))));

    func_0(((MR_Box) (P_1)), XH_11, &YH_13, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_1_24, STATE_VARIABLE_B_0_6, &STATE_VARIABLE_B_1_25, STATE_VARIABLE_C_0_8, &STATE_VARIABLE_C_1_26);
    mercury__list__map_foldl3_9_p_1(TypeInfo_for_T1_47, TypeInfo_for_T2_48, TypeInfo_for_A_49, TypeInfo_for_B_50, TypeInfo_for_C_51, P_1, XT_12, &YT_14, STATE_VARIABLE_A_1_24, STATE_VARIABLE_A_5, STATE_VARIABLE_B_1_25, STATE_VARIABLE_B_7, STATE_VARIABLE_C_1_26, STATE_VARIABLE_C_9);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__3_3 = base;
      MR_hl_field(0, base, 0) = YH_13;
      MR_hl_field(0, base, 1) = ((MR_Box) (YT_14));
    }
  }
}

void MR_CALL 
mercury__cord__map_foldl2_7_p_0(
  MR_Word TypeInfo_for_T1_24,
  MR_Word TypeInfo_for_T2_25,
  MR_Word TypeInfo_for_A_26,
  MR_Word TypeInfo_for_B_27,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Box STATE_VARIABLE_A_0_4,
  MR_Box * STATE_VARIABLE_A_5,
  MR_Box STATE_VARIABLE_B_0_6,
  MR_Box * STATE_VARIABLE_B_7)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_B_7 = STATE_VARIABLE_B_0_6;
    *STATE_VARIABLE_A_5 = STATE_VARIABLE_A_0_4;
  }
  else
  {
    MR_Word NX_16 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word NY_17;

    mercury__cord__map_foldl2_node_7_p_0(TypeInfo_for_T1_24, TypeInfo_for_T2_25, TypeInfo_for_A_26, TypeInfo_for_B_27, HeadVar__1_1, NX_16, &NY_17, STATE_VARIABLE_A_0_4, STATE_VARIABLE_A_5, STATE_VARIABLE_B_0_6, STATE_VARIABLE_B_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (NY_17));
    }
  }
}

void MR_CALL 
mercury__cord__LCMC__pred__map_foldl2_node__1_7_p_0(
  MR_Word TypeInfo_for_A_36,
  MR_Word TypeInfo_for_B_37,
  MR_Word TypeInfo_for_C_38,
  MR_Word TypeInfo_for_D_39,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_41,
  MR_Box STATE_VARIABLE_A_0_4,
  MR_Box * STATE_VARIABLE_A_5,
  MR_Box STATE_VARIABLE_B_0_6,
  MR_Box * STATE_VARIABLE_B_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    {
      MR_Word XA_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word XB_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word YA_26;
      MR_Box STATE_VARIABLE_A_1_34;
      MR_Box STATE_VARIABLE_B_1_35;
      MR_Word HeadVar__3_3;
      MR_Word * AddrYB_40;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_41;
      MR_Box next_value_of_STATE_VARIABLE_A_0_4;
      MR_Box next_value_of_STATE_VARIABLE_B_0_6;

      mercury__cord__map_foldl2_node_7_p_0(TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeInfo_for_D_39, P_1, XA_24, &YA_26, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_1_34, STATE_VARIABLE_B_0_6, &STATE_VARIABLE_B_1_35);
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (YA_26));
        MR_hl_field(1, HeadVar__3_3, 1) = NULL;
      }
      AddrYB_40 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, 1)));
      *AddrOfHeadVar__3_41 = HeadVar__3_3;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = XB_25;
      next_value_of_AddrOfHeadVar__3_41 = AddrYB_40;
      next_value_of_STATE_VARIABLE_A_0_4 = STATE_VARIABLE_A_1_34;
      next_value_of_STATE_VARIABLE_B_0_6 = STATE_VARIABLE_B_1_35;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_41 = next_value_of_AddrOfHeadVar__3_41;
      STATE_VARIABLE_A_0_4 = next_value_of_STATE_VARIABLE_A_0_4;
      STATE_VARIABLE_B_0_6 = next_value_of_STATE_VARIABLE_B_0_6;
      continue;
    }
    else
    {
      MR_Box XH_9 = (MR_hl_field(0, HeadVar__2_2, 0));
      MR_Word XT_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
      MR_Box YH_11;
      MR_Word YT_12;
      MR_Box STATE_VARIABLE_A_1_19;
      MR_Box STATE_VARIABLE_B_1_20;
      MR_Word HeadVar__3_42;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_1, 1))));

      func_0(((MR_Box) (P_1)), XH_9, &YH_11, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_1_19, STATE_VARIABLE_B_0_6, &STATE_VARIABLE_B_1_20);
      mercury__list__map_foldl2_7_p_0(TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeInfo_for_D_39, P_1, XT_10, &YT_12, STATE_VARIABLE_A_1_19, STATE_VARIABLE_A_5, STATE_VARIABLE_B_1_20, STATE_VARIABLE_B_7);
      {
        HeadVar__3_42 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, HeadVar__3_42, 0) = YH_11;
        MR_hl_field(0, HeadVar__3_42, 1) = ((MR_Box) (YT_12));
      }
      *AddrOfHeadVar__3_41 = HeadVar__3_42;
    }
    break;
  }
}

void MR_CALL 
mercury__cord__map_foldl2_node_7_p_0(
  MR_Word TypeInfo_for_A_36,
  MR_Word TypeInfo_for_B_37,
  MR_Word TypeInfo_for_C_38,
  MR_Word TypeInfo_for_D_39,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Box STATE_VARIABLE_A_0_4,
  MR_Box * STATE_VARIABLE_A_5,
  MR_Box STATE_VARIABLE_B_0_6,
  MR_Box * STATE_VARIABLE_B_7)
{
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
  {
    MR_Word XA_24 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word XB_25 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word YA_26;
    MR_Box STATE_VARIABLE_A_1_34;
    MR_Box STATE_VARIABLE_B_1_35;
    MR_Word * AddrYB_40;

    mercury__cord__map_foldl2_node_7_p_0(TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeInfo_for_D_39, P_1, XA_24, &YA_26, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_1_34, STATE_VARIABLE_B_0_6, &STATE_VARIABLE_B_1_35);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (YA_26));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrYB_40 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__3_3, 1)));
    mercury__cord__LCMC__pred__map_foldl2_node__1_7_p_0(TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeInfo_for_D_39, P_1, XB_25, AddrYB_40, STATE_VARIABLE_A_1_34, STATE_VARIABLE_A_5, STATE_VARIABLE_B_1_35, STATE_VARIABLE_B_7);
  }
  else
  {
    MR_Box XH_9 = (MR_hl_field(0, HeadVar__2_2, 0));
    MR_Word XT_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Box YH_11;
    MR_Word YT_12;
    MR_Box STATE_VARIABLE_A_1_19;
    MR_Box STATE_VARIABLE_B_1_20;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_1, 1))));

    func_0(((MR_Box) (P_1)), XH_9, &YH_11, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_1_19, STATE_VARIABLE_B_0_6, &STATE_VARIABLE_B_1_20);
    mercury__list__map_foldl2_7_p_0(TypeInfo_for_A_36, TypeInfo_for_B_37, TypeInfo_for_C_38, TypeInfo_for_D_39, P_1, XT_10, &YT_12, STATE_VARIABLE_A_1_19, STATE_VARIABLE_A_5, STATE_VARIABLE_B_1_20, STATE_VARIABLE_B_7);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__3_3 = base;
      MR_hl_field(0, base, 0) = YH_11;
      MR_hl_field(0, base, 1) = ((MR_Box) (YT_12));
    }
  }
}

MR_bool MR_CALL 
mercury__cord__map_foldl_5_p_5(
  MR_Word TypeInfo_for_T1_16,
  MR_Word TypeInfo_for_T2_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Box STATE_VARIABLE_A_0_4,
  MR_Box * STATE_VARIABLE_A_5)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_A_5 = STATE_VARIABLE_A_0_4;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word NX_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word NY_12;

    succeeded = mercury__cord__map_foldl_node_5_p_5(TypeInfo_for_T1_16, TypeInfo_for_T2_17, TypeInfo_for_A_18, HeadVar__1_1, NX_11, &NY_12, STATE_VARIABLE_A_0_4, STATE_VARIABLE_A_5);
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (NY_12));
      }
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__cord__LCMC__pred__map_foldl_node__1_5_p_5(
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word TypeInfo_for_C_27,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_29,
  MR_Box STATE_VARIABLE_A_0_4,
  MR_Box * STATE_VARIABLE_A_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    {
      MR_Word XA_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word XB_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word YA_19;
      MR_Box STATE_VARIABLE_A_1_24;
      MR_Word HeadVar__3_3;
      MR_Word * AddrYB_28;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_29;
      MR_Box next_value_of_STATE_VARIABLE_A_0_4;

      succeeded = mercury__cord__map_foldl_node_5_p_5(TypeInfo_for_A_25, TypeInfo_for_B_26, TypeInfo_for_C_27, P_1, XA_17, &YA_19, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_1_24);
      if (succeeded)
      {
        {
          HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (YA_19));
          MR_hl_field(1, HeadVar__3_3, 1) = NULL;
        }
        AddrYB_28 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, 1)));
        *AddrOfHeadVar__3_29 = HeadVar__3_3;
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = XB_18;
        next_value_of_AddrOfHeadVar__3_29 = AddrYB_28;
        next_value_of_STATE_VARIABLE_A_0_4 = STATE_VARIABLE_A_1_24;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        AddrOfHeadVar__3_29 = next_value_of_AddrOfHeadVar__3_29;
        STATE_VARIABLE_A_0_4 = next_value_of_STATE_VARIABLE_A_0_4;
        continue;
      }
    }
    else
    {
      MR_Box XH_7 = (MR_hl_field(0, HeadVar__2_2, 0));
      MR_Word XT_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
      MR_Box YH_9;
      MR_Word YT_10;
      MR_Box STATE_VARIABLE_A_1_14;
      MR_Word HeadVar__3_30;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_1, 1))));

      succeeded = func_0(((MR_Box) (P_1)), XH_7, &YH_9, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_1_14);
      if (succeeded)
      {
        succeeded = mercury__list__map_foldl_5_p_5(TypeInfo_for_A_25, TypeInfo_for_B_26, TypeInfo_for_C_27, P_1, XT_8, &YT_10, STATE_VARIABLE_A_1_14, STATE_VARIABLE_A_5);
        if (succeeded)
        {
          {
            HeadVar__3_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, HeadVar__3_30, 0) = YH_9;
            MR_hl_field(0, HeadVar__3_30, 1) = ((MR_Box) (YT_10));
          }
          *AddrOfHeadVar__3_29 = HeadVar__3_30;
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__cord__map_foldl_node_5_p_5(
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word TypeInfo_for_C_27,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Box STATE_VARIABLE_A_0_4,
  MR_Box * STATE_VARIABLE_A_5)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
  {
    MR_Word XA_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word XB_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word YA_19;
    MR_Box STATE_VARIABLE_A_1_24;
    MR_Word * AddrYB_28;

    succeeded = mercury__cord__map_foldl_node_5_p_5(TypeInfo_for_A_25, TypeInfo_for_B_26, TypeInfo_for_C_27, P_1, XA_17, &YA_19, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_1_24);
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (YA_19));
        MR_hl_field(1, base, 1) = NULL;
      }
      AddrYB_28 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__3_3, 1)));
      succeeded = mercury__cord__LCMC__pred__map_foldl_node__1_5_p_5(TypeInfo_for_A_25, TypeInfo_for_B_26, TypeInfo_for_C_27, P_1, XB_18, AddrYB_28, STATE_VARIABLE_A_1_24, STATE_VARIABLE_A_5);
    }
  }
  else
  {
    MR_Box XH_7 = (MR_hl_field(0, HeadVar__2_2, 0));
    MR_Word XT_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Box YH_9;
    MR_Word YT_10;
    MR_Box STATE_VARIABLE_A_1_14;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_1, 1))));

    succeeded = func_0(((MR_Box) (P_1)), XH_7, &YH_9, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_1_14);
    if (succeeded)
    {
      succeeded = mercury__list__map_foldl_5_p_5(TypeInfo_for_A_25, TypeInfo_for_B_26, TypeInfo_for_C_27, P_1, XT_8, &YT_10, STATE_VARIABLE_A_1_14, STATE_VARIABLE_A_5);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *HeadVar__3_3 = base;
          MR_hl_field(0, base, 0) = YH_9;
          MR_hl_field(0, base, 1) = ((MR_Box) (YT_10));
        }
        succeeded = MR_TRUE;
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__cord__map_foldl_5_p_4(
  MR_Word TypeInfo_for_T1_16,
  MR_Word TypeInfo_for_T2_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Box STATE_VARIABLE_A_0_4,
  MR_Box * STATE_VARIABLE_A_5)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_A_5 = STATE_VARIABLE_A_0_4;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word NX_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word NY_12;

    succeeded = mercury__cord__map_foldl_node_5_p_4(TypeInfo_for_T1_16, TypeInfo_for_T2_17, TypeInfo_for_A_18, HeadVar__1_1, NX_11, &NY_12, STATE_VARIABLE_A_0_4, STATE_VARIABLE_A_5);
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (NY_12));
      }
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__cord__LCMC__pred__map_foldl_node__1_5_p_4(
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word TypeInfo_for_C_27,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_29,
  MR_Box STATE_VARIABLE_A_0_4,
  MR_Box * STATE_VARIABLE_A_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    {
      MR_Word XA_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word XB_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word YA_19;
      MR_Box STATE_VARIABLE_A_1_24;
      MR_Word HeadVar__3_3;
      MR_Word * AddrYB_28;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_29;
      MR_Box next_value_of_STATE_VARIABLE_A_0_4;

      succeeded = mercury__cord__map_foldl_node_5_p_4(TypeInfo_for_A_25, TypeInfo_for_B_26, TypeInfo_for_C_27, P_1, XA_17, &YA_19, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_1_24);
      if (succeeded)
      {
        {
          HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (YA_19));
          MR_hl_field(1, HeadVar__3_3, 1) = NULL;
        }
        AddrYB_28 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, 1)));
        *AddrOfHeadVar__3_29 = HeadVar__3_3;
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = XB_18;
        next_value_of_AddrOfHeadVar__3_29 = AddrYB_28;
        next_value_of_STATE_VARIABLE_A_0_4 = STATE_VARIABLE_A_1_24;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        AddrOfHeadVar__3_29 = next_value_of_AddrOfHeadVar__3_29;
        STATE_VARIABLE_A_0_4 = next_value_of_STATE_VARIABLE_A_0_4;
        continue;
      }
    }
    else
    {
      MR_Box XH_7 = (MR_hl_field(0, HeadVar__2_2, 0));
      MR_Word XT_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
      MR_Box YH_9;
      MR_Word YT_10;
      MR_Box STATE_VARIABLE_A_1_14;
      MR_Word HeadVar__3_30;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_1, 1))));

      succeeded = func_0(((MR_Box) (P_1)), XH_7, &YH_9, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_1_14);
      if (succeeded)
      {
        succeeded = mercury__list__map_foldl_5_p_4(TypeInfo_for_A_25, TypeInfo_for_B_26, TypeInfo_for_C_27, P_1, XT_8, &YT_10, STATE_VARIABLE_A_1_14, STATE_VARIABLE_A_5);
        if (succeeded)
        {
          {
            HeadVar__3_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, HeadVar__3_30, 0) = YH_9;
            MR_hl_field(0, HeadVar__3_30, 1) = ((MR_Box) (YT_10));
          }
          *AddrOfHeadVar__3_29 = HeadVar__3_30;
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__cord__map_foldl_node_5_p_4(
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word TypeInfo_for_C_27,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Box STATE_VARIABLE_A_0_4,
  MR_Box * STATE_VARIABLE_A_5)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
  {
    MR_Word XA_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word XB_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word YA_19;
    MR_Box STATE_VARIABLE_A_1_24;
    MR_Word * AddrYB_28;

    succeeded = mercury__cord__map_foldl_node_5_p_4(TypeInfo_for_A_25, TypeInfo_for_B_26, TypeInfo_for_C_27, P_1, XA_17, &YA_19, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_1_24);
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (YA_19));
        MR_hl_field(1, base, 1) = NULL;
      }
      AddrYB_28 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__3_3, 1)));
      succeeded = mercury__cord__LCMC__pred__map_foldl_node__1_5_p_4(TypeInfo_for_A_25, TypeInfo_for_B_26, TypeInfo_for_C_27, P_1, XB_18, AddrYB_28, STATE_VARIABLE_A_1_24, STATE_VARIABLE_A_5);
    }
  }
  else
  {
    MR_Box XH_7 = (MR_hl_field(0, HeadVar__2_2, 0));
    MR_Word XT_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Box YH_9;
    MR_Word YT_10;
    MR_Box STATE_VARIABLE_A_1_14;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_1, 1))));

    succeeded = func_0(((MR_Box) (P_1)), XH_7, &YH_9, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_1_14);
    if (succeeded)
    {
      succeeded = mercury__list__map_foldl_5_p_4(TypeInfo_for_A_25, TypeInfo_for_B_26, TypeInfo_for_C_27, P_1, XT_8, &YT_10, STATE_VARIABLE_A_1_14, STATE_VARIABLE_A_5);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *HeadVar__3_3 = base;
          MR_hl_field(0, base, 0) = YH_9;
          MR_hl_field(0, base, 1) = ((MR_Box) (YT_10));
        }
        succeeded = MR_TRUE;
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__cord__map_foldl_5_p_3(
  MR_Word TypeInfo_for_T1_16,
  MR_Word TypeInfo_for_T2_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Box STATE_VARIABLE_A_0_4,
  MR_Box * STATE_VARIABLE_A_5)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_A_5 = STATE_VARIABLE_A_0_4;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word NX_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word NY_12;

    succeeded = mercury__cord__map_foldl_node_5_p_3(TypeInfo_for_T1_16, TypeInfo_for_T2_17, TypeInfo_for_A_18, HeadVar__1_1, NX_11, &NY_12, STATE_VARIABLE_A_0_4, STATE_VARIABLE_A_5);
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (NY_12));
      }
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__cord__LCMC__pred__map_foldl_node__1_5_p_3(
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word TypeInfo_for_C_27,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_29,
  MR_Box STATE_VARIABLE_A_0_4,
  MR_Box * STATE_VARIABLE_A_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    {
      MR_Word XA_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word XB_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word YA_19;
      MR_Box STATE_VARIABLE_A_1_24;
      MR_Word HeadVar__3_3;
      MR_Word * AddrYB_28;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_29;
      MR_Box next_value_of_STATE_VARIABLE_A_0_4;

      succeeded = mercury__cord__map_foldl_node_5_p_3(TypeInfo_for_A_25, TypeInfo_for_B_26, TypeInfo_for_C_27, P_1, XA_17, &YA_19, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_1_24);
      if (succeeded)
      {
        {
          HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (YA_19));
          MR_hl_field(1, HeadVar__3_3, 1) = NULL;
        }
        AddrYB_28 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, 1)));
        *AddrOfHeadVar__3_29 = HeadVar__3_3;
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = XB_18;
        next_value_of_AddrOfHeadVar__3_29 = AddrYB_28;
        next_value_of_STATE_VARIABLE_A_0_4 = STATE_VARIABLE_A_1_24;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        AddrOfHeadVar__3_29 = next_value_of_AddrOfHeadVar__3_29;
        STATE_VARIABLE_A_0_4 = next_value_of_STATE_VARIABLE_A_0_4;
        continue;
      }
    }
    else
    {
      MR_Box XH_7 = (MR_hl_field(0, HeadVar__2_2, 0));
      MR_Word XT_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
      MR_Box YH_9;
      MR_Word YT_10;
      MR_Box STATE_VARIABLE_A_1_14;
      MR_Word HeadVar__3_30;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_1, 1))));

      succeeded = func_0(((MR_Box) (P_1)), XH_7, &YH_9, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_1_14);
      if (succeeded)
      {
        succeeded = mercury__list__map_foldl_5_p_3(TypeInfo_for_A_25, TypeInfo_for_B_26, TypeInfo_for_C_27, P_1, XT_8, &YT_10, STATE_VARIABLE_A_1_14, STATE_VARIABLE_A_5);
        if (succeeded)
        {
          {
            HeadVar__3_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, HeadVar__3_30, 0) = YH_9;
            MR_hl_field(0, HeadVar__3_30, 1) = ((MR_Box) (YT_10));
          }
          *AddrOfHeadVar__3_29 = HeadVar__3_30;
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__cord__map_foldl_node_5_p_3(
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word TypeInfo_for_C_27,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Box STATE_VARIABLE_A_0_4,
  MR_Box * STATE_VARIABLE_A_5)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
  {
    MR_Word XA_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word XB_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word YA_19;
    MR_Box STATE_VARIABLE_A_1_24;
    MR_Word * AddrYB_28;

    succeeded = mercury__cord__map_foldl_node_5_p_3(TypeInfo_for_A_25, TypeInfo_for_B_26, TypeInfo_for_C_27, P_1, XA_17, &YA_19, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_1_24);
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (YA_19));
        MR_hl_field(1, base, 1) = NULL;
      }
      AddrYB_28 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__3_3, 1)));
      succeeded = mercury__cord__LCMC__pred__map_foldl_node__1_5_p_3(TypeInfo_for_A_25, TypeInfo_for_B_26, TypeInfo_for_C_27, P_1, XB_18, AddrYB_28, STATE_VARIABLE_A_1_24, STATE_VARIABLE_A_5);
    }
  }
  else
  {
    MR_Box XH_7 = (MR_hl_field(0, HeadVar__2_2, 0));
    MR_Word XT_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Box YH_9;
    MR_Word YT_10;
    MR_Box STATE_VARIABLE_A_1_14;
    MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_1, 1))));

    succeeded = func_0(((MR_Box) (P_1)), XH_7, &YH_9, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_1_14);
    if (succeeded)
    {
      succeeded = mercury__list__map_foldl_5_p_3(TypeInfo_for_A_25, TypeInfo_for_B_26, TypeInfo_for_C_27, P_1, XT_8, &YT_10, STATE_VARIABLE_A_1_14, STATE_VARIABLE_A_5);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          *HeadVar__3_3 = base;
          MR_hl_field(0, base, 0) = YH_9;
          MR_hl_field(0, base, 1) = ((MR_Box) (YT_10));
        }
        succeeded = MR_TRUE;
      }
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__cord__map_foldl_5_p_2(
  MR_Word TypeInfo_for_T1_16,
  MR_Word TypeInfo_for_T2_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Box STATE_VARIABLE_A_0_4,
  MR_Box * STATE_VARIABLE_A_5)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_A_5 = STATE_VARIABLE_A_0_4;
  }
  else
  {
    MR_Word NX_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word NY_12;

    mercury__cord__map_foldl_node_5_p_2(TypeInfo_for_T1_16, TypeInfo_for_T2_17, TypeInfo_for_A_18, HeadVar__1_1, NX_11, &NY_12, STATE_VARIABLE_A_0_4, STATE_VARIABLE_A_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (NY_12));
    }
  }
}

void MR_CALL 
mercury__cord__LCMC__pred__map_foldl_node__1_5_p_2(
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word TypeInfo_for_C_27,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_29,
  MR_Box STATE_VARIABLE_A_0_4,
  MR_Box * STATE_VARIABLE_A_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    {
      MR_Word XA_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word XB_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word YA_19;
      MR_Box STATE_VARIABLE_A_1_24;
      MR_Word HeadVar__3_3;
      MR_Word * AddrYB_28;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_29;
      MR_Box next_value_of_STATE_VARIABLE_A_0_4;

      mercury__cord__map_foldl_node_5_p_2(TypeInfo_for_A_25, TypeInfo_for_B_26, TypeInfo_for_C_27, P_1, XA_17, &YA_19, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_1_24);
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (YA_19));
        MR_hl_field(1, HeadVar__3_3, 1) = NULL;
      }
      AddrYB_28 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, 1)));
      *AddrOfHeadVar__3_29 = HeadVar__3_3;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = XB_18;
      next_value_of_AddrOfHeadVar__3_29 = AddrYB_28;
      next_value_of_STATE_VARIABLE_A_0_4 = STATE_VARIABLE_A_1_24;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_29 = next_value_of_AddrOfHeadVar__3_29;
      STATE_VARIABLE_A_0_4 = next_value_of_STATE_VARIABLE_A_0_4;
      continue;
    }
    else
    {
      MR_Box XH_7 = (MR_hl_field(0, HeadVar__2_2, 0));
      MR_Word XT_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
      MR_Box YH_9;
      MR_Word YT_10;
      MR_Box STATE_VARIABLE_A_1_14;
      MR_Word HeadVar__3_30;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_1, 1))));

      func_0(((MR_Box) (P_1)), XH_7, &YH_9, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_1_14);
      mercury__list__map_foldl_5_p_2(TypeInfo_for_A_25, TypeInfo_for_B_26, TypeInfo_for_C_27, P_1, XT_8, &YT_10, STATE_VARIABLE_A_1_14, STATE_VARIABLE_A_5);
      {
        HeadVar__3_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, HeadVar__3_30, 0) = YH_9;
        MR_hl_field(0, HeadVar__3_30, 1) = ((MR_Box) (YT_10));
      }
      *AddrOfHeadVar__3_29 = HeadVar__3_30;
    }
    break;
  }
}

void MR_CALL 
mercury__cord__map_foldl_node_5_p_2(
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word TypeInfo_for_C_27,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Box STATE_VARIABLE_A_0_4,
  MR_Box * STATE_VARIABLE_A_5)
{
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
  {
    MR_Word XA_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word XB_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word YA_19;
    MR_Box STATE_VARIABLE_A_1_24;
    MR_Word * AddrYB_28;

    mercury__cord__map_foldl_node_5_p_2(TypeInfo_for_A_25, TypeInfo_for_B_26, TypeInfo_for_C_27, P_1, XA_17, &YA_19, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_1_24);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (YA_19));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrYB_28 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__3_3, 1)));
    mercury__cord__LCMC__pred__map_foldl_node__1_5_p_2(TypeInfo_for_A_25, TypeInfo_for_B_26, TypeInfo_for_C_27, P_1, XB_18, AddrYB_28, STATE_VARIABLE_A_1_24, STATE_VARIABLE_A_5);
  }
  else
  {
    MR_Box XH_7 = (MR_hl_field(0, HeadVar__2_2, 0));
    MR_Word XT_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Box YH_9;
    MR_Word YT_10;
    MR_Box STATE_VARIABLE_A_1_14;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_1, 1))));

    func_0(((MR_Box) (P_1)), XH_7, &YH_9, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_1_14);
    mercury__list__map_foldl_5_p_2(TypeInfo_for_A_25, TypeInfo_for_B_26, TypeInfo_for_C_27, P_1, XT_8, &YT_10, STATE_VARIABLE_A_1_14, STATE_VARIABLE_A_5);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__3_3 = base;
      MR_hl_field(0, base, 0) = YH_9;
      MR_hl_field(0, base, 1) = ((MR_Box) (YT_10));
    }
  }
}

void MR_CALL 
mercury__cord__map_foldl_5_p_1(
  MR_Word TypeInfo_for_T1_16,
  MR_Word TypeInfo_for_T2_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Box STATE_VARIABLE_A_0_4,
  MR_Box * STATE_VARIABLE_A_5)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_A_5 = STATE_VARIABLE_A_0_4;
  }
  else
  {
    MR_Word NX_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word NY_12;

    mercury__cord__map_foldl_node_5_p_1(TypeInfo_for_T1_16, TypeInfo_for_T2_17, TypeInfo_for_A_18, HeadVar__1_1, NX_11, &NY_12, STATE_VARIABLE_A_0_4, STATE_VARIABLE_A_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (NY_12));
    }
  }
}

void MR_CALL 
mercury__cord__LCMC__pred__map_foldl_node__1_5_p_1(
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word TypeInfo_for_C_27,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_29,
  MR_Box STATE_VARIABLE_A_0_4,
  MR_Box * STATE_VARIABLE_A_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    {
      MR_Word XA_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word XB_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word YA_19;
      MR_Box STATE_VARIABLE_A_1_24;
      MR_Word HeadVar__3_3;
      MR_Word * AddrYB_28;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_29;
      MR_Box next_value_of_STATE_VARIABLE_A_0_4;

      mercury__cord__map_foldl_node_5_p_1(TypeInfo_for_A_25, TypeInfo_for_B_26, TypeInfo_for_C_27, P_1, XA_17, &YA_19, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_1_24);
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (YA_19));
        MR_hl_field(1, HeadVar__3_3, 1) = NULL;
      }
      AddrYB_28 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, 1)));
      *AddrOfHeadVar__3_29 = HeadVar__3_3;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = XB_18;
      next_value_of_AddrOfHeadVar__3_29 = AddrYB_28;
      next_value_of_STATE_VARIABLE_A_0_4 = STATE_VARIABLE_A_1_24;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_29 = next_value_of_AddrOfHeadVar__3_29;
      STATE_VARIABLE_A_0_4 = next_value_of_STATE_VARIABLE_A_0_4;
      continue;
    }
    else
    {
      MR_Box XH_7 = (MR_hl_field(0, HeadVar__2_2, 0));
      MR_Word XT_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
      MR_Box YH_9;
      MR_Word YT_10;
      MR_Box STATE_VARIABLE_A_1_14;
      MR_Word HeadVar__3_30;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_1, 1))));

      func_0(((MR_Box) (P_1)), XH_7, &YH_9, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_1_14);
      mercury__list__map_foldl_5_p_1(TypeInfo_for_A_25, TypeInfo_for_B_26, TypeInfo_for_C_27, P_1, XT_8, &YT_10, STATE_VARIABLE_A_1_14, STATE_VARIABLE_A_5);
      {
        HeadVar__3_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, HeadVar__3_30, 0) = YH_9;
        MR_hl_field(0, HeadVar__3_30, 1) = ((MR_Box) (YT_10));
      }
      *AddrOfHeadVar__3_29 = HeadVar__3_30;
    }
    break;
  }
}

void MR_CALL 
mercury__cord__map_foldl_node_5_p_1(
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word TypeInfo_for_C_27,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Box STATE_VARIABLE_A_0_4,
  MR_Box * STATE_VARIABLE_A_5)
{
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
  {
    MR_Word XA_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word XB_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word YA_19;
    MR_Box STATE_VARIABLE_A_1_24;
    MR_Word * AddrYB_28;

    mercury__cord__map_foldl_node_5_p_1(TypeInfo_for_A_25, TypeInfo_for_B_26, TypeInfo_for_C_27, P_1, XA_17, &YA_19, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_1_24);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (YA_19));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrYB_28 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__3_3, 1)));
    mercury__cord__LCMC__pred__map_foldl_node__1_5_p_1(TypeInfo_for_A_25, TypeInfo_for_B_26, TypeInfo_for_C_27, P_1, XB_18, AddrYB_28, STATE_VARIABLE_A_1_24, STATE_VARIABLE_A_5);
  }
  else
  {
    MR_Box XH_7 = (MR_hl_field(0, HeadVar__2_2, 0));
    MR_Word XT_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Box YH_9;
    MR_Word YT_10;
    MR_Box STATE_VARIABLE_A_1_14;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_1, 1))));

    func_0(((MR_Box) (P_1)), XH_7, &YH_9, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_1_14);
    mercury__list__map_foldl_5_p_1(TypeInfo_for_A_25, TypeInfo_for_B_26, TypeInfo_for_C_27, P_1, XT_8, &YT_10, STATE_VARIABLE_A_1_14, STATE_VARIABLE_A_5);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__3_3 = base;
      MR_hl_field(0, base, 0) = YH_9;
      MR_hl_field(0, base, 1) = ((MR_Box) (YT_10));
    }
  }
}

void MR_CALL 
mercury__cord__map_foldl_5_p_0(
  MR_Word TypeInfo_for_T1_16,
  MR_Word TypeInfo_for_T2_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Box STATE_VARIABLE_A_0_4,
  MR_Box * STATE_VARIABLE_A_5)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *STATE_VARIABLE_A_5 = STATE_VARIABLE_A_0_4;
  }
  else
  {
    MR_Word NX_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word NY_12;

    mercury__cord__map_foldl_node_5_p_0(TypeInfo_for_T1_16, TypeInfo_for_T2_17, TypeInfo_for_A_18, HeadVar__1_1, NX_11, &NY_12, STATE_VARIABLE_A_0_4, STATE_VARIABLE_A_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (NY_12));
    }
  }
}

void MR_CALL 
mercury__cord__LCMC__pred__map_foldl_node__1_5_p_0(
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word TypeInfo_for_C_27,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_29,
  MR_Box STATE_VARIABLE_A_0_4,
  MR_Box * STATE_VARIABLE_A_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    {
      MR_Word XA_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word XB_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word YA_19;
      MR_Box STATE_VARIABLE_A_1_24;
      MR_Word HeadVar__3_3;
      MR_Word * AddrYB_28;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_29;
      MR_Box next_value_of_STATE_VARIABLE_A_0_4;

      mercury__cord__map_foldl_node_5_p_0(TypeInfo_for_A_25, TypeInfo_for_B_26, TypeInfo_for_C_27, P_1, XA_17, &YA_19, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_1_24);
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (YA_19));
        MR_hl_field(1, HeadVar__3_3, 1) = NULL;
      }
      AddrYB_28 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, 1)));
      *AddrOfHeadVar__3_29 = HeadVar__3_3;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = XB_18;
      next_value_of_AddrOfHeadVar__3_29 = AddrYB_28;
      next_value_of_STATE_VARIABLE_A_0_4 = STATE_VARIABLE_A_1_24;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_29 = next_value_of_AddrOfHeadVar__3_29;
      STATE_VARIABLE_A_0_4 = next_value_of_STATE_VARIABLE_A_0_4;
      continue;
    }
    else
    {
      MR_Box XH_7 = (MR_hl_field(0, HeadVar__2_2, 0));
      MR_Word XT_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
      MR_Box YH_9;
      MR_Word YT_10;
      MR_Box STATE_VARIABLE_A_1_14;
      MR_Word HeadVar__3_30;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_1, 1))));

      func_0(((MR_Box) (P_1)), XH_7, &YH_9, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_1_14);
      mercury__list__map_foldl_5_p_0(TypeInfo_for_A_25, TypeInfo_for_B_26, TypeInfo_for_C_27, P_1, XT_8, &YT_10, STATE_VARIABLE_A_1_14, STATE_VARIABLE_A_5);
      {
        HeadVar__3_30 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, HeadVar__3_30, 0) = YH_9;
        MR_hl_field(0, HeadVar__3_30, 1) = ((MR_Box) (YT_10));
      }
      *AddrOfHeadVar__3_29 = HeadVar__3_30;
    }
    break;
  }
}

void MR_CALL 
mercury__cord__map_foldl_node_5_p_0(
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word TypeInfo_for_C_27,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Box STATE_VARIABLE_A_0_4,
  MR_Box * STATE_VARIABLE_A_5)
{
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
  {
    MR_Word XA_17 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word XB_18 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word YA_19;
    MR_Box STATE_VARIABLE_A_1_24;
    MR_Word * AddrYB_28;

    mercury__cord__map_foldl_node_5_p_0(TypeInfo_for_A_25, TypeInfo_for_B_26, TypeInfo_for_C_27, P_1, XA_17, &YA_19, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_1_24);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (YA_19));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrYB_28 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__3_3, 1)));
    mercury__cord__LCMC__pred__map_foldl_node__1_5_p_0(TypeInfo_for_A_25, TypeInfo_for_B_26, TypeInfo_for_C_27, P_1, XB_18, AddrYB_28, STATE_VARIABLE_A_1_24, STATE_VARIABLE_A_5);
  }
  else
  {
    MR_Box XH_7 = (MR_hl_field(0, HeadVar__2_2, 0));
    MR_Word XT_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 1))));
    MR_Box YH_9;
    MR_Word YT_10;
    MR_Box STATE_VARIABLE_A_1_14;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, P_1, 1))));

    func_0(((MR_Box) (P_1)), XH_7, &YH_9, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_1_14);
    mercury__list__map_foldl_5_p_0(TypeInfo_for_A_25, TypeInfo_for_B_26, TypeInfo_for_C_27, P_1, XT_8, &YT_10, STATE_VARIABLE_A_1_14, STATE_VARIABLE_A_5);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__3_3 = base;
      MR_hl_field(0, base, 0) = YH_9;
      MR_hl_field(0, base, 1) = ((MR_Box) (YT_10));
    }
  }
}

MR_bool MR_CALL 
mercury__cord__foldr3_8_p_5(
  MR_Word TypeInfo_for_T_31,
  MR_Word TypeInfo_for_A_32,
  MR_Word TypeInfo_for_B_33,
  MR_Word TypeInfo_for_C_34,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_3,
  MR_Box * STATE_VARIABLE_Acc1_4,
  MR_Box STATE_VARIABLE_Acc2_0_5,
  MR_Box * STATE_VARIABLE_Acc2_6,
  MR_Box STATE_VARIABLE_Acc3_0_7,
  MR_Box * STATE_VARIABLE_Acc3_8)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_Acc3_8 = STATE_VARIABLE_Acc3_0_7;
    *STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_0_5;
    *STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_0_3;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word N_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));

    succeeded = mercury__cord__foldr3_node_9_p_5(TypeInfo_for_T_31, TypeInfo_for_A_32, TypeInfo_for_B_33, TypeInfo_for_C_34, HeadVar__1_1, N_20, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Acc1_0_3, STATE_VARIABLE_Acc1_4, STATE_VARIABLE_Acc2_0_5, STATE_VARIABLE_Acc2_6, STATE_VARIABLE_Acc3_0_7, STATE_VARIABLE_Acc3_8);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__cord__foldr3_node_9_p_5(
  MR_Word TypeInfo_for_T_36,
  MR_Word TypeInfo_for_A_37,
  MR_Word TypeInfo_for_B_38,
  MR_Word TypeInfo_for_C_39,
  MR_Word P_10,
  MR_Word C_11,
  MR_Word Cs_12,
  MR_Box STATE_VARIABLE_Acc1_0_22,
  MR_Box * STATE_VARIABLE_Acc1_23,
  MR_Box STATE_VARIABLE_Acc2_0_24,
  MR_Box * STATE_VARIABLE_Acc2_25,
  MR_Box STATE_VARIABLE_Acc3_0_26,
  MR_Box * STATE_VARIABLE_Acc3_27)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) C_11)) == (MR_Integer) 1))
    {
      MR_Word A_20 = ((MR_Word) ((MR_hl_field(1, C_11, 0))));
      MR_Word B_21 = ((MR_Word) ((MR_hl_field(1, C_11, 1))));
      MR_Word Var_35;
      MR_Word next_value_of_C_11;
      MR_Word next_value_of_Cs_12;

      {
        Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_35, 0) = ((MR_Box) (A_20));
        MR_hl_field(1, Var_35, 1) = ((MR_Box) (Cs_12));
      }
      // direct tailcall eliminated
      ;
      next_value_of_C_11 = B_21;
      next_value_of_Cs_12 = Var_35;
      C_11 = next_value_of_C_11;
      Cs_12 = next_value_of_Cs_12;
      continue;
    }
    else
    {
      MR_Box H_16 = (MR_hl_field(0, C_11, 0));
      MR_Word T_17 = ((MR_Word) ((MR_hl_field(0, C_11, 1))));
      MR_Word Var_28;
      MR_Box STATE_VARIABLE_Acc1_1_29;
      MR_Box STATE_VARIABLE_Acc2_1_30;
      MR_Box STATE_VARIABLE_Acc3_1_31;

      {
        Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_28, 0) = H_16;
        MR_hl_field(1, Var_28, 1) = ((MR_Box) (T_17));
      }
      succeeded = mercury__list__foldr3_8_p_5(TypeInfo_for_T_36, TypeInfo_for_A_37, TypeInfo_for_B_38, TypeInfo_for_C_39, P_10, Var_28, STATE_VARIABLE_Acc1_0_22, &STATE_VARIABLE_Acc1_1_29, STATE_VARIABLE_Acc2_0_24, &STATE_VARIABLE_Acc2_1_30, STATE_VARIABLE_Acc3_0_26, &STATE_VARIABLE_Acc3_1_31);
      if (succeeded)
      {
        if ((Cs_12 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          *STATE_VARIABLE_Acc1_23 = STATE_VARIABLE_Acc1_1_29;
          *STATE_VARIABLE_Acc2_25 = STATE_VARIABLE_Acc2_1_30;
          *STATE_VARIABLE_Acc3_27 = STATE_VARIABLE_Acc3_1_31;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word Y_18 = ((MR_Word) ((MR_hl_field(1, Cs_12, 0))));
          MR_Word Ys_19 = ((MR_Word) ((MR_hl_field(1, Cs_12, 1))));
          MR_Word next_value_of_C_11 = Y_18;
          MR_Word next_value_of_Cs_12 = Ys_19;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_22 = STATE_VARIABLE_Acc1_1_29;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_24 = STATE_VARIABLE_Acc2_1_30;
          MR_Box next_value_of_STATE_VARIABLE_Acc3_0_26 = STATE_VARIABLE_Acc3_1_31;

          // direct tailcall eliminated
          ;
          C_11 = next_value_of_C_11;
          Cs_12 = next_value_of_Cs_12;
          STATE_VARIABLE_Acc1_0_22 = next_value_of_STATE_VARIABLE_Acc1_0_22;
          STATE_VARIABLE_Acc2_0_24 = next_value_of_STATE_VARIABLE_Acc2_0_24;
          STATE_VARIABLE_Acc3_0_26 = next_value_of_STATE_VARIABLE_Acc3_0_26;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__cord__foldr3_8_p_4(
  MR_Word TypeInfo_for_T_31,
  MR_Word TypeInfo_for_A_32,
  MR_Word TypeInfo_for_B_33,
  MR_Word TypeInfo_for_C_34,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_3,
  MR_Box * STATE_VARIABLE_Acc1_4,
  MR_Box STATE_VARIABLE_Acc2_0_5,
  MR_Box * STATE_VARIABLE_Acc2_6,
  MR_Box STATE_VARIABLE_Acc3_0_7,
  MR_Box * STATE_VARIABLE_Acc3_8)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_Acc3_8 = STATE_VARIABLE_Acc3_0_7;
    *STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_0_5;
    *STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_0_3;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word N_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));

    succeeded = mercury__cord__foldr3_node_9_p_4(TypeInfo_for_T_31, TypeInfo_for_A_32, TypeInfo_for_B_33, TypeInfo_for_C_34, HeadVar__1_1, N_20, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Acc1_0_3, STATE_VARIABLE_Acc1_4, STATE_VARIABLE_Acc2_0_5, STATE_VARIABLE_Acc2_6, STATE_VARIABLE_Acc3_0_7, STATE_VARIABLE_Acc3_8);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__cord__foldr3_node_9_p_4(
  MR_Word TypeInfo_for_T_36,
  MR_Word TypeInfo_for_A_37,
  MR_Word TypeInfo_for_B_38,
  MR_Word TypeInfo_for_C_39,
  MR_Word P_10,
  MR_Word C_11,
  MR_Word Cs_12,
  MR_Box STATE_VARIABLE_Acc1_0_22,
  MR_Box * STATE_VARIABLE_Acc1_23,
  MR_Box STATE_VARIABLE_Acc2_0_24,
  MR_Box * STATE_VARIABLE_Acc2_25,
  MR_Box STATE_VARIABLE_Acc3_0_26,
  MR_Box * STATE_VARIABLE_Acc3_27)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) C_11)) == (MR_Integer) 1))
    {
      MR_Word A_20 = ((MR_Word) ((MR_hl_field(1, C_11, 0))));
      MR_Word B_21 = ((MR_Word) ((MR_hl_field(1, C_11, 1))));
      MR_Word Var_35;
      MR_Word next_value_of_C_11;
      MR_Word next_value_of_Cs_12;

      {
        Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_35, 0) = ((MR_Box) (A_20));
        MR_hl_field(1, Var_35, 1) = ((MR_Box) (Cs_12));
      }
      // direct tailcall eliminated
      ;
      next_value_of_C_11 = B_21;
      next_value_of_Cs_12 = Var_35;
      C_11 = next_value_of_C_11;
      Cs_12 = next_value_of_Cs_12;
      continue;
    }
    else
    {
      MR_Box H_16 = (MR_hl_field(0, C_11, 0));
      MR_Word T_17 = ((MR_Word) ((MR_hl_field(0, C_11, 1))));
      MR_Word Var_28;
      MR_Box STATE_VARIABLE_Acc1_1_29;
      MR_Box STATE_VARIABLE_Acc2_1_30;
      MR_Box STATE_VARIABLE_Acc3_1_31;

      {
        Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_28, 0) = H_16;
        MR_hl_field(1, Var_28, 1) = ((MR_Box) (T_17));
      }
      succeeded = mercury__list__foldr3_8_p_4(TypeInfo_for_T_36, TypeInfo_for_A_37, TypeInfo_for_B_38, TypeInfo_for_C_39, P_10, Var_28, STATE_VARIABLE_Acc1_0_22, &STATE_VARIABLE_Acc1_1_29, STATE_VARIABLE_Acc2_0_24, &STATE_VARIABLE_Acc2_1_30, STATE_VARIABLE_Acc3_0_26, &STATE_VARIABLE_Acc3_1_31);
      if (succeeded)
      {
        if ((Cs_12 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          *STATE_VARIABLE_Acc1_23 = STATE_VARIABLE_Acc1_1_29;
          *STATE_VARIABLE_Acc2_25 = STATE_VARIABLE_Acc2_1_30;
          *STATE_VARIABLE_Acc3_27 = STATE_VARIABLE_Acc3_1_31;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word Y_18 = ((MR_Word) ((MR_hl_field(1, Cs_12, 0))));
          MR_Word Ys_19 = ((MR_Word) ((MR_hl_field(1, Cs_12, 1))));
          MR_Word next_value_of_C_11 = Y_18;
          MR_Word next_value_of_Cs_12 = Ys_19;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_22 = STATE_VARIABLE_Acc1_1_29;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_24 = STATE_VARIABLE_Acc2_1_30;
          MR_Box next_value_of_STATE_VARIABLE_Acc3_0_26 = STATE_VARIABLE_Acc3_1_31;

          // direct tailcall eliminated
          ;
          C_11 = next_value_of_C_11;
          Cs_12 = next_value_of_Cs_12;
          STATE_VARIABLE_Acc1_0_22 = next_value_of_STATE_VARIABLE_Acc1_0_22;
          STATE_VARIABLE_Acc2_0_24 = next_value_of_STATE_VARIABLE_Acc2_0_24;
          STATE_VARIABLE_Acc3_0_26 = next_value_of_STATE_VARIABLE_Acc3_0_26;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__cord__foldr3_8_p_3(
  MR_Word TypeInfo_for_T_31,
  MR_Word TypeInfo_for_A_32,
  MR_Word TypeInfo_for_B_33,
  MR_Word TypeInfo_for_C_34,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_3,
  MR_Box * STATE_VARIABLE_Acc1_4,
  MR_Box STATE_VARIABLE_Acc2_0_5,
  MR_Box * STATE_VARIABLE_Acc2_6,
  MR_Box STATE_VARIABLE_Acc3_0_7,
  MR_Box * STATE_VARIABLE_Acc3_8)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_Acc3_8 = STATE_VARIABLE_Acc3_0_7;
    *STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_0_5;
    *STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_0_3;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word N_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));

    succeeded = mercury__cord__foldr3_node_9_p_3(TypeInfo_for_T_31, TypeInfo_for_A_32, TypeInfo_for_B_33, TypeInfo_for_C_34, HeadVar__1_1, N_20, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Acc1_0_3, STATE_VARIABLE_Acc1_4, STATE_VARIABLE_Acc2_0_5, STATE_VARIABLE_Acc2_6, STATE_VARIABLE_Acc3_0_7, STATE_VARIABLE_Acc3_8);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__cord__foldr3_node_9_p_3(
  MR_Word TypeInfo_for_T_36,
  MR_Word TypeInfo_for_A_37,
  MR_Word TypeInfo_for_B_38,
  MR_Word TypeInfo_for_C_39,
  MR_Word P_10,
  MR_Word C_11,
  MR_Word Cs_12,
  MR_Box STATE_VARIABLE_Acc1_0_22,
  MR_Box * STATE_VARIABLE_Acc1_23,
  MR_Box STATE_VARIABLE_Acc2_0_24,
  MR_Box * STATE_VARIABLE_Acc2_25,
  MR_Box STATE_VARIABLE_Acc3_0_26,
  MR_Box * STATE_VARIABLE_Acc3_27)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) C_11)) == (MR_Integer) 1))
    {
      MR_Word A_20 = ((MR_Word) ((MR_hl_field(1, C_11, 0))));
      MR_Word B_21 = ((MR_Word) ((MR_hl_field(1, C_11, 1))));
      MR_Word Var_35;
      MR_Word next_value_of_C_11;
      MR_Word next_value_of_Cs_12;

      {
        Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_35, 0) = ((MR_Box) (A_20));
        MR_hl_field(1, Var_35, 1) = ((MR_Box) (Cs_12));
      }
      // direct tailcall eliminated
      ;
      next_value_of_C_11 = B_21;
      next_value_of_Cs_12 = Var_35;
      C_11 = next_value_of_C_11;
      Cs_12 = next_value_of_Cs_12;
      continue;
    }
    else
    {
      MR_Box H_16 = (MR_hl_field(0, C_11, 0));
      MR_Word T_17 = ((MR_Word) ((MR_hl_field(0, C_11, 1))));
      MR_Word Var_28;
      MR_Box STATE_VARIABLE_Acc1_1_29;
      MR_Box STATE_VARIABLE_Acc2_1_30;
      MR_Box STATE_VARIABLE_Acc3_1_31;

      {
        Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_28, 0) = H_16;
        MR_hl_field(1, Var_28, 1) = ((MR_Box) (T_17));
      }
      succeeded = mercury__list__foldr3_8_p_3(TypeInfo_for_T_36, TypeInfo_for_A_37, TypeInfo_for_B_38, TypeInfo_for_C_39, P_10, Var_28, STATE_VARIABLE_Acc1_0_22, &STATE_VARIABLE_Acc1_1_29, STATE_VARIABLE_Acc2_0_24, &STATE_VARIABLE_Acc2_1_30, STATE_VARIABLE_Acc3_0_26, &STATE_VARIABLE_Acc3_1_31);
      if (succeeded)
      {
        if ((Cs_12 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          *STATE_VARIABLE_Acc1_23 = STATE_VARIABLE_Acc1_1_29;
          *STATE_VARIABLE_Acc2_25 = STATE_VARIABLE_Acc2_1_30;
          *STATE_VARIABLE_Acc3_27 = STATE_VARIABLE_Acc3_1_31;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word Y_18 = ((MR_Word) ((MR_hl_field(1, Cs_12, 0))));
          MR_Word Ys_19 = ((MR_Word) ((MR_hl_field(1, Cs_12, 1))));
          MR_Word next_value_of_C_11 = Y_18;
          MR_Word next_value_of_Cs_12 = Ys_19;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_22 = STATE_VARIABLE_Acc1_1_29;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_24 = STATE_VARIABLE_Acc2_1_30;
          MR_Box next_value_of_STATE_VARIABLE_Acc3_0_26 = STATE_VARIABLE_Acc3_1_31;

          // direct tailcall eliminated
          ;
          C_11 = next_value_of_C_11;
          Cs_12 = next_value_of_Cs_12;
          STATE_VARIABLE_Acc1_0_22 = next_value_of_STATE_VARIABLE_Acc1_0_22;
          STATE_VARIABLE_Acc2_0_24 = next_value_of_STATE_VARIABLE_Acc2_0_24;
          STATE_VARIABLE_Acc3_0_26 = next_value_of_STATE_VARIABLE_Acc3_0_26;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__cord__foldr3_8_p_2(
  MR_Word TypeInfo_for_T_31,
  MR_Word TypeInfo_for_A_32,
  MR_Word TypeInfo_for_B_33,
  MR_Word TypeInfo_for_C_34,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_3,
  MR_Box * STATE_VARIABLE_Acc1_4,
  MR_Box STATE_VARIABLE_Acc2_0_5,
  MR_Box * STATE_VARIABLE_Acc2_6,
  MR_Box STATE_VARIABLE_Acc3_0_7,
  MR_Box * STATE_VARIABLE_Acc3_8)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_Acc3_8 = STATE_VARIABLE_Acc3_0_7;
    *STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_0_5;
    *STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_0_3;
  }
  else
  {
    MR_Word N_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));

    mercury__cord__foldr3_node_9_p_2(TypeInfo_for_T_31, TypeInfo_for_A_32, TypeInfo_for_B_33, TypeInfo_for_C_34, HeadVar__1_1, N_20, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Acc1_0_3, STATE_VARIABLE_Acc1_4, STATE_VARIABLE_Acc2_0_5, STATE_VARIABLE_Acc2_6, STATE_VARIABLE_Acc3_0_7, STATE_VARIABLE_Acc3_8);
  }
}

void MR_CALL 
mercury__cord__foldr3_node_9_p_2(
  MR_Word TypeInfo_for_T_36,
  MR_Word TypeInfo_for_A_37,
  MR_Word TypeInfo_for_B_38,
  MR_Word TypeInfo_for_C_39,
  MR_Word P_10,
  MR_Word C_11,
  MR_Word Cs_12,
  MR_Box STATE_VARIABLE_Acc1_0_22,
  MR_Box * STATE_VARIABLE_Acc1_23,
  MR_Box STATE_VARIABLE_Acc2_0_24,
  MR_Box * STATE_VARIABLE_Acc2_25,
  MR_Box STATE_VARIABLE_Acc3_0_26,
  MR_Box * STATE_VARIABLE_Acc3_27)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) C_11)) == (MR_Integer) 1))
    {
      MR_Word A_20 = ((MR_Word) ((MR_hl_field(1, C_11, 0))));
      MR_Word B_21 = ((MR_Word) ((MR_hl_field(1, C_11, 1))));
      MR_Word Var_35;
      MR_Word next_value_of_C_11;
      MR_Word next_value_of_Cs_12;

      {
        Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_35, 0) = ((MR_Box) (A_20));
        MR_hl_field(1, Var_35, 1) = ((MR_Box) (Cs_12));
      }
      // direct tailcall eliminated
      ;
      next_value_of_C_11 = B_21;
      next_value_of_Cs_12 = Var_35;
      C_11 = next_value_of_C_11;
      Cs_12 = next_value_of_Cs_12;
      continue;
    }
    else
    {
      MR_Box H_16 = (MR_hl_field(0, C_11, 0));
      MR_Word T_17 = ((MR_Word) ((MR_hl_field(0, C_11, 1))));
      MR_Word Var_28;
      MR_Box STATE_VARIABLE_Acc1_1_29;
      MR_Box STATE_VARIABLE_Acc2_1_30;
      MR_Box STATE_VARIABLE_Acc3_1_31;

      {
        Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_28, 0) = H_16;
        MR_hl_field(1, Var_28, 1) = ((MR_Box) (T_17));
      }
      mercury__list__foldr3_8_p_2(TypeInfo_for_T_36, TypeInfo_for_A_37, TypeInfo_for_B_38, TypeInfo_for_C_39, P_10, Var_28, STATE_VARIABLE_Acc1_0_22, &STATE_VARIABLE_Acc1_1_29, STATE_VARIABLE_Acc2_0_24, &STATE_VARIABLE_Acc2_1_30, STATE_VARIABLE_Acc3_0_26, &STATE_VARIABLE_Acc3_1_31);
      if ((Cs_12 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *STATE_VARIABLE_Acc1_23 = STATE_VARIABLE_Acc1_1_29;
        *STATE_VARIABLE_Acc2_25 = STATE_VARIABLE_Acc2_1_30;
        *STATE_VARIABLE_Acc3_27 = STATE_VARIABLE_Acc3_1_31;
      }
      else
      {
        MR_Word Y_18 = ((MR_Word) ((MR_hl_field(1, Cs_12, 0))));
        MR_Word Ys_19 = ((MR_Word) ((MR_hl_field(1, Cs_12, 1))));
        MR_Word next_value_of_C_11 = Y_18;
        MR_Word next_value_of_Cs_12 = Ys_19;
        MR_Box next_value_of_STATE_VARIABLE_Acc1_0_22 = STATE_VARIABLE_Acc1_1_29;
        MR_Box next_value_of_STATE_VARIABLE_Acc2_0_24 = STATE_VARIABLE_Acc2_1_30;
        MR_Box next_value_of_STATE_VARIABLE_Acc3_0_26 = STATE_VARIABLE_Acc3_1_31;

        // direct tailcall eliminated
        ;
        C_11 = next_value_of_C_11;
        Cs_12 = next_value_of_Cs_12;
        STATE_VARIABLE_Acc1_0_22 = next_value_of_STATE_VARIABLE_Acc1_0_22;
        STATE_VARIABLE_Acc2_0_24 = next_value_of_STATE_VARIABLE_Acc2_0_24;
        STATE_VARIABLE_Acc3_0_26 = next_value_of_STATE_VARIABLE_Acc3_0_26;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__cord__foldr3_8_p_1(
  MR_Word TypeInfo_for_T_31,
  MR_Word TypeInfo_for_A_32,
  MR_Word TypeInfo_for_B_33,
  MR_Word TypeInfo_for_C_34,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_3,
  MR_Box * STATE_VARIABLE_Acc1_4,
  MR_Box STATE_VARIABLE_Acc2_0_5,
  MR_Box * STATE_VARIABLE_Acc2_6,
  MR_Box STATE_VARIABLE_Acc3_0_7,
  MR_Box * STATE_VARIABLE_Acc3_8)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_Acc3_8 = STATE_VARIABLE_Acc3_0_7;
    *STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_0_5;
    *STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_0_3;
  }
  else
  {
    MR_Word N_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));

    mercury__cord__foldr3_node_9_p_1(TypeInfo_for_T_31, TypeInfo_for_A_32, TypeInfo_for_B_33, TypeInfo_for_C_34, HeadVar__1_1, N_20, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Acc1_0_3, STATE_VARIABLE_Acc1_4, STATE_VARIABLE_Acc2_0_5, STATE_VARIABLE_Acc2_6, STATE_VARIABLE_Acc3_0_7, STATE_VARIABLE_Acc3_8);
  }
}

void MR_CALL 
mercury__cord__foldr3_node_9_p_1(
  MR_Word TypeInfo_for_T_36,
  MR_Word TypeInfo_for_A_37,
  MR_Word TypeInfo_for_B_38,
  MR_Word TypeInfo_for_C_39,
  MR_Word P_10,
  MR_Word C_11,
  MR_Word Cs_12,
  MR_Box STATE_VARIABLE_Acc1_0_22,
  MR_Box * STATE_VARIABLE_Acc1_23,
  MR_Box STATE_VARIABLE_Acc2_0_24,
  MR_Box * STATE_VARIABLE_Acc2_25,
  MR_Box STATE_VARIABLE_Acc3_0_26,
  MR_Box * STATE_VARIABLE_Acc3_27)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) C_11)) == (MR_Integer) 1))
    {
      MR_Word A_20 = ((MR_Word) ((MR_hl_field(1, C_11, 0))));
      MR_Word B_21 = ((MR_Word) ((MR_hl_field(1, C_11, 1))));
      MR_Word Var_35;
      MR_Word next_value_of_C_11;
      MR_Word next_value_of_Cs_12;

      {
        Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_35, 0) = ((MR_Box) (A_20));
        MR_hl_field(1, Var_35, 1) = ((MR_Box) (Cs_12));
      }
      // direct tailcall eliminated
      ;
      next_value_of_C_11 = B_21;
      next_value_of_Cs_12 = Var_35;
      C_11 = next_value_of_C_11;
      Cs_12 = next_value_of_Cs_12;
      continue;
    }
    else
    {
      MR_Box H_16 = (MR_hl_field(0, C_11, 0));
      MR_Word T_17 = ((MR_Word) ((MR_hl_field(0, C_11, 1))));
      MR_Word Var_28;
      MR_Box STATE_VARIABLE_Acc1_1_29;
      MR_Box STATE_VARIABLE_Acc2_1_30;
      MR_Box STATE_VARIABLE_Acc3_1_31;

      {
        Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_28, 0) = H_16;
        MR_hl_field(1, Var_28, 1) = ((MR_Box) (T_17));
      }
      mercury__list__foldr3_8_p_1(TypeInfo_for_T_36, TypeInfo_for_A_37, TypeInfo_for_B_38, TypeInfo_for_C_39, P_10, Var_28, STATE_VARIABLE_Acc1_0_22, &STATE_VARIABLE_Acc1_1_29, STATE_VARIABLE_Acc2_0_24, &STATE_VARIABLE_Acc2_1_30, STATE_VARIABLE_Acc3_0_26, &STATE_VARIABLE_Acc3_1_31);
      if ((Cs_12 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *STATE_VARIABLE_Acc1_23 = STATE_VARIABLE_Acc1_1_29;
        *STATE_VARIABLE_Acc2_25 = STATE_VARIABLE_Acc2_1_30;
        *STATE_VARIABLE_Acc3_27 = STATE_VARIABLE_Acc3_1_31;
      }
      else
      {
        MR_Word Y_18 = ((MR_Word) ((MR_hl_field(1, Cs_12, 0))));
        MR_Word Ys_19 = ((MR_Word) ((MR_hl_field(1, Cs_12, 1))));
        MR_Word next_value_of_C_11 = Y_18;
        MR_Word next_value_of_Cs_12 = Ys_19;
        MR_Box next_value_of_STATE_VARIABLE_Acc1_0_22 = STATE_VARIABLE_Acc1_1_29;
        MR_Box next_value_of_STATE_VARIABLE_Acc2_0_24 = STATE_VARIABLE_Acc2_1_30;
        MR_Box next_value_of_STATE_VARIABLE_Acc3_0_26 = STATE_VARIABLE_Acc3_1_31;

        // direct tailcall eliminated
        ;
        C_11 = next_value_of_C_11;
        Cs_12 = next_value_of_Cs_12;
        STATE_VARIABLE_Acc1_0_22 = next_value_of_STATE_VARIABLE_Acc1_0_22;
        STATE_VARIABLE_Acc2_0_24 = next_value_of_STATE_VARIABLE_Acc2_0_24;
        STATE_VARIABLE_Acc3_0_26 = next_value_of_STATE_VARIABLE_Acc3_0_26;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__cord__foldr3_8_p_0(
  MR_Word TypeInfo_for_T_31,
  MR_Word TypeInfo_for_A_32,
  MR_Word TypeInfo_for_B_33,
  MR_Word TypeInfo_for_C_34,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_3,
  MR_Box * STATE_VARIABLE_Acc1_4,
  MR_Box STATE_VARIABLE_Acc2_0_5,
  MR_Box * STATE_VARIABLE_Acc2_6,
  MR_Box STATE_VARIABLE_Acc3_0_7,
  MR_Box * STATE_VARIABLE_Acc3_8)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_Acc3_8 = STATE_VARIABLE_Acc3_0_7;
    *STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_0_5;
    *STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_0_3;
  }
  else
  {
    MR_Word N_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));

    mercury__cord__foldr3_node_9_p_0(TypeInfo_for_T_31, TypeInfo_for_A_32, TypeInfo_for_B_33, TypeInfo_for_C_34, HeadVar__1_1, N_20, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Acc1_0_3, STATE_VARIABLE_Acc1_4, STATE_VARIABLE_Acc2_0_5, STATE_VARIABLE_Acc2_6, STATE_VARIABLE_Acc3_0_7, STATE_VARIABLE_Acc3_8);
  }
}

void MR_CALL 
mercury__cord__foldr3_node_9_p_0(
  MR_Word TypeInfo_for_T_36,
  MR_Word TypeInfo_for_A_37,
  MR_Word TypeInfo_for_B_38,
  MR_Word TypeInfo_for_C_39,
  MR_Word P_10,
  MR_Word C_11,
  MR_Word Cs_12,
  MR_Box STATE_VARIABLE_Acc1_0_22,
  MR_Box * STATE_VARIABLE_Acc1_23,
  MR_Box STATE_VARIABLE_Acc2_0_24,
  MR_Box * STATE_VARIABLE_Acc2_25,
  MR_Box STATE_VARIABLE_Acc3_0_26,
  MR_Box * STATE_VARIABLE_Acc3_27)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) C_11)) == (MR_Integer) 1))
    {
      MR_Word A_20 = ((MR_Word) ((MR_hl_field(1, C_11, 0))));
      MR_Word B_21 = ((MR_Word) ((MR_hl_field(1, C_11, 1))));
      MR_Word Var_35;
      MR_Word next_value_of_C_11;
      MR_Word next_value_of_Cs_12;

      {
        Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_35, 0) = ((MR_Box) (A_20));
        MR_hl_field(1, Var_35, 1) = ((MR_Box) (Cs_12));
      }
      // direct tailcall eliminated
      ;
      next_value_of_C_11 = B_21;
      next_value_of_Cs_12 = Var_35;
      C_11 = next_value_of_C_11;
      Cs_12 = next_value_of_Cs_12;
      continue;
    }
    else
    {
      MR_Box H_16 = (MR_hl_field(0, C_11, 0));
      MR_Word T_17 = ((MR_Word) ((MR_hl_field(0, C_11, 1))));
      MR_Word Var_28;
      MR_Box STATE_VARIABLE_Acc1_1_29;
      MR_Box STATE_VARIABLE_Acc2_1_30;
      MR_Box STATE_VARIABLE_Acc3_1_31;

      {
        Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_28, 0) = H_16;
        MR_hl_field(1, Var_28, 1) = ((MR_Box) (T_17));
      }
      mercury__list__foldr3_8_p_0(TypeInfo_for_T_36, TypeInfo_for_A_37, TypeInfo_for_B_38, TypeInfo_for_C_39, P_10, Var_28, STATE_VARIABLE_Acc1_0_22, &STATE_VARIABLE_Acc1_1_29, STATE_VARIABLE_Acc2_0_24, &STATE_VARIABLE_Acc2_1_30, STATE_VARIABLE_Acc3_0_26, &STATE_VARIABLE_Acc3_1_31);
      if ((Cs_12 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *STATE_VARIABLE_Acc1_23 = STATE_VARIABLE_Acc1_1_29;
        *STATE_VARIABLE_Acc2_25 = STATE_VARIABLE_Acc2_1_30;
        *STATE_VARIABLE_Acc3_27 = STATE_VARIABLE_Acc3_1_31;
      }
      else
      {
        MR_Word Y_18 = ((MR_Word) ((MR_hl_field(1, Cs_12, 0))));
        MR_Word Ys_19 = ((MR_Word) ((MR_hl_field(1, Cs_12, 1))));
        MR_Word next_value_of_C_11 = Y_18;
        MR_Word next_value_of_Cs_12 = Ys_19;
        MR_Box next_value_of_STATE_VARIABLE_Acc1_0_22 = STATE_VARIABLE_Acc1_1_29;
        MR_Box next_value_of_STATE_VARIABLE_Acc2_0_24 = STATE_VARIABLE_Acc2_1_30;
        MR_Box next_value_of_STATE_VARIABLE_Acc3_0_26 = STATE_VARIABLE_Acc3_1_31;

        // direct tailcall eliminated
        ;
        C_11 = next_value_of_C_11;
        Cs_12 = next_value_of_Cs_12;
        STATE_VARIABLE_Acc1_0_22 = next_value_of_STATE_VARIABLE_Acc1_0_22;
        STATE_VARIABLE_Acc2_0_24 = next_value_of_STATE_VARIABLE_Acc2_0_24;
        STATE_VARIABLE_Acc3_0_26 = next_value_of_STATE_VARIABLE_Acc3_0_26;
        continue;
      }
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__cord__foldr2_6_p_5(
  MR_Word TypeInfo_for_T_23,
  MR_Word TypeInfo_for_A_24,
  MR_Word TypeInfo_for_B_25,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_3,
  MR_Box * STATE_VARIABLE_Acc1_4,
  MR_Box STATE_VARIABLE_Acc2_0_5,
  MR_Box * STATE_VARIABLE_Acc2_6)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_0_5;
    *STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_0_3;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word N_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));

    succeeded = mercury__cord__foldr2_node_7_p_5(TypeInfo_for_T_23, TypeInfo_for_A_24, TypeInfo_for_B_25, HeadVar__1_1, N_15, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Acc1_0_3, STATE_VARIABLE_Acc1_4, STATE_VARIABLE_Acc2_0_5, STATE_VARIABLE_Acc2_6);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__cord__foldr2_node_7_p_5(
  MR_Word TypeInfo_for_T_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word P_8,
  MR_Word C_9,
  MR_Word Cs_10,
  MR_Box STATE_VARIABLE_Acc1_0_19,
  MR_Box * STATE_VARIABLE_Acc1_20,
  MR_Box STATE_VARIABLE_Acc2_0_21,
  MR_Box * STATE_VARIABLE_Acc2_22)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) C_9)) == (MR_Integer) 1))
    {
      MR_Word A_17 = ((MR_Word) ((MR_hl_field(1, C_9, 0))));
      MR_Word B_18 = ((MR_Word) ((MR_hl_field(1, C_9, 1))));
      MR_Word Var_28;
      MR_Word next_value_of_C_9;
      MR_Word next_value_of_Cs_10;

      {
        Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_28, 0) = ((MR_Box) (A_17));
        MR_hl_field(1, Var_28, 1) = ((MR_Box) (Cs_10));
      }
      // direct tailcall eliminated
      ;
      next_value_of_C_9 = B_18;
      next_value_of_Cs_10 = Var_28;
      C_9 = next_value_of_C_9;
      Cs_10 = next_value_of_Cs_10;
      continue;
    }
    else
    {
      MR_Box H_13 = (MR_hl_field(0, C_9, 0));
      MR_Word T_14 = ((MR_Word) ((MR_hl_field(0, C_9, 1))));
      MR_Word Var_23;
      MR_Box STATE_VARIABLE_Acc1_1_24;
      MR_Box STATE_VARIABLE_Acc2_1_25;

      {
        Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_23, 0) = H_13;
        MR_hl_field(1, Var_23, 1) = ((MR_Box) (T_14));
      }
      succeeded = mercury__list__foldr2_6_p_5(TypeInfo_for_T_29, TypeInfo_for_A_30, TypeInfo_for_B_31, P_8, Var_23, STATE_VARIABLE_Acc1_0_19, &STATE_VARIABLE_Acc1_1_24, STATE_VARIABLE_Acc2_0_21, &STATE_VARIABLE_Acc2_1_25);
      if (succeeded)
      {
        if ((Cs_10 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          *STATE_VARIABLE_Acc1_20 = STATE_VARIABLE_Acc1_1_24;
          *STATE_VARIABLE_Acc2_22 = STATE_VARIABLE_Acc2_1_25;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word Y_15 = ((MR_Word) ((MR_hl_field(1, Cs_10, 0))));
          MR_Word Ys_16 = ((MR_Word) ((MR_hl_field(1, Cs_10, 1))));
          MR_Word next_value_of_C_9 = Y_15;
          MR_Word next_value_of_Cs_10 = Ys_16;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_19 = STATE_VARIABLE_Acc1_1_24;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_21 = STATE_VARIABLE_Acc2_1_25;

          // direct tailcall eliminated
          ;
          C_9 = next_value_of_C_9;
          Cs_10 = next_value_of_Cs_10;
          STATE_VARIABLE_Acc1_0_19 = next_value_of_STATE_VARIABLE_Acc1_0_19;
          STATE_VARIABLE_Acc2_0_21 = next_value_of_STATE_VARIABLE_Acc2_0_21;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__cord__foldr2_6_p_4(
  MR_Word TypeInfo_for_T_23,
  MR_Word TypeInfo_for_A_24,
  MR_Word TypeInfo_for_B_25,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_3,
  MR_Box * STATE_VARIABLE_Acc1_4,
  MR_Box STATE_VARIABLE_Acc2_0_5,
  MR_Box * STATE_VARIABLE_Acc2_6)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_0_5;
    *STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_0_3;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word N_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));

    succeeded = mercury__cord__foldr2_node_7_p_4(TypeInfo_for_T_23, TypeInfo_for_A_24, TypeInfo_for_B_25, HeadVar__1_1, N_15, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Acc1_0_3, STATE_VARIABLE_Acc1_4, STATE_VARIABLE_Acc2_0_5, STATE_VARIABLE_Acc2_6);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__cord__foldr2_node_7_p_4(
  MR_Word TypeInfo_for_T_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word P_8,
  MR_Word C_9,
  MR_Word Cs_10,
  MR_Box STATE_VARIABLE_Acc1_0_19,
  MR_Box * STATE_VARIABLE_Acc1_20,
  MR_Box STATE_VARIABLE_Acc2_0_21,
  MR_Box * STATE_VARIABLE_Acc2_22)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) C_9)) == (MR_Integer) 1))
    {
      MR_Word A_17 = ((MR_Word) ((MR_hl_field(1, C_9, 0))));
      MR_Word B_18 = ((MR_Word) ((MR_hl_field(1, C_9, 1))));
      MR_Word Var_28;
      MR_Word next_value_of_C_9;
      MR_Word next_value_of_Cs_10;

      {
        Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_28, 0) = ((MR_Box) (A_17));
        MR_hl_field(1, Var_28, 1) = ((MR_Box) (Cs_10));
      }
      // direct tailcall eliminated
      ;
      next_value_of_C_9 = B_18;
      next_value_of_Cs_10 = Var_28;
      C_9 = next_value_of_C_9;
      Cs_10 = next_value_of_Cs_10;
      continue;
    }
    else
    {
      MR_Box H_13 = (MR_hl_field(0, C_9, 0));
      MR_Word T_14 = ((MR_Word) ((MR_hl_field(0, C_9, 1))));
      MR_Word Var_23;
      MR_Box STATE_VARIABLE_Acc1_1_24;
      MR_Box STATE_VARIABLE_Acc2_1_25;

      {
        Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_23, 0) = H_13;
        MR_hl_field(1, Var_23, 1) = ((MR_Box) (T_14));
      }
      succeeded = mercury__list__foldr2_6_p_4(TypeInfo_for_T_29, TypeInfo_for_A_30, TypeInfo_for_B_31, P_8, Var_23, STATE_VARIABLE_Acc1_0_19, &STATE_VARIABLE_Acc1_1_24, STATE_VARIABLE_Acc2_0_21, &STATE_VARIABLE_Acc2_1_25);
      if (succeeded)
      {
        if ((Cs_10 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          *STATE_VARIABLE_Acc1_20 = STATE_VARIABLE_Acc1_1_24;
          *STATE_VARIABLE_Acc2_22 = STATE_VARIABLE_Acc2_1_25;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word Y_15 = ((MR_Word) ((MR_hl_field(1, Cs_10, 0))));
          MR_Word Ys_16 = ((MR_Word) ((MR_hl_field(1, Cs_10, 1))));
          MR_Word next_value_of_C_9 = Y_15;
          MR_Word next_value_of_Cs_10 = Ys_16;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_19 = STATE_VARIABLE_Acc1_1_24;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_21 = STATE_VARIABLE_Acc2_1_25;

          // direct tailcall eliminated
          ;
          C_9 = next_value_of_C_9;
          Cs_10 = next_value_of_Cs_10;
          STATE_VARIABLE_Acc1_0_19 = next_value_of_STATE_VARIABLE_Acc1_0_19;
          STATE_VARIABLE_Acc2_0_21 = next_value_of_STATE_VARIABLE_Acc2_0_21;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__cord__foldr2_6_p_3(
  MR_Word TypeInfo_for_T_23,
  MR_Word TypeInfo_for_A_24,
  MR_Word TypeInfo_for_B_25,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_3,
  MR_Box * STATE_VARIABLE_Acc1_4,
  MR_Box STATE_VARIABLE_Acc2_0_5,
  MR_Box * STATE_VARIABLE_Acc2_6)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_0_5;
    *STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_0_3;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word N_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));

    succeeded = mercury__cord__foldr2_node_7_p_3(TypeInfo_for_T_23, TypeInfo_for_A_24, TypeInfo_for_B_25, HeadVar__1_1, N_15, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Acc1_0_3, STATE_VARIABLE_Acc1_4, STATE_VARIABLE_Acc2_0_5, STATE_VARIABLE_Acc2_6);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__cord__foldr2_node_7_p_3(
  MR_Word TypeInfo_for_T_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word P_8,
  MR_Word C_9,
  MR_Word Cs_10,
  MR_Box STATE_VARIABLE_Acc1_0_19,
  MR_Box * STATE_VARIABLE_Acc1_20,
  MR_Box STATE_VARIABLE_Acc2_0_21,
  MR_Box * STATE_VARIABLE_Acc2_22)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) C_9)) == (MR_Integer) 1))
    {
      MR_Word A_17 = ((MR_Word) ((MR_hl_field(1, C_9, 0))));
      MR_Word B_18 = ((MR_Word) ((MR_hl_field(1, C_9, 1))));
      MR_Word Var_28;
      MR_Word next_value_of_C_9;
      MR_Word next_value_of_Cs_10;

      {
        Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_28, 0) = ((MR_Box) (A_17));
        MR_hl_field(1, Var_28, 1) = ((MR_Box) (Cs_10));
      }
      // direct tailcall eliminated
      ;
      next_value_of_C_9 = B_18;
      next_value_of_Cs_10 = Var_28;
      C_9 = next_value_of_C_9;
      Cs_10 = next_value_of_Cs_10;
      continue;
    }
    else
    {
      MR_Box H_13 = (MR_hl_field(0, C_9, 0));
      MR_Word T_14 = ((MR_Word) ((MR_hl_field(0, C_9, 1))));
      MR_Word Var_23;
      MR_Box STATE_VARIABLE_Acc1_1_24;
      MR_Box STATE_VARIABLE_Acc2_1_25;

      {
        Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_23, 0) = H_13;
        MR_hl_field(1, Var_23, 1) = ((MR_Box) (T_14));
      }
      succeeded = mercury__list__foldr2_6_p_3(TypeInfo_for_T_29, TypeInfo_for_A_30, TypeInfo_for_B_31, P_8, Var_23, STATE_VARIABLE_Acc1_0_19, &STATE_VARIABLE_Acc1_1_24, STATE_VARIABLE_Acc2_0_21, &STATE_VARIABLE_Acc2_1_25);
      if (succeeded)
      {
        if ((Cs_10 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          *STATE_VARIABLE_Acc1_20 = STATE_VARIABLE_Acc1_1_24;
          *STATE_VARIABLE_Acc2_22 = STATE_VARIABLE_Acc2_1_25;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word Y_15 = ((MR_Word) ((MR_hl_field(1, Cs_10, 0))));
          MR_Word Ys_16 = ((MR_Word) ((MR_hl_field(1, Cs_10, 1))));
          MR_Word next_value_of_C_9 = Y_15;
          MR_Word next_value_of_Cs_10 = Ys_16;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_19 = STATE_VARIABLE_Acc1_1_24;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_21 = STATE_VARIABLE_Acc2_1_25;

          // direct tailcall eliminated
          ;
          C_9 = next_value_of_C_9;
          Cs_10 = next_value_of_Cs_10;
          STATE_VARIABLE_Acc1_0_19 = next_value_of_STATE_VARIABLE_Acc1_0_19;
          STATE_VARIABLE_Acc2_0_21 = next_value_of_STATE_VARIABLE_Acc2_0_21;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__cord__foldr2_6_p_2(
  MR_Word TypeInfo_for_T_23,
  MR_Word TypeInfo_for_A_24,
  MR_Word TypeInfo_for_B_25,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_3,
  MR_Box * STATE_VARIABLE_Acc1_4,
  MR_Box STATE_VARIABLE_Acc2_0_5,
  MR_Box * STATE_VARIABLE_Acc2_6)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_0_5;
    *STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_0_3;
  }
  else
  {
    MR_Word N_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));

    mercury__cord__foldr2_node_7_p_2(TypeInfo_for_T_23, TypeInfo_for_A_24, TypeInfo_for_B_25, HeadVar__1_1, N_15, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Acc1_0_3, STATE_VARIABLE_Acc1_4, STATE_VARIABLE_Acc2_0_5, STATE_VARIABLE_Acc2_6);
  }
}

void MR_CALL 
mercury__cord__foldr2_node_7_p_2(
  MR_Word TypeInfo_for_T_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word P_8,
  MR_Word C_9,
  MR_Word Cs_10,
  MR_Box STATE_VARIABLE_Acc1_0_19,
  MR_Box * STATE_VARIABLE_Acc1_20,
  MR_Box STATE_VARIABLE_Acc2_0_21,
  MR_Box * STATE_VARIABLE_Acc2_22)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) C_9)) == (MR_Integer) 1))
    {
      MR_Word A_17 = ((MR_Word) ((MR_hl_field(1, C_9, 0))));
      MR_Word B_18 = ((MR_Word) ((MR_hl_field(1, C_9, 1))));
      MR_Word Var_28;
      MR_Word next_value_of_C_9;
      MR_Word next_value_of_Cs_10;

      {
        Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_28, 0) = ((MR_Box) (A_17));
        MR_hl_field(1, Var_28, 1) = ((MR_Box) (Cs_10));
      }
      // direct tailcall eliminated
      ;
      next_value_of_C_9 = B_18;
      next_value_of_Cs_10 = Var_28;
      C_9 = next_value_of_C_9;
      Cs_10 = next_value_of_Cs_10;
      continue;
    }
    else
    {
      MR_Box H_13 = (MR_hl_field(0, C_9, 0));
      MR_Word T_14 = ((MR_Word) ((MR_hl_field(0, C_9, 1))));
      MR_Word Var_23;
      MR_Box STATE_VARIABLE_Acc1_1_24;
      MR_Box STATE_VARIABLE_Acc2_1_25;

      {
        Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_23, 0) = H_13;
        MR_hl_field(1, Var_23, 1) = ((MR_Box) (T_14));
      }
      mercury__list__foldr2_6_p_2(TypeInfo_for_T_29, TypeInfo_for_A_30, TypeInfo_for_B_31, P_8, Var_23, STATE_VARIABLE_Acc1_0_19, &STATE_VARIABLE_Acc1_1_24, STATE_VARIABLE_Acc2_0_21, &STATE_VARIABLE_Acc2_1_25);
      if ((Cs_10 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *STATE_VARIABLE_Acc1_20 = STATE_VARIABLE_Acc1_1_24;
        *STATE_VARIABLE_Acc2_22 = STATE_VARIABLE_Acc2_1_25;
      }
      else
      {
        MR_Word Y_15 = ((MR_Word) ((MR_hl_field(1, Cs_10, 0))));
        MR_Word Ys_16 = ((MR_Word) ((MR_hl_field(1, Cs_10, 1))));
        MR_Word next_value_of_C_9 = Y_15;
        MR_Word next_value_of_Cs_10 = Ys_16;
        MR_Box next_value_of_STATE_VARIABLE_Acc1_0_19 = STATE_VARIABLE_Acc1_1_24;
        MR_Box next_value_of_STATE_VARIABLE_Acc2_0_21 = STATE_VARIABLE_Acc2_1_25;

        // direct tailcall eliminated
        ;
        C_9 = next_value_of_C_9;
        Cs_10 = next_value_of_Cs_10;
        STATE_VARIABLE_Acc1_0_19 = next_value_of_STATE_VARIABLE_Acc1_0_19;
        STATE_VARIABLE_Acc2_0_21 = next_value_of_STATE_VARIABLE_Acc2_0_21;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__cord__foldr2_6_p_1(
  MR_Word TypeInfo_for_T_23,
  MR_Word TypeInfo_for_A_24,
  MR_Word TypeInfo_for_B_25,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_3,
  MR_Box * STATE_VARIABLE_Acc1_4,
  MR_Box STATE_VARIABLE_Acc2_0_5,
  MR_Box * STATE_VARIABLE_Acc2_6)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_0_5;
    *STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_0_3;
  }
  else
  {
    MR_Word N_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));

    mercury__cord__foldr2_node_7_p_1(TypeInfo_for_T_23, TypeInfo_for_A_24, TypeInfo_for_B_25, HeadVar__1_1, N_15, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Acc1_0_3, STATE_VARIABLE_Acc1_4, STATE_VARIABLE_Acc2_0_5, STATE_VARIABLE_Acc2_6);
  }
}

void MR_CALL 
mercury__cord__foldr2_node_7_p_1(
  MR_Word TypeInfo_for_T_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word P_8,
  MR_Word C_9,
  MR_Word Cs_10,
  MR_Box STATE_VARIABLE_Acc1_0_19,
  MR_Box * STATE_VARIABLE_Acc1_20,
  MR_Box STATE_VARIABLE_Acc2_0_21,
  MR_Box * STATE_VARIABLE_Acc2_22)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) C_9)) == (MR_Integer) 1))
    {
      MR_Word A_17 = ((MR_Word) ((MR_hl_field(1, C_9, 0))));
      MR_Word B_18 = ((MR_Word) ((MR_hl_field(1, C_9, 1))));
      MR_Word Var_28;
      MR_Word next_value_of_C_9;
      MR_Word next_value_of_Cs_10;

      {
        Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_28, 0) = ((MR_Box) (A_17));
        MR_hl_field(1, Var_28, 1) = ((MR_Box) (Cs_10));
      }
      // direct tailcall eliminated
      ;
      next_value_of_C_9 = B_18;
      next_value_of_Cs_10 = Var_28;
      C_9 = next_value_of_C_9;
      Cs_10 = next_value_of_Cs_10;
      continue;
    }
    else
    {
      MR_Box H_13 = (MR_hl_field(0, C_9, 0));
      MR_Word T_14 = ((MR_Word) ((MR_hl_field(0, C_9, 1))));
      MR_Word Var_23;
      MR_Box STATE_VARIABLE_Acc1_1_24;
      MR_Box STATE_VARIABLE_Acc2_1_25;

      {
        Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_23, 0) = H_13;
        MR_hl_field(1, Var_23, 1) = ((MR_Box) (T_14));
      }
      mercury__list__foldr2_6_p_1(TypeInfo_for_T_29, TypeInfo_for_A_30, TypeInfo_for_B_31, P_8, Var_23, STATE_VARIABLE_Acc1_0_19, &STATE_VARIABLE_Acc1_1_24, STATE_VARIABLE_Acc2_0_21, &STATE_VARIABLE_Acc2_1_25);
      if ((Cs_10 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *STATE_VARIABLE_Acc1_20 = STATE_VARIABLE_Acc1_1_24;
        *STATE_VARIABLE_Acc2_22 = STATE_VARIABLE_Acc2_1_25;
      }
      else
      {
        MR_Word Y_15 = ((MR_Word) ((MR_hl_field(1, Cs_10, 0))));
        MR_Word Ys_16 = ((MR_Word) ((MR_hl_field(1, Cs_10, 1))));
        MR_Word next_value_of_C_9 = Y_15;
        MR_Word next_value_of_Cs_10 = Ys_16;
        MR_Box next_value_of_STATE_VARIABLE_Acc1_0_19 = STATE_VARIABLE_Acc1_1_24;
        MR_Box next_value_of_STATE_VARIABLE_Acc2_0_21 = STATE_VARIABLE_Acc2_1_25;

        // direct tailcall eliminated
        ;
        C_9 = next_value_of_C_9;
        Cs_10 = next_value_of_Cs_10;
        STATE_VARIABLE_Acc1_0_19 = next_value_of_STATE_VARIABLE_Acc1_0_19;
        STATE_VARIABLE_Acc2_0_21 = next_value_of_STATE_VARIABLE_Acc2_0_21;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__cord__foldr2_6_p_0(
  MR_Word TypeInfo_for_T_23,
  MR_Word TypeInfo_for_A_24,
  MR_Word TypeInfo_for_B_25,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_3,
  MR_Box * STATE_VARIABLE_Acc1_4,
  MR_Box STATE_VARIABLE_Acc2_0_5,
  MR_Box * STATE_VARIABLE_Acc2_6)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_0_5;
    *STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_0_3;
  }
  else
  {
    MR_Word N_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));

    mercury__cord__foldr2_node_7_p_0(TypeInfo_for_T_23, TypeInfo_for_A_24, TypeInfo_for_B_25, HeadVar__1_1, N_15, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Acc1_0_3, STATE_VARIABLE_Acc1_4, STATE_VARIABLE_Acc2_0_5, STATE_VARIABLE_Acc2_6);
  }
}

void MR_CALL 
mercury__cord__foldr2_node_7_p_0(
  MR_Word TypeInfo_for_T_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word P_8,
  MR_Word C_9,
  MR_Word Cs_10,
  MR_Box STATE_VARIABLE_Acc1_0_19,
  MR_Box * STATE_VARIABLE_Acc1_20,
  MR_Box STATE_VARIABLE_Acc2_0_21,
  MR_Box * STATE_VARIABLE_Acc2_22)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) C_9)) == (MR_Integer) 1))
    {
      MR_Word A_17 = ((MR_Word) ((MR_hl_field(1, C_9, 0))));
      MR_Word B_18 = ((MR_Word) ((MR_hl_field(1, C_9, 1))));
      MR_Word Var_28;
      MR_Word next_value_of_C_9;
      MR_Word next_value_of_Cs_10;

      {
        Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_28, 0) = ((MR_Box) (A_17));
        MR_hl_field(1, Var_28, 1) = ((MR_Box) (Cs_10));
      }
      // direct tailcall eliminated
      ;
      next_value_of_C_9 = B_18;
      next_value_of_Cs_10 = Var_28;
      C_9 = next_value_of_C_9;
      Cs_10 = next_value_of_Cs_10;
      continue;
    }
    else
    {
      MR_Box H_13 = (MR_hl_field(0, C_9, 0));
      MR_Word T_14 = ((MR_Word) ((MR_hl_field(0, C_9, 1))));
      MR_Word Var_23;
      MR_Box STATE_VARIABLE_Acc1_1_24;
      MR_Box STATE_VARIABLE_Acc2_1_25;

      {
        Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_23, 0) = H_13;
        MR_hl_field(1, Var_23, 1) = ((MR_Box) (T_14));
      }
      mercury__list__foldr2_6_p_0(TypeInfo_for_T_29, TypeInfo_for_A_30, TypeInfo_for_B_31, P_8, Var_23, STATE_VARIABLE_Acc1_0_19, &STATE_VARIABLE_Acc1_1_24, STATE_VARIABLE_Acc2_0_21, &STATE_VARIABLE_Acc2_1_25);
      if ((Cs_10 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *STATE_VARIABLE_Acc1_20 = STATE_VARIABLE_Acc1_1_24;
        *STATE_VARIABLE_Acc2_22 = STATE_VARIABLE_Acc2_1_25;
      }
      else
      {
        MR_Word Y_15 = ((MR_Word) ((MR_hl_field(1, Cs_10, 0))));
        MR_Word Ys_16 = ((MR_Word) ((MR_hl_field(1, Cs_10, 1))));
        MR_Word next_value_of_C_9 = Y_15;
        MR_Word next_value_of_Cs_10 = Ys_16;
        MR_Box next_value_of_STATE_VARIABLE_Acc1_0_19 = STATE_VARIABLE_Acc1_1_24;
        MR_Box next_value_of_STATE_VARIABLE_Acc2_0_21 = STATE_VARIABLE_Acc2_1_25;

        // direct tailcall eliminated
        ;
        C_9 = next_value_of_C_9;
        Cs_10 = next_value_of_Cs_10;
        STATE_VARIABLE_Acc1_0_19 = next_value_of_STATE_VARIABLE_Acc1_0_19;
        STATE_VARIABLE_Acc2_0_21 = next_value_of_STATE_VARIABLE_Acc2_0_21;
        continue;
      }
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__cord__foldr_pred_4_p_5(
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeInfo_for_A_16,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_0_3;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word N_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));

    succeeded = mercury__cord__foldr_node_pred_5_p_5(TypeInfo_for_T_15, TypeInfo_for_A_16, HeadVar__1_1, N_10, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Acc_0_3, STATE_VARIABLE_Acc_4);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__cord__foldr_node_pred_5_p_5(
  MR_Word TypeInfo_for_T_22,
  MR_Word TypeInfo_for_A_23,
  MR_Word P_6,
  MR_Word C_7,
  MR_Word Cs_8,
  MR_Box STATE_VARIABLE_Acc_0_16,
  MR_Box * STATE_VARIABLE_Acc_17)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) C_7)) == (MR_Integer) 1))
    {
      MR_Word A_14 = ((MR_Word) ((MR_hl_field(1, C_7, 0))));
      MR_Word B_15 = ((MR_Word) ((MR_hl_field(1, C_7, 1))));
      MR_Word Var_21;
      MR_Word next_value_of_C_7;
      MR_Word next_value_of_Cs_8;

      {
        Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_21, 0) = ((MR_Box) (A_14));
        MR_hl_field(1, Var_21, 1) = ((MR_Box) (Cs_8));
      }
      // direct tailcall eliminated
      ;
      next_value_of_C_7 = B_15;
      next_value_of_Cs_8 = Var_21;
      C_7 = next_value_of_C_7;
      Cs_8 = next_value_of_Cs_8;
      continue;
    }
    else
    {
      MR_Box H_10 = (MR_hl_field(0, C_7, 0));
      MR_Word T_11 = ((MR_Word) ((MR_hl_field(0, C_7, 1))));
      MR_Word Var_18;
      MR_Box STATE_VARIABLE_Acc_1_19;

      {
        Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_18, 0) = H_10;
        MR_hl_field(1, Var_18, 1) = ((MR_Box) (T_11));
      }
      succeeded = mercury__list__foldr_4_p_5(TypeInfo_for_T_22, TypeInfo_for_A_23, P_6, Var_18, STATE_VARIABLE_Acc_0_16, &STATE_VARIABLE_Acc_1_19);
      if (succeeded)
      {
        if ((Cs_8 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          *STATE_VARIABLE_Acc_17 = STATE_VARIABLE_Acc_1_19;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word Y_12 = ((MR_Word) ((MR_hl_field(1, Cs_8, 0))));
          MR_Word Ys_13 = ((MR_Word) ((MR_hl_field(1, Cs_8, 1))));
          MR_Word next_value_of_C_7 = Y_12;
          MR_Word next_value_of_Cs_8 = Ys_13;
          MR_Box next_value_of_STATE_VARIABLE_Acc_0_16 = STATE_VARIABLE_Acc_1_19;

          // direct tailcall eliminated
          ;
          C_7 = next_value_of_C_7;
          Cs_8 = next_value_of_Cs_8;
          STATE_VARIABLE_Acc_0_16 = next_value_of_STATE_VARIABLE_Acc_0_16;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__cord__foldr_pred_4_p_4(
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeInfo_for_A_16,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_0_3;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word N_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));

    succeeded = mercury__cord__foldr_node_pred_5_p_4(TypeInfo_for_T_15, TypeInfo_for_A_16, HeadVar__1_1, N_10, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Acc_0_3, STATE_VARIABLE_Acc_4);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__cord__foldr_node_pred_5_p_4(
  MR_Word TypeInfo_for_T_22,
  MR_Word TypeInfo_for_A_23,
  MR_Word P_6,
  MR_Word C_7,
  MR_Word Cs_8,
  MR_Box STATE_VARIABLE_Acc_0_16,
  MR_Box * STATE_VARIABLE_Acc_17)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) C_7)) == (MR_Integer) 1))
    {
      MR_Word A_14 = ((MR_Word) ((MR_hl_field(1, C_7, 0))));
      MR_Word B_15 = ((MR_Word) ((MR_hl_field(1, C_7, 1))));
      MR_Word Var_21;
      MR_Word next_value_of_C_7;
      MR_Word next_value_of_Cs_8;

      {
        Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_21, 0) = ((MR_Box) (A_14));
        MR_hl_field(1, Var_21, 1) = ((MR_Box) (Cs_8));
      }
      // direct tailcall eliminated
      ;
      next_value_of_C_7 = B_15;
      next_value_of_Cs_8 = Var_21;
      C_7 = next_value_of_C_7;
      Cs_8 = next_value_of_Cs_8;
      continue;
    }
    else
    {
      MR_Box H_10 = (MR_hl_field(0, C_7, 0));
      MR_Word T_11 = ((MR_Word) ((MR_hl_field(0, C_7, 1))));
      MR_Word Var_18;
      MR_Box STATE_VARIABLE_Acc_1_19;

      {
        Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_18, 0) = H_10;
        MR_hl_field(1, Var_18, 1) = ((MR_Box) (T_11));
      }
      succeeded = mercury__list__foldr_4_p_4(TypeInfo_for_T_22, TypeInfo_for_A_23, P_6, Var_18, STATE_VARIABLE_Acc_0_16, &STATE_VARIABLE_Acc_1_19);
      if (succeeded)
      {
        if ((Cs_8 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          *STATE_VARIABLE_Acc_17 = STATE_VARIABLE_Acc_1_19;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word Y_12 = ((MR_Word) ((MR_hl_field(1, Cs_8, 0))));
          MR_Word Ys_13 = ((MR_Word) ((MR_hl_field(1, Cs_8, 1))));
          MR_Word next_value_of_C_7 = Y_12;
          MR_Word next_value_of_Cs_8 = Ys_13;
          MR_Box next_value_of_STATE_VARIABLE_Acc_0_16 = STATE_VARIABLE_Acc_1_19;

          // direct tailcall eliminated
          ;
          C_7 = next_value_of_C_7;
          Cs_8 = next_value_of_Cs_8;
          STATE_VARIABLE_Acc_0_16 = next_value_of_STATE_VARIABLE_Acc_0_16;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__cord__foldr_pred_4_p_3(
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeInfo_for_A_16,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_0_3;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word N_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));

    succeeded = mercury__cord__foldr_node_pred_5_p_3(TypeInfo_for_T_15, TypeInfo_for_A_16, HeadVar__1_1, N_10, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Acc_0_3, STATE_VARIABLE_Acc_4);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__cord__foldr_node_pred_5_p_3(
  MR_Word TypeInfo_for_T_22,
  MR_Word TypeInfo_for_A_23,
  MR_Word P_6,
  MR_Word C_7,
  MR_Word Cs_8,
  MR_Box STATE_VARIABLE_Acc_0_16,
  MR_Box * STATE_VARIABLE_Acc_17)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) C_7)) == (MR_Integer) 1))
    {
      MR_Word A_14 = ((MR_Word) ((MR_hl_field(1, C_7, 0))));
      MR_Word B_15 = ((MR_Word) ((MR_hl_field(1, C_7, 1))));
      MR_Word Var_21;
      MR_Word next_value_of_C_7;
      MR_Word next_value_of_Cs_8;

      {
        Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_21, 0) = ((MR_Box) (A_14));
        MR_hl_field(1, Var_21, 1) = ((MR_Box) (Cs_8));
      }
      // direct tailcall eliminated
      ;
      next_value_of_C_7 = B_15;
      next_value_of_Cs_8 = Var_21;
      C_7 = next_value_of_C_7;
      Cs_8 = next_value_of_Cs_8;
      continue;
    }
    else
    {
      MR_Box H_10 = (MR_hl_field(0, C_7, 0));
      MR_Word T_11 = ((MR_Word) ((MR_hl_field(0, C_7, 1))));
      MR_Word Var_18;
      MR_Box STATE_VARIABLE_Acc_1_19;

      {
        Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_18, 0) = H_10;
        MR_hl_field(1, Var_18, 1) = ((MR_Box) (T_11));
      }
      succeeded = mercury__list__foldr_4_p_3(TypeInfo_for_T_22, TypeInfo_for_A_23, P_6, Var_18, STATE_VARIABLE_Acc_0_16, &STATE_VARIABLE_Acc_1_19);
      if (succeeded)
      {
        if ((Cs_8 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          *STATE_VARIABLE_Acc_17 = STATE_VARIABLE_Acc_1_19;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word Y_12 = ((MR_Word) ((MR_hl_field(1, Cs_8, 0))));
          MR_Word Ys_13 = ((MR_Word) ((MR_hl_field(1, Cs_8, 1))));
          MR_Word next_value_of_C_7 = Y_12;
          MR_Word next_value_of_Cs_8 = Ys_13;
          MR_Box next_value_of_STATE_VARIABLE_Acc_0_16 = STATE_VARIABLE_Acc_1_19;

          // direct tailcall eliminated
          ;
          C_7 = next_value_of_C_7;
          Cs_8 = next_value_of_Cs_8;
          STATE_VARIABLE_Acc_0_16 = next_value_of_STATE_VARIABLE_Acc_0_16;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__cord__foldr_pred_4_p_2(
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeInfo_for_A_16,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_0_3;
  else
  {
    MR_Word N_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));

    mercury__cord__foldr_node_pred_5_p_2(TypeInfo_for_T_15, TypeInfo_for_A_16, HeadVar__1_1, N_10, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Acc_0_3, STATE_VARIABLE_Acc_4);
  }
}

void MR_CALL 
mercury__cord__foldr_node_pred_5_p_2(
  MR_Word TypeInfo_for_T_22,
  MR_Word TypeInfo_for_A_23,
  MR_Word P_6,
  MR_Word C_7,
  MR_Word Cs_8,
  MR_Box STATE_VARIABLE_Acc_0_16,
  MR_Box * STATE_VARIABLE_Acc_17)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) C_7)) == (MR_Integer) 1))
    {
      MR_Word A_14 = ((MR_Word) ((MR_hl_field(1, C_7, 0))));
      MR_Word B_15 = ((MR_Word) ((MR_hl_field(1, C_7, 1))));
      MR_Word Var_21;
      MR_Word next_value_of_C_7;
      MR_Word next_value_of_Cs_8;

      {
        Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_21, 0) = ((MR_Box) (A_14));
        MR_hl_field(1, Var_21, 1) = ((MR_Box) (Cs_8));
      }
      // direct tailcall eliminated
      ;
      next_value_of_C_7 = B_15;
      next_value_of_Cs_8 = Var_21;
      C_7 = next_value_of_C_7;
      Cs_8 = next_value_of_Cs_8;
      continue;
    }
    else
    {
      MR_Box H_10 = (MR_hl_field(0, C_7, 0));
      MR_Word T_11 = ((MR_Word) ((MR_hl_field(0, C_7, 1))));
      MR_Word Var_18;
      MR_Box STATE_VARIABLE_Acc_1_19;

      {
        Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_18, 0) = H_10;
        MR_hl_field(1, Var_18, 1) = ((MR_Box) (T_11));
      }
      mercury__list__foldr_4_p_2(TypeInfo_for_T_22, TypeInfo_for_A_23, P_6, Var_18, STATE_VARIABLE_Acc_0_16, &STATE_VARIABLE_Acc_1_19);
      if ((Cs_8 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_Acc_17 = STATE_VARIABLE_Acc_1_19;
      else
      {
        MR_Word Y_12 = ((MR_Word) ((MR_hl_field(1, Cs_8, 0))));
        MR_Word Ys_13 = ((MR_Word) ((MR_hl_field(1, Cs_8, 1))));
        MR_Word next_value_of_C_7 = Y_12;
        MR_Word next_value_of_Cs_8 = Ys_13;
        MR_Box next_value_of_STATE_VARIABLE_Acc_0_16 = STATE_VARIABLE_Acc_1_19;

        // direct tailcall eliminated
        ;
        C_7 = next_value_of_C_7;
        Cs_8 = next_value_of_Cs_8;
        STATE_VARIABLE_Acc_0_16 = next_value_of_STATE_VARIABLE_Acc_0_16;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__cord__foldr_pred_4_p_1(
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeInfo_for_A_16,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_0_3;
  else
  {
    MR_Word N_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));

    mercury__cord__foldr_node_pred_5_p_1(TypeInfo_for_T_15, TypeInfo_for_A_16, HeadVar__1_1, N_10, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Acc_0_3, STATE_VARIABLE_Acc_4);
  }
}

void MR_CALL 
mercury__cord__foldr_node_pred_5_p_1(
  MR_Word TypeInfo_for_T_22,
  MR_Word TypeInfo_for_A_23,
  MR_Word P_6,
  MR_Word C_7,
  MR_Word Cs_8,
  MR_Box STATE_VARIABLE_Acc_0_16,
  MR_Box * STATE_VARIABLE_Acc_17)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) C_7)) == (MR_Integer) 1))
    {
      MR_Word A_14 = ((MR_Word) ((MR_hl_field(1, C_7, 0))));
      MR_Word B_15 = ((MR_Word) ((MR_hl_field(1, C_7, 1))));
      MR_Word Var_21;
      MR_Word next_value_of_C_7;
      MR_Word next_value_of_Cs_8;

      {
        Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_21, 0) = ((MR_Box) (A_14));
        MR_hl_field(1, Var_21, 1) = ((MR_Box) (Cs_8));
      }
      // direct tailcall eliminated
      ;
      next_value_of_C_7 = B_15;
      next_value_of_Cs_8 = Var_21;
      C_7 = next_value_of_C_7;
      Cs_8 = next_value_of_Cs_8;
      continue;
    }
    else
    {
      MR_Box H_10 = (MR_hl_field(0, C_7, 0));
      MR_Word T_11 = ((MR_Word) ((MR_hl_field(0, C_7, 1))));
      MR_Word Var_18;
      MR_Box STATE_VARIABLE_Acc_1_19;

      {
        Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_18, 0) = H_10;
        MR_hl_field(1, Var_18, 1) = ((MR_Box) (T_11));
      }
      mercury__list__foldr_4_p_1(TypeInfo_for_T_22, TypeInfo_for_A_23, P_6, Var_18, STATE_VARIABLE_Acc_0_16, &STATE_VARIABLE_Acc_1_19);
      if ((Cs_8 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_Acc_17 = STATE_VARIABLE_Acc_1_19;
      else
      {
        MR_Word Y_12 = ((MR_Word) ((MR_hl_field(1, Cs_8, 0))));
        MR_Word Ys_13 = ((MR_Word) ((MR_hl_field(1, Cs_8, 1))));
        MR_Word next_value_of_C_7 = Y_12;
        MR_Word next_value_of_Cs_8 = Ys_13;
        MR_Box next_value_of_STATE_VARIABLE_Acc_0_16 = STATE_VARIABLE_Acc_1_19;

        // direct tailcall eliminated
        ;
        C_7 = next_value_of_C_7;
        Cs_8 = next_value_of_Cs_8;
        STATE_VARIABLE_Acc_0_16 = next_value_of_STATE_VARIABLE_Acc_0_16;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__cord__foldr_pred_4_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeInfo_for_A_16,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_0_3;
  else
  {
    MR_Word N_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));

    mercury__cord__foldr_node_pred_5_p_0(TypeInfo_for_T_15, TypeInfo_for_A_16, HeadVar__1_1, N_10, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Acc_0_3, STATE_VARIABLE_Acc_4);
  }
}

void MR_CALL 
mercury__cord__foldr_node_pred_5_p_0(
  MR_Word TypeInfo_for_T_22,
  MR_Word TypeInfo_for_A_23,
  MR_Word P_6,
  MR_Word C_7,
  MR_Word Cs_8,
  MR_Box STATE_VARIABLE_Acc_0_16,
  MR_Box * STATE_VARIABLE_Acc_17)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) C_7)) == (MR_Integer) 1))
    {
      MR_Word A_14 = ((MR_Word) ((MR_hl_field(1, C_7, 0))));
      MR_Word B_15 = ((MR_Word) ((MR_hl_field(1, C_7, 1))));
      MR_Word Var_21;
      MR_Word next_value_of_C_7;
      MR_Word next_value_of_Cs_8;

      {
        Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_21, 0) = ((MR_Box) (A_14));
        MR_hl_field(1, Var_21, 1) = ((MR_Box) (Cs_8));
      }
      // direct tailcall eliminated
      ;
      next_value_of_C_7 = B_15;
      next_value_of_Cs_8 = Var_21;
      C_7 = next_value_of_C_7;
      Cs_8 = next_value_of_Cs_8;
      continue;
    }
    else
    {
      MR_Box H_10 = (MR_hl_field(0, C_7, 0));
      MR_Word T_11 = ((MR_Word) ((MR_hl_field(0, C_7, 1))));
      MR_Word Var_18;
      MR_Box STATE_VARIABLE_Acc_1_19;

      {
        Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_18, 0) = H_10;
        MR_hl_field(1, Var_18, 1) = ((MR_Box) (T_11));
      }
      mercury__list__foldr_4_p_0(TypeInfo_for_T_22, TypeInfo_for_A_23, P_6, Var_18, STATE_VARIABLE_Acc_0_16, &STATE_VARIABLE_Acc_1_19);
      if ((Cs_8 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_Acc_17 = STATE_VARIABLE_Acc_1_19;
      else
      {
        MR_Word Y_12 = ((MR_Word) ((MR_hl_field(1, Cs_8, 0))));
        MR_Word Ys_13 = ((MR_Word) ((MR_hl_field(1, Cs_8, 1))));
        MR_Word next_value_of_C_7 = Y_12;
        MR_Word next_value_of_Cs_8 = Ys_13;
        MR_Box next_value_of_STATE_VARIABLE_Acc_0_16 = STATE_VARIABLE_Acc_1_19;

        // direct tailcall eliminated
        ;
        C_7 = next_value_of_C_7;
        Cs_8 = next_value_of_Cs_8;
        STATE_VARIABLE_Acc_0_16 = next_value_of_STATE_VARIABLE_Acc_0_16;
        continue;
      }
    }
    break;
  }
}

MR_Box MR_CALL 
mercury__cord__foldr_3_f_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word TypeInfo_for_A_13,
  MR_Word F_1,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  MR_Box Acc_4;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    Acc_4 = HeadVar__3_3;
  else
  {
    MR_Word N_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));

    mercury__cord__foldr_node_5_p_0(TypeInfo_for_T_12, TypeInfo_for_A_13, F_1, N_8, (MR_Word) ((MR_Unsigned) 0U), HeadVar__3_3, &Acc_4);
  }
  return Acc_4;
}

void MR_CALL 
mercury__cord__foldr_node_5_p_0(
  MR_Word TypeInfo_for_T_22,
  MR_Word TypeInfo_for_A_23,
  MR_Word F_6,
  MR_Word C_7,
  MR_Word Cs_8,
  MR_Box STATE_VARIABLE_Acc_0_16,
  MR_Box * STATE_VARIABLE_Acc_17)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) C_7)) == (MR_Integer) 1))
    {
      MR_Word A_14 = ((MR_Word) ((MR_hl_field(1, C_7, 0))));
      MR_Word B_15 = ((MR_Word) ((MR_hl_field(1, C_7, 1))));
      MR_Word Var_21;
      MR_Word next_value_of_C_7;
      MR_Word next_value_of_Cs_8;

      {
        Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_21, 0) = ((MR_Box) (A_14));
        MR_hl_field(1, Var_21, 1) = ((MR_Box) (Cs_8));
      }
      // direct tailcall eliminated
      ;
      next_value_of_C_7 = B_15;
      next_value_of_Cs_8 = Var_21;
      C_7 = next_value_of_C_7;
      Cs_8 = next_value_of_Cs_8;
      continue;
    }
    else
    {
      MR_Box H_10 = (MR_hl_field(0, C_7, 0));
      MR_Word T_11 = ((MR_Word) ((MR_hl_field(0, C_7, 1))));
      MR_Box STATE_VARIABLE_Acc_1_18;
      MR_Word Var_19;

      {
        Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_19, 0) = H_10;
        MR_hl_field(1, Var_19, 1) = ((MR_Box) (T_11));
      }
      STATE_VARIABLE_Acc_1_18 = mercury__list__foldr_3_f_0(TypeInfo_for_T_22, TypeInfo_for_A_23, F_6, Var_19, STATE_VARIABLE_Acc_0_16);
      if ((Cs_8 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_Acc_17 = STATE_VARIABLE_Acc_1_18;
      else
      {
        MR_Word Y_12 = ((MR_Word) ((MR_hl_field(1, Cs_8, 0))));
        MR_Word Ys_13 = ((MR_Word) ((MR_hl_field(1, Cs_8, 1))));
        MR_Word next_value_of_C_7 = Y_12;
        MR_Word next_value_of_Cs_8 = Ys_13;
        MR_Box next_value_of_STATE_VARIABLE_Acc_0_16 = STATE_VARIABLE_Acc_1_18;

        // direct tailcall eliminated
        ;
        C_7 = next_value_of_C_7;
        Cs_8 = next_value_of_Cs_8;
        STATE_VARIABLE_Acc_0_16 = next_value_of_STATE_VARIABLE_Acc_0_16;
        continue;
      }
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__cord__foldl3_8_p_5(
  MR_Word TypeInfo_for_T_31,
  MR_Word TypeInfo_for_A_32,
  MR_Word TypeInfo_for_B_33,
  MR_Word TypeInfo_for_C_34,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_AccA_0_3,
  MR_Box * STATE_VARIABLE_AccA_4,
  MR_Box STATE_VARIABLE_AccB_0_5,
  MR_Box * STATE_VARIABLE_AccB_6,
  MR_Box STATE_VARIABLE_AccC_0_7,
  MR_Box * STATE_VARIABLE_AccC_8)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_AccC_8 = STATE_VARIABLE_AccC_0_7;
    *STATE_VARIABLE_AccB_6 = STATE_VARIABLE_AccB_0_5;
    *STATE_VARIABLE_AccA_4 = STATE_VARIABLE_AccA_0_3;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word N_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));

    succeeded = mercury__cord__foldl3_node_9_p_5(TypeInfo_for_T_31, TypeInfo_for_A_32, TypeInfo_for_B_33, TypeInfo_for_C_34, HeadVar__1_1, N_20, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_AccA_0_3, STATE_VARIABLE_AccA_4, STATE_VARIABLE_AccB_0_5, STATE_VARIABLE_AccB_6, STATE_VARIABLE_AccC_0_7, STATE_VARIABLE_AccC_8);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__cord__foldl3_node_9_p_5(
  MR_Word TypeInfo_for_T_36,
  MR_Word TypeInfo_for_A_37,
  MR_Word TypeInfo_for_B_38,
  MR_Word TypeInfo_for_C_39,
  MR_Word P_10,
  MR_Word C_11,
  MR_Word Cs_12,
  MR_Box STATE_VARIABLE_AccA_0_22,
  MR_Box * STATE_VARIABLE_AccA_23,
  MR_Box STATE_VARIABLE_AccB_0_24,
  MR_Box * STATE_VARIABLE_AccB_25,
  MR_Box STATE_VARIABLE_AccC_0_26,
  MR_Box * STATE_VARIABLE_AccC_27)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) C_11)) == (MR_Integer) 1))
    {
      MR_Word A_20 = ((MR_Word) ((MR_hl_field(1, C_11, 0))));
      MR_Word B_21 = ((MR_Word) ((MR_hl_field(1, C_11, 1))));
      MR_Word Var_35;
      MR_Word next_value_of_C_11;
      MR_Word next_value_of_Cs_12;

      {
        Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_35, 0) = ((MR_Box) (B_21));
        MR_hl_field(1, Var_35, 1) = ((MR_Box) (Cs_12));
      }
      // direct tailcall eliminated
      ;
      next_value_of_C_11 = A_20;
      next_value_of_Cs_12 = Var_35;
      C_11 = next_value_of_C_11;
      Cs_12 = next_value_of_Cs_12;
      continue;
    }
    else
    {
      MR_Box H_16 = (MR_hl_field(0, C_11, 0));
      MR_Word T_17 = ((MR_Word) ((MR_hl_field(0, C_11, 1))));
      MR_Word Var_28;
      MR_Box STATE_VARIABLE_AccA_1_29;
      MR_Box STATE_VARIABLE_AccB_1_30;
      MR_Box STATE_VARIABLE_AccC_1_31;

      {
        Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_28, 0) = H_16;
        MR_hl_field(1, Var_28, 1) = ((MR_Box) (T_17));
      }
      succeeded = mercury__list__foldl3_8_p_5(TypeInfo_for_T_36, TypeInfo_for_A_37, TypeInfo_for_B_38, TypeInfo_for_C_39, P_10, Var_28, STATE_VARIABLE_AccA_0_22, &STATE_VARIABLE_AccA_1_29, STATE_VARIABLE_AccB_0_24, &STATE_VARIABLE_AccB_1_30, STATE_VARIABLE_AccC_0_26, &STATE_VARIABLE_AccC_1_31);
      if (succeeded)
      {
        if ((Cs_12 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          *STATE_VARIABLE_AccA_23 = STATE_VARIABLE_AccA_1_29;
          *STATE_VARIABLE_AccB_25 = STATE_VARIABLE_AccB_1_30;
          *STATE_VARIABLE_AccC_27 = STATE_VARIABLE_AccC_1_31;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word Y_18 = ((MR_Word) ((MR_hl_field(1, Cs_12, 0))));
          MR_Word Ys_19 = ((MR_Word) ((MR_hl_field(1, Cs_12, 1))));
          MR_Word next_value_of_C_11 = Y_18;
          MR_Word next_value_of_Cs_12 = Ys_19;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_22 = STATE_VARIABLE_AccA_1_29;
          MR_Box next_value_of_STATE_VARIABLE_AccB_0_24 = STATE_VARIABLE_AccB_1_30;
          MR_Box next_value_of_STATE_VARIABLE_AccC_0_26 = STATE_VARIABLE_AccC_1_31;

          // direct tailcall eliminated
          ;
          C_11 = next_value_of_C_11;
          Cs_12 = next_value_of_Cs_12;
          STATE_VARIABLE_AccA_0_22 = next_value_of_STATE_VARIABLE_AccA_0_22;
          STATE_VARIABLE_AccB_0_24 = next_value_of_STATE_VARIABLE_AccB_0_24;
          STATE_VARIABLE_AccC_0_26 = next_value_of_STATE_VARIABLE_AccC_0_26;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__cord__foldl3_8_p_4(
  MR_Word TypeInfo_for_T_31,
  MR_Word TypeInfo_for_A_32,
  MR_Word TypeInfo_for_B_33,
  MR_Word TypeInfo_for_C_34,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_AccA_0_3,
  MR_Box * STATE_VARIABLE_AccA_4,
  MR_Box STATE_VARIABLE_AccB_0_5,
  MR_Box * STATE_VARIABLE_AccB_6,
  MR_Box STATE_VARIABLE_AccC_0_7,
  MR_Box * STATE_VARIABLE_AccC_8)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_AccC_8 = STATE_VARIABLE_AccC_0_7;
    *STATE_VARIABLE_AccB_6 = STATE_VARIABLE_AccB_0_5;
    *STATE_VARIABLE_AccA_4 = STATE_VARIABLE_AccA_0_3;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word N_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));

    succeeded = mercury__cord__foldl3_node_9_p_4(TypeInfo_for_T_31, TypeInfo_for_A_32, TypeInfo_for_B_33, TypeInfo_for_C_34, HeadVar__1_1, N_20, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_AccA_0_3, STATE_VARIABLE_AccA_4, STATE_VARIABLE_AccB_0_5, STATE_VARIABLE_AccB_6, STATE_VARIABLE_AccC_0_7, STATE_VARIABLE_AccC_8);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__cord__foldl3_node_9_p_4(
  MR_Word TypeInfo_for_T_36,
  MR_Word TypeInfo_for_A_37,
  MR_Word TypeInfo_for_B_38,
  MR_Word TypeInfo_for_C_39,
  MR_Word P_10,
  MR_Word C_11,
  MR_Word Cs_12,
  MR_Box STATE_VARIABLE_AccA_0_22,
  MR_Box * STATE_VARIABLE_AccA_23,
  MR_Box STATE_VARIABLE_AccB_0_24,
  MR_Box * STATE_VARIABLE_AccB_25,
  MR_Box STATE_VARIABLE_AccC_0_26,
  MR_Box * STATE_VARIABLE_AccC_27)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) C_11)) == (MR_Integer) 1))
    {
      MR_Word A_20 = ((MR_Word) ((MR_hl_field(1, C_11, 0))));
      MR_Word B_21 = ((MR_Word) ((MR_hl_field(1, C_11, 1))));
      MR_Word Var_35;
      MR_Word next_value_of_C_11;
      MR_Word next_value_of_Cs_12;

      {
        Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_35, 0) = ((MR_Box) (B_21));
        MR_hl_field(1, Var_35, 1) = ((MR_Box) (Cs_12));
      }
      // direct tailcall eliminated
      ;
      next_value_of_C_11 = A_20;
      next_value_of_Cs_12 = Var_35;
      C_11 = next_value_of_C_11;
      Cs_12 = next_value_of_Cs_12;
      continue;
    }
    else
    {
      MR_Box H_16 = (MR_hl_field(0, C_11, 0));
      MR_Word T_17 = ((MR_Word) ((MR_hl_field(0, C_11, 1))));
      MR_Word Var_28;
      MR_Box STATE_VARIABLE_AccA_1_29;
      MR_Box STATE_VARIABLE_AccB_1_30;
      MR_Box STATE_VARIABLE_AccC_1_31;

      {
        Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_28, 0) = H_16;
        MR_hl_field(1, Var_28, 1) = ((MR_Box) (T_17));
      }
      succeeded = mercury__list__foldl3_8_p_4(TypeInfo_for_T_36, TypeInfo_for_A_37, TypeInfo_for_B_38, TypeInfo_for_C_39, P_10, Var_28, STATE_VARIABLE_AccA_0_22, &STATE_VARIABLE_AccA_1_29, STATE_VARIABLE_AccB_0_24, &STATE_VARIABLE_AccB_1_30, STATE_VARIABLE_AccC_0_26, &STATE_VARIABLE_AccC_1_31);
      if (succeeded)
      {
        if ((Cs_12 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          *STATE_VARIABLE_AccA_23 = STATE_VARIABLE_AccA_1_29;
          *STATE_VARIABLE_AccB_25 = STATE_VARIABLE_AccB_1_30;
          *STATE_VARIABLE_AccC_27 = STATE_VARIABLE_AccC_1_31;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word Y_18 = ((MR_Word) ((MR_hl_field(1, Cs_12, 0))));
          MR_Word Ys_19 = ((MR_Word) ((MR_hl_field(1, Cs_12, 1))));
          MR_Word next_value_of_C_11 = Y_18;
          MR_Word next_value_of_Cs_12 = Ys_19;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_22 = STATE_VARIABLE_AccA_1_29;
          MR_Box next_value_of_STATE_VARIABLE_AccB_0_24 = STATE_VARIABLE_AccB_1_30;
          MR_Box next_value_of_STATE_VARIABLE_AccC_0_26 = STATE_VARIABLE_AccC_1_31;

          // direct tailcall eliminated
          ;
          C_11 = next_value_of_C_11;
          Cs_12 = next_value_of_Cs_12;
          STATE_VARIABLE_AccA_0_22 = next_value_of_STATE_VARIABLE_AccA_0_22;
          STATE_VARIABLE_AccB_0_24 = next_value_of_STATE_VARIABLE_AccB_0_24;
          STATE_VARIABLE_AccC_0_26 = next_value_of_STATE_VARIABLE_AccC_0_26;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__cord__foldl3_8_p_3(
  MR_Word TypeInfo_for_T_31,
  MR_Word TypeInfo_for_A_32,
  MR_Word TypeInfo_for_B_33,
  MR_Word TypeInfo_for_C_34,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_AccA_0_3,
  MR_Box * STATE_VARIABLE_AccA_4,
  MR_Box STATE_VARIABLE_AccB_0_5,
  MR_Box * STATE_VARIABLE_AccB_6,
  MR_Box STATE_VARIABLE_AccC_0_7,
  MR_Box * STATE_VARIABLE_AccC_8)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_AccC_8 = STATE_VARIABLE_AccC_0_7;
    *STATE_VARIABLE_AccB_6 = STATE_VARIABLE_AccB_0_5;
    *STATE_VARIABLE_AccA_4 = STATE_VARIABLE_AccA_0_3;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word N_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));

    succeeded = mercury__cord__foldl3_node_9_p_3(TypeInfo_for_T_31, TypeInfo_for_A_32, TypeInfo_for_B_33, TypeInfo_for_C_34, HeadVar__1_1, N_20, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_AccA_0_3, STATE_VARIABLE_AccA_4, STATE_VARIABLE_AccB_0_5, STATE_VARIABLE_AccB_6, STATE_VARIABLE_AccC_0_7, STATE_VARIABLE_AccC_8);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__cord__foldl3_node_9_p_3(
  MR_Word TypeInfo_for_T_36,
  MR_Word TypeInfo_for_A_37,
  MR_Word TypeInfo_for_B_38,
  MR_Word TypeInfo_for_C_39,
  MR_Word P_10,
  MR_Word C_11,
  MR_Word Cs_12,
  MR_Box STATE_VARIABLE_AccA_0_22,
  MR_Box * STATE_VARIABLE_AccA_23,
  MR_Box STATE_VARIABLE_AccB_0_24,
  MR_Box * STATE_VARIABLE_AccB_25,
  MR_Box STATE_VARIABLE_AccC_0_26,
  MR_Box * STATE_VARIABLE_AccC_27)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) C_11)) == (MR_Integer) 1))
    {
      MR_Word A_20 = ((MR_Word) ((MR_hl_field(1, C_11, 0))));
      MR_Word B_21 = ((MR_Word) ((MR_hl_field(1, C_11, 1))));
      MR_Word Var_35;
      MR_Word next_value_of_C_11;
      MR_Word next_value_of_Cs_12;

      {
        Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_35, 0) = ((MR_Box) (B_21));
        MR_hl_field(1, Var_35, 1) = ((MR_Box) (Cs_12));
      }
      // direct tailcall eliminated
      ;
      next_value_of_C_11 = A_20;
      next_value_of_Cs_12 = Var_35;
      C_11 = next_value_of_C_11;
      Cs_12 = next_value_of_Cs_12;
      continue;
    }
    else
    {
      MR_Box H_16 = (MR_hl_field(0, C_11, 0));
      MR_Word T_17 = ((MR_Word) ((MR_hl_field(0, C_11, 1))));
      MR_Word Var_28;
      MR_Box STATE_VARIABLE_AccA_1_29;
      MR_Box STATE_VARIABLE_AccB_1_30;
      MR_Box STATE_VARIABLE_AccC_1_31;

      {
        Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_28, 0) = H_16;
        MR_hl_field(1, Var_28, 1) = ((MR_Box) (T_17));
      }
      succeeded = mercury__list__foldl3_8_p_3(TypeInfo_for_T_36, TypeInfo_for_A_37, TypeInfo_for_B_38, TypeInfo_for_C_39, P_10, Var_28, STATE_VARIABLE_AccA_0_22, &STATE_VARIABLE_AccA_1_29, STATE_VARIABLE_AccB_0_24, &STATE_VARIABLE_AccB_1_30, STATE_VARIABLE_AccC_0_26, &STATE_VARIABLE_AccC_1_31);
      if (succeeded)
      {
        if ((Cs_12 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          *STATE_VARIABLE_AccA_23 = STATE_VARIABLE_AccA_1_29;
          *STATE_VARIABLE_AccB_25 = STATE_VARIABLE_AccB_1_30;
          *STATE_VARIABLE_AccC_27 = STATE_VARIABLE_AccC_1_31;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word Y_18 = ((MR_Word) ((MR_hl_field(1, Cs_12, 0))));
          MR_Word Ys_19 = ((MR_Word) ((MR_hl_field(1, Cs_12, 1))));
          MR_Word next_value_of_C_11 = Y_18;
          MR_Word next_value_of_Cs_12 = Ys_19;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_22 = STATE_VARIABLE_AccA_1_29;
          MR_Box next_value_of_STATE_VARIABLE_AccB_0_24 = STATE_VARIABLE_AccB_1_30;
          MR_Box next_value_of_STATE_VARIABLE_AccC_0_26 = STATE_VARIABLE_AccC_1_31;

          // direct tailcall eliminated
          ;
          C_11 = next_value_of_C_11;
          Cs_12 = next_value_of_Cs_12;
          STATE_VARIABLE_AccA_0_22 = next_value_of_STATE_VARIABLE_AccA_0_22;
          STATE_VARIABLE_AccB_0_24 = next_value_of_STATE_VARIABLE_AccB_0_24;
          STATE_VARIABLE_AccC_0_26 = next_value_of_STATE_VARIABLE_AccC_0_26;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__cord__foldl3_8_p_2(
  MR_Word TypeInfo_for_T_31,
  MR_Word TypeInfo_for_A_32,
  MR_Word TypeInfo_for_B_33,
  MR_Word TypeInfo_for_C_34,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_AccA_0_3,
  MR_Box * STATE_VARIABLE_AccA_4,
  MR_Box STATE_VARIABLE_AccB_0_5,
  MR_Box * STATE_VARIABLE_AccB_6,
  MR_Box STATE_VARIABLE_AccC_0_7,
  MR_Box * STATE_VARIABLE_AccC_8)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_AccC_8 = STATE_VARIABLE_AccC_0_7;
    *STATE_VARIABLE_AccB_6 = STATE_VARIABLE_AccB_0_5;
    *STATE_VARIABLE_AccA_4 = STATE_VARIABLE_AccA_0_3;
  }
  else
  {
    MR_Word N_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));

    mercury__cord__foldl3_node_9_p_2(TypeInfo_for_T_31, TypeInfo_for_A_32, TypeInfo_for_B_33, TypeInfo_for_C_34, HeadVar__1_1, N_20, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_AccA_0_3, STATE_VARIABLE_AccA_4, STATE_VARIABLE_AccB_0_5, STATE_VARIABLE_AccB_6, STATE_VARIABLE_AccC_0_7, STATE_VARIABLE_AccC_8);
  }
}

void MR_CALL 
mercury__cord__foldl3_node_9_p_2(
  MR_Word TypeInfo_for_T_36,
  MR_Word TypeInfo_for_A_37,
  MR_Word TypeInfo_for_B_38,
  MR_Word TypeInfo_for_C_39,
  MR_Word P_10,
  MR_Word C_11,
  MR_Word Cs_12,
  MR_Box STATE_VARIABLE_AccA_0_22,
  MR_Box * STATE_VARIABLE_AccA_23,
  MR_Box STATE_VARIABLE_AccB_0_24,
  MR_Box * STATE_VARIABLE_AccB_25,
  MR_Box STATE_VARIABLE_AccC_0_26,
  MR_Box * STATE_VARIABLE_AccC_27)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) C_11)) == (MR_Integer) 1))
    {
      MR_Word A_20 = ((MR_Word) ((MR_hl_field(1, C_11, 0))));
      MR_Word B_21 = ((MR_Word) ((MR_hl_field(1, C_11, 1))));
      MR_Word Var_35;
      MR_Word next_value_of_C_11;
      MR_Word next_value_of_Cs_12;

      {
        Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_35, 0) = ((MR_Box) (B_21));
        MR_hl_field(1, Var_35, 1) = ((MR_Box) (Cs_12));
      }
      // direct tailcall eliminated
      ;
      next_value_of_C_11 = A_20;
      next_value_of_Cs_12 = Var_35;
      C_11 = next_value_of_C_11;
      Cs_12 = next_value_of_Cs_12;
      continue;
    }
    else
    {
      MR_Box H_16 = (MR_hl_field(0, C_11, 0));
      MR_Word T_17 = ((MR_Word) ((MR_hl_field(0, C_11, 1))));
      MR_Word Var_28;
      MR_Box STATE_VARIABLE_AccA_1_29;
      MR_Box STATE_VARIABLE_AccB_1_30;
      MR_Box STATE_VARIABLE_AccC_1_31;

      {
        Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_28, 0) = H_16;
        MR_hl_field(1, Var_28, 1) = ((MR_Box) (T_17));
      }
      mercury__list__foldl3_8_p_2(TypeInfo_for_T_36, TypeInfo_for_A_37, TypeInfo_for_B_38, TypeInfo_for_C_39, P_10, Var_28, STATE_VARIABLE_AccA_0_22, &STATE_VARIABLE_AccA_1_29, STATE_VARIABLE_AccB_0_24, &STATE_VARIABLE_AccB_1_30, STATE_VARIABLE_AccC_0_26, &STATE_VARIABLE_AccC_1_31);
      if ((Cs_12 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *STATE_VARIABLE_AccA_23 = STATE_VARIABLE_AccA_1_29;
        *STATE_VARIABLE_AccB_25 = STATE_VARIABLE_AccB_1_30;
        *STATE_VARIABLE_AccC_27 = STATE_VARIABLE_AccC_1_31;
      }
      else
      {
        MR_Word Y_18 = ((MR_Word) ((MR_hl_field(1, Cs_12, 0))));
        MR_Word Ys_19 = ((MR_Word) ((MR_hl_field(1, Cs_12, 1))));
        MR_Word next_value_of_C_11 = Y_18;
        MR_Word next_value_of_Cs_12 = Ys_19;
        MR_Box next_value_of_STATE_VARIABLE_AccA_0_22 = STATE_VARIABLE_AccA_1_29;
        MR_Box next_value_of_STATE_VARIABLE_AccB_0_24 = STATE_VARIABLE_AccB_1_30;
        MR_Box next_value_of_STATE_VARIABLE_AccC_0_26 = STATE_VARIABLE_AccC_1_31;

        // direct tailcall eliminated
        ;
        C_11 = next_value_of_C_11;
        Cs_12 = next_value_of_Cs_12;
        STATE_VARIABLE_AccA_0_22 = next_value_of_STATE_VARIABLE_AccA_0_22;
        STATE_VARIABLE_AccB_0_24 = next_value_of_STATE_VARIABLE_AccB_0_24;
        STATE_VARIABLE_AccC_0_26 = next_value_of_STATE_VARIABLE_AccC_0_26;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__cord__foldl3_8_p_1(
  MR_Word TypeInfo_for_T_31,
  MR_Word TypeInfo_for_A_32,
  MR_Word TypeInfo_for_B_33,
  MR_Word TypeInfo_for_C_34,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_AccA_0_3,
  MR_Box * STATE_VARIABLE_AccA_4,
  MR_Box STATE_VARIABLE_AccB_0_5,
  MR_Box * STATE_VARIABLE_AccB_6,
  MR_Box STATE_VARIABLE_AccC_0_7,
  MR_Box * STATE_VARIABLE_AccC_8)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_AccC_8 = STATE_VARIABLE_AccC_0_7;
    *STATE_VARIABLE_AccB_6 = STATE_VARIABLE_AccB_0_5;
    *STATE_VARIABLE_AccA_4 = STATE_VARIABLE_AccA_0_3;
  }
  else
  {
    MR_Word N_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));

    mercury__cord__foldl3_node_9_p_1(TypeInfo_for_T_31, TypeInfo_for_A_32, TypeInfo_for_B_33, TypeInfo_for_C_34, HeadVar__1_1, N_20, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_AccA_0_3, STATE_VARIABLE_AccA_4, STATE_VARIABLE_AccB_0_5, STATE_VARIABLE_AccB_6, STATE_VARIABLE_AccC_0_7, STATE_VARIABLE_AccC_8);
  }
}

void MR_CALL 
mercury__cord__foldl3_node_9_p_1(
  MR_Word TypeInfo_for_T_36,
  MR_Word TypeInfo_for_A_37,
  MR_Word TypeInfo_for_B_38,
  MR_Word TypeInfo_for_C_39,
  MR_Word P_10,
  MR_Word C_11,
  MR_Word Cs_12,
  MR_Box STATE_VARIABLE_AccA_0_22,
  MR_Box * STATE_VARIABLE_AccA_23,
  MR_Box STATE_VARIABLE_AccB_0_24,
  MR_Box * STATE_VARIABLE_AccB_25,
  MR_Box STATE_VARIABLE_AccC_0_26,
  MR_Box * STATE_VARIABLE_AccC_27)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) C_11)) == (MR_Integer) 1))
    {
      MR_Word A_20 = ((MR_Word) ((MR_hl_field(1, C_11, 0))));
      MR_Word B_21 = ((MR_Word) ((MR_hl_field(1, C_11, 1))));
      MR_Word Var_35;
      MR_Word next_value_of_C_11;
      MR_Word next_value_of_Cs_12;

      {
        Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_35, 0) = ((MR_Box) (B_21));
        MR_hl_field(1, Var_35, 1) = ((MR_Box) (Cs_12));
      }
      // direct tailcall eliminated
      ;
      next_value_of_C_11 = A_20;
      next_value_of_Cs_12 = Var_35;
      C_11 = next_value_of_C_11;
      Cs_12 = next_value_of_Cs_12;
      continue;
    }
    else
    {
      MR_Box H_16 = (MR_hl_field(0, C_11, 0));
      MR_Word T_17 = ((MR_Word) ((MR_hl_field(0, C_11, 1))));
      MR_Word Var_28;
      MR_Box STATE_VARIABLE_AccA_1_29;
      MR_Box STATE_VARIABLE_AccB_1_30;
      MR_Box STATE_VARIABLE_AccC_1_31;

      {
        Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_28, 0) = H_16;
        MR_hl_field(1, Var_28, 1) = ((MR_Box) (T_17));
      }
      mercury__list__foldl3_8_p_1(TypeInfo_for_T_36, TypeInfo_for_A_37, TypeInfo_for_B_38, TypeInfo_for_C_39, P_10, Var_28, STATE_VARIABLE_AccA_0_22, &STATE_VARIABLE_AccA_1_29, STATE_VARIABLE_AccB_0_24, &STATE_VARIABLE_AccB_1_30, STATE_VARIABLE_AccC_0_26, &STATE_VARIABLE_AccC_1_31);
      if ((Cs_12 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *STATE_VARIABLE_AccA_23 = STATE_VARIABLE_AccA_1_29;
        *STATE_VARIABLE_AccB_25 = STATE_VARIABLE_AccB_1_30;
        *STATE_VARIABLE_AccC_27 = STATE_VARIABLE_AccC_1_31;
      }
      else
      {
        MR_Word Y_18 = ((MR_Word) ((MR_hl_field(1, Cs_12, 0))));
        MR_Word Ys_19 = ((MR_Word) ((MR_hl_field(1, Cs_12, 1))));
        MR_Word next_value_of_C_11 = Y_18;
        MR_Word next_value_of_Cs_12 = Ys_19;
        MR_Box next_value_of_STATE_VARIABLE_AccA_0_22 = STATE_VARIABLE_AccA_1_29;
        MR_Box next_value_of_STATE_VARIABLE_AccB_0_24 = STATE_VARIABLE_AccB_1_30;
        MR_Box next_value_of_STATE_VARIABLE_AccC_0_26 = STATE_VARIABLE_AccC_1_31;

        // direct tailcall eliminated
        ;
        C_11 = next_value_of_C_11;
        Cs_12 = next_value_of_Cs_12;
        STATE_VARIABLE_AccA_0_22 = next_value_of_STATE_VARIABLE_AccA_0_22;
        STATE_VARIABLE_AccB_0_24 = next_value_of_STATE_VARIABLE_AccB_0_24;
        STATE_VARIABLE_AccC_0_26 = next_value_of_STATE_VARIABLE_AccC_0_26;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__cord__foldl3_8_p_0(
  MR_Word TypeInfo_for_T_31,
  MR_Word TypeInfo_for_A_32,
  MR_Word TypeInfo_for_B_33,
  MR_Word TypeInfo_for_C_34,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_AccA_0_3,
  MR_Box * STATE_VARIABLE_AccA_4,
  MR_Box STATE_VARIABLE_AccB_0_5,
  MR_Box * STATE_VARIABLE_AccB_6,
  MR_Box STATE_VARIABLE_AccC_0_7,
  MR_Box * STATE_VARIABLE_AccC_8)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_AccC_8 = STATE_VARIABLE_AccC_0_7;
    *STATE_VARIABLE_AccB_6 = STATE_VARIABLE_AccB_0_5;
    *STATE_VARIABLE_AccA_4 = STATE_VARIABLE_AccA_0_3;
  }
  else
  {
    MR_Word N_20 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));

    mercury__cord__foldl3_node_9_p_0(TypeInfo_for_T_31, TypeInfo_for_A_32, TypeInfo_for_B_33, TypeInfo_for_C_34, HeadVar__1_1, N_20, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_AccA_0_3, STATE_VARIABLE_AccA_4, STATE_VARIABLE_AccB_0_5, STATE_VARIABLE_AccB_6, STATE_VARIABLE_AccC_0_7, STATE_VARIABLE_AccC_8);
  }
}

void MR_CALL 
mercury__cord__foldl3_node_9_p_0(
  MR_Word TypeInfo_for_T_36,
  MR_Word TypeInfo_for_A_37,
  MR_Word TypeInfo_for_B_38,
  MR_Word TypeInfo_for_C_39,
  MR_Word P_10,
  MR_Word C_11,
  MR_Word Cs_12,
  MR_Box STATE_VARIABLE_AccA_0_22,
  MR_Box * STATE_VARIABLE_AccA_23,
  MR_Box STATE_VARIABLE_AccB_0_24,
  MR_Box * STATE_VARIABLE_AccB_25,
  MR_Box STATE_VARIABLE_AccC_0_26,
  MR_Box * STATE_VARIABLE_AccC_27)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) C_11)) == (MR_Integer) 1))
    {
      MR_Word A_20 = ((MR_Word) ((MR_hl_field(1, C_11, 0))));
      MR_Word B_21 = ((MR_Word) ((MR_hl_field(1, C_11, 1))));
      MR_Word Var_35;
      MR_Word next_value_of_C_11;
      MR_Word next_value_of_Cs_12;

      {
        Var_35 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_35, 0) = ((MR_Box) (B_21));
        MR_hl_field(1, Var_35, 1) = ((MR_Box) (Cs_12));
      }
      // direct tailcall eliminated
      ;
      next_value_of_C_11 = A_20;
      next_value_of_Cs_12 = Var_35;
      C_11 = next_value_of_C_11;
      Cs_12 = next_value_of_Cs_12;
      continue;
    }
    else
    {
      MR_Box H_16 = (MR_hl_field(0, C_11, 0));
      MR_Word T_17 = ((MR_Word) ((MR_hl_field(0, C_11, 1))));
      MR_Word Var_28;
      MR_Box STATE_VARIABLE_AccA_1_29;
      MR_Box STATE_VARIABLE_AccB_1_30;
      MR_Box STATE_VARIABLE_AccC_1_31;

      {
        Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_28, 0) = H_16;
        MR_hl_field(1, Var_28, 1) = ((MR_Box) (T_17));
      }
      mercury__list__foldl3_8_p_0(TypeInfo_for_T_36, TypeInfo_for_A_37, TypeInfo_for_B_38, TypeInfo_for_C_39, P_10, Var_28, STATE_VARIABLE_AccA_0_22, &STATE_VARIABLE_AccA_1_29, STATE_VARIABLE_AccB_0_24, &STATE_VARIABLE_AccB_1_30, STATE_VARIABLE_AccC_0_26, &STATE_VARIABLE_AccC_1_31);
      if ((Cs_12 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *STATE_VARIABLE_AccA_23 = STATE_VARIABLE_AccA_1_29;
        *STATE_VARIABLE_AccB_25 = STATE_VARIABLE_AccB_1_30;
        *STATE_VARIABLE_AccC_27 = STATE_VARIABLE_AccC_1_31;
      }
      else
      {
        MR_Word Y_18 = ((MR_Word) ((MR_hl_field(1, Cs_12, 0))));
        MR_Word Ys_19 = ((MR_Word) ((MR_hl_field(1, Cs_12, 1))));
        MR_Word next_value_of_C_11 = Y_18;
        MR_Word next_value_of_Cs_12 = Ys_19;
        MR_Box next_value_of_STATE_VARIABLE_AccA_0_22 = STATE_VARIABLE_AccA_1_29;
        MR_Box next_value_of_STATE_VARIABLE_AccB_0_24 = STATE_VARIABLE_AccB_1_30;
        MR_Box next_value_of_STATE_VARIABLE_AccC_0_26 = STATE_VARIABLE_AccC_1_31;

        // direct tailcall eliminated
        ;
        C_11 = next_value_of_C_11;
        Cs_12 = next_value_of_Cs_12;
        STATE_VARIABLE_AccA_0_22 = next_value_of_STATE_VARIABLE_AccA_0_22;
        STATE_VARIABLE_AccB_0_24 = next_value_of_STATE_VARIABLE_AccB_0_24;
        STATE_VARIABLE_AccC_0_26 = next_value_of_STATE_VARIABLE_AccC_0_26;
        continue;
      }
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__cord__foldl2_6_p_5(
  MR_Word TypeInfo_for_T_23,
  MR_Word TypeInfo_for_A_24,
  MR_Word TypeInfo_for_B_25,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_AccA_0_3,
  MR_Box * STATE_VARIABLE_AccA_4,
  MR_Box STATE_VARIABLE_AccB_0_5,
  MR_Box * STATE_VARIABLE_AccB_6)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_AccB_6 = STATE_VARIABLE_AccB_0_5;
    *STATE_VARIABLE_AccA_4 = STATE_VARIABLE_AccA_0_3;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word N_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));

    succeeded = mercury__cord__foldl2_node_7_p_5(TypeInfo_for_T_23, TypeInfo_for_A_24, TypeInfo_for_B_25, HeadVar__1_1, N_15, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_AccA_0_3, STATE_VARIABLE_AccA_4, STATE_VARIABLE_AccB_0_5, STATE_VARIABLE_AccB_6);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__cord__foldl2_node_7_p_5(
  MR_Word TypeInfo_for_T_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word P_8,
  MR_Word C_9,
  MR_Word Cs_10,
  MR_Box STATE_VARIABLE_AccA_0_19,
  MR_Box * STATE_VARIABLE_AccA_20,
  MR_Box STATE_VARIABLE_AccB_0_21,
  MR_Box * STATE_VARIABLE_AccB_22)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) C_9)) == (MR_Integer) 1))
    {
      MR_Word A_17 = ((MR_Word) ((MR_hl_field(1, C_9, 0))));
      MR_Word B_18 = ((MR_Word) ((MR_hl_field(1, C_9, 1))));
      MR_Word Var_28;
      MR_Word next_value_of_C_9;
      MR_Word next_value_of_Cs_10;

      {
        Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_28, 0) = ((MR_Box) (B_18));
        MR_hl_field(1, Var_28, 1) = ((MR_Box) (Cs_10));
      }
      // direct tailcall eliminated
      ;
      next_value_of_C_9 = A_17;
      next_value_of_Cs_10 = Var_28;
      C_9 = next_value_of_C_9;
      Cs_10 = next_value_of_Cs_10;
      continue;
    }
    else
    {
      MR_Box H_13 = (MR_hl_field(0, C_9, 0));
      MR_Word T_14 = ((MR_Word) ((MR_hl_field(0, C_9, 1))));
      MR_Word Var_23;
      MR_Box STATE_VARIABLE_AccA_1_24;
      MR_Box STATE_VARIABLE_AccB_1_25;

      {
        Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_23, 0) = H_13;
        MR_hl_field(1, Var_23, 1) = ((MR_Box) (T_14));
      }
      succeeded = mercury__list__foldl2_6_p_6(TypeInfo_for_T_29, TypeInfo_for_A_30, TypeInfo_for_B_31, P_8, Var_23, STATE_VARIABLE_AccA_0_19, &STATE_VARIABLE_AccA_1_24, STATE_VARIABLE_AccB_0_21, &STATE_VARIABLE_AccB_1_25);
      if (succeeded)
      {
        if ((Cs_10 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          *STATE_VARIABLE_AccA_20 = STATE_VARIABLE_AccA_1_24;
          *STATE_VARIABLE_AccB_22 = STATE_VARIABLE_AccB_1_25;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word Y_15 = ((MR_Word) ((MR_hl_field(1, Cs_10, 0))));
          MR_Word Ys_16 = ((MR_Word) ((MR_hl_field(1, Cs_10, 1))));
          MR_Word next_value_of_C_9 = Y_15;
          MR_Word next_value_of_Cs_10 = Ys_16;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_19 = STATE_VARIABLE_AccA_1_24;
          MR_Box next_value_of_STATE_VARIABLE_AccB_0_21 = STATE_VARIABLE_AccB_1_25;

          // direct tailcall eliminated
          ;
          C_9 = next_value_of_C_9;
          Cs_10 = next_value_of_Cs_10;
          STATE_VARIABLE_AccA_0_19 = next_value_of_STATE_VARIABLE_AccA_0_19;
          STATE_VARIABLE_AccB_0_21 = next_value_of_STATE_VARIABLE_AccB_0_21;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__cord__foldl2_6_p_4(
  MR_Word TypeInfo_for_T_23,
  MR_Word TypeInfo_for_A_24,
  MR_Word TypeInfo_for_B_25,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_AccA_0_3,
  MR_Box * STATE_VARIABLE_AccA_4,
  MR_Box STATE_VARIABLE_AccB_0_5,
  MR_Box * STATE_VARIABLE_AccB_6)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_AccB_6 = STATE_VARIABLE_AccB_0_5;
    *STATE_VARIABLE_AccA_4 = STATE_VARIABLE_AccA_0_3;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word N_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));

    succeeded = mercury__cord__foldl2_node_7_p_4(TypeInfo_for_T_23, TypeInfo_for_A_24, TypeInfo_for_B_25, HeadVar__1_1, N_15, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_AccA_0_3, STATE_VARIABLE_AccA_4, STATE_VARIABLE_AccB_0_5, STATE_VARIABLE_AccB_6);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__cord__foldl2_node_7_p_4(
  MR_Word TypeInfo_for_T_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word P_8,
  MR_Word C_9,
  MR_Word Cs_10,
  MR_Box STATE_VARIABLE_AccA_0_19,
  MR_Box * STATE_VARIABLE_AccA_20,
  MR_Box STATE_VARIABLE_AccB_0_21,
  MR_Box * STATE_VARIABLE_AccB_22)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) C_9)) == (MR_Integer) 1))
    {
      MR_Word A_17 = ((MR_Word) ((MR_hl_field(1, C_9, 0))));
      MR_Word B_18 = ((MR_Word) ((MR_hl_field(1, C_9, 1))));
      MR_Word Var_28;
      MR_Word next_value_of_C_9;
      MR_Word next_value_of_Cs_10;

      {
        Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_28, 0) = ((MR_Box) (B_18));
        MR_hl_field(1, Var_28, 1) = ((MR_Box) (Cs_10));
      }
      // direct tailcall eliminated
      ;
      next_value_of_C_9 = A_17;
      next_value_of_Cs_10 = Var_28;
      C_9 = next_value_of_C_9;
      Cs_10 = next_value_of_Cs_10;
      continue;
    }
    else
    {
      MR_Box H_13 = (MR_hl_field(0, C_9, 0));
      MR_Word T_14 = ((MR_Word) ((MR_hl_field(0, C_9, 1))));
      MR_Word Var_23;
      MR_Box STATE_VARIABLE_AccA_1_24;
      MR_Box STATE_VARIABLE_AccB_1_25;

      {
        Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_23, 0) = H_13;
        MR_hl_field(1, Var_23, 1) = ((MR_Box) (T_14));
      }
      succeeded = mercury__list__foldl2_6_p_5(TypeInfo_for_T_29, TypeInfo_for_A_30, TypeInfo_for_B_31, P_8, Var_23, STATE_VARIABLE_AccA_0_19, &STATE_VARIABLE_AccA_1_24, STATE_VARIABLE_AccB_0_21, &STATE_VARIABLE_AccB_1_25);
      if (succeeded)
      {
        if ((Cs_10 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          *STATE_VARIABLE_AccA_20 = STATE_VARIABLE_AccA_1_24;
          *STATE_VARIABLE_AccB_22 = STATE_VARIABLE_AccB_1_25;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word Y_15 = ((MR_Word) ((MR_hl_field(1, Cs_10, 0))));
          MR_Word Ys_16 = ((MR_Word) ((MR_hl_field(1, Cs_10, 1))));
          MR_Word next_value_of_C_9 = Y_15;
          MR_Word next_value_of_Cs_10 = Ys_16;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_19 = STATE_VARIABLE_AccA_1_24;
          MR_Box next_value_of_STATE_VARIABLE_AccB_0_21 = STATE_VARIABLE_AccB_1_25;

          // direct tailcall eliminated
          ;
          C_9 = next_value_of_C_9;
          Cs_10 = next_value_of_Cs_10;
          STATE_VARIABLE_AccA_0_19 = next_value_of_STATE_VARIABLE_AccA_0_19;
          STATE_VARIABLE_AccB_0_21 = next_value_of_STATE_VARIABLE_AccB_0_21;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__cord__foldl2_6_p_3(
  MR_Word TypeInfo_for_T_23,
  MR_Word TypeInfo_for_A_24,
  MR_Word TypeInfo_for_B_25,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_AccA_0_3,
  MR_Box * STATE_VARIABLE_AccA_4,
  MR_Box STATE_VARIABLE_AccB_0_5,
  MR_Box * STATE_VARIABLE_AccB_6)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_AccB_6 = STATE_VARIABLE_AccB_0_5;
    *STATE_VARIABLE_AccA_4 = STATE_VARIABLE_AccA_0_3;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word N_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));

    succeeded = mercury__cord__foldl2_node_7_p_3(TypeInfo_for_T_23, TypeInfo_for_A_24, TypeInfo_for_B_25, HeadVar__1_1, N_15, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_AccA_0_3, STATE_VARIABLE_AccA_4, STATE_VARIABLE_AccB_0_5, STATE_VARIABLE_AccB_6);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__cord__foldl2_node_7_p_3(
  MR_Word TypeInfo_for_T_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word P_8,
  MR_Word C_9,
  MR_Word Cs_10,
  MR_Box STATE_VARIABLE_AccA_0_19,
  MR_Box * STATE_VARIABLE_AccA_20,
  MR_Box STATE_VARIABLE_AccB_0_21,
  MR_Box * STATE_VARIABLE_AccB_22)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) C_9)) == (MR_Integer) 1))
    {
      MR_Word A_17 = ((MR_Word) ((MR_hl_field(1, C_9, 0))));
      MR_Word B_18 = ((MR_Word) ((MR_hl_field(1, C_9, 1))));
      MR_Word Var_28;
      MR_Word next_value_of_C_9;
      MR_Word next_value_of_Cs_10;

      {
        Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_28, 0) = ((MR_Box) (B_18));
        MR_hl_field(1, Var_28, 1) = ((MR_Box) (Cs_10));
      }
      // direct tailcall eliminated
      ;
      next_value_of_C_9 = A_17;
      next_value_of_Cs_10 = Var_28;
      C_9 = next_value_of_C_9;
      Cs_10 = next_value_of_Cs_10;
      continue;
    }
    else
    {
      MR_Box H_13 = (MR_hl_field(0, C_9, 0));
      MR_Word T_14 = ((MR_Word) ((MR_hl_field(0, C_9, 1))));
      MR_Word Var_23;
      MR_Box STATE_VARIABLE_AccA_1_24;
      MR_Box STATE_VARIABLE_AccB_1_25;

      {
        Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_23, 0) = H_13;
        MR_hl_field(1, Var_23, 1) = ((MR_Box) (T_14));
      }
      succeeded = mercury__list__foldl2_6_p_4(TypeInfo_for_T_29, TypeInfo_for_A_30, TypeInfo_for_B_31, P_8, Var_23, STATE_VARIABLE_AccA_0_19, &STATE_VARIABLE_AccA_1_24, STATE_VARIABLE_AccB_0_21, &STATE_VARIABLE_AccB_1_25);
      if (succeeded)
      {
        if ((Cs_10 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          *STATE_VARIABLE_AccA_20 = STATE_VARIABLE_AccA_1_24;
          *STATE_VARIABLE_AccB_22 = STATE_VARIABLE_AccB_1_25;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word Y_15 = ((MR_Word) ((MR_hl_field(1, Cs_10, 0))));
          MR_Word Ys_16 = ((MR_Word) ((MR_hl_field(1, Cs_10, 1))));
          MR_Word next_value_of_C_9 = Y_15;
          MR_Word next_value_of_Cs_10 = Ys_16;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_19 = STATE_VARIABLE_AccA_1_24;
          MR_Box next_value_of_STATE_VARIABLE_AccB_0_21 = STATE_VARIABLE_AccB_1_25;

          // direct tailcall eliminated
          ;
          C_9 = next_value_of_C_9;
          Cs_10 = next_value_of_Cs_10;
          STATE_VARIABLE_AccA_0_19 = next_value_of_STATE_VARIABLE_AccA_0_19;
          STATE_VARIABLE_AccB_0_21 = next_value_of_STATE_VARIABLE_AccB_0_21;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__cord__foldl2_6_p_2(
  MR_Word TypeInfo_for_T_23,
  MR_Word TypeInfo_for_A_24,
  MR_Word TypeInfo_for_B_25,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_AccA_0_3,
  MR_Box * STATE_VARIABLE_AccA_4,
  MR_Box STATE_VARIABLE_AccB_0_5,
  MR_Box * STATE_VARIABLE_AccB_6)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_AccB_6 = STATE_VARIABLE_AccB_0_5;
    *STATE_VARIABLE_AccA_4 = STATE_VARIABLE_AccA_0_3;
  }
  else
  {
    MR_Word N_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));

    mercury__cord__foldl2_node_7_p_2(TypeInfo_for_T_23, TypeInfo_for_A_24, TypeInfo_for_B_25, HeadVar__1_1, N_15, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_AccA_0_3, STATE_VARIABLE_AccA_4, STATE_VARIABLE_AccB_0_5, STATE_VARIABLE_AccB_6);
  }
}

void MR_CALL 
mercury__cord__foldl2_node_7_p_2(
  MR_Word TypeInfo_for_T_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word P_8,
  MR_Word C_9,
  MR_Word Cs_10,
  MR_Box STATE_VARIABLE_AccA_0_19,
  MR_Box * STATE_VARIABLE_AccA_20,
  MR_Box STATE_VARIABLE_AccB_0_21,
  MR_Box * STATE_VARIABLE_AccB_22)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) C_9)) == (MR_Integer) 1))
    {
      MR_Word A_17 = ((MR_Word) ((MR_hl_field(1, C_9, 0))));
      MR_Word B_18 = ((MR_Word) ((MR_hl_field(1, C_9, 1))));
      MR_Word Var_28;
      MR_Word next_value_of_C_9;
      MR_Word next_value_of_Cs_10;

      {
        Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_28, 0) = ((MR_Box) (B_18));
        MR_hl_field(1, Var_28, 1) = ((MR_Box) (Cs_10));
      }
      // direct tailcall eliminated
      ;
      next_value_of_C_9 = A_17;
      next_value_of_Cs_10 = Var_28;
      C_9 = next_value_of_C_9;
      Cs_10 = next_value_of_Cs_10;
      continue;
    }
    else
    {
      MR_Box H_13 = (MR_hl_field(0, C_9, 0));
      MR_Word T_14 = ((MR_Word) ((MR_hl_field(0, C_9, 1))));
      MR_Word Var_23;
      MR_Box STATE_VARIABLE_AccA_1_24;
      MR_Box STATE_VARIABLE_AccB_1_25;

      {
        Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_23, 0) = H_13;
        MR_hl_field(1, Var_23, 1) = ((MR_Box) (T_14));
      }
      mercury__list__foldl2_6_p_2(TypeInfo_for_T_29, TypeInfo_for_A_30, TypeInfo_for_B_31, P_8, Var_23, STATE_VARIABLE_AccA_0_19, &STATE_VARIABLE_AccA_1_24, STATE_VARIABLE_AccB_0_21, &STATE_VARIABLE_AccB_1_25);
      if ((Cs_10 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *STATE_VARIABLE_AccA_20 = STATE_VARIABLE_AccA_1_24;
        *STATE_VARIABLE_AccB_22 = STATE_VARIABLE_AccB_1_25;
      }
      else
      {
        MR_Word Y_15 = ((MR_Word) ((MR_hl_field(1, Cs_10, 0))));
        MR_Word Ys_16 = ((MR_Word) ((MR_hl_field(1, Cs_10, 1))));
        MR_Word next_value_of_C_9 = Y_15;
        MR_Word next_value_of_Cs_10 = Ys_16;
        MR_Box next_value_of_STATE_VARIABLE_AccA_0_19 = STATE_VARIABLE_AccA_1_24;
        MR_Box next_value_of_STATE_VARIABLE_AccB_0_21 = STATE_VARIABLE_AccB_1_25;

        // direct tailcall eliminated
        ;
        C_9 = next_value_of_C_9;
        Cs_10 = next_value_of_Cs_10;
        STATE_VARIABLE_AccA_0_19 = next_value_of_STATE_VARIABLE_AccA_0_19;
        STATE_VARIABLE_AccB_0_21 = next_value_of_STATE_VARIABLE_AccB_0_21;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__cord__foldl2_6_p_1(
  MR_Word TypeInfo_for_T_23,
  MR_Word TypeInfo_for_A_24,
  MR_Word TypeInfo_for_B_25,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_AccA_0_3,
  MR_Box * STATE_VARIABLE_AccA_4,
  MR_Box STATE_VARIABLE_AccB_0_5,
  MR_Box * STATE_VARIABLE_AccB_6)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_AccB_6 = STATE_VARIABLE_AccB_0_5;
    *STATE_VARIABLE_AccA_4 = STATE_VARIABLE_AccA_0_3;
  }
  else
  {
    MR_Word N_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));

    mercury__cord__foldl2_node_7_p_1(TypeInfo_for_T_23, TypeInfo_for_A_24, TypeInfo_for_B_25, HeadVar__1_1, N_15, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_AccA_0_3, STATE_VARIABLE_AccA_4, STATE_VARIABLE_AccB_0_5, STATE_VARIABLE_AccB_6);
  }
}

void MR_CALL 
mercury__cord__foldl2_node_7_p_1(
  MR_Word TypeInfo_for_T_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word P_8,
  MR_Word C_9,
  MR_Word Cs_10,
  MR_Box STATE_VARIABLE_AccA_0_19,
  MR_Box * STATE_VARIABLE_AccA_20,
  MR_Box STATE_VARIABLE_AccB_0_21,
  MR_Box * STATE_VARIABLE_AccB_22)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) C_9)) == (MR_Integer) 1))
    {
      MR_Word A_17 = ((MR_Word) ((MR_hl_field(1, C_9, 0))));
      MR_Word B_18 = ((MR_Word) ((MR_hl_field(1, C_9, 1))));
      MR_Word Var_28;
      MR_Word next_value_of_C_9;
      MR_Word next_value_of_Cs_10;

      {
        Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_28, 0) = ((MR_Box) (B_18));
        MR_hl_field(1, Var_28, 1) = ((MR_Box) (Cs_10));
      }
      // direct tailcall eliminated
      ;
      next_value_of_C_9 = A_17;
      next_value_of_Cs_10 = Var_28;
      C_9 = next_value_of_C_9;
      Cs_10 = next_value_of_Cs_10;
      continue;
    }
    else
    {
      MR_Box H_13 = (MR_hl_field(0, C_9, 0));
      MR_Word T_14 = ((MR_Word) ((MR_hl_field(0, C_9, 1))));
      MR_Word Var_23;
      MR_Box STATE_VARIABLE_AccA_1_24;
      MR_Box STATE_VARIABLE_AccB_1_25;

      {
        Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_23, 0) = H_13;
        MR_hl_field(1, Var_23, 1) = ((MR_Box) (T_14));
      }
      mercury__list__foldl2_6_p_1(TypeInfo_for_T_29, TypeInfo_for_A_30, TypeInfo_for_B_31, P_8, Var_23, STATE_VARIABLE_AccA_0_19, &STATE_VARIABLE_AccA_1_24, STATE_VARIABLE_AccB_0_21, &STATE_VARIABLE_AccB_1_25);
      if ((Cs_10 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *STATE_VARIABLE_AccA_20 = STATE_VARIABLE_AccA_1_24;
        *STATE_VARIABLE_AccB_22 = STATE_VARIABLE_AccB_1_25;
      }
      else
      {
        MR_Word Y_15 = ((MR_Word) ((MR_hl_field(1, Cs_10, 0))));
        MR_Word Ys_16 = ((MR_Word) ((MR_hl_field(1, Cs_10, 1))));
        MR_Word next_value_of_C_9 = Y_15;
        MR_Word next_value_of_Cs_10 = Ys_16;
        MR_Box next_value_of_STATE_VARIABLE_AccA_0_19 = STATE_VARIABLE_AccA_1_24;
        MR_Box next_value_of_STATE_VARIABLE_AccB_0_21 = STATE_VARIABLE_AccB_1_25;

        // direct tailcall eliminated
        ;
        C_9 = next_value_of_C_9;
        Cs_10 = next_value_of_Cs_10;
        STATE_VARIABLE_AccA_0_19 = next_value_of_STATE_VARIABLE_AccA_0_19;
        STATE_VARIABLE_AccB_0_21 = next_value_of_STATE_VARIABLE_AccB_0_21;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__cord__foldl2_6_p_0(
  MR_Word TypeInfo_for_T_23,
  MR_Word TypeInfo_for_A_24,
  MR_Word TypeInfo_for_B_25,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_AccA_0_3,
  MR_Box * STATE_VARIABLE_AccA_4,
  MR_Box STATE_VARIABLE_AccB_0_5,
  MR_Box * STATE_VARIABLE_AccB_6)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_AccB_6 = STATE_VARIABLE_AccB_0_5;
    *STATE_VARIABLE_AccA_4 = STATE_VARIABLE_AccA_0_3;
  }
  else
  {
    MR_Word N_15 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));

    mercury__cord__foldl2_node_7_p_0(TypeInfo_for_T_23, TypeInfo_for_A_24, TypeInfo_for_B_25, HeadVar__1_1, N_15, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_AccA_0_3, STATE_VARIABLE_AccA_4, STATE_VARIABLE_AccB_0_5, STATE_VARIABLE_AccB_6);
  }
}

void MR_CALL 
mercury__cord__foldl2_node_7_p_0(
  MR_Word TypeInfo_for_T_29,
  MR_Word TypeInfo_for_A_30,
  MR_Word TypeInfo_for_B_31,
  MR_Word P_8,
  MR_Word C_9,
  MR_Word Cs_10,
  MR_Box STATE_VARIABLE_AccA_0_19,
  MR_Box * STATE_VARIABLE_AccA_20,
  MR_Box STATE_VARIABLE_AccB_0_21,
  MR_Box * STATE_VARIABLE_AccB_22)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) C_9)) == (MR_Integer) 1))
    {
      MR_Word A_17 = ((MR_Word) ((MR_hl_field(1, C_9, 0))));
      MR_Word B_18 = ((MR_Word) ((MR_hl_field(1, C_9, 1))));
      MR_Word Var_28;
      MR_Word next_value_of_C_9;
      MR_Word next_value_of_Cs_10;

      {
        Var_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_28, 0) = ((MR_Box) (B_18));
        MR_hl_field(1, Var_28, 1) = ((MR_Box) (Cs_10));
      }
      // direct tailcall eliminated
      ;
      next_value_of_C_9 = A_17;
      next_value_of_Cs_10 = Var_28;
      C_9 = next_value_of_C_9;
      Cs_10 = next_value_of_Cs_10;
      continue;
    }
    else
    {
      MR_Box H_13 = (MR_hl_field(0, C_9, 0));
      MR_Word T_14 = ((MR_Word) ((MR_hl_field(0, C_9, 1))));
      MR_Word Var_23;
      MR_Box STATE_VARIABLE_AccA_1_24;
      MR_Box STATE_VARIABLE_AccB_1_25;

      {
        Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_23, 0) = H_13;
        MR_hl_field(1, Var_23, 1) = ((MR_Box) (T_14));
      }
      mercury__list__foldl2_6_p_0(TypeInfo_for_T_29, TypeInfo_for_A_30, TypeInfo_for_B_31, P_8, Var_23, STATE_VARIABLE_AccA_0_19, &STATE_VARIABLE_AccA_1_24, STATE_VARIABLE_AccB_0_21, &STATE_VARIABLE_AccB_1_25);
      if ((Cs_10 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        *STATE_VARIABLE_AccA_20 = STATE_VARIABLE_AccA_1_24;
        *STATE_VARIABLE_AccB_22 = STATE_VARIABLE_AccB_1_25;
      }
      else
      {
        MR_Word Y_15 = ((MR_Word) ((MR_hl_field(1, Cs_10, 0))));
        MR_Word Ys_16 = ((MR_Word) ((MR_hl_field(1, Cs_10, 1))));
        MR_Word next_value_of_C_9 = Y_15;
        MR_Word next_value_of_Cs_10 = Ys_16;
        MR_Box next_value_of_STATE_VARIABLE_AccA_0_19 = STATE_VARIABLE_AccA_1_24;
        MR_Box next_value_of_STATE_VARIABLE_AccB_0_21 = STATE_VARIABLE_AccB_1_25;

        // direct tailcall eliminated
        ;
        C_9 = next_value_of_C_9;
        Cs_10 = next_value_of_Cs_10;
        STATE_VARIABLE_AccA_0_19 = next_value_of_STATE_VARIABLE_AccA_0_19;
        STATE_VARIABLE_AccB_0_21 = next_value_of_STATE_VARIABLE_AccB_0_21;
        continue;
      }
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__cord__foldl_pred_4_p_5(
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeInfo_for_A_16,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_AccA_0_3,
  MR_Box * STATE_VARIABLE_AccA_4)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_AccA_4 = STATE_VARIABLE_AccA_0_3;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word N_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));

    succeeded = mercury__cord__foldl_node_pred_5_p_5(TypeInfo_for_T_15, TypeInfo_for_A_16, HeadVar__1_1, N_10, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_AccA_0_3, STATE_VARIABLE_AccA_4);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__cord__foldl_node_pred_5_p_5(
  MR_Word TypeInfo_for_T_22,
  MR_Word TypeInfo_for_A_23,
  MR_Word P_6,
  MR_Word C_7,
  MR_Word Cs_8,
  MR_Box STATE_VARIABLE_AccA_0_16,
  MR_Box * STATE_VARIABLE_AccA_17)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) C_7)) == (MR_Integer) 1))
    {
      MR_Word A_14 = ((MR_Word) ((MR_hl_field(1, C_7, 0))));
      MR_Word B_15 = ((MR_Word) ((MR_hl_field(1, C_7, 1))));
      MR_Word Var_21;
      MR_Word next_value_of_C_7;
      MR_Word next_value_of_Cs_8;

      {
        Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_21, 0) = ((MR_Box) (B_15));
        MR_hl_field(1, Var_21, 1) = ((MR_Box) (Cs_8));
      }
      // direct tailcall eliminated
      ;
      next_value_of_C_7 = A_14;
      next_value_of_Cs_8 = Var_21;
      C_7 = next_value_of_C_7;
      Cs_8 = next_value_of_Cs_8;
      continue;
    }
    else
    {
      MR_Box H_10 = (MR_hl_field(0, C_7, 0));
      MR_Word T_11 = ((MR_Word) ((MR_hl_field(0, C_7, 1))));
      MR_Word Var_18;
      MR_Box STATE_VARIABLE_AccA_1_19;

      {
        Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_18, 0) = H_10;
        MR_hl_field(1, Var_18, 1) = ((MR_Box) (T_11));
      }
      succeeded = mercury__list__foldl_4_p_5(TypeInfo_for_T_22, TypeInfo_for_A_23, P_6, Var_18, STATE_VARIABLE_AccA_0_16, &STATE_VARIABLE_AccA_1_19);
      if (succeeded)
      {
        if ((Cs_8 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          *STATE_VARIABLE_AccA_17 = STATE_VARIABLE_AccA_1_19;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word Y_12 = ((MR_Word) ((MR_hl_field(1, Cs_8, 0))));
          MR_Word Ys_13 = ((MR_Word) ((MR_hl_field(1, Cs_8, 1))));
          MR_Word next_value_of_C_7 = Y_12;
          MR_Word next_value_of_Cs_8 = Ys_13;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_16 = STATE_VARIABLE_AccA_1_19;

          // direct tailcall eliminated
          ;
          C_7 = next_value_of_C_7;
          Cs_8 = next_value_of_Cs_8;
          STATE_VARIABLE_AccA_0_16 = next_value_of_STATE_VARIABLE_AccA_0_16;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__cord__foldl_pred_4_p_4(
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeInfo_for_A_16,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_AccA_0_3,
  MR_Box * STATE_VARIABLE_AccA_4)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_AccA_4 = STATE_VARIABLE_AccA_0_3;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word N_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));

    succeeded = mercury__cord__foldl_node_pred_5_p_4(TypeInfo_for_T_15, TypeInfo_for_A_16, HeadVar__1_1, N_10, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_AccA_0_3, STATE_VARIABLE_AccA_4);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__cord__foldl_node_pred_5_p_4(
  MR_Word TypeInfo_for_T_22,
  MR_Word TypeInfo_for_A_23,
  MR_Word P_6,
  MR_Word C_7,
  MR_Word Cs_8,
  MR_Box STATE_VARIABLE_AccA_0_16,
  MR_Box * STATE_VARIABLE_AccA_17)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) C_7)) == (MR_Integer) 1))
    {
      MR_Word A_14 = ((MR_Word) ((MR_hl_field(1, C_7, 0))));
      MR_Word B_15 = ((MR_Word) ((MR_hl_field(1, C_7, 1))));
      MR_Word Var_21;
      MR_Word next_value_of_C_7;
      MR_Word next_value_of_Cs_8;

      {
        Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_21, 0) = ((MR_Box) (B_15));
        MR_hl_field(1, Var_21, 1) = ((MR_Box) (Cs_8));
      }
      // direct tailcall eliminated
      ;
      next_value_of_C_7 = A_14;
      next_value_of_Cs_8 = Var_21;
      C_7 = next_value_of_C_7;
      Cs_8 = next_value_of_Cs_8;
      continue;
    }
    else
    {
      MR_Box H_10 = (MR_hl_field(0, C_7, 0));
      MR_Word T_11 = ((MR_Word) ((MR_hl_field(0, C_7, 1))));
      MR_Word Var_18;
      MR_Box STATE_VARIABLE_AccA_1_19;

      {
        Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_18, 0) = H_10;
        MR_hl_field(1, Var_18, 1) = ((MR_Box) (T_11));
      }
      succeeded = mercury__list__foldl_4_p_4(TypeInfo_for_T_22, TypeInfo_for_A_23, P_6, Var_18, STATE_VARIABLE_AccA_0_16, &STATE_VARIABLE_AccA_1_19);
      if (succeeded)
      {
        if ((Cs_8 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          *STATE_VARIABLE_AccA_17 = STATE_VARIABLE_AccA_1_19;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word Y_12 = ((MR_Word) ((MR_hl_field(1, Cs_8, 0))));
          MR_Word Ys_13 = ((MR_Word) ((MR_hl_field(1, Cs_8, 1))));
          MR_Word next_value_of_C_7 = Y_12;
          MR_Word next_value_of_Cs_8 = Ys_13;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_16 = STATE_VARIABLE_AccA_1_19;

          // direct tailcall eliminated
          ;
          C_7 = next_value_of_C_7;
          Cs_8 = next_value_of_Cs_8;
          STATE_VARIABLE_AccA_0_16 = next_value_of_STATE_VARIABLE_AccA_0_16;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__cord__foldl_pred_4_p_3(
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeInfo_for_A_16,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_AccA_0_3,
  MR_Box * STATE_VARIABLE_AccA_4)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *STATE_VARIABLE_AccA_4 = STATE_VARIABLE_AccA_0_3;
    succeeded = MR_TRUE;
  }
  else
  {
    MR_Word N_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));

    succeeded = mercury__cord__foldl_node_pred_5_p_3(TypeInfo_for_T_15, TypeInfo_for_A_16, HeadVar__1_1, N_10, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_AccA_0_3, STATE_VARIABLE_AccA_4);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__cord__foldl_node_pred_5_p_3(
  MR_Word TypeInfo_for_T_22,
  MR_Word TypeInfo_for_A_23,
  MR_Word P_6,
  MR_Word C_7,
  MR_Word Cs_8,
  MR_Box STATE_VARIABLE_AccA_0_16,
  MR_Box * STATE_VARIABLE_AccA_17)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) C_7)) == (MR_Integer) 1))
    {
      MR_Word A_14 = ((MR_Word) ((MR_hl_field(1, C_7, 0))));
      MR_Word B_15 = ((MR_Word) ((MR_hl_field(1, C_7, 1))));
      MR_Word Var_21;
      MR_Word next_value_of_C_7;
      MR_Word next_value_of_Cs_8;

      {
        Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_21, 0) = ((MR_Box) (B_15));
        MR_hl_field(1, Var_21, 1) = ((MR_Box) (Cs_8));
      }
      // direct tailcall eliminated
      ;
      next_value_of_C_7 = A_14;
      next_value_of_Cs_8 = Var_21;
      C_7 = next_value_of_C_7;
      Cs_8 = next_value_of_Cs_8;
      continue;
    }
    else
    {
      MR_Box H_10 = (MR_hl_field(0, C_7, 0));
      MR_Word T_11 = ((MR_Word) ((MR_hl_field(0, C_7, 1))));
      MR_Word Var_18;
      MR_Box STATE_VARIABLE_AccA_1_19;

      {
        Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_18, 0) = H_10;
        MR_hl_field(1, Var_18, 1) = ((MR_Box) (T_11));
      }
      succeeded = mercury__list__foldl_4_p_3(TypeInfo_for_T_22, TypeInfo_for_A_23, P_6, Var_18, STATE_VARIABLE_AccA_0_16, &STATE_VARIABLE_AccA_1_19);
      if (succeeded)
      {
        if ((Cs_8 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          *STATE_VARIABLE_AccA_17 = STATE_VARIABLE_AccA_1_19;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word Y_12 = ((MR_Word) ((MR_hl_field(1, Cs_8, 0))));
          MR_Word Ys_13 = ((MR_Word) ((MR_hl_field(1, Cs_8, 1))));
          MR_Word next_value_of_C_7 = Y_12;
          MR_Word next_value_of_Cs_8 = Ys_13;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_16 = STATE_VARIABLE_AccA_1_19;

          // direct tailcall eliminated
          ;
          C_7 = next_value_of_C_7;
          Cs_8 = next_value_of_Cs_8;
          STATE_VARIABLE_AccA_0_16 = next_value_of_STATE_VARIABLE_AccA_0_16;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__cord__foldl_pred_4_p_2(
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeInfo_for_A_16,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_AccA_0_3,
  MR_Box * STATE_VARIABLE_AccA_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_AccA_4 = STATE_VARIABLE_AccA_0_3;
  else
  {
    MR_Word N_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));

    mercury__cord__foldl_node_pred_5_p_2(TypeInfo_for_T_15, TypeInfo_for_A_16, HeadVar__1_1, N_10, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_AccA_0_3, STATE_VARIABLE_AccA_4);
  }
}

void MR_CALL 
mercury__cord__foldl_node_pred_5_p_2(
  MR_Word TypeInfo_for_T_22,
  MR_Word TypeInfo_for_A_23,
  MR_Word P_6,
  MR_Word C_7,
  MR_Word Cs_8,
  MR_Box STATE_VARIABLE_AccA_0_16,
  MR_Box * STATE_VARIABLE_AccA_17)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) C_7)) == (MR_Integer) 1))
    {
      MR_Word A_14 = ((MR_Word) ((MR_hl_field(1, C_7, 0))));
      MR_Word B_15 = ((MR_Word) ((MR_hl_field(1, C_7, 1))));
      MR_Word Var_21;
      MR_Word next_value_of_C_7;
      MR_Word next_value_of_Cs_8;

      {
        Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_21, 0) = ((MR_Box) (B_15));
        MR_hl_field(1, Var_21, 1) = ((MR_Box) (Cs_8));
      }
      // direct tailcall eliminated
      ;
      next_value_of_C_7 = A_14;
      next_value_of_Cs_8 = Var_21;
      C_7 = next_value_of_C_7;
      Cs_8 = next_value_of_Cs_8;
      continue;
    }
    else
    {
      MR_Box H_10 = (MR_hl_field(0, C_7, 0));
      MR_Word T_11 = ((MR_Word) ((MR_hl_field(0, C_7, 1))));
      MR_Word Var_18;
      MR_Box STATE_VARIABLE_AccA_1_19;

      {
        Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_18, 0) = H_10;
        MR_hl_field(1, Var_18, 1) = ((MR_Box) (T_11));
      }
      mercury__list__foldl_4_p_2(TypeInfo_for_T_22, TypeInfo_for_A_23, P_6, Var_18, STATE_VARIABLE_AccA_0_16, &STATE_VARIABLE_AccA_1_19);
      if ((Cs_8 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_AccA_17 = STATE_VARIABLE_AccA_1_19;
      else
      {
        MR_Word Y_12 = ((MR_Word) ((MR_hl_field(1, Cs_8, 0))));
        MR_Word Ys_13 = ((MR_Word) ((MR_hl_field(1, Cs_8, 1))));
        MR_Word next_value_of_C_7 = Y_12;
        MR_Word next_value_of_Cs_8 = Ys_13;
        MR_Box next_value_of_STATE_VARIABLE_AccA_0_16 = STATE_VARIABLE_AccA_1_19;

        // direct tailcall eliminated
        ;
        C_7 = next_value_of_C_7;
        Cs_8 = next_value_of_Cs_8;
        STATE_VARIABLE_AccA_0_16 = next_value_of_STATE_VARIABLE_AccA_0_16;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__cord__foldl_pred_4_p_1(
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeInfo_for_A_16,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_AccA_0_3,
  MR_Box * STATE_VARIABLE_AccA_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_AccA_4 = STATE_VARIABLE_AccA_0_3;
  else
  {
    MR_Word N_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));

    mercury__cord__foldl_node_pred_5_p_1(TypeInfo_for_T_15, TypeInfo_for_A_16, HeadVar__1_1, N_10, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_AccA_0_3, STATE_VARIABLE_AccA_4);
  }
}

void MR_CALL 
mercury__cord__foldl_node_pred_5_p_1(
  MR_Word TypeInfo_for_T_22,
  MR_Word TypeInfo_for_A_23,
  MR_Word P_6,
  MR_Word C_7,
  MR_Word Cs_8,
  MR_Box STATE_VARIABLE_AccA_0_16,
  MR_Box * STATE_VARIABLE_AccA_17)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) C_7)) == (MR_Integer) 1))
    {
      MR_Word A_14 = ((MR_Word) ((MR_hl_field(1, C_7, 0))));
      MR_Word B_15 = ((MR_Word) ((MR_hl_field(1, C_7, 1))));
      MR_Word Var_21;
      MR_Word next_value_of_C_7;
      MR_Word next_value_of_Cs_8;

      {
        Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_21, 0) = ((MR_Box) (B_15));
        MR_hl_field(1, Var_21, 1) = ((MR_Box) (Cs_8));
      }
      // direct tailcall eliminated
      ;
      next_value_of_C_7 = A_14;
      next_value_of_Cs_8 = Var_21;
      C_7 = next_value_of_C_7;
      Cs_8 = next_value_of_Cs_8;
      continue;
    }
    else
    {
      MR_Box H_10 = (MR_hl_field(0, C_7, 0));
      MR_Word T_11 = ((MR_Word) ((MR_hl_field(0, C_7, 1))));
      MR_Word Var_18;
      MR_Box STATE_VARIABLE_AccA_1_19;

      {
        Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_18, 0) = H_10;
        MR_hl_field(1, Var_18, 1) = ((MR_Box) (T_11));
      }
      mercury__list__foldl_4_p_1(TypeInfo_for_T_22, TypeInfo_for_A_23, P_6, Var_18, STATE_VARIABLE_AccA_0_16, &STATE_VARIABLE_AccA_1_19);
      if ((Cs_8 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_AccA_17 = STATE_VARIABLE_AccA_1_19;
      else
      {
        MR_Word Y_12 = ((MR_Word) ((MR_hl_field(1, Cs_8, 0))));
        MR_Word Ys_13 = ((MR_Word) ((MR_hl_field(1, Cs_8, 1))));
        MR_Word next_value_of_C_7 = Y_12;
        MR_Word next_value_of_Cs_8 = Ys_13;
        MR_Box next_value_of_STATE_VARIABLE_AccA_0_16 = STATE_VARIABLE_AccA_1_19;

        // direct tailcall eliminated
        ;
        C_7 = next_value_of_C_7;
        Cs_8 = next_value_of_Cs_8;
        STATE_VARIABLE_AccA_0_16 = next_value_of_STATE_VARIABLE_AccA_0_16;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__cord__foldl_pred_4_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeInfo_for_A_16,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_AccA_0_3,
  MR_Box * STATE_VARIABLE_AccA_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_AccA_4 = STATE_VARIABLE_AccA_0_3;
  else
  {
    MR_Word N_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));

    mercury__cord__foldl_node_pred_5_p_0(TypeInfo_for_T_15, TypeInfo_for_A_16, HeadVar__1_1, N_10, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_AccA_0_3, STATE_VARIABLE_AccA_4);
  }
}

void MR_CALL 
mercury__cord__foldl_node_pred_5_p_0(
  MR_Word TypeInfo_for_T_22,
  MR_Word TypeInfo_for_A_23,
  MR_Word P_6,
  MR_Word C_7,
  MR_Word Cs_8,
  MR_Box STATE_VARIABLE_AccA_0_16,
  MR_Box * STATE_VARIABLE_AccA_17)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) C_7)) == (MR_Integer) 1))
    {
      MR_Word A_14 = ((MR_Word) ((MR_hl_field(1, C_7, 0))));
      MR_Word B_15 = ((MR_Word) ((MR_hl_field(1, C_7, 1))));
      MR_Word Var_21;
      MR_Word next_value_of_C_7;
      MR_Word next_value_of_Cs_8;

      {
        Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_21, 0) = ((MR_Box) (B_15));
        MR_hl_field(1, Var_21, 1) = ((MR_Box) (Cs_8));
      }
      // direct tailcall eliminated
      ;
      next_value_of_C_7 = A_14;
      next_value_of_Cs_8 = Var_21;
      C_7 = next_value_of_C_7;
      Cs_8 = next_value_of_Cs_8;
      continue;
    }
    else
    {
      MR_Box H_10 = (MR_hl_field(0, C_7, 0));
      MR_Word T_11 = ((MR_Word) ((MR_hl_field(0, C_7, 1))));
      MR_Word Var_18;
      MR_Box STATE_VARIABLE_AccA_1_19;

      {
        Var_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_18, 0) = H_10;
        MR_hl_field(1, Var_18, 1) = ((MR_Box) (T_11));
      }
      mercury__list__foldl_4_p_0(TypeInfo_for_T_22, TypeInfo_for_A_23, P_6, Var_18, STATE_VARIABLE_AccA_0_16, &STATE_VARIABLE_AccA_1_19);
      if ((Cs_8 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_AccA_17 = STATE_VARIABLE_AccA_1_19;
      else
      {
        MR_Word Y_12 = ((MR_Word) ((MR_hl_field(1, Cs_8, 0))));
        MR_Word Ys_13 = ((MR_Word) ((MR_hl_field(1, Cs_8, 1))));
        MR_Word next_value_of_C_7 = Y_12;
        MR_Word next_value_of_Cs_8 = Ys_13;
        MR_Box next_value_of_STATE_VARIABLE_AccA_0_16 = STATE_VARIABLE_AccA_1_19;

        // direct tailcall eliminated
        ;
        C_7 = next_value_of_C_7;
        Cs_8 = next_value_of_Cs_8;
        STATE_VARIABLE_AccA_0_16 = next_value_of_STATE_VARIABLE_AccA_0_16;
        continue;
      }
    }
    break;
  }
}

MR_Box MR_CALL 
mercury__cord__foldl_3_f_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word TypeInfo_for_A_13,
  MR_Word F_1,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  MR_Box AccA_4;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    AccA_4 = HeadVar__3_3;
  else
  {
    MR_Word N_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));

    mercury__cord__foldl_node_5_p_0(TypeInfo_for_T_12, TypeInfo_for_A_13, F_1, N_8, (MR_Word) ((MR_Unsigned) 0U), HeadVar__3_3, &AccA_4);
  }
  return AccA_4;
}

void MR_CALL 
mercury__cord__foldl_node_5_p_0(
  MR_Word TypeInfo_for_T_22,
  MR_Word TypeInfo_for_U_23,
  MR_Word F_6,
  MR_Word C_7,
  MR_Word Cs_8,
  MR_Box STATE_VARIABLE_AccA_0_16,
  MR_Box * STATE_VARIABLE_AccA_17)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) C_7)) == (MR_Integer) 1))
    {
      MR_Word A_14 = ((MR_Word) ((MR_hl_field(1, C_7, 0))));
      MR_Word B_15 = ((MR_Word) ((MR_hl_field(1, C_7, 1))));
      MR_Word Var_21;
      MR_Word next_value_of_C_7;
      MR_Word next_value_of_Cs_8;

      {
        Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_21, 0) = ((MR_Box) (B_15));
        MR_hl_field(1, Var_21, 1) = ((MR_Box) (Cs_8));
      }
      // direct tailcall eliminated
      ;
      next_value_of_C_7 = A_14;
      next_value_of_Cs_8 = Var_21;
      C_7 = next_value_of_C_7;
      Cs_8 = next_value_of_Cs_8;
      continue;
    }
    else
    {
      MR_Box H_10 = (MR_hl_field(0, C_7, 0));
      MR_Word T_11 = ((MR_Word) ((MR_hl_field(0, C_7, 1))));
      MR_Box STATE_VARIABLE_AccA_1_18;
      MR_Word Var_19;

      {
        Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_19, 0) = H_10;
        MR_hl_field(1, Var_19, 1) = ((MR_Box) (T_11));
      }
      STATE_VARIABLE_AccA_1_18 = mercury__list__foldl_3_f_0(TypeInfo_for_T_22, TypeInfo_for_U_23, F_6, Var_19, STATE_VARIABLE_AccA_0_16);
      if ((Cs_8 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_AccA_17 = STATE_VARIABLE_AccA_1_18;
      else
      {
        MR_Word Y_12 = ((MR_Word) ((MR_hl_field(1, Cs_8, 0))));
        MR_Word Ys_13 = ((MR_Word) ((MR_hl_field(1, Cs_8, 1))));
        MR_Word next_value_of_C_7 = Y_12;
        MR_Word next_value_of_Cs_8 = Ys_13;
        MR_Box next_value_of_STATE_VARIABLE_AccA_0_16 = STATE_VARIABLE_AccA_1_18;

        // direct tailcall eliminated
        ;
        C_7 = next_value_of_C_7;
        Cs_8 = next_value_of_Cs_8;
        STATE_VARIABLE_AccA_0_16 = next_value_of_STATE_VARIABLE_AccA_0_16;
        continue;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__cord__filter_4_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Word N_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));

    mercury__cord__filter_node_4_p_0(TypeInfo_for_T_10, P_1, N_7, HeadVar__3_3, HeadVar__4_4);
  }
}

void MR_CALL 
mercury__cord__filter_node_4_p_0(
  MR_Word TypeInfo_for_T_26,
  MR_Word P_5,
  MR_Word Node_6,
  MR_Word * Trues_7,
  MR_Word * Falses_8)
{
  if (((MR_tag((MR_Word) Node_6)) == (MR_Integer) 1))
  {
    MR_Word A_17 = ((MR_Word) ((MR_hl_field(1, Node_6, 0))));
    MR_Word B_18 = ((MR_Word) ((MR_hl_field(1, Node_6, 1))));
    MR_Word CATrues_19;
    MR_Word CAFalses_20;
    MR_Word CBTrues_21;
    MR_Word CBFalses_22;

    mercury__cord__filter_node_4_p_0(TypeInfo_for_T_26, P_5, A_17, &CATrues_19, &CAFalses_20);
    mercury__cord__filter_node_4_p_0(TypeInfo_for_T_26, P_5, B_18, &CBTrues_21, &CBFalses_22);
    *Trues_7 = mercury__cord__f_43_43_2_f_0(TypeInfo_for_T_26, CATrues_19, CBTrues_21);
    *Falses_8 = mercury__cord__f_43_43_2_f_0(TypeInfo_for_T_26, CAFalses_20, CBFalses_22);
  }
  else
  {
    MR_Box H_9 = (MR_hl_field(0, Node_6, 0));
    MR_Word T_10 = ((MR_Word) ((MR_hl_field(0, Node_6, 1))));
    MR_Word TrueList_11;
    MR_Word FalseList_12;
    MR_Word Var_23;

    {
      Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_23, 0) = H_9;
      MR_hl_field(1, Var_23, 1) = ((MR_Box) (T_10));
    }
    mercury__list__filter_4_p_0(TypeInfo_for_T_26, P_5, Var_23, &TrueList_11, &FalseList_12);
    if ((TrueList_11 == (MR_Word) ((MR_Unsigned) 0U)))
      *Trues_7 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box TH_13 = (MR_hl_field(1, TrueList_11, 0));
      MR_Word TT_14 = ((MR_Word) ((MR_hl_field(1, TrueList_11, 1))));
      MR_Word Var_24;

      {
        Var_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_24, 0) = TH_13;
        MR_hl_field(0, Var_24, 1) = ((MR_Box) (TT_14));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Trues_7 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_24));
      }
    }
    if ((FalseList_12 == (MR_Word) ((MR_Unsigned) 0U)))
      *Falses_8 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box FH_15 = (MR_hl_field(1, FalseList_12, 0));
      MR_Word FT_16 = ((MR_Word) ((MR_hl_field(1, FalseList_12, 1))));
      MR_Word Var_25;

      {
        Var_25 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_25, 0) = FH_15;
        MR_hl_field(0, Var_25, 1) = ((MR_Box) (FT_16));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Falses_8 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_25));
      }
    }
  }
}

void MR_CALL 
mercury__cord__filter_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word N_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));

    mercury__cord__filter_node_3_p_0(TypeInfo_for_T_8, P_1, N_6, HeadVar__3_3);
  }
}

void MR_CALL 
mercury__cord__filter_node_3_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word P_4,
  MR_Word Node_5,
  MR_Word * Trues_6)
{
  if (((MR_tag((MR_Word) Node_5)) == (MR_Integer) 1))
  {
    MR_Word A_12 = ((MR_Word) ((MR_hl_field(1, Node_5, 0))));
    MR_Word B_13 = ((MR_Word) ((MR_hl_field(1, Node_5, 1))));
    MR_Word CATrues_14;
    MR_Word CBTrues_15;

    mercury__cord__filter_node_3_p_0(TypeInfo_for_T_18, P_4, A_12, &CATrues_14);
    mercury__cord__filter_node_3_p_0(TypeInfo_for_T_18, P_4, B_13, &CBTrues_15);
    *Trues_6 = mercury__cord__f_43_43_2_f_0(TypeInfo_for_T_18, CATrues_14, CBTrues_15);
  }
  else
  {
    MR_Box H_7 = (MR_hl_field(0, Node_5, 0));
    MR_Word T_8 = ((MR_Word) ((MR_hl_field(0, Node_5, 1))));
    MR_Word TrueList_9;
    MR_Word Var_16;

    {
      Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_16, 0) = H_7;
      MR_hl_field(1, Var_16, 1) = ((MR_Box) (T_8));
    }
    mercury__list__filter_3_p_0(TypeInfo_for_T_18, P_4, Var_16, &TrueList_9);
    if ((TrueList_9 == (MR_Word) ((MR_Unsigned) 0U)))
      *Trues_6 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box TH_10 = (MR_hl_field(1, TrueList_9, 0));
      MR_Word TT_11 = ((MR_Word) ((MR_hl_field(1, TrueList_9, 1))));
      MR_Word Var_17;

      {
        Var_17 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_17, 0) = TH_10;
        MR_hl_field(0, Var_17, 1) = ((MR_Box) (TT_11));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Trues_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_17));
      }
    }
  }
}

void MR_CALL 
mercury__cord__map_pred_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word TypeInfo_for_U_9,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word N_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word PN_7;

    mercury__cord__map_pred_node_3_p_0(TypeInfo_for_T_8, TypeInfo_for_U_9, P_1, N_6, &PN_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (PN_7));
    }
  }
}

void MR_CALL 
mercury__cord__LCMC__pred__map_pred_node__1_3_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeInfo_for_U_16,
  MR_Word P_4,
  MR_Word Node_5,
  MR_Word * AddrOfPNode_18)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) Node_5)) == (MR_Integer) 1))
    {
      MR_Word A_11 = ((MR_Word) ((MR_hl_field(1, Node_5, 0))));
      MR_Word B_12 = ((MR_Word) ((MR_hl_field(1, Node_5, 1))));
      MR_Word PA_13;
      MR_Word PNode_6;
      MR_Word * AddrPB_17;
      MR_Word next_value_of_Node_5;
      MR_Word * next_value_of_AddrOfPNode_18;

      mercury__cord__map_pred_node_3_p_0(TypeInfo_for_T_15, TypeInfo_for_U_16, P_4, A_11, &PA_13);
      {
        PNode_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, PNode_6, 0) = ((MR_Box) (PA_13));
        MR_hl_field(1, PNode_6, 1) = NULL;
      }
      AddrPB_17 = (MR_Word *) (&(MR_hl_field(1, PNode_6, 1)));
      *AddrOfPNode_18 = PNode_6;
      // direct tailcall eliminated
      ;
      next_value_of_Node_5 = B_12;
      next_value_of_AddrOfPNode_18 = AddrPB_17;
      Node_5 = next_value_of_Node_5;
      AddrOfPNode_18 = next_value_of_AddrOfPNode_18;
      continue;
    }
    else
    {
      MR_Box H_7 = (MR_hl_field(0, Node_5, 0));
      MR_Word T_8 = ((MR_Word) ((MR_hl_field(0, Node_5, 1))));
      MR_Box PH_9;
      MR_Word PT_10;
      MR_Word PNode_19;
      void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_4, 1))));

      func_0(((MR_Box) (P_4)), H_7, &PH_9);
      mercury__list__map_3_p_0(TypeInfo_for_T_15, TypeInfo_for_U_16, P_4, T_8, &PT_10);
      {
        PNode_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, PNode_19, 0) = PH_9;
        MR_hl_field(0, PNode_19, 1) = ((MR_Box) (PT_10));
      }
      *AddrOfPNode_18 = PNode_19;
    }
    break;
  }
}

void MR_CALL 
mercury__cord__map_pred_node_3_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeInfo_for_U_16,
  MR_Word P_4,
  MR_Word Node_5,
  MR_Word * PNode_6)
{
  if (((MR_tag((MR_Word) Node_5)) == (MR_Integer) 1))
  {
    MR_Word A_11 = ((MR_Word) ((MR_hl_field(1, Node_5, 0))));
    MR_Word B_12 = ((MR_Word) ((MR_hl_field(1, Node_5, 1))));
    MR_Word PA_13;
    MR_Word * AddrPB_17;

    mercury__cord__map_pred_node_3_p_0(TypeInfo_for_T_15, TypeInfo_for_U_16, P_4, A_11, &PA_13);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *PNode_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (PA_13));
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrPB_17 = (MR_Word *) (&(MR_hl_field(1, *PNode_6, 1)));
    mercury__cord__LCMC__pred__map_pred_node__1_3_p_0(TypeInfo_for_T_15, TypeInfo_for_U_16, P_4, B_12, AddrPB_17);
  }
  else
  {
    MR_Box H_7 = (MR_hl_field(0, Node_5, 0));
    MR_Word T_8 = ((MR_Word) ((MR_hl_field(0, Node_5, 1))));
    MR_Box PH_9;
    MR_Word PT_10;
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_4, 1))));

    func_0(((MR_Box) (P_4)), H_7, &PH_9);
    mercury__list__map_3_p_0(TypeInfo_for_T_15, TypeInfo_for_U_16, P_4, T_8, &PT_10);
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *PNode_6 = base;
      MR_hl_field(0, base, 0) = PH_9;
      MR_hl_field(0, base, 1) = ((MR_Box) (PT_10));
    }
  }
}

MR_Word MR_CALL 
mercury__cord__map_2_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word TypeInfo_for_U_9,
  MR_Word F_1,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word N_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Var_7;

    Var_7 = mercury__cord__map_func_node_2_f_0(TypeInfo_for_T_8, TypeInfo_for_U_9, F_1, N_6);
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_7));
    }
  }
  return HeadVar__3_3;
}

void MR_CALL 
mercury__cord__LCMC__func__map_func_node__1_3_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeInfo_for_U_16,
  MR_Word F_4,
  MR_Word Node_5,
  MR_Word * AddrOfPNode_18)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) Node_5)) == (MR_Integer) 1))
    {
      MR_Word A_9 = ((MR_Word) ((MR_hl_field(1, Node_5, 0))));
      MR_Word B_10 = ((MR_Word) ((MR_hl_field(1, Node_5, 1))));
      MR_Word Var_13;
      MR_Word PNode_6;
      MR_Word * AddrSCCcallarg_14_17;
      MR_Word next_value_of_Node_5;
      MR_Word * next_value_of_AddrOfPNode_18;

      Var_13 = mercury__cord__map_func_node_2_f_0(TypeInfo_for_T_15, TypeInfo_for_U_16, F_4, A_9);
      {
        PNode_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, PNode_6, 0) = ((MR_Box) (Var_13));
        MR_hl_field(1, PNode_6, 1) = NULL;
      }
      AddrSCCcallarg_14_17 = (MR_Word *) (&(MR_hl_field(1, PNode_6, 1)));
      *AddrOfPNode_18 = PNode_6;
      // direct tailcall eliminated
      ;
      next_value_of_Node_5 = B_10;
      next_value_of_AddrOfPNode_18 = AddrSCCcallarg_14_17;
      Node_5 = next_value_of_Node_5;
      AddrOfPNode_18 = next_value_of_AddrOfPNode_18;
      continue;
    }
    else
    {
      MR_Box H_7 = (MR_hl_field(0, Node_5, 0));
      MR_Word T_8 = ((MR_Word) ((MR_hl_field(0, Node_5, 1))));
      MR_Box Var_11;
      MR_Word Var_12;
      MR_Word PNode_19;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, F_4, 1))));

      Var_11 = func_0(((MR_Box) (F_4)), H_7);
      Var_12 = mercury__list__map_2_f_0(TypeInfo_for_T_15, TypeInfo_for_U_16, F_4, T_8);
      {
        PNode_19 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, PNode_19, 0) = Var_11;
        MR_hl_field(0, PNode_19, 1) = ((MR_Box) (Var_12));
      }
      *AddrOfPNode_18 = PNode_19;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__cord__map_func_node_2_f_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word TypeInfo_for_U_16,
  MR_Word F_4,
  MR_Word Node_5)
{
  MR_Word PNode_6;

  if (((MR_tag((MR_Word) Node_5)) == (MR_Integer) 1))
  {
    MR_Word A_9 = ((MR_Word) ((MR_hl_field(1, Node_5, 0))));
    MR_Word B_10 = ((MR_Word) ((MR_hl_field(1, Node_5, 1))));
    MR_Word Var_13;
    MR_Word * AddrSCCcallarg_14_17;

    Var_13 = mercury__cord__map_func_node_2_f_0(TypeInfo_for_T_15, TypeInfo_for_U_16, F_4, A_9);
    {
      PNode_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, PNode_6, 0) = ((MR_Box) (Var_13));
      MR_hl_field(1, PNode_6, 1) = NULL;
    }
    AddrSCCcallarg_14_17 = (MR_Word *) (&(MR_hl_field(1, PNode_6, 1)));
    mercury__cord__LCMC__func__map_func_node__1_3_p_0(TypeInfo_for_T_15, TypeInfo_for_U_16, F_4, B_10, AddrSCCcallarg_14_17);
  }
  else
  {
    MR_Box H_7 = (MR_hl_field(0, Node_5, 0));
    MR_Word T_8 = ((MR_Word) ((MR_hl_field(0, Node_5, 1))));
    MR_Box Var_11;
    MR_Word Var_12;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, F_4, 1))));

    Var_11 = func_0(((MR_Box) (F_4)), H_7);
    Var_12 = mercury__list__map_2_f_0(TypeInfo_for_T_15, TypeInfo_for_U_16, F_4, T_8);
    {
      PNode_6 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, PNode_6, 0) = Var_11;
      MR_hl_field(0, PNode_6, 1) = ((MR_Box) (Var_12));
    }
  }
  return PNode_6;
}

MR_bool MR_CALL 
mercury__cord__find_first_match_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word P_4,
  MR_Word HeadVar__2_2,
  MR_Box * FirstMatch_6)
{
  MR_bool succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word NX_5;

  if (succeeded)
  {
    NX_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    succeeded = mercury__cord__find_first_match_node_3_p_0(TypeInfo_for_T_7, P_4, NX_5, FirstMatch_6);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__cord__find_first_match_node_3_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word P_4,
  MR_Word Node_5,
  MR_Box * FirstMatch_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) Node_5)) == (MR_Integer) 1))
    {
      MR_Word XA_9 = ((MR_Word) ((MR_hl_field(1, Node_5, 0))));
      MR_Word XB_10 = ((MR_Word) ((MR_hl_field(1, Node_5, 1))));
      MR_Box FirstMatchPrime_11;

      succeeded = mercury__cord__find_first_match_node_3_p_0(TypeInfo_for_T_12, P_4, XA_9, &FirstMatchPrime_11);
      if (succeeded)
      {
        *FirstMatch_6 = FirstMatchPrime_11;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_Node_5 = XB_10;

        // direct tailcall eliminated
        ;
        Node_5 = next_value_of_Node_5;
        continue;
      }
    }
    else
    {
      MR_Box XH_7 = (MR_hl_field(0, Node_5, 0));
      MR_Word XT_8 = ((MR_Word) ((MR_hl_field(0, Node_5, 1))));
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(0, P_4, 1))));

      succeeded = func_0(((MR_Box) (P_4)), XH_7);
      if (succeeded)
      {
        *FirstMatch_6 = XH_7;
        succeeded = MR_TRUE;
      }
      else
        succeeded = mercury__list__find_first_match_3_p_0(TypeInfo_for_T_12, P_4, XT_8, FirstMatch_6);
    }
    return succeeded;
    break;
  }
}

MR_Word MR_CALL 
mercury__cord__rev_cord_list_to_list_1_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word RevCords_3)
{
  MR_Word List_4;

  List_4 = mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_f_in__list_0(TypeInfo_for_T_7, RevCords_3, (MR_Word) ((MR_Unsigned) 0U));
  return List_4;
}

MR_Word MR_CALL 
mercury__cord__cord_list_to_list_1_f_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word Cords_3)
{
  MR_Word List_4;
  MR_Word TypeInfo_8_8;
  MR_Word RevCords_5;
  MR_Word conv0_RevCords_5;

  {
    TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_8_8, 0) = ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1));
    MR_hl_field(0, TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_6));
  }
  mercury__list__reverse_2_p_0(TypeInfo_8_8, (MR_Word) (Cords_3), &conv0_RevCords_5);
  RevCords_5 = (MR_Word) (conv0_RevCords_5);
  List_4 = mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_f_in__list_0(TypeInfo_for_T_6, RevCords_5, (MR_Word) ((MR_Unsigned) 0U));
  return List_4;
}

static MR_Word MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_49_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_f_in__list_0(
  MR_Word Var_20,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_Word HeadVar__4_4;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Word Var_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Var_13;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;

      if ((Var_9 == (MR_Word) ((MR_Unsigned) 0U)))
        Var_13 = HeadVar__3_3;
      else
      {
        MR_Word N_22 = ((MR_Word) ((MR_hl_field(1, Var_9, 0))));
        MR_Word Var_24;

        {
          Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_24, 0) = ((MR_Box) (N_22));
          MR_hl_field(1, Var_24, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_13 = mercury__cord__to_list_2_2_f_0(Var_20, Var_24, HeadVar__3_3);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_10;
      next_value_of_HeadVar__3_3 = Var_13;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    return HeadVar__4_4;
    break;
  }
}

MR_Word MR_CALL 
mercury__cord__to_rev_list_1_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word N_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Var_4;

    {
      Var_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_4, 0) = ((MR_Box) (N_3));
      MR_hl_field(1, Var_4, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    HeadVar__2_2 = mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_111_95_114_101_118_95_108_105_115_116_95_110_111_100_101_115_95_95_91_49_93_95_48_2_f_0(Var_4, (MR_Word) ((MR_Unsigned) 0U));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__cord__rev_list_1_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word C_3)
{
  MR_Word HeadVar__2_2;

  if ((C_3 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word N_5 = ((MR_Word) ((MR_hl_field(1, C_3, 0))));
    MR_Word Var_6;

    {
      Var_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_6, 0) = ((MR_Box) (N_5));
      MR_hl_field(1, Var_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    HeadVar__2_2 = mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_111_95_114_101_118_95_108_105_115_116_95_110_111_100_101_115_95_95_91_49_93_95_48_2_f_0(Var_6, (MR_Word) ((MR_Unsigned) 0U));
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_111_95_114_101_118_95_108_105_115_116_95_110_111_100_101_115_95_95_91_49_93_95_48_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_Word L_3;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      L_3 = HeadVar__2_2;
    else
    {
      MR_Word N_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Ns_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));

      if (((MR_tag((MR_Word) N_5)) == (MR_Integer) 1))
      {
        MR_Word A_11 = ((MR_Word) ((MR_hl_field(1, N_5, 0))));
        MR_Word B_12 = ((MR_Word) ((MR_hl_field(1, N_5, 1))));
        MR_Word Var_15;
        MR_Word Var_16;
        MR_Word next_value_of_HeadVar__1_1;

        {
          Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_16, 0) = ((MR_Box) (B_12));
          MR_hl_field(1, Var_16, 1) = ((MR_Box) (Ns_6));
        }
        {
          Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_15, 0) = ((MR_Box) (A_11));
          MR_hl_field(1, Var_15, 1) = ((MR_Box) (Var_16));
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Var_15;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
      else
      {
        MR_Box H_9 = (MR_hl_field(0, N_5, 0));
        MR_Word T_10 = ((MR_Word) ((MR_hl_field(0, N_5, 1))));
        MR_Word Var_13;
        MR_Word Var_14;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_HeadVar__2_2;

        {
          Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_14, 0) = H_9;
          MR_hl_field(1, Var_14, 1) = ((MR_Box) (HeadVar__2_2));
        }
        Var_13 = mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_105_115_116_95_114_101_118_101_114_115_101_95_50_95_95_91_49_93_95_48_2_f_0(T_10, Var_14);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Ns_6;
        next_value_of_HeadVar__2_2 = Var_13;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    return L_3;
    break;
  }
}

static MR_Word MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_105_115_116_95_114_101_118_101_114_115_101_95_50_95_95_91_49_93_95_48_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_Word HeadVar__3_3;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = HeadVar__2_2;
    else
    {
      MR_Box X_5 = (MR_hl_field(1, HeadVar__1_1, 0));
      MR_Word Xs_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word Var_8;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      {
        Var_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_8, 0) = X_5;
        MR_hl_field(1, Var_8, 1) = ((MR_Box) (HeadVar__2_2));
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = Xs_6;
      next_value_of_HeadVar__2_2 = Var_8;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    return HeadVar__3_3;
    break;
  }
}

MR_Word MR_CALL 
mercury__cord__to_list_1_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word N_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Var_4;

    {
      Var_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_4, 0) = ((MR_Box) (N_3));
      MR_hl_field(1, Var_4, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    HeadVar__2_2 = mercury__cord__to_list_2_2_f_0(TypeInfo_for_T_7, Var_4, (MR_Word) ((MR_Unsigned) 0U));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__cord__list_1_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word C_3)
{
  MR_Word HeadVar__2_2;

  if ((C_3 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word N_5 = ((MR_Word) ((MR_hl_field(1, C_3, 0))));
    MR_Word Var_6;

    {
      Var_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_6, 0) = ((MR_Box) (N_5));
      MR_hl_field(1, Var_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    HeadVar__2_2 = mercury__cord__to_list_2_2_f_0(TypeInfo_for_T_4, Var_6, (MR_Word) ((MR_Unsigned) 0U));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__cord__from_list_1_f_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word Xs_3)
{
  MR_Word C_4;

  if ((Xs_3 == (MR_Word) ((MR_Unsigned) 0U)))
    C_4 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box H_5 = (MR_hl_field(1, Xs_3, 0));
    MR_Word T_6 = ((MR_Word) ((MR_hl_field(1, Xs_3, 1))));
    MR_Word Var_7;

    {
      Var_7 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_7, 0) = H_5;
      MR_hl_field(0, Var_7, 1) = ((MR_Box) (T_6));
    }
    {
      C_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, C_4, 0) = ((MR_Box) (Var_7));
    }
  }
  return C_4;
}

MR_bool MR_CALL 
mercury__cord__equal_2_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word CA_3,
  MR_Word CB_4)
{
  MR_bool succeeded;
  MR_Word Var_5;
  MR_Word Var_7;

  if ((CA_3 == (MR_Word) ((MR_Unsigned) 0U)))
    Var_5 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word N_10 = ((MR_Word) ((MR_hl_field(1, CA_3, 0))));
    MR_Word Var_11;

    {
      Var_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_11, 0) = ((MR_Box) (N_10));
      MR_hl_field(1, Var_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_5 = mercury__cord__to_list_2_2_f_0(TypeInfo_for_T_6, Var_11, (MR_Word) ((MR_Unsigned) 0U));
  }
  if ((CB_4 == (MR_Word) ((MR_Unsigned) 0U)))
    Var_7 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word N_14 = ((MR_Word) ((MR_hl_field(1, CB_4, 0))));
    MR_Word Var_15;

    {
      Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_15, 0) = ((MR_Box) (N_14));
      MR_hl_field(1, Var_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_7 = mercury__cord__to_list_2_2_f_0(TypeInfo_for_T_6, Var_15, (MR_Word) ((MR_Unsigned) 0U));
  }
  succeeded = mercury__list____Unify____list_1_0(TypeInfo_for_T_6, Var_5, Var_7);
  return succeeded;
}

static MR_Word MR_CALL 
mercury__cord__to_list_2_2_f_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_Word L_3;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      L_3 = HeadVar__2_2;
    else
    {
      MR_Word N_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
      MR_Word Ns_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));

      if (((MR_tag((MR_Word) N_5)) == (MR_Integer) 1))
      {
        MR_Word A_11 = ((MR_Word) ((MR_hl_field(1, N_5, 0))));
        MR_Word B_12 = ((MR_Word) ((MR_hl_field(1, N_5, 1))));
        MR_Word Var_15;
        MR_Word Var_16;
        MR_Word next_value_of_HeadVar__1_1;

        {
          Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_16, 0) = ((MR_Box) (A_11));
          MR_hl_field(1, Var_16, 1) = ((MR_Box) (Ns_6));
        }
        {
          Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_15, 0) = ((MR_Box) (B_12));
          MR_hl_field(1, Var_15, 1) = ((MR_Box) (Var_16));
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Var_15;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
      else
      {
        MR_Box H_9 = (MR_hl_field(0, N_5, 0));
        MR_Word T_10 = ((MR_Word) ((MR_hl_field(0, N_5, 1))));
        MR_Word Var_13;
        MR_Word Var_14;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_HeadVar__2_2;

        mercury__list__append_3_p_1(TypeInfo_for_T_17, T_10, HeadVar__2_2, &Var_14);
        {
          Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_13, 0) = H_9;
          MR_hl_field(1, Var_13, 1) = ((MR_Box) (Var_14));
        }
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Ns_6;
        next_value_of_HeadVar__2_2 = Var_13;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    return L_3;
    break;
  }
}

void MR_CALL 
mercury__cord__member_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Box * X_3,
  MR_Word HeadVar__2_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  MR_bool succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word N_4;

  if (succeeded)
  {
    N_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    mercury__cord__member_node_2_p_0(TypeInfo_for_T_5, X_3, N_4, cont, cont_env_ptr);
  }
}

void MR_CALL 
mercury__cord__member_node_2_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Box * X_3,
  MR_Word Node_4,
  MR_Cont cont,
  void * cont_env_ptr)
{
  while (MR_TRUE)
  {
    // setup for model_non tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) Node_4)) == (MR_Integer) 1))
    {
      MR_Word A_7 = ((MR_Word) ((MR_hl_field(1, Node_4, 0))));
      MR_Word B_8 = ((MR_Word) ((MR_hl_field(1, Node_4, 1))));

      mercury__cord__member_node_2_p_0(TypeInfo_for_T_9, X_3, A_7, cont, cont_env_ptr);
      {
        MR_Word next_value_of_Node_4 = B_8;

        // direct tailcall eliminated
        ;
        Node_4 = next_value_of_Node_4;
        continue;
      }
    }
    else
    {
      MR_Box H_5 = (MR_hl_field(0, Node_4, 0));
      MR_Word T_6 = ((MR_Word) ((MR_hl_field(0, Node_4, 1))));

      *X_3 = H_5;
      cont(cont_env_ptr);
      mercury__list__member_2_p_1(TypeInfo_for_T_9, X_3, T_6, cont, cont_env_ptr);
    }
    break;
  }
}

MR_Unsigned MR_CALL 
mercury__cord__ulength_1_f_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word C_3)
{
  MR_Unsigned HeadVar__2_2;

  if ((C_3 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__2_2 = (MR_Unsigned) 0U;
  else
  {
    MR_Word N_20 = ((MR_Word) ((MR_hl_field(1, C_3, 0))));

    mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_110_111_100_101_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_93_95_48_5_p_0(N_20, (MR_Word) ((MR_Unsigned) 0U), (MR_Unsigned) 0U, &HeadVar__2_2);
  }
  return HeadVar__2_2;
}

static void MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_110_111_100_101_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_93_95_48_5_p_0(
  MR_Word C_7,
  MR_Word Cs_8,
  MR_Unsigned STATE_VARIABLE_AccA_0_16,
  MR_Unsigned * STATE_VARIABLE_AccA_17)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) C_7)) == (MR_Integer) 1))
    {
      MR_Word A_14 = ((MR_Word) ((MR_hl_field(1, C_7, 0))));
      MR_Word B_15 = ((MR_Word) ((MR_hl_field(1, C_7, 1))));
      MR_Word Var_21;
      MR_Word next_value_of_C_7;
      MR_Word next_value_of_Cs_8;

      {
        Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_21, 0) = ((MR_Box) (B_15));
        MR_hl_field(1, Var_21, 1) = ((MR_Box) (Cs_8));
      }
      // direct tailcall eliminated
      ;
      next_value_of_C_7 = A_14;
      next_value_of_Cs_8 = Var_21;
      C_7 = next_value_of_C_7;
      Cs_8 = next_value_of_Cs_8;
      continue;
    }
    else
    {
      MR_Box H_10 = (MR_hl_field(0, C_7, 0));
      MR_Word T_11 = ((MR_Word) ((MR_hl_field(0, C_7, 1))));
      MR_Unsigned STATE_VARIABLE_AccA_1_18;
      MR_Word Var_19;

      {
        Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_19, 0) = H_10;
        MR_hl_field(1, Var_19, 1) = ((MR_Box) (T_11));
      }
      STATE_VARIABLE_AccA_1_18 = mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_55_95_95_91_49_44_32_50_44_32_51_93_95_48_3_f_in__list_0(Var_19, STATE_VARIABLE_AccA_0_16);
      if ((Cs_8 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_AccA_17 = STATE_VARIABLE_AccA_1_18;
      else
      {
        MR_Word Y_12 = ((MR_Word) ((MR_hl_field(1, Cs_8, 0))));
        MR_Word Ys_13 = ((MR_Word) ((MR_hl_field(1, Cs_8, 1))));
        MR_Word next_value_of_C_7 = Y_12;
        MR_Word next_value_of_Cs_8 = Ys_13;
        MR_Unsigned next_value_of_STATE_VARIABLE_AccA_0_16 = STATE_VARIABLE_AccA_1_18;

        // direct tailcall eliminated
        ;
        C_7 = next_value_of_C_7;
        Cs_8 = next_value_of_Cs_8;
        STATE_VARIABLE_AccA_0_16 = next_value_of_STATE_VARIABLE_AccA_0_16;
        continue;
      }
    }
    break;
  }
}

static MR_Unsigned MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_55_95_95_91_49_44_32_50_44_32_51_93_95_48_3_f_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Unsigned HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_Unsigned HeadVar__4_4;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Unsigned Var_13 = (HeadVar__3_3 + (MR_Unsigned) 1U);
      MR_Word next_value_of_HeadVar__2_2 = Var_10;
      MR_Unsigned next_value_of_HeadVar__3_3 = Var_13;

      // direct tailcall eliminated
      ;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    return HeadVar__4_4;
    break;
  }
}

MR_Integer MR_CALL 
mercury__cord__length_1_f_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word C_3)
{
  MR_Integer HeadVar__2_2;

  if ((C_3 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__2_2 = (MR_Integer) 0;
  else
  {
    MR_Word N_20 = ((MR_Word) ((MR_hl_field(1, C_3, 0))));

    mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_110_111_100_101_95_95_104_111_53_95_95_91_49_44_32_50_44_32_51_93_95_48_5_p_0(N_20, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, &HeadVar__2_2);
  }
  return HeadVar__2_2;
}

static void MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_110_111_100_101_95_95_104_111_53_95_95_91_49_44_32_50_44_32_51_93_95_48_5_p_0(
  MR_Word C_7,
  MR_Word Cs_8,
  MR_Integer STATE_VARIABLE_AccA_0_16,
  MR_Integer * STATE_VARIABLE_AccA_17)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) C_7)) == (MR_Integer) 1))
    {
      MR_Word A_14 = ((MR_Word) ((MR_hl_field(1, C_7, 0))));
      MR_Word B_15 = ((MR_Word) ((MR_hl_field(1, C_7, 1))));
      MR_Word Var_21;
      MR_Word next_value_of_C_7;
      MR_Word next_value_of_Cs_8;

      {
        Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_21, 0) = ((MR_Box) (B_15));
        MR_hl_field(1, Var_21, 1) = ((MR_Box) (Cs_8));
      }
      // direct tailcall eliminated
      ;
      next_value_of_C_7 = A_14;
      next_value_of_Cs_8 = Var_21;
      C_7 = next_value_of_C_7;
      Cs_8 = next_value_of_Cs_8;
      continue;
    }
    else
    {
      MR_Box H_10 = (MR_hl_field(0, C_7, 0));
      MR_Word T_11 = ((MR_Word) ((MR_hl_field(0, C_7, 1))));
      MR_Integer STATE_VARIABLE_AccA_1_18;
      MR_Word Var_19;

      {
        Var_19 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_19, 0) = H_10;
        MR_hl_field(1, Var_19, 1) = ((MR_Box) (T_11));
      }
      STATE_VARIABLE_AccA_1_18 = mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_93_95_48_3_f_in__list_0(Var_19, STATE_VARIABLE_AccA_0_16);
      if ((Cs_8 == (MR_Word) ((MR_Unsigned) 0U)))
        *STATE_VARIABLE_AccA_17 = STATE_VARIABLE_AccA_1_18;
      else
      {
        MR_Word Y_12 = ((MR_Word) ((MR_hl_field(1, Cs_8, 0))));
        MR_Word Ys_13 = ((MR_Word) ((MR_hl_field(1, Cs_8, 1))));
        MR_Word next_value_of_C_7 = Y_12;
        MR_Word next_value_of_Cs_8 = Ys_13;
        MR_Integer next_value_of_STATE_VARIABLE_AccA_0_16 = STATE_VARIABLE_AccA_1_18;

        // direct tailcall eliminated
        ;
        C_7 = next_value_of_C_7;
        Cs_8 = next_value_of_Cs_8;
        STATE_VARIABLE_AccA_0_16 = next_value_of_STATE_VARIABLE_AccA_0_16;
        continue;
      }
    }
    break;
  }
}

static MR_Integer MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_93_95_48_3_f_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_Integer HeadVar__4_4;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Integer Var_13 = (MR_Integer) ((MR_Unsigned) HeadVar__3_3 + (MR_Unsigned) 1);
      MR_Word next_value_of_HeadVar__2_2 = Var_10;
      MR_Integer next_value_of_HeadVar__3_3 = Var_13;

      // direct tailcall eliminated
      ;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    return HeadVar__4_4;
    break;
  }
}

MR_bool MR_CALL 
mercury__cord__split_last_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1,
  MR_Word * AllButLast_5,
  MR_Box * Last_6)
{
  MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word N_4;

  if (succeeded)
  {
    N_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    mercury__cord__split_last_node_3_p_0(TypeInfo_for_T_7, N_4, AllButLast_5, Last_6);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
mercury__cord__split_last_node_3_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word Node_4,
  MR_Word * AllButLast_5,
  MR_Box * Last_6)
{
  if (((MR_tag((MR_Word) Node_4)) == (MR_Integer) 1))
  {
    MR_Word A_12 = ((MR_Word) ((MR_hl_field(1, Node_4, 0))));
    MR_Word B0_13 = ((MR_Word) ((MR_hl_field(1, Node_4, 1))));
    MR_Word B_14;
    MR_Word Var_16;

    mercury__cord__split_last_node_3_p_0(TypeInfo_for_T_17, B0_13, &B_14, Last_6);
    {
      Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_16, 0) = ((MR_Box) (A_12));
    }
    *AllButLast_5 = mercury__cord__f_43_43_2_f_0(TypeInfo_for_T_17, Var_16, B_14);
  }
  else
  {
    MR_Box H_7 = (MR_hl_field(0, Node_4, 0));
    MR_Word T_8 = ((MR_Word) ((MR_hl_field(0, Node_4, 1))));
    MR_Word AllButLastList_9;

    mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_105_115_116_95_108_97_115_116_95_95_91_49_93_95_48_4_p_0(H_7, T_8, &AllButLastList_9, Last_6);
    if ((AllButLastList_9 == (MR_Word) ((MR_Unsigned) 0U)))
      *AllButLast_5 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box AllButLastHead_10 = (MR_hl_field(1, AllButLastList_9, 0));
      MR_Word AllButLastTail_11 = ((MR_Word) ((MR_hl_field(1, AllButLastList_9, 1))));
      MR_Word Var_15;

      {
        Var_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_15, 0) = AllButLastHead_10;
        MR_hl_field(0, Var_15, 1) = ((MR_Box) (AllButLastTail_11));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *AllButLast_5 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_15));
      }
    }
  }
}

static void MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_105_115_116_95_108_97_115_116_95_95_91_49_93_95_48_4_p_0(
  MR_Box Prev_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__4_4 = Prev_1;
  }
  else
  {
    MR_Box H_7 = (MR_hl_field(1, HeadVar__2_2, 0));
    MR_Word T_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word * AddrAllButLast0_13;

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(1, base, 0) = Prev_1;
      MR_hl_field(1, base, 1) = NULL;
    }
    AddrAllButLast0_13 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__3_3, 1)));
    mercury__cord__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_105_115_116_95_108_97_115_116_95_95_91_49_93_95_48_95_95_49_4_p_0(H_7, T_8, AddrAllButLast0_13, HeadVar__4_4);
  }
}

static void MR_CALL 
mercury__cord__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_105_115_116_95_108_97_115_116_95_95_91_49_93_95_48_95_95_49_4_p_0(
  MR_Box Prev_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_14,
  MR_Box * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__3_14 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__4_4 = Prev_1;
    }
    else
    {
      MR_Box H_7 = (MR_hl_field(1, HeadVar__2_2, 0));
      MR_Word T_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word * AddrAllButLast0_13;
      MR_Word HeadVar__3_15;
      MR_Box next_value_of_Prev_1;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_14;

      {
        HeadVar__3_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_15, 0) = Prev_1;
        MR_hl_field(1, HeadVar__3_15, 1) = NULL;
      }
      AddrAllButLast0_13 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_15, 1)));
      *AddrOfHeadVar__3_14 = HeadVar__3_15;
      // direct tailcall eliminated
      ;
      next_value_of_Prev_1 = H_7;
      next_value_of_HeadVar__2_2 = T_8;
      next_value_of_AddrOfHeadVar__3_14 = AddrAllButLast0_13;
      Prev_1 = next_value_of_Prev_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_14 = next_value_of_AddrOfHeadVar__3_14;
      continue;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__cord__get_last_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Box * Last_4)
{
  MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word N_3;

  if (succeeded)
  {
    N_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    mercury__cord__get_last_node_2_p_0(TypeInfo_for_T_5, N_3, Last_4);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
mercury__cord__get_last_node_2_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word Node_3,
  MR_Box * Last_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) Node_3)) == (MR_Integer) 1))
    {
      MR_Word B_10 = ((MR_Word) ((MR_hl_field(1, Node_3, 1))));
      MR_Word next_value_of_Node_3 = B_10;

      // direct tailcall eliminated
      ;
      Node_3 = next_value_of_Node_3;
      continue;
    }
    else
    {
      MR_Box Head_5 = (MR_hl_field(0, Node_3, 0));
      MR_Word Tail_6 = ((MR_Word) ((MR_hl_field(0, Node_3, 1))));

      if ((Tail_6 == (MR_Word) ((MR_Unsigned) 0U)))
        *Last_4 = Head_5;
      else
        mercury__list__det_last_2_p_0(TypeInfo_for_T_11, Tail_6, Last_4);
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__cord__head_tail_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1,
  MR_Box * H_5,
  MR_Word * T_6)
{
  MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word N_4;

  if (succeeded)
  {
    N_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    mercury__cord__head_tail_node_3_p_0(TypeInfo_for_T_7, N_4, H_5, T_6);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
mercury__cord__head_tail_node_3_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word Node_4,
  MR_Box * Head_5,
  MR_Word * Tail_6)
{
  if (((MR_tag((MR_Word) Node_4)) == (MR_Integer) 1))
  {
    MR_Word A0_11 = ((MR_Word) ((MR_hl_field(1, Node_4, 0))));
    MR_Word B_12 = ((MR_Word) ((MR_hl_field(1, Node_4, 1))));
    MR_Word AC_13;

    mercury__cord__head_tail_node_3_p_0(TypeInfo_for_T_17, A0_11, Head_5, &AC_13);
    if ((AC_13 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Tail_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (B_12));
      }
    else
    {
      MR_Word A_14 = ((MR_Word) ((MR_hl_field(1, AC_13, 0))));
      MR_Word Var_16;

      {
        Var_16 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_16, 0) = ((MR_Box) (A_14));
        MR_hl_field(1, Var_16, 1) = ((MR_Box) (B_12));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Tail_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_16));
      }
    }
  }
  else
  {
    MR_Word T_8;

    *Head_5 = (MR_hl_field(0, Node_4, 0));
    T_8 = ((MR_Word) ((MR_hl_field(0, Node_4, 1))));
    if ((T_8 == (MR_Word) ((MR_Unsigned) 0U)))
      *Tail_6 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Box TH_9 = (MR_hl_field(1, T_8, 0));
      MR_Word TT_10 = ((MR_Word) ((MR_hl_field(1, T_8, 1))));
      MR_Word Var_15;

      {
        Var_15 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_15, 0) = TH_9;
        MR_hl_field(0, Var_15, 1) = ((MR_Box) (TT_10));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Tail_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_15));
      }
    }
  }
}

MR_bool MR_CALL 
mercury__cord__get_first_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Box * Head_4)
{
  MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word N_3;

  if (succeeded)
  {
    N_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    mercury__cord__get_first_node_2_p_0(TypeInfo_for_T_5, N_3, Head_4);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__cord__head_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Box * Head_4)
{
  MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word N_3;

  if (succeeded)
  {
    N_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    mercury__cord__get_first_node_2_p_0(TypeInfo_for_T_5, N_3, Head_4);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
mercury__cord__get_first_node_2_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word Node_3,
  MR_Box * Head_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) Node_3)) == (MR_Integer) 1))
    {
      MR_Word A_6 = ((MR_Word) ((MR_hl_field(1, Node_3, 0))));
      MR_Word next_value_of_Node_3 = A_6;

      // direct tailcall eliminated
      ;
      Node_3 = next_value_of_Node_3;
      continue;
    }
    else
      *Head_4 = (MR_hl_field(0, Node_3, 0));
    break;
  }
}

MR_bool MR_CALL 
mercury__cord__is_singleton_2_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word C_3,
  MR_Box * X_4)
{
  MR_bool succeeded = (C_3 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word Var_5;
  MR_Word Var_6;

  if (succeeded)
  {
    Var_5 = ((MR_Word) ((MR_hl_field(1, C_3, 0))));
    succeeded = ((MR_tag((MR_Word) Var_5)) == (MR_Integer) 0);
    if (succeeded)
    {
      *X_4 = (MR_hl_field(0, Var_5, 0));
      Var_6 = ((MR_Word) ((MR_hl_field(0, Var_5, 1))));
      succeeded = (Var_6 == (MR_Word) ((MR_Unsigned) 0U));
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__cord__is_non_empty_1_p_0(
  MR_Word TypeInfo_for_T_3,
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));

  return succeeded;
}

MR_bool MR_CALL 
mercury__cord__is_empty_1_p_0(
  MR_Word TypeInfo_for_T_2,
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded = (HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U));

  return succeeded;
}

MR_Word MR_CALL 
mercury__cord__condense_1_f_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word C0_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));

    HeadVar__2_2 = mercury__cord__condense_node_1_f_0(TypeInfo_for_T_4, C0_3);
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__cord__condense_node_1_f_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
  {
    MR_Word Left0_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));
    MR_Word Right0_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Left_8;
    MR_Word Right_9;

    Left_8 = mercury__cord__condense_node_1_f_0(TypeInfo_for_T_10, Left0_6);
    Right_9 = mercury__cord__condense_node_1_f_0(TypeInfo_for_T_10, Right0_7);
    HeadVar__2_2 = mercury__cord__f_43_43_2_f_0(TypeInfo_for_T_10, Left_8, Right_9);
  }
  else
  {
    MR_Word C_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word L_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 1))));
    MR_Word Var_5;

    Var_5 = mercury__cord__cord_list_to_cord_1_f_0(TypeInfo_for_T_10, L_4);
    HeadVar__2_2 = mercury__cord__f_43_43_2_f_0(TypeInfo_for_T_10, C_3, Var_5);
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__cord__rev_cord_list_to_cord_1_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word RevCords_3)
{
  MR_Word Cord_4;

  Cord_4 = mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_52_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_f_in__list_0(TypeInfo_for_T_7, RevCords_3, (MR_Word) ((MR_Unsigned) 0U));
  return Cord_4;
}

MR_Word MR_CALL 
mercury__cord__cord_list_to_cord_1_f_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word Cords_3)
{
  MR_Word Cord_4;
  MR_Word TypeInfo_8_8;
  MR_Word RevCords_5;
  MR_Word conv0_RevCords_5;

  {
    TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, TypeInfo_8_8, 0) = ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1));
    MR_hl_field(0, TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_6));
  }
  mercury__list__reverse_2_p_0(TypeInfo_8_8, (MR_Word) (Cords_3), &conv0_RevCords_5);
  RevCords_5 = (MR_Word) (conv0_RevCords_5);
  Cord_4 = mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_52_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_f_in__list_0(TypeInfo_for_T_6, RevCords_5, (MR_Word) ((MR_Unsigned) 0U));
  return Cord_4;
}

static MR_Word MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_102_111_108_100_108_95_95_104_111_52_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_f_in__list_0(
  MR_Word Var_20,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_Word HeadVar__4_4;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Word Var_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Var_13;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;

      Var_13 = mercury__cord__f_43_43_2_f_0(Var_20, Var_9, HeadVar__3_3);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_10;
      next_value_of_HeadVar__3_3 = Var_13;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    return HeadVar__4_4;
    break;
  }
}

MR_Word MR_CALL 
mercury__cord__f_43_43_2_f_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word A_4,
  MR_Word B_5)
{
  MR_Word C_6;

  if ((A_4 == (MR_Word) ((MR_Unsigned) 0U)))
    C_6 = B_5;
  else
  {
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(1, A_4, 0))));

    if ((B_5 == (MR_Word) ((MR_Unsigned) 0U)))
      C_6 = A_4;
    else
    {
      MR_Word BN_9 = ((MR_Word) ((MR_hl_field(1, B_5, 0))));
      MR_Word Var_10;

      {
        Var_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_10, 0) = ((MR_Box) (Var_12));
        MR_hl_field(1, Var_10, 1) = ((MR_Box) (BN_9));
      }
      {
        C_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, C_6, 0) = ((MR_Box) (Var_10));
      }
    }
  }
  return C_6;
}

MR_Word MR_CALL 
mercury__cord__snoc_list_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word C0_4,
  MR_Word L_5)
{
  MR_Word C_6;

  mercury__cord__snoc_list_3_p_0(TypeInfo_for_T_7, L_5, C0_4, &C_6);
  return C_6;
}

void MR_CALL 
mercury__cord__snoc_list_3_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word L_4,
  MR_Word STATE_VARIABLE_C_0_11,
  MR_Word * STATE_VARIABLE_C_12)
{
  if ((L_4 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_C_12 = STATE_VARIABLE_C_0_11;
  else
  {
    MR_Box H_6 = (MR_hl_field(1, L_4, 0));
    MR_Word T_7 = ((MR_Word) ((MR_hl_field(1, L_4, 1))));
    MR_Word LN_8;

    {
      LN_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, LN_8, 0) = H_6;
      MR_hl_field(0, LN_8, 1) = ((MR_Box) (T_7));
    }
    if ((STATE_VARIABLE_C_0_11 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_C_12 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (LN_8));
      }
    else
    {
      MR_Word CN0_9 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_C_0_11, 0))));
      MR_Word CN_10;

      {
        CN_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, CN_10, 0) = ((MR_Box) (CN0_9));
        MR_hl_field(1, CN_10, 1) = ((MR_Box) (LN_8));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_C_12 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (CN_10));
      }
    }
  }
}

void MR_CALL 
mercury__cord__snoc_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Box X_4,
  MR_Word STATE_VARIABLE_C_0_6,
  MR_Word * STATE_VARIABLE_C_7)
{
  *STATE_VARIABLE_C_7 = mercury__cord__snoc_2_f_0(TypeInfo_for_T_8, STATE_VARIABLE_C_0_6, X_4);
}

MR_Word MR_CALL 
mercury__cord__snoc_2_f_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word C_4,
  MR_Box X_5)
{
  MR_Word CX_6;

  if ((C_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_8;

    {
      Var_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_8, 0) = X_5;
      MR_hl_field(0, Var_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      CX_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, CX_6, 0) = ((MR_Box) (Var_8));
    }
  }
  else
  {
    MR_Word N_7 = ((MR_Word) ((MR_hl_field(1, C_4, 0))));
    MR_Word Var_10;
    MR_Word Var_11;

    {
      Var_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_11, 0) = X_5;
      MR_hl_field(0, Var_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_10, 0) = ((MR_Box) (N_7));
      MR_hl_field(1, Var_10, 1) = ((MR_Box) (Var_11));
    }
    {
      CX_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, CX_6, 0) = ((MR_Box) (Var_10));
    }
  }
  return CX_6;
}

MR_Word MR_CALL 
mercury__cord__cons_list_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word L_4,
  MR_Word C0_5)
{
  MR_Word C_6;

  mercury__cord__cons_list_3_p_0(TypeInfo_for_T_7, L_4, C0_5, &C_6);
  return C_6;
}

void MR_CALL 
mercury__cord__cons_list_3_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word L_4,
  MR_Word STATE_VARIABLE_C_0_11,
  MR_Word * STATE_VARIABLE_C_12)
{
  if ((L_4 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_C_12 = STATE_VARIABLE_C_0_11;
  else
  {
    MR_Box H_6 = (MR_hl_field(1, L_4, 0));
    MR_Word T_7 = ((MR_Word) ((MR_hl_field(1, L_4, 1))));
    MR_Word LN_8;

    {
      LN_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, LN_8, 0) = H_6;
      MR_hl_field(0, LN_8, 1) = ((MR_Box) (T_7));
    }
    if ((STATE_VARIABLE_C_0_11 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_C_12 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (LN_8));
      }
    else
    {
      MR_Word CN0_9 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_C_0_11, 0))));
      MR_Word CN_10;

      {
        CN_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, CN_10, 0) = ((MR_Box) (LN_8));
        MR_hl_field(1, CN_10, 1) = ((MR_Box) (CN0_9));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_C_12 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (CN_10));
      }
    }
  }
}

void MR_CALL 
mercury__cord__cons_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Box X_4,
  MR_Word STATE_VARIABLE_C_0_6,
  MR_Word * STATE_VARIABLE_C_7)
{
  *STATE_VARIABLE_C_7 = mercury__cord__cons_2_f_0(TypeInfo_for_T_8, X_4, STATE_VARIABLE_C_0_6);
}

MR_Word MR_CALL 
mercury__cord__cons_2_f_0(
  MR_Word TypeInfo_for_T_13,
  MR_Box X_4,
  MR_Word C_5)
{
  MR_Word XC_6;

  if ((C_5 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_8;

    {
      Var_8 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_8, 0) = X_4;
      MR_hl_field(0, Var_8, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      XC_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, XC_6, 0) = ((MR_Box) (Var_8));
    }
  }
  else
  {
    MR_Word N_7 = ((MR_Word) ((MR_hl_field(1, C_5, 0))));
    MR_Word Var_10;
    MR_Word Var_11;

    {
      Var_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_11, 0) = X_4;
      MR_hl_field(0, Var_11, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_10, 0) = ((MR_Box) (Var_11));
      MR_hl_field(1, Var_10, 1) = ((MR_Box) (N_7));
    }
    {
      XC_6 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, XC_6, 0) = ((MR_Box) (Var_10));
    }
  }
  return XC_6;
}

MR_Word MR_CALL 
mercury__cord__singleton_1_f_0(
  MR_Word TypeInfo_for_T_6,
  MR_Box X_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_4;

  {
    Var_4 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Var_4, 0) = X_3;
    MR_hl_field(0, Var_4, 1) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, HeadVar__2_2, 0) = ((MR_Box) (Var_4));
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__cord__empty_0_f_0(
  MR_Word TypeInfo_for_T_2)
{
  return (MR_Word) ((MR_Unsigned) 0U);
}

MR_Word MR_CALL 
mercury__cord__init_0_f_0(
  MR_Word TypeInfo_for_T_2)
{
  return (MR_Word) ((MR_Unsigned) 0U);
}

static MR_bool MR_CALL 
mercury__cord____Unify____cord_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__cord____Unify____cord_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__cord____Compare____cord_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__cord____Compare____cord_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__cord____Unify____cord_node_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__cord____Unify____cord_node_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__cord____Compare____cord_node_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__cord____Compare____cord_node_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__cord__init(void)
{
}

void mercury__cord__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&mercury__cord__cord__type_ctor_info_cord_1);
  MR_register_type_ctor_info(&mercury__cord__cord__type_ctor_info_cord_node_1);
}

void mercury__cord__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__cord__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module cord.
