/*
** Automatically generated from `rbtree.m'
** by the Mercury compiler,
** version rotd-2026-08-31
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

static void MR_CALL 
mercury__rbtree__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_95_95_49_3_p_0(
  MR_Word Var_27,
  MR_Word Tree0_5,
  MR_Word * AddrOfTree_30);

static void MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_0(
  MR_Word Var_27,
  MR_Word Tree0_5,
  MR_Word * Tree_6);

static void MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_50_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_0(
  MR_Word Var_28,
  MR_Word Tree_6,
  MR_Box STATE_VARIABLE_AccA_0_12,
  MR_Box * STATE_VARIABLE_AccA_13);

static void MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_0(
  MR_Word Var_28,
  MR_Word Tree_6,
  MR_Box STATE_VARIABLE_AccA_0_12,
  MR_Box * STATE_VARIABLE_AccA_13);

static void MR_CALL 
mercury__rbtree__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_105_110_116_111_95_110_111_100_101_95_95_91_50_93_95_48_95_95_49_4_p_0(
  MR_Word TypeInfo_for_K_145,
  MR_Box K_5,
  MR_Box V_6,
  MR_Word Tree0_7,
  MR_Word * AddrOfTree_149);

static void MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_105_110_116_111_95_110_111_100_101_95_95_91_50_93_95_48_4_p_0(
  MR_Word TypeInfo_for_K_145,
  MR_Box K_5,
  MR_Box V_6,
  MR_Word Tree0_7,
  MR_Word * Tree_8);

static void MR_CALL 
mercury__rbtree__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_105_110_95_110_111_100_101_95_95_91_50_93_95_49_95_95_49_4_p_1(
  MR_Word TypeInfo_for_K_107,
  MR_Box K_5,
  MR_Box V_6,
  MR_Word Tree0_7,
  MR_Word * AddrOfTree_111);

static void MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_105_110_95_110_111_100_101_95_95_91_50_93_95_49_4_p_1(
  MR_Word TypeInfo_for_K_107,
  MR_Box K_5,
  MR_Box V_6,
  MR_Word Tree0_7,
  MR_Word * Tree_8);

static MR_bool MR_CALL 
mercury__rbtree__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_105_110_116_111_95_110_111_100_101_95_95_91_50_93_95_48_95_95_49_4_p_0(
  MR_Word TypeInfo_for_K_105,
  MR_Box K_5,
  MR_Box V_6,
  MR_Word Tree0_7,
  MR_Word * AddrOfTree_109);

static MR_bool MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_105_110_116_111_95_110_111_100_101_95_95_91_50_93_95_48_4_p_0(
  MR_Word TypeInfo_for_K_105,
  MR_Box K_5,
  MR_Box V_6,
  MR_Word Tree0_7,
  MR_Word * Tree_8);

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

static /* final */ const MR_Box mercury__rbtree_scalar_common_3[1][5];




static /* final */ const MR_Box mercury__rbtree_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__rbtree_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__rbtree_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__rbtree_scalar_common_3[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__rbtree_scalar_common_2[0])),
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

static const MR_DuFunctorDescPtr mercury__rbtree__rbtree__du_stag_ordered_rbtree_2_0[1] = { &mercury__rbtree__rbtree__du_functor_desc_rbtree_2_0 };

static const MR_DuFunctorDescPtr mercury__rbtree__rbtree__du_stag_ordered_rbtree_2_1[1] = { &mercury__rbtree__rbtree__du_functor_desc_rbtree_2_1 };

static const MR_DuFunctorDescPtr mercury__rbtree__rbtree__du_stag_ordered_rbtree_2_2[1] = { &mercury__rbtree__rbtree__du_functor_desc_rbtree_2_2 };

static const MR_DuPtagLayout mercury__rbtree__rbtree__du_ptag_ordered_rbtree_2[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__rbtree__rbtree__du_stag_ordered_rbtree_2_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__rbtree__rbtree__du_stag_ordered_rbtree_2_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__rbtree__rbtree__du_stag_ordered_rbtree_2_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__rbtree____Unify____rbtree_2_0_10001)),
  ((MR_Box) (mercury__rbtree____Compare____rbtree_2_0_10001)),
  (MR_String) "rbtree",
  (MR_String) "rbtree",
  { mercury__rbtree__rbtree__du_name_ordered_rbtree_2 },
  { mercury__rbtree__rbtree__du_ptag_ordered_rbtree_2 },
  (MR_Integer) 3,
  UINT16_C(12),
  mercury__rbtree__rbtree__functor_number_map_rbtree_2,

};

void MR_CALL 
mercury__rbtree____Compare____rbtree_2_0(
  MR_Word TypeInfo_for_K_28,
  MR_Word TypeInfo_for_V_29,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_26 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_27 = (MR_Integer) (HeadVar__3_3);

    // setup for model_det tailcalls optimized into a loop
    ;
    succeeded = (CastX_26 == CastY_27);
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
            case (MR_Integer) 2:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 1:
              {
                MR_Box ArgX1_4 = (MR_hl_field(1, HeadVar__2_2, 0));
                MR_Box ArgY1_5 = (MR_hl_field(1, HeadVar__3_3, 0));
                MR_Box ArgX2_7 = (MR_hl_field(1, HeadVar__2_2, 1));
                MR_Box ArgY2_8 = (MR_hl_field(1, HeadVar__3_3, 1));
                MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
                MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 2))));
                MR_Word ArgX4_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 3))));
                MR_Word ArgY4_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, 3))));
                MR_Word SubResult1_6;

                mercury__builtin__compare_3_p_0(TypeInfo_for_K_28, &SubResult1_6, ArgX1_4, ArgY1_5);
                succeeded = (SubResult1_6 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_6;
                else
                {
                  MR_Word SubResult2_9;

                  mercury__builtin__compare_3_p_0(TypeInfo_for_V_29, &SubResult2_9, ArgX2_7, ArgY2_8);
                  succeeded = (SubResult2_9 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_9;
                  else
                  {
                    MR_Word SubResult3_12;

                    mercury__rbtree____Compare____rbtree_2_0(TypeInfo_for_K_28, TypeInfo_for_V_29, &SubResult3_12, ArgX3_10, ArgY3_11);
                    succeeded = (SubResult3_12 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult3_12;
                    else
                    {
                      MR_Word next_value_of_HeadVar__2_2 = ArgX4_13;
                      MR_Word next_value_of_HeadVar__3_3 = ArgY4_14;

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
          break;
        case (MR_Integer) 2:
          switch (MR_tag((MR_Word) HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 1:
              *HeadVar__1_1 = (MR_Integer) 2;
              break;
            case (MR_Integer) 2:
              {
                MR_Box ArgX1_15 = (MR_hl_field(2, HeadVar__2_2, 0));
                MR_Box ArgY1_16 = (MR_hl_field(2, HeadVar__3_3, 0));
                MR_Box ArgX2_18 = (MR_hl_field(2, HeadVar__2_2, 1));
                MR_Box ArgY2_19 = (MR_hl_field(2, HeadVar__3_3, 1));
                MR_Word ArgX3_21 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 2))));
                MR_Word ArgY3_22 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 2))));
                MR_Word ArgX4_24 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 3))));
                MR_Word ArgY4_25 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 3))));
                MR_Word SubResult1_17;

                mercury__builtin__compare_3_p_0(TypeInfo_for_K_28, &SubResult1_17, ArgX1_15, ArgY1_16);
                succeeded = (SubResult1_17 != (MR_Integer) 0);
                if (succeeded)
                  *HeadVar__1_1 = SubResult1_17;
                else
                {
                  MR_Word SubResult2_20;

                  mercury__builtin__compare_3_p_0(TypeInfo_for_V_29, &SubResult2_20, ArgX2_18, ArgY2_19);
                  succeeded = (SubResult2_20 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult2_20;
                  else
                  {
                    MR_Word SubResult3_23;

                    mercury__rbtree____Compare____rbtree_2_0(TypeInfo_for_K_28, TypeInfo_for_V_29, &SubResult3_23, ArgX3_21, ArgY3_22);
                    succeeded = (SubResult3_23 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult3_23;
                    else
                    {
                      MR_Word next_value_of_HeadVar__2_2 = ArgX4_24;
                      MR_Word next_value_of_HeadVar__3_3 = ArgY4_25;

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
            MR_Integer CastX_19 = (MR_Integer) (HeadVar__1_1);
            MR_Integer CastY_20 = (MR_Integer) (HeadVar__2_2);

            succeeded = (CastY_20 == CastX_19);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Box ArgX1_3 = (MR_hl_field(1, HeadVar__1_1, 0));
            MR_Box ArgY1_4;
            MR_Box ArgX2_5 = (MR_hl_field(1, HeadVar__1_1, 1));
            MR_Box ArgY2_6;
            MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 2))));
            MR_Word ArgY3_8;
            MR_Word ArgX4_9 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 3))));
            MR_Word ArgY4_10;
            MR_Word next_value_of_HeadVar__1_1;
            MR_Word next_value_of_HeadVar__2_2;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_4 = (MR_hl_field(1, HeadVar__2_2, 0));
              ArgY2_6 = (MR_hl_field(1, HeadVar__2_2, 1));
              ArgY3_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 2))));
              ArgY4_10 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 3))));
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_23, ArgX1_3, ArgY1_4);
              if (succeeded)
              {
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_V_24, ArgX2_5, ArgY2_6);
                if (succeeded)
                {
                  succeeded = mercury__rbtree____Unify____rbtree_2_0(TypeInfo_for_K_23, TypeInfo_for_V_24, ArgX3_7, ArgY3_8);
                  if (succeeded)
                  {
                    // direct tailcall eliminated
                    ;
                    next_value_of_HeadVar__1_1 = ArgX4_9;
                    next_value_of_HeadVar__2_2 = ArgY4_10;
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
            MR_Box ArgX1_11 = (MR_hl_field(2, HeadVar__1_1, 0));
            MR_Box ArgY1_12;
            MR_Box ArgX2_13 = (MR_hl_field(2, HeadVar__1_1, 1));
            MR_Box ArgY2_14;
            MR_Word ArgX3_15 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 2))));
            MR_Word ArgY3_16;
            MR_Word ArgX4_17 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 3))));
            MR_Word ArgY4_18;
            MR_Word next_value_of_HeadVar__1_1;
            MR_Word next_value_of_HeadVar__2_2;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_12 = (MR_hl_field(2, HeadVar__2_2, 0));
              ArgY2_14 = (MR_hl_field(2, HeadVar__2_2, 1));
              ArgY3_16 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 2))));
              ArgY4_18 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 3))));
              succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_K_23, ArgX1_11, ArgY1_12);
              if (succeeded)
              {
                succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_V_24, ArgX2_13, ArgY2_14);
                if (succeeded)
                {
                  succeeded = mercury__rbtree____Unify____rbtree_2_0(TypeInfo_for_K_23, TypeInfo_for_V_24, ArgX3_15, ArgY3_16);
                  if (succeeded)
                  {
                    // direct tailcall eliminated
                    ;
                    next_value_of_HeadVar__1_1 = ArgX4_17;
                    next_value_of_HeadVar__2_2 = ArgY4_18;
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

MR_bool MR_CALL 
mercury__rbtree__LCMC__pred__map_values__1_3_p_1(
  MR_Word TypeInfo_for_K_21,
  MR_Word TypeInfo_for_V1_22,
  MR_Word TypeInfo_for_V2_23,
  MR_Word Pred_4,
  MR_Word Tree0_5,
  MR_Word * AddrOfTree_26)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Tree0_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *AddrOfTree_26 = (MR_Word) ((MR_Unsigned) 0U);
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K0_7 = (MR_hl_field(1, Tree0_5, 0));
          MR_Box V0_8 = (MR_hl_field(1, Tree0_5, 1));
          MR_Word L0_9 = ((MR_Word) ((MR_hl_field(1, Tree0_5, 2))));
          MR_Word R0_10 = ((MR_Word) ((MR_hl_field(1, Tree0_5, 3))));
          MR_Box V_11;
          MR_Word L_12;
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_4, 1))));
          MR_Word * AddrR_25;
          MR_Word Tree_28;
          MR_Word next_value_of_Tree0_5;
          MR_Word * next_value_of_AddrOfTree_26;

          succeeded = func_1(((MR_Box) (Pred_4)), K0_7, V0_8, &V_11);
          if (succeeded)
          {
            succeeded = mercury__rbtree__map_values_3_p_1(TypeInfo_for_K_21, TypeInfo_for_V1_22, TypeInfo_for_V2_23, Pred_4, L0_9, &L_12);
            if (succeeded)
            {
              {
                Tree_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Tree_28, 0) = K0_7;
                MR_hl_field(1, Tree_28, 1) = V_11;
                MR_hl_field(1, Tree_28, 2) = ((MR_Box) (L_12));
                MR_hl_field(1, Tree_28, 3) = NULL;
              }
              AddrR_25 = (MR_Word *) (&(MR_hl_field(1, Tree_28, 3)));
              *AddrOfTree_26 = Tree_28;
              // direct tailcall eliminated
              ;
              next_value_of_Tree0_5 = R0_10;
              next_value_of_AddrOfTree_26 = AddrR_25;
              Tree0_5 = next_value_of_Tree0_5;
              AddrOfTree_26 = next_value_of_AddrOfTree_26;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K0_14 = (MR_hl_field(2, Tree0_5, 0));
          MR_Box V0_15 = (MR_hl_field(2, Tree0_5, 1));
          MR_Word L0_16 = ((MR_Word) ((MR_hl_field(2, Tree0_5, 2))));
          MR_Word R0_17 = ((MR_Word) ((MR_hl_field(2, Tree0_5, 3))));
          MR_Box V_18;
          MR_Word L_19;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_4, 1))));
          MR_Word Tree_6;
          MR_Word * AddrR_24;
          MR_Word next_value_of_Tree0_5;
          MR_Word * next_value_of_AddrOfTree_26;

          succeeded = func_0(((MR_Box) (Pred_4)), K0_14, V0_15, &V_18);
          if (succeeded)
          {
            succeeded = mercury__rbtree__map_values_3_p_1(TypeInfo_for_K_21, TypeInfo_for_V1_22, TypeInfo_for_V2_23, Pred_4, L0_16, &L_19);
            if (succeeded)
            {
              {
                Tree_6 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(2, Tree_6, 0) = K0_14;
                MR_hl_field(2, Tree_6, 1) = V_18;
                MR_hl_field(2, Tree_6, 2) = ((MR_Box) (L_19));
                MR_hl_field(2, Tree_6, 3) = NULL;
              }
              AddrR_24 = (MR_Word *) (&(MR_hl_field(2, Tree_6, 3)));
              *AddrOfTree_26 = Tree_6;
              // direct tailcall eliminated
              ;
              next_value_of_Tree0_5 = R0_17;
              next_value_of_AddrOfTree_26 = AddrR_24;
              Tree0_5 = next_value_of_Tree0_5;
              AddrOfTree_26 = next_value_of_AddrOfTree_26;
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
mercury__rbtree__map_values_3_p_1(
  MR_Word TypeInfo_for_K_21,
  MR_Word TypeInfo_for_V1_22,
  MR_Word TypeInfo_for_V2_23,
  MR_Word Pred_4,
  MR_Word Tree0_5,
  MR_Word * Tree_6)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Tree0_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *Tree_6 = (MR_Word) ((MR_Unsigned) 0U);
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Box K0_7 = (MR_hl_field(1, Tree0_5, 0));
        MR_Box V0_8 = (MR_hl_field(1, Tree0_5, 1));
        MR_Word L0_9 = ((MR_Word) ((MR_hl_field(1, Tree0_5, 2))));
        MR_Word R0_10 = ((MR_Word) ((MR_hl_field(1, Tree0_5, 3))));
        MR_Box V_11;
        MR_Word L_12;
        MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_4, 1))));
        MR_Word * AddrR_25;

        succeeded = func_1(((MR_Box) (Pred_4)), K0_7, V0_8, &V_11);
        if (succeeded)
        {
          succeeded = mercury__rbtree__map_values_3_p_1(TypeInfo_for_K_21, TypeInfo_for_V1_22, TypeInfo_for_V2_23, Pred_4, L0_9, &L_12);
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Tree_6 = base;
              MR_hl_field(1, base, 0) = K0_7;
              MR_hl_field(1, base, 1) = V_11;
              MR_hl_field(1, base, 2) = ((MR_Box) (L_12));
              MR_hl_field(1, base, 3) = NULL;
            }
            AddrR_25 = (MR_Word *) (&(MR_hl_field(1, *Tree_6, 3)));
            succeeded = mercury__rbtree__LCMC__pred__map_values__1_3_p_1(TypeInfo_for_K_21, TypeInfo_for_V1_22, TypeInfo_for_V2_23, Pred_4, R0_10, AddrR_25);
          }
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box K0_14 = (MR_hl_field(2, Tree0_5, 0));
        MR_Box V0_15 = (MR_hl_field(2, Tree0_5, 1));
        MR_Word L0_16 = ((MR_Word) ((MR_hl_field(2, Tree0_5, 2))));
        MR_Word R0_17 = ((MR_Word) ((MR_hl_field(2, Tree0_5, 3))));
        MR_Box V_18;
        MR_Word L_19;
        MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_4, 1))));
        MR_Word * AddrR_24;

        succeeded = func_0(((MR_Box) (Pred_4)), K0_14, V0_15, &V_18);
        if (succeeded)
        {
          succeeded = mercury__rbtree__map_values_3_p_1(TypeInfo_for_K_21, TypeInfo_for_V1_22, TypeInfo_for_V2_23, Pred_4, L0_16, &L_19);
          if (succeeded)
          {
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              *Tree_6 = base;
              MR_hl_field(2, base, 0) = K0_14;
              MR_hl_field(2, base, 1) = V_18;
              MR_hl_field(2, base, 2) = ((MR_Box) (L_19));
              MR_hl_field(2, base, 3) = NULL;
            }
            AddrR_24 = (MR_Word *) (&(MR_hl_field(2, *Tree_6, 3)));
            succeeded = mercury__rbtree__LCMC__pred__map_values__1_3_p_1(TypeInfo_for_K_21, TypeInfo_for_V1_22, TypeInfo_for_V2_23, Pred_4, R0_17, AddrR_24);
          }
        }
      }
      break;
  }
  return succeeded;
}

void MR_CALL 
mercury__rbtree__LCMC__pred__map_values__1_3_p_0(
  MR_Word TypeInfo_for_K_21,
  MR_Word TypeInfo_for_V1_22,
  MR_Word TypeInfo_for_V2_23,
  MR_Word Pred_4,
  MR_Word Tree0_5,
  MR_Word * AddrOfTree_26)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Tree0_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *AddrOfTree_26 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        {
          MR_Box K0_7 = (MR_hl_field(1, Tree0_5, 0));
          MR_Box V0_8 = (MR_hl_field(1, Tree0_5, 1));
          MR_Word L0_9 = ((MR_Word) ((MR_hl_field(1, Tree0_5, 2))));
          MR_Word R0_10 = ((MR_Word) ((MR_hl_field(1, Tree0_5, 3))));
          MR_Box V_11;
          MR_Word L_12;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_4, 1))));
          MR_Word * AddrR_25;
          MR_Word Tree_28;
          MR_Word next_value_of_Tree0_5;
          MR_Word * next_value_of_AddrOfTree_26;

          func_1(((MR_Box) (Pred_4)), K0_7, V0_8, &V_11);
          mercury__rbtree__map_values_3_p_0(TypeInfo_for_K_21, TypeInfo_for_V1_22, TypeInfo_for_V2_23, Pred_4, L0_9, &L_12);
          {
            Tree_28 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Tree_28, 0) = K0_7;
            MR_hl_field(1, Tree_28, 1) = V_11;
            MR_hl_field(1, Tree_28, 2) = ((MR_Box) (L_12));
            MR_hl_field(1, Tree_28, 3) = NULL;
          }
          AddrR_25 = (MR_Word *) (&(MR_hl_field(1, Tree_28, 3)));
          *AddrOfTree_26 = Tree_28;
          // direct tailcall eliminated
          ;
          next_value_of_Tree0_5 = R0_10;
          next_value_of_AddrOfTree_26 = AddrR_25;
          Tree0_5 = next_value_of_Tree0_5;
          AddrOfTree_26 = next_value_of_AddrOfTree_26;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K0_14 = (MR_hl_field(2, Tree0_5, 0));
          MR_Box V0_15 = (MR_hl_field(2, Tree0_5, 1));
          MR_Word L0_16 = ((MR_Word) ((MR_hl_field(2, Tree0_5, 2))));
          MR_Word R0_17 = ((MR_Word) ((MR_hl_field(2, Tree0_5, 3))));
          MR_Box V_18;
          MR_Word L_19;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_4, 1))));
          MR_Word Tree_6;
          MR_Word * AddrR_24;
          MR_Word next_value_of_Tree0_5;
          MR_Word * next_value_of_AddrOfTree_26;

          func_0(((MR_Box) (Pred_4)), K0_14, V0_15, &V_18);
          mercury__rbtree__map_values_3_p_0(TypeInfo_for_K_21, TypeInfo_for_V1_22, TypeInfo_for_V2_23, Pred_4, L0_16, &L_19);
          {
            Tree_6 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Tree_6, 0) = K0_14;
            MR_hl_field(2, Tree_6, 1) = V_18;
            MR_hl_field(2, Tree_6, 2) = ((MR_Box) (L_19));
            MR_hl_field(2, Tree_6, 3) = NULL;
          }
          AddrR_24 = (MR_Word *) (&(MR_hl_field(2, Tree_6, 3)));
          *AddrOfTree_26 = Tree_6;
          // direct tailcall eliminated
          ;
          next_value_of_Tree0_5 = R0_17;
          next_value_of_AddrOfTree_26 = AddrR_24;
          Tree0_5 = next_value_of_Tree0_5;
          AddrOfTree_26 = next_value_of_AddrOfTree_26;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__rbtree__map_values_3_p_0(
  MR_Word TypeInfo_for_K_21,
  MR_Word TypeInfo_for_V1_22,
  MR_Word TypeInfo_for_V2_23,
  MR_Word Pred_4,
  MR_Word Tree0_5,
  MR_Word * Tree_6)
{
  switch (MR_tag((MR_Word) Tree0_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Tree_6 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Box K0_7 = (MR_hl_field(1, Tree0_5, 0));
        MR_Box V0_8 = (MR_hl_field(1, Tree0_5, 1));
        MR_Word L0_9 = ((MR_Word) ((MR_hl_field(1, Tree0_5, 2))));
        MR_Word R0_10 = ((MR_Word) ((MR_hl_field(1, Tree0_5, 3))));
        MR_Box V_11;
        MR_Word L_12;
        void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_4, 1))));
        MR_Word * AddrR_25;

        func_1(((MR_Box) (Pred_4)), K0_7, V0_8, &V_11);
        mercury__rbtree__map_values_3_p_0(TypeInfo_for_K_21, TypeInfo_for_V1_22, TypeInfo_for_V2_23, Pred_4, L0_9, &L_12);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *Tree_6 = base;
          MR_hl_field(1, base, 0) = K0_7;
          MR_hl_field(1, base, 1) = V_11;
          MR_hl_field(1, base, 2) = ((MR_Box) (L_12));
          MR_hl_field(1, base, 3) = NULL;
        }
        AddrR_25 = (MR_Word *) (&(MR_hl_field(1, *Tree_6, 3)));
        mercury__rbtree__LCMC__pred__map_values__1_3_p_0(TypeInfo_for_K_21, TypeInfo_for_V1_22, TypeInfo_for_V2_23, Pred_4, R0_10, AddrR_25);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box K0_14 = (MR_hl_field(2, Tree0_5, 0));
        MR_Box V0_15 = (MR_hl_field(2, Tree0_5, 1));
        MR_Word L0_16 = ((MR_Word) ((MR_hl_field(2, Tree0_5, 2))));
        MR_Word R0_17 = ((MR_Word) ((MR_hl_field(2, Tree0_5, 3))));
        MR_Box V_18;
        MR_Word L_19;
        void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_4, 1))));
        MR_Word * AddrR_24;

        func_0(((MR_Box) (Pred_4)), K0_14, V0_15, &V_18);
        mercury__rbtree__map_values_3_p_0(TypeInfo_for_K_21, TypeInfo_for_V1_22, TypeInfo_for_V2_23, Pred_4, L0_16, &L_19);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *Tree_6 = base;
          MR_hl_field(2, base, 0) = K0_14;
          MR_hl_field(2, base, 1) = V_18;
          MR_hl_field(2, base, 2) = ((MR_Box) (L_19));
          MR_hl_field(2, base, 3) = NULL;
        }
        AddrR_24 = (MR_Word *) (&(MR_hl_field(2, *Tree_6, 3)));
        mercury__rbtree__LCMC__pred__map_values__1_3_p_0(TypeInfo_for_K_21, TypeInfo_for_V1_22, TypeInfo_for_V2_23, Pred_4, R0_17, AddrR_24);
      }
      break;
  }
}

MR_Word MR_CALL 
mercury__rbtree__map_values_2_f_0(
  MR_Word TypeInfo_for_K_17,
  MR_Word TypeInfo_for_V1_18,
  MR_Word TypeInfo_for_V2_19,
  MR_Word F_4,
  MR_Word T1_5)
{
  MR_Word T2_6;

  mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_0(F_4, T1_5, &T2_6);
  return T2_6;
}

static void MR_CALL 
mercury__rbtree__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_95_95_49_3_p_0(
  MR_Word Var_27,
  MR_Word Tree0_5,
  MR_Word * AddrOfTree_30)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Tree0_5)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *AddrOfTree_30 = (MR_Word) ((MR_Unsigned) 0U);
        break;
      case (MR_Integer) 1:
        {
          MR_Box K0_7 = (MR_hl_field(1, Tree0_5, 0));
          MR_Box V0_8 = (MR_hl_field(1, Tree0_5, 1));
          MR_Word L0_9 = ((MR_Word) ((MR_hl_field(1, Tree0_5, 2))));
          MR_Word R0_10 = ((MR_Word) ((MR_hl_field(1, Tree0_5, 3))));
          MR_Box V_11;
          MR_Word L_12;
          MR_Box MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, Var_27, 1))));
          MR_Word * AddrR_29;
          MR_Word Tree_32;
          MR_Word next_value_of_Tree0_5;
          MR_Word * next_value_of_AddrOfTree_30;

          V_11 = func_1(((MR_Box) (Var_27)), K0_7, V0_8);
          mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_0(Var_27, L0_9, &L_12);
          {
            Tree_32 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Tree_32, 0) = K0_7;
            MR_hl_field(1, Tree_32, 1) = V_11;
            MR_hl_field(1, Tree_32, 2) = ((MR_Box) (L_12));
            MR_hl_field(1, Tree_32, 3) = NULL;
          }
          AddrR_29 = (MR_Word *) (&(MR_hl_field(1, Tree_32, 3)));
          *AddrOfTree_30 = Tree_32;
          // direct tailcall eliminated
          ;
          next_value_of_Tree0_5 = R0_10;
          next_value_of_AddrOfTree_30 = AddrR_29;
          Tree0_5 = next_value_of_Tree0_5;
          AddrOfTree_30 = next_value_of_AddrOfTree_30;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K0_14 = (MR_hl_field(2, Tree0_5, 0));
          MR_Box V0_15 = (MR_hl_field(2, Tree0_5, 1));
          MR_Word L0_16 = ((MR_Word) ((MR_hl_field(2, Tree0_5, 2))));
          MR_Word R0_17 = ((MR_Word) ((MR_hl_field(2, Tree0_5, 3))));
          MR_Box V_18;
          MR_Word L_19;
          MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, Var_27, 1))));
          MR_Word Tree_6;
          MR_Word * AddrR_28;
          MR_Word next_value_of_Tree0_5;
          MR_Word * next_value_of_AddrOfTree_30;

          V_18 = func_0(((MR_Box) (Var_27)), K0_14, V0_15);
          mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_0(Var_27, L0_16, &L_19);
          {
            Tree_6 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(2, Tree_6, 0) = K0_14;
            MR_hl_field(2, Tree_6, 1) = V_18;
            MR_hl_field(2, Tree_6, 2) = ((MR_Box) (L_19));
            MR_hl_field(2, Tree_6, 3) = NULL;
          }
          AddrR_28 = (MR_Word *) (&(MR_hl_field(2, Tree_6, 3)));
          *AddrOfTree_30 = Tree_6;
          // direct tailcall eliminated
          ;
          next_value_of_Tree0_5 = R0_17;
          next_value_of_AddrOfTree_30 = AddrR_28;
          Tree0_5 = next_value_of_Tree0_5;
          AddrOfTree_30 = next_value_of_AddrOfTree_30;
          continue;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_0(
  MR_Word Var_27,
  MR_Word Tree0_5,
  MR_Word * Tree_6)
{
  switch (MR_tag((MR_Word) Tree0_5)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Tree_6 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Box K0_7 = (MR_hl_field(1, Tree0_5, 0));
        MR_Box V0_8 = (MR_hl_field(1, Tree0_5, 1));
        MR_Word L0_9 = ((MR_Word) ((MR_hl_field(1, Tree0_5, 2))));
        MR_Word R0_10 = ((MR_Word) ((MR_hl_field(1, Tree0_5, 3))));
        MR_Box V_11;
        MR_Word L_12;
        MR_Box MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, Var_27, 1))));
        MR_Word * AddrR_29;

        V_11 = func_1(((MR_Box) (Var_27)), K0_7, V0_8);
        mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_0(Var_27, L0_9, &L_12);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *Tree_6 = base;
          MR_hl_field(1, base, 0) = K0_7;
          MR_hl_field(1, base, 1) = V_11;
          MR_hl_field(1, base, 2) = ((MR_Box) (L_12));
          MR_hl_field(1, base, 3) = NULL;
        }
        AddrR_29 = (MR_Word *) (&(MR_hl_field(1, *Tree_6, 3)));
        mercury__rbtree__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_95_95_49_3_p_0(Var_27, R0_10, AddrR_29);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box K0_14 = (MR_hl_field(2, Tree0_5, 0));
        MR_Box V0_15 = (MR_hl_field(2, Tree0_5, 1));
        MR_Word L0_16 = ((MR_Word) ((MR_hl_field(2, Tree0_5, 2))));
        MR_Word R0_17 = ((MR_Word) ((MR_hl_field(2, Tree0_5, 3))));
        MR_Box V_18;
        MR_Word L_19;
        MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, Var_27, 1))));
        MR_Word * AddrR_28;

        V_18 = func_0(((MR_Box) (Var_27)), K0_14, V0_15);
        mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_0(Var_27, L0_16, &L_19);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *Tree_6 = base;
          MR_hl_field(2, base, 0) = K0_14;
          MR_hl_field(2, base, 1) = V_18;
          MR_hl_field(2, base, 2) = ((MR_Box) (L_19));
          MR_hl_field(2, base, 3) = NULL;
        }
        AddrR_28 = (MR_Word *) (&(MR_hl_field(2, *Tree_6, 3)));
        mercury__rbtree__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_95_95_49_3_p_0(Var_27, R0_17, AddrR_28);
      }
      break;
  }
}

MR_bool MR_CALL 
mercury__rbtree__foldr_values_4_p_5(
  MR_Word TypeInfo_for_V_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeInfo_for_K_20,
  MR_Word Pred_5,
  MR_Word Tree_6,
  MR_Box STATE_VARIABLE_AccA_0_12,
  MR_Box * STATE_VARIABLE_AccA_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Tree_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_AccA_13 = STATE_VARIABLE_AccA_0_12;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box V_21 = (MR_hl_field(1, Tree_6, 1));
          MR_Word L_22 = ((MR_Word) ((MR_hl_field(1, Tree_6, 2))));
          MR_Word R_23 = ((MR_Word) ((MR_hl_field(1, Tree_6, 3))));
          MR_Box STATE_VARIABLE_AccA_1_24;
          MR_Box STATE_VARIABLE_AccA_2_25;
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_6;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_12;

          succeeded = mercury__rbtree__foldr_values_4_p_5(TypeInfo_for_V_18, TypeInfo_for_A_19, TypeInfo_for_K_20, Pred_5, R_23, STATE_VARIABLE_AccA_0_12, &STATE_VARIABLE_AccA_1_24);
          if (succeeded)
          {
            func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_5, 1))));
            succeeded = func_1(((MR_Box) (Pred_5)), V_21, STATE_VARIABLE_AccA_1_24, &STATE_VARIABLE_AccA_2_25);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_Tree_6 = L_22;
              next_value_of_STATE_VARIABLE_AccA_0_12 = STATE_VARIABLE_AccA_2_25;
              Tree_6 = next_value_of_Tree_6;
              STATE_VARIABLE_AccA_0_12 = next_value_of_STATE_VARIABLE_AccA_0_12;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box V_9 = (MR_hl_field(2, Tree_6, 1));
          MR_Word L_10 = ((MR_Word) ((MR_hl_field(2, Tree_6, 2))));
          MR_Word R_11 = ((MR_Word) ((MR_hl_field(2, Tree_6, 3))));
          MR_Box STATE_VARIABLE_AccA_1_14;
          MR_Box STATE_VARIABLE_AccA_2_15;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_6;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_12;

          succeeded = mercury__rbtree__foldr_values_4_p_5(TypeInfo_for_V_18, TypeInfo_for_A_19, TypeInfo_for_K_20, Pred_5, R_11, STATE_VARIABLE_AccA_0_12, &STATE_VARIABLE_AccA_1_14);
          if (succeeded)
          {
            func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_5, 1))));
            succeeded = func_0(((MR_Box) (Pred_5)), V_9, STATE_VARIABLE_AccA_1_14, &STATE_VARIABLE_AccA_2_15);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_Tree_6 = L_10;
              next_value_of_STATE_VARIABLE_AccA_0_12 = STATE_VARIABLE_AccA_2_15;
              Tree_6 = next_value_of_Tree_6;
              STATE_VARIABLE_AccA_0_12 = next_value_of_STATE_VARIABLE_AccA_0_12;
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
mercury__rbtree__foldr_values_4_p_4(
  MR_Word TypeInfo_for_V_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeInfo_for_K_20,
  MR_Word Pred_5,
  MR_Word Tree_6,
  MR_Box STATE_VARIABLE_AccA_0_12,
  MR_Box * STATE_VARIABLE_AccA_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Tree_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_AccA_13 = STATE_VARIABLE_AccA_0_12;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box V_21 = (MR_hl_field(1, Tree_6, 1));
          MR_Word L_22 = ((MR_Word) ((MR_hl_field(1, Tree_6, 2))));
          MR_Word R_23 = ((MR_Word) ((MR_hl_field(1, Tree_6, 3))));
          MR_Box STATE_VARIABLE_AccA_1_24;
          MR_Box STATE_VARIABLE_AccA_2_25;
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_6;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_12;

          succeeded = mercury__rbtree__foldr_values_4_p_4(TypeInfo_for_V_18, TypeInfo_for_A_19, TypeInfo_for_K_20, Pred_5, R_23, STATE_VARIABLE_AccA_0_12, &STATE_VARIABLE_AccA_1_24);
          if (succeeded)
          {
            func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_5, 1))));
            succeeded = func_1(((MR_Box) (Pred_5)), V_21, STATE_VARIABLE_AccA_1_24, &STATE_VARIABLE_AccA_2_25);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_Tree_6 = L_22;
              next_value_of_STATE_VARIABLE_AccA_0_12 = STATE_VARIABLE_AccA_2_25;
              Tree_6 = next_value_of_Tree_6;
              STATE_VARIABLE_AccA_0_12 = next_value_of_STATE_VARIABLE_AccA_0_12;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box V_9 = (MR_hl_field(2, Tree_6, 1));
          MR_Word L_10 = ((MR_Word) ((MR_hl_field(2, Tree_6, 2))));
          MR_Word R_11 = ((MR_Word) ((MR_hl_field(2, Tree_6, 3))));
          MR_Box STATE_VARIABLE_AccA_1_14;
          MR_Box STATE_VARIABLE_AccA_2_15;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_6;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_12;

          succeeded = mercury__rbtree__foldr_values_4_p_4(TypeInfo_for_V_18, TypeInfo_for_A_19, TypeInfo_for_K_20, Pred_5, R_11, STATE_VARIABLE_AccA_0_12, &STATE_VARIABLE_AccA_1_14);
          if (succeeded)
          {
            func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_5, 1))));
            succeeded = func_0(((MR_Box) (Pred_5)), V_9, STATE_VARIABLE_AccA_1_14, &STATE_VARIABLE_AccA_2_15);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_Tree_6 = L_10;
              next_value_of_STATE_VARIABLE_AccA_0_12 = STATE_VARIABLE_AccA_2_15;
              Tree_6 = next_value_of_Tree_6;
              STATE_VARIABLE_AccA_0_12 = next_value_of_STATE_VARIABLE_AccA_0_12;
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
mercury__rbtree__foldr_values_4_p_3(
  MR_Word TypeInfo_for_V_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeInfo_for_K_20,
  MR_Word Pred_5,
  MR_Word Tree_6,
  MR_Box STATE_VARIABLE_AccA_0_12,
  MR_Box * STATE_VARIABLE_AccA_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Tree_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_AccA_13 = STATE_VARIABLE_AccA_0_12;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box V_21 = (MR_hl_field(1, Tree_6, 1));
          MR_Word L_22 = ((MR_Word) ((MR_hl_field(1, Tree_6, 2))));
          MR_Word R_23 = ((MR_Word) ((MR_hl_field(1, Tree_6, 3))));
          MR_Box STATE_VARIABLE_AccA_1_24;
          MR_Box STATE_VARIABLE_AccA_2_25;
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_6;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_12;

          succeeded = mercury__rbtree__foldr_values_4_p_3(TypeInfo_for_V_18, TypeInfo_for_A_19, TypeInfo_for_K_20, Pred_5, R_23, STATE_VARIABLE_AccA_0_12, &STATE_VARIABLE_AccA_1_24);
          if (succeeded)
          {
            func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_5, 1))));
            succeeded = func_1(((MR_Box) (Pred_5)), V_21, STATE_VARIABLE_AccA_1_24, &STATE_VARIABLE_AccA_2_25);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_Tree_6 = L_22;
              next_value_of_STATE_VARIABLE_AccA_0_12 = STATE_VARIABLE_AccA_2_25;
              Tree_6 = next_value_of_Tree_6;
              STATE_VARIABLE_AccA_0_12 = next_value_of_STATE_VARIABLE_AccA_0_12;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box V_9 = (MR_hl_field(2, Tree_6, 1));
          MR_Word L_10 = ((MR_Word) ((MR_hl_field(2, Tree_6, 2))));
          MR_Word R_11 = ((MR_Word) ((MR_hl_field(2, Tree_6, 3))));
          MR_Box STATE_VARIABLE_AccA_1_14;
          MR_Box STATE_VARIABLE_AccA_2_15;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_6;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_12;

          succeeded = mercury__rbtree__foldr_values_4_p_3(TypeInfo_for_V_18, TypeInfo_for_A_19, TypeInfo_for_K_20, Pred_5, R_11, STATE_VARIABLE_AccA_0_12, &STATE_VARIABLE_AccA_1_14);
          if (succeeded)
          {
            func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_5, 1))));
            succeeded = func_0(((MR_Box) (Pred_5)), V_9, STATE_VARIABLE_AccA_1_14, &STATE_VARIABLE_AccA_2_15);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_Tree_6 = L_10;
              next_value_of_STATE_VARIABLE_AccA_0_12 = STATE_VARIABLE_AccA_2_15;
              Tree_6 = next_value_of_Tree_6;
              STATE_VARIABLE_AccA_0_12 = next_value_of_STATE_VARIABLE_AccA_0_12;
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
mercury__rbtree__foldr_values_4_p_2(
  MR_Word TypeInfo_for_V_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeInfo_for_K_20,
  MR_Word Pred_5,
  MR_Word Tree_6,
  MR_Box STATE_VARIABLE_AccA_0_12,
  MR_Box * STATE_VARIABLE_AccA_13)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Tree_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_AccA_13 = STATE_VARIABLE_AccA_0_12;
        break;
      case (MR_Integer) 1:
        {
          MR_Box V_21 = (MR_hl_field(1, Tree_6, 1));
          MR_Word L_22 = ((MR_Word) ((MR_hl_field(1, Tree_6, 2))));
          MR_Word R_23 = ((MR_Word) ((MR_hl_field(1, Tree_6, 3))));
          MR_Box STATE_VARIABLE_AccA_1_24;
          MR_Box STATE_VARIABLE_AccA_2_25;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_6;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_12;

          mercury__rbtree__foldr_values_4_p_2(TypeInfo_for_V_18, TypeInfo_for_A_19, TypeInfo_for_K_20, Pred_5, R_23, STATE_VARIABLE_AccA_0_12, &STATE_VARIABLE_AccA_1_24);
          func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_5, 1))));
          func_1(((MR_Box) (Pred_5)), V_21, STATE_VARIABLE_AccA_1_24, &STATE_VARIABLE_AccA_2_25);
          // direct tailcall eliminated
          ;
          next_value_of_Tree_6 = L_22;
          next_value_of_STATE_VARIABLE_AccA_0_12 = STATE_VARIABLE_AccA_2_25;
          Tree_6 = next_value_of_Tree_6;
          STATE_VARIABLE_AccA_0_12 = next_value_of_STATE_VARIABLE_AccA_0_12;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box V_9 = (MR_hl_field(2, Tree_6, 1));
          MR_Word L_10 = ((MR_Word) ((MR_hl_field(2, Tree_6, 2))));
          MR_Word R_11 = ((MR_Word) ((MR_hl_field(2, Tree_6, 3))));
          MR_Box STATE_VARIABLE_AccA_1_14;
          MR_Box STATE_VARIABLE_AccA_2_15;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_6;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_12;

          mercury__rbtree__foldr_values_4_p_2(TypeInfo_for_V_18, TypeInfo_for_A_19, TypeInfo_for_K_20, Pred_5, R_11, STATE_VARIABLE_AccA_0_12, &STATE_VARIABLE_AccA_1_14);
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_5, 1))));
          func_0(((MR_Box) (Pred_5)), V_9, STATE_VARIABLE_AccA_1_14, &STATE_VARIABLE_AccA_2_15);
          // direct tailcall eliminated
          ;
          next_value_of_Tree_6 = L_10;
          next_value_of_STATE_VARIABLE_AccA_0_12 = STATE_VARIABLE_AccA_2_15;
          Tree_6 = next_value_of_Tree_6;
          STATE_VARIABLE_AccA_0_12 = next_value_of_STATE_VARIABLE_AccA_0_12;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__rbtree__foldr_values_4_p_1(
  MR_Word TypeInfo_for_V_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeInfo_for_K_20,
  MR_Word Pred_5,
  MR_Word Tree_6,
  MR_Box STATE_VARIABLE_AccA_0_12,
  MR_Box * STATE_VARIABLE_AccA_13)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Tree_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_AccA_13 = STATE_VARIABLE_AccA_0_12;
        break;
      case (MR_Integer) 1:
        {
          MR_Box V_21 = (MR_hl_field(1, Tree_6, 1));
          MR_Word L_22 = ((MR_Word) ((MR_hl_field(1, Tree_6, 2))));
          MR_Word R_23 = ((MR_Word) ((MR_hl_field(1, Tree_6, 3))));
          MR_Box STATE_VARIABLE_AccA_1_24;
          MR_Box STATE_VARIABLE_AccA_2_25;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_6;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_12;

          mercury__rbtree__foldr_values_4_p_1(TypeInfo_for_V_18, TypeInfo_for_A_19, TypeInfo_for_K_20, Pred_5, R_23, STATE_VARIABLE_AccA_0_12, &STATE_VARIABLE_AccA_1_24);
          func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_5, 1))));
          func_1(((MR_Box) (Pred_5)), V_21, STATE_VARIABLE_AccA_1_24, &STATE_VARIABLE_AccA_2_25);
          // direct tailcall eliminated
          ;
          next_value_of_Tree_6 = L_22;
          next_value_of_STATE_VARIABLE_AccA_0_12 = STATE_VARIABLE_AccA_2_25;
          Tree_6 = next_value_of_Tree_6;
          STATE_VARIABLE_AccA_0_12 = next_value_of_STATE_VARIABLE_AccA_0_12;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box V_9 = (MR_hl_field(2, Tree_6, 1));
          MR_Word L_10 = ((MR_Word) ((MR_hl_field(2, Tree_6, 2))));
          MR_Word R_11 = ((MR_Word) ((MR_hl_field(2, Tree_6, 3))));
          MR_Box STATE_VARIABLE_AccA_1_14;
          MR_Box STATE_VARIABLE_AccA_2_15;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_6;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_12;

          mercury__rbtree__foldr_values_4_p_1(TypeInfo_for_V_18, TypeInfo_for_A_19, TypeInfo_for_K_20, Pred_5, R_11, STATE_VARIABLE_AccA_0_12, &STATE_VARIABLE_AccA_1_14);
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_5, 1))));
          func_0(((MR_Box) (Pred_5)), V_9, STATE_VARIABLE_AccA_1_14, &STATE_VARIABLE_AccA_2_15);
          // direct tailcall eliminated
          ;
          next_value_of_Tree_6 = L_10;
          next_value_of_STATE_VARIABLE_AccA_0_12 = STATE_VARIABLE_AccA_2_15;
          Tree_6 = next_value_of_Tree_6;
          STATE_VARIABLE_AccA_0_12 = next_value_of_STATE_VARIABLE_AccA_0_12;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__rbtree__foldr_values_4_p_0(
  MR_Word TypeInfo_for_V_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeInfo_for_K_20,
  MR_Word Pred_5,
  MR_Word Tree_6,
  MR_Box STATE_VARIABLE_AccA_0_12,
  MR_Box * STATE_VARIABLE_AccA_13)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Tree_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_AccA_13 = STATE_VARIABLE_AccA_0_12;
        break;
      case (MR_Integer) 1:
        {
          MR_Box V_21 = (MR_hl_field(1, Tree_6, 1));
          MR_Word L_22 = ((MR_Word) ((MR_hl_field(1, Tree_6, 2))));
          MR_Word R_23 = ((MR_Word) ((MR_hl_field(1, Tree_6, 3))));
          MR_Box STATE_VARIABLE_AccA_1_24;
          MR_Box STATE_VARIABLE_AccA_2_25;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_6;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_12;

          mercury__rbtree__foldr_values_4_p_0(TypeInfo_for_V_18, TypeInfo_for_A_19, TypeInfo_for_K_20, Pred_5, R_23, STATE_VARIABLE_AccA_0_12, &STATE_VARIABLE_AccA_1_24);
          func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_5, 1))));
          func_1(((MR_Box) (Pred_5)), V_21, STATE_VARIABLE_AccA_1_24, &STATE_VARIABLE_AccA_2_25);
          // direct tailcall eliminated
          ;
          next_value_of_Tree_6 = L_22;
          next_value_of_STATE_VARIABLE_AccA_0_12 = STATE_VARIABLE_AccA_2_25;
          Tree_6 = next_value_of_Tree_6;
          STATE_VARIABLE_AccA_0_12 = next_value_of_STATE_VARIABLE_AccA_0_12;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box V_9 = (MR_hl_field(2, Tree_6, 1));
          MR_Word L_10 = ((MR_Word) ((MR_hl_field(2, Tree_6, 2))));
          MR_Word R_11 = ((MR_Word) ((MR_hl_field(2, Tree_6, 3))));
          MR_Box STATE_VARIABLE_AccA_1_14;
          MR_Box STATE_VARIABLE_AccA_2_15;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_6;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_12;

          mercury__rbtree__foldr_values_4_p_0(TypeInfo_for_V_18, TypeInfo_for_A_19, TypeInfo_for_K_20, Pred_5, R_11, STATE_VARIABLE_AccA_0_12, &STATE_VARIABLE_AccA_1_14);
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_5, 1))));
          func_0(((MR_Box) (Pred_5)), V_9, STATE_VARIABLE_AccA_1_14, &STATE_VARIABLE_AccA_2_15);
          // direct tailcall eliminated
          ;
          next_value_of_Tree_6 = L_10;
          next_value_of_STATE_VARIABLE_AccA_0_12 = STATE_VARIABLE_AccA_2_15;
          Tree_6 = next_value_of_Tree_6;
          STATE_VARIABLE_AccA_0_12 = next_value_of_STATE_VARIABLE_AccA_0_12;
          continue;
        }
        break;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__rbtree__foldr2_6_p_6(
  MR_Word TypeInfo_for_K_23,
  MR_Word TypeInfo_for_V_24,
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word Pred_7,
  MR_Word Tree_8,
  MR_Box STATE_VARIABLE_AccA_0_15,
  MR_Box * STATE_VARIABLE_AccA_16,
  MR_Box STATE_VARIABLE_AccB_0_17,
  MR_Box * STATE_VARIABLE_AccB_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Tree_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_AccA_16 = STATE_VARIABLE_AccA_0_15;
          *STATE_VARIABLE_AccB_18 = STATE_VARIABLE_AccB_0_17;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_27 = (MR_hl_field(1, Tree_8, 0));
          MR_Box V_28 = (MR_hl_field(1, Tree_8, 1));
          MR_Word L_29 = ((MR_Word) ((MR_hl_field(1, Tree_8, 2))));
          MR_Word R_30 = ((MR_Word) ((MR_hl_field(1, Tree_8, 3))));
          MR_Box STATE_VARIABLE_AccA_1_31;
          MR_Box STATE_VARIABLE_AccB_1_32;
          MR_Box STATE_VARIABLE_AccA_2_33;
          MR_Box STATE_VARIABLE_AccB_2_34;
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_8;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_15;
          MR_Box next_value_of_STATE_VARIABLE_AccB_0_17;

          succeeded = mercury__rbtree__foldr2_6_p_6(TypeInfo_for_K_23, TypeInfo_for_V_24, TypeInfo_for_A_25, TypeInfo_for_B_26, Pred_7, R_30, STATE_VARIABLE_AccA_0_15, &STATE_VARIABLE_AccA_1_31, STATE_VARIABLE_AccB_0_17, &STATE_VARIABLE_AccB_1_32);
          if (succeeded)
          {
            func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_7, 1))));
            succeeded = func_1(((MR_Box) (Pred_7)), K_27, V_28, STATE_VARIABLE_AccA_1_31, &STATE_VARIABLE_AccA_2_33, STATE_VARIABLE_AccB_1_32, &STATE_VARIABLE_AccB_2_34);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_Tree_8 = L_29;
              next_value_of_STATE_VARIABLE_AccA_0_15 = STATE_VARIABLE_AccA_2_33;
              next_value_of_STATE_VARIABLE_AccB_0_17 = STATE_VARIABLE_AccB_2_34;
              Tree_8 = next_value_of_Tree_8;
              STATE_VARIABLE_AccA_0_15 = next_value_of_STATE_VARIABLE_AccA_0_15;
              STATE_VARIABLE_AccB_0_17 = next_value_of_STATE_VARIABLE_AccB_0_17;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K_11 = (MR_hl_field(2, Tree_8, 0));
          MR_Box V_12 = (MR_hl_field(2, Tree_8, 1));
          MR_Word L_13 = ((MR_Word) ((MR_hl_field(2, Tree_8, 2))));
          MR_Word R_14 = ((MR_Word) ((MR_hl_field(2, Tree_8, 3))));
          MR_Box STATE_VARIABLE_AccA_1_19;
          MR_Box STATE_VARIABLE_AccB_1_20;
          MR_Box STATE_VARIABLE_AccA_2_21;
          MR_Box STATE_VARIABLE_AccB_2_22;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_8;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_15;
          MR_Box next_value_of_STATE_VARIABLE_AccB_0_17;

          succeeded = mercury__rbtree__foldr2_6_p_6(TypeInfo_for_K_23, TypeInfo_for_V_24, TypeInfo_for_A_25, TypeInfo_for_B_26, Pred_7, R_14, STATE_VARIABLE_AccA_0_15, &STATE_VARIABLE_AccA_1_19, STATE_VARIABLE_AccB_0_17, &STATE_VARIABLE_AccB_1_20);
          if (succeeded)
          {
            func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_7, 1))));
            succeeded = func_0(((MR_Box) (Pred_7)), K_11, V_12, STATE_VARIABLE_AccA_1_19, &STATE_VARIABLE_AccA_2_21, STATE_VARIABLE_AccB_1_20, &STATE_VARIABLE_AccB_2_22);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_Tree_8 = L_13;
              next_value_of_STATE_VARIABLE_AccA_0_15 = STATE_VARIABLE_AccA_2_21;
              next_value_of_STATE_VARIABLE_AccB_0_17 = STATE_VARIABLE_AccB_2_22;
              Tree_8 = next_value_of_Tree_8;
              STATE_VARIABLE_AccA_0_15 = next_value_of_STATE_VARIABLE_AccA_0_15;
              STATE_VARIABLE_AccB_0_17 = next_value_of_STATE_VARIABLE_AccB_0_17;
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
mercury__rbtree__foldr2_6_p_5(
  MR_Word TypeInfo_for_K_23,
  MR_Word TypeInfo_for_V_24,
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word Pred_7,
  MR_Word Tree_8,
  MR_Box STATE_VARIABLE_AccA_0_15,
  MR_Box * STATE_VARIABLE_AccA_16,
  MR_Box STATE_VARIABLE_AccB_0_17,
  MR_Box * STATE_VARIABLE_AccB_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Tree_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_AccA_16 = STATE_VARIABLE_AccA_0_15;
          *STATE_VARIABLE_AccB_18 = STATE_VARIABLE_AccB_0_17;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_27 = (MR_hl_field(1, Tree_8, 0));
          MR_Box V_28 = (MR_hl_field(1, Tree_8, 1));
          MR_Word L_29 = ((MR_Word) ((MR_hl_field(1, Tree_8, 2))));
          MR_Word R_30 = ((MR_Word) ((MR_hl_field(1, Tree_8, 3))));
          MR_Box STATE_VARIABLE_AccA_1_31;
          MR_Box STATE_VARIABLE_AccB_1_32;
          MR_Box STATE_VARIABLE_AccA_2_33;
          MR_Box STATE_VARIABLE_AccB_2_34;
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_8;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_15;
          MR_Box next_value_of_STATE_VARIABLE_AccB_0_17;

          succeeded = mercury__rbtree__foldr2_6_p_5(TypeInfo_for_K_23, TypeInfo_for_V_24, TypeInfo_for_A_25, TypeInfo_for_B_26, Pred_7, R_30, STATE_VARIABLE_AccA_0_15, &STATE_VARIABLE_AccA_1_31, STATE_VARIABLE_AccB_0_17, &STATE_VARIABLE_AccB_1_32);
          if (succeeded)
          {
            func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_7, 1))));
            succeeded = func_1(((MR_Box) (Pred_7)), K_27, V_28, STATE_VARIABLE_AccA_1_31, &STATE_VARIABLE_AccA_2_33, STATE_VARIABLE_AccB_1_32, &STATE_VARIABLE_AccB_2_34);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_Tree_8 = L_29;
              next_value_of_STATE_VARIABLE_AccA_0_15 = STATE_VARIABLE_AccA_2_33;
              next_value_of_STATE_VARIABLE_AccB_0_17 = STATE_VARIABLE_AccB_2_34;
              Tree_8 = next_value_of_Tree_8;
              STATE_VARIABLE_AccA_0_15 = next_value_of_STATE_VARIABLE_AccA_0_15;
              STATE_VARIABLE_AccB_0_17 = next_value_of_STATE_VARIABLE_AccB_0_17;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K_11 = (MR_hl_field(2, Tree_8, 0));
          MR_Box V_12 = (MR_hl_field(2, Tree_8, 1));
          MR_Word L_13 = ((MR_Word) ((MR_hl_field(2, Tree_8, 2))));
          MR_Word R_14 = ((MR_Word) ((MR_hl_field(2, Tree_8, 3))));
          MR_Box STATE_VARIABLE_AccA_1_19;
          MR_Box STATE_VARIABLE_AccB_1_20;
          MR_Box STATE_VARIABLE_AccA_2_21;
          MR_Box STATE_VARIABLE_AccB_2_22;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_8;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_15;
          MR_Box next_value_of_STATE_VARIABLE_AccB_0_17;

          succeeded = mercury__rbtree__foldr2_6_p_5(TypeInfo_for_K_23, TypeInfo_for_V_24, TypeInfo_for_A_25, TypeInfo_for_B_26, Pred_7, R_14, STATE_VARIABLE_AccA_0_15, &STATE_VARIABLE_AccA_1_19, STATE_VARIABLE_AccB_0_17, &STATE_VARIABLE_AccB_1_20);
          if (succeeded)
          {
            func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_7, 1))));
            succeeded = func_0(((MR_Box) (Pred_7)), K_11, V_12, STATE_VARIABLE_AccA_1_19, &STATE_VARIABLE_AccA_2_21, STATE_VARIABLE_AccB_1_20, &STATE_VARIABLE_AccB_2_22);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_Tree_8 = L_13;
              next_value_of_STATE_VARIABLE_AccA_0_15 = STATE_VARIABLE_AccA_2_21;
              next_value_of_STATE_VARIABLE_AccB_0_17 = STATE_VARIABLE_AccB_2_22;
              Tree_8 = next_value_of_Tree_8;
              STATE_VARIABLE_AccA_0_15 = next_value_of_STATE_VARIABLE_AccA_0_15;
              STATE_VARIABLE_AccB_0_17 = next_value_of_STATE_VARIABLE_AccB_0_17;
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
mercury__rbtree__foldr2_6_p_4(
  MR_Word TypeInfo_for_K_23,
  MR_Word TypeInfo_for_V_24,
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word Pred_7,
  MR_Word Tree_8,
  MR_Box STATE_VARIABLE_AccA_0_15,
  MR_Box * STATE_VARIABLE_AccA_16,
  MR_Box STATE_VARIABLE_AccB_0_17,
  MR_Box * STATE_VARIABLE_AccB_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Tree_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_AccA_16 = STATE_VARIABLE_AccA_0_15;
          *STATE_VARIABLE_AccB_18 = STATE_VARIABLE_AccB_0_17;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_27 = (MR_hl_field(1, Tree_8, 0));
          MR_Box V_28 = (MR_hl_field(1, Tree_8, 1));
          MR_Word L_29 = ((MR_Word) ((MR_hl_field(1, Tree_8, 2))));
          MR_Word R_30 = ((MR_Word) ((MR_hl_field(1, Tree_8, 3))));
          MR_Box STATE_VARIABLE_AccA_1_31;
          MR_Box STATE_VARIABLE_AccB_1_32;
          MR_Box STATE_VARIABLE_AccA_2_33;
          MR_Box STATE_VARIABLE_AccB_2_34;
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_8;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_15;
          MR_Box next_value_of_STATE_VARIABLE_AccB_0_17;

          succeeded = mercury__rbtree__foldr2_6_p_4(TypeInfo_for_K_23, TypeInfo_for_V_24, TypeInfo_for_A_25, TypeInfo_for_B_26, Pred_7, R_30, STATE_VARIABLE_AccA_0_15, &STATE_VARIABLE_AccA_1_31, STATE_VARIABLE_AccB_0_17, &STATE_VARIABLE_AccB_1_32);
          if (succeeded)
          {
            func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_7, 1))));
            succeeded = func_1(((MR_Box) (Pred_7)), K_27, V_28, STATE_VARIABLE_AccA_1_31, &STATE_VARIABLE_AccA_2_33, STATE_VARIABLE_AccB_1_32, &STATE_VARIABLE_AccB_2_34);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_Tree_8 = L_29;
              next_value_of_STATE_VARIABLE_AccA_0_15 = STATE_VARIABLE_AccA_2_33;
              next_value_of_STATE_VARIABLE_AccB_0_17 = STATE_VARIABLE_AccB_2_34;
              Tree_8 = next_value_of_Tree_8;
              STATE_VARIABLE_AccA_0_15 = next_value_of_STATE_VARIABLE_AccA_0_15;
              STATE_VARIABLE_AccB_0_17 = next_value_of_STATE_VARIABLE_AccB_0_17;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K_11 = (MR_hl_field(2, Tree_8, 0));
          MR_Box V_12 = (MR_hl_field(2, Tree_8, 1));
          MR_Word L_13 = ((MR_Word) ((MR_hl_field(2, Tree_8, 2))));
          MR_Word R_14 = ((MR_Word) ((MR_hl_field(2, Tree_8, 3))));
          MR_Box STATE_VARIABLE_AccA_1_19;
          MR_Box STATE_VARIABLE_AccB_1_20;
          MR_Box STATE_VARIABLE_AccA_2_21;
          MR_Box STATE_VARIABLE_AccB_2_22;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_8;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_15;
          MR_Box next_value_of_STATE_VARIABLE_AccB_0_17;

          succeeded = mercury__rbtree__foldr2_6_p_4(TypeInfo_for_K_23, TypeInfo_for_V_24, TypeInfo_for_A_25, TypeInfo_for_B_26, Pred_7, R_14, STATE_VARIABLE_AccA_0_15, &STATE_VARIABLE_AccA_1_19, STATE_VARIABLE_AccB_0_17, &STATE_VARIABLE_AccB_1_20);
          if (succeeded)
          {
            func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_7, 1))));
            succeeded = func_0(((MR_Box) (Pred_7)), K_11, V_12, STATE_VARIABLE_AccA_1_19, &STATE_VARIABLE_AccA_2_21, STATE_VARIABLE_AccB_1_20, &STATE_VARIABLE_AccB_2_22);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_Tree_8 = L_13;
              next_value_of_STATE_VARIABLE_AccA_0_15 = STATE_VARIABLE_AccA_2_21;
              next_value_of_STATE_VARIABLE_AccB_0_17 = STATE_VARIABLE_AccB_2_22;
              Tree_8 = next_value_of_Tree_8;
              STATE_VARIABLE_AccA_0_15 = next_value_of_STATE_VARIABLE_AccA_0_15;
              STATE_VARIABLE_AccB_0_17 = next_value_of_STATE_VARIABLE_AccB_0_17;
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
mercury__rbtree__foldr2_6_p_3(
  MR_Word TypeInfo_for_K_23,
  MR_Word TypeInfo_for_V_24,
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word Pred_7,
  MR_Word Tree_8,
  MR_Box STATE_VARIABLE_AccA_0_15,
  MR_Box * STATE_VARIABLE_AccA_16,
  MR_Box STATE_VARIABLE_AccB_0_17,
  MR_Box * STATE_VARIABLE_AccB_18)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Tree_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_AccA_16 = STATE_VARIABLE_AccA_0_15;
          *STATE_VARIABLE_AccB_18 = STATE_VARIABLE_AccB_0_17;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_27 = (MR_hl_field(1, Tree_8, 0));
          MR_Box V_28 = (MR_hl_field(1, Tree_8, 1));
          MR_Word L_29 = ((MR_Word) ((MR_hl_field(1, Tree_8, 2))));
          MR_Word R_30 = ((MR_Word) ((MR_hl_field(1, Tree_8, 3))));
          MR_Box STATE_VARIABLE_AccA_1_31;
          MR_Box STATE_VARIABLE_AccB_1_32;
          MR_Box STATE_VARIABLE_AccA_2_33;
          MR_Box STATE_VARIABLE_AccB_2_34;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_8;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_15;
          MR_Box next_value_of_STATE_VARIABLE_AccB_0_17;

          mercury__rbtree__foldr2_6_p_3(TypeInfo_for_K_23, TypeInfo_for_V_24, TypeInfo_for_A_25, TypeInfo_for_B_26, Pred_7, R_30, STATE_VARIABLE_AccA_0_15, &STATE_VARIABLE_AccA_1_31, STATE_VARIABLE_AccB_0_17, &STATE_VARIABLE_AccB_1_32);
          func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_7, 1))));
          func_1(((MR_Box) (Pred_7)), K_27, V_28, STATE_VARIABLE_AccA_1_31, &STATE_VARIABLE_AccA_2_33, STATE_VARIABLE_AccB_1_32, &STATE_VARIABLE_AccB_2_34);
          // direct tailcall eliminated
          ;
          next_value_of_Tree_8 = L_29;
          next_value_of_STATE_VARIABLE_AccA_0_15 = STATE_VARIABLE_AccA_2_33;
          next_value_of_STATE_VARIABLE_AccB_0_17 = STATE_VARIABLE_AccB_2_34;
          Tree_8 = next_value_of_Tree_8;
          STATE_VARIABLE_AccA_0_15 = next_value_of_STATE_VARIABLE_AccA_0_15;
          STATE_VARIABLE_AccB_0_17 = next_value_of_STATE_VARIABLE_AccB_0_17;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K_11 = (MR_hl_field(2, Tree_8, 0));
          MR_Box V_12 = (MR_hl_field(2, Tree_8, 1));
          MR_Word L_13 = ((MR_Word) ((MR_hl_field(2, Tree_8, 2))));
          MR_Word R_14 = ((MR_Word) ((MR_hl_field(2, Tree_8, 3))));
          MR_Box STATE_VARIABLE_AccA_1_19;
          MR_Box STATE_VARIABLE_AccB_1_20;
          MR_Box STATE_VARIABLE_AccA_2_21;
          MR_Box STATE_VARIABLE_AccB_2_22;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_8;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_15;
          MR_Box next_value_of_STATE_VARIABLE_AccB_0_17;

          mercury__rbtree__foldr2_6_p_3(TypeInfo_for_K_23, TypeInfo_for_V_24, TypeInfo_for_A_25, TypeInfo_for_B_26, Pred_7, R_14, STATE_VARIABLE_AccA_0_15, &STATE_VARIABLE_AccA_1_19, STATE_VARIABLE_AccB_0_17, &STATE_VARIABLE_AccB_1_20);
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_7, 1))));
          func_0(((MR_Box) (Pred_7)), K_11, V_12, STATE_VARIABLE_AccA_1_19, &STATE_VARIABLE_AccA_2_21, STATE_VARIABLE_AccB_1_20, &STATE_VARIABLE_AccB_2_22);
          // direct tailcall eliminated
          ;
          next_value_of_Tree_8 = L_13;
          next_value_of_STATE_VARIABLE_AccA_0_15 = STATE_VARIABLE_AccA_2_21;
          next_value_of_STATE_VARIABLE_AccB_0_17 = STATE_VARIABLE_AccB_2_22;
          Tree_8 = next_value_of_Tree_8;
          STATE_VARIABLE_AccA_0_15 = next_value_of_STATE_VARIABLE_AccA_0_15;
          STATE_VARIABLE_AccB_0_17 = next_value_of_STATE_VARIABLE_AccB_0_17;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__rbtree__foldr2_6_p_2(
  MR_Word TypeInfo_for_K_23,
  MR_Word TypeInfo_for_V_24,
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word Pred_7,
  MR_Word Tree_8,
  MR_Box STATE_VARIABLE_AccA_0_15,
  MR_Box * STATE_VARIABLE_AccA_16,
  MR_Box STATE_VARIABLE_AccB_0_17,
  MR_Box * STATE_VARIABLE_AccB_18)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Tree_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_AccA_16 = STATE_VARIABLE_AccA_0_15;
          *STATE_VARIABLE_AccB_18 = STATE_VARIABLE_AccB_0_17;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_27 = (MR_hl_field(1, Tree_8, 0));
          MR_Box V_28 = (MR_hl_field(1, Tree_8, 1));
          MR_Word L_29 = ((MR_Word) ((MR_hl_field(1, Tree_8, 2))));
          MR_Word R_30 = ((MR_Word) ((MR_hl_field(1, Tree_8, 3))));
          MR_Box STATE_VARIABLE_AccA_1_31;
          MR_Box STATE_VARIABLE_AccB_1_32;
          MR_Box STATE_VARIABLE_AccA_2_33;
          MR_Box STATE_VARIABLE_AccB_2_34;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_8;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_15;
          MR_Box next_value_of_STATE_VARIABLE_AccB_0_17;

          mercury__rbtree__foldr2_6_p_2(TypeInfo_for_K_23, TypeInfo_for_V_24, TypeInfo_for_A_25, TypeInfo_for_B_26, Pred_7, R_30, STATE_VARIABLE_AccA_0_15, &STATE_VARIABLE_AccA_1_31, STATE_VARIABLE_AccB_0_17, &STATE_VARIABLE_AccB_1_32);
          func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_7, 1))));
          func_1(((MR_Box) (Pred_7)), K_27, V_28, STATE_VARIABLE_AccA_1_31, &STATE_VARIABLE_AccA_2_33, STATE_VARIABLE_AccB_1_32, &STATE_VARIABLE_AccB_2_34);
          // direct tailcall eliminated
          ;
          next_value_of_Tree_8 = L_29;
          next_value_of_STATE_VARIABLE_AccA_0_15 = STATE_VARIABLE_AccA_2_33;
          next_value_of_STATE_VARIABLE_AccB_0_17 = STATE_VARIABLE_AccB_2_34;
          Tree_8 = next_value_of_Tree_8;
          STATE_VARIABLE_AccA_0_15 = next_value_of_STATE_VARIABLE_AccA_0_15;
          STATE_VARIABLE_AccB_0_17 = next_value_of_STATE_VARIABLE_AccB_0_17;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K_11 = (MR_hl_field(2, Tree_8, 0));
          MR_Box V_12 = (MR_hl_field(2, Tree_8, 1));
          MR_Word L_13 = ((MR_Word) ((MR_hl_field(2, Tree_8, 2))));
          MR_Word R_14 = ((MR_Word) ((MR_hl_field(2, Tree_8, 3))));
          MR_Box STATE_VARIABLE_AccA_1_19;
          MR_Box STATE_VARIABLE_AccB_1_20;
          MR_Box STATE_VARIABLE_AccA_2_21;
          MR_Box STATE_VARIABLE_AccB_2_22;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_8;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_15;
          MR_Box next_value_of_STATE_VARIABLE_AccB_0_17;

          mercury__rbtree__foldr2_6_p_2(TypeInfo_for_K_23, TypeInfo_for_V_24, TypeInfo_for_A_25, TypeInfo_for_B_26, Pred_7, R_14, STATE_VARIABLE_AccA_0_15, &STATE_VARIABLE_AccA_1_19, STATE_VARIABLE_AccB_0_17, &STATE_VARIABLE_AccB_1_20);
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_7, 1))));
          func_0(((MR_Box) (Pred_7)), K_11, V_12, STATE_VARIABLE_AccA_1_19, &STATE_VARIABLE_AccA_2_21, STATE_VARIABLE_AccB_1_20, &STATE_VARIABLE_AccB_2_22);
          // direct tailcall eliminated
          ;
          next_value_of_Tree_8 = L_13;
          next_value_of_STATE_VARIABLE_AccA_0_15 = STATE_VARIABLE_AccA_2_21;
          next_value_of_STATE_VARIABLE_AccB_0_17 = STATE_VARIABLE_AccB_2_22;
          Tree_8 = next_value_of_Tree_8;
          STATE_VARIABLE_AccA_0_15 = next_value_of_STATE_VARIABLE_AccA_0_15;
          STATE_VARIABLE_AccB_0_17 = next_value_of_STATE_VARIABLE_AccB_0_17;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__rbtree__foldr2_6_p_1(
  MR_Word TypeInfo_for_K_23,
  MR_Word TypeInfo_for_V_24,
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word Pred_7,
  MR_Word Tree_8,
  MR_Box STATE_VARIABLE_AccA_0_15,
  MR_Box * STATE_VARIABLE_AccA_16,
  MR_Box STATE_VARIABLE_AccB_0_17,
  MR_Box * STATE_VARIABLE_AccB_18)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Tree_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_AccA_16 = STATE_VARIABLE_AccA_0_15;
          *STATE_VARIABLE_AccB_18 = STATE_VARIABLE_AccB_0_17;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_27 = (MR_hl_field(1, Tree_8, 0));
          MR_Box V_28 = (MR_hl_field(1, Tree_8, 1));
          MR_Word L_29 = ((MR_Word) ((MR_hl_field(1, Tree_8, 2))));
          MR_Word R_30 = ((MR_Word) ((MR_hl_field(1, Tree_8, 3))));
          MR_Box STATE_VARIABLE_AccA_1_31;
          MR_Box STATE_VARIABLE_AccB_1_32;
          MR_Box STATE_VARIABLE_AccA_2_33;
          MR_Box STATE_VARIABLE_AccB_2_34;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_8;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_15;
          MR_Box next_value_of_STATE_VARIABLE_AccB_0_17;

          mercury__rbtree__foldr2_6_p_1(TypeInfo_for_K_23, TypeInfo_for_V_24, TypeInfo_for_A_25, TypeInfo_for_B_26, Pred_7, R_30, STATE_VARIABLE_AccA_0_15, &STATE_VARIABLE_AccA_1_31, STATE_VARIABLE_AccB_0_17, &STATE_VARIABLE_AccB_1_32);
          func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_7, 1))));
          func_1(((MR_Box) (Pred_7)), K_27, V_28, STATE_VARIABLE_AccA_1_31, &STATE_VARIABLE_AccA_2_33, STATE_VARIABLE_AccB_1_32, &STATE_VARIABLE_AccB_2_34);
          // direct tailcall eliminated
          ;
          next_value_of_Tree_8 = L_29;
          next_value_of_STATE_VARIABLE_AccA_0_15 = STATE_VARIABLE_AccA_2_33;
          next_value_of_STATE_VARIABLE_AccB_0_17 = STATE_VARIABLE_AccB_2_34;
          Tree_8 = next_value_of_Tree_8;
          STATE_VARIABLE_AccA_0_15 = next_value_of_STATE_VARIABLE_AccA_0_15;
          STATE_VARIABLE_AccB_0_17 = next_value_of_STATE_VARIABLE_AccB_0_17;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K_11 = (MR_hl_field(2, Tree_8, 0));
          MR_Box V_12 = (MR_hl_field(2, Tree_8, 1));
          MR_Word L_13 = ((MR_Word) ((MR_hl_field(2, Tree_8, 2))));
          MR_Word R_14 = ((MR_Word) ((MR_hl_field(2, Tree_8, 3))));
          MR_Box STATE_VARIABLE_AccA_1_19;
          MR_Box STATE_VARIABLE_AccB_1_20;
          MR_Box STATE_VARIABLE_AccA_2_21;
          MR_Box STATE_VARIABLE_AccB_2_22;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_8;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_15;
          MR_Box next_value_of_STATE_VARIABLE_AccB_0_17;

          mercury__rbtree__foldr2_6_p_1(TypeInfo_for_K_23, TypeInfo_for_V_24, TypeInfo_for_A_25, TypeInfo_for_B_26, Pred_7, R_14, STATE_VARIABLE_AccA_0_15, &STATE_VARIABLE_AccA_1_19, STATE_VARIABLE_AccB_0_17, &STATE_VARIABLE_AccB_1_20);
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_7, 1))));
          func_0(((MR_Box) (Pred_7)), K_11, V_12, STATE_VARIABLE_AccA_1_19, &STATE_VARIABLE_AccA_2_21, STATE_VARIABLE_AccB_1_20, &STATE_VARIABLE_AccB_2_22);
          // direct tailcall eliminated
          ;
          next_value_of_Tree_8 = L_13;
          next_value_of_STATE_VARIABLE_AccA_0_15 = STATE_VARIABLE_AccA_2_21;
          next_value_of_STATE_VARIABLE_AccB_0_17 = STATE_VARIABLE_AccB_2_22;
          Tree_8 = next_value_of_Tree_8;
          STATE_VARIABLE_AccA_0_15 = next_value_of_STATE_VARIABLE_AccA_0_15;
          STATE_VARIABLE_AccB_0_17 = next_value_of_STATE_VARIABLE_AccB_0_17;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__rbtree__foldr2_6_p_0(
  MR_Word TypeInfo_for_K_23,
  MR_Word TypeInfo_for_V_24,
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word Pred_7,
  MR_Word Tree_8,
  MR_Box STATE_VARIABLE_AccA_0_15,
  MR_Box * STATE_VARIABLE_AccA_16,
  MR_Box STATE_VARIABLE_AccB_0_17,
  MR_Box * STATE_VARIABLE_AccB_18)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Tree_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_AccA_16 = STATE_VARIABLE_AccA_0_15;
          *STATE_VARIABLE_AccB_18 = STATE_VARIABLE_AccB_0_17;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_27 = (MR_hl_field(1, Tree_8, 0));
          MR_Box V_28 = (MR_hl_field(1, Tree_8, 1));
          MR_Word L_29 = ((MR_Word) ((MR_hl_field(1, Tree_8, 2))));
          MR_Word R_30 = ((MR_Word) ((MR_hl_field(1, Tree_8, 3))));
          MR_Box STATE_VARIABLE_AccA_1_31;
          MR_Box STATE_VARIABLE_AccB_1_32;
          MR_Box STATE_VARIABLE_AccA_2_33;
          MR_Box STATE_VARIABLE_AccB_2_34;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_8;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_15;
          MR_Box next_value_of_STATE_VARIABLE_AccB_0_17;

          mercury__rbtree__foldr2_6_p_0(TypeInfo_for_K_23, TypeInfo_for_V_24, TypeInfo_for_A_25, TypeInfo_for_B_26, Pred_7, R_30, STATE_VARIABLE_AccA_0_15, &STATE_VARIABLE_AccA_1_31, STATE_VARIABLE_AccB_0_17, &STATE_VARIABLE_AccB_1_32);
          func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_7, 1))));
          func_1(((MR_Box) (Pred_7)), K_27, V_28, STATE_VARIABLE_AccA_1_31, &STATE_VARIABLE_AccA_2_33, STATE_VARIABLE_AccB_1_32, &STATE_VARIABLE_AccB_2_34);
          // direct tailcall eliminated
          ;
          next_value_of_Tree_8 = L_29;
          next_value_of_STATE_VARIABLE_AccA_0_15 = STATE_VARIABLE_AccA_2_33;
          next_value_of_STATE_VARIABLE_AccB_0_17 = STATE_VARIABLE_AccB_2_34;
          Tree_8 = next_value_of_Tree_8;
          STATE_VARIABLE_AccA_0_15 = next_value_of_STATE_VARIABLE_AccA_0_15;
          STATE_VARIABLE_AccB_0_17 = next_value_of_STATE_VARIABLE_AccB_0_17;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K_11 = (MR_hl_field(2, Tree_8, 0));
          MR_Box V_12 = (MR_hl_field(2, Tree_8, 1));
          MR_Word L_13 = ((MR_Word) ((MR_hl_field(2, Tree_8, 2))));
          MR_Word R_14 = ((MR_Word) ((MR_hl_field(2, Tree_8, 3))));
          MR_Box STATE_VARIABLE_AccA_1_19;
          MR_Box STATE_VARIABLE_AccB_1_20;
          MR_Box STATE_VARIABLE_AccA_2_21;
          MR_Box STATE_VARIABLE_AccB_2_22;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_8;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_15;
          MR_Box next_value_of_STATE_VARIABLE_AccB_0_17;

          mercury__rbtree__foldr2_6_p_0(TypeInfo_for_K_23, TypeInfo_for_V_24, TypeInfo_for_A_25, TypeInfo_for_B_26, Pred_7, R_14, STATE_VARIABLE_AccA_0_15, &STATE_VARIABLE_AccA_1_19, STATE_VARIABLE_AccB_0_17, &STATE_VARIABLE_AccB_1_20);
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_7, 1))));
          func_0(((MR_Box) (Pred_7)), K_11, V_12, STATE_VARIABLE_AccA_1_19, &STATE_VARIABLE_AccA_2_21, STATE_VARIABLE_AccB_1_20, &STATE_VARIABLE_AccB_2_22);
          // direct tailcall eliminated
          ;
          next_value_of_Tree_8 = L_13;
          next_value_of_STATE_VARIABLE_AccA_0_15 = STATE_VARIABLE_AccA_2_21;
          next_value_of_STATE_VARIABLE_AccB_0_17 = STATE_VARIABLE_AccB_2_22;
          Tree_8 = next_value_of_Tree_8;
          STATE_VARIABLE_AccA_0_15 = next_value_of_STATE_VARIABLE_AccA_0_15;
          STATE_VARIABLE_AccB_0_17 = next_value_of_STATE_VARIABLE_AccB_0_17;
          continue;
        }
        break;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__rbtree__foldr_4_p_5(
  MR_Word TypeInfo_for_K_16,
  MR_Word TypeInfo_for_V_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word Pred_5,
  MR_Word Tree_6,
  MR_Box STATE_VARIABLE_AccA_0_12,
  MR_Box * STATE_VARIABLE_AccA_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Tree_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_AccA_13 = STATE_VARIABLE_AccA_0_12;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_19 = (MR_hl_field(1, Tree_6, 0));
          MR_Box V_20 = (MR_hl_field(1, Tree_6, 1));
          MR_Word L_21 = ((MR_Word) ((MR_hl_field(1, Tree_6, 2))));
          MR_Word R_22 = ((MR_Word) ((MR_hl_field(1, Tree_6, 3))));
          MR_Box STATE_VARIABLE_AccA_1_23;
          MR_Box STATE_VARIABLE_AccA_2_24;
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_6;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_12;

          succeeded = mercury__rbtree__foldr_4_p_5(TypeInfo_for_K_16, TypeInfo_for_V_17, TypeInfo_for_A_18, Pred_5, R_22, STATE_VARIABLE_AccA_0_12, &STATE_VARIABLE_AccA_1_23);
          if (succeeded)
          {
            func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_5, 1))));
            succeeded = func_1(((MR_Box) (Pred_5)), K_19, V_20, STATE_VARIABLE_AccA_1_23, &STATE_VARIABLE_AccA_2_24);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_Tree_6 = L_21;
              next_value_of_STATE_VARIABLE_AccA_0_12 = STATE_VARIABLE_AccA_2_24;
              Tree_6 = next_value_of_Tree_6;
              STATE_VARIABLE_AccA_0_12 = next_value_of_STATE_VARIABLE_AccA_0_12;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K_8 = (MR_hl_field(2, Tree_6, 0));
          MR_Box V_9 = (MR_hl_field(2, Tree_6, 1));
          MR_Word L_10 = ((MR_Word) ((MR_hl_field(2, Tree_6, 2))));
          MR_Word R_11 = ((MR_Word) ((MR_hl_field(2, Tree_6, 3))));
          MR_Box STATE_VARIABLE_AccA_1_14;
          MR_Box STATE_VARIABLE_AccA_2_15;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_6;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_12;

          succeeded = mercury__rbtree__foldr_4_p_5(TypeInfo_for_K_16, TypeInfo_for_V_17, TypeInfo_for_A_18, Pred_5, R_11, STATE_VARIABLE_AccA_0_12, &STATE_VARIABLE_AccA_1_14);
          if (succeeded)
          {
            func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_5, 1))));
            succeeded = func_0(((MR_Box) (Pred_5)), K_8, V_9, STATE_VARIABLE_AccA_1_14, &STATE_VARIABLE_AccA_2_15);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_Tree_6 = L_10;
              next_value_of_STATE_VARIABLE_AccA_0_12 = STATE_VARIABLE_AccA_2_15;
              Tree_6 = next_value_of_Tree_6;
              STATE_VARIABLE_AccA_0_12 = next_value_of_STATE_VARIABLE_AccA_0_12;
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
mercury__rbtree__foldr_4_p_4(
  MR_Word TypeInfo_for_K_16,
  MR_Word TypeInfo_for_V_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word Pred_5,
  MR_Word Tree_6,
  MR_Box STATE_VARIABLE_AccA_0_12,
  MR_Box * STATE_VARIABLE_AccA_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Tree_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_AccA_13 = STATE_VARIABLE_AccA_0_12;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_19 = (MR_hl_field(1, Tree_6, 0));
          MR_Box V_20 = (MR_hl_field(1, Tree_6, 1));
          MR_Word L_21 = ((MR_Word) ((MR_hl_field(1, Tree_6, 2))));
          MR_Word R_22 = ((MR_Word) ((MR_hl_field(1, Tree_6, 3))));
          MR_Box STATE_VARIABLE_AccA_1_23;
          MR_Box STATE_VARIABLE_AccA_2_24;
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_6;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_12;

          succeeded = mercury__rbtree__foldr_4_p_4(TypeInfo_for_K_16, TypeInfo_for_V_17, TypeInfo_for_A_18, Pred_5, R_22, STATE_VARIABLE_AccA_0_12, &STATE_VARIABLE_AccA_1_23);
          if (succeeded)
          {
            func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_5, 1))));
            succeeded = func_1(((MR_Box) (Pred_5)), K_19, V_20, STATE_VARIABLE_AccA_1_23, &STATE_VARIABLE_AccA_2_24);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_Tree_6 = L_21;
              next_value_of_STATE_VARIABLE_AccA_0_12 = STATE_VARIABLE_AccA_2_24;
              Tree_6 = next_value_of_Tree_6;
              STATE_VARIABLE_AccA_0_12 = next_value_of_STATE_VARIABLE_AccA_0_12;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K_8 = (MR_hl_field(2, Tree_6, 0));
          MR_Box V_9 = (MR_hl_field(2, Tree_6, 1));
          MR_Word L_10 = ((MR_Word) ((MR_hl_field(2, Tree_6, 2))));
          MR_Word R_11 = ((MR_Word) ((MR_hl_field(2, Tree_6, 3))));
          MR_Box STATE_VARIABLE_AccA_1_14;
          MR_Box STATE_VARIABLE_AccA_2_15;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_6;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_12;

          succeeded = mercury__rbtree__foldr_4_p_4(TypeInfo_for_K_16, TypeInfo_for_V_17, TypeInfo_for_A_18, Pred_5, R_11, STATE_VARIABLE_AccA_0_12, &STATE_VARIABLE_AccA_1_14);
          if (succeeded)
          {
            func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_5, 1))));
            succeeded = func_0(((MR_Box) (Pred_5)), K_8, V_9, STATE_VARIABLE_AccA_1_14, &STATE_VARIABLE_AccA_2_15);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_Tree_6 = L_10;
              next_value_of_STATE_VARIABLE_AccA_0_12 = STATE_VARIABLE_AccA_2_15;
              Tree_6 = next_value_of_Tree_6;
              STATE_VARIABLE_AccA_0_12 = next_value_of_STATE_VARIABLE_AccA_0_12;
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
mercury__rbtree__foldr_4_p_3(
  MR_Word TypeInfo_for_K_16,
  MR_Word TypeInfo_for_V_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word Pred_5,
  MR_Word Tree_6,
  MR_Box STATE_VARIABLE_AccA_0_12,
  MR_Box * STATE_VARIABLE_AccA_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Tree_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_AccA_13 = STATE_VARIABLE_AccA_0_12;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_19 = (MR_hl_field(1, Tree_6, 0));
          MR_Box V_20 = (MR_hl_field(1, Tree_6, 1));
          MR_Word L_21 = ((MR_Word) ((MR_hl_field(1, Tree_6, 2))));
          MR_Word R_22 = ((MR_Word) ((MR_hl_field(1, Tree_6, 3))));
          MR_Box STATE_VARIABLE_AccA_1_23;
          MR_Box STATE_VARIABLE_AccA_2_24;
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_6;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_12;

          succeeded = mercury__rbtree__foldr_4_p_3(TypeInfo_for_K_16, TypeInfo_for_V_17, TypeInfo_for_A_18, Pred_5, R_22, STATE_VARIABLE_AccA_0_12, &STATE_VARIABLE_AccA_1_23);
          if (succeeded)
          {
            func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_5, 1))));
            succeeded = func_1(((MR_Box) (Pred_5)), K_19, V_20, STATE_VARIABLE_AccA_1_23, &STATE_VARIABLE_AccA_2_24);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_Tree_6 = L_21;
              next_value_of_STATE_VARIABLE_AccA_0_12 = STATE_VARIABLE_AccA_2_24;
              Tree_6 = next_value_of_Tree_6;
              STATE_VARIABLE_AccA_0_12 = next_value_of_STATE_VARIABLE_AccA_0_12;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K_8 = (MR_hl_field(2, Tree_6, 0));
          MR_Box V_9 = (MR_hl_field(2, Tree_6, 1));
          MR_Word L_10 = ((MR_Word) ((MR_hl_field(2, Tree_6, 2))));
          MR_Word R_11 = ((MR_Word) ((MR_hl_field(2, Tree_6, 3))));
          MR_Box STATE_VARIABLE_AccA_1_14;
          MR_Box STATE_VARIABLE_AccA_2_15;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_6;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_12;

          succeeded = mercury__rbtree__foldr_4_p_3(TypeInfo_for_K_16, TypeInfo_for_V_17, TypeInfo_for_A_18, Pred_5, R_11, STATE_VARIABLE_AccA_0_12, &STATE_VARIABLE_AccA_1_14);
          if (succeeded)
          {
            func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_5, 1))));
            succeeded = func_0(((MR_Box) (Pred_5)), K_8, V_9, STATE_VARIABLE_AccA_1_14, &STATE_VARIABLE_AccA_2_15);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_Tree_6 = L_10;
              next_value_of_STATE_VARIABLE_AccA_0_12 = STATE_VARIABLE_AccA_2_15;
              Tree_6 = next_value_of_Tree_6;
              STATE_VARIABLE_AccA_0_12 = next_value_of_STATE_VARIABLE_AccA_0_12;
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
mercury__rbtree__foldr_4_p_2(
  MR_Word TypeInfo_for_K_16,
  MR_Word TypeInfo_for_V_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word Pred_5,
  MR_Word Tree_6,
  MR_Box STATE_VARIABLE_AccA_0_12,
  MR_Box * STATE_VARIABLE_AccA_13)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Tree_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_AccA_13 = STATE_VARIABLE_AccA_0_12;
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_19 = (MR_hl_field(1, Tree_6, 0));
          MR_Box V_20 = (MR_hl_field(1, Tree_6, 1));
          MR_Word L_21 = ((MR_Word) ((MR_hl_field(1, Tree_6, 2))));
          MR_Word R_22 = ((MR_Word) ((MR_hl_field(1, Tree_6, 3))));
          MR_Box STATE_VARIABLE_AccA_1_23;
          MR_Box STATE_VARIABLE_AccA_2_24;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_6;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_12;

          mercury__rbtree__foldr_4_p_2(TypeInfo_for_K_16, TypeInfo_for_V_17, TypeInfo_for_A_18, Pred_5, R_22, STATE_VARIABLE_AccA_0_12, &STATE_VARIABLE_AccA_1_23);
          func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_5, 1))));
          func_1(((MR_Box) (Pred_5)), K_19, V_20, STATE_VARIABLE_AccA_1_23, &STATE_VARIABLE_AccA_2_24);
          // direct tailcall eliminated
          ;
          next_value_of_Tree_6 = L_21;
          next_value_of_STATE_VARIABLE_AccA_0_12 = STATE_VARIABLE_AccA_2_24;
          Tree_6 = next_value_of_Tree_6;
          STATE_VARIABLE_AccA_0_12 = next_value_of_STATE_VARIABLE_AccA_0_12;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K_8 = (MR_hl_field(2, Tree_6, 0));
          MR_Box V_9 = (MR_hl_field(2, Tree_6, 1));
          MR_Word L_10 = ((MR_Word) ((MR_hl_field(2, Tree_6, 2))));
          MR_Word R_11 = ((MR_Word) ((MR_hl_field(2, Tree_6, 3))));
          MR_Box STATE_VARIABLE_AccA_1_14;
          MR_Box STATE_VARIABLE_AccA_2_15;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_6;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_12;

          mercury__rbtree__foldr_4_p_2(TypeInfo_for_K_16, TypeInfo_for_V_17, TypeInfo_for_A_18, Pred_5, R_11, STATE_VARIABLE_AccA_0_12, &STATE_VARIABLE_AccA_1_14);
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_5, 1))));
          func_0(((MR_Box) (Pred_5)), K_8, V_9, STATE_VARIABLE_AccA_1_14, &STATE_VARIABLE_AccA_2_15);
          // direct tailcall eliminated
          ;
          next_value_of_Tree_6 = L_10;
          next_value_of_STATE_VARIABLE_AccA_0_12 = STATE_VARIABLE_AccA_2_15;
          Tree_6 = next_value_of_Tree_6;
          STATE_VARIABLE_AccA_0_12 = next_value_of_STATE_VARIABLE_AccA_0_12;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__rbtree__foldr_4_p_1(
  MR_Word TypeInfo_for_K_16,
  MR_Word TypeInfo_for_V_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word Pred_5,
  MR_Word Tree_6,
  MR_Box STATE_VARIABLE_AccA_0_12,
  MR_Box * STATE_VARIABLE_AccA_13)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Tree_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_AccA_13 = STATE_VARIABLE_AccA_0_12;
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_19 = (MR_hl_field(1, Tree_6, 0));
          MR_Box V_20 = (MR_hl_field(1, Tree_6, 1));
          MR_Word L_21 = ((MR_Word) ((MR_hl_field(1, Tree_6, 2))));
          MR_Word R_22 = ((MR_Word) ((MR_hl_field(1, Tree_6, 3))));
          MR_Box STATE_VARIABLE_AccA_1_23;
          MR_Box STATE_VARIABLE_AccA_2_24;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_6;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_12;

          mercury__rbtree__foldr_4_p_1(TypeInfo_for_K_16, TypeInfo_for_V_17, TypeInfo_for_A_18, Pred_5, R_22, STATE_VARIABLE_AccA_0_12, &STATE_VARIABLE_AccA_1_23);
          func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_5, 1))));
          func_1(((MR_Box) (Pred_5)), K_19, V_20, STATE_VARIABLE_AccA_1_23, &STATE_VARIABLE_AccA_2_24);
          // direct tailcall eliminated
          ;
          next_value_of_Tree_6 = L_21;
          next_value_of_STATE_VARIABLE_AccA_0_12 = STATE_VARIABLE_AccA_2_24;
          Tree_6 = next_value_of_Tree_6;
          STATE_VARIABLE_AccA_0_12 = next_value_of_STATE_VARIABLE_AccA_0_12;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K_8 = (MR_hl_field(2, Tree_6, 0));
          MR_Box V_9 = (MR_hl_field(2, Tree_6, 1));
          MR_Word L_10 = ((MR_Word) ((MR_hl_field(2, Tree_6, 2))));
          MR_Word R_11 = ((MR_Word) ((MR_hl_field(2, Tree_6, 3))));
          MR_Box STATE_VARIABLE_AccA_1_14;
          MR_Box STATE_VARIABLE_AccA_2_15;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_6;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_12;

          mercury__rbtree__foldr_4_p_1(TypeInfo_for_K_16, TypeInfo_for_V_17, TypeInfo_for_A_18, Pred_5, R_11, STATE_VARIABLE_AccA_0_12, &STATE_VARIABLE_AccA_1_14);
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_5, 1))));
          func_0(((MR_Box) (Pred_5)), K_8, V_9, STATE_VARIABLE_AccA_1_14, &STATE_VARIABLE_AccA_2_15);
          // direct tailcall eliminated
          ;
          next_value_of_Tree_6 = L_10;
          next_value_of_STATE_VARIABLE_AccA_0_12 = STATE_VARIABLE_AccA_2_15;
          Tree_6 = next_value_of_Tree_6;
          STATE_VARIABLE_AccA_0_12 = next_value_of_STATE_VARIABLE_AccA_0_12;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__rbtree__foldr_4_p_0(
  MR_Word TypeInfo_for_K_16,
  MR_Word TypeInfo_for_V_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word Pred_5,
  MR_Word Tree_6,
  MR_Box STATE_VARIABLE_AccA_0_12,
  MR_Box * STATE_VARIABLE_AccA_13)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Tree_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_AccA_13 = STATE_VARIABLE_AccA_0_12;
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_19 = (MR_hl_field(1, Tree_6, 0));
          MR_Box V_20 = (MR_hl_field(1, Tree_6, 1));
          MR_Word L_21 = ((MR_Word) ((MR_hl_field(1, Tree_6, 2))));
          MR_Word R_22 = ((MR_Word) ((MR_hl_field(1, Tree_6, 3))));
          MR_Box STATE_VARIABLE_AccA_1_23;
          MR_Box STATE_VARIABLE_AccA_2_24;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_6;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_12;

          mercury__rbtree__foldr_4_p_0(TypeInfo_for_K_16, TypeInfo_for_V_17, TypeInfo_for_A_18, Pred_5, R_22, STATE_VARIABLE_AccA_0_12, &STATE_VARIABLE_AccA_1_23);
          func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_5, 1))));
          func_1(((MR_Box) (Pred_5)), K_19, V_20, STATE_VARIABLE_AccA_1_23, &STATE_VARIABLE_AccA_2_24);
          // direct tailcall eliminated
          ;
          next_value_of_Tree_6 = L_21;
          next_value_of_STATE_VARIABLE_AccA_0_12 = STATE_VARIABLE_AccA_2_24;
          Tree_6 = next_value_of_Tree_6;
          STATE_VARIABLE_AccA_0_12 = next_value_of_STATE_VARIABLE_AccA_0_12;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K_8 = (MR_hl_field(2, Tree_6, 0));
          MR_Box V_9 = (MR_hl_field(2, Tree_6, 1));
          MR_Word L_10 = ((MR_Word) ((MR_hl_field(2, Tree_6, 2))));
          MR_Word R_11 = ((MR_Word) ((MR_hl_field(2, Tree_6, 3))));
          MR_Box STATE_VARIABLE_AccA_1_14;
          MR_Box STATE_VARIABLE_AccA_2_15;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_6;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_12;

          mercury__rbtree__foldr_4_p_0(TypeInfo_for_K_16, TypeInfo_for_V_17, TypeInfo_for_A_18, Pred_5, R_11, STATE_VARIABLE_AccA_0_12, &STATE_VARIABLE_AccA_1_14);
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_5, 1))));
          func_0(((MR_Box) (Pred_5)), K_8, V_9, STATE_VARIABLE_AccA_1_14, &STATE_VARIABLE_AccA_2_15);
          // direct tailcall eliminated
          ;
          next_value_of_Tree_6 = L_10;
          next_value_of_STATE_VARIABLE_AccA_0_12 = STATE_VARIABLE_AccA_2_15;
          Tree_6 = next_value_of_Tree_6;
          STATE_VARIABLE_AccA_0_12 = next_value_of_STATE_VARIABLE_AccA_0_12;
          continue;
        }
        break;
    }
    break;
  }
}

MR_Box MR_CALL 
mercury__rbtree__foldr_3_f_0(
  MR_Word TypeInfo_for_K_22,
  MR_Word TypeInfo_for_V_23,
  MR_Word TypeInfo_for_A_24,
  MR_Word F_5,
  MR_Word T_6,
  MR_Box Acc0_7)
{
  MR_Box Acc_8;

  mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_50_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_0(F_5, T_6, Acc0_7, &Acc_8);
  return Acc_8;
}

static void MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_50_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_0(
  MR_Word Var_28,
  MR_Word Tree_6,
  MR_Box STATE_VARIABLE_AccA_0_12,
  MR_Box * STATE_VARIABLE_AccA_13)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Tree_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_AccA_13 = STATE_VARIABLE_AccA_0_12;
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_19 = (MR_hl_field(1, Tree_6, 0));
          MR_Box V_20 = (MR_hl_field(1, Tree_6, 1));
          MR_Word L_21 = ((MR_Word) ((MR_hl_field(1, Tree_6, 2))));
          MR_Word R_22 = ((MR_Word) ((MR_hl_field(1, Tree_6, 3))));
          MR_Box STATE_VARIABLE_AccA_1_23;
          MR_Box STATE_VARIABLE_AccA_2_24;
          MR_Box MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box);
          MR_Word next_value_of_Tree_6;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_12;

          mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_50_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_0(Var_28, R_22, STATE_VARIABLE_AccA_0_12, &STATE_VARIABLE_AccA_1_23);
          func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, Var_28, 1))));
          STATE_VARIABLE_AccA_2_24 = func_1(((MR_Box) (Var_28)), K_19, V_20, STATE_VARIABLE_AccA_1_23);
          // direct tailcall eliminated
          ;
          next_value_of_Tree_6 = L_21;
          next_value_of_STATE_VARIABLE_AccA_0_12 = STATE_VARIABLE_AccA_2_24;
          Tree_6 = next_value_of_Tree_6;
          STATE_VARIABLE_AccA_0_12 = next_value_of_STATE_VARIABLE_AccA_0_12;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K_8 = (MR_hl_field(2, Tree_6, 0));
          MR_Box V_9 = (MR_hl_field(2, Tree_6, 1));
          MR_Word L_10 = ((MR_Word) ((MR_hl_field(2, Tree_6, 2))));
          MR_Word R_11 = ((MR_Word) ((MR_hl_field(2, Tree_6, 3))));
          MR_Box STATE_VARIABLE_AccA_1_14;
          MR_Box STATE_VARIABLE_AccA_2_15;
          MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box);
          MR_Word next_value_of_Tree_6;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_12;

          mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_114_95_95_104_111_50_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_0(Var_28, R_11, STATE_VARIABLE_AccA_0_12, &STATE_VARIABLE_AccA_1_14);
          func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, Var_28, 1))));
          STATE_VARIABLE_AccA_2_15 = func_0(((MR_Box) (Var_28)), K_8, V_9, STATE_VARIABLE_AccA_1_14);
          // direct tailcall eliminated
          ;
          next_value_of_Tree_6 = L_10;
          next_value_of_STATE_VARIABLE_AccA_0_12 = STATE_VARIABLE_AccA_2_15;
          Tree_6 = next_value_of_Tree_6;
          STATE_VARIABLE_AccA_0_12 = next_value_of_STATE_VARIABLE_AccA_0_12;
          continue;
        }
        break;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__rbtree__foldl2_values_6_p_5(
  MR_Word TypeInfo_for_V_26,
  MR_Word TypeInfo_for_A_27,
  MR_Word TypeInfo_for_B_28,
  MR_Word TypeInfo_for_K_29,
  MR_Word Pred_7,
  MR_Word Tree_8,
  MR_Box STATE_VARIABLE_AccA_0_15,
  MR_Box * STATE_VARIABLE_AccA_16,
  MR_Box STATE_VARIABLE_AccB_0_17,
  MR_Box * STATE_VARIABLE_AccB_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Tree_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_AccA_16 = STATE_VARIABLE_AccA_0_15;
          *STATE_VARIABLE_AccB_18 = STATE_VARIABLE_AccB_0_17;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box V_30 = (MR_hl_field(1, Tree_8, 1));
          MR_Word L_31 = ((MR_Word) ((MR_hl_field(1, Tree_8, 2))));
          MR_Word R_32 = ((MR_Word) ((MR_hl_field(1, Tree_8, 3))));
          MR_Box STATE_VARIABLE_AccA_1_33;
          MR_Box STATE_VARIABLE_AccB_1_34;
          MR_Box STATE_VARIABLE_AccA_2_35;
          MR_Box STATE_VARIABLE_AccB_2_36;
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_8;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_15;
          MR_Box next_value_of_STATE_VARIABLE_AccB_0_17;

          succeeded = mercury__rbtree__foldl2_values_6_p_5(TypeInfo_for_V_26, TypeInfo_for_A_27, TypeInfo_for_B_28, TypeInfo_for_K_29, Pred_7, L_31, STATE_VARIABLE_AccA_0_15, &STATE_VARIABLE_AccA_1_33, STATE_VARIABLE_AccB_0_17, &STATE_VARIABLE_AccB_1_34);
          if (succeeded)
          {
            func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_7, 1))));
            succeeded = func_1(((MR_Box) (Pred_7)), V_30, STATE_VARIABLE_AccA_1_33, &STATE_VARIABLE_AccA_2_35, STATE_VARIABLE_AccB_1_34, &STATE_VARIABLE_AccB_2_36);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_Tree_8 = R_32;
              next_value_of_STATE_VARIABLE_AccA_0_15 = STATE_VARIABLE_AccA_2_35;
              next_value_of_STATE_VARIABLE_AccB_0_17 = STATE_VARIABLE_AccB_2_36;
              Tree_8 = next_value_of_Tree_8;
              STATE_VARIABLE_AccA_0_15 = next_value_of_STATE_VARIABLE_AccA_0_15;
              STATE_VARIABLE_AccB_0_17 = next_value_of_STATE_VARIABLE_AccB_0_17;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box V_12 = (MR_hl_field(2, Tree_8, 1));
          MR_Word L_13 = ((MR_Word) ((MR_hl_field(2, Tree_8, 2))));
          MR_Word R_14 = ((MR_Word) ((MR_hl_field(2, Tree_8, 3))));
          MR_Box STATE_VARIABLE_AccA_1_19;
          MR_Box STATE_VARIABLE_AccB_1_20;
          MR_Box STATE_VARIABLE_AccA_2_21;
          MR_Box STATE_VARIABLE_AccB_2_22;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_8;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_15;
          MR_Box next_value_of_STATE_VARIABLE_AccB_0_17;

          succeeded = mercury__rbtree__foldl2_values_6_p_5(TypeInfo_for_V_26, TypeInfo_for_A_27, TypeInfo_for_B_28, TypeInfo_for_K_29, Pred_7, L_13, STATE_VARIABLE_AccA_0_15, &STATE_VARIABLE_AccA_1_19, STATE_VARIABLE_AccB_0_17, &STATE_VARIABLE_AccB_1_20);
          if (succeeded)
          {
            func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_7, 1))));
            succeeded = func_0(((MR_Box) (Pred_7)), V_12, STATE_VARIABLE_AccA_1_19, &STATE_VARIABLE_AccA_2_21, STATE_VARIABLE_AccB_1_20, &STATE_VARIABLE_AccB_2_22);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_Tree_8 = R_14;
              next_value_of_STATE_VARIABLE_AccA_0_15 = STATE_VARIABLE_AccA_2_21;
              next_value_of_STATE_VARIABLE_AccB_0_17 = STATE_VARIABLE_AccB_2_22;
              Tree_8 = next_value_of_Tree_8;
              STATE_VARIABLE_AccA_0_15 = next_value_of_STATE_VARIABLE_AccA_0_15;
              STATE_VARIABLE_AccB_0_17 = next_value_of_STATE_VARIABLE_AccB_0_17;
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
  MR_Word TypeInfo_for_V_26,
  MR_Word TypeInfo_for_A_27,
  MR_Word TypeInfo_for_B_28,
  MR_Word TypeInfo_for_K_29,
  MR_Word Pred_7,
  MR_Word Tree_8,
  MR_Box STATE_VARIABLE_AccA_0_15,
  MR_Box * STATE_VARIABLE_AccA_16,
  MR_Box STATE_VARIABLE_AccB_0_17,
  MR_Box * STATE_VARIABLE_AccB_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Tree_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_AccA_16 = STATE_VARIABLE_AccA_0_15;
          *STATE_VARIABLE_AccB_18 = STATE_VARIABLE_AccB_0_17;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box V_30 = (MR_hl_field(1, Tree_8, 1));
          MR_Word L_31 = ((MR_Word) ((MR_hl_field(1, Tree_8, 2))));
          MR_Word R_32 = ((MR_Word) ((MR_hl_field(1, Tree_8, 3))));
          MR_Box STATE_VARIABLE_AccA_1_33;
          MR_Box STATE_VARIABLE_AccB_1_34;
          MR_Box STATE_VARIABLE_AccA_2_35;
          MR_Box STATE_VARIABLE_AccB_2_36;
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_8;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_15;
          MR_Box next_value_of_STATE_VARIABLE_AccB_0_17;

          succeeded = mercury__rbtree__foldl2_values_6_p_4(TypeInfo_for_V_26, TypeInfo_for_A_27, TypeInfo_for_B_28, TypeInfo_for_K_29, Pred_7, L_31, STATE_VARIABLE_AccA_0_15, &STATE_VARIABLE_AccA_1_33, STATE_VARIABLE_AccB_0_17, &STATE_VARIABLE_AccB_1_34);
          if (succeeded)
          {
            func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_7, 1))));
            succeeded = func_1(((MR_Box) (Pred_7)), V_30, STATE_VARIABLE_AccA_1_33, &STATE_VARIABLE_AccA_2_35, STATE_VARIABLE_AccB_1_34, &STATE_VARIABLE_AccB_2_36);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_Tree_8 = R_32;
              next_value_of_STATE_VARIABLE_AccA_0_15 = STATE_VARIABLE_AccA_2_35;
              next_value_of_STATE_VARIABLE_AccB_0_17 = STATE_VARIABLE_AccB_2_36;
              Tree_8 = next_value_of_Tree_8;
              STATE_VARIABLE_AccA_0_15 = next_value_of_STATE_VARIABLE_AccA_0_15;
              STATE_VARIABLE_AccB_0_17 = next_value_of_STATE_VARIABLE_AccB_0_17;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box V_12 = (MR_hl_field(2, Tree_8, 1));
          MR_Word L_13 = ((MR_Word) ((MR_hl_field(2, Tree_8, 2))));
          MR_Word R_14 = ((MR_Word) ((MR_hl_field(2, Tree_8, 3))));
          MR_Box STATE_VARIABLE_AccA_1_19;
          MR_Box STATE_VARIABLE_AccB_1_20;
          MR_Box STATE_VARIABLE_AccA_2_21;
          MR_Box STATE_VARIABLE_AccB_2_22;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_8;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_15;
          MR_Box next_value_of_STATE_VARIABLE_AccB_0_17;

          succeeded = mercury__rbtree__foldl2_values_6_p_4(TypeInfo_for_V_26, TypeInfo_for_A_27, TypeInfo_for_B_28, TypeInfo_for_K_29, Pred_7, L_13, STATE_VARIABLE_AccA_0_15, &STATE_VARIABLE_AccA_1_19, STATE_VARIABLE_AccB_0_17, &STATE_VARIABLE_AccB_1_20);
          if (succeeded)
          {
            func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_7, 1))));
            succeeded = func_0(((MR_Box) (Pred_7)), V_12, STATE_VARIABLE_AccA_1_19, &STATE_VARIABLE_AccA_2_21, STATE_VARIABLE_AccB_1_20, &STATE_VARIABLE_AccB_2_22);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_Tree_8 = R_14;
              next_value_of_STATE_VARIABLE_AccA_0_15 = STATE_VARIABLE_AccA_2_21;
              next_value_of_STATE_VARIABLE_AccB_0_17 = STATE_VARIABLE_AccB_2_22;
              Tree_8 = next_value_of_Tree_8;
              STATE_VARIABLE_AccA_0_15 = next_value_of_STATE_VARIABLE_AccA_0_15;
              STATE_VARIABLE_AccB_0_17 = next_value_of_STATE_VARIABLE_AccB_0_17;
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
  MR_Word TypeInfo_for_V_26,
  MR_Word TypeInfo_for_A_27,
  MR_Word TypeInfo_for_B_28,
  MR_Word TypeInfo_for_K_29,
  MR_Word Pred_7,
  MR_Word Tree_8,
  MR_Box STATE_VARIABLE_AccA_0_15,
  MR_Box * STATE_VARIABLE_AccA_16,
  MR_Box STATE_VARIABLE_AccB_0_17,
  MR_Box * STATE_VARIABLE_AccB_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Tree_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_AccA_16 = STATE_VARIABLE_AccA_0_15;
          *STATE_VARIABLE_AccB_18 = STATE_VARIABLE_AccB_0_17;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box V_30 = (MR_hl_field(1, Tree_8, 1));
          MR_Word L_31 = ((MR_Word) ((MR_hl_field(1, Tree_8, 2))));
          MR_Word R_32 = ((MR_Word) ((MR_hl_field(1, Tree_8, 3))));
          MR_Box STATE_VARIABLE_AccA_1_33;
          MR_Box STATE_VARIABLE_AccB_1_34;
          MR_Box STATE_VARIABLE_AccA_2_35;
          MR_Box STATE_VARIABLE_AccB_2_36;
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_8;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_15;
          MR_Box next_value_of_STATE_VARIABLE_AccB_0_17;

          succeeded = mercury__rbtree__foldl2_values_6_p_3(TypeInfo_for_V_26, TypeInfo_for_A_27, TypeInfo_for_B_28, TypeInfo_for_K_29, Pred_7, L_31, STATE_VARIABLE_AccA_0_15, &STATE_VARIABLE_AccA_1_33, STATE_VARIABLE_AccB_0_17, &STATE_VARIABLE_AccB_1_34);
          if (succeeded)
          {
            func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_7, 1))));
            succeeded = func_1(((MR_Box) (Pred_7)), V_30, STATE_VARIABLE_AccA_1_33, &STATE_VARIABLE_AccA_2_35, STATE_VARIABLE_AccB_1_34, &STATE_VARIABLE_AccB_2_36);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_Tree_8 = R_32;
              next_value_of_STATE_VARIABLE_AccA_0_15 = STATE_VARIABLE_AccA_2_35;
              next_value_of_STATE_VARIABLE_AccB_0_17 = STATE_VARIABLE_AccB_2_36;
              Tree_8 = next_value_of_Tree_8;
              STATE_VARIABLE_AccA_0_15 = next_value_of_STATE_VARIABLE_AccA_0_15;
              STATE_VARIABLE_AccB_0_17 = next_value_of_STATE_VARIABLE_AccB_0_17;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box V_12 = (MR_hl_field(2, Tree_8, 1));
          MR_Word L_13 = ((MR_Word) ((MR_hl_field(2, Tree_8, 2))));
          MR_Word R_14 = ((MR_Word) ((MR_hl_field(2, Tree_8, 3))));
          MR_Box STATE_VARIABLE_AccA_1_19;
          MR_Box STATE_VARIABLE_AccB_1_20;
          MR_Box STATE_VARIABLE_AccA_2_21;
          MR_Box STATE_VARIABLE_AccB_2_22;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_8;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_15;
          MR_Box next_value_of_STATE_VARIABLE_AccB_0_17;

          succeeded = mercury__rbtree__foldl2_values_6_p_3(TypeInfo_for_V_26, TypeInfo_for_A_27, TypeInfo_for_B_28, TypeInfo_for_K_29, Pred_7, L_13, STATE_VARIABLE_AccA_0_15, &STATE_VARIABLE_AccA_1_19, STATE_VARIABLE_AccB_0_17, &STATE_VARIABLE_AccB_1_20);
          if (succeeded)
          {
            func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_7, 1))));
            succeeded = func_0(((MR_Box) (Pred_7)), V_12, STATE_VARIABLE_AccA_1_19, &STATE_VARIABLE_AccA_2_21, STATE_VARIABLE_AccB_1_20, &STATE_VARIABLE_AccB_2_22);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_Tree_8 = R_14;
              next_value_of_STATE_VARIABLE_AccA_0_15 = STATE_VARIABLE_AccA_2_21;
              next_value_of_STATE_VARIABLE_AccB_0_17 = STATE_VARIABLE_AccB_2_22;
              Tree_8 = next_value_of_Tree_8;
              STATE_VARIABLE_AccA_0_15 = next_value_of_STATE_VARIABLE_AccA_0_15;
              STATE_VARIABLE_AccB_0_17 = next_value_of_STATE_VARIABLE_AccB_0_17;
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
  MR_Word TypeInfo_for_V_26,
  MR_Word TypeInfo_for_A_27,
  MR_Word TypeInfo_for_B_28,
  MR_Word TypeInfo_for_K_29,
  MR_Word Pred_7,
  MR_Word Tree_8,
  MR_Box STATE_VARIABLE_AccA_0_15,
  MR_Box * STATE_VARIABLE_AccA_16,
  MR_Box STATE_VARIABLE_AccB_0_17,
  MR_Box * STATE_VARIABLE_AccB_18)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Tree_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_AccA_16 = STATE_VARIABLE_AccA_0_15;
          *STATE_VARIABLE_AccB_18 = STATE_VARIABLE_AccB_0_17;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box V_30 = (MR_hl_field(1, Tree_8, 1));
          MR_Word L_31 = ((MR_Word) ((MR_hl_field(1, Tree_8, 2))));
          MR_Word R_32 = ((MR_Word) ((MR_hl_field(1, Tree_8, 3))));
          MR_Box STATE_VARIABLE_AccA_1_33;
          MR_Box STATE_VARIABLE_AccB_1_34;
          MR_Box STATE_VARIABLE_AccA_2_35;
          MR_Box STATE_VARIABLE_AccB_2_36;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_8;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_15;
          MR_Box next_value_of_STATE_VARIABLE_AccB_0_17;

          mercury__rbtree__foldl2_values_6_p_2(TypeInfo_for_V_26, TypeInfo_for_A_27, TypeInfo_for_B_28, TypeInfo_for_K_29, Pred_7, L_31, STATE_VARIABLE_AccA_0_15, &STATE_VARIABLE_AccA_1_33, STATE_VARIABLE_AccB_0_17, &STATE_VARIABLE_AccB_1_34);
          func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_7, 1))));
          func_1(((MR_Box) (Pred_7)), V_30, STATE_VARIABLE_AccA_1_33, &STATE_VARIABLE_AccA_2_35, STATE_VARIABLE_AccB_1_34, &STATE_VARIABLE_AccB_2_36);
          // direct tailcall eliminated
          ;
          next_value_of_Tree_8 = R_32;
          next_value_of_STATE_VARIABLE_AccA_0_15 = STATE_VARIABLE_AccA_2_35;
          next_value_of_STATE_VARIABLE_AccB_0_17 = STATE_VARIABLE_AccB_2_36;
          Tree_8 = next_value_of_Tree_8;
          STATE_VARIABLE_AccA_0_15 = next_value_of_STATE_VARIABLE_AccA_0_15;
          STATE_VARIABLE_AccB_0_17 = next_value_of_STATE_VARIABLE_AccB_0_17;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box V_12 = (MR_hl_field(2, Tree_8, 1));
          MR_Word L_13 = ((MR_Word) ((MR_hl_field(2, Tree_8, 2))));
          MR_Word R_14 = ((MR_Word) ((MR_hl_field(2, Tree_8, 3))));
          MR_Box STATE_VARIABLE_AccA_1_19;
          MR_Box STATE_VARIABLE_AccB_1_20;
          MR_Box STATE_VARIABLE_AccA_2_21;
          MR_Box STATE_VARIABLE_AccB_2_22;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_8;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_15;
          MR_Box next_value_of_STATE_VARIABLE_AccB_0_17;

          mercury__rbtree__foldl2_values_6_p_2(TypeInfo_for_V_26, TypeInfo_for_A_27, TypeInfo_for_B_28, TypeInfo_for_K_29, Pred_7, L_13, STATE_VARIABLE_AccA_0_15, &STATE_VARIABLE_AccA_1_19, STATE_VARIABLE_AccB_0_17, &STATE_VARIABLE_AccB_1_20);
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_7, 1))));
          func_0(((MR_Box) (Pred_7)), V_12, STATE_VARIABLE_AccA_1_19, &STATE_VARIABLE_AccA_2_21, STATE_VARIABLE_AccB_1_20, &STATE_VARIABLE_AccB_2_22);
          // direct tailcall eliminated
          ;
          next_value_of_Tree_8 = R_14;
          next_value_of_STATE_VARIABLE_AccA_0_15 = STATE_VARIABLE_AccA_2_21;
          next_value_of_STATE_VARIABLE_AccB_0_17 = STATE_VARIABLE_AccB_2_22;
          Tree_8 = next_value_of_Tree_8;
          STATE_VARIABLE_AccA_0_15 = next_value_of_STATE_VARIABLE_AccA_0_15;
          STATE_VARIABLE_AccB_0_17 = next_value_of_STATE_VARIABLE_AccB_0_17;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__rbtree__foldl2_values_6_p_1(
  MR_Word TypeInfo_for_V_26,
  MR_Word TypeInfo_for_A_27,
  MR_Word TypeInfo_for_B_28,
  MR_Word TypeInfo_for_K_29,
  MR_Word Pred_7,
  MR_Word Tree_8,
  MR_Box STATE_VARIABLE_AccA_0_15,
  MR_Box * STATE_VARIABLE_AccA_16,
  MR_Box STATE_VARIABLE_AccB_0_17,
  MR_Box * STATE_VARIABLE_AccB_18)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Tree_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_AccA_16 = STATE_VARIABLE_AccA_0_15;
          *STATE_VARIABLE_AccB_18 = STATE_VARIABLE_AccB_0_17;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box V_30 = (MR_hl_field(1, Tree_8, 1));
          MR_Word L_31 = ((MR_Word) ((MR_hl_field(1, Tree_8, 2))));
          MR_Word R_32 = ((MR_Word) ((MR_hl_field(1, Tree_8, 3))));
          MR_Box STATE_VARIABLE_AccA_1_33;
          MR_Box STATE_VARIABLE_AccB_1_34;
          MR_Box STATE_VARIABLE_AccA_2_35;
          MR_Box STATE_VARIABLE_AccB_2_36;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_8;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_15;
          MR_Box next_value_of_STATE_VARIABLE_AccB_0_17;

          mercury__rbtree__foldl2_values_6_p_1(TypeInfo_for_V_26, TypeInfo_for_A_27, TypeInfo_for_B_28, TypeInfo_for_K_29, Pred_7, L_31, STATE_VARIABLE_AccA_0_15, &STATE_VARIABLE_AccA_1_33, STATE_VARIABLE_AccB_0_17, &STATE_VARIABLE_AccB_1_34);
          func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_7, 1))));
          func_1(((MR_Box) (Pred_7)), V_30, STATE_VARIABLE_AccA_1_33, &STATE_VARIABLE_AccA_2_35, STATE_VARIABLE_AccB_1_34, &STATE_VARIABLE_AccB_2_36);
          // direct tailcall eliminated
          ;
          next_value_of_Tree_8 = R_32;
          next_value_of_STATE_VARIABLE_AccA_0_15 = STATE_VARIABLE_AccA_2_35;
          next_value_of_STATE_VARIABLE_AccB_0_17 = STATE_VARIABLE_AccB_2_36;
          Tree_8 = next_value_of_Tree_8;
          STATE_VARIABLE_AccA_0_15 = next_value_of_STATE_VARIABLE_AccA_0_15;
          STATE_VARIABLE_AccB_0_17 = next_value_of_STATE_VARIABLE_AccB_0_17;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box V_12 = (MR_hl_field(2, Tree_8, 1));
          MR_Word L_13 = ((MR_Word) ((MR_hl_field(2, Tree_8, 2))));
          MR_Word R_14 = ((MR_Word) ((MR_hl_field(2, Tree_8, 3))));
          MR_Box STATE_VARIABLE_AccA_1_19;
          MR_Box STATE_VARIABLE_AccB_1_20;
          MR_Box STATE_VARIABLE_AccA_2_21;
          MR_Box STATE_VARIABLE_AccB_2_22;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_8;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_15;
          MR_Box next_value_of_STATE_VARIABLE_AccB_0_17;

          mercury__rbtree__foldl2_values_6_p_1(TypeInfo_for_V_26, TypeInfo_for_A_27, TypeInfo_for_B_28, TypeInfo_for_K_29, Pred_7, L_13, STATE_VARIABLE_AccA_0_15, &STATE_VARIABLE_AccA_1_19, STATE_VARIABLE_AccB_0_17, &STATE_VARIABLE_AccB_1_20);
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_7, 1))));
          func_0(((MR_Box) (Pred_7)), V_12, STATE_VARIABLE_AccA_1_19, &STATE_VARIABLE_AccA_2_21, STATE_VARIABLE_AccB_1_20, &STATE_VARIABLE_AccB_2_22);
          // direct tailcall eliminated
          ;
          next_value_of_Tree_8 = R_14;
          next_value_of_STATE_VARIABLE_AccA_0_15 = STATE_VARIABLE_AccA_2_21;
          next_value_of_STATE_VARIABLE_AccB_0_17 = STATE_VARIABLE_AccB_2_22;
          Tree_8 = next_value_of_Tree_8;
          STATE_VARIABLE_AccA_0_15 = next_value_of_STATE_VARIABLE_AccA_0_15;
          STATE_VARIABLE_AccB_0_17 = next_value_of_STATE_VARIABLE_AccB_0_17;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__rbtree__foldl2_values_6_p_0(
  MR_Word TypeInfo_for_V_26,
  MR_Word TypeInfo_for_A_27,
  MR_Word TypeInfo_for_B_28,
  MR_Word TypeInfo_for_K_29,
  MR_Word Pred_7,
  MR_Word Tree_8,
  MR_Box STATE_VARIABLE_AccA_0_15,
  MR_Box * STATE_VARIABLE_AccA_16,
  MR_Box STATE_VARIABLE_AccB_0_17,
  MR_Box * STATE_VARIABLE_AccB_18)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Tree_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_AccA_16 = STATE_VARIABLE_AccA_0_15;
          *STATE_VARIABLE_AccB_18 = STATE_VARIABLE_AccB_0_17;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box V_30 = (MR_hl_field(1, Tree_8, 1));
          MR_Word L_31 = ((MR_Word) ((MR_hl_field(1, Tree_8, 2))));
          MR_Word R_32 = ((MR_Word) ((MR_hl_field(1, Tree_8, 3))));
          MR_Box STATE_VARIABLE_AccA_1_33;
          MR_Box STATE_VARIABLE_AccB_1_34;
          MR_Box STATE_VARIABLE_AccA_2_35;
          MR_Box STATE_VARIABLE_AccB_2_36;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_8;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_15;
          MR_Box next_value_of_STATE_VARIABLE_AccB_0_17;

          mercury__rbtree__foldl2_values_6_p_0(TypeInfo_for_V_26, TypeInfo_for_A_27, TypeInfo_for_B_28, TypeInfo_for_K_29, Pred_7, L_31, STATE_VARIABLE_AccA_0_15, &STATE_VARIABLE_AccA_1_33, STATE_VARIABLE_AccB_0_17, &STATE_VARIABLE_AccB_1_34);
          func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_7, 1))));
          func_1(((MR_Box) (Pred_7)), V_30, STATE_VARIABLE_AccA_1_33, &STATE_VARIABLE_AccA_2_35, STATE_VARIABLE_AccB_1_34, &STATE_VARIABLE_AccB_2_36);
          // direct tailcall eliminated
          ;
          next_value_of_Tree_8 = R_32;
          next_value_of_STATE_VARIABLE_AccA_0_15 = STATE_VARIABLE_AccA_2_35;
          next_value_of_STATE_VARIABLE_AccB_0_17 = STATE_VARIABLE_AccB_2_36;
          Tree_8 = next_value_of_Tree_8;
          STATE_VARIABLE_AccA_0_15 = next_value_of_STATE_VARIABLE_AccA_0_15;
          STATE_VARIABLE_AccB_0_17 = next_value_of_STATE_VARIABLE_AccB_0_17;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box V_12 = (MR_hl_field(2, Tree_8, 1));
          MR_Word L_13 = ((MR_Word) ((MR_hl_field(2, Tree_8, 2))));
          MR_Word R_14 = ((MR_Word) ((MR_hl_field(2, Tree_8, 3))));
          MR_Box STATE_VARIABLE_AccA_1_19;
          MR_Box STATE_VARIABLE_AccB_1_20;
          MR_Box STATE_VARIABLE_AccA_2_21;
          MR_Box STATE_VARIABLE_AccB_2_22;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_8;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_15;
          MR_Box next_value_of_STATE_VARIABLE_AccB_0_17;

          mercury__rbtree__foldl2_values_6_p_0(TypeInfo_for_V_26, TypeInfo_for_A_27, TypeInfo_for_B_28, TypeInfo_for_K_29, Pred_7, L_13, STATE_VARIABLE_AccA_0_15, &STATE_VARIABLE_AccA_1_19, STATE_VARIABLE_AccB_0_17, &STATE_VARIABLE_AccB_1_20);
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_7, 1))));
          func_0(((MR_Box) (Pred_7)), V_12, STATE_VARIABLE_AccA_1_19, &STATE_VARIABLE_AccA_2_21, STATE_VARIABLE_AccB_1_20, &STATE_VARIABLE_AccB_2_22);
          // direct tailcall eliminated
          ;
          next_value_of_Tree_8 = R_14;
          next_value_of_STATE_VARIABLE_AccA_0_15 = STATE_VARIABLE_AccA_2_21;
          next_value_of_STATE_VARIABLE_AccB_0_17 = STATE_VARIABLE_AccB_2_22;
          Tree_8 = next_value_of_Tree_8;
          STATE_VARIABLE_AccA_0_15 = next_value_of_STATE_VARIABLE_AccA_0_15;
          STATE_VARIABLE_AccB_0_17 = next_value_of_STATE_VARIABLE_AccB_0_17;
          continue;
        }
        break;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__rbtree__foldl_values_4_p_5(
  MR_Word TypeInfo_for_V_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeInfo_for_K_20,
  MR_Word Pred_5,
  MR_Word Tree_6,
  MR_Box STATE_VARIABLE_AccA_0_12,
  MR_Box * STATE_VARIABLE_AccA_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Tree_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_AccA_13 = STATE_VARIABLE_AccA_0_12;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box V_21 = (MR_hl_field(1, Tree_6, 1));
          MR_Word L_22 = ((MR_Word) ((MR_hl_field(1, Tree_6, 2))));
          MR_Word R_23 = ((MR_Word) ((MR_hl_field(1, Tree_6, 3))));
          MR_Box STATE_VARIABLE_AccA_1_24;
          MR_Box STATE_VARIABLE_AccA_2_25;
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_6;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_12;

          succeeded = mercury__rbtree__foldl_values_4_p_5(TypeInfo_for_V_18, TypeInfo_for_A_19, TypeInfo_for_K_20, Pred_5, L_22, STATE_VARIABLE_AccA_0_12, &STATE_VARIABLE_AccA_1_24);
          if (succeeded)
          {
            func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_5, 1))));
            succeeded = func_1(((MR_Box) (Pred_5)), V_21, STATE_VARIABLE_AccA_1_24, &STATE_VARIABLE_AccA_2_25);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_Tree_6 = R_23;
              next_value_of_STATE_VARIABLE_AccA_0_12 = STATE_VARIABLE_AccA_2_25;
              Tree_6 = next_value_of_Tree_6;
              STATE_VARIABLE_AccA_0_12 = next_value_of_STATE_VARIABLE_AccA_0_12;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box V_9 = (MR_hl_field(2, Tree_6, 1));
          MR_Word L_10 = ((MR_Word) ((MR_hl_field(2, Tree_6, 2))));
          MR_Word R_11 = ((MR_Word) ((MR_hl_field(2, Tree_6, 3))));
          MR_Box STATE_VARIABLE_AccA_1_14;
          MR_Box STATE_VARIABLE_AccA_2_15;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_6;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_12;

          succeeded = mercury__rbtree__foldl_values_4_p_5(TypeInfo_for_V_18, TypeInfo_for_A_19, TypeInfo_for_K_20, Pred_5, L_10, STATE_VARIABLE_AccA_0_12, &STATE_VARIABLE_AccA_1_14);
          if (succeeded)
          {
            func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_5, 1))));
            succeeded = func_0(((MR_Box) (Pred_5)), V_9, STATE_VARIABLE_AccA_1_14, &STATE_VARIABLE_AccA_2_15);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_Tree_6 = R_11;
              next_value_of_STATE_VARIABLE_AccA_0_12 = STATE_VARIABLE_AccA_2_15;
              Tree_6 = next_value_of_Tree_6;
              STATE_VARIABLE_AccA_0_12 = next_value_of_STATE_VARIABLE_AccA_0_12;
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
  MR_Word TypeInfo_for_V_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeInfo_for_K_20,
  MR_Word Pred_5,
  MR_Word Tree_6,
  MR_Box STATE_VARIABLE_AccA_0_12,
  MR_Box * STATE_VARIABLE_AccA_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Tree_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_AccA_13 = STATE_VARIABLE_AccA_0_12;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box V_21 = (MR_hl_field(1, Tree_6, 1));
          MR_Word L_22 = ((MR_Word) ((MR_hl_field(1, Tree_6, 2))));
          MR_Word R_23 = ((MR_Word) ((MR_hl_field(1, Tree_6, 3))));
          MR_Box STATE_VARIABLE_AccA_1_24;
          MR_Box STATE_VARIABLE_AccA_2_25;
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_6;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_12;

          succeeded = mercury__rbtree__foldl_values_4_p_4(TypeInfo_for_V_18, TypeInfo_for_A_19, TypeInfo_for_K_20, Pred_5, L_22, STATE_VARIABLE_AccA_0_12, &STATE_VARIABLE_AccA_1_24);
          if (succeeded)
          {
            func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_5, 1))));
            succeeded = func_1(((MR_Box) (Pred_5)), V_21, STATE_VARIABLE_AccA_1_24, &STATE_VARIABLE_AccA_2_25);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_Tree_6 = R_23;
              next_value_of_STATE_VARIABLE_AccA_0_12 = STATE_VARIABLE_AccA_2_25;
              Tree_6 = next_value_of_Tree_6;
              STATE_VARIABLE_AccA_0_12 = next_value_of_STATE_VARIABLE_AccA_0_12;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box V_9 = (MR_hl_field(2, Tree_6, 1));
          MR_Word L_10 = ((MR_Word) ((MR_hl_field(2, Tree_6, 2))));
          MR_Word R_11 = ((MR_Word) ((MR_hl_field(2, Tree_6, 3))));
          MR_Box STATE_VARIABLE_AccA_1_14;
          MR_Box STATE_VARIABLE_AccA_2_15;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_6;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_12;

          succeeded = mercury__rbtree__foldl_values_4_p_4(TypeInfo_for_V_18, TypeInfo_for_A_19, TypeInfo_for_K_20, Pred_5, L_10, STATE_VARIABLE_AccA_0_12, &STATE_VARIABLE_AccA_1_14);
          if (succeeded)
          {
            func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_5, 1))));
            succeeded = func_0(((MR_Box) (Pred_5)), V_9, STATE_VARIABLE_AccA_1_14, &STATE_VARIABLE_AccA_2_15);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_Tree_6 = R_11;
              next_value_of_STATE_VARIABLE_AccA_0_12 = STATE_VARIABLE_AccA_2_15;
              Tree_6 = next_value_of_Tree_6;
              STATE_VARIABLE_AccA_0_12 = next_value_of_STATE_VARIABLE_AccA_0_12;
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
  MR_Word TypeInfo_for_V_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeInfo_for_K_20,
  MR_Word Pred_5,
  MR_Word Tree_6,
  MR_Box STATE_VARIABLE_AccA_0_12,
  MR_Box * STATE_VARIABLE_AccA_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Tree_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_AccA_13 = STATE_VARIABLE_AccA_0_12;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box V_21 = (MR_hl_field(1, Tree_6, 1));
          MR_Word L_22 = ((MR_Word) ((MR_hl_field(1, Tree_6, 2))));
          MR_Word R_23 = ((MR_Word) ((MR_hl_field(1, Tree_6, 3))));
          MR_Box STATE_VARIABLE_AccA_1_24;
          MR_Box STATE_VARIABLE_AccA_2_25;
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_6;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_12;

          succeeded = mercury__rbtree__foldl_values_4_p_3(TypeInfo_for_V_18, TypeInfo_for_A_19, TypeInfo_for_K_20, Pred_5, L_22, STATE_VARIABLE_AccA_0_12, &STATE_VARIABLE_AccA_1_24);
          if (succeeded)
          {
            func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_5, 1))));
            succeeded = func_1(((MR_Box) (Pred_5)), V_21, STATE_VARIABLE_AccA_1_24, &STATE_VARIABLE_AccA_2_25);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_Tree_6 = R_23;
              next_value_of_STATE_VARIABLE_AccA_0_12 = STATE_VARIABLE_AccA_2_25;
              Tree_6 = next_value_of_Tree_6;
              STATE_VARIABLE_AccA_0_12 = next_value_of_STATE_VARIABLE_AccA_0_12;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box V_9 = (MR_hl_field(2, Tree_6, 1));
          MR_Word L_10 = ((MR_Word) ((MR_hl_field(2, Tree_6, 2))));
          MR_Word R_11 = ((MR_Word) ((MR_hl_field(2, Tree_6, 3))));
          MR_Box STATE_VARIABLE_AccA_1_14;
          MR_Box STATE_VARIABLE_AccA_2_15;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_6;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_12;

          succeeded = mercury__rbtree__foldl_values_4_p_3(TypeInfo_for_V_18, TypeInfo_for_A_19, TypeInfo_for_K_20, Pred_5, L_10, STATE_VARIABLE_AccA_0_12, &STATE_VARIABLE_AccA_1_14);
          if (succeeded)
          {
            func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_5, 1))));
            succeeded = func_0(((MR_Box) (Pred_5)), V_9, STATE_VARIABLE_AccA_1_14, &STATE_VARIABLE_AccA_2_15);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_Tree_6 = R_11;
              next_value_of_STATE_VARIABLE_AccA_0_12 = STATE_VARIABLE_AccA_2_15;
              Tree_6 = next_value_of_Tree_6;
              STATE_VARIABLE_AccA_0_12 = next_value_of_STATE_VARIABLE_AccA_0_12;
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
  MR_Word TypeInfo_for_V_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeInfo_for_K_20,
  MR_Word Pred_5,
  MR_Word Tree_6,
  MR_Box STATE_VARIABLE_AccA_0_12,
  MR_Box * STATE_VARIABLE_AccA_13)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Tree_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_AccA_13 = STATE_VARIABLE_AccA_0_12;
        break;
      case (MR_Integer) 1:
        {
          MR_Box V_21 = (MR_hl_field(1, Tree_6, 1));
          MR_Word L_22 = ((MR_Word) ((MR_hl_field(1, Tree_6, 2))));
          MR_Word R_23 = ((MR_Word) ((MR_hl_field(1, Tree_6, 3))));
          MR_Box STATE_VARIABLE_AccA_1_24;
          MR_Box STATE_VARIABLE_AccA_2_25;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_6;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_12;

          mercury__rbtree__foldl_values_4_p_2(TypeInfo_for_V_18, TypeInfo_for_A_19, TypeInfo_for_K_20, Pred_5, L_22, STATE_VARIABLE_AccA_0_12, &STATE_VARIABLE_AccA_1_24);
          func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_5, 1))));
          func_1(((MR_Box) (Pred_5)), V_21, STATE_VARIABLE_AccA_1_24, &STATE_VARIABLE_AccA_2_25);
          // direct tailcall eliminated
          ;
          next_value_of_Tree_6 = R_23;
          next_value_of_STATE_VARIABLE_AccA_0_12 = STATE_VARIABLE_AccA_2_25;
          Tree_6 = next_value_of_Tree_6;
          STATE_VARIABLE_AccA_0_12 = next_value_of_STATE_VARIABLE_AccA_0_12;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box V_9 = (MR_hl_field(2, Tree_6, 1));
          MR_Word L_10 = ((MR_Word) ((MR_hl_field(2, Tree_6, 2))));
          MR_Word R_11 = ((MR_Word) ((MR_hl_field(2, Tree_6, 3))));
          MR_Box STATE_VARIABLE_AccA_1_14;
          MR_Box STATE_VARIABLE_AccA_2_15;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_6;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_12;

          mercury__rbtree__foldl_values_4_p_2(TypeInfo_for_V_18, TypeInfo_for_A_19, TypeInfo_for_K_20, Pred_5, L_10, STATE_VARIABLE_AccA_0_12, &STATE_VARIABLE_AccA_1_14);
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_5, 1))));
          func_0(((MR_Box) (Pred_5)), V_9, STATE_VARIABLE_AccA_1_14, &STATE_VARIABLE_AccA_2_15);
          // direct tailcall eliminated
          ;
          next_value_of_Tree_6 = R_11;
          next_value_of_STATE_VARIABLE_AccA_0_12 = STATE_VARIABLE_AccA_2_15;
          Tree_6 = next_value_of_Tree_6;
          STATE_VARIABLE_AccA_0_12 = next_value_of_STATE_VARIABLE_AccA_0_12;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__rbtree__foldl_values_4_p_1(
  MR_Word TypeInfo_for_V_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeInfo_for_K_20,
  MR_Word Pred_5,
  MR_Word Tree_6,
  MR_Box STATE_VARIABLE_AccA_0_12,
  MR_Box * STATE_VARIABLE_AccA_13)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Tree_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_AccA_13 = STATE_VARIABLE_AccA_0_12;
        break;
      case (MR_Integer) 1:
        {
          MR_Box V_21 = (MR_hl_field(1, Tree_6, 1));
          MR_Word L_22 = ((MR_Word) ((MR_hl_field(1, Tree_6, 2))));
          MR_Word R_23 = ((MR_Word) ((MR_hl_field(1, Tree_6, 3))));
          MR_Box STATE_VARIABLE_AccA_1_24;
          MR_Box STATE_VARIABLE_AccA_2_25;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_6;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_12;

          mercury__rbtree__foldl_values_4_p_1(TypeInfo_for_V_18, TypeInfo_for_A_19, TypeInfo_for_K_20, Pred_5, L_22, STATE_VARIABLE_AccA_0_12, &STATE_VARIABLE_AccA_1_24);
          func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_5, 1))));
          func_1(((MR_Box) (Pred_5)), V_21, STATE_VARIABLE_AccA_1_24, &STATE_VARIABLE_AccA_2_25);
          // direct tailcall eliminated
          ;
          next_value_of_Tree_6 = R_23;
          next_value_of_STATE_VARIABLE_AccA_0_12 = STATE_VARIABLE_AccA_2_25;
          Tree_6 = next_value_of_Tree_6;
          STATE_VARIABLE_AccA_0_12 = next_value_of_STATE_VARIABLE_AccA_0_12;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box V_9 = (MR_hl_field(2, Tree_6, 1));
          MR_Word L_10 = ((MR_Word) ((MR_hl_field(2, Tree_6, 2))));
          MR_Word R_11 = ((MR_Word) ((MR_hl_field(2, Tree_6, 3))));
          MR_Box STATE_VARIABLE_AccA_1_14;
          MR_Box STATE_VARIABLE_AccA_2_15;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_6;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_12;

          mercury__rbtree__foldl_values_4_p_1(TypeInfo_for_V_18, TypeInfo_for_A_19, TypeInfo_for_K_20, Pred_5, L_10, STATE_VARIABLE_AccA_0_12, &STATE_VARIABLE_AccA_1_14);
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_5, 1))));
          func_0(((MR_Box) (Pred_5)), V_9, STATE_VARIABLE_AccA_1_14, &STATE_VARIABLE_AccA_2_15);
          // direct tailcall eliminated
          ;
          next_value_of_Tree_6 = R_11;
          next_value_of_STATE_VARIABLE_AccA_0_12 = STATE_VARIABLE_AccA_2_15;
          Tree_6 = next_value_of_Tree_6;
          STATE_VARIABLE_AccA_0_12 = next_value_of_STATE_VARIABLE_AccA_0_12;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__rbtree__foldl_values_4_p_0(
  MR_Word TypeInfo_for_V_18,
  MR_Word TypeInfo_for_A_19,
  MR_Word TypeInfo_for_K_20,
  MR_Word Pred_5,
  MR_Word Tree_6,
  MR_Box STATE_VARIABLE_AccA_0_12,
  MR_Box * STATE_VARIABLE_AccA_13)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Tree_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_AccA_13 = STATE_VARIABLE_AccA_0_12;
        break;
      case (MR_Integer) 1:
        {
          MR_Box V_21 = (MR_hl_field(1, Tree_6, 1));
          MR_Word L_22 = ((MR_Word) ((MR_hl_field(1, Tree_6, 2))));
          MR_Word R_23 = ((MR_Word) ((MR_hl_field(1, Tree_6, 3))));
          MR_Box STATE_VARIABLE_AccA_1_24;
          MR_Box STATE_VARIABLE_AccA_2_25;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_6;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_12;

          mercury__rbtree__foldl_values_4_p_0(TypeInfo_for_V_18, TypeInfo_for_A_19, TypeInfo_for_K_20, Pred_5, L_22, STATE_VARIABLE_AccA_0_12, &STATE_VARIABLE_AccA_1_24);
          func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_5, 1))));
          func_1(((MR_Box) (Pred_5)), V_21, STATE_VARIABLE_AccA_1_24, &STATE_VARIABLE_AccA_2_25);
          // direct tailcall eliminated
          ;
          next_value_of_Tree_6 = R_23;
          next_value_of_STATE_VARIABLE_AccA_0_12 = STATE_VARIABLE_AccA_2_25;
          Tree_6 = next_value_of_Tree_6;
          STATE_VARIABLE_AccA_0_12 = next_value_of_STATE_VARIABLE_AccA_0_12;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box V_9 = (MR_hl_field(2, Tree_6, 1));
          MR_Word L_10 = ((MR_Word) ((MR_hl_field(2, Tree_6, 2))));
          MR_Word R_11 = ((MR_Word) ((MR_hl_field(2, Tree_6, 3))));
          MR_Box STATE_VARIABLE_AccA_1_14;
          MR_Box STATE_VARIABLE_AccA_2_15;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_6;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_12;

          mercury__rbtree__foldl_values_4_p_0(TypeInfo_for_V_18, TypeInfo_for_A_19, TypeInfo_for_K_20, Pred_5, L_10, STATE_VARIABLE_AccA_0_12, &STATE_VARIABLE_AccA_1_14);
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_5, 1))));
          func_0(((MR_Box) (Pred_5)), V_9, STATE_VARIABLE_AccA_1_14, &STATE_VARIABLE_AccA_2_15);
          // direct tailcall eliminated
          ;
          next_value_of_Tree_6 = R_11;
          next_value_of_STATE_VARIABLE_AccA_0_12 = STATE_VARIABLE_AccA_2_15;
          Tree_6 = next_value_of_Tree_6;
          STATE_VARIABLE_AccA_0_12 = next_value_of_STATE_VARIABLE_AccA_0_12;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__rbtree__foldl3_8_p_4(
  MR_Word TypeInfo_for_K_30,
  MR_Word TypeInfo_for_V_31,
  MR_Word TypeInfo_for_A_32,
  MR_Word TypeInfo_for_B_33,
  MR_Word TypeInfo_for_C_34,
  MR_Word Pred_9,
  MR_Word Tree_10,
  MR_Box STATE_VARIABLE_AccA_0_18,
  MR_Box * STATE_VARIABLE_AccA_19,
  MR_Box STATE_VARIABLE_AccB_0_20,
  MR_Box * STATE_VARIABLE_AccB_21,
  MR_Box STATE_VARIABLE_AccC_0_22,
  MR_Box * STATE_VARIABLE_AccC_23)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Tree_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_AccA_19 = STATE_VARIABLE_AccA_0_18;
          *STATE_VARIABLE_AccB_21 = STATE_VARIABLE_AccB_0_20;
          *STATE_VARIABLE_AccC_23 = STATE_VARIABLE_AccC_0_22;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_35 = (MR_hl_field(1, Tree_10, 0));
          MR_Box V_36 = (MR_hl_field(1, Tree_10, 1));
          MR_Word L_37 = ((MR_Word) ((MR_hl_field(1, Tree_10, 2))));
          MR_Word R_38 = ((MR_Word) ((MR_hl_field(1, Tree_10, 3))));
          MR_Box STATE_VARIABLE_AccA_1_39;
          MR_Box STATE_VARIABLE_AccB_1_40;
          MR_Box STATE_VARIABLE_AccC_1_41;
          MR_Box STATE_VARIABLE_AccA_2_42;
          MR_Box STATE_VARIABLE_AccB_2_43;
          MR_Box STATE_VARIABLE_AccC_2_44;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_10;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_18;
          MR_Box next_value_of_STATE_VARIABLE_AccB_0_20;
          MR_Box next_value_of_STATE_VARIABLE_AccC_0_22;

          mercury__rbtree__foldl3_8_p_4(TypeInfo_for_K_30, TypeInfo_for_V_31, TypeInfo_for_A_32, TypeInfo_for_B_33, TypeInfo_for_C_34, Pred_9, L_37, STATE_VARIABLE_AccA_0_18, &STATE_VARIABLE_AccA_1_39, STATE_VARIABLE_AccB_0_20, &STATE_VARIABLE_AccB_1_40, STATE_VARIABLE_AccC_0_22, &STATE_VARIABLE_AccC_1_41);
          func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_9, 1))));
          func_1(((MR_Box) (Pred_9)), K_35, V_36, STATE_VARIABLE_AccA_1_39, &STATE_VARIABLE_AccA_2_42, STATE_VARIABLE_AccB_1_40, &STATE_VARIABLE_AccB_2_43, STATE_VARIABLE_AccC_1_41, &STATE_VARIABLE_AccC_2_44);
          // direct tailcall eliminated
          ;
          next_value_of_Tree_10 = R_38;
          next_value_of_STATE_VARIABLE_AccA_0_18 = STATE_VARIABLE_AccA_2_42;
          next_value_of_STATE_VARIABLE_AccB_0_20 = STATE_VARIABLE_AccB_2_43;
          next_value_of_STATE_VARIABLE_AccC_0_22 = STATE_VARIABLE_AccC_2_44;
          Tree_10 = next_value_of_Tree_10;
          STATE_VARIABLE_AccA_0_18 = next_value_of_STATE_VARIABLE_AccA_0_18;
          STATE_VARIABLE_AccB_0_20 = next_value_of_STATE_VARIABLE_AccB_0_20;
          STATE_VARIABLE_AccC_0_22 = next_value_of_STATE_VARIABLE_AccC_0_22;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K_14 = (MR_hl_field(2, Tree_10, 0));
          MR_Box V_15 = (MR_hl_field(2, Tree_10, 1));
          MR_Word L_16 = ((MR_Word) ((MR_hl_field(2, Tree_10, 2))));
          MR_Word R_17 = ((MR_Word) ((MR_hl_field(2, Tree_10, 3))));
          MR_Box STATE_VARIABLE_AccA_1_24;
          MR_Box STATE_VARIABLE_AccB_1_25;
          MR_Box STATE_VARIABLE_AccC_1_26;
          MR_Box STATE_VARIABLE_AccA_2_27;
          MR_Box STATE_VARIABLE_AccB_2_28;
          MR_Box STATE_VARIABLE_AccC_2_29;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_10;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_18;
          MR_Box next_value_of_STATE_VARIABLE_AccB_0_20;
          MR_Box next_value_of_STATE_VARIABLE_AccC_0_22;

          mercury__rbtree__foldl3_8_p_4(TypeInfo_for_K_30, TypeInfo_for_V_31, TypeInfo_for_A_32, TypeInfo_for_B_33, TypeInfo_for_C_34, Pred_9, L_16, STATE_VARIABLE_AccA_0_18, &STATE_VARIABLE_AccA_1_24, STATE_VARIABLE_AccB_0_20, &STATE_VARIABLE_AccB_1_25, STATE_VARIABLE_AccC_0_22, &STATE_VARIABLE_AccC_1_26);
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_9, 1))));
          func_0(((MR_Box) (Pred_9)), K_14, V_15, STATE_VARIABLE_AccA_1_24, &STATE_VARIABLE_AccA_2_27, STATE_VARIABLE_AccB_1_25, &STATE_VARIABLE_AccB_2_28, STATE_VARIABLE_AccC_1_26, &STATE_VARIABLE_AccC_2_29);
          // direct tailcall eliminated
          ;
          next_value_of_Tree_10 = R_17;
          next_value_of_STATE_VARIABLE_AccA_0_18 = STATE_VARIABLE_AccA_2_27;
          next_value_of_STATE_VARIABLE_AccB_0_20 = STATE_VARIABLE_AccB_2_28;
          next_value_of_STATE_VARIABLE_AccC_0_22 = STATE_VARIABLE_AccC_2_29;
          Tree_10 = next_value_of_Tree_10;
          STATE_VARIABLE_AccA_0_18 = next_value_of_STATE_VARIABLE_AccA_0_18;
          STATE_VARIABLE_AccB_0_20 = next_value_of_STATE_VARIABLE_AccB_0_20;
          STATE_VARIABLE_AccC_0_22 = next_value_of_STATE_VARIABLE_AccC_0_22;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__rbtree__foldl3_8_p_3(
  MR_Word TypeInfo_for_K_30,
  MR_Word TypeInfo_for_V_31,
  MR_Word TypeInfo_for_A_32,
  MR_Word TypeInfo_for_B_33,
  MR_Word TypeInfo_for_C_34,
  MR_Word Pred_9,
  MR_Word Tree_10,
  MR_Box STATE_VARIABLE_AccA_0_18,
  MR_Box * STATE_VARIABLE_AccA_19,
  MR_Box STATE_VARIABLE_AccB_0_20,
  MR_Box * STATE_VARIABLE_AccB_21,
  MR_Box STATE_VARIABLE_AccC_0_22,
  MR_Box * STATE_VARIABLE_AccC_23)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Tree_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_AccA_19 = STATE_VARIABLE_AccA_0_18;
          *STATE_VARIABLE_AccB_21 = STATE_VARIABLE_AccB_0_20;
          *STATE_VARIABLE_AccC_23 = STATE_VARIABLE_AccC_0_22;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_35 = (MR_hl_field(1, Tree_10, 0));
          MR_Box V_36 = (MR_hl_field(1, Tree_10, 1));
          MR_Word L_37 = ((MR_Word) ((MR_hl_field(1, Tree_10, 2))));
          MR_Word R_38 = ((MR_Word) ((MR_hl_field(1, Tree_10, 3))));
          MR_Box STATE_VARIABLE_AccA_1_39;
          MR_Box STATE_VARIABLE_AccB_1_40;
          MR_Box STATE_VARIABLE_AccC_1_41;
          MR_Box STATE_VARIABLE_AccA_2_42;
          MR_Box STATE_VARIABLE_AccB_2_43;
          MR_Box STATE_VARIABLE_AccC_2_44;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_10;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_18;
          MR_Box next_value_of_STATE_VARIABLE_AccB_0_20;
          MR_Box next_value_of_STATE_VARIABLE_AccC_0_22;

          mercury__rbtree__foldl3_8_p_3(TypeInfo_for_K_30, TypeInfo_for_V_31, TypeInfo_for_A_32, TypeInfo_for_B_33, TypeInfo_for_C_34, Pred_9, L_37, STATE_VARIABLE_AccA_0_18, &STATE_VARIABLE_AccA_1_39, STATE_VARIABLE_AccB_0_20, &STATE_VARIABLE_AccB_1_40, STATE_VARIABLE_AccC_0_22, &STATE_VARIABLE_AccC_1_41);
          func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_9, 1))));
          func_1(((MR_Box) (Pred_9)), K_35, V_36, STATE_VARIABLE_AccA_1_39, &STATE_VARIABLE_AccA_2_42, STATE_VARIABLE_AccB_1_40, &STATE_VARIABLE_AccB_2_43, STATE_VARIABLE_AccC_1_41, &STATE_VARIABLE_AccC_2_44);
          // direct tailcall eliminated
          ;
          next_value_of_Tree_10 = R_38;
          next_value_of_STATE_VARIABLE_AccA_0_18 = STATE_VARIABLE_AccA_2_42;
          next_value_of_STATE_VARIABLE_AccB_0_20 = STATE_VARIABLE_AccB_2_43;
          next_value_of_STATE_VARIABLE_AccC_0_22 = STATE_VARIABLE_AccC_2_44;
          Tree_10 = next_value_of_Tree_10;
          STATE_VARIABLE_AccA_0_18 = next_value_of_STATE_VARIABLE_AccA_0_18;
          STATE_VARIABLE_AccB_0_20 = next_value_of_STATE_VARIABLE_AccB_0_20;
          STATE_VARIABLE_AccC_0_22 = next_value_of_STATE_VARIABLE_AccC_0_22;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K_14 = (MR_hl_field(2, Tree_10, 0));
          MR_Box V_15 = (MR_hl_field(2, Tree_10, 1));
          MR_Word L_16 = ((MR_Word) ((MR_hl_field(2, Tree_10, 2))));
          MR_Word R_17 = ((MR_Word) ((MR_hl_field(2, Tree_10, 3))));
          MR_Box STATE_VARIABLE_AccA_1_24;
          MR_Box STATE_VARIABLE_AccB_1_25;
          MR_Box STATE_VARIABLE_AccC_1_26;
          MR_Box STATE_VARIABLE_AccA_2_27;
          MR_Box STATE_VARIABLE_AccB_2_28;
          MR_Box STATE_VARIABLE_AccC_2_29;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_10;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_18;
          MR_Box next_value_of_STATE_VARIABLE_AccB_0_20;
          MR_Box next_value_of_STATE_VARIABLE_AccC_0_22;

          mercury__rbtree__foldl3_8_p_3(TypeInfo_for_K_30, TypeInfo_for_V_31, TypeInfo_for_A_32, TypeInfo_for_B_33, TypeInfo_for_C_34, Pred_9, L_16, STATE_VARIABLE_AccA_0_18, &STATE_VARIABLE_AccA_1_24, STATE_VARIABLE_AccB_0_20, &STATE_VARIABLE_AccB_1_25, STATE_VARIABLE_AccC_0_22, &STATE_VARIABLE_AccC_1_26);
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_9, 1))));
          func_0(((MR_Box) (Pred_9)), K_14, V_15, STATE_VARIABLE_AccA_1_24, &STATE_VARIABLE_AccA_2_27, STATE_VARIABLE_AccB_1_25, &STATE_VARIABLE_AccB_2_28, STATE_VARIABLE_AccC_1_26, &STATE_VARIABLE_AccC_2_29);
          // direct tailcall eliminated
          ;
          next_value_of_Tree_10 = R_17;
          next_value_of_STATE_VARIABLE_AccA_0_18 = STATE_VARIABLE_AccA_2_27;
          next_value_of_STATE_VARIABLE_AccB_0_20 = STATE_VARIABLE_AccB_2_28;
          next_value_of_STATE_VARIABLE_AccC_0_22 = STATE_VARIABLE_AccC_2_29;
          Tree_10 = next_value_of_Tree_10;
          STATE_VARIABLE_AccA_0_18 = next_value_of_STATE_VARIABLE_AccA_0_18;
          STATE_VARIABLE_AccB_0_20 = next_value_of_STATE_VARIABLE_AccB_0_20;
          STATE_VARIABLE_AccC_0_22 = next_value_of_STATE_VARIABLE_AccC_0_22;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__rbtree__foldl3_8_p_2(
  MR_Word TypeInfo_for_K_30,
  MR_Word TypeInfo_for_V_31,
  MR_Word TypeInfo_for_A_32,
  MR_Word TypeInfo_for_B_33,
  MR_Word TypeInfo_for_C_34,
  MR_Word Pred_9,
  MR_Word Tree_10,
  MR_Box STATE_VARIABLE_AccA_0_18,
  MR_Box * STATE_VARIABLE_AccA_19,
  MR_Box STATE_VARIABLE_AccB_0_20,
  MR_Box * STATE_VARIABLE_AccB_21,
  MR_Box STATE_VARIABLE_AccC_0_22,
  MR_Box * STATE_VARIABLE_AccC_23)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Tree_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_AccA_19 = STATE_VARIABLE_AccA_0_18;
          *STATE_VARIABLE_AccB_21 = STATE_VARIABLE_AccB_0_20;
          *STATE_VARIABLE_AccC_23 = STATE_VARIABLE_AccC_0_22;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_35 = (MR_hl_field(1, Tree_10, 0));
          MR_Box V_36 = (MR_hl_field(1, Tree_10, 1));
          MR_Word L_37 = ((MR_Word) ((MR_hl_field(1, Tree_10, 2))));
          MR_Word R_38 = ((MR_Word) ((MR_hl_field(1, Tree_10, 3))));
          MR_Box STATE_VARIABLE_AccA_1_39;
          MR_Box STATE_VARIABLE_AccB_1_40;
          MR_Box STATE_VARIABLE_AccC_1_41;
          MR_Box STATE_VARIABLE_AccA_2_42;
          MR_Box STATE_VARIABLE_AccB_2_43;
          MR_Box STATE_VARIABLE_AccC_2_44;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_10;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_18;
          MR_Box next_value_of_STATE_VARIABLE_AccB_0_20;
          MR_Box next_value_of_STATE_VARIABLE_AccC_0_22;

          mercury__rbtree__foldl3_8_p_2(TypeInfo_for_K_30, TypeInfo_for_V_31, TypeInfo_for_A_32, TypeInfo_for_B_33, TypeInfo_for_C_34, Pred_9, L_37, STATE_VARIABLE_AccA_0_18, &STATE_VARIABLE_AccA_1_39, STATE_VARIABLE_AccB_0_20, &STATE_VARIABLE_AccB_1_40, STATE_VARIABLE_AccC_0_22, &STATE_VARIABLE_AccC_1_41);
          func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_9, 1))));
          func_1(((MR_Box) (Pred_9)), K_35, V_36, STATE_VARIABLE_AccA_1_39, &STATE_VARIABLE_AccA_2_42, STATE_VARIABLE_AccB_1_40, &STATE_VARIABLE_AccB_2_43, STATE_VARIABLE_AccC_1_41, &STATE_VARIABLE_AccC_2_44);
          // direct tailcall eliminated
          ;
          next_value_of_Tree_10 = R_38;
          next_value_of_STATE_VARIABLE_AccA_0_18 = STATE_VARIABLE_AccA_2_42;
          next_value_of_STATE_VARIABLE_AccB_0_20 = STATE_VARIABLE_AccB_2_43;
          next_value_of_STATE_VARIABLE_AccC_0_22 = STATE_VARIABLE_AccC_2_44;
          Tree_10 = next_value_of_Tree_10;
          STATE_VARIABLE_AccA_0_18 = next_value_of_STATE_VARIABLE_AccA_0_18;
          STATE_VARIABLE_AccB_0_20 = next_value_of_STATE_VARIABLE_AccB_0_20;
          STATE_VARIABLE_AccC_0_22 = next_value_of_STATE_VARIABLE_AccC_0_22;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K_14 = (MR_hl_field(2, Tree_10, 0));
          MR_Box V_15 = (MR_hl_field(2, Tree_10, 1));
          MR_Word L_16 = ((MR_Word) ((MR_hl_field(2, Tree_10, 2))));
          MR_Word R_17 = ((MR_Word) ((MR_hl_field(2, Tree_10, 3))));
          MR_Box STATE_VARIABLE_AccA_1_24;
          MR_Box STATE_VARIABLE_AccB_1_25;
          MR_Box STATE_VARIABLE_AccC_1_26;
          MR_Box STATE_VARIABLE_AccA_2_27;
          MR_Box STATE_VARIABLE_AccB_2_28;
          MR_Box STATE_VARIABLE_AccC_2_29;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_10;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_18;
          MR_Box next_value_of_STATE_VARIABLE_AccB_0_20;
          MR_Box next_value_of_STATE_VARIABLE_AccC_0_22;

          mercury__rbtree__foldl3_8_p_2(TypeInfo_for_K_30, TypeInfo_for_V_31, TypeInfo_for_A_32, TypeInfo_for_B_33, TypeInfo_for_C_34, Pred_9, L_16, STATE_VARIABLE_AccA_0_18, &STATE_VARIABLE_AccA_1_24, STATE_VARIABLE_AccB_0_20, &STATE_VARIABLE_AccB_1_25, STATE_VARIABLE_AccC_0_22, &STATE_VARIABLE_AccC_1_26);
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_9, 1))));
          func_0(((MR_Box) (Pred_9)), K_14, V_15, STATE_VARIABLE_AccA_1_24, &STATE_VARIABLE_AccA_2_27, STATE_VARIABLE_AccB_1_25, &STATE_VARIABLE_AccB_2_28, STATE_VARIABLE_AccC_1_26, &STATE_VARIABLE_AccC_2_29);
          // direct tailcall eliminated
          ;
          next_value_of_Tree_10 = R_17;
          next_value_of_STATE_VARIABLE_AccA_0_18 = STATE_VARIABLE_AccA_2_27;
          next_value_of_STATE_VARIABLE_AccB_0_20 = STATE_VARIABLE_AccB_2_28;
          next_value_of_STATE_VARIABLE_AccC_0_22 = STATE_VARIABLE_AccC_2_29;
          Tree_10 = next_value_of_Tree_10;
          STATE_VARIABLE_AccA_0_18 = next_value_of_STATE_VARIABLE_AccA_0_18;
          STATE_VARIABLE_AccB_0_20 = next_value_of_STATE_VARIABLE_AccB_0_20;
          STATE_VARIABLE_AccC_0_22 = next_value_of_STATE_VARIABLE_AccC_0_22;
          continue;
        }
        break;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__rbtree__foldl3_8_p_1(
  MR_Word TypeInfo_for_K_30,
  MR_Word TypeInfo_for_V_31,
  MR_Word TypeInfo_for_A_32,
  MR_Word TypeInfo_for_B_33,
  MR_Word TypeInfo_for_C_34,
  MR_Word Pred_9,
  MR_Word Tree_10,
  MR_Box STATE_VARIABLE_AccA_0_18,
  MR_Box * STATE_VARIABLE_AccA_19,
  MR_Box STATE_VARIABLE_AccB_0_20,
  MR_Box * STATE_VARIABLE_AccB_21,
  MR_Box STATE_VARIABLE_AccC_0_22,
  MR_Box * STATE_VARIABLE_AccC_23)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Tree_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_AccA_19 = STATE_VARIABLE_AccA_0_18;
          *STATE_VARIABLE_AccB_21 = STATE_VARIABLE_AccB_0_20;
          *STATE_VARIABLE_AccC_23 = STATE_VARIABLE_AccC_0_22;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_35 = (MR_hl_field(1, Tree_10, 0));
          MR_Box V_36 = (MR_hl_field(1, Tree_10, 1));
          MR_Word L_37 = ((MR_Word) ((MR_hl_field(1, Tree_10, 2))));
          MR_Word R_38 = ((MR_Word) ((MR_hl_field(1, Tree_10, 3))));
          MR_Box STATE_VARIABLE_AccA_1_39;
          MR_Box STATE_VARIABLE_AccB_1_40;
          MR_Box STATE_VARIABLE_AccC_1_41;
          MR_Box STATE_VARIABLE_AccA_2_42;
          MR_Box STATE_VARIABLE_AccB_2_43;
          MR_Box STATE_VARIABLE_AccC_2_44;
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_10;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_18;
          MR_Box next_value_of_STATE_VARIABLE_AccB_0_20;
          MR_Box next_value_of_STATE_VARIABLE_AccC_0_22;

          succeeded = mercury__rbtree__foldl3_8_p_1(TypeInfo_for_K_30, TypeInfo_for_V_31, TypeInfo_for_A_32, TypeInfo_for_B_33, TypeInfo_for_C_34, Pred_9, L_37, STATE_VARIABLE_AccA_0_18, &STATE_VARIABLE_AccA_1_39, STATE_VARIABLE_AccB_0_20, &STATE_VARIABLE_AccB_1_40, STATE_VARIABLE_AccC_0_22, &STATE_VARIABLE_AccC_1_41);
          if (succeeded)
          {
            func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_9, 1))));
            succeeded = func_1(((MR_Box) (Pred_9)), K_35, V_36, STATE_VARIABLE_AccA_1_39, &STATE_VARIABLE_AccA_2_42, STATE_VARIABLE_AccB_1_40, &STATE_VARIABLE_AccB_2_43, STATE_VARIABLE_AccC_1_41, &STATE_VARIABLE_AccC_2_44);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_Tree_10 = R_38;
              next_value_of_STATE_VARIABLE_AccA_0_18 = STATE_VARIABLE_AccA_2_42;
              next_value_of_STATE_VARIABLE_AccB_0_20 = STATE_VARIABLE_AccB_2_43;
              next_value_of_STATE_VARIABLE_AccC_0_22 = STATE_VARIABLE_AccC_2_44;
              Tree_10 = next_value_of_Tree_10;
              STATE_VARIABLE_AccA_0_18 = next_value_of_STATE_VARIABLE_AccA_0_18;
              STATE_VARIABLE_AccB_0_20 = next_value_of_STATE_VARIABLE_AccB_0_20;
              STATE_VARIABLE_AccC_0_22 = next_value_of_STATE_VARIABLE_AccC_0_22;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K_14 = (MR_hl_field(2, Tree_10, 0));
          MR_Box V_15 = (MR_hl_field(2, Tree_10, 1));
          MR_Word L_16 = ((MR_Word) ((MR_hl_field(2, Tree_10, 2))));
          MR_Word R_17 = ((MR_Word) ((MR_hl_field(2, Tree_10, 3))));
          MR_Box STATE_VARIABLE_AccA_1_24;
          MR_Box STATE_VARIABLE_AccB_1_25;
          MR_Box STATE_VARIABLE_AccC_1_26;
          MR_Box STATE_VARIABLE_AccA_2_27;
          MR_Box STATE_VARIABLE_AccB_2_28;
          MR_Box STATE_VARIABLE_AccC_2_29;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_10;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_18;
          MR_Box next_value_of_STATE_VARIABLE_AccB_0_20;
          MR_Box next_value_of_STATE_VARIABLE_AccC_0_22;

          succeeded = mercury__rbtree__foldl3_8_p_1(TypeInfo_for_K_30, TypeInfo_for_V_31, TypeInfo_for_A_32, TypeInfo_for_B_33, TypeInfo_for_C_34, Pred_9, L_16, STATE_VARIABLE_AccA_0_18, &STATE_VARIABLE_AccA_1_24, STATE_VARIABLE_AccB_0_20, &STATE_VARIABLE_AccB_1_25, STATE_VARIABLE_AccC_0_22, &STATE_VARIABLE_AccC_1_26);
          if (succeeded)
          {
            func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_9, 1))));
            succeeded = func_0(((MR_Box) (Pred_9)), K_14, V_15, STATE_VARIABLE_AccA_1_24, &STATE_VARIABLE_AccA_2_27, STATE_VARIABLE_AccB_1_25, &STATE_VARIABLE_AccB_2_28, STATE_VARIABLE_AccC_1_26, &STATE_VARIABLE_AccC_2_29);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_Tree_10 = R_17;
              next_value_of_STATE_VARIABLE_AccA_0_18 = STATE_VARIABLE_AccA_2_27;
              next_value_of_STATE_VARIABLE_AccB_0_20 = STATE_VARIABLE_AccB_2_28;
              next_value_of_STATE_VARIABLE_AccC_0_22 = STATE_VARIABLE_AccC_2_29;
              Tree_10 = next_value_of_Tree_10;
              STATE_VARIABLE_AccA_0_18 = next_value_of_STATE_VARIABLE_AccA_0_18;
              STATE_VARIABLE_AccB_0_20 = next_value_of_STATE_VARIABLE_AccB_0_20;
              STATE_VARIABLE_AccC_0_22 = next_value_of_STATE_VARIABLE_AccC_0_22;
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
  MR_Word TypeInfo_for_K_30,
  MR_Word TypeInfo_for_V_31,
  MR_Word TypeInfo_for_A_32,
  MR_Word TypeInfo_for_B_33,
  MR_Word TypeInfo_for_C_34,
  MR_Word Pred_9,
  MR_Word Tree_10,
  MR_Box STATE_VARIABLE_AccA_0_18,
  MR_Box * STATE_VARIABLE_AccA_19,
  MR_Box STATE_VARIABLE_AccB_0_20,
  MR_Box * STATE_VARIABLE_AccB_21,
  MR_Box STATE_VARIABLE_AccC_0_22,
  MR_Box * STATE_VARIABLE_AccC_23)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Tree_10)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_AccA_19 = STATE_VARIABLE_AccA_0_18;
          *STATE_VARIABLE_AccB_21 = STATE_VARIABLE_AccB_0_20;
          *STATE_VARIABLE_AccC_23 = STATE_VARIABLE_AccC_0_22;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_35 = (MR_hl_field(1, Tree_10, 0));
          MR_Box V_36 = (MR_hl_field(1, Tree_10, 1));
          MR_Word L_37 = ((MR_Word) ((MR_hl_field(1, Tree_10, 2))));
          MR_Word R_38 = ((MR_Word) ((MR_hl_field(1, Tree_10, 3))));
          MR_Box STATE_VARIABLE_AccA_1_39;
          MR_Box STATE_VARIABLE_AccB_1_40;
          MR_Box STATE_VARIABLE_AccC_1_41;
          MR_Box STATE_VARIABLE_AccA_2_42;
          MR_Box STATE_VARIABLE_AccB_2_43;
          MR_Box STATE_VARIABLE_AccC_2_44;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_10;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_18;
          MR_Box next_value_of_STATE_VARIABLE_AccB_0_20;
          MR_Box next_value_of_STATE_VARIABLE_AccC_0_22;

          mercury__rbtree__foldl3_8_p_0(TypeInfo_for_K_30, TypeInfo_for_V_31, TypeInfo_for_A_32, TypeInfo_for_B_33, TypeInfo_for_C_34, Pred_9, L_37, STATE_VARIABLE_AccA_0_18, &STATE_VARIABLE_AccA_1_39, STATE_VARIABLE_AccB_0_20, &STATE_VARIABLE_AccB_1_40, STATE_VARIABLE_AccC_0_22, &STATE_VARIABLE_AccC_1_41);
          func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_9, 1))));
          func_1(((MR_Box) (Pred_9)), K_35, V_36, STATE_VARIABLE_AccA_1_39, &STATE_VARIABLE_AccA_2_42, STATE_VARIABLE_AccB_1_40, &STATE_VARIABLE_AccB_2_43, STATE_VARIABLE_AccC_1_41, &STATE_VARIABLE_AccC_2_44);
          // direct tailcall eliminated
          ;
          next_value_of_Tree_10 = R_38;
          next_value_of_STATE_VARIABLE_AccA_0_18 = STATE_VARIABLE_AccA_2_42;
          next_value_of_STATE_VARIABLE_AccB_0_20 = STATE_VARIABLE_AccB_2_43;
          next_value_of_STATE_VARIABLE_AccC_0_22 = STATE_VARIABLE_AccC_2_44;
          Tree_10 = next_value_of_Tree_10;
          STATE_VARIABLE_AccA_0_18 = next_value_of_STATE_VARIABLE_AccA_0_18;
          STATE_VARIABLE_AccB_0_20 = next_value_of_STATE_VARIABLE_AccB_0_20;
          STATE_VARIABLE_AccC_0_22 = next_value_of_STATE_VARIABLE_AccC_0_22;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K_14 = (MR_hl_field(2, Tree_10, 0));
          MR_Box V_15 = (MR_hl_field(2, Tree_10, 1));
          MR_Word L_16 = ((MR_Word) ((MR_hl_field(2, Tree_10, 2))));
          MR_Word R_17 = ((MR_Word) ((MR_hl_field(2, Tree_10, 3))));
          MR_Box STATE_VARIABLE_AccA_1_24;
          MR_Box STATE_VARIABLE_AccB_1_25;
          MR_Box STATE_VARIABLE_AccC_1_26;
          MR_Box STATE_VARIABLE_AccA_2_27;
          MR_Box STATE_VARIABLE_AccB_2_28;
          MR_Box STATE_VARIABLE_AccC_2_29;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_10;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_18;
          MR_Box next_value_of_STATE_VARIABLE_AccB_0_20;
          MR_Box next_value_of_STATE_VARIABLE_AccC_0_22;

          mercury__rbtree__foldl3_8_p_0(TypeInfo_for_K_30, TypeInfo_for_V_31, TypeInfo_for_A_32, TypeInfo_for_B_33, TypeInfo_for_C_34, Pred_9, L_16, STATE_VARIABLE_AccA_0_18, &STATE_VARIABLE_AccA_1_24, STATE_VARIABLE_AccB_0_20, &STATE_VARIABLE_AccB_1_25, STATE_VARIABLE_AccC_0_22, &STATE_VARIABLE_AccC_1_26);
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_9, 1))));
          func_0(((MR_Box) (Pred_9)), K_14, V_15, STATE_VARIABLE_AccA_1_24, &STATE_VARIABLE_AccA_2_27, STATE_VARIABLE_AccB_1_25, &STATE_VARIABLE_AccB_2_28, STATE_VARIABLE_AccC_1_26, &STATE_VARIABLE_AccC_2_29);
          // direct tailcall eliminated
          ;
          next_value_of_Tree_10 = R_17;
          next_value_of_STATE_VARIABLE_AccA_0_18 = STATE_VARIABLE_AccA_2_27;
          next_value_of_STATE_VARIABLE_AccB_0_20 = STATE_VARIABLE_AccB_2_28;
          next_value_of_STATE_VARIABLE_AccC_0_22 = STATE_VARIABLE_AccC_2_29;
          Tree_10 = next_value_of_Tree_10;
          STATE_VARIABLE_AccA_0_18 = next_value_of_STATE_VARIABLE_AccA_0_18;
          STATE_VARIABLE_AccB_0_20 = next_value_of_STATE_VARIABLE_AccB_0_20;
          STATE_VARIABLE_AccC_0_22 = next_value_of_STATE_VARIABLE_AccC_0_22;
          continue;
        }
        break;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__rbtree__foldl2_6_p_6(
  MR_Word TypeInfo_for_K_23,
  MR_Word TypeInfo_for_V_24,
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word Pred_7,
  MR_Word Tree_8,
  MR_Box STATE_VARIABLE_AccA_0_15,
  MR_Box * STATE_VARIABLE_AccA_16,
  MR_Box STATE_VARIABLE_AccB_0_17,
  MR_Box * STATE_VARIABLE_AccB_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Tree_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_AccA_16 = STATE_VARIABLE_AccA_0_15;
          *STATE_VARIABLE_AccB_18 = STATE_VARIABLE_AccB_0_17;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_27 = (MR_hl_field(1, Tree_8, 0));
          MR_Box V_28 = (MR_hl_field(1, Tree_8, 1));
          MR_Word L_29 = ((MR_Word) ((MR_hl_field(1, Tree_8, 2))));
          MR_Word R_30 = ((MR_Word) ((MR_hl_field(1, Tree_8, 3))));
          MR_Box STATE_VARIABLE_AccA_1_31;
          MR_Box STATE_VARIABLE_AccB_1_32;
          MR_Box STATE_VARIABLE_AccA_2_33;
          MR_Box STATE_VARIABLE_AccB_2_34;
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_8;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_15;
          MR_Box next_value_of_STATE_VARIABLE_AccB_0_17;

          succeeded = mercury__rbtree__foldl2_6_p_6(TypeInfo_for_K_23, TypeInfo_for_V_24, TypeInfo_for_A_25, TypeInfo_for_B_26, Pred_7, L_29, STATE_VARIABLE_AccA_0_15, &STATE_VARIABLE_AccA_1_31, STATE_VARIABLE_AccB_0_17, &STATE_VARIABLE_AccB_1_32);
          if (succeeded)
          {
            func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_7, 1))));
            succeeded = func_1(((MR_Box) (Pred_7)), K_27, V_28, STATE_VARIABLE_AccA_1_31, &STATE_VARIABLE_AccA_2_33, STATE_VARIABLE_AccB_1_32, &STATE_VARIABLE_AccB_2_34);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_Tree_8 = R_30;
              next_value_of_STATE_VARIABLE_AccA_0_15 = STATE_VARIABLE_AccA_2_33;
              next_value_of_STATE_VARIABLE_AccB_0_17 = STATE_VARIABLE_AccB_2_34;
              Tree_8 = next_value_of_Tree_8;
              STATE_VARIABLE_AccA_0_15 = next_value_of_STATE_VARIABLE_AccA_0_15;
              STATE_VARIABLE_AccB_0_17 = next_value_of_STATE_VARIABLE_AccB_0_17;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K_11 = (MR_hl_field(2, Tree_8, 0));
          MR_Box V_12 = (MR_hl_field(2, Tree_8, 1));
          MR_Word L_13 = ((MR_Word) ((MR_hl_field(2, Tree_8, 2))));
          MR_Word R_14 = ((MR_Word) ((MR_hl_field(2, Tree_8, 3))));
          MR_Box STATE_VARIABLE_AccA_1_19;
          MR_Box STATE_VARIABLE_AccB_1_20;
          MR_Box STATE_VARIABLE_AccA_2_21;
          MR_Box STATE_VARIABLE_AccB_2_22;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_8;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_15;
          MR_Box next_value_of_STATE_VARIABLE_AccB_0_17;

          succeeded = mercury__rbtree__foldl2_6_p_6(TypeInfo_for_K_23, TypeInfo_for_V_24, TypeInfo_for_A_25, TypeInfo_for_B_26, Pred_7, L_13, STATE_VARIABLE_AccA_0_15, &STATE_VARIABLE_AccA_1_19, STATE_VARIABLE_AccB_0_17, &STATE_VARIABLE_AccB_1_20);
          if (succeeded)
          {
            func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_7, 1))));
            succeeded = func_0(((MR_Box) (Pred_7)), K_11, V_12, STATE_VARIABLE_AccA_1_19, &STATE_VARIABLE_AccA_2_21, STATE_VARIABLE_AccB_1_20, &STATE_VARIABLE_AccB_2_22);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_Tree_8 = R_14;
              next_value_of_STATE_VARIABLE_AccA_0_15 = STATE_VARIABLE_AccA_2_21;
              next_value_of_STATE_VARIABLE_AccB_0_17 = STATE_VARIABLE_AccB_2_22;
              Tree_8 = next_value_of_Tree_8;
              STATE_VARIABLE_AccA_0_15 = next_value_of_STATE_VARIABLE_AccA_0_15;
              STATE_VARIABLE_AccB_0_17 = next_value_of_STATE_VARIABLE_AccB_0_17;
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
  MR_Word TypeInfo_for_K_23,
  MR_Word TypeInfo_for_V_24,
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word Pred_7,
  MR_Word Tree_8,
  MR_Box STATE_VARIABLE_AccA_0_15,
  MR_Box * STATE_VARIABLE_AccA_16,
  MR_Box STATE_VARIABLE_AccB_0_17,
  MR_Box * STATE_VARIABLE_AccB_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Tree_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_AccA_16 = STATE_VARIABLE_AccA_0_15;
          *STATE_VARIABLE_AccB_18 = STATE_VARIABLE_AccB_0_17;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_27 = (MR_hl_field(1, Tree_8, 0));
          MR_Box V_28 = (MR_hl_field(1, Tree_8, 1));
          MR_Word L_29 = ((MR_Word) ((MR_hl_field(1, Tree_8, 2))));
          MR_Word R_30 = ((MR_Word) ((MR_hl_field(1, Tree_8, 3))));
          MR_Box STATE_VARIABLE_AccA_1_31;
          MR_Box STATE_VARIABLE_AccB_1_32;
          MR_Box STATE_VARIABLE_AccA_2_33;
          MR_Box STATE_VARIABLE_AccB_2_34;
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_8;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_15;
          MR_Box next_value_of_STATE_VARIABLE_AccB_0_17;

          succeeded = mercury__rbtree__foldl2_6_p_5(TypeInfo_for_K_23, TypeInfo_for_V_24, TypeInfo_for_A_25, TypeInfo_for_B_26, Pred_7, L_29, STATE_VARIABLE_AccA_0_15, &STATE_VARIABLE_AccA_1_31, STATE_VARIABLE_AccB_0_17, &STATE_VARIABLE_AccB_1_32);
          if (succeeded)
          {
            func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_7, 1))));
            succeeded = func_1(((MR_Box) (Pred_7)), K_27, V_28, STATE_VARIABLE_AccA_1_31, &STATE_VARIABLE_AccA_2_33, STATE_VARIABLE_AccB_1_32, &STATE_VARIABLE_AccB_2_34);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_Tree_8 = R_30;
              next_value_of_STATE_VARIABLE_AccA_0_15 = STATE_VARIABLE_AccA_2_33;
              next_value_of_STATE_VARIABLE_AccB_0_17 = STATE_VARIABLE_AccB_2_34;
              Tree_8 = next_value_of_Tree_8;
              STATE_VARIABLE_AccA_0_15 = next_value_of_STATE_VARIABLE_AccA_0_15;
              STATE_VARIABLE_AccB_0_17 = next_value_of_STATE_VARIABLE_AccB_0_17;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K_11 = (MR_hl_field(2, Tree_8, 0));
          MR_Box V_12 = (MR_hl_field(2, Tree_8, 1));
          MR_Word L_13 = ((MR_Word) ((MR_hl_field(2, Tree_8, 2))));
          MR_Word R_14 = ((MR_Word) ((MR_hl_field(2, Tree_8, 3))));
          MR_Box STATE_VARIABLE_AccA_1_19;
          MR_Box STATE_VARIABLE_AccB_1_20;
          MR_Box STATE_VARIABLE_AccA_2_21;
          MR_Box STATE_VARIABLE_AccB_2_22;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_8;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_15;
          MR_Box next_value_of_STATE_VARIABLE_AccB_0_17;

          succeeded = mercury__rbtree__foldl2_6_p_5(TypeInfo_for_K_23, TypeInfo_for_V_24, TypeInfo_for_A_25, TypeInfo_for_B_26, Pred_7, L_13, STATE_VARIABLE_AccA_0_15, &STATE_VARIABLE_AccA_1_19, STATE_VARIABLE_AccB_0_17, &STATE_VARIABLE_AccB_1_20);
          if (succeeded)
          {
            func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_7, 1))));
            succeeded = func_0(((MR_Box) (Pred_7)), K_11, V_12, STATE_VARIABLE_AccA_1_19, &STATE_VARIABLE_AccA_2_21, STATE_VARIABLE_AccB_1_20, &STATE_VARIABLE_AccB_2_22);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_Tree_8 = R_14;
              next_value_of_STATE_VARIABLE_AccA_0_15 = STATE_VARIABLE_AccA_2_21;
              next_value_of_STATE_VARIABLE_AccB_0_17 = STATE_VARIABLE_AccB_2_22;
              Tree_8 = next_value_of_Tree_8;
              STATE_VARIABLE_AccA_0_15 = next_value_of_STATE_VARIABLE_AccA_0_15;
              STATE_VARIABLE_AccB_0_17 = next_value_of_STATE_VARIABLE_AccB_0_17;
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
  MR_Word TypeInfo_for_K_23,
  MR_Word TypeInfo_for_V_24,
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word Pred_7,
  MR_Word Tree_8,
  MR_Box STATE_VARIABLE_AccA_0_15,
  MR_Box * STATE_VARIABLE_AccA_16,
  MR_Box STATE_VARIABLE_AccB_0_17,
  MR_Box * STATE_VARIABLE_AccB_18)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Tree_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_AccA_16 = STATE_VARIABLE_AccA_0_15;
          *STATE_VARIABLE_AccB_18 = STATE_VARIABLE_AccB_0_17;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_27 = (MR_hl_field(1, Tree_8, 0));
          MR_Box V_28 = (MR_hl_field(1, Tree_8, 1));
          MR_Word L_29 = ((MR_Word) ((MR_hl_field(1, Tree_8, 2))));
          MR_Word R_30 = ((MR_Word) ((MR_hl_field(1, Tree_8, 3))));
          MR_Box STATE_VARIABLE_AccA_1_31;
          MR_Box STATE_VARIABLE_AccB_1_32;
          MR_Box STATE_VARIABLE_AccA_2_33;
          MR_Box STATE_VARIABLE_AccB_2_34;
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_8;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_15;
          MR_Box next_value_of_STATE_VARIABLE_AccB_0_17;

          succeeded = mercury__rbtree__foldl2_6_p_4(TypeInfo_for_K_23, TypeInfo_for_V_24, TypeInfo_for_A_25, TypeInfo_for_B_26, Pred_7, L_29, STATE_VARIABLE_AccA_0_15, &STATE_VARIABLE_AccA_1_31, STATE_VARIABLE_AccB_0_17, &STATE_VARIABLE_AccB_1_32);
          if (succeeded)
          {
            func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_7, 1))));
            succeeded = func_1(((MR_Box) (Pred_7)), K_27, V_28, STATE_VARIABLE_AccA_1_31, &STATE_VARIABLE_AccA_2_33, STATE_VARIABLE_AccB_1_32, &STATE_VARIABLE_AccB_2_34);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_Tree_8 = R_30;
              next_value_of_STATE_VARIABLE_AccA_0_15 = STATE_VARIABLE_AccA_2_33;
              next_value_of_STATE_VARIABLE_AccB_0_17 = STATE_VARIABLE_AccB_2_34;
              Tree_8 = next_value_of_Tree_8;
              STATE_VARIABLE_AccA_0_15 = next_value_of_STATE_VARIABLE_AccA_0_15;
              STATE_VARIABLE_AccB_0_17 = next_value_of_STATE_VARIABLE_AccB_0_17;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K_11 = (MR_hl_field(2, Tree_8, 0));
          MR_Box V_12 = (MR_hl_field(2, Tree_8, 1));
          MR_Word L_13 = ((MR_Word) ((MR_hl_field(2, Tree_8, 2))));
          MR_Word R_14 = ((MR_Word) ((MR_hl_field(2, Tree_8, 3))));
          MR_Box STATE_VARIABLE_AccA_1_19;
          MR_Box STATE_VARIABLE_AccB_1_20;
          MR_Box STATE_VARIABLE_AccA_2_21;
          MR_Box STATE_VARIABLE_AccB_2_22;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_8;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_15;
          MR_Box next_value_of_STATE_VARIABLE_AccB_0_17;

          succeeded = mercury__rbtree__foldl2_6_p_4(TypeInfo_for_K_23, TypeInfo_for_V_24, TypeInfo_for_A_25, TypeInfo_for_B_26, Pred_7, L_13, STATE_VARIABLE_AccA_0_15, &STATE_VARIABLE_AccA_1_19, STATE_VARIABLE_AccB_0_17, &STATE_VARIABLE_AccB_1_20);
          if (succeeded)
          {
            func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_7, 1))));
            succeeded = func_0(((MR_Box) (Pred_7)), K_11, V_12, STATE_VARIABLE_AccA_1_19, &STATE_VARIABLE_AccA_2_21, STATE_VARIABLE_AccB_1_20, &STATE_VARIABLE_AccB_2_22);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_Tree_8 = R_14;
              next_value_of_STATE_VARIABLE_AccA_0_15 = STATE_VARIABLE_AccA_2_21;
              next_value_of_STATE_VARIABLE_AccB_0_17 = STATE_VARIABLE_AccB_2_22;
              Tree_8 = next_value_of_Tree_8;
              STATE_VARIABLE_AccA_0_15 = next_value_of_STATE_VARIABLE_AccA_0_15;
              STATE_VARIABLE_AccB_0_17 = next_value_of_STATE_VARIABLE_AccB_0_17;
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
  MR_Word TypeInfo_for_K_23,
  MR_Word TypeInfo_for_V_24,
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word Pred_7,
  MR_Word Tree_8,
  MR_Box STATE_VARIABLE_AccA_0_15,
  MR_Box * STATE_VARIABLE_AccA_16,
  MR_Box STATE_VARIABLE_AccB_0_17,
  MR_Box * STATE_VARIABLE_AccB_18)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Tree_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_AccA_16 = STATE_VARIABLE_AccA_0_15;
          *STATE_VARIABLE_AccB_18 = STATE_VARIABLE_AccB_0_17;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_27 = (MR_hl_field(1, Tree_8, 0));
          MR_Box V_28 = (MR_hl_field(1, Tree_8, 1));
          MR_Word L_29 = ((MR_Word) ((MR_hl_field(1, Tree_8, 2))));
          MR_Word R_30 = ((MR_Word) ((MR_hl_field(1, Tree_8, 3))));
          MR_Box STATE_VARIABLE_AccA_1_31;
          MR_Box STATE_VARIABLE_AccB_1_32;
          MR_Box STATE_VARIABLE_AccA_2_33;
          MR_Box STATE_VARIABLE_AccB_2_34;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_8;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_15;
          MR_Box next_value_of_STATE_VARIABLE_AccB_0_17;

          mercury__rbtree__foldl2_6_p_3(TypeInfo_for_K_23, TypeInfo_for_V_24, TypeInfo_for_A_25, TypeInfo_for_B_26, Pred_7, L_29, STATE_VARIABLE_AccA_0_15, &STATE_VARIABLE_AccA_1_31, STATE_VARIABLE_AccB_0_17, &STATE_VARIABLE_AccB_1_32);
          func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_7, 1))));
          func_1(((MR_Box) (Pred_7)), K_27, V_28, STATE_VARIABLE_AccA_1_31, &STATE_VARIABLE_AccA_2_33, STATE_VARIABLE_AccB_1_32, &STATE_VARIABLE_AccB_2_34);
          // direct tailcall eliminated
          ;
          next_value_of_Tree_8 = R_30;
          next_value_of_STATE_VARIABLE_AccA_0_15 = STATE_VARIABLE_AccA_2_33;
          next_value_of_STATE_VARIABLE_AccB_0_17 = STATE_VARIABLE_AccB_2_34;
          Tree_8 = next_value_of_Tree_8;
          STATE_VARIABLE_AccA_0_15 = next_value_of_STATE_VARIABLE_AccA_0_15;
          STATE_VARIABLE_AccB_0_17 = next_value_of_STATE_VARIABLE_AccB_0_17;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K_11 = (MR_hl_field(2, Tree_8, 0));
          MR_Box V_12 = (MR_hl_field(2, Tree_8, 1));
          MR_Word L_13 = ((MR_Word) ((MR_hl_field(2, Tree_8, 2))));
          MR_Word R_14 = ((MR_Word) ((MR_hl_field(2, Tree_8, 3))));
          MR_Box STATE_VARIABLE_AccA_1_19;
          MR_Box STATE_VARIABLE_AccB_1_20;
          MR_Box STATE_VARIABLE_AccA_2_21;
          MR_Box STATE_VARIABLE_AccB_2_22;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_8;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_15;
          MR_Box next_value_of_STATE_VARIABLE_AccB_0_17;

          mercury__rbtree__foldl2_6_p_3(TypeInfo_for_K_23, TypeInfo_for_V_24, TypeInfo_for_A_25, TypeInfo_for_B_26, Pred_7, L_13, STATE_VARIABLE_AccA_0_15, &STATE_VARIABLE_AccA_1_19, STATE_VARIABLE_AccB_0_17, &STATE_VARIABLE_AccB_1_20);
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_7, 1))));
          func_0(((MR_Box) (Pred_7)), K_11, V_12, STATE_VARIABLE_AccA_1_19, &STATE_VARIABLE_AccA_2_21, STATE_VARIABLE_AccB_1_20, &STATE_VARIABLE_AccB_2_22);
          // direct tailcall eliminated
          ;
          next_value_of_Tree_8 = R_14;
          next_value_of_STATE_VARIABLE_AccA_0_15 = STATE_VARIABLE_AccA_2_21;
          next_value_of_STATE_VARIABLE_AccB_0_17 = STATE_VARIABLE_AccB_2_22;
          Tree_8 = next_value_of_Tree_8;
          STATE_VARIABLE_AccA_0_15 = next_value_of_STATE_VARIABLE_AccA_0_15;
          STATE_VARIABLE_AccB_0_17 = next_value_of_STATE_VARIABLE_AccB_0_17;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__rbtree__foldl2_6_p_2(
  MR_Word TypeInfo_for_K_23,
  MR_Word TypeInfo_for_V_24,
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word Pred_7,
  MR_Word Tree_8,
  MR_Box STATE_VARIABLE_AccA_0_15,
  MR_Box * STATE_VARIABLE_AccA_16,
  MR_Box STATE_VARIABLE_AccB_0_17,
  MR_Box * STATE_VARIABLE_AccB_18)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Tree_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_AccA_16 = STATE_VARIABLE_AccA_0_15;
          *STATE_VARIABLE_AccB_18 = STATE_VARIABLE_AccB_0_17;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_27 = (MR_hl_field(1, Tree_8, 0));
          MR_Box V_28 = (MR_hl_field(1, Tree_8, 1));
          MR_Word L_29 = ((MR_Word) ((MR_hl_field(1, Tree_8, 2))));
          MR_Word R_30 = ((MR_Word) ((MR_hl_field(1, Tree_8, 3))));
          MR_Box STATE_VARIABLE_AccA_1_31;
          MR_Box STATE_VARIABLE_AccB_1_32;
          MR_Box STATE_VARIABLE_AccA_2_33;
          MR_Box STATE_VARIABLE_AccB_2_34;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_8;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_15;
          MR_Box next_value_of_STATE_VARIABLE_AccB_0_17;

          mercury__rbtree__foldl2_6_p_2(TypeInfo_for_K_23, TypeInfo_for_V_24, TypeInfo_for_A_25, TypeInfo_for_B_26, Pred_7, L_29, STATE_VARIABLE_AccA_0_15, &STATE_VARIABLE_AccA_1_31, STATE_VARIABLE_AccB_0_17, &STATE_VARIABLE_AccB_1_32);
          func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_7, 1))));
          func_1(((MR_Box) (Pred_7)), K_27, V_28, STATE_VARIABLE_AccA_1_31, &STATE_VARIABLE_AccA_2_33, STATE_VARIABLE_AccB_1_32, &STATE_VARIABLE_AccB_2_34);
          // direct tailcall eliminated
          ;
          next_value_of_Tree_8 = R_30;
          next_value_of_STATE_VARIABLE_AccA_0_15 = STATE_VARIABLE_AccA_2_33;
          next_value_of_STATE_VARIABLE_AccB_0_17 = STATE_VARIABLE_AccB_2_34;
          Tree_8 = next_value_of_Tree_8;
          STATE_VARIABLE_AccA_0_15 = next_value_of_STATE_VARIABLE_AccA_0_15;
          STATE_VARIABLE_AccB_0_17 = next_value_of_STATE_VARIABLE_AccB_0_17;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K_11 = (MR_hl_field(2, Tree_8, 0));
          MR_Box V_12 = (MR_hl_field(2, Tree_8, 1));
          MR_Word L_13 = ((MR_Word) ((MR_hl_field(2, Tree_8, 2))));
          MR_Word R_14 = ((MR_Word) ((MR_hl_field(2, Tree_8, 3))));
          MR_Box STATE_VARIABLE_AccA_1_19;
          MR_Box STATE_VARIABLE_AccB_1_20;
          MR_Box STATE_VARIABLE_AccA_2_21;
          MR_Box STATE_VARIABLE_AccB_2_22;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_8;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_15;
          MR_Box next_value_of_STATE_VARIABLE_AccB_0_17;

          mercury__rbtree__foldl2_6_p_2(TypeInfo_for_K_23, TypeInfo_for_V_24, TypeInfo_for_A_25, TypeInfo_for_B_26, Pred_7, L_13, STATE_VARIABLE_AccA_0_15, &STATE_VARIABLE_AccA_1_19, STATE_VARIABLE_AccB_0_17, &STATE_VARIABLE_AccB_1_20);
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_7, 1))));
          func_0(((MR_Box) (Pred_7)), K_11, V_12, STATE_VARIABLE_AccA_1_19, &STATE_VARIABLE_AccA_2_21, STATE_VARIABLE_AccB_1_20, &STATE_VARIABLE_AccB_2_22);
          // direct tailcall eliminated
          ;
          next_value_of_Tree_8 = R_14;
          next_value_of_STATE_VARIABLE_AccA_0_15 = STATE_VARIABLE_AccA_2_21;
          next_value_of_STATE_VARIABLE_AccB_0_17 = STATE_VARIABLE_AccB_2_22;
          Tree_8 = next_value_of_Tree_8;
          STATE_VARIABLE_AccA_0_15 = next_value_of_STATE_VARIABLE_AccA_0_15;
          STATE_VARIABLE_AccB_0_17 = next_value_of_STATE_VARIABLE_AccB_0_17;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__rbtree__foldl2_6_p_1(
  MR_Word TypeInfo_for_K_23,
  MR_Word TypeInfo_for_V_24,
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word Pred_7,
  MR_Word Tree_8,
  MR_Box STATE_VARIABLE_AccA_0_15,
  MR_Box * STATE_VARIABLE_AccA_16,
  MR_Box STATE_VARIABLE_AccB_0_17,
  MR_Box * STATE_VARIABLE_AccB_18)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Tree_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_AccA_16 = STATE_VARIABLE_AccA_0_15;
          *STATE_VARIABLE_AccB_18 = STATE_VARIABLE_AccB_0_17;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_27 = (MR_hl_field(1, Tree_8, 0));
          MR_Box V_28 = (MR_hl_field(1, Tree_8, 1));
          MR_Word L_29 = ((MR_Word) ((MR_hl_field(1, Tree_8, 2))));
          MR_Word R_30 = ((MR_Word) ((MR_hl_field(1, Tree_8, 3))));
          MR_Box STATE_VARIABLE_AccA_1_31;
          MR_Box STATE_VARIABLE_AccB_1_32;
          MR_Box STATE_VARIABLE_AccA_2_33;
          MR_Box STATE_VARIABLE_AccB_2_34;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_8;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_15;
          MR_Box next_value_of_STATE_VARIABLE_AccB_0_17;

          mercury__rbtree__foldl2_6_p_1(TypeInfo_for_K_23, TypeInfo_for_V_24, TypeInfo_for_A_25, TypeInfo_for_B_26, Pred_7, L_29, STATE_VARIABLE_AccA_0_15, &STATE_VARIABLE_AccA_1_31, STATE_VARIABLE_AccB_0_17, &STATE_VARIABLE_AccB_1_32);
          func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_7, 1))));
          func_1(((MR_Box) (Pred_7)), K_27, V_28, STATE_VARIABLE_AccA_1_31, &STATE_VARIABLE_AccA_2_33, STATE_VARIABLE_AccB_1_32, &STATE_VARIABLE_AccB_2_34);
          // direct tailcall eliminated
          ;
          next_value_of_Tree_8 = R_30;
          next_value_of_STATE_VARIABLE_AccA_0_15 = STATE_VARIABLE_AccA_2_33;
          next_value_of_STATE_VARIABLE_AccB_0_17 = STATE_VARIABLE_AccB_2_34;
          Tree_8 = next_value_of_Tree_8;
          STATE_VARIABLE_AccA_0_15 = next_value_of_STATE_VARIABLE_AccA_0_15;
          STATE_VARIABLE_AccB_0_17 = next_value_of_STATE_VARIABLE_AccB_0_17;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K_11 = (MR_hl_field(2, Tree_8, 0));
          MR_Box V_12 = (MR_hl_field(2, Tree_8, 1));
          MR_Word L_13 = ((MR_Word) ((MR_hl_field(2, Tree_8, 2))));
          MR_Word R_14 = ((MR_Word) ((MR_hl_field(2, Tree_8, 3))));
          MR_Box STATE_VARIABLE_AccA_1_19;
          MR_Box STATE_VARIABLE_AccB_1_20;
          MR_Box STATE_VARIABLE_AccA_2_21;
          MR_Box STATE_VARIABLE_AccB_2_22;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_8;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_15;
          MR_Box next_value_of_STATE_VARIABLE_AccB_0_17;

          mercury__rbtree__foldl2_6_p_1(TypeInfo_for_K_23, TypeInfo_for_V_24, TypeInfo_for_A_25, TypeInfo_for_B_26, Pred_7, L_13, STATE_VARIABLE_AccA_0_15, &STATE_VARIABLE_AccA_1_19, STATE_VARIABLE_AccB_0_17, &STATE_VARIABLE_AccB_1_20);
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_7, 1))));
          func_0(((MR_Box) (Pred_7)), K_11, V_12, STATE_VARIABLE_AccA_1_19, &STATE_VARIABLE_AccA_2_21, STATE_VARIABLE_AccB_1_20, &STATE_VARIABLE_AccB_2_22);
          // direct tailcall eliminated
          ;
          next_value_of_Tree_8 = R_14;
          next_value_of_STATE_VARIABLE_AccA_0_15 = STATE_VARIABLE_AccA_2_21;
          next_value_of_STATE_VARIABLE_AccB_0_17 = STATE_VARIABLE_AccB_2_22;
          Tree_8 = next_value_of_Tree_8;
          STATE_VARIABLE_AccA_0_15 = next_value_of_STATE_VARIABLE_AccA_0_15;
          STATE_VARIABLE_AccB_0_17 = next_value_of_STATE_VARIABLE_AccB_0_17;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__rbtree__foldl2_6_p_0(
  MR_Word TypeInfo_for_K_23,
  MR_Word TypeInfo_for_V_24,
  MR_Word TypeInfo_for_A_25,
  MR_Word TypeInfo_for_B_26,
  MR_Word Pred_7,
  MR_Word Tree_8,
  MR_Box STATE_VARIABLE_AccA_0_15,
  MR_Box * STATE_VARIABLE_AccA_16,
  MR_Box STATE_VARIABLE_AccB_0_17,
  MR_Box * STATE_VARIABLE_AccB_18)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Tree_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_AccA_16 = STATE_VARIABLE_AccA_0_15;
          *STATE_VARIABLE_AccB_18 = STATE_VARIABLE_AccB_0_17;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_27 = (MR_hl_field(1, Tree_8, 0));
          MR_Box V_28 = (MR_hl_field(1, Tree_8, 1));
          MR_Word L_29 = ((MR_Word) ((MR_hl_field(1, Tree_8, 2))));
          MR_Word R_30 = ((MR_Word) ((MR_hl_field(1, Tree_8, 3))));
          MR_Box STATE_VARIABLE_AccA_1_31;
          MR_Box STATE_VARIABLE_AccB_1_32;
          MR_Box STATE_VARIABLE_AccA_2_33;
          MR_Box STATE_VARIABLE_AccB_2_34;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_8;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_15;
          MR_Box next_value_of_STATE_VARIABLE_AccB_0_17;

          mercury__rbtree__foldl2_6_p_0(TypeInfo_for_K_23, TypeInfo_for_V_24, TypeInfo_for_A_25, TypeInfo_for_B_26, Pred_7, L_29, STATE_VARIABLE_AccA_0_15, &STATE_VARIABLE_AccA_1_31, STATE_VARIABLE_AccB_0_17, &STATE_VARIABLE_AccB_1_32);
          func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_7, 1))));
          func_1(((MR_Box) (Pred_7)), K_27, V_28, STATE_VARIABLE_AccA_1_31, &STATE_VARIABLE_AccA_2_33, STATE_VARIABLE_AccB_1_32, &STATE_VARIABLE_AccB_2_34);
          // direct tailcall eliminated
          ;
          next_value_of_Tree_8 = R_30;
          next_value_of_STATE_VARIABLE_AccA_0_15 = STATE_VARIABLE_AccA_2_33;
          next_value_of_STATE_VARIABLE_AccB_0_17 = STATE_VARIABLE_AccB_2_34;
          Tree_8 = next_value_of_Tree_8;
          STATE_VARIABLE_AccA_0_15 = next_value_of_STATE_VARIABLE_AccA_0_15;
          STATE_VARIABLE_AccB_0_17 = next_value_of_STATE_VARIABLE_AccB_0_17;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K_11 = (MR_hl_field(2, Tree_8, 0));
          MR_Box V_12 = (MR_hl_field(2, Tree_8, 1));
          MR_Word L_13 = ((MR_Word) ((MR_hl_field(2, Tree_8, 2))));
          MR_Word R_14 = ((MR_Word) ((MR_hl_field(2, Tree_8, 3))));
          MR_Box STATE_VARIABLE_AccA_1_19;
          MR_Box STATE_VARIABLE_AccB_1_20;
          MR_Box STATE_VARIABLE_AccA_2_21;
          MR_Box STATE_VARIABLE_AccB_2_22;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_8;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_15;
          MR_Box next_value_of_STATE_VARIABLE_AccB_0_17;

          mercury__rbtree__foldl2_6_p_0(TypeInfo_for_K_23, TypeInfo_for_V_24, TypeInfo_for_A_25, TypeInfo_for_B_26, Pred_7, L_13, STATE_VARIABLE_AccA_0_15, &STATE_VARIABLE_AccA_1_19, STATE_VARIABLE_AccB_0_17, &STATE_VARIABLE_AccB_1_20);
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_7, 1))));
          func_0(((MR_Box) (Pred_7)), K_11, V_12, STATE_VARIABLE_AccA_1_19, &STATE_VARIABLE_AccA_2_21, STATE_VARIABLE_AccB_1_20, &STATE_VARIABLE_AccB_2_22);
          // direct tailcall eliminated
          ;
          next_value_of_Tree_8 = R_14;
          next_value_of_STATE_VARIABLE_AccA_0_15 = STATE_VARIABLE_AccA_2_21;
          next_value_of_STATE_VARIABLE_AccB_0_17 = STATE_VARIABLE_AccB_2_22;
          Tree_8 = next_value_of_Tree_8;
          STATE_VARIABLE_AccA_0_15 = next_value_of_STATE_VARIABLE_AccA_0_15;
          STATE_VARIABLE_AccB_0_17 = next_value_of_STATE_VARIABLE_AccB_0_17;
          continue;
        }
        break;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__rbtree__foldl_4_p_5(
  MR_Word TypeInfo_for_K_16,
  MR_Word TypeInfo_for_V_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word Pred_5,
  MR_Word Tree_6,
  MR_Box STATE_VARIABLE_AccA_0_12,
  MR_Box * STATE_VARIABLE_AccA_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Tree_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_AccA_13 = STATE_VARIABLE_AccA_0_12;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_19 = (MR_hl_field(1, Tree_6, 0));
          MR_Box V_20 = (MR_hl_field(1, Tree_6, 1));
          MR_Word L_21 = ((MR_Word) ((MR_hl_field(1, Tree_6, 2))));
          MR_Word R_22 = ((MR_Word) ((MR_hl_field(1, Tree_6, 3))));
          MR_Box STATE_VARIABLE_AccA_1_23;
          MR_Box STATE_VARIABLE_AccA_2_24;
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_6;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_12;

          succeeded = mercury__rbtree__foldl_4_p_5(TypeInfo_for_K_16, TypeInfo_for_V_17, TypeInfo_for_A_18, Pred_5, L_21, STATE_VARIABLE_AccA_0_12, &STATE_VARIABLE_AccA_1_23);
          if (succeeded)
          {
            func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_5, 1))));
            succeeded = func_1(((MR_Box) (Pred_5)), K_19, V_20, STATE_VARIABLE_AccA_1_23, &STATE_VARIABLE_AccA_2_24);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_Tree_6 = R_22;
              next_value_of_STATE_VARIABLE_AccA_0_12 = STATE_VARIABLE_AccA_2_24;
              Tree_6 = next_value_of_Tree_6;
              STATE_VARIABLE_AccA_0_12 = next_value_of_STATE_VARIABLE_AccA_0_12;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K_8 = (MR_hl_field(2, Tree_6, 0));
          MR_Box V_9 = (MR_hl_field(2, Tree_6, 1));
          MR_Word L_10 = ((MR_Word) ((MR_hl_field(2, Tree_6, 2))));
          MR_Word R_11 = ((MR_Word) ((MR_hl_field(2, Tree_6, 3))));
          MR_Box STATE_VARIABLE_AccA_1_14;
          MR_Box STATE_VARIABLE_AccA_2_15;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_6;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_12;

          succeeded = mercury__rbtree__foldl_4_p_5(TypeInfo_for_K_16, TypeInfo_for_V_17, TypeInfo_for_A_18, Pred_5, L_10, STATE_VARIABLE_AccA_0_12, &STATE_VARIABLE_AccA_1_14);
          if (succeeded)
          {
            func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_5, 1))));
            succeeded = func_0(((MR_Box) (Pred_5)), K_8, V_9, STATE_VARIABLE_AccA_1_14, &STATE_VARIABLE_AccA_2_15);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_Tree_6 = R_11;
              next_value_of_STATE_VARIABLE_AccA_0_12 = STATE_VARIABLE_AccA_2_15;
              Tree_6 = next_value_of_Tree_6;
              STATE_VARIABLE_AccA_0_12 = next_value_of_STATE_VARIABLE_AccA_0_12;
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
  MR_Word TypeInfo_for_K_16,
  MR_Word TypeInfo_for_V_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word Pred_5,
  MR_Word Tree_6,
  MR_Box STATE_VARIABLE_AccA_0_12,
  MR_Box * STATE_VARIABLE_AccA_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Tree_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_AccA_13 = STATE_VARIABLE_AccA_0_12;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_19 = (MR_hl_field(1, Tree_6, 0));
          MR_Box V_20 = (MR_hl_field(1, Tree_6, 1));
          MR_Word L_21 = ((MR_Word) ((MR_hl_field(1, Tree_6, 2))));
          MR_Word R_22 = ((MR_Word) ((MR_hl_field(1, Tree_6, 3))));
          MR_Box STATE_VARIABLE_AccA_1_23;
          MR_Box STATE_VARIABLE_AccA_2_24;
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_6;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_12;

          succeeded = mercury__rbtree__foldl_4_p_4(TypeInfo_for_K_16, TypeInfo_for_V_17, TypeInfo_for_A_18, Pred_5, L_21, STATE_VARIABLE_AccA_0_12, &STATE_VARIABLE_AccA_1_23);
          if (succeeded)
          {
            func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_5, 1))));
            succeeded = func_1(((MR_Box) (Pred_5)), K_19, V_20, STATE_VARIABLE_AccA_1_23, &STATE_VARIABLE_AccA_2_24);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_Tree_6 = R_22;
              next_value_of_STATE_VARIABLE_AccA_0_12 = STATE_VARIABLE_AccA_2_24;
              Tree_6 = next_value_of_Tree_6;
              STATE_VARIABLE_AccA_0_12 = next_value_of_STATE_VARIABLE_AccA_0_12;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K_8 = (MR_hl_field(2, Tree_6, 0));
          MR_Box V_9 = (MR_hl_field(2, Tree_6, 1));
          MR_Word L_10 = ((MR_Word) ((MR_hl_field(2, Tree_6, 2))));
          MR_Word R_11 = ((MR_Word) ((MR_hl_field(2, Tree_6, 3))));
          MR_Box STATE_VARIABLE_AccA_1_14;
          MR_Box STATE_VARIABLE_AccA_2_15;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_6;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_12;

          succeeded = mercury__rbtree__foldl_4_p_4(TypeInfo_for_K_16, TypeInfo_for_V_17, TypeInfo_for_A_18, Pred_5, L_10, STATE_VARIABLE_AccA_0_12, &STATE_VARIABLE_AccA_1_14);
          if (succeeded)
          {
            func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_5, 1))));
            succeeded = func_0(((MR_Box) (Pred_5)), K_8, V_9, STATE_VARIABLE_AccA_1_14, &STATE_VARIABLE_AccA_2_15);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_Tree_6 = R_11;
              next_value_of_STATE_VARIABLE_AccA_0_12 = STATE_VARIABLE_AccA_2_15;
              Tree_6 = next_value_of_Tree_6;
              STATE_VARIABLE_AccA_0_12 = next_value_of_STATE_VARIABLE_AccA_0_12;
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
  MR_Word TypeInfo_for_K_16,
  MR_Word TypeInfo_for_V_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word Pred_5,
  MR_Word Tree_6,
  MR_Box STATE_VARIABLE_AccA_0_12,
  MR_Box * STATE_VARIABLE_AccA_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Tree_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *STATE_VARIABLE_AccA_13 = STATE_VARIABLE_AccA_0_12;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_19 = (MR_hl_field(1, Tree_6, 0));
          MR_Box V_20 = (MR_hl_field(1, Tree_6, 1));
          MR_Word L_21 = ((MR_Word) ((MR_hl_field(1, Tree_6, 2))));
          MR_Word R_22 = ((MR_Word) ((MR_hl_field(1, Tree_6, 3))));
          MR_Box STATE_VARIABLE_AccA_1_23;
          MR_Box STATE_VARIABLE_AccA_2_24;
          MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_6;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_12;

          succeeded = mercury__rbtree__foldl_4_p_3(TypeInfo_for_K_16, TypeInfo_for_V_17, TypeInfo_for_A_18, Pred_5, L_21, STATE_VARIABLE_AccA_0_12, &STATE_VARIABLE_AccA_1_23);
          if (succeeded)
          {
            func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_5, 1))));
            succeeded = func_1(((MR_Box) (Pred_5)), K_19, V_20, STATE_VARIABLE_AccA_1_23, &STATE_VARIABLE_AccA_2_24);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_Tree_6 = R_22;
              next_value_of_STATE_VARIABLE_AccA_0_12 = STATE_VARIABLE_AccA_2_24;
              Tree_6 = next_value_of_Tree_6;
              STATE_VARIABLE_AccA_0_12 = next_value_of_STATE_VARIABLE_AccA_0_12;
              continue;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K_8 = (MR_hl_field(2, Tree_6, 0));
          MR_Box V_9 = (MR_hl_field(2, Tree_6, 1));
          MR_Word L_10 = ((MR_Word) ((MR_hl_field(2, Tree_6, 2))));
          MR_Word R_11 = ((MR_Word) ((MR_hl_field(2, Tree_6, 3))));
          MR_Box STATE_VARIABLE_AccA_1_14;
          MR_Box STATE_VARIABLE_AccA_2_15;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_6;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_12;

          succeeded = mercury__rbtree__foldl_4_p_3(TypeInfo_for_K_16, TypeInfo_for_V_17, TypeInfo_for_A_18, Pred_5, L_10, STATE_VARIABLE_AccA_0_12, &STATE_VARIABLE_AccA_1_14);
          if (succeeded)
          {
            func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_5, 1))));
            succeeded = func_0(((MR_Box) (Pred_5)), K_8, V_9, STATE_VARIABLE_AccA_1_14, &STATE_VARIABLE_AccA_2_15);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              next_value_of_Tree_6 = R_11;
              next_value_of_STATE_VARIABLE_AccA_0_12 = STATE_VARIABLE_AccA_2_15;
              Tree_6 = next_value_of_Tree_6;
              STATE_VARIABLE_AccA_0_12 = next_value_of_STATE_VARIABLE_AccA_0_12;
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
  MR_Word TypeInfo_for_K_16,
  MR_Word TypeInfo_for_V_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word Pred_5,
  MR_Word Tree_6,
  MR_Box STATE_VARIABLE_AccA_0_12,
  MR_Box * STATE_VARIABLE_AccA_13)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Tree_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_AccA_13 = STATE_VARIABLE_AccA_0_12;
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_19 = (MR_hl_field(1, Tree_6, 0));
          MR_Box V_20 = (MR_hl_field(1, Tree_6, 1));
          MR_Word L_21 = ((MR_Word) ((MR_hl_field(1, Tree_6, 2))));
          MR_Word R_22 = ((MR_Word) ((MR_hl_field(1, Tree_6, 3))));
          MR_Box STATE_VARIABLE_AccA_1_23;
          MR_Box STATE_VARIABLE_AccA_2_24;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_6;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_12;

          mercury__rbtree__foldl_4_p_2(TypeInfo_for_K_16, TypeInfo_for_V_17, TypeInfo_for_A_18, Pred_5, L_21, STATE_VARIABLE_AccA_0_12, &STATE_VARIABLE_AccA_1_23);
          func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_5, 1))));
          func_1(((MR_Box) (Pred_5)), K_19, V_20, STATE_VARIABLE_AccA_1_23, &STATE_VARIABLE_AccA_2_24);
          // direct tailcall eliminated
          ;
          next_value_of_Tree_6 = R_22;
          next_value_of_STATE_VARIABLE_AccA_0_12 = STATE_VARIABLE_AccA_2_24;
          Tree_6 = next_value_of_Tree_6;
          STATE_VARIABLE_AccA_0_12 = next_value_of_STATE_VARIABLE_AccA_0_12;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K_8 = (MR_hl_field(2, Tree_6, 0));
          MR_Box V_9 = (MR_hl_field(2, Tree_6, 1));
          MR_Word L_10 = ((MR_Word) ((MR_hl_field(2, Tree_6, 2))));
          MR_Word R_11 = ((MR_Word) ((MR_hl_field(2, Tree_6, 3))));
          MR_Box STATE_VARIABLE_AccA_1_14;
          MR_Box STATE_VARIABLE_AccA_2_15;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_6;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_12;

          mercury__rbtree__foldl_4_p_2(TypeInfo_for_K_16, TypeInfo_for_V_17, TypeInfo_for_A_18, Pred_5, L_10, STATE_VARIABLE_AccA_0_12, &STATE_VARIABLE_AccA_1_14);
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_5, 1))));
          func_0(((MR_Box) (Pred_5)), K_8, V_9, STATE_VARIABLE_AccA_1_14, &STATE_VARIABLE_AccA_2_15);
          // direct tailcall eliminated
          ;
          next_value_of_Tree_6 = R_11;
          next_value_of_STATE_VARIABLE_AccA_0_12 = STATE_VARIABLE_AccA_2_15;
          Tree_6 = next_value_of_Tree_6;
          STATE_VARIABLE_AccA_0_12 = next_value_of_STATE_VARIABLE_AccA_0_12;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__rbtree__foldl_4_p_1(
  MR_Word TypeInfo_for_K_16,
  MR_Word TypeInfo_for_V_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word Pred_5,
  MR_Word Tree_6,
  MR_Box STATE_VARIABLE_AccA_0_12,
  MR_Box * STATE_VARIABLE_AccA_13)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Tree_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_AccA_13 = STATE_VARIABLE_AccA_0_12;
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_19 = (MR_hl_field(1, Tree_6, 0));
          MR_Box V_20 = (MR_hl_field(1, Tree_6, 1));
          MR_Word L_21 = ((MR_Word) ((MR_hl_field(1, Tree_6, 2))));
          MR_Word R_22 = ((MR_Word) ((MR_hl_field(1, Tree_6, 3))));
          MR_Box STATE_VARIABLE_AccA_1_23;
          MR_Box STATE_VARIABLE_AccA_2_24;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_6;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_12;

          mercury__rbtree__foldl_4_p_1(TypeInfo_for_K_16, TypeInfo_for_V_17, TypeInfo_for_A_18, Pred_5, L_21, STATE_VARIABLE_AccA_0_12, &STATE_VARIABLE_AccA_1_23);
          func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_5, 1))));
          func_1(((MR_Box) (Pred_5)), K_19, V_20, STATE_VARIABLE_AccA_1_23, &STATE_VARIABLE_AccA_2_24);
          // direct tailcall eliminated
          ;
          next_value_of_Tree_6 = R_22;
          next_value_of_STATE_VARIABLE_AccA_0_12 = STATE_VARIABLE_AccA_2_24;
          Tree_6 = next_value_of_Tree_6;
          STATE_VARIABLE_AccA_0_12 = next_value_of_STATE_VARIABLE_AccA_0_12;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K_8 = (MR_hl_field(2, Tree_6, 0));
          MR_Box V_9 = (MR_hl_field(2, Tree_6, 1));
          MR_Word L_10 = ((MR_Word) ((MR_hl_field(2, Tree_6, 2))));
          MR_Word R_11 = ((MR_Word) ((MR_hl_field(2, Tree_6, 3))));
          MR_Box STATE_VARIABLE_AccA_1_14;
          MR_Box STATE_VARIABLE_AccA_2_15;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_6;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_12;

          mercury__rbtree__foldl_4_p_1(TypeInfo_for_K_16, TypeInfo_for_V_17, TypeInfo_for_A_18, Pred_5, L_10, STATE_VARIABLE_AccA_0_12, &STATE_VARIABLE_AccA_1_14);
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_5, 1))));
          func_0(((MR_Box) (Pred_5)), K_8, V_9, STATE_VARIABLE_AccA_1_14, &STATE_VARIABLE_AccA_2_15);
          // direct tailcall eliminated
          ;
          next_value_of_Tree_6 = R_11;
          next_value_of_STATE_VARIABLE_AccA_0_12 = STATE_VARIABLE_AccA_2_15;
          Tree_6 = next_value_of_Tree_6;
          STATE_VARIABLE_AccA_0_12 = next_value_of_STATE_VARIABLE_AccA_0_12;
          continue;
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mercury__rbtree__foldl_4_p_0(
  MR_Word TypeInfo_for_K_16,
  MR_Word TypeInfo_for_V_17,
  MR_Word TypeInfo_for_A_18,
  MR_Word Pred_5,
  MR_Word Tree_6,
  MR_Box STATE_VARIABLE_AccA_0_12,
  MR_Box * STATE_VARIABLE_AccA_13)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Tree_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_AccA_13 = STATE_VARIABLE_AccA_0_12;
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_19 = (MR_hl_field(1, Tree_6, 0));
          MR_Box V_20 = (MR_hl_field(1, Tree_6, 1));
          MR_Word L_21 = ((MR_Word) ((MR_hl_field(1, Tree_6, 2))));
          MR_Word R_22 = ((MR_Word) ((MR_hl_field(1, Tree_6, 3))));
          MR_Box STATE_VARIABLE_AccA_1_23;
          MR_Box STATE_VARIABLE_AccA_2_24;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_6;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_12;

          mercury__rbtree__foldl_4_p_0(TypeInfo_for_K_16, TypeInfo_for_V_17, TypeInfo_for_A_18, Pred_5, L_21, STATE_VARIABLE_AccA_0_12, &STATE_VARIABLE_AccA_1_23);
          func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_5, 1))));
          func_1(((MR_Box) (Pred_5)), K_19, V_20, STATE_VARIABLE_AccA_1_23, &STATE_VARIABLE_AccA_2_24);
          // direct tailcall eliminated
          ;
          next_value_of_Tree_6 = R_22;
          next_value_of_STATE_VARIABLE_AccA_0_12 = STATE_VARIABLE_AccA_2_24;
          Tree_6 = next_value_of_Tree_6;
          STATE_VARIABLE_AccA_0_12 = next_value_of_STATE_VARIABLE_AccA_0_12;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K_8 = (MR_hl_field(2, Tree_6, 0));
          MR_Box V_9 = (MR_hl_field(2, Tree_6, 1));
          MR_Word L_10 = ((MR_Word) ((MR_hl_field(2, Tree_6, 2))));
          MR_Word R_11 = ((MR_Word) ((MR_hl_field(2, Tree_6, 3))));
          MR_Box STATE_VARIABLE_AccA_1_14;
          MR_Box STATE_VARIABLE_AccA_2_15;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);
          MR_Word next_value_of_Tree_6;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_12;

          mercury__rbtree__foldl_4_p_0(TypeInfo_for_K_16, TypeInfo_for_V_17, TypeInfo_for_A_18, Pred_5, L_10, STATE_VARIABLE_AccA_0_12, &STATE_VARIABLE_AccA_1_14);
          func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_5, 1))));
          func_0(((MR_Box) (Pred_5)), K_8, V_9, STATE_VARIABLE_AccA_1_14, &STATE_VARIABLE_AccA_2_15);
          // direct tailcall eliminated
          ;
          next_value_of_Tree_6 = R_11;
          next_value_of_STATE_VARIABLE_AccA_0_12 = STATE_VARIABLE_AccA_2_15;
          Tree_6 = next_value_of_Tree_6;
          STATE_VARIABLE_AccA_0_12 = next_value_of_STATE_VARIABLE_AccA_0_12;
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
  MR_Word TypeInfo_for_A_24,
  MR_Word F_5,
  MR_Word T_6,
  MR_Box A_7)
{
  MR_Box B_8;

  mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_0(F_5, T_6, A_7, &B_8);
  return B_8;
}

static void MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_0(
  MR_Word Var_28,
  MR_Word Tree_6,
  MR_Box STATE_VARIABLE_AccA_0_12,
  MR_Box * STATE_VARIABLE_AccA_13)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Tree_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *STATE_VARIABLE_AccA_13 = STATE_VARIABLE_AccA_0_12;
        break;
      case (MR_Integer) 1:
        {
          MR_Box K_19 = (MR_hl_field(1, Tree_6, 0));
          MR_Box V_20 = (MR_hl_field(1, Tree_6, 1));
          MR_Word L_21 = ((MR_Word) ((MR_hl_field(1, Tree_6, 2))));
          MR_Word R_22 = ((MR_Word) ((MR_hl_field(1, Tree_6, 3))));
          MR_Box STATE_VARIABLE_AccA_1_23;
          MR_Box STATE_VARIABLE_AccA_2_24;
          MR_Box MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box, MR_Box);
          MR_Word next_value_of_Tree_6;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_12;

          mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_0(Var_28, L_21, STATE_VARIABLE_AccA_0_12, &STATE_VARIABLE_AccA_1_23);
          func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, Var_28, 1))));
          STATE_VARIABLE_AccA_2_24 = func_1(((MR_Box) (Var_28)), K_19, V_20, STATE_VARIABLE_AccA_1_23);
          // direct tailcall eliminated
          ;
          next_value_of_Tree_6 = R_22;
          next_value_of_STATE_VARIABLE_AccA_0_12 = STATE_VARIABLE_AccA_2_24;
          Tree_6 = next_value_of_Tree_6;
          STATE_VARIABLE_AccA_0_12 = next_value_of_STATE_VARIABLE_AccA_0_12;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K_8 = (MR_hl_field(2, Tree_6, 0));
          MR_Box V_9 = (MR_hl_field(2, Tree_6, 1));
          MR_Word L_10 = ((MR_Word) ((MR_hl_field(2, Tree_6, 2))));
          MR_Word R_11 = ((MR_Word) ((MR_hl_field(2, Tree_6, 3))));
          MR_Box STATE_VARIABLE_AccA_1_14;
          MR_Box STATE_VARIABLE_AccA_2_15;
          MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box);
          MR_Word next_value_of_Tree_6;
          MR_Box next_value_of_STATE_VARIABLE_AccA_0_12;

          mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_51_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_0(Var_28, L_10, STATE_VARIABLE_AccA_0_12, &STATE_VARIABLE_AccA_1_14);
          func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) ((MR_hl_field(0, Var_28, 1))));
          STATE_VARIABLE_AccA_2_15 = func_0(((MR_Box) (Var_28)), K_8, V_9, STATE_VARIABLE_AccA_1_14);
          // direct tailcall eliminated
          ;
          next_value_of_Tree_6 = R_11;
          next_value_of_STATE_VARIABLE_AccA_0_12 = STATE_VARIABLE_AccA_2_15;
          Tree_6 = next_value_of_Tree_6;
          STATE_VARIABLE_AccA_0_12 = next_value_of_STATE_VARIABLE_AccA_0_12;
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
  MR_Word HeadVar__2_2;

  mercury__rbtree__rbtree_to_assoc_list_2_p_0(TypeInfo_for_K_4, TypeInfo_for_V_5, T_3, &HeadVar__2_2);
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__rbtree__rbtree_to_assoc_list_1_f_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word RBT_3)
{
  MR_Word AssocList_4;

  mercury__rbtree__rbtree_to_assoc_list_2_p_0(TypeInfo_for_K_5, TypeInfo_for_V_6, RBT_3, &AssocList_4);
  return AssocList_4;
}

void MR_CALL 
mercury__rbtree__rbtree_to_assoc_list_2_p_0(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_V_14,
  MR_Word Tree_3,
  MR_Word * AssocList_4)
{
  switch (MR_tag((MR_Word) Tree_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *AssocList_4 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Word TypeInfo_16_26;
        MR_Box K_17 = (MR_hl_field(1, Tree_3, 0));
        MR_Box V_18 = (MR_hl_field(1, Tree_3, 1));
        MR_Word L_19 = ((MR_Word) ((MR_hl_field(1, Tree_3, 2))));
        MR_Word R_20 = ((MR_Word) ((MR_hl_field(1, Tree_3, 3))));
        MR_Word AssocListL_21;
        MR_Word AssocListR_22;
        MR_Word Var_23;
        MR_Word Var_24;
        MR_Word conv1_AssocList_4;

        mercury__rbtree__rbtree_to_assoc_list_2_p_0(TypeInfo_for_K_13, TypeInfo_for_V_14, L_19, &AssocListL_21);
        mercury__rbtree__rbtree_to_assoc_list_2_p_0(TypeInfo_for_K_13, TypeInfo_for_V_14, R_20, &AssocListR_22);
        {
          TypeInfo_16_26 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_16_26, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
          MR_hl_field(0, TypeInfo_16_26, 1) = ((MR_Box) (TypeInfo_for_K_13));
          MR_hl_field(0, TypeInfo_16_26, 2) = ((MR_Box) (TypeInfo_for_V_14));
        }
        {
          Var_24 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_24, 0) = K_17;
          MR_hl_field(0, Var_24, 1) = V_18;
        }
        {
          Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_23, 0) = ((MR_Box) (Var_24));
          MR_hl_field(1, Var_23, 1) = ((MR_Box) (AssocListR_22));
        }
        mercury__list__append_3_p_1(TypeInfo_16_26, (MR_Word) (AssocListL_21), (MR_Word) (Var_23), &conv1_AssocList_4);
        *AssocList_4 = (MR_Word) (conv1_AssocList_4);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word TypeInfo_16_16;
        MR_Box K_5 = (MR_hl_field(2, Tree_3, 0));
        MR_Box V_6 = (MR_hl_field(2, Tree_3, 1));
        MR_Word L_7 = ((MR_Word) ((MR_hl_field(2, Tree_3, 2))));
        MR_Word R_8 = ((MR_Word) ((MR_hl_field(2, Tree_3, 3))));
        MR_Word AssocListL_9;
        MR_Word AssocListR_10;
        MR_Word Var_11;
        MR_Word Var_12;
        MR_Word conv0_AssocList_4;

        mercury__rbtree__rbtree_to_assoc_list_2_p_0(TypeInfo_for_K_13, TypeInfo_for_V_14, L_7, &AssocListL_9);
        mercury__rbtree__rbtree_to_assoc_list_2_p_0(TypeInfo_for_K_13, TypeInfo_for_V_14, R_8, &AssocListR_10);
        {
          TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, TypeInfo_16_16, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
          MR_hl_field(0, TypeInfo_16_16, 1) = ((MR_Box) (TypeInfo_for_K_13));
          MR_hl_field(0, TypeInfo_16_16, 2) = ((MR_Box) (TypeInfo_for_V_14));
        }
        {
          Var_12 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_12, 0) = K_5;
          MR_hl_field(0, Var_12, 1) = V_6;
        }
        {
          Var_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_11, 0) = ((MR_Box) (Var_12));
          MR_hl_field(1, Var_11, 1) = ((MR_Box) (AssocListR_10));
        }
        mercury__list__append_3_p_1(TypeInfo_16_16, (MR_Word) (AssocListL_9), (MR_Word) (Var_11), &conv0_AssocList_4);
        *AssocList_4 = (MR_Word) (conv0_AssocList_4);
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
  MR_Word HeadVar__2_2;

  mercury__rbtree__assoc_list_to_rbtree_2_p_0(TypeInfo_for_K_4, TypeInfo_for_V_5, AList_3, &HeadVar__2_2);
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__rbtree__assoc_list_to_rbtree_1_f_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word AL_3)
{
  MR_Word RBT_4;

  mercury__rbtree__assoc_list_to_rbtree_2_p_0(TypeInfo_for_K_5, TypeInfo_for_V_6, AL_3, &RBT_4);
  return RBT_4;
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
    MR_Word T_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
    MR_Word Tree0_7;
    MR_Word Var_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 0))));

    K_3 = (MR_hl_field(0, Var_8, 0));
    V_4 = (MR_hl_field(0, Var_8, 1));
    mercury__rbtree__assoc_list_to_rbtree_2_p_0(TypeInfo_for_K_9, TypeInfo_for_V_10, T_5, &Tree0_7);
    mercury__rbtree__set_4_p_0(TypeInfo_for_K_9, TypeInfo_for_V_10, K_3, V_4, Tree0_7, HeadVar__2_2);
  }
}

MR_Unsigned MR_CALL 
mercury__rbtree__ucount_1_f_0(
  MR_Word TypeInfo_for_K_5,
  MR_Word TypeInfo_for_V_6,
  MR_Word RBT_3)
{
  MR_Unsigned N_4;

  mercury__rbtree__ucount_2_p_0(TypeInfo_for_K_5, TypeInfo_for_V_6, RBT_3, &N_4);
  return N_4;
}

void MR_CALL 
mercury__rbtree__count_2_p_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for_V_7,
  MR_Word RBT_3,
  MR_Integer * IN_4)
{
  MR_Unsigned N_5;

  mercury__rbtree__ucount_2_p_0(TypeInfo_for_K_6, TypeInfo_for_V_7, RBT_3, &N_5);
{
#define MR_PROC_LABEL mercury__rbtree__count_2_p_0

	MR_Unsigned U;
	MR_Integer I;

	U = N_5 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	*IN_4  = I;
}
}

MR_Integer MR_CALL 
mercury__rbtree__count_1_f_0(
  MR_Word TypeInfo_for_K_6,
  MR_Word TypeInfo_for_V_7,
  MR_Word RBT_3)
{
  MR_Integer IN_4;
  MR_Unsigned N_5;

  mercury__rbtree__ucount_2_p_0(TypeInfo_for_K_6, TypeInfo_for_V_7, RBT_3, &N_5);
{
#define MR_PROC_LABEL mercury__rbtree__count_1_f_0

	MR_Unsigned U;
	MR_Integer I;

	U = N_5 ;
		{

    I = (MR_Integer) U;


		;}
#undef MR_PROC_LABEL
	IN_4  = I;
}
  return IN_4;
}

void MR_CALL 
mercury__rbtree__ucount_2_p_0(
  MR_Word TypeInfo_for_K_15,
  MR_Word TypeInfo_for_V_16,
  MR_Word Tree_3,
  MR_Unsigned * Count_4)
{
  switch (MR_tag((MR_Word) Tree_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Count_4 = (MR_Unsigned) 0U;
      break;
    case (MR_Integer) 1:
      {
        MR_Word L_17 = ((MR_Word) ((MR_hl_field(1, Tree_3, 2))));
        MR_Word R_18 = ((MR_Word) ((MR_hl_field(1, Tree_3, 3))));
        MR_Unsigned CountL_19;
        MR_Unsigned CountR_20;
        MR_Unsigned Var_21;

        mercury__rbtree__ucount_2_p_0(TypeInfo_for_K_15, TypeInfo_for_V_16, L_17, &CountL_19);
        mercury__rbtree__ucount_2_p_0(TypeInfo_for_K_15, TypeInfo_for_V_16, R_18, &CountR_20);
        Var_21 = (CountL_19 + CountR_20);
        *Count_4 = (Var_21 + (MR_Unsigned) 1U);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word L_7 = ((MR_Word) ((MR_hl_field(2, Tree_3, 2))));
        MR_Word R_8 = ((MR_Word) ((MR_hl_field(2, Tree_3, 3))));
        MR_Unsigned CountL_9;
        MR_Unsigned CountR_10;
        MR_Unsigned Var_11;

        mercury__rbtree__ucount_2_p_0(TypeInfo_for_K_15, TypeInfo_for_V_16, L_7, &CountL_9);
        mercury__rbtree__ucount_2_p_0(TypeInfo_for_K_15, TypeInfo_for_V_16, R_8, &CountR_10);
        Var_11 = (CountL_9 + CountR_10);
        *Count_4 = (Var_11 + (MR_Unsigned) 1U);
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
  MR_Word Vs_4;

  mercury__rbtree__values_2_p_0(TypeInfo_for_K_5, TypeInfo_for_V_6, RBT_3, &Vs_4);
  return Vs_4;
}

void MR_CALL 
mercury__rbtree__values_2_p_0(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_V_14,
  MR_Word Tree_3,
  MR_Word * Values_4)
{
  switch (MR_tag((MR_Word) Tree_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Values_4 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Box Value_15 = (MR_hl_field(1, Tree_3, 1));
        MR_Word L_16 = ((MR_Word) ((MR_hl_field(1, Tree_3, 2))));
        MR_Word R_17 = ((MR_Word) ((MR_hl_field(1, Tree_3, 3))));
        MR_Word ValuesL_18;
        MR_Word ValuesR_19;
        MR_Word Var_20;

        mercury__rbtree__values_2_p_0(TypeInfo_for_K_13, TypeInfo_for_V_14, L_16, &ValuesL_18);
        mercury__rbtree__values_2_p_0(TypeInfo_for_K_13, TypeInfo_for_V_14, R_17, &ValuesR_19);
        {
          Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_20, 0) = Value_15;
          MR_hl_field(1, Var_20, 1) = ((MR_Box) (ValuesR_19));
        }
        mercury__list__append_3_p_1(TypeInfo_for_V_14, ValuesL_18, Var_20, Values_4);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box Value_6 = (MR_hl_field(2, Tree_3, 1));
        MR_Word L_7 = ((MR_Word) ((MR_hl_field(2, Tree_3, 2))));
        MR_Word R_8 = ((MR_Word) ((MR_hl_field(2, Tree_3, 3))));
        MR_Word ValuesL_9;
        MR_Word ValuesR_10;
        MR_Word Var_11;

        mercury__rbtree__values_2_p_0(TypeInfo_for_K_13, TypeInfo_for_V_14, L_7, &ValuesL_9);
        mercury__rbtree__values_2_p_0(TypeInfo_for_K_13, TypeInfo_for_V_14, R_8, &ValuesR_10);
        {
          Var_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_11, 0) = Value_6;
          MR_hl_field(1, Var_11, 1) = ((MR_Box) (ValuesR_10));
        }
        mercury__list__append_3_p_1(TypeInfo_for_V_14, ValuesL_9, Var_11, Values_4);
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
  MR_Word Ks_4;

  mercury__rbtree__keys_2_p_0(TypeInfo_for_K_5, TypeInfo_for_V_6, RBT_3, &Ks_4);
  return Ks_4;
}

void MR_CALL 
mercury__rbtree__keys_2_p_0(
  MR_Word TypeInfo_for_K_13,
  MR_Word TypeInfo_for_V_14,
  MR_Word Tree_3,
  MR_Word * Keys_4)
{
  switch (MR_tag((MR_Word) Tree_3)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *Keys_4 = (MR_Word) ((MR_Unsigned) 0U);
      break;
    case (MR_Integer) 1:
      {
        MR_Box Key_15 = (MR_hl_field(1, Tree_3, 0));
        MR_Word L_16 = ((MR_Word) ((MR_hl_field(1, Tree_3, 2))));
        MR_Word R_17 = ((MR_Word) ((MR_hl_field(1, Tree_3, 3))));
        MR_Word KeysL_18;
        MR_Word KeysR_19;
        MR_Word Var_20;

        mercury__rbtree__keys_2_p_0(TypeInfo_for_K_13, TypeInfo_for_V_14, L_16, &KeysL_18);
        mercury__rbtree__keys_2_p_0(TypeInfo_for_K_13, TypeInfo_for_V_14, R_17, &KeysR_19);
        {
          Var_20 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_20, 0) = Key_15;
          MR_hl_field(1, Var_20, 1) = ((MR_Box) (KeysR_19));
        }
        mercury__list__append_3_p_1(TypeInfo_for_K_13, KeysL_18, Var_20, Keys_4);
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box Key_5 = (MR_hl_field(2, Tree_3, 0));
        MR_Word L_7 = ((MR_Word) ((MR_hl_field(2, Tree_3, 2))));
        MR_Word R_8 = ((MR_Word) ((MR_hl_field(2, Tree_3, 3))));
        MR_Word KeysL_9;
        MR_Word KeysR_10;
        MR_Word Var_11;

        mercury__rbtree__keys_2_p_0(TypeInfo_for_K_13, TypeInfo_for_V_14, L_7, &KeysL_9);
        mercury__rbtree__keys_2_p_0(TypeInfo_for_K_13, TypeInfo_for_V_14, R_8, &KeysR_10);
        {
          Var_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_11, 0) = Key_5;
          MR_hl_field(1, Var_11, 1) = ((MR_Box) (KeysR_10));
        }
        mercury__list__append_3_p_1(TypeInfo_for_K_13, KeysL_9, Var_11, Keys_4);
      }
      break;
  }
}

MR_bool MR_CALL 
mercury__rbtree__remove_4_p_0(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Box K_5,
  MR_Box * V_6,
  MR_Word STATE_VARIABLE_Tree_0_9,
  MR_Word * STATE_VARIABLE_Tree_10)
{
  MR_bool succeeded;
  MR_Word MaybeV_8;

  mercury__rbtree__delete_from_node_4_p_0(TypeInfo_for_K_11, TypeInfo_for_V_12, K_5, &MaybeV_8, STATE_VARIABLE_Tree_0_9, STATE_VARIABLE_Tree_10);
  succeeded = (MaybeV_8 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
    *V_6 = (MR_hl_field(1, MaybeV_8, 0));
  return succeeded;
}

void MR_CALL 
mercury__rbtree__delete_3_p_0(
  MR_Word TypeInfo_for_K_9,
  MR_Word TypeInfo_for_V_10,
  MR_Box K_4,
  MR_Word STATE_VARIABLE_Tree_0_7,
  MR_Word * STATE_VARIABLE_Tree_8)
{
  MR_Word _MaybeValue_6;

  mercury__rbtree__delete_from_node_4_p_0(TypeInfo_for_K_9, TypeInfo_for_V_10, K_4, &_MaybeValue_6, STATE_VARIABLE_Tree_0_7, STATE_VARIABLE_Tree_8);
}

MR_Word MR_CALL 
mercury__rbtree__delete_2_f_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Word STATE_VARIABLE_RBT_0_6,
  MR_Box K_5)
{
  MR_Word STATE_VARIABLE_RBT_7;
  MR_Word _MaybeValue_10;

  mercury__rbtree__delete_from_node_4_p_0(TypeInfo_for_K_8, TypeInfo_for_V_9, K_5, &_MaybeValue_10, STATE_VARIABLE_RBT_0_6, &STATE_VARIABLE_RBT_7);
  return STATE_VARIABLE_RBT_7;
}

void MR_CALL 
mercury__rbtree__delete_from_node_4_p_0(
  MR_Word TypeInfo_for_K_46,
  MR_Word TypeInfo_for_V_47,
  MR_Box K_5,
  MR_Word * MaybeV_6,
  MR_Word Tree0_7,
  MR_Word * Tree_8)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Tree0_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *MaybeV_6 = (MR_Word) ((MR_Unsigned) 0U);
        *Tree_8 = (MR_Word) ((MR_Unsigned) 0U);
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Box K0_9 = (MR_hl_field(1, Tree0_7, 0));
        MR_Box V0_10 = (MR_hl_field(1, Tree0_7, 1));
        MR_Word L0_11 = ((MR_Word) ((MR_hl_field(1, Tree0_7, 2))));
        MR_Word R0_12 = ((MR_Word) ((MR_hl_field(1, Tree0_7, 3))));
        MR_Word Result_13;

        mercury__builtin__compare_3_p_0(TypeInfo_for_K_46, &Result_13, K_5, K0_9);
        switch (Result_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word * AddrL_50;

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *Tree_8 = base;
                MR_hl_field(1, base, 0) = K0_9;
                MR_hl_field(1, base, 1) = V0_10;
                MR_hl_field(1, base, 2) = NULL;
                MR_hl_field(1, base, 3) = ((MR_Box) (R0_12));
              }
              AddrL_50 = (MR_Word *) (&(MR_hl_field(1, *Tree_8, 2)));
              mercury__rbtree__LCMC__pred__delete_from_node__1_4_p_0(TypeInfo_for_K_46, TypeInfo_for_V_47, K_5, MaybeV_6, L0_11, AddrL_50);
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Box NewK_14;
              MR_Box NewV_15;
              MR_Word L_16;

              succeeded = mercury__rbtree__remove_largest_4_p_0(TypeInfo_for_K_46, TypeInfo_for_V_47, &NewK_14, &NewV_15, L0_11, &L_16);
              if (succeeded)
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  *Tree_8 = base;
                  MR_hl_field(1, base, 0) = NewK_14;
                  MR_hl_field(1, base, 1) = NewV_15;
                  MR_hl_field(1, base, 2) = ((MR_Box) (L_16));
                  MR_hl_field(1, base, 3) = ((MR_Box) (R0_12));
                }
              else
              {
                MR_Word R_17;
                MR_Box NewK_20;
                MR_Box NewV_21;

                succeeded = mercury__rbtree__remove_smallest_4_p_0(TypeInfo_for_K_46, TypeInfo_for_V_47, &NewK_20, &NewV_21, R0_12, &R_17);
                if (succeeded)
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    *Tree_8 = base;
                    MR_hl_field(1, base, 0) = NewK_20;
                    MR_hl_field(1, base, 1) = NewV_21;
                    MR_hl_field(1, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(1, base, 3) = ((MR_Box) (R_17));
                  }
                else
                  *Tree_8 = (MR_Word) ((MR_Unsigned) 0U);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeV_6 = base;
                MR_hl_field(1, base, 0) = V0_10;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word * AddrR_51;

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *Tree_8 = base;
                MR_hl_field(1, base, 0) = K0_9;
                MR_hl_field(1, base, 1) = V0_10;
                MR_hl_field(1, base, 2) = ((MR_Box) (L0_11));
                MR_hl_field(1, base, 3) = NULL;
              }
              AddrR_51 = (MR_Word *) (&(MR_hl_field(1, *Tree_8, 3)));
              mercury__rbtree__LCMC__pred__delete_from_node__1_4_p_0(TypeInfo_for_K_46, TypeInfo_for_V_47, K_5, MaybeV_6, R0_12, AddrR_51);
            }
            break;
        }
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Box K0_41 = (MR_hl_field(2, Tree0_7, 0));
        MR_Box V0_42 = (MR_hl_field(2, Tree0_7, 1));
        MR_Word L0_43 = ((MR_Word) ((MR_hl_field(2, Tree0_7, 2))));
        MR_Word R0_44 = ((MR_Word) ((MR_hl_field(2, Tree0_7, 3))));
        MR_Word Result_45;

        mercury__builtin__compare_3_p_0(TypeInfo_for_K_46, &Result_45, K_5, K0_41);
        switch (Result_45) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word * AddrL_48;

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *Tree_8 = base;
                MR_hl_field(2, base, 0) = K0_41;
                MR_hl_field(2, base, 1) = V0_42;
                MR_hl_field(2, base, 2) = NULL;
                MR_hl_field(2, base, 3) = ((MR_Box) (R0_44));
              }
              AddrL_48 = (MR_Word *) (&(MR_hl_field(2, *Tree_8, 2)));
              mercury__rbtree__LCMC__pred__delete_from_node__1_4_p_0(TypeInfo_for_K_46, TypeInfo_for_V_47, K_5, MaybeV_6, L0_43, AddrL_48);
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Box NewK_27;
              MR_Box NewV_28;
              MR_Word L_29;

              succeeded = mercury__rbtree__remove_largest_4_p_0(TypeInfo_for_K_46, TypeInfo_for_V_47, &NewK_27, &NewV_28, L0_43, &L_29);
              if (succeeded)
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  *Tree_8 = base;
                  MR_hl_field(2, base, 0) = NewK_27;
                  MR_hl_field(2, base, 1) = NewV_28;
                  MR_hl_field(2, base, 2) = ((MR_Box) (L_29));
                  MR_hl_field(2, base, 3) = ((MR_Box) (R0_44));
                }
              else
              {
                MR_Box NewK_24;
                MR_Box NewV_25;
                MR_Word R_26;

                succeeded = mercury__rbtree__remove_smallest_4_p_0(TypeInfo_for_K_46, TypeInfo_for_V_47, &NewK_24, &NewV_25, R0_44, &R_26);
                if (succeeded)
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    *Tree_8 = base;
                    MR_hl_field(2, base, 0) = NewK_24;
                    MR_hl_field(2, base, 1) = NewV_25;
                    MR_hl_field(2, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                    MR_hl_field(2, base, 3) = ((MR_Box) (R_26));
                  }
                else
                  *Tree_8 = (MR_Word) ((MR_Unsigned) 0U);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeV_6 = base;
                MR_hl_field(1, base, 0) = V0_42;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word * AddrR_49;

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *Tree_8 = base;
                MR_hl_field(2, base, 0) = K0_41;
                MR_hl_field(2, base, 1) = V0_42;
                MR_hl_field(2, base, 2) = ((MR_Box) (L0_43));
                MR_hl_field(2, base, 3) = NULL;
              }
              AddrR_49 = (MR_Word *) (&(MR_hl_field(2, *Tree_8, 3)));
              mercury__rbtree__LCMC__pred__delete_from_node__1_4_p_0(TypeInfo_for_K_46, TypeInfo_for_V_47, K_5, MaybeV_6, R0_44, AddrR_49);
            }
            break;
        }
      }
      break;
  }
}

void MR_CALL 
mercury__rbtree__LCMC__pred__delete_from_node__1_4_p_0(
  MR_Word TypeInfo_for_K_46,
  MR_Word TypeInfo_for_V_47,
  MR_Box K_5,
  MR_Word * MaybeV_6,
  MR_Word Tree0_7,
  MR_Word * AddrOfTree_52)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Tree0_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *MaybeV_6 = (MR_Word) ((MR_Unsigned) 0U);
          *AddrOfTree_52 = (MR_Word) ((MR_Unsigned) 0U);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K0_9 = (MR_hl_field(1, Tree0_7, 0));
          MR_Box V0_10 = (MR_hl_field(1, Tree0_7, 1));
          MR_Word L0_11 = ((MR_Word) ((MR_hl_field(1, Tree0_7, 2))));
          MR_Word R0_12 = ((MR_Word) ((MR_hl_field(1, Tree0_7, 3))));
          MR_Word Result_13;

          mercury__builtin__compare_3_p_0(TypeInfo_for_K_46, &Result_13, K_5, K0_9);
          switch (Result_13) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word * AddrL_50;
                MR_Word Tree_63;
                MR_Word next_value_of_Tree0_7;
                MR_Word * next_value_of_AddrOfTree_52;

                {
                  Tree_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Tree_63, 0) = K0_9;
                  MR_hl_field(1, Tree_63, 1) = V0_10;
                  MR_hl_field(1, Tree_63, 2) = NULL;
                  MR_hl_field(1, Tree_63, 3) = ((MR_Box) (R0_12));
                }
                AddrL_50 = (MR_Word *) (&(MR_hl_field(1, Tree_63, 2)));
                *AddrOfTree_52 = Tree_63;
                // direct tailcall eliminated
                ;
                next_value_of_Tree0_7 = L0_11;
                next_value_of_AddrOfTree_52 = AddrL_50;
                Tree0_7 = next_value_of_Tree0_7;
                AddrOfTree_52 = next_value_of_AddrOfTree_52;
                continue;
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Box NewK_14;
                MR_Box NewV_15;
                MR_Word L_16;

                succeeded = mercury__rbtree__remove_largest_4_p_0(TypeInfo_for_K_46, TypeInfo_for_V_47, &NewK_14, &NewV_15, L0_11, &L_16);
                if (succeeded)
                {
                  MR_Word Tree_66;

                  {
                    Tree_66 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(1, Tree_66, 0) = NewK_14;
                    MR_hl_field(1, Tree_66, 1) = NewV_15;
                    MR_hl_field(1, Tree_66, 2) = ((MR_Box) (L_16));
                    MR_hl_field(1, Tree_66, 3) = ((MR_Box) (R0_12));
                  }
                  *AddrOfTree_52 = Tree_66;
                }
                else
                {
                  MR_Word R_17;
                  MR_Box NewK_20;
                  MR_Box NewV_21;

                  succeeded = mercury__rbtree__remove_smallest_4_p_0(TypeInfo_for_K_46, TypeInfo_for_V_47, &NewK_20, &NewV_21, R0_12, &R_17);
                  if (succeeded)
                  {
                    MR_Word Tree_67;

                    {
                      Tree_67 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(1, Tree_67, 0) = NewK_20;
                      MR_hl_field(1, Tree_67, 1) = NewV_21;
                      MR_hl_field(1, Tree_67, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(1, Tree_67, 3) = ((MR_Box) (R_17));
                    }
                    *AddrOfTree_52 = Tree_67;
                  }
                  else
                    *AddrOfTree_52 = (MR_Word) ((MR_Unsigned) 0U);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeV_6 = base;
                  MR_hl_field(1, base, 0) = V0_10;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word * AddrR_51;
                MR_Word Tree_72;
                MR_Word next_value_of_Tree0_7;
                MR_Word * next_value_of_AddrOfTree_52;

                {
                  Tree_72 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Tree_72, 0) = K0_9;
                  MR_hl_field(1, Tree_72, 1) = V0_10;
                  MR_hl_field(1, Tree_72, 2) = ((MR_Box) (L0_11));
                  MR_hl_field(1, Tree_72, 3) = NULL;
                }
                AddrR_51 = (MR_Word *) (&(MR_hl_field(1, Tree_72, 3)));
                *AddrOfTree_52 = Tree_72;
                // direct tailcall eliminated
                ;
                next_value_of_Tree0_7 = R0_12;
                next_value_of_AddrOfTree_52 = AddrR_51;
                Tree0_7 = next_value_of_Tree0_7;
                AddrOfTree_52 = next_value_of_AddrOfTree_52;
                continue;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K0_41 = (MR_hl_field(2, Tree0_7, 0));
          MR_Box V0_42 = (MR_hl_field(2, Tree0_7, 1));
          MR_Word L0_43 = ((MR_Word) ((MR_hl_field(2, Tree0_7, 2))));
          MR_Word R0_44 = ((MR_Word) ((MR_hl_field(2, Tree0_7, 3))));
          MR_Word Result_45;

          mercury__builtin__compare_3_p_0(TypeInfo_for_K_46, &Result_45, K_5, K0_41);
          switch (Result_45) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word Tree_8;
                MR_Word * AddrL_48;
                MR_Word next_value_of_Tree0_7;
                MR_Word * next_value_of_AddrOfTree_52;

                {
                  Tree_8 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Tree_8, 0) = K0_41;
                  MR_hl_field(2, Tree_8, 1) = V0_42;
                  MR_hl_field(2, Tree_8, 2) = NULL;
                  MR_hl_field(2, Tree_8, 3) = ((MR_Box) (R0_44));
                }
                AddrL_48 = (MR_Word *) (&(MR_hl_field(2, Tree_8, 2)));
                *AddrOfTree_52 = Tree_8;
                // direct tailcall eliminated
                ;
                next_value_of_Tree0_7 = L0_43;
                next_value_of_AddrOfTree_52 = AddrL_48;
                Tree0_7 = next_value_of_Tree0_7;
                AddrOfTree_52 = next_value_of_AddrOfTree_52;
                continue;
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Box NewK_27;
                MR_Box NewV_28;
                MR_Word L_29;

                succeeded = mercury__rbtree__remove_largest_4_p_0(TypeInfo_for_K_46, TypeInfo_for_V_47, &NewK_27, &NewV_28, L0_43, &L_29);
                if (succeeded)
                {
                  MR_Word Tree_53;

                  {
                    Tree_53 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Tree_53, 0) = NewK_27;
                    MR_hl_field(2, Tree_53, 1) = NewV_28;
                    MR_hl_field(2, Tree_53, 2) = ((MR_Box) (L_29));
                    MR_hl_field(2, Tree_53, 3) = ((MR_Box) (R0_44));
                  }
                  *AddrOfTree_52 = Tree_53;
                }
                else
                {
                  MR_Box NewK_24;
                  MR_Box NewV_25;
                  MR_Word R_26;

                  succeeded = mercury__rbtree__remove_smallest_4_p_0(TypeInfo_for_K_46, TypeInfo_for_V_47, &NewK_24, &NewV_25, R0_44, &R_26);
                  if (succeeded)
                  {
                    MR_Word Tree_54;

                    {
                      Tree_54 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Tree_54, 0) = NewK_24;
                      MR_hl_field(2, Tree_54, 1) = NewV_25;
                      MR_hl_field(2, Tree_54, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                      MR_hl_field(2, Tree_54, 3) = ((MR_Box) (R_26));
                    }
                    *AddrOfTree_52 = Tree_54;
                  }
                  else
                    *AddrOfTree_52 = (MR_Word) ((MR_Unsigned) 0U);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeV_6 = base;
                  MR_hl_field(1, base, 0) = V0_42;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word * AddrR_49;
                MR_Word Tree_59;
                MR_Word next_value_of_Tree0_7;
                MR_Word * next_value_of_AddrOfTree_52;

                {
                  Tree_59 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(2, Tree_59, 0) = K0_41;
                  MR_hl_field(2, Tree_59, 1) = V0_42;
                  MR_hl_field(2, Tree_59, 2) = ((MR_Box) (L0_43));
                  MR_hl_field(2, Tree_59, 3) = NULL;
                }
                AddrR_49 = (MR_Word *) (&(MR_hl_field(2, Tree_59, 3)));
                *AddrOfTree_52 = Tree_59;
                // direct tailcall eliminated
                ;
                next_value_of_Tree0_7 = R0_44;
                next_value_of_AddrOfTree_52 = AddrR_49;
                Tree0_7 = next_value_of_Tree0_7;
                AddrOfTree_52 = next_value_of_AddrOfTree_52;
                continue;
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
mercury__rbtree__remove_largest_4_p_0(
  MR_Word TypeInfo_for_K_36,
  MR_Word TypeInfo_for_V_37,
  MR_Box * LargestK_5,
  MR_Box * LargestV_6,
  MR_Word Tree0_7,
  MR_Word * Tree_8)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) Tree0_7)) == (MR_Integer) 2))
  {
    MR_Box K0_32 = (MR_hl_field(2, Tree0_7, 0));
    MR_Box V0_33 = (MR_hl_field(2, Tree0_7, 1));
    MR_Word L0_34 = ((MR_Word) ((MR_hl_field(2, Tree0_7, 2))));
    MR_Word R0_35 = ((MR_Word) ((MR_hl_field(2, Tree0_7, 3))));

    switch (MR_tag((MR_Word) R0_35)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *LargestK_5 = K0_32;
          *LargestV_6 = V0_33;
          *Tree_8 = L0_34;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Word * AddrR_38;

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            *Tree_8 = base;
            MR_hl_field(2, base, 0) = K0_32;
            MR_hl_field(2, base, 1) = V0_33;
            MR_hl_field(2, base, 2) = ((MR_Box) (L0_34));
            MR_hl_field(2, base, 3) = NULL;
          }
          AddrR_38 = (MR_Word *) (&(MR_hl_field(2, *Tree_8, 3)));
          succeeded = mercury__rbtree__LCMC__pred__remove_largest__1_4_p_0(TypeInfo_for_K_36, TypeInfo_for_V_37, LargestK_5, LargestV_6, R0_35, AddrR_38);
        }
        break;
    }
  }
  else
  if (((MR_tag((MR_Word) Tree0_7)) == (MR_Integer) 1))
  {
    MR_Box K0_9 = (MR_hl_field(1, Tree0_7, 0));
    MR_Box V0_10 = (MR_hl_field(1, Tree0_7, 1));
    MR_Word L0_11 = ((MR_Word) ((MR_hl_field(1, Tree0_7, 2))));
    MR_Word R0_12 = ((MR_Word) ((MR_hl_field(1, Tree0_7, 3))));

    switch (MR_tag((MR_Word) R0_12)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *LargestK_5 = K0_9;
          *LargestV_6 = V0_10;
          *Tree_8 = L0_11;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Word * AddrR_39;

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            *Tree_8 = base;
            MR_hl_field(1, base, 0) = K0_9;
            MR_hl_field(1, base, 1) = V0_10;
            MR_hl_field(1, base, 2) = ((MR_Box) (L0_11));
            MR_hl_field(1, base, 3) = NULL;
          }
          AddrR_39 = (MR_Word *) (&(MR_hl_field(1, *Tree_8, 3)));
          succeeded = mercury__rbtree__LCMC__pred__remove_largest__1_4_p_0(TypeInfo_for_K_36, TypeInfo_for_V_37, LargestK_5, LargestV_6, R0_12, AddrR_39);
        }
        break;
    }
  }
  else
    succeeded = MR_FALSE;
  return succeeded;
}

MR_bool MR_CALL 
mercury__rbtree__LCMC__pred__remove_largest__1_4_p_0(
  MR_Word TypeInfo_for_K_36,
  MR_Word TypeInfo_for_V_37,
  MR_Box * LargestK_5,
  MR_Box * LargestV_6,
  MR_Word Tree0_7,
  MR_Word * AddrOfTree_40)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) Tree0_7)) == (MR_Integer) 2))
    {
      MR_Box K0_32 = (MR_hl_field(2, Tree0_7, 0));
      MR_Box V0_33 = (MR_hl_field(2, Tree0_7, 1));
      MR_Word L0_34 = ((MR_Word) ((MR_hl_field(2, Tree0_7, 2))));
      MR_Word R0_35 = ((MR_Word) ((MR_hl_field(2, Tree0_7, 3))));

      switch (MR_tag((MR_Word) R0_35)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *LargestK_5 = K0_32;
            *LargestV_6 = V0_33;
            *AddrOfTree_40 = L0_34;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            MR_Word Tree_8;
            MR_Word * AddrR_38;
            MR_Word next_value_of_Tree0_7;
            MR_Word * next_value_of_AddrOfTree_40;

            {
              Tree_8 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Tree_8, 0) = K0_32;
              MR_hl_field(2, Tree_8, 1) = V0_33;
              MR_hl_field(2, Tree_8, 2) = ((MR_Box) (L0_34));
              MR_hl_field(2, Tree_8, 3) = NULL;
            }
            AddrR_38 = (MR_Word *) (&(MR_hl_field(2, Tree_8, 3)));
            *AddrOfTree_40 = Tree_8;
            // direct tailcall eliminated
            ;
            next_value_of_Tree0_7 = R0_35;
            next_value_of_AddrOfTree_40 = AddrR_38;
            Tree0_7 = next_value_of_Tree0_7;
            AddrOfTree_40 = next_value_of_AddrOfTree_40;
            continue;
          }
          break;
      }
    }
    else
    if (((MR_tag((MR_Word) Tree0_7)) == (MR_Integer) 1))
    {
      MR_Box K0_9 = (MR_hl_field(1, Tree0_7, 0));
      MR_Box V0_10 = (MR_hl_field(1, Tree0_7, 1));
      MR_Word L0_11 = ((MR_Word) ((MR_hl_field(1, Tree0_7, 2))));
      MR_Word R0_12 = ((MR_Word) ((MR_hl_field(1, Tree0_7, 3))));

      switch (MR_tag((MR_Word) R0_12)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *LargestK_5 = K0_9;
            *LargestV_6 = V0_10;
            *AddrOfTree_40 = L0_11;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            MR_Word * AddrR_39;
            MR_Word Tree_42;
            MR_Word next_value_of_Tree0_7;
            MR_Word * next_value_of_AddrOfTree_40;

            {
              Tree_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Tree_42, 0) = K0_9;
              MR_hl_field(1, Tree_42, 1) = V0_10;
              MR_hl_field(1, Tree_42, 2) = ((MR_Box) (L0_11));
              MR_hl_field(1, Tree_42, 3) = NULL;
            }
            AddrR_39 = (MR_Word *) (&(MR_hl_field(1, Tree_42, 3)));
            *AddrOfTree_40 = Tree_42;
            // direct tailcall eliminated
            ;
            next_value_of_Tree0_7 = R0_12;
            next_value_of_AddrOfTree_40 = AddrR_39;
            Tree0_7 = next_value_of_Tree0_7;
            AddrOfTree_40 = next_value_of_AddrOfTree_40;
            continue;
          }
          break;
      }
    }
    else
      succeeded = MR_FALSE;
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__rbtree__remove_smallest_4_p_0(
  MR_Word TypeInfo_for_K_36,
  MR_Word TypeInfo_for_V_37,
  MR_Box * SmallestK_5,
  MR_Box * SmallestV_6,
  MR_Word Tree0_7,
  MR_Word * Tree_8)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) Tree0_7)) == (MR_Integer) 2))
  {
    MR_Box K0_32 = (MR_hl_field(2, Tree0_7, 0));
    MR_Box V0_33 = (MR_hl_field(2, Tree0_7, 1));
    MR_Word L0_34 = ((MR_Word) ((MR_hl_field(2, Tree0_7, 2))));
    MR_Word R0_35 = ((MR_Word) ((MR_hl_field(2, Tree0_7, 3))));

    switch (MR_tag((MR_Word) L0_34)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *SmallestK_5 = K0_32;
          *SmallestV_6 = V0_33;
          *Tree_8 = R0_35;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Word * AddrL_38;

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            *Tree_8 = base;
            MR_hl_field(2, base, 0) = K0_32;
            MR_hl_field(2, base, 1) = V0_33;
            MR_hl_field(2, base, 2) = NULL;
            MR_hl_field(2, base, 3) = ((MR_Box) (R0_35));
          }
          AddrL_38 = (MR_Word *) (&(MR_hl_field(2, *Tree_8, 2)));
          succeeded = mercury__rbtree__LCMC__pred__remove_smallest__1_4_p_0(TypeInfo_for_K_36, TypeInfo_for_V_37, SmallestK_5, SmallestV_6, L0_34, AddrL_38);
        }
        break;
    }
  }
  else
  if (((MR_tag((MR_Word) Tree0_7)) == (MR_Integer) 1))
  {
    MR_Box K0_9 = (MR_hl_field(1, Tree0_7, 0));
    MR_Box V0_10 = (MR_hl_field(1, Tree0_7, 1));
    MR_Word L0_11 = ((MR_Word) ((MR_hl_field(1, Tree0_7, 2))));
    MR_Word R0_12 = ((MR_Word) ((MR_hl_field(1, Tree0_7, 3))));

    switch (MR_tag((MR_Word) L0_11)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *SmallestK_5 = K0_9;
          *SmallestV_6 = V0_10;
          *Tree_8 = R0_12;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
      case (MR_Integer) 2:
        {
          MR_Word * AddrL_39;

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            *Tree_8 = base;
            MR_hl_field(1, base, 0) = K0_9;
            MR_hl_field(1, base, 1) = V0_10;
            MR_hl_field(1, base, 2) = NULL;
            MR_hl_field(1, base, 3) = ((MR_Box) (R0_12));
          }
          AddrL_39 = (MR_Word *) (&(MR_hl_field(1, *Tree_8, 2)));
          succeeded = mercury__rbtree__LCMC__pred__remove_smallest__1_4_p_0(TypeInfo_for_K_36, TypeInfo_for_V_37, SmallestK_5, SmallestV_6, L0_11, AddrL_39);
        }
        break;
    }
  }
  else
    succeeded = MR_FALSE;
  return succeeded;
}

MR_bool MR_CALL 
mercury__rbtree__LCMC__pred__remove_smallest__1_4_p_0(
  MR_Word TypeInfo_for_K_36,
  MR_Word TypeInfo_for_V_37,
  MR_Box * SmallestK_5,
  MR_Box * SmallestV_6,
  MR_Word Tree0_7,
  MR_Word * AddrOfTree_40)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) Tree0_7)) == (MR_Integer) 2))
    {
      MR_Box K0_32 = (MR_hl_field(2, Tree0_7, 0));
      MR_Box V0_33 = (MR_hl_field(2, Tree0_7, 1));
      MR_Word L0_34 = ((MR_Word) ((MR_hl_field(2, Tree0_7, 2))));
      MR_Word R0_35 = ((MR_Word) ((MR_hl_field(2, Tree0_7, 3))));

      switch (MR_tag((MR_Word) L0_34)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *SmallestK_5 = K0_32;
            *SmallestV_6 = V0_33;
            *AddrOfTree_40 = R0_35;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            MR_Word Tree_8;
            MR_Word * AddrL_38;
            MR_Word next_value_of_Tree0_7;
            MR_Word * next_value_of_AddrOfTree_40;

            {
              Tree_8 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Tree_8, 0) = K0_32;
              MR_hl_field(2, Tree_8, 1) = V0_33;
              MR_hl_field(2, Tree_8, 2) = NULL;
              MR_hl_field(2, Tree_8, 3) = ((MR_Box) (R0_35));
            }
            AddrL_38 = (MR_Word *) (&(MR_hl_field(2, Tree_8, 2)));
            *AddrOfTree_40 = Tree_8;
            // direct tailcall eliminated
            ;
            next_value_of_Tree0_7 = L0_34;
            next_value_of_AddrOfTree_40 = AddrL_38;
            Tree0_7 = next_value_of_Tree0_7;
            AddrOfTree_40 = next_value_of_AddrOfTree_40;
            continue;
          }
          break;
      }
    }
    else
    if (((MR_tag((MR_Word) Tree0_7)) == (MR_Integer) 1))
    {
      MR_Box K0_9 = (MR_hl_field(1, Tree0_7, 0));
      MR_Box V0_10 = (MR_hl_field(1, Tree0_7, 1));
      MR_Word L0_11 = ((MR_Word) ((MR_hl_field(1, Tree0_7, 2))));
      MR_Word R0_12 = ((MR_Word) ((MR_hl_field(1, Tree0_7, 3))));

      switch (MR_tag((MR_Word) L0_11)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *SmallestK_5 = K0_9;
            *SmallestV_6 = V0_10;
            *AddrOfTree_40 = R0_12;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 1:
        case (MR_Integer) 2:
          {
            MR_Word * AddrL_39;
            MR_Word Tree_42;
            MR_Word next_value_of_Tree0_7;
            MR_Word * next_value_of_AddrOfTree_40;

            {
              Tree_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Tree_42, 0) = K0_9;
              MR_hl_field(1, Tree_42, 1) = V0_10;
              MR_hl_field(1, Tree_42, 2) = NULL;
              MR_hl_field(1, Tree_42, 3) = ((MR_Box) (R0_12));
            }
            AddrL_39 = (MR_Word *) (&(MR_hl_field(1, Tree_42, 2)));
            *AddrOfTree_40 = Tree_42;
            // direct tailcall eliminated
            ;
            next_value_of_Tree0_7 = L0_11;
            next_value_of_AddrOfTree_40 = AddrL_39;
            Tree0_7 = next_value_of_Tree0_7;
            AddrOfTree_40 = next_value_of_AddrOfTree_40;
            continue;
          }
          break;
      }
    }
    else
      succeeded = MR_FALSE;
    return succeeded;
    break;
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
      mercury__require__report_lookup_error_3_p_0(TypeInfo_for_K_12, TypeInfo_for_V_13, (MR_String) "rbtree.upper_bound_lookup: key not found", SearchK_6);
      return;
    }
}

MR_bool MR_CALL 
mercury__rbtree__upper_bound_search_4_p_0(
  MR_Word TypeInfo_for_K_16,
  MR_Word TypeInfo_for_V_17,
  MR_Word Tree0_5,
  MR_Box SearchK_6,
  MR_Box * K_7,
  MR_Box * V_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) Tree0_5)) == (MR_Integer) 2))
    {
      MR_Box K0_9 = (MR_hl_field(2, Tree0_5, 0));
      MR_Box V0_10 = (MR_hl_field(2, Tree0_5, 1));
      MR_Word L0_11 = ((MR_Word) ((MR_hl_field(2, Tree0_5, 2))));
      MR_Word R0_12 = ((MR_Word) ((MR_hl_field(2, Tree0_5, 3))));
      MR_Word Result_13;

      mercury__builtin__compare_3_p_0(TypeInfo_for_K_16, &Result_13, SearchK_6, K0_9);
      switch (Result_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Box Kp_14;
            MR_Box Vp_15;

            succeeded = mercury__rbtree__upper_bound_search_4_p_0(TypeInfo_for_K_16, TypeInfo_for_V_17, L0_11, SearchK_6, &Kp_14, &Vp_15);
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
            MR_Word next_value_of_Tree0_5 = R0_12;

            // direct tailcall eliminated
            ;
            Tree0_5 = next_value_of_Tree0_5;
            continue;
          }
          break;
      }
    }
    else
    if (((MR_tag((MR_Word) Tree0_5)) == (MR_Integer) 1))
    {
      MR_Box K0_22 = (MR_hl_field(1, Tree0_5, 0));
      MR_Box V0_23 = (MR_hl_field(1, Tree0_5, 1));
      MR_Word L0_24 = ((MR_Word) ((MR_hl_field(1, Tree0_5, 2))));
      MR_Word R0_25 = ((MR_Word) ((MR_hl_field(1, Tree0_5, 3))));
      MR_Word Result_26;

      mercury__builtin__compare_3_p_0(TypeInfo_for_K_16, &Result_26, SearchK_6, K0_22);
      switch (Result_26) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Box Kp_18;
            MR_Box Vp_19;

            succeeded = mercury__rbtree__upper_bound_search_4_p_0(TypeInfo_for_K_16, TypeInfo_for_V_17, L0_24, SearchK_6, &Kp_18, &Vp_19);
            if (succeeded)
            {
              *K_7 = Kp_18;
              *V_8 = Vp_19;
            }
            else
            {
              *K_7 = K0_22;
              *V_8 = V0_23;
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 0:
          {
            *K_7 = K0_22;
            *V_8 = V0_23;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word next_value_of_Tree0_5 = R0_25;

            // direct tailcall eliminated
            ;
            Tree0_5 = next_value_of_Tree0_5;
            continue;
          }
          break;
      }
    }
    else
      succeeded = MR_FALSE;
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
      mercury__require__report_lookup_error_3_p_0(TypeInfo_for_K_12, TypeInfo_for_V_13, (MR_String) "rbtree.lower_bound_lookup: key not found", SearchK_6);
      return;
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

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) Tree_5)) == (MR_Integer) 2))
    {
      MR_Box K0_9 = (MR_hl_field(2, Tree_5, 0));
      MR_Box V0_10 = (MR_hl_field(2, Tree_5, 1));
      MR_Word L0_11 = ((MR_Word) ((MR_hl_field(2, Tree_5, 2))));
      MR_Word R_12 = ((MR_Word) ((MR_hl_field(2, Tree_5, 3))));
      MR_Word Result_13;

      mercury__builtin__compare_3_p_0(TypeInfo_for_K_16, &Result_13, SearchK_6, K0_9);
      switch (Result_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word next_value_of_Tree_5 = L0_11;

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

            succeeded = mercury__rbtree__lower_bound_search_4_p_0(TypeInfo_for_K_16, TypeInfo_for_V_17, R_12, SearchK_6, &Kp_14, &Vp_15);
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
    else
    if (((MR_tag((MR_Word) Tree_5)) == (MR_Integer) 1))
    {
      MR_Box K0_22 = (MR_hl_field(1, Tree_5, 0));
      MR_Box V0_23 = (MR_hl_field(1, Tree_5, 1));
      MR_Word L0_24 = ((MR_Word) ((MR_hl_field(1, Tree_5, 2))));
      MR_Word R_25 = ((MR_Word) ((MR_hl_field(1, Tree_5, 3))));
      MR_Word Result_26;

      mercury__builtin__compare_3_p_0(TypeInfo_for_K_16, &Result_26, SearchK_6, K0_22);
      switch (Result_26) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word next_value_of_Tree_5 = L0_24;

            // direct tailcall eliminated
            ;
            Tree_5 = next_value_of_Tree_5;
            continue;
          }
          break;
        case (MR_Integer) 0:
          {
            *K_7 = K0_22;
            *V_8 = V0_23;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Box Kp_18;
            MR_Box Vp_19;

            succeeded = mercury__rbtree__lower_bound_search_4_p_0(TypeInfo_for_K_16, TypeInfo_for_V_17, R_25, SearchK_6, &Kp_18, &Vp_19);
            if (succeeded)
            {
              *K_7 = Kp_18;
              *V_8 = Vp_19;
            }
            else
            {
              *K_7 = K0_22;
              *V_8 = V0_23;
            }
            succeeded = MR_TRUE;
          }
          break;
      }
    }
    else
      succeeded = MR_FALSE;
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
  MR_bool succeeded;
  MR_Box V0_7;

  succeeded = mercury__rbtree__search_3_p_0(TypeInfo_for_K_9, TypeInfo_for_V_10, T_4, K_5, &V0_7);
  if (succeeded)
    *V_6 = V0_7;
  else
    {
      mercury__require__report_lookup_error_3_p_0(TypeInfo_for_K_9, TypeInfo_for_V_10, (MR_String) "rbtree.lookup: key not found", K_5);
      return;
    }
}

MR_Box MR_CALL 
mercury__rbtree__lookup_2_f_0(
  MR_Word TypeInfo_for_K_7,
  MR_Word TypeInfo_for_V_8,
  MR_Word RBT_4,
  MR_Box K_5)
{
  MR_bool succeeded;
  MR_Box V_6;
  MR_Box V0_9;

  succeeded = mercury__rbtree__search_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, RBT_4, K_5, &V0_9);
  if (succeeded)
    V_6 = V0_9;
  else
    mercury__require__report_lookup_error_3_p_0(TypeInfo_for_K_7, TypeInfo_for_V_8, (MR_String) "rbtree.lookup: key not found", K_5);
  return V_6;
}

MR_bool MR_CALL 
mercury__rbtree__search_3_p_0(
  MR_Word TypeInfo_for_K_12,
  MR_Word TypeInfo_for_V_13,
  MR_Word Tree0_4,
  MR_Box K_5,
  MR_Box * V_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) Tree0_4)) == (MR_Integer) 2))
    {
      MR_Box K0_7 = (MR_hl_field(2, Tree0_4, 0));
      MR_Box V0_8 = (MR_hl_field(2, Tree0_4, 1));
      MR_Word L_9 = ((MR_Word) ((MR_hl_field(2, Tree0_4, 2))));
      MR_Word R_10 = ((MR_Word) ((MR_hl_field(2, Tree0_4, 3))));
      MR_Word Result_11;

      mercury__builtin__compare_3_p_0(TypeInfo_for_K_12, &Result_11, K_5, K0_7);
      switch (Result_11) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word next_value_of_Tree0_4 = L_9;

            // direct tailcall eliminated
            ;
            Tree0_4 = next_value_of_Tree0_4;
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
            MR_Word next_value_of_Tree0_4 = R_10;

            // direct tailcall eliminated
            ;
            Tree0_4 = next_value_of_Tree0_4;
            continue;
          }
          break;
      }
    }
    else
    if (((MR_tag((MR_Word) Tree0_4)) == (MR_Integer) 1))
    {
      MR_Box K0_14 = (MR_hl_field(1, Tree0_4, 0));
      MR_Box V0_15 = (MR_hl_field(1, Tree0_4, 1));
      MR_Word L_16 = ((MR_Word) ((MR_hl_field(1, Tree0_4, 2))));
      MR_Word R_17 = ((MR_Word) ((MR_hl_field(1, Tree0_4, 3))));
      MR_Word Result_18;

      mercury__builtin__compare_3_p_0(TypeInfo_for_K_12, &Result_18, K_5, K0_14);
      switch (Result_18) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word next_value_of_Tree0_4 = L_16;

            // direct tailcall eliminated
            ;
            Tree0_4 = next_value_of_Tree0_4;
            continue;
          }
          break;
        case (MR_Integer) 0:
          {
            *V_6 = V0_15;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word next_value_of_Tree0_4 = R_17;

            // direct tailcall eliminated
            ;
            Tree0_4 = next_value_of_Tree0_4;
            continue;
          }
          break;
      }
    }
    else
      succeeded = MR_FALSE;
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__rbtree__member_3_p_0(
  MR_Word TypeInfo_for_K_11,
  MR_Word TypeInfo_for_V_12,
  MR_Word Tree0_4,
  MR_Box * K_5,
  MR_Box * V_6,
  MR_Cont cont,
  void * cont_env_ptr)
{
  while (MR_TRUE)
  {
    // setup for model_non tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) Tree0_4)) == (MR_Integer) 2))
    {
      MR_Box K0_7 = (MR_hl_field(2, Tree0_4, 0));
      MR_Box V0_8 = (MR_hl_field(2, Tree0_4, 1));
      MR_Word L0_9 = ((MR_Word) ((MR_hl_field(2, Tree0_4, 2))));
      MR_Word R0_10 = ((MR_Word) ((MR_hl_field(2, Tree0_4, 3))));

      *K_5 = K0_7;
      *V_6 = V0_8;
      cont(cont_env_ptr);
      mercury__rbtree__member_3_p_0(TypeInfo_for_K_11, TypeInfo_for_V_12, L0_9, K_5, V_6, cont, cont_env_ptr);
      {
        MR_Word next_value_of_Tree0_4 = R0_10;

        // direct tailcall eliminated
        ;
        Tree0_4 = next_value_of_Tree0_4;
        continue;
      }
    }
    else
    if (((MR_tag((MR_Word) Tree0_4)) == (MR_Integer) 1))
    {
      MR_Box K0_13 = (MR_hl_field(1, Tree0_4, 0));
      MR_Box V0_14 = (MR_hl_field(1, Tree0_4, 1));
      MR_Word L0_15 = ((MR_Word) ((MR_hl_field(1, Tree0_4, 2))));
      MR_Word R0_16 = ((MR_Word) ((MR_hl_field(1, Tree0_4, 3))));

      *K_5 = K0_13;
      *V_6 = V0_14;
      cont(cont_env_ptr);
      mercury__rbtree__member_3_p_0(TypeInfo_for_K_11, TypeInfo_for_V_12, L0_15, K_5, V_6, cont, cont_env_ptr);
      {
        MR_Word next_value_of_Tree0_4 = R0_16;

        // direct tailcall eliminated
        ;
        Tree0_4 = next_value_of_Tree0_4;
        continue;
      }
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__rbtree__insert_duplicate_3_f_0(
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_V_11,
  MR_Word STATE_VARIABLE_RBT_0_8,
  MR_Box K_6,
  MR_Box V_7)
{
  MR_Word STATE_VARIABLE_RBT_9;

  mercury__rbtree__insert_duplicate_4_p_0(TypeInfo_for_K_10, TypeInfo_for_V_11, K_6, V_7, STATE_VARIABLE_RBT_0_8, &STATE_VARIABLE_RBT_9);
  return STATE_VARIABLE_RBT_9;
}

void MR_CALL 
mercury__rbtree__insert_duplicate_4_p_0(
  MR_Word TypeInfo_for_K_26,
  MR_Word TypeInfo_for_V_27,
  MR_Box K_5,
  MR_Box V_6,
  MR_Word Tree0_7,
  MR_Word * Tree_8)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Tree0_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        *Tree_8 = base;
        MR_hl_field(2, base, 0) = K_5;
        MR_hl_field(2, base, 1) = V_6;
        MR_hl_field(2, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(2, base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      break;
    case (MR_Integer) 1:
      {
        mercury__require__error_2_p_0((MR_String) "predicate \140rbtree.insert_duplicate\'/4", (MR_String) "root node should not be red!");
        return;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Tree1_17;
        MR_Box K1_18;
        MR_Box V1_19;
        MR_Word L1_20;
        MR_Word R1_21;

        mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_105_110_116_111_95_110_111_100_101_95_95_91_50_93_95_48_4_p_0(TypeInfo_for_K_26, K_5, V_6, Tree0_7, &Tree1_17);
        succeeded = ((MR_tag((MR_Word) Tree1_17)) == (MR_Integer) 1);
        if (succeeded)
        {
          K1_18 = (MR_hl_field(1, Tree1_17, 0));
          V1_19 = (MR_hl_field(1, Tree1_17, 1));
          L1_20 = ((MR_Word) ((MR_hl_field(1, Tree1_17, 2))));
          R1_21 = ((MR_Word) ((MR_hl_field(1, Tree1_17, 3))));
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            *Tree_8 = base;
            MR_hl_field(2, base, 0) = K1_18;
            MR_hl_field(2, base, 1) = V1_19;
            MR_hl_field(2, base, 2) = ((MR_Box) (L1_20));
            MR_hl_field(2, base, 3) = ((MR_Box) (R1_21));
          }
        }
        else
          *Tree_8 = Tree1_17;
      }
      break;
  }
}

static void MR_CALL 
mercury__rbtree__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_105_110_116_111_95_110_111_100_101_95_95_91_50_93_95_48_95_95_49_4_p_0(
  MR_Word TypeInfo_for_K_145,
  MR_Box K_5,
  MR_Box V_6,
  MR_Word Tree0_7,
  MR_Word * AddrOfTree_149)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Tree0_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Tree_170;

          {
            Tree_170 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Tree_170, 0) = K_5;
            MR_hl_field(1, Tree_170, 1) = V_6;
            MR_hl_field(1, Tree_170, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, Tree_170, 3) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *AddrOfTree_149 = Tree_170;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K0_9 = (MR_hl_field(1, Tree0_7, 0));
          MR_Box V0_10 = (MR_hl_field(1, Tree0_7, 1));
          MR_Word L0_11 = ((MR_Word) ((MR_hl_field(1, Tree0_7, 2))));
          MR_Word R0_12 = ((MR_Word) ((MR_hl_field(1, Tree0_7, 3))));
          MR_Word Result_13;

          mercury__builtin__compare_3_p_0(TypeInfo_for_K_145, &Result_13, K_5, K0_9);
          switch (Result_13) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
            case (MR_Integer) 0:
              {
                MR_Word * AddrL_147;
                MR_Word Tree_171;
                MR_Word next_value_of_Tree0_7;
                MR_Word * next_value_of_AddrOfTree_149;

                {
                  Tree_171 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Tree_171, 0) = K0_9;
                  MR_hl_field(1, Tree_171, 1) = V0_10;
                  MR_hl_field(1, Tree_171, 2) = NULL;
                  MR_hl_field(1, Tree_171, 3) = ((MR_Box) (R0_12));
                }
                AddrL_147 = (MR_Word *) (&(MR_hl_field(1, Tree_171, 2)));
                *AddrOfTree_149 = Tree_171;
                // direct tailcall eliminated
                ;
                next_value_of_Tree0_7 = L0_11;
                next_value_of_AddrOfTree_149 = AddrL_147;
                Tree0_7 = next_value_of_Tree0_7;
                AddrOfTree_149 = next_value_of_AddrOfTree_149;
                continue;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word * AddrR_148;
                MR_Word Tree_174;
                MR_Word next_value_of_Tree0_7;
                MR_Word * next_value_of_AddrOfTree_149;

                {
                  Tree_174 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Tree_174, 0) = K0_9;
                  MR_hl_field(1, Tree_174, 1) = V0_10;
                  MR_hl_field(1, Tree_174, 2) = ((MR_Box) (L0_11));
                  MR_hl_field(1, Tree_174, 3) = NULL;
                }
                AddrR_148 = (MR_Word *) (&(MR_hl_field(1, Tree_174, 3)));
                *AddrOfTree_149 = Tree_174;
                // direct tailcall eliminated
                ;
                next_value_of_Tree0_7 = R0_12;
                next_value_of_AddrOfTree_149 = AddrR_148;
                Tree0_7 = next_value_of_Tree0_7;
                AddrOfTree_149 = next_value_of_AddrOfTree_149;
                continue;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K0_141 = (MR_hl_field(2, Tree0_7, 0));
          MR_Box V0_142 = (MR_hl_field(2, Tree0_7, 1));
          MR_Word L0_143 = ((MR_Word) ((MR_hl_field(2, Tree0_7, 2))));
          MR_Word R0_144 = ((MR_Word) ((MR_hl_field(2, Tree0_7, 3))));
          MR_Box LK_16;
          MR_Box LV_17;
          MR_Word LL_18;
          MR_Word LR_19;
          MR_Box RK_20;
          MR_Box RV_21;
          MR_Word RL_22;
          MR_Word RR_23;

          succeeded = ((MR_tag((MR_Word) L0_143)) == (MR_Integer) 1);
          if (succeeded)
          {
            LK_16 = (MR_hl_field(1, L0_143, 0));
            LV_17 = (MR_hl_field(1, L0_143, 1));
            LL_18 = ((MR_Word) ((MR_hl_field(1, L0_143, 2))));
            LR_19 = ((MR_Word) ((MR_hl_field(1, L0_143, 3))));
            succeeded = ((MR_tag((MR_Word) R0_144)) == (MR_Integer) 1);
            if (succeeded)
            {
              RK_20 = (MR_hl_field(1, R0_144, 0));
              RV_21 = (MR_hl_field(1, R0_144, 1));
              RL_22 = ((MR_Word) ((MR_hl_field(1, R0_144, 2))));
              RR_23 = ((MR_Word) ((MR_hl_field(1, R0_144, 3))));
            }
          }
          if (succeeded)
          {
            MR_Word L1_24;
            MR_Word R1_25;
            MR_Word Tree1_26;
            MR_Word next_value_of_Tree0_7;

            {
              L1_24 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, L1_24, 0) = LK_16;
              MR_hl_field(2, L1_24, 1) = LV_17;
              MR_hl_field(2, L1_24, 2) = ((MR_Box) (LL_18));
              MR_hl_field(2, L1_24, 3) = ((MR_Box) (LR_19));
            }
            {
              R1_25 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, R1_25, 0) = RK_20;
              MR_hl_field(2, R1_25, 1) = RV_21;
              MR_hl_field(2, R1_25, 2) = ((MR_Box) (RL_22));
              MR_hl_field(2, R1_25, 3) = ((MR_Box) (RR_23));
            }
            {
              Tree1_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Tree1_26, 0) = K0_141;
              MR_hl_field(1, Tree1_26, 1) = V0_142;
              MR_hl_field(1, Tree1_26, 2) = ((MR_Box) (L1_24));
              MR_hl_field(1, Tree1_26, 3) = ((MR_Box) (R1_25));
            }
            // direct tailcall eliminated
            ;
            next_value_of_Tree0_7 = Tree1_26;
            Tree0_7 = next_value_of_Tree0_7;
            continue;
          }
          else
          {
            MR_Word Result_127;

            mercury__builtin__compare_3_p_0(TypeInfo_for_K_145, &Result_127, K_5, K0_141);
            switch (Result_127) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word L_57;
                  MR_Box LK_53;
                  MR_Box LV_54;
                  MR_Word LL_55;
                  MR_Word LR_56;

                  mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_105_110_116_111_95_110_111_100_101_95_95_91_50_93_95_48_4_p_0(TypeInfo_for_K_145, K_5, V_6, L0_143, &L_57);
                  succeeded = ((MR_tag((MR_Word) L_57)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    LK_53 = (MR_hl_field(1, L_57, 0));
                    LV_54 = (MR_hl_field(1, L_57, 1));
                    LL_55 = ((MR_Word) ((MR_hl_field(1, L_57, 2))));
                    LR_56 = ((MR_Word) ((MR_hl_field(1, L_57, 3))));
                    succeeded = ((MR_tag((MR_Word) LL_55)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      MR_Word Tree_8;
                      MR_Word TreeR_31;

                      {
                        TreeR_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, TreeR_31, 0) = K0_141;
                        MR_hl_field(1, TreeR_31, 1) = V0_142;
                        MR_hl_field(1, TreeR_31, 2) = ((MR_Box) (LR_56));
                        MR_hl_field(1, TreeR_31, 3) = ((MR_Box) (R0_144));
                      }
                      {
                        Tree_8 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Tree_8, 0) = LK_53;
                        MR_hl_field(2, Tree_8, 1) = LV_54;
                        MR_hl_field(2, Tree_8, 2) = ((MR_Box) (LL_55));
                        MR_hl_field(2, Tree_8, 3) = ((MR_Box) (TreeR_31));
                      }
                      *AddrOfTree_149 = Tree_8;
                    }
                    else
                    {
                      MR_Box LRK_32;
                      MR_Box LRV_33;
                      MR_Word LRL_34;
                      MR_Word LRR_35;

                      succeeded = ((MR_tag((MR_Word) LR_56)) == (MR_Integer) 1);
                      if (succeeded)
                      {
                        LRK_32 = (MR_hl_field(1, LR_56, 0));
                        LRV_33 = (MR_hl_field(1, LR_56, 1));
                        LRL_34 = ((MR_Word) ((MR_hl_field(1, LR_56, 2))));
                        LRR_35 = ((MR_Word) ((MR_hl_field(1, LR_56, 3))));
                        {
                          MR_Word TreeL_36;
                          MR_Word TreeR_51;
                          MR_Word Tree_150;

                          {
                            TreeL_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, TreeL_36, 0) = LK_53;
                            MR_hl_field(1, TreeL_36, 1) = LV_54;
                            MR_hl_field(1, TreeL_36, 2) = ((MR_Box) (LL_55));
                            MR_hl_field(1, TreeL_36, 3) = ((MR_Box) (LRL_34));
                          }
                          {
                            TreeR_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, TreeR_51, 0) = K0_141;
                            MR_hl_field(1, TreeR_51, 1) = V0_142;
                            MR_hl_field(1, TreeR_51, 2) = ((MR_Box) (LRR_35));
                            MR_hl_field(1, TreeR_51, 3) = ((MR_Box) (R0_144));
                          }
                          {
                            Tree_150 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(2, Tree_150, 0) = LRK_32;
                            MR_hl_field(2, Tree_150, 1) = LRV_33;
                            MR_hl_field(2, Tree_150, 2) = ((MR_Box) (TreeL_36));
                            MR_hl_field(2, Tree_150, 3) = ((MR_Box) (TreeR_51));
                          }
                          *AddrOfTree_149 = Tree_150;
                        }
                      }
                      else
                      {
                        MR_Word Tree_151;

                        {
                          Tree_151 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(2, Tree_151, 0) = K0_141;
                          MR_hl_field(2, Tree_151, 1) = V0_142;
                          MR_hl_field(2, Tree_151, 2) = ((MR_Box) (L_57));
                          MR_hl_field(2, Tree_151, 3) = ((MR_Box) (R0_144));
                        }
                        *AddrOfTree_149 = Tree_151;
                      }
                    }
                  }
                  else
                  {
                    MR_Word Tree_153;

                    {
                      Tree_153 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Tree_153, 0) = K0_141;
                      MR_hl_field(2, Tree_153, 1) = V0_142;
                      MR_hl_field(2, Tree_153, 2) = ((MR_Box) (L_57));
                      MR_hl_field(2, Tree_153, 3) = ((MR_Box) (R0_144));
                    }
                    *AddrOfTree_149 = Tree_153;
                  }
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word L_106;
                  MR_Box LK_96;
                  MR_Box LV_97;
                  MR_Word LL_98;
                  MR_Word LR_99;

                  mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_105_110_116_111_95_110_111_100_101_95_95_91_50_93_95_48_4_p_0(TypeInfo_for_K_145, K_5, V_6, L0_143, &L_106);
                  succeeded = ((MR_tag((MR_Word) L_106)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    LK_96 = (MR_hl_field(1, L_106, 0));
                    LV_97 = (MR_hl_field(1, L_106, 1));
                    LL_98 = ((MR_Word) ((MR_hl_field(1, L_106, 2))));
                    LR_99 = ((MR_Word) ((MR_hl_field(1, L_106, 3))));
                    succeeded = ((MR_tag((MR_Word) LL_98)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      MR_Word TreeR_81;
                      MR_Word Tree_154;

                      {
                        TreeR_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, TreeR_81, 0) = K0_141;
                        MR_hl_field(1, TreeR_81, 1) = V0_142;
                        MR_hl_field(1, TreeR_81, 2) = ((MR_Box) (LR_99));
                        MR_hl_field(1, TreeR_81, 3) = ((MR_Box) (R0_144));
                      }
                      {
                        Tree_154 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Tree_154, 0) = LK_96;
                        MR_hl_field(2, Tree_154, 1) = LV_97;
                        MR_hl_field(2, Tree_154, 2) = ((MR_Box) (LL_98));
                        MR_hl_field(2, Tree_154, 3) = ((MR_Box) (TreeR_81));
                      }
                      *AddrOfTree_149 = Tree_154;
                    }
                    else
                    {
                      MR_Box LRK_85;
                      MR_Box LRV_86;
                      MR_Word LRL_87;
                      MR_Word LRR_88;

                      succeeded = ((MR_tag((MR_Word) LR_99)) == (MR_Integer) 1);
                      if (succeeded)
                      {
                        LRK_85 = (MR_hl_field(1, LR_99, 0));
                        LRV_86 = (MR_hl_field(1, LR_99, 1));
                        LRL_87 = ((MR_Word) ((MR_hl_field(1, LR_99, 2))));
                        LRR_88 = ((MR_Word) ((MR_hl_field(1, LR_99, 3))));
                        {
                          MR_Word TreeR_82;
                          MR_Word TreeL_83;
                          MR_Word Tree_155;

                          {
                            TreeL_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, TreeL_83, 0) = LK_96;
                            MR_hl_field(1, TreeL_83, 1) = LV_97;
                            MR_hl_field(1, TreeL_83, 2) = ((MR_Box) (LL_98));
                            MR_hl_field(1, TreeL_83, 3) = ((MR_Box) (LRL_87));
                          }
                          {
                            TreeR_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, TreeR_82, 0) = K0_141;
                            MR_hl_field(1, TreeR_82, 1) = V0_142;
                            MR_hl_field(1, TreeR_82, 2) = ((MR_Box) (LRR_88));
                            MR_hl_field(1, TreeR_82, 3) = ((MR_Box) (R0_144));
                          }
                          {
                            Tree_155 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(2, Tree_155, 0) = LRK_85;
                            MR_hl_field(2, Tree_155, 1) = LRV_86;
                            MR_hl_field(2, Tree_155, 2) = ((MR_Box) (TreeL_83));
                            MR_hl_field(2, Tree_155, 3) = ((MR_Box) (TreeR_82));
                          }
                          *AddrOfTree_149 = Tree_155;
                        }
                      }
                      else
                      {
                        MR_Word Tree_156;

                        {
                          Tree_156 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(2, Tree_156, 0) = K0_141;
                          MR_hl_field(2, Tree_156, 1) = V0_142;
                          MR_hl_field(2, Tree_156, 2) = ((MR_Box) (L_106));
                          MR_hl_field(2, Tree_156, 3) = ((MR_Box) (R0_144));
                        }
                        *AddrOfTree_149 = Tree_156;
                      }
                    }
                  }
                  else
                  {
                    MR_Word Tree_159;

                    {
                      Tree_159 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Tree_159, 0) = K0_141;
                      MR_hl_field(2, Tree_159, 1) = V0_142;
                      MR_hl_field(2, Tree_159, 2) = ((MR_Box) (L_106));
                      MR_hl_field(2, Tree_159, 3) = ((MR_Box) (R0_144));
                    }
                    *AddrOfTree_149 = Tree_159;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word R_74;
                  MR_Box RK_68;
                  MR_Box RV_69;
                  MR_Word RL_70;
                  MR_Word RR_71;

                  mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_105_110_116_111_95_110_111_100_101_95_95_91_50_93_95_48_4_p_0(TypeInfo_for_K_145, K_5, V_6, R0_144, &R_74);
                  succeeded = ((MR_tag((MR_Word) R_74)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    RK_68 = (MR_hl_field(1, R_74, 0));
                    RV_69 = (MR_hl_field(1, R_74, 1));
                    RL_70 = ((MR_Word) ((MR_hl_field(1, R_74, 2))));
                    RR_71 = ((MR_Word) ((MR_hl_field(1, R_74, 3))));
                    {
                      MR_Box RLK_37;
                      MR_Box RLV_38;
                      MR_Word RLL_39;
                      MR_Word RLR_40;

                      succeeded = ((MR_tag((MR_Word) RL_70)) == (MR_Integer) 1);
                      if (succeeded)
                      {
                        RLK_37 = (MR_hl_field(1, RL_70, 0));
                        RLV_38 = (MR_hl_field(1, RL_70, 1));
                        RLL_39 = ((MR_Word) ((MR_hl_field(1, RL_70, 2))));
                        RLR_40 = ((MR_Word) ((MR_hl_field(1, RL_70, 3))));
                        {
                          MR_Word TreeR_62;
                          MR_Word TreeL_63;
                          MR_Word Tree_162;

                          {
                            TreeL_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, TreeL_63, 0) = K0_141;
                            MR_hl_field(1, TreeL_63, 1) = V0_142;
                            MR_hl_field(1, TreeL_63, 2) = ((MR_Box) (L0_143));
                            MR_hl_field(1, TreeL_63, 3) = ((MR_Box) (RLL_39));
                          }
                          {
                            TreeR_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, TreeR_62, 0) = RK_68;
                            MR_hl_field(1, TreeR_62, 1) = RV_69;
                            MR_hl_field(1, TreeR_62, 2) = ((MR_Box) (RLR_40));
                            MR_hl_field(1, TreeR_62, 3) = ((MR_Box) (RR_71));
                          }
                          {
                            Tree_162 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(2, Tree_162, 0) = RLK_37;
                            MR_hl_field(2, Tree_162, 1) = RLV_38;
                            MR_hl_field(2, Tree_162, 2) = ((MR_Box) (TreeL_63));
                            MR_hl_field(2, Tree_162, 3) = ((MR_Box) (TreeR_62));
                          }
                          *AddrOfTree_149 = Tree_162;
                        }
                      }
                      else
                      {
                        succeeded = ((MR_tag((MR_Word) RR_71)) == (MR_Integer) 1);
                        if (succeeded)
                        {
                          MR_Word TreeL_64;
                          MR_Word Tree_163;

                          {
                            TreeL_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, TreeL_64, 0) = K0_141;
                            MR_hl_field(1, TreeL_64, 1) = V0_142;
                            MR_hl_field(1, TreeL_64, 2) = ((MR_Box) (L0_143));
                            MR_hl_field(1, TreeL_64, 3) = ((MR_Box) (RL_70));
                          }
                          {
                            Tree_163 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(2, Tree_163, 0) = RK_68;
                            MR_hl_field(2, Tree_163, 1) = RV_69;
                            MR_hl_field(2, Tree_163, 2) = ((MR_Box) (TreeL_64));
                            MR_hl_field(2, Tree_163, 3) = ((MR_Box) (RR_71));
                          }
                          *AddrOfTree_149 = Tree_163;
                        }
                        else
                        {
                          MR_Word Tree_164;

                          {
                            Tree_164 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(2, Tree_164, 0) = K0_141;
                            MR_hl_field(2, Tree_164, 1) = V0_142;
                            MR_hl_field(2, Tree_164, 2) = ((MR_Box) (L0_143));
                            MR_hl_field(2, Tree_164, 3) = ((MR_Box) (R_74));
                          }
                          *AddrOfTree_149 = Tree_164;
                        }
                      }
                    }
                  }
                  else
                  {
                    MR_Word Tree_167;

                    {
                      Tree_167 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Tree_167, 0) = K0_141;
                      MR_hl_field(2, Tree_167, 1) = V0_142;
                      MR_hl_field(2, Tree_167, 2) = ((MR_Box) (L0_143));
                      MR_hl_field(2, Tree_167, 3) = ((MR_Box) (R_74));
                    }
                    *AddrOfTree_149 = Tree_167;
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

static void MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_105_110_116_111_95_110_111_100_101_95_95_91_50_93_95_48_4_p_0(
  MR_Word TypeInfo_for_K_145,
  MR_Box K_5,
  MR_Box V_6,
  MR_Word Tree0_7,
  MR_Word * Tree_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Tree0_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *Tree_8 = base;
          MR_hl_field(1, base, 0) = K_5;
          MR_hl_field(1, base, 1) = V_6;
          MR_hl_field(1, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K0_9 = (MR_hl_field(1, Tree0_7, 0));
          MR_Box V0_10 = (MR_hl_field(1, Tree0_7, 1));
          MR_Word L0_11 = ((MR_Word) ((MR_hl_field(1, Tree0_7, 2))));
          MR_Word R0_12 = ((MR_Word) ((MR_hl_field(1, Tree0_7, 3))));
          MR_Word Result_13;

          mercury__builtin__compare_3_p_0(TypeInfo_for_K_145, &Result_13, K_5, K0_9);
          switch (Result_13) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
            case (MR_Integer) 0:
              {
                MR_Word * AddrL_147;

                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  *Tree_8 = base;
                  MR_hl_field(1, base, 0) = K0_9;
                  MR_hl_field(1, base, 1) = V0_10;
                  MR_hl_field(1, base, 2) = NULL;
                  MR_hl_field(1, base, 3) = ((MR_Box) (R0_12));
                }
                AddrL_147 = (MR_Word *) (&(MR_hl_field(1, *Tree_8, 2)));
                mercury__rbtree__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_105_110_116_111_95_110_111_100_101_95_95_91_50_93_95_48_95_95_49_4_p_0(TypeInfo_for_K_145, K_5, V_6, L0_11, AddrL_147);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word * AddrR_148;

                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  *Tree_8 = base;
                  MR_hl_field(1, base, 0) = K0_9;
                  MR_hl_field(1, base, 1) = V0_10;
                  MR_hl_field(1, base, 2) = ((MR_Box) (L0_11));
                  MR_hl_field(1, base, 3) = NULL;
                }
                AddrR_148 = (MR_Word *) (&(MR_hl_field(1, *Tree_8, 3)));
                mercury__rbtree__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_105_110_116_111_95_110_111_100_101_95_95_91_50_93_95_48_95_95_49_4_p_0(TypeInfo_for_K_145, K_5, V_6, R0_12, AddrR_148);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K0_141 = (MR_hl_field(2, Tree0_7, 0));
          MR_Box V0_142 = (MR_hl_field(2, Tree0_7, 1));
          MR_Word L0_143 = ((MR_Word) ((MR_hl_field(2, Tree0_7, 2))));
          MR_Word R0_144 = ((MR_Word) ((MR_hl_field(2, Tree0_7, 3))));
          MR_Box LK_16;
          MR_Box LV_17;
          MR_Word LL_18;
          MR_Word LR_19;
          MR_Box RK_20;
          MR_Box RV_21;
          MR_Word RL_22;
          MR_Word RR_23;

          succeeded = ((MR_tag((MR_Word) L0_143)) == (MR_Integer) 1);
          if (succeeded)
          {
            LK_16 = (MR_hl_field(1, L0_143, 0));
            LV_17 = (MR_hl_field(1, L0_143, 1));
            LL_18 = ((MR_Word) ((MR_hl_field(1, L0_143, 2))));
            LR_19 = ((MR_Word) ((MR_hl_field(1, L0_143, 3))));
            succeeded = ((MR_tag((MR_Word) R0_144)) == (MR_Integer) 1);
            if (succeeded)
            {
              RK_20 = (MR_hl_field(1, R0_144, 0));
              RV_21 = (MR_hl_field(1, R0_144, 1));
              RL_22 = ((MR_Word) ((MR_hl_field(1, R0_144, 2))));
              RR_23 = ((MR_Word) ((MR_hl_field(1, R0_144, 3))));
            }
          }
          if (succeeded)
          {
            MR_Word L1_24;
            MR_Word R1_25;
            MR_Word Tree1_26;
            MR_Word next_value_of_Tree0_7;

            {
              L1_24 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, L1_24, 0) = LK_16;
              MR_hl_field(2, L1_24, 1) = LV_17;
              MR_hl_field(2, L1_24, 2) = ((MR_Box) (LL_18));
              MR_hl_field(2, L1_24, 3) = ((MR_Box) (LR_19));
            }
            {
              R1_25 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, R1_25, 0) = RK_20;
              MR_hl_field(2, R1_25, 1) = RV_21;
              MR_hl_field(2, R1_25, 2) = ((MR_Box) (RL_22));
              MR_hl_field(2, R1_25, 3) = ((MR_Box) (RR_23));
            }
            {
              Tree1_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Tree1_26, 0) = K0_141;
              MR_hl_field(1, Tree1_26, 1) = V0_142;
              MR_hl_field(1, Tree1_26, 2) = ((MR_Box) (L1_24));
              MR_hl_field(1, Tree1_26, 3) = ((MR_Box) (R1_25));
            }
            // direct tailcall eliminated
            ;
            next_value_of_Tree0_7 = Tree1_26;
            Tree0_7 = next_value_of_Tree0_7;
            continue;
          }
          else
          {
            MR_Word Result_127;

            mercury__builtin__compare_3_p_0(TypeInfo_for_K_145, &Result_127, K_5, K0_141);
            switch (Result_127) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word L_57;
                  MR_Box LK_53;
                  MR_Box LV_54;
                  MR_Word LL_55;
                  MR_Word LR_56;

                  mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_105_110_116_111_95_110_111_100_101_95_95_91_50_93_95_48_4_p_0(TypeInfo_for_K_145, K_5, V_6, L0_143, &L_57);
                  succeeded = ((MR_tag((MR_Word) L_57)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    LK_53 = (MR_hl_field(1, L_57, 0));
                    LV_54 = (MR_hl_field(1, L_57, 1));
                    LL_55 = ((MR_Word) ((MR_hl_field(1, L_57, 2))));
                    LR_56 = ((MR_Word) ((MR_hl_field(1, L_57, 3))));
                    succeeded = ((MR_tag((MR_Word) LL_55)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      MR_Word TreeR_31;

                      {
                        TreeR_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, TreeR_31, 0) = K0_141;
                        MR_hl_field(1, TreeR_31, 1) = V0_142;
                        MR_hl_field(1, TreeR_31, 2) = ((MR_Box) (LR_56));
                        MR_hl_field(1, TreeR_31, 3) = ((MR_Box) (R0_144));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        *Tree_8 = base;
                        MR_hl_field(2, base, 0) = LK_53;
                        MR_hl_field(2, base, 1) = LV_54;
                        MR_hl_field(2, base, 2) = ((MR_Box) (LL_55));
                        MR_hl_field(2, base, 3) = ((MR_Box) (TreeR_31));
                      }
                    }
                    else
                    {
                      MR_Box LRK_32;
                      MR_Box LRV_33;
                      MR_Word LRL_34;
                      MR_Word LRR_35;

                      succeeded = ((MR_tag((MR_Word) LR_56)) == (MR_Integer) 1);
                      if (succeeded)
                      {
                        LRK_32 = (MR_hl_field(1, LR_56, 0));
                        LRV_33 = (MR_hl_field(1, LR_56, 1));
                        LRL_34 = ((MR_Word) ((MR_hl_field(1, LR_56, 2))));
                        LRR_35 = ((MR_Word) ((MR_hl_field(1, LR_56, 3))));
                        {
                          MR_Word TreeL_36;
                          MR_Word TreeR_51;

                          {
                            TreeL_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, TreeL_36, 0) = LK_53;
                            MR_hl_field(1, TreeL_36, 1) = LV_54;
                            MR_hl_field(1, TreeL_36, 2) = ((MR_Box) (LL_55));
                            MR_hl_field(1, TreeL_36, 3) = ((MR_Box) (LRL_34));
                          }
                          {
                            TreeR_51 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, TreeR_51, 0) = K0_141;
                            MR_hl_field(1, TreeR_51, 1) = V0_142;
                            MR_hl_field(1, TreeR_51, 2) = ((MR_Box) (LRR_35));
                            MR_hl_field(1, TreeR_51, 3) = ((MR_Box) (R0_144));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            *Tree_8 = base;
                            MR_hl_field(2, base, 0) = LRK_32;
                            MR_hl_field(2, base, 1) = LRV_33;
                            MR_hl_field(2, base, 2) = ((MR_Box) (TreeL_36));
                            MR_hl_field(2, base, 3) = ((MR_Box) (TreeR_51));
                          }
                        }
                      }
                      else
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          *Tree_8 = base;
                          MR_hl_field(2, base, 0) = K0_141;
                          MR_hl_field(2, base, 1) = V0_142;
                          MR_hl_field(2, base, 2) = ((MR_Box) (L_57));
                          MR_hl_field(2, base, 3) = ((MR_Box) (R0_144));
                        }
                    }
                  }
                  else
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      *Tree_8 = base;
                      MR_hl_field(2, base, 0) = K0_141;
                      MR_hl_field(2, base, 1) = V0_142;
                      MR_hl_field(2, base, 2) = ((MR_Box) (L_57));
                      MR_hl_field(2, base, 3) = ((MR_Box) (R0_144));
                    }
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word L_106;
                  MR_Box LK_96;
                  MR_Box LV_97;
                  MR_Word LL_98;
                  MR_Word LR_99;

                  mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_105_110_116_111_95_110_111_100_101_95_95_91_50_93_95_48_4_p_0(TypeInfo_for_K_145, K_5, V_6, L0_143, &L_106);
                  succeeded = ((MR_tag((MR_Word) L_106)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    LK_96 = (MR_hl_field(1, L_106, 0));
                    LV_97 = (MR_hl_field(1, L_106, 1));
                    LL_98 = ((MR_Word) ((MR_hl_field(1, L_106, 2))));
                    LR_99 = ((MR_Word) ((MR_hl_field(1, L_106, 3))));
                    succeeded = ((MR_tag((MR_Word) LL_98)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      MR_Word TreeR_81;

                      {
                        TreeR_81 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, TreeR_81, 0) = K0_141;
                        MR_hl_field(1, TreeR_81, 1) = V0_142;
                        MR_hl_field(1, TreeR_81, 2) = ((MR_Box) (LR_99));
                        MR_hl_field(1, TreeR_81, 3) = ((MR_Box) (R0_144));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        *Tree_8 = base;
                        MR_hl_field(2, base, 0) = LK_96;
                        MR_hl_field(2, base, 1) = LV_97;
                        MR_hl_field(2, base, 2) = ((MR_Box) (LL_98));
                        MR_hl_field(2, base, 3) = ((MR_Box) (TreeR_81));
                      }
                    }
                    else
                    {
                      MR_Box LRK_85;
                      MR_Box LRV_86;
                      MR_Word LRL_87;
                      MR_Word LRR_88;

                      succeeded = ((MR_tag((MR_Word) LR_99)) == (MR_Integer) 1);
                      if (succeeded)
                      {
                        LRK_85 = (MR_hl_field(1, LR_99, 0));
                        LRV_86 = (MR_hl_field(1, LR_99, 1));
                        LRL_87 = ((MR_Word) ((MR_hl_field(1, LR_99, 2))));
                        LRR_88 = ((MR_Word) ((MR_hl_field(1, LR_99, 3))));
                        {
                          MR_Word TreeR_82;
                          MR_Word TreeL_83;

                          {
                            TreeL_83 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, TreeL_83, 0) = LK_96;
                            MR_hl_field(1, TreeL_83, 1) = LV_97;
                            MR_hl_field(1, TreeL_83, 2) = ((MR_Box) (LL_98));
                            MR_hl_field(1, TreeL_83, 3) = ((MR_Box) (LRL_87));
                          }
                          {
                            TreeR_82 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, TreeR_82, 0) = K0_141;
                            MR_hl_field(1, TreeR_82, 1) = V0_142;
                            MR_hl_field(1, TreeR_82, 2) = ((MR_Box) (LRR_88));
                            MR_hl_field(1, TreeR_82, 3) = ((MR_Box) (R0_144));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            *Tree_8 = base;
                            MR_hl_field(2, base, 0) = LRK_85;
                            MR_hl_field(2, base, 1) = LRV_86;
                            MR_hl_field(2, base, 2) = ((MR_Box) (TreeL_83));
                            MR_hl_field(2, base, 3) = ((MR_Box) (TreeR_82));
                          }
                        }
                      }
                      else
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          *Tree_8 = base;
                          MR_hl_field(2, base, 0) = K0_141;
                          MR_hl_field(2, base, 1) = V0_142;
                          MR_hl_field(2, base, 2) = ((MR_Box) (L_106));
                          MR_hl_field(2, base, 3) = ((MR_Box) (R0_144));
                        }
                    }
                  }
                  else
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      *Tree_8 = base;
                      MR_hl_field(2, base, 0) = K0_141;
                      MR_hl_field(2, base, 1) = V0_142;
                      MR_hl_field(2, base, 2) = ((MR_Box) (L_106));
                      MR_hl_field(2, base, 3) = ((MR_Box) (R0_144));
                    }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word R_74;
                  MR_Box RK_68;
                  MR_Box RV_69;
                  MR_Word RL_70;
                  MR_Word RR_71;

                  mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_105_110_116_111_95_110_111_100_101_95_95_91_50_93_95_48_4_p_0(TypeInfo_for_K_145, K_5, V_6, R0_144, &R_74);
                  succeeded = ((MR_tag((MR_Word) R_74)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    RK_68 = (MR_hl_field(1, R_74, 0));
                    RV_69 = (MR_hl_field(1, R_74, 1));
                    RL_70 = ((MR_Word) ((MR_hl_field(1, R_74, 2))));
                    RR_71 = ((MR_Word) ((MR_hl_field(1, R_74, 3))));
                    {
                      MR_Box RLK_37;
                      MR_Box RLV_38;
                      MR_Word RLL_39;
                      MR_Word RLR_40;

                      succeeded = ((MR_tag((MR_Word) RL_70)) == (MR_Integer) 1);
                      if (succeeded)
                      {
                        RLK_37 = (MR_hl_field(1, RL_70, 0));
                        RLV_38 = (MR_hl_field(1, RL_70, 1));
                        RLL_39 = ((MR_Word) ((MR_hl_field(1, RL_70, 2))));
                        RLR_40 = ((MR_Word) ((MR_hl_field(1, RL_70, 3))));
                        {
                          MR_Word TreeR_62;
                          MR_Word TreeL_63;

                          {
                            TreeL_63 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, TreeL_63, 0) = K0_141;
                            MR_hl_field(1, TreeL_63, 1) = V0_142;
                            MR_hl_field(1, TreeL_63, 2) = ((MR_Box) (L0_143));
                            MR_hl_field(1, TreeL_63, 3) = ((MR_Box) (RLL_39));
                          }
                          {
                            TreeR_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, TreeR_62, 0) = RK_68;
                            MR_hl_field(1, TreeR_62, 1) = RV_69;
                            MR_hl_field(1, TreeR_62, 2) = ((MR_Box) (RLR_40));
                            MR_hl_field(1, TreeR_62, 3) = ((MR_Box) (RR_71));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            *Tree_8 = base;
                            MR_hl_field(2, base, 0) = RLK_37;
                            MR_hl_field(2, base, 1) = RLV_38;
                            MR_hl_field(2, base, 2) = ((MR_Box) (TreeL_63));
                            MR_hl_field(2, base, 3) = ((MR_Box) (TreeR_62));
                          }
                        }
                      }
                      else
                      {
                        succeeded = ((MR_tag((MR_Word) RR_71)) == (MR_Integer) 1);
                        if (succeeded)
                        {
                          MR_Word TreeL_64;

                          {
                            TreeL_64 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, TreeL_64, 0) = K0_141;
                            MR_hl_field(1, TreeL_64, 1) = V0_142;
                            MR_hl_field(1, TreeL_64, 2) = ((MR_Box) (L0_143));
                            MR_hl_field(1, TreeL_64, 3) = ((MR_Box) (RL_70));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            *Tree_8 = base;
                            MR_hl_field(2, base, 0) = RK_68;
                            MR_hl_field(2, base, 1) = RV_69;
                            MR_hl_field(2, base, 2) = ((MR_Box) (TreeL_64));
                            MR_hl_field(2, base, 3) = ((MR_Box) (RR_71));
                          }
                        }
                        else
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            *Tree_8 = base;
                            MR_hl_field(2, base, 0) = K0_141;
                            MR_hl_field(2, base, 1) = V0_142;
                            MR_hl_field(2, base, 2) = ((MR_Box) (L0_143));
                            MR_hl_field(2, base, 3) = ((MR_Box) (R_74));
                          }
                      }
                    }
                  }
                  else
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      *Tree_8 = base;
                      MR_hl_field(2, base, 0) = K0_141;
                      MR_hl_field(2, base, 1) = V0_142;
                      MR_hl_field(2, base, 2) = ((MR_Box) (L0_143));
                      MR_hl_field(2, base, 3) = ((MR_Box) (R_74));
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
  MR_Word TypeInfo_for_K_10,
  MR_Word TypeInfo_for_V_11,
  MR_Word STATE_VARIABLE_RBT_0_8,
  MR_Box K_6,
  MR_Box V_7)
{
  MR_Word STATE_VARIABLE_RBT_9;

  mercury__rbtree__set_4_p_0(TypeInfo_for_K_10, TypeInfo_for_V_11, K_6, V_7, STATE_VARIABLE_RBT_0_8, &STATE_VARIABLE_RBT_9);
  return STATE_VARIABLE_RBT_9;
}

void MR_CALL 
mercury__rbtree__set_4_p_0(
  MR_Word TypeInfo_for_K_32,
  MR_Word TypeInfo_for_V_33,
  MR_Box K_5,
  MR_Box V_6,
  MR_Word Tree0_7,
  MR_Word * Tree_8)
{
  switch (MR_tag((MR_Word) Tree0_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
        *Tree_8 = base;
        MR_hl_field(2, base, 0) = K_5;
        MR_hl_field(2, base, 1) = V_6;
        MR_hl_field(2, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
        MR_hl_field(2, base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      break;
    case (MR_Integer) 1:
      {
        mercury__require__error_2_p_0((MR_String) "predicate \140rbtree.set\'/4", (MR_String) "root node should not be red!");
        return;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Tree1_17;

        mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_105_110_95_110_111_100_101_95_95_91_50_93_95_49_4_p_1(TypeInfo_for_K_32, K_5, V_6, Tree0_7, &Tree1_17);
        switch (MR_tag((MR_Word) Tree1_17)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__require__error_2_p_0((MR_String) "predicate \140rbtree.set\'/4", (MR_String) "new tree is empty");
              return;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box K1_22 = (MR_hl_field(1, Tree1_17, 0));
              MR_Box V1_23 = (MR_hl_field(1, Tree1_17, 1));
              MR_Word L1_24 = ((MR_Word) ((MR_hl_field(1, Tree1_17, 2))));
              MR_Word R1_25 = ((MR_Word) ((MR_hl_field(1, Tree1_17, 3))));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *Tree_8 = base;
                MR_hl_field(2, base, 0) = K1_22;
                MR_hl_field(2, base, 1) = V1_23;
                MR_hl_field(2, base, 2) = ((MR_Box) (L1_24));
                MR_hl_field(2, base, 3) = ((MR_Box) (R1_25));
              }
            }
            break;
          case (MR_Integer) 2:
            *Tree_8 = Tree1_17;
            break;
        }
      }
      break;
  }
}

static void MR_CALL 
mercury__rbtree__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_105_110_95_110_111_100_101_95_95_91_50_93_95_49_95_95_49_4_p_1(
  MR_Word TypeInfo_for_K_107,
  MR_Box K_5,
  MR_Box V_6,
  MR_Word Tree0_7,
  MR_Word * AddrOfTree_111)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Tree0_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Tree_125;

          {
            Tree_125 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Tree_125, 0) = K_5;
            MR_hl_field(1, Tree_125, 1) = V_6;
            MR_hl_field(1, Tree_125, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, Tree_125, 3) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *AddrOfTree_111 = Tree_125;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K0_9 = (MR_hl_field(1, Tree0_7, 0));
          MR_Box V0_10 = (MR_hl_field(1, Tree0_7, 1));
          MR_Word L0_11 = ((MR_Word) ((MR_hl_field(1, Tree0_7, 2))));
          MR_Word R0_12 = ((MR_Word) ((MR_hl_field(1, Tree0_7, 3))));
          MR_Word Result_13;

          mercury__builtin__compare_3_p_0(TypeInfo_for_K_107, &Result_13, K_5, K0_9);
          switch (Result_13) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word * AddrL_109;
                MR_Word Tree_126;
                MR_Word next_value_of_Tree0_7;
                MR_Word * next_value_of_AddrOfTree_111;

                {
                  Tree_126 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Tree_126, 0) = K0_9;
                  MR_hl_field(1, Tree_126, 1) = V0_10;
                  MR_hl_field(1, Tree_126, 2) = NULL;
                  MR_hl_field(1, Tree_126, 3) = ((MR_Box) (R0_12));
                }
                AddrL_109 = (MR_Word *) (&(MR_hl_field(1, Tree_126, 2)));
                *AddrOfTree_111 = Tree_126;
                // direct tailcall eliminated
                ;
                next_value_of_Tree0_7 = L0_11;
                next_value_of_AddrOfTree_111 = AddrL_109;
                Tree0_7 = next_value_of_Tree0_7;
                AddrOfTree_111 = next_value_of_AddrOfTree_111;
                continue;
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word Tree_129;

                {
                  Tree_129 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Tree_129, 0) = K_5;
                  MR_hl_field(1, Tree_129, 1) = V_6;
                  MR_hl_field(1, Tree_129, 2) = ((MR_Box) (L0_11));
                  MR_hl_field(1, Tree_129, 3) = ((MR_Box) (R0_12));
                }
                *AddrOfTree_111 = Tree_129;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word * AddrR_110;
                MR_Word Tree_130;
                MR_Word next_value_of_Tree0_7;
                MR_Word * next_value_of_AddrOfTree_111;

                {
                  Tree_130 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Tree_130, 0) = K0_9;
                  MR_hl_field(1, Tree_130, 1) = V0_10;
                  MR_hl_field(1, Tree_130, 2) = ((MR_Box) (L0_11));
                  MR_hl_field(1, Tree_130, 3) = NULL;
                }
                AddrR_110 = (MR_Word *) (&(MR_hl_field(1, Tree_130, 3)));
                *AddrOfTree_111 = Tree_130;
                // direct tailcall eliminated
                ;
                next_value_of_Tree0_7 = R0_12;
                next_value_of_AddrOfTree_111 = AddrR_110;
                Tree0_7 = next_value_of_Tree0_7;
                AddrOfTree_111 = next_value_of_AddrOfTree_111;
                continue;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K0_103 = (MR_hl_field(2, Tree0_7, 0));
          MR_Box V0_104 = (MR_hl_field(2, Tree0_7, 1));
          MR_Word L0_105 = ((MR_Word) ((MR_hl_field(2, Tree0_7, 2))));
          MR_Word R0_106 = ((MR_Word) ((MR_hl_field(2, Tree0_7, 3))));
          MR_Box LK_16;
          MR_Box LV_17;
          MR_Word LL_18;
          MR_Word LR_19;
          MR_Box RK_20;
          MR_Box RV_21;
          MR_Word RL_22;
          MR_Word RR_23;

          succeeded = ((MR_tag((MR_Word) L0_105)) == (MR_Integer) 1);
          if (succeeded)
          {
            LK_16 = (MR_hl_field(1, L0_105, 0));
            LV_17 = (MR_hl_field(1, L0_105, 1));
            LL_18 = ((MR_Word) ((MR_hl_field(1, L0_105, 2))));
            LR_19 = ((MR_Word) ((MR_hl_field(1, L0_105, 3))));
            succeeded = ((MR_tag((MR_Word) R0_106)) == (MR_Integer) 1);
            if (succeeded)
            {
              RK_20 = (MR_hl_field(1, R0_106, 0));
              RV_21 = (MR_hl_field(1, R0_106, 1));
              RL_22 = ((MR_Word) ((MR_hl_field(1, R0_106, 2))));
              RR_23 = ((MR_Word) ((MR_hl_field(1, R0_106, 3))));
            }
          }
          if (succeeded)
          {
            MR_Word L1_24;
            MR_Word R1_25;
            MR_Word Tree1_26;
            MR_Word next_value_of_Tree0_7;

            {
              L1_24 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, L1_24, 0) = LK_16;
              MR_hl_field(2, L1_24, 1) = LV_17;
              MR_hl_field(2, L1_24, 2) = ((MR_Box) (LL_18));
              MR_hl_field(2, L1_24, 3) = ((MR_Box) (LR_19));
            }
            {
              R1_25 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, R1_25, 0) = RK_20;
              MR_hl_field(2, R1_25, 1) = RV_21;
              MR_hl_field(2, R1_25, 2) = ((MR_Box) (RL_22));
              MR_hl_field(2, R1_25, 3) = ((MR_Box) (RR_23));
            }
            {
              Tree1_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Tree1_26, 0) = K0_103;
              MR_hl_field(1, Tree1_26, 1) = V0_104;
              MR_hl_field(1, Tree1_26, 2) = ((MR_Box) (L1_24));
              MR_hl_field(1, Tree1_26, 3) = ((MR_Box) (R1_25));
            }
            // direct tailcall eliminated
            ;
            next_value_of_Tree0_7 = Tree1_26;
            Tree0_7 = next_value_of_Tree0_7;
            continue;
          }
          else
          {
            MR_Word Result_89;

            mercury__builtin__compare_3_p_0(TypeInfo_for_K_107, &Result_89, K_5, K0_103);
            switch (Result_89) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word L_55;
                  MR_Box LK_51;
                  MR_Box LV_52;
                  MR_Word LL_53;
                  MR_Word LR_54;

                  mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_105_110_95_110_111_100_101_95_95_91_50_93_95_49_4_p_1(TypeInfo_for_K_107, K_5, V_6, L0_105, &L_55);
                  succeeded = ((MR_tag((MR_Word) L_55)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    LK_51 = (MR_hl_field(1, L_55, 0));
                    LV_52 = (MR_hl_field(1, L_55, 1));
                    LL_53 = ((MR_Word) ((MR_hl_field(1, L_55, 2))));
                    LR_54 = ((MR_Word) ((MR_hl_field(1, L_55, 3))));
                    succeeded = ((MR_tag((MR_Word) LL_53)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      MR_Word Tree_8;
                      MR_Word TreeR_31;

                      {
                        TreeR_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, TreeR_31, 0) = K0_103;
                        MR_hl_field(1, TreeR_31, 1) = V0_104;
                        MR_hl_field(1, TreeR_31, 2) = ((MR_Box) (LR_54));
                        MR_hl_field(1, TreeR_31, 3) = ((MR_Box) (R0_106));
                      }
                      {
                        Tree_8 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Tree_8, 0) = LK_51;
                        MR_hl_field(2, Tree_8, 1) = LV_52;
                        MR_hl_field(2, Tree_8, 2) = ((MR_Box) (LL_53));
                        MR_hl_field(2, Tree_8, 3) = ((MR_Box) (TreeR_31));
                      }
                      *AddrOfTree_111 = Tree_8;
                    }
                    else
                    {
                      MR_Box LRK_32;
                      MR_Box LRV_33;
                      MR_Word LRL_34;
                      MR_Word LRR_35;

                      succeeded = ((MR_tag((MR_Word) LR_54)) == (MR_Integer) 1);
                      if (succeeded)
                      {
                        LRK_32 = (MR_hl_field(1, LR_54, 0));
                        LRV_33 = (MR_hl_field(1, LR_54, 1));
                        LRL_34 = ((MR_Word) ((MR_hl_field(1, LR_54, 2))));
                        LRR_35 = ((MR_Word) ((MR_hl_field(1, LR_54, 3))));
                        {
                          MR_Word TreeL_36;
                          MR_Word TreeR_49;
                          MR_Word Tree_112;

                          {
                            TreeL_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, TreeL_36, 0) = LK_51;
                            MR_hl_field(1, TreeL_36, 1) = LV_52;
                            MR_hl_field(1, TreeL_36, 2) = ((MR_Box) (LL_53));
                            MR_hl_field(1, TreeL_36, 3) = ((MR_Box) (LRL_34));
                          }
                          {
                            TreeR_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, TreeR_49, 0) = K0_103;
                            MR_hl_field(1, TreeR_49, 1) = V0_104;
                            MR_hl_field(1, TreeR_49, 2) = ((MR_Box) (LRR_35));
                            MR_hl_field(1, TreeR_49, 3) = ((MR_Box) (R0_106));
                          }
                          {
                            Tree_112 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(2, Tree_112, 0) = LRK_32;
                            MR_hl_field(2, Tree_112, 1) = LRV_33;
                            MR_hl_field(2, Tree_112, 2) = ((MR_Box) (TreeL_36));
                            MR_hl_field(2, Tree_112, 3) = ((MR_Box) (TreeR_49));
                          }
                          *AddrOfTree_111 = Tree_112;
                        }
                      }
                      else
                      {
                        MR_Word Tree_113;

                        {
                          Tree_113 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(2, Tree_113, 0) = K0_103;
                          MR_hl_field(2, Tree_113, 1) = V0_104;
                          MR_hl_field(2, Tree_113, 2) = ((MR_Box) (L_55));
                          MR_hl_field(2, Tree_113, 3) = ((MR_Box) (R0_106));
                        }
                        *AddrOfTree_111 = Tree_113;
                      }
                    }
                  }
                  else
                  {
                    MR_Word Tree_115;

                    {
                      Tree_115 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Tree_115, 0) = K0_103;
                      MR_hl_field(2, Tree_115, 1) = V0_104;
                      MR_hl_field(2, Tree_115, 2) = ((MR_Box) (L_55));
                      MR_hl_field(2, Tree_115, 3) = ((MR_Box) (R0_106));
                    }
                    *AddrOfTree_111 = Tree_115;
                  }
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word Tree_116;

                  {
                    Tree_116 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(2, Tree_116, 0) = K_5;
                    MR_hl_field(2, Tree_116, 1) = V_6;
                    MR_hl_field(2, Tree_116, 2) = ((MR_Box) (L0_105));
                    MR_hl_field(2, Tree_116, 3) = ((MR_Box) (R0_106));
                  }
                  *AddrOfTree_111 = Tree_116;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word R_72;
                  MR_Box RK_66;
                  MR_Box RV_67;
                  MR_Word RL_68;
                  MR_Word RR_69;

                  mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_105_110_95_110_111_100_101_95_95_91_50_93_95_49_4_p_1(TypeInfo_for_K_107, K_5, V_6, R0_106, &R_72);
                  succeeded = ((MR_tag((MR_Word) R_72)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    RK_66 = (MR_hl_field(1, R_72, 0));
                    RV_67 = (MR_hl_field(1, R_72, 1));
                    RL_68 = ((MR_Word) ((MR_hl_field(1, R_72, 2))));
                    RR_69 = ((MR_Word) ((MR_hl_field(1, R_72, 3))));
                    {
                      MR_Box RLK_38;
                      MR_Box RLV_39;
                      MR_Word RLL_40;
                      MR_Word RLR_41;

                      succeeded = ((MR_tag((MR_Word) RL_68)) == (MR_Integer) 1);
                      if (succeeded)
                      {
                        RLK_38 = (MR_hl_field(1, RL_68, 0));
                        RLV_39 = (MR_hl_field(1, RL_68, 1));
                        RLL_40 = ((MR_Word) ((MR_hl_field(1, RL_68, 2))));
                        RLR_41 = ((MR_Word) ((MR_hl_field(1, RL_68, 3))));
                        {
                          MR_Word TreeR_60;
                          MR_Word TreeL_61;
                          MR_Word Tree_117;

                          {
                            TreeL_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, TreeL_61, 0) = K0_103;
                            MR_hl_field(1, TreeL_61, 1) = V0_104;
                            MR_hl_field(1, TreeL_61, 2) = ((MR_Box) (L0_105));
                            MR_hl_field(1, TreeL_61, 3) = ((MR_Box) (RLL_40));
                          }
                          {
                            TreeR_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, TreeR_60, 0) = RK_66;
                            MR_hl_field(1, TreeR_60, 1) = RV_67;
                            MR_hl_field(1, TreeR_60, 2) = ((MR_Box) (RLR_41));
                            MR_hl_field(1, TreeR_60, 3) = ((MR_Box) (RR_69));
                          }
                          {
                            Tree_117 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(2, Tree_117, 0) = RLK_38;
                            MR_hl_field(2, Tree_117, 1) = RLV_39;
                            MR_hl_field(2, Tree_117, 2) = ((MR_Box) (TreeL_61));
                            MR_hl_field(2, Tree_117, 3) = ((MR_Box) (TreeR_60));
                          }
                          *AddrOfTree_111 = Tree_117;
                        }
                      }
                      else
                      {
                        succeeded = ((MR_tag((MR_Word) RR_69)) == (MR_Integer) 1);
                        if (succeeded)
                        {
                          MR_Word TreeL_62;
                          MR_Word Tree_118;

                          {
                            TreeL_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, TreeL_62, 0) = K0_103;
                            MR_hl_field(1, TreeL_62, 1) = V0_104;
                            MR_hl_field(1, TreeL_62, 2) = ((MR_Box) (L0_105));
                            MR_hl_field(1, TreeL_62, 3) = ((MR_Box) (RL_68));
                          }
                          {
                            Tree_118 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(2, Tree_118, 0) = RK_66;
                            MR_hl_field(2, Tree_118, 1) = RV_67;
                            MR_hl_field(2, Tree_118, 2) = ((MR_Box) (TreeL_62));
                            MR_hl_field(2, Tree_118, 3) = ((MR_Box) (RR_69));
                          }
                          *AddrOfTree_111 = Tree_118;
                        }
                        else
                        {
                          MR_Word Tree_119;

                          {
                            Tree_119 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(2, Tree_119, 0) = K0_103;
                            MR_hl_field(2, Tree_119, 1) = V0_104;
                            MR_hl_field(2, Tree_119, 2) = ((MR_Box) (L0_105));
                            MR_hl_field(2, Tree_119, 3) = ((MR_Box) (R_72));
                          }
                          *AddrOfTree_111 = Tree_119;
                        }
                      }
                    }
                  }
                  else
                  {
                    MR_Word Tree_122;

                    {
                      Tree_122 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(2, Tree_122, 0) = K0_103;
                      MR_hl_field(2, Tree_122, 1) = V0_104;
                      MR_hl_field(2, Tree_122, 2) = ((MR_Box) (L0_105));
                      MR_hl_field(2, Tree_122, 3) = ((MR_Box) (R_72));
                    }
                    *AddrOfTree_111 = Tree_122;
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

static void MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_105_110_95_110_111_100_101_95_95_91_50_93_95_49_4_p_1(
  MR_Word TypeInfo_for_K_107,
  MR_Box K_5,
  MR_Box V_6,
  MR_Word Tree0_7,
  MR_Word * Tree_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Tree0_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *Tree_8 = base;
          MR_hl_field(1, base, 0) = K_5;
          MR_hl_field(1, base, 1) = V_6;
          MR_hl_field(1, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(1, base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K0_9 = (MR_hl_field(1, Tree0_7, 0));
          MR_Box V0_10 = (MR_hl_field(1, Tree0_7, 1));
          MR_Word L0_11 = ((MR_Word) ((MR_hl_field(1, Tree0_7, 2))));
          MR_Word R0_12 = ((MR_Word) ((MR_hl_field(1, Tree0_7, 3))));
          MR_Word Result_13;

          mercury__builtin__compare_3_p_0(TypeInfo_for_K_107, &Result_13, K_5, K0_9);
          switch (Result_13) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word * AddrL_109;

                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  *Tree_8 = base;
                  MR_hl_field(1, base, 0) = K0_9;
                  MR_hl_field(1, base, 1) = V0_10;
                  MR_hl_field(1, base, 2) = NULL;
                  MR_hl_field(1, base, 3) = ((MR_Box) (R0_12));
                }
                AddrL_109 = (MR_Word *) (&(MR_hl_field(1, *Tree_8, 2)));
                mercury__rbtree__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_105_110_95_110_111_100_101_95_95_91_50_93_95_49_95_95_49_4_p_1(TypeInfo_for_K_107, K_5, V_6, L0_11, AddrL_109);
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                *Tree_8 = base;
                MR_hl_field(1, base, 0) = K_5;
                MR_hl_field(1, base, 1) = V_6;
                MR_hl_field(1, base, 2) = ((MR_Box) (L0_11));
                MR_hl_field(1, base, 3) = ((MR_Box) (R0_12));
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word * AddrR_110;

                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  *Tree_8 = base;
                  MR_hl_field(1, base, 0) = K0_9;
                  MR_hl_field(1, base, 1) = V0_10;
                  MR_hl_field(1, base, 2) = ((MR_Box) (L0_11));
                  MR_hl_field(1, base, 3) = NULL;
                }
                AddrR_110 = (MR_Word *) (&(MR_hl_field(1, *Tree_8, 3)));
                mercury__rbtree__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_105_110_95_110_111_100_101_95_95_91_50_93_95_49_95_95_49_4_p_1(TypeInfo_for_K_107, K_5, V_6, R0_12, AddrR_110);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K0_103 = (MR_hl_field(2, Tree0_7, 0));
          MR_Box V0_104 = (MR_hl_field(2, Tree0_7, 1));
          MR_Word L0_105 = ((MR_Word) ((MR_hl_field(2, Tree0_7, 2))));
          MR_Word R0_106 = ((MR_Word) ((MR_hl_field(2, Tree0_7, 3))));
          MR_Box LK_16;
          MR_Box LV_17;
          MR_Word LL_18;
          MR_Word LR_19;
          MR_Box RK_20;
          MR_Box RV_21;
          MR_Word RL_22;
          MR_Word RR_23;

          succeeded = ((MR_tag((MR_Word) L0_105)) == (MR_Integer) 1);
          if (succeeded)
          {
            LK_16 = (MR_hl_field(1, L0_105, 0));
            LV_17 = (MR_hl_field(1, L0_105, 1));
            LL_18 = ((MR_Word) ((MR_hl_field(1, L0_105, 2))));
            LR_19 = ((MR_Word) ((MR_hl_field(1, L0_105, 3))));
            succeeded = ((MR_tag((MR_Word) R0_106)) == (MR_Integer) 1);
            if (succeeded)
            {
              RK_20 = (MR_hl_field(1, R0_106, 0));
              RV_21 = (MR_hl_field(1, R0_106, 1));
              RL_22 = ((MR_Word) ((MR_hl_field(1, R0_106, 2))));
              RR_23 = ((MR_Word) ((MR_hl_field(1, R0_106, 3))));
            }
          }
          if (succeeded)
          {
            MR_Word L1_24;
            MR_Word R1_25;
            MR_Word Tree1_26;
            MR_Word next_value_of_Tree0_7;

            {
              L1_24 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, L1_24, 0) = LK_16;
              MR_hl_field(2, L1_24, 1) = LV_17;
              MR_hl_field(2, L1_24, 2) = ((MR_Box) (LL_18));
              MR_hl_field(2, L1_24, 3) = ((MR_Box) (LR_19));
            }
            {
              R1_25 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, R1_25, 0) = RK_20;
              MR_hl_field(2, R1_25, 1) = RV_21;
              MR_hl_field(2, R1_25, 2) = ((MR_Box) (RL_22));
              MR_hl_field(2, R1_25, 3) = ((MR_Box) (RR_23));
            }
            {
              Tree1_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Tree1_26, 0) = K0_103;
              MR_hl_field(1, Tree1_26, 1) = V0_104;
              MR_hl_field(1, Tree1_26, 2) = ((MR_Box) (L1_24));
              MR_hl_field(1, Tree1_26, 3) = ((MR_Box) (R1_25));
            }
            // direct tailcall eliminated
            ;
            next_value_of_Tree0_7 = Tree1_26;
            Tree0_7 = next_value_of_Tree0_7;
            continue;
          }
          else
          {
            MR_Word Result_89;

            mercury__builtin__compare_3_p_0(TypeInfo_for_K_107, &Result_89, K_5, K0_103);
            switch (Result_89) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word L_55;
                  MR_Box LK_51;
                  MR_Box LV_52;
                  MR_Word LL_53;
                  MR_Word LR_54;

                  mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_105_110_95_110_111_100_101_95_95_91_50_93_95_49_4_p_1(TypeInfo_for_K_107, K_5, V_6, L0_105, &L_55);
                  succeeded = ((MR_tag((MR_Word) L_55)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    LK_51 = (MR_hl_field(1, L_55, 0));
                    LV_52 = (MR_hl_field(1, L_55, 1));
                    LL_53 = ((MR_Word) ((MR_hl_field(1, L_55, 2))));
                    LR_54 = ((MR_Word) ((MR_hl_field(1, L_55, 3))));
                    succeeded = ((MR_tag((MR_Word) LL_53)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      MR_Word TreeR_31;

                      {
                        TreeR_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(1, TreeR_31, 0) = K0_103;
                        MR_hl_field(1, TreeR_31, 1) = V0_104;
                        MR_hl_field(1, TreeR_31, 2) = ((MR_Box) (LR_54));
                        MR_hl_field(1, TreeR_31, 3) = ((MR_Box) (R0_106));
                      }
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        *Tree_8 = base;
                        MR_hl_field(2, base, 0) = LK_51;
                        MR_hl_field(2, base, 1) = LV_52;
                        MR_hl_field(2, base, 2) = ((MR_Box) (LL_53));
                        MR_hl_field(2, base, 3) = ((MR_Box) (TreeR_31));
                      }
                    }
                    else
                    {
                      MR_Box LRK_32;
                      MR_Box LRV_33;
                      MR_Word LRL_34;
                      MR_Word LRR_35;

                      succeeded = ((MR_tag((MR_Word) LR_54)) == (MR_Integer) 1);
                      if (succeeded)
                      {
                        LRK_32 = (MR_hl_field(1, LR_54, 0));
                        LRV_33 = (MR_hl_field(1, LR_54, 1));
                        LRL_34 = ((MR_Word) ((MR_hl_field(1, LR_54, 2))));
                        LRR_35 = ((MR_Word) ((MR_hl_field(1, LR_54, 3))));
                        {
                          MR_Word TreeL_36;
                          MR_Word TreeR_49;

                          {
                            TreeL_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, TreeL_36, 0) = LK_51;
                            MR_hl_field(1, TreeL_36, 1) = LV_52;
                            MR_hl_field(1, TreeL_36, 2) = ((MR_Box) (LL_53));
                            MR_hl_field(1, TreeL_36, 3) = ((MR_Box) (LRL_34));
                          }
                          {
                            TreeR_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, TreeR_49, 0) = K0_103;
                            MR_hl_field(1, TreeR_49, 1) = V0_104;
                            MR_hl_field(1, TreeR_49, 2) = ((MR_Box) (LRR_35));
                            MR_hl_field(1, TreeR_49, 3) = ((MR_Box) (R0_106));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            *Tree_8 = base;
                            MR_hl_field(2, base, 0) = LRK_32;
                            MR_hl_field(2, base, 1) = LRV_33;
                            MR_hl_field(2, base, 2) = ((MR_Box) (TreeL_36));
                            MR_hl_field(2, base, 3) = ((MR_Box) (TreeR_49));
                          }
                        }
                      }
                      else
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          *Tree_8 = base;
                          MR_hl_field(2, base, 0) = K0_103;
                          MR_hl_field(2, base, 1) = V0_104;
                          MR_hl_field(2, base, 2) = ((MR_Box) (L_55));
                          MR_hl_field(2, base, 3) = ((MR_Box) (R0_106));
                        }
                    }
                  }
                  else
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      *Tree_8 = base;
                      MR_hl_field(2, base, 0) = K0_103;
                      MR_hl_field(2, base, 1) = V0_104;
                      MR_hl_field(2, base, 2) = ((MR_Box) (L_55));
                      MR_hl_field(2, base, 3) = ((MR_Box) (R0_106));
                    }
                }
                break;
              case (MR_Integer) 0:
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  *Tree_8 = base;
                  MR_hl_field(2, base, 0) = K_5;
                  MR_hl_field(2, base, 1) = V_6;
                  MR_hl_field(2, base, 2) = ((MR_Box) (L0_105));
                  MR_hl_field(2, base, 3) = ((MR_Box) (R0_106));
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word R_72;
                  MR_Box RK_66;
                  MR_Box RV_67;
                  MR_Word RL_68;
                  MR_Word RR_69;

                  mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_105_110_95_110_111_100_101_95_95_91_50_93_95_49_4_p_1(TypeInfo_for_K_107, K_5, V_6, R0_106, &R_72);
                  succeeded = ((MR_tag((MR_Word) R_72)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    RK_66 = (MR_hl_field(1, R_72, 0));
                    RV_67 = (MR_hl_field(1, R_72, 1));
                    RL_68 = ((MR_Word) ((MR_hl_field(1, R_72, 2))));
                    RR_69 = ((MR_Word) ((MR_hl_field(1, R_72, 3))));
                    {
                      MR_Box RLK_38;
                      MR_Box RLV_39;
                      MR_Word RLL_40;
                      MR_Word RLR_41;

                      succeeded = ((MR_tag((MR_Word) RL_68)) == (MR_Integer) 1);
                      if (succeeded)
                      {
                        RLK_38 = (MR_hl_field(1, RL_68, 0));
                        RLV_39 = (MR_hl_field(1, RL_68, 1));
                        RLL_40 = ((MR_Word) ((MR_hl_field(1, RL_68, 2))));
                        RLR_41 = ((MR_Word) ((MR_hl_field(1, RL_68, 3))));
                        {
                          MR_Word TreeR_60;
                          MR_Word TreeL_61;

                          {
                            TreeL_61 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, TreeL_61, 0) = K0_103;
                            MR_hl_field(1, TreeL_61, 1) = V0_104;
                            MR_hl_field(1, TreeL_61, 2) = ((MR_Box) (L0_105));
                            MR_hl_field(1, TreeL_61, 3) = ((MR_Box) (RLL_40));
                          }
                          {
                            TreeR_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, TreeR_60, 0) = RK_66;
                            MR_hl_field(1, TreeR_60, 1) = RV_67;
                            MR_hl_field(1, TreeR_60, 2) = ((MR_Box) (RLR_41));
                            MR_hl_field(1, TreeR_60, 3) = ((MR_Box) (RR_69));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            *Tree_8 = base;
                            MR_hl_field(2, base, 0) = RLK_38;
                            MR_hl_field(2, base, 1) = RLV_39;
                            MR_hl_field(2, base, 2) = ((MR_Box) (TreeL_61));
                            MR_hl_field(2, base, 3) = ((MR_Box) (TreeR_60));
                          }
                        }
                      }
                      else
                      {
                        succeeded = ((MR_tag((MR_Word) RR_69)) == (MR_Integer) 1);
                        if (succeeded)
                        {
                          MR_Word TreeL_62;

                          {
                            TreeL_62 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, TreeL_62, 0) = K0_103;
                            MR_hl_field(1, TreeL_62, 1) = V0_104;
                            MR_hl_field(1, TreeL_62, 2) = ((MR_Box) (L0_105));
                            MR_hl_field(1, TreeL_62, 3) = ((MR_Box) (RL_68));
                          }
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            *Tree_8 = base;
                            MR_hl_field(2, base, 0) = RK_66;
                            MR_hl_field(2, base, 1) = RV_67;
                            MR_hl_field(2, base, 2) = ((MR_Box) (TreeL_62));
                            MR_hl_field(2, base, 3) = ((MR_Box) (RR_69));
                          }
                        }
                        else
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            *Tree_8 = base;
                            MR_hl_field(2, base, 0) = K0_103;
                            MR_hl_field(2, base, 1) = V0_104;
                            MR_hl_field(2, base, 2) = ((MR_Box) (L0_105));
                            MR_hl_field(2, base, 3) = ((MR_Box) (R_72));
                          }
                      }
                    }
                  }
                  else
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                      *Tree_8 = base;
                      MR_hl_field(2, base, 0) = K0_103;
                      MR_hl_field(2, base, 1) = V0_104;
                      MR_hl_field(2, base, 2) = ((MR_Box) (L0_105));
                      MR_hl_field(2, base, 3) = ((MR_Box) (R_72));
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
  MR_Word TypeInfo_for_V_28,
  MR_Word TypeInfo_for_K_29,
  MR_Word P_5,
  MR_Box K_6,
  MR_Word Tree0_7,
  MR_Word * Tree_8)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) Tree0_7)) == (MR_Integer) 2))
  {
    MR_Box K0_23 = (MR_hl_field(2, Tree0_7, 0));
    MR_Box V0_24 = (MR_hl_field(2, Tree0_7, 1));
    MR_Word L0_25 = ((MR_Word) ((MR_hl_field(2, Tree0_7, 2))));
    MR_Word R0_26 = ((MR_Word) ((MR_hl_field(2, Tree0_7, 3))));
    MR_Word Result_27;

    mercury__builtin__compare_3_p_0(TypeInfo_for_K_29, &Result_27, K_6, K0_23);
    switch (Result_27) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word * AddrL_30;

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            *Tree_8 = base;
            MR_hl_field(2, base, 0) = K0_23;
            MR_hl_field(2, base, 1) = V0_24;
            MR_hl_field(2, base, 2) = NULL;
            MR_hl_field(2, base, 3) = ((MR_Box) (R0_26));
          }
          AddrL_30 = (MR_Word *) (&(MR_hl_field(2, *Tree_8, 2)));
          succeeded = mercury__rbtree__LCMC__pred__transform_value__1_4_p_0(TypeInfo_for_V_28, TypeInfo_for_K_29, P_5, K_6, L0_25, AddrL_30);
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Box V_17;
          void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_5, 1))));

          func_0(((MR_Box) (P_5)), V0_24, &V_17);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            *Tree_8 = base;
            MR_hl_field(2, base, 0) = K0_23;
            MR_hl_field(2, base, 1) = V_17;
            MR_hl_field(2, base, 2) = ((MR_Box) (L0_25));
            MR_hl_field(2, base, 3) = ((MR_Box) (R0_26));
          }
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word * AddrR_31;

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            *Tree_8 = base;
            MR_hl_field(2, base, 0) = K0_23;
            MR_hl_field(2, base, 1) = V0_24;
            MR_hl_field(2, base, 2) = ((MR_Box) (L0_25));
            MR_hl_field(2, base, 3) = NULL;
          }
          AddrR_31 = (MR_Word *) (&(MR_hl_field(2, *Tree_8, 3)));
          succeeded = mercury__rbtree__LCMC__pred__transform_value__1_4_p_0(TypeInfo_for_V_28, TypeInfo_for_K_29, P_5, K_6, R0_26, AddrR_31);
        }
        break;
    }
  }
  else
  if (((MR_tag((MR_Word) Tree0_7)) == (MR_Integer) 1))
  {
    MR_Box K0_9 = (MR_hl_field(1, Tree0_7, 0));
    MR_Box V0_10 = (MR_hl_field(1, Tree0_7, 1));
    MR_Word L0_11 = ((MR_Word) ((MR_hl_field(1, Tree0_7, 2))));
    MR_Word R0_12 = ((MR_Word) ((MR_hl_field(1, Tree0_7, 3))));
    MR_Word Result_13;

    mercury__builtin__compare_3_p_0(TypeInfo_for_K_29, &Result_13, K_6, K0_9);
    switch (Result_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word * AddrL_32;

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            *Tree_8 = base;
            MR_hl_field(1, base, 0) = K0_9;
            MR_hl_field(1, base, 1) = V0_10;
            MR_hl_field(1, base, 2) = NULL;
            MR_hl_field(1, base, 3) = ((MR_Box) (R0_12));
          }
          AddrL_32 = (MR_Word *) (&(MR_hl_field(1, *Tree_8, 2)));
          succeeded = mercury__rbtree__LCMC__pred__transform_value__1_4_p_0(TypeInfo_for_V_28, TypeInfo_for_K_29, P_5, K_6, L0_11, AddrL_32);
        }
        break;
      case (MR_Integer) 0:
        {
          MR_Box V_14;
          void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_5, 1))));

          func_1(((MR_Box) (P_5)), V0_10, &V_14);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            *Tree_8 = base;
            MR_hl_field(1, base, 0) = K0_9;
            MR_hl_field(1, base, 1) = V_14;
            MR_hl_field(1, base, 2) = ((MR_Box) (L0_11));
            MR_hl_field(1, base, 3) = ((MR_Box) (R0_12));
          }
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word * AddrR_33;

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            *Tree_8 = base;
            MR_hl_field(1, base, 0) = K0_9;
            MR_hl_field(1, base, 1) = V0_10;
            MR_hl_field(1, base, 2) = ((MR_Box) (L0_11));
            MR_hl_field(1, base, 3) = NULL;
          }
          AddrR_33 = (MR_Word *) (&(MR_hl_field(1, *Tree_8, 3)));
          succeeded = mercury__rbtree__LCMC__pred__transform_value__1_4_p_0(TypeInfo_for_V_28, TypeInfo_for_K_29, P_5, K_6, R0_12, AddrR_33);
        }
        break;
    }
  }
  else
    succeeded = MR_FALSE;
  return succeeded;
}

MR_bool MR_CALL 
mercury__rbtree__LCMC__pred__transform_value__1_4_p_0(
  MR_Word TypeInfo_for_V_28,
  MR_Word TypeInfo_for_K_29,
  MR_Word P_5,
  MR_Box K_6,
  MR_Word Tree0_7,
  MR_Word * AddrOfTree_34)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) Tree0_7)) == (MR_Integer) 2))
    {
      MR_Box K0_23 = (MR_hl_field(2, Tree0_7, 0));
      MR_Box V0_24 = (MR_hl_field(2, Tree0_7, 1));
      MR_Word L0_25 = ((MR_Word) ((MR_hl_field(2, Tree0_7, 2))));
      MR_Word R0_26 = ((MR_Word) ((MR_hl_field(2, Tree0_7, 3))));
      MR_Word Result_27;

      mercury__builtin__compare_3_p_0(TypeInfo_for_K_29, &Result_27, K_6, K0_23);
      switch (Result_27) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word Tree_8;
            MR_Word * AddrL_30;
            MR_Word next_value_of_Tree0_7;
            MR_Word * next_value_of_AddrOfTree_34;

            {
              Tree_8 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Tree_8, 0) = K0_23;
              MR_hl_field(2, Tree_8, 1) = V0_24;
              MR_hl_field(2, Tree_8, 2) = NULL;
              MR_hl_field(2, Tree_8, 3) = ((MR_Box) (R0_26));
            }
            AddrL_30 = (MR_Word *) (&(MR_hl_field(2, Tree_8, 2)));
            *AddrOfTree_34 = Tree_8;
            // direct tailcall eliminated
            ;
            next_value_of_Tree0_7 = L0_25;
            next_value_of_AddrOfTree_34 = AddrL_30;
            Tree0_7 = next_value_of_Tree0_7;
            AddrOfTree_34 = next_value_of_AddrOfTree_34;
            continue;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Box V_17;
            MR_Word Tree_35;
            void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_5, 1))));

            func_0(((MR_Box) (P_5)), V0_24, &V_17);
            {
              Tree_35 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Tree_35, 0) = K0_23;
              MR_hl_field(2, Tree_35, 1) = V_17;
              MR_hl_field(2, Tree_35, 2) = ((MR_Box) (L0_25));
              MR_hl_field(2, Tree_35, 3) = ((MR_Box) (R0_26));
            }
            *AddrOfTree_34 = Tree_35;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word * AddrR_31;
            MR_Word Tree_36;
            MR_Word next_value_of_Tree0_7;
            MR_Word * next_value_of_AddrOfTree_34;

            {
              Tree_36 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Tree_36, 0) = K0_23;
              MR_hl_field(2, Tree_36, 1) = V0_24;
              MR_hl_field(2, Tree_36, 2) = ((MR_Box) (L0_25));
              MR_hl_field(2, Tree_36, 3) = NULL;
            }
            AddrR_31 = (MR_Word *) (&(MR_hl_field(2, Tree_36, 3)));
            *AddrOfTree_34 = Tree_36;
            // direct tailcall eliminated
            ;
            next_value_of_Tree0_7 = R0_26;
            next_value_of_AddrOfTree_34 = AddrR_31;
            Tree0_7 = next_value_of_Tree0_7;
            AddrOfTree_34 = next_value_of_AddrOfTree_34;
            continue;
          }
          break;
      }
    }
    else
    if (((MR_tag((MR_Word) Tree0_7)) == (MR_Integer) 1))
    {
      MR_Box K0_9 = (MR_hl_field(1, Tree0_7, 0));
      MR_Box V0_10 = (MR_hl_field(1, Tree0_7, 1));
      MR_Word L0_11 = ((MR_Word) ((MR_hl_field(1, Tree0_7, 2))));
      MR_Word R0_12 = ((MR_Word) ((MR_hl_field(1, Tree0_7, 3))));
      MR_Word Result_13;

      mercury__builtin__compare_3_p_0(TypeInfo_for_K_29, &Result_13, K_6, K0_9);
      switch (Result_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word * AddrL_32;
            MR_Word Tree_39;
            MR_Word next_value_of_Tree0_7;
            MR_Word * next_value_of_AddrOfTree_34;

            {
              Tree_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Tree_39, 0) = K0_9;
              MR_hl_field(1, Tree_39, 1) = V0_10;
              MR_hl_field(1, Tree_39, 2) = NULL;
              MR_hl_field(1, Tree_39, 3) = ((MR_Box) (R0_12));
            }
            AddrL_32 = (MR_Word *) (&(MR_hl_field(1, Tree_39, 2)));
            *AddrOfTree_34 = Tree_39;
            // direct tailcall eliminated
            ;
            next_value_of_Tree0_7 = L0_11;
            next_value_of_AddrOfTree_34 = AddrL_32;
            Tree0_7 = next_value_of_Tree0_7;
            AddrOfTree_34 = next_value_of_AddrOfTree_34;
            continue;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Box V_14;
            MR_Word Tree_42;
            void MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(0, P_5, 1))));

            func_1(((MR_Box) (P_5)), V0_10, &V_14);
            {
              Tree_42 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Tree_42, 0) = K0_9;
              MR_hl_field(1, Tree_42, 1) = V_14;
              MR_hl_field(1, Tree_42, 2) = ((MR_Box) (L0_11));
              MR_hl_field(1, Tree_42, 3) = ((MR_Box) (R0_12));
            }
            *AddrOfTree_34 = Tree_42;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word * AddrR_33;
            MR_Word Tree_43;
            MR_Word next_value_of_Tree0_7;
            MR_Word * next_value_of_AddrOfTree_34;

            {
              Tree_43 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Tree_43, 0) = K0_9;
              MR_hl_field(1, Tree_43, 1) = V0_10;
              MR_hl_field(1, Tree_43, 2) = ((MR_Box) (L0_11));
              MR_hl_field(1, Tree_43, 3) = NULL;
            }
            AddrR_33 = (MR_Word *) (&(MR_hl_field(1, Tree_43, 3)));
            *AddrOfTree_34 = Tree_43;
            // direct tailcall eliminated
            ;
            next_value_of_Tree0_7 = R0_12;
            next_value_of_AddrOfTree_34 = AddrR_33;
            Tree0_7 = next_value_of_Tree0_7;
            AddrOfTree_34 = next_value_of_AddrOfTree_34;
            continue;
          }
          break;
      }
    }
    else
      succeeded = MR_FALSE;
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__rbtree__update_4_p_0(
  MR_Word TypeInfo_for_K_25,
  MR_Word TypeInfo_for_V_26,
  MR_Box K_5,
  MR_Box V_6,
  MR_Word Tree0_7,
  MR_Word * Tree_8)
{
  MR_bool succeeded;

  if (((MR_tag((MR_Word) Tree0_7)) == (MR_Integer) 2))
  {
    MR_Box K0_20 = (MR_hl_field(2, Tree0_7, 0));
    MR_Box V0_21 = (MR_hl_field(2, Tree0_7, 1));
    MR_Word L0_22 = ((MR_Word) ((MR_hl_field(2, Tree0_7, 2))));
    MR_Word R0_23 = ((MR_Word) ((MR_hl_field(2, Tree0_7, 3))));
    MR_Word Result_24;

    mercury__builtin__compare_3_p_0(TypeInfo_for_K_25, &Result_24, K_5, K0_20);
    switch (Result_24) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word * AddrL_27;

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            *Tree_8 = base;
            MR_hl_field(2, base, 0) = K0_20;
            MR_hl_field(2, base, 1) = V0_21;
            MR_hl_field(2, base, 2) = NULL;
            MR_hl_field(2, base, 3) = ((MR_Box) (R0_23));
          }
          AddrL_27 = (MR_Word *) (&(MR_hl_field(2, *Tree_8, 2)));
          succeeded = mercury__rbtree__LCMC__pred__update__1_4_p_0(TypeInfo_for_K_25, TypeInfo_for_V_26, K_5, V_6, L0_22, AddrL_27);
        }
        break;
      case (MR_Integer) 0:
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            *Tree_8 = base;
            MR_hl_field(2, base, 0) = K_5;
            MR_hl_field(2, base, 1) = V_6;
            MR_hl_field(2, base, 2) = ((MR_Box) (L0_22));
            MR_hl_field(2, base, 3) = ((MR_Box) (R0_23));
          }
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word * AddrR_28;

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            *Tree_8 = base;
            MR_hl_field(2, base, 0) = K0_20;
            MR_hl_field(2, base, 1) = V0_21;
            MR_hl_field(2, base, 2) = ((MR_Box) (L0_22));
            MR_hl_field(2, base, 3) = NULL;
          }
          AddrR_28 = (MR_Word *) (&(MR_hl_field(2, *Tree_8, 3)));
          succeeded = mercury__rbtree__LCMC__pred__update__1_4_p_0(TypeInfo_for_K_25, TypeInfo_for_V_26, K_5, V_6, R0_23, AddrR_28);
        }
        break;
    }
  }
  else
  if (((MR_tag((MR_Word) Tree0_7)) == (MR_Integer) 1))
  {
    MR_Box K0_9 = (MR_hl_field(1, Tree0_7, 0));
    MR_Box V0_10 = (MR_hl_field(1, Tree0_7, 1));
    MR_Word L0_11 = ((MR_Word) ((MR_hl_field(1, Tree0_7, 2))));
    MR_Word R0_12 = ((MR_Word) ((MR_hl_field(1, Tree0_7, 3))));
    MR_Word Result_13;

    mercury__builtin__compare_3_p_0(TypeInfo_for_K_25, &Result_13, K_5, K0_9);
    switch (Result_13) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word * AddrL_29;

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            *Tree_8 = base;
            MR_hl_field(1, base, 0) = K0_9;
            MR_hl_field(1, base, 1) = V0_10;
            MR_hl_field(1, base, 2) = NULL;
            MR_hl_field(1, base, 3) = ((MR_Box) (R0_12));
          }
          AddrL_29 = (MR_Word *) (&(MR_hl_field(1, *Tree_8, 2)));
          succeeded = mercury__rbtree__LCMC__pred__update__1_4_p_0(TypeInfo_for_K_25, TypeInfo_for_V_26, K_5, V_6, L0_11, AddrL_29);
        }
        break;
      case (MR_Integer) 0:
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            *Tree_8 = base;
            MR_hl_field(1, base, 0) = K_5;
            MR_hl_field(1, base, 1) = V_6;
            MR_hl_field(1, base, 2) = ((MR_Box) (L0_11));
            MR_hl_field(1, base, 3) = ((MR_Box) (R0_12));
          }
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word * AddrR_30;

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            *Tree_8 = base;
            MR_hl_field(1, base, 0) = K0_9;
            MR_hl_field(1, base, 1) = V0_10;
            MR_hl_field(1, base, 2) = ((MR_Box) (L0_11));
            MR_hl_field(1, base, 3) = NULL;
          }
          AddrR_30 = (MR_Word *) (&(MR_hl_field(1, *Tree_8, 3)));
          succeeded = mercury__rbtree__LCMC__pred__update__1_4_p_0(TypeInfo_for_K_25, TypeInfo_for_V_26, K_5, V_6, R0_12, AddrR_30);
        }
        break;
    }
  }
  else
    succeeded = MR_FALSE;
  return succeeded;
}

MR_bool MR_CALL 
mercury__rbtree__LCMC__pred__update__1_4_p_0(
  MR_Word TypeInfo_for_K_25,
  MR_Word TypeInfo_for_V_26,
  MR_Box K_5,
  MR_Box V_6,
  MR_Word Tree0_7,
  MR_Word * AddrOfTree_31)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    if (((MR_tag((MR_Word) Tree0_7)) == (MR_Integer) 2))
    {
      MR_Box K0_20 = (MR_hl_field(2, Tree0_7, 0));
      MR_Box V0_21 = (MR_hl_field(2, Tree0_7, 1));
      MR_Word L0_22 = ((MR_Word) ((MR_hl_field(2, Tree0_7, 2))));
      MR_Word R0_23 = ((MR_Word) ((MR_hl_field(2, Tree0_7, 3))));
      MR_Word Result_24;

      mercury__builtin__compare_3_p_0(TypeInfo_for_K_25, &Result_24, K_5, K0_20);
      switch (Result_24) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word Tree_8;
            MR_Word * AddrL_27;
            MR_Word next_value_of_Tree0_7;
            MR_Word * next_value_of_AddrOfTree_31;

            {
              Tree_8 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Tree_8, 0) = K0_20;
              MR_hl_field(2, Tree_8, 1) = V0_21;
              MR_hl_field(2, Tree_8, 2) = NULL;
              MR_hl_field(2, Tree_8, 3) = ((MR_Box) (R0_23));
            }
            AddrL_27 = (MR_Word *) (&(MR_hl_field(2, Tree_8, 2)));
            *AddrOfTree_31 = Tree_8;
            // direct tailcall eliminated
            ;
            next_value_of_Tree0_7 = L0_22;
            next_value_of_AddrOfTree_31 = AddrL_27;
            Tree0_7 = next_value_of_Tree0_7;
            AddrOfTree_31 = next_value_of_AddrOfTree_31;
            continue;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word Tree_32;

            {
              Tree_32 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Tree_32, 0) = K_5;
              MR_hl_field(2, Tree_32, 1) = V_6;
              MR_hl_field(2, Tree_32, 2) = ((MR_Box) (L0_22));
              MR_hl_field(2, Tree_32, 3) = ((MR_Box) (R0_23));
            }
            *AddrOfTree_31 = Tree_32;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word * AddrR_28;
            MR_Word Tree_33;
            MR_Word next_value_of_Tree0_7;
            MR_Word * next_value_of_AddrOfTree_31;

            {
              Tree_33 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, Tree_33, 0) = K0_20;
              MR_hl_field(2, Tree_33, 1) = V0_21;
              MR_hl_field(2, Tree_33, 2) = ((MR_Box) (L0_22));
              MR_hl_field(2, Tree_33, 3) = NULL;
            }
            AddrR_28 = (MR_Word *) (&(MR_hl_field(2, Tree_33, 3)));
            *AddrOfTree_31 = Tree_33;
            // direct tailcall eliminated
            ;
            next_value_of_Tree0_7 = R0_23;
            next_value_of_AddrOfTree_31 = AddrR_28;
            Tree0_7 = next_value_of_Tree0_7;
            AddrOfTree_31 = next_value_of_AddrOfTree_31;
            continue;
          }
          break;
      }
    }
    else
    if (((MR_tag((MR_Word) Tree0_7)) == (MR_Integer) 1))
    {
      MR_Box K0_9 = (MR_hl_field(1, Tree0_7, 0));
      MR_Box V0_10 = (MR_hl_field(1, Tree0_7, 1));
      MR_Word L0_11 = ((MR_Word) ((MR_hl_field(1, Tree0_7, 2))));
      MR_Word R0_12 = ((MR_Word) ((MR_hl_field(1, Tree0_7, 3))));
      MR_Word Result_13;

      mercury__builtin__compare_3_p_0(TypeInfo_for_K_25, &Result_13, K_5, K0_9);
      switch (Result_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word * AddrL_29;
            MR_Word Tree_36;
            MR_Word next_value_of_Tree0_7;
            MR_Word * next_value_of_AddrOfTree_31;

            {
              Tree_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Tree_36, 0) = K0_9;
              MR_hl_field(1, Tree_36, 1) = V0_10;
              MR_hl_field(1, Tree_36, 2) = NULL;
              MR_hl_field(1, Tree_36, 3) = ((MR_Box) (R0_12));
            }
            AddrL_29 = (MR_Word *) (&(MR_hl_field(1, Tree_36, 2)));
            *AddrOfTree_31 = Tree_36;
            // direct tailcall eliminated
            ;
            next_value_of_Tree0_7 = L0_11;
            next_value_of_AddrOfTree_31 = AddrL_29;
            Tree0_7 = next_value_of_Tree0_7;
            AddrOfTree_31 = next_value_of_AddrOfTree_31;
            continue;
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Word Tree_39;

            {
              Tree_39 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Tree_39, 0) = K_5;
              MR_hl_field(1, Tree_39, 1) = V_6;
              MR_hl_field(1, Tree_39, 2) = ((MR_Box) (L0_11));
              MR_hl_field(1, Tree_39, 3) = ((MR_Box) (R0_12));
            }
            *AddrOfTree_31 = Tree_39;
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word * AddrR_30;
            MR_Word Tree_40;
            MR_Word next_value_of_Tree0_7;
            MR_Word * next_value_of_AddrOfTree_31;

            {
              Tree_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Tree_40, 0) = K0_9;
              MR_hl_field(1, Tree_40, 1) = V0_10;
              MR_hl_field(1, Tree_40, 2) = ((MR_Box) (L0_11));
              MR_hl_field(1, Tree_40, 3) = NULL;
            }
            AddrR_30 = (MR_Word *) (&(MR_hl_field(1, Tree_40, 3)));
            *AddrOfTree_31 = Tree_40;
            // direct tailcall eliminated
            ;
            next_value_of_Tree0_7 = R0_12;
            next_value_of_AddrOfTree_31 = AddrR_30;
            Tree0_7 = next_value_of_Tree0_7;
            AddrOfTree_31 = next_value_of_AddrOfTree_31;
            continue;
          }
          break;
      }
    }
    else
      succeeded = MR_FALSE;
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__rbtree__insert_4_p_0(
  MR_Word TypeInfo_for_K_32,
  MR_Word TypeInfo_for_V_33,
  MR_Box K_5,
  MR_Box V_6,
  MR_Word Tree0_7,
  MR_Word * Tree_8)
{
  MR_bool succeeded;

  switch (MR_tag((MR_Word) Tree0_7)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
          *Tree_8 = base;
          MR_hl_field(2, base, 0) = K_5;
          MR_hl_field(2, base, 1) = V_6;
          MR_hl_field(2, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          MR_hl_field(2, base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 1:
      {
        mercury__require__error_2_p_0((MR_String) "predicate \140rbtree.insert\'/4", (MR_String) "root node should not be red!");
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word Tree1_17;

        succeeded = mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_105_110_116_111_95_110_111_100_101_95_95_91_50_93_95_48_4_p_0(TypeInfo_for_K_32, K_5, V_6, Tree0_7, &Tree1_17);
        if (succeeded)
        {
          switch (MR_tag((MR_Word) Tree1_17)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              mercury__require__error_2_p_0((MR_String) "predicate \140rbtree.insert\'/4", (MR_String) "new tree is empty");
              break;
            case (MR_Integer) 1:
              {
                MR_Box K1_22 = (MR_hl_field(1, Tree1_17, 0));
                MR_Box V1_23 = (MR_hl_field(1, Tree1_17, 1));
                MR_Word L1_24 = ((MR_Word) ((MR_hl_field(1, Tree1_17, 2))));
                MR_Word R1_25 = ((MR_Word) ((MR_hl_field(1, Tree1_17, 3))));

                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  *Tree_8 = base;
                  MR_hl_field(2, base, 0) = K1_22;
                  MR_hl_field(2, base, 1) = V1_23;
                  MR_hl_field(2, base, 2) = ((MR_Box) (L1_24));
                  MR_hl_field(2, base, 3) = ((MR_Box) (R1_25));
                }
              }
              break;
            case (MR_Integer) 2:
              *Tree_8 = Tree1_17;
              break;
          }
          succeeded = MR_TRUE;
        }
      }
      break;
  }
  return succeeded;
}

static MR_bool MR_CALL 
mercury__rbtree__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_105_110_116_111_95_110_111_100_101_95_95_91_50_93_95_48_95_95_49_4_p_0(
  MR_Word TypeInfo_for_K_105,
  MR_Box K_5,
  MR_Box V_6,
  MR_Word Tree0_7,
  MR_Word * AddrOfTree_109)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Tree0_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Tree_122;

          {
            Tree_122 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Tree_122, 0) = K_5;
            MR_hl_field(1, Tree_122, 1) = V_6;
            MR_hl_field(1, Tree_122, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, Tree_122, 3) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          *AddrOfTree_109 = Tree_122;
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K0_9 = (MR_hl_field(1, Tree0_7, 0));
          MR_Box V0_10 = (MR_hl_field(1, Tree0_7, 1));
          MR_Word L0_11 = ((MR_Word) ((MR_hl_field(1, Tree0_7, 2))));
          MR_Word R0_12 = ((MR_Word) ((MR_hl_field(1, Tree0_7, 3))));
          MR_Word Result_13;

          mercury__builtin__compare_3_p_0(TypeInfo_for_K_105, &Result_13, K_5, K0_9);
          switch (Result_13) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              {
                MR_Word * AddrL_107;
                MR_Word Tree_123;
                MR_Word next_value_of_Tree0_7;
                MR_Word * next_value_of_AddrOfTree_109;

                {
                  Tree_123 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Tree_123, 0) = K0_9;
                  MR_hl_field(1, Tree_123, 1) = V0_10;
                  MR_hl_field(1, Tree_123, 2) = NULL;
                  MR_hl_field(1, Tree_123, 3) = ((MR_Box) (R0_12));
                }
                AddrL_107 = (MR_Word *) (&(MR_hl_field(1, Tree_123, 2)));
                *AddrOfTree_109 = Tree_123;
                // direct tailcall eliminated
                ;
                next_value_of_Tree0_7 = L0_11;
                next_value_of_AddrOfTree_109 = AddrL_107;
                Tree0_7 = next_value_of_Tree0_7;
                AddrOfTree_109 = next_value_of_AddrOfTree_109;
                continue;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word * AddrR_108;
                MR_Word Tree_126;
                MR_Word next_value_of_Tree0_7;
                MR_Word * next_value_of_AddrOfTree_109;

                {
                  Tree_126 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Tree_126, 0) = K0_9;
                  MR_hl_field(1, Tree_126, 1) = V0_10;
                  MR_hl_field(1, Tree_126, 2) = ((MR_Box) (L0_11));
                  MR_hl_field(1, Tree_126, 3) = NULL;
                }
                AddrR_108 = (MR_Word *) (&(MR_hl_field(1, Tree_126, 3)));
                *AddrOfTree_109 = Tree_126;
                // direct tailcall eliminated
                ;
                next_value_of_Tree0_7 = R0_12;
                next_value_of_AddrOfTree_109 = AddrR_108;
                Tree0_7 = next_value_of_Tree0_7;
                AddrOfTree_109 = next_value_of_AddrOfTree_109;
                continue;
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K0_101 = (MR_hl_field(2, Tree0_7, 0));
          MR_Box V0_102 = (MR_hl_field(2, Tree0_7, 1));
          MR_Word L0_103 = ((MR_Word) ((MR_hl_field(2, Tree0_7, 2))));
          MR_Word R0_104 = ((MR_Word) ((MR_hl_field(2, Tree0_7, 3))));
          MR_Box LK_16;
          MR_Box LV_17;
          MR_Word LL_18;
          MR_Word LR_19;
          MR_Box RK_20;
          MR_Box RV_21;
          MR_Word RL_22;
          MR_Word RR_23;

          succeeded = ((MR_tag((MR_Word) L0_103)) == (MR_Integer) 1);
          if (succeeded)
          {
            LK_16 = (MR_hl_field(1, L0_103, 0));
            LV_17 = (MR_hl_field(1, L0_103, 1));
            LL_18 = ((MR_Word) ((MR_hl_field(1, L0_103, 2))));
            LR_19 = ((MR_Word) ((MR_hl_field(1, L0_103, 3))));
            succeeded = ((MR_tag((MR_Word) R0_104)) == (MR_Integer) 1);
            if (succeeded)
            {
              RK_20 = (MR_hl_field(1, R0_104, 0));
              RV_21 = (MR_hl_field(1, R0_104, 1));
              RL_22 = ((MR_Word) ((MR_hl_field(1, R0_104, 2))));
              RR_23 = ((MR_Word) ((MR_hl_field(1, R0_104, 3))));
            }
          }
          if (succeeded)
          {
            MR_Word L1_24;
            MR_Word R1_25;
            MR_Word Tree1_26;
            MR_Word next_value_of_Tree0_7;

            {
              L1_24 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, L1_24, 0) = LK_16;
              MR_hl_field(2, L1_24, 1) = LV_17;
              MR_hl_field(2, L1_24, 2) = ((MR_Box) (LL_18));
              MR_hl_field(2, L1_24, 3) = ((MR_Box) (LR_19));
            }
            {
              R1_25 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, R1_25, 0) = RK_20;
              MR_hl_field(2, R1_25, 1) = RV_21;
              MR_hl_field(2, R1_25, 2) = ((MR_Box) (RL_22));
              MR_hl_field(2, R1_25, 3) = ((MR_Box) (RR_23));
            }
            {
              Tree1_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Tree1_26, 0) = K0_101;
              MR_hl_field(1, Tree1_26, 1) = V0_102;
              MR_hl_field(1, Tree1_26, 2) = ((MR_Box) (L1_24));
              MR_hl_field(1, Tree1_26, 3) = ((MR_Box) (R1_25));
            }
            // direct tailcall eliminated
            ;
            next_value_of_Tree0_7 = Tree1_26;
            Tree0_7 = next_value_of_Tree0_7;
            continue;
          }
          else
          {
            MR_Word Result_87;

            mercury__builtin__compare_3_p_0(TypeInfo_for_K_105, &Result_87, K_5, K0_101);
            switch (Result_87) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word L_53;
                  MR_Box LK_49;
                  MR_Box LV_50;
                  MR_Word LL_51;
                  MR_Word LR_52;

                  succeeded = mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_105_110_116_111_95_110_111_100_101_95_95_91_50_93_95_48_4_p_0(TypeInfo_for_K_105, K_5, V_6, L0_103, &L_53);
                  if (succeeded)
                  {
                    succeeded = ((MR_tag((MR_Word) L_53)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      LK_49 = (MR_hl_field(1, L_53, 0));
                      LV_50 = (MR_hl_field(1, L_53, 1));
                      LL_51 = ((MR_Word) ((MR_hl_field(1, L_53, 2))));
                      LR_52 = ((MR_Word) ((MR_hl_field(1, L_53, 3))));
                      succeeded = ((MR_tag((MR_Word) LL_51)) == (MR_Integer) 1);
                      if (succeeded)
                      {
                        MR_Word Tree_8;
                        MR_Word TreeR_31;

                        {
                          TreeR_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, TreeR_31, 0) = K0_101;
                          MR_hl_field(1, TreeR_31, 1) = V0_102;
                          MR_hl_field(1, TreeR_31, 2) = ((MR_Box) (LR_52));
                          MR_hl_field(1, TreeR_31, 3) = ((MR_Box) (R0_104));
                        }
                        {
                          Tree_8 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(2, Tree_8, 0) = LK_49;
                          MR_hl_field(2, Tree_8, 1) = LV_50;
                          MR_hl_field(2, Tree_8, 2) = ((MR_Box) (LL_51));
                          MR_hl_field(2, Tree_8, 3) = ((MR_Box) (TreeR_31));
                        }
                        *AddrOfTree_109 = Tree_8;
                      }
                      else
                      {
                        MR_Box LRK_32;
                        MR_Box LRV_33;
                        MR_Word LRL_34;
                        MR_Word LRR_35;

                        succeeded = ((MR_tag((MR_Word) LR_52)) == (MR_Integer) 1);
                        if (succeeded)
                        {
                          LRK_32 = (MR_hl_field(1, LR_52, 0));
                          LRV_33 = (MR_hl_field(1, LR_52, 1));
                          LRL_34 = ((MR_Word) ((MR_hl_field(1, LR_52, 2))));
                          LRR_35 = ((MR_Word) ((MR_hl_field(1, LR_52, 3))));
                          {
                            MR_Word TreeL_36;
                            MR_Word TreeR_47;
                            MR_Word Tree_110;

                            {
                              TreeL_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, TreeL_36, 0) = LK_49;
                              MR_hl_field(1, TreeL_36, 1) = LV_50;
                              MR_hl_field(1, TreeL_36, 2) = ((MR_Box) (LL_51));
                              MR_hl_field(1, TreeL_36, 3) = ((MR_Box) (LRL_34));
                            }
                            {
                              TreeR_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, TreeR_47, 0) = K0_101;
                              MR_hl_field(1, TreeR_47, 1) = V0_102;
                              MR_hl_field(1, TreeR_47, 2) = ((MR_Box) (LRR_35));
                              MR_hl_field(1, TreeR_47, 3) = ((MR_Box) (R0_104));
                            }
                            {
                              Tree_110 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(2, Tree_110, 0) = LRK_32;
                              MR_hl_field(2, Tree_110, 1) = LRV_33;
                              MR_hl_field(2, Tree_110, 2) = ((MR_Box) (TreeL_36));
                              MR_hl_field(2, Tree_110, 3) = ((MR_Box) (TreeR_47));
                            }
                            *AddrOfTree_109 = Tree_110;
                          }
                        }
                        else
                        {
                          MR_Word Tree_111;

                          {
                            Tree_111 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(2, Tree_111, 0) = K0_101;
                            MR_hl_field(2, Tree_111, 1) = V0_102;
                            MR_hl_field(2, Tree_111, 2) = ((MR_Box) (L_53));
                            MR_hl_field(2, Tree_111, 3) = ((MR_Box) (R0_104));
                          }
                          *AddrOfTree_109 = Tree_111;
                        }
                      }
                    }
                    else
                    {
                      MR_Word Tree_113;

                      {
                        Tree_113 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Tree_113, 0) = K0_101;
                        MR_hl_field(2, Tree_113, 1) = V0_102;
                        MR_hl_field(2, Tree_113, 2) = ((MR_Box) (L_53));
                        MR_hl_field(2, Tree_113, 3) = ((MR_Box) (R0_104));
                      }
                      *AddrOfTree_109 = Tree_113;
                    }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word R_70;
                  MR_Box RK_64;
                  MR_Box RV_65;
                  MR_Word RL_66;
                  MR_Word RR_67;

                  succeeded = mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_105_110_116_111_95_110_111_100_101_95_95_91_50_93_95_48_4_p_0(TypeInfo_for_K_105, K_5, V_6, R0_104, &R_70);
                  if (succeeded)
                  {
                    succeeded = ((MR_tag((MR_Word) R_70)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      RK_64 = (MR_hl_field(1, R_70, 0));
                      RV_65 = (MR_hl_field(1, R_70, 1));
                      RL_66 = ((MR_Word) ((MR_hl_field(1, R_70, 2))));
                      RR_67 = ((MR_Word) ((MR_hl_field(1, R_70, 3))));
                      {
                        MR_Box RLK_37;
                        MR_Box RLV_38;
                        MR_Word RLL_39;
                        MR_Word RLR_40;

                        succeeded = ((MR_tag((MR_Word) RL_66)) == (MR_Integer) 1);
                        if (succeeded)
                        {
                          RLK_37 = (MR_hl_field(1, RL_66, 0));
                          RLV_38 = (MR_hl_field(1, RL_66, 1));
                          RLL_39 = ((MR_Word) ((MR_hl_field(1, RL_66, 2))));
                          RLR_40 = ((MR_Word) ((MR_hl_field(1, RL_66, 3))));
                          {
                            MR_Word TreeR_58;
                            MR_Word TreeL_59;
                            MR_Word Tree_114;

                            {
                              TreeL_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, TreeL_59, 0) = K0_101;
                              MR_hl_field(1, TreeL_59, 1) = V0_102;
                              MR_hl_field(1, TreeL_59, 2) = ((MR_Box) (L0_103));
                              MR_hl_field(1, TreeL_59, 3) = ((MR_Box) (RLL_39));
                            }
                            {
                              TreeR_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, TreeR_58, 0) = RK_64;
                              MR_hl_field(1, TreeR_58, 1) = RV_65;
                              MR_hl_field(1, TreeR_58, 2) = ((MR_Box) (RLR_40));
                              MR_hl_field(1, TreeR_58, 3) = ((MR_Box) (RR_67));
                            }
                            {
                              Tree_114 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(2, Tree_114, 0) = RLK_37;
                              MR_hl_field(2, Tree_114, 1) = RLV_38;
                              MR_hl_field(2, Tree_114, 2) = ((MR_Box) (TreeL_59));
                              MR_hl_field(2, Tree_114, 3) = ((MR_Box) (TreeR_58));
                            }
                            *AddrOfTree_109 = Tree_114;
                          }
                        }
                        else
                        {
                          succeeded = ((MR_tag((MR_Word) RR_67)) == (MR_Integer) 1);
                          if (succeeded)
                          {
                            MR_Word TreeL_60;
                            MR_Word Tree_115;

                            {
                              TreeL_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, TreeL_60, 0) = K0_101;
                              MR_hl_field(1, TreeL_60, 1) = V0_102;
                              MR_hl_field(1, TreeL_60, 2) = ((MR_Box) (L0_103));
                              MR_hl_field(1, TreeL_60, 3) = ((MR_Box) (RL_66));
                            }
                            {
                              Tree_115 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(2, Tree_115, 0) = RK_64;
                              MR_hl_field(2, Tree_115, 1) = RV_65;
                              MR_hl_field(2, Tree_115, 2) = ((MR_Box) (TreeL_60));
                              MR_hl_field(2, Tree_115, 3) = ((MR_Box) (RR_67));
                            }
                            *AddrOfTree_109 = Tree_115;
                          }
                          else
                          {
                            MR_Word Tree_116;

                            {
                              Tree_116 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(2, Tree_116, 0) = K0_101;
                              MR_hl_field(2, Tree_116, 1) = V0_102;
                              MR_hl_field(2, Tree_116, 2) = ((MR_Box) (L0_103));
                              MR_hl_field(2, Tree_116, 3) = ((MR_Box) (R_70));
                            }
                            *AddrOfTree_109 = Tree_116;
                          }
                        }
                      }
                    }
                    else
                    {
                      MR_Word Tree_119;

                      {
                        Tree_119 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(2, Tree_119, 0) = K0_101;
                        MR_hl_field(2, Tree_119, 1) = V0_102;
                        MR_hl_field(2, Tree_119, 2) = ((MR_Box) (L0_103));
                        MR_hl_field(2, Tree_119, 3) = ((MR_Box) (R_70));
                      }
                      *AddrOfTree_109 = Tree_119;
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

static MR_bool MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_105_110_116_111_95_110_111_100_101_95_95_91_50_93_95_48_4_p_0(
  MR_Word TypeInfo_for_K_105,
  MR_Box K_5,
  MR_Box V_6,
  MR_Word Tree0_7,
  MR_Word * Tree_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    ;
    switch (MR_tag((MR_Word) Tree0_7)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
            *Tree_8 = base;
            MR_hl_field(1, base, 0) = K_5;
            MR_hl_field(1, base, 1) = V_6;
            MR_hl_field(1, base, 2) = ((MR_Box) ((MR_Unsigned) 0U));
            MR_hl_field(1, base, 3) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box K0_9 = (MR_hl_field(1, Tree0_7, 0));
          MR_Box V0_10 = (MR_hl_field(1, Tree0_7, 1));
          MR_Word L0_11 = ((MR_Word) ((MR_hl_field(1, Tree0_7, 2))));
          MR_Word R0_12 = ((MR_Word) ((MR_hl_field(1, Tree0_7, 3))));
          MR_Word Result_13;

          mercury__builtin__compare_3_p_0(TypeInfo_for_K_105, &Result_13, K_5, K0_9);
          switch (Result_13) {
            default:
              succeeded = MR_FALSE;
              break;
            case (MR_Integer) 1:
              {
                MR_Word * AddrL_107;

                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  *Tree_8 = base;
                  MR_hl_field(1, base, 0) = K0_9;
                  MR_hl_field(1, base, 1) = V0_10;
                  MR_hl_field(1, base, 2) = NULL;
                  MR_hl_field(1, base, 3) = ((MR_Box) (R0_12));
                }
                AddrL_107 = (MR_Word *) (&(MR_hl_field(1, *Tree_8, 2)));
                succeeded = mercury__rbtree__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_105_110_116_111_95_110_111_100_101_95_95_91_50_93_95_48_95_95_49_4_p_0(TypeInfo_for_K_105, K_5, V_6, L0_11, AddrL_107);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word * AddrR_108;

                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                  *Tree_8 = base;
                  MR_hl_field(1, base, 0) = K0_9;
                  MR_hl_field(1, base, 1) = V0_10;
                  MR_hl_field(1, base, 2) = ((MR_Box) (L0_11));
                  MR_hl_field(1, base, 3) = NULL;
                }
                AddrR_108 = (MR_Word *) (&(MR_hl_field(1, *Tree_8, 3)));
                succeeded = mercury__rbtree__f_76_67_77_67_95_95_112_114_101_100_95_95_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_105_110_116_111_95_110_111_100_101_95_95_91_50_93_95_48_95_95_49_4_p_0(TypeInfo_for_K_105, K_5, V_6, R0_12, AddrR_108);
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box K0_101 = (MR_hl_field(2, Tree0_7, 0));
          MR_Box V0_102 = (MR_hl_field(2, Tree0_7, 1));
          MR_Word L0_103 = ((MR_Word) ((MR_hl_field(2, Tree0_7, 2))));
          MR_Word R0_104 = ((MR_Word) ((MR_hl_field(2, Tree0_7, 3))));
          MR_Box LK_16;
          MR_Box LV_17;
          MR_Word LL_18;
          MR_Word LR_19;
          MR_Box RK_20;
          MR_Box RV_21;
          MR_Word RL_22;
          MR_Word RR_23;

          succeeded = ((MR_tag((MR_Word) L0_103)) == (MR_Integer) 1);
          if (succeeded)
          {
            LK_16 = (MR_hl_field(1, L0_103, 0));
            LV_17 = (MR_hl_field(1, L0_103, 1));
            LL_18 = ((MR_Word) ((MR_hl_field(1, L0_103, 2))));
            LR_19 = ((MR_Word) ((MR_hl_field(1, L0_103, 3))));
            succeeded = ((MR_tag((MR_Word) R0_104)) == (MR_Integer) 1);
            if (succeeded)
            {
              RK_20 = (MR_hl_field(1, R0_104, 0));
              RV_21 = (MR_hl_field(1, R0_104, 1));
              RL_22 = ((MR_Word) ((MR_hl_field(1, R0_104, 2))));
              RR_23 = ((MR_Word) ((MR_hl_field(1, R0_104, 3))));
            }
          }
          if (succeeded)
          {
            MR_Word L1_24;
            MR_Word R1_25;
            MR_Word Tree1_26;
            MR_Word next_value_of_Tree0_7;

            {
              L1_24 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, L1_24, 0) = LK_16;
              MR_hl_field(2, L1_24, 1) = LV_17;
              MR_hl_field(2, L1_24, 2) = ((MR_Box) (LL_18));
              MR_hl_field(2, L1_24, 3) = ((MR_Box) (LR_19));
            }
            {
              R1_25 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(2, R1_25, 0) = RK_20;
              MR_hl_field(2, R1_25, 1) = RV_21;
              MR_hl_field(2, R1_25, 2) = ((MR_Box) (RL_22));
              MR_hl_field(2, R1_25, 3) = ((MR_Box) (RR_23));
            }
            {
              Tree1_26 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Tree1_26, 0) = K0_101;
              MR_hl_field(1, Tree1_26, 1) = V0_102;
              MR_hl_field(1, Tree1_26, 2) = ((MR_Box) (L1_24));
              MR_hl_field(1, Tree1_26, 3) = ((MR_Box) (R1_25));
            }
            // direct tailcall eliminated
            ;
            next_value_of_Tree0_7 = Tree1_26;
            Tree0_7 = next_value_of_Tree0_7;
            continue;
          }
          else
          {
            MR_Word Result_87;

            mercury__builtin__compare_3_p_0(TypeInfo_for_K_105, &Result_87, K_5, K0_101);
            switch (Result_87) {
              default:
                succeeded = MR_FALSE;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word L_53;
                  MR_Box LK_49;
                  MR_Box LV_50;
                  MR_Word LL_51;
                  MR_Word LR_52;

                  succeeded = mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_105_110_116_111_95_110_111_100_101_95_95_91_50_93_95_48_4_p_0(TypeInfo_for_K_105, K_5, V_6, L0_103, &L_53);
                  if (succeeded)
                  {
                    succeeded = ((MR_tag((MR_Word) L_53)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      LK_49 = (MR_hl_field(1, L_53, 0));
                      LV_50 = (MR_hl_field(1, L_53, 1));
                      LL_51 = ((MR_Word) ((MR_hl_field(1, L_53, 2))));
                      LR_52 = ((MR_Word) ((MR_hl_field(1, L_53, 3))));
                      succeeded = ((MR_tag((MR_Word) LL_51)) == (MR_Integer) 1);
                      if (succeeded)
                      {
                        MR_Word TreeR_31;

                        {
                          TreeR_31 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(1, TreeR_31, 0) = K0_101;
                          MR_hl_field(1, TreeR_31, 1) = V0_102;
                          MR_hl_field(1, TreeR_31, 2) = ((MR_Box) (LR_52));
                          MR_hl_field(1, TreeR_31, 3) = ((MR_Box) (R0_104));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                          *Tree_8 = base;
                          MR_hl_field(2, base, 0) = LK_49;
                          MR_hl_field(2, base, 1) = LV_50;
                          MR_hl_field(2, base, 2) = ((MR_Box) (LL_51));
                          MR_hl_field(2, base, 3) = ((MR_Box) (TreeR_31));
                        }
                      }
                      else
                      {
                        MR_Box LRK_32;
                        MR_Box LRV_33;
                        MR_Word LRL_34;
                        MR_Word LRR_35;

                        succeeded = ((MR_tag((MR_Word) LR_52)) == (MR_Integer) 1);
                        if (succeeded)
                        {
                          LRK_32 = (MR_hl_field(1, LR_52, 0));
                          LRV_33 = (MR_hl_field(1, LR_52, 1));
                          LRL_34 = ((MR_Word) ((MR_hl_field(1, LR_52, 2))));
                          LRR_35 = ((MR_Word) ((MR_hl_field(1, LR_52, 3))));
                          {
                            MR_Word TreeL_36;
                            MR_Word TreeR_47;

                            {
                              TreeL_36 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, TreeL_36, 0) = LK_49;
                              MR_hl_field(1, TreeL_36, 1) = LV_50;
                              MR_hl_field(1, TreeL_36, 2) = ((MR_Box) (LL_51));
                              MR_hl_field(1, TreeL_36, 3) = ((MR_Box) (LRL_34));
                            }
                            {
                              TreeR_47 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, TreeR_47, 0) = K0_101;
                              MR_hl_field(1, TreeR_47, 1) = V0_102;
                              MR_hl_field(1, TreeR_47, 2) = ((MR_Box) (LRR_35));
                              MR_hl_field(1, TreeR_47, 3) = ((MR_Box) (R0_104));
                            }
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                              *Tree_8 = base;
                              MR_hl_field(2, base, 0) = LRK_32;
                              MR_hl_field(2, base, 1) = LRV_33;
                              MR_hl_field(2, base, 2) = ((MR_Box) (TreeL_36));
                              MR_hl_field(2, base, 3) = ((MR_Box) (TreeR_47));
                            }
                          }
                        }
                        else
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                            *Tree_8 = base;
                            MR_hl_field(2, base, 0) = K0_101;
                            MR_hl_field(2, base, 1) = V0_102;
                            MR_hl_field(2, base, 2) = ((MR_Box) (L_53));
                            MR_hl_field(2, base, 3) = ((MR_Box) (R0_104));
                          }
                      }
                    }
                    else
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        *Tree_8 = base;
                        MR_hl_field(2, base, 0) = K0_101;
                        MR_hl_field(2, base, 1) = V0_102;
                        MR_hl_field(2, base, 2) = ((MR_Box) (L_53));
                        MR_hl_field(2, base, 3) = ((MR_Box) (R0_104));
                      }
                    succeeded = MR_TRUE;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word R_70;
                  MR_Box RK_64;
                  MR_Box RV_65;
                  MR_Word RL_66;
                  MR_Word RR_67;

                  succeeded = mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_105_110_116_111_95_110_111_100_101_95_95_91_50_93_95_48_4_p_0(TypeInfo_for_K_105, K_5, V_6, R0_104, &R_70);
                  if (succeeded)
                  {
                    succeeded = ((MR_tag((MR_Word) R_70)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      RK_64 = (MR_hl_field(1, R_70, 0));
                      RV_65 = (MR_hl_field(1, R_70, 1));
                      RL_66 = ((MR_Word) ((MR_hl_field(1, R_70, 2))));
                      RR_67 = ((MR_Word) ((MR_hl_field(1, R_70, 3))));
                      {
                        MR_Box RLK_37;
                        MR_Box RLV_38;
                        MR_Word RLL_39;
                        MR_Word RLR_40;

                        succeeded = ((MR_tag((MR_Word) RL_66)) == (MR_Integer) 1);
                        if (succeeded)
                        {
                          RLK_37 = (MR_hl_field(1, RL_66, 0));
                          RLV_38 = (MR_hl_field(1, RL_66, 1));
                          RLL_39 = ((MR_Word) ((MR_hl_field(1, RL_66, 2))));
                          RLR_40 = ((MR_Word) ((MR_hl_field(1, RL_66, 3))));
                          {
                            MR_Word TreeR_58;
                            MR_Word TreeL_59;

                            {
                              TreeL_59 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, TreeL_59, 0) = K0_101;
                              MR_hl_field(1, TreeL_59, 1) = V0_102;
                              MR_hl_field(1, TreeL_59, 2) = ((MR_Box) (L0_103));
                              MR_hl_field(1, TreeL_59, 3) = ((MR_Box) (RLL_39));
                            }
                            {
                              TreeR_58 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, TreeR_58, 0) = RK_64;
                              MR_hl_field(1, TreeR_58, 1) = RV_65;
                              MR_hl_field(1, TreeR_58, 2) = ((MR_Box) (RLR_40));
                              MR_hl_field(1, TreeR_58, 3) = ((MR_Box) (RR_67));
                            }
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                              *Tree_8 = base;
                              MR_hl_field(2, base, 0) = RLK_37;
                              MR_hl_field(2, base, 1) = RLV_38;
                              MR_hl_field(2, base, 2) = ((MR_Box) (TreeL_59));
                              MR_hl_field(2, base, 3) = ((MR_Box) (TreeR_58));
                            }
                          }
                        }
                        else
                        {
                          succeeded = ((MR_tag((MR_Word) RR_67)) == (MR_Integer) 1);
                          if (succeeded)
                          {
                            MR_Word TreeL_60;

                            {
                              TreeL_60 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(1, TreeL_60, 0) = K0_101;
                              MR_hl_field(1, TreeL_60, 1) = V0_102;
                              MR_hl_field(1, TreeL_60, 2) = ((MR_Box) (L0_103));
                              MR_hl_field(1, TreeL_60, 3) = ((MR_Box) (RL_66));
                            }
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                              *Tree_8 = base;
                              MR_hl_field(2, base, 0) = RK_64;
                              MR_hl_field(2, base, 1) = RV_65;
                              MR_hl_field(2, base, 2) = ((MR_Box) (TreeL_60));
                              MR_hl_field(2, base, 3) = ((MR_Box) (RR_67));
                            }
                          }
                          else
                            {
                              MR_Word base;
                              base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                              *Tree_8 = base;
                              MR_hl_field(2, base, 0) = K0_101;
                              MR_hl_field(2, base, 1) = V0_102;
                              MR_hl_field(2, base, 2) = ((MR_Box) (L0_103));
                              MR_hl_field(2, base, 3) = ((MR_Box) (R_70));
                            }
                        }
                      }
                    }
                    else
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
                        *Tree_8 = base;
                        MR_hl_field(2, base, 0) = K0_101;
                        MR_hl_field(2, base, 1) = V0_102;
                        MR_hl_field(2, base, 2) = ((MR_Box) (L0_103));
                        MR_hl_field(2, base, 3) = ((MR_Box) (R_70));
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

MR_Word MR_CALL 
mercury__rbtree__singleton_2_f_0(
  MR_Word TypeInfo_for_K_8,
  MR_Word TypeInfo_for_V_9,
  MR_Box K_4,
  MR_Box V_5)
{
  MR_Word HeadVar__3_3;

  {
    HeadVar__3_3 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(2, HeadVar__3_3, 0) = K_4;
    MR_hl_field(2, HeadVar__3_3, 1) = V_5;
    MR_hl_field(2, HeadVar__3_3, 2) = ((MR_Box) ((MR_Unsigned) 0U));
    MR_hl_field(2, HeadVar__3_3, 3) = ((MR_Box) ((MR_Unsigned) 0U));
  }
  return HeadVar__3_3;
}

MR_bool MR_CALL 
mercury__rbtree__is_empty_1_p_0(
  MR_Word TypeInfo_for_K_3,
  MR_Word TypeInfo_for_V_4,
  MR_Word Tree_2)
{
  MR_bool succeeded = (Tree_2 == (MR_Word) ((MR_Unsigned) 0U));

  return succeeded;
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
  return (MR_Word) ((MR_Unsigned) 0U);
}

static MR_bool MR_CALL 
mercury__rbtree____Unify____rbtree_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_bool succeeded;

  succeeded = mercury__rbtree____Unify____rbtree_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  return succeeded;
}

static void MR_CALL 
mercury__rbtree____Compare____rbtree_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__rbtree____Compare____rbtree_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
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
