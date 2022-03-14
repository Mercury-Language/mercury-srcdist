/*
** Automatically generated from `cord.m'
** by the Mercury compiler,
** version rotd-2022-03-14
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
#include "io.call_system.mih"
#include "io.environment.mih"
#include "io.file.mih"
#include "io.primitives_read.mih"
#include "io.primitives_write.mih"
#include "io.stream_db.mih"
#include "io.stream_ops.mih"
#include "stream.string_writer.mih"
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

static const MR_PseudoTypeInfo mercury__cord__cord__field_types_cord_node_1_0[1];

static const MR_DuFunctorDesc mercury__cord__cord__du_functor_desc_cord_node_1_0;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__cord__list__pti_list_1__pseudo_1;

static const MR_PseudoTypeInfo mercury__cord__cord__field_types_cord_node_1_1[2];

static const MR_DuFunctorDesc mercury__cord__cord__du_functor_desc_cord_node_1_1;

static const MR_PseudoTypeInfo mercury__cord__cord__field_types_cord_node_1_2[2];

static const MR_DuFunctorDesc mercury__cord__cord__du_functor_desc_cord_node_1_2;

static const MR_DuFunctorDescPtr mercury__cord__cord__du_stag_ordered_cord_node_1_0[1];

static const MR_DuFunctorDescPtr mercury__cord__cord__du_stag_ordered_cord_node_1_1[1];

static const MR_DuFunctorDescPtr mercury__cord__cord__du_stag_ordered_cord_node_1_2[1];

static const MR_DuPtagLayout mercury__cord__cord__du_ptag_ordered_cord_node_1[3];

static const MR_DuFunctorDescPtr mercury__cord__cord__du_name_ordered_cord_node_1[3];

static const MR_Integer mercury__cord__cord__functor_number_map_cord_node_1[3];

static void MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
  MR_Word Var_18,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4);

static void MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
  MR_Word Var_18,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4);

static void MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_110_111_100_101_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_93_95_48_5_p_0(
  MR_Word HeadVar__2_2,
  MR_Word Cs_3,
  MR_Integer STATE_VARIABLE_AccA_0_4,
  MR_Integer * STATE_VARIABLE_AccA_5);

static void MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Integer * HeadVar__4_4);

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

static void MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__list_0(
  MR_Word Var_27,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__list_0(
  MR_Word Var_27,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static MR_Word MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_111_95_114_101_118_95_108_105_115_116_95_50_95_95_91_49_93_95_48_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_105_115_116_95_114_101_118_101_114_115_101_95_50_95_95_91_49_93_95_48_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
mercury__cord__to_list_2_2_f_0(
  MR_Word TypeInfo_for_T_19,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

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

static /* final */ const MR_Box mercury__cord_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__cord_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__cord_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__cord_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__cord_scalar_common_3[2][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__cord_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__cord_scalar_common_2[0])),
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
#include "io.environment.mh"
#include "io.file.mh"
#include "io.primitives_read.mh"
#include "io.primitives_write.mh"
#include "io.stream_db.mh"
#include "io.stream_ops.mh"



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
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_PseudoTypeInfo mercury__cord__cord__field_types_cord_1_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__cord__cord__pti_cord_node_1__pseudo_1)
};

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

static const MR_DuFunctorDescPtr mercury__cord__cord__du_stag_ordered_cord_1_0[1] = {
  &mercury__cord__cord__du_functor_desc_cord_1_0
};

static const MR_DuFunctorDescPtr mercury__cord__cord__du_stag_ordered_cord_1_1[1] = {
  &mercury__cord__cord__du_functor_desc_cord_1_1
};

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

static const MR_PseudoTypeInfo mercury__cord__cord__field_types_cord_node_1_0[1] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_DuFunctorDesc mercury__cord__cord__du_functor_desc_cord_node_1_0 = {
  (MR_String) "unit_node",
  INT16_C(1),
  UINT16_C(1),
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

static const MR_FA_PseudoTypeInfo_Struct1 mercury__cord__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_PseudoTypeInfo mercury__cord__cord__field_types_cord_node_1_1[2] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mercury__cord__list__pti_list_1__pseudo_1)
};

static const MR_DuFunctorDesc mercury__cord__cord__du_functor_desc_cord_node_1_1 = {
  (MR_String) "list_node",
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

static const MR_PseudoTypeInfo mercury__cord__cord__field_types_cord_node_1_2[2] = {
  (MR_PseudoTypeInfo) (&mercury__cord__cord__pti_cord_node_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__cord__cord__pti_cord_node_1__pseudo_1)
};

static const MR_DuFunctorDesc mercury__cord__cord__du_functor_desc_cord_node_1_2 = {
  (MR_String) "branch_node",
  INT16_C(2),
  UINT16_C(3),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  mercury__cord__cord__field_types_cord_node_1_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__cord__cord__du_stag_ordered_cord_node_1_0[1] = {
  &mercury__cord__cord__du_functor_desc_cord_node_1_0
};

static const MR_DuFunctorDescPtr mercury__cord__cord__du_stag_ordered_cord_node_1_1[1] = {
  &mercury__cord__cord__du_functor_desc_cord_node_1_1
};

static const MR_DuFunctorDescPtr mercury__cord__cord__du_stag_ordered_cord_node_1_2[1] = {
  &mercury__cord__cord__du_functor_desc_cord_node_1_2
};

static const MR_DuPtagLayout mercury__cord__cord__du_ptag_ordered_cord_node_1[3] = {
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
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__cord__cord__du_stag_ordered_cord_node_1_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__cord__cord__du_name_ordered_cord_node_1[3] = {
  &mercury__cord__cord__du_functor_desc_cord_node_1_2,
  &mercury__cord__cord__du_functor_desc_cord_node_1_1,
  &mercury__cord__cord__du_functor_desc_cord_node_1_0
};

static const MR_Integer mercury__cord__cord__functor_number_map_cord_node_1[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__cord__cord__type_ctor_info_cord_node_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__cord____Unify____cord_node_1_0_10001)),
  ((MR_Box) (mercury__cord____Compare____cord_node_1_0_10001)),
  (MR_String) "cord",
  (MR_String) "cord_node",
  { mercury__cord__cord__du_name_ordered_cord_node_1 },
  { mercury__cord__cord__du_ptag_ordered_cord_node_1 },
  (MR_Integer) 3,
  UINT16_C(12),
  mercury__cord__cord__functor_number_map_cord_node_1,

};

void MR_CALL 
mercury__cord____Compare____cord_1_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
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
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

      mercury__cord____Compare____cord_node_1_0(TypeInfo_for_T_10, HeadVar__1_1, Var_13, ArgY1_7);
    }
  }
}

void MR_CALL 
mercury__cord____Compare____cord_node_1_0(
  MR_Word TypeInfo_for_T_38,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_36 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_37 = (MR_Integer) (HeadVar__3_3);

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = (CastX_36 == CastY_37);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Box Var_49 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Box ArgY1_5 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0));

                  mercury__builtin__compare_3_p_0(TypeInfo_for_T_38, HeadVar__1_1, Var_49, ArgY1_5);
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
            MR_Word Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            MR_Box Var_48 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Box ArgY1_16 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));
                  MR_Word ArgY2_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word SubResult1_17;

                  mercury__builtin__compare_3_p_0(TypeInfo_for_T_38, &SubResult1_17, Var_48, ArgY1_16);
                  succeeded = (SubResult1_17 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_17;
                  else
                    mercury__list____Compare____list_1_0(TypeInfo_for_T_38, HeadVar__1_1, Var_47, ArgY2_19);
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
            MR_Word Var_45 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_46 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_Word ArgY1_32 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_35 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word SubResult1_33;

                  mercury__cord____Compare____cord_node_1_0(TypeInfo_for_T_38, &SubResult1_33, Var_46, ArgY1_32);
                  succeeded = (SubResult1_33 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_33;
                  else
                  {
                    MR_Word next_value_of_HeadVar__2_2 = Var_45;
                    MR_Word next_value_of_HeadVar__3_3 = ArgY2_35;

                    // direct tailcall eliminated
                    ;
                    HeadVar__2_2 = next_value_of_HeadVar__2_2;
                    HeadVar__3_3 = next_value_of_HeadVar__3_3;
                    continue;
                  }
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
      succeeded = mercury__cord____Unify____cord_node_1_0(TypeInfo_for_T_9, ArgX1_5, ArgY1_6);
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__cord____Unify____cord_node_1_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = (CastX_13 == CastY_14);
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
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_15, ArgX1_3, ArgY1_4);
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box ArgX1_5 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
            MR_Box ArgY1_6;
            MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
              ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_15, ArgX1_5, ArgY1_6);
              if (succeeded)
                succeeded = mercury__list____Unify____list_1_0(TypeInfo_for_T_15, ArgX2_7, ArgY2_8);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_10;
            MR_Word ArgX2_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_12;
            MR_Word next_value_of_HeadVar__1_1;
            MR_Word next_value_of_HeadVar__2_2;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
              succeeded = mercury__cord____Unify____cord_node_1_0(TypeInfo_for_T_15, ArgX1_9, ArgY1_10);
              if (succeeded)
              {
                // direct tailcall eliminated
                ;
                next_value_of_HeadVar__1_1 = ArgX2_11;
                next_value_of_HeadVar__2_2 = ArgY2_12;
                HeadVar__1_1 = next_value_of_HeadVar__1_1;
                HeadVar__2_2 = next_value_of_HeadVar__2_2;
                continue;
              }
            }
          }
          break;
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
    MR_Word N_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Var_7;

    {
      Var_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_7, 0) = ((MR_Box) (N_5));
      MR_hl_field(MR_mktag(1), Var_7, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    HeadVar__3_3 = mercury__cord__to_list_2_2_f_0(TypeInfo_for_T_9, Var_7, L_2);
  }
  return HeadVar__3_3;
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
    MR_Word N_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CA_3, (MR_Integer) 0))));
    MR_Word Var_12;

    {
      Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) (N_11));
      MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_5 = mercury__cord__to_list_2_2_f_0(TypeInfo_for_T_6, Var_12, (MR_Word) ((MR_Unsigned) 0U));
  }
  if ((CB_4 == (MR_Word) ((MR_Unsigned) 0U)))
    Var_7 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word N_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), CB_4, (MR_Integer) 0))));
    MR_Word Var_17;

    {
      Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (N_16));
      MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    Var_7 = mercury__cord__to_list_2_2_f_0(TypeInfo_for_T_6, Var_17, (MR_Word) ((MR_Unsigned) 0U));
  }
  succeeded = mercury__list____Unify____list_1_0(TypeInfo_for_T_6, Var_5, Var_7);
  return succeeded;
}

MR_bool MR_CALL 
mercury__cord__find_first_match_3_p_0(
  MR_Word TypeInfo_for_X_7,
  MR_Word P_4,
  MR_Word HeadVar__2_2,
  MR_Box * FirstMatch_6)
{
  MR_bool succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word NX_5;

  if (succeeded)
  {
    NX_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    succeeded = mercury__cord__find_first_match_node_3_p_0(TypeInfo_for_X_7, P_4, NX_5, FirstMatch_6);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__cord__find_first_match_node_3_p_0(
  MR_Word TypeInfo_for_X_13,
  MR_Word P_4,
  MR_Word Node_5,
  MR_Box * FirstMatch_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Node_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box);

          *FirstMatch_6 = (MR_hl_field(MR_mktag(0), Node_5, (MR_Integer) 0));
          func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), P_4, (MR_Integer) 1))));
          succeeded = func_1(((MR_Box) (P_4)), *FirstMatch_6);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box XH_8 = (MR_hl_field(MR_mktag(1), Node_5, (MR_Integer) 0));
          MR_Word XT_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Node_5, (MR_Integer) 1))));
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), P_4, (MR_Integer) 1))));

          succeeded = func_0(((MR_Box) (P_4)), XH_8);
          if (succeeded)
          {
            *FirstMatch_6 = XH_8;
            succeeded = MR_TRUE;
          }
          else
            succeeded = mercury__list__find_first_match_3_p_0(TypeInfo_for_X_13, P_4, XT_9, FirstMatch_6);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word XA_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Node_5, (MR_Integer) 0))));
          MR_Word XB_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Node_5, (MR_Integer) 1))));
          MR_Box FirstMatchPrime_12;

          succeeded = mercury__cord__find_first_match_node_3_p_0(TypeInfo_for_X_13, P_4, XA_10, &FirstMatchPrime_12);
          if (succeeded)
          {
            *FirstMatch_6 = FirstMatchPrime_12;
            succeeded = MR_TRUE;
          }
          else
          {
            MR_Word next_value_of_Node_5 = XB_11;

            // direct tailcall eliminated
            ;
            Node_5 = next_value_of_Node_5;
            continue;
          }
        }
        break;
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__cord__map_foldl3_9_p_0(
  MR_Word TypeInfo_for_A_35,
  MR_Word TypeInfo_for_B_36,
  MR_Word TypeInfo_for_C_37,
  MR_Word TypeInfo_for_D_38,
  MR_Word TypeInfo_for_E_39,
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
    MR_Word NX_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word NY_22;

    mercury__cord__map_foldl3_node_9_p_0(TypeInfo_for_A_35, TypeInfo_for_B_36, TypeInfo_for_C_37, TypeInfo_for_D_38, TypeInfo_for_E_39, HeadVar__1_1, NX_21, &NY_22, STATE_VARIABLE_A_0_4, STATE_VARIABLE_A_5, STATE_VARIABLE_B_0_6, STATE_VARIABLE_B_7, STATE_VARIABLE_C_0_8, STATE_VARIABLE_C_9);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (NY_22));
    }
  }
}

void MR_CALL 
mercury__cord__LCMC__pred__map_foldl3_node__1_9_p_0(
  MR_Word TypeInfo_for_A_65,
  MR_Word TypeInfo_for_B_66,
  MR_Word TypeInfo_for_C_67,
  MR_Word TypeInfo_for_D_68,
  MR_Word TypeInfo_for_E_69,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_71,
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
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box X_11 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
          MR_Box Y_12;
          MR_Word HeadVar__3_73;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

          func_1(((MR_Box) (P_1)), X_11, &Y_12, STATE_VARIABLE_A_0_4, STATE_VARIABLE_A_5, STATE_VARIABLE_B_0_6, STATE_VARIABLE_B_7, STATE_VARIABLE_C_0_8, STATE_VARIABLE_C_9);
          {
            HeadVar__3_73 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), HeadVar__3_73, 0) = Y_12;
          }
          *AddrOfHeadVar__3_71 = HeadVar__3_73;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box XH_26 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Word XT_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          MR_Box YH_28;
          MR_Word YT_29;
          MR_Box STATE_VARIABLE_A_39_39;
          MR_Box STATE_VARIABLE_B_40_40;
          MR_Box STATE_VARIABLE_C_41_41;
          MR_Word HeadVar__3_72;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

          func_0(((MR_Box) (P_1)), XH_26, &YH_28, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_39_39, STATE_VARIABLE_B_0_6, &STATE_VARIABLE_B_40_40, STATE_VARIABLE_C_0_8, &STATE_VARIABLE_C_41_41);
          mercury__list__map_foldl3_9_p_1(TypeInfo_for_A_65, TypeInfo_for_B_66, TypeInfo_for_C_67, TypeInfo_for_D_68, TypeInfo_for_E_69, P_1, XT_27, &YT_29, STATE_VARIABLE_A_39_39, STATE_VARIABLE_A_5, STATE_VARIABLE_B_40_40, STATE_VARIABLE_B_7, STATE_VARIABLE_C_41_41, STATE_VARIABLE_C_9);
          {
            HeadVar__3_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), HeadVar__3_72, 0) = YH_28;
            MR_hl_field(MR_mktag(1), HeadVar__3_72, 1) = ((MR_Box) (YT_29));
          }
          *AddrOfHeadVar__3_71 = HeadVar__3_72;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word XA_46 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
          MR_Word XB_47 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word YA_48;
          MR_Box STATE_VARIABLE_A_59_59;
          MR_Box STATE_VARIABLE_B_60_60;
          MR_Box STATE_VARIABLE_C_61_61;
          MR_Word HeadVar__3_3;
          MR_Word * AddrYB_70;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word * next_value_of_AddrOfHeadVar__3_71;
          MR_Box next_value_of_STATE_VARIABLE_A_0_4;
          MR_Box next_value_of_STATE_VARIABLE_B_0_6;
          MR_Box next_value_of_STATE_VARIABLE_C_0_8;

          mercury__cord__map_foldl3_node_9_p_0(TypeInfo_for_A_65, TypeInfo_for_B_66, TypeInfo_for_C_67, TypeInfo_for_D_68, TypeInfo_for_E_69, P_1, XA_46, &YA_48, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_59_59, STATE_VARIABLE_B_0_6, &STATE_VARIABLE_B_60_60, STATE_VARIABLE_C_0_8, &STATE_VARIABLE_C_61_61);
          {
            HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), HeadVar__3_3, 0) = ((MR_Box) (YA_48));
            MR_hl_field(MR_mktag(2), HeadVar__3_3, 1) = NULL;
          }
          AddrYB_70 = (MR_Word *) (&(MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1)));
          *AddrOfHeadVar__3_71 = HeadVar__3_3;
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = XB_47;
          next_value_of_AddrOfHeadVar__3_71 = AddrYB_70;
          next_value_of_STATE_VARIABLE_A_0_4 = STATE_VARIABLE_A_59_59;
          next_value_of_STATE_VARIABLE_B_0_6 = STATE_VARIABLE_B_60_60;
          next_value_of_STATE_VARIABLE_C_0_8 = STATE_VARIABLE_C_61_61;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          AddrOfHeadVar__3_71 = next_value_of_AddrOfHeadVar__3_71;
          STATE_VARIABLE_A_0_4 = next_value_of_STATE_VARIABLE_A_0_4;
          STATE_VARIABLE_B_0_6 = next_value_of_STATE_VARIABLE_B_0_6;
          STATE_VARIABLE_C_0_8 = next_value_of_STATE_VARIABLE_C_0_8;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__cord__map_foldl3_node_9_p_0(
  MR_Word TypeInfo_for_A_65,
  MR_Word TypeInfo_for_B_66,
  MR_Word TypeInfo_for_C_67,
  MR_Word TypeInfo_for_D_68,
  MR_Word TypeInfo_for_E_69,
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
  switch (MR_tag((MR_Word) HeadVar__2_2)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Box X_11 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
        MR_Box Y_12;
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

        func_1(((MR_Box) (P_1)), X_11, &Y_12, STATE_VARIABLE_A_0_4, STATE_VARIABLE_A_5, STATE_VARIABLE_B_0_6, STATE_VARIABLE_B_7, STATE_VARIABLE_C_0_8, STATE_VARIABLE_C_9);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(0), base, 0) = Y_12;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Box XH_26 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
        MR_Word XT_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        MR_Box YH_28;
        MR_Word YT_29;
        MR_Box STATE_VARIABLE_A_39_39;
        MR_Box STATE_VARIABLE_B_40_40;
        MR_Box STATE_VARIABLE_C_41_41;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

        func_0(((MR_Box) (P_1)), XH_26, &YH_28, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_39_39, STATE_VARIABLE_B_0_6, &STATE_VARIABLE_B_40_40, STATE_VARIABLE_C_0_8, &STATE_VARIABLE_C_41_41);
        mercury__list__map_foldl3_9_p_1(TypeInfo_for_A_65, TypeInfo_for_B_66, TypeInfo_for_C_67, TypeInfo_for_D_68, TypeInfo_for_E_69, P_1, XT_27, &YT_29, STATE_VARIABLE_A_39_39, STATE_VARIABLE_A_5, STATE_VARIABLE_B_40_40, STATE_VARIABLE_B_7, STATE_VARIABLE_C_41_41, STATE_VARIABLE_C_9);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = YH_28;
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (YT_29));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word XA_46 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word XB_47 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
        MR_Word YA_48;
        MR_Box STATE_VARIABLE_A_59_59;
        MR_Box STATE_VARIABLE_B_60_60;
        MR_Box STATE_VARIABLE_C_61_61;
        MR_Word * AddrYB_70;

        mercury__cord__map_foldl3_node_9_p_0(TypeInfo_for_A_65, TypeInfo_for_B_66, TypeInfo_for_C_67, TypeInfo_for_D_68, TypeInfo_for_E_69, P_1, XA_46, &YA_48, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_59_59, STATE_VARIABLE_B_0_6, &STATE_VARIABLE_B_60_60, STATE_VARIABLE_C_0_8, &STATE_VARIABLE_C_61_61);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (YA_48));
          MR_hl_field(MR_mktag(2), base, 1) = NULL;
        }
        AddrYB_70 = (MR_Word *) (&(MR_hl_field(MR_mktag(2), *HeadVar__3_3, (MR_Integer) 1)));
        mercury__cord__LCMC__pred__map_foldl3_node__1_9_p_0(TypeInfo_for_A_65, TypeInfo_for_B_66, TypeInfo_for_C_67, TypeInfo_for_D_68, TypeInfo_for_E_69, P_1, XB_47, AddrYB_70, STATE_VARIABLE_A_59_59, STATE_VARIABLE_A_5, STATE_VARIABLE_B_60_60, STATE_VARIABLE_B_7, STATE_VARIABLE_C_61_61, STATE_VARIABLE_C_9);
      }
      break;
  }
}

void MR_CALL 
mercury__cord__map_foldl2_7_p_0(
  MR_Word TypeInfo_for_A_26,
  MR_Word TypeInfo_for_B_27,
  MR_Word TypeInfo_for_C_28,
  MR_Word TypeInfo_for_D_29,
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
    MR_Word NX_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word NY_17;

    mercury__cord__map_foldl2_node_7_p_0(TypeInfo_for_A_26, TypeInfo_for_B_27, TypeInfo_for_C_28, TypeInfo_for_D_29, HeadVar__1_1, NX_16, &NY_17, STATE_VARIABLE_A_0_4, STATE_VARIABLE_A_5, STATE_VARIABLE_B_0_6, STATE_VARIABLE_B_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (NY_17));
    }
  }
}

void MR_CALL 
mercury__cord__LCMC__pred__map_foldl2_node__1_7_p_0(
  MR_Word TypeInfo_for_A_49,
  MR_Word TypeInfo_for_B_50,
  MR_Word TypeInfo_for_C_51,
  MR_Word TypeInfo_for_D_52,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_54,
  MR_Box STATE_VARIABLE_A_0_4,
  MR_Box * STATE_VARIABLE_A_5,
  MR_Box STATE_VARIABLE_B_0_6,
  MR_Box * STATE_VARIABLE_B_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box X_9 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
          MR_Box Y_10;
          MR_Word HeadVar__3_56;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

          func_1(((MR_Box) (P_1)), X_9, &Y_10, STATE_VARIABLE_A_0_4, STATE_VARIABLE_A_5, STATE_VARIABLE_B_0_6, STATE_VARIABLE_B_7);
          {
            HeadVar__3_56 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), HeadVar__3_56, 0) = Y_10;
          }
          *AddrOfHeadVar__3_54 = HeadVar__3_56;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box XH_20 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Word XT_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          MR_Box YH_22;
          MR_Word YT_23;
          MR_Box STATE_VARIABLE_A_30_30;
          MR_Box STATE_VARIABLE_B_31_31;
          MR_Word HeadVar__3_55;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

          func_0(((MR_Box) (P_1)), XH_20, &YH_22, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_30_30, STATE_VARIABLE_B_0_6, &STATE_VARIABLE_B_31_31);
          mercury__list__map_foldl2_7_p_0(TypeInfo_for_A_49, TypeInfo_for_B_50, TypeInfo_for_C_51, TypeInfo_for_D_52, P_1, XT_21, &YT_23, STATE_VARIABLE_A_30_30, STATE_VARIABLE_A_5, STATE_VARIABLE_B_31_31, STATE_VARIABLE_B_7);
          {
            HeadVar__3_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), HeadVar__3_55, 0) = YH_22;
            MR_hl_field(MR_mktag(1), HeadVar__3_55, 1) = ((MR_Box) (YT_23));
          }
          *AddrOfHeadVar__3_54 = HeadVar__3_55;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word XA_35 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
          MR_Word XB_36 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word YA_37;
          MR_Box STATE_VARIABLE_A_45_45;
          MR_Box STATE_VARIABLE_B_46_46;
          MR_Word HeadVar__3_3;
          MR_Word * AddrYB_53;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word * next_value_of_AddrOfHeadVar__3_54;
          MR_Box next_value_of_STATE_VARIABLE_A_0_4;
          MR_Box next_value_of_STATE_VARIABLE_B_0_6;

          mercury__cord__map_foldl2_node_7_p_0(TypeInfo_for_A_49, TypeInfo_for_B_50, TypeInfo_for_C_51, TypeInfo_for_D_52, P_1, XA_35, &YA_37, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_45_45, STATE_VARIABLE_B_0_6, &STATE_VARIABLE_B_46_46);
          {
            HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), HeadVar__3_3, 0) = ((MR_Box) (YA_37));
            MR_hl_field(MR_mktag(2), HeadVar__3_3, 1) = NULL;
          }
          AddrYB_53 = (MR_Word *) (&(MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1)));
          *AddrOfHeadVar__3_54 = HeadVar__3_3;
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = XB_36;
          next_value_of_AddrOfHeadVar__3_54 = AddrYB_53;
          next_value_of_STATE_VARIABLE_A_0_4 = STATE_VARIABLE_A_45_45;
          next_value_of_STATE_VARIABLE_B_0_6 = STATE_VARIABLE_B_46_46;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          AddrOfHeadVar__3_54 = next_value_of_AddrOfHeadVar__3_54;
          STATE_VARIABLE_A_0_4 = next_value_of_STATE_VARIABLE_A_0_4;
          STATE_VARIABLE_B_0_6 = next_value_of_STATE_VARIABLE_B_0_6;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__cord__map_foldl2_node_7_p_0(
  MR_Word TypeInfo_for_A_49,
  MR_Word TypeInfo_for_B_50,
  MR_Word TypeInfo_for_C_51,
  MR_Word TypeInfo_for_D_52,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Box STATE_VARIABLE_A_0_4,
  MR_Box * STATE_VARIABLE_A_5,
  MR_Box STATE_VARIABLE_B_0_6,
  MR_Box * STATE_VARIABLE_B_7)
{
  switch (MR_tag((MR_Word) HeadVar__2_2)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Box X_9 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
        MR_Box Y_10;
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

        func_1(((MR_Box) (P_1)), X_9, &Y_10, STATE_VARIABLE_A_0_4, STATE_VARIABLE_A_5, STATE_VARIABLE_B_0_6, STATE_VARIABLE_B_7);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(0), base, 0) = Y_10;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Box XH_20 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
        MR_Word XT_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        MR_Box YH_22;
        MR_Word YT_23;
        MR_Box STATE_VARIABLE_A_30_30;
        MR_Box STATE_VARIABLE_B_31_31;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

        func_0(((MR_Box) (P_1)), XH_20, &YH_22, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_30_30, STATE_VARIABLE_B_0_6, &STATE_VARIABLE_B_31_31);
        mercury__list__map_foldl2_7_p_0(TypeInfo_for_A_49, TypeInfo_for_B_50, TypeInfo_for_C_51, TypeInfo_for_D_52, P_1, XT_21, &YT_23, STATE_VARIABLE_A_30_30, STATE_VARIABLE_A_5, STATE_VARIABLE_B_31_31, STATE_VARIABLE_B_7);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = YH_22;
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (YT_23));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word XA_35 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word XB_36 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
        MR_Word YA_37;
        MR_Box STATE_VARIABLE_A_45_45;
        MR_Box STATE_VARIABLE_B_46_46;
        MR_Word * AddrYB_53;

        mercury__cord__map_foldl2_node_7_p_0(TypeInfo_for_A_49, TypeInfo_for_B_50, TypeInfo_for_C_51, TypeInfo_for_D_52, P_1, XA_35, &YA_37, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_45_45, STATE_VARIABLE_B_0_6, &STATE_VARIABLE_B_46_46);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (YA_37));
          MR_hl_field(MR_mktag(2), base, 1) = NULL;
        }
        AddrYB_53 = (MR_Word *) (&(MR_hl_field(MR_mktag(2), *HeadVar__3_3, (MR_Integer) 1)));
        mercury__cord__LCMC__pred__map_foldl2_node__1_7_p_0(TypeInfo_for_A_49, TypeInfo_for_B_50, TypeInfo_for_C_51, TypeInfo_for_D_52, P_1, XB_36, AddrYB_53, STATE_VARIABLE_A_45_45, STATE_VARIABLE_A_5, STATE_VARIABLE_B_46_46, STATE_VARIABLE_B_7);
      }
      break;
  }
}

MR_bool MR_CALL 
mercury__cord__map_foldl_5_p_5(
  MR_Word TypeInfo_for_A_17,
  MR_Word TypeInfo_for_B_18,
  MR_Word TypeInfo_for_C_19,
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
    MR_Word NX_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word NY_12;

    succeeded = mercury__cord__map_foldl_node_5_p_5(TypeInfo_for_A_17, TypeInfo_for_B_18, TypeInfo_for_C_19, HeadVar__1_1, NX_11, &NY_12, STATE_VARIABLE_A_0_4, STATE_VARIABLE_A_5);
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (NY_12));
      }
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__cord__LCMC__pred__map_foldl_node__1_5_p_5(
  MR_Word TypeInfo_for_A_33,
  MR_Word TypeInfo_for_B_34,
  MR_Word TypeInfo_for_C_35,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_37,
  MR_Box STATE_VARIABLE_A_0_4,
  MR_Box * STATE_VARIABLE_A_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box X_7 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
          MR_Box Y_8;
          MR_Word HeadVar__3_39;
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

          succeeded = func_1(((MR_Box) (P_1)), X_7, &Y_8, STATE_VARIABLE_A_0_4, STATE_VARIABLE_A_5);
          if (succeeded)
          {
            {
              HeadVar__3_39 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), HeadVar__3_39, 0) = Y_8;
            }
            *AddrOfHeadVar__3_37 = HeadVar__3_39;
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box XH_14 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Word XT_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          MR_Box YH_16;
          MR_Word YT_17;
          MR_Box STATE_VARIABLE_A_21_21;
          MR_Word HeadVar__3_38;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

          succeeded = func_0(((MR_Box) (P_1)), XH_14, &YH_16, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_21_21);
          if (succeeded)
          {
            succeeded = mercury__list__map_foldl_5_p_5(TypeInfo_for_A_33, TypeInfo_for_B_34, TypeInfo_for_C_35, P_1, XT_15, &YT_17, STATE_VARIABLE_A_21_21, STATE_VARIABLE_A_5);
            if (succeeded)
            {
              {
                HeadVar__3_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), HeadVar__3_38, 0) = YH_16;
                MR_hl_field(MR_mktag(1), HeadVar__3_38, 1) = ((MR_Box) (YT_17));
              }
              *AddrOfHeadVar__3_37 = HeadVar__3_38;
              succeeded = MR_TRUE;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word XA_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
          MR_Word XB_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word YA_26;
          MR_Box STATE_VARIABLE_A_31_31;
          MR_Word HeadVar__3_3;
          MR_Word * AddrYB_36;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word * next_value_of_AddrOfHeadVar__3_37;
          MR_Box next_value_of_STATE_VARIABLE_A_0_4;

          succeeded = mercury__cord__map_foldl_node_5_p_5(TypeInfo_for_A_33, TypeInfo_for_B_34, TypeInfo_for_C_35, P_1, XA_24, &YA_26, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_31_31);
          if (succeeded)
          {
            {
              HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), HeadVar__3_3, 0) = ((MR_Box) (YA_26));
              MR_hl_field(MR_mktag(2), HeadVar__3_3, 1) = NULL;
            }
            AddrYB_36 = (MR_Word *) (&(MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1)));
            *AddrOfHeadVar__3_37 = HeadVar__3_3;
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__2_2 = XB_25;
            next_value_of_AddrOfHeadVar__3_37 = AddrYB_36;
            next_value_of_STATE_VARIABLE_A_0_4 = STATE_VARIABLE_A_31_31;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            AddrOfHeadVar__3_37 = next_value_of_AddrOfHeadVar__3_37;
            STATE_VARIABLE_A_0_4 = next_value_of_STATE_VARIABLE_A_0_4;
            continue;
          }
        }
        break;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__cord__map_foldl_node_5_p_5(
  MR_Word TypeInfo_for_A_33,
  MR_Word TypeInfo_for_B_34,
  MR_Word TypeInfo_for_C_35,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Box STATE_VARIABLE_A_0_4,
  MR_Box * STATE_VARIABLE_A_5)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) HeadVar__2_2)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Box X_7 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
        MR_Box Y_8;
        MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

        succeeded = func_1(((MR_Box) (P_1)), X_7, &Y_8, STATE_VARIABLE_A_0_4, STATE_VARIABLE_A_5);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(0), base, 0) = Y_8;
          }
          succeeded = MR_TRUE;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Box XH_14 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
        MR_Word XT_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        MR_Box YH_16;
        MR_Word YT_17;
        MR_Box STATE_VARIABLE_A_21_21;
        MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

        succeeded = func_0(((MR_Box) (P_1)), XH_14, &YH_16, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_21_21);
        if (succeeded)
        {
          succeeded = mercury__list__map_foldl_5_p_5(TypeInfo_for_A_33, TypeInfo_for_B_34, TypeInfo_for_C_35, P_1, XT_15, &YT_17, STATE_VARIABLE_A_21_21, STATE_VARIABLE_A_5);
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = YH_16;
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (YT_17));
            }
            succeeded = MR_TRUE;
          }
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word XA_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word XB_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
        MR_Word YA_26;
        MR_Box STATE_VARIABLE_A_31_31;
        MR_Word * AddrYB_36;

        succeeded = mercury__cord__map_foldl_node_5_p_5(TypeInfo_for_A_33, TypeInfo_for_B_34, TypeInfo_for_C_35, P_1, XA_24, &YA_26, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_31_31);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (YA_26));
            MR_hl_field(MR_mktag(2), base, 1) = NULL;
          }
          AddrYB_36 = (MR_Word *) (&(MR_hl_field(MR_mktag(2), *HeadVar__3_3, (MR_Integer) 1)));
          succeeded = mercury__cord__LCMC__pred__map_foldl_node__1_5_p_5(TypeInfo_for_A_33, TypeInfo_for_B_34, TypeInfo_for_C_35, P_1, XB_25, AddrYB_36, STATE_VARIABLE_A_31_31, STATE_VARIABLE_A_5);
        }
      }
      break;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__cord__map_foldl_5_p_4(
  MR_Word TypeInfo_for_A_17,
  MR_Word TypeInfo_for_B_18,
  MR_Word TypeInfo_for_C_19,
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
    MR_Word NX_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word NY_12;

    succeeded = mercury__cord__map_foldl_node_5_p_4(TypeInfo_for_A_17, TypeInfo_for_B_18, TypeInfo_for_C_19, HeadVar__1_1, NX_11, &NY_12, STATE_VARIABLE_A_0_4, STATE_VARIABLE_A_5);
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (NY_12));
      }
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__cord__LCMC__pred__map_foldl_node__1_5_p_4(
  MR_Word TypeInfo_for_A_33,
  MR_Word TypeInfo_for_B_34,
  MR_Word TypeInfo_for_C_35,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_37,
  MR_Box STATE_VARIABLE_A_0_4,
  MR_Box * STATE_VARIABLE_A_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box X_7 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
          MR_Box Y_8;
          MR_Word HeadVar__3_39;
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

          succeeded = func_1(((MR_Box) (P_1)), X_7, &Y_8, STATE_VARIABLE_A_0_4, STATE_VARIABLE_A_5);
          if (succeeded)
          {
            {
              HeadVar__3_39 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), HeadVar__3_39, 0) = Y_8;
            }
            *AddrOfHeadVar__3_37 = HeadVar__3_39;
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box XH_14 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Word XT_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          MR_Box YH_16;
          MR_Word YT_17;
          MR_Box STATE_VARIABLE_A_21_21;
          MR_Word HeadVar__3_38;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

          succeeded = func_0(((MR_Box) (P_1)), XH_14, &YH_16, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_21_21);
          if (succeeded)
          {
            succeeded = mercury__list__map_foldl_5_p_4(TypeInfo_for_A_33, TypeInfo_for_B_34, TypeInfo_for_C_35, P_1, XT_15, &YT_17, STATE_VARIABLE_A_21_21, STATE_VARIABLE_A_5);
            if (succeeded)
            {
              {
                HeadVar__3_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), HeadVar__3_38, 0) = YH_16;
                MR_hl_field(MR_mktag(1), HeadVar__3_38, 1) = ((MR_Box) (YT_17));
              }
              *AddrOfHeadVar__3_37 = HeadVar__3_38;
              succeeded = MR_TRUE;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word XA_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
          MR_Word XB_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word YA_26;
          MR_Box STATE_VARIABLE_A_31_31;
          MR_Word HeadVar__3_3;
          MR_Word * AddrYB_36;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word * next_value_of_AddrOfHeadVar__3_37;
          MR_Box next_value_of_STATE_VARIABLE_A_0_4;

          succeeded = mercury__cord__map_foldl_node_5_p_4(TypeInfo_for_A_33, TypeInfo_for_B_34, TypeInfo_for_C_35, P_1, XA_24, &YA_26, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_31_31);
          if (succeeded)
          {
            {
              HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), HeadVar__3_3, 0) = ((MR_Box) (YA_26));
              MR_hl_field(MR_mktag(2), HeadVar__3_3, 1) = NULL;
            }
            AddrYB_36 = (MR_Word *) (&(MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1)));
            *AddrOfHeadVar__3_37 = HeadVar__3_3;
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__2_2 = XB_25;
            next_value_of_AddrOfHeadVar__3_37 = AddrYB_36;
            next_value_of_STATE_VARIABLE_A_0_4 = STATE_VARIABLE_A_31_31;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            AddrOfHeadVar__3_37 = next_value_of_AddrOfHeadVar__3_37;
            STATE_VARIABLE_A_0_4 = next_value_of_STATE_VARIABLE_A_0_4;
            continue;
          }
        }
        break;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__cord__map_foldl_node_5_p_4(
  MR_Word TypeInfo_for_A_33,
  MR_Word TypeInfo_for_B_34,
  MR_Word TypeInfo_for_C_35,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Box STATE_VARIABLE_A_0_4,
  MR_Box * STATE_VARIABLE_A_5)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) HeadVar__2_2)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Box X_7 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
        MR_Box Y_8;
        MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

        succeeded = func_1(((MR_Box) (P_1)), X_7, &Y_8, STATE_VARIABLE_A_0_4, STATE_VARIABLE_A_5);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(0), base, 0) = Y_8;
          }
          succeeded = MR_TRUE;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Box XH_14 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
        MR_Word XT_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        MR_Box YH_16;
        MR_Word YT_17;
        MR_Box STATE_VARIABLE_A_21_21;
        MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

        succeeded = func_0(((MR_Box) (P_1)), XH_14, &YH_16, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_21_21);
        if (succeeded)
        {
          succeeded = mercury__list__map_foldl_5_p_4(TypeInfo_for_A_33, TypeInfo_for_B_34, TypeInfo_for_C_35, P_1, XT_15, &YT_17, STATE_VARIABLE_A_21_21, STATE_VARIABLE_A_5);
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = YH_16;
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (YT_17));
            }
            succeeded = MR_TRUE;
          }
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word XA_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word XB_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
        MR_Word YA_26;
        MR_Box STATE_VARIABLE_A_31_31;
        MR_Word * AddrYB_36;

        succeeded = mercury__cord__map_foldl_node_5_p_4(TypeInfo_for_A_33, TypeInfo_for_B_34, TypeInfo_for_C_35, P_1, XA_24, &YA_26, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_31_31);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (YA_26));
            MR_hl_field(MR_mktag(2), base, 1) = NULL;
          }
          AddrYB_36 = (MR_Word *) (&(MR_hl_field(MR_mktag(2), *HeadVar__3_3, (MR_Integer) 1)));
          succeeded = mercury__cord__LCMC__pred__map_foldl_node__1_5_p_4(TypeInfo_for_A_33, TypeInfo_for_B_34, TypeInfo_for_C_35, P_1, XB_25, AddrYB_36, STATE_VARIABLE_A_31_31, STATE_VARIABLE_A_5);
        }
      }
      break;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__cord__map_foldl_5_p_3(
  MR_Word TypeInfo_for_A_17,
  MR_Word TypeInfo_for_B_18,
  MR_Word TypeInfo_for_C_19,
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
    MR_Word NX_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word NY_12;

    succeeded = mercury__cord__map_foldl_node_5_p_3(TypeInfo_for_A_17, TypeInfo_for_B_18, TypeInfo_for_C_19, HeadVar__1_1, NX_11, &NY_12, STATE_VARIABLE_A_0_4, STATE_VARIABLE_A_5);
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (NY_12));
      }
      succeeded = MR_TRUE;
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__cord__LCMC__pred__map_foldl_node__1_5_p_3(
  MR_Word TypeInfo_for_A_33,
  MR_Word TypeInfo_for_B_34,
  MR_Word TypeInfo_for_C_35,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_37,
  MR_Box STATE_VARIABLE_A_0_4,
  MR_Box * STATE_VARIABLE_A_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box X_7 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
          MR_Box Y_8;
          MR_Word HeadVar__3_39;
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

          succeeded = func_1(((MR_Box) (P_1)), X_7, &Y_8, STATE_VARIABLE_A_0_4, STATE_VARIABLE_A_5);
          if (succeeded)
          {
            {
              HeadVar__3_39 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), HeadVar__3_39, 0) = Y_8;
            }
            *AddrOfHeadVar__3_37 = HeadVar__3_39;
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box XH_14 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Word XT_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          MR_Box YH_16;
          MR_Word YT_17;
          MR_Box STATE_VARIABLE_A_21_21;
          MR_Word HeadVar__3_38;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

          succeeded = func_0(((MR_Box) (P_1)), XH_14, &YH_16, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_21_21);
          if (succeeded)
          {
            succeeded = mercury__list__map_foldl_5_p_3(TypeInfo_for_A_33, TypeInfo_for_B_34, TypeInfo_for_C_35, P_1, XT_15, &YT_17, STATE_VARIABLE_A_21_21, STATE_VARIABLE_A_5);
            if (succeeded)
            {
              {
                HeadVar__3_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), HeadVar__3_38, 0) = YH_16;
                MR_hl_field(MR_mktag(1), HeadVar__3_38, 1) = ((MR_Box) (YT_17));
              }
              *AddrOfHeadVar__3_37 = HeadVar__3_38;
              succeeded = MR_TRUE;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word XA_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
          MR_Word XB_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word YA_26;
          MR_Box STATE_VARIABLE_A_31_31;
          MR_Word HeadVar__3_3;
          MR_Word * AddrYB_36;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word * next_value_of_AddrOfHeadVar__3_37;
          MR_Box next_value_of_STATE_VARIABLE_A_0_4;

          succeeded = mercury__cord__map_foldl_node_5_p_3(TypeInfo_for_A_33, TypeInfo_for_B_34, TypeInfo_for_C_35, P_1, XA_24, &YA_26, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_31_31);
          if (succeeded)
          {
            {
              HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), HeadVar__3_3, 0) = ((MR_Box) (YA_26));
              MR_hl_field(MR_mktag(2), HeadVar__3_3, 1) = NULL;
            }
            AddrYB_36 = (MR_Word *) (&(MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1)));
            *AddrOfHeadVar__3_37 = HeadVar__3_3;
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__2_2 = XB_25;
            next_value_of_AddrOfHeadVar__3_37 = AddrYB_36;
            next_value_of_STATE_VARIABLE_A_0_4 = STATE_VARIABLE_A_31_31;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            AddrOfHeadVar__3_37 = next_value_of_AddrOfHeadVar__3_37;
            STATE_VARIABLE_A_0_4 = next_value_of_STATE_VARIABLE_A_0_4;
            continue;
          }
        }
        break;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__cord__map_foldl_node_5_p_3(
  MR_Word TypeInfo_for_A_33,
  MR_Word TypeInfo_for_B_34,
  MR_Word TypeInfo_for_C_35,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Box STATE_VARIABLE_A_0_4,
  MR_Box * STATE_VARIABLE_A_5)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) HeadVar__2_2)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Box X_7 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
        MR_Box Y_8;
        MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

        succeeded = func_1(((MR_Box) (P_1)), X_7, &Y_8, STATE_VARIABLE_A_0_4, STATE_VARIABLE_A_5);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            *HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(0), base, 0) = Y_8;
          }
          succeeded = MR_TRUE;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Box XH_14 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
        MR_Word XT_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        MR_Box YH_16;
        MR_Word YT_17;
        MR_Box STATE_VARIABLE_A_21_21;
        MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

        succeeded = func_0(((MR_Box) (P_1)), XH_14, &YH_16, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_21_21);
        if (succeeded)
        {
          succeeded = mercury__list__map_foldl_5_p_3(TypeInfo_for_A_33, TypeInfo_for_B_34, TypeInfo_for_C_35, P_1, XT_15, &YT_17, STATE_VARIABLE_A_21_21, STATE_VARIABLE_A_5);
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = YH_16;
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (YT_17));
            }
            succeeded = MR_TRUE;
          }
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word XA_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word XB_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
        MR_Word YA_26;
        MR_Box STATE_VARIABLE_A_31_31;
        MR_Word * AddrYB_36;

        succeeded = mercury__cord__map_foldl_node_5_p_3(TypeInfo_for_A_33, TypeInfo_for_B_34, TypeInfo_for_C_35, P_1, XA_24, &YA_26, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_31_31);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (YA_26));
            MR_hl_field(MR_mktag(2), base, 1) = NULL;
          }
          AddrYB_36 = (MR_Word *) (&(MR_hl_field(MR_mktag(2), *HeadVar__3_3, (MR_Integer) 1)));
          succeeded = mercury__cord__LCMC__pred__map_foldl_node__1_5_p_3(TypeInfo_for_A_33, TypeInfo_for_B_34, TypeInfo_for_C_35, P_1, XB_25, AddrYB_36, STATE_VARIABLE_A_31_31, STATE_VARIABLE_A_5);
        }
      }
      break;
  }
  return succeeded;
}

void MR_CALL 
mercury__cord__map_foldl_5_p_2(
  MR_Word TypeInfo_for_A_17,
  MR_Word TypeInfo_for_B_18,
  MR_Word TypeInfo_for_C_19,
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
    MR_Word NX_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word NY_12;

    mercury__cord__map_foldl_node_5_p_2(TypeInfo_for_A_17, TypeInfo_for_B_18, TypeInfo_for_C_19, HeadVar__1_1, NX_11, &NY_12, STATE_VARIABLE_A_0_4, STATE_VARIABLE_A_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (NY_12));
    }
  }
}

void MR_CALL 
mercury__cord__LCMC__pred__map_foldl_node__1_5_p_2(
  MR_Word TypeInfo_for_A_33,
  MR_Word TypeInfo_for_B_34,
  MR_Word TypeInfo_for_C_35,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_37,
  MR_Box STATE_VARIABLE_A_0_4,
  MR_Box * STATE_VARIABLE_A_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box X_7 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
          MR_Box Y_8;
          MR_Word HeadVar__3_39;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

          func_1(((MR_Box) (P_1)), X_7, &Y_8, STATE_VARIABLE_A_0_4, STATE_VARIABLE_A_5);
          {
            HeadVar__3_39 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), HeadVar__3_39, 0) = Y_8;
          }
          *AddrOfHeadVar__3_37 = HeadVar__3_39;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box XH_14 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Word XT_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          MR_Box YH_16;
          MR_Word YT_17;
          MR_Box STATE_VARIABLE_A_21_21;
          MR_Word HeadVar__3_38;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

          func_0(((MR_Box) (P_1)), XH_14, &YH_16, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_21_21);
          mercury__list__map_foldl_5_p_2(TypeInfo_for_A_33, TypeInfo_for_B_34, TypeInfo_for_C_35, P_1, XT_15, &YT_17, STATE_VARIABLE_A_21_21, STATE_VARIABLE_A_5);
          {
            HeadVar__3_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), HeadVar__3_38, 0) = YH_16;
            MR_hl_field(MR_mktag(1), HeadVar__3_38, 1) = ((MR_Box) (YT_17));
          }
          *AddrOfHeadVar__3_37 = HeadVar__3_38;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word XA_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
          MR_Word XB_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word YA_26;
          MR_Box STATE_VARIABLE_A_31_31;
          MR_Word HeadVar__3_3;
          MR_Word * AddrYB_36;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word * next_value_of_AddrOfHeadVar__3_37;
          MR_Box next_value_of_STATE_VARIABLE_A_0_4;

          mercury__cord__map_foldl_node_5_p_2(TypeInfo_for_A_33, TypeInfo_for_B_34, TypeInfo_for_C_35, P_1, XA_24, &YA_26, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_31_31);
          {
            HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), HeadVar__3_3, 0) = ((MR_Box) (YA_26));
            MR_hl_field(MR_mktag(2), HeadVar__3_3, 1) = NULL;
          }
          AddrYB_36 = (MR_Word *) (&(MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1)));
          *AddrOfHeadVar__3_37 = HeadVar__3_3;
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = XB_25;
          next_value_of_AddrOfHeadVar__3_37 = AddrYB_36;
          next_value_of_STATE_VARIABLE_A_0_4 = STATE_VARIABLE_A_31_31;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          AddrOfHeadVar__3_37 = next_value_of_AddrOfHeadVar__3_37;
          STATE_VARIABLE_A_0_4 = next_value_of_STATE_VARIABLE_A_0_4;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__cord__map_foldl_node_5_p_2(
  MR_Word TypeInfo_for_A_33,
  MR_Word TypeInfo_for_B_34,
  MR_Word TypeInfo_for_C_35,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Box STATE_VARIABLE_A_0_4,
  MR_Box * STATE_VARIABLE_A_5)
{
  switch (MR_tag((MR_Word) HeadVar__2_2)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Box X_7 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
        MR_Box Y_8;
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

        func_1(((MR_Box) (P_1)), X_7, &Y_8, STATE_VARIABLE_A_0_4, STATE_VARIABLE_A_5);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(0), base, 0) = Y_8;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Box XH_14 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
        MR_Word XT_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        MR_Box YH_16;
        MR_Word YT_17;
        MR_Box STATE_VARIABLE_A_21_21;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

        func_0(((MR_Box) (P_1)), XH_14, &YH_16, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_21_21);
        mercury__list__map_foldl_5_p_2(TypeInfo_for_A_33, TypeInfo_for_B_34, TypeInfo_for_C_35, P_1, XT_15, &YT_17, STATE_VARIABLE_A_21_21, STATE_VARIABLE_A_5);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = YH_16;
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (YT_17));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word XA_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word XB_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
        MR_Word YA_26;
        MR_Box STATE_VARIABLE_A_31_31;
        MR_Word * AddrYB_36;

        mercury__cord__map_foldl_node_5_p_2(TypeInfo_for_A_33, TypeInfo_for_B_34, TypeInfo_for_C_35, P_1, XA_24, &YA_26, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_31_31);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (YA_26));
          MR_hl_field(MR_mktag(2), base, 1) = NULL;
        }
        AddrYB_36 = (MR_Word *) (&(MR_hl_field(MR_mktag(2), *HeadVar__3_3, (MR_Integer) 1)));
        mercury__cord__LCMC__pred__map_foldl_node__1_5_p_2(TypeInfo_for_A_33, TypeInfo_for_B_34, TypeInfo_for_C_35, P_1, XB_25, AddrYB_36, STATE_VARIABLE_A_31_31, STATE_VARIABLE_A_5);
      }
      break;
  }
}

void MR_CALL 
mercury__cord__map_foldl_5_p_1(
  MR_Word TypeInfo_for_A_17,
  MR_Word TypeInfo_for_B_18,
  MR_Word TypeInfo_for_C_19,
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
    MR_Word NX_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word NY_12;

    mercury__cord__map_foldl_node_5_p_1(TypeInfo_for_A_17, TypeInfo_for_B_18, TypeInfo_for_C_19, HeadVar__1_1, NX_11, &NY_12, STATE_VARIABLE_A_0_4, STATE_VARIABLE_A_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (NY_12));
    }
  }
}

void MR_CALL 
mercury__cord__LCMC__pred__map_foldl_node__1_5_p_1(
  MR_Word TypeInfo_for_A_33,
  MR_Word TypeInfo_for_B_34,
  MR_Word TypeInfo_for_C_35,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_37,
  MR_Box STATE_VARIABLE_A_0_4,
  MR_Box * STATE_VARIABLE_A_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box X_7 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
          MR_Box Y_8;
          MR_Word HeadVar__3_39;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

          func_1(((MR_Box) (P_1)), X_7, &Y_8, STATE_VARIABLE_A_0_4, STATE_VARIABLE_A_5);
          {
            HeadVar__3_39 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), HeadVar__3_39, 0) = Y_8;
          }
          *AddrOfHeadVar__3_37 = HeadVar__3_39;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box XH_14 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Word XT_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          MR_Box YH_16;
          MR_Word YT_17;
          MR_Box STATE_VARIABLE_A_21_21;
          MR_Word HeadVar__3_38;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

          func_0(((MR_Box) (P_1)), XH_14, &YH_16, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_21_21);
          mercury__list__map_foldl_5_p_1(TypeInfo_for_A_33, TypeInfo_for_B_34, TypeInfo_for_C_35, P_1, XT_15, &YT_17, STATE_VARIABLE_A_21_21, STATE_VARIABLE_A_5);
          {
            HeadVar__3_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), HeadVar__3_38, 0) = YH_16;
            MR_hl_field(MR_mktag(1), HeadVar__3_38, 1) = ((MR_Box) (YT_17));
          }
          *AddrOfHeadVar__3_37 = HeadVar__3_38;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word XA_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
          MR_Word XB_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word YA_26;
          MR_Box STATE_VARIABLE_A_31_31;
          MR_Word HeadVar__3_3;
          MR_Word * AddrYB_36;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word * next_value_of_AddrOfHeadVar__3_37;
          MR_Box next_value_of_STATE_VARIABLE_A_0_4;

          mercury__cord__map_foldl_node_5_p_1(TypeInfo_for_A_33, TypeInfo_for_B_34, TypeInfo_for_C_35, P_1, XA_24, &YA_26, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_31_31);
          {
            HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), HeadVar__3_3, 0) = ((MR_Box) (YA_26));
            MR_hl_field(MR_mktag(2), HeadVar__3_3, 1) = NULL;
          }
          AddrYB_36 = (MR_Word *) (&(MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1)));
          *AddrOfHeadVar__3_37 = HeadVar__3_3;
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = XB_25;
          next_value_of_AddrOfHeadVar__3_37 = AddrYB_36;
          next_value_of_STATE_VARIABLE_A_0_4 = STATE_VARIABLE_A_31_31;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          AddrOfHeadVar__3_37 = next_value_of_AddrOfHeadVar__3_37;
          STATE_VARIABLE_A_0_4 = next_value_of_STATE_VARIABLE_A_0_4;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__cord__map_foldl_node_5_p_1(
  MR_Word TypeInfo_for_A_33,
  MR_Word TypeInfo_for_B_34,
  MR_Word TypeInfo_for_C_35,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Box STATE_VARIABLE_A_0_4,
  MR_Box * STATE_VARIABLE_A_5)
{
  switch (MR_tag((MR_Word) HeadVar__2_2)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Box X_7 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
        MR_Box Y_8;
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

        func_1(((MR_Box) (P_1)), X_7, &Y_8, STATE_VARIABLE_A_0_4, STATE_VARIABLE_A_5);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(0), base, 0) = Y_8;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Box XH_14 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
        MR_Word XT_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        MR_Box YH_16;
        MR_Word YT_17;
        MR_Box STATE_VARIABLE_A_21_21;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

        func_0(((MR_Box) (P_1)), XH_14, &YH_16, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_21_21);
        mercury__list__map_foldl_5_p_1(TypeInfo_for_A_33, TypeInfo_for_B_34, TypeInfo_for_C_35, P_1, XT_15, &YT_17, STATE_VARIABLE_A_21_21, STATE_VARIABLE_A_5);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = YH_16;
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (YT_17));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word XA_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word XB_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
        MR_Word YA_26;
        MR_Box STATE_VARIABLE_A_31_31;
        MR_Word * AddrYB_36;

        mercury__cord__map_foldl_node_5_p_1(TypeInfo_for_A_33, TypeInfo_for_B_34, TypeInfo_for_C_35, P_1, XA_24, &YA_26, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_31_31);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (YA_26));
          MR_hl_field(MR_mktag(2), base, 1) = NULL;
        }
        AddrYB_36 = (MR_Word *) (&(MR_hl_field(MR_mktag(2), *HeadVar__3_3, (MR_Integer) 1)));
        mercury__cord__LCMC__pred__map_foldl_node__1_5_p_1(TypeInfo_for_A_33, TypeInfo_for_B_34, TypeInfo_for_C_35, P_1, XB_25, AddrYB_36, STATE_VARIABLE_A_31_31, STATE_VARIABLE_A_5);
      }
      break;
  }
}

void MR_CALL 
mercury__cord__map_foldl_5_p_0(
  MR_Word TypeInfo_for_A_17,
  MR_Word TypeInfo_for_B_18,
  MR_Word TypeInfo_for_C_19,
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
    MR_Word NX_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word NY_12;

    mercury__cord__map_foldl_node_5_p_0(TypeInfo_for_A_17, TypeInfo_for_B_18, TypeInfo_for_C_19, HeadVar__1_1, NX_11, &NY_12, STATE_VARIABLE_A_0_4, STATE_VARIABLE_A_5);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (NY_12));
    }
  }
}

void MR_CALL 
mercury__cord__LCMC__pred__map_foldl_node__1_5_p_0(
  MR_Word TypeInfo_for_A_33,
  MR_Word TypeInfo_for_B_34,
  MR_Word TypeInfo_for_C_35,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_37,
  MR_Box STATE_VARIABLE_A_0_4,
  MR_Box * STATE_VARIABLE_A_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box X_7 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
          MR_Box Y_8;
          MR_Word HeadVar__3_39;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

          func_1(((MR_Box) (P_1)), X_7, &Y_8, STATE_VARIABLE_A_0_4, STATE_VARIABLE_A_5);
          {
            HeadVar__3_39 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), HeadVar__3_39, 0) = Y_8;
          }
          *AddrOfHeadVar__3_37 = HeadVar__3_39;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box XH_14 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Word XT_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          MR_Box YH_16;
          MR_Word YT_17;
          MR_Box STATE_VARIABLE_A_21_21;
          MR_Word HeadVar__3_38;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

          func_0(((MR_Box) (P_1)), XH_14, &YH_16, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_21_21);
          mercury__list__map_foldl_5_p_0(TypeInfo_for_A_33, TypeInfo_for_B_34, TypeInfo_for_C_35, P_1, XT_15, &YT_17, STATE_VARIABLE_A_21_21, STATE_VARIABLE_A_5);
          {
            HeadVar__3_38 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), HeadVar__3_38, 0) = YH_16;
            MR_hl_field(MR_mktag(1), HeadVar__3_38, 1) = ((MR_Box) (YT_17));
          }
          *AddrOfHeadVar__3_37 = HeadVar__3_38;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word XA_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
          MR_Word XB_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word YA_26;
          MR_Box STATE_VARIABLE_A_31_31;
          MR_Word HeadVar__3_3;
          MR_Word * AddrYB_36;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word * next_value_of_AddrOfHeadVar__3_37;
          MR_Box next_value_of_STATE_VARIABLE_A_0_4;

          mercury__cord__map_foldl_node_5_p_0(TypeInfo_for_A_33, TypeInfo_for_B_34, TypeInfo_for_C_35, P_1, XA_24, &YA_26, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_31_31);
          {
            HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), HeadVar__3_3, 0) = ((MR_Box) (YA_26));
            MR_hl_field(MR_mktag(2), HeadVar__3_3, 1) = NULL;
          }
          AddrYB_36 = (MR_Word *) (&(MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1)));
          *AddrOfHeadVar__3_37 = HeadVar__3_3;
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = XB_25;
          next_value_of_AddrOfHeadVar__3_37 = AddrYB_36;
          next_value_of_STATE_VARIABLE_A_0_4 = STATE_VARIABLE_A_31_31;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          AddrOfHeadVar__3_37 = next_value_of_AddrOfHeadVar__3_37;
          STATE_VARIABLE_A_0_4 = next_value_of_STATE_VARIABLE_A_0_4;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__cord__map_foldl_node_5_p_0(
  MR_Word TypeInfo_for_A_33,
  MR_Word TypeInfo_for_B_34,
  MR_Word TypeInfo_for_C_35,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Box STATE_VARIABLE_A_0_4,
  MR_Box * STATE_VARIABLE_A_5)
{
  switch (MR_tag((MR_Word) HeadVar__2_2)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Box X_7 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
        MR_Box Y_8;
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

        func_1(((MR_Box) (P_1)), X_7, &Y_8, STATE_VARIABLE_A_0_4, STATE_VARIABLE_A_5);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(0), base, 0) = Y_8;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Box XH_14 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
        MR_Word XT_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        MR_Box YH_16;
        MR_Word YT_17;
        MR_Box STATE_VARIABLE_A_21_21;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

        func_0(((MR_Box) (P_1)), XH_14, &YH_16, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_21_21);
        mercury__list__map_foldl_5_p_0(TypeInfo_for_A_33, TypeInfo_for_B_34, TypeInfo_for_C_35, P_1, XT_15, &YT_17, STATE_VARIABLE_A_21_21, STATE_VARIABLE_A_5);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = YH_16;
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (YT_17));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word XA_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word XB_25 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
        MR_Word YA_26;
        MR_Box STATE_VARIABLE_A_31_31;
        MR_Word * AddrYB_36;

        mercury__cord__map_foldl_node_5_p_0(TypeInfo_for_A_33, TypeInfo_for_B_34, TypeInfo_for_C_35, P_1, XA_24, &YA_26, STATE_VARIABLE_A_0_4, &STATE_VARIABLE_A_31_31);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (YA_26));
          MR_hl_field(MR_mktag(2), base, 1) = NULL;
        }
        AddrYB_36 = (MR_Word *) (&(MR_hl_field(MR_mktag(2), *HeadVar__3_3, (MR_Integer) 1)));
        mercury__cord__LCMC__pred__map_foldl_node__1_5_p_0(TypeInfo_for_A_33, TypeInfo_for_B_34, TypeInfo_for_C_35, P_1, XB_25, AddrYB_36, STATE_VARIABLE_A_31_31, STATE_VARIABLE_A_5);
      }
      break;
  }
}

MR_bool MR_CALL 
mercury__cord__foldr_pred_4_p_5(
  MR_Word TypeInfo_for_T_16,
  MR_Word TypeInfo_for_A_17,
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
    MR_Word N_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    succeeded = mercury__cord__foldr_node_pred_5_p_5(TypeInfo_for_T_16, TypeInfo_for_A_17, HeadVar__1_1, N_10, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Acc_0_3, STATE_VARIABLE_Acc_4);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__cord__foldr_node_pred_5_p_5(
  MR_Word TypeInfo_for_T_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word Cs_3,
  MR_Box STATE_VARIABLE_Acc_0_4,
  MR_Box * STATE_VARIABLE_Acc_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box X_10 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
          MR_Box STATE_VARIABLE_Acc_19_43;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

          succeeded = func_0(((MR_Box) (P_1)), X_10, STATE_VARIABLE_Acc_0_4, &STATE_VARIABLE_Acc_19_43);
          if (succeeded)
          {
            if ((Cs_3 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              *STATE_VARIABLE_Acc_5 = STATE_VARIABLE_Acc_19_43;
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word Y_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 0))));
              MR_Word Ys_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 1))));
              MR_Word next_value_of_HeadVar__2_2 = Y_32;
              MR_Word next_value_of_Cs_3 = Ys_33;
              MR_Box next_value_of_STATE_VARIABLE_Acc_0_4 = STATE_VARIABLE_Acc_19_43;

              // direct tailcall eliminated
              ;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              Cs_3 = next_value_of_Cs_3;
              STATE_VARIABLE_Acc_0_4 = next_value_of_STATE_VARIABLE_Acc_0_4;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box H_11 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Word T_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_17;
          MR_Box STATE_VARIABLE_Acc_19_19;

          {
            Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_17, 0) = H_11;
            MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (T_12));
          }
          succeeded = mercury__list__foldr_4_p_5(TypeInfo_for_T_30, TypeInfo_for_A_31, P_1, Var_17, STATE_VARIABLE_Acc_0_4, &STATE_VARIABLE_Acc_19_19);
          if (succeeded)
          {
            if ((Cs_3 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              *STATE_VARIABLE_Acc_5 = STATE_VARIABLE_Acc_19_19;
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word Y_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 0))));
              MR_Word Ys_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 1))));
              MR_Word next_value_of_HeadVar__2_2 = Y_13;
              MR_Word next_value_of_Cs_3 = Ys_14;
              MR_Box next_value_of_STATE_VARIABLE_Acc_0_4 = STATE_VARIABLE_Acc_19_19;

              // direct tailcall eliminated
              ;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              Cs_3 = next_value_of_Cs_3;
              STATE_VARIABLE_Acc_0_4 = next_value_of_STATE_VARIABLE_Acc_0_4;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word A_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
          MR_Word B_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_28;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_Cs_3;

          {
            Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (A_22));
            MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Cs_3));
          }
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = B_23;
          next_value_of_Cs_3 = Var_28;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          Cs_3 = next_value_of_Cs_3;
          continue;
        }
        break;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__cord__foldr_pred_4_p_4(
  MR_Word TypeInfo_for_T_16,
  MR_Word TypeInfo_for_A_17,
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
    MR_Word N_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    succeeded = mercury__cord__foldr_node_pred_5_p_4(TypeInfo_for_T_16, TypeInfo_for_A_17, HeadVar__1_1, N_10, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Acc_0_3, STATE_VARIABLE_Acc_4);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__cord__foldr_node_pred_5_p_4(
  MR_Word TypeInfo_for_T_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word Cs_3,
  MR_Box STATE_VARIABLE_Acc_0_4,
  MR_Box * STATE_VARIABLE_Acc_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box X_10 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
          MR_Box STATE_VARIABLE_Acc_19_43;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

          succeeded = func_0(((MR_Box) (P_1)), X_10, STATE_VARIABLE_Acc_0_4, &STATE_VARIABLE_Acc_19_43);
          if (succeeded)
          {
            if ((Cs_3 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              *STATE_VARIABLE_Acc_5 = STATE_VARIABLE_Acc_19_43;
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word Y_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 0))));
              MR_Word Ys_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 1))));
              MR_Word next_value_of_HeadVar__2_2 = Y_32;
              MR_Word next_value_of_Cs_3 = Ys_33;
              MR_Box next_value_of_STATE_VARIABLE_Acc_0_4 = STATE_VARIABLE_Acc_19_43;

              // direct tailcall eliminated
              ;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              Cs_3 = next_value_of_Cs_3;
              STATE_VARIABLE_Acc_0_4 = next_value_of_STATE_VARIABLE_Acc_0_4;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box H_11 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Word T_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_17;
          MR_Box STATE_VARIABLE_Acc_19_19;

          {
            Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_17, 0) = H_11;
            MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (T_12));
          }
          succeeded = mercury__list__foldr_4_p_4(TypeInfo_for_T_30, TypeInfo_for_A_31, P_1, Var_17, STATE_VARIABLE_Acc_0_4, &STATE_VARIABLE_Acc_19_19);
          if (succeeded)
          {
            if ((Cs_3 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              *STATE_VARIABLE_Acc_5 = STATE_VARIABLE_Acc_19_19;
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word Y_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 0))));
              MR_Word Ys_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 1))));
              MR_Word next_value_of_HeadVar__2_2 = Y_13;
              MR_Word next_value_of_Cs_3 = Ys_14;
              MR_Box next_value_of_STATE_VARIABLE_Acc_0_4 = STATE_VARIABLE_Acc_19_19;

              // direct tailcall eliminated
              ;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              Cs_3 = next_value_of_Cs_3;
              STATE_VARIABLE_Acc_0_4 = next_value_of_STATE_VARIABLE_Acc_0_4;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word A_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
          MR_Word B_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_28;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_Cs_3;

          {
            Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (A_22));
            MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Cs_3));
          }
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = B_23;
          next_value_of_Cs_3 = Var_28;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          Cs_3 = next_value_of_Cs_3;
          continue;
        }
        break;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__cord__foldr_pred_4_p_3(
  MR_Word TypeInfo_for_T_16,
  MR_Word TypeInfo_for_A_17,
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
    MR_Word N_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    succeeded = mercury__cord__foldr_node_pred_5_p_3(TypeInfo_for_T_16, TypeInfo_for_A_17, HeadVar__1_1, N_10, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Acc_0_3, STATE_VARIABLE_Acc_4);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__cord__foldr_node_pred_5_p_3(
  MR_Word TypeInfo_for_T_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word Cs_3,
  MR_Box STATE_VARIABLE_Acc_0_4,
  MR_Box * STATE_VARIABLE_Acc_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box X_10 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
          MR_Box STATE_VARIABLE_Acc_19_43;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

          succeeded = func_0(((MR_Box) (P_1)), X_10, STATE_VARIABLE_Acc_0_4, &STATE_VARIABLE_Acc_19_43);
          if (succeeded)
          {
            if ((Cs_3 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              *STATE_VARIABLE_Acc_5 = STATE_VARIABLE_Acc_19_43;
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word Y_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 0))));
              MR_Word Ys_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 1))));
              MR_Word next_value_of_HeadVar__2_2 = Y_32;
              MR_Word next_value_of_Cs_3 = Ys_33;
              MR_Box next_value_of_STATE_VARIABLE_Acc_0_4 = STATE_VARIABLE_Acc_19_43;

              // direct tailcall eliminated
              ;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              Cs_3 = next_value_of_Cs_3;
              STATE_VARIABLE_Acc_0_4 = next_value_of_STATE_VARIABLE_Acc_0_4;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box H_11 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Word T_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_17;
          MR_Box STATE_VARIABLE_Acc_19_19;

          {
            Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_17, 0) = H_11;
            MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (T_12));
          }
          succeeded = mercury__list__foldr_4_p_3(TypeInfo_for_T_30, TypeInfo_for_A_31, P_1, Var_17, STATE_VARIABLE_Acc_0_4, &STATE_VARIABLE_Acc_19_19);
          if (succeeded)
          {
            if ((Cs_3 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              *STATE_VARIABLE_Acc_5 = STATE_VARIABLE_Acc_19_19;
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word Y_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 0))));
              MR_Word Ys_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 1))));
              MR_Word next_value_of_HeadVar__2_2 = Y_13;
              MR_Word next_value_of_Cs_3 = Ys_14;
              MR_Box next_value_of_STATE_VARIABLE_Acc_0_4 = STATE_VARIABLE_Acc_19_19;

              // direct tailcall eliminated
              ;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              Cs_3 = next_value_of_Cs_3;
              STATE_VARIABLE_Acc_0_4 = next_value_of_STATE_VARIABLE_Acc_0_4;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word A_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
          MR_Word B_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_28;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_Cs_3;

          {
            Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (A_22));
            MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Cs_3));
          }
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = B_23;
          next_value_of_Cs_3 = Var_28;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          Cs_3 = next_value_of_Cs_3;
          continue;
        }
        break;
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__cord__foldr_pred_4_p_2(
  MR_Word TypeInfo_for_T_16,
  MR_Word TypeInfo_for_A_17,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_0_3;
  else
  {
    MR_Word N_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    mercury__cord__foldr_node_pred_5_p_2(TypeInfo_for_T_16, TypeInfo_for_A_17, HeadVar__1_1, N_10, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Acc_0_3, STATE_VARIABLE_Acc_4);
  }
}

void MR_CALL 
mercury__cord__foldr_node_pred_5_p_2(
  MR_Word TypeInfo_for_T_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word Cs_3,
  MR_Box STATE_VARIABLE_Acc_0_4,
  MR_Box * STATE_VARIABLE_Acc_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box X_10 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
          MR_Box STATE_VARIABLE_Acc_19_43;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

          func_0(((MR_Box) (P_1)), X_10, STATE_VARIABLE_Acc_0_4, &STATE_VARIABLE_Acc_19_43);
          if ((Cs_3 == (MR_Word) ((MR_Unsigned) 0U)))
            *STATE_VARIABLE_Acc_5 = STATE_VARIABLE_Acc_19_43;
          else
          {
            MR_Word Y_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 0))));
            MR_Word Ys_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 1))));
            MR_Word next_value_of_HeadVar__2_2 = Y_32;
            MR_Word next_value_of_Cs_3 = Ys_33;
            MR_Box next_value_of_STATE_VARIABLE_Acc_0_4 = STATE_VARIABLE_Acc_19_43;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            Cs_3 = next_value_of_Cs_3;
            STATE_VARIABLE_Acc_0_4 = next_value_of_STATE_VARIABLE_Acc_0_4;
            continue;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box H_11 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Word T_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_17;
          MR_Box STATE_VARIABLE_Acc_19_19;

          {
            Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_17, 0) = H_11;
            MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (T_12));
          }
          mercury__list__foldr_4_p_2(TypeInfo_for_T_30, TypeInfo_for_A_31, P_1, Var_17, STATE_VARIABLE_Acc_0_4, &STATE_VARIABLE_Acc_19_19);
          if ((Cs_3 == (MR_Word) ((MR_Unsigned) 0U)))
            *STATE_VARIABLE_Acc_5 = STATE_VARIABLE_Acc_19_19;
          else
          {
            MR_Word Y_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 0))));
            MR_Word Ys_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 1))));
            MR_Word next_value_of_HeadVar__2_2 = Y_13;
            MR_Word next_value_of_Cs_3 = Ys_14;
            MR_Box next_value_of_STATE_VARIABLE_Acc_0_4 = STATE_VARIABLE_Acc_19_19;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            Cs_3 = next_value_of_Cs_3;
            STATE_VARIABLE_Acc_0_4 = next_value_of_STATE_VARIABLE_Acc_0_4;
            continue;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word A_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
          MR_Word B_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_28;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_Cs_3;

          {
            Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (A_22));
            MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Cs_3));
          }
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = B_23;
          next_value_of_Cs_3 = Var_28;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          Cs_3 = next_value_of_Cs_3;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__cord__foldr_pred_4_p_1(
  MR_Word TypeInfo_for_T_16,
  MR_Word TypeInfo_for_A_17,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_0_3;
  else
  {
    MR_Word N_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    mercury__cord__foldr_node_pred_5_p_1(TypeInfo_for_T_16, TypeInfo_for_A_17, HeadVar__1_1, N_10, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Acc_0_3, STATE_VARIABLE_Acc_4);
  }
}

void MR_CALL 
mercury__cord__foldr_node_pred_5_p_1(
  MR_Word TypeInfo_for_T_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word Cs_3,
  MR_Box STATE_VARIABLE_Acc_0_4,
  MR_Box * STATE_VARIABLE_Acc_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box X_10 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
          MR_Box STATE_VARIABLE_Acc_19_43;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

          func_0(((MR_Box) (P_1)), X_10, STATE_VARIABLE_Acc_0_4, &STATE_VARIABLE_Acc_19_43);
          if ((Cs_3 == (MR_Word) ((MR_Unsigned) 0U)))
            *STATE_VARIABLE_Acc_5 = STATE_VARIABLE_Acc_19_43;
          else
          {
            MR_Word Y_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 0))));
            MR_Word Ys_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 1))));
            MR_Word next_value_of_HeadVar__2_2 = Y_32;
            MR_Word next_value_of_Cs_3 = Ys_33;
            MR_Box next_value_of_STATE_VARIABLE_Acc_0_4 = STATE_VARIABLE_Acc_19_43;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            Cs_3 = next_value_of_Cs_3;
            STATE_VARIABLE_Acc_0_4 = next_value_of_STATE_VARIABLE_Acc_0_4;
            continue;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box H_11 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Word T_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_17;
          MR_Box STATE_VARIABLE_Acc_19_19;

          {
            Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_17, 0) = H_11;
            MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (T_12));
          }
          mercury__list__foldr_4_p_1(TypeInfo_for_T_30, TypeInfo_for_A_31, P_1, Var_17, STATE_VARIABLE_Acc_0_4, &STATE_VARIABLE_Acc_19_19);
          if ((Cs_3 == (MR_Word) ((MR_Unsigned) 0U)))
            *STATE_VARIABLE_Acc_5 = STATE_VARIABLE_Acc_19_19;
          else
          {
            MR_Word Y_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 0))));
            MR_Word Ys_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 1))));
            MR_Word next_value_of_HeadVar__2_2 = Y_13;
            MR_Word next_value_of_Cs_3 = Ys_14;
            MR_Box next_value_of_STATE_VARIABLE_Acc_0_4 = STATE_VARIABLE_Acc_19_19;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            Cs_3 = next_value_of_Cs_3;
            STATE_VARIABLE_Acc_0_4 = next_value_of_STATE_VARIABLE_Acc_0_4;
            continue;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word A_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
          MR_Word B_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_28;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_Cs_3;

          {
            Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (A_22));
            MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Cs_3));
          }
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = B_23;
          next_value_of_Cs_3 = Var_28;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          Cs_3 = next_value_of_Cs_3;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__cord__foldr_pred_4_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word TypeInfo_for_A_17,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_0_3;
  else
  {
    MR_Word N_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    mercury__cord__foldr_node_pred_5_p_0(TypeInfo_for_T_16, TypeInfo_for_A_17, HeadVar__1_1, N_10, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_Acc_0_3, STATE_VARIABLE_Acc_4);
  }
}

void MR_CALL 
mercury__cord__foldr_node_pred_5_p_0(
  MR_Word TypeInfo_for_T_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word Cs_3,
  MR_Box STATE_VARIABLE_Acc_0_4,
  MR_Box * STATE_VARIABLE_Acc_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box X_10 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
          MR_Box STATE_VARIABLE_Acc_19_43;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

          func_0(((MR_Box) (P_1)), X_10, STATE_VARIABLE_Acc_0_4, &STATE_VARIABLE_Acc_19_43);
          if ((Cs_3 == (MR_Word) ((MR_Unsigned) 0U)))
            *STATE_VARIABLE_Acc_5 = STATE_VARIABLE_Acc_19_43;
          else
          {
            MR_Word Y_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 0))));
            MR_Word Ys_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 1))));
            MR_Word next_value_of_HeadVar__2_2 = Y_32;
            MR_Word next_value_of_Cs_3 = Ys_33;
            MR_Box next_value_of_STATE_VARIABLE_Acc_0_4 = STATE_VARIABLE_Acc_19_43;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            Cs_3 = next_value_of_Cs_3;
            STATE_VARIABLE_Acc_0_4 = next_value_of_STATE_VARIABLE_Acc_0_4;
            continue;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box H_11 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Word T_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_17;
          MR_Box STATE_VARIABLE_Acc_19_19;

          {
            Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_17, 0) = H_11;
            MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (T_12));
          }
          mercury__list__foldr_4_p_0(TypeInfo_for_T_30, TypeInfo_for_A_31, P_1, Var_17, STATE_VARIABLE_Acc_0_4, &STATE_VARIABLE_Acc_19_19);
          if ((Cs_3 == (MR_Word) ((MR_Unsigned) 0U)))
            *STATE_VARIABLE_Acc_5 = STATE_VARIABLE_Acc_19_19;
          else
          {
            MR_Word Y_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 0))));
            MR_Word Ys_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 1))));
            MR_Word next_value_of_HeadVar__2_2 = Y_13;
            MR_Word next_value_of_Cs_3 = Ys_14;
            MR_Box next_value_of_STATE_VARIABLE_Acc_0_4 = STATE_VARIABLE_Acc_19_19;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            Cs_3 = next_value_of_Cs_3;
            STATE_VARIABLE_Acc_0_4 = next_value_of_STATE_VARIABLE_Acc_0_4;
            continue;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word A_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
          MR_Word B_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_28;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_Cs_3;

          {
            Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (A_22));
            MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Cs_3));
          }
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = B_23;
          next_value_of_Cs_3 = Var_28;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          Cs_3 = next_value_of_Cs_3;
          continue;
        }
        break;
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
    MR_Word N_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    mercury__cord__foldr_node_5_p_0(TypeInfo_for_T_12, TypeInfo_for_A_13, F_1, N_8, (MR_Word) ((MR_Unsigned) 0U), HeadVar__3_3, &Acc_4);
  }
  return Acc_4;
}

void MR_CALL 
mercury__cord__foldr_node_5_p_0(
  MR_Word TypeInfo_for_T_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word F_1,
  MR_Word HeadVar__2_2,
  MR_Word Cs_3,
  MR_Box STATE_VARIABLE_Acc_0_4,
  MR_Box * STATE_VARIABLE_Acc_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box X_10 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
          MR_Box STATE_VARIABLE_Acc_19_43;
          MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), F_1, (MR_Integer) 1))));

          STATE_VARIABLE_Acc_19_43 = func_0(((MR_Box) (F_1)), X_10, STATE_VARIABLE_Acc_0_4);
          if ((Cs_3 == (MR_Word) ((MR_Unsigned) 0U)))
            *STATE_VARIABLE_Acc_5 = STATE_VARIABLE_Acc_19_43;
          else
          {
            MR_Word Y_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 0))));
            MR_Word Ys_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 1))));
            MR_Word next_value_of_HeadVar__2_2 = Y_32;
            MR_Word next_value_of_Cs_3 = Ys_33;
            MR_Box next_value_of_STATE_VARIABLE_Acc_0_4 = STATE_VARIABLE_Acc_19_43;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            Cs_3 = next_value_of_Cs_3;
            STATE_VARIABLE_Acc_0_4 = next_value_of_STATE_VARIABLE_Acc_0_4;
            continue;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box H_11 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Word T_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_18;
          MR_Box STATE_VARIABLE_Acc_19_19;

          {
            Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_18, 0) = H_11;
            MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (T_12));
          }
          mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(F_1, Var_18, STATE_VARIABLE_Acc_0_4, &STATE_VARIABLE_Acc_19_19);
          if ((Cs_3 == (MR_Word) ((MR_Unsigned) 0U)))
            *STATE_VARIABLE_Acc_5 = STATE_VARIABLE_Acc_19_19;
          else
          {
            MR_Word Y_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 0))));
            MR_Word Ys_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 1))));
            MR_Word next_value_of_HeadVar__2_2 = Y_13;
            MR_Word next_value_of_Cs_3 = Ys_14;
            MR_Box next_value_of_STATE_VARIABLE_Acc_0_4 = STATE_VARIABLE_Acc_19_19;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            Cs_3 = next_value_of_Cs_3;
            STATE_VARIABLE_Acc_0_4 = next_value_of_STATE_VARIABLE_Acc_0_4;
            continue;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word A_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
          MR_Word B_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_28;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_Cs_3;

          {
            Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (A_22));
            MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Cs_3));
          }
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = B_23;
          next_value_of_Cs_3 = Var_28;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          Cs_3 = next_value_of_Cs_3;
          continue;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
  MR_Word Var_18,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__4_4 = HeadVar__3_3;
  else
  {
    MR_Box Var_9 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
    MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Box Var_13;
    MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box);

    mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(Var_18, Var_10, HeadVar__3_3, &Var_13);
    func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 1))));
    *HeadVar__4_4 = func_0(((MR_Box) (Var_18)), Var_9, Var_13);
  }
}

MR_bool MR_CALL 
mercury__cord__foldl3_8_p_5(
  MR_Word TypeInfo_for_T_34,
  MR_Word TypeInfo_for_A_35,
  MR_Word TypeInfo_for_B_36,
  MR_Word TypeInfo_for_C_37,
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
    MR_Word N_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    succeeded = mercury__cord__foldl3_node_9_p_5(TypeInfo_for_T_34, TypeInfo_for_A_35, TypeInfo_for_B_36, TypeInfo_for_C_37, HeadVar__1_1, N_20, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_AccA_0_3, STATE_VARIABLE_AccA_4, STATE_VARIABLE_AccB_0_5, STATE_VARIABLE_AccB_6, STATE_VARIABLE_AccC_0_7, STATE_VARIABLE_AccC_8);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__cord__foldl3_node_9_p_5(
  MR_Word TypeInfo_for_T_54,
  MR_Word TypeInfo_for_A_55,
  MR_Word TypeInfo_for_B_56,
  MR_Word TypeInfo_for_C_57,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word Cs_3,
  MR_Box STATE_VARIABLE_AccA_0_4,
  MR_Box * STATE_VARIABLE_AccA_5,
  MR_Box STATE_VARIABLE_AccB_0_6,
  MR_Box * STATE_VARIABLE_AccB_7,
  MR_Box STATE_VARIABLE_AccC_0_8,
  MR_Box * STATE_VARIABLE_AccC_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box X_16 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
          MR_Box STATE_VARIABLE_AccA_31_73;
          MR_Box STATE_VARIABLE_AccB_32_74;
          MR_Box STATE_VARIABLE_AccC_33_75;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

          succeeded = func_0(((MR_Box) (P_1)), X_16, STATE_VARIABLE_AccA_0_4, &STATE_VARIABLE_AccA_31_73, STATE_VARIABLE_AccB_0_6, &STATE_VARIABLE_AccB_32_74, STATE_VARIABLE_AccC_0_8, &STATE_VARIABLE_AccC_33_75);
          if (succeeded)
          {
            if ((Cs_3 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              *STATE_VARIABLE_AccA_5 = STATE_VARIABLE_AccA_31_73;
              *STATE_VARIABLE_AccB_7 = STATE_VARIABLE_AccB_32_74;
              *STATE_VARIABLE_AccC_9 = STATE_VARIABLE_AccC_33_75;
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word Y_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 0))));
              MR_Word Ys_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 1))));
              MR_Word next_value_of_HeadVar__2_2 = Y_58;
              MR_Word next_value_of_Cs_3 = Ys_59;
              MR_Box next_value_of_STATE_VARIABLE_AccA_0_4 = STATE_VARIABLE_AccA_31_73;
              MR_Box next_value_of_STATE_VARIABLE_AccB_0_6 = STATE_VARIABLE_AccB_32_74;
              MR_Box next_value_of_STATE_VARIABLE_AccC_0_8 = STATE_VARIABLE_AccC_33_75;

              // direct tailcall eliminated
              ;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              Cs_3 = next_value_of_Cs_3;
              STATE_VARIABLE_AccA_0_4 = next_value_of_STATE_VARIABLE_AccA_0_4;
              STATE_VARIABLE_AccB_0_6 = next_value_of_STATE_VARIABLE_AccB_0_6;
              STATE_VARIABLE_AccC_0_8 = next_value_of_STATE_VARIABLE_AccC_0_8;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box H_17 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Word T_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_27;
          MR_Box STATE_VARIABLE_AccA_31_31;
          MR_Box STATE_VARIABLE_AccB_32_32;
          MR_Box STATE_VARIABLE_AccC_33_33;

          {
            Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_27, 0) = H_17;
            MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (T_18));
          }
          succeeded = mercury__list__foldl3_8_p_5(TypeInfo_for_T_54, TypeInfo_for_A_55, TypeInfo_for_B_56, TypeInfo_for_C_57, P_1, Var_27, STATE_VARIABLE_AccA_0_4, &STATE_VARIABLE_AccA_31_31, STATE_VARIABLE_AccB_0_6, &STATE_VARIABLE_AccB_32_32, STATE_VARIABLE_AccC_0_8, &STATE_VARIABLE_AccC_33_33);
          if (succeeded)
          {
            if ((Cs_3 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              *STATE_VARIABLE_AccA_5 = STATE_VARIABLE_AccA_31_31;
              *STATE_VARIABLE_AccB_7 = STATE_VARIABLE_AccB_32_32;
              *STATE_VARIABLE_AccC_9 = STATE_VARIABLE_AccC_33_33;
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word Y_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 0))));
              MR_Word Ys_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 1))));
              MR_Word next_value_of_HeadVar__2_2 = Y_19;
              MR_Word next_value_of_Cs_3 = Ys_20;
              MR_Box next_value_of_STATE_VARIABLE_AccA_0_4 = STATE_VARIABLE_AccA_31_31;
              MR_Box next_value_of_STATE_VARIABLE_AccB_0_6 = STATE_VARIABLE_AccB_32_32;
              MR_Box next_value_of_STATE_VARIABLE_AccC_0_8 = STATE_VARIABLE_AccC_33_33;

              // direct tailcall eliminated
              ;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              Cs_3 = next_value_of_Cs_3;
              STATE_VARIABLE_AccA_0_4 = next_value_of_STATE_VARIABLE_AccA_0_4;
              STATE_VARIABLE_AccB_0_6 = next_value_of_STATE_VARIABLE_AccB_0_6;
              STATE_VARIABLE_AccC_0_8 = next_value_of_STATE_VARIABLE_AccC_0_8;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word A_38 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
          MR_Word B_39 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_50;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_Cs_3;

          {
            Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (B_39));
            MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Cs_3));
          }
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = A_38;
          next_value_of_Cs_3 = Var_50;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          Cs_3 = next_value_of_Cs_3;
          continue;
        }
        break;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__cord__foldl3_8_p_4(
  MR_Word TypeInfo_for_T_34,
  MR_Word TypeInfo_for_A_35,
  MR_Word TypeInfo_for_B_36,
  MR_Word TypeInfo_for_C_37,
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
    MR_Word N_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    succeeded = mercury__cord__foldl3_node_9_p_4(TypeInfo_for_T_34, TypeInfo_for_A_35, TypeInfo_for_B_36, TypeInfo_for_C_37, HeadVar__1_1, N_20, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_AccA_0_3, STATE_VARIABLE_AccA_4, STATE_VARIABLE_AccB_0_5, STATE_VARIABLE_AccB_6, STATE_VARIABLE_AccC_0_7, STATE_VARIABLE_AccC_8);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__cord__foldl3_node_9_p_4(
  MR_Word TypeInfo_for_T_54,
  MR_Word TypeInfo_for_A_55,
  MR_Word TypeInfo_for_B_56,
  MR_Word TypeInfo_for_C_57,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word Cs_3,
  MR_Box STATE_VARIABLE_AccA_0_4,
  MR_Box * STATE_VARIABLE_AccA_5,
  MR_Box STATE_VARIABLE_AccB_0_6,
  MR_Box * STATE_VARIABLE_AccB_7,
  MR_Box STATE_VARIABLE_AccC_0_8,
  MR_Box * STATE_VARIABLE_AccC_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box X_16 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
          MR_Box STATE_VARIABLE_AccA_31_73;
          MR_Box STATE_VARIABLE_AccB_32_74;
          MR_Box STATE_VARIABLE_AccC_33_75;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

          succeeded = func_0(((MR_Box) (P_1)), X_16, STATE_VARIABLE_AccA_0_4, &STATE_VARIABLE_AccA_31_73, STATE_VARIABLE_AccB_0_6, &STATE_VARIABLE_AccB_32_74, STATE_VARIABLE_AccC_0_8, &STATE_VARIABLE_AccC_33_75);
          if (succeeded)
          {
            if ((Cs_3 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              *STATE_VARIABLE_AccA_5 = STATE_VARIABLE_AccA_31_73;
              *STATE_VARIABLE_AccB_7 = STATE_VARIABLE_AccB_32_74;
              *STATE_VARIABLE_AccC_9 = STATE_VARIABLE_AccC_33_75;
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word Y_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 0))));
              MR_Word Ys_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 1))));
              MR_Word next_value_of_HeadVar__2_2 = Y_58;
              MR_Word next_value_of_Cs_3 = Ys_59;
              MR_Box next_value_of_STATE_VARIABLE_AccA_0_4 = STATE_VARIABLE_AccA_31_73;
              MR_Box next_value_of_STATE_VARIABLE_AccB_0_6 = STATE_VARIABLE_AccB_32_74;
              MR_Box next_value_of_STATE_VARIABLE_AccC_0_8 = STATE_VARIABLE_AccC_33_75;

              // direct tailcall eliminated
              ;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              Cs_3 = next_value_of_Cs_3;
              STATE_VARIABLE_AccA_0_4 = next_value_of_STATE_VARIABLE_AccA_0_4;
              STATE_VARIABLE_AccB_0_6 = next_value_of_STATE_VARIABLE_AccB_0_6;
              STATE_VARIABLE_AccC_0_8 = next_value_of_STATE_VARIABLE_AccC_0_8;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box H_17 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Word T_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_27;
          MR_Box STATE_VARIABLE_AccA_31_31;
          MR_Box STATE_VARIABLE_AccB_32_32;
          MR_Box STATE_VARIABLE_AccC_33_33;

          {
            Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_27, 0) = H_17;
            MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (T_18));
          }
          succeeded = mercury__list__foldl3_8_p_4(TypeInfo_for_T_54, TypeInfo_for_A_55, TypeInfo_for_B_56, TypeInfo_for_C_57, P_1, Var_27, STATE_VARIABLE_AccA_0_4, &STATE_VARIABLE_AccA_31_31, STATE_VARIABLE_AccB_0_6, &STATE_VARIABLE_AccB_32_32, STATE_VARIABLE_AccC_0_8, &STATE_VARIABLE_AccC_33_33);
          if (succeeded)
          {
            if ((Cs_3 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              *STATE_VARIABLE_AccA_5 = STATE_VARIABLE_AccA_31_31;
              *STATE_VARIABLE_AccB_7 = STATE_VARIABLE_AccB_32_32;
              *STATE_VARIABLE_AccC_9 = STATE_VARIABLE_AccC_33_33;
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word Y_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 0))));
              MR_Word Ys_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 1))));
              MR_Word next_value_of_HeadVar__2_2 = Y_19;
              MR_Word next_value_of_Cs_3 = Ys_20;
              MR_Box next_value_of_STATE_VARIABLE_AccA_0_4 = STATE_VARIABLE_AccA_31_31;
              MR_Box next_value_of_STATE_VARIABLE_AccB_0_6 = STATE_VARIABLE_AccB_32_32;
              MR_Box next_value_of_STATE_VARIABLE_AccC_0_8 = STATE_VARIABLE_AccC_33_33;

              // direct tailcall eliminated
              ;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              Cs_3 = next_value_of_Cs_3;
              STATE_VARIABLE_AccA_0_4 = next_value_of_STATE_VARIABLE_AccA_0_4;
              STATE_VARIABLE_AccB_0_6 = next_value_of_STATE_VARIABLE_AccB_0_6;
              STATE_VARIABLE_AccC_0_8 = next_value_of_STATE_VARIABLE_AccC_0_8;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word A_38 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
          MR_Word B_39 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_50;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_Cs_3;

          {
            Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (B_39));
            MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Cs_3));
          }
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = A_38;
          next_value_of_Cs_3 = Var_50;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          Cs_3 = next_value_of_Cs_3;
          continue;
        }
        break;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__cord__foldl3_8_p_3(
  MR_Word TypeInfo_for_T_34,
  MR_Word TypeInfo_for_A_35,
  MR_Word TypeInfo_for_B_36,
  MR_Word TypeInfo_for_C_37,
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
    MR_Word N_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    succeeded = mercury__cord__foldl3_node_9_p_3(TypeInfo_for_T_34, TypeInfo_for_A_35, TypeInfo_for_B_36, TypeInfo_for_C_37, HeadVar__1_1, N_20, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_AccA_0_3, STATE_VARIABLE_AccA_4, STATE_VARIABLE_AccB_0_5, STATE_VARIABLE_AccB_6, STATE_VARIABLE_AccC_0_7, STATE_VARIABLE_AccC_8);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__cord__foldl3_node_9_p_3(
  MR_Word TypeInfo_for_T_54,
  MR_Word TypeInfo_for_A_55,
  MR_Word TypeInfo_for_B_56,
  MR_Word TypeInfo_for_C_57,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word Cs_3,
  MR_Box STATE_VARIABLE_AccA_0_4,
  MR_Box * STATE_VARIABLE_AccA_5,
  MR_Box STATE_VARIABLE_AccB_0_6,
  MR_Box * STATE_VARIABLE_AccB_7,
  MR_Box STATE_VARIABLE_AccC_0_8,
  MR_Box * STATE_VARIABLE_AccC_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box X_16 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
          MR_Box STATE_VARIABLE_AccA_31_73;
          MR_Box STATE_VARIABLE_AccB_32_74;
          MR_Box STATE_VARIABLE_AccC_33_75;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

          succeeded = func_0(((MR_Box) (P_1)), X_16, STATE_VARIABLE_AccA_0_4, &STATE_VARIABLE_AccA_31_73, STATE_VARIABLE_AccB_0_6, &STATE_VARIABLE_AccB_32_74, STATE_VARIABLE_AccC_0_8, &STATE_VARIABLE_AccC_33_75);
          if (succeeded)
          {
            if ((Cs_3 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              *STATE_VARIABLE_AccA_5 = STATE_VARIABLE_AccA_31_73;
              *STATE_VARIABLE_AccB_7 = STATE_VARIABLE_AccB_32_74;
              *STATE_VARIABLE_AccC_9 = STATE_VARIABLE_AccC_33_75;
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word Y_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 0))));
              MR_Word Ys_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 1))));
              MR_Word next_value_of_HeadVar__2_2 = Y_58;
              MR_Word next_value_of_Cs_3 = Ys_59;
              MR_Box next_value_of_STATE_VARIABLE_AccA_0_4 = STATE_VARIABLE_AccA_31_73;
              MR_Box next_value_of_STATE_VARIABLE_AccB_0_6 = STATE_VARIABLE_AccB_32_74;
              MR_Box next_value_of_STATE_VARIABLE_AccC_0_8 = STATE_VARIABLE_AccC_33_75;

              // direct tailcall eliminated
              ;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              Cs_3 = next_value_of_Cs_3;
              STATE_VARIABLE_AccA_0_4 = next_value_of_STATE_VARIABLE_AccA_0_4;
              STATE_VARIABLE_AccB_0_6 = next_value_of_STATE_VARIABLE_AccB_0_6;
              STATE_VARIABLE_AccC_0_8 = next_value_of_STATE_VARIABLE_AccC_0_8;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box H_17 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Word T_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_27;
          MR_Box STATE_VARIABLE_AccA_31_31;
          MR_Box STATE_VARIABLE_AccB_32_32;
          MR_Box STATE_VARIABLE_AccC_33_33;

          {
            Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_27, 0) = H_17;
            MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (T_18));
          }
          succeeded = mercury__list__foldl3_8_p_3(TypeInfo_for_T_54, TypeInfo_for_A_55, TypeInfo_for_B_56, TypeInfo_for_C_57, P_1, Var_27, STATE_VARIABLE_AccA_0_4, &STATE_VARIABLE_AccA_31_31, STATE_VARIABLE_AccB_0_6, &STATE_VARIABLE_AccB_32_32, STATE_VARIABLE_AccC_0_8, &STATE_VARIABLE_AccC_33_33);
          if (succeeded)
          {
            if ((Cs_3 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              *STATE_VARIABLE_AccA_5 = STATE_VARIABLE_AccA_31_31;
              *STATE_VARIABLE_AccB_7 = STATE_VARIABLE_AccB_32_32;
              *STATE_VARIABLE_AccC_9 = STATE_VARIABLE_AccC_33_33;
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word Y_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 0))));
              MR_Word Ys_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 1))));
              MR_Word next_value_of_HeadVar__2_2 = Y_19;
              MR_Word next_value_of_Cs_3 = Ys_20;
              MR_Box next_value_of_STATE_VARIABLE_AccA_0_4 = STATE_VARIABLE_AccA_31_31;
              MR_Box next_value_of_STATE_VARIABLE_AccB_0_6 = STATE_VARIABLE_AccB_32_32;
              MR_Box next_value_of_STATE_VARIABLE_AccC_0_8 = STATE_VARIABLE_AccC_33_33;

              // direct tailcall eliminated
              ;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              Cs_3 = next_value_of_Cs_3;
              STATE_VARIABLE_AccA_0_4 = next_value_of_STATE_VARIABLE_AccA_0_4;
              STATE_VARIABLE_AccB_0_6 = next_value_of_STATE_VARIABLE_AccB_0_6;
              STATE_VARIABLE_AccC_0_8 = next_value_of_STATE_VARIABLE_AccC_0_8;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word A_38 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
          MR_Word B_39 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_50;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_Cs_3;

          {
            Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (B_39));
            MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Cs_3));
          }
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = A_38;
          next_value_of_Cs_3 = Var_50;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          Cs_3 = next_value_of_Cs_3;
          continue;
        }
        break;
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__cord__foldl3_8_p_2(
  MR_Word TypeInfo_for_T_34,
  MR_Word TypeInfo_for_A_35,
  MR_Word TypeInfo_for_B_36,
  MR_Word TypeInfo_for_C_37,
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
    MR_Word N_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    mercury__cord__foldl3_node_9_p_2(TypeInfo_for_T_34, TypeInfo_for_A_35, TypeInfo_for_B_36, TypeInfo_for_C_37, HeadVar__1_1, N_20, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_AccA_0_3, STATE_VARIABLE_AccA_4, STATE_VARIABLE_AccB_0_5, STATE_VARIABLE_AccB_6, STATE_VARIABLE_AccC_0_7, STATE_VARIABLE_AccC_8);
  }
}

void MR_CALL 
mercury__cord__foldl3_node_9_p_2(
  MR_Word TypeInfo_for_T_54,
  MR_Word TypeInfo_for_A_55,
  MR_Word TypeInfo_for_B_56,
  MR_Word TypeInfo_for_C_57,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word Cs_3,
  MR_Box STATE_VARIABLE_AccA_0_4,
  MR_Box * STATE_VARIABLE_AccA_5,
  MR_Box STATE_VARIABLE_AccB_0_6,
  MR_Box * STATE_VARIABLE_AccB_7,
  MR_Box STATE_VARIABLE_AccC_0_8,
  MR_Box * STATE_VARIABLE_AccC_9)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box X_16 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
          MR_Box STATE_VARIABLE_AccA_31_73;
          MR_Box STATE_VARIABLE_AccB_32_74;
          MR_Box STATE_VARIABLE_AccC_33_75;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

          func_0(((MR_Box) (P_1)), X_16, STATE_VARIABLE_AccA_0_4, &STATE_VARIABLE_AccA_31_73, STATE_VARIABLE_AccB_0_6, &STATE_VARIABLE_AccB_32_74, STATE_VARIABLE_AccC_0_8, &STATE_VARIABLE_AccC_33_75);
          if ((Cs_3 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            *STATE_VARIABLE_AccA_5 = STATE_VARIABLE_AccA_31_73;
            *STATE_VARIABLE_AccB_7 = STATE_VARIABLE_AccB_32_74;
            *STATE_VARIABLE_AccC_9 = STATE_VARIABLE_AccC_33_75;
          }
          else
          {
            MR_Word Y_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 0))));
            MR_Word Ys_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 1))));
            MR_Word next_value_of_HeadVar__2_2 = Y_58;
            MR_Word next_value_of_Cs_3 = Ys_59;
            MR_Box next_value_of_STATE_VARIABLE_AccA_0_4 = STATE_VARIABLE_AccA_31_73;
            MR_Box next_value_of_STATE_VARIABLE_AccB_0_6 = STATE_VARIABLE_AccB_32_74;
            MR_Box next_value_of_STATE_VARIABLE_AccC_0_8 = STATE_VARIABLE_AccC_33_75;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            Cs_3 = next_value_of_Cs_3;
            STATE_VARIABLE_AccA_0_4 = next_value_of_STATE_VARIABLE_AccA_0_4;
            STATE_VARIABLE_AccB_0_6 = next_value_of_STATE_VARIABLE_AccB_0_6;
            STATE_VARIABLE_AccC_0_8 = next_value_of_STATE_VARIABLE_AccC_0_8;
            continue;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box H_17 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Word T_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_27;
          MR_Box STATE_VARIABLE_AccA_31_31;
          MR_Box STATE_VARIABLE_AccB_32_32;
          MR_Box STATE_VARIABLE_AccC_33_33;

          {
            Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_27, 0) = H_17;
            MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (T_18));
          }
          mercury__list__foldl3_8_p_2(TypeInfo_for_T_54, TypeInfo_for_A_55, TypeInfo_for_B_56, TypeInfo_for_C_57, P_1, Var_27, STATE_VARIABLE_AccA_0_4, &STATE_VARIABLE_AccA_31_31, STATE_VARIABLE_AccB_0_6, &STATE_VARIABLE_AccB_32_32, STATE_VARIABLE_AccC_0_8, &STATE_VARIABLE_AccC_33_33);
          if ((Cs_3 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            *STATE_VARIABLE_AccA_5 = STATE_VARIABLE_AccA_31_31;
            *STATE_VARIABLE_AccB_7 = STATE_VARIABLE_AccB_32_32;
            *STATE_VARIABLE_AccC_9 = STATE_VARIABLE_AccC_33_33;
          }
          else
          {
            MR_Word Y_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 0))));
            MR_Word Ys_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 1))));
            MR_Word next_value_of_HeadVar__2_2 = Y_19;
            MR_Word next_value_of_Cs_3 = Ys_20;
            MR_Box next_value_of_STATE_VARIABLE_AccA_0_4 = STATE_VARIABLE_AccA_31_31;
            MR_Box next_value_of_STATE_VARIABLE_AccB_0_6 = STATE_VARIABLE_AccB_32_32;
            MR_Box next_value_of_STATE_VARIABLE_AccC_0_8 = STATE_VARIABLE_AccC_33_33;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            Cs_3 = next_value_of_Cs_3;
            STATE_VARIABLE_AccA_0_4 = next_value_of_STATE_VARIABLE_AccA_0_4;
            STATE_VARIABLE_AccB_0_6 = next_value_of_STATE_VARIABLE_AccB_0_6;
            STATE_VARIABLE_AccC_0_8 = next_value_of_STATE_VARIABLE_AccC_0_8;
            continue;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word A_38 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
          MR_Word B_39 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_50;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_Cs_3;

          {
            Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (B_39));
            MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Cs_3));
          }
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = A_38;
          next_value_of_Cs_3 = Var_50;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          Cs_3 = next_value_of_Cs_3;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__cord__foldl3_8_p_1(
  MR_Word TypeInfo_for_T_34,
  MR_Word TypeInfo_for_A_35,
  MR_Word TypeInfo_for_B_36,
  MR_Word TypeInfo_for_C_37,
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
    MR_Word N_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    mercury__cord__foldl3_node_9_p_1(TypeInfo_for_T_34, TypeInfo_for_A_35, TypeInfo_for_B_36, TypeInfo_for_C_37, HeadVar__1_1, N_20, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_AccA_0_3, STATE_VARIABLE_AccA_4, STATE_VARIABLE_AccB_0_5, STATE_VARIABLE_AccB_6, STATE_VARIABLE_AccC_0_7, STATE_VARIABLE_AccC_8);
  }
}

void MR_CALL 
mercury__cord__foldl3_node_9_p_1(
  MR_Word TypeInfo_for_T_54,
  MR_Word TypeInfo_for_A_55,
  MR_Word TypeInfo_for_B_56,
  MR_Word TypeInfo_for_C_57,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word Cs_3,
  MR_Box STATE_VARIABLE_AccA_0_4,
  MR_Box * STATE_VARIABLE_AccA_5,
  MR_Box STATE_VARIABLE_AccB_0_6,
  MR_Box * STATE_VARIABLE_AccB_7,
  MR_Box STATE_VARIABLE_AccC_0_8,
  MR_Box * STATE_VARIABLE_AccC_9)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box X_16 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
          MR_Box STATE_VARIABLE_AccA_31_73;
          MR_Box STATE_VARIABLE_AccB_32_74;
          MR_Box STATE_VARIABLE_AccC_33_75;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

          func_0(((MR_Box) (P_1)), X_16, STATE_VARIABLE_AccA_0_4, &STATE_VARIABLE_AccA_31_73, STATE_VARIABLE_AccB_0_6, &STATE_VARIABLE_AccB_32_74, STATE_VARIABLE_AccC_0_8, &STATE_VARIABLE_AccC_33_75);
          if ((Cs_3 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            *STATE_VARIABLE_AccA_5 = STATE_VARIABLE_AccA_31_73;
            *STATE_VARIABLE_AccB_7 = STATE_VARIABLE_AccB_32_74;
            *STATE_VARIABLE_AccC_9 = STATE_VARIABLE_AccC_33_75;
          }
          else
          {
            MR_Word Y_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 0))));
            MR_Word Ys_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 1))));
            MR_Word next_value_of_HeadVar__2_2 = Y_58;
            MR_Word next_value_of_Cs_3 = Ys_59;
            MR_Box next_value_of_STATE_VARIABLE_AccA_0_4 = STATE_VARIABLE_AccA_31_73;
            MR_Box next_value_of_STATE_VARIABLE_AccB_0_6 = STATE_VARIABLE_AccB_32_74;
            MR_Box next_value_of_STATE_VARIABLE_AccC_0_8 = STATE_VARIABLE_AccC_33_75;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            Cs_3 = next_value_of_Cs_3;
            STATE_VARIABLE_AccA_0_4 = next_value_of_STATE_VARIABLE_AccA_0_4;
            STATE_VARIABLE_AccB_0_6 = next_value_of_STATE_VARIABLE_AccB_0_6;
            STATE_VARIABLE_AccC_0_8 = next_value_of_STATE_VARIABLE_AccC_0_8;
            continue;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box H_17 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Word T_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_27;
          MR_Box STATE_VARIABLE_AccA_31_31;
          MR_Box STATE_VARIABLE_AccB_32_32;
          MR_Box STATE_VARIABLE_AccC_33_33;

          {
            Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_27, 0) = H_17;
            MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (T_18));
          }
          mercury__list__foldl3_8_p_1(TypeInfo_for_T_54, TypeInfo_for_A_55, TypeInfo_for_B_56, TypeInfo_for_C_57, P_1, Var_27, STATE_VARIABLE_AccA_0_4, &STATE_VARIABLE_AccA_31_31, STATE_VARIABLE_AccB_0_6, &STATE_VARIABLE_AccB_32_32, STATE_VARIABLE_AccC_0_8, &STATE_VARIABLE_AccC_33_33);
          if ((Cs_3 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            *STATE_VARIABLE_AccA_5 = STATE_VARIABLE_AccA_31_31;
            *STATE_VARIABLE_AccB_7 = STATE_VARIABLE_AccB_32_32;
            *STATE_VARIABLE_AccC_9 = STATE_VARIABLE_AccC_33_33;
          }
          else
          {
            MR_Word Y_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 0))));
            MR_Word Ys_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 1))));
            MR_Word next_value_of_HeadVar__2_2 = Y_19;
            MR_Word next_value_of_Cs_3 = Ys_20;
            MR_Box next_value_of_STATE_VARIABLE_AccA_0_4 = STATE_VARIABLE_AccA_31_31;
            MR_Box next_value_of_STATE_VARIABLE_AccB_0_6 = STATE_VARIABLE_AccB_32_32;
            MR_Box next_value_of_STATE_VARIABLE_AccC_0_8 = STATE_VARIABLE_AccC_33_33;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            Cs_3 = next_value_of_Cs_3;
            STATE_VARIABLE_AccA_0_4 = next_value_of_STATE_VARIABLE_AccA_0_4;
            STATE_VARIABLE_AccB_0_6 = next_value_of_STATE_VARIABLE_AccB_0_6;
            STATE_VARIABLE_AccC_0_8 = next_value_of_STATE_VARIABLE_AccC_0_8;
            continue;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word A_38 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
          MR_Word B_39 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_50;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_Cs_3;

          {
            Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (B_39));
            MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Cs_3));
          }
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = A_38;
          next_value_of_Cs_3 = Var_50;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          Cs_3 = next_value_of_Cs_3;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__cord__foldl3_8_p_0(
  MR_Word TypeInfo_for_T_34,
  MR_Word TypeInfo_for_A_35,
  MR_Word TypeInfo_for_B_36,
  MR_Word TypeInfo_for_C_37,
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
    MR_Word N_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    mercury__cord__foldl3_node_9_p_0(TypeInfo_for_T_34, TypeInfo_for_A_35, TypeInfo_for_B_36, TypeInfo_for_C_37, HeadVar__1_1, N_20, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_AccA_0_3, STATE_VARIABLE_AccA_4, STATE_VARIABLE_AccB_0_5, STATE_VARIABLE_AccB_6, STATE_VARIABLE_AccC_0_7, STATE_VARIABLE_AccC_8);
  }
}

void MR_CALL 
mercury__cord__foldl3_node_9_p_0(
  MR_Word TypeInfo_for_T_54,
  MR_Word TypeInfo_for_A_55,
  MR_Word TypeInfo_for_B_56,
  MR_Word TypeInfo_for_C_57,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word Cs_3,
  MR_Box STATE_VARIABLE_AccA_0_4,
  MR_Box * STATE_VARIABLE_AccA_5,
  MR_Box STATE_VARIABLE_AccB_0_6,
  MR_Box * STATE_VARIABLE_AccB_7,
  MR_Box STATE_VARIABLE_AccC_0_8,
  MR_Box * STATE_VARIABLE_AccC_9)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box X_16 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
          MR_Box STATE_VARIABLE_AccA_31_73;
          MR_Box STATE_VARIABLE_AccB_32_74;
          MR_Box STATE_VARIABLE_AccC_33_75;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

          func_0(((MR_Box) (P_1)), X_16, STATE_VARIABLE_AccA_0_4, &STATE_VARIABLE_AccA_31_73, STATE_VARIABLE_AccB_0_6, &STATE_VARIABLE_AccB_32_74, STATE_VARIABLE_AccC_0_8, &STATE_VARIABLE_AccC_33_75);
          if ((Cs_3 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            *STATE_VARIABLE_AccA_5 = STATE_VARIABLE_AccA_31_73;
            *STATE_VARIABLE_AccB_7 = STATE_VARIABLE_AccB_32_74;
            *STATE_VARIABLE_AccC_9 = STATE_VARIABLE_AccC_33_75;
          }
          else
          {
            MR_Word Y_58 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 0))));
            MR_Word Ys_59 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 1))));
            MR_Word next_value_of_HeadVar__2_2 = Y_58;
            MR_Word next_value_of_Cs_3 = Ys_59;
            MR_Box next_value_of_STATE_VARIABLE_AccA_0_4 = STATE_VARIABLE_AccA_31_73;
            MR_Box next_value_of_STATE_VARIABLE_AccB_0_6 = STATE_VARIABLE_AccB_32_74;
            MR_Box next_value_of_STATE_VARIABLE_AccC_0_8 = STATE_VARIABLE_AccC_33_75;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            Cs_3 = next_value_of_Cs_3;
            STATE_VARIABLE_AccA_0_4 = next_value_of_STATE_VARIABLE_AccA_0_4;
            STATE_VARIABLE_AccB_0_6 = next_value_of_STATE_VARIABLE_AccB_0_6;
            STATE_VARIABLE_AccC_0_8 = next_value_of_STATE_VARIABLE_AccC_0_8;
            continue;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box H_17 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Word T_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_27;
          MR_Box STATE_VARIABLE_AccA_31_31;
          MR_Box STATE_VARIABLE_AccB_32_32;
          MR_Box STATE_VARIABLE_AccC_33_33;

          {
            Var_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_27, 0) = H_17;
            MR_hl_field(MR_mktag(1), Var_27, 1) = ((MR_Box) (T_18));
          }
          mercury__list__foldl3_8_p_0(TypeInfo_for_T_54, TypeInfo_for_A_55, TypeInfo_for_B_56, TypeInfo_for_C_57, P_1, Var_27, STATE_VARIABLE_AccA_0_4, &STATE_VARIABLE_AccA_31_31, STATE_VARIABLE_AccB_0_6, &STATE_VARIABLE_AccB_32_32, STATE_VARIABLE_AccC_0_8, &STATE_VARIABLE_AccC_33_33);
          if ((Cs_3 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            *STATE_VARIABLE_AccA_5 = STATE_VARIABLE_AccA_31_31;
            *STATE_VARIABLE_AccB_7 = STATE_VARIABLE_AccB_32_32;
            *STATE_VARIABLE_AccC_9 = STATE_VARIABLE_AccC_33_33;
          }
          else
          {
            MR_Word Y_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 0))));
            MR_Word Ys_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 1))));
            MR_Word next_value_of_HeadVar__2_2 = Y_19;
            MR_Word next_value_of_Cs_3 = Ys_20;
            MR_Box next_value_of_STATE_VARIABLE_AccA_0_4 = STATE_VARIABLE_AccA_31_31;
            MR_Box next_value_of_STATE_VARIABLE_AccB_0_6 = STATE_VARIABLE_AccB_32_32;
            MR_Box next_value_of_STATE_VARIABLE_AccC_0_8 = STATE_VARIABLE_AccC_33_33;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            Cs_3 = next_value_of_Cs_3;
            STATE_VARIABLE_AccA_0_4 = next_value_of_STATE_VARIABLE_AccA_0_4;
            STATE_VARIABLE_AccB_0_6 = next_value_of_STATE_VARIABLE_AccB_0_6;
            STATE_VARIABLE_AccC_0_8 = next_value_of_STATE_VARIABLE_AccC_0_8;
            continue;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word A_38 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
          MR_Word B_39 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_50;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_Cs_3;

          {
            Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (B_39));
            MR_hl_field(MR_mktag(1), Var_50, 1) = ((MR_Box) (Cs_3));
          }
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = A_38;
          next_value_of_Cs_3 = Var_50;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          Cs_3 = next_value_of_Cs_3;
          continue;
        }
        break;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__cord__foldl2_6_p_5(
  MR_Word TypeInfo_for_T_25,
  MR_Word TypeInfo_for_A_26,
  MR_Word TypeInfo_for_B_27,
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
    MR_Word N_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    succeeded = mercury__cord__foldl2_node_7_p_5(TypeInfo_for_T_25, TypeInfo_for_A_26, TypeInfo_for_B_27, HeadVar__1_1, N_15, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_AccA_0_3, STATE_VARIABLE_AccA_4, STATE_VARIABLE_AccB_0_5, STATE_VARIABLE_AccB_6);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__cord__foldl2_node_7_p_5(
  MR_Word TypeInfo_for_T_42,
  MR_Word TypeInfo_for_A_43,
  MR_Word TypeInfo_for_B_44,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word Cs_3,
  MR_Box STATE_VARIABLE_AccA_0_4,
  MR_Box * STATE_VARIABLE_AccA_5,
  MR_Box STATE_VARIABLE_AccB_0_6,
  MR_Box * STATE_VARIABLE_AccB_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box X_13 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
          MR_Box STATE_VARIABLE_AccA_25_58;
          MR_Box STATE_VARIABLE_AccB_26_59;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

          succeeded = func_0(((MR_Box) (P_1)), X_13, STATE_VARIABLE_AccA_0_4, &STATE_VARIABLE_AccA_25_58, STATE_VARIABLE_AccB_0_6, &STATE_VARIABLE_AccB_26_59);
          if (succeeded)
          {
            if ((Cs_3 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              *STATE_VARIABLE_AccA_5 = STATE_VARIABLE_AccA_25_58;
              *STATE_VARIABLE_AccB_7 = STATE_VARIABLE_AccB_26_59;
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word Y_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 0))));
              MR_Word Ys_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 1))));
              MR_Word next_value_of_HeadVar__2_2 = Y_45;
              MR_Word next_value_of_Cs_3 = Ys_46;
              MR_Box next_value_of_STATE_VARIABLE_AccA_0_4 = STATE_VARIABLE_AccA_25_58;
              MR_Box next_value_of_STATE_VARIABLE_AccB_0_6 = STATE_VARIABLE_AccB_26_59;

              // direct tailcall eliminated
              ;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              Cs_3 = next_value_of_Cs_3;
              STATE_VARIABLE_AccA_0_4 = next_value_of_STATE_VARIABLE_AccA_0_4;
              STATE_VARIABLE_AccB_0_6 = next_value_of_STATE_VARIABLE_AccB_0_6;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box H_14 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Word T_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_22;
          MR_Box STATE_VARIABLE_AccA_25_25;
          MR_Box STATE_VARIABLE_AccB_26_26;

          {
            Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_22, 0) = H_14;
            MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (T_15));
          }
          succeeded = mercury__list__foldl2_6_p_6(TypeInfo_for_T_42, TypeInfo_for_A_43, TypeInfo_for_B_44, P_1, Var_22, STATE_VARIABLE_AccA_0_4, &STATE_VARIABLE_AccA_25_25, STATE_VARIABLE_AccB_0_6, &STATE_VARIABLE_AccB_26_26);
          if (succeeded)
          {
            if ((Cs_3 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              *STATE_VARIABLE_AccA_5 = STATE_VARIABLE_AccA_25_25;
              *STATE_VARIABLE_AccB_7 = STATE_VARIABLE_AccB_26_26;
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word Y_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 0))));
              MR_Word Ys_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 1))));
              MR_Word next_value_of_HeadVar__2_2 = Y_16;
              MR_Word next_value_of_Cs_3 = Ys_17;
              MR_Box next_value_of_STATE_VARIABLE_AccA_0_4 = STATE_VARIABLE_AccA_25_25;
              MR_Box next_value_of_STATE_VARIABLE_AccB_0_6 = STATE_VARIABLE_AccB_26_26;

              // direct tailcall eliminated
              ;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              Cs_3 = next_value_of_Cs_3;
              STATE_VARIABLE_AccA_0_4 = next_value_of_STATE_VARIABLE_AccA_0_4;
              STATE_VARIABLE_AccB_0_6 = next_value_of_STATE_VARIABLE_AccB_0_6;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word A_30 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
          MR_Word B_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_39;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_Cs_3;

          {
            Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (B_31));
            MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Cs_3));
          }
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = A_30;
          next_value_of_Cs_3 = Var_39;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          Cs_3 = next_value_of_Cs_3;
          continue;
        }
        break;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__cord__foldl2_6_p_4(
  MR_Word TypeInfo_for_T_25,
  MR_Word TypeInfo_for_A_26,
  MR_Word TypeInfo_for_B_27,
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
    MR_Word N_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    succeeded = mercury__cord__foldl2_node_7_p_4(TypeInfo_for_T_25, TypeInfo_for_A_26, TypeInfo_for_B_27, HeadVar__1_1, N_15, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_AccA_0_3, STATE_VARIABLE_AccA_4, STATE_VARIABLE_AccB_0_5, STATE_VARIABLE_AccB_6);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__cord__foldl2_node_7_p_4(
  MR_Word TypeInfo_for_T_42,
  MR_Word TypeInfo_for_A_43,
  MR_Word TypeInfo_for_B_44,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word Cs_3,
  MR_Box STATE_VARIABLE_AccA_0_4,
  MR_Box * STATE_VARIABLE_AccA_5,
  MR_Box STATE_VARIABLE_AccB_0_6,
  MR_Box * STATE_VARIABLE_AccB_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box X_13 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
          MR_Box STATE_VARIABLE_AccA_25_58;
          MR_Box STATE_VARIABLE_AccB_26_59;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

          succeeded = func_0(((MR_Box) (P_1)), X_13, STATE_VARIABLE_AccA_0_4, &STATE_VARIABLE_AccA_25_58, STATE_VARIABLE_AccB_0_6, &STATE_VARIABLE_AccB_26_59);
          if (succeeded)
          {
            if ((Cs_3 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              *STATE_VARIABLE_AccA_5 = STATE_VARIABLE_AccA_25_58;
              *STATE_VARIABLE_AccB_7 = STATE_VARIABLE_AccB_26_59;
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word Y_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 0))));
              MR_Word Ys_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 1))));
              MR_Word next_value_of_HeadVar__2_2 = Y_45;
              MR_Word next_value_of_Cs_3 = Ys_46;
              MR_Box next_value_of_STATE_VARIABLE_AccA_0_4 = STATE_VARIABLE_AccA_25_58;
              MR_Box next_value_of_STATE_VARIABLE_AccB_0_6 = STATE_VARIABLE_AccB_26_59;

              // direct tailcall eliminated
              ;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              Cs_3 = next_value_of_Cs_3;
              STATE_VARIABLE_AccA_0_4 = next_value_of_STATE_VARIABLE_AccA_0_4;
              STATE_VARIABLE_AccB_0_6 = next_value_of_STATE_VARIABLE_AccB_0_6;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box H_14 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Word T_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_22;
          MR_Box STATE_VARIABLE_AccA_25_25;
          MR_Box STATE_VARIABLE_AccB_26_26;

          {
            Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_22, 0) = H_14;
            MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (T_15));
          }
          succeeded = mercury__list__foldl2_6_p_5(TypeInfo_for_T_42, TypeInfo_for_A_43, TypeInfo_for_B_44, P_1, Var_22, STATE_VARIABLE_AccA_0_4, &STATE_VARIABLE_AccA_25_25, STATE_VARIABLE_AccB_0_6, &STATE_VARIABLE_AccB_26_26);
          if (succeeded)
          {
            if ((Cs_3 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              *STATE_VARIABLE_AccA_5 = STATE_VARIABLE_AccA_25_25;
              *STATE_VARIABLE_AccB_7 = STATE_VARIABLE_AccB_26_26;
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word Y_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 0))));
              MR_Word Ys_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 1))));
              MR_Word next_value_of_HeadVar__2_2 = Y_16;
              MR_Word next_value_of_Cs_3 = Ys_17;
              MR_Box next_value_of_STATE_VARIABLE_AccA_0_4 = STATE_VARIABLE_AccA_25_25;
              MR_Box next_value_of_STATE_VARIABLE_AccB_0_6 = STATE_VARIABLE_AccB_26_26;

              // direct tailcall eliminated
              ;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              Cs_3 = next_value_of_Cs_3;
              STATE_VARIABLE_AccA_0_4 = next_value_of_STATE_VARIABLE_AccA_0_4;
              STATE_VARIABLE_AccB_0_6 = next_value_of_STATE_VARIABLE_AccB_0_6;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word A_30 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
          MR_Word B_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_39;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_Cs_3;

          {
            Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (B_31));
            MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Cs_3));
          }
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = A_30;
          next_value_of_Cs_3 = Var_39;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          Cs_3 = next_value_of_Cs_3;
          continue;
        }
        break;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__cord__foldl2_6_p_3(
  MR_Word TypeInfo_for_T_25,
  MR_Word TypeInfo_for_A_26,
  MR_Word TypeInfo_for_B_27,
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
    MR_Word N_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    succeeded = mercury__cord__foldl2_node_7_p_3(TypeInfo_for_T_25, TypeInfo_for_A_26, TypeInfo_for_B_27, HeadVar__1_1, N_15, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_AccA_0_3, STATE_VARIABLE_AccA_4, STATE_VARIABLE_AccB_0_5, STATE_VARIABLE_AccB_6);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__cord__foldl2_node_7_p_3(
  MR_Word TypeInfo_for_T_42,
  MR_Word TypeInfo_for_A_43,
  MR_Word TypeInfo_for_B_44,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word Cs_3,
  MR_Box STATE_VARIABLE_AccA_0_4,
  MR_Box * STATE_VARIABLE_AccA_5,
  MR_Box STATE_VARIABLE_AccB_0_6,
  MR_Box * STATE_VARIABLE_AccB_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box X_13 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
          MR_Box STATE_VARIABLE_AccA_25_58;
          MR_Box STATE_VARIABLE_AccB_26_59;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

          succeeded = func_0(((MR_Box) (P_1)), X_13, STATE_VARIABLE_AccA_0_4, &STATE_VARIABLE_AccA_25_58, STATE_VARIABLE_AccB_0_6, &STATE_VARIABLE_AccB_26_59);
          if (succeeded)
          {
            if ((Cs_3 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              *STATE_VARIABLE_AccA_5 = STATE_VARIABLE_AccA_25_58;
              *STATE_VARIABLE_AccB_7 = STATE_VARIABLE_AccB_26_59;
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word Y_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 0))));
              MR_Word Ys_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 1))));
              MR_Word next_value_of_HeadVar__2_2 = Y_45;
              MR_Word next_value_of_Cs_3 = Ys_46;
              MR_Box next_value_of_STATE_VARIABLE_AccA_0_4 = STATE_VARIABLE_AccA_25_58;
              MR_Box next_value_of_STATE_VARIABLE_AccB_0_6 = STATE_VARIABLE_AccB_26_59;

              // direct tailcall eliminated
              ;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              Cs_3 = next_value_of_Cs_3;
              STATE_VARIABLE_AccA_0_4 = next_value_of_STATE_VARIABLE_AccA_0_4;
              STATE_VARIABLE_AccB_0_6 = next_value_of_STATE_VARIABLE_AccB_0_6;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box H_14 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Word T_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_22;
          MR_Box STATE_VARIABLE_AccA_25_25;
          MR_Box STATE_VARIABLE_AccB_26_26;

          {
            Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_22, 0) = H_14;
            MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (T_15));
          }
          succeeded = mercury__list__foldl2_6_p_4(TypeInfo_for_T_42, TypeInfo_for_A_43, TypeInfo_for_B_44, P_1, Var_22, STATE_VARIABLE_AccA_0_4, &STATE_VARIABLE_AccA_25_25, STATE_VARIABLE_AccB_0_6, &STATE_VARIABLE_AccB_26_26);
          if (succeeded)
          {
            if ((Cs_3 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              *STATE_VARIABLE_AccA_5 = STATE_VARIABLE_AccA_25_25;
              *STATE_VARIABLE_AccB_7 = STATE_VARIABLE_AccB_26_26;
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word Y_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 0))));
              MR_Word Ys_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 1))));
              MR_Word next_value_of_HeadVar__2_2 = Y_16;
              MR_Word next_value_of_Cs_3 = Ys_17;
              MR_Box next_value_of_STATE_VARIABLE_AccA_0_4 = STATE_VARIABLE_AccA_25_25;
              MR_Box next_value_of_STATE_VARIABLE_AccB_0_6 = STATE_VARIABLE_AccB_26_26;

              // direct tailcall eliminated
              ;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              Cs_3 = next_value_of_Cs_3;
              STATE_VARIABLE_AccA_0_4 = next_value_of_STATE_VARIABLE_AccA_0_4;
              STATE_VARIABLE_AccB_0_6 = next_value_of_STATE_VARIABLE_AccB_0_6;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word A_30 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
          MR_Word B_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_39;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_Cs_3;

          {
            Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (B_31));
            MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Cs_3));
          }
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = A_30;
          next_value_of_Cs_3 = Var_39;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          Cs_3 = next_value_of_Cs_3;
          continue;
        }
        break;
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__cord__foldl2_6_p_2(
  MR_Word TypeInfo_for_T_25,
  MR_Word TypeInfo_for_A_26,
  MR_Word TypeInfo_for_B_27,
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
    MR_Word N_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    mercury__cord__foldl2_node_7_p_2(TypeInfo_for_T_25, TypeInfo_for_A_26, TypeInfo_for_B_27, HeadVar__1_1, N_15, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_AccA_0_3, STATE_VARIABLE_AccA_4, STATE_VARIABLE_AccB_0_5, STATE_VARIABLE_AccB_6);
  }
}

void MR_CALL 
mercury__cord__foldl2_node_7_p_2(
  MR_Word TypeInfo_for_T_42,
  MR_Word TypeInfo_for_A_43,
  MR_Word TypeInfo_for_B_44,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word Cs_3,
  MR_Box STATE_VARIABLE_AccA_0_4,
  MR_Box * STATE_VARIABLE_AccA_5,
  MR_Box STATE_VARIABLE_AccB_0_6,
  MR_Box * STATE_VARIABLE_AccB_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box X_13 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
          MR_Box STATE_VARIABLE_AccA_25_58;
          MR_Box STATE_VARIABLE_AccB_26_59;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

          func_0(((MR_Box) (P_1)), X_13, STATE_VARIABLE_AccA_0_4, &STATE_VARIABLE_AccA_25_58, STATE_VARIABLE_AccB_0_6, &STATE_VARIABLE_AccB_26_59);
          if ((Cs_3 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            *STATE_VARIABLE_AccA_5 = STATE_VARIABLE_AccA_25_58;
            *STATE_VARIABLE_AccB_7 = STATE_VARIABLE_AccB_26_59;
          }
          else
          {
            MR_Word Y_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 0))));
            MR_Word Ys_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 1))));
            MR_Word next_value_of_HeadVar__2_2 = Y_45;
            MR_Word next_value_of_Cs_3 = Ys_46;
            MR_Box next_value_of_STATE_VARIABLE_AccA_0_4 = STATE_VARIABLE_AccA_25_58;
            MR_Box next_value_of_STATE_VARIABLE_AccB_0_6 = STATE_VARIABLE_AccB_26_59;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            Cs_3 = next_value_of_Cs_3;
            STATE_VARIABLE_AccA_0_4 = next_value_of_STATE_VARIABLE_AccA_0_4;
            STATE_VARIABLE_AccB_0_6 = next_value_of_STATE_VARIABLE_AccB_0_6;
            continue;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box H_14 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Word T_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_22;
          MR_Box STATE_VARIABLE_AccA_25_25;
          MR_Box STATE_VARIABLE_AccB_26_26;

          {
            Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_22, 0) = H_14;
            MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (T_15));
          }
          mercury__list__foldl2_6_p_2(TypeInfo_for_T_42, TypeInfo_for_A_43, TypeInfo_for_B_44, P_1, Var_22, STATE_VARIABLE_AccA_0_4, &STATE_VARIABLE_AccA_25_25, STATE_VARIABLE_AccB_0_6, &STATE_VARIABLE_AccB_26_26);
          if ((Cs_3 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            *STATE_VARIABLE_AccA_5 = STATE_VARIABLE_AccA_25_25;
            *STATE_VARIABLE_AccB_7 = STATE_VARIABLE_AccB_26_26;
          }
          else
          {
            MR_Word Y_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 0))));
            MR_Word Ys_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 1))));
            MR_Word next_value_of_HeadVar__2_2 = Y_16;
            MR_Word next_value_of_Cs_3 = Ys_17;
            MR_Box next_value_of_STATE_VARIABLE_AccA_0_4 = STATE_VARIABLE_AccA_25_25;
            MR_Box next_value_of_STATE_VARIABLE_AccB_0_6 = STATE_VARIABLE_AccB_26_26;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            Cs_3 = next_value_of_Cs_3;
            STATE_VARIABLE_AccA_0_4 = next_value_of_STATE_VARIABLE_AccA_0_4;
            STATE_VARIABLE_AccB_0_6 = next_value_of_STATE_VARIABLE_AccB_0_6;
            continue;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word A_30 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
          MR_Word B_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_39;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_Cs_3;

          {
            Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (B_31));
            MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Cs_3));
          }
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = A_30;
          next_value_of_Cs_3 = Var_39;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          Cs_3 = next_value_of_Cs_3;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__cord__foldl2_6_p_1(
  MR_Word TypeInfo_for_T_25,
  MR_Word TypeInfo_for_A_26,
  MR_Word TypeInfo_for_B_27,
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
    MR_Word N_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    mercury__cord__foldl2_node_7_p_1(TypeInfo_for_T_25, TypeInfo_for_A_26, TypeInfo_for_B_27, HeadVar__1_1, N_15, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_AccA_0_3, STATE_VARIABLE_AccA_4, STATE_VARIABLE_AccB_0_5, STATE_VARIABLE_AccB_6);
  }
}

void MR_CALL 
mercury__cord__foldl2_node_7_p_1(
  MR_Word TypeInfo_for_T_42,
  MR_Word TypeInfo_for_A_43,
  MR_Word TypeInfo_for_B_44,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word Cs_3,
  MR_Box STATE_VARIABLE_AccA_0_4,
  MR_Box * STATE_VARIABLE_AccA_5,
  MR_Box STATE_VARIABLE_AccB_0_6,
  MR_Box * STATE_VARIABLE_AccB_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box X_13 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
          MR_Box STATE_VARIABLE_AccA_25_58;
          MR_Box STATE_VARIABLE_AccB_26_59;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

          func_0(((MR_Box) (P_1)), X_13, STATE_VARIABLE_AccA_0_4, &STATE_VARIABLE_AccA_25_58, STATE_VARIABLE_AccB_0_6, &STATE_VARIABLE_AccB_26_59);
          if ((Cs_3 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            *STATE_VARIABLE_AccA_5 = STATE_VARIABLE_AccA_25_58;
            *STATE_VARIABLE_AccB_7 = STATE_VARIABLE_AccB_26_59;
          }
          else
          {
            MR_Word Y_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 0))));
            MR_Word Ys_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 1))));
            MR_Word next_value_of_HeadVar__2_2 = Y_45;
            MR_Word next_value_of_Cs_3 = Ys_46;
            MR_Box next_value_of_STATE_VARIABLE_AccA_0_4 = STATE_VARIABLE_AccA_25_58;
            MR_Box next_value_of_STATE_VARIABLE_AccB_0_6 = STATE_VARIABLE_AccB_26_59;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            Cs_3 = next_value_of_Cs_3;
            STATE_VARIABLE_AccA_0_4 = next_value_of_STATE_VARIABLE_AccA_0_4;
            STATE_VARIABLE_AccB_0_6 = next_value_of_STATE_VARIABLE_AccB_0_6;
            continue;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box H_14 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Word T_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_22;
          MR_Box STATE_VARIABLE_AccA_25_25;
          MR_Box STATE_VARIABLE_AccB_26_26;

          {
            Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_22, 0) = H_14;
            MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (T_15));
          }
          mercury__list__foldl2_6_p_1(TypeInfo_for_T_42, TypeInfo_for_A_43, TypeInfo_for_B_44, P_1, Var_22, STATE_VARIABLE_AccA_0_4, &STATE_VARIABLE_AccA_25_25, STATE_VARIABLE_AccB_0_6, &STATE_VARIABLE_AccB_26_26);
          if ((Cs_3 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            *STATE_VARIABLE_AccA_5 = STATE_VARIABLE_AccA_25_25;
            *STATE_VARIABLE_AccB_7 = STATE_VARIABLE_AccB_26_26;
          }
          else
          {
            MR_Word Y_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 0))));
            MR_Word Ys_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 1))));
            MR_Word next_value_of_HeadVar__2_2 = Y_16;
            MR_Word next_value_of_Cs_3 = Ys_17;
            MR_Box next_value_of_STATE_VARIABLE_AccA_0_4 = STATE_VARIABLE_AccA_25_25;
            MR_Box next_value_of_STATE_VARIABLE_AccB_0_6 = STATE_VARIABLE_AccB_26_26;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            Cs_3 = next_value_of_Cs_3;
            STATE_VARIABLE_AccA_0_4 = next_value_of_STATE_VARIABLE_AccA_0_4;
            STATE_VARIABLE_AccB_0_6 = next_value_of_STATE_VARIABLE_AccB_0_6;
            continue;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word A_30 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
          MR_Word B_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_39;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_Cs_3;

          {
            Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (B_31));
            MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Cs_3));
          }
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = A_30;
          next_value_of_Cs_3 = Var_39;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          Cs_3 = next_value_of_Cs_3;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__cord__foldl2_6_p_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word TypeInfo_for_A_26,
  MR_Word TypeInfo_for_B_27,
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
    MR_Word N_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    mercury__cord__foldl2_node_7_p_0(TypeInfo_for_T_25, TypeInfo_for_A_26, TypeInfo_for_B_27, HeadVar__1_1, N_15, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_AccA_0_3, STATE_VARIABLE_AccA_4, STATE_VARIABLE_AccB_0_5, STATE_VARIABLE_AccB_6);
  }
}

void MR_CALL 
mercury__cord__foldl2_node_7_p_0(
  MR_Word TypeInfo_for_T_42,
  MR_Word TypeInfo_for_A_43,
  MR_Word TypeInfo_for_B_44,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word Cs_3,
  MR_Box STATE_VARIABLE_AccA_0_4,
  MR_Box * STATE_VARIABLE_AccA_5,
  MR_Box STATE_VARIABLE_AccB_0_6,
  MR_Box * STATE_VARIABLE_AccB_7)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box X_13 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
          MR_Box STATE_VARIABLE_AccA_25_58;
          MR_Box STATE_VARIABLE_AccB_26_59;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

          func_0(((MR_Box) (P_1)), X_13, STATE_VARIABLE_AccA_0_4, &STATE_VARIABLE_AccA_25_58, STATE_VARIABLE_AccB_0_6, &STATE_VARIABLE_AccB_26_59);
          if ((Cs_3 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            *STATE_VARIABLE_AccA_5 = STATE_VARIABLE_AccA_25_58;
            *STATE_VARIABLE_AccB_7 = STATE_VARIABLE_AccB_26_59;
          }
          else
          {
            MR_Word Y_45 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 0))));
            MR_Word Ys_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 1))));
            MR_Word next_value_of_HeadVar__2_2 = Y_45;
            MR_Word next_value_of_Cs_3 = Ys_46;
            MR_Box next_value_of_STATE_VARIABLE_AccA_0_4 = STATE_VARIABLE_AccA_25_58;
            MR_Box next_value_of_STATE_VARIABLE_AccB_0_6 = STATE_VARIABLE_AccB_26_59;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            Cs_3 = next_value_of_Cs_3;
            STATE_VARIABLE_AccA_0_4 = next_value_of_STATE_VARIABLE_AccA_0_4;
            STATE_VARIABLE_AccB_0_6 = next_value_of_STATE_VARIABLE_AccB_0_6;
            continue;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box H_14 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Word T_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_22;
          MR_Box STATE_VARIABLE_AccA_25_25;
          MR_Box STATE_VARIABLE_AccB_26_26;

          {
            Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_22, 0) = H_14;
            MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (T_15));
          }
          mercury__list__foldl2_6_p_0(TypeInfo_for_T_42, TypeInfo_for_A_43, TypeInfo_for_B_44, P_1, Var_22, STATE_VARIABLE_AccA_0_4, &STATE_VARIABLE_AccA_25_25, STATE_VARIABLE_AccB_0_6, &STATE_VARIABLE_AccB_26_26);
          if ((Cs_3 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            *STATE_VARIABLE_AccA_5 = STATE_VARIABLE_AccA_25_25;
            *STATE_VARIABLE_AccB_7 = STATE_VARIABLE_AccB_26_26;
          }
          else
          {
            MR_Word Y_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 0))));
            MR_Word Ys_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 1))));
            MR_Word next_value_of_HeadVar__2_2 = Y_16;
            MR_Word next_value_of_Cs_3 = Ys_17;
            MR_Box next_value_of_STATE_VARIABLE_AccA_0_4 = STATE_VARIABLE_AccA_25_25;
            MR_Box next_value_of_STATE_VARIABLE_AccB_0_6 = STATE_VARIABLE_AccB_26_26;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            Cs_3 = next_value_of_Cs_3;
            STATE_VARIABLE_AccA_0_4 = next_value_of_STATE_VARIABLE_AccA_0_4;
            STATE_VARIABLE_AccB_0_6 = next_value_of_STATE_VARIABLE_AccB_0_6;
            continue;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word A_30 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
          MR_Word B_31 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_39;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_Cs_3;

          {
            Var_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_39, 0) = ((MR_Box) (B_31));
            MR_hl_field(MR_mktag(1), Var_39, 1) = ((MR_Box) (Cs_3));
          }
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = A_30;
          next_value_of_Cs_3 = Var_39;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          Cs_3 = next_value_of_Cs_3;
          continue;
        }
        break;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__cord__foldl_pred_4_p_5(
  MR_Word TypeInfo_for_T_16,
  MR_Word TypeInfo_for_A_17,
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
    MR_Word N_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    succeeded = mercury__cord__foldl_node_pred_5_p_5(TypeInfo_for_T_16, TypeInfo_for_A_17, HeadVar__1_1, N_10, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_AccA_0_3, STATE_VARIABLE_AccA_4);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__cord__foldl_node_pred_5_p_5(
  MR_Word TypeInfo_for_T_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word Cs_3,
  MR_Box STATE_VARIABLE_AccA_0_4,
  MR_Box * STATE_VARIABLE_AccA_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box X_10 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
          MR_Box STATE_VARIABLE_AccA_19_43;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

          succeeded = func_0(((MR_Box) (P_1)), X_10, STATE_VARIABLE_AccA_0_4, &STATE_VARIABLE_AccA_19_43);
          if (succeeded)
          {
            if ((Cs_3 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              *STATE_VARIABLE_AccA_5 = STATE_VARIABLE_AccA_19_43;
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word Y_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 0))));
              MR_Word Ys_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 1))));
              MR_Word next_value_of_HeadVar__2_2 = Y_32;
              MR_Word next_value_of_Cs_3 = Ys_33;
              MR_Box next_value_of_STATE_VARIABLE_AccA_0_4 = STATE_VARIABLE_AccA_19_43;

              // direct tailcall eliminated
              ;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              Cs_3 = next_value_of_Cs_3;
              STATE_VARIABLE_AccA_0_4 = next_value_of_STATE_VARIABLE_AccA_0_4;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box H_11 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Word T_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_17;
          MR_Box STATE_VARIABLE_AccA_19_19;

          {
            Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_17, 0) = H_11;
            MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (T_12));
          }
          succeeded = mercury__list__foldl_4_p_5(TypeInfo_for_T_30, TypeInfo_for_A_31, P_1, Var_17, STATE_VARIABLE_AccA_0_4, &STATE_VARIABLE_AccA_19_19);
          if (succeeded)
          {
            if ((Cs_3 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              *STATE_VARIABLE_AccA_5 = STATE_VARIABLE_AccA_19_19;
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word Y_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 0))));
              MR_Word Ys_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 1))));
              MR_Word next_value_of_HeadVar__2_2 = Y_13;
              MR_Word next_value_of_Cs_3 = Ys_14;
              MR_Box next_value_of_STATE_VARIABLE_AccA_0_4 = STATE_VARIABLE_AccA_19_19;

              // direct tailcall eliminated
              ;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              Cs_3 = next_value_of_Cs_3;
              STATE_VARIABLE_AccA_0_4 = next_value_of_STATE_VARIABLE_AccA_0_4;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word A_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
          MR_Word B_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_28;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_Cs_3;

          {
            Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (B_23));
            MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Cs_3));
          }
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = A_22;
          next_value_of_Cs_3 = Var_28;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          Cs_3 = next_value_of_Cs_3;
          continue;
        }
        break;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__cord__foldl_pred_4_p_4(
  MR_Word TypeInfo_for_T_16,
  MR_Word TypeInfo_for_A_17,
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
    MR_Word N_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    succeeded = mercury__cord__foldl_node_pred_5_p_4(TypeInfo_for_T_16, TypeInfo_for_A_17, HeadVar__1_1, N_10, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_AccA_0_3, STATE_VARIABLE_AccA_4);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__cord__foldl_node_pred_5_p_4(
  MR_Word TypeInfo_for_T_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word Cs_3,
  MR_Box STATE_VARIABLE_AccA_0_4,
  MR_Box * STATE_VARIABLE_AccA_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box X_10 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
          MR_Box STATE_VARIABLE_AccA_19_43;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

          succeeded = func_0(((MR_Box) (P_1)), X_10, STATE_VARIABLE_AccA_0_4, &STATE_VARIABLE_AccA_19_43);
          if (succeeded)
          {
            if ((Cs_3 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              *STATE_VARIABLE_AccA_5 = STATE_VARIABLE_AccA_19_43;
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word Y_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 0))));
              MR_Word Ys_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 1))));
              MR_Word next_value_of_HeadVar__2_2 = Y_32;
              MR_Word next_value_of_Cs_3 = Ys_33;
              MR_Box next_value_of_STATE_VARIABLE_AccA_0_4 = STATE_VARIABLE_AccA_19_43;

              // direct tailcall eliminated
              ;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              Cs_3 = next_value_of_Cs_3;
              STATE_VARIABLE_AccA_0_4 = next_value_of_STATE_VARIABLE_AccA_0_4;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box H_11 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Word T_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_17;
          MR_Box STATE_VARIABLE_AccA_19_19;

          {
            Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_17, 0) = H_11;
            MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (T_12));
          }
          succeeded = mercury__list__foldl_4_p_4(TypeInfo_for_T_30, TypeInfo_for_A_31, P_1, Var_17, STATE_VARIABLE_AccA_0_4, &STATE_VARIABLE_AccA_19_19);
          if (succeeded)
          {
            if ((Cs_3 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              *STATE_VARIABLE_AccA_5 = STATE_VARIABLE_AccA_19_19;
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word Y_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 0))));
              MR_Word Ys_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 1))));
              MR_Word next_value_of_HeadVar__2_2 = Y_13;
              MR_Word next_value_of_Cs_3 = Ys_14;
              MR_Box next_value_of_STATE_VARIABLE_AccA_0_4 = STATE_VARIABLE_AccA_19_19;

              // direct tailcall eliminated
              ;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              Cs_3 = next_value_of_Cs_3;
              STATE_VARIABLE_AccA_0_4 = next_value_of_STATE_VARIABLE_AccA_0_4;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word A_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
          MR_Word B_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_28;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_Cs_3;

          {
            Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (B_23));
            MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Cs_3));
          }
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = A_22;
          next_value_of_Cs_3 = Var_28;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          Cs_3 = next_value_of_Cs_3;
          continue;
        }
        break;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__cord__foldl_pred_4_p_3(
  MR_Word TypeInfo_for_T_16,
  MR_Word TypeInfo_for_A_17,
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
    MR_Word N_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    succeeded = mercury__cord__foldl_node_pred_5_p_3(TypeInfo_for_T_16, TypeInfo_for_A_17, HeadVar__1_1, N_10, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_AccA_0_3, STATE_VARIABLE_AccA_4);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__cord__foldl_node_pred_5_p_3(
  MR_Word TypeInfo_for_T_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word Cs_3,
  MR_Box STATE_VARIABLE_AccA_0_4,
  MR_Box * STATE_VARIABLE_AccA_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box X_10 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
          MR_Box STATE_VARIABLE_AccA_19_43;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

          succeeded = func_0(((MR_Box) (P_1)), X_10, STATE_VARIABLE_AccA_0_4, &STATE_VARIABLE_AccA_19_43);
          if (succeeded)
          {
            if ((Cs_3 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              *STATE_VARIABLE_AccA_5 = STATE_VARIABLE_AccA_19_43;
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word Y_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 0))));
              MR_Word Ys_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 1))));
              MR_Word next_value_of_HeadVar__2_2 = Y_32;
              MR_Word next_value_of_Cs_3 = Ys_33;
              MR_Box next_value_of_STATE_VARIABLE_AccA_0_4 = STATE_VARIABLE_AccA_19_43;

              // direct tailcall eliminated
              ;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              Cs_3 = next_value_of_Cs_3;
              STATE_VARIABLE_AccA_0_4 = next_value_of_STATE_VARIABLE_AccA_0_4;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box H_11 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Word T_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_17;
          MR_Box STATE_VARIABLE_AccA_19_19;

          {
            Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_17, 0) = H_11;
            MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (T_12));
          }
          succeeded = mercury__list__foldl_4_p_3(TypeInfo_for_T_30, TypeInfo_for_A_31, P_1, Var_17, STATE_VARIABLE_AccA_0_4, &STATE_VARIABLE_AccA_19_19);
          if (succeeded)
          {
            if ((Cs_3 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              *STATE_VARIABLE_AccA_5 = STATE_VARIABLE_AccA_19_19;
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word Y_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 0))));
              MR_Word Ys_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 1))));
              MR_Word next_value_of_HeadVar__2_2 = Y_13;
              MR_Word next_value_of_Cs_3 = Ys_14;
              MR_Box next_value_of_STATE_VARIABLE_AccA_0_4 = STATE_VARIABLE_AccA_19_19;

              // direct tailcall eliminated
              ;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              Cs_3 = next_value_of_Cs_3;
              STATE_VARIABLE_AccA_0_4 = next_value_of_STATE_VARIABLE_AccA_0_4;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word A_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
          MR_Word B_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_28;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_Cs_3;

          {
            Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (B_23));
            MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Cs_3));
          }
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = A_22;
          next_value_of_Cs_3 = Var_28;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          Cs_3 = next_value_of_Cs_3;
          continue;
        }
        break;
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__cord__foldl_pred_4_p_2(
  MR_Word TypeInfo_for_T_16,
  MR_Word TypeInfo_for_A_17,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_AccA_0_3,
  MR_Box * STATE_VARIABLE_AccA_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_AccA_4 = STATE_VARIABLE_AccA_0_3;
  else
  {
    MR_Word N_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    mercury__cord__foldl_node_pred_5_p_2(TypeInfo_for_T_16, TypeInfo_for_A_17, HeadVar__1_1, N_10, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_AccA_0_3, STATE_VARIABLE_AccA_4);
  }
}

void MR_CALL 
mercury__cord__foldl_node_pred_5_p_2(
  MR_Word TypeInfo_for_T_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word Cs_3,
  MR_Box STATE_VARIABLE_AccA_0_4,
  MR_Box * STATE_VARIABLE_AccA_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box X_10 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
          MR_Box STATE_VARIABLE_AccA_19_43;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

          func_0(((MR_Box) (P_1)), X_10, STATE_VARIABLE_AccA_0_4, &STATE_VARIABLE_AccA_19_43);
          if ((Cs_3 == (MR_Word) ((MR_Unsigned) 0U)))
            *STATE_VARIABLE_AccA_5 = STATE_VARIABLE_AccA_19_43;
          else
          {
            MR_Word Y_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 0))));
            MR_Word Ys_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 1))));
            MR_Word next_value_of_HeadVar__2_2 = Y_32;
            MR_Word next_value_of_Cs_3 = Ys_33;
            MR_Box next_value_of_STATE_VARIABLE_AccA_0_4 = STATE_VARIABLE_AccA_19_43;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            Cs_3 = next_value_of_Cs_3;
            STATE_VARIABLE_AccA_0_4 = next_value_of_STATE_VARIABLE_AccA_0_4;
            continue;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box H_11 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Word T_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_17;
          MR_Box STATE_VARIABLE_AccA_19_19;

          {
            Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_17, 0) = H_11;
            MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (T_12));
          }
          mercury__list__foldl_4_p_2(TypeInfo_for_T_30, TypeInfo_for_A_31, P_1, Var_17, STATE_VARIABLE_AccA_0_4, &STATE_VARIABLE_AccA_19_19);
          if ((Cs_3 == (MR_Word) ((MR_Unsigned) 0U)))
            *STATE_VARIABLE_AccA_5 = STATE_VARIABLE_AccA_19_19;
          else
          {
            MR_Word Y_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 0))));
            MR_Word Ys_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 1))));
            MR_Word next_value_of_HeadVar__2_2 = Y_13;
            MR_Word next_value_of_Cs_3 = Ys_14;
            MR_Box next_value_of_STATE_VARIABLE_AccA_0_4 = STATE_VARIABLE_AccA_19_19;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            Cs_3 = next_value_of_Cs_3;
            STATE_VARIABLE_AccA_0_4 = next_value_of_STATE_VARIABLE_AccA_0_4;
            continue;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word A_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
          MR_Word B_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_28;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_Cs_3;

          {
            Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (B_23));
            MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Cs_3));
          }
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = A_22;
          next_value_of_Cs_3 = Var_28;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          Cs_3 = next_value_of_Cs_3;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__cord__foldl_pred_4_p_1(
  MR_Word TypeInfo_for_T_16,
  MR_Word TypeInfo_for_A_17,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_AccA_0_3,
  MR_Box * STATE_VARIABLE_AccA_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_AccA_4 = STATE_VARIABLE_AccA_0_3;
  else
  {
    MR_Word N_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    mercury__cord__foldl_node_pred_5_p_1(TypeInfo_for_T_16, TypeInfo_for_A_17, HeadVar__1_1, N_10, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_AccA_0_3, STATE_VARIABLE_AccA_4);
  }
}

void MR_CALL 
mercury__cord__foldl_node_pred_5_p_1(
  MR_Word TypeInfo_for_T_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word Cs_3,
  MR_Box STATE_VARIABLE_AccA_0_4,
  MR_Box * STATE_VARIABLE_AccA_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box X_10 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
          MR_Box STATE_VARIABLE_AccA_19_43;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

          func_0(((MR_Box) (P_1)), X_10, STATE_VARIABLE_AccA_0_4, &STATE_VARIABLE_AccA_19_43);
          if ((Cs_3 == (MR_Word) ((MR_Unsigned) 0U)))
            *STATE_VARIABLE_AccA_5 = STATE_VARIABLE_AccA_19_43;
          else
          {
            MR_Word Y_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 0))));
            MR_Word Ys_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 1))));
            MR_Word next_value_of_HeadVar__2_2 = Y_32;
            MR_Word next_value_of_Cs_3 = Ys_33;
            MR_Box next_value_of_STATE_VARIABLE_AccA_0_4 = STATE_VARIABLE_AccA_19_43;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            Cs_3 = next_value_of_Cs_3;
            STATE_VARIABLE_AccA_0_4 = next_value_of_STATE_VARIABLE_AccA_0_4;
            continue;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box H_11 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Word T_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_17;
          MR_Box STATE_VARIABLE_AccA_19_19;

          {
            Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_17, 0) = H_11;
            MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (T_12));
          }
          mercury__list__foldl_4_p_1(TypeInfo_for_T_30, TypeInfo_for_A_31, P_1, Var_17, STATE_VARIABLE_AccA_0_4, &STATE_VARIABLE_AccA_19_19);
          if ((Cs_3 == (MR_Word) ((MR_Unsigned) 0U)))
            *STATE_VARIABLE_AccA_5 = STATE_VARIABLE_AccA_19_19;
          else
          {
            MR_Word Y_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 0))));
            MR_Word Ys_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 1))));
            MR_Word next_value_of_HeadVar__2_2 = Y_13;
            MR_Word next_value_of_Cs_3 = Ys_14;
            MR_Box next_value_of_STATE_VARIABLE_AccA_0_4 = STATE_VARIABLE_AccA_19_19;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            Cs_3 = next_value_of_Cs_3;
            STATE_VARIABLE_AccA_0_4 = next_value_of_STATE_VARIABLE_AccA_0_4;
            continue;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word A_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
          MR_Word B_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_28;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_Cs_3;

          {
            Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (B_23));
            MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Cs_3));
          }
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = A_22;
          next_value_of_Cs_3 = Var_28;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          Cs_3 = next_value_of_Cs_3;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__cord__foldl_pred_4_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word TypeInfo_for_A_17,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_AccA_0_3,
  MR_Box * STATE_VARIABLE_AccA_4)
{
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    *STATE_VARIABLE_AccA_4 = STATE_VARIABLE_AccA_0_3;
  else
  {
    MR_Word N_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    mercury__cord__foldl_node_pred_5_p_0(TypeInfo_for_T_16, TypeInfo_for_A_17, HeadVar__1_1, N_10, (MR_Word) ((MR_Unsigned) 0U), STATE_VARIABLE_AccA_0_3, STATE_VARIABLE_AccA_4);
  }
}

void MR_CALL 
mercury__cord__foldl_node_pred_5_p_0(
  MR_Word TypeInfo_for_T_30,
  MR_Word TypeInfo_for_A_31,
  MR_Word P_1,
  MR_Word HeadVar__2_2,
  MR_Word Cs_3,
  MR_Box STATE_VARIABLE_AccA_0_4,
  MR_Box * STATE_VARIABLE_AccA_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box X_10 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
          MR_Box STATE_VARIABLE_AccA_19_43;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_1, (MR_Integer) 1))));

          func_0(((MR_Box) (P_1)), X_10, STATE_VARIABLE_AccA_0_4, &STATE_VARIABLE_AccA_19_43);
          if ((Cs_3 == (MR_Word) ((MR_Unsigned) 0U)))
            *STATE_VARIABLE_AccA_5 = STATE_VARIABLE_AccA_19_43;
          else
          {
            MR_Word Y_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 0))));
            MR_Word Ys_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 1))));
            MR_Word next_value_of_HeadVar__2_2 = Y_32;
            MR_Word next_value_of_Cs_3 = Ys_33;
            MR_Box next_value_of_STATE_VARIABLE_AccA_0_4 = STATE_VARIABLE_AccA_19_43;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            Cs_3 = next_value_of_Cs_3;
            STATE_VARIABLE_AccA_0_4 = next_value_of_STATE_VARIABLE_AccA_0_4;
            continue;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box H_11 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Word T_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_17;
          MR_Box STATE_VARIABLE_AccA_19_19;

          {
            Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_17, 0) = H_11;
            MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (T_12));
          }
          mercury__list__foldl_4_p_0(TypeInfo_for_T_30, TypeInfo_for_A_31, P_1, Var_17, STATE_VARIABLE_AccA_0_4, &STATE_VARIABLE_AccA_19_19);
          if ((Cs_3 == (MR_Word) ((MR_Unsigned) 0U)))
            *STATE_VARIABLE_AccA_5 = STATE_VARIABLE_AccA_19_19;
          else
          {
            MR_Word Y_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 0))));
            MR_Word Ys_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 1))));
            MR_Word next_value_of_HeadVar__2_2 = Y_13;
            MR_Word next_value_of_Cs_3 = Ys_14;
            MR_Box next_value_of_STATE_VARIABLE_AccA_0_4 = STATE_VARIABLE_AccA_19_19;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            Cs_3 = next_value_of_Cs_3;
            STATE_VARIABLE_AccA_0_4 = next_value_of_STATE_VARIABLE_AccA_0_4;
            continue;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word A_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
          MR_Word B_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_28;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_Cs_3;

          {
            Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (B_23));
            MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Cs_3));
          }
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = A_22;
          next_value_of_Cs_3 = Var_28;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          Cs_3 = next_value_of_Cs_3;
          continue;
        }
        break;
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
    MR_Word N_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    mercury__cord__foldl_node_5_p_0(TypeInfo_for_T_12, TypeInfo_for_A_13, F_1, N_8, (MR_Word) ((MR_Unsigned) 0U), HeadVar__3_3, &AccA_4);
  }
  return AccA_4;
}

void MR_CALL 
mercury__cord__foldl_node_5_p_0(
  MR_Word TypeInfo_for_T_30,
  MR_Word TypeInfo_for_U_31,
  MR_Word F_1,
  MR_Word HeadVar__2_2,
  MR_Word Cs_3,
  MR_Box STATE_VARIABLE_AccA_0_4,
  MR_Box * STATE_VARIABLE_AccA_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box X_10 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
          MR_Box STATE_VARIABLE_AccA_19_43;
          MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), F_1, (MR_Integer) 1))));

          STATE_VARIABLE_AccA_19_43 = func_0(((MR_Box) (F_1)), X_10, STATE_VARIABLE_AccA_0_4);
          if ((Cs_3 == (MR_Word) ((MR_Unsigned) 0U)))
            *STATE_VARIABLE_AccA_5 = STATE_VARIABLE_AccA_19_43;
          else
          {
            MR_Word Y_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 0))));
            MR_Word Ys_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 1))));
            MR_Word next_value_of_HeadVar__2_2 = Y_32;
            MR_Word next_value_of_Cs_3 = Ys_33;
            MR_Box next_value_of_STATE_VARIABLE_AccA_0_4 = STATE_VARIABLE_AccA_19_43;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            Cs_3 = next_value_of_Cs_3;
            STATE_VARIABLE_AccA_0_4 = next_value_of_STATE_VARIABLE_AccA_0_4;
            continue;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box H_11 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Word T_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_18;
          MR_Box STATE_VARIABLE_AccA_19_19;

          {
            Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_18, 0) = H_11;
            MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (T_12));
          }
          mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(F_1, Var_18, STATE_VARIABLE_AccA_0_4, &STATE_VARIABLE_AccA_19_19);
          if ((Cs_3 == (MR_Word) ((MR_Unsigned) 0U)))
            *STATE_VARIABLE_AccA_5 = STATE_VARIABLE_AccA_19_19;
          else
          {
            MR_Word Y_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 0))));
            MR_Word Ys_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 1))));
            MR_Word next_value_of_HeadVar__2_2 = Y_13;
            MR_Word next_value_of_Cs_3 = Ys_14;
            MR_Box next_value_of_STATE_VARIABLE_AccA_0_4 = STATE_VARIABLE_AccA_19_19;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            Cs_3 = next_value_of_Cs_3;
            STATE_VARIABLE_AccA_0_4 = next_value_of_STATE_VARIABLE_AccA_0_4;
            continue;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word A_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
          MR_Word B_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_28;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_Cs_3;

          {
            Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (B_23));
            MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Cs_3));
          }
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = A_22;
          next_value_of_Cs_3 = Var_28;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          Cs_3 = next_value_of_Cs_3;
          continue;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
  MR_Word Var_18,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Box Var_9 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box Var_13;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 1))));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_HeadVar__3_3;

      Var_13 = func_0(((MR_Box) (Var_18)), Var_9, HeadVar__3_3);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_10;
      next_value_of_HeadVar__3_3 = Var_13;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
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
    MR_Word N_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    mercury__cord__filter_node_4_p_0(TypeInfo_for_T_10, P_1, N_7, HeadVar__3_3, HeadVar__4_4);
  }
}

void MR_CALL 
mercury__cord__filter_node_4_p_0(
  MR_Word TypeInfo_for_T_29,
  MR_Word P_5,
  MR_Word Node_6,
  MR_Word * Trues_7,
  MR_Word * Falses_8)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Node_6)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Box X_9 = (MR_hl_field(MR_mktag(0), Node_6, (MR_Integer) 0));
        MR_bool MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), P_5, (MR_Integer) 1))));

        succeeded = func_0(((MR_Box) (P_5)), X_9);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Trues_7 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Node_6));
          }
          *Falses_8 = (MR_Word) ((MR_Unsigned) 0U);
        }
        else
        {
          *Trues_7 = (MR_Word) ((MR_Unsigned) 0U);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Falses_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Node_6));
          }
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Box H_10 = (MR_hl_field(MR_mktag(1), Node_6, (MR_Integer) 0));
        MR_Word T_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Node_6, (MR_Integer) 1))));
        MR_Word TrueList_12;
        MR_Word FalseList_13;
        MR_Word Var_24;

        {
          Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_24, 0) = H_10;
          MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (T_11));
        }
        mercury__list__filter_4_p_0(TypeInfo_for_T_29, P_5, Var_24, &TrueList_12, &FalseList_13);
        if ((TrueList_12 == (MR_Word) ((MR_Unsigned) 0U)))
          *Trues_7 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Box TH_14 = (MR_hl_field(MR_mktag(1), TrueList_12, (MR_Integer) 0));
          MR_Word TT_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TrueList_12, (MR_Integer) 1))));
          MR_Word Var_25;

          {
            Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_25, 0) = TH_14;
            MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (TT_15));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Trues_7 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_25));
          }
        }
        if ((FalseList_13 == (MR_Word) ((MR_Unsigned) 0U)))
          *Falses_8 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Box FH_16 = (MR_hl_field(MR_mktag(1), FalseList_13, (MR_Integer) 0));
          MR_Word FT_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FalseList_13, (MR_Integer) 1))));
          MR_Word Var_26;

          {
            Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_26, 0) = FH_16;
            MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) (FT_17));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Falses_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_26));
          }
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word A_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Node_6, (MR_Integer) 0))));
        MR_Word B_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Node_6, (MR_Integer) 1))));
        MR_Word CATrues_20;
        MR_Word CAFalses_21;
        MR_Word CBTrues_22;
        MR_Word CBFalses_23;

        mercury__cord__filter_node_4_p_0(TypeInfo_for_T_29, P_5, A_18, &CATrues_20, &CAFalses_21);
        mercury__cord__filter_node_4_p_0(TypeInfo_for_T_29, P_5, B_19, &CBTrues_22, &CBFalses_23);
        *Trues_7 = mercury__cord__f_43_43_2_f_0(TypeInfo_for_T_29, CATrues_20, CBTrues_22);
        *Falses_8 = mercury__cord__f_43_43_2_f_0(TypeInfo_for_T_29, CAFalses_21, CBFalses_23);
      }
      break;
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
    MR_Word N_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

    mercury__cord__filter_node_3_p_0(TypeInfo_for_T_8, P_1, N_6, HeadVar__3_3);
  }
}

void MR_CALL 
mercury__cord__filter_node_3_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word P_4,
  MR_Word Node_5,
  MR_Word * Trues_6)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Node_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Box X_7 = (MR_hl_field(MR_mktag(0), Node_5, (MR_Integer) 0));
        MR_bool MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), P_4, (MR_Integer) 1))));

        succeeded = func_0(((MR_Box) (P_4)), X_7);
        if (succeeded)
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Trues_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Node_5));
          }
        else
          *Trues_6 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Box H_8 = (MR_hl_field(MR_mktag(1), Node_5, (MR_Integer) 0));
        MR_Word T_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Node_5, (MR_Integer) 1))));
        MR_Word TrueList_10;
        MR_Word Var_17;

        {
          Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_17, 0) = H_8;
          MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (T_9));
        }
        mercury__list__filter_3_p_0(TypeInfo_for_T_20, P_4, Var_17, &TrueList_10);
        if ((TrueList_10 == (MR_Word) ((MR_Unsigned) 0U)))
          *Trues_6 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Box TH_11 = (MR_hl_field(MR_mktag(1), TrueList_10, (MR_Integer) 0));
          MR_Word TT_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TrueList_10, (MR_Integer) 1))));
          MR_Word Var_18;

          {
            Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_18, 0) = TH_11;
            MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (TT_12));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Trues_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_18));
          }
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word A_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Node_5, (MR_Integer) 0))));
        MR_Word B_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Node_5, (MR_Integer) 1))));
        MR_Word CATrues_15;
        MR_Word CBTrues_16;

        mercury__cord__filter_node_3_p_0(TypeInfo_for_T_20, P_4, A_13, &CATrues_15);
        mercury__cord__filter_node_3_p_0(TypeInfo_for_T_20, P_4, B_14, &CBTrues_16);
        *Trues_6 = mercury__cord__f_43_43_2_f_0(TypeInfo_for_T_20, CATrues_15, CBTrues_16);
      }
      break;
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
    MR_Word N_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word PN_7;

    mercury__cord__map_pred_node_3_p_0(TypeInfo_for_T_8, TypeInfo_for_U_9, P_1, N_6, &PN_7);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (PN_7));
    }
  }
}

void MR_CALL 
mercury__cord__LCMC__pred__map_pred_node__1_3_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word TypeInfo_for_U_18,
  MR_Word P_4,
  MR_Word Node_5,
  MR_Word * AddrOfPNode_20)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Node_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box X_7 = (MR_hl_field(MR_mktag(0), Node_5, (MR_Integer) 0));
          MR_Box PX_8;
          MR_Word PNode_22;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_4, (MR_Integer) 1))));

          func_1(((MR_Box) (P_4)), X_7, &PX_8);
          {
            PNode_22 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), PNode_22, 0) = PX_8;
          }
          *AddrOfPNode_20 = PNode_22;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box H_9 = (MR_hl_field(MR_mktag(1), Node_5, (MR_Integer) 0));
          MR_Word T_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Node_5, (MR_Integer) 1))));
          MR_Box PH_11;
          MR_Word PT_12;
          MR_Word PNode_21;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_4, (MR_Integer) 1))));

          func_0(((MR_Box) (P_4)), H_9, &PH_11);
          mercury__list__map_3_p_0(TypeInfo_for_T_17, TypeInfo_for_U_18, P_4, T_10, &PT_12);
          {
            PNode_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), PNode_21, 0) = PH_11;
            MR_hl_field(MR_mktag(1), PNode_21, 1) = ((MR_Box) (PT_12));
          }
          *AddrOfPNode_20 = PNode_21;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word A_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Node_5, (MR_Integer) 0))));
          MR_Word B_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Node_5, (MR_Integer) 1))));
          MR_Word PA_15;
          MR_Word PNode_6;
          MR_Word * AddrPB_19;
          MR_Word next_value_of_Node_5;
          MR_Word * next_value_of_AddrOfPNode_20;

          mercury__cord__map_pred_node_3_p_0(TypeInfo_for_T_17, TypeInfo_for_U_18, P_4, A_13, &PA_15);
          {
            PNode_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), PNode_6, 0) = ((MR_Box) (PA_15));
            MR_hl_field(MR_mktag(2), PNode_6, 1) = NULL;
          }
          AddrPB_19 = (MR_Word *) (&(MR_hl_field(MR_mktag(2), PNode_6, (MR_Integer) 1)));
          *AddrOfPNode_20 = PNode_6;
          // direct tailcall eliminated
          ;
          next_value_of_Node_5 = B_14;
          next_value_of_AddrOfPNode_20 = AddrPB_19;
          Node_5 = next_value_of_Node_5;
          AddrOfPNode_20 = next_value_of_AddrOfPNode_20;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__cord__map_pred_node_3_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word TypeInfo_for_U_18,
  MR_Word P_4,
  MR_Word Node_5,
  MR_Word * PNode_6)
{
  switch (MR_tag((MR_Word) Node_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Box X_7 = (MR_hl_field(MR_mktag(0), Node_5, (MR_Integer) 0));
        MR_Box PX_8;
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_4, (MR_Integer) 1))));

        func_1(((MR_Box) (P_4)), X_7, &PX_8);
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *PNode_6 = base;
          MR_hl_field(MR_mktag(0), base, 0) = PX_8;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Box H_9 = (MR_hl_field(MR_mktag(1), Node_5, (MR_Integer) 0));
        MR_Word T_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Node_5, (MR_Integer) 1))));
        MR_Box PH_11;
        MR_Word PT_12;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_4, (MR_Integer) 1))));

        func_0(((MR_Box) (P_4)), H_9, &PH_11);
        mercury__list__map_3_p_0(TypeInfo_for_T_17, TypeInfo_for_U_18, P_4, T_10, &PT_12);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *PNode_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = PH_11;
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (PT_12));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word A_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Node_5, (MR_Integer) 0))));
        MR_Word B_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Node_5, (MR_Integer) 1))));
        MR_Word PA_15;
        MR_Word * AddrPB_19;

        mercury__cord__map_pred_node_3_p_0(TypeInfo_for_T_17, TypeInfo_for_U_18, P_4, A_13, &PA_15);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *PNode_6 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (PA_15));
          MR_hl_field(MR_mktag(2), base, 1) = NULL;
        }
        AddrPB_19 = (MR_Word *) (&(MR_hl_field(MR_mktag(2), *PNode_6, (MR_Integer) 1)));
        mercury__cord__LCMC__pred__map_pred_node__1_3_p_0(TypeInfo_for_T_17, TypeInfo_for_U_18, P_4, B_14, AddrPB_19);
      }
      break;
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
    MR_Word N_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
    MR_Word Var_7;

    Var_7 = mercury__cord__map_node_2_f_0(TypeInfo_for_T_8, TypeInfo_for_U_9, F_1, N_6);
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (Var_7));
    }
  }
  return HeadVar__3_3;
}

void MR_CALL 
mercury__cord__LCMC__func__map_node__1_3_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word TypeInfo_for_U_18,
  MR_Word F_4,
  MR_Word Node_5,
  MR_Word * AddrOfPNode_20)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Node_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box X_7 = (MR_hl_field(MR_mktag(0), Node_5, (MR_Integer) 0));
          MR_Box Var_16;
          MR_Word PNode_22;
          MR_Box MR_CALL (* func_1)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), F_4, (MR_Integer) 1))));

          Var_16 = func_1(((MR_Box) (F_4)), X_7);
          {
            PNode_22 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), PNode_22, 0) = Var_16;
          }
          *AddrOfPNode_20 = PNode_22;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box H_8 = (MR_hl_field(MR_mktag(1), Node_5, (MR_Integer) 0));
          MR_Word T_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Node_5, (MR_Integer) 1))));
          MR_Box Var_14;
          MR_Word Var_15;
          MR_Word PNode_21;
          MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), F_4, (MR_Integer) 1))));

          Var_14 = func_0(((MR_Box) (F_4)), H_8);
          Var_15 = mercury__list__map_2_f_0(TypeInfo_for_T_17, TypeInfo_for_U_18, F_4, T_9);
          {
            PNode_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), PNode_21, 0) = Var_14;
            MR_hl_field(MR_mktag(1), PNode_21, 1) = ((MR_Box) (Var_15));
          }
          *AddrOfPNode_20 = PNode_21;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word A_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Node_5, (MR_Integer) 0))));
          MR_Word B_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Node_5, (MR_Integer) 1))));
          MR_Word Var_12;
          MR_Word PNode_6;
          MR_Word * AddrSCCcallarg13_19;
          MR_Word next_value_of_Node_5;
          MR_Word * next_value_of_AddrOfPNode_20;

          Var_12 = mercury__cord__map_node_2_f_0(TypeInfo_for_T_17, TypeInfo_for_U_18, F_4, A_10);
          {
            PNode_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), PNode_6, 0) = ((MR_Box) (Var_12));
            MR_hl_field(MR_mktag(2), PNode_6, 1) = NULL;
          }
          AddrSCCcallarg13_19 = (MR_Word *) (&(MR_hl_field(MR_mktag(2), PNode_6, (MR_Integer) 1)));
          *AddrOfPNode_20 = PNode_6;
          // direct tailcall eliminated
          ;
          next_value_of_Node_5 = B_11;
          next_value_of_AddrOfPNode_20 = AddrSCCcallarg13_19;
          Node_5 = next_value_of_Node_5;
          AddrOfPNode_20 = next_value_of_AddrOfPNode_20;
          continue;
        }
        break;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__cord__map_node_2_f_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word TypeInfo_for_U_18,
  MR_Word F_4,
  MR_Word Node_5)
{
  MR_Word PNode_6;

  switch (MR_tag((MR_Word) Node_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Box X_7 = (MR_hl_field(MR_mktag(0), Node_5, (MR_Integer) 0));
        MR_Box Var_16;
        MR_Box MR_CALL (* func_1)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), F_4, (MR_Integer) 1))));

        Var_16 = func_1(((MR_Box) (F_4)), X_7);
        {
          PNode_6 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), PNode_6, 0) = Var_16;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Box H_8 = (MR_hl_field(MR_mktag(1), Node_5, (MR_Integer) 0));
        MR_Word T_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Node_5, (MR_Integer) 1))));
        MR_Box Var_14;
        MR_Word Var_15;
        MR_Box MR_CALL (* func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), F_4, (MR_Integer) 1))));

        Var_14 = func_0(((MR_Box) (F_4)), H_8);
        Var_15 = mercury__list__map_2_f_0(TypeInfo_for_T_17, TypeInfo_for_U_18, F_4, T_9);
        {
          PNode_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), PNode_6, 0) = Var_14;
          MR_hl_field(MR_mktag(1), PNode_6, 1) = ((MR_Box) (Var_15));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word A_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Node_5, (MR_Integer) 0))));
        MR_Word B_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Node_5, (MR_Integer) 1))));
        MR_Word Var_12;
        MR_Word * AddrSCCcallarg13_19;

        Var_12 = mercury__cord__map_node_2_f_0(TypeInfo_for_T_17, TypeInfo_for_U_18, F_4, A_10);
        {
          PNode_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), PNode_6, 0) = ((MR_Box) (Var_12));
          MR_hl_field(MR_mktag(2), PNode_6, 1) = NULL;
        }
        AddrSCCcallarg13_19 = (MR_Word *) (&(MR_hl_field(MR_mktag(2), PNode_6, (MR_Integer) 1)));
        mercury__cord__LCMC__func__map_node__1_3_p_0(TypeInfo_for_T_17, TypeInfo_for_U_18, F_4, B_11, AddrSCCcallarg13_19);
      }
      break;
  }
  return PNode_6;
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
    N_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
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
    switch (MR_tag((MR_Word) Node_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *X_3 = (MR_hl_field(MR_mktag(0), Node_4, (MR_Integer) 0));
          cont(cont_env_ptr);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box H_5 = (MR_hl_field(MR_mktag(1), Node_4, (MR_Integer) 0));
          MR_Word T_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Node_4, (MR_Integer) 1))));

          *X_3 = H_5;
          cont(cont_env_ptr);
          mercury__list__member_2_p_1(TypeInfo_for_T_9, X_3, T_6, cont, cont_env_ptr);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word A_7 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Node_4, (MR_Integer) 0))));
          MR_Word B_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Node_4, (MR_Integer) 1))));

          mercury__cord__member_node_2_p_0(TypeInfo_for_T_9, X_3, A_7, cont, cont_env_ptr);
          {
            MR_Word next_value_of_Node_4 = B_8;

            // direct tailcall eliminated
            ;
            Node_4 = next_value_of_Node_4;
            continue;
          }
        }
        break;
    }
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
    MR_Word N_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), C_3, (MR_Integer) 0))));

    mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_110_111_100_101_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_93_95_48_5_p_0(N_20, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, &HeadVar__2_2);
  }
  return HeadVar__2_2;
}

static void MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_110_111_100_101_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_93_95_48_5_p_0(
  MR_Word HeadVar__2_2,
  MR_Word Cs_3,
  MR_Integer STATE_VARIABLE_AccA_0_4,
  MR_Integer * STATE_VARIABLE_AccA_5)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer STATE_VARIABLE_AccA_19_43 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_AccA_0_4 + (MR_Unsigned) 1);

          if ((Cs_3 == (MR_Word) ((MR_Unsigned) 0U)))
            *STATE_VARIABLE_AccA_5 = STATE_VARIABLE_AccA_19_43;
          else
          {
            MR_Word Y_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 0))));
            MR_Word Ys_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 1))));
            MR_Word next_value_of_HeadVar__2_2 = Y_32;
            MR_Word next_value_of_Cs_3 = Ys_33;
            MR_Integer next_value_of_STATE_VARIABLE_AccA_0_4 = STATE_VARIABLE_AccA_19_43;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            Cs_3 = next_value_of_Cs_3;
            STATE_VARIABLE_AccA_0_4 = next_value_of_STATE_VARIABLE_AccA_0_4;
            continue;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box H_11 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Word T_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_18;
          MR_Integer STATE_VARIABLE_AccA_19_19;

          {
            Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_18, 0) = H_11;
            MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (T_12));
          }
          mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__list_0(Var_18, STATE_VARIABLE_AccA_0_4, &STATE_VARIABLE_AccA_19_19);
          if ((Cs_3 == (MR_Word) ((MR_Unsigned) 0U)))
            *STATE_VARIABLE_AccA_5 = STATE_VARIABLE_AccA_19_19;
          else
          {
            MR_Word Y_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 0))));
            MR_Word Ys_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Cs_3, (MR_Integer) 1))));
            MR_Word next_value_of_HeadVar__2_2 = Y_13;
            MR_Word next_value_of_Cs_3 = Ys_14;
            MR_Integer next_value_of_STATE_VARIABLE_AccA_0_4 = STATE_VARIABLE_AccA_19_19;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            Cs_3 = next_value_of_Cs_3;
            STATE_VARIABLE_AccA_0_4 = next_value_of_STATE_VARIABLE_AccA_0_4;
            continue;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word A_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
          MR_Word B_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
          MR_Word Var_28;
          MR_Word next_value_of_HeadVar__2_2;
          MR_Word next_value_of_Cs_3;

          {
            Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (B_23));
            MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Cs_3));
          }
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = A_22;
          next_value_of_Cs_3 = Var_28;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          Cs_3 = next_value_of_Cs_3;
          continue;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__list_0(
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
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer Var_13 = (MR_Integer) ((MR_Unsigned) HeadVar__3_3 + (MR_Unsigned) 1);
      MR_Word next_value_of_HeadVar__2_2 = Var_10;
      MR_Integer next_value_of_HeadVar__3_3 = Var_13;

      // direct tailcall eliminated
      ;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
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
    N_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
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
    switch (MR_tag((MR_Word) Node_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Last_4 = (MR_hl_field(MR_mktag(0), Node_3, (MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Box Head_5 = (MR_hl_field(MR_mktag(1), Node_3, (MR_Integer) 0));
          MR_Word Tail_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Node_3, (MR_Integer) 1))));

          if ((Tail_6 == (MR_Word) ((MR_Unsigned) 0U)))
            *Last_4 = Head_5;
          else
            mercury__list__det_last_2_p_0(TypeInfo_for_T_11, Tail_6, Last_4);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word B_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Node_3, (MR_Integer) 1))));
          MR_Word next_value_of_Node_3 = B_10;

          // direct tailcall eliminated
          ;
          Node_3 = next_value_of_Node_3;
          continue;
        }
        break;
    }
    break;
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
    N_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
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
    switch (MR_tag((MR_Word) Node_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *Head_4 = (MR_hl_field(MR_mktag(0), Node_3, (MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        *Head_4 = (MR_hl_field(MR_mktag(1), Node_3, (MR_Integer) 0));
        break;
      case (MR_Integer) 2:
        {
          MR_Word A_6 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Node_3, (MR_Integer) 0))));
          MR_Word next_value_of_Node_3 = A_6;

          // direct tailcall eliminated
          ;
          Node_3 = next_value_of_Node_3;
          continue;
        }
        break;
    }
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
    N_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
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
  switch (MR_tag((MR_Word) Node_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Last_6 = (MR_hl_field(MR_mktag(0), Node_4, (MR_Integer) 0));
        *AllButLast_5 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Box H_7 = (MR_hl_field(MR_mktag(1), Node_4, (MR_Integer) 0));
        MR_Word T_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Node_4, (MR_Integer) 1))));
        MR_Word AllButLastList_9;

        mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_105_115_116_95_108_97_115_116_95_95_91_49_93_95_48_4_p_0(H_7, T_8, &AllButLastList_9, Last_6);
        if ((AllButLastList_9 == (MR_Word) ((MR_Unsigned) 0U)))
          *AllButLast_5 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Box AllButLastHead_10 = (MR_hl_field(MR_mktag(1), AllButLastList_9, (MR_Integer) 0));
          MR_Word AllButLastTail_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AllButLastList_9, (MR_Integer) 1))));
          MR_Word Var_16;

          {
            Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_16, 0) = AllButLastHead_10;
            MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (AllButLastTail_11));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *AllButLast_5 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_16));
          }
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word A_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Node_4, (MR_Integer) 0))));
        MR_Word B0_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Node_4, (MR_Integer) 1))));
        MR_Word B_14;
        MR_Word Var_15;

        mercury__cord__split_last_node_3_p_0(TypeInfo_for_T_17, B0_13, &B_14, Last_6);
        {
          Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (A_12));
        }
        *AllButLast_5 = mercury__cord__f_43_43_2_f_0(TypeInfo_for_T_17, Var_15, B_14);
      }
      break;
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
    MR_Box H_7 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
    MR_Word T_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
    MR_Word * AddrAllButLast0_13;

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = Prev_1;
      MR_hl_field(MR_mktag(1), base, 1) = NULL;
    }
    AddrAllButLast0_13 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__3_3, (MR_Integer) 1)));
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
      MR_Box H_7 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Word T_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word * AddrAllButLast0_13;
      MR_Word HeadVar__3_15;
      MR_Box next_value_of_Prev_1;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_14;

      {
        HeadVar__3_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_15, 0) = Prev_1;
        MR_hl_field(MR_mktag(1), HeadVar__3_15, 1) = NULL;
      }
      AddrAllButLast0_13 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__3_15, (MR_Integer) 1)));
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
    N_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
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
  switch (MR_tag((MR_Word) Node_4)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Head_5 = (MR_hl_field(MR_mktag(0), Node_4, (MR_Integer) 0));
        *Tail_6 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word T_8;

        *Head_5 = (MR_hl_field(MR_mktag(1), Node_4, (MR_Integer) 0));
        T_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Node_4, (MR_Integer) 1))));
        if ((T_8 == (MR_Word) ((MR_Unsigned) 0U)))
          *Tail_6 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Box TH_9 = (MR_hl_field(MR_mktag(1), T_8, (MR_Integer) 0));
          MR_Word TT_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), T_8, (MR_Integer) 1))));
          MR_Word Var_16;

          {
            Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_16, 0) = TH_9;
            MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (TT_10));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Tail_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_16));
          }
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word A0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Node_4, (MR_Integer) 0))));
        MR_Word B_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Node_4, (MR_Integer) 1))));
        MR_Word AC_13;

        mercury__cord__head_tail_node_3_p_0(TypeInfo_for_T_17, A0_11, Head_5, &AC_13);
        if ((AC_13 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Tail_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (B_12));
          }
        else
        {
          MR_Word A_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), AC_13, (MR_Integer) 0))));
          MR_Word Var_15;

          {
            Var_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), Var_15, 0) = ((MR_Box) (A_14));
            MR_hl_field(MR_mktag(2), Var_15, 1) = ((MR_Box) (B_12));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Tail_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_15));
          }
        }
      }
      break;
  }
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
    MR_hl_field(MR_mktag(0), TypeInfo_8_8, 0) = ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1));
    MR_hl_field(MR_mktag(0), TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_6));
  }
  mercury__list__reverse_2_p_0(TypeInfo_8_8, (MR_Word) (Cords_3), &conv0_RevCords_5);
  RevCords_5 = (MR_Word) (conv0_RevCords_5);
  List_4 = mercury__cord__rev_cord_list_to_list_1_f_0(TypeInfo_for_T_6, RevCords_5);
  return List_4;
}

MR_Word MR_CALL 
mercury__cord__rev_cord_list_to_list_1_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word RevCords_3)
{
  MR_Word List_4;

  mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__list_0(TypeInfo_for_T_7, RevCords_3, (MR_Word) ((MR_Unsigned) 0U), &List_4);
  return List_4;
}

static void MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__list_0(
  MR_Word Var_27,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_13;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;

      if ((Var_9 == (MR_Word) ((MR_Unsigned) 0U)))
        Var_13 = HeadVar__3_3;
      else
      {
        MR_Word N_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_9, (MR_Integer) 0))));
        MR_Word Var_52;

        {
          Var_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_52, 0) = ((MR_Box) (N_50));
          MR_hl_field(MR_mktag(1), Var_52, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Var_13 = mercury__cord__to_list_2_2_f_0(Var_27, Var_52, HeadVar__3_3);
      }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_10;
      next_value_of_HeadVar__3_3 = Var_13;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
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
    MR_hl_field(MR_mktag(0), TypeInfo_8_8, 0) = ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1));
    MR_hl_field(MR_mktag(0), TypeInfo_8_8, 1) = ((MR_Box) (TypeInfo_for_T_6));
  }
  mercury__list__reverse_2_p_0(TypeInfo_8_8, (MR_Word) (Cords_3), &conv0_RevCords_5);
  RevCords_5 = (MR_Word) (conv0_RevCords_5);
  Cord_4 = mercury__cord__rev_cord_list_to_cord_1_f_0(TypeInfo_for_T_6, RevCords_5);
  return Cord_4;
}

void MR_CALL 
mercury__cord__snoc_3_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Box X_4,
  MR_Word STATE_VARIABLE_C_0_6,
  MR_Word * STATE_VARIABLE_C_7)
{
  if ((STATE_VARIABLE_C_0_6 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_16;

    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = X_4;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_C_7 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_16));
    }
  }
  else
  {
    MR_Word N_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_C_0_6, (MR_Integer) 0))));
    MR_Word Var_14;
    MR_Word Var_15;

    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = X_4;
    }
    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_14, 0) = ((MR_Box) (N_13));
      MR_hl_field(MR_mktag(2), Var_14, 1) = ((MR_Box) (Var_15));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_C_7 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_14));
    }
  }
}

MR_Word MR_CALL 
mercury__cord__snoc_2_f_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word C_4,
  MR_Box X_5)
{
  MR_Word CX_6;

  if ((C_4 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_10;

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = X_5;
    }
    {
      CX_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), CX_6, 0) = ((MR_Box) (Var_10));
    }
  }
  else
  {
    MR_Word N_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), C_4, (MR_Integer) 0))));
    MR_Word Var_8;
    MR_Word Var_9;

    {
      Var_9 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_9, 0) = X_5;
    }
    {
      Var_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_8, 0) = ((MR_Box) (N_7));
      MR_hl_field(MR_mktag(2), Var_8, 1) = ((MR_Box) (Var_9));
    }
    {
      CX_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), CX_6, 0) = ((MR_Box) (Var_8));
    }
  }
  return CX_6;
}

void MR_CALL 
mercury__cord__cons_3_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Box X_4,
  MR_Word STATE_VARIABLE_C_0_6,
  MR_Word * STATE_VARIABLE_C_7)
{
  if ((STATE_VARIABLE_C_0_6 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_16;

    {
      Var_16 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_16, 0) = X_4;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_C_7 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_16));
    }
  }
  else
  {
    MR_Word N_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_C_0_6, (MR_Integer) 0))));
    MR_Word Var_14;
    MR_Word Var_15;

    {
      Var_15 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_15, 0) = X_4;
    }
    {
      Var_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_14, 0) = ((MR_Box) (Var_15));
      MR_hl_field(MR_mktag(2), Var_14, 1) = ((MR_Box) (N_13));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *STATE_VARIABLE_C_7 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_14));
    }
  }
}

MR_Word MR_CALL 
mercury__cord__cons_2_f_0(
  MR_Word TypeInfo_for_T_11,
  MR_Box X_4,
  MR_Word C_5)
{
  MR_Word XC_6;

  if ((C_5 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word Var_10;

    {
      Var_10 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_10, 0) = X_4;
    }
    {
      XC_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), XC_6, 0) = ((MR_Box) (Var_10));
    }
  }
  else
  {
    MR_Word N_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), C_5, (MR_Integer) 0))));
    MR_Word Var_8;
    MR_Word Var_9;

    {
      Var_9 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_9, 0) = X_4;
    }
    {
      Var_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_8, 0) = ((MR_Box) (Var_9));
      MR_hl_field(MR_mktag(2), Var_8, 1) = ((MR_Box) (N_7));
    }
    {
      XC_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), XC_6, 0) = ((MR_Box) (Var_8));
    }
  }
  return XC_6;
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
    MR_Word C0_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

    HeadVar__2_2 = mercury__cord__condense_2_1_f_0(TypeInfo_for_T_4, C0_3);
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__cord__condense_2_1_f_0(
  MR_Word TypeInfo_for_T_11,
  MR_Word HeadVar__1_1)
{
  MR_Word HeadVar__2_2;

  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      break;
    case (MR_Integer) 1:
      {
        MR_Word TypeInfo_8_16;
        MR_Word C_4 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
        MR_Word L_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
        MR_Word Var_6;
        MR_Word RevCords_14;
        MR_Word conv0_RevCords_14;

        {
          TypeInfo_8_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_8_16, 0) = ((MR_Box) (&mercury__cord__cord__type_ctor_info_cord_1));
          MR_hl_field(MR_mktag(0), TypeInfo_8_16, 1) = ((MR_Box) (TypeInfo_for_T_11));
        }
        mercury__list__reverse_2_p_0(TypeInfo_8_16, (MR_Word) (L_5), &conv0_RevCords_14);
        RevCords_14 = (MR_Word) (conv0_RevCords_14);
        Var_6 = mercury__cord__rev_cord_list_to_cord_1_f_0(TypeInfo_for_T_11, RevCords_14);
        HeadVar__2_2 = mercury__cord__f_43_43_2_f_0(TypeInfo_for_T_11, C_4, Var_6);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Left0_7 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
        MR_Word Right0_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
        MR_Word Left_9;
        MR_Word Right_10;

        Left_9 = mercury__cord__condense_2_1_f_0(TypeInfo_for_T_11, Left0_7);
        Right_10 = mercury__cord__condense_2_1_f_0(TypeInfo_for_T_11, Right0_8);
        HeadVar__2_2 = mercury__cord__f_43_43_2_f_0(TypeInfo_for_T_11, Left_9, Right_10);
      }
      break;
  }
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__cord__rev_cord_list_to_cord_1_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word RevCords_3)
{
  MR_Word Cord_4;

  mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__list_0(TypeInfo_for_T_7, RevCords_3, (MR_Word) ((MR_Unsigned) 0U), &Cord_4);
  return Cord_4;
}

static void MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__list_0(
  MR_Word Var_27,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Word Var_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word Var_13;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;

      Var_13 = mercury__cord__f_43_43_2_f_0(Var_27, Var_9, HeadVar__3_3);
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_10;
      next_value_of_HeadVar__3_3 = Var_13;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
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
    MR_Word Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), A_4, (MR_Integer) 0))));

    if ((B_5 == (MR_Word) ((MR_Unsigned) 0U)))
      C_6 = A_4;
    else
    {
      MR_Word BN_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), B_5, (MR_Integer) 0))));
      MR_Word Var_10;

      {
        Var_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(2), Var_10, 0) = ((MR_Box) (Var_12));
        MR_hl_field(MR_mktag(2), Var_10, 1) = ((MR_Box) (BN_9));
      }
      {
        C_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), C_6, 0) = ((MR_Box) (Var_10));
      }
    }
  }
  return C_6;
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
    MR_Word N_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Var_4;

    {
      Var_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_4, 0) = ((MR_Box) (N_3));
      MR_hl_field(MR_mktag(1), Var_4, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    HeadVar__2_2 = mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_111_95_114_101_118_95_108_105_115_116_95_50_95_95_91_49_93_95_48_2_f_0(Var_4, (MR_Word) ((MR_Unsigned) 0U));
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
    MR_Word N_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), C_3, (MR_Integer) 0))));
    MR_Word Var_6;

    {
      Var_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_6, 0) = ((MR_Box) (N_5));
      MR_hl_field(MR_mktag(1), Var_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    HeadVar__2_2 = mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_111_95_114_101_118_95_108_105_115_116_95_50_95_95_91_49_93_95_48_2_f_0(Var_6, (MR_Word) ((MR_Unsigned) 0U));
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_116_111_95_114_101_118_95_108_105_115_116_95_50_95_95_91_49_93_95_48_2_f_0(
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
      MR_Word N_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Ns_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) N_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Box X_9 = (MR_hl_field(MR_mktag(0), N_5, (MR_Integer) 0));
            MR_Word Var_18;
            MR_Word next_value_of_HeadVar__1_1;
            MR_Word next_value_of_HeadVar__2_2;

            {
              Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_18, 0) = X_9;
              MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (HeadVar__2_2));
            }
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__1_1 = Ns_6;
            next_value_of_HeadVar__2_2 = Var_18;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            continue;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box H_10 = (MR_hl_field(MR_mktag(1), N_5, (MR_Integer) 0));
            MR_Word T_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), N_5, (MR_Integer) 1))));
            MR_Word Var_16;
            MR_Word Var_17;
            MR_Word next_value_of_HeadVar__1_1;
            MR_Word next_value_of_HeadVar__2_2;

            {
              Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_17, 0) = H_10;
              MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (HeadVar__2_2));
            }
            Var_16 = mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_105_115_116_95_114_101_118_101_114_115_101_95_50_95_95_91_49_93_95_48_2_f_0(T_11, Var_17);
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__1_1 = Ns_6;
            next_value_of_HeadVar__2_2 = Var_16;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            continue;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word A_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), N_5, (MR_Integer) 0))));
            MR_Word B_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), N_5, (MR_Integer) 1))));
            MR_Word Var_14;
            MR_Word Var_15;
            MR_Word next_value_of_HeadVar__1_1;

            {
              Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (B_13));
              MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) (Ns_6));
            }
            {
              Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (A_12));
              MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (Var_15));
            }
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__1_1 = Var_14;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
          break;
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
      MR_Box X_5 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      MR_Word Xs_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Var_8;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      {
        Var_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_8, 0) = X_5;
        MR_hl_field(MR_mktag(1), Var_8, 1) = ((MR_Box) (HeadVar__2_2));
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
    MR_Word N_3 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    MR_Word Var_4;

    {
      Var_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_4, 0) = ((MR_Box) (N_3));
      MR_hl_field(MR_mktag(1), Var_4, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
    MR_Word N_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), C_3, (MR_Integer) 0))));
    MR_Word Var_6;

    {
      Var_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_6, 0) = ((MR_Box) (N_5));
      MR_hl_field(MR_mktag(1), Var_6, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    HeadVar__2_2 = mercury__cord__to_list_2_2_f_0(TypeInfo_for_T_4, Var_6, (MR_Word) ((MR_Unsigned) 0U));
  }
  return HeadVar__2_2;
}

static MR_Word MR_CALL 
mercury__cord__to_list_2_2_f_0(
  MR_Word TypeInfo_for_T_19,
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
      MR_Word N_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Ns_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) N_5)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Box X_9 = (MR_hl_field(MR_mktag(0), N_5, (MR_Integer) 0));
            MR_Word Var_18;
            MR_Word next_value_of_HeadVar__1_1;
            MR_Word next_value_of_HeadVar__2_2;

            {
              Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_18, 0) = X_9;
              MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (HeadVar__2_2));
            }
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__1_1 = Ns_6;
            next_value_of_HeadVar__2_2 = Var_18;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            continue;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box H_10 = (MR_hl_field(MR_mktag(1), N_5, (MR_Integer) 0));
            MR_Word T_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), N_5, (MR_Integer) 1))));
            MR_Word Var_16;
            MR_Word Var_17;
            MR_Word next_value_of_HeadVar__1_1;
            MR_Word next_value_of_HeadVar__2_2;

            mercury__list__append_3_p_1(TypeInfo_for_T_19, T_11, HeadVar__2_2, &Var_17);
            {
              Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_16, 0) = H_10;
              MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (Var_17));
            }
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__1_1 = Ns_6;
            next_value_of_HeadVar__2_2 = Var_16;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            continue;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word A_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), N_5, (MR_Integer) 0))));
            MR_Word B_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), N_5, (MR_Integer) 1))));
            MR_Word Var_14;
            MR_Word Var_15;
            MR_Word next_value_of_HeadVar__1_1;

            {
              Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (A_12));
              MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) (Ns_6));
            }
            {
              Var_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_14, 0) = ((MR_Box) (B_13));
              MR_hl_field(MR_mktag(1), Var_14, 1) = ((MR_Box) (Var_15));
            }
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__1_1 = Var_14;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
          break;
      }
    }
    return L_3;
    break;
  }
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
    MR_Box H_5 = (MR_hl_field(MR_mktag(1), Xs_3, (MR_Integer) 0));
    MR_Word T_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Xs_3, (MR_Integer) 1))));
    MR_Word Var_7;

    {
      Var_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_7, 0) = H_5;
      MR_hl_field(MR_mktag(1), Var_7, 1) = ((MR_Box) (T_6));
    }
    {
      C_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), C_4, 0) = ((MR_Box) (Var_7));
    }
  }
  return C_4;
}

MR_Word MR_CALL 
mercury__cord__singleton_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Box X_3)
{
  MR_Word HeadVar__2_2;
  MR_Word Var_4;

  {
    Var_4 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(MR_mktag(0), Var_4, 0) = X_3;
  }
  {
    HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Var_4));
  }
  return HeadVar__2_2;
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
