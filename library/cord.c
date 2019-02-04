/*
** Automatically generated from `cord.m'
** by the Mercury compiler,
** version rotd-2017-04-20
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


/* :- module cord. */
/* :- implementation. */

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

static MR_bool MR_CALL 
mercury__cord____Unify____cord_1_0_10001(
  MR_Box mercury__cord__wrapper_arg_1,
  MR_Box mercury__cord__wrapper_arg_2,
  MR_Box mercury__cord__wrapper_arg_3);

static void MR_CALL 
mercury__cord____Compare____cord_1_0_10001(
  MR_Box mercury__cord__wrapper_arg_1,
  MR_Box * mercury__cord__wrapper_arg_2,
  MR_Box mercury__cord__wrapper_arg_3,
  MR_Box mercury__cord__wrapper_arg_4);

static MR_bool MR_CALL 
mercury__cord____Unify____cord_node_1_0_10001(
  MR_Box mercury__cord__wrapper_arg_1,
  MR_Box mercury__cord__wrapper_arg_2,
  MR_Box mercury__cord__wrapper_arg_3);

static void MR_CALL 
mercury__cord____Compare____cord_node_1_0_10001(
  MR_Box mercury__cord__wrapper_arg_1,
  MR_Box * mercury__cord__wrapper_arg_2,
  MR_Box mercury__cord__wrapper_arg_3,
  MR_Box mercury__cord__wrapper_arg_4);

static void MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__list_0(
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Integer mercury__cord__HeadVar__3_3,
  MR_Integer * mercury__cord__HeadVar__4_4);

static void MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_110_111_100_101_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_93_95_48_5_p_0(
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Word mercury__cord__Cs_3,
  MR_Integer mercury__cord__STATE_VARIABLE_Acc_0_4,
  MR_Integer * mercury__cord__STATE_VARIABLE_Acc_5);

static void MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__list_0(
  MR_Word mercury__cord__V_27_27,
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Word mercury__cord__HeadVar__3_3,
  MR_Word * mercury__cord__HeadVar__4_4);

static void MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__list_0(
  MR_Word mercury__cord__V_27_27,
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Word mercury__cord__HeadVar__3_3,
  MR_Word * mercury__cord__HeadVar__4_4);

static void MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
  MR_Word mercury__cord__V_18_18,
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Box mercury__cord__HeadVar__3_3,
  MR_Box * mercury__cord__HeadVar__4_4);

static void MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
  MR_Word mercury__cord__V_18_18,
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Box mercury__cord__HeadVar__3_3,
  MR_Box * mercury__cord__HeadVar__4_4);

static MR_Integer MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_105_115_116_95_108_97_115_116_95_95_91_49_93_95_48_4_p_0(
  MR_Box mercury__cord__Prev_1,
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Word * mercury__cord__HeadVar__3_3,
  MR_Box * mercury__cord__HeadVar__4_4);

static MR_Word MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_105_115_116_95_114_101_118_101_114_115_101_95_50_95_95_91_49_93_95_48_2_f_0(
  MR_Word mercury__cord__HeadVar__1_1,
  MR_Word mercury__cord__HeadVar__2_2);

static MR_Word MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_118_95_108_105_115_116_95_50_95_95_91_49_93_95_48_2_f_0(
  MR_Word mercury__cord__HeadVar__1_1,
  MR_Word mercury__cord__HeadVar__2_2);

static MR_Word MR_CALL 
mercury__cord__list_2_2_f_0(
  MR_Word mercury__cord__TypeInfo_for_T_19,
  MR_Word mercury__cord__HeadVar__1_1,
  MR_Word mercury__cord__HeadVar__2_2);


static /* final */ const MR_Box mercury__cord_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__cord_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__cord_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__cord_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__cord_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__cord_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__cord_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__cord_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
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
#include "version_array.mh"



static const MR_DuFunctorDesc mercury__cord__cord__du_functor_desc_cord_1_0 = {
  (MR_String) "empty_cord",
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

static const MR_FA_PseudoTypeInfo_Struct1 mercury__cord__cord__pti_cord_node_1__pseudo_1 = {
  &mercury__cord__cord__type_ctor_info_cord_node_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_PseudoTypeInfo mercury__cord__cord__field_types_cord_1_1[1] = {
  (MR_PseudoTypeInfo) &mercury__cord__cord__pti_cord_node_1__pseudo_1
};

static const MR_DuFunctorDesc mercury__cord__cord__du_functor_desc_cord_1_1 = {
  (MR_String) "nonempty_cord",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__cord__cord__field_types_cord_1_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__cord__cord__du_stag_ordered_cord_1_0[1] = {
  &mercury__cord__cord__du_functor_desc_cord_1_0
};

static const MR_DuFunctorDescPtr mercury__cord__cord__du_stag_ordered_cord_1_1[1] = {
  &mercury__cord__cord__du_functor_desc_cord_1_1
};

static const MR_DuPtagLayout mercury__cord__cord__du_ptag_ordered_cord_1[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__cord__cord__du_stag_ordered_cord_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__cord__cord__du_stag_ordered_cord_1_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__cord____Unify____cord_1_0_10001)),
  ((MR_Box) (mercury__cord____Compare____cord_1_0_10001)),
  (MR_String) "cord",
  (MR_String) "cord",
  {     mercury__cord__cord__du_name_ordered_cord_1 },
  {     mercury__cord__cord__du_ptag_ordered_cord_1 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__cord__cord__functor_number_map_cord_1
};

static const MR_PseudoTypeInfo mercury__cord__cord__field_types_cord_node_1_0[1] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1
};

static const MR_DuFunctorDesc mercury__cord__cord__du_functor_desc_cord_node_1_0 = {
  (MR_String) "unit_node",
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__cord__cord__field_types_cord_node_1_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__cord__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_PseudoTypeInfo mercury__cord__cord__field_types_cord_node_1_1[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__cord__list__pti_list_1__pseudo_1
};

static const MR_DuFunctorDesc mercury__cord__cord__du_functor_desc_cord_node_1_1 = {
  (MR_String) "list_node",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__cord__cord__field_types_cord_node_1_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__cord__cord__field_types_cord_node_1_2[2] = {
  (MR_PseudoTypeInfo) &mercury__cord__cord__pti_cord_node_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__cord__cord__pti_cord_node_1__pseudo_1
};

static const MR_DuFunctorDesc mercury__cord__cord__du_functor_desc_cord_node_1_2 = {
  (MR_String) "branch_node",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__cord__cord__field_types_cord_node_1_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__cord__cord__du_stag_ordered_cord_node_1_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__cord__cord__du_stag_ordered_cord_node_1_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__cord__cord__du_stag_ordered_cord_node_1_2
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
  (MR_Integer) 17,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__cord____Unify____cord_node_1_0_10001)),
  ((MR_Box) (mercury__cord____Compare____cord_node_1_0_10001)),
  (MR_String) "cord",
  (MR_String) "cord_node",
  {     mercury__cord__cord__du_name_ordered_cord_node_1 },
  {     mercury__cord__cord__du_ptag_ordered_cord_node_1 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__cord__cord__functor_number_map_cord_node_1
};

static MR_bool MR_CALL 
mercury__cord____Unify____cord_1_0_10001(
  MR_Box mercury__cord__wrapper_arg_1,
  MR_Box mercury__cord__wrapper_arg_2,
  MR_Box mercury__cord__wrapper_arg_3)
{
  {
    MR_bool mercury__cord__succeeded;

    {
      mercury__cord__succeeded = mercury__cord____Unify____cord_1_0(((MR_Word) mercury__cord__wrapper_arg_1), ((MR_Word) mercury__cord__wrapper_arg_2), ((MR_Word) mercury__cord__wrapper_arg_3));
    }
    return mercury__cord__succeeded;
  }
}

static void MR_CALL 
mercury__cord____Compare____cord_1_0_10001(
  MR_Box mercury__cord__wrapper_arg_1,
  MR_Box * mercury__cord__wrapper_arg_2,
  MR_Box mercury__cord__wrapper_arg_3,
  MR_Box mercury__cord__wrapper_arg_4)
{
  {
    MR_Word mercury__cord__conv0_HeadVar__1_1;

    {
      mercury__cord____Compare____cord_1_0(((MR_Word) mercury__cord__wrapper_arg_1), &mercury__cord__conv0_HeadVar__1_1, ((MR_Word) mercury__cord__wrapper_arg_3), ((MR_Word) mercury__cord__wrapper_arg_4));
    }
    *mercury__cord__wrapper_arg_2 = ((MR_Box) (mercury__cord__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__cord____Unify____cord_node_1_0_10001(
  MR_Box mercury__cord__wrapper_arg_1,
  MR_Box mercury__cord__wrapper_arg_2,
  MR_Box mercury__cord__wrapper_arg_3)
{
  {
    MR_bool mercury__cord__succeeded;

    {
      mercury__cord__succeeded = mercury__cord____Unify____cord_node_1_0(((MR_Word) mercury__cord__wrapper_arg_1), ((MR_Word) mercury__cord__wrapper_arg_2), ((MR_Word) mercury__cord__wrapper_arg_3));
    }
    return mercury__cord__succeeded;
  }
}

static void MR_CALL 
mercury__cord____Compare____cord_node_1_0_10001(
  MR_Box mercury__cord__wrapper_arg_1,
  MR_Box * mercury__cord__wrapper_arg_2,
  MR_Box mercury__cord__wrapper_arg_3,
  MR_Box mercury__cord__wrapper_arg_4)
{
  {
    MR_Word mercury__cord__conv0_HeadVar__1_1;

    {
      mercury__cord____Compare____cord_node_1_0(((MR_Word) mercury__cord__wrapper_arg_1), &mercury__cord__conv0_HeadVar__1_1, ((MR_Word) mercury__cord__wrapper_arg_3), ((MR_Word) mercury__cord__wrapper_arg_4));
    }
    *mercury__cord__wrapper_arg_2 = ((MR_Box) (mercury__cord__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__list_0(
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Integer mercury__cord__HeadVar__3_3,
  MR_Integer * mercury__cord__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__cord__succeeded;

        if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__cord__HeadVar__4_4 = mercury__cord__HeadVar__3_3;
        else
          {
            MR_Word mercury__cord__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
            MR_Integer mercury__cord__V_15_13 = (mercury__cord__HeadVar__3_3 + (MR_Integer) 1);
            MR_Box mercury__cord__V_10_9 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));

            /* direct tailcall eliminated */
            {
              MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__V_11_10;
              MR_Integer mercury__cord__HeadVar__3__tmp_copy_3 = mercury__cord__V_15_13;

              mercury__cord__HeadVar__3_3 = mercury__cord__HeadVar__3__tmp_copy_3;
              mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_110_111_100_101_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_93_95_48_5_p_0(
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Word mercury__cord__Cs_3,
  MR_Integer mercury__cord__STATE_VARIABLE_Acc_0_4,
  MR_Integer * mercury__cord__STATE_VARIABLE_Acc_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__cord__succeeded;

        switch (MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Integer mercury__cord__STATE_VARIABLE_Acc_19_43 = (mercury__cord__STATE_VARIABLE_Acc_0_4 + (MR_Integer) 1);

              if ((mercury__cord__Cs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                *mercury__cord__STATE_VARIABLE_Acc_5 = mercury__cord__STATE_VARIABLE_Acc_19_43;
              else
                {
                  MR_Word mercury__cord__Y_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 0)));
                  MR_Word mercury__cord__Ys_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__Y_32;
                    MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__Ys_33;
                    MR_Integer mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4 = mercury__cord__STATE_VARIABLE_Acc_19_43;

                    mercury__cord__STATE_VARIABLE_Acc_0_4 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4;
                    mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
                    mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
                  }
                  continue;
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__cord__H_11 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
              MR_Word mercury__cord__T_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
              MR_Word mercury__cord__V_18_18;
              MR_Integer mercury__cord__STATE_VARIABLE_Acc_19_19;

              {
                mercury__cord__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__cord__V_18_18, 0) = mercury__cord__H_11;
                MR_hl_field(MR_mktag(1), mercury__cord__V_18_18, 1) = ((MR_Box) (mercury__cord__T_12));
              }
              {
                mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_95_95_104_111_49_50_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_in__list_0(mercury__cord__V_18_18, mercury__cord__STATE_VARIABLE_Acc_0_4, &mercury__cord__STATE_VARIABLE_Acc_19_19);
              }
              if ((mercury__cord__Cs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                *mercury__cord__STATE_VARIABLE_Acc_5 = mercury__cord__STATE_VARIABLE_Acc_19_19;
              else
                {
                  MR_Word mercury__cord__Y_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 0)));
                  MR_Word mercury__cord__Ys_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__Y_13;
                    MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__Ys_14;
                    MR_Integer mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4 = mercury__cord__STATE_VARIABLE_Acc_19_19;

                    mercury__cord__STATE_VARIABLE_Acc_0_4 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4;
                    mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
                    mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
                  }
                  continue;
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__cord__A_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
              MR_Word mercury__cord__B_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
              MR_Word mercury__cord__V_28_28;

              {
                mercury__cord__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__cord__V_28_28, 0) = ((MR_Box) (mercury__cord__B_23));
                MR_hl_field(MR_mktag(1), mercury__cord__V_28_28, 1) = ((MR_Box) (mercury__cord__Cs_3));
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__A_22;
                MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__V_28_28;

                mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
                mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
              }
              continue;
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__list_0(
  MR_Word mercury__cord__V_27_27,
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Word mercury__cord__HeadVar__3_3,
  MR_Word * mercury__cord__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__cord__succeeded;

        if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__cord__HeadVar__4_4 = mercury__cord__HeadVar__3_3;
        else
          {
            MR_Word mercury__cord__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__cord__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mercury__cord__V_15_13;

            if ((mercury__cord__V_10_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              mercury__cord__V_15_13 = mercury__cord__HeadVar__3_3;
            else
              {
                MR_Word mercury__cord__N_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__V_10_9, (MR_Integer) 0)));
                MR_Word mercury__cord__V_52_52;
                MR_Word mercury__cord__V_53_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                {
                  mercury__cord__V_52_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__cord__V_52_52, 0) = ((MR_Box) (mercury__cord__N_50));
                  MR_hl_field(MR_mktag(1), mercury__cord__V_52_52, 1) = ((MR_Box) (mercury__cord__V_53_53));
                }
                {
                  mercury__cord__V_15_13 = mercury__cord__list_2_2_f_0(mercury__cord__V_27_27, mercury__cord__V_52_52, mercury__cord__HeadVar__3_3);
                }
              }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__V_11_10;
              MR_Word mercury__cord__HeadVar__3__tmp_copy_3 = mercury__cord__V_15_13;

              mercury__cord__HeadVar__3_3 = mercury__cord__HeadVar__3__tmp_copy_3;
              mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__list_0(
  MR_Word mercury__cord__V_27_27,
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Word mercury__cord__HeadVar__3_3,
  MR_Word * mercury__cord__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__cord__succeeded;

        if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__cord__HeadVar__4_4 = mercury__cord__HeadVar__3_3;
        else
          {
            MR_Word mercury__cord__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__cord__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mercury__cord__V_15_13;

            {
              mercury__cord__V_15_13 = mercury__cord__f_43_43_2_f_0(mercury__cord__V_27_27, mercury__cord__V_10_9, mercury__cord__HeadVar__3_3);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__V_11_10;
              MR_Word mercury__cord__HeadVar__3__tmp_copy_3 = mercury__cord__V_15_13;

              mercury__cord__HeadVar__3_3 = mercury__cord__HeadVar__3__tmp_copy_3;
              mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
  MR_Word mercury__cord__V_18_18,
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Box mercury__cord__HeadVar__3_3,
  MR_Box * mercury__cord__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__cord__succeeded;

        if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__cord__HeadVar__4_4 = mercury__cord__HeadVar__3_3;
        else
          {
            MR_Box mercury__cord__V_10_9 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
            MR_Word mercury__cord__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
            MR_Box mercury__cord__V_15_13;
            MR_Box MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__cord__V_18_18, (MR_Integer) 1)));

            {
              mercury__cord__V_15_13 = mercury__cord__func_0(((MR_Box) mercury__cord__V_18_18), mercury__cord__V_10_9, mercury__cord__HeadVar__3_3);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__V_11_10;
              MR_Box mercury__cord__HeadVar__3__tmp_copy_3 = mercury__cord__V_15_13;

              mercury__cord__HeadVar__3_3 = mercury__cord__HeadVar__3__tmp_copy_3;
              mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
  MR_Word mercury__cord__V_18_18,
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Box mercury__cord__HeadVar__3_3,
  MR_Box * mercury__cord__HeadVar__4_4)
{
  {
    MR_bool mercury__cord__succeeded;

    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__cord__HeadVar__4_4 = mercury__cord__HeadVar__3_3;
    else
      {
        MR_Box mercury__cord__V_10_9 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
        MR_Word mercury__cord__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
        MR_Box mercury__cord__V_15_13;
        MR_Box MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box);

        {
          mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(mercury__cord__V_18_18, mercury__cord__V_11_10, mercury__cord__HeadVar__3_3, &mercury__cord__V_15_13);
        }
        mercury__cord__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__cord__V_18_18, (MR_Integer) 1)));
        {
          *mercury__cord__HeadVar__4_4 = mercury__cord__func_0(((MR_Box) mercury__cord__V_18_18), mercury__cord__V_10_9, mercury__cord__V_15_13);
        }
      }
  }
}

static MR_Integer MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    MR_bool mercury__cord__succeeded;

    return (MR_Integer) 1200;
  }
}

static void MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_105_115_116_95_108_97_115_116_95_95_91_49_93_95_48_4_p_0(
  MR_Box mercury__cord__Prev_1,
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Word * mercury__cord__HeadVar__3_3,
  MR_Box * mercury__cord__HeadVar__4_4)
{
  {
    MR_bool mercury__cord__succeeded;

    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__cord__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *mercury__cord__HeadVar__4_4 = mercury__cord__Prev_1;
      }
    else
      {
        MR_Box mercury__cord__H_7 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
        MR_Word mercury__cord__T_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__cord__AllButLast0_11;

        {
          mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_105_115_116_95_108_97_115_116_95_95_91_49_93_95_48_4_p_0(mercury__cord__H_7, mercury__cord__T_8, &mercury__cord__AllButLast0_11, mercury__cord__HeadVar__4_4);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__cord__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = mercury__cord__Prev_1;
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__cord__AllButLast0_11));
        }
      }
  }
}

static MR_Word MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_105_115_116_95_114_101_118_101_114_115_101_95_50_95_95_91_49_93_95_48_2_f_0(
  MR_Word mercury__cord__HeadVar__1_1,
  MR_Word mercury__cord__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__cord__succeeded;
        MR_Word mercury__cord__HeadVar__3_3;

        if ((mercury__cord__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__cord__HeadVar__3_3 = mercury__cord__HeadVar__2_2;
        else
          {
            MR_Box mercury__cord__X_5 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 0));
            MR_Word mercury__cord__Xs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mercury__cord__V_8_8;

            {
              mercury__cord__V_8_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__cord__V_8_8, 0) = mercury__cord__X_5;
              MR_hl_field(MR_mktag(1), mercury__cord__V_8_8, 1) = ((MR_Box) (mercury__cord__HeadVar__2_2));
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__cord__HeadVar__1__tmp_copy_1 = mercury__cord__Xs_6;
              MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__V_8_8;

              mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
              mercury__cord__HeadVar__1_1 = mercury__cord__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
        return mercury__cord__HeadVar__3_3;
      }
      break;
    }
}

static MR_Word MR_CALL 
mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_118_95_108_105_115_116_95_50_95_95_91_49_93_95_48_2_f_0(
  MR_Word mercury__cord__HeadVar__1_1,
  MR_Word mercury__cord__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__cord__succeeded;
        MR_Word mercury__cord__L_3;

        if ((mercury__cord__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__cord__L_3 = mercury__cord__HeadVar__2_2;
        else
          {
            MR_Word mercury__cord__N_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__cord__Ns_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 1)));

            switch (MR_tag((MR_Word) mercury__cord__N_5)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Box mercury__cord__X_9 = (MR_hl_field(MR_mktag(0), mercury__cord__N_5, (MR_Integer) 0));
                  MR_Word mercury__cord__V_18_18;

                  {
                    mercury__cord__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__cord__V_18_18, 0) = mercury__cord__X_9;
                    MR_hl_field(MR_mktag(1), mercury__cord__V_18_18, 1) = ((MR_Box) (mercury__cord__HeadVar__2_2));
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__cord__HeadVar__1__tmp_copy_1 = mercury__cord__Ns_6;
                    MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__V_18_18;

                    mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
                    mercury__cord__HeadVar__1_1 = mercury__cord__HeadVar__1__tmp_copy_1;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Box mercury__cord__H_10 = (MR_hl_field(MR_mktag(1), mercury__cord__N_5, (MR_Integer) 0));
                  MR_Word mercury__cord__T_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__N_5, (MR_Integer) 1)));
                  MR_Word mercury__cord__V_16_16;
                  MR_Word mercury__cord__V_17_17;

                  {
                    mercury__cord__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 0) = mercury__cord__H_10;
                    MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 1) = ((MR_Box) (mercury__cord__HeadVar__2_2));
                  }
                  {
                    mercury__cord__V_16_16 = mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_108_105_115_116_95_114_101_118_101_114_115_101_95_50_95_95_91_49_93_95_48_2_f_0(mercury__cord__T_11, mercury__cord__V_17_17);
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__cord__HeadVar__1__tmp_copy_1 = mercury__cord__Ns_6;
                    MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__V_16_16;

                    mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
                    mercury__cord__HeadVar__1_1 = mercury__cord__HeadVar__1__tmp_copy_1;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word mercury__cord__A_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__N_5, (MR_Integer) 0)));
                  MR_Word mercury__cord__B_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__N_5, (MR_Integer) 1)));
                  MR_Word mercury__cord__V_14_14;
                  MR_Word mercury__cord__V_15_15;

                  {
                    mercury__cord__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__cord__V_15_15, 0) = ((MR_Box) (mercury__cord__B_13));
                    MR_hl_field(MR_mktag(1), mercury__cord__V_15_15, 1) = ((MR_Box) (mercury__cord__Ns_6));
                  }
                  {
                    mercury__cord__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__cord__V_14_14, 0) = ((MR_Box) (mercury__cord__A_12));
                    MR_hl_field(MR_mktag(1), mercury__cord__V_14_14, 1) = ((MR_Box) (mercury__cord__V_15_15));
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__cord__HeadVar__1__tmp_copy_1 = mercury__cord__V_14_14;

                    mercury__cord__HeadVar__1_1 = mercury__cord__HeadVar__1__tmp_copy_1;
                  }
                  continue;
                }
                break;
            }
          }
        return mercury__cord__L_3;
      }
      break;
    }
}

void MR_CALL 
mercury__cord____Compare____cord_node_1_0(
  MR_Word mercury__cord__TypeInfo_for_T_38,
  MR_Word * mercury__cord__HeadVar__1_1,
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Word mercury__cord__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__cord__succeeded;
        MR_Integer mercury__cord__CastX_36 = (MR_Integer) mercury__cord__HeadVar__2_2;
        MR_Integer mercury__cord__CastY_37 = (MR_Integer) mercury__cord__HeadVar__3_3;

        mercury__cord__succeeded = (mercury__cord__CastX_36 == mercury__cord__CastY_37);
        if (mercury__cord__succeeded)
          *mercury__cord__HeadVar__1_1 = (MR_Integer) 0;
        else
          switch (MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Box mercury__cord__V_49_49 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));

                switch (MR_tag((MR_Word) mercury__cord__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    {
                      MR_Box mercury__cord__V_5_5 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__3_3, (MR_Integer) 0));

                      {
                        mercury__builtin__compare_3_p_0(mercury__cord__TypeInfo_for_T_38, mercury__cord__HeadVar__1_1, mercury__cord__V_49_49, mercury__cord__V_5_5);
                      }
                    }
                    break;
                  case (MR_Integer) 1:
                    *mercury__cord__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *mercury__cord__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word mercury__cord__V_47_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
                MR_Box mercury__cord__V_48_48 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));

                switch (MR_tag((MR_Word) mercury__cord__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__cord__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Box mercury__cord__V_17_17 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__3_3, (MR_Integer) 0));
                      MR_Word mercury__cord__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__3_3, (MR_Integer) 1)));
                      MR_Word mercury__cord__V_19_19;

                      {
                        mercury__builtin__compare_3_p_0(mercury__cord__TypeInfo_for_T_38, &mercury__cord__V_19_19, mercury__cord__V_48_48, mercury__cord__V_17_17);
                      }
                      mercury__cord__succeeded = (mercury__cord__V_19_19 == (MR_Integer) 0);
                      mercury__cord__succeeded = !(mercury__cord__succeeded);
                      if (mercury__cord__succeeded)
                        *mercury__cord__HeadVar__1_1 = mercury__cord__V_19_19;
                      else
                        {
                          mercury__list____Compare____list_1_0(mercury__cord__TypeInfo_for_T_38, mercury__cord__HeadVar__1_1, mercury__cord__V_47_47, mercury__cord__V_18_18);
                        }
                    }
                    break;
                  case (MR_Integer) 2:
                    *mercury__cord__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word mercury__cord__V_45_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
                MR_Word mercury__cord__V_46_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));

                switch (MR_tag((MR_Word) mercury__cord__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__cord__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mercury__cord__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Word mercury__cord__V_33_33 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__3_3, (MR_Integer) 0)));
                      MR_Word mercury__cord__V_34_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__3_3, (MR_Integer) 1)));
                      MR_Word mercury__cord__V_35_35;

                      {
                        mercury__cord____Compare____cord_node_1_0(mercury__cord__TypeInfo_for_T_38, &mercury__cord__V_35_35, mercury__cord__V_46_46, mercury__cord__V_33_33);
                      }
                      mercury__cord__succeeded = (mercury__cord__V_35_35 == (MR_Integer) 0);
                      mercury__cord__succeeded = !(mercury__cord__succeeded);
                      if (mercury__cord__succeeded)
                        *mercury__cord__HeadVar__1_1 = mercury__cord__V_35_35;
                      else
                        {
                          /* direct tailcall eliminated */
                          {
                            MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__V_45_45;
                            MR_Word mercury__cord__HeadVar__3__tmp_copy_3 = mercury__cord__V_34_34;

                            mercury__cord__HeadVar__3_3 = mercury__cord__HeadVar__3__tmp_copy_3;
                            mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
                          }
                          continue;
                        }
                    }
                    break;
                }
              }
              break;
          }
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__cord____Unify____cord_node_1_0(
  MR_Word mercury__cord__TypeInfo_for_T_15,
  MR_Word mercury__cord__HeadVar__1_1,
  MR_Word mercury__cord__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__cord__succeeded;
        MR_Integer mercury__cord__CastX_13 = (MR_Integer) mercury__cord__HeadVar__1_1;
        MR_Integer mercury__cord__CastY_14 = (MR_Integer) mercury__cord__HeadVar__2_2;

        mercury__cord__succeeded = (mercury__cord__CastX_13 == mercury__cord__CastY_14);
        if (mercury__cord__succeeded)
          mercury__cord__succeeded = MR_TRUE;
        else
          switch (MR_tag((MR_Word) mercury__cord__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Box mercury__cord__V_3_3 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__1_1, (MR_Integer) 0));
                MR_Box mercury__cord__V_4_4;

                mercury__cord__succeeded = ((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
                if (mercury__cord__succeeded)
                  {
                    mercury__cord__V_4_4 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
                    {
                      mercury__cord__succeeded = mercury__builtin__unify_2_p_0(mercury__cord__TypeInfo_for_T_15, mercury__cord__V_3_3, mercury__cord__V_4_4);
                    }
                  }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Box mercury__cord__V_5_5 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 0));
                MR_Word mercury__cord__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 1)));
                MR_Box mercury__cord__V_7_7;
                MR_Word mercury__cord__V_8_8;

                mercury__cord__succeeded = ((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
                if (mercury__cord__succeeded)
                  {
                    mercury__cord__V_7_7 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
                    mercury__cord__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
                    {
                      mercury__cord__succeeded = mercury__builtin__unify_2_p_0(mercury__cord__TypeInfo_for_T_15, mercury__cord__V_5_5, mercury__cord__V_7_7);
                    }
                    if (mercury__cord__succeeded)
                      {
                        mercury__cord__succeeded = mercury__list____Unify____list_1_0(mercury__cord__TypeInfo_for_T_15, mercury__cord__V_6_6, mercury__cord__V_8_8);
                      }
                  }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word mercury__cord__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__1_1, (MR_Integer) 0)));
                MR_Word mercury__cord__V_10_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word mercury__cord__V_11_11;
                MR_Word mercury__cord__V_12_12;

                mercury__cord__succeeded = ((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
                if (mercury__cord__succeeded)
                  {
                    mercury__cord__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
                    mercury__cord__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
                    {
                      mercury__cord__succeeded = mercury__cord____Unify____cord_node_1_0(mercury__cord__TypeInfo_for_T_15, mercury__cord__V_9_9, mercury__cord__V_11_11);
                    }
                    if (mercury__cord__succeeded)
                      {
                        /* direct tailcall eliminated */
                        {
                          MR_Word mercury__cord__HeadVar__1__tmp_copy_1 = mercury__cord__V_10_10;
                          MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__V_12_12;

                          mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
                          mercury__cord__HeadVar__1_1 = mercury__cord__HeadVar__1__tmp_copy_1;
                        }
                        continue;
                      }
                  }
              }
              break;
          }
        return mercury__cord__succeeded;
      }
      break;
    }
}

void MR_CALL 
mercury__cord____Compare____cord_1_0(
  MR_Word mercury__cord__TypeInfo_for_T_10,
  MR_Word * mercury__cord__HeadVar__1_1,
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Word mercury__cord__HeadVar__3_3)
{
  {
    MR_bool mercury__cord__succeeded;
    MR_Integer mercury__cord__CastX_8 = (MR_Integer) mercury__cord__HeadVar__2_2;
    MR_Integer mercury__cord__CastY_9 = (MR_Integer) mercury__cord__HeadVar__3_3;

    mercury__cord__succeeded = (mercury__cord__CastX_8 == mercury__cord__CastY_9);
    if (mercury__cord__succeeded)
      *mercury__cord__HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((mercury__cord__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *mercury__cord__HeadVar__1_1 = (MR_Integer) 0;
      else
        *mercury__cord__HeadVar__1_1 = (MR_Integer) 1;
    else
      {
        MR_Word mercury__cord__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));

        if ((mercury__cord__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__cord__HeadVar__1_1 = (MR_Integer) 2;
        else
          {
            MR_Word mercury__cord__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__3_3, (MR_Integer) 0)));

            {
              mercury__cord____Compare____cord_node_1_0(mercury__cord__TypeInfo_for_T_10, mercury__cord__HeadVar__1_1, mercury__cord__V_13_13, mercury__cord__V_7_7);
            }
          }
      }
  }
}

MR_bool MR_CALL 
mercury__cord____Unify____cord_1_0(
  MR_Word mercury__cord__TypeInfo_for_T_9,
  MR_Word mercury__cord__HeadVar__1_1,
  MR_Word mercury__cord__HeadVar__2_2)
{
  {
    MR_bool mercury__cord__succeeded;
    MR_Integer mercury__cord__CastX_7 = (MR_Integer) mercury__cord__HeadVar__1_1;
    MR_Integer mercury__cord__CastY_8 = (MR_Integer) mercury__cord__HeadVar__2_2;

    mercury__cord__succeeded = (mercury__cord__CastX_7 == mercury__cord__CastY_8);
    if (mercury__cord__succeeded)
      mercury__cord__succeeded = MR_TRUE;
    else
    if ((mercury__cord__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Integer mercury__cord__CastX_3 = (MR_Integer) mercury__cord__HeadVar__1_1;
        MR_Integer mercury__cord__CastY_4 = (MR_Integer) mercury__cord__HeadVar__2_2;

        mercury__cord__succeeded = (mercury__cord__CastY_4 == mercury__cord__CastX_3);
      }
    else
      {
        MR_Word mercury__cord__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__cord__V_6_6;

        mercury__cord__succeeded = ((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        if (mercury__cord__succeeded)
          {
            mercury__cord__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
            {
              mercury__cord__succeeded = mercury__cord____Unify____cord_node_1_0(mercury__cord__TypeInfo_for_T_9, mercury__cord__V_5_5, mercury__cord__V_6_6);
            }
          }
      }
    return mercury__cord__succeeded;
  }
}

void MR_CALL 
mercury__cord__map_foldl3_node_9_p_0(
  MR_Word mercury__cord__TypeInfo_for_A_65,
  MR_Word mercury__cord__TypeInfo_for_B_66,
  MR_Word mercury__cord__TypeInfo_for_C_67,
  MR_Word mercury__cord__TypeInfo_for_D_68,
  MR_Word mercury__cord__TypeInfo_for_E_69,
  MR_Word mercury__cord__P_1,
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Word * mercury__cord__HeadVar__3_3,
  MR_Box mercury__cord__STATE_VARIABLE_A_0_4,
  MR_Box * mercury__cord__STATE_VARIABLE_A_5,
  MR_Box mercury__cord__STATE_VARIABLE_B_0_6,
  MR_Box * mercury__cord__STATE_VARIABLE_B_7,
  MR_Box mercury__cord__STATE_VARIABLE_C_0_8,
  MR_Box * mercury__cord__STATE_VARIABLE_C_9)
{
  {
    MR_bool mercury__cord__succeeded;

    switch (MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box mercury__cord__X_11 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
          MR_Box mercury__cord__Y_12;
          void MR_CALL (* mercury__cord__func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

          {
            mercury__cord__func_1(((MR_Box) mercury__cord__P_1), mercury__cord__X_11, &mercury__cord__Y_12, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5, mercury__cord__STATE_VARIABLE_B_0_6, mercury__cord__STATE_VARIABLE_B_7, mercury__cord__STATE_VARIABLE_C_0_8, mercury__cord__STATE_VARIABLE_C_9);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *mercury__cord__HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(0), base, 0) = mercury__cord__Y_12;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box mercury__cord__XH_26 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
          MR_Word mercury__cord__XT_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
          MR_Box mercury__cord__YH_28;
          MR_Word mercury__cord__YT_29;
          MR_Box mercury__cord__STATE_VARIABLE_A_39_39;
          MR_Box mercury__cord__STATE_VARIABLE_B_40_40;
          MR_Box mercury__cord__STATE_VARIABLE_C_41_41;
          void MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

          {
            mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__XH_26, &mercury__cord__YH_28, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_39_39, mercury__cord__STATE_VARIABLE_B_0_6, &mercury__cord__STATE_VARIABLE_B_40_40, mercury__cord__STATE_VARIABLE_C_0_8, &mercury__cord__STATE_VARIABLE_C_41_41);
          }
          {
            mercury__list__map_foldl3_9_p_1(mercury__cord__TypeInfo_for_A_65, mercury__cord__TypeInfo_for_B_66, mercury__cord__TypeInfo_for_C_67, mercury__cord__TypeInfo_for_D_68, mercury__cord__TypeInfo_for_E_69, mercury__cord__P_1, mercury__cord__XT_27, &mercury__cord__YT_29, mercury__cord__STATE_VARIABLE_A_39_39, mercury__cord__STATE_VARIABLE_A_5, mercury__cord__STATE_VARIABLE_B_40_40, mercury__cord__STATE_VARIABLE_B_7, mercury__cord__STATE_VARIABLE_C_41_41, mercury__cord__STATE_VARIABLE_C_9);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *mercury__cord__HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = mercury__cord__YH_28;
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__cord__YT_29));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mercury__cord__XA_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
          MR_Word mercury__cord__XB_47 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
          MR_Word mercury__cord__YA_48;
          MR_Word mercury__cord__YB_49;
          MR_Box mercury__cord__STATE_VARIABLE_A_59_59;
          MR_Box mercury__cord__STATE_VARIABLE_B_60_60;
          MR_Box mercury__cord__STATE_VARIABLE_C_61_61;

          {
            mercury__cord__map_foldl3_node_9_p_0(mercury__cord__TypeInfo_for_A_65, mercury__cord__TypeInfo_for_B_66, mercury__cord__TypeInfo_for_C_67, mercury__cord__TypeInfo_for_D_68, mercury__cord__TypeInfo_for_E_69, mercury__cord__P_1, mercury__cord__XA_46, &mercury__cord__YA_48, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_59_59, mercury__cord__STATE_VARIABLE_B_0_6, &mercury__cord__STATE_VARIABLE_B_60_60, mercury__cord__STATE_VARIABLE_C_0_8, &mercury__cord__STATE_VARIABLE_C_61_61);
          }
          {
            mercury__cord__map_foldl3_node_9_p_0(mercury__cord__TypeInfo_for_A_65, mercury__cord__TypeInfo_for_B_66, mercury__cord__TypeInfo_for_C_67, mercury__cord__TypeInfo_for_D_68, mercury__cord__TypeInfo_for_E_69, mercury__cord__P_1, mercury__cord__XB_47, &mercury__cord__YB_49, mercury__cord__STATE_VARIABLE_A_59_59, mercury__cord__STATE_VARIABLE_A_5, mercury__cord__STATE_VARIABLE_B_60_60, mercury__cord__STATE_VARIABLE_B_7, mercury__cord__STATE_VARIABLE_C_61_61, mercury__cord__STATE_VARIABLE_C_9);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *mercury__cord__HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__cord__YA_48));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__cord__YB_49));
          }
        }
        break;
    }
  }
}

void MR_CALL 
mercury__cord__map_foldl2_node_7_p_0(
  MR_Word mercury__cord__TypeInfo_for_A_49,
  MR_Word mercury__cord__TypeInfo_for_B_50,
  MR_Word mercury__cord__TypeInfo_for_C_51,
  MR_Word mercury__cord__TypeInfo_for_D_52,
  MR_Word mercury__cord__P_1,
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Word * mercury__cord__HeadVar__3_3,
  MR_Box mercury__cord__STATE_VARIABLE_A_0_4,
  MR_Box * mercury__cord__STATE_VARIABLE_A_5,
  MR_Box mercury__cord__STATE_VARIABLE_B_0_6,
  MR_Box * mercury__cord__STATE_VARIABLE_B_7)
{
  {
    MR_bool mercury__cord__succeeded;

    switch (MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box mercury__cord__X_9 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
          MR_Box mercury__cord__Y_10;
          void MR_CALL (* mercury__cord__func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

          {
            mercury__cord__func_1(((MR_Box) mercury__cord__P_1), mercury__cord__X_9, &mercury__cord__Y_10, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5, mercury__cord__STATE_VARIABLE_B_0_6, mercury__cord__STATE_VARIABLE_B_7);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *mercury__cord__HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(0), base, 0) = mercury__cord__Y_10;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box mercury__cord__XH_20 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
          MR_Word mercury__cord__XT_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
          MR_Box mercury__cord__YH_22;
          MR_Word mercury__cord__YT_23;
          MR_Box mercury__cord__STATE_VARIABLE_A_30_30;
          MR_Box mercury__cord__STATE_VARIABLE_B_31_31;
          void MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

          {
            mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__XH_20, &mercury__cord__YH_22, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_30_30, mercury__cord__STATE_VARIABLE_B_0_6, &mercury__cord__STATE_VARIABLE_B_31_31);
          }
          {
            mercury__list__map_foldl2_7_p_0(mercury__cord__TypeInfo_for_A_49, mercury__cord__TypeInfo_for_B_50, mercury__cord__TypeInfo_for_C_51, mercury__cord__TypeInfo_for_D_52, mercury__cord__P_1, mercury__cord__XT_21, &mercury__cord__YT_23, mercury__cord__STATE_VARIABLE_A_30_30, mercury__cord__STATE_VARIABLE_A_5, mercury__cord__STATE_VARIABLE_B_31_31, mercury__cord__STATE_VARIABLE_B_7);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *mercury__cord__HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = mercury__cord__YH_22;
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__cord__YT_23));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mercury__cord__XA_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
          MR_Word mercury__cord__XB_36 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
          MR_Word mercury__cord__YA_37;
          MR_Word mercury__cord__YB_38;
          MR_Box mercury__cord__STATE_VARIABLE_A_45_45;
          MR_Box mercury__cord__STATE_VARIABLE_B_46_46;

          {
            mercury__cord__map_foldl2_node_7_p_0(mercury__cord__TypeInfo_for_A_49, mercury__cord__TypeInfo_for_B_50, mercury__cord__TypeInfo_for_C_51, mercury__cord__TypeInfo_for_D_52, mercury__cord__P_1, mercury__cord__XA_35, &mercury__cord__YA_37, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_45_45, mercury__cord__STATE_VARIABLE_B_0_6, &mercury__cord__STATE_VARIABLE_B_46_46);
          }
          {
            mercury__cord__map_foldl2_node_7_p_0(mercury__cord__TypeInfo_for_A_49, mercury__cord__TypeInfo_for_B_50, mercury__cord__TypeInfo_for_C_51, mercury__cord__TypeInfo_for_D_52, mercury__cord__P_1, mercury__cord__XB_36, &mercury__cord__YB_38, mercury__cord__STATE_VARIABLE_A_45_45, mercury__cord__STATE_VARIABLE_A_5, mercury__cord__STATE_VARIABLE_B_46_46, mercury__cord__STATE_VARIABLE_B_7);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *mercury__cord__HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__cord__YA_37));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__cord__YB_38));
          }
        }
        break;
    }
  }
}

MR_bool MR_CALL 
mercury__cord__map_foldl_node_5_p_5(
  MR_Word mercury__cord__TypeInfo_for_A_33,
  MR_Word mercury__cord__TypeInfo_for_B_34,
  MR_Word mercury__cord__TypeInfo_for_C_35,
  MR_Word mercury__cord__P_1,
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Word * mercury__cord__HeadVar__3_3,
  MR_Box mercury__cord__STATE_VARIABLE_A_0_4,
  MR_Box * mercury__cord__STATE_VARIABLE_A_5)
{
  {
    MR_bool mercury__cord__succeeded;

    switch (MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box mercury__cord__X_7 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
          MR_Box mercury__cord__Y_8;
          MR_bool MR_CALL (* mercury__cord__func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

          {
            mercury__cord__succeeded = mercury__cord__func_1(((MR_Box) mercury__cord__P_1), mercury__cord__X_7, &mercury__cord__Y_8, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5);
          }
          if (mercury__cord__succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *mercury__cord__HeadVar__3_3 = base;
                MR_hl_field(MR_mktag(0), base, 0) = mercury__cord__Y_8;
              }
              mercury__cord__succeeded = MR_TRUE;
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box mercury__cord__XH_14 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
          MR_Word mercury__cord__XT_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
          MR_Box mercury__cord__YH_16;
          MR_Word mercury__cord__YT_17;
          MR_Box mercury__cord__STATE_VARIABLE_A_21_21;
          MR_bool MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

          {
            mercury__cord__succeeded = mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__XH_14, &mercury__cord__YH_16, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_21_21);
          }
          if (mercury__cord__succeeded)
            {
              {
                mercury__cord__succeeded = mercury__list__map_foldl_5_p_5(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XT_15, &mercury__cord__YT_17, mercury__cord__STATE_VARIABLE_A_21_21, mercury__cord__STATE_VARIABLE_A_5);
              }
              if (mercury__cord__succeeded)
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *mercury__cord__HeadVar__3_3 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = mercury__cord__YH_16;
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__cord__YT_17));
                  }
                  mercury__cord__succeeded = MR_TRUE;
                }
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mercury__cord__XA_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
          MR_Word mercury__cord__XB_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
          MR_Word mercury__cord__YA_26;
          MR_Word mercury__cord__YB_27;
          MR_Box mercury__cord__STATE_VARIABLE_A_31_31;

          {
            mercury__cord__succeeded = mercury__cord__map_foldl_node_5_p_5(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XA_24, &mercury__cord__YA_26, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_31_31);
          }
          if (mercury__cord__succeeded)
            {
              {
                mercury__cord__succeeded = mercury__cord__map_foldl_node_5_p_5(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XB_25, &mercury__cord__YB_27, mercury__cord__STATE_VARIABLE_A_31_31, mercury__cord__STATE_VARIABLE_A_5);
              }
              if (mercury__cord__succeeded)
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *mercury__cord__HeadVar__3_3 = base;
                    MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__cord__YA_26));
                    MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__cord__YB_27));
                  }
                  mercury__cord__succeeded = MR_TRUE;
                }
            }
        }
        break;
    }
    return mercury__cord__succeeded;
  }
}

MR_bool MR_CALL 
mercury__cord__map_foldl_node_5_p_4(
  MR_Word mercury__cord__TypeInfo_for_A_33,
  MR_Word mercury__cord__TypeInfo_for_B_34,
  MR_Word mercury__cord__TypeInfo_for_C_35,
  MR_Word mercury__cord__P_1,
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Word * mercury__cord__HeadVar__3_3,
  MR_Box mercury__cord__STATE_VARIABLE_A_0_4,
  MR_Box * mercury__cord__STATE_VARIABLE_A_5)
{
  {
    MR_bool mercury__cord__succeeded;

    switch (MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box mercury__cord__X_7 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
          MR_Box mercury__cord__Y_8;
          MR_bool MR_CALL (* mercury__cord__func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

          {
            mercury__cord__succeeded = mercury__cord__func_1(((MR_Box) mercury__cord__P_1), mercury__cord__X_7, &mercury__cord__Y_8, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5);
          }
          if (mercury__cord__succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *mercury__cord__HeadVar__3_3 = base;
                MR_hl_field(MR_mktag(0), base, 0) = mercury__cord__Y_8;
              }
              mercury__cord__succeeded = MR_TRUE;
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box mercury__cord__XH_14 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
          MR_Word mercury__cord__XT_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
          MR_Box mercury__cord__YH_16;
          MR_Word mercury__cord__YT_17;
          MR_Box mercury__cord__STATE_VARIABLE_A_21_21;
          MR_bool MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

          {
            mercury__cord__succeeded = mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__XH_14, &mercury__cord__YH_16, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_21_21);
          }
          if (mercury__cord__succeeded)
            {
              {
                mercury__cord__succeeded = mercury__list__map_foldl_5_p_4(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XT_15, &mercury__cord__YT_17, mercury__cord__STATE_VARIABLE_A_21_21, mercury__cord__STATE_VARIABLE_A_5);
              }
              if (mercury__cord__succeeded)
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *mercury__cord__HeadVar__3_3 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = mercury__cord__YH_16;
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__cord__YT_17));
                  }
                  mercury__cord__succeeded = MR_TRUE;
                }
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mercury__cord__XA_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
          MR_Word mercury__cord__XB_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
          MR_Word mercury__cord__YA_26;
          MR_Word mercury__cord__YB_27;
          MR_Box mercury__cord__STATE_VARIABLE_A_31_31;

          {
            mercury__cord__succeeded = mercury__cord__map_foldl_node_5_p_4(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XA_24, &mercury__cord__YA_26, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_31_31);
          }
          if (mercury__cord__succeeded)
            {
              {
                mercury__cord__succeeded = mercury__cord__map_foldl_node_5_p_4(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XB_25, &mercury__cord__YB_27, mercury__cord__STATE_VARIABLE_A_31_31, mercury__cord__STATE_VARIABLE_A_5);
              }
              if (mercury__cord__succeeded)
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *mercury__cord__HeadVar__3_3 = base;
                    MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__cord__YA_26));
                    MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__cord__YB_27));
                  }
                  mercury__cord__succeeded = MR_TRUE;
                }
            }
        }
        break;
    }
    return mercury__cord__succeeded;
  }
}

MR_bool MR_CALL 
mercury__cord__map_foldl_node_5_p_3(
  MR_Word mercury__cord__TypeInfo_for_A_33,
  MR_Word mercury__cord__TypeInfo_for_B_34,
  MR_Word mercury__cord__TypeInfo_for_C_35,
  MR_Word mercury__cord__P_1,
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Word * mercury__cord__HeadVar__3_3,
  MR_Box mercury__cord__STATE_VARIABLE_A_0_4,
  MR_Box * mercury__cord__STATE_VARIABLE_A_5)
{
  {
    MR_bool mercury__cord__succeeded;

    switch (MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box mercury__cord__X_7 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
          MR_Box mercury__cord__Y_8;
          MR_bool MR_CALL (* mercury__cord__func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

          {
            mercury__cord__succeeded = mercury__cord__func_1(((MR_Box) mercury__cord__P_1), mercury__cord__X_7, &mercury__cord__Y_8, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5);
          }
          if (mercury__cord__succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *mercury__cord__HeadVar__3_3 = base;
                MR_hl_field(MR_mktag(0), base, 0) = mercury__cord__Y_8;
              }
              mercury__cord__succeeded = MR_TRUE;
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box mercury__cord__XH_14 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
          MR_Word mercury__cord__XT_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
          MR_Box mercury__cord__YH_16;
          MR_Word mercury__cord__YT_17;
          MR_Box mercury__cord__STATE_VARIABLE_A_21_21;
          MR_bool MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

          {
            mercury__cord__succeeded = mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__XH_14, &mercury__cord__YH_16, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_21_21);
          }
          if (mercury__cord__succeeded)
            {
              {
                mercury__cord__succeeded = mercury__list__map_foldl_5_p_3(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XT_15, &mercury__cord__YT_17, mercury__cord__STATE_VARIABLE_A_21_21, mercury__cord__STATE_VARIABLE_A_5);
              }
              if (mercury__cord__succeeded)
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *mercury__cord__HeadVar__3_3 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = mercury__cord__YH_16;
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__cord__YT_17));
                  }
                  mercury__cord__succeeded = MR_TRUE;
                }
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mercury__cord__XA_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
          MR_Word mercury__cord__XB_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
          MR_Word mercury__cord__YA_26;
          MR_Word mercury__cord__YB_27;
          MR_Box mercury__cord__STATE_VARIABLE_A_31_31;

          {
            mercury__cord__succeeded = mercury__cord__map_foldl_node_5_p_3(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XA_24, &mercury__cord__YA_26, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_31_31);
          }
          if (mercury__cord__succeeded)
            {
              {
                mercury__cord__succeeded = mercury__cord__map_foldl_node_5_p_3(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XB_25, &mercury__cord__YB_27, mercury__cord__STATE_VARIABLE_A_31_31, mercury__cord__STATE_VARIABLE_A_5);
              }
              if (mercury__cord__succeeded)
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    *mercury__cord__HeadVar__3_3 = base;
                    MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__cord__YA_26));
                    MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__cord__YB_27));
                  }
                  mercury__cord__succeeded = MR_TRUE;
                }
            }
        }
        break;
    }
    return mercury__cord__succeeded;
  }
}

void MR_CALL 
mercury__cord__map_foldl_node_5_p_2(
  MR_Word mercury__cord__TypeInfo_for_A_33,
  MR_Word mercury__cord__TypeInfo_for_B_34,
  MR_Word mercury__cord__TypeInfo_for_C_35,
  MR_Word mercury__cord__P_1,
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Word * mercury__cord__HeadVar__3_3,
  MR_Box mercury__cord__STATE_VARIABLE_A_0_4,
  MR_Box * mercury__cord__STATE_VARIABLE_A_5)
{
  {
    MR_bool mercury__cord__succeeded;

    switch (MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box mercury__cord__X_7 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
          MR_Box mercury__cord__Y_8;
          void MR_CALL (* mercury__cord__func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

          {
            mercury__cord__func_1(((MR_Box) mercury__cord__P_1), mercury__cord__X_7, &mercury__cord__Y_8, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *mercury__cord__HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(0), base, 0) = mercury__cord__Y_8;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box mercury__cord__XH_14 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
          MR_Word mercury__cord__XT_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
          MR_Box mercury__cord__YH_16;
          MR_Word mercury__cord__YT_17;
          MR_Box mercury__cord__STATE_VARIABLE_A_21_21;
          void MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

          {
            mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__XH_14, &mercury__cord__YH_16, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_21_21);
          }
          {
            mercury__list__map_foldl_5_p_2(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XT_15, &mercury__cord__YT_17, mercury__cord__STATE_VARIABLE_A_21_21, mercury__cord__STATE_VARIABLE_A_5);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *mercury__cord__HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = mercury__cord__YH_16;
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__cord__YT_17));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mercury__cord__XA_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
          MR_Word mercury__cord__XB_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
          MR_Word mercury__cord__YA_26;
          MR_Word mercury__cord__YB_27;
          MR_Box mercury__cord__STATE_VARIABLE_A_31_31;

          {
            mercury__cord__map_foldl_node_5_p_2(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XA_24, &mercury__cord__YA_26, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_31_31);
          }
          {
            mercury__cord__map_foldl_node_5_p_2(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XB_25, &mercury__cord__YB_27, mercury__cord__STATE_VARIABLE_A_31_31, mercury__cord__STATE_VARIABLE_A_5);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *mercury__cord__HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__cord__YA_26));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__cord__YB_27));
          }
        }
        break;
    }
  }
}

void MR_CALL 
mercury__cord__map_foldl_node_5_p_1(
  MR_Word mercury__cord__TypeInfo_for_A_33,
  MR_Word mercury__cord__TypeInfo_for_B_34,
  MR_Word mercury__cord__TypeInfo_for_C_35,
  MR_Word mercury__cord__P_1,
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Word * mercury__cord__HeadVar__3_3,
  MR_Box mercury__cord__STATE_VARIABLE_A_0_4,
  MR_Box * mercury__cord__STATE_VARIABLE_A_5)
{
  {
    MR_bool mercury__cord__succeeded;

    switch (MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box mercury__cord__X_7 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
          MR_Box mercury__cord__Y_8;
          void MR_CALL (* mercury__cord__func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

          {
            mercury__cord__func_1(((MR_Box) mercury__cord__P_1), mercury__cord__X_7, &mercury__cord__Y_8, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *mercury__cord__HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(0), base, 0) = mercury__cord__Y_8;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box mercury__cord__XH_14 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
          MR_Word mercury__cord__XT_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
          MR_Box mercury__cord__YH_16;
          MR_Word mercury__cord__YT_17;
          MR_Box mercury__cord__STATE_VARIABLE_A_21_21;
          void MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

          {
            mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__XH_14, &mercury__cord__YH_16, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_21_21);
          }
          {
            mercury__list__map_foldl_5_p_1(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XT_15, &mercury__cord__YT_17, mercury__cord__STATE_VARIABLE_A_21_21, mercury__cord__STATE_VARIABLE_A_5);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *mercury__cord__HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = mercury__cord__YH_16;
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__cord__YT_17));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mercury__cord__XA_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
          MR_Word mercury__cord__XB_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
          MR_Word mercury__cord__YA_26;
          MR_Word mercury__cord__YB_27;
          MR_Box mercury__cord__STATE_VARIABLE_A_31_31;

          {
            mercury__cord__map_foldl_node_5_p_1(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XA_24, &mercury__cord__YA_26, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_31_31);
          }
          {
            mercury__cord__map_foldl_node_5_p_1(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XB_25, &mercury__cord__YB_27, mercury__cord__STATE_VARIABLE_A_31_31, mercury__cord__STATE_VARIABLE_A_5);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *mercury__cord__HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__cord__YA_26));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__cord__YB_27));
          }
        }
        break;
    }
  }
}

void MR_CALL 
mercury__cord__map_foldl_node_5_p_0(
  MR_Word mercury__cord__TypeInfo_for_A_33,
  MR_Word mercury__cord__TypeInfo_for_B_34,
  MR_Word mercury__cord__TypeInfo_for_C_35,
  MR_Word mercury__cord__P_1,
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Word * mercury__cord__HeadVar__3_3,
  MR_Box mercury__cord__STATE_VARIABLE_A_0_4,
  MR_Box * mercury__cord__STATE_VARIABLE_A_5)
{
  {
    MR_bool mercury__cord__succeeded;

    switch (MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box mercury__cord__X_7 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
          MR_Box mercury__cord__Y_8;
          void MR_CALL (* mercury__cord__func_1)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

          {
            mercury__cord__func_1(((MR_Box) mercury__cord__P_1), mercury__cord__X_7, &mercury__cord__Y_8, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *mercury__cord__HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(0), base, 0) = mercury__cord__Y_8;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box mercury__cord__XH_14 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
          MR_Word mercury__cord__XT_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
          MR_Box mercury__cord__YH_16;
          MR_Word mercury__cord__YT_17;
          MR_Box mercury__cord__STATE_VARIABLE_A_21_21;
          void MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

          {
            mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__XH_14, &mercury__cord__YH_16, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_21_21);
          }
          {
            mercury__list__map_foldl_5_p_0(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XT_15, &mercury__cord__YT_17, mercury__cord__STATE_VARIABLE_A_21_21, mercury__cord__STATE_VARIABLE_A_5);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *mercury__cord__HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = mercury__cord__YH_16;
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__cord__YT_17));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mercury__cord__XA_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
          MR_Word mercury__cord__XB_25 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
          MR_Word mercury__cord__YA_26;
          MR_Word mercury__cord__YB_27;
          MR_Box mercury__cord__STATE_VARIABLE_A_31_31;

          {
            mercury__cord__map_foldl_node_5_p_0(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XA_24, &mercury__cord__YA_26, mercury__cord__STATE_VARIABLE_A_0_4, &mercury__cord__STATE_VARIABLE_A_31_31);
          }
          {
            mercury__cord__map_foldl_node_5_p_0(mercury__cord__TypeInfo_for_A_33, mercury__cord__TypeInfo_for_B_34, mercury__cord__TypeInfo_for_C_35, mercury__cord__P_1, mercury__cord__XB_25, &mercury__cord__YB_27, mercury__cord__STATE_VARIABLE_A_31_31, mercury__cord__STATE_VARIABLE_A_5);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *mercury__cord__HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__cord__YA_26));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__cord__YB_27));
          }
        }
        break;
    }
  }
}

MR_bool MR_CALL 
mercury__cord__foldr_node_pred_5_p_5(
  MR_Word mercury__cord__TypeInfo_for_T_30,
  MR_Word mercury__cord__TypeInfo_for_U_31,
  MR_Word mercury__cord__P_1,
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Word mercury__cord__Cs_3,
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_4,
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__cord__succeeded;

        switch (MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box mercury__cord__X_10 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
              MR_Box mercury__cord__STATE_VARIABLE_Acc_19_43;
              MR_bool MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

              {
                mercury__cord__succeeded = mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__X_10, mercury__cord__STATE_VARIABLE_Acc_0_4, &mercury__cord__STATE_VARIABLE_Acc_19_43);
              }
              if (mercury__cord__succeeded)
                {
                  if ((mercury__cord__Cs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      *mercury__cord__STATE_VARIABLE_Acc_5 = mercury__cord__STATE_VARIABLE_Acc_19_43;
                      mercury__cord__succeeded = MR_TRUE;
                    }
                  else
                    {
                      MR_Word mercury__cord__Y_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 0)));
                      MR_Word mercury__cord__Ys_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 1)));

                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__Y_32;
                        MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__Ys_33;
                        MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4 = mercury__cord__STATE_VARIABLE_Acc_19_43;

                        mercury__cord__STATE_VARIABLE_Acc_0_4 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4;
                        mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
                        mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
                      }
                      continue;
                    }
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__cord__H_11 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
              MR_Word mercury__cord__T_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
              MR_Word mercury__cord__V_17_17;
              MR_Box mercury__cord__STATE_VARIABLE_Acc_19_19;

              {
                mercury__cord__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 0) = mercury__cord__H_11;
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 1) = ((MR_Box) (mercury__cord__T_12));
              }
              {
                mercury__cord__succeeded = mercury__list__foldr_4_p_5(mercury__cord__TypeInfo_for_T_30, mercury__cord__TypeInfo_for_U_31, mercury__cord__P_1, mercury__cord__V_17_17, mercury__cord__STATE_VARIABLE_Acc_0_4, &mercury__cord__STATE_VARIABLE_Acc_19_19);
              }
              if (mercury__cord__succeeded)
                {
                  if ((mercury__cord__Cs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      *mercury__cord__STATE_VARIABLE_Acc_5 = mercury__cord__STATE_VARIABLE_Acc_19_19;
                      mercury__cord__succeeded = MR_TRUE;
                    }
                  else
                    {
                      MR_Word mercury__cord__Y_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 0)));
                      MR_Word mercury__cord__Ys_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 1)));

                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__Y_13;
                        MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__Ys_14;
                        MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4 = mercury__cord__STATE_VARIABLE_Acc_19_19;

                        mercury__cord__STATE_VARIABLE_Acc_0_4 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4;
                        mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
                        mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
                      }
                      continue;
                    }
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__cord__A_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
              MR_Word mercury__cord__B_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
              MR_Word mercury__cord__V_28_28;

              {
                mercury__cord__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__cord__V_28_28, 0) = ((MR_Box) (mercury__cord__A_22));
                MR_hl_field(MR_mktag(1), mercury__cord__V_28_28, 1) = ((MR_Box) (mercury__cord__Cs_3));
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__B_23;
                MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__V_28_28;

                mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
                mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
              }
              continue;
            }
            break;
        }
        return mercury__cord__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__cord__foldr_node_pred_5_p_4(
  MR_Word mercury__cord__TypeInfo_for_T_30,
  MR_Word mercury__cord__TypeInfo_for_U_31,
  MR_Word mercury__cord__P_1,
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Word mercury__cord__Cs_3,
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_4,
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__cord__succeeded;

        switch (MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box mercury__cord__X_10 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
              MR_Box mercury__cord__STATE_VARIABLE_Acc_19_43;
              MR_bool MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

              {
                mercury__cord__succeeded = mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__X_10, mercury__cord__STATE_VARIABLE_Acc_0_4, &mercury__cord__STATE_VARIABLE_Acc_19_43);
              }
              if (mercury__cord__succeeded)
                {
                  if ((mercury__cord__Cs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      *mercury__cord__STATE_VARIABLE_Acc_5 = mercury__cord__STATE_VARIABLE_Acc_19_43;
                      mercury__cord__succeeded = MR_TRUE;
                    }
                  else
                    {
                      MR_Word mercury__cord__Y_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 0)));
                      MR_Word mercury__cord__Ys_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 1)));

                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__Y_32;
                        MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__Ys_33;
                        MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4 = mercury__cord__STATE_VARIABLE_Acc_19_43;

                        mercury__cord__STATE_VARIABLE_Acc_0_4 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4;
                        mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
                        mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
                      }
                      continue;
                    }
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__cord__H_11 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
              MR_Word mercury__cord__T_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
              MR_Word mercury__cord__V_17_17;
              MR_Box mercury__cord__STATE_VARIABLE_Acc_19_19;

              {
                mercury__cord__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 0) = mercury__cord__H_11;
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 1) = ((MR_Box) (mercury__cord__T_12));
              }
              {
                mercury__cord__succeeded = mercury__list__foldr_4_p_4(mercury__cord__TypeInfo_for_T_30, mercury__cord__TypeInfo_for_U_31, mercury__cord__P_1, mercury__cord__V_17_17, mercury__cord__STATE_VARIABLE_Acc_0_4, &mercury__cord__STATE_VARIABLE_Acc_19_19);
              }
              if (mercury__cord__succeeded)
                {
                  if ((mercury__cord__Cs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      *mercury__cord__STATE_VARIABLE_Acc_5 = mercury__cord__STATE_VARIABLE_Acc_19_19;
                      mercury__cord__succeeded = MR_TRUE;
                    }
                  else
                    {
                      MR_Word mercury__cord__Y_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 0)));
                      MR_Word mercury__cord__Ys_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 1)));

                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__Y_13;
                        MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__Ys_14;
                        MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4 = mercury__cord__STATE_VARIABLE_Acc_19_19;

                        mercury__cord__STATE_VARIABLE_Acc_0_4 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4;
                        mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
                        mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
                      }
                      continue;
                    }
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__cord__A_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
              MR_Word mercury__cord__B_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
              MR_Word mercury__cord__V_28_28;

              {
                mercury__cord__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__cord__V_28_28, 0) = ((MR_Box) (mercury__cord__A_22));
                MR_hl_field(MR_mktag(1), mercury__cord__V_28_28, 1) = ((MR_Box) (mercury__cord__Cs_3));
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__B_23;
                MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__V_28_28;

                mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
                mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
              }
              continue;
            }
            break;
        }
        return mercury__cord__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__cord__foldr_node_pred_5_p_3(
  MR_Word mercury__cord__TypeInfo_for_T_30,
  MR_Word mercury__cord__TypeInfo_for_U_31,
  MR_Word mercury__cord__P_1,
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Word mercury__cord__Cs_3,
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_4,
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__cord__succeeded;

        switch (MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box mercury__cord__X_10 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
              MR_Box mercury__cord__STATE_VARIABLE_Acc_19_43;
              MR_bool MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

              {
                mercury__cord__succeeded = mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__X_10, mercury__cord__STATE_VARIABLE_Acc_0_4, &mercury__cord__STATE_VARIABLE_Acc_19_43);
              }
              if (mercury__cord__succeeded)
                {
                  if ((mercury__cord__Cs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      *mercury__cord__STATE_VARIABLE_Acc_5 = mercury__cord__STATE_VARIABLE_Acc_19_43;
                      mercury__cord__succeeded = MR_TRUE;
                    }
                  else
                    {
                      MR_Word mercury__cord__Y_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 0)));
                      MR_Word mercury__cord__Ys_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 1)));

                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__Y_32;
                        MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__Ys_33;
                        MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4 = mercury__cord__STATE_VARIABLE_Acc_19_43;

                        mercury__cord__STATE_VARIABLE_Acc_0_4 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4;
                        mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
                        mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
                      }
                      continue;
                    }
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__cord__H_11 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
              MR_Word mercury__cord__T_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
              MR_Word mercury__cord__V_17_17;
              MR_Box mercury__cord__STATE_VARIABLE_Acc_19_19;

              {
                mercury__cord__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 0) = mercury__cord__H_11;
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 1) = ((MR_Box) (mercury__cord__T_12));
              }
              {
                mercury__cord__succeeded = mercury__list__foldr_4_p_3(mercury__cord__TypeInfo_for_T_30, mercury__cord__TypeInfo_for_U_31, mercury__cord__P_1, mercury__cord__V_17_17, mercury__cord__STATE_VARIABLE_Acc_0_4, &mercury__cord__STATE_VARIABLE_Acc_19_19);
              }
              if (mercury__cord__succeeded)
                {
                  if ((mercury__cord__Cs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      *mercury__cord__STATE_VARIABLE_Acc_5 = mercury__cord__STATE_VARIABLE_Acc_19_19;
                      mercury__cord__succeeded = MR_TRUE;
                    }
                  else
                    {
                      MR_Word mercury__cord__Y_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 0)));
                      MR_Word mercury__cord__Ys_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 1)));

                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__Y_13;
                        MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__Ys_14;
                        MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4 = mercury__cord__STATE_VARIABLE_Acc_19_19;

                        mercury__cord__STATE_VARIABLE_Acc_0_4 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4;
                        mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
                        mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
                      }
                      continue;
                    }
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__cord__A_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
              MR_Word mercury__cord__B_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
              MR_Word mercury__cord__V_28_28;

              {
                mercury__cord__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__cord__V_28_28, 0) = ((MR_Box) (mercury__cord__A_22));
                MR_hl_field(MR_mktag(1), mercury__cord__V_28_28, 1) = ((MR_Box) (mercury__cord__Cs_3));
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__B_23;
                MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__V_28_28;

                mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
                mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
              }
              continue;
            }
            break;
        }
        return mercury__cord__succeeded;
      }
      break;
    }
}

void MR_CALL 
mercury__cord__foldr_node_pred_5_p_2(
  MR_Word mercury__cord__TypeInfo_for_T_30,
  MR_Word mercury__cord__TypeInfo_for_U_31,
  MR_Word mercury__cord__P_1,
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Word mercury__cord__Cs_3,
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_4,
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__cord__succeeded;

        switch (MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box mercury__cord__X_10 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
              MR_Box mercury__cord__STATE_VARIABLE_Acc_19_43;
              void MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

              {
                mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__X_10, mercury__cord__STATE_VARIABLE_Acc_0_4, &mercury__cord__STATE_VARIABLE_Acc_19_43);
              }
              if ((mercury__cord__Cs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                *mercury__cord__STATE_VARIABLE_Acc_5 = mercury__cord__STATE_VARIABLE_Acc_19_43;
              else
                {
                  MR_Word mercury__cord__Y_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 0)));
                  MR_Word mercury__cord__Ys_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__Y_32;
                    MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__Ys_33;
                    MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4 = mercury__cord__STATE_VARIABLE_Acc_19_43;

                    mercury__cord__STATE_VARIABLE_Acc_0_4 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4;
                    mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
                    mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
                  }
                  continue;
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__cord__H_11 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
              MR_Word mercury__cord__T_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
              MR_Word mercury__cord__V_17_17;
              MR_Box mercury__cord__STATE_VARIABLE_Acc_19_19;

              {
                mercury__cord__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 0) = mercury__cord__H_11;
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 1) = ((MR_Box) (mercury__cord__T_12));
              }
              {
                mercury__list__foldr_4_p_2(mercury__cord__TypeInfo_for_T_30, mercury__cord__TypeInfo_for_U_31, mercury__cord__P_1, mercury__cord__V_17_17, mercury__cord__STATE_VARIABLE_Acc_0_4, &mercury__cord__STATE_VARIABLE_Acc_19_19);
              }
              if ((mercury__cord__Cs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                *mercury__cord__STATE_VARIABLE_Acc_5 = mercury__cord__STATE_VARIABLE_Acc_19_19;
              else
                {
                  MR_Word mercury__cord__Y_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 0)));
                  MR_Word mercury__cord__Ys_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__Y_13;
                    MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__Ys_14;
                    MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4 = mercury__cord__STATE_VARIABLE_Acc_19_19;

                    mercury__cord__STATE_VARIABLE_Acc_0_4 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4;
                    mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
                    mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
                  }
                  continue;
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__cord__A_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
              MR_Word mercury__cord__B_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
              MR_Word mercury__cord__V_28_28;

              {
                mercury__cord__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__cord__V_28_28, 0) = ((MR_Box) (mercury__cord__A_22));
                MR_hl_field(MR_mktag(1), mercury__cord__V_28_28, 1) = ((MR_Box) (mercury__cord__Cs_3));
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__B_23;
                MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__V_28_28;

                mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
                mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
              }
              continue;
            }
            break;
        }
      }
      break;
    }
}

void MR_CALL 
mercury__cord__foldr_node_pred_5_p_1(
  MR_Word mercury__cord__TypeInfo_for_T_30,
  MR_Word mercury__cord__TypeInfo_for_U_31,
  MR_Word mercury__cord__P_1,
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Word mercury__cord__Cs_3,
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_4,
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__cord__succeeded;

        switch (MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box mercury__cord__X_10 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
              MR_Box mercury__cord__STATE_VARIABLE_Acc_19_43;
              void MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

              {
                mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__X_10, mercury__cord__STATE_VARIABLE_Acc_0_4, &mercury__cord__STATE_VARIABLE_Acc_19_43);
              }
              if ((mercury__cord__Cs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                *mercury__cord__STATE_VARIABLE_Acc_5 = mercury__cord__STATE_VARIABLE_Acc_19_43;
              else
                {
                  MR_Word mercury__cord__Y_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 0)));
                  MR_Word mercury__cord__Ys_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__Y_32;
                    MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__Ys_33;
                    MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4 = mercury__cord__STATE_VARIABLE_Acc_19_43;

                    mercury__cord__STATE_VARIABLE_Acc_0_4 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4;
                    mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
                    mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
                  }
                  continue;
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__cord__H_11 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
              MR_Word mercury__cord__T_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
              MR_Word mercury__cord__V_17_17;
              MR_Box mercury__cord__STATE_VARIABLE_Acc_19_19;

              {
                mercury__cord__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 0) = mercury__cord__H_11;
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 1) = ((MR_Box) (mercury__cord__T_12));
              }
              {
                mercury__list__foldr_4_p_1(mercury__cord__TypeInfo_for_T_30, mercury__cord__TypeInfo_for_U_31, mercury__cord__P_1, mercury__cord__V_17_17, mercury__cord__STATE_VARIABLE_Acc_0_4, &mercury__cord__STATE_VARIABLE_Acc_19_19);
              }
              if ((mercury__cord__Cs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                *mercury__cord__STATE_VARIABLE_Acc_5 = mercury__cord__STATE_VARIABLE_Acc_19_19;
              else
                {
                  MR_Word mercury__cord__Y_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 0)));
                  MR_Word mercury__cord__Ys_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__Y_13;
                    MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__Ys_14;
                    MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4 = mercury__cord__STATE_VARIABLE_Acc_19_19;

                    mercury__cord__STATE_VARIABLE_Acc_0_4 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4;
                    mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
                    mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
                  }
                  continue;
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__cord__A_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
              MR_Word mercury__cord__B_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
              MR_Word mercury__cord__V_28_28;

              {
                mercury__cord__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__cord__V_28_28, 0) = ((MR_Box) (mercury__cord__A_22));
                MR_hl_field(MR_mktag(1), mercury__cord__V_28_28, 1) = ((MR_Box) (mercury__cord__Cs_3));
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__B_23;
                MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__V_28_28;

                mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
                mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
              }
              continue;
            }
            break;
        }
      }
      break;
    }
}

void MR_CALL 
mercury__cord__foldr_node_pred_5_p_0(
  MR_Word mercury__cord__TypeInfo_for_T_30,
  MR_Word mercury__cord__TypeInfo_for_U_31,
  MR_Word mercury__cord__P_1,
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Word mercury__cord__Cs_3,
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_4,
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__cord__succeeded;

        switch (MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box mercury__cord__X_10 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
              MR_Box mercury__cord__STATE_VARIABLE_Acc_19_43;
              void MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

              {
                mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__X_10, mercury__cord__STATE_VARIABLE_Acc_0_4, &mercury__cord__STATE_VARIABLE_Acc_19_43);
              }
              if ((mercury__cord__Cs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                *mercury__cord__STATE_VARIABLE_Acc_5 = mercury__cord__STATE_VARIABLE_Acc_19_43;
              else
                {
                  MR_Word mercury__cord__Y_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 0)));
                  MR_Word mercury__cord__Ys_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__Y_32;
                    MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__Ys_33;
                    MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4 = mercury__cord__STATE_VARIABLE_Acc_19_43;

                    mercury__cord__STATE_VARIABLE_Acc_0_4 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4;
                    mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
                    mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
                  }
                  continue;
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__cord__H_11 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
              MR_Word mercury__cord__T_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
              MR_Word mercury__cord__V_17_17;
              MR_Box mercury__cord__STATE_VARIABLE_Acc_19_19;

              {
                mercury__cord__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 0) = mercury__cord__H_11;
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 1) = ((MR_Box) (mercury__cord__T_12));
              }
              {
                mercury__list__foldr_4_p_0(mercury__cord__TypeInfo_for_T_30, mercury__cord__TypeInfo_for_U_31, mercury__cord__P_1, mercury__cord__V_17_17, mercury__cord__STATE_VARIABLE_Acc_0_4, &mercury__cord__STATE_VARIABLE_Acc_19_19);
              }
              if ((mercury__cord__Cs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                *mercury__cord__STATE_VARIABLE_Acc_5 = mercury__cord__STATE_VARIABLE_Acc_19_19;
              else
                {
                  MR_Word mercury__cord__Y_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 0)));
                  MR_Word mercury__cord__Ys_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__Y_13;
                    MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__Ys_14;
                    MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4 = mercury__cord__STATE_VARIABLE_Acc_19_19;

                    mercury__cord__STATE_VARIABLE_Acc_0_4 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4;
                    mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
                    mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
                  }
                  continue;
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__cord__A_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
              MR_Word mercury__cord__B_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
              MR_Word mercury__cord__V_28_28;

              {
                mercury__cord__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__cord__V_28_28, 0) = ((MR_Box) (mercury__cord__A_22));
                MR_hl_field(MR_mktag(1), mercury__cord__V_28_28, 1) = ((MR_Box) (mercury__cord__Cs_3));
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__B_23;
                MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__V_28_28;

                mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
                mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
              }
              continue;
            }
            break;
        }
      }
      break;
    }
}

void MR_CALL 
mercury__cord__foldr_node_5_p_0(
  MR_Word mercury__cord__TypeInfo_for_T_30,
  MR_Word mercury__cord__TypeInfo_for_U_31,
  MR_Word mercury__cord__F_1,
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Word mercury__cord__Cs_3,
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_4,
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__cord__succeeded;

        switch (MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box mercury__cord__X_10 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
              MR_Box mercury__cord__STATE_VARIABLE_Acc_19_43;
              MR_Box MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__cord__F_1, (MR_Integer) 1)));

              {
                mercury__cord__STATE_VARIABLE_Acc_19_43 = mercury__cord__func_0(((MR_Box) mercury__cord__F_1), mercury__cord__X_10, mercury__cord__STATE_VARIABLE_Acc_0_4);
              }
              if ((mercury__cord__Cs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                *mercury__cord__STATE_VARIABLE_Acc_5 = mercury__cord__STATE_VARIABLE_Acc_19_43;
              else
                {
                  MR_Word mercury__cord__Y_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 0)));
                  MR_Word mercury__cord__Ys_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__Y_32;
                    MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__Ys_33;
                    MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4 = mercury__cord__STATE_VARIABLE_Acc_19_43;

                    mercury__cord__STATE_VARIABLE_Acc_0_4 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4;
                    mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
                    mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
                  }
                  continue;
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__cord__H_11 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
              MR_Word mercury__cord__T_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
              MR_Word mercury__cord__V_18_18;
              MR_Box mercury__cord__STATE_VARIABLE_Acc_19_19;

              {
                mercury__cord__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__cord__V_18_18, 0) = mercury__cord__H_11;
                MR_hl_field(MR_mktag(1), mercury__cord__V_18_18, 1) = ((MR_Box) (mercury__cord__T_12));
              }
              {
                mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_49_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(mercury__cord__F_1, mercury__cord__V_18_18, mercury__cord__STATE_VARIABLE_Acc_0_4, &mercury__cord__STATE_VARIABLE_Acc_19_19);
              }
              if ((mercury__cord__Cs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                *mercury__cord__STATE_VARIABLE_Acc_5 = mercury__cord__STATE_VARIABLE_Acc_19_19;
              else
                {
                  MR_Word mercury__cord__Y_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 0)));
                  MR_Word mercury__cord__Ys_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__Y_13;
                    MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__Ys_14;
                    MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4 = mercury__cord__STATE_VARIABLE_Acc_19_19;

                    mercury__cord__STATE_VARIABLE_Acc_0_4 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4;
                    mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
                    mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
                  }
                  continue;
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__cord__A_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
              MR_Word mercury__cord__B_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
              MR_Word mercury__cord__V_28_28;

              {
                mercury__cord__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__cord__V_28_28, 0) = ((MR_Box) (mercury__cord__A_22));
                MR_hl_field(MR_mktag(1), mercury__cord__V_28_28, 1) = ((MR_Box) (mercury__cord__Cs_3));
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__B_23;
                MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__V_28_28;

                mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
                mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
              }
              continue;
            }
            break;
        }
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__cord__foldl_node_pred_5_p_5(
  MR_Word mercury__cord__TypeInfo_for_T_30,
  MR_Word mercury__cord__TypeInfo_for_U_31,
  MR_Word mercury__cord__P_1,
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Word mercury__cord__Cs_3,
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_4,
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__cord__succeeded;

        switch (MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box mercury__cord__X_10 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
              MR_Box mercury__cord__STATE_VARIABLE_Acc_19_43;
              MR_bool MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

              {
                mercury__cord__succeeded = mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__X_10, mercury__cord__STATE_VARIABLE_Acc_0_4, &mercury__cord__STATE_VARIABLE_Acc_19_43);
              }
              if (mercury__cord__succeeded)
                {
                  if ((mercury__cord__Cs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      *mercury__cord__STATE_VARIABLE_Acc_5 = mercury__cord__STATE_VARIABLE_Acc_19_43;
                      mercury__cord__succeeded = MR_TRUE;
                    }
                  else
                    {
                      MR_Word mercury__cord__Y_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 0)));
                      MR_Word mercury__cord__Ys_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 1)));

                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__Y_32;
                        MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__Ys_33;
                        MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4 = mercury__cord__STATE_VARIABLE_Acc_19_43;

                        mercury__cord__STATE_VARIABLE_Acc_0_4 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4;
                        mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
                        mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
                      }
                      continue;
                    }
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__cord__H_11 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
              MR_Word mercury__cord__T_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
              MR_Word mercury__cord__V_17_17;
              MR_Box mercury__cord__STATE_VARIABLE_Acc_19_19;

              {
                mercury__cord__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 0) = mercury__cord__H_11;
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 1) = ((MR_Box) (mercury__cord__T_12));
              }
              {
                mercury__cord__succeeded = mercury__list__foldl_4_p_5(mercury__cord__TypeInfo_for_T_30, mercury__cord__TypeInfo_for_U_31, mercury__cord__P_1, mercury__cord__V_17_17, mercury__cord__STATE_VARIABLE_Acc_0_4, &mercury__cord__STATE_VARIABLE_Acc_19_19);
              }
              if (mercury__cord__succeeded)
                {
                  if ((mercury__cord__Cs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      *mercury__cord__STATE_VARIABLE_Acc_5 = mercury__cord__STATE_VARIABLE_Acc_19_19;
                      mercury__cord__succeeded = MR_TRUE;
                    }
                  else
                    {
                      MR_Word mercury__cord__Y_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 0)));
                      MR_Word mercury__cord__Ys_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 1)));

                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__Y_13;
                        MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__Ys_14;
                        MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4 = mercury__cord__STATE_VARIABLE_Acc_19_19;

                        mercury__cord__STATE_VARIABLE_Acc_0_4 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4;
                        mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
                        mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
                      }
                      continue;
                    }
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__cord__A_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
              MR_Word mercury__cord__B_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
              MR_Word mercury__cord__V_28_28;

              {
                mercury__cord__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__cord__V_28_28, 0) = ((MR_Box) (mercury__cord__B_23));
                MR_hl_field(MR_mktag(1), mercury__cord__V_28_28, 1) = ((MR_Box) (mercury__cord__Cs_3));
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__A_22;
                MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__V_28_28;

                mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
                mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
              }
              continue;
            }
            break;
        }
        return mercury__cord__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__cord__foldl_node_pred_5_p_4(
  MR_Word mercury__cord__TypeInfo_for_T_30,
  MR_Word mercury__cord__TypeInfo_for_U_31,
  MR_Word mercury__cord__P_1,
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Word mercury__cord__Cs_3,
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_4,
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__cord__succeeded;

        switch (MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box mercury__cord__X_10 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
              MR_Box mercury__cord__STATE_VARIABLE_Acc_19_43;
              MR_bool MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

              {
                mercury__cord__succeeded = mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__X_10, mercury__cord__STATE_VARIABLE_Acc_0_4, &mercury__cord__STATE_VARIABLE_Acc_19_43);
              }
              if (mercury__cord__succeeded)
                {
                  if ((mercury__cord__Cs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      *mercury__cord__STATE_VARIABLE_Acc_5 = mercury__cord__STATE_VARIABLE_Acc_19_43;
                      mercury__cord__succeeded = MR_TRUE;
                    }
                  else
                    {
                      MR_Word mercury__cord__Y_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 0)));
                      MR_Word mercury__cord__Ys_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 1)));

                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__Y_32;
                        MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__Ys_33;
                        MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4 = mercury__cord__STATE_VARIABLE_Acc_19_43;

                        mercury__cord__STATE_VARIABLE_Acc_0_4 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4;
                        mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
                        mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
                      }
                      continue;
                    }
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__cord__H_11 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
              MR_Word mercury__cord__T_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
              MR_Word mercury__cord__V_17_17;
              MR_Box mercury__cord__STATE_VARIABLE_Acc_19_19;

              {
                mercury__cord__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 0) = mercury__cord__H_11;
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 1) = ((MR_Box) (mercury__cord__T_12));
              }
              {
                mercury__cord__succeeded = mercury__list__foldl_4_p_4(mercury__cord__TypeInfo_for_T_30, mercury__cord__TypeInfo_for_U_31, mercury__cord__P_1, mercury__cord__V_17_17, mercury__cord__STATE_VARIABLE_Acc_0_4, &mercury__cord__STATE_VARIABLE_Acc_19_19);
              }
              if (mercury__cord__succeeded)
                {
                  if ((mercury__cord__Cs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      *mercury__cord__STATE_VARIABLE_Acc_5 = mercury__cord__STATE_VARIABLE_Acc_19_19;
                      mercury__cord__succeeded = MR_TRUE;
                    }
                  else
                    {
                      MR_Word mercury__cord__Y_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 0)));
                      MR_Word mercury__cord__Ys_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 1)));

                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__Y_13;
                        MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__Ys_14;
                        MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4 = mercury__cord__STATE_VARIABLE_Acc_19_19;

                        mercury__cord__STATE_VARIABLE_Acc_0_4 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4;
                        mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
                        mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
                      }
                      continue;
                    }
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__cord__A_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
              MR_Word mercury__cord__B_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
              MR_Word mercury__cord__V_28_28;

              {
                mercury__cord__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__cord__V_28_28, 0) = ((MR_Box) (mercury__cord__B_23));
                MR_hl_field(MR_mktag(1), mercury__cord__V_28_28, 1) = ((MR_Box) (mercury__cord__Cs_3));
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__A_22;
                MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__V_28_28;

                mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
                mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
              }
              continue;
            }
            break;
        }
        return mercury__cord__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__cord__foldl_node_pred_5_p_3(
  MR_Word mercury__cord__TypeInfo_for_T_30,
  MR_Word mercury__cord__TypeInfo_for_U_31,
  MR_Word mercury__cord__P_1,
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Word mercury__cord__Cs_3,
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_4,
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__cord__succeeded;

        switch (MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box mercury__cord__X_10 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
              MR_Box mercury__cord__STATE_VARIABLE_Acc_19_43;
              MR_bool MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

              {
                mercury__cord__succeeded = mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__X_10, mercury__cord__STATE_VARIABLE_Acc_0_4, &mercury__cord__STATE_VARIABLE_Acc_19_43);
              }
              if (mercury__cord__succeeded)
                {
                  if ((mercury__cord__Cs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      *mercury__cord__STATE_VARIABLE_Acc_5 = mercury__cord__STATE_VARIABLE_Acc_19_43;
                      mercury__cord__succeeded = MR_TRUE;
                    }
                  else
                    {
                      MR_Word mercury__cord__Y_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 0)));
                      MR_Word mercury__cord__Ys_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 1)));

                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__Y_32;
                        MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__Ys_33;
                        MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4 = mercury__cord__STATE_VARIABLE_Acc_19_43;

                        mercury__cord__STATE_VARIABLE_Acc_0_4 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4;
                        mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
                        mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
                      }
                      continue;
                    }
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__cord__H_11 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
              MR_Word mercury__cord__T_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
              MR_Word mercury__cord__V_17_17;
              MR_Box mercury__cord__STATE_VARIABLE_Acc_19_19;

              {
                mercury__cord__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 0) = mercury__cord__H_11;
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 1) = ((MR_Box) (mercury__cord__T_12));
              }
              {
                mercury__cord__succeeded = mercury__list__foldl_4_p_3(mercury__cord__TypeInfo_for_T_30, mercury__cord__TypeInfo_for_U_31, mercury__cord__P_1, mercury__cord__V_17_17, mercury__cord__STATE_VARIABLE_Acc_0_4, &mercury__cord__STATE_VARIABLE_Acc_19_19);
              }
              if (mercury__cord__succeeded)
                {
                  if ((mercury__cord__Cs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      *mercury__cord__STATE_VARIABLE_Acc_5 = mercury__cord__STATE_VARIABLE_Acc_19_19;
                      mercury__cord__succeeded = MR_TRUE;
                    }
                  else
                    {
                      MR_Word mercury__cord__Y_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 0)));
                      MR_Word mercury__cord__Ys_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 1)));

                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__Y_13;
                        MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__Ys_14;
                        MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4 = mercury__cord__STATE_VARIABLE_Acc_19_19;

                        mercury__cord__STATE_VARIABLE_Acc_0_4 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4;
                        mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
                        mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
                      }
                      continue;
                    }
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__cord__A_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
              MR_Word mercury__cord__B_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
              MR_Word mercury__cord__V_28_28;

              {
                mercury__cord__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__cord__V_28_28, 0) = ((MR_Box) (mercury__cord__B_23));
                MR_hl_field(MR_mktag(1), mercury__cord__V_28_28, 1) = ((MR_Box) (mercury__cord__Cs_3));
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__A_22;
                MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__V_28_28;

                mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
                mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
              }
              continue;
            }
            break;
        }
        return mercury__cord__succeeded;
      }
      break;
    }
}

void MR_CALL 
mercury__cord__foldl_node_pred_5_p_2(
  MR_Word mercury__cord__TypeInfo_for_T_30,
  MR_Word mercury__cord__TypeInfo_for_U_31,
  MR_Word mercury__cord__P_1,
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Word mercury__cord__Cs_3,
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_4,
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__cord__succeeded;

        switch (MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box mercury__cord__X_10 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
              MR_Box mercury__cord__STATE_VARIABLE_Acc_19_43;
              void MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

              {
                mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__X_10, mercury__cord__STATE_VARIABLE_Acc_0_4, &mercury__cord__STATE_VARIABLE_Acc_19_43);
              }
              if ((mercury__cord__Cs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                *mercury__cord__STATE_VARIABLE_Acc_5 = mercury__cord__STATE_VARIABLE_Acc_19_43;
              else
                {
                  MR_Word mercury__cord__Y_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 0)));
                  MR_Word mercury__cord__Ys_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__Y_32;
                    MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__Ys_33;
                    MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4 = mercury__cord__STATE_VARIABLE_Acc_19_43;

                    mercury__cord__STATE_VARIABLE_Acc_0_4 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4;
                    mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
                    mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
                  }
                  continue;
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__cord__H_11 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
              MR_Word mercury__cord__T_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
              MR_Word mercury__cord__V_17_17;
              MR_Box mercury__cord__STATE_VARIABLE_Acc_19_19;

              {
                mercury__cord__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 0) = mercury__cord__H_11;
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 1) = ((MR_Box) (mercury__cord__T_12));
              }
              {
                mercury__list__foldl_4_p_2(mercury__cord__TypeInfo_for_T_30, mercury__cord__TypeInfo_for_U_31, mercury__cord__P_1, mercury__cord__V_17_17, mercury__cord__STATE_VARIABLE_Acc_0_4, &mercury__cord__STATE_VARIABLE_Acc_19_19);
              }
              if ((mercury__cord__Cs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                *mercury__cord__STATE_VARIABLE_Acc_5 = mercury__cord__STATE_VARIABLE_Acc_19_19;
              else
                {
                  MR_Word mercury__cord__Y_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 0)));
                  MR_Word mercury__cord__Ys_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__Y_13;
                    MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__Ys_14;
                    MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4 = mercury__cord__STATE_VARIABLE_Acc_19_19;

                    mercury__cord__STATE_VARIABLE_Acc_0_4 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4;
                    mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
                    mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
                  }
                  continue;
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__cord__A_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
              MR_Word mercury__cord__B_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
              MR_Word mercury__cord__V_28_28;

              {
                mercury__cord__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__cord__V_28_28, 0) = ((MR_Box) (mercury__cord__B_23));
                MR_hl_field(MR_mktag(1), mercury__cord__V_28_28, 1) = ((MR_Box) (mercury__cord__Cs_3));
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__A_22;
                MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__V_28_28;

                mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
                mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
              }
              continue;
            }
            break;
        }
      }
      break;
    }
}

void MR_CALL 
mercury__cord__foldl_node_pred_5_p_1(
  MR_Word mercury__cord__TypeInfo_for_T_30,
  MR_Word mercury__cord__TypeInfo_for_U_31,
  MR_Word mercury__cord__P_1,
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Word mercury__cord__Cs_3,
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_4,
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__cord__succeeded;

        switch (MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box mercury__cord__X_10 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
              MR_Box mercury__cord__STATE_VARIABLE_Acc_19_43;
              void MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

              {
                mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__X_10, mercury__cord__STATE_VARIABLE_Acc_0_4, &mercury__cord__STATE_VARIABLE_Acc_19_43);
              }
              if ((mercury__cord__Cs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                *mercury__cord__STATE_VARIABLE_Acc_5 = mercury__cord__STATE_VARIABLE_Acc_19_43;
              else
                {
                  MR_Word mercury__cord__Y_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 0)));
                  MR_Word mercury__cord__Ys_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__Y_32;
                    MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__Ys_33;
                    MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4 = mercury__cord__STATE_VARIABLE_Acc_19_43;

                    mercury__cord__STATE_VARIABLE_Acc_0_4 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4;
                    mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
                    mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
                  }
                  continue;
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__cord__H_11 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
              MR_Word mercury__cord__T_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
              MR_Word mercury__cord__V_17_17;
              MR_Box mercury__cord__STATE_VARIABLE_Acc_19_19;

              {
                mercury__cord__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 0) = mercury__cord__H_11;
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 1) = ((MR_Box) (mercury__cord__T_12));
              }
              {
                mercury__list__foldl_4_p_1(mercury__cord__TypeInfo_for_T_30, mercury__cord__TypeInfo_for_U_31, mercury__cord__P_1, mercury__cord__V_17_17, mercury__cord__STATE_VARIABLE_Acc_0_4, &mercury__cord__STATE_VARIABLE_Acc_19_19);
              }
              if ((mercury__cord__Cs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                *mercury__cord__STATE_VARIABLE_Acc_5 = mercury__cord__STATE_VARIABLE_Acc_19_19;
              else
                {
                  MR_Word mercury__cord__Y_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 0)));
                  MR_Word mercury__cord__Ys_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__Y_13;
                    MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__Ys_14;
                    MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4 = mercury__cord__STATE_VARIABLE_Acc_19_19;

                    mercury__cord__STATE_VARIABLE_Acc_0_4 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4;
                    mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
                    mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
                  }
                  continue;
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__cord__A_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
              MR_Word mercury__cord__B_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
              MR_Word mercury__cord__V_28_28;

              {
                mercury__cord__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__cord__V_28_28, 0) = ((MR_Box) (mercury__cord__B_23));
                MR_hl_field(MR_mktag(1), mercury__cord__V_28_28, 1) = ((MR_Box) (mercury__cord__Cs_3));
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__A_22;
                MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__V_28_28;

                mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
                mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
              }
              continue;
            }
            break;
        }
      }
      break;
    }
}

void MR_CALL 
mercury__cord__foldl_node_pred_5_p_0(
  MR_Word mercury__cord__TypeInfo_for_T_30,
  MR_Word mercury__cord__TypeInfo_for_U_31,
  MR_Word mercury__cord__P_1,
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Word mercury__cord__Cs_3,
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_4,
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__cord__succeeded;

        switch (MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box mercury__cord__X_10 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
              MR_Box mercury__cord__STATE_VARIABLE_Acc_19_43;
              void MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_1, (MR_Integer) 1)));

              {
                mercury__cord__func_0(((MR_Box) mercury__cord__P_1), mercury__cord__X_10, mercury__cord__STATE_VARIABLE_Acc_0_4, &mercury__cord__STATE_VARIABLE_Acc_19_43);
              }
              if ((mercury__cord__Cs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                *mercury__cord__STATE_VARIABLE_Acc_5 = mercury__cord__STATE_VARIABLE_Acc_19_43;
              else
                {
                  MR_Word mercury__cord__Y_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 0)));
                  MR_Word mercury__cord__Ys_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__Y_32;
                    MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__Ys_33;
                    MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4 = mercury__cord__STATE_VARIABLE_Acc_19_43;

                    mercury__cord__STATE_VARIABLE_Acc_0_4 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4;
                    mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
                    mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
                  }
                  continue;
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__cord__H_11 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
              MR_Word mercury__cord__T_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
              MR_Word mercury__cord__V_17_17;
              MR_Box mercury__cord__STATE_VARIABLE_Acc_19_19;

              {
                mercury__cord__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 0) = mercury__cord__H_11;
                MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 1) = ((MR_Box) (mercury__cord__T_12));
              }
              {
                mercury__list__foldl_4_p_0(mercury__cord__TypeInfo_for_T_30, mercury__cord__TypeInfo_for_U_31, mercury__cord__P_1, mercury__cord__V_17_17, mercury__cord__STATE_VARIABLE_Acc_0_4, &mercury__cord__STATE_VARIABLE_Acc_19_19);
              }
              if ((mercury__cord__Cs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                *mercury__cord__STATE_VARIABLE_Acc_5 = mercury__cord__STATE_VARIABLE_Acc_19_19;
              else
                {
                  MR_Word mercury__cord__Y_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 0)));
                  MR_Word mercury__cord__Ys_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__Y_13;
                    MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__Ys_14;
                    MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4 = mercury__cord__STATE_VARIABLE_Acc_19_19;

                    mercury__cord__STATE_VARIABLE_Acc_0_4 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4;
                    mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
                    mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
                  }
                  continue;
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__cord__A_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
              MR_Word mercury__cord__B_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
              MR_Word mercury__cord__V_28_28;

              {
                mercury__cord__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__cord__V_28_28, 0) = ((MR_Box) (mercury__cord__B_23));
                MR_hl_field(MR_mktag(1), mercury__cord__V_28_28, 1) = ((MR_Box) (mercury__cord__Cs_3));
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__A_22;
                MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__V_28_28;

                mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
                mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
              }
              continue;
            }
            break;
        }
      }
      break;
    }
}

void MR_CALL 
mercury__cord__foldl_node_5_p_0(
  MR_Word mercury__cord__TypeInfo_for_T_30,
  MR_Word mercury__cord__TypeInfo_for_U_31,
  MR_Word mercury__cord__F_1,
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Word mercury__cord__Cs_3,
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_4,
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_5)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__cord__succeeded;

        switch (MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Box mercury__cord__X_10 = (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
              MR_Box mercury__cord__STATE_VARIABLE_Acc_19_43;
              MR_Box MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__cord__F_1, (MR_Integer) 1)));

              {
                mercury__cord__STATE_VARIABLE_Acc_19_43 = mercury__cord__func_0(((MR_Box) mercury__cord__F_1), mercury__cord__X_10, mercury__cord__STATE_VARIABLE_Acc_0_4);
              }
              if ((mercury__cord__Cs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                *mercury__cord__STATE_VARIABLE_Acc_5 = mercury__cord__STATE_VARIABLE_Acc_19_43;
              else
                {
                  MR_Word mercury__cord__Y_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 0)));
                  MR_Word mercury__cord__Ys_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__Y_32;
                    MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__Ys_33;
                    MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4 = mercury__cord__STATE_VARIABLE_Acc_19_43;

                    mercury__cord__STATE_VARIABLE_Acc_0_4 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4;
                    mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
                    mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
                  }
                  continue;
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__cord__H_11 = (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0));
              MR_Word mercury__cord__T_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
              MR_Word mercury__cord__V_18_18;
              MR_Box mercury__cord__STATE_VARIABLE_Acc_19_19;

              {
                mercury__cord__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__cord__V_18_18, 0) = mercury__cord__H_11;
                MR_hl_field(MR_mktag(1), mercury__cord__V_18_18, 1) = ((MR_Box) (mercury__cord__T_12));
              }
              {
                mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(mercury__cord__F_1, mercury__cord__V_18_18, mercury__cord__STATE_VARIABLE_Acc_0_4, &mercury__cord__STATE_VARIABLE_Acc_19_19);
              }
              if ((mercury__cord__Cs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                *mercury__cord__STATE_VARIABLE_Acc_5 = mercury__cord__STATE_VARIABLE_Acc_19_19;
              else
                {
                  MR_Word mercury__cord__Y_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 0)));
                  MR_Word mercury__cord__Ys_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Cs_3, (MR_Integer) 1)));

                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__Y_13;
                    MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__Ys_14;
                    MR_Box mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4 = mercury__cord__STATE_VARIABLE_Acc_19_19;

                    mercury__cord__STATE_VARIABLE_Acc_0_4 = mercury__cord__STATE_VARIABLE_Acc_0__tmp_copy_4;
                    mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
                    mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
                  }
                  continue;
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__cord__A_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
              MR_Word mercury__cord__B_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__2_2, (MR_Integer) 1)));
              MR_Word mercury__cord__V_28_28;

              {
                mercury__cord__V_28_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__cord__V_28_28, 0) = ((MR_Box) (mercury__cord__B_23));
                MR_hl_field(MR_mktag(1), mercury__cord__V_28_28, 1) = ((MR_Box) (mercury__cord__Cs_3));
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__A_22;
                MR_Word mercury__cord__Cs__tmp_copy_3 = mercury__cord__V_28_28;

                mercury__cord__Cs_3 = mercury__cord__Cs__tmp_copy_3;
                mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
              }
              continue;
            }
            break;
        }
      }
      break;
    }
}

void MR_CALL 
mercury__cord__filter_node_4_p_0(
  MR_Word mercury__cord__TypeInfo_for_T_29,
  MR_Word mercury__cord__P_5,
  MR_Word mercury__cord__Node_6,
  MR_Word * mercury__cord__Trues_7,
  MR_Word * mercury__cord__Falses_8)
{
  {
    MR_bool mercury__cord__succeeded;

    switch (MR_tag((MR_Word) mercury__cord__Node_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box mercury__cord__X_9 = (MR_hl_field(MR_mktag(0), mercury__cord__Node_6, (MR_Integer) 0));
          MR_bool MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__cord__P_5, (MR_Integer) 1)));

          {
            mercury__cord__succeeded = mercury__cord__func_0(((MR_Box) mercury__cord__P_5), mercury__cord__X_9);
          }
          if (mercury__cord__succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *mercury__cord__Trues_7 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__Node_6));
              }
              *mercury__cord__Falses_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
          else
            {
              *mercury__cord__Trues_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *mercury__cord__Falses_8 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__Node_6));
              }
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box mercury__cord__H_10 = (MR_hl_field(MR_mktag(1), mercury__cord__Node_6, (MR_Integer) 0));
          MR_Word mercury__cord__T_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Node_6, (MR_Integer) 1)));
          MR_Word mercury__cord__TrueList_12;
          MR_Word mercury__cord__FalseList_13;
          MR_Word mercury__cord__V_24_24;

          {
            mercury__cord__V_24_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__cord__V_24_24, 0) = mercury__cord__H_10;
            MR_hl_field(MR_mktag(1), mercury__cord__V_24_24, 1) = ((MR_Box) (mercury__cord__T_11));
          }
          {
            mercury__list__filter_4_p_0(mercury__cord__TypeInfo_for_T_29, mercury__cord__P_5, mercury__cord__V_24_24, &mercury__cord__TrueList_12, &mercury__cord__FalseList_13);
          }
          if ((mercury__cord__TrueList_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *mercury__cord__Trues_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          else
            {
              MR_Box mercury__cord__TH_14 = (MR_hl_field(MR_mktag(1), mercury__cord__TrueList_12, (MR_Integer) 0));
              MR_Word mercury__cord__TT_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__TrueList_12, (MR_Integer) 1)));
              MR_Word mercury__cord__V_25_25;

              {
                mercury__cord__V_25_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__cord__V_25_25, 0) = mercury__cord__TH_14;
                MR_hl_field(MR_mktag(1), mercury__cord__V_25_25, 1) = ((MR_Box) (mercury__cord__TT_15));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *mercury__cord__Trues_7 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__V_25_25));
              }
            }
          if ((mercury__cord__FalseList_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *mercury__cord__Falses_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          else
            {
              MR_Box mercury__cord__FH_16 = (MR_hl_field(MR_mktag(1), mercury__cord__FalseList_13, (MR_Integer) 0));
              MR_Word mercury__cord__FT_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__FalseList_13, (MR_Integer) 1)));
              MR_Word mercury__cord__V_26_26;

              {
                mercury__cord__V_26_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__cord__V_26_26, 0) = mercury__cord__FH_16;
                MR_hl_field(MR_mktag(1), mercury__cord__V_26_26, 1) = ((MR_Box) (mercury__cord__FT_17));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *mercury__cord__Falses_8 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__V_26_26));
              }
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mercury__cord__A_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_6, (MR_Integer) 0)));
          MR_Word mercury__cord__B_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_6, (MR_Integer) 1)));
          MR_Word mercury__cord__CATrues_20;
          MR_Word mercury__cord__CAFalses_21;
          MR_Word mercury__cord__CBTrues_22;
          MR_Word mercury__cord__CBFalses_23;

          {
            mercury__cord__filter_node_4_p_0(mercury__cord__TypeInfo_for_T_29, mercury__cord__P_5, mercury__cord__A_18, &mercury__cord__CATrues_20, &mercury__cord__CAFalses_21);
          }
          {
            mercury__cord__filter_node_4_p_0(mercury__cord__TypeInfo_for_T_29, mercury__cord__P_5, mercury__cord__B_19, &mercury__cord__CBTrues_22, &mercury__cord__CBFalses_23);
          }
          {
            *mercury__cord__Trues_7 = mercury__cord__f_43_43_2_f_0(mercury__cord__TypeInfo_for_T_29, mercury__cord__CATrues_20, mercury__cord__CBTrues_22);
          }
          {
            *mercury__cord__Falses_8 = mercury__cord__f_43_43_2_f_0(mercury__cord__TypeInfo_for_T_29, mercury__cord__CAFalses_21, mercury__cord__CBFalses_23);
          }
        }
        break;
    }
  }
}

void MR_CALL 
mercury__cord__filter_node_3_p_0(
  MR_Word mercury__cord__TypeInfo_for_T_20,
  MR_Word mercury__cord__P_4,
  MR_Word mercury__cord__Node_5,
  MR_Word * mercury__cord__Trues_6)
{
  {
    MR_bool mercury__cord__succeeded;

    switch (MR_tag((MR_Word) mercury__cord__Node_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box mercury__cord__X_7 = (MR_hl_field(MR_mktag(0), mercury__cord__Node_5, (MR_Integer) 0));
          MR_bool MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__cord__P_4, (MR_Integer) 1)));

          {
            mercury__cord__succeeded = mercury__cord__func_0(((MR_Box) mercury__cord__P_4), mercury__cord__X_7);
          }
          if (mercury__cord__succeeded)
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mercury__cord__Trues_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__Node_5));
            }
          else
            *mercury__cord__Trues_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box mercury__cord__H_8 = (MR_hl_field(MR_mktag(1), mercury__cord__Node_5, (MR_Integer) 0));
          MR_Word mercury__cord__T_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Node_5, (MR_Integer) 1)));
          MR_Word mercury__cord__TrueList_10;
          MR_Word mercury__cord__V_17_17;

          {
            mercury__cord__V_17_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 0) = mercury__cord__H_8;
            MR_hl_field(MR_mktag(1), mercury__cord__V_17_17, 1) = ((MR_Box) (mercury__cord__T_9));
          }
          {
            mercury__list__filter_3_p_0(mercury__cord__TypeInfo_for_T_20, mercury__cord__P_4, mercury__cord__V_17_17, &mercury__cord__TrueList_10);
          }
          if ((mercury__cord__TrueList_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *mercury__cord__Trues_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          else
            {
              MR_Box mercury__cord__TH_11 = (MR_hl_field(MR_mktag(1), mercury__cord__TrueList_10, (MR_Integer) 0));
              MR_Word mercury__cord__TT_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__TrueList_10, (MR_Integer) 1)));
              MR_Word mercury__cord__V_18_18;

              {
                mercury__cord__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__cord__V_18_18, 0) = mercury__cord__TH_11;
                MR_hl_field(MR_mktag(1), mercury__cord__V_18_18, 1) = ((MR_Box) (mercury__cord__TT_12));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *mercury__cord__Trues_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__V_18_18));
              }
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mercury__cord__A_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_5, (MR_Integer) 0)));
          MR_Word mercury__cord__B_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_5, (MR_Integer) 1)));
          MR_Word mercury__cord__CATrues_15;
          MR_Word mercury__cord__CBTrues_16;

          {
            mercury__cord__filter_node_3_p_0(mercury__cord__TypeInfo_for_T_20, mercury__cord__P_4, mercury__cord__A_13, &mercury__cord__CATrues_15);
          }
          {
            mercury__cord__filter_node_3_p_0(mercury__cord__TypeInfo_for_T_20, mercury__cord__P_4, mercury__cord__B_14, &mercury__cord__CBTrues_16);
          }
          {
            *mercury__cord__Trues_6 = mercury__cord__f_43_43_2_f_0(mercury__cord__TypeInfo_for_T_20, mercury__cord__CATrues_15, mercury__cord__CBTrues_16);
          }
        }
        break;
    }
  }
}

void MR_CALL 
mercury__cord__map_pred_node_3_p_0(
  MR_Word mercury__cord__TypeInfo_for_T_17,
  MR_Word mercury__cord__TypeInfo_for_U_18,
  MR_Word mercury__cord__P_4,
  MR_Word mercury__cord__Node_5,
  MR_Word * mercury__cord__PNode_6)
{
  {
    MR_bool mercury__cord__succeeded;

    switch (MR_tag((MR_Word) mercury__cord__Node_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box mercury__cord__X_7 = (MR_hl_field(MR_mktag(0), mercury__cord__Node_5, (MR_Integer) 0));
          MR_Box mercury__cord__PX_8;
          void MR_CALL (* mercury__cord__func_1)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_4, (MR_Integer) 1)));

          {
            mercury__cord__func_1(((MR_Box) mercury__cord__P_4), mercury__cord__X_7, &mercury__cord__PX_8);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *mercury__cord__PNode_6 = base;
            MR_hl_field(MR_mktag(0), base, 0) = mercury__cord__PX_8;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box mercury__cord__H_9 = (MR_hl_field(MR_mktag(1), mercury__cord__Node_5, (MR_Integer) 0));
          MR_Word mercury__cord__T_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Node_5, (MR_Integer) 1)));
          MR_Box mercury__cord__PH_11;
          MR_Word mercury__cord__PT_12;
          void MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__cord__P_4, (MR_Integer) 1)));

          {
            mercury__cord__func_0(((MR_Box) mercury__cord__P_4), mercury__cord__H_9, &mercury__cord__PH_11);
          }
          {
            mercury__list__map_3_p_0(mercury__cord__TypeInfo_for_T_17, mercury__cord__TypeInfo_for_U_18, mercury__cord__P_4, mercury__cord__T_10, &mercury__cord__PT_12);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *mercury__cord__PNode_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = mercury__cord__PH_11;
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__cord__PT_12));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mercury__cord__A_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_5, (MR_Integer) 0)));
          MR_Word mercury__cord__B_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_5, (MR_Integer) 1)));
          MR_Word mercury__cord__PA_15;
          MR_Word mercury__cord__PB_16;

          {
            mercury__cord__map_pred_node_3_p_0(mercury__cord__TypeInfo_for_T_17, mercury__cord__TypeInfo_for_U_18, mercury__cord__P_4, mercury__cord__A_13, &mercury__cord__PA_15);
          }
          {
            mercury__cord__map_pred_node_3_p_0(mercury__cord__TypeInfo_for_T_17, mercury__cord__TypeInfo_for_U_18, mercury__cord__P_4, mercury__cord__B_14, &mercury__cord__PB_16);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *mercury__cord__PNode_6 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__cord__PA_15));
            MR_hl_field(MR_mktag(2), base, 1) = ((MR_Box) (mercury__cord__PB_16));
          }
        }
        break;
    }
  }
}

MR_Word MR_CALL 
mercury__cord__map_node_2_f_0(
  MR_Word mercury__cord__TypeInfo_for_T_17,
  MR_Word mercury__cord__TypeInfo_for_U_18,
  MR_Word mercury__cord__F_4,
  MR_Word mercury__cord__Node_5)
{
  {
    MR_bool mercury__cord__succeeded;
    MR_Word mercury__cord__PNode_6;

    switch (MR_tag((MR_Word) mercury__cord__Node_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Box mercury__cord__X_7 = (MR_hl_field(MR_mktag(0), mercury__cord__Node_5, (MR_Integer) 0));
          MR_Box mercury__cord__V_16_16;
          MR_Box MR_CALL (* mercury__cord__func_1)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__cord__F_4, (MR_Integer) 1)));

          {
            mercury__cord__V_16_16 = mercury__cord__func_1(((MR_Box) mercury__cord__F_4), mercury__cord__X_7);
          }
          {
            mercury__cord__PNode_6 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mercury__cord__PNode_6, 0) = mercury__cord__V_16_16;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box mercury__cord__H_8 = (MR_hl_field(MR_mktag(1), mercury__cord__Node_5, (MR_Integer) 0));
          MR_Word mercury__cord__T_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Node_5, (MR_Integer) 1)));
          MR_Box mercury__cord__V_14_14;
          MR_Word mercury__cord__V_15_15;
          MR_Box MR_CALL (* mercury__cord__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__cord__F_4, (MR_Integer) 1)));

          {
            mercury__cord__V_14_14 = mercury__cord__func_0(((MR_Box) mercury__cord__F_4), mercury__cord__H_8);
          }
          {
            mercury__cord__V_15_15 = mercury__list__map_2_f_0(mercury__cord__TypeInfo_for_T_17, mercury__cord__TypeInfo_for_U_18, mercury__cord__F_4, mercury__cord__T_9);
          }
          {
            mercury__cord__PNode_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__cord__PNode_6, 0) = mercury__cord__V_14_14;
            MR_hl_field(MR_mktag(1), mercury__cord__PNode_6, 1) = ((MR_Box) (mercury__cord__V_15_15));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mercury__cord__A_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_5, (MR_Integer) 0)));
          MR_Word mercury__cord__B_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_5, (MR_Integer) 1)));
          MR_Word mercury__cord__V_12_12;
          MR_Word mercury__cord__V_13_13;

          {
            mercury__cord__V_12_12 = mercury__cord__map_node_2_f_0(mercury__cord__TypeInfo_for_T_17, mercury__cord__TypeInfo_for_U_18, mercury__cord__F_4, mercury__cord__A_10);
          }
          {
            mercury__cord__V_13_13 = mercury__cord__map_node_2_f_0(mercury__cord__TypeInfo_for_T_17, mercury__cord__TypeInfo_for_U_18, mercury__cord__F_4, mercury__cord__B_11);
          }
          {
            mercury__cord__PNode_6 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(2), mercury__cord__PNode_6, 0) = ((MR_Box) (mercury__cord__V_12_12));
            MR_hl_field(MR_mktag(2), mercury__cord__PNode_6, 1) = ((MR_Box) (mercury__cord__V_13_13));
          }
        }
        break;
    }
    return mercury__cord__PNode_6;
  }
}

void MR_CALL 
mercury__cord__member_node_2_p_0(
  MR_Word mercury__cord__TypeInfo_for_T_9,
  MR_Box * mercury__cord__X_3,
  MR_Word mercury__cord__Node_4,
  MR_Cont mercury__cord__cont,
  void * mercury__cord__cont_env_ptr)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__cord__succeeded;

        switch (MR_tag((MR_Word) mercury__cord__Node_4)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *mercury__cord__X_3 = (MR_hl_field(MR_mktag(0), mercury__cord__Node_4, (MR_Integer) 0));
              {
                mercury__cord__cont(mercury__cord__cont_env_ptr);
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__cord__H_5 = (MR_hl_field(MR_mktag(1), mercury__cord__Node_4, (MR_Integer) 0));
              MR_Word mercury__cord__T_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Node_4, (MR_Integer) 1)));

              *mercury__cord__X_3 = mercury__cord__H_5;
              {
                mercury__cord__cont(mercury__cord__cont_env_ptr);
              }
              {
                mercury__list__member_2_p_1(mercury__cord__TypeInfo_for_T_9, mercury__cord__X_3, mercury__cord__T_6, mercury__cord__cont, mercury__cord__cont_env_ptr);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__cord__A_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_4, (MR_Integer) 0)));
              MR_Word mercury__cord__B_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_4, (MR_Integer) 1)));

              {
                mercury__cord__member_node_2_p_0(mercury__cord__TypeInfo_for_T_9, mercury__cord__X_3, mercury__cord__A_7, mercury__cord__cont, mercury__cord__cont_env_ptr);
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__cord__Node__tmp_copy_4 = mercury__cord__B_8;

                mercury__cord__Node_4 = mercury__cord__Node__tmp_copy_4;
              }
              continue;
            }
            break;
        }
      }
      break;
    }
}

void MR_CALL 
mercury__cord__get_last_node_2_p_0(
  MR_Word mercury__cord__TypeInfo_for_T_11,
  MR_Word mercury__cord__Node_3,
  MR_Box * mercury__cord__Last_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__cord__succeeded;

        switch (MR_tag((MR_Word) mercury__cord__Node_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *mercury__cord__Last_4 = (MR_hl_field(MR_mktag(0), mercury__cord__Node_3, (MR_Integer) 0));
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__cord__Head_5 = (MR_hl_field(MR_mktag(1), mercury__cord__Node_3, (MR_Integer) 0));
              MR_Word mercury__cord__Tail_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Node_3, (MR_Integer) 1)));

              if ((mercury__cord__Tail_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                *mercury__cord__Last_4 = mercury__cord__Head_5;
              else
                {
                  mercury__list__det_last_2_p_0(mercury__cord__TypeInfo_for_T_11, mercury__cord__Tail_6, mercury__cord__Last_4);
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__cord__B_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_3, (MR_Integer) 1)));
              MR_Word mercury__cord__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_3, (MR_Integer) 0)));

              /* direct tailcall eliminated */
              {
                MR_Word mercury__cord__Node__tmp_copy_3 = mercury__cord__B_10;

                mercury__cord__Node_3 = mercury__cord__Node__tmp_copy_3;
              }
              continue;
            }
            break;
        }
      }
      break;
    }
}

void MR_CALL 
mercury__cord__get_first_node_2_p_0(
  MR_Word mercury__cord__TypeInfo_for_T_8,
  MR_Word mercury__cord__Node_3,
  MR_Box * mercury__cord__Head_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__cord__succeeded;

        switch (MR_tag((MR_Word) mercury__cord__Node_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *mercury__cord__Head_4 = (MR_hl_field(MR_mktag(0), mercury__cord__Node_3, (MR_Integer) 0));
            break;
          case (MR_Integer) 1:
            {
              MR_Word mercury__cord__V_5_5;

              *mercury__cord__Head_4 = (MR_hl_field(MR_mktag(1), mercury__cord__Node_3, (MR_Integer) 0));
              mercury__cord__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Node_3, (MR_Integer) 1)));
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__cord__A_6 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_3, (MR_Integer) 0)));
              MR_Word mercury__cord__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_3, (MR_Integer) 1)));

              /* direct tailcall eliminated */
              {
                MR_Word mercury__cord__Node__tmp_copy_3 = mercury__cord__A_6;

                mercury__cord__Node_3 = mercury__cord__Node__tmp_copy_3;
              }
              continue;
            }
            break;
        }
      }
      break;
    }
}

void MR_CALL 
mercury__cord__split_last_node_3_p_0(
  MR_Word mercury__cord__TypeInfo_for_T_17,
  MR_Word mercury__cord__Node_4,
  MR_Word * mercury__cord__AllButLast_5,
  MR_Box * mercury__cord__Last_6)
{
  {
    MR_bool mercury__cord__succeeded;

    switch (MR_tag((MR_Word) mercury__cord__Node_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *mercury__cord__Last_6 = (MR_hl_field(MR_mktag(0), mercury__cord__Node_4, (MR_Integer) 0));
          *mercury__cord__AllButLast_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box mercury__cord__H_7 = (MR_hl_field(MR_mktag(1), mercury__cord__Node_4, (MR_Integer) 0));
          MR_Word mercury__cord__T_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Node_4, (MR_Integer) 1)));
          MR_Word mercury__cord__AllButLastList_9;

          {
            mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_112_108_105_116_95_108_105_115_116_95_108_97_115_116_95_95_91_49_93_95_48_4_p_0(mercury__cord__H_7, mercury__cord__T_8, &mercury__cord__AllButLastList_9, mercury__cord__Last_6);
          }
          if ((mercury__cord__AllButLastList_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *mercury__cord__AllButLast_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          else
            {
              MR_Box mercury__cord__AllButLastHead_10 = (MR_hl_field(MR_mktag(1), mercury__cord__AllButLastList_9, (MR_Integer) 0));
              MR_Word mercury__cord__AllButLastTail_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__AllButLastList_9, (MR_Integer) 1)));
              MR_Word mercury__cord__V_16_16;

              {
                mercury__cord__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__cord__V_16_16, 0) = mercury__cord__AllButLastHead_10;
                MR_hl_field(MR_mktag(1), mercury__cord__V_16_16, 1) = ((MR_Box) (mercury__cord__AllButLastTail_11));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *mercury__cord__AllButLast_5 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__V_16_16));
              }
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mercury__cord__A_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_4, (MR_Integer) 0)));
          MR_Word mercury__cord__B0_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_4, (MR_Integer) 1)));
          MR_Word mercury__cord__B_14;
          MR_Word mercury__cord__V_15_15;

          {
            mercury__cord__split_last_node_3_p_0(mercury__cord__TypeInfo_for_T_17, mercury__cord__B0_13, &mercury__cord__B_14, mercury__cord__Last_6);
          }
          {
            mercury__cord__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__cord__V_15_15, 0) = ((MR_Box) (mercury__cord__A_12));
          }
          {
            *mercury__cord__AllButLast_5 = mercury__cord__f_43_43_2_f_0(mercury__cord__TypeInfo_for_T_17, mercury__cord__V_15_15, mercury__cord__B_14);
          }
        }
        break;
    }
  }
}

void MR_CALL 
mercury__cord__head_tail_node_3_p_0(
  MR_Word mercury__cord__TypeInfo_for_T_17,
  MR_Word mercury__cord__Node_4,
  MR_Box * mercury__cord__Head_5,
  MR_Word * mercury__cord__Tail_6)
{
  {
    MR_bool mercury__cord__succeeded;

    switch (MR_tag((MR_Word) mercury__cord__Node_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *mercury__cord__Head_5 = (MR_hl_field(MR_mktag(0), mercury__cord__Node_4, (MR_Integer) 0));
          *mercury__cord__Tail_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mercury__cord__T_8;

          *mercury__cord__Head_5 = (MR_hl_field(MR_mktag(1), mercury__cord__Node_4, (MR_Integer) 0));
          mercury__cord__T_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Node_4, (MR_Integer) 1)));
          if ((mercury__cord__T_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *mercury__cord__Tail_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          else
            {
              MR_Box mercury__cord__TH_9 = (MR_hl_field(MR_mktag(1), mercury__cord__T_8, (MR_Integer) 0));
              MR_Word mercury__cord__TT_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__T_8, (MR_Integer) 1)));
              MR_Word mercury__cord__V_16_16;

              {
                mercury__cord__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__cord__V_16_16, 0) = mercury__cord__TH_9;
                MR_hl_field(MR_mktag(1), mercury__cord__V_16_16, 1) = ((MR_Box) (mercury__cord__TT_10));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *mercury__cord__Tail_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__V_16_16));
              }
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mercury__cord__A0_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_4, (MR_Integer) 0)));
          MR_Word mercury__cord__B_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__Node_4, (MR_Integer) 1)));
          MR_Word mercury__cord__AC_13;

          {
            mercury__cord__head_tail_node_3_p_0(mercury__cord__TypeInfo_for_T_17, mercury__cord__A0_11, mercury__cord__Head_5, &mercury__cord__AC_13);
          }
          if ((mercury__cord__AC_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mercury__cord__Tail_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__B_12));
            }
          else
            {
              MR_Word mercury__cord__A_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__AC_13, (MR_Integer) 0)));
              MR_Word mercury__cord__V_15_15;

              {
                mercury__cord__V_15_15 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), mercury__cord__V_15_15, 0) = ((MR_Box) (mercury__cord__A_14));
                MR_hl_field(MR_mktag(2), mercury__cord__V_15_15, 1) = ((MR_Box) (mercury__cord__B_12));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *mercury__cord__Tail_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__V_15_15));
              }
            }
        }
        break;
    }
  }
}

MR_Word MR_CALL 
mercury__cord__cord_list_to_list_2_2_f_0(
  MR_Word mercury__cord__TypeInfo_for_T_9,
  MR_Word mercury__cord__HeadVar__1_1,
  MR_Word mercury__cord__L_2)
{
  {
    MR_bool mercury__cord__succeeded;
    MR_Word mercury__cord__HeadVar__3_3;

    if ((mercury__cord__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__cord__HeadVar__3_3 = mercury__cord__L_2;
    else
      {
        MR_Word mercury__cord__N_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__cord__V_7_7;
        MR_Word mercury__cord__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        {
          mercury__cord__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__cord__V_7_7, 0) = ((MR_Box) (mercury__cord__N_5));
          MR_hl_field(MR_mktag(1), mercury__cord__V_7_7, 1) = ((MR_Box) (mercury__cord__V_8_8));
        }
        {
          mercury__cord__HeadVar__3_3 = mercury__cord__list_2_2_f_0(mercury__cord__TypeInfo_for_T_9, mercury__cord__V_7_7, mercury__cord__L_2);
        }
      }
    return mercury__cord__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__cord__condense_2_1_f_0(
  MR_Word mercury__cord__TypeInfo_for_T_11,
  MR_Word mercury__cord__HeadVar__1_1)
{
  {
    MR_bool mercury__cord__succeeded;
    MR_Word mercury__cord__HeadVar__2_2;

    switch (MR_tag((MR_Word) mercury__cord__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mercury__cord__HeadVar__2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__cord__HeadVar__1_1, (MR_Integer) 0)));
        break;
      case (MR_Integer) 1:
        {
          MR_Word mercury__cord__C_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word mercury__cord__L_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 1)));
          MR_Word mercury__cord__V_6_6;

          {
            mercury__cord__V_6_6 = mercury__cord__cord_list_to_cord_1_f_0(mercury__cord__TypeInfo_for_T_11, mercury__cord__L_5);
          }
          {
            mercury__cord__HeadVar__2_2 = mercury__cord__f_43_43_2_f_0(mercury__cord__TypeInfo_for_T_11, mercury__cord__C_4, mercury__cord__V_6_6);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mercury__cord__Left0_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__1_1, (MR_Integer) 0)));
          MR_Word mercury__cord__Right0_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__HeadVar__1_1, (MR_Integer) 1)));
          MR_Word mercury__cord__Left_9;
          MR_Word mercury__cord__Right_10;

          {
            mercury__cord__Left_9 = mercury__cord__condense_2_1_f_0(mercury__cord__TypeInfo_for_T_11, mercury__cord__Left0_7);
          }
          {
            mercury__cord__Right_10 = mercury__cord__condense_2_1_f_0(mercury__cord__TypeInfo_for_T_11, mercury__cord__Right0_8);
          }
          {
            mercury__cord__HeadVar__2_2 = mercury__cord__f_43_43_2_f_0(mercury__cord__TypeInfo_for_T_11, mercury__cord__Left_9, mercury__cord__Right_10);
          }
        }
        break;
    }
    return mercury__cord__HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
mercury__cord__list_2_2_f_0(
  MR_Word mercury__cord__TypeInfo_for_T_19,
  MR_Word mercury__cord__HeadVar__1_1,
  MR_Word mercury__cord__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__cord__succeeded;
        MR_Word mercury__cord__L_3;

        if ((mercury__cord__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__cord__L_3 = mercury__cord__HeadVar__2_2;
        else
          {
            MR_Word mercury__cord__N_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__cord__Ns_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 1)));

            switch (MR_tag((MR_Word) mercury__cord__N_5)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Box mercury__cord__X_9 = (MR_hl_field(MR_mktag(0), mercury__cord__N_5, (MR_Integer) 0));
                  MR_Word mercury__cord__V_18_18;

                  {
                    mercury__cord__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__cord__V_18_18, 0) = mercury__cord__X_9;
                    MR_hl_field(MR_mktag(1), mercury__cord__V_18_18, 1) = ((MR_Box) (mercury__cord__HeadVar__2_2));
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__cord__HeadVar__1__tmp_copy_1 = mercury__cord__Ns_6;
                    MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__V_18_18;

                    mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
                    mercury__cord__HeadVar__1_1 = mercury__cord__HeadVar__1__tmp_copy_1;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Box mercury__cord__H_10 = (MR_hl_field(MR_mktag(1), mercury__cord__N_5, (MR_Integer) 0));
                  MR_Word mercury__cord__T_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__N_5, (MR_Integer) 1)));
                  MR_Word mercury__cord__V_16_16;
                  MR_Word mercury__cord__V_17_17;

                  {
                    mercury__list__append_3_p_1(mercury__cord__TypeInfo_for_T_19, mercury__cord__T_11, mercury__cord__HeadVar__2_2, &mercury__cord__V_17_17);
                  }
                  {
                    mercury__cord__V_16_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__cord__V_16_16, 0) = mercury__cord__H_10;
                    MR_hl_field(MR_mktag(1), mercury__cord__V_16_16, 1) = ((MR_Box) (mercury__cord__V_17_17));
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__cord__HeadVar__1__tmp_copy_1 = mercury__cord__Ns_6;
                    MR_Word mercury__cord__HeadVar__2__tmp_copy_2 = mercury__cord__V_16_16;

                    mercury__cord__HeadVar__2_2 = mercury__cord__HeadVar__2__tmp_copy_2;
                    mercury__cord__HeadVar__1_1 = mercury__cord__HeadVar__1__tmp_copy_1;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word mercury__cord__A_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__N_5, (MR_Integer) 0)));
                  MR_Word mercury__cord__B_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__cord__N_5, (MR_Integer) 1)));
                  MR_Word mercury__cord__V_14_14;
                  MR_Word mercury__cord__V_15_15;

                  {
                    mercury__cord__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__cord__V_15_15, 0) = ((MR_Box) (mercury__cord__A_12));
                    MR_hl_field(MR_mktag(1), mercury__cord__V_15_15, 1) = ((MR_Box) (mercury__cord__Ns_6));
                  }
                  {
                    mercury__cord__V_14_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__cord__V_14_14, 0) = ((MR_Box) (mercury__cord__B_13));
                    MR_hl_field(MR_mktag(1), mercury__cord__V_14_14, 1) = ((MR_Box) (mercury__cord__V_15_15));
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__cord__HeadVar__1__tmp_copy_1 = mercury__cord__V_14_14;

                    mercury__cord__HeadVar__1_1 = mercury__cord__HeadVar__1__tmp_copy_1;
                  }
                  continue;
                }
                break;
            }
          }
        return mercury__cord__L_3;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__cord__equal_2_p_0(
  MR_Word mercury__cord__TypeInfo_for_T_6,
  MR_Word mercury__cord__CA_3,
  MR_Word mercury__cord__CB_4)
{
  {
    MR_bool mercury__cord__succeeded;
    MR_Word mercury__cord__V_5_5;
    MR_Word mercury__cord__V_7_7;

    if ((mercury__cord__CA_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__cord__V_5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word mercury__cord__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__CA_3, (MR_Integer) 0)));
        MR_Word mercury__cord__V_11_11;
        MR_Word mercury__cord__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        MR_Word mercury__cord__V_13_13;

        {
          mercury__cord__V_11_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__cord__V_11_11, 0) = ((MR_Box) (mercury__cord__N_10));
          MR_hl_field(MR_mktag(1), mercury__cord__V_11_11, 1) = ((MR_Box) (mercury__cord__V_12_12));
        }
        mercury__cord__V_13_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          mercury__cord__V_5_5 = mercury__cord__list_2_2_f_0(mercury__cord__TypeInfo_for_T_6, mercury__cord__V_11_11, mercury__cord__V_13_13);
        }
      }
    if ((mercury__cord__CB_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__cord__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word mercury__cord__N_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__CB_4, (MR_Integer) 0)));
        MR_Word mercury__cord__V_15_15;
        MR_Word mercury__cord__V_16_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        MR_Word mercury__cord__V_17_17;

        {
          mercury__cord__V_15_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__cord__V_15_15, 0) = ((MR_Box) (mercury__cord__N_14));
          MR_hl_field(MR_mktag(1), mercury__cord__V_15_15, 1) = ((MR_Box) (mercury__cord__V_16_16));
        }
        mercury__cord__V_17_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          mercury__cord__V_7_7 = mercury__cord__list_2_2_f_0(mercury__cord__TypeInfo_for_T_6, mercury__cord__V_15_15, mercury__cord__V_17_17);
        }
      }
    {
      mercury__cord__succeeded = mercury__list____Unify____list_1_0(mercury__cord__TypeInfo_for_T_6, mercury__cord__V_5_5, mercury__cord__V_7_7);
    }
    return mercury__cord__succeeded;
  }
}

void MR_CALL 
mercury__cord__map_foldl3_9_p_0(
  MR_Word mercury__cord__TypeInfo_for_A_35,
  MR_Word mercury__cord__TypeInfo_for_B_36,
  MR_Word mercury__cord__TypeInfo_for_C_37,
  MR_Word mercury__cord__TypeInfo_for_D_38,
  MR_Word mercury__cord__TypeInfo_for_E_39,
  MR_Word mercury__cord__HeadVar__1_1,
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Word * mercury__cord__HeadVar__3_3,
  MR_Box mercury__cord__STATE_VARIABLE_A_0_4,
  MR_Box * mercury__cord__STATE_VARIABLE_A_5,
  MR_Box mercury__cord__STATE_VARIABLE_B_0_6,
  MR_Box * mercury__cord__STATE_VARIABLE_B_7,
  MR_Box mercury__cord__STATE_VARIABLE_C_0_8,
  MR_Box * mercury__cord__STATE_VARIABLE_C_9)
{
  {
    MR_bool mercury__cord__succeeded;

    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__cord__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *mercury__cord__STATE_VARIABLE_C_9 = mercury__cord__STATE_VARIABLE_C_0_8;
        *mercury__cord__STATE_VARIABLE_B_7 = mercury__cord__STATE_VARIABLE_B_0_6;
        *mercury__cord__STATE_VARIABLE_A_5 = mercury__cord__STATE_VARIABLE_A_0_4;
      }
    else
      {
        MR_Word mercury__cord__NX_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__cord__NY_22;

        {
          mercury__cord__map_foldl3_node_9_p_0(mercury__cord__TypeInfo_for_A_35, mercury__cord__TypeInfo_for_B_36, mercury__cord__TypeInfo_for_C_37, mercury__cord__TypeInfo_for_D_38, mercury__cord__TypeInfo_for_E_39, mercury__cord__HeadVar__1_1, mercury__cord__NX_21, &mercury__cord__NY_22, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5, mercury__cord__STATE_VARIABLE_B_0_6, mercury__cord__STATE_VARIABLE_B_7, mercury__cord__STATE_VARIABLE_C_0_8, mercury__cord__STATE_VARIABLE_C_9);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mercury__cord__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__NY_22));
        }
      }
  }
}

void MR_CALL 
mercury__cord__map_foldl2_7_p_0(
  MR_Word mercury__cord__TypeInfo_for_A_26,
  MR_Word mercury__cord__TypeInfo_for_B_27,
  MR_Word mercury__cord__TypeInfo_for_C_28,
  MR_Word mercury__cord__TypeInfo_for_D_29,
  MR_Word mercury__cord__HeadVar__1_1,
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Word * mercury__cord__HeadVar__3_3,
  MR_Box mercury__cord__STATE_VARIABLE_A_0_4,
  MR_Box * mercury__cord__STATE_VARIABLE_A_5,
  MR_Box mercury__cord__STATE_VARIABLE_B_0_6,
  MR_Box * mercury__cord__STATE_VARIABLE_B_7)
{
  {
    MR_bool mercury__cord__succeeded;

    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__cord__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *mercury__cord__STATE_VARIABLE_B_7 = mercury__cord__STATE_VARIABLE_B_0_6;
        *mercury__cord__STATE_VARIABLE_A_5 = mercury__cord__STATE_VARIABLE_A_0_4;
      }
    else
      {
        MR_Word mercury__cord__NX_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__cord__NY_17;

        {
          mercury__cord__map_foldl2_node_7_p_0(mercury__cord__TypeInfo_for_A_26, mercury__cord__TypeInfo_for_B_27, mercury__cord__TypeInfo_for_C_28, mercury__cord__TypeInfo_for_D_29, mercury__cord__HeadVar__1_1, mercury__cord__NX_16, &mercury__cord__NY_17, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5, mercury__cord__STATE_VARIABLE_B_0_6, mercury__cord__STATE_VARIABLE_B_7);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mercury__cord__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__NY_17));
        }
      }
  }
}

MR_bool MR_CALL 
mercury__cord__map_foldl_5_p_5(
  MR_Word mercury__cord__TypeInfo_for_A_17,
  MR_Word mercury__cord__TypeInfo_for_B_18,
  MR_Word mercury__cord__TypeInfo_for_C_19,
  MR_Word mercury__cord__HeadVar__1_1,
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Word * mercury__cord__HeadVar__3_3,
  MR_Box mercury__cord__STATE_VARIABLE_A_0_4,
  MR_Box * mercury__cord__STATE_VARIABLE_A_5)
{
  {
    MR_bool mercury__cord__succeeded;

    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__cord__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *mercury__cord__STATE_VARIABLE_A_5 = mercury__cord__STATE_VARIABLE_A_0_4;
        mercury__cord__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word mercury__cord__NX_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__cord__NY_12;

        {
          mercury__cord__succeeded = mercury__cord__map_foldl_node_5_p_5(mercury__cord__TypeInfo_for_A_17, mercury__cord__TypeInfo_for_B_18, mercury__cord__TypeInfo_for_C_19, mercury__cord__HeadVar__1_1, mercury__cord__NX_11, &mercury__cord__NY_12, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5);
        }
        if (mercury__cord__succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mercury__cord__HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__NY_12));
            }
            mercury__cord__succeeded = MR_TRUE;
          }
      }
    return mercury__cord__succeeded;
  }
}

MR_bool MR_CALL 
mercury__cord__map_foldl_5_p_4(
  MR_Word mercury__cord__TypeInfo_for_A_17,
  MR_Word mercury__cord__TypeInfo_for_B_18,
  MR_Word mercury__cord__TypeInfo_for_C_19,
  MR_Word mercury__cord__HeadVar__1_1,
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Word * mercury__cord__HeadVar__3_3,
  MR_Box mercury__cord__STATE_VARIABLE_A_0_4,
  MR_Box * mercury__cord__STATE_VARIABLE_A_5)
{
  {
    MR_bool mercury__cord__succeeded;

    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__cord__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *mercury__cord__STATE_VARIABLE_A_5 = mercury__cord__STATE_VARIABLE_A_0_4;
        mercury__cord__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word mercury__cord__NX_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__cord__NY_12;

        {
          mercury__cord__succeeded = mercury__cord__map_foldl_node_5_p_4(mercury__cord__TypeInfo_for_A_17, mercury__cord__TypeInfo_for_B_18, mercury__cord__TypeInfo_for_C_19, mercury__cord__HeadVar__1_1, mercury__cord__NX_11, &mercury__cord__NY_12, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5);
        }
        if (mercury__cord__succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mercury__cord__HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__NY_12));
            }
            mercury__cord__succeeded = MR_TRUE;
          }
      }
    return mercury__cord__succeeded;
  }
}

MR_bool MR_CALL 
mercury__cord__map_foldl_5_p_3(
  MR_Word mercury__cord__TypeInfo_for_A_17,
  MR_Word mercury__cord__TypeInfo_for_B_18,
  MR_Word mercury__cord__TypeInfo_for_C_19,
  MR_Word mercury__cord__HeadVar__1_1,
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Word * mercury__cord__HeadVar__3_3,
  MR_Box mercury__cord__STATE_VARIABLE_A_0_4,
  MR_Box * mercury__cord__STATE_VARIABLE_A_5)
{
  {
    MR_bool mercury__cord__succeeded;

    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__cord__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *mercury__cord__STATE_VARIABLE_A_5 = mercury__cord__STATE_VARIABLE_A_0_4;
        mercury__cord__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word mercury__cord__NX_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__cord__NY_12;

        {
          mercury__cord__succeeded = mercury__cord__map_foldl_node_5_p_3(mercury__cord__TypeInfo_for_A_17, mercury__cord__TypeInfo_for_B_18, mercury__cord__TypeInfo_for_C_19, mercury__cord__HeadVar__1_1, mercury__cord__NX_11, &mercury__cord__NY_12, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5);
        }
        if (mercury__cord__succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mercury__cord__HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__NY_12));
            }
            mercury__cord__succeeded = MR_TRUE;
          }
      }
    return mercury__cord__succeeded;
  }
}

void MR_CALL 
mercury__cord__map_foldl_5_p_2(
  MR_Word mercury__cord__TypeInfo_for_A_17,
  MR_Word mercury__cord__TypeInfo_for_B_18,
  MR_Word mercury__cord__TypeInfo_for_C_19,
  MR_Word mercury__cord__HeadVar__1_1,
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Word * mercury__cord__HeadVar__3_3,
  MR_Box mercury__cord__STATE_VARIABLE_A_0_4,
  MR_Box * mercury__cord__STATE_VARIABLE_A_5)
{
  {
    MR_bool mercury__cord__succeeded;

    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__cord__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *mercury__cord__STATE_VARIABLE_A_5 = mercury__cord__STATE_VARIABLE_A_0_4;
      }
    else
      {
        MR_Word mercury__cord__NX_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__cord__NY_12;

        {
          mercury__cord__map_foldl_node_5_p_2(mercury__cord__TypeInfo_for_A_17, mercury__cord__TypeInfo_for_B_18, mercury__cord__TypeInfo_for_C_19, mercury__cord__HeadVar__1_1, mercury__cord__NX_11, &mercury__cord__NY_12, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mercury__cord__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__NY_12));
        }
      }
  }
}

void MR_CALL 
mercury__cord__map_foldl_5_p_1(
  MR_Word mercury__cord__TypeInfo_for_A_17,
  MR_Word mercury__cord__TypeInfo_for_B_18,
  MR_Word mercury__cord__TypeInfo_for_C_19,
  MR_Word mercury__cord__HeadVar__1_1,
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Word * mercury__cord__HeadVar__3_3,
  MR_Box mercury__cord__STATE_VARIABLE_A_0_4,
  MR_Box * mercury__cord__STATE_VARIABLE_A_5)
{
  {
    MR_bool mercury__cord__succeeded;

    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__cord__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *mercury__cord__STATE_VARIABLE_A_5 = mercury__cord__STATE_VARIABLE_A_0_4;
      }
    else
      {
        MR_Word mercury__cord__NX_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__cord__NY_12;

        {
          mercury__cord__map_foldl_node_5_p_1(mercury__cord__TypeInfo_for_A_17, mercury__cord__TypeInfo_for_B_18, mercury__cord__TypeInfo_for_C_19, mercury__cord__HeadVar__1_1, mercury__cord__NX_11, &mercury__cord__NY_12, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mercury__cord__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__NY_12));
        }
      }
  }
}

void MR_CALL 
mercury__cord__map_foldl_5_p_0(
  MR_Word mercury__cord__TypeInfo_for_A_17,
  MR_Word mercury__cord__TypeInfo_for_B_18,
  MR_Word mercury__cord__TypeInfo_for_C_19,
  MR_Word mercury__cord__HeadVar__1_1,
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Word * mercury__cord__HeadVar__3_3,
  MR_Box mercury__cord__STATE_VARIABLE_A_0_4,
  MR_Box * mercury__cord__STATE_VARIABLE_A_5)
{
  {
    MR_bool mercury__cord__succeeded;

    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__cord__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *mercury__cord__STATE_VARIABLE_A_5 = mercury__cord__STATE_VARIABLE_A_0_4;
      }
    else
      {
        MR_Word mercury__cord__NX_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__cord__NY_12;

        {
          mercury__cord__map_foldl_node_5_p_0(mercury__cord__TypeInfo_for_A_17, mercury__cord__TypeInfo_for_B_18, mercury__cord__TypeInfo_for_C_19, mercury__cord__HeadVar__1_1, mercury__cord__NX_11, &mercury__cord__NY_12, mercury__cord__STATE_VARIABLE_A_0_4, mercury__cord__STATE_VARIABLE_A_5);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mercury__cord__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__NY_12));
        }
      }
  }
}

MR_bool MR_CALL 
mercury__cord__foldr_pred_4_p_5(
  MR_Word mercury__cord__TypeInfo_for_T_16,
  MR_Word mercury__cord__TypeInfo_for_U_17,
  MR_Word mercury__cord__HeadVar__1_1,
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_3,
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_4)
{
  {
    MR_bool mercury__cord__succeeded;

    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__cord__STATE_VARIABLE_Acc_4 = mercury__cord__STATE_VARIABLE_Acc_0_3;
        mercury__cord__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word mercury__cord__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__cord__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        {
          mercury__cord__succeeded = mercury__cord__foldr_node_pred_5_p_5(mercury__cord__TypeInfo_for_T_16, mercury__cord__TypeInfo_for_U_17, mercury__cord__HeadVar__1_1, mercury__cord__N_10, mercury__cord__V_14_14, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
        }
      }
    return mercury__cord__succeeded;
  }
}

MR_bool MR_CALL 
mercury__cord__foldr_pred_4_p_4(
  MR_Word mercury__cord__TypeInfo_for_T_16,
  MR_Word mercury__cord__TypeInfo_for_U_17,
  MR_Word mercury__cord__HeadVar__1_1,
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_3,
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_4)
{
  {
    MR_bool mercury__cord__succeeded;

    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__cord__STATE_VARIABLE_Acc_4 = mercury__cord__STATE_VARIABLE_Acc_0_3;
        mercury__cord__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word mercury__cord__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__cord__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        {
          mercury__cord__succeeded = mercury__cord__foldr_node_pred_5_p_4(mercury__cord__TypeInfo_for_T_16, mercury__cord__TypeInfo_for_U_17, mercury__cord__HeadVar__1_1, mercury__cord__N_10, mercury__cord__V_14_14, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
        }
      }
    return mercury__cord__succeeded;
  }
}

MR_bool MR_CALL 
mercury__cord__foldr_pred_4_p_3(
  MR_Word mercury__cord__TypeInfo_for_T_16,
  MR_Word mercury__cord__TypeInfo_for_U_17,
  MR_Word mercury__cord__HeadVar__1_1,
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_3,
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_4)
{
  {
    MR_bool mercury__cord__succeeded;

    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__cord__STATE_VARIABLE_Acc_4 = mercury__cord__STATE_VARIABLE_Acc_0_3;
        mercury__cord__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word mercury__cord__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__cord__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        {
          mercury__cord__succeeded = mercury__cord__foldr_node_pred_5_p_3(mercury__cord__TypeInfo_for_T_16, mercury__cord__TypeInfo_for_U_17, mercury__cord__HeadVar__1_1, mercury__cord__N_10, mercury__cord__V_14_14, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
        }
      }
    return mercury__cord__succeeded;
  }
}

void MR_CALL 
mercury__cord__foldr_pred_4_p_2(
  MR_Word mercury__cord__TypeInfo_for_T_16,
  MR_Word mercury__cord__TypeInfo_for_U_17,
  MR_Word mercury__cord__HeadVar__1_1,
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_3,
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_4)
{
  {
    MR_bool mercury__cord__succeeded;

    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__cord__STATE_VARIABLE_Acc_4 = mercury__cord__STATE_VARIABLE_Acc_0_3;
    else
      {
        MR_Word mercury__cord__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__cord__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        {
          mercury__cord__foldr_node_pred_5_p_2(mercury__cord__TypeInfo_for_T_16, mercury__cord__TypeInfo_for_U_17, mercury__cord__HeadVar__1_1, mercury__cord__N_10, mercury__cord__V_14_14, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
        }
      }
  }
}

void MR_CALL 
mercury__cord__foldr_pred_4_p_1(
  MR_Word mercury__cord__TypeInfo_for_T_16,
  MR_Word mercury__cord__TypeInfo_for_U_17,
  MR_Word mercury__cord__HeadVar__1_1,
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_3,
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_4)
{
  {
    MR_bool mercury__cord__succeeded;

    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__cord__STATE_VARIABLE_Acc_4 = mercury__cord__STATE_VARIABLE_Acc_0_3;
    else
      {
        MR_Word mercury__cord__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__cord__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        {
          mercury__cord__foldr_node_pred_5_p_1(mercury__cord__TypeInfo_for_T_16, mercury__cord__TypeInfo_for_U_17, mercury__cord__HeadVar__1_1, mercury__cord__N_10, mercury__cord__V_14_14, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
        }
      }
  }
}

void MR_CALL 
mercury__cord__foldr_pred_4_p_0(
  MR_Word mercury__cord__TypeInfo_for_T_16,
  MR_Word mercury__cord__TypeInfo_for_U_17,
  MR_Word mercury__cord__HeadVar__1_1,
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_3,
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_4)
{
  {
    MR_bool mercury__cord__succeeded;

    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__cord__STATE_VARIABLE_Acc_4 = mercury__cord__STATE_VARIABLE_Acc_0_3;
    else
      {
        MR_Word mercury__cord__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__cord__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        {
          mercury__cord__foldr_node_pred_5_p_0(mercury__cord__TypeInfo_for_T_16, mercury__cord__TypeInfo_for_U_17, mercury__cord__HeadVar__1_1, mercury__cord__N_10, mercury__cord__V_14_14, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
        }
      }
  }
}

MR_Box MR_CALL 
mercury__cord__foldr_3_f_0(
  MR_Word mercury__cord__TypeInfo_for_T_12,
  MR_Word mercury__cord__TypeInfo_for_U_13,
  MR_Word mercury__cord__F_1,
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Box mercury__cord__HeadVar__3_3)
{
  {
    MR_bool mercury__cord__succeeded;
    MR_Box mercury__cord__Acc_4;

    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__cord__Acc_4 = mercury__cord__HeadVar__3_3;
    else
      {
        MR_Word mercury__cord__N_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__cord__V_11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        {
          mercury__cord__foldr_node_5_p_0(mercury__cord__TypeInfo_for_T_12, mercury__cord__TypeInfo_for_U_13, mercury__cord__F_1, mercury__cord__N_8, mercury__cord__V_11_11, mercury__cord__HeadVar__3_3, &mercury__cord__Acc_4);
        }
      }
    return mercury__cord__Acc_4;
  }
}

MR_bool MR_CALL 
mercury__cord__foldl_pred_4_p_5(
  MR_Word mercury__cord__TypeInfo_for_T_16,
  MR_Word mercury__cord__TypeInfo_for_U_17,
  MR_Word mercury__cord__HeadVar__1_1,
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_3,
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_4)
{
  {
    MR_bool mercury__cord__succeeded;

    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__cord__STATE_VARIABLE_Acc_4 = mercury__cord__STATE_VARIABLE_Acc_0_3;
        mercury__cord__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word mercury__cord__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__cord__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        {
          mercury__cord__succeeded = mercury__cord__foldl_node_pred_5_p_5(mercury__cord__TypeInfo_for_T_16, mercury__cord__TypeInfo_for_U_17, mercury__cord__HeadVar__1_1, mercury__cord__N_10, mercury__cord__V_14_14, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
        }
      }
    return mercury__cord__succeeded;
  }
}

MR_bool MR_CALL 
mercury__cord__foldl_pred_4_p_4(
  MR_Word mercury__cord__TypeInfo_for_T_16,
  MR_Word mercury__cord__TypeInfo_for_U_17,
  MR_Word mercury__cord__HeadVar__1_1,
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_3,
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_4)
{
  {
    MR_bool mercury__cord__succeeded;

    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__cord__STATE_VARIABLE_Acc_4 = mercury__cord__STATE_VARIABLE_Acc_0_3;
        mercury__cord__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word mercury__cord__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__cord__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        {
          mercury__cord__succeeded = mercury__cord__foldl_node_pred_5_p_4(mercury__cord__TypeInfo_for_T_16, mercury__cord__TypeInfo_for_U_17, mercury__cord__HeadVar__1_1, mercury__cord__N_10, mercury__cord__V_14_14, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
        }
      }
    return mercury__cord__succeeded;
  }
}

MR_bool MR_CALL 
mercury__cord__foldl_pred_4_p_3(
  MR_Word mercury__cord__TypeInfo_for_T_16,
  MR_Word mercury__cord__TypeInfo_for_U_17,
  MR_Word mercury__cord__HeadVar__1_1,
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_3,
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_4)
{
  {
    MR_bool mercury__cord__succeeded;

    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__cord__STATE_VARIABLE_Acc_4 = mercury__cord__STATE_VARIABLE_Acc_0_3;
        mercury__cord__succeeded = MR_TRUE;
      }
    else
      {
        MR_Word mercury__cord__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__cord__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        {
          mercury__cord__succeeded = mercury__cord__foldl_node_pred_5_p_3(mercury__cord__TypeInfo_for_T_16, mercury__cord__TypeInfo_for_U_17, mercury__cord__HeadVar__1_1, mercury__cord__N_10, mercury__cord__V_14_14, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
        }
      }
    return mercury__cord__succeeded;
  }
}

void MR_CALL 
mercury__cord__foldl_pred_4_p_2(
  MR_Word mercury__cord__TypeInfo_for_T_16,
  MR_Word mercury__cord__TypeInfo_for_U_17,
  MR_Word mercury__cord__HeadVar__1_1,
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_3,
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_4)
{
  {
    MR_bool mercury__cord__succeeded;

    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__cord__STATE_VARIABLE_Acc_4 = mercury__cord__STATE_VARIABLE_Acc_0_3;
    else
      {
        MR_Word mercury__cord__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__cord__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        {
          mercury__cord__foldl_node_pred_5_p_2(mercury__cord__TypeInfo_for_T_16, mercury__cord__TypeInfo_for_U_17, mercury__cord__HeadVar__1_1, mercury__cord__N_10, mercury__cord__V_14_14, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
        }
      }
  }
}

void MR_CALL 
mercury__cord__foldl_pred_4_p_1(
  MR_Word mercury__cord__TypeInfo_for_T_16,
  MR_Word mercury__cord__TypeInfo_for_U_17,
  MR_Word mercury__cord__HeadVar__1_1,
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_3,
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_4)
{
  {
    MR_bool mercury__cord__succeeded;

    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__cord__STATE_VARIABLE_Acc_4 = mercury__cord__STATE_VARIABLE_Acc_0_3;
    else
      {
        MR_Word mercury__cord__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__cord__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        {
          mercury__cord__foldl_node_pred_5_p_1(mercury__cord__TypeInfo_for_T_16, mercury__cord__TypeInfo_for_U_17, mercury__cord__HeadVar__1_1, mercury__cord__N_10, mercury__cord__V_14_14, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
        }
      }
  }
}

void MR_CALL 
mercury__cord__foldl_pred_4_p_0(
  MR_Word mercury__cord__TypeInfo_for_T_16,
  MR_Word mercury__cord__TypeInfo_for_U_17,
  MR_Word mercury__cord__HeadVar__1_1,
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Box mercury__cord__STATE_VARIABLE_Acc_0_3,
  MR_Box * mercury__cord__STATE_VARIABLE_Acc_4)
{
  {
    MR_bool mercury__cord__succeeded;

    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__cord__STATE_VARIABLE_Acc_4 = mercury__cord__STATE_VARIABLE_Acc_0_3;
    else
      {
        MR_Word mercury__cord__N_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__cord__V_14_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        {
          mercury__cord__foldl_node_pred_5_p_0(mercury__cord__TypeInfo_for_T_16, mercury__cord__TypeInfo_for_U_17, mercury__cord__HeadVar__1_1, mercury__cord__N_10, mercury__cord__V_14_14, mercury__cord__STATE_VARIABLE_Acc_0_3, mercury__cord__STATE_VARIABLE_Acc_4);
        }
      }
  }
}

MR_Box MR_CALL 
mercury__cord__foldl_3_f_0(
  MR_Word mercury__cord__TypeInfo_for_T_12,
  MR_Word mercury__cord__TypeInfo_for_U_13,
  MR_Word mercury__cord__F_1,
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Box mercury__cord__HeadVar__3_3)
{
  {
    MR_bool mercury__cord__succeeded;
    MR_Box mercury__cord__Acc_4;

    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__cord__Acc_4 = mercury__cord__HeadVar__3_3;
    else
      {
        MR_Word mercury__cord__N_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__cord__V_11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        {
          mercury__cord__foldl_node_5_p_0(mercury__cord__TypeInfo_for_T_12, mercury__cord__TypeInfo_for_U_13, mercury__cord__F_1, mercury__cord__N_8, mercury__cord__V_11_11, mercury__cord__HeadVar__3_3, &mercury__cord__Acc_4);
        }
      }
    return mercury__cord__Acc_4;
  }
}

void MR_CALL 
mercury__cord__filter_4_p_0(
  MR_Word mercury__cord__TypeInfo_for_T_10,
  MR_Word mercury__cord__P_1,
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Word * mercury__cord__HeadVar__3_3,
  MR_Word * mercury__cord__HeadVar__4_4)
{
  {
    MR_bool mercury__cord__succeeded;

    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__cord__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *mercury__cord__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      }
    else
      {
        MR_Word mercury__cord__N_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));

        {
          mercury__cord__filter_node_4_p_0(mercury__cord__TypeInfo_for_T_10, mercury__cord__P_1, mercury__cord__N_7, mercury__cord__HeadVar__3_3, mercury__cord__HeadVar__4_4);
        }
      }
  }
}

void MR_CALL 
mercury__cord__filter_3_p_0(
  MR_Word mercury__cord__TypeInfo_for_T_8,
  MR_Word mercury__cord__P_1,
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Word * mercury__cord__HeadVar__3_3)
{
  {
    MR_bool mercury__cord__succeeded;

    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__cord__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word mercury__cord__N_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));

        {
          mercury__cord__filter_node_3_p_0(mercury__cord__TypeInfo_for_T_8, mercury__cord__P_1, mercury__cord__N_6, mercury__cord__HeadVar__3_3);
        }
      }
  }
}

void MR_CALL 
mercury__cord__map_pred_3_p_0(
  MR_Word mercury__cord__TypeInfo_for_T_8,
  MR_Word mercury__cord__TypeInfo_for_U_9,
  MR_Word mercury__cord__P_1,
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Word * mercury__cord__HeadVar__3_3)
{
  {
    MR_bool mercury__cord__succeeded;

    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__cord__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word mercury__cord__N_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__cord__PN_7;

        {
          mercury__cord__map_pred_node_3_p_0(mercury__cord__TypeInfo_for_T_8, mercury__cord__TypeInfo_for_U_9, mercury__cord__P_1, mercury__cord__N_6, &mercury__cord__PN_7);
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mercury__cord__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__PN_7));
        }
      }
  }
}

MR_Word MR_CALL 
mercury__cord__map_2_f_0(
  MR_Word mercury__cord__TypeInfo_for_T_8,
  MR_Word mercury__cord__TypeInfo_for_U_9,
  MR_Word mercury__cord__F_1,
  MR_Word mercury__cord__HeadVar__2_2)
{
  {
    MR_bool mercury__cord__succeeded;
    MR_Word mercury__cord__HeadVar__3_3;

    if ((mercury__cord__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__cord__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word mercury__cord__N_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__cord__V_7_7;

        {
          mercury__cord__V_7_7 = mercury__cord__map_node_2_f_0(mercury__cord__TypeInfo_for_T_8, mercury__cord__TypeInfo_for_U_9, mercury__cord__F_1, mercury__cord__N_6);
        }
        {
          mercury__cord__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__3_3, 0) = ((MR_Box) (mercury__cord__V_7_7));
        }
      }
    return mercury__cord__HeadVar__3_3;
  }
}

void MR_CALL 
mercury__cord__member_2_p_0(
  MR_Word mercury__cord__TypeInfo_for_T_5,
  MR_Box * mercury__cord__X_3,
  MR_Word mercury__cord__HeadVar__2_2,
  MR_Cont mercury__cord__cont,
  void * mercury__cord__cont_env_ptr)
{
  {
    MR_bool mercury__cord__succeeded = ((MR_tag((MR_Word) mercury__cord__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
    MR_Word mercury__cord__N_4;

    if (mercury__cord__succeeded)
      {
        mercury__cord__N_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, (MR_Integer) 0)));
        {
          mercury__cord__member_node_2_p_0(mercury__cord__TypeInfo_for_T_5, mercury__cord__X_3, mercury__cord__N_4, mercury__cord__cont, mercury__cord__cont_env_ptr);
        }
      }
  }
}

MR_Integer MR_CALL 
mercury__cord__length_1_f_0(
  MR_Word mercury__cord__TypeInfo_for_T_15,
  MR_Word mercury__cord__C_3)
{
  {
    MR_bool mercury__cord__succeeded;
    MR_Integer mercury__cord__HeadVar__2_2;

    if ((mercury__cord__C_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__cord__HeadVar__2_2 = (MR_Integer) 0;
    else
      {
        MR_Word mercury__cord__N_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__C_3, (MR_Integer) 0)));
        MR_Word mercury__cord__V_23_23 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        {
          mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_110_111_100_101_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_93_95_48_5_p_0(mercury__cord__N_20, mercury__cord__V_23_23, (MR_Integer) 0, &mercury__cord__HeadVar__2_2);
        }
      }
    return mercury__cord__HeadVar__2_2;
  }
}

MR_bool MR_CALL 
mercury__cord__get_last_2_p_0(
  MR_Word mercury__cord__TypeInfo_for_T_5,
  MR_Word mercury__cord__HeadVar__1_1,
  MR_Box * mercury__cord__Last_4)
{
  {
    MR_bool mercury__cord__succeeded = ((MR_tag((MR_Word) mercury__cord__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Word mercury__cord__N_3;

    if (mercury__cord__succeeded)
      {
        mercury__cord__N_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 0)));
        {
          mercury__cord__get_last_node_2_p_0(mercury__cord__TypeInfo_for_T_5, mercury__cord__N_3, mercury__cord__Last_4);
        }
        mercury__cord__succeeded = MR_TRUE;
      }
    return mercury__cord__succeeded;
  }
}

MR_bool MR_CALL 
mercury__cord__get_first_2_p_0(
  MR_Word mercury__cord__TypeInfo_for_T_5,
  MR_Word mercury__cord__HeadVar__1_1,
  MR_Box * mercury__cord__Head_4)
{
  {
    MR_bool mercury__cord__succeeded = ((MR_tag((MR_Word) mercury__cord__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Word mercury__cord__N_3;

    if (mercury__cord__succeeded)
      {
        mercury__cord__N_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 0)));
        {
          mercury__cord__get_first_node_2_p_0(mercury__cord__TypeInfo_for_T_5, mercury__cord__N_3, mercury__cord__Head_4);
        }
        mercury__cord__succeeded = MR_TRUE;
      }
    return mercury__cord__succeeded;
  }
}

MR_bool MR_CALL 
mercury__cord__split_last_3_p_0(
  MR_Word mercury__cord__TypeInfo_for_T_7,
  MR_Word mercury__cord__HeadVar__1_1,
  MR_Word * mercury__cord__AllButLast_5,
  MR_Box * mercury__cord__Last_6)
{
  {
    MR_bool mercury__cord__succeeded = ((MR_tag((MR_Word) mercury__cord__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Word mercury__cord__N_4;

    if (mercury__cord__succeeded)
      {
        mercury__cord__N_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 0)));
        {
          mercury__cord__split_last_node_3_p_0(mercury__cord__TypeInfo_for_T_7, mercury__cord__N_4, mercury__cord__AllButLast_5, mercury__cord__Last_6);
        }
        mercury__cord__succeeded = MR_TRUE;
      }
    return mercury__cord__succeeded;
  }
}

MR_bool MR_CALL 
mercury__cord__head_tail_3_p_0(
  MR_Word mercury__cord__TypeInfo_for_T_7,
  MR_Word mercury__cord__HeadVar__1_1,
  MR_Box * mercury__cord__H_5,
  MR_Word * mercury__cord__T_6)
{
  {
    MR_bool mercury__cord__succeeded = ((MR_tag((MR_Word) mercury__cord__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Word mercury__cord__N_4;

    if (mercury__cord__succeeded)
      {
        mercury__cord__N_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 0)));
        {
          mercury__cord__head_tail_node_3_p_0(mercury__cord__TypeInfo_for_T_7, mercury__cord__N_4, mercury__cord__H_5, mercury__cord__T_6);
        }
        mercury__cord__succeeded = MR_TRUE;
      }
    return mercury__cord__succeeded;
  }
}

MR_Word MR_CALL 
mercury__cord__cord_list_to_list_1_f_0(
  MR_Word mercury__cord__TypeInfo_for_T_8,
  MR_Word mercury__cord__Cords_3)
{
  {
    MR_bool mercury__cord__succeeded;
    MR_Word mercury__cord__List_4;
    MR_Word mercury__cord__TypeCtorInfo_9_9 = (MR_Word) &mercury__cord__cord__type_ctor_info_cord_1;
    MR_Word mercury__cord__TypeInfo_10_10;
    MR_Word mercury__cord__RevCords_5;
    MR_Word mercury__cord__V_7_7;
    MR_Word mercury__cord__conv0_RevCords_5;

    {
      mercury__cord__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__cord__TypeInfo_10_10, 0) = ((MR_Box) (mercury__cord__TypeCtorInfo_9_9));
      MR_hl_field(MR_mktag(0), mercury__cord__TypeInfo_10_10, 1) = ((MR_Box) (mercury__cord__TypeInfo_for_T_8));
    }
    {
      mercury__list__reverse_2_p_0(mercury__cord__TypeInfo_10_10, (MR_Word) mercury__cord__Cords_3, &mercury__cord__conv0_RevCords_5);
    }
    mercury__cord__RevCords_5 = (MR_Word) mercury__cord__conv0_RevCords_5;
    mercury__cord__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_55_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__list_0(mercury__cord__TypeInfo_for_T_8, mercury__cord__RevCords_5, mercury__cord__V_7_7, &mercury__cord__List_4);
    }
    return mercury__cord__List_4;
  }
}

MR_Word MR_CALL 
mercury__cord__cord_list_to_cord_1_f_0(
  MR_Word mercury__cord__TypeInfo_for_T_8,
  MR_Word mercury__cord__Cords_3)
{
  {
    MR_bool mercury__cord__succeeded;
    MR_Word mercury__cord__Cord_4;
    MR_Word mercury__cord__TypeCtorInfo_9_9 = (MR_Word) &mercury__cord__cord__type_ctor_info_cord_1;
    MR_Word mercury__cord__TypeInfo_10_10;
    MR_Word mercury__cord__RevCords_5;
    MR_Word mercury__cord__V_7_7;
    MR_Word mercury__cord__conv0_RevCords_5;

    {
      mercury__cord__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__cord__TypeInfo_10_10, 0) = ((MR_Box) (mercury__cord__TypeCtorInfo_9_9));
      MR_hl_field(MR_mktag(0), mercury__cord__TypeInfo_10_10, 1) = ((MR_Box) (mercury__cord__TypeInfo_for_T_8));
    }
    {
      mercury__list__reverse_2_p_0(mercury__cord__TypeInfo_10_10, (MR_Word) mercury__cord__Cords_3, &mercury__cord__conv0_RevCords_5);
    }
    mercury__cord__RevCords_5 = (MR_Word) mercury__cord__conv0_RevCords_5;
    mercury__cord__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__list_0(mercury__cord__TypeInfo_for_T_8, mercury__cord__RevCords_5, mercury__cord__V_7_7, &mercury__cord__Cord_4);
    }
    return mercury__cord__Cord_4;
  }
}

MR_Word MR_CALL 
mercury__cord__f_43_43_2_f_0(
  MR_Word mercury__cord__TypeInfo_for_T_11,
  MR_Word mercury__cord__A_4,
  MR_Word mercury__cord__B_5)
{
  {
    MR_bool mercury__cord__succeeded;
    MR_Word mercury__cord__C_6;

    if ((mercury__cord__A_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__cord__C_6 = mercury__cord__B_5;
    else
      {
        MR_Word mercury__cord__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__A_4, (MR_Integer) 0)));

        if ((mercury__cord__B_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__cord__C_6 = mercury__cord__A_4;
        else
          {
            MR_Word mercury__cord__BN_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__B_5, (MR_Integer) 0)));
            MR_Word mercury__cord__V_10_10;

            {
              mercury__cord__V_10_10 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), mercury__cord__V_10_10, 0) = ((MR_Box) (mercury__cord__V_12_12));
              MR_hl_field(MR_mktag(2), mercury__cord__V_10_10, 1) = ((MR_Box) (mercury__cord__BN_9));
            }
            {
              mercury__cord__C_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__cord__C_6, 0) = ((MR_Box) (mercury__cord__V_10_10));
            }
          }
      }
    return mercury__cord__C_6;
  }
}

void MR_CALL 
mercury__cord__snoc_3_p_0(
  MR_Word mercury__cord__TypeInfo_for_T_9,
  MR_Box mercury__cord__X_4,
  MR_Word mercury__cord__STATE_VARIABLE_C_0_6,
  MR_Word * mercury__cord__STATE_VARIABLE_C_7)
{
  {
    MR_bool mercury__cord__succeeded;

    if ((mercury__cord__STATE_VARIABLE_C_0_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word mercury__cord__V_16_16;

        {
          mercury__cord__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__cord__V_16_16, 0) = mercury__cord__X_4;
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mercury__cord__STATE_VARIABLE_C_7 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__V_16_16));
        }
      }
    else
      {
        MR_Word mercury__cord__N_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__STATE_VARIABLE_C_0_6, (MR_Integer) 0)));
        MR_Word mercury__cord__V_14_14;
        MR_Word mercury__cord__V_15_15;

        {
          mercury__cord__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__cord__V_15_15, 0) = mercury__cord__X_4;
        }
        {
          mercury__cord__V_14_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), mercury__cord__V_14_14, 0) = ((MR_Box) (mercury__cord__N_13));
          MR_hl_field(MR_mktag(2), mercury__cord__V_14_14, 1) = ((MR_Box) (mercury__cord__V_15_15));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mercury__cord__STATE_VARIABLE_C_7 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__V_14_14));
        }
      }
  }
}

MR_Word MR_CALL 
mercury__cord__snoc_2_f_0(
  MR_Word mercury__cord__TypeInfo_for_T_11,
  MR_Word mercury__cord__C_4,
  MR_Box mercury__cord__X_5)
{
  {
    MR_bool mercury__cord__succeeded;
    MR_Word mercury__cord__CX_6;

    if ((mercury__cord__C_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word mercury__cord__V_10_10;

        {
          mercury__cord__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__cord__V_10_10, 0) = mercury__cord__X_5;
        }
        {
          mercury__cord__CX_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__cord__CX_6, 0) = ((MR_Box) (mercury__cord__V_10_10));
        }
      }
    else
      {
        MR_Word mercury__cord__N_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__C_4, (MR_Integer) 0)));
        MR_Word mercury__cord__V_8_8;
        MR_Word mercury__cord__V_9_9;

        {
          mercury__cord__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__cord__V_9_9, 0) = mercury__cord__X_5;
        }
        {
          mercury__cord__V_8_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), mercury__cord__V_8_8, 0) = ((MR_Box) (mercury__cord__N_7));
          MR_hl_field(MR_mktag(2), mercury__cord__V_8_8, 1) = ((MR_Box) (mercury__cord__V_9_9));
        }
        {
          mercury__cord__CX_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__cord__CX_6, 0) = ((MR_Box) (mercury__cord__V_8_8));
        }
      }
    return mercury__cord__CX_6;
  }
}

void MR_CALL 
mercury__cord__cons_3_p_0(
  MR_Word mercury__cord__TypeInfo_for_T_9,
  MR_Box mercury__cord__X_4,
  MR_Word mercury__cord__STATE_VARIABLE_C_0_6,
  MR_Word * mercury__cord__STATE_VARIABLE_C_7)
{
  {
    MR_bool mercury__cord__succeeded;

    if ((mercury__cord__STATE_VARIABLE_C_0_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word mercury__cord__V_16_16;

        {
          mercury__cord__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__cord__V_16_16, 0) = mercury__cord__X_4;
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mercury__cord__STATE_VARIABLE_C_7 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__V_16_16));
        }
      }
    else
      {
        MR_Word mercury__cord__N_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__STATE_VARIABLE_C_0_6, (MR_Integer) 0)));
        MR_Word mercury__cord__V_14_14;
        MR_Word mercury__cord__V_15_15;

        {
          mercury__cord__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__cord__V_15_15, 0) = mercury__cord__X_4;
        }
        {
          mercury__cord__V_14_14 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), mercury__cord__V_14_14, 0) = ((MR_Box) (mercury__cord__V_15_15));
          MR_hl_field(MR_mktag(2), mercury__cord__V_14_14, 1) = ((MR_Box) (mercury__cord__N_13));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mercury__cord__STATE_VARIABLE_C_7 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__cord__V_14_14));
        }
      }
  }
}

MR_Word MR_CALL 
mercury__cord__cons_2_f_0(
  MR_Word mercury__cord__TypeInfo_for_T_11,
  MR_Box mercury__cord__X_4,
  MR_Word mercury__cord__C_5)
{
  {
    MR_bool mercury__cord__succeeded;
    MR_Word mercury__cord__XC_6;

    if ((mercury__cord__C_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word mercury__cord__V_10_10;

        {
          mercury__cord__V_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__cord__V_10_10, 0) = mercury__cord__X_4;
        }
        {
          mercury__cord__XC_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__cord__XC_6, 0) = ((MR_Box) (mercury__cord__V_10_10));
        }
      }
    else
      {
        MR_Word mercury__cord__N_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__C_5, (MR_Integer) 0)));
        MR_Word mercury__cord__V_8_8;
        MR_Word mercury__cord__V_9_9;

        {
          mercury__cord__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__cord__V_9_9, 0) = mercury__cord__X_4;
        }
        {
          mercury__cord__V_8_8 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(2), mercury__cord__V_8_8, 0) = ((MR_Box) (mercury__cord__V_9_9));
          MR_hl_field(MR_mktag(2), mercury__cord__V_8_8, 1) = ((MR_Box) (mercury__cord__N_7));
        }
        {
          mercury__cord__XC_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__cord__XC_6, 0) = ((MR_Box) (mercury__cord__V_8_8));
        }
      }
    return mercury__cord__XC_6;
  }
}

MR_Word MR_CALL 
mercury__cord__condense_1_f_0(
  MR_Word mercury__cord__TypeInfo_for_T_4,
  MR_Word mercury__cord__HeadVar__1_1)
{
  {
    MR_bool mercury__cord__succeeded;
    MR_Word mercury__cord__HeadVar__2_2;

    if ((mercury__cord__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__cord__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word mercury__cord__C0_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 0)));

        {
          mercury__cord__HeadVar__2_2 = mercury__cord__condense_2_1_f_0(mercury__cord__TypeInfo_for_T_4, mercury__cord__C0_3);
        }
      }
    return mercury__cord__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__cord__to_rev_list_1_f_0(
  MR_Word mercury__cord__TypeInfo_for_T_4,
  MR_Word mercury__cord__C_3)
{
  {
    MR_bool mercury__cord__succeeded;
    MR_Word mercury__cord__HeadVar__2_2;

    if ((mercury__cord__C_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__cord__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word mercury__cord__N_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__C_3, (MR_Integer) 0)));
        MR_Word mercury__cord__V_6_6;
        MR_Word mercury__cord__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        MR_Word mercury__cord__V_8_8;

        {
          mercury__cord__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__cord__V_6_6, 0) = ((MR_Box) (mercury__cord__N_5));
          MR_hl_field(MR_mktag(1), mercury__cord__V_6_6, 1) = ((MR_Box) (mercury__cord__V_7_7));
        }
        mercury__cord__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          mercury__cord__HeadVar__2_2 = mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_118_95_108_105_115_116_95_50_95_95_91_49_93_95_48_2_f_0(mercury__cord__V_6_6, mercury__cord__V_8_8);
        }
      }
    return mercury__cord__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__cord__rev_list_1_f_0(
  MR_Word mercury__cord__TypeInfo_for_T_7,
  MR_Word mercury__cord__HeadVar__1_1)
{
  {
    MR_bool mercury__cord__succeeded;
    MR_Word mercury__cord__HeadVar__2_2;

    if ((mercury__cord__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__cord__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word mercury__cord__N_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__cord__V_4_4;
        MR_Word mercury__cord__V_5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        MR_Word mercury__cord__V_6_6;

        {
          mercury__cord__V_4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__cord__V_4_4, 0) = ((MR_Box) (mercury__cord__N_3));
          MR_hl_field(MR_mktag(1), mercury__cord__V_4_4, 1) = ((MR_Box) (mercury__cord__V_5_5));
        }
        mercury__cord__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          mercury__cord__HeadVar__2_2 = mercury__cord__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_114_101_118_95_108_105_115_116_95_50_95_95_91_49_93_95_48_2_f_0(mercury__cord__V_4_4, mercury__cord__V_6_6);
        }
      }
    return mercury__cord__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__cord__to_list_1_f_0(
  MR_Word mercury__cord__TypeInfo_for_T_4,
  MR_Word mercury__cord__C_3)
{
  {
    MR_bool mercury__cord__succeeded;
    MR_Word mercury__cord__HeadVar__2_2;

    if ((mercury__cord__C_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__cord__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word mercury__cord__N_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__C_3, (MR_Integer) 0)));
        MR_Word mercury__cord__V_6_6;
        MR_Word mercury__cord__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        MR_Word mercury__cord__V_8_8;

        {
          mercury__cord__V_6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__cord__V_6_6, 0) = ((MR_Box) (mercury__cord__N_5));
          MR_hl_field(MR_mktag(1), mercury__cord__V_6_6, 1) = ((MR_Box) (mercury__cord__V_7_7));
        }
        mercury__cord__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          mercury__cord__HeadVar__2_2 = mercury__cord__list_2_2_f_0(mercury__cord__TypeInfo_for_T_4, mercury__cord__V_6_6, mercury__cord__V_8_8);
        }
      }
    return mercury__cord__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__cord__list_1_f_0(
  MR_Word mercury__cord__TypeInfo_for_T_7,
  MR_Word mercury__cord__HeadVar__1_1)
{
  {
    MR_bool mercury__cord__succeeded;
    MR_Word mercury__cord__HeadVar__2_2;

    if ((mercury__cord__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__cord__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word mercury__cord__N_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__cord__V_4_4;
        MR_Word mercury__cord__V_5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        MR_Word mercury__cord__V_6_6;

        {
          mercury__cord__V_4_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__cord__V_4_4, 0) = ((MR_Box) (mercury__cord__N_3));
          MR_hl_field(MR_mktag(1), mercury__cord__V_4_4, 1) = ((MR_Box) (mercury__cord__V_5_5));
        }
        mercury__cord__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          mercury__cord__HeadVar__2_2 = mercury__cord__list_2_2_f_0(mercury__cord__TypeInfo_for_T_7, mercury__cord__V_4_4, mercury__cord__V_6_6);
        }
      }
    return mercury__cord__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__cord__from_list_1_f_0(
  MR_Word mercury__cord__TypeInfo_for_T_8,
  MR_Word mercury__cord__Xs_3)
{
  {
    MR_bool mercury__cord__succeeded;
    MR_Word mercury__cord__C_4;

    if ((mercury__cord__Xs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__cord__C_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Box mercury__cord__H_5 = (MR_hl_field(MR_mktag(1), mercury__cord__Xs_3, (MR_Integer) 0));
        MR_Word mercury__cord__T_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__cord__Xs_3, (MR_Integer) 1)));
        MR_Word mercury__cord__V_7_7;

        {
          mercury__cord__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__cord__V_7_7, 0) = mercury__cord__H_5;
          MR_hl_field(MR_mktag(1), mercury__cord__V_7_7, 1) = ((MR_Box) (mercury__cord__T_6));
        }
        {
          mercury__cord__C_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__cord__C_4, 0) = ((MR_Box) (mercury__cord__V_7_7));
        }
      }
    return mercury__cord__C_4;
  }
}

MR_Word MR_CALL 
mercury__cord__singleton_1_f_0(
  MR_Word mercury__cord__TypeInfo_for_T_5,
  MR_Box mercury__cord__X_3)
{
  {
    MR_bool mercury__cord__succeeded;
    MR_Word mercury__cord__HeadVar__2_2;
    MR_Word mercury__cord__V_4_4;

    {
      mercury__cord__V_4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__cord__V_4_4, 0) = mercury__cord__X_3;
    }
    {
      mercury__cord__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__cord__HeadVar__2_2, 0) = ((MR_Box) (mercury__cord__V_4_4));
    }
    return mercury__cord__HeadVar__2_2;
  }
}

MR_bool MR_CALL 
mercury__cord__is_empty_1_p_0(
  MR_Word mercury__cord__TypeInfo_for_T_2,
  MR_Word mercury__cord__HeadVar__1_1)
{
  {
    MR_bool mercury__cord__succeeded = (mercury__cord__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    return mercury__cord__succeeded;
  }
}

MR_Word MR_CALL 
mercury__cord__empty_0_f_0(
  MR_Word mercury__cord__TypeInfo_for_T_2)
{
  {
    MR_bool mercury__cord__succeeded;
    MR_Word mercury__cord__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    return mercury__cord__HeadVar__1_1;
  }
}

MR_Word MR_CALL 
mercury__cord__init_0_f_0(
  MR_Word mercury__cord__TypeInfo_for_T_2)
{
  {
    MR_bool mercury__cord__succeeded;
    MR_Word mercury__cord__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    return mercury__cord__HeadVar__1_1;
  }
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

/* :- end_module cord. */
