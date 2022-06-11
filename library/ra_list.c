/*
** Automatically generated from `ra_list.m'
** by the Mercury compiler,
** version rotd-2022-06-11
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


// :- module ra_list.
// :- implementation.

/*
INIT mercury__ra_list__init
ENDINIT
*/

#include "ra_list.mih"


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
#include "maybe.mih"
#include "mercury_term_lexer.mih"
#include "mercury_term_parser.mih"
#include "mutvar.mih"
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
#include "io.text_read.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static const MR_DuFunctorDesc mercury__ra_list__ra_list__du_functor_desc_ra_list_1_0;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__ra_list__ra_list__pti_ra_list_bintree_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__ra_list__ra_list__pti_ra_list_1__pseudo_1;

static const MR_PseudoTypeInfo mercury__ra_list__ra_list__field_types_ra_list_1_1[3];

static const MR_DuFunctorDesc mercury__ra_list__ra_list__du_functor_desc_ra_list_1_1;

static const MR_DuFunctorDescPtr mercury__ra_list__ra_list__du_stag_ordered_ra_list_1_0[1];

static const MR_DuFunctorDescPtr mercury__ra_list__ra_list__du_stag_ordered_ra_list_1_1[1];

static const MR_DuPtagLayout mercury__ra_list__ra_list__du_ptag_ordered_ra_list_1[2];

static const MR_DuFunctorDescPtr mercury__ra_list__ra_list__du_name_ordered_ra_list_1[2];

static const MR_Integer mercury__ra_list__ra_list__functor_number_map_ra_list_1[2];

static const MR_PseudoTypeInfo mercury__ra_list__ra_list__field_types_ra_list_bintree_1_0[1];

static const MR_DuFunctorDesc mercury__ra_list__ra_list__du_functor_desc_ra_list_bintree_1_0;

static const MR_PseudoTypeInfo mercury__ra_list__ra_list__field_types_ra_list_bintree_1_1[3];

static const MR_DuFunctorDesc mercury__ra_list__ra_list__du_functor_desc_ra_list_bintree_1_1;

static const MR_DuFunctorDescPtr mercury__ra_list__ra_list__du_stag_ordered_ra_list_bintree_1_0[1];

static const MR_DuFunctorDescPtr mercury__ra_list__ra_list__du_stag_ordered_ra_list_bintree_1_1[1];

static const MR_DuPtagLayout mercury__ra_list__ra_list__du_ptag_ordered_ra_list_bintree_1[2];

static const MR_DuFunctorDescPtr mercury__ra_list__ra_list__du_name_ordered_ra_list_bintree_1[2];

static const MR_Integer mercury__ra_list__ra_list__functor_number_map_ra_list_bintree_1[2];

static MR_bool MR_CALL 
mercury__ra_list__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_108_111_119_95_100_114_111_112_95_95_91_49_93_95_48_3_p_0(
  MR_Integer N_4,
  MR_Word As_5,
  MR_Word * Bs_6);

static MR_bool MR_CALL 
mercury__ra_list____Unify____ra_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__ra_list____Compare____ra_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__ra_list____Unify____ra_list_bintree_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__ra_list____Compare____ra_list_bintree_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);


static /* final */ const MR_Box mercury__ra_list_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__ra_list_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__ra_list_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__ra_list_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__ra_list_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__ra_list_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__ra_list_scalar_common_3[2][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__ra_list_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__ra_list_scalar_common_2[0])),
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
#include "io.text_read.mh"



static const MR_DuFunctorDesc mercury__ra_list__ra_list__du_functor_desc_ra_list_1_0 = {
  (MR_String) "nil",
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

static const MR_FA_PseudoTypeInfo_Struct1 mercury__ra_list__ra_list__pti_ra_list_bintree_1__pseudo_1 = {
  &mercury__ra_list__ra_list__type_ctor_info_ra_list_bintree_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__ra_list__ra_list__pti_ra_list_1__pseudo_1 = {
  &mercury__ra_list__ra_list__type_ctor_info_ra_list_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_PseudoTypeInfo mercury__ra_list__ra_list__field_types_ra_list_1_1[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__ra_list__ra_list__pti_ra_list_bintree_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__ra_list__ra_list__pti_ra_list_1__pseudo_1)
};

static const MR_DuFunctorDesc mercury__ra_list__ra_list__du_functor_desc_ra_list_1_1 = {
  (MR_String) "cons",
  INT16_C(3),
  UINT16_C(6),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__ra_list__ra_list__field_types_ra_list_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__ra_list__ra_list__du_stag_ordered_ra_list_1_0[1] = {
  &mercury__ra_list__ra_list__du_functor_desc_ra_list_1_0
};

static const MR_DuFunctorDescPtr mercury__ra_list__ra_list__du_stag_ordered_ra_list_1_1[1] = {
  &mercury__ra_list__ra_list__du_functor_desc_ra_list_1_1
};

static const MR_DuPtagLayout mercury__ra_list__ra_list__du_ptag_ordered_ra_list_1[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__ra_list__ra_list__du_stag_ordered_ra_list_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__ra_list__ra_list__du_stag_ordered_ra_list_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__ra_list__ra_list__du_name_ordered_ra_list_1[2] = {
  &mercury__ra_list__ra_list__du_functor_desc_ra_list_1_1,
  &mercury__ra_list__ra_list__du_functor_desc_ra_list_1_0
};

static const MR_Integer mercury__ra_list__ra_list__functor_number_map_ra_list_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__ra_list__ra_list__type_ctor_info_ra_list_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__ra_list____Unify____ra_list_1_0_10001)),
  ((MR_Box) (mercury__ra_list____Compare____ra_list_1_0_10001)),
  (MR_String) "ra_list",
  (MR_String) "ra_list",
  { mercury__ra_list__ra_list__du_name_ordered_ra_list_1 },
  { mercury__ra_list__ra_list__du_ptag_ordered_ra_list_1 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__ra_list__ra_list__functor_number_map_ra_list_1,

};

static const MR_PseudoTypeInfo mercury__ra_list__ra_list__field_types_ra_list_bintree_1_0[1] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1)
};

static const MR_DuFunctorDesc mercury__ra_list__ra_list__du_functor_desc_ra_list_bintree_1_0 = {
  (MR_String) "leaf",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__ra_list__ra_list__field_types_ra_list_bintree_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__ra_list__ra_list__field_types_ra_list_bintree_1_1[3] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mercury__ra_list__ra_list__pti_ra_list_bintree_1__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__ra_list__ra_list__pti_ra_list_bintree_1__pseudo_1)
};

static const MR_DuFunctorDesc mercury__ra_list__ra_list__du_functor_desc_ra_list_bintree_1_1 = {
  (MR_String) "node",
  INT16_C(3),
  UINT16_C(7),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__ra_list__ra_list__field_types_ra_list_bintree_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__ra_list__ra_list__du_stag_ordered_ra_list_bintree_1_0[1] = {
  &mercury__ra_list__ra_list__du_functor_desc_ra_list_bintree_1_0
};

static const MR_DuFunctorDescPtr mercury__ra_list__ra_list__du_stag_ordered_ra_list_bintree_1_1[1] = {
  &mercury__ra_list__ra_list__du_functor_desc_ra_list_bintree_1_1
};

static const MR_DuPtagLayout mercury__ra_list__ra_list__du_ptag_ordered_ra_list_bintree_1[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__ra_list__ra_list__du_stag_ordered_ra_list_bintree_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__ra_list__ra_list__du_stag_ordered_ra_list_bintree_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__ra_list__ra_list__du_name_ordered_ra_list_bintree_1[2] = {
  &mercury__ra_list__ra_list__du_functor_desc_ra_list_bintree_1_0,
  &mercury__ra_list__ra_list__du_functor_desc_ra_list_bintree_1_1
};

static const MR_Integer mercury__ra_list__ra_list__functor_number_map_ra_list_bintree_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__ra_list__ra_list__type_ctor_info_ra_list_bintree_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__ra_list____Unify____ra_list_bintree_1_0_10001)),
  ((MR_Box) (mercury__ra_list____Compare____ra_list_bintree_1_0_10001)),
  (MR_String) "ra_list",
  (MR_String) "ra_list_bintree",
  { mercury__ra_list__ra_list__du_name_ordered_ra_list_bintree_1 },
  { mercury__ra_list__ra_list__du_ptag_ordered_ra_list_bintree_1 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__ra_list__ra_list__functor_number_map_ra_list_bintree_1,

};

void MR_CALL 
mercury__ra_list____Compare____ra_list_1_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_18 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_19 = (MR_Integer) (HeadVar__3_3);

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = (CastX_18 == CastY_19);
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
      MR_Word Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer Var_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Integer ArgY1_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Word ArgY2_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word ArgY3_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
        MR_Word SubResult1_12;

        succeeded = (Var_28 < ArgY1_11);
        if (succeeded)
          SubResult1_12 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_28 == ArgY1_11);
          if (succeeded)
            SubResult1_12 = (MR_Integer) 0;
          else
            SubResult1_12 = (MR_Integer) 2;
        }
        succeeded = (SubResult1_12 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_12;
        else
        {
          MR_Word SubResult2_15;

          mercury__ra_list____Compare____ra_list_bintree_1_0(TypeInfo_for_T_20, &SubResult2_15, Var_27, ArgY2_14);
          succeeded = (SubResult2_15 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult2_15;
          else
          {
            MR_Word next_value_of_HeadVar__2_2 = Var_26;
            MR_Word next_value_of_HeadVar__3_3 = ArgY3_17;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            HeadVar__3_3 = next_value_of_HeadVar__3_3;
            continue;
          }
        }
      }
    }
    break;
  }
}

void MR_CALL 
mercury__ra_list____Compare____ra_list_bintree_1_0(
  MR_Word TypeInfo_for_T_24,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_22 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_23 = (MR_Integer) (HeadVar__3_3);

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = (CastX_22 == CastY_23);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    {
      MR_Box Var_29 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
      {
        MR_Box ArgY1_5 = (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0));

        mercury__builtin__compare_3_p_0(TypeInfo_for_T_24, HeadVar__1_1, Var_29, ArgY1_5);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    }
    else
    {
      MR_Word Var_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word Var_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box Var_32 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Box ArgY1_15 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));
        MR_Word ArgY2_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word ArgY3_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
        MR_Word SubResult1_16;

        mercury__builtin__compare_3_p_0(TypeInfo_for_T_24, &SubResult1_16, Var_32, ArgY1_15);
        succeeded = (SubResult1_16 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_16;
        else
        {
          MR_Word SubResult2_19;

          mercury__ra_list____Compare____ra_list_bintree_1_0(TypeInfo_for_T_24, &SubResult2_19, Var_31, ArgY2_18);
          succeeded = (SubResult2_19 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult2_19;
          else
          {
            MR_Word next_value_of_HeadVar__2_2 = Var_30;
            MR_Word next_value_of_HeadVar__3_3 = ArgY3_21;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            HeadVar__3_3 = next_value_of_HeadVar__3_3;
            continue;
          }
        }
      }
    }
    break;
  }
}

void MR_CALL 
mercury__ra_list__ra_list_to_list_2_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word RAList_3,
  MR_Word * List_4)
{
  MR_bool succeeded = (RAList_3 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Box RAHead_5;
  MR_Word RATail_6;
  MR_Word Var_23;
  MR_Word Var_24;
  MR_Integer Var_25;

  if (succeeded)
  {
    Var_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), RAList_3, (MR_Integer) 0))));
    Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RAList_3, (MR_Integer) 1))));
    Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RAList_3, (MR_Integer) 2))));
    if (((MR_tag((MR_Word) Var_24)) == (MR_Integer) 0))
    {
      RAHead_5 = (MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 0));
      RATail_6 = Var_23;
    }
    else
    {
      MR_Word T1_15;
      MR_Word T2_16;
      MR_Integer Size2_19;
      MR_Word Var_22;

      RAHead_5 = (MR_hl_field(MR_mktag(1), Var_24, (MR_Integer) 0));
      T1_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_24, (MR_Integer) 1))));
      T2_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_24, (MR_Integer) 2))));
      Size2_19 = (Var_25 / (MR_Integer) 2);
      {
        Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Size2_19));
        MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (T2_16));
        MR_hl_field(MR_mktag(1), Var_22, 2) = ((MR_Box) (Var_23));
      }
      {
        RATail_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), RATail_6, 0) = ((MR_Box) (Size2_19));
        MR_hl_field(MR_mktag(1), RATail_6, 1) = ((MR_Box) (T1_15));
        MR_hl_field(MR_mktag(1), RATail_6, 2) = ((MR_Box) (Var_22));
      }
    }
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word * AddrTail_32;

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *List_4 = base;
      MR_hl_field(MR_mktag(1), base, 0) = RAHead_5;
      MR_hl_field(MR_mktag(1), base, 1) = NULL;
    }
    AddrTail_32 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *List_4, (MR_Integer) 1)));
    mercury__ra_list__LCMC__pred__ra_list_to_list__1_2_p_0(TypeInfo_for_T_8, RATail_6, AddrTail_32);
  }
  else
    *List_4 = (MR_Word) ((MR_Unsigned) 0U);
}

void MR_CALL 
mercury__ra_list__LCMC__pred__ra_list_to_list__1_2_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word RAList_3,
  MR_Word * AddrOfList_33)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (RAList_3 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Box RAHead_5;
    MR_Word RATail_6;
    MR_Word Var_23;
    MR_Word Var_24;
    MR_Integer Var_25;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Var_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), RAList_3, (MR_Integer) 0))));
      Var_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RAList_3, (MR_Integer) 1))));
      Var_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RAList_3, (MR_Integer) 2))));
      if (((MR_tag((MR_Word) Var_24)) == (MR_Integer) 0))
      {
        RAHead_5 = (MR_hl_field(MR_mktag(0), Var_24, (MR_Integer) 0));
        RATail_6 = Var_23;
      }
      else
      {
        MR_Word T1_15;
        MR_Word T2_16;
        MR_Integer Size2_19;
        MR_Word Var_22;

        RAHead_5 = (MR_hl_field(MR_mktag(1), Var_24, (MR_Integer) 0));
        T1_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_24, (MR_Integer) 1))));
        T2_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_24, (MR_Integer) 2))));
        Size2_19 = (Var_25 / (MR_Integer) 2);
        {
          Var_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_22, 0) = ((MR_Box) (Size2_19));
          MR_hl_field(MR_mktag(1), Var_22, 1) = ((MR_Box) (T2_16));
          MR_hl_field(MR_mktag(1), Var_22, 2) = ((MR_Box) (Var_23));
        }
        {
          RATail_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), RATail_6, 0) = ((MR_Box) (Size2_19));
          MR_hl_field(MR_mktag(1), RATail_6, 1) = ((MR_Box) (T1_15));
          MR_hl_field(MR_mktag(1), RATail_6, 2) = ((MR_Box) (Var_22));
        }
      }
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Word List_4;
      MR_Word * AddrTail_32;
      MR_Word next_value_of_RAList_3;
      MR_Word * next_value_of_AddrOfList_33;

      {
        List_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), List_4, 0) = RAHead_5;
        MR_hl_field(MR_mktag(1), List_4, 1) = NULL;
      }
      AddrTail_32 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), List_4, (MR_Integer) 1)));
      *AddrOfList_33 = List_4;
      // direct tailcall eliminated
      ;
      next_value_of_RAList_3 = RATail_6;
      next_value_of_AddrOfList_33 = AddrTail_32;
      RAList_3 = next_value_of_RAList_3;
      AddrOfList_33 = next_value_of_AddrOfList_33;
      continue;
    }
    else
      *AddrOfList_33 = (MR_Word) ((MR_Unsigned) 0U);
    break;
  }
}

MR_bool MR_CALL 
mercury__ra_list__drop_3_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Integer N_4,
  MR_Word As_5,
  MR_Word * Bs_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (N_4 > (MR_Integer) 0);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Integer Size_7;
      MR_Word Cs_9;

      succeeded = (As_5 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Size_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), As_5, (MR_Integer) 0))));
        Cs_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), As_5, (MR_Integer) 2))));
        succeeded = (Size_7 < N_4);
        if (succeeded)
        {
          MR_Integer N1_10 = (MR_Integer) ((MR_Unsigned) N_4 - (MR_Unsigned) Size_7);
          MR_Integer next_value_of_N_4 = N1_10;
          MR_Word next_value_of_As_5 = Cs_9;

          // direct tailcall eliminated
          ;
          N_4 = next_value_of_N_4;
          As_5 = next_value_of_As_5;
          continue;
        }
        else
          succeeded = mercury__ra_list__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_108_111_119_95_100_114_111_112_95_95_91_49_93_95_48_3_p_0(N_4, As_5, Bs_6);
      }
    }
    else
    {
      *Bs_6 = As_5;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

static MR_bool MR_CALL 
mercury__ra_list__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_108_111_119_95_100_114_111_112_95_95_91_49_93_95_48_3_p_0(
  MR_Integer N_4,
  MR_Word As_5,
  MR_Word * Bs_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (N_4 > (MR_Integer) 0);

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Integer N1_7 = (MR_Integer) ((MR_Unsigned) N_4 - (MR_Unsigned) 1);
      MR_Word Cs_8;
      MR_Word Var_26;
      MR_Word Var_27;
      MR_Integer Var_28;
      MR_Integer next_value_of_N_4;
      MR_Word next_value_of_As_5;

      succeeded = (As_5 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_28 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), As_5, (MR_Integer) 0))));
        Var_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), As_5, (MR_Integer) 1))));
        Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), As_5, (MR_Integer) 2))));
        if (((MR_tag((MR_Word) Var_27)) == (MR_Integer) 0))
          Cs_8 = Var_26;
        else
        {
          MR_Word T1_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_27, (MR_Integer) 1))));
          MR_Word T2_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_27, (MR_Integer) 2))));
          MR_Integer Size2_22 = (Var_28 / (MR_Integer) 2);
          MR_Word Var_25;

          {
            Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (Size2_22));
            MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) (T2_19));
            MR_hl_field(MR_mktag(1), Var_25, 2) = ((MR_Box) (Var_26));
          }
          {
            Cs_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Cs_8, 0) = ((MR_Box) (Size2_22));
            MR_hl_field(MR_mktag(1), Cs_8, 1) = ((MR_Box) (T1_18));
            MR_hl_field(MR_mktag(1), Cs_8, 2) = ((MR_Box) (Var_25));
          }
        }
        // direct tailcall eliminated
        ;
        next_value_of_N_4 = N1_7;
        next_value_of_As_5 = Cs_8;
        N_4 = next_value_of_N_4;
        As_5 = next_value_of_As_5;
        continue;
      }
    }
    else
    {
      *Bs_6 = As_5;
      succeeded = MR_TRUE;
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__ra_list__append_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word As_4,
  MR_Word Bs_5,
  MR_Word * ABs_6)
{
  MR_bool succeeded = (As_4 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Box AH_7;
  MR_Word AT_8;
  MR_Word Var_25;
  MR_Word Var_26;
  MR_Integer Var_27;

  if (succeeded)
  {
    Var_27 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), As_4, (MR_Integer) 0))));
    Var_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), As_4, (MR_Integer) 1))));
    Var_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), As_4, (MR_Integer) 2))));
    if (((MR_tag((MR_Word) Var_26)) == (MR_Integer) 0))
    {
      AH_7 = (MR_hl_field(MR_mktag(0), Var_26, (MR_Integer) 0));
      AT_8 = Var_25;
    }
    else
    {
      MR_Word T1_17;
      MR_Word T2_18;
      MR_Integer Size2_21;
      MR_Word Var_24;

      AH_7 = (MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 0));
      T1_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 1))));
      T2_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_26, (MR_Integer) 2))));
      Size2_21 = (Var_27 / (MR_Integer) 2);
      {
        Var_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_24, 0) = ((MR_Box) (Size2_21));
        MR_hl_field(MR_mktag(1), Var_24, 1) = ((MR_Box) (T2_18));
        MR_hl_field(MR_mktag(1), Var_24, 2) = ((MR_Box) (Var_25));
      }
      {
        AT_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), AT_8, 0) = ((MR_Box) (Size2_21));
        MR_hl_field(MR_mktag(1), AT_8, 1) = ((MR_Box) (T1_17));
        MR_hl_field(MR_mktag(1), AT_8, 2) = ((MR_Box) (Var_24));
      }
    }
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Word ATBs_9;
    MR_Integer Size1_37;
    MR_Word T1_38;
    MR_Integer Size2_39;
    MR_Word T2_40;
    MR_Word Rest_41;
    MR_Word Var_43;

    mercury__ra_list__append_3_p_0(TypeInfo_for_T_10, AT_8, Bs_5, &ATBs_9);
    succeeded = (ATBs_9 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Size1_37 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), ATBs_9, (MR_Integer) 0))));
      T1_38 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ATBs_9, (MR_Integer) 1))));
      Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ATBs_9, (MR_Integer) 2))));
      succeeded = (Var_43 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Size2_39 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_43, (MR_Integer) 0))));
        T2_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_43, (MR_Integer) 1))));
        Rest_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_43, (MR_Integer) 2))));
        succeeded = (Size1_37 == Size2_39);
      }
    }
    if (succeeded)
    {
      MR_Integer NewSize_42;
      MR_Integer Var_44 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Size1_37);
      MR_Word Var_46;

      NewSize_42 = (MR_Integer) ((MR_Unsigned) Var_44 + (MR_Unsigned) Size2_39);
      {
        Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_46, 0) = AH_7;
        MR_hl_field(MR_mktag(1), Var_46, 1) = ((MR_Box) (T1_38));
        MR_hl_field(MR_mktag(1), Var_46, 2) = ((MR_Box) (T2_40));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *ABs_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (NewSize_42));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_46));
        MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Rest_41));
      }
    }
    else
    {
      MR_Word Var_48;

      {
        Var_48 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Var_48, 0) = AH_7;
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *ABs_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_48));
        MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (ATBs_9));
      }
    }
  }
  else
    *ABs_6 = Bs_5;
}

MR_bool MR_CALL 
mercury__ra_list__update_4_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Integer I_5,
  MR_Box X_6,
  MR_Word List0_7,
  MR_Word * List_8)
{
  MR_bool succeeded = (I_5 >= (MR_Integer) 0);

  if (succeeded)
    succeeded = mercury__ra_list__update_2_4_p_0(TypeInfo_for_T_10, I_5, X_6, List0_7, List_8);
  return succeeded;
}

MR_bool MR_CALL 
mercury__ra_list__update_2_4_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Integer I_5,
  MR_Box X_6,
  MR_Word List0_7,
  MR_Word * List_8)
{
  MR_bool succeeded = (List0_7 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Integer Size_9;
  MR_Word T0_10;
  MR_Word Rest_11;

  if (succeeded)
  {
    Size_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), List0_7, (MR_Integer) 0))));
    T0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), List0_7, (MR_Integer) 1))));
    Rest_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), List0_7, (MR_Integer) 2))));
    succeeded = (I_5 < Size_9);
    if (succeeded)
    {
      MR_Word T_12;

      succeeded = mercury__ra_list__update_bintree_5_p_0(TypeInfo_for_T_14, Size_9, I_5, X_6, T0_10, &T_12);
      if (succeeded)
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *List_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Size_9));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (T_12));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Rest_11));
        }
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Integer NewI_13 = (MR_Integer) ((MR_Unsigned) I_5 - (MR_Unsigned) Size_9);
      MR_Word Var_15;

      succeeded = mercury__ra_list__update_2_4_p_0(TypeInfo_for_T_14, NewI_13, X_6, Rest_11, &Var_15);
      if (succeeded)
      {
        succeeded = mercury__ra_list____Unify____ra_list_1_0(TypeInfo_for_T_14, List0_7, Var_15);
        if (succeeded)
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            *List_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Size_9));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (T0_10));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (List0_7));
          }
          succeeded = MR_TRUE;
        }
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__ra_list____Unify____ra_list_1_0(
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
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_8;
      MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_10;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        ArgY3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
        succeeded = (ArgX1_5 == ArgY1_6);
        if (succeeded)
        {
          succeeded = mercury__ra_list____Unify____ra_list_bintree_1_0(TypeInfo_for_T_13, ArgX2_7, ArgY2_8);
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__1_1 = ArgX3_9;
            next_value_of_HeadVar__2_2 = ArgY3_10;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
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
mercury__ra_list____Unify____ra_list_bintree_1_0(
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
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
    {
      MR_Box ArgX1_3 = (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0));
      MR_Box ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_13, ArgX1_3, ArgY1_4);
      }
    }
    else
    {
      MR_Box ArgX1_5 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      MR_Box ArgY1_6;
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_8;
      MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_10;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
        ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        ArgY3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_13, ArgX1_5, ArgY1_6);
        if (succeeded)
        {
          succeeded = mercury__ra_list____Unify____ra_list_bintree_1_0(TypeInfo_for_T_13, ArgX2_7, ArgY2_8);
          if (succeeded)
          {
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__1_1 = ArgX3_9;
            next_value_of_HeadVar__2_2 = ArgY3_10;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
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
mercury__ra_list__update_bintree_5_p_0(
  MR_Word TypeInfo_for_T_25,
  MR_Integer Size_1,
  MR_Integer HeadVar__2_2,
  MR_Box X_3,
  MR_Word HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) HeadVar__4_4)) == (MR_Integer) 0))
  {
    succeeded = (HeadVar__2_2 == (MR_Integer) 0);
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *HeadVar__5_5 = base;
        MR_hl_field(MR_mktag(0), base, 0) = X_3;
      }
      succeeded = MR_TRUE;
    }
  }
  else
  {
    MR_Box X0_12 = (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0));
    MR_Word T1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
    MR_Word T2_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 2))));

    succeeded = (HeadVar__2_2 == (MR_Integer) 0);
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__5_5 = base;
        MR_hl_field(MR_mktag(1), base, 0) = X_3;
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (T1_13));
        MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (T2_14));
      }
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Integer Size2_16 = (Size_1 / (MR_Integer) 2);

      succeeded = (HeadVar__2_2 <= Size2_16);
      if (succeeded)
      {
        MR_Integer NewI_17 = (MR_Integer) ((MR_Unsigned) HeadVar__2_2 - (MR_Unsigned) 1);
        MR_Word * AddrT0_32;

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = X0_12;
          MR_hl_field(MR_mktag(1), base, 1) = NULL;
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (T2_14));
        }
        AddrT0_32 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__5_5, (MR_Integer) 1)));
        succeeded = mercury__ra_list__LCMC__pred__update_bintree__1_5_p_0(TypeInfo_for_T_25, Size2_16, NewI_17, X_3, T1_13, AddrT0_32);
      }
      else
      {
        MR_Integer Var_21 = (MR_Integer) ((MR_Unsigned) HeadVar__2_2 - (MR_Unsigned) 1);
        MR_Integer NewI_23 = (MR_Integer) ((MR_Unsigned) Var_21 - (MR_Unsigned) Size2_16);
        MR_Word * AddrT0_33;

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__5_5 = base;
          MR_hl_field(MR_mktag(1), base, 0) = X0_12;
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (T1_13));
          MR_hl_field(MR_mktag(1), base, 2) = NULL;
        }
        AddrT0_33 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__5_5, (MR_Integer) 2)));
        succeeded = mercury__ra_list__LCMC__pred__update_bintree__1_5_p_0(TypeInfo_for_T_25, Size2_16, NewI_23, X_3, T2_14, AddrT0_33);
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__ra_list__LCMC__pred__update_bintree__1_5_p_0(
  MR_Word TypeInfo_for_T_25,
  MR_Integer Size_1,
  MR_Integer HeadVar__2_2,
  MR_Box X_3,
  MR_Word HeadVar__4_4,
  MR_Word * AddrOfHeadVar__5_34)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) HeadVar__4_4)) == (MR_Integer) 0))
    {
      MR_Word HeadVar__5_5;

      succeeded = (HeadVar__2_2 == (MR_Integer) 0);
      if (succeeded)
      {
        {
          HeadVar__5_5 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), HeadVar__5_5, 0) = X_3;
        }
        *AddrOfHeadVar__5_34 = HeadVar__5_5;
        succeeded = MR_TRUE;
      }
    }
    else
    {
      MR_Box X0_12 = (MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 0));
      MR_Word T1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 1))));
      MR_Word T2_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__4_4, (MR_Integer) 2))));

      succeeded = (HeadVar__2_2 == (MR_Integer) 0);
      if (succeeded)
      {
        MR_Word HeadVar__5_35;

        {
          HeadVar__5_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), HeadVar__5_35, 0) = X_3;
          MR_hl_field(MR_mktag(1), HeadVar__5_35, 1) = ((MR_Box) (T1_13));
          MR_hl_field(MR_mktag(1), HeadVar__5_35, 2) = ((MR_Box) (T2_14));
        }
        *AddrOfHeadVar__5_34 = HeadVar__5_35;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Integer Size2_16 = (Size_1 / (MR_Integer) 2);

        succeeded = (HeadVar__2_2 <= Size2_16);
        if (succeeded)
        {
          MR_Integer NewI_17 = (MR_Integer) ((MR_Unsigned) HeadVar__2_2 - (MR_Unsigned) 1);
          MR_Word * AddrT0_32;
          MR_Word HeadVar__5_36;
          MR_Integer next_value_of_Size_1;
          MR_Integer next_value_of_HeadVar__2_2;
          MR_Word next_value_of_HeadVar__4_4;
          MR_Word * next_value_of_AddrOfHeadVar__5_34;

          {
            HeadVar__5_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), HeadVar__5_36, 0) = X0_12;
            MR_hl_field(MR_mktag(1), HeadVar__5_36, 1) = NULL;
            MR_hl_field(MR_mktag(1), HeadVar__5_36, 2) = ((MR_Box) (T2_14));
          }
          AddrT0_32 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__5_36, (MR_Integer) 1)));
          *AddrOfHeadVar__5_34 = HeadVar__5_36;
          // direct tailcall eliminated
          ;
          next_value_of_Size_1 = Size2_16;
          next_value_of_HeadVar__2_2 = NewI_17;
          next_value_of_HeadVar__4_4 = T1_13;
          next_value_of_AddrOfHeadVar__5_34 = AddrT0_32;
          Size_1 = next_value_of_Size_1;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__4_4 = next_value_of_HeadVar__4_4;
          AddrOfHeadVar__5_34 = next_value_of_AddrOfHeadVar__5_34;
          continue;
        }
        else
        {
          MR_Integer Var_21 = (MR_Integer) ((MR_Unsigned) HeadVar__2_2 - (MR_Unsigned) 1);
          MR_Integer NewI_23 = (MR_Integer) ((MR_Unsigned) Var_21 - (MR_Unsigned) Size2_16);
          MR_Word * AddrT0_33;
          MR_Word HeadVar__5_39;
          MR_Integer next_value_of_Size_1;
          MR_Integer next_value_of_HeadVar__2_2;
          MR_Word next_value_of_HeadVar__4_4;
          MR_Word * next_value_of_AddrOfHeadVar__5_34;

          {
            HeadVar__5_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), HeadVar__5_39, 0) = X0_12;
            MR_hl_field(MR_mktag(1), HeadVar__5_39, 1) = ((MR_Box) (T1_13));
            MR_hl_field(MR_mktag(1), HeadVar__5_39, 2) = NULL;
          }
          AddrT0_33 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__5_39, (MR_Integer) 2)));
          *AddrOfHeadVar__5_34 = HeadVar__5_39;
          // direct tailcall eliminated
          ;
          next_value_of_Size_1 = Size2_16;
          next_value_of_HeadVar__2_2 = NewI_23;
          next_value_of_HeadVar__4_4 = T2_14;
          next_value_of_AddrOfHeadVar__5_34 = AddrT0_33;
          Size_1 = next_value_of_Size_1;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__4_4 = next_value_of_HeadVar__4_4;
          AddrOfHeadVar__5_34 = next_value_of_AddrOfHeadVar__5_34;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__ra_list__det_index1_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word List_4,
  MR_Integer I_5,
  MR_Box * X_6)
{
  MR_bool succeeded;
  MR_Box XPrime_7;
  MR_Integer I0_14 = (MR_Integer) ((MR_Unsigned) I_5 - (MR_Unsigned) 1);

  succeeded = (I0_14 >= (MR_Integer) 0);
  if (succeeded)
    succeeded = mercury__ra_list__index0_list_3_p_0(TypeInfo_for_T_10, List_4, I0_14, &XPrime_7);
  if (succeeded)
    *X_6 = XPrime_7;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ra_list.det_index1\'/3", (MR_String) "index1 failed");
      return;
    }
}

void MR_CALL 
mercury__ra_list__det_index0_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word List_4,
  MR_Integer I_5,
  MR_Box * X_6)
{
  MR_bool succeeded = (I_5 >= (MR_Integer) 0);
  MR_Box XPrime_7;

  if (succeeded)
    succeeded = mercury__ra_list__index0_list_3_p_0(TypeInfo_for_T_10, List_4, I_5, &XPrime_7);
  if (succeeded)
    *X_6 = XPrime_7;
  else
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140ra_list.det_index0\'/3", (MR_String) "index0 failed");
      return;
    }
}

MR_bool MR_CALL 
mercury__ra_list__index1_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word List_4,
  MR_Integer I1_5,
  MR_Box * X_6)
{
  MR_bool succeeded;
  MR_Integer I0_7 = (MR_Integer) ((MR_Unsigned) I1_5 - (MR_Unsigned) 1);

  succeeded = (I0_7 >= (MR_Integer) 0);
  if (succeeded)
    succeeded = mercury__ra_list__index0_list_3_p_0(TypeInfo_for_T_10, List_4, I0_7, X_6);
  return succeeded;
}

MR_bool MR_CALL 
mercury__ra_list__index0_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word List_4,
  MR_Integer I0_5,
  MR_Box * X_6)
{
  MR_bool succeeded = (I0_5 >= (MR_Integer) 0);

  if (succeeded)
    succeeded = mercury__ra_list__index0_list_3_p_0(TypeInfo_for_T_8, List_4, I0_5, X_6);
  return succeeded;
}

MR_bool MR_CALL 
mercury__ra_list__index0_list_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word HeadVar__1_1,
  MR_Integer I_7,
  MR_Box * X_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
    MR_Integer Size_4;
    MR_Word T_5;
    MR_Word Rest_6;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      Size_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      T_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      Rest_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
      succeeded = (I_7 < Size_4);
      if (succeeded)
        succeeded = mercury__ra_list__index0_bintree_4_p_0(TypeInfo_for_T_10, Size_4, T_5, I_7, X_8);
      else
      {
        MR_Integer NewI_9 = (MR_Integer) ((MR_Unsigned) I_7 - (MR_Unsigned) Size_4);
        MR_Word next_value_of_HeadVar__1_1 = Rest_6;
        MR_Integer next_value_of_I_7 = NewI_9;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        I_7 = next_value_of_I_7;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__ra_list__index0_bintree_4_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_Integer Size_1,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3,
  MR_Box * X_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    {
      *X_4 = (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0));
      succeeded = (HeadVar__3_3 == (MR_Integer) 0);
    }
    else
    {
      MR_Box X0_8 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Word T1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word T2_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = (HeadVar__3_3 == (MR_Integer) 0);
      if (succeeded)
      {
        *X_4 = X0_8;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Integer Size2_13 = (Size_1 / (MR_Integer) 2);

        succeeded = (HeadVar__3_3 <= Size2_13);
        if (succeeded)
        {
          MR_Integer NewI_14 = (MR_Integer) ((MR_Unsigned) HeadVar__3_3 - (MR_Unsigned) 1);
          MR_Integer next_value_of_Size_1 = Size2_13;
          MR_Word next_value_of_HeadVar__2_2 = T1_9;
          MR_Integer next_value_of_HeadVar__3_3 = NewI_14;

          // direct tailcall eliminated
          ;
          Size_1 = next_value_of_Size_1;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
        else
        {
          MR_Integer Var_17 = (MR_Integer) ((MR_Unsigned) HeadVar__3_3 - (MR_Unsigned) 1);
          MR_Integer NewI_19 = (MR_Integer) ((MR_Unsigned) Var_17 - (MR_Unsigned) Size2_13);
          MR_Integer next_value_of_Size_1 = Size2_13;
          MR_Word next_value_of_HeadVar__2_2 = T2_10;
          MR_Integer next_value_of_HeadVar__3_3 = NewI_19;

          // direct tailcall eliminated
          ;
          Size_1 = next_value_of_Size_1;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          HeadVar__3_3 = next_value_of_HeadVar__3_3;
          continue;
        }
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__ra_list__head_tail_3_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word HeadVar__1_1,
  MR_Box * X_2,
  MR_Word * Tail_3)
{
  MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word Var_19;
  MR_Word Var_20;
  MR_Integer Var_21;

  if (succeeded)
  {
    Var_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
    if (((MR_tag((MR_Word) Var_20)) == (MR_Integer) 0))
    {
      *X_2 = (MR_hl_field(MR_mktag(0), Var_20, (MR_Integer) 0));
      *Tail_3 = Var_19;
    }
    else
    {
      MR_Word T1_10;
      MR_Word T2_11;
      MR_Integer Size2_14;
      MR_Word Var_17;

      *X_2 = (MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 0));
      T1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 1))));
      T2_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_20, (MR_Integer) 2))));
      Size2_14 = (Var_21 / (MR_Integer) 2);
      {
        Var_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_17, 0) = ((MR_Box) (Size2_14));
        MR_hl_field(MR_mktag(1), Var_17, 1) = ((MR_Box) (T2_11));
        MR_hl_field(MR_mktag(1), Var_17, 2) = ((MR_Box) (Var_19));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *Tail_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Size2_14));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (T1_10));
        MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Var_17));
      }
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__ra_list__tail_2_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Word HeadVar__1_1,
  MR_Word * Tail_2)
{
  MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word Var_18;
  MR_Word Var_19;
  MR_Integer Var_20;

  if (succeeded)
  {
    Var_20 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
    Var_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    Var_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
    if (((MR_tag((MR_Word) Var_19)) == (MR_Integer) 0))
      *Tail_2 = Var_18;
    else
    {
      MR_Word T1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 1))));
      MR_Word T2_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_19, (MR_Integer) 2))));
      MR_Integer Size2_13 = (Var_20 / (MR_Integer) 2);
      MR_Word Var_16;

      {
        Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_16, 0) = ((MR_Box) (Size2_13));
        MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (T2_10));
        MR_hl_field(MR_mktag(1), Var_16, 2) = ((MR_Box) (Var_18));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        *Tail_2 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Size2_13));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (T1_9));
        MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Var_16));
      }
    }
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__ra_list__head_2_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word HeadVar__1_1,
  MR_Box * X_2)
{
  MR_bool succeeded = (HeadVar__1_1 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word Var_15;

  if (succeeded)
  {
    Var_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    if (((MR_tag((MR_Word) Var_15)) == (MR_Integer) 0))
      *X_2 = (MR_hl_field(MR_mktag(0), Var_15, (MR_Integer) 0));
    else
      *X_2 = (MR_hl_field(MR_mktag(1), Var_15, (MR_Integer) 0));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
mercury__ra_list__cons_3_p_0(
  MR_Word TypeInfo_for_T_19,
  MR_Box X_4,
  MR_Word List0_5,
  MR_Word * List_6)
{
  MR_bool succeeded = (List0_5 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Integer Size1_7;
  MR_Word T1_8;
  MR_Integer Size2_9;
  MR_Word T2_10;
  MR_Word Rest_11;
  MR_Word Var_13;

  if (succeeded)
  {
    Size1_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), List0_5, (MR_Integer) 0))));
    T1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), List0_5, (MR_Integer) 1))));
    Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), List0_5, (MR_Integer) 2))));
    succeeded = (Var_13 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      Size2_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_13, (MR_Integer) 0))));
      T2_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_13, (MR_Integer) 1))));
      Rest_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_13, (MR_Integer) 2))));
      succeeded = (Size1_7 == Size2_9);
    }
  }
  if (succeeded)
  {
    MR_Integer NewSize_12;
    MR_Integer Var_14 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Size1_7);
    MR_Word Var_16;

    NewSize_12 = (MR_Integer) ((MR_Unsigned) Var_14 + (MR_Unsigned) Size2_9);
    {
      Var_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_16, 0) = X_4;
      MR_hl_field(MR_mktag(1), Var_16, 1) = ((MR_Box) (T1_8));
      MR_hl_field(MR_mktag(1), Var_16, 2) = ((MR_Box) (T2_10));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *List_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (NewSize_12));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_16));
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Rest_11));
    }
  }
  else
  {
    MR_Word Var_18;

    {
      Var_18 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_18, 0) = X_4;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      *List_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Var_18));
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (List0_5));
    }
  }
}

void MR_CALL 
mercury__ra_list__init_1_p_0(
  MR_Word TypeInfo_for_T_2,
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Word) ((MR_Unsigned) 0U);
}

static MR_bool MR_CALL 
mercury__ra_list____Unify____ra_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__ra_list____Unify____ra_list_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__ra_list____Compare____ra_list_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__ra_list____Compare____ra_list_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__ra_list____Unify____ra_list_bintree_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__ra_list____Unify____ra_list_bintree_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__ra_list____Compare____ra_list_bintree_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__ra_list____Compare____ra_list_bintree_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__ra_list__init(void)
{
}

void mercury__ra_list__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__ra_list__ra_list__type_ctor_info_ra_list_1);
	MR_register_type_ctor_info(&mercury__ra_list__ra_list__type_ctor_info_ra_list_bintree_1);
}

void mercury__ra_list__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__ra_list__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module ra_list.
