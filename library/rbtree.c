/*
** Automatically generated from `rbtree.m'
** by the Mercury compiler,
** version rotd-2019-06-25
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


// :- module rbtree.
// :- implementation.

/*
INIT mercury__rbtree__init
ENDINIT
*/

#include "rbtree.mih"


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
#include "int16.mih"
#include "int32.mih"
#include "int64.mih"
#include "int8.mih"
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




static const MR_DuFunctorDesc mercury__rbtree__rbtree__du_functor_desc_rbtree_2_0;

static const MR_FA_PseudoTypeInfo_Struct2 mercury__rbtree__rbtree__pti_rbtree_2__pseudo_1__pseudo_2;

static const MR_PseudoTypeInfo mercury__rbtree__rbtree__field_types_rbtree_2_1[4];

static const MR_DuFunctorDesc mercury__rbtree__rbtree__du_functor_desc_rbtree_2_1;

static const MR_PseudoTypeInfo mercury__rbtree__rbtree__field_types_rbtree_2_2[4];

static const MR_DuFunctorDesc mercury__rbtree__rbtree__du_functor_desc_rbtree_2_2;

static const MR_DuFunctorDescPtr mercury__rbtree__rbtree__du_stag_ordered_rbtree_2_0[1];

static const MR_DuFunctorDescPtr mercury__rbtree__rbtree__du_stag_ordered_rbtree_2_1[1];

static const MR_DuFunctorDescPtr mercury__rbtree__rbtree__du_stag_ordered_rbtree_2_2[1];

static const MR_DuPtagLayout mercury__rbtree__rbtree__du_ptag_ordered_rbtree_2[3];

static const MR_DuFunctorDescPtr mercury__rbtree__rbtree__du_name_ordered_rbtree_2[3];

static const MR_Integer mercury__rbtree__rbtree__functor_number_map_rbtree_2[3];

static MR_Integer MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_0(
  MR_Word Var_31,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_0(
  MR_Word Var_37,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4);

static void MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_p_0(
  MR_Word TypeInfo_for_K_143,
  MR_Word HeadVar__1_1,
  MR_Box K_2,
  MR_Box V_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_p_1(
  MR_Word TypeInfo_for_K_104,
  MR_Word HeadVar__1_1,
  MR_Box K_2,
  MR_Box V_3,
  MR_Word * HeadVar__4_4);

static MR_bool MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_p_0(
  MR_Word TypeInfo_for_K_102,
  MR_Word HeadVar__1_1,
  MR_Box K_2,
  MR_Box V_3,
  MR_Word * HeadVar__4_4);

static MR_bool MR_CALL 
mercury__rbtree____Unify____rbtree_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
mercury__rbtree____Compare____rbtree_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);


static /* final */ const MR_Box mercury__rbtree_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__rbtree_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__rbtree_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__rbtree_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__rbtree_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__rbtree_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__rbtree_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__rbtree_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__rbtree_scalar_common_2[0])),
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



static const MR_DuFunctorDesc mercury__rbtree__rbtree__du_functor_desc_rbtree_2_0 = {
  (MR_String) "empty",
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

static const MR_FA_PseudoTypeInfo_Struct2 mercury__rbtree__rbtree__pti_rbtree_2__pseudo_1__pseudo_2 = {
  &mercury__rbtree__rbtree__type_ctor_info_rbtree_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_PseudoTypeInfo mercury__rbtree__rbtree__field_types_rbtree_2_1[4] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) ((MR_Integer) 2),
  (MR_PseudoTypeInfo) (&mercury__rbtree__rbtree__pti_rbtree_2__pseudo_1__pseudo_2),
  (MR_PseudoTypeInfo) (&mercury__rbtree__rbtree__pti_rbtree_2__pseudo_1__pseudo_2)
};

static const MR_DuFunctorDesc mercury__rbtree__rbtree__du_functor_desc_rbtree_2_1 = {
  (MR_String) "red",
  INT16_C(4),
  UINT16_C(15),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__rbtree__rbtree__field_types_rbtree_2_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__rbtree__rbtree__field_types_rbtree_2_2[4] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) ((MR_Integer) 2),
  (MR_PseudoTypeInfo) (&mercury__rbtree__rbtree__pti_rbtree_2__pseudo_1__pseudo_2),
  (MR_PseudoTypeInfo) (&mercury__rbtree__rbtree__pti_rbtree_2__pseudo_1__pseudo_2)
};

static const MR_DuFunctorDesc mercury__rbtree__rbtree__du_functor_desc_rbtree_2_2 = {
  (MR_String) "black",
  INT16_C(4),
  UINT16_C(15),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  mercury__rbtree__rbtree__field_types_rbtree_2_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__rbtree__rbtree__du_stag_ordered_rbtree_2_0[1] = {
  &mercury__rbtree__rbtree__du_functor_desc_rbtree_2_0
};

static const MR_DuFunctorDescPtr mercury__rbtree__rbtree__du_stag_ordered_rbtree_2_1[1] = {
  &mercury__rbtree__rbtree__du_functor_desc_rbtree_2_1
};

static const MR_DuFunctorDescPtr mercury__rbtree__rbtree__du_stag_ordered_rbtree_2_2[1] = {
  &mercury__rbtree__rbtree__du_functor_desc_rbtree_2_2
};

static const MR_DuPtagLayout mercury__rbtree__rbtree__du_ptag_ordered_rbtree_2[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__rbtree__rbtree__du_stag_ordered_rbtree_2_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__rbtree__rbtree__du_stag_ordered_rbtree_2_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__rbtree__rbtree__du_stag_ordered_rbtree_2_2,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mercury__rbtree__rbtree__du_name_ordered_rbtree_2[3] = {
  &mercury__rbtree__rbtree__du_functor_desc_rbtree_2_2,
  &mercury__rbtree__rbtree__du_functor_desc_rbtree_2_0,
  &mercury__rbtree__rbtree__du_functor_desc_rbtree_2_1
};

static const MR_Integer mercury__rbtree__rbtree__functor_number_map_rbtree_2[3] = {
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__rbtree__rbtree__type_ctor_info_rbtree_2 = {
  (MR_Integer) 2,
  UINT8_C(17),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__rbtree____Unify____rbtree_2_0_10001)),
  ((MR_Box) (mercury__rbtree____Compare____rbtree_2_0_10001)),
  (MR_String) "rbtree",
  (MR_String) "rbtree",
  {     mercury__rbtree__rbtree__du_name_ordered_rbtree_2 },
  {     mercury__rbtree__rbtree__du_ptag_ordered_rbtree_2 },
  (MR_Integer) 3,
  UINT16_C(4),
  mercury__rbtree__rbtree__functor_number_map_rbtree_2
};

static MR_Integer MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    return (MR_Integer) 1200;
  }
}

void MR_CALL 
mercury__rbtree____Compare____rbtree_2_0(
  MR_Word TypeInfo_for_K_60,
  MR_Word TypeInfo_for_V_61,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_58 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_59 = (MR_Integer) (HeadVar__3_3);

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = (CastX_58 == CastY_59);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_74 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
            MR_Word Var_75 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
            MR_Box Var_76 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
            MR_Box Var_77 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Box ArgY1_17 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));
                  MR_Box ArgY2_20 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1));
                  MR_Word ArgY3_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
                  MR_Word ArgY4_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 3))));
                  MR_Word SubResult1_18;

                  mercury__builtin__compare_3_p_0(TypeInfo_for_K_60, &SubResult1_18, Var_77, ArgY1_17);
                  succeeded = (SubResult1_18 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_18;
                  else
                  {
                    MR_Word SubResult2_21;

                    mercury__builtin__compare_3_p_0(TypeInfo_for_V_61, &SubResult2_21, Var_76, ArgY2_20);
                    succeeded = (SubResult2_21 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult2_21;
                    else
                    {
                      MR_Word SubResult3_24;

                      mercury__rbtree____Compare____rbtree_2_0(TypeInfo_for_K_60, TypeInfo_for_V_61, &SubResult3_24, Var_75, ArgY3_23);
                      succeeded = (SubResult3_24 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult3_24;
                      else
                      {
                        MR_Word next_value_of_HeadVar__2_2 = Var_74;
                        MR_Word next_value_of_HeadVar__3_3 = ArgY4_26;

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
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_70 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
            MR_Word Var_71 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
            MR_Box Var_72 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
            MR_Box Var_73 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));

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
                  MR_Box ArgY1_48 = (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0));
                  MR_Box ArgY2_51 = (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1));
                  MR_Word ArgY3_54 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 2))));
                  MR_Word ArgY4_57 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 3))));
                  MR_Word SubResult1_49;

                  mercury__builtin__compare_3_p_0(TypeInfo_for_K_60, &SubResult1_49, Var_73, ArgY1_48);
                  succeeded = (SubResult1_49 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_49;
                  else
                  {
                    MR_Word SubResult2_52;

                    mercury__builtin__compare_3_p_0(TypeInfo_for_V_61, &SubResult2_52, Var_72, ArgY2_51);
                    succeeded = (SubResult2_52 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult2_52;
                    else
                    {
                      MR_Word SubResult3_55;

                      mercury__rbtree____Compare____rbtree_2_0(TypeInfo_for_K_60, TypeInfo_for_V_61, &SubResult3_55, Var_71, ArgY3_54);
                      succeeded = (SubResult3_55 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult3_55;
                      else
                      {
                        MR_Word next_value_of_HeadVar__2_2 = Var_70;
                        MR_Word next_value_of_HeadVar__3_3 = ArgY4_57;

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
          break;
      }
    break;
  }
}

MR_bool MR_CALL 
mercury__rbtree____Unify____rbtree_2_0(
  MR_Word TypeInfo_for_K_23,
  MR_Word TypeInfo_for_V_24,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_21 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_22 = (MR_Integer) (HeadVar__2_2);

    // setup for model_semi tailcalls optimized into a loop
    ;
    succeeded = (CastX_21 == CastY_22);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
            MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

            succeeded = (CastY_4 == CastX_3);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box ArgX1_5 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
            MR_Box ArgY1_6;
            MR_Box ArgX2_7 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1));
            MR_Box ArgY2_8;
            MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
            MR_Word ArgY3_10;
            MR_Word ArgX4_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))));
            MR_Word ArgY4_12;
            MR_Word next_value_of_HeadVar__1_1;
            MR_Word next_value_of_HeadVar__2_2;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
              ArgY2_8 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
              ArgY3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
              ArgY4_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_23, ArgX1_5, ArgY1_6);
              if (succeeded)
              {
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_V_24, ArgX2_7, ArgY2_8);
                if (succeeded)
                {
                  succeeded = mercury__rbtree____Unify____rbtree_2_0(TypeInfo_for_K_23, TypeInfo_for_V_24, ArgX3_9, ArgY3_10);
                  if (succeeded)
                  {
                    // direct tailcall eliminated
                    ;
                    next_value_of_HeadVar__1_1 = ArgX4_11;
                    next_value_of_HeadVar__2_2 = ArgY4_12;
                    HeadVar__1_1 = next_value_of_HeadVar__1_1;
                    HeadVar__2_2 = next_value_of_HeadVar__2_2;
                    continue;
                  }
                }
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Box ArgX1_13 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0));
            MR_Box ArgY1_14;
            MR_Box ArgX2_15 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1));
            MR_Box ArgY2_16;
            MR_Word ArgX3_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2))));
            MR_Word ArgY3_18;
            MR_Word ArgX4_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 3))));
            MR_Word ArgY4_20;
            MR_Word next_value_of_HeadVar__1_1;
            MR_Word next_value_of_HeadVar__2_2;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_14 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
              ArgY2_16 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
              ArgY3_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
              ArgY4_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_23, ArgX1_13, ArgY1_14);
              if (succeeded)
              {
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_V_24, ArgX2_15, ArgY2_16);
                if (succeeded)
                {
                  succeeded = mercury__rbtree____Unify____rbtree_2_0(TypeInfo_for_K_23, TypeInfo_for_V_24, ArgX3_17, ArgY3_18);
                  if (succeeded)
                  {
                    // direct tailcall eliminated
                    ;
                    next_value_of_HeadVar__1_1 = ArgX4_19;
                    next_value_of_HeadVar__2_2 = ArgY4_20;
                    HeadVar__1_1 = next_value_of_HeadVar__1_1;
                    HeadVar__2_2 = next_value_of_HeadVar__2_2;
                    continue;
                  }
                }
              }
            }
          }
          break;
      }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__rbtree__delete_2_5_p_1(
  MR_Word TypeInfo_for_K_43,
  MR_Word TypeInfo_for_V_44,
  MR_Word HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_p_1(TypeInfo_for_K_43, TypeInfo_for_V_44, HeadVar__1_1, HeadVar__2_2, HeadVar__4_4, HeadVar__5_5);
}

MR_bool MR_CALL 
mercury__rbtree__map_values_3_p_1(
  MR_Word TypeInfo_for_K_25,
  MR_Word TypeInfo_for_V_26,
  MR_Word TypeInfo_for_W_27,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K0_8 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Box V0_9 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box W0_12;
          MR_Word Left_13;
          MR_Word Right_14;
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

          succeeded = func_1(((MR_Box) (HeadVar__1_1)), K0_8, V0_9, &W0_12);
          if (succeeded)
          {
            succeeded = mercury__rbtree__map_values_3_p_1(TypeInfo_for_K_25, TypeInfo_for_V_26, TypeInfo_for_W_27, HeadVar__1_1, Left0_10, &Left_13);
            if (succeeded)
            {
              succeeded = mercury__rbtree__map_values_3_p_1(TypeInfo_for_K_25, TypeInfo_for_V_26, TypeInfo_for_W_27, HeadVar__1_1, Right0_11, &Right_14);
              if (succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__3_3 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = K0_8;
                  MR_hl_field(MR_mktag(1), base, 1) = W0_12;
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Left_13));
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Right_14));
                }
                succeeded = MR_TRUE;
              }
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K0_18 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
          MR_Box V0_19 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box W0_22;
          MR_Word Left_23;
          MR_Word Right_24;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

          succeeded = func_0(((MR_Box) (HeadVar__1_1)), K0_18, V0_19, &W0_22);
          if (succeeded)
          {
            succeeded = mercury__rbtree__map_values_3_p_1(TypeInfo_for_K_25, TypeInfo_for_V_26, TypeInfo_for_W_27, HeadVar__1_1, Left0_20, &Left_23);
            if (succeeded)
            {
              succeeded = mercury__rbtree__map_values_3_p_1(TypeInfo_for_K_25, TypeInfo_for_V_26, TypeInfo_for_W_27, HeadVar__1_1, Right0_21, &Right_24);
              if (succeeded)
              {
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__3_3 = base;
                  MR_hl_field(MR_mktag(2), base, 0) = K0_18;
                  MR_hl_field(MR_mktag(2), base, 1) = W0_22;
                  MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (Left_23));
                  MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (Right_24));
                }
                succeeded = MR_TRUE;
              }
            }
          }
        }
        break;
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__rbtree__map_values_3_p_0(
  MR_Word TypeInfo_for_K_25,
  MR_Word TypeInfo_for_V_26,
  MR_Word TypeInfo_for_W_27,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  switch (MR_tag((MR_Word) HeadVar__2_2)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Box K0_8 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
        MR_Box V0_9 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
        MR_Word Left0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
        MR_Word Right0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
        MR_Box W0_12;
        MR_Word Left_13;
        MR_Word Right_14;
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

        func_1(((MR_Box) (HeadVar__1_1)), K0_8, V0_9, &W0_12);
        mercury__rbtree__map_values_3_p_0(TypeInfo_for_K_25, TypeInfo_for_V_26, TypeInfo_for_W_27, HeadVar__1_1, Left0_10, &Left_13);
        mercury__rbtree__map_values_3_p_0(TypeInfo_for_K_25, TypeInfo_for_V_26, TypeInfo_for_W_27, HeadVar__1_1, Right0_11, &Right_14);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = K0_8;
          MR_hl_field(MR_mktag(1), base, 1) = W0_12;
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Left_13));
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Right_14));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box K0_18 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
        MR_Box V0_19 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
        MR_Word Left0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
        MR_Word Right0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
        MR_Box W0_22;
        MR_Word Left_23;
        MR_Word Right_24;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

        func_0(((MR_Box) (HeadVar__1_1)), K0_18, V0_19, &W0_22);
        mercury__rbtree__map_values_3_p_0(TypeInfo_for_K_25, TypeInfo_for_V_26, TypeInfo_for_W_27, HeadVar__1_1, Left0_20, &Left_23);
        mercury__rbtree__map_values_3_p_0(TypeInfo_for_K_25, TypeInfo_for_V_26, TypeInfo_for_W_27, HeadVar__1_1, Right0_21, &Right_24);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(2), base, 0) = K0_18;
          MR_hl_field(MR_mktag(2), base, 1) = W0_22;
          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (Left_23));
          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (Right_24));
        }
      }
      break;
  }
}

MR_Word MR_CALL 
mercury__rbtree__map_values_2_f_0(
  MR_Word TypeInfo_for_K_17,
  MR_Word TypeInfo_for_V_18,
  MR_Word TypeInfo_for_W_19,
  MR_Word F_4,
  MR_Word T1_5)
{
  {
    MR_Word T2_6;

    mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_0(F_4, T1_5, &T2_6);
    return T2_6;
  }
}

static void MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_0(
  MR_Word Var_31,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  switch (MR_tag((MR_Word) HeadVar__2_2)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Box K0_8 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
        MR_Box V0_9 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
        MR_Word Left0_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
        MR_Word Right0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
        MR_Box W0_12;
        MR_Word Left_13;
        MR_Word Right_14;
        MR_Box MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), Var_31, (MR_Integer) 1))));

        W0_12 = func_1(((MR_Box) (Var_31)), K0_8, V0_9);
        mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_0(Var_31, Left0_10, &Left_13);
        mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_0(Var_31, Right0_11, &Right_14);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = K0_8;
          MR_hl_field(MR_mktag(1), base, 1) = W0_12;
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Left_13));
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Right_14));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box K0_18 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
        MR_Box V0_19 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
        MR_Word Left0_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
        MR_Word Right0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
        MR_Box W0_22;
        MR_Word Left_23;
        MR_Word Right_24;
        MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), Var_31, (MR_Integer) 1))));

        W0_22 = func_0(((MR_Box) (Var_31)), K0_18, V0_19);
        mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_0(Var_31, Left0_20, &Left_23);
        mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_0(Var_31, Right0_21, &Right_24);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(2), base, 0) = K0_18;
          MR_hl_field(MR_mktag(2), base, 1) = W0_22;
          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (Left_23));
          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (Right_24));
        }
      }
      break;
  }
}

MR_bool MR_CALL 
mercury__rbtree__foldl2_values_6_p_5(
  MR_Word TypeInfo_for_V_48,
  MR_Word TypeInfo_for_A_49,
  MR_Word TypeInfo_for_B_50,
  MR_Word TypeInfo_for_K_51,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_3,
  MR_Box * STATE_VARIABLE_Acc1_4,
  MR_Box STATE_VARIABLE_Acc2_0_5,
  MR_Box * STATE_VARIABLE_Acc2_6)
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
          *STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_0_5;
          *STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_0_3;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box V_16 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc1_25_25;
          MR_Box STATE_VARIABLE_Acc2_26_26;
          MR_Box STATE_VARIABLE_Acc1_27_27;
          MR_Box STATE_VARIABLE_Acc2_28_28;
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;

          succeeded = mercury__rbtree__foldl2_values_6_p_5(TypeInfo_for_V_48, TypeInfo_for_A_49, TypeInfo_for_B_50, TypeInfo_for_K_51, HeadVar__1_1, Left_17, STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_25_25, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_26_26);
          if (succeeded)
          {
            func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
            succeeded = func_1(((MR_Box) (HeadVar__1_1)), V_16, STATE_VARIABLE_Acc1_25_25, &STATE_VARIABLE_Acc1_27_27, STATE_VARIABLE_Acc2_26_26, &STATE_VARIABLE_Acc2_28_28);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__2_2 = Right_18;
              next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_27_27;
              next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_28_28;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              STATE_VARIABLE_Acc1_0_3 = next_value_of_STATE_VARIABLE_Acc1_0_3;
              STATE_VARIABLE_Acc2_0_5 = next_value_of_STATE_VARIABLE_Acc2_0_5;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box V_33 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_34 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_35 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc1_42_42;
          MR_Box STATE_VARIABLE_Acc2_43_43;
          MR_Box STATE_VARIABLE_Acc1_44_44;
          MR_Box STATE_VARIABLE_Acc2_45_45;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;

          succeeded = mercury__rbtree__foldl2_values_6_p_5(TypeInfo_for_V_48, TypeInfo_for_A_49, TypeInfo_for_B_50, TypeInfo_for_K_51, HeadVar__1_1, Left_34, STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_42_42, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_43_43);
          if (succeeded)
          {
            func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
            succeeded = func_0(((MR_Box) (HeadVar__1_1)), V_33, STATE_VARIABLE_Acc1_42_42, &STATE_VARIABLE_Acc1_44_44, STATE_VARIABLE_Acc2_43_43, &STATE_VARIABLE_Acc2_45_45);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__2_2 = Right_35;
              next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_44_44;
              next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_45_45;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              STATE_VARIABLE_Acc1_0_3 = next_value_of_STATE_VARIABLE_Acc1_0_3;
              STATE_VARIABLE_Acc2_0_5 = next_value_of_STATE_VARIABLE_Acc2_0_5;
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

MR_bool MR_CALL 
mercury__rbtree__foldl2_values_6_p_4(
  MR_Word TypeInfo_for_V_48,
  MR_Word TypeInfo_for_A_49,
  MR_Word TypeInfo_for_B_50,
  MR_Word TypeInfo_for_K_51,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_3,
  MR_Box * STATE_VARIABLE_Acc1_4,
  MR_Box STATE_VARIABLE_Acc2_0_5,
  MR_Box * STATE_VARIABLE_Acc2_6)
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
          *STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_0_5;
          *STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_0_3;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box V_16 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc1_25_25;
          MR_Box STATE_VARIABLE_Acc2_26_26;
          MR_Box STATE_VARIABLE_Acc1_27_27;
          MR_Box STATE_VARIABLE_Acc2_28_28;
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;

          succeeded = mercury__rbtree__foldl2_values_6_p_4(TypeInfo_for_V_48, TypeInfo_for_A_49, TypeInfo_for_B_50, TypeInfo_for_K_51, HeadVar__1_1, Left_17, STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_25_25, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_26_26);
          if (succeeded)
          {
            func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
            succeeded = func_1(((MR_Box) (HeadVar__1_1)), V_16, STATE_VARIABLE_Acc1_25_25, &STATE_VARIABLE_Acc1_27_27, STATE_VARIABLE_Acc2_26_26, &STATE_VARIABLE_Acc2_28_28);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__2_2 = Right_18;
              next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_27_27;
              next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_28_28;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              STATE_VARIABLE_Acc1_0_3 = next_value_of_STATE_VARIABLE_Acc1_0_3;
              STATE_VARIABLE_Acc2_0_5 = next_value_of_STATE_VARIABLE_Acc2_0_5;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box V_33 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_34 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_35 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc1_42_42;
          MR_Box STATE_VARIABLE_Acc2_43_43;
          MR_Box STATE_VARIABLE_Acc1_44_44;
          MR_Box STATE_VARIABLE_Acc2_45_45;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;

          succeeded = mercury__rbtree__foldl2_values_6_p_4(TypeInfo_for_V_48, TypeInfo_for_A_49, TypeInfo_for_B_50, TypeInfo_for_K_51, HeadVar__1_1, Left_34, STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_42_42, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_43_43);
          if (succeeded)
          {
            func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
            succeeded = func_0(((MR_Box) (HeadVar__1_1)), V_33, STATE_VARIABLE_Acc1_42_42, &STATE_VARIABLE_Acc1_44_44, STATE_VARIABLE_Acc2_43_43, &STATE_VARIABLE_Acc2_45_45);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__2_2 = Right_35;
              next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_44_44;
              next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_45_45;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              STATE_VARIABLE_Acc1_0_3 = next_value_of_STATE_VARIABLE_Acc1_0_3;
              STATE_VARIABLE_Acc2_0_5 = next_value_of_STATE_VARIABLE_Acc2_0_5;
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

MR_bool MR_CALL 
mercury__rbtree__foldl2_values_6_p_3(
  MR_Word TypeInfo_for_V_48,
  MR_Word TypeInfo_for_A_49,
  MR_Word TypeInfo_for_B_50,
  MR_Word TypeInfo_for_K_51,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_3,
  MR_Box * STATE_VARIABLE_Acc1_4,
  MR_Box STATE_VARIABLE_Acc2_0_5,
  MR_Box * STATE_VARIABLE_Acc2_6)
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
          *STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_0_5;
          *STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_0_3;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box V_16 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc1_25_25;
          MR_Box STATE_VARIABLE_Acc2_26_26;
          MR_Box STATE_VARIABLE_Acc1_27_27;
          MR_Box STATE_VARIABLE_Acc2_28_28;
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;

          succeeded = mercury__rbtree__foldl2_values_6_p_3(TypeInfo_for_V_48, TypeInfo_for_A_49, TypeInfo_for_B_50, TypeInfo_for_K_51, HeadVar__1_1, Left_17, STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_25_25, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_26_26);
          if (succeeded)
          {
            func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
            succeeded = func_1(((MR_Box) (HeadVar__1_1)), V_16, STATE_VARIABLE_Acc1_25_25, &STATE_VARIABLE_Acc1_27_27, STATE_VARIABLE_Acc2_26_26, &STATE_VARIABLE_Acc2_28_28);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__2_2 = Right_18;
              next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_27_27;
              next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_28_28;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              STATE_VARIABLE_Acc1_0_3 = next_value_of_STATE_VARIABLE_Acc1_0_3;
              STATE_VARIABLE_Acc2_0_5 = next_value_of_STATE_VARIABLE_Acc2_0_5;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box V_33 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_34 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_35 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc1_42_42;
          MR_Box STATE_VARIABLE_Acc2_43_43;
          MR_Box STATE_VARIABLE_Acc1_44_44;
          MR_Box STATE_VARIABLE_Acc2_45_45;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;

          succeeded = mercury__rbtree__foldl2_values_6_p_3(TypeInfo_for_V_48, TypeInfo_for_A_49, TypeInfo_for_B_50, TypeInfo_for_K_51, HeadVar__1_1, Left_34, STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_42_42, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_43_43);
          if (succeeded)
          {
            func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
            succeeded = func_0(((MR_Box) (HeadVar__1_1)), V_33, STATE_VARIABLE_Acc1_42_42, &STATE_VARIABLE_Acc1_44_44, STATE_VARIABLE_Acc2_43_43, &STATE_VARIABLE_Acc2_45_45);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__2_2 = Right_35;
              next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_44_44;
              next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_45_45;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              STATE_VARIABLE_Acc1_0_3 = next_value_of_STATE_VARIABLE_Acc1_0_3;
              STATE_VARIABLE_Acc2_0_5 = next_value_of_STATE_VARIABLE_Acc2_0_5;
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

void MR_CALL 
mercury__rbtree__foldl2_values_6_p_2(
  MR_Word TypeInfo_for_V_48,
  MR_Word TypeInfo_for_A_49,
  MR_Word TypeInfo_for_B_50,
  MR_Word TypeInfo_for_K_51,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_3,
  MR_Box * STATE_VARIABLE_Acc1_4,
  MR_Box STATE_VARIABLE_Acc2_0_5,
  MR_Box * STATE_VARIABLE_Acc2_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_0_5;
          *STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_0_3;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box V_16 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc1_25_25;
          MR_Box STATE_VARIABLE_Acc2_26_26;
          MR_Box STATE_VARIABLE_Acc1_27_27;
          MR_Box STATE_VARIABLE_Acc2_28_28;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;

          mercury__rbtree__foldl2_values_6_p_2(TypeInfo_for_V_48, TypeInfo_for_A_49, TypeInfo_for_B_50, TypeInfo_for_K_51, HeadVar__1_1, Left_17, STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_25_25, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_26_26);
          func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
          func_1(((MR_Box) (HeadVar__1_1)), V_16, STATE_VARIABLE_Acc1_25_25, &STATE_VARIABLE_Acc1_27_27, STATE_VARIABLE_Acc2_26_26, &STATE_VARIABLE_Acc2_28_28);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Right_18;
          next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_27_27;
          next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_28_28;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          STATE_VARIABLE_Acc1_0_3 = next_value_of_STATE_VARIABLE_Acc1_0_3;
          STATE_VARIABLE_Acc2_0_5 = next_value_of_STATE_VARIABLE_Acc2_0_5;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box V_33 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_34 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_35 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc1_42_42;
          MR_Box STATE_VARIABLE_Acc2_43_43;
          MR_Box STATE_VARIABLE_Acc1_44_44;
          MR_Box STATE_VARIABLE_Acc2_45_45;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;

          mercury__rbtree__foldl2_values_6_p_2(TypeInfo_for_V_48, TypeInfo_for_A_49, TypeInfo_for_B_50, TypeInfo_for_K_51, HeadVar__1_1, Left_34, STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_42_42, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_43_43);
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
          func_0(((MR_Box) (HeadVar__1_1)), V_33, STATE_VARIABLE_Acc1_42_42, &STATE_VARIABLE_Acc1_44_44, STATE_VARIABLE_Acc2_43_43, &STATE_VARIABLE_Acc2_45_45);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Right_35;
          next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_44_44;
          next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_45_45;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          STATE_VARIABLE_Acc1_0_3 = next_value_of_STATE_VARIABLE_Acc1_0_3;
          STATE_VARIABLE_Acc2_0_5 = next_value_of_STATE_VARIABLE_Acc2_0_5;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__rbtree__foldl2_values_6_p_1(
  MR_Word TypeInfo_for_V_48,
  MR_Word TypeInfo_for_A_49,
  MR_Word TypeInfo_for_B_50,
  MR_Word TypeInfo_for_K_51,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_3,
  MR_Box * STATE_VARIABLE_Acc1_4,
  MR_Box STATE_VARIABLE_Acc2_0_5,
  MR_Box * STATE_VARIABLE_Acc2_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_0_5;
          *STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_0_3;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box V_16 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc1_25_25;
          MR_Box STATE_VARIABLE_Acc2_26_26;
          MR_Box STATE_VARIABLE_Acc1_27_27;
          MR_Box STATE_VARIABLE_Acc2_28_28;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;

          mercury__rbtree__foldl2_values_6_p_1(TypeInfo_for_V_48, TypeInfo_for_A_49, TypeInfo_for_B_50, TypeInfo_for_K_51, HeadVar__1_1, Left_17, STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_25_25, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_26_26);
          func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
          func_1(((MR_Box) (HeadVar__1_1)), V_16, STATE_VARIABLE_Acc1_25_25, &STATE_VARIABLE_Acc1_27_27, STATE_VARIABLE_Acc2_26_26, &STATE_VARIABLE_Acc2_28_28);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Right_18;
          next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_27_27;
          next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_28_28;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          STATE_VARIABLE_Acc1_0_3 = next_value_of_STATE_VARIABLE_Acc1_0_3;
          STATE_VARIABLE_Acc2_0_5 = next_value_of_STATE_VARIABLE_Acc2_0_5;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box V_33 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_34 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_35 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc1_42_42;
          MR_Box STATE_VARIABLE_Acc2_43_43;
          MR_Box STATE_VARIABLE_Acc1_44_44;
          MR_Box STATE_VARIABLE_Acc2_45_45;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;

          mercury__rbtree__foldl2_values_6_p_1(TypeInfo_for_V_48, TypeInfo_for_A_49, TypeInfo_for_B_50, TypeInfo_for_K_51, HeadVar__1_1, Left_34, STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_42_42, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_43_43);
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
          func_0(((MR_Box) (HeadVar__1_1)), V_33, STATE_VARIABLE_Acc1_42_42, &STATE_VARIABLE_Acc1_44_44, STATE_VARIABLE_Acc2_43_43, &STATE_VARIABLE_Acc2_45_45);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Right_35;
          next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_44_44;
          next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_45_45;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          STATE_VARIABLE_Acc1_0_3 = next_value_of_STATE_VARIABLE_Acc1_0_3;
          STATE_VARIABLE_Acc2_0_5 = next_value_of_STATE_VARIABLE_Acc2_0_5;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__rbtree__foldl2_values_6_p_0(
  MR_Word TypeInfo_for_V_48,
  MR_Word TypeInfo_for_A_49,
  MR_Word TypeInfo_for_B_50,
  MR_Word TypeInfo_for_K_51,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_3,
  MR_Box * STATE_VARIABLE_Acc1_4,
  MR_Box STATE_VARIABLE_Acc2_0_5,
  MR_Box * STATE_VARIABLE_Acc2_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_0_5;
          *STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_0_3;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box V_16 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc1_25_25;
          MR_Box STATE_VARIABLE_Acc2_26_26;
          MR_Box STATE_VARIABLE_Acc1_27_27;
          MR_Box STATE_VARIABLE_Acc2_28_28;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;

          mercury__rbtree__foldl2_values_6_p_0(TypeInfo_for_V_48, TypeInfo_for_A_49, TypeInfo_for_B_50, TypeInfo_for_K_51, HeadVar__1_1, Left_17, STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_25_25, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_26_26);
          func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
          func_1(((MR_Box) (HeadVar__1_1)), V_16, STATE_VARIABLE_Acc1_25_25, &STATE_VARIABLE_Acc1_27_27, STATE_VARIABLE_Acc2_26_26, &STATE_VARIABLE_Acc2_28_28);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Right_18;
          next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_27_27;
          next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_28_28;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          STATE_VARIABLE_Acc1_0_3 = next_value_of_STATE_VARIABLE_Acc1_0_3;
          STATE_VARIABLE_Acc2_0_5 = next_value_of_STATE_VARIABLE_Acc2_0_5;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box V_33 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_34 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_35 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc1_42_42;
          MR_Box STATE_VARIABLE_Acc2_43_43;
          MR_Box STATE_VARIABLE_Acc1_44_44;
          MR_Box STATE_VARIABLE_Acc2_45_45;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;

          mercury__rbtree__foldl2_values_6_p_0(TypeInfo_for_V_48, TypeInfo_for_A_49, TypeInfo_for_B_50, TypeInfo_for_K_51, HeadVar__1_1, Left_34, STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_42_42, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_43_43);
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
          func_0(((MR_Box) (HeadVar__1_1)), V_33, STATE_VARIABLE_Acc1_42_42, &STATE_VARIABLE_Acc1_44_44, STATE_VARIABLE_Acc2_43_43, &STATE_VARIABLE_Acc2_45_45);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Right_35;
          next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_44_44;
          next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_45_45;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          STATE_VARIABLE_Acc1_0_3 = next_value_of_STATE_VARIABLE_Acc1_0_3;
          STATE_VARIABLE_Acc2_0_5 = next_value_of_STATE_VARIABLE_Acc2_0_5;
          continue;
        }
        break;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__rbtree__foldl_values_4_p_5(
  MR_Word TypeInfo_for_V_31,
  MR_Word TypeInfo_for_A_32,
  MR_Word TypeInfo_for_K_33,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4)
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
          *STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_0_3;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box V_11 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc_17_17;
          MR_Box STATE_VARIABLE_Acc_18_18;
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

          succeeded = mercury__rbtree__foldl_values_4_p_5(TypeInfo_for_V_31, TypeInfo_for_A_32, TypeInfo_for_K_33, HeadVar__1_1, Left_12, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_17_17);
          if (succeeded)
          {
            func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
            succeeded = func_1(((MR_Box) (HeadVar__1_1)), V_11, STATE_VARIABLE_Acc_17_17, &STATE_VARIABLE_Acc_18_18);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__2_2 = Right_13;
              next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_18_18;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              STATE_VARIABLE_Acc_0_3 = next_value_of_STATE_VARIABLE_Acc_0_3;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box V_22 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc_28_28;
          MR_Box STATE_VARIABLE_Acc_29_29;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

          succeeded = mercury__rbtree__foldl_values_4_p_5(TypeInfo_for_V_31, TypeInfo_for_A_32, TypeInfo_for_K_33, HeadVar__1_1, Left_23, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_28_28);
          if (succeeded)
          {
            func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
            succeeded = func_0(((MR_Box) (HeadVar__1_1)), V_22, STATE_VARIABLE_Acc_28_28, &STATE_VARIABLE_Acc_29_29);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__2_2 = Right_24;
              next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_29_29;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              STATE_VARIABLE_Acc_0_3 = next_value_of_STATE_VARIABLE_Acc_0_3;
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

MR_bool MR_CALL 
mercury__rbtree__foldl_values_4_p_4(
  MR_Word TypeInfo_for_V_31,
  MR_Word TypeInfo_for_A_32,
  MR_Word TypeInfo_for_K_33,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4)
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
          *STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_0_3;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box V_11 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc_17_17;
          MR_Box STATE_VARIABLE_Acc_18_18;
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

          succeeded = mercury__rbtree__foldl_values_4_p_4(TypeInfo_for_V_31, TypeInfo_for_A_32, TypeInfo_for_K_33, HeadVar__1_1, Left_12, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_17_17);
          if (succeeded)
          {
            func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
            succeeded = func_1(((MR_Box) (HeadVar__1_1)), V_11, STATE_VARIABLE_Acc_17_17, &STATE_VARIABLE_Acc_18_18);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__2_2 = Right_13;
              next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_18_18;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              STATE_VARIABLE_Acc_0_3 = next_value_of_STATE_VARIABLE_Acc_0_3;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box V_22 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc_28_28;
          MR_Box STATE_VARIABLE_Acc_29_29;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

          succeeded = mercury__rbtree__foldl_values_4_p_4(TypeInfo_for_V_31, TypeInfo_for_A_32, TypeInfo_for_K_33, HeadVar__1_1, Left_23, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_28_28);
          if (succeeded)
          {
            func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
            succeeded = func_0(((MR_Box) (HeadVar__1_1)), V_22, STATE_VARIABLE_Acc_28_28, &STATE_VARIABLE_Acc_29_29);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__2_2 = Right_24;
              next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_29_29;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              STATE_VARIABLE_Acc_0_3 = next_value_of_STATE_VARIABLE_Acc_0_3;
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

MR_bool MR_CALL 
mercury__rbtree__foldl_values_4_p_3(
  MR_Word TypeInfo_for_V_31,
  MR_Word TypeInfo_for_A_32,
  MR_Word TypeInfo_for_K_33,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4)
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
          *STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_0_3;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box V_11 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc_17_17;
          MR_Box STATE_VARIABLE_Acc_18_18;
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

          succeeded = mercury__rbtree__foldl_values_4_p_3(TypeInfo_for_V_31, TypeInfo_for_A_32, TypeInfo_for_K_33, HeadVar__1_1, Left_12, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_17_17);
          if (succeeded)
          {
            func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
            succeeded = func_1(((MR_Box) (HeadVar__1_1)), V_11, STATE_VARIABLE_Acc_17_17, &STATE_VARIABLE_Acc_18_18);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__2_2 = Right_13;
              next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_18_18;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              STATE_VARIABLE_Acc_0_3 = next_value_of_STATE_VARIABLE_Acc_0_3;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box V_22 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc_28_28;
          MR_Box STATE_VARIABLE_Acc_29_29;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

          succeeded = mercury__rbtree__foldl_values_4_p_3(TypeInfo_for_V_31, TypeInfo_for_A_32, TypeInfo_for_K_33, HeadVar__1_1, Left_23, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_28_28);
          if (succeeded)
          {
            func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
            succeeded = func_0(((MR_Box) (HeadVar__1_1)), V_22, STATE_VARIABLE_Acc_28_28, &STATE_VARIABLE_Acc_29_29);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__2_2 = Right_24;
              next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_29_29;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              STATE_VARIABLE_Acc_0_3 = next_value_of_STATE_VARIABLE_Acc_0_3;
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

void MR_CALL 
mercury__rbtree__foldl_values_4_p_2(
  MR_Word TypeInfo_for_V_31,
  MR_Word TypeInfo_for_A_32,
  MR_Word TypeInfo_for_K_33,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_0_3;
        break;
      case (MR_Integer) 1:
        {
          MR_Box V_11 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc_17_17;
          MR_Box STATE_VARIABLE_Acc_18_18;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

          mercury__rbtree__foldl_values_4_p_2(TypeInfo_for_V_31, TypeInfo_for_A_32, TypeInfo_for_K_33, HeadVar__1_1, Left_12, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_17_17);
          func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
          func_1(((MR_Box) (HeadVar__1_1)), V_11, STATE_VARIABLE_Acc_17_17, &STATE_VARIABLE_Acc_18_18);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Right_13;
          next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_18_18;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          STATE_VARIABLE_Acc_0_3 = next_value_of_STATE_VARIABLE_Acc_0_3;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box V_22 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc_28_28;
          MR_Box STATE_VARIABLE_Acc_29_29;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

          mercury__rbtree__foldl_values_4_p_2(TypeInfo_for_V_31, TypeInfo_for_A_32, TypeInfo_for_K_33, HeadVar__1_1, Left_23, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_28_28);
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
          func_0(((MR_Box) (HeadVar__1_1)), V_22, STATE_VARIABLE_Acc_28_28, &STATE_VARIABLE_Acc_29_29);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Right_24;
          next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_29_29;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          STATE_VARIABLE_Acc_0_3 = next_value_of_STATE_VARIABLE_Acc_0_3;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__rbtree__foldl_values_4_p_1(
  MR_Word TypeInfo_for_V_31,
  MR_Word TypeInfo_for_A_32,
  MR_Word TypeInfo_for_K_33,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_0_3;
        break;
      case (MR_Integer) 1:
        {
          MR_Box V_11 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc_17_17;
          MR_Box STATE_VARIABLE_Acc_18_18;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

          mercury__rbtree__foldl_values_4_p_1(TypeInfo_for_V_31, TypeInfo_for_A_32, TypeInfo_for_K_33, HeadVar__1_1, Left_12, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_17_17);
          func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
          func_1(((MR_Box) (HeadVar__1_1)), V_11, STATE_VARIABLE_Acc_17_17, &STATE_VARIABLE_Acc_18_18);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Right_13;
          next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_18_18;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          STATE_VARIABLE_Acc_0_3 = next_value_of_STATE_VARIABLE_Acc_0_3;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box V_22 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc_28_28;
          MR_Box STATE_VARIABLE_Acc_29_29;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

          mercury__rbtree__foldl_values_4_p_1(TypeInfo_for_V_31, TypeInfo_for_A_32, TypeInfo_for_K_33, HeadVar__1_1, Left_23, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_28_28);
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
          func_0(((MR_Box) (HeadVar__1_1)), V_22, STATE_VARIABLE_Acc_28_28, &STATE_VARIABLE_Acc_29_29);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Right_24;
          next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_29_29;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          STATE_VARIABLE_Acc_0_3 = next_value_of_STATE_VARIABLE_Acc_0_3;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__rbtree__foldl_values_4_p_0(
  MR_Word TypeInfo_for_V_31,
  MR_Word TypeInfo_for_A_32,
  MR_Word TypeInfo_for_K_33,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_0_3;
        break;
      case (MR_Integer) 1:
        {
          MR_Box V_11 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc_17_17;
          MR_Box STATE_VARIABLE_Acc_18_18;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

          mercury__rbtree__foldl_values_4_p_0(TypeInfo_for_V_31, TypeInfo_for_A_32, TypeInfo_for_K_33, HeadVar__1_1, Left_12, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_17_17);
          func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
          func_1(((MR_Box) (HeadVar__1_1)), V_11, STATE_VARIABLE_Acc_17_17, &STATE_VARIABLE_Acc_18_18);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Right_13;
          next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_18_18;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          STATE_VARIABLE_Acc_0_3 = next_value_of_STATE_VARIABLE_Acc_0_3;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box V_22 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc_28_28;
          MR_Box STATE_VARIABLE_Acc_29_29;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

          mercury__rbtree__foldl_values_4_p_0(TypeInfo_for_V_31, TypeInfo_for_A_32, TypeInfo_for_K_33, HeadVar__1_1, Left_23, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_28_28);
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
          func_0(((MR_Box) (HeadVar__1_1)), V_22, STATE_VARIABLE_Acc_28_28, &STATE_VARIABLE_Acc_29_29);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Right_24;
          next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_29_29;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          STATE_VARIABLE_Acc_0_3 = next_value_of_STATE_VARIABLE_Acc_0_3;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__rbtree__foldl3_8_p_4(
  MR_Word TypeInfo_for_K_65,
  MR_Word TypeInfo_for_V_66,
  MR_Word TypeInfo_for_T_67,
  MR_Word TypeInfo_for_U_68,
  MR_Word TypeInfo_for_W_69,
  MR_Word Pred_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_3,
  MR_Box * STATE_VARIABLE_Acc1_4,
  MR_Box STATE_VARIABLE_Acc2_0_5,
  MR_Box * STATE_VARIABLE_Acc2_6,
  MR_Box STATE_VARIABLE_Acc3_0_7,
  MR_Box * STATE_VARIABLE_Acc3_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_Acc3_8 = STATE_VARIABLE_Acc3_0_7;
          *STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_0_5;
          *STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_0_3;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_20 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Box V_21 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc1_33_33;
          MR_Box STATE_VARIABLE_Acc2_34_34;
          MR_Box STATE_VARIABLE_Acc3_35_35;
          MR_Box STATE_VARIABLE_Acc1_36_36;
          MR_Box STATE_VARIABLE_Acc2_37_37;
          MR_Box STATE_VARIABLE_Acc3_38_38;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;
          MR_Box next_value_of_STATE_VARIABLE_Acc3_0_7;

          mercury__rbtree__foldl3_8_p_4(TypeInfo_for_K_65, TypeInfo_for_V_66, TypeInfo_for_T_67, TypeInfo_for_U_68, TypeInfo_for_W_69, Pred_1, Left_22, STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_33_33, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_34_34, STATE_VARIABLE_Acc3_0_7, &STATE_VARIABLE_Acc3_35_35);
          func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_1, (MR_Integer) 1))));
          func_1(((MR_Box) (Pred_1)), K_20, V_21, STATE_VARIABLE_Acc1_33_33, &STATE_VARIABLE_Acc1_36_36, STATE_VARIABLE_Acc2_34_34, &STATE_VARIABLE_Acc2_37_37, STATE_VARIABLE_Acc3_35_35, &STATE_VARIABLE_Acc3_38_38);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Right_23;
          next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_36_36;
          next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_37_37;
          next_value_of_STATE_VARIABLE_Acc3_0_7 = STATE_VARIABLE_Acc3_38_38;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          STATE_VARIABLE_Acc1_0_3 = next_value_of_STATE_VARIABLE_Acc1_0_3;
          STATE_VARIABLE_Acc2_0_5 = next_value_of_STATE_VARIABLE_Acc2_0_5;
          STATE_VARIABLE_Acc3_0_7 = next_value_of_STATE_VARIABLE_Acc3_0_7;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K_43 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
          MR_Box V_44 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_45 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_46 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc1_56_56;
          MR_Box STATE_VARIABLE_Acc2_57_57;
          MR_Box STATE_VARIABLE_Acc3_58_58;
          MR_Box STATE_VARIABLE_Acc1_59_59;
          MR_Box STATE_VARIABLE_Acc2_60_60;
          MR_Box STATE_VARIABLE_Acc3_61_61;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;
          MR_Box next_value_of_STATE_VARIABLE_Acc3_0_7;

          mercury__rbtree__foldl3_8_p_4(TypeInfo_for_K_65, TypeInfo_for_V_66, TypeInfo_for_T_67, TypeInfo_for_U_68, TypeInfo_for_W_69, Pred_1, Left_45, STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_56_56, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_57_57, STATE_VARIABLE_Acc3_0_7, &STATE_VARIABLE_Acc3_58_58);
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_1, (MR_Integer) 1))));
          func_0(((MR_Box) (Pred_1)), K_43, V_44, STATE_VARIABLE_Acc1_56_56, &STATE_VARIABLE_Acc1_59_59, STATE_VARIABLE_Acc2_57_57, &STATE_VARIABLE_Acc2_60_60, STATE_VARIABLE_Acc3_58_58, &STATE_VARIABLE_Acc3_61_61);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Right_46;
          next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_59_59;
          next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_60_60;
          next_value_of_STATE_VARIABLE_Acc3_0_7 = STATE_VARIABLE_Acc3_61_61;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          STATE_VARIABLE_Acc1_0_3 = next_value_of_STATE_VARIABLE_Acc1_0_3;
          STATE_VARIABLE_Acc2_0_5 = next_value_of_STATE_VARIABLE_Acc2_0_5;
          STATE_VARIABLE_Acc3_0_7 = next_value_of_STATE_VARIABLE_Acc3_0_7;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__rbtree__foldl3_8_p_3(
  MR_Word TypeInfo_for_K_65,
  MR_Word TypeInfo_for_V_66,
  MR_Word TypeInfo_for_T_67,
  MR_Word TypeInfo_for_U_68,
  MR_Word TypeInfo_for_W_69,
  MR_Word Pred_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_3,
  MR_Box * STATE_VARIABLE_Acc1_4,
  MR_Box STATE_VARIABLE_Acc2_0_5,
  MR_Box * STATE_VARIABLE_Acc2_6,
  MR_Box STATE_VARIABLE_Acc3_0_7,
  MR_Box * STATE_VARIABLE_Acc3_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_Acc3_8 = STATE_VARIABLE_Acc3_0_7;
          *STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_0_5;
          *STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_0_3;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_20 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Box V_21 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc1_33_33;
          MR_Box STATE_VARIABLE_Acc2_34_34;
          MR_Box STATE_VARIABLE_Acc3_35_35;
          MR_Box STATE_VARIABLE_Acc1_36_36;
          MR_Box STATE_VARIABLE_Acc2_37_37;
          MR_Box STATE_VARIABLE_Acc3_38_38;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;
          MR_Box next_value_of_STATE_VARIABLE_Acc3_0_7;

          mercury__rbtree__foldl3_8_p_3(TypeInfo_for_K_65, TypeInfo_for_V_66, TypeInfo_for_T_67, TypeInfo_for_U_68, TypeInfo_for_W_69, Pred_1, Left_22, STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_33_33, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_34_34, STATE_VARIABLE_Acc3_0_7, &STATE_VARIABLE_Acc3_35_35);
          func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_1, (MR_Integer) 1))));
          func_1(((MR_Box) (Pred_1)), K_20, V_21, STATE_VARIABLE_Acc1_33_33, &STATE_VARIABLE_Acc1_36_36, STATE_VARIABLE_Acc2_34_34, &STATE_VARIABLE_Acc2_37_37, STATE_VARIABLE_Acc3_35_35, &STATE_VARIABLE_Acc3_38_38);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Right_23;
          next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_36_36;
          next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_37_37;
          next_value_of_STATE_VARIABLE_Acc3_0_7 = STATE_VARIABLE_Acc3_38_38;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          STATE_VARIABLE_Acc1_0_3 = next_value_of_STATE_VARIABLE_Acc1_0_3;
          STATE_VARIABLE_Acc2_0_5 = next_value_of_STATE_VARIABLE_Acc2_0_5;
          STATE_VARIABLE_Acc3_0_7 = next_value_of_STATE_VARIABLE_Acc3_0_7;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K_43 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
          MR_Box V_44 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_45 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_46 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc1_56_56;
          MR_Box STATE_VARIABLE_Acc2_57_57;
          MR_Box STATE_VARIABLE_Acc3_58_58;
          MR_Box STATE_VARIABLE_Acc1_59_59;
          MR_Box STATE_VARIABLE_Acc2_60_60;
          MR_Box STATE_VARIABLE_Acc3_61_61;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;
          MR_Box next_value_of_STATE_VARIABLE_Acc3_0_7;

          mercury__rbtree__foldl3_8_p_3(TypeInfo_for_K_65, TypeInfo_for_V_66, TypeInfo_for_T_67, TypeInfo_for_U_68, TypeInfo_for_W_69, Pred_1, Left_45, STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_56_56, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_57_57, STATE_VARIABLE_Acc3_0_7, &STATE_VARIABLE_Acc3_58_58);
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_1, (MR_Integer) 1))));
          func_0(((MR_Box) (Pred_1)), K_43, V_44, STATE_VARIABLE_Acc1_56_56, &STATE_VARIABLE_Acc1_59_59, STATE_VARIABLE_Acc2_57_57, &STATE_VARIABLE_Acc2_60_60, STATE_VARIABLE_Acc3_58_58, &STATE_VARIABLE_Acc3_61_61);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Right_46;
          next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_59_59;
          next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_60_60;
          next_value_of_STATE_VARIABLE_Acc3_0_7 = STATE_VARIABLE_Acc3_61_61;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          STATE_VARIABLE_Acc1_0_3 = next_value_of_STATE_VARIABLE_Acc1_0_3;
          STATE_VARIABLE_Acc2_0_5 = next_value_of_STATE_VARIABLE_Acc2_0_5;
          STATE_VARIABLE_Acc3_0_7 = next_value_of_STATE_VARIABLE_Acc3_0_7;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__rbtree__foldl3_8_p_2(
  MR_Word TypeInfo_for_K_65,
  MR_Word TypeInfo_for_V_66,
  MR_Word TypeInfo_for_T_67,
  MR_Word TypeInfo_for_U_68,
  MR_Word TypeInfo_for_W_69,
  MR_Word Pred_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_3,
  MR_Box * STATE_VARIABLE_Acc1_4,
  MR_Box STATE_VARIABLE_Acc2_0_5,
  MR_Box * STATE_VARIABLE_Acc2_6,
  MR_Box STATE_VARIABLE_Acc3_0_7,
  MR_Box * STATE_VARIABLE_Acc3_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_Acc3_8 = STATE_VARIABLE_Acc3_0_7;
          *STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_0_5;
          *STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_0_3;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_20 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Box V_21 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc1_33_33;
          MR_Box STATE_VARIABLE_Acc2_34_34;
          MR_Box STATE_VARIABLE_Acc3_35_35;
          MR_Box STATE_VARIABLE_Acc1_36_36;
          MR_Box STATE_VARIABLE_Acc2_37_37;
          MR_Box STATE_VARIABLE_Acc3_38_38;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;
          MR_Box next_value_of_STATE_VARIABLE_Acc3_0_7;

          mercury__rbtree__foldl3_8_p_2(TypeInfo_for_K_65, TypeInfo_for_V_66, TypeInfo_for_T_67, TypeInfo_for_U_68, TypeInfo_for_W_69, Pred_1, Left_22, STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_33_33, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_34_34, STATE_VARIABLE_Acc3_0_7, &STATE_VARIABLE_Acc3_35_35);
          func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_1, (MR_Integer) 1))));
          func_1(((MR_Box) (Pred_1)), K_20, V_21, STATE_VARIABLE_Acc1_33_33, &STATE_VARIABLE_Acc1_36_36, STATE_VARIABLE_Acc2_34_34, &STATE_VARIABLE_Acc2_37_37, STATE_VARIABLE_Acc3_35_35, &STATE_VARIABLE_Acc3_38_38);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Right_23;
          next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_36_36;
          next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_37_37;
          next_value_of_STATE_VARIABLE_Acc3_0_7 = STATE_VARIABLE_Acc3_38_38;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          STATE_VARIABLE_Acc1_0_3 = next_value_of_STATE_VARIABLE_Acc1_0_3;
          STATE_VARIABLE_Acc2_0_5 = next_value_of_STATE_VARIABLE_Acc2_0_5;
          STATE_VARIABLE_Acc3_0_7 = next_value_of_STATE_VARIABLE_Acc3_0_7;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K_43 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
          MR_Box V_44 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_45 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_46 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc1_56_56;
          MR_Box STATE_VARIABLE_Acc2_57_57;
          MR_Box STATE_VARIABLE_Acc3_58_58;
          MR_Box STATE_VARIABLE_Acc1_59_59;
          MR_Box STATE_VARIABLE_Acc2_60_60;
          MR_Box STATE_VARIABLE_Acc3_61_61;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;
          MR_Box next_value_of_STATE_VARIABLE_Acc3_0_7;

          mercury__rbtree__foldl3_8_p_2(TypeInfo_for_K_65, TypeInfo_for_V_66, TypeInfo_for_T_67, TypeInfo_for_U_68, TypeInfo_for_W_69, Pred_1, Left_45, STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_56_56, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_57_57, STATE_VARIABLE_Acc3_0_7, &STATE_VARIABLE_Acc3_58_58);
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_1, (MR_Integer) 1))));
          func_0(((MR_Box) (Pred_1)), K_43, V_44, STATE_VARIABLE_Acc1_56_56, &STATE_VARIABLE_Acc1_59_59, STATE_VARIABLE_Acc2_57_57, &STATE_VARIABLE_Acc2_60_60, STATE_VARIABLE_Acc3_58_58, &STATE_VARIABLE_Acc3_61_61);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Right_46;
          next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_59_59;
          next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_60_60;
          next_value_of_STATE_VARIABLE_Acc3_0_7 = STATE_VARIABLE_Acc3_61_61;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          STATE_VARIABLE_Acc1_0_3 = next_value_of_STATE_VARIABLE_Acc1_0_3;
          STATE_VARIABLE_Acc2_0_5 = next_value_of_STATE_VARIABLE_Acc2_0_5;
          STATE_VARIABLE_Acc3_0_7 = next_value_of_STATE_VARIABLE_Acc3_0_7;
          continue;
        }
        break;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__rbtree__foldl3_8_p_1(
  MR_Word TypeInfo_for_K_65,
  MR_Word TypeInfo_for_V_66,
  MR_Word TypeInfo_for_T_67,
  MR_Word TypeInfo_for_U_68,
  MR_Word TypeInfo_for_W_69,
  MR_Word Pred_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_3,
  MR_Box * STATE_VARIABLE_Acc1_4,
  MR_Box STATE_VARIABLE_Acc2_0_5,
  MR_Box * STATE_VARIABLE_Acc2_6,
  MR_Box STATE_VARIABLE_Acc3_0_7,
  MR_Box * STATE_VARIABLE_Acc3_8)
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
          *STATE_VARIABLE_Acc3_8 = STATE_VARIABLE_Acc3_0_7;
          *STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_0_5;
          *STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_0_3;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_20 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Box V_21 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc1_33_33;
          MR_Box STATE_VARIABLE_Acc2_34_34;
          MR_Box STATE_VARIABLE_Acc3_35_35;
          MR_Box STATE_VARIABLE_Acc1_36_36;
          MR_Box STATE_VARIABLE_Acc2_37_37;
          MR_Box STATE_VARIABLE_Acc3_38_38;
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;
          MR_Box next_value_of_STATE_VARIABLE_Acc3_0_7;

          succeeded = mercury__rbtree__foldl3_8_p_1(TypeInfo_for_K_65, TypeInfo_for_V_66, TypeInfo_for_T_67, TypeInfo_for_U_68, TypeInfo_for_W_69, Pred_1, Left_22, STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_33_33, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_34_34, STATE_VARIABLE_Acc3_0_7, &STATE_VARIABLE_Acc3_35_35);
          if (succeeded)
          {
            func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_1, (MR_Integer) 1))));
            succeeded = func_1(((MR_Box) (Pred_1)), K_20, V_21, STATE_VARIABLE_Acc1_33_33, &STATE_VARIABLE_Acc1_36_36, STATE_VARIABLE_Acc2_34_34, &STATE_VARIABLE_Acc2_37_37, STATE_VARIABLE_Acc3_35_35, &STATE_VARIABLE_Acc3_38_38);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__2_2 = Right_23;
              next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_36_36;
              next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_37_37;
              next_value_of_STATE_VARIABLE_Acc3_0_7 = STATE_VARIABLE_Acc3_38_38;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              STATE_VARIABLE_Acc1_0_3 = next_value_of_STATE_VARIABLE_Acc1_0_3;
              STATE_VARIABLE_Acc2_0_5 = next_value_of_STATE_VARIABLE_Acc2_0_5;
              STATE_VARIABLE_Acc3_0_7 = next_value_of_STATE_VARIABLE_Acc3_0_7;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K_43 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
          MR_Box V_44 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_45 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_46 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc1_56_56;
          MR_Box STATE_VARIABLE_Acc2_57_57;
          MR_Box STATE_VARIABLE_Acc3_58_58;
          MR_Box STATE_VARIABLE_Acc1_59_59;
          MR_Box STATE_VARIABLE_Acc2_60_60;
          MR_Box STATE_VARIABLE_Acc3_61_61;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;
          MR_Box next_value_of_STATE_VARIABLE_Acc3_0_7;

          succeeded = mercury__rbtree__foldl3_8_p_1(TypeInfo_for_K_65, TypeInfo_for_V_66, TypeInfo_for_T_67, TypeInfo_for_U_68, TypeInfo_for_W_69, Pred_1, Left_45, STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_56_56, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_57_57, STATE_VARIABLE_Acc3_0_7, &STATE_VARIABLE_Acc3_58_58);
          if (succeeded)
          {
            func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_1, (MR_Integer) 1))));
            succeeded = func_0(((MR_Box) (Pred_1)), K_43, V_44, STATE_VARIABLE_Acc1_56_56, &STATE_VARIABLE_Acc1_59_59, STATE_VARIABLE_Acc2_57_57, &STATE_VARIABLE_Acc2_60_60, STATE_VARIABLE_Acc3_58_58, &STATE_VARIABLE_Acc3_61_61);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__2_2 = Right_46;
              next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_59_59;
              next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_60_60;
              next_value_of_STATE_VARIABLE_Acc3_0_7 = STATE_VARIABLE_Acc3_61_61;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              STATE_VARIABLE_Acc1_0_3 = next_value_of_STATE_VARIABLE_Acc1_0_3;
              STATE_VARIABLE_Acc2_0_5 = next_value_of_STATE_VARIABLE_Acc2_0_5;
              STATE_VARIABLE_Acc3_0_7 = next_value_of_STATE_VARIABLE_Acc3_0_7;
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

void MR_CALL 
mercury__rbtree__foldl3_8_p_0(
  MR_Word TypeInfo_for_K_65,
  MR_Word TypeInfo_for_V_66,
  MR_Word TypeInfo_for_T_67,
  MR_Word TypeInfo_for_U_68,
  MR_Word TypeInfo_for_W_69,
  MR_Word Pred_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_3,
  MR_Box * STATE_VARIABLE_Acc1_4,
  MR_Box STATE_VARIABLE_Acc2_0_5,
  MR_Box * STATE_VARIABLE_Acc2_6,
  MR_Box STATE_VARIABLE_Acc3_0_7,
  MR_Box * STATE_VARIABLE_Acc3_8)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_Acc3_8 = STATE_VARIABLE_Acc3_0_7;
          *STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_0_5;
          *STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_0_3;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_20 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Box V_21 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc1_33_33;
          MR_Box STATE_VARIABLE_Acc2_34_34;
          MR_Box STATE_VARIABLE_Acc3_35_35;
          MR_Box STATE_VARIABLE_Acc1_36_36;
          MR_Box STATE_VARIABLE_Acc2_37_37;
          MR_Box STATE_VARIABLE_Acc3_38_38;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;
          MR_Box next_value_of_STATE_VARIABLE_Acc3_0_7;

          mercury__rbtree__foldl3_8_p_0(TypeInfo_for_K_65, TypeInfo_for_V_66, TypeInfo_for_T_67, TypeInfo_for_U_68, TypeInfo_for_W_69, Pred_1, Left_22, STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_33_33, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_34_34, STATE_VARIABLE_Acc3_0_7, &STATE_VARIABLE_Acc3_35_35);
          func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_1, (MR_Integer) 1))));
          func_1(((MR_Box) (Pred_1)), K_20, V_21, STATE_VARIABLE_Acc1_33_33, &STATE_VARIABLE_Acc1_36_36, STATE_VARIABLE_Acc2_34_34, &STATE_VARIABLE_Acc2_37_37, STATE_VARIABLE_Acc3_35_35, &STATE_VARIABLE_Acc3_38_38);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Right_23;
          next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_36_36;
          next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_37_37;
          next_value_of_STATE_VARIABLE_Acc3_0_7 = STATE_VARIABLE_Acc3_38_38;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          STATE_VARIABLE_Acc1_0_3 = next_value_of_STATE_VARIABLE_Acc1_0_3;
          STATE_VARIABLE_Acc2_0_5 = next_value_of_STATE_VARIABLE_Acc2_0_5;
          STATE_VARIABLE_Acc3_0_7 = next_value_of_STATE_VARIABLE_Acc3_0_7;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K_43 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
          MR_Box V_44 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_45 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_46 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc1_56_56;
          MR_Box STATE_VARIABLE_Acc2_57_57;
          MR_Box STATE_VARIABLE_Acc3_58_58;
          MR_Box STATE_VARIABLE_Acc1_59_59;
          MR_Box STATE_VARIABLE_Acc2_60_60;
          MR_Box STATE_VARIABLE_Acc3_61_61;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;
          MR_Box next_value_of_STATE_VARIABLE_Acc3_0_7;

          mercury__rbtree__foldl3_8_p_0(TypeInfo_for_K_65, TypeInfo_for_V_66, TypeInfo_for_T_67, TypeInfo_for_U_68, TypeInfo_for_W_69, Pred_1, Left_45, STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_56_56, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_57_57, STATE_VARIABLE_Acc3_0_7, &STATE_VARIABLE_Acc3_58_58);
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_1, (MR_Integer) 1))));
          func_0(((MR_Box) (Pred_1)), K_43, V_44, STATE_VARIABLE_Acc1_56_56, &STATE_VARIABLE_Acc1_59_59, STATE_VARIABLE_Acc2_57_57, &STATE_VARIABLE_Acc2_60_60, STATE_VARIABLE_Acc3_58_58, &STATE_VARIABLE_Acc3_61_61);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Right_46;
          next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_59_59;
          next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_60_60;
          next_value_of_STATE_VARIABLE_Acc3_0_7 = STATE_VARIABLE_Acc3_61_61;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          STATE_VARIABLE_Acc1_0_3 = next_value_of_STATE_VARIABLE_Acc1_0_3;
          STATE_VARIABLE_Acc2_0_5 = next_value_of_STATE_VARIABLE_Acc2_0_5;
          STATE_VARIABLE_Acc3_0_7 = next_value_of_STATE_VARIABLE_Acc3_0_7;
          continue;
        }
        break;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__rbtree__foldl2_6_p_6(
  MR_Word TypeInfo_for_K_48,
  MR_Word TypeInfo_for_V_49,
  MR_Word TypeInfo_for_T_50,
  MR_Word TypeInfo_for_U_51,
  MR_Word Pred_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_3,
  MR_Box * STATE_VARIABLE_Acc1_4,
  MR_Box STATE_VARIABLE_Acc2_0_5,
  MR_Box * STATE_VARIABLE_Acc2_6)
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
          *STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_0_5;
          *STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_0_3;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_15 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Box V_16 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc1_25_25;
          MR_Box STATE_VARIABLE_Acc2_26_26;
          MR_Box STATE_VARIABLE_Acc1_27_27;
          MR_Box STATE_VARIABLE_Acc2_28_28;
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;

          succeeded = mercury__rbtree__foldl2_6_p_6(TypeInfo_for_K_48, TypeInfo_for_V_49, TypeInfo_for_T_50, TypeInfo_for_U_51, Pred_1, Left_17, STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_25_25, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_26_26);
          if (succeeded)
          {
            func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_1, (MR_Integer) 1))));
            succeeded = func_1(((MR_Box) (Pred_1)), K_15, V_16, STATE_VARIABLE_Acc1_25_25, &STATE_VARIABLE_Acc1_27_27, STATE_VARIABLE_Acc2_26_26, &STATE_VARIABLE_Acc2_28_28);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__2_2 = Right_18;
              next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_27_27;
              next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_28_28;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              STATE_VARIABLE_Acc1_0_3 = next_value_of_STATE_VARIABLE_Acc1_0_3;
              STATE_VARIABLE_Acc2_0_5 = next_value_of_STATE_VARIABLE_Acc2_0_5;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K_32 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
          MR_Box V_33 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_34 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_35 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc1_42_42;
          MR_Box STATE_VARIABLE_Acc2_43_43;
          MR_Box STATE_VARIABLE_Acc1_44_44;
          MR_Box STATE_VARIABLE_Acc2_45_45;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;

          succeeded = mercury__rbtree__foldl2_6_p_6(TypeInfo_for_K_48, TypeInfo_for_V_49, TypeInfo_for_T_50, TypeInfo_for_U_51, Pred_1, Left_34, STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_42_42, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_43_43);
          if (succeeded)
          {
            func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_1, (MR_Integer) 1))));
            succeeded = func_0(((MR_Box) (Pred_1)), K_32, V_33, STATE_VARIABLE_Acc1_42_42, &STATE_VARIABLE_Acc1_44_44, STATE_VARIABLE_Acc2_43_43, &STATE_VARIABLE_Acc2_45_45);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__2_2 = Right_35;
              next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_44_44;
              next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_45_45;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              STATE_VARIABLE_Acc1_0_3 = next_value_of_STATE_VARIABLE_Acc1_0_3;
              STATE_VARIABLE_Acc2_0_5 = next_value_of_STATE_VARIABLE_Acc2_0_5;
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

MR_bool MR_CALL 
mercury__rbtree__foldl2_6_p_5(
  MR_Word TypeInfo_for_K_48,
  MR_Word TypeInfo_for_V_49,
  MR_Word TypeInfo_for_T_50,
  MR_Word TypeInfo_for_U_51,
  MR_Word Pred_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_3,
  MR_Box * STATE_VARIABLE_Acc1_4,
  MR_Box STATE_VARIABLE_Acc2_0_5,
  MR_Box * STATE_VARIABLE_Acc2_6)
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
          *STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_0_5;
          *STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_0_3;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_15 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Box V_16 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc1_25_25;
          MR_Box STATE_VARIABLE_Acc2_26_26;
          MR_Box STATE_VARIABLE_Acc1_27_27;
          MR_Box STATE_VARIABLE_Acc2_28_28;
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;

          succeeded = mercury__rbtree__foldl2_6_p_5(TypeInfo_for_K_48, TypeInfo_for_V_49, TypeInfo_for_T_50, TypeInfo_for_U_51, Pred_1, Left_17, STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_25_25, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_26_26);
          if (succeeded)
          {
            func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_1, (MR_Integer) 1))));
            succeeded = func_1(((MR_Box) (Pred_1)), K_15, V_16, STATE_VARIABLE_Acc1_25_25, &STATE_VARIABLE_Acc1_27_27, STATE_VARIABLE_Acc2_26_26, &STATE_VARIABLE_Acc2_28_28);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__2_2 = Right_18;
              next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_27_27;
              next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_28_28;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              STATE_VARIABLE_Acc1_0_3 = next_value_of_STATE_VARIABLE_Acc1_0_3;
              STATE_VARIABLE_Acc2_0_5 = next_value_of_STATE_VARIABLE_Acc2_0_5;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K_32 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
          MR_Box V_33 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_34 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_35 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc1_42_42;
          MR_Box STATE_VARIABLE_Acc2_43_43;
          MR_Box STATE_VARIABLE_Acc1_44_44;
          MR_Box STATE_VARIABLE_Acc2_45_45;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;

          succeeded = mercury__rbtree__foldl2_6_p_5(TypeInfo_for_K_48, TypeInfo_for_V_49, TypeInfo_for_T_50, TypeInfo_for_U_51, Pred_1, Left_34, STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_42_42, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_43_43);
          if (succeeded)
          {
            func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_1, (MR_Integer) 1))));
            succeeded = func_0(((MR_Box) (Pred_1)), K_32, V_33, STATE_VARIABLE_Acc1_42_42, &STATE_VARIABLE_Acc1_44_44, STATE_VARIABLE_Acc2_43_43, &STATE_VARIABLE_Acc2_45_45);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__2_2 = Right_35;
              next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_44_44;
              next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_45_45;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              STATE_VARIABLE_Acc1_0_3 = next_value_of_STATE_VARIABLE_Acc1_0_3;
              STATE_VARIABLE_Acc2_0_5 = next_value_of_STATE_VARIABLE_Acc2_0_5;
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

MR_bool MR_CALL 
mercury__rbtree__foldl2_6_p_4(
  MR_Word TypeInfo_for_K_48,
  MR_Word TypeInfo_for_V_49,
  MR_Word TypeInfo_for_T_50,
  MR_Word TypeInfo_for_U_51,
  MR_Word Pred_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_3,
  MR_Box * STATE_VARIABLE_Acc1_4,
  MR_Box STATE_VARIABLE_Acc2_0_5,
  MR_Box * STATE_VARIABLE_Acc2_6)
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
          *STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_0_5;
          *STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_0_3;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_15 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Box V_16 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc1_25_25;
          MR_Box STATE_VARIABLE_Acc2_26_26;
          MR_Box STATE_VARIABLE_Acc1_27_27;
          MR_Box STATE_VARIABLE_Acc2_28_28;
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;

          succeeded = mercury__rbtree__foldl2_6_p_4(TypeInfo_for_K_48, TypeInfo_for_V_49, TypeInfo_for_T_50, TypeInfo_for_U_51, Pred_1, Left_17, STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_25_25, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_26_26);
          if (succeeded)
          {
            func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_1, (MR_Integer) 1))));
            succeeded = func_1(((MR_Box) (Pred_1)), K_15, V_16, STATE_VARIABLE_Acc1_25_25, &STATE_VARIABLE_Acc1_27_27, STATE_VARIABLE_Acc2_26_26, &STATE_VARIABLE_Acc2_28_28);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__2_2 = Right_18;
              next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_27_27;
              next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_28_28;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              STATE_VARIABLE_Acc1_0_3 = next_value_of_STATE_VARIABLE_Acc1_0_3;
              STATE_VARIABLE_Acc2_0_5 = next_value_of_STATE_VARIABLE_Acc2_0_5;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K_32 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
          MR_Box V_33 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_34 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_35 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc1_42_42;
          MR_Box STATE_VARIABLE_Acc2_43_43;
          MR_Box STATE_VARIABLE_Acc1_44_44;
          MR_Box STATE_VARIABLE_Acc2_45_45;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;

          succeeded = mercury__rbtree__foldl2_6_p_4(TypeInfo_for_K_48, TypeInfo_for_V_49, TypeInfo_for_T_50, TypeInfo_for_U_51, Pred_1, Left_34, STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_42_42, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_43_43);
          if (succeeded)
          {
            func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_1, (MR_Integer) 1))));
            succeeded = func_0(((MR_Box) (Pred_1)), K_32, V_33, STATE_VARIABLE_Acc1_42_42, &STATE_VARIABLE_Acc1_44_44, STATE_VARIABLE_Acc2_43_43, &STATE_VARIABLE_Acc2_45_45);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__2_2 = Right_35;
              next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_44_44;
              next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_45_45;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              STATE_VARIABLE_Acc1_0_3 = next_value_of_STATE_VARIABLE_Acc1_0_3;
              STATE_VARIABLE_Acc2_0_5 = next_value_of_STATE_VARIABLE_Acc2_0_5;
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

void MR_CALL 
mercury__rbtree__foldl2_6_p_3(
  MR_Word TypeInfo_for_K_48,
  MR_Word TypeInfo_for_V_49,
  MR_Word TypeInfo_for_T_50,
  MR_Word TypeInfo_for_U_51,
  MR_Word Pred_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_3,
  MR_Box * STATE_VARIABLE_Acc1_4,
  MR_Box STATE_VARIABLE_Acc2_0_5,
  MR_Box * STATE_VARIABLE_Acc2_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_0_5;
          *STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_0_3;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_15 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Box V_16 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc1_25_25;
          MR_Box STATE_VARIABLE_Acc2_26_26;
          MR_Box STATE_VARIABLE_Acc1_27_27;
          MR_Box STATE_VARIABLE_Acc2_28_28;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;

          mercury__rbtree__foldl2_6_p_3(TypeInfo_for_K_48, TypeInfo_for_V_49, TypeInfo_for_T_50, TypeInfo_for_U_51, Pred_1, Left_17, STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_25_25, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_26_26);
          func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_1, (MR_Integer) 1))));
          func_1(((MR_Box) (Pred_1)), K_15, V_16, STATE_VARIABLE_Acc1_25_25, &STATE_VARIABLE_Acc1_27_27, STATE_VARIABLE_Acc2_26_26, &STATE_VARIABLE_Acc2_28_28);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Right_18;
          next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_27_27;
          next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_28_28;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          STATE_VARIABLE_Acc1_0_3 = next_value_of_STATE_VARIABLE_Acc1_0_3;
          STATE_VARIABLE_Acc2_0_5 = next_value_of_STATE_VARIABLE_Acc2_0_5;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K_32 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
          MR_Box V_33 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_34 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_35 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc1_42_42;
          MR_Box STATE_VARIABLE_Acc2_43_43;
          MR_Box STATE_VARIABLE_Acc1_44_44;
          MR_Box STATE_VARIABLE_Acc2_45_45;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;

          mercury__rbtree__foldl2_6_p_3(TypeInfo_for_K_48, TypeInfo_for_V_49, TypeInfo_for_T_50, TypeInfo_for_U_51, Pred_1, Left_34, STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_42_42, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_43_43);
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_1, (MR_Integer) 1))));
          func_0(((MR_Box) (Pred_1)), K_32, V_33, STATE_VARIABLE_Acc1_42_42, &STATE_VARIABLE_Acc1_44_44, STATE_VARIABLE_Acc2_43_43, &STATE_VARIABLE_Acc2_45_45);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Right_35;
          next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_44_44;
          next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_45_45;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          STATE_VARIABLE_Acc1_0_3 = next_value_of_STATE_VARIABLE_Acc1_0_3;
          STATE_VARIABLE_Acc2_0_5 = next_value_of_STATE_VARIABLE_Acc2_0_5;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__rbtree__foldl2_6_p_2(
  MR_Word TypeInfo_for_K_48,
  MR_Word TypeInfo_for_V_49,
  MR_Word TypeInfo_for_T_50,
  MR_Word TypeInfo_for_U_51,
  MR_Word Pred_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_3,
  MR_Box * STATE_VARIABLE_Acc1_4,
  MR_Box STATE_VARIABLE_Acc2_0_5,
  MR_Box * STATE_VARIABLE_Acc2_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_0_5;
          *STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_0_3;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_15 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Box V_16 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc1_25_25;
          MR_Box STATE_VARIABLE_Acc2_26_26;
          MR_Box STATE_VARIABLE_Acc1_27_27;
          MR_Box STATE_VARIABLE_Acc2_28_28;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;

          mercury__rbtree__foldl2_6_p_2(TypeInfo_for_K_48, TypeInfo_for_V_49, TypeInfo_for_T_50, TypeInfo_for_U_51, Pred_1, Left_17, STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_25_25, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_26_26);
          func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_1, (MR_Integer) 1))));
          func_1(((MR_Box) (Pred_1)), K_15, V_16, STATE_VARIABLE_Acc1_25_25, &STATE_VARIABLE_Acc1_27_27, STATE_VARIABLE_Acc2_26_26, &STATE_VARIABLE_Acc2_28_28);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Right_18;
          next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_27_27;
          next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_28_28;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          STATE_VARIABLE_Acc1_0_3 = next_value_of_STATE_VARIABLE_Acc1_0_3;
          STATE_VARIABLE_Acc2_0_5 = next_value_of_STATE_VARIABLE_Acc2_0_5;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K_32 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
          MR_Box V_33 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_34 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_35 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc1_42_42;
          MR_Box STATE_VARIABLE_Acc2_43_43;
          MR_Box STATE_VARIABLE_Acc1_44_44;
          MR_Box STATE_VARIABLE_Acc2_45_45;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;

          mercury__rbtree__foldl2_6_p_2(TypeInfo_for_K_48, TypeInfo_for_V_49, TypeInfo_for_T_50, TypeInfo_for_U_51, Pred_1, Left_34, STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_42_42, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_43_43);
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_1, (MR_Integer) 1))));
          func_0(((MR_Box) (Pred_1)), K_32, V_33, STATE_VARIABLE_Acc1_42_42, &STATE_VARIABLE_Acc1_44_44, STATE_VARIABLE_Acc2_43_43, &STATE_VARIABLE_Acc2_45_45);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Right_35;
          next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_44_44;
          next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_45_45;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          STATE_VARIABLE_Acc1_0_3 = next_value_of_STATE_VARIABLE_Acc1_0_3;
          STATE_VARIABLE_Acc2_0_5 = next_value_of_STATE_VARIABLE_Acc2_0_5;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__rbtree__foldl2_6_p_1(
  MR_Word TypeInfo_for_K_48,
  MR_Word TypeInfo_for_V_49,
  MR_Word TypeInfo_for_T_50,
  MR_Word TypeInfo_for_U_51,
  MR_Word Pred_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_3,
  MR_Box * STATE_VARIABLE_Acc1_4,
  MR_Box STATE_VARIABLE_Acc2_0_5,
  MR_Box * STATE_VARIABLE_Acc2_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_0_5;
          *STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_0_3;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_15 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Box V_16 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc1_25_25;
          MR_Box STATE_VARIABLE_Acc2_26_26;
          MR_Box STATE_VARIABLE_Acc1_27_27;
          MR_Box STATE_VARIABLE_Acc2_28_28;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;

          mercury__rbtree__foldl2_6_p_1(TypeInfo_for_K_48, TypeInfo_for_V_49, TypeInfo_for_T_50, TypeInfo_for_U_51, Pred_1, Left_17, STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_25_25, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_26_26);
          func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_1, (MR_Integer) 1))));
          func_1(((MR_Box) (Pred_1)), K_15, V_16, STATE_VARIABLE_Acc1_25_25, &STATE_VARIABLE_Acc1_27_27, STATE_VARIABLE_Acc2_26_26, &STATE_VARIABLE_Acc2_28_28);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Right_18;
          next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_27_27;
          next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_28_28;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          STATE_VARIABLE_Acc1_0_3 = next_value_of_STATE_VARIABLE_Acc1_0_3;
          STATE_VARIABLE_Acc2_0_5 = next_value_of_STATE_VARIABLE_Acc2_0_5;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K_32 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
          MR_Box V_33 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_34 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_35 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc1_42_42;
          MR_Box STATE_VARIABLE_Acc2_43_43;
          MR_Box STATE_VARIABLE_Acc1_44_44;
          MR_Box STATE_VARIABLE_Acc2_45_45;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;

          mercury__rbtree__foldl2_6_p_1(TypeInfo_for_K_48, TypeInfo_for_V_49, TypeInfo_for_T_50, TypeInfo_for_U_51, Pred_1, Left_34, STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_42_42, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_43_43);
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_1, (MR_Integer) 1))));
          func_0(((MR_Box) (Pred_1)), K_32, V_33, STATE_VARIABLE_Acc1_42_42, &STATE_VARIABLE_Acc1_44_44, STATE_VARIABLE_Acc2_43_43, &STATE_VARIABLE_Acc2_45_45);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Right_35;
          next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_44_44;
          next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_45_45;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          STATE_VARIABLE_Acc1_0_3 = next_value_of_STATE_VARIABLE_Acc1_0_3;
          STATE_VARIABLE_Acc2_0_5 = next_value_of_STATE_VARIABLE_Acc2_0_5;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__rbtree__foldl2_6_p_0(
  MR_Word TypeInfo_for_K_48,
  MR_Word TypeInfo_for_V_49,
  MR_Word TypeInfo_for_T_50,
  MR_Word TypeInfo_for_U_51,
  MR_Word Pred_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc1_0_3,
  MR_Box * STATE_VARIABLE_Acc1_4,
  MR_Box STATE_VARIABLE_Acc2_0_5,
  MR_Box * STATE_VARIABLE_Acc2_6)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_Acc2_6 = STATE_VARIABLE_Acc2_0_5;
          *STATE_VARIABLE_Acc1_4 = STATE_VARIABLE_Acc1_0_3;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_15 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Box V_16 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc1_25_25;
          MR_Box STATE_VARIABLE_Acc2_26_26;
          MR_Box STATE_VARIABLE_Acc1_27_27;
          MR_Box STATE_VARIABLE_Acc2_28_28;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;

          mercury__rbtree__foldl2_6_p_0(TypeInfo_for_K_48, TypeInfo_for_V_49, TypeInfo_for_T_50, TypeInfo_for_U_51, Pred_1, Left_17, STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_25_25, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_26_26);
          func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_1, (MR_Integer) 1))));
          func_1(((MR_Box) (Pred_1)), K_15, V_16, STATE_VARIABLE_Acc1_25_25, &STATE_VARIABLE_Acc1_27_27, STATE_VARIABLE_Acc2_26_26, &STATE_VARIABLE_Acc2_28_28);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Right_18;
          next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_27_27;
          next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_28_28;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          STATE_VARIABLE_Acc1_0_3 = next_value_of_STATE_VARIABLE_Acc1_0_3;
          STATE_VARIABLE_Acc2_0_5 = next_value_of_STATE_VARIABLE_Acc2_0_5;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K_32 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
          MR_Box V_33 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_34 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_35 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc1_42_42;
          MR_Box STATE_VARIABLE_Acc2_43_43;
          MR_Box STATE_VARIABLE_Acc1_44_44;
          MR_Box STATE_VARIABLE_Acc2_45_45;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc1_0_3;
          MR_Box next_value_of_STATE_VARIABLE_Acc2_0_5;

          mercury__rbtree__foldl2_6_p_0(TypeInfo_for_K_48, TypeInfo_for_V_49, TypeInfo_for_T_50, TypeInfo_for_U_51, Pred_1, Left_34, STATE_VARIABLE_Acc1_0_3, &STATE_VARIABLE_Acc1_42_42, STATE_VARIABLE_Acc2_0_5, &STATE_VARIABLE_Acc2_43_43);
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Pred_1, (MR_Integer) 1))));
          func_0(((MR_Box) (Pred_1)), K_32, V_33, STATE_VARIABLE_Acc1_42_42, &STATE_VARIABLE_Acc1_44_44, STATE_VARIABLE_Acc2_43_43, &STATE_VARIABLE_Acc2_45_45);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Right_35;
          next_value_of_STATE_VARIABLE_Acc1_0_3 = STATE_VARIABLE_Acc1_44_44;
          next_value_of_STATE_VARIABLE_Acc2_0_5 = STATE_VARIABLE_Acc2_45_45;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          STATE_VARIABLE_Acc1_0_3 = next_value_of_STATE_VARIABLE_Acc1_0_3;
          STATE_VARIABLE_Acc2_0_5 = next_value_of_STATE_VARIABLE_Acc2_0_5;
          continue;
        }
        break;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__rbtree__foldl_4_p_5(
  MR_Word TypeInfo_for_K_31,
  MR_Word TypeInfo_for_V_32,
  MR_Word TypeInfo_for_T_33,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4)
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
          *STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_0_3;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_10 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Box V_11 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc_17_17;
          MR_Box STATE_VARIABLE_Acc_18_18;
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

          succeeded = mercury__rbtree__foldl_4_p_5(TypeInfo_for_K_31, TypeInfo_for_V_32, TypeInfo_for_T_33, HeadVar__1_1, Left_12, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_17_17);
          if (succeeded)
          {
            func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
            succeeded = func_1(((MR_Box) (HeadVar__1_1)), K_10, V_11, STATE_VARIABLE_Acc_17_17, &STATE_VARIABLE_Acc_18_18);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__2_2 = Right_13;
              next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_18_18;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              STATE_VARIABLE_Acc_0_3 = next_value_of_STATE_VARIABLE_Acc_0_3;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K_21 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
          MR_Box V_22 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc_28_28;
          MR_Box STATE_VARIABLE_Acc_29_29;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

          succeeded = mercury__rbtree__foldl_4_p_5(TypeInfo_for_K_31, TypeInfo_for_V_32, TypeInfo_for_T_33, HeadVar__1_1, Left_23, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_28_28);
          if (succeeded)
          {
            func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
            succeeded = func_0(((MR_Box) (HeadVar__1_1)), K_21, V_22, STATE_VARIABLE_Acc_28_28, &STATE_VARIABLE_Acc_29_29);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__2_2 = Right_24;
              next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_29_29;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              STATE_VARIABLE_Acc_0_3 = next_value_of_STATE_VARIABLE_Acc_0_3;
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

MR_bool MR_CALL 
mercury__rbtree__foldl_4_p_4(
  MR_Word TypeInfo_for_K_31,
  MR_Word TypeInfo_for_V_32,
  MR_Word TypeInfo_for_T_33,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4)
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
          *STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_0_3;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_10 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Box V_11 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc_17_17;
          MR_Box STATE_VARIABLE_Acc_18_18;
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

          succeeded = mercury__rbtree__foldl_4_p_4(TypeInfo_for_K_31, TypeInfo_for_V_32, TypeInfo_for_T_33, HeadVar__1_1, Left_12, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_17_17);
          if (succeeded)
          {
            func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
            succeeded = func_1(((MR_Box) (HeadVar__1_1)), K_10, V_11, STATE_VARIABLE_Acc_17_17, &STATE_VARIABLE_Acc_18_18);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__2_2 = Right_13;
              next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_18_18;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              STATE_VARIABLE_Acc_0_3 = next_value_of_STATE_VARIABLE_Acc_0_3;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K_21 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
          MR_Box V_22 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc_28_28;
          MR_Box STATE_VARIABLE_Acc_29_29;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

          succeeded = mercury__rbtree__foldl_4_p_4(TypeInfo_for_K_31, TypeInfo_for_V_32, TypeInfo_for_T_33, HeadVar__1_1, Left_23, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_28_28);
          if (succeeded)
          {
            func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
            succeeded = func_0(((MR_Box) (HeadVar__1_1)), K_21, V_22, STATE_VARIABLE_Acc_28_28, &STATE_VARIABLE_Acc_29_29);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__2_2 = Right_24;
              next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_29_29;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              STATE_VARIABLE_Acc_0_3 = next_value_of_STATE_VARIABLE_Acc_0_3;
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

MR_bool MR_CALL 
mercury__rbtree__foldl_4_p_3(
  MR_Word TypeInfo_for_K_31,
  MR_Word TypeInfo_for_V_32,
  MR_Word TypeInfo_for_T_33,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4)
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
          *STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_0_3;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_10 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Box V_11 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc_17_17;
          MR_Box STATE_VARIABLE_Acc_18_18;
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

          succeeded = mercury__rbtree__foldl_4_p_3(TypeInfo_for_K_31, TypeInfo_for_V_32, TypeInfo_for_T_33, HeadVar__1_1, Left_12, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_17_17);
          if (succeeded)
          {
            func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
            succeeded = func_1(((MR_Box) (HeadVar__1_1)), K_10, V_11, STATE_VARIABLE_Acc_17_17, &STATE_VARIABLE_Acc_18_18);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__2_2 = Right_13;
              next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_18_18;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              STATE_VARIABLE_Acc_0_3 = next_value_of_STATE_VARIABLE_Acc_0_3;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K_21 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
          MR_Box V_22 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc_28_28;
          MR_Box STATE_VARIABLE_Acc_29_29;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

          succeeded = mercury__rbtree__foldl_4_p_3(TypeInfo_for_K_31, TypeInfo_for_V_32, TypeInfo_for_T_33, HeadVar__1_1, Left_23, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_28_28);
          if (succeeded)
          {
            func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
            succeeded = func_0(((MR_Box) (HeadVar__1_1)), K_21, V_22, STATE_VARIABLE_Acc_28_28, &STATE_VARIABLE_Acc_29_29);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__2_2 = Right_24;
              next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_29_29;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              STATE_VARIABLE_Acc_0_3 = next_value_of_STATE_VARIABLE_Acc_0_3;
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

void MR_CALL 
mercury__rbtree__foldl_4_p_2(
  MR_Word TypeInfo_for_K_31,
  MR_Word TypeInfo_for_V_32,
  MR_Word TypeInfo_for_T_33,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_0_3;
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_10 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Box V_11 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc_17_17;
          MR_Box STATE_VARIABLE_Acc_18_18;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

          mercury__rbtree__foldl_4_p_2(TypeInfo_for_K_31, TypeInfo_for_V_32, TypeInfo_for_T_33, HeadVar__1_1, Left_12, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_17_17);
          func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
          func_1(((MR_Box) (HeadVar__1_1)), K_10, V_11, STATE_VARIABLE_Acc_17_17, &STATE_VARIABLE_Acc_18_18);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Right_13;
          next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_18_18;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          STATE_VARIABLE_Acc_0_3 = next_value_of_STATE_VARIABLE_Acc_0_3;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K_21 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
          MR_Box V_22 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc_28_28;
          MR_Box STATE_VARIABLE_Acc_29_29;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

          mercury__rbtree__foldl_4_p_2(TypeInfo_for_K_31, TypeInfo_for_V_32, TypeInfo_for_T_33, HeadVar__1_1, Left_23, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_28_28);
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
          func_0(((MR_Box) (HeadVar__1_1)), K_21, V_22, STATE_VARIABLE_Acc_28_28, &STATE_VARIABLE_Acc_29_29);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Right_24;
          next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_29_29;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          STATE_VARIABLE_Acc_0_3 = next_value_of_STATE_VARIABLE_Acc_0_3;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__rbtree__foldl_4_p_1(
  MR_Word TypeInfo_for_K_31,
  MR_Word TypeInfo_for_V_32,
  MR_Word TypeInfo_for_T_33,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_0_3;
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_10 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Box V_11 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc_17_17;
          MR_Box STATE_VARIABLE_Acc_18_18;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

          mercury__rbtree__foldl_4_p_1(TypeInfo_for_K_31, TypeInfo_for_V_32, TypeInfo_for_T_33, HeadVar__1_1, Left_12, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_17_17);
          func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
          func_1(((MR_Box) (HeadVar__1_1)), K_10, V_11, STATE_VARIABLE_Acc_17_17, &STATE_VARIABLE_Acc_18_18);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Right_13;
          next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_18_18;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          STATE_VARIABLE_Acc_0_3 = next_value_of_STATE_VARIABLE_Acc_0_3;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K_21 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
          MR_Box V_22 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc_28_28;
          MR_Box STATE_VARIABLE_Acc_29_29;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

          mercury__rbtree__foldl_4_p_1(TypeInfo_for_K_31, TypeInfo_for_V_32, TypeInfo_for_T_33, HeadVar__1_1, Left_23, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_28_28);
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
          func_0(((MR_Box) (HeadVar__1_1)), K_21, V_22, STATE_VARIABLE_Acc_28_28, &STATE_VARIABLE_Acc_29_29);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Right_24;
          next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_29_29;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          STATE_VARIABLE_Acc_0_3 = next_value_of_STATE_VARIABLE_Acc_0_3;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__rbtree__foldl_4_p_0(
  MR_Word TypeInfo_for_K_31,
  MR_Word TypeInfo_for_V_32,
  MR_Word TypeInfo_for_T_33,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_0_3;
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_10 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Box V_11 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc_17_17;
          MR_Box STATE_VARIABLE_Acc_18_18;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

          mercury__rbtree__foldl_4_p_0(TypeInfo_for_K_31, TypeInfo_for_V_32, TypeInfo_for_T_33, HeadVar__1_1, Left_12, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_17_17);
          func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
          func_1(((MR_Box) (HeadVar__1_1)), K_10, V_11, STATE_VARIABLE_Acc_17_17, &STATE_VARIABLE_Acc_18_18);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Right_13;
          next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_18_18;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          STATE_VARIABLE_Acc_0_3 = next_value_of_STATE_VARIABLE_Acc_0_3;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K_21 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
          MR_Box V_22 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc_28_28;
          MR_Box STATE_VARIABLE_Acc_29_29;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

          mercury__rbtree__foldl_4_p_0(TypeInfo_for_K_31, TypeInfo_for_V_32, TypeInfo_for_T_33, HeadVar__1_1, Left_23, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_28_28);
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
          func_0(((MR_Box) (HeadVar__1_1)), K_21, V_22, STATE_VARIABLE_Acc_28_28, &STATE_VARIABLE_Acc_29_29);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Right_24;
          next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_29_29;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          STATE_VARIABLE_Acc_0_3 = next_value_of_STATE_VARIABLE_Acc_0_3;
          continue;
        }
        break;
    }
    break;
  }
}

MR_Box MR_CALL 
mercury__rbtree__foldl_3_f_0(
  MR_Word TypeInfo_for_K_22,
  MR_Word TypeInfo_for_V_23,
  MR_Word TypeInfo_for_T_24,
  MR_Word F_5,
  MR_Word T_6,
  MR_Box A_7)
{
  {
    MR_Box B_8;

    mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_0(F_5, T_6, A_7, &B_8);
    return B_8;
  }
}

static void MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_0(
  MR_Word Var_37,
  MR_Word HeadVar__2_2,
  MR_Box STATE_VARIABLE_Acc_0_3,
  MR_Box * STATE_VARIABLE_Acc_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_Acc_4 = STATE_VARIABLE_Acc_0_3;
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_10 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
          MR_Box V_11 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc_17_17;
          MR_Box STATE_VARIABLE_Acc_18_18;
          MR_Box MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

          mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_0(Var_37, Left_12, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_17_17);
          func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), Var_37, (MR_Integer) 1))));
          STATE_VARIABLE_Acc_18_18 = func_1(((MR_Box) (Var_37)), K_10, V_11, STATE_VARIABLE_Acc_17_17);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Right_13;
          next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_18_18;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          STATE_VARIABLE_Acc_0_3 = next_value_of_STATE_VARIABLE_Acc_0_3;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K_21 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0));
          MR_Box V_22 = (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1));
          MR_Word Left_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
          MR_Word Right_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 3))));
          MR_Box STATE_VARIABLE_Acc_28_28;
          MR_Box STATE_VARIABLE_Acc_29_29;
          MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box);
          MR_Word next_value_of_HeadVar__2_2;
          MR_Box next_value_of_STATE_VARIABLE_Acc_0_3;

          mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_0(Var_37, Left_23, STATE_VARIABLE_Acc_0_3, &STATE_VARIABLE_Acc_28_28);
          func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(MR_mktag(0), Var_37, (MR_Integer) 1))));
          STATE_VARIABLE_Acc_29_29 = func_0(((MR_Box) (Var_37)), K_21, V_22, STATE_VARIABLE_Acc_28_28);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__2_2 = Right_24;
          next_value_of_STATE_VARIABLE_Acc_0_3 = STATE_VARIABLE_Acc_29_29;
          HeadVar__2_2 = next_value_of_HeadVar__2_2;
          STATE_VARIABLE_Acc_0_3 = next_value_of_STATE_VARIABLE_Acc_0_3;
          continue;
        }
        break;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__rbtree__to_assoc_list_1_f_0(
  MR_Word TypeInfo_for_K_4,
  MR_Word TypeInfo_for_V_5,
  MR_Word T_3)
{
  {
    MR_Word HeadVar__2_2;

    mercury__rbtree__rbtree_to_assoc_list_2_p_0(TypeInfo_for_K_4, TypeInfo_for_V_5, T_3, &HeadVar__2_2);
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__rbtree__rbtree_to_assoc_list_1_f_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word RBT_3)
{
  {
    MR_Word AL_4;

    mercury__rbtree__rbtree_to_assoc_list_2_p_0(TypeInfo_for_K_5, TypeInfo_for_V_6, RBT_3, &AL_4);
    return AL_4;
  }
}

void MR_CALL 
mercury__rbtree__rbtree_to_assoc_list_2_p_0(
  MR_Word TypeInfo_for_K_21,
  MR_Word TypeInfo_for_V_22,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Word TypeInfo_24_24;
        MR_Box K0_3 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
        MR_Box V0_4 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1));
        MR_Word Left_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
        MR_Word Right_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))));
        MR_Word L0_8;
        MR_Word L1_9;
        MR_Word Var_10;
        MR_Word Var_11;
        MR_Word conv1_HeadVar__2_2;

        mercury__rbtree__rbtree_to_assoc_list_2_p_0(TypeInfo_for_K_21, TypeInfo_for_V_22, Left_5, &L0_8);
        mercury__rbtree__rbtree_to_assoc_list_2_p_0(TypeInfo_for_K_21, TypeInfo_for_V_22, Right_6, &L1_9);
        {
          Var_11 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_11, 0) = K0_3;
          MR_hl_field(MR_mktag(0), Var_11, 1) = V0_4;
        }
        {
          Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_10, 0) = ((MR_Box) (Var_11));
          MR_hl_field(MR_mktag(1), Var_10, 1) = ((MR_Box) (L1_9));
        }
        {
          TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_24_24, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
          MR_hl_field(MR_mktag(0), TypeInfo_24_24, 1) = ((MR_Box) (TypeInfo_for_K_21));
          MR_hl_field(MR_mktag(0), TypeInfo_24_24, 2) = ((MR_Box) (TypeInfo_for_V_22));
        }
        mercury__list__append_3_p_1(TypeInfo_24_24, (MR_Word) (L0_8), (MR_Word) (Var_10), &conv1_HeadVar__2_2);
        *HeadVar__2_2 = (MR_Word) (conv1_HeadVar__2_2);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word TypeInfo_26_26;
        MR_Box K0_12 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0));
        MR_Box V0_13 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1));
        MR_Word Left_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2))));
        MR_Word Right_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 3))));
        MR_Word L0_17;
        MR_Word L1_18;
        MR_Word Var_19;
        MR_Word Var_20;
        MR_Word conv0_HeadVar__2_2;

        mercury__rbtree__rbtree_to_assoc_list_2_p_0(TypeInfo_for_K_21, TypeInfo_for_V_22, Left_14, &L0_17);
        mercury__rbtree__rbtree_to_assoc_list_2_p_0(TypeInfo_for_K_21, TypeInfo_for_V_22, Right_15, &L1_18);
        {
          Var_20 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_20, 0) = K0_12;
          MR_hl_field(MR_mktag(0), Var_20, 1) = V0_13;
        }
        {
          Var_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_19, 0) = ((MR_Box) (Var_20));
          MR_hl_field(MR_mktag(1), Var_19, 1) = ((MR_Box) (L1_18));
        }
        {
          TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), TypeInfo_26_26, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
          MR_hl_field(MR_mktag(0), TypeInfo_26_26, 1) = ((MR_Box) (TypeInfo_for_K_21));
          MR_hl_field(MR_mktag(0), TypeInfo_26_26, 2) = ((MR_Box) (TypeInfo_for_V_22));
        }
        mercury__list__append_3_p_1(TypeInfo_26_26, (MR_Word) (L0_17), (MR_Word) (Var_19), &conv0_HeadVar__2_2);
        *HeadVar__2_2 = (MR_Word) (conv0_HeadVar__2_2);
      }
      break;
  }
}

MR_Word MR_CALL 
mercury__rbtree__from_assoc_list_1_f_0(
  MR_Word TypeInfo_for_K_4,
  MR_Word TypeInfo_for_V_5,
  MR_Word AList_3)
{
  {
    MR_Word HeadVar__2_2;

    mercury__rbtree__assoc_list_to_rbtree_2_p_0(TypeInfo_for_K_4, TypeInfo_for_V_5, AList_3, &HeadVar__2_2);
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__rbtree__assoc_list_to_rbtree_1_f_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word AL_3)
{
  {
    MR_Word RBT_4;

    mercury__rbtree__assoc_list_to_rbtree_2_p_0(TypeInfo_for_K_5, TypeInfo_for_V_6, AL_3, &RBT_4);
    return RBT_4;
  }
}

void MR_CALL 
mercury__rbtree__assoc_list_to_rbtree_2_p_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Box K_3;
    MR_Box V_4;
    MR_Word T_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
    MR_Word Tree0_7;
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));

    K_3 = (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 0));
    V_4 = (MR_hl_field(MR_mktag(0), Var_8, (MR_Integer) 1));
    mercury__rbtree__assoc_list_to_rbtree_2_p_0(TypeInfo_for_K_9, TypeInfo_for_V_10, T_5, &Tree0_7);
    mercury__rbtree__set_4_p_0(TypeInfo_for_K_9, TypeInfo_for_V_10, K_3, V_4, Tree0_7, HeadVar__2_2);
  }
}

MR_Integer MR_CALL 
mercury__rbtree__count_1_f_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word RBT_3)
{
  {
    MR_Integer N_4;

    mercury__rbtree__count_2_p_0(TypeInfo_for_K_5, TypeInfo_for_V_6, RBT_3, &N_4);
    return N_4;
  }
}

void MR_CALL 
mercury__rbtree__count_2_p_0(
  MR_Word TypeInfo_for_K_21,
  MR_Word TypeInfo_for_V_22,
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *HeadVar__2_2 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      {
        MR_Word L_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
        MR_Word R_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))));
        MR_Integer NO_8;
        MR_Integer N1_9;
        MR_Integer Var_10;

        mercury__rbtree__count_2_p_0(TypeInfo_for_K_21, TypeInfo_for_V_22, L_5, &NO_8);
        mercury__rbtree__count_2_p_0(TypeInfo_for_K_21, TypeInfo_for_V_22, R_6, &N1_9);
        Var_10 = (MR_Integer) ((MR_Unsigned) (MR_Integer) 1 + (MR_Unsigned) NO_8);
        *HeadVar__2_2 = (MR_Integer) ((MR_Unsigned) Var_10 + (MR_Unsigned) N1_9);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word L_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2))));
        MR_Word R_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 3))));
        MR_Integer NO_17;
        MR_Integer N1_18;
        MR_Integer Var_19;

        mercury__rbtree__count_2_p_0(TypeInfo_for_K_21, TypeInfo_for_V_22, L_14, &NO_17);
        mercury__rbtree__count_2_p_0(TypeInfo_for_K_21, TypeInfo_for_V_22, R_15, &N1_18);
        Var_19 = (MR_Integer) ((MR_Unsigned) (MR_Integer) 1 + (MR_Unsigned) NO_17);
        *HeadVar__2_2 = (MR_Integer) ((MR_Unsigned) Var_19 + (MR_Unsigned) N1_18);
      }
      break;
  }
}

MR_Word MR_CALL 
mercury__rbtree__values_1_f_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word RBT_3)
{
  {
    MR_Word Vs_4;

    mercury__rbtree__values_2_p_0(TypeInfo_for_K_5, TypeInfo_for_V_6, RBT_3, &Vs_4);
    return Vs_4;
  }
}

void MR_CALL 
mercury__rbtree__values_2_p_0(
  MR_Word TypeInfo_for_K_19,
  MR_Word TypeInfo_for_V_20,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Box V0_4 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1));
        MR_Word L_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
        MR_Word R_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))));
        MR_Word List0_8;
        MR_Word List1_9;
        MR_Word Var_10;

        mercury__rbtree__values_2_p_0(TypeInfo_for_K_19, TypeInfo_for_V_20, L_5, &List0_8);
        mercury__rbtree__values_2_p_0(TypeInfo_for_K_19, TypeInfo_for_V_20, R_6, &List1_9);
        {
          Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_10, 0) = V0_4;
          MR_hl_field(MR_mktag(1), Var_10, 1) = ((MR_Box) (List1_9));
        }
        mercury__list__append_3_p_1(TypeInfo_for_V_20, List0_8, Var_10, HeadVar__2_2);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box V0_12 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1));
        MR_Word L_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2))));
        MR_Word R_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 3))));
        MR_Word List0_16;
        MR_Word List1_17;
        MR_Word Var_18;

        mercury__rbtree__values_2_p_0(TypeInfo_for_K_19, TypeInfo_for_V_20, L_13, &List0_16);
        mercury__rbtree__values_2_p_0(TypeInfo_for_K_19, TypeInfo_for_V_20, R_14, &List1_17);
        {
          Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_18, 0) = V0_12;
          MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (List1_17));
        }
        mercury__list__append_3_p_1(TypeInfo_for_V_20, List0_16, Var_18, HeadVar__2_2);
      }
      break;
  }
}

MR_Word MR_CALL 
mercury__rbtree__keys_1_f_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word RBT_3)
{
  {
    MR_Word Ks_4;

    mercury__rbtree__keys_2_p_0(TypeInfo_for_K_5, TypeInfo_for_V_6, RBT_3, &Ks_4);
    return Ks_4;
  }
}

void MR_CALL 
mercury__rbtree__keys_2_p_0(
  MR_Word TypeInfo_for_K_19,
  MR_Word TypeInfo_for_V_20,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Box K0_3 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
        MR_Word L_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
        MR_Word R_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))));
        MR_Word List0_8;
        MR_Word List1_9;
        MR_Word Var_10;

        mercury__rbtree__keys_2_p_0(TypeInfo_for_K_19, TypeInfo_for_V_20, L_5, &List0_8);
        mercury__rbtree__keys_2_p_0(TypeInfo_for_K_19, TypeInfo_for_V_20, R_6, &List1_9);
        {
          Var_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_10, 0) = K0_3;
          MR_hl_field(MR_mktag(1), Var_10, 1) = ((MR_Box) (List1_9));
        }
        mercury__list__append_3_p_1(TypeInfo_for_K_19, List0_8, Var_10, HeadVar__2_2);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box K0_11 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0));
        MR_Word L_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2))));
        MR_Word R_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 3))));
        MR_Word List0_16;
        MR_Word List1_17;
        MR_Word Var_18;

        mercury__rbtree__keys_2_p_0(TypeInfo_for_K_19, TypeInfo_for_V_20, L_13, &List0_16);
        mercury__rbtree__keys_2_p_0(TypeInfo_for_K_19, TypeInfo_for_V_20, R_14, &List1_17);
        {
          Var_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_18, 0) = K0_11;
          MR_hl_field(MR_mktag(1), Var_18, 1) = ((MR_Box) (List1_17));
        }
        mercury__list__append_3_p_1(TypeInfo_for_K_19, List0_16, Var_18, HeadVar__2_2);
      }
      break;
  }
}

MR_bool MR_CALL 
mercury__rbtree__remove_4_p_0(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_V_14,
  MR_Box K_5,
  MR_Box * V_6,
  MR_Word STATE_VARIABLE_Tree_0_8,
  MR_Word * STATE_VARIABLE_Tree_9)
{
  {
    MR_bool succeeded;
    MR_Word Var_11;

    succeeded = mercury__rbtree__delete_2_5_p_0(TypeInfo_for_K_13, TypeInfo_for_V_14, STATE_VARIABLE_Tree_0_8, K_5, (MR_Integer) 1, &Var_11, STATE_VARIABLE_Tree_9);
    if (succeeded)
    {
      succeeded = (Var_11 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        *V_6 = (MR_hl_field(MR_mktag(1), Var_11, (MR_Integer) 0));
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__rbtree__delete_2_5_p_0(
  MR_Word TypeInfo_for_K_43,
  MR_Word TypeInfo_for_V_44,
  MR_Word HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          succeeded = (HeadVar__3_3 == (MR_Integer) 0);
          if (succeeded)
          {
            *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
            *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
            succeeded = MR_TRUE;
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K0_7 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
          MR_Box V0_8 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1));
          MR_Word L_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
          MR_Word R_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))));
          MR_Word Result_15;

          mercury__builtin__compare_3_p_0(TypeInfo_for_K_43, &Result_15, HeadVar__2_2, K0_7);
          switch (Result_15) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word NewL_23;

                succeeded = mercury__rbtree__delete_2_5_p_0(TypeInfo_for_K_43, TypeInfo_for_V_44, L_9, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, &NewL_23);
                if (succeeded)
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__5_5 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = K0_7;
                    MR_hl_field(MR_mktag(1), base, 1) = V0_8;
                    MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (NewL_23));
                    MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (R_10));
                  }
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Box NewK_16;
                MR_Box NewV_17;
                MR_Word NewL_18;

                succeeded = mercury__rbtree__remove_largest_4_p_0(TypeInfo_for_K_43, TypeInfo_for_V_44, &NewK_16, &NewV_17, L_9, &NewL_18);
                if (succeeded)
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__5_5 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = NewK_16;
                    MR_hl_field(MR_mktag(1), base, 1) = NewV_17;
                    MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (NewL_18));
                    MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (R_10));
                  }
                else
                {
                  MR_Word NewR_19;
                  MR_Box NewK_21;
                  MR_Box NewV_22;

                  succeeded = mercury__rbtree__remove_smallest_4_p_0(TypeInfo_for_K_43, TypeInfo_for_V_44, &NewK_21, &NewV_22, R_10, &NewR_19);
                  if (succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      *HeadVar__5_5 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = NewK_21;
                      MR_hl_field(MR_mktag(1), base, 1) = NewV_22;
                      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (NewR_19));
                    }
                  }
                  else
                    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__4_4 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = V0_8;
                }
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word NewR_24;

                succeeded = mercury__rbtree__delete_2_5_p_0(TypeInfo_for_K_43, TypeInfo_for_V_44, R_10, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, &NewR_24);
                if (succeeded)
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__5_5 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = K0_7;
                    MR_hl_field(MR_mktag(1), base, 1) = V0_8;
                    MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (L_9));
                    MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (NewR_24));
                  }
                  succeeded = MR_TRUE;
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K0_25 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0));
          MR_Box V0_26 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1));
          MR_Word L_27 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2))));
          MR_Word R_28 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 3))));
          MR_Word Result_33;

          mercury__builtin__compare_3_p_0(TypeInfo_for_K_43, &Result_33, HeadVar__2_2, K0_25);
          switch (Result_33) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word NewL_41;

                succeeded = mercury__rbtree__delete_2_5_p_0(TypeInfo_for_K_43, TypeInfo_for_V_44, L_27, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, &NewL_41);
                if (succeeded)
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__5_5 = base;
                    MR_hl_field(MR_mktag(2), base, 0) = K0_25;
                    MR_hl_field(MR_mktag(2), base, 1) = V0_26;
                    MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (NewL_41));
                    MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (R_28));
                  }
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Box NewK_34;
                MR_Box NewV_35;
                MR_Word NewL_36;

                succeeded = mercury__rbtree__remove_largest_4_p_0(TypeInfo_for_K_43, TypeInfo_for_V_44, &NewK_34, &NewV_35, L_27, &NewL_36);
                if (succeeded)
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__5_5 = base;
                    MR_hl_field(MR_mktag(2), base, 0) = NewK_34;
                    MR_hl_field(MR_mktag(2), base, 1) = NewV_35;
                    MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (NewL_36));
                    MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (R_28));
                  }
                else
                {
                  MR_Word NewR_37;
                  MR_Box NewK_39;
                  MR_Box NewV_40;

                  succeeded = mercury__rbtree__remove_smallest_4_p_0(TypeInfo_for_K_43, TypeInfo_for_V_44, &NewK_39, &NewV_40, R_28, &NewR_37);
                  if (succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      *HeadVar__5_5 = base;
                      MR_hl_field(MR_mktag(2), base, 0) = NewK_39;
                      MR_hl_field(MR_mktag(2), base, 1) = NewV_40;
                      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (NewR_37));
                    }
                  }
                  else
                    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__4_4 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = V0_26;
                }
                succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word NewR_42;

                succeeded = mercury__rbtree__delete_2_5_p_0(TypeInfo_for_K_43, TypeInfo_for_V_44, R_28, HeadVar__2_2, HeadVar__3_3, HeadVar__4_4, &NewR_42);
                if (succeeded)
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__5_5 = base;
                    MR_hl_field(MR_mktag(2), base, 0) = K0_25;
                    MR_hl_field(MR_mktag(2), base, 1) = V0_26;
                    MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (L_27));
                    MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (NewR_42));
                  }
                  succeeded = MR_TRUE;
                }
              }
              break;
          }
        }
        break;
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__rbtree__delete_3_p_0(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Box K_4,
  MR_Word STATE_VARIABLE_Tree_0_7,
  MR_Word * STATE_VARIABLE_Tree_8)
{
  {
    MR_Word Var_6;

    mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_p_1(TypeInfo_for_K_11, TypeInfo_for_V_12, STATE_VARIABLE_Tree_0_7, K_4, &Var_6, STATE_VARIABLE_Tree_8);
  }
}

MR_Word MR_CALL 
mercury__rbtree__delete_2_f_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Word STATE_VARIABLE_RBT_0_6,
  MR_Box K_5)
{
  {
    MR_Word STATE_VARIABLE_RBT_7;
    MR_Word Var_15;

    mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_p_1(TypeInfo_for_K_9, TypeInfo_for_V_10, STATE_VARIABLE_RBT_0_6, K_5, &Var_15, &STATE_VARIABLE_RBT_7);
    return STATE_VARIABLE_RBT_7;
  }
}

void MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_p_1(
  MR_Word TypeInfo_for_K_43,
  MR_Word TypeInfo_for_V_44,
  MR_Word HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Word * HeadVar__4_4,
  MR_Word * HeadVar__5_5)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
          *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K0_7 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
          MR_Box V0_8 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1));
          MR_Word L_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
          MR_Word R_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))));
          MR_Word Result_15;

          mercury__builtin__compare_3_p_0(TypeInfo_for_K_43, &Result_15, HeadVar__2_2, K0_7);
          switch (Result_15) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word NewL_23;

                mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_p_1(TypeInfo_for_K_43, TypeInfo_for_V_44, L_9, HeadVar__2_2, HeadVar__4_4, &NewL_23);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__5_5 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = K0_7;
                  MR_hl_field(MR_mktag(1), base, 1) = V0_8;
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (NewL_23));
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (R_10));
                }
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Box NewK_16;
                MR_Box NewV_17;
                MR_Word NewL_18;

                succeeded = mercury__rbtree__remove_largest_4_p_0(TypeInfo_for_K_43, TypeInfo_for_V_44, &NewK_16, &NewV_17, L_9, &NewL_18);
                if (succeeded)
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__5_5 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = NewK_16;
                    MR_hl_field(MR_mktag(1), base, 1) = NewV_17;
                    MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (NewL_18));
                    MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (R_10));
                  }
                else
                {
                  MR_Word NewR_19;
                  MR_Box NewK_21;
                  MR_Box NewV_22;

                  succeeded = mercury__rbtree__remove_smallest_4_p_0(TypeInfo_for_K_43, TypeInfo_for_V_44, &NewK_21, &NewV_22, R_10, &NewR_19);
                  if (succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      *HeadVar__5_5 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = NewK_21;
                      MR_hl_field(MR_mktag(1), base, 1) = NewV_22;
                      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (NewR_19));
                    }
                  }
                  else
                    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__4_4 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = V0_8;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word NewR_24;

                mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_p_1(TypeInfo_for_K_43, TypeInfo_for_V_44, R_10, HeadVar__2_2, HeadVar__4_4, &NewR_24);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__5_5 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = K0_7;
                  MR_hl_field(MR_mktag(1), base, 1) = V0_8;
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (L_9));
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (NewR_24));
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K0_25 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0));
          MR_Box V0_26 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1));
          MR_Word L_27 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2))));
          MR_Word R_28 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 3))));
          MR_Word Result_33;

          mercury__builtin__compare_3_p_0(TypeInfo_for_K_43, &Result_33, HeadVar__2_2, K0_25);
          switch (Result_33) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word NewL_41;

                mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_p_1(TypeInfo_for_K_43, TypeInfo_for_V_44, L_27, HeadVar__2_2, HeadVar__4_4, &NewL_41);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__5_5 = base;
                  MR_hl_field(MR_mktag(2), base, 0) = K0_25;
                  MR_hl_field(MR_mktag(2), base, 1) = V0_26;
                  MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (NewL_41));
                  MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (R_28));
                }
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Box NewK_34;
                MR_Box NewV_35;
                MR_Word NewL_36;

                succeeded = mercury__rbtree__remove_largest_4_p_0(TypeInfo_for_K_43, TypeInfo_for_V_44, &NewK_34, &NewV_35, L_27, &NewL_36);
                if (succeeded)
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__5_5 = base;
                    MR_hl_field(MR_mktag(2), base, 0) = NewK_34;
                    MR_hl_field(MR_mktag(2), base, 1) = NewV_35;
                    MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (NewL_36));
                    MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (R_28));
                  }
                else
                {
                  MR_Word NewR_37;
                  MR_Box NewK_39;
                  MR_Box NewV_40;

                  succeeded = mercury__rbtree__remove_smallest_4_p_0(TypeInfo_for_K_43, TypeInfo_for_V_44, &NewK_39, &NewV_40, R_28, &NewR_37);
                  if (succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      *HeadVar__5_5 = base;
                      MR_hl_field(MR_mktag(2), base, 0) = NewK_39;
                      MR_hl_field(MR_mktag(2), base, 1) = NewV_40;
                      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (NewR_37));
                    }
                  }
                  else
                    *HeadVar__5_5 = (MR_Word) ((MR_Unsigned) 0U);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__4_4 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = V0_26;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word NewR_42;

                mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_p_1(TypeInfo_for_K_43, TypeInfo_for_V_44, R_28, HeadVar__2_2, HeadVar__4_4, &NewR_42);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__5_5 = base;
                  MR_hl_field(MR_mktag(2), base, 0) = K0_25;
                  MR_hl_field(MR_mktag(2), base, 1) = V0_26;
                  MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (L_27));
                  MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (NewR_42));
                }
              }
              break;
          }
        }
        break;
    }
  }
}

MR_bool MR_CALL 
mercury__rbtree__remove_largest_4_p_0(
  MR_Word TypeInfo_for_K_40,
  MR_Word TypeInfo_for_V_41,
  MR_Box * HeadVar__1_1,
  MR_Box * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 2))
    {
      MR_Box K0_26 = (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0));
      MR_Box V0_27 = (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1));
      MR_Word L_28 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word R_29 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 3))));

      switch (MR_tag((MR_Word) R_29)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *HeadVar__1_1 = K0_26;
            *HeadVar__2_2 = V0_27;
            *HeadVar__4_4 = L_28;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            MR_Word NewR_39;

            succeeded = mercury__rbtree__remove_largest_4_p_0(TypeInfo_for_K_40, TypeInfo_for_V_41, HeadVar__1_1, HeadVar__2_2, R_29, &NewR_39);
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__4_4 = base;
                MR_hl_field(MR_mktag(2), base, 0) = K0_26;
                MR_hl_field(MR_mktag(2), base, 1) = V0_27;
                MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (L_28));
                MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (NewR_39));
              }
              succeeded = MR_TRUE;
            }
          }
          break;
      }
    }
    else
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Box K0_10 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));
      MR_Box V0_11 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1));
      MR_Word L_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word R_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 3))));

      switch (MR_tag((MR_Word) R_13)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *HeadVar__1_1 = K0_10;
            *HeadVar__2_2 = V0_11;
            *HeadVar__4_4 = L_12;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            MR_Word NewR_23;

            succeeded = mercury__rbtree__remove_largest_4_p_0(TypeInfo_for_K_40, TypeInfo_for_V_41, HeadVar__1_1, HeadVar__2_2, R_13, &NewR_23);
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__4_4 = base;
                MR_hl_field(MR_mktag(1), base, 0) = K0_10;
                MR_hl_field(MR_mktag(1), base, 1) = V0_11;
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (L_12));
                MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (NewR_23));
              }
              succeeded = MR_TRUE;
            }
          }
          break;
      }
    }
    else
      succeeded = MR_FALSE;
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__rbtree__remove_smallest_4_p_0(
  MR_Word TypeInfo_for_K_40,
  MR_Word TypeInfo_for_V_41,
  MR_Box * HeadVar__1_1,
  MR_Box * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 2))
    {
      MR_Box K0_26 = (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0));
      MR_Box V0_27 = (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1));
      MR_Word L_28 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word R_29 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 3))));

      switch (MR_tag((MR_Word) L_28)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *HeadVar__1_1 = K0_26;
            *HeadVar__2_2 = V0_27;
            *HeadVar__4_4 = R_29;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            MR_Word NewL_39;

            succeeded = mercury__rbtree__remove_smallest_4_p_0(TypeInfo_for_K_40, TypeInfo_for_V_41, HeadVar__1_1, HeadVar__2_2, L_28, &NewL_39);
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__4_4 = base;
                MR_hl_field(MR_mktag(2), base, 0) = K0_26;
                MR_hl_field(MR_mktag(2), base, 1) = V0_27;
                MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (NewL_39));
                MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (R_29));
              }
              succeeded = MR_TRUE;
            }
          }
          break;
      }
    }
    else
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Box K0_10 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));
      MR_Box V0_11 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1));
      MR_Word L_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word R_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 3))));

      switch (MR_tag((MR_Word) L_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *HeadVar__1_1 = K0_10;
            *HeadVar__2_2 = V0_11;
            *HeadVar__4_4 = R_13;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            MR_Word NewL_23;

            succeeded = mercury__rbtree__remove_smallest_4_p_0(TypeInfo_for_K_40, TypeInfo_for_V_41, HeadVar__1_1, HeadVar__2_2, L_12, &NewL_23);
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__4_4 = base;
                MR_hl_field(MR_mktag(1), base, 0) = K0_10;
                MR_hl_field(MR_mktag(1), base, 1) = V0_11;
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (NewL_23));
                MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (R_13));
              }
              succeeded = MR_TRUE;
            }
          }
          break;
      }
    }
    else
      succeeded = MR_FALSE;
    return succeeded;
  }
}

void MR_CALL 
mercury__rbtree__upper_bound_lookup_4_p_0(
  MR_Word TypeInfo_for_K_12,
  MR_Word TypeInfo_for_V_13,
  MR_Word T_5,
  MR_Box SearchK_6,
  MR_Box * K_7,
  MR_Box * V_8)
{
  {
    MR_bool succeeded;
    MR_Box K0_9;
    MR_Box V0_10;

    succeeded = mercury__rbtree__upper_bound_search_4_p_0(TypeInfo_for_K_12, TypeInfo_for_V_13, T_5, SearchK_6, &K0_9, &V0_10);
    if (succeeded)
    {
      *K_7 = K0_9;
      *V_8 = V0_10;
    }
    else
    {
      {
        mercury__require__report_lookup_error_3_p_0(TypeInfo_for_K_12, TypeInfo_for_V_13, (MR_String) "rbtree.upper_bound_lookup: key not found", SearchK_6);
        return;
      }
    }
  }
}

MR_bool MR_CALL 
mercury__rbtree__upper_bound_search_4_p_0(
  MR_Word TypeInfo_for_K_16,
  MR_Word TypeInfo_for_V_17,
  MR_Word Tree_5,
  MR_Box SearchK_6,
  MR_Box * K_7,
  MR_Box * V_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Box K0_9;
    MR_Box V0_10;
    MR_Word Left_11;
    MR_Word Right_12;
    MR_Word Result_13;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) Tree_5)) == (MR_Integer) 2))
    {
      K0_9 = (MR_hl_field(MR_mktag(2), Tree_5, (MR_Integer) 0));
      V0_10 = (MR_hl_field(MR_mktag(2), Tree_5, (MR_Integer) 1));
      Left_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Tree_5, (MR_Integer) 2))));
      Right_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Tree_5, (MR_Integer) 3))));
      succeeded = MR_TRUE;
    }
    else
    if (((MR_tag((MR_Word) Tree_5)) == (MR_Integer) 1))
    {
      K0_9 = (MR_hl_field(MR_mktag(1), Tree_5, (MR_Integer) 0));
      V0_10 = (MR_hl_field(MR_mktag(1), Tree_5, (MR_Integer) 1));
      Left_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Tree_5, (MR_Integer) 2))));
      Right_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Tree_5, (MR_Integer) 3))));
      succeeded = MR_TRUE;
    }
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      mercury__builtin__compare_3_p_0(TypeInfo_for_K_16, &Result_13, SearchK_6, K0_9);
      switch (Result_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Box Kp_14;
            MR_Box Vp_15;

            succeeded = mercury__rbtree__upper_bound_search_4_p_0(TypeInfo_for_K_16, TypeInfo_for_V_17, Left_11, SearchK_6, &Kp_14, &Vp_15);
            if (succeeded)
            {
              *K_7 = Kp_14;
              *V_8 = Vp_15;
            }
            else
            {
              *K_7 = K0_9;
              *V_8 = V0_10;
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 0:
          {
            *K_7 = K0_9;
            *V_8 = V0_10;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word next_value_of_Tree_5 = Right_12;

            // direct tailcall eliminated
            ;
            Tree_5 = next_value_of_Tree_5;
            continue;
          }
          break;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__rbtree__lower_bound_lookup_4_p_0(
  MR_Word TypeInfo_for_K_12,
  MR_Word TypeInfo_for_V_13,
  MR_Word T_5,
  MR_Box SearchK_6,
  MR_Box * K_7,
  MR_Box * V_8)
{
  {
    MR_bool succeeded;
    MR_Box K0_9;
    MR_Box V0_10;

    succeeded = mercury__rbtree__lower_bound_search_4_p_0(TypeInfo_for_K_12, TypeInfo_for_V_13, T_5, SearchK_6, &K0_9, &V0_10);
    if (succeeded)
    {
      *K_7 = K0_9;
      *V_8 = V0_10;
    }
    else
    {
      {
        mercury__require__report_lookup_error_3_p_0(TypeInfo_for_K_12, TypeInfo_for_V_13, (MR_String) "rbtree.lower_bound_lookup: key not found", SearchK_6);
        return;
      }
    }
  }
}

MR_bool MR_CALL 
mercury__rbtree__lower_bound_search_4_p_0(
  MR_Word TypeInfo_for_K_16,
  MR_Word TypeInfo_for_V_17,
  MR_Word Tree_5,
  MR_Box SearchK_6,
  MR_Box * K_7,
  MR_Box * V_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Box K0_9;
    MR_Box V0_10;
    MR_Word Left_11;
    MR_Word Right_12;
    MR_Word Result_13;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) Tree_5)) == (MR_Integer) 2))
    {
      K0_9 = (MR_hl_field(MR_mktag(2), Tree_5, (MR_Integer) 0));
      V0_10 = (MR_hl_field(MR_mktag(2), Tree_5, (MR_Integer) 1));
      Left_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Tree_5, (MR_Integer) 2))));
      Right_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Tree_5, (MR_Integer) 3))));
      succeeded = MR_TRUE;
    }
    else
    if (((MR_tag((MR_Word) Tree_5)) == (MR_Integer) 1))
    {
      K0_9 = (MR_hl_field(MR_mktag(1), Tree_5, (MR_Integer) 0));
      V0_10 = (MR_hl_field(MR_mktag(1), Tree_5, (MR_Integer) 1));
      Left_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Tree_5, (MR_Integer) 2))));
      Right_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Tree_5, (MR_Integer) 3))));
      succeeded = MR_TRUE;
    }
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      mercury__builtin__compare_3_p_0(TypeInfo_for_K_16, &Result_13, SearchK_6, K0_9);
      switch (Result_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word next_value_of_Tree_5 = Left_11;

            // direct tailcall eliminated
            ;
            Tree_5 = next_value_of_Tree_5;
            continue;
          }
          break;
        case (MR_Integer) 0:
          {
            *K_7 = K0_9;
            *V_8 = V0_10;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Box Kp_14;
            MR_Box Vp_15;

            succeeded = mercury__rbtree__lower_bound_search_4_p_0(TypeInfo_for_K_16, TypeInfo_for_V_17, Right_12, SearchK_6, &Kp_14, &Vp_15);
            if (succeeded)
            {
              *K_7 = Kp_14;
              *V_8 = Vp_15;
            }
            else
            {
              *K_7 = K0_9;
              *V_8 = V0_10;
            }
            succeeded = MR_TRUE;
          }
          break;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__rbtree__lookup_3_p_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Word T_4,
  MR_Box K_5,
  MR_Box * V_6)
{
  {
    MR_bool succeeded;
    MR_Box V0_7;

    succeeded = mercury__rbtree__search_3_p_0(TypeInfo_for_K_9, TypeInfo_for_V_10, T_4, K_5, &V0_7);
    if (succeeded)
      *V_6 = V0_7;
    else
    {
      {
        mercury__require__report_lookup_error_3_p_0(TypeInfo_for_K_9, TypeInfo_for_V_10, (MR_String) "rbtree.lookup: key not found", K_5);
        return;
      }
    }
  }
}

MR_Box MR_CALL 
mercury__rbtree__lookup_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word RBT_4,
  MR_Box K_5)
{
  {
    MR_bool succeeded;
    MR_Box V_6;
    MR_Box V0_12;

    succeeded = mercury__rbtree__search_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, RBT_4, K_5, &V0_12);
    if (succeeded)
      V_6 = V0_12;
    else
    {
      mercury__require__report_lookup_error_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, (MR_String) "rbtree.lookup: key not found", K_5);
    }
    return V_6;
  }
}

MR_bool MR_CALL 
mercury__rbtree__search_3_p_0(
  MR_Word TypeInfo_for_K_12,
  MR_Word TypeInfo_for_V_13,
  MR_Word Tree_4,
  MR_Box K_5,
  MR_Box * V_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Box K0_7;
    MR_Box V0_8;
    MR_Word Left_9;
    MR_Word Right_10;
    MR_Word Result_11;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) Tree_4)) == (MR_Integer) 2))
    {
      K0_7 = (MR_hl_field(MR_mktag(2), Tree_4, (MR_Integer) 0));
      V0_8 = (MR_hl_field(MR_mktag(2), Tree_4, (MR_Integer) 1));
      Left_9 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Tree_4, (MR_Integer) 2))));
      Right_10 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Tree_4, (MR_Integer) 3))));
      succeeded = MR_TRUE;
    }
    else
    if (((MR_tag((MR_Word) Tree_4)) == (MR_Integer) 1))
    {
      K0_7 = (MR_hl_field(MR_mktag(1), Tree_4, (MR_Integer) 0));
      V0_8 = (MR_hl_field(MR_mktag(1), Tree_4, (MR_Integer) 1));
      Left_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Tree_4, (MR_Integer) 2))));
      Right_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Tree_4, (MR_Integer) 3))));
      succeeded = MR_TRUE;
    }
    else
      succeeded = MR_FALSE;
    if (succeeded)
    {
      mercury__builtin__compare_3_p_0(TypeInfo_for_K_12, &Result_11, K_5, K0_7);
      switch (Result_11) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word next_value_of_Tree_4 = Left_9;

            // direct tailcall eliminated
            ;
            Tree_4 = next_value_of_Tree_4;
            continue;
          }
          break;
        case (MR_Integer) 0:
          {
            *V_6 = V0_8;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word next_value_of_Tree_4 = Right_10;

            // direct tailcall eliminated
            ;
            Tree_4 = next_value_of_Tree_4;
            continue;
          }
          break;
      }
    }
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__rbtree__member_3_p_0(
  MR_Word TypeInfo_for_K_18,
  MR_Word TypeInfo_for_V_19,
  MR_Word HeadVar__1_1,
  MR_Box * HeadVar__2_2,
  MR_Box * HeadVar__3_3,
  MR_Cont cont,
  void * cont_env_ptr)
{
  while (MR_TRUE)
  {
    // setup for model_non tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 2))
    {
      MR_Box K0_12 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0));
      MR_Box V0_13 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1));
      MR_Word Left_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word Right_15 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 3))));

      *HeadVar__2_2 = K0_12;
      *HeadVar__3_3 = V0_13;
      cont(cont_env_ptr);
      mercury__rbtree__member_3_p_0(TypeInfo_for_K_18, TypeInfo_for_V_19, Left_14, HeadVar__2_2, HeadVar__3_3, cont, cont_env_ptr);
      {
        MR_Word next_value_of_HeadVar__1_1 = Right_15;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    {
      MR_Box K0_6 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      MR_Box V0_7 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1));
      MR_Word Left_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word Right_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))));

      *HeadVar__2_2 = K0_6;
      *HeadVar__3_3 = V0_7;
      cont(cont_env_ptr);
      mercury__rbtree__member_3_p_0(TypeInfo_for_K_18, TypeInfo_for_V_19, Left_8, HeadVar__2_2, HeadVar__3_3, cont, cont_env_ptr);
      {
        MR_Word next_value_of_HeadVar__1_1 = Right_9;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__rbtree__insert_duplicate_3_f_0(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Word STATE_VARIABLE_RBT_0_8,
  MR_Box K_6,
  MR_Box V_7)
{
  {
    MR_Word STATE_VARIABLE_RBT_9;

    mercury__rbtree__insert_duplicate_4_p_0(TypeInfo_for_K_11, TypeInfo_for_V_12, K_6, V_7, STATE_VARIABLE_RBT_0_8, &STATE_VARIABLE_RBT_9);
    return STATE_VARIABLE_RBT_9;
  }
}

void MR_CALL 
mercury__rbtree__insert_duplicate_4_p_0(
  MR_Word TypeInfo_for_K_30,
  MR_Word TypeInfo_for_V_31,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) HeadVar__3_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__4_4 = base;
            MR_hl_field(MR_mktag(2), base, 0) = HeadVar__1_1;
            MR_hl_field(MR_mktag(2), base, 1) = HeadVar__2_2;
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__require__error_1_p_0((MR_String) "rbtree.insert_duplicate: root node cannot be red!");
            return;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Tree0_24;
          MR_Box K1_25;
          MR_Box V1_26;
          MR_Word L1_27;
          MR_Word R1_28;

          mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_p_0(TypeInfo_for_K_30, HeadVar__3_3, HeadVar__1_1, HeadVar__2_2, &Tree0_24);
          succeeded = ((MR_tag((MR_Word) Tree0_24)) == (MR_Integer) 1);
          if (succeeded)
          {
            K1_25 = (MR_hl_field(MR_mktag(1), Tree0_24, (MR_Integer) 0));
            V1_26 = (MR_hl_field(MR_mktag(1), Tree0_24, (MR_Integer) 1));
            L1_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Tree0_24, (MR_Integer) 2))));
            R1_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Tree0_24, (MR_Integer) 3))));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__4_4 = base;
              MR_hl_field(MR_mktag(2), base, 0) = K1_25;
              MR_hl_field(MR_mktag(2), base, 1) = V1_26;
              MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (L1_27));
              MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (R1_28));
            }
          }
          else
            *HeadVar__4_4 = Tree0_24;
        }
        break;
    }
  }
}

static void MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_p_0(
  MR_Word TypeInfo_for_K_143,
  MR_Word HeadVar__1_1,
  MR_Box K_2,
  MR_Box V_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__4_4 = base;
            MR_hl_field(MR_mktag(1), base, 0) = K_2;
            MR_hl_field(MR_mktag(1), base, 1) = V_3;
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K0_9 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
          MR_Box V0_10 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1));
          MR_Word L0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
          MR_Word R0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))));
          MR_Word Result_16;

          mercury__builtin__compare_3_p_0(TypeInfo_for_K_143, &Result_16, K_2, K0_9);
          switch (Result_16) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word NewL_17;

                mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_p_0(TypeInfo_for_K_143, L0_11, K_2, V_3, &NewL_17);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__4_4 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = K0_9;
                  MR_hl_field(MR_mktag(1), base, 1) = V0_10;
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (NewL_17));
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (R0_12));
                }
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word NewL_19;

                mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_p_0(TypeInfo_for_K_143, L0_11, K_2, V_3, &NewL_19);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__4_4 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = K0_9;
                  MR_hl_field(MR_mktag(1), base, 1) = V0_10;
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (NewL_19));
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (R0_12));
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word NewR_18;

                mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_p_0(TypeInfo_for_K_143, R0_12, K_2, V_3, &NewR_18);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__4_4 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = K0_9;
                  MR_hl_field(MR_mktag(1), base, 1) = V0_10;
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (L0_11));
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (NewR_18));
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K0_20 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0));
          MR_Box V0_21 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1));
          MR_Word L0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2))));
          MR_Word R0_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 3))));
          MR_Box LK_27;
          MR_Box LV_28;
          MR_Word LL_29;
          MR_Word LR_30;
          MR_Box RK_31;
          MR_Box RV_32;
          MR_Word RL_33;
          MR_Word RR_34;

          succeeded = ((MR_tag((MR_Word) L0_22)) == (MR_Integer) 1);
          if (succeeded)
          {
            LK_27 = (MR_hl_field(MR_mktag(1), L0_22, (MR_Integer) 0));
            LV_28 = (MR_hl_field(MR_mktag(1), L0_22, (MR_Integer) 1));
            LL_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), L0_22, (MR_Integer) 2))));
            LR_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), L0_22, (MR_Integer) 3))));
            succeeded = ((MR_tag((MR_Word) R0_23)) == (MR_Integer) 1);
            if (succeeded)
            {
              RK_31 = (MR_hl_field(MR_mktag(1), R0_23, (MR_Integer) 0));
              RV_32 = (MR_hl_field(MR_mktag(1), R0_23, (MR_Integer) 1));
              RL_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), R0_23, (MR_Integer) 2))));
              RR_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), R0_23, (MR_Integer) 3))));
            }
          }
          if (succeeded)
          {
            MR_Word L_35;
            MR_Word R_36;
            MR_Word Tree0_37;
            MR_Word next_value_of_HeadVar__1_1;

            {
              L_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), L_35, 0) = LK_27;
              MR_hl_field(MR_mktag(2), L_35, 1) = LV_28;
              MR_hl_field(MR_mktag(2), L_35, 2) = ((MR_Box) (LL_29));
              MR_hl_field(MR_mktag(2), L_35, 3) = ((MR_Box) (LR_30));
            }
            {
              R_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), R_36, 0) = RK_31;
              MR_hl_field(MR_mktag(2), R_36, 1) = RV_32;
              MR_hl_field(MR_mktag(2), R_36, 2) = ((MR_Box) (RL_33));
              MR_hl_field(MR_mktag(2), R_36, 3) = ((MR_Box) (RR_34));
            }
            {
              Tree0_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Tree0_37, 0) = K0_20;
              MR_hl_field(MR_mktag(1), Tree0_37, 1) = V0_21;
              MR_hl_field(MR_mktag(1), Tree0_37, 2) = ((MR_Box) (L_35));
              MR_hl_field(MR_mktag(1), Tree0_37, 3) = ((MR_Box) (R_36));
            }
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__1_1 = Tree0_37;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
          else
          {
            MR_Word Result_38;

            mercury__builtin__compare_3_p_0(TypeInfo_for_K_143, &Result_38, K_2, K0_20);
            switch (Result_38) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word NewL_39;
                  MR_Box LK_65;
                  MR_Box LV_66;
                  MR_Word LL_67;
                  MR_Word LR_68;

                  mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_p_0(TypeInfo_for_K_143, L0_22, K_2, V_3, &NewL_39);
                  succeeded = ((MR_tag((MR_Word) NewL_39)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    LK_65 = (MR_hl_field(MR_mktag(1), NewL_39, (MR_Integer) 0));
                    LV_66 = (MR_hl_field(MR_mktag(1), NewL_39, (MR_Integer) 1));
                    LL_67 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NewL_39, (MR_Integer) 2))));
                    LR_68 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NewL_39, (MR_Integer) 3))));
                    succeeded = ((MR_tag((MR_Word) LL_67)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      {
                        MR_Word TreeR_44;

                        {
                          TreeR_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), TreeR_44, 0) = K0_20;
                          MR_hl_field(MR_mktag(1), TreeR_44, 1) = V0_21;
                          MR_hl_field(MR_mktag(1), TreeR_44, 2) = ((MR_Box) (LR_68));
                          MR_hl_field(MR_mktag(1), TreeR_44, 3) = ((MR_Box) (R0_23));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          *HeadVar__4_4 = base;
                          MR_hl_field(MR_mktag(2), base, 0) = LK_65;
                          MR_hl_field(MR_mktag(2), base, 1) = LV_66;
                          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (LL_67));
                          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (TreeR_44));
                        }
                      }
                    }
                    else
                    {
                      MR_Box LRK_45;
                      MR_Box LRV_46;
                      MR_Word LRL_47;
                      MR_Word LRR_48;

                      succeeded = ((MR_tag((MR_Word) LR_68)) == (MR_Integer) 1);
                      if (succeeded)
                      {
                        LRK_45 = (MR_hl_field(MR_mktag(1), LR_68, (MR_Integer) 0));
                        LRV_46 = (MR_hl_field(MR_mktag(1), LR_68, (MR_Integer) 1));
                        LRL_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LR_68, (MR_Integer) 2))));
                        LRR_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LR_68, (MR_Integer) 3))));
                        {
                          MR_Word TreeL_49;
                          MR_Word TreeR_63;

                          {
                            TreeL_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), TreeL_49, 0) = LK_65;
                            MR_hl_field(MR_mktag(1), TreeL_49, 1) = LV_66;
                            MR_hl_field(MR_mktag(1), TreeL_49, 2) = ((MR_Box) (LL_67));
                            MR_hl_field(MR_mktag(1), TreeL_49, 3) = ((MR_Box) (LRL_47));
                          }
                          {
                            TreeR_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), TreeR_63, 0) = K0_20;
                            MR_hl_field(MR_mktag(1), TreeR_63, 1) = V0_21;
                            MR_hl_field(MR_mktag(1), TreeR_63, 2) = ((MR_Box) (LRR_48));
                            MR_hl_field(MR_mktag(1), TreeR_63, 3) = ((MR_Box) (R0_23));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            *HeadVar__4_4 = base;
                            MR_hl_field(MR_mktag(2), base, 0) = LRK_45;
                            MR_hl_field(MR_mktag(2), base, 1) = LRV_46;
                            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (TreeL_49));
                            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (TreeR_63));
                          }
                        }
                      }
                      else
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          *HeadVar__4_4 = base;
                          MR_hl_field(MR_mktag(2), base, 0) = K0_20;
                          MR_hl_field(MR_mktag(2), base, 1) = V0_21;
                          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (NewL_39));
                          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (R0_23));
                        }
                    }
                  }
                  else
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      *HeadVar__4_4 = base;
                      MR_hl_field(MR_mktag(2), base, 0) = K0_20;
                      MR_hl_field(MR_mktag(2), base, 1) = V0_21;
                      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (NewL_39));
                      MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (R0_23));
                    }
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word NewL_120;
                  MR_Box LK_106;
                  MR_Box LV_107;
                  MR_Word LL_108;
                  MR_Word LR_109;

                  mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_p_0(TypeInfo_for_K_143, L0_22, K_2, V_3, &NewL_120);
                  succeeded = ((MR_tag((MR_Word) NewL_120)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    LK_106 = (MR_hl_field(MR_mktag(1), NewL_120, (MR_Integer) 0));
                    LV_107 = (MR_hl_field(MR_mktag(1), NewL_120, (MR_Integer) 1));
                    LL_108 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NewL_120, (MR_Integer) 2))));
                    LR_109 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NewL_120, (MR_Integer) 3))));
                    succeeded = ((MR_tag((MR_Word) LL_108)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      {
                        MR_Word TreeR_91;

                        {
                          TreeR_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), TreeR_91, 0) = K0_20;
                          MR_hl_field(MR_mktag(1), TreeR_91, 1) = V0_21;
                          MR_hl_field(MR_mktag(1), TreeR_91, 2) = ((MR_Box) (LR_109));
                          MR_hl_field(MR_mktag(1), TreeR_91, 3) = ((MR_Box) (R0_23));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          *HeadVar__4_4 = base;
                          MR_hl_field(MR_mktag(2), base, 0) = LK_106;
                          MR_hl_field(MR_mktag(2), base, 1) = LV_107;
                          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (LL_108));
                          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (TreeR_91));
                        }
                      }
                    }
                    else
                    {
                      MR_Box LRK_95;
                      MR_Box LRV_96;
                      MR_Word LRL_97;
                      MR_Word LRR_98;

                      succeeded = ((MR_tag((MR_Word) LR_109)) == (MR_Integer) 1);
                      if (succeeded)
                      {
                        LRK_95 = (MR_hl_field(MR_mktag(1), LR_109, (MR_Integer) 0));
                        LRV_96 = (MR_hl_field(MR_mktag(1), LR_109, (MR_Integer) 1));
                        LRL_97 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LR_109, (MR_Integer) 2))));
                        LRR_98 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LR_109, (MR_Integer) 3))));
                        {
                          MR_Word TreeR_92;
                          MR_Word TreeL_93;

                          {
                            TreeL_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), TreeL_93, 0) = LK_106;
                            MR_hl_field(MR_mktag(1), TreeL_93, 1) = LV_107;
                            MR_hl_field(MR_mktag(1), TreeL_93, 2) = ((MR_Box) (LL_108));
                            MR_hl_field(MR_mktag(1), TreeL_93, 3) = ((MR_Box) (LRL_97));
                          }
                          {
                            TreeR_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), TreeR_92, 0) = K0_20;
                            MR_hl_field(MR_mktag(1), TreeR_92, 1) = V0_21;
                            MR_hl_field(MR_mktag(1), TreeR_92, 2) = ((MR_Box) (LRR_98));
                            MR_hl_field(MR_mktag(1), TreeR_92, 3) = ((MR_Box) (R0_23));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            *HeadVar__4_4 = base;
                            MR_hl_field(MR_mktag(2), base, 0) = LRK_95;
                            MR_hl_field(MR_mktag(2), base, 1) = LRV_96;
                            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (TreeL_93));
                            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (TreeR_92));
                          }
                        }
                      }
                      else
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          *HeadVar__4_4 = base;
                          MR_hl_field(MR_mktag(2), base, 0) = K0_20;
                          MR_hl_field(MR_mktag(2), base, 1) = V0_21;
                          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (NewL_120));
                          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (R0_23));
                        }
                    }
                  }
                  else
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      *HeadVar__4_4 = base;
                      MR_hl_field(MR_mktag(2), base, 0) = K0_20;
                      MR_hl_field(MR_mktag(2), base, 1) = V0_21;
                      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (NewL_120));
                      MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (R0_23));
                    }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word NewR_50;
                  MR_Box RK_79;
                  MR_Box RV_80;
                  MR_Word RL_81;
                  MR_Word RR_82;

                  mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_p_0(TypeInfo_for_K_143, R0_23, K_2, V_3, &NewR_50);
                  succeeded = ((MR_tag((MR_Word) NewR_50)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    RK_79 = (MR_hl_field(MR_mktag(1), NewR_50, (MR_Integer) 0));
                    RV_80 = (MR_hl_field(MR_mktag(1), NewR_50, (MR_Integer) 1));
                    RL_81 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NewR_50, (MR_Integer) 2))));
                    RR_82 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NewR_50, (MR_Integer) 3))));
                    {
                      MR_Box RLK_51;
                      MR_Box RLV_52;
                      MR_Word RLL_53;
                      MR_Word RLR_54;

                      succeeded = ((MR_tag((MR_Word) RL_81)) == (MR_Integer) 1);
                      if (succeeded)
                      {
                        RLK_51 = (MR_hl_field(MR_mktag(1), RL_81, (MR_Integer) 0));
                        RLV_52 = (MR_hl_field(MR_mktag(1), RL_81, (MR_Integer) 1));
                        RLL_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RL_81, (MR_Integer) 2))));
                        RLR_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RL_81, (MR_Integer) 3))));
                        {
                          MR_Word TreeR_73;
                          MR_Word TreeL_74;

                          {
                            TreeL_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), TreeL_74, 0) = K0_20;
                            MR_hl_field(MR_mktag(1), TreeL_74, 1) = V0_21;
                            MR_hl_field(MR_mktag(1), TreeL_74, 2) = ((MR_Box) (L0_22));
                            MR_hl_field(MR_mktag(1), TreeL_74, 3) = ((MR_Box) (RLL_53));
                          }
                          {
                            TreeR_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), TreeR_73, 0) = RK_79;
                            MR_hl_field(MR_mktag(1), TreeR_73, 1) = RV_80;
                            MR_hl_field(MR_mktag(1), TreeR_73, 2) = ((MR_Box) (RLR_54));
                            MR_hl_field(MR_mktag(1), TreeR_73, 3) = ((MR_Box) (RR_82));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            *HeadVar__4_4 = base;
                            MR_hl_field(MR_mktag(2), base, 0) = RLK_51;
                            MR_hl_field(MR_mktag(2), base, 1) = RLV_52;
                            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (TreeL_74));
                            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (TreeR_73));
                          }
                        }
                      }
                      else
                      {
                        succeeded = ((MR_tag((MR_Word) RR_82)) == (MR_Integer) 1);
                        if (succeeded)
                        {
                          {
                            MR_Word TreeL_75;

                            {
                              TreeL_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), TreeL_75, 0) = K0_20;
                              MR_hl_field(MR_mktag(1), TreeL_75, 1) = V0_21;
                              MR_hl_field(MR_mktag(1), TreeL_75, 2) = ((MR_Box) (L0_22));
                              MR_hl_field(MR_mktag(1), TreeL_75, 3) = ((MR_Box) (RL_81));
                            }
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                              *HeadVar__4_4 = base;
                              MR_hl_field(MR_mktag(2), base, 0) = RK_79;
                              MR_hl_field(MR_mktag(2), base, 1) = RV_80;
                              MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (TreeL_75));
                              MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (RR_82));
                            }
                          }
                        }
                        else
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            *HeadVar__4_4 = base;
                            MR_hl_field(MR_mktag(2), base, 0) = K0_20;
                            MR_hl_field(MR_mktag(2), base, 1) = V0_21;
                            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (L0_22));
                            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (NewR_50));
                          }
                      }
                    }
                  }
                  else
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      *HeadVar__4_4 = base;
                      MR_hl_field(MR_mktag(2), base, 0) = K0_20;
                      MR_hl_field(MR_mktag(2), base, 1) = V0_21;
                      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (L0_22));
                      MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (NewR_50));
                    }
                }
                break;
            }
          }
        }
        break;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__rbtree__set_3_f_0(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Word STATE_VARIABLE_RBT_0_8,
  MR_Box K_6,
  MR_Box V_7)
{
  {
    MR_Word STATE_VARIABLE_RBT_9;

    mercury__rbtree__set_4_p_0(TypeInfo_for_K_11, TypeInfo_for_V_12, K_6, V_7, STATE_VARIABLE_RBT_0_8, &STATE_VARIABLE_RBT_9);
    return STATE_VARIABLE_RBT_9;
  }
}

void MR_CALL 
mercury__rbtree__set_4_p_0(
  MR_Word TypeInfo_for_K_35,
  MR_Word TypeInfo_for_V_36,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  switch (MR_tag((MR_Word) HeadVar__3_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_4 = base;
          MR_hl_field(MR_mktag(2), base, 0) = HeadVar__1_1;
          MR_hl_field(MR_mktag(2), base, 1) = HeadVar__2_2;
          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      break;
    case (MR_Integer) 1:
      {
        {
          mercury__require__error_1_p_0((MR_String) "rbtree.set: root node cannot be red!");
          return;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Tree0_24;

        mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_p_1(TypeInfo_for_K_35, HeadVar__3_3, HeadVar__1_1, HeadVar__2_2, &Tree0_24);
        switch (MR_tag((MR_Word) Tree0_24)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              {
                mercury__require__error_1_p_0((MR_String) "rbtree.set: new tree is empty");
                return;
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box K1_29 = (MR_hl_field(MR_mktag(1), Tree0_24, (MR_Integer) 0));
              MR_Box V1_30 = (MR_hl_field(MR_mktag(1), Tree0_24, (MR_Integer) 1));
              MR_Word L1_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Tree0_24, (MR_Integer) 2))));
              MR_Word R1_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Tree0_24, (MR_Integer) 3))));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__4_4 = base;
                MR_hl_field(MR_mktag(2), base, 0) = K1_29;
                MR_hl_field(MR_mktag(2), base, 1) = V1_30;
                MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (L1_31));
                MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (R1_32));
              }
            }
            break;
          case (MR_Integer) 2:
            *HeadVar__4_4 = Tree0_24;
            break;
        }
      }
      break;
  }
}

static void MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_p_1(
  MR_Word TypeInfo_for_K_104,
  MR_Word HeadVar__1_1,
  MR_Box K_2,
  MR_Box V_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__4_4 = base;
            MR_hl_field(MR_mktag(1), base, 0) = K_2;
            MR_hl_field(MR_mktag(1), base, 1) = V_3;
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K0_9 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
          MR_Box V0_10 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1));
          MR_Word L0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
          MR_Word R0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))));
          MR_Word Result_16;

          mercury__builtin__compare_3_p_0(TypeInfo_for_K_104, &Result_16, K_2, K0_9);
          switch (Result_16) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word NewL_17;

                mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_p_1(TypeInfo_for_K_104, L0_11, K_2, V_3, &NewL_17);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__4_4 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = K0_9;
                  MR_hl_field(MR_mktag(1), base, 1) = V0_10;
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (NewL_17));
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (R0_12));
                }
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__4_4 = base;
                MR_hl_field(MR_mktag(1), base, 0) = K_2;
                MR_hl_field(MR_mktag(1), base, 1) = V_3;
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (L0_11));
                MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (R0_12));
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word NewR_18;

                mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_p_1(TypeInfo_for_K_104, R0_12, K_2, V_3, &NewR_18);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__4_4 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = K0_9;
                  MR_hl_field(MR_mktag(1), base, 1) = V0_10;
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (L0_11));
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (NewR_18));
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K0_19 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0));
          MR_Box V0_20 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1));
          MR_Word L0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2))));
          MR_Word R0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 3))));
          MR_Box LK_26;
          MR_Box LV_27;
          MR_Word LL_28;
          MR_Word LR_29;
          MR_Box RK_30;
          MR_Box RV_31;
          MR_Word RL_32;
          MR_Word RR_33;

          succeeded = ((MR_tag((MR_Word) L0_21)) == (MR_Integer) 1);
          if (succeeded)
          {
            LK_26 = (MR_hl_field(MR_mktag(1), L0_21, (MR_Integer) 0));
            LV_27 = (MR_hl_field(MR_mktag(1), L0_21, (MR_Integer) 1));
            LL_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), L0_21, (MR_Integer) 2))));
            LR_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), L0_21, (MR_Integer) 3))));
            succeeded = ((MR_tag((MR_Word) R0_22)) == (MR_Integer) 1);
            if (succeeded)
            {
              RK_30 = (MR_hl_field(MR_mktag(1), R0_22, (MR_Integer) 0));
              RV_31 = (MR_hl_field(MR_mktag(1), R0_22, (MR_Integer) 1));
              RL_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), R0_22, (MR_Integer) 2))));
              RR_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), R0_22, (MR_Integer) 3))));
            }
          }
          if (succeeded)
          {
            MR_Word L_34;
            MR_Word R_35;
            MR_Word Tree0_36;
            MR_Word next_value_of_HeadVar__1_1;

            {
              L_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), L_34, 0) = LK_26;
              MR_hl_field(MR_mktag(2), L_34, 1) = LV_27;
              MR_hl_field(MR_mktag(2), L_34, 2) = ((MR_Box) (LL_28));
              MR_hl_field(MR_mktag(2), L_34, 3) = ((MR_Box) (LR_29));
            }
            {
              R_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), R_35, 0) = RK_30;
              MR_hl_field(MR_mktag(2), R_35, 1) = RV_31;
              MR_hl_field(MR_mktag(2), R_35, 2) = ((MR_Box) (RL_32));
              MR_hl_field(MR_mktag(2), R_35, 3) = ((MR_Box) (RR_33));
            }
            {
              Tree0_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Tree0_36, 0) = K0_19;
              MR_hl_field(MR_mktag(1), Tree0_36, 1) = V0_20;
              MR_hl_field(MR_mktag(1), Tree0_36, 2) = ((MR_Box) (L_34));
              MR_hl_field(MR_mktag(1), Tree0_36, 3) = ((MR_Box) (R_35));
            }
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__1_1 = Tree0_36;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
          else
          {
            MR_Word Result_37;

            mercury__builtin__compare_3_p_0(TypeInfo_for_K_104, &Result_37, K_2, K0_19);
            switch (Result_37) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word NewL_38;
                  MR_Box LK_62;
                  MR_Box LV_63;
                  MR_Word LL_64;
                  MR_Word LR_65;

                  mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_p_1(TypeInfo_for_K_104, L0_21, K_2, V_3, &NewL_38);
                  succeeded = ((MR_tag((MR_Word) NewL_38)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    LK_62 = (MR_hl_field(MR_mktag(1), NewL_38, (MR_Integer) 0));
                    LV_63 = (MR_hl_field(MR_mktag(1), NewL_38, (MR_Integer) 1));
                    LL_64 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NewL_38, (MR_Integer) 2))));
                    LR_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NewL_38, (MR_Integer) 3))));
                    succeeded = ((MR_tag((MR_Word) LL_64)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      {
                        MR_Word TreeR_43;

                        {
                          TreeR_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), TreeR_43, 0) = K0_19;
                          MR_hl_field(MR_mktag(1), TreeR_43, 1) = V0_20;
                          MR_hl_field(MR_mktag(1), TreeR_43, 2) = ((MR_Box) (LR_65));
                          MR_hl_field(MR_mktag(1), TreeR_43, 3) = ((MR_Box) (R0_22));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          *HeadVar__4_4 = base;
                          MR_hl_field(MR_mktag(2), base, 0) = LK_62;
                          MR_hl_field(MR_mktag(2), base, 1) = LV_63;
                          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (LL_64));
                          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (TreeR_43));
                        }
                      }
                    }
                    else
                    {
                      MR_Box LRK_44;
                      MR_Box LRV_45;
                      MR_Word LRL_46;
                      MR_Word LRR_47;

                      succeeded = ((MR_tag((MR_Word) LR_65)) == (MR_Integer) 1);
                      if (succeeded)
                      {
                        LRK_44 = (MR_hl_field(MR_mktag(1), LR_65, (MR_Integer) 0));
                        LRV_45 = (MR_hl_field(MR_mktag(1), LR_65, (MR_Integer) 1));
                        LRL_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LR_65, (MR_Integer) 2))));
                        LRR_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LR_65, (MR_Integer) 3))));
                        {
                          MR_Word TreeL_48;
                          MR_Word TreeR_60;

                          {
                            TreeL_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), TreeL_48, 0) = LK_62;
                            MR_hl_field(MR_mktag(1), TreeL_48, 1) = LV_63;
                            MR_hl_field(MR_mktag(1), TreeL_48, 2) = ((MR_Box) (LL_64));
                            MR_hl_field(MR_mktag(1), TreeL_48, 3) = ((MR_Box) (LRL_46));
                          }
                          {
                            TreeR_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), TreeR_60, 0) = K0_19;
                            MR_hl_field(MR_mktag(1), TreeR_60, 1) = V0_20;
                            MR_hl_field(MR_mktag(1), TreeR_60, 2) = ((MR_Box) (LRR_47));
                            MR_hl_field(MR_mktag(1), TreeR_60, 3) = ((MR_Box) (R0_22));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            *HeadVar__4_4 = base;
                            MR_hl_field(MR_mktag(2), base, 0) = LRK_44;
                            MR_hl_field(MR_mktag(2), base, 1) = LRV_45;
                            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (TreeL_48));
                            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (TreeR_60));
                          }
                        }
                      }
                      else
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          *HeadVar__4_4 = base;
                          MR_hl_field(MR_mktag(2), base, 0) = K0_19;
                          MR_hl_field(MR_mktag(2), base, 1) = V0_20;
                          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (NewL_38));
                          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (R0_22));
                        }
                    }
                  }
                  else
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      *HeadVar__4_4 = base;
                      MR_hl_field(MR_mktag(2), base, 0) = K0_19;
                      MR_hl_field(MR_mktag(2), base, 1) = V0_20;
                      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (NewL_38));
                      MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (R0_22));
                    }
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__4_4 = base;
                  MR_hl_field(MR_mktag(2), base, 0) = K_2;
                  MR_hl_field(MR_mktag(2), base, 1) = V_3;
                  MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (L0_21));
                  MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (R0_22));
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word NewR_50;
                  MR_Box RK_76;
                  MR_Box RV_77;
                  MR_Word RL_78;
                  MR_Word RR_79;

                  mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_p_1(TypeInfo_for_K_104, R0_22, K_2, V_3, &NewR_50);
                  succeeded = ((MR_tag((MR_Word) NewR_50)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    RK_76 = (MR_hl_field(MR_mktag(1), NewR_50, (MR_Integer) 0));
                    RV_77 = (MR_hl_field(MR_mktag(1), NewR_50, (MR_Integer) 1));
                    RL_78 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NewR_50, (MR_Integer) 2))));
                    RR_79 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NewR_50, (MR_Integer) 3))));
                    {
                      MR_Box RLK_51;
                      MR_Box RLV_52;
                      MR_Word RLL_53;
                      MR_Word RLR_54;

                      succeeded = ((MR_tag((MR_Word) RL_78)) == (MR_Integer) 1);
                      if (succeeded)
                      {
                        RLK_51 = (MR_hl_field(MR_mktag(1), RL_78, (MR_Integer) 0));
                        RLV_52 = (MR_hl_field(MR_mktag(1), RL_78, (MR_Integer) 1));
                        RLL_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RL_78, (MR_Integer) 2))));
                        RLR_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RL_78, (MR_Integer) 3))));
                        {
                          MR_Word TreeR_70;
                          MR_Word TreeL_71;

                          {
                            TreeL_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), TreeL_71, 0) = K0_19;
                            MR_hl_field(MR_mktag(1), TreeL_71, 1) = V0_20;
                            MR_hl_field(MR_mktag(1), TreeL_71, 2) = ((MR_Box) (L0_21));
                            MR_hl_field(MR_mktag(1), TreeL_71, 3) = ((MR_Box) (RLL_53));
                          }
                          {
                            TreeR_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), TreeR_70, 0) = RK_76;
                            MR_hl_field(MR_mktag(1), TreeR_70, 1) = RV_77;
                            MR_hl_field(MR_mktag(1), TreeR_70, 2) = ((MR_Box) (RLR_54));
                            MR_hl_field(MR_mktag(1), TreeR_70, 3) = ((MR_Box) (RR_79));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            *HeadVar__4_4 = base;
                            MR_hl_field(MR_mktag(2), base, 0) = RLK_51;
                            MR_hl_field(MR_mktag(2), base, 1) = RLV_52;
                            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (TreeL_71));
                            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (TreeR_70));
                          }
                        }
                      }
                      else
                      {
                        succeeded = ((MR_tag((MR_Word) RR_79)) == (MR_Integer) 1);
                        if (succeeded)
                        {
                          {
                            MR_Word TreeL_72;

                            {
                              TreeL_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), TreeL_72, 0) = K0_19;
                              MR_hl_field(MR_mktag(1), TreeL_72, 1) = V0_20;
                              MR_hl_field(MR_mktag(1), TreeL_72, 2) = ((MR_Box) (L0_21));
                              MR_hl_field(MR_mktag(1), TreeL_72, 3) = ((MR_Box) (RL_78));
                            }
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                              *HeadVar__4_4 = base;
                              MR_hl_field(MR_mktag(2), base, 0) = RK_76;
                              MR_hl_field(MR_mktag(2), base, 1) = RV_77;
                              MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (TreeL_72));
                              MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (RR_79));
                            }
                          }
                        }
                        else
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            *HeadVar__4_4 = base;
                            MR_hl_field(MR_mktag(2), base, 0) = K0_19;
                            MR_hl_field(MR_mktag(2), base, 1) = V0_20;
                            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (L0_21));
                            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (NewR_50));
                          }
                      }
                    }
                  }
                  else
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      *HeadVar__4_4 = base;
                      MR_hl_field(MR_mktag(2), base, 0) = K0_19;
                      MR_hl_field(MR_mktag(2), base, 1) = V0_20;
                      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (L0_21));
                      MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (NewR_50));
                    }
                }
                break;
            }
          }
        }
        break;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__rbtree__transform_value_4_p_0(
  MR_Word TypeInfo_for_V_30,
  MR_Word TypeInfo_for_K_31,
  MR_Word HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 2))
    {
      MR_Box K0_21 = (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0));
      MR_Box V0_22 = (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1));
      MR_Word L_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word R_24 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word Result_26;

      mercury__builtin__compare_3_p_0(TypeInfo_for_K_31, &Result_26, HeadVar__2_2, K0_21);
      switch (Result_26) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word NewL_28;

            succeeded = mercury__rbtree__transform_value_4_p_0(TypeInfo_for_V_30, TypeInfo_for_K_31, HeadVar__1_1, HeadVar__2_2, L_23, &NewL_28);
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__4_4 = base;
                MR_hl_field(MR_mktag(2), base, 0) = K0_21;
                MR_hl_field(MR_mktag(2), base, 1) = V0_22;
                MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (NewL_28));
                MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (R_24));
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Box NewV_27;
            void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

            func_0(((MR_Box) (HeadVar__1_1)), V0_22, &NewV_27);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__4_4 = base;
              MR_hl_field(MR_mktag(2), base, 0) = HeadVar__2_2;
              MR_hl_field(MR_mktag(2), base, 1) = NewV_27;
              MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (L_23));
              MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (R_24));
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word NewR_29;

            succeeded = mercury__rbtree__transform_value_4_p_0(TypeInfo_for_V_30, TypeInfo_for_K_31, HeadVar__1_1, HeadVar__2_2, R_24, &NewR_29);
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__4_4 = base;
                MR_hl_field(MR_mktag(2), base, 0) = K0_21;
                MR_hl_field(MR_mktag(2), base, 1) = V0_22;
                MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (L_23));
                MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (NewR_29));
              }
              succeeded = MR_TRUE;
            }
          }
          break;
      }
    }
    else
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Box K0_10 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));
      MR_Box V0_11 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1));
      MR_Word L_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word R_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word Result_15;

      mercury__builtin__compare_3_p_0(TypeInfo_for_K_31, &Result_15, HeadVar__2_2, K0_10);
      switch (Result_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word NewL_17;

            succeeded = mercury__rbtree__transform_value_4_p_0(TypeInfo_for_V_30, TypeInfo_for_K_31, HeadVar__1_1, HeadVar__2_2, L_12, &NewL_17);
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__4_4 = base;
                MR_hl_field(MR_mktag(1), base, 0) = K0_10;
                MR_hl_field(MR_mktag(1), base, 1) = V0_11;
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (NewL_17));
                MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (R_13));
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Box NewV_16;
            void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));

            func_1(((MR_Box) (HeadVar__1_1)), V0_11, &NewV_16);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__4_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = HeadVar__2_2;
              MR_hl_field(MR_mktag(1), base, 1) = NewV_16;
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (L_12));
              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (R_13));
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word NewR_18;

            succeeded = mercury__rbtree__transform_value_4_p_0(TypeInfo_for_V_30, TypeInfo_for_K_31, HeadVar__1_1, HeadVar__2_2, R_13, &NewR_18);
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__4_4 = base;
                MR_hl_field(MR_mktag(1), base, 0) = K0_10;
                MR_hl_field(MR_mktag(1), base, 1) = V0_11;
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (L_12));
                MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (NewR_18));
              }
              succeeded = MR_TRUE;
            }
          }
          break;
      }
    }
    else
      succeeded = MR_FALSE;
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__rbtree__update_4_p_0(
  MR_Word TypeInfo_for_K_28,
  MR_Word TypeInfo_for_V_29,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 2))
    {
      MR_Box K0_20 = (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0));
      MR_Box V0_21 = (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1));
      MR_Word L_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word R_23 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word Result_25;

      mercury__builtin__compare_3_p_0(TypeInfo_for_K_28, &Result_25, HeadVar__1_1, K0_20);
      switch (Result_25) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word NewL_26;

            succeeded = mercury__rbtree__update_4_p_0(TypeInfo_for_K_28, TypeInfo_for_V_29, HeadVar__1_1, HeadVar__2_2, L_22, &NewL_26);
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__4_4 = base;
                MR_hl_field(MR_mktag(2), base, 0) = K0_20;
                MR_hl_field(MR_mktag(2), base, 1) = V0_21;
                MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (NewL_26));
                MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (R_23));
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 0:
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__4_4 = base;
              MR_hl_field(MR_mktag(2), base, 0) = HeadVar__1_1;
              MR_hl_field(MR_mktag(2), base, 1) = HeadVar__2_2;
              MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (L_22));
              MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (R_23));
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word NewR_27;

            succeeded = mercury__rbtree__update_4_p_0(TypeInfo_for_K_28, TypeInfo_for_V_29, HeadVar__1_1, HeadVar__2_2, R_23, &NewR_27);
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__4_4 = base;
                MR_hl_field(MR_mktag(2), base, 0) = K0_20;
                MR_hl_field(MR_mktag(2), base, 1) = V0_21;
                MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (L_22));
                MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (NewR_27));
              }
              succeeded = MR_TRUE;
            }
          }
          break;
      }
    }
    else
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
    {
      MR_Box K0_10 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));
      MR_Box V0_11 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1));
      MR_Word L_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word R_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 3))));
      MR_Word Result_15;

      mercury__builtin__compare_3_p_0(TypeInfo_for_K_28, &Result_15, HeadVar__1_1, K0_10);
      switch (Result_15) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word NewL_16;

            succeeded = mercury__rbtree__update_4_p_0(TypeInfo_for_K_28, TypeInfo_for_V_29, HeadVar__1_1, HeadVar__2_2, L_12, &NewL_16);
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__4_4 = base;
                MR_hl_field(MR_mktag(1), base, 0) = K0_10;
                MR_hl_field(MR_mktag(1), base, 1) = V0_11;
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (NewL_16));
                MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (R_13));
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 0:
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__4_4 = base;
              MR_hl_field(MR_mktag(1), base, 0) = HeadVar__1_1;
              MR_hl_field(MR_mktag(1), base, 1) = HeadVar__2_2;
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (L_12));
              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (R_13));
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word NewR_17;

            succeeded = mercury__rbtree__update_4_p_0(TypeInfo_for_K_28, TypeInfo_for_V_29, HeadVar__1_1, HeadVar__2_2, R_13, &NewR_17);
            if (succeeded)
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__4_4 = base;
                MR_hl_field(MR_mktag(1), base, 0) = K0_10;
                MR_hl_field(MR_mktag(1), base, 1) = V0_11;
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (L_12));
                MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (NewR_17));
              }
              succeeded = MR_TRUE;
            }
          }
          break;
      }
    }
    else
      succeeded = MR_FALSE;
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__rbtree__insert_4_p_0(
  MR_Word TypeInfo_for_K_35,
  MR_Word TypeInfo_for_V_36,
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) HeadVar__3_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__4_4 = base;
            MR_hl_field(MR_mktag(2), base, 0) = HeadVar__1_1;
            MR_hl_field(MR_mktag(2), base, 1) = HeadVar__2_2;
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__require__error_1_p_0((MR_String) "rbtree.insert: root node cannot be red!");
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Tree0_24;

          succeeded = mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_p_0(TypeInfo_for_K_35, HeadVar__3_3, HeadVar__1_1, HeadVar__2_2, &Tree0_24);
          if (succeeded)
          {
            switch (MR_tag((MR_Word) Tree0_24)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  mercury__require__error_1_p_0((MR_String) "rbtree.insert: new tree is empty");
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Box K1_29 = (MR_hl_field(MR_mktag(1), Tree0_24, (MR_Integer) 0));
                  MR_Box V1_30 = (MR_hl_field(MR_mktag(1), Tree0_24, (MR_Integer) 1));
                  MR_Word L1_31 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Tree0_24, (MR_Integer) 2))));
                  MR_Word R1_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Tree0_24, (MR_Integer) 3))));

                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__4_4 = base;
                    MR_hl_field(MR_mktag(2), base, 0) = K1_29;
                    MR_hl_field(MR_mktag(2), base, 1) = V1_30;
                    MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (L1_31));
                    MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (R1_32));
                  }
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__4_4 = Tree0_24;
                break;
            }
            succeeded = MR_TRUE;
          }
        }
        break;
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_p_0(
  MR_Word TypeInfo_for_K_102,
  MR_Word HeadVar__1_1,
  MR_Box K_2,
  MR_Box V_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__4_4 = base;
            MR_hl_field(MR_mktag(1), base, 0) = K_2;
            MR_hl_field(MR_mktag(1), base, 1) = V_3;
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K0_9 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
          MR_Box V0_10 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1));
          MR_Word L0_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
          MR_Word R0_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))));
          MR_Word Result_16;

          mercury__builtin__compare_3_p_0(TypeInfo_for_K_102, &Result_16, K_2, K0_9);
          switch (Result_16) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              {
                MR_Word NewL_17;

                succeeded = mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_p_0(TypeInfo_for_K_102, L0_11, K_2, V_3, &NewL_17);
                if (succeeded)
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__4_4 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = K0_9;
                    MR_hl_field(MR_mktag(1), base, 1) = V0_10;
                    MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (NewL_17));
                    MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (R0_12));
                  }
                  succeeded = MR_TRUE;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word NewR_18;

                succeeded = mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_p_0(TypeInfo_for_K_102, R0_12, K_2, V_3, &NewR_18);
                if (succeeded)
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__4_4 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = K0_9;
                    MR_hl_field(MR_mktag(1), base, 1) = V0_10;
                    MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (L0_11));
                    MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (NewR_18));
                  }
                  succeeded = MR_TRUE;
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K0_19 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0));
          MR_Box V0_20 = (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1));
          MR_Word L0_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2))));
          MR_Word R0_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 3))));
          MR_Box LK_26;
          MR_Box LV_27;
          MR_Word LL_28;
          MR_Word LR_29;
          MR_Box RK_30;
          MR_Box RV_31;
          MR_Word RL_32;
          MR_Word RR_33;

          succeeded = ((MR_tag((MR_Word) L0_21)) == (MR_Integer) 1);
          if (succeeded)
          {
            LK_26 = (MR_hl_field(MR_mktag(1), L0_21, (MR_Integer) 0));
            LV_27 = (MR_hl_field(MR_mktag(1), L0_21, (MR_Integer) 1));
            LL_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), L0_21, (MR_Integer) 2))));
            LR_29 = ((MR_Word) ((MR_hl_field(MR_mktag(1), L0_21, (MR_Integer) 3))));
            succeeded = ((MR_tag((MR_Word) R0_22)) == (MR_Integer) 1);
            if (succeeded)
            {
              RK_30 = (MR_hl_field(MR_mktag(1), R0_22, (MR_Integer) 0));
              RV_31 = (MR_hl_field(MR_mktag(1), R0_22, (MR_Integer) 1));
              RL_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), R0_22, (MR_Integer) 2))));
              RR_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), R0_22, (MR_Integer) 3))));
            }
          }
          if (succeeded)
          {
            MR_Word L_34;
            MR_Word R_35;
            MR_Word Tree0_36;
            MR_Word next_value_of_HeadVar__1_1;

            {
              L_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), L_34, 0) = LK_26;
              MR_hl_field(MR_mktag(2), L_34, 1) = LV_27;
              MR_hl_field(MR_mktag(2), L_34, 2) = ((MR_Box) (LL_28));
              MR_hl_field(MR_mktag(2), L_34, 3) = ((MR_Box) (LR_29));
            }
            {
              R_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(2), R_35, 0) = RK_30;
              MR_hl_field(MR_mktag(2), R_35, 1) = RV_31;
              MR_hl_field(MR_mktag(2), R_35, 2) = ((MR_Box) (RL_32));
              MR_hl_field(MR_mktag(2), R_35, 3) = ((MR_Box) (RR_33));
            }
            {
              Tree0_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Tree0_36, 0) = K0_19;
              MR_hl_field(MR_mktag(1), Tree0_36, 1) = V0_20;
              MR_hl_field(MR_mktag(1), Tree0_36, 2) = ((MR_Box) (L_34));
              MR_hl_field(MR_mktag(1), Tree0_36, 3) = ((MR_Box) (R_35));
            }
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__1_1 = Tree0_36;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
          else
          {
            MR_Word Result_37;

            mercury__builtin__compare_3_p_0(TypeInfo_for_K_102, &Result_37, K_2, K0_19);
            switch (Result_37) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word NewL_38;
                  MR_Box LK_60;
                  MR_Box LV_61;
                  MR_Word LL_62;
                  MR_Word LR_63;

                  succeeded = mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_p_0(TypeInfo_for_K_102, L0_21, K_2, V_3, &NewL_38);
                  if (succeeded)
                  {
                    succeeded = ((MR_tag((MR_Word) NewL_38)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      LK_60 = (MR_hl_field(MR_mktag(1), NewL_38, (MR_Integer) 0));
                      LV_61 = (MR_hl_field(MR_mktag(1), NewL_38, (MR_Integer) 1));
                      LL_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NewL_38, (MR_Integer) 2))));
                      LR_63 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NewL_38, (MR_Integer) 3))));
                      succeeded = ((MR_tag((MR_Word) LL_62)) == (MR_Integer) 1);
                      if (succeeded)
                      {
                        {
                          MR_Word TreeR_43;

                          {
                            TreeR_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), TreeR_43, 0) = K0_19;
                            MR_hl_field(MR_mktag(1), TreeR_43, 1) = V0_20;
                            MR_hl_field(MR_mktag(1), TreeR_43, 2) = ((MR_Box) (LR_63));
                            MR_hl_field(MR_mktag(1), TreeR_43, 3) = ((MR_Box) (R0_22));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            *HeadVar__4_4 = base;
                            MR_hl_field(MR_mktag(2), base, 0) = LK_60;
                            MR_hl_field(MR_mktag(2), base, 1) = LV_61;
                            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (LL_62));
                            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (TreeR_43));
                          }
                        }
                      }
                      else
                      {
                        MR_Box LRK_44;
                        MR_Box LRV_45;
                        MR_Word LRL_46;
                        MR_Word LRR_47;

                        succeeded = ((MR_tag((MR_Word) LR_63)) == (MR_Integer) 1);
                        if (succeeded)
                        {
                          LRK_44 = (MR_hl_field(MR_mktag(1), LR_63, (MR_Integer) 0));
                          LRV_45 = (MR_hl_field(MR_mktag(1), LR_63, (MR_Integer) 1));
                          LRL_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LR_63, (MR_Integer) 2))));
                          LRR_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LR_63, (MR_Integer) 3))));
                          {
                            MR_Word TreeL_48;
                            MR_Word TreeR_58;

                            {
                              TreeL_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), TreeL_48, 0) = LK_60;
                              MR_hl_field(MR_mktag(1), TreeL_48, 1) = LV_61;
                              MR_hl_field(MR_mktag(1), TreeL_48, 2) = ((MR_Box) (LL_62));
                              MR_hl_field(MR_mktag(1), TreeL_48, 3) = ((MR_Box) (LRL_46));
                            }
                            {
                              TreeR_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), TreeR_58, 0) = K0_19;
                              MR_hl_field(MR_mktag(1), TreeR_58, 1) = V0_20;
                              MR_hl_field(MR_mktag(1), TreeR_58, 2) = ((MR_Box) (LRR_47));
                              MR_hl_field(MR_mktag(1), TreeR_58, 3) = ((MR_Box) (R0_22));
                            }
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                              *HeadVar__4_4 = base;
                              MR_hl_field(MR_mktag(2), base, 0) = LRK_44;
                              MR_hl_field(MR_mktag(2), base, 1) = LRV_45;
                              MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (TreeL_48));
                              MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (TreeR_58));
                            }
                          }
                        }
                        else
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            *HeadVar__4_4 = base;
                            MR_hl_field(MR_mktag(2), base, 0) = K0_19;
                            MR_hl_field(MR_mktag(2), base, 1) = V0_20;
                            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (NewL_38));
                            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (R0_22));
                          }
                      }
                    }
                    else
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        *HeadVar__4_4 = base;
                        MR_hl_field(MR_mktag(2), base, 0) = K0_19;
                        MR_hl_field(MR_mktag(2), base, 1) = V0_20;
                        MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (NewL_38));
                        MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (R0_22));
                      }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word NewR_49;
                  MR_Box RK_74;
                  MR_Box RV_75;
                  MR_Word RL_76;
                  MR_Word RR_77;

                  succeeded = mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_p_0(TypeInfo_for_K_102, R0_22, K_2, V_3, &NewR_49);
                  if (succeeded)
                  {
                    succeeded = ((MR_tag((MR_Word) NewR_49)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      RK_74 = (MR_hl_field(MR_mktag(1), NewR_49, (MR_Integer) 0));
                      RV_75 = (MR_hl_field(MR_mktag(1), NewR_49, (MR_Integer) 1));
                      RL_76 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NewR_49, (MR_Integer) 2))));
                      RR_77 = ((MR_Word) ((MR_hl_field(MR_mktag(1), NewR_49, (MR_Integer) 3))));
                      {
                        MR_Box RLK_50;
                        MR_Box RLV_51;
                        MR_Word RLL_52;
                        MR_Word RLR_53;

                        succeeded = ((MR_tag((MR_Word) RL_76)) == (MR_Integer) 1);
                        if (succeeded)
                        {
                          RLK_50 = (MR_hl_field(MR_mktag(1), RL_76, (MR_Integer) 0));
                          RLV_51 = (MR_hl_field(MR_mktag(1), RL_76, (MR_Integer) 1));
                          RLL_52 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RL_76, (MR_Integer) 2))));
                          RLR_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RL_76, (MR_Integer) 3))));
                          {
                            MR_Word TreeR_68;
                            MR_Word TreeL_69;

                            {
                              TreeL_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), TreeL_69, 0) = K0_19;
                              MR_hl_field(MR_mktag(1), TreeL_69, 1) = V0_20;
                              MR_hl_field(MR_mktag(1), TreeL_69, 2) = ((MR_Box) (L0_21));
                              MR_hl_field(MR_mktag(1), TreeL_69, 3) = ((MR_Box) (RLL_52));
                            }
                            {
                              TreeR_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), TreeR_68, 0) = RK_74;
                              MR_hl_field(MR_mktag(1), TreeR_68, 1) = RV_75;
                              MR_hl_field(MR_mktag(1), TreeR_68, 2) = ((MR_Box) (RLR_53));
                              MR_hl_field(MR_mktag(1), TreeR_68, 3) = ((MR_Box) (RR_77));
                            }
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                              *HeadVar__4_4 = base;
                              MR_hl_field(MR_mktag(2), base, 0) = RLK_50;
                              MR_hl_field(MR_mktag(2), base, 1) = RLV_51;
                              MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (TreeL_69));
                              MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (TreeR_68));
                            }
                          }
                        }
                        else
                        {
                          succeeded = ((MR_tag((MR_Word) RR_77)) == (MR_Integer) 1);
                          if (succeeded)
                          {
                            {
                              MR_Word TreeL_70;

                              {
                                TreeL_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                                MR_hl_field(MR_mktag(1), TreeL_70, 0) = K0_19;
                                MR_hl_field(MR_mktag(1), TreeL_70, 1) = V0_20;
                                MR_hl_field(MR_mktag(1), TreeL_70, 2) = ((MR_Box) (L0_21));
                                MR_hl_field(MR_mktag(1), TreeL_70, 3) = ((MR_Box) (RL_76));
                              }
                              {
                                MR_Word base;
                                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                                *HeadVar__4_4 = base;
                                MR_hl_field(MR_mktag(2), base, 0) = RK_74;
                                MR_hl_field(MR_mktag(2), base, 1) = RV_75;
                                MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (TreeL_70));
                                MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (RR_77));
                              }
                            }
                          }
                          else
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                              *HeadVar__4_4 = base;
                              MR_hl_field(MR_mktag(2), base, 0) = K0_19;
                              MR_hl_field(MR_mktag(2), base, 1) = V0_20;
                              MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (L0_21));
                              MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (NewR_49));
                            }
                        }
                      }
                    }
                    else
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        *HeadVar__4_4 = base;
                        MR_hl_field(MR_mktag(2), base, 0) = K0_19;
                        MR_hl_field(MR_mktag(2), base, 1) = V0_20;
                        MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (L0_21));
                        MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (NewR_49));
                      }
                    succeeded = MR_TRUE;
                  }
                }
                break;
            }
          }
        }
        break;
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__rbtree__is_empty_1_p_0(
  MR_Word TypeInfo_for_K_3,
  MR_Word TypeInfo_for_V_4,
  MR_Word Tree_2)
{
  {
    MR_bool succeeded = (Tree_2 == (MR_Word) ((MR_Unsigned) 0U));

    return succeeded;
  }
}

MR_Word MR_CALL 
mercury__rbtree__singleton_2_f_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Box K_4,
  MR_Box V_5)
{
  {
    MR_Word HeadVar__3_3;

    {
      HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), HeadVar__3_3, 0) = K_4;
      MR_hl_field(MR_mktag(2), HeadVar__3_3, 1) = V_5;
      MR_hl_field(MR_mktag(2), HeadVar__3_3, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(2), HeadVar__3_3, 3) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    return HeadVar__3_3;
  }
}

void MR_CALL 
mercury__rbtree__init_1_p_0(
  MR_Word TypeInfo_for_K_2,
  MR_Word TypeInfo_for_V_3,
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Word) ((MR_Unsigned) 0U);
}

MR_Word MR_CALL 
mercury__rbtree__init_0_f_0(
  MR_Word TypeInfo_for_K_3,
  MR_Word TypeInfo_for_V_4)
{
  {
    return (MR_Word) ((MR_Unsigned) 0U);
  }
}

static MR_bool MR_CALL 
mercury__rbtree____Unify____rbtree_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__rbtree____Unify____rbtree_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__rbtree____Compare____rbtree_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__rbtree____Compare____rbtree_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__rbtree__init(void)
{
}

void mercury__rbtree__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__rbtree__rbtree__type_ctor_info_rbtree_2);
}

void mercury__rbtree__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__rbtree__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module rbtree.
