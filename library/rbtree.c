/*
** Automatically generated from `rbtree.m'
** by the Mercury compiler,
** version DEV
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


/* :- module rbtree. */
/* :- implementation. */

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

static MR_bool MR_CALL 
mercury__rbtree____Unify____rbtree_2_0_10001(
  MR_Box mercury__rbtree__wrapper_arg_1,
  MR_Box mercury__rbtree__wrapper_arg_2,
  MR_Box mercury__rbtree__wrapper_arg_3,
  MR_Box mercury__rbtree__wrapper_arg_4);

static void MR_CALL 
mercury__rbtree____Compare____rbtree_2_0_10001(
  MR_Box mercury__rbtree__wrapper_arg_1,
  MR_Box mercury__rbtree__wrapper_arg_2,
  MR_Box * mercury__rbtree__wrapper_arg_3,
  MR_Box mercury__rbtree__wrapper_arg_4,
  MR_Box mercury__rbtree__wrapper_arg_5);

static void MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_0(
  MR_Word mercury__rbtree__V_37_37,
  MR_Word mercury__rbtree__HeadVar__2_2,
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0_3,
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc_4);

static void MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_0(
  MR_Word mercury__rbtree__V_31_31,
  MR_Word mercury__rbtree__HeadVar__2_2,
  MR_Word * mercury__rbtree__HeadVar__3_3);

static MR_Integer MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_p_0(
  MR_Word mercury__rbtree__TypeInfo_for_K_143,
  MR_Word mercury__rbtree__HeadVar__1_1,
  MR_Box mercury__rbtree__K_2,
  MR_Box mercury__rbtree__V_3,
  MR_Word * mercury__rbtree__HeadVar__4_4);

static void MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_p_1(
  MR_Word mercury__rbtree__TypeInfo_for_K_104,
  MR_Word mercury__rbtree__HeadVar__1_1,
  MR_Box mercury__rbtree__K_2,
  MR_Box mercury__rbtree__V_3,
  MR_Word * mercury__rbtree__HeadVar__4_4);

static MR_bool MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_p_0(
  MR_Word mercury__rbtree__TypeInfo_for_K_102,
  MR_Word mercury__rbtree__HeadVar__1_1,
  MR_Box mercury__rbtree__K_2,
  MR_Box mercury__rbtree__V_3,
  MR_Word * mercury__rbtree__HeadVar__4_4);


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



static const MR_DuFunctorDesc mercury__rbtree__rbtree__du_functor_desc_rbtree_2_0 = {
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
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__rbtree__rbtree__pti_rbtree_2__pseudo_1__pseudo_2 = {
  &mercury__rbtree__rbtree__type_ctor_info_rbtree_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

static const MR_PseudoTypeInfo mercury__rbtree__rbtree__field_types_rbtree_2_1[4] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2,
  (MR_PseudoTypeInfo) &mercury__rbtree__rbtree__pti_rbtree_2__pseudo_1__pseudo_2,
  (MR_PseudoTypeInfo) &mercury__rbtree__rbtree__pti_rbtree_2__pseudo_1__pseudo_2
};

static const MR_DuFunctorDesc mercury__rbtree__rbtree__du_functor_desc_rbtree_2_1 = {
  (MR_String) "red",
  (MR_Integer) 4,
  (MR_Integer) 15,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__rbtree__rbtree__field_types_rbtree_2_1,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__rbtree__rbtree__field_types_rbtree_2_2[4] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2,
  (MR_PseudoTypeInfo) &mercury__rbtree__rbtree__pti_rbtree_2__pseudo_1__pseudo_2,
  (MR_PseudoTypeInfo) &mercury__rbtree__rbtree__pti_rbtree_2__pseudo_1__pseudo_2
};

static const MR_DuFunctorDesc mercury__rbtree__rbtree__du_functor_desc_rbtree_2_2 = {
  (MR_String) "black",
  (MR_Integer) 4,
  (MR_Integer) 15,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__rbtree__rbtree__field_types_rbtree_2_2,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
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
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__rbtree__rbtree__du_stag_ordered_rbtree_2_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__rbtree__rbtree__du_stag_ordered_rbtree_2_1
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__rbtree__rbtree__du_stag_ordered_rbtree_2_2
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
  (MR_Integer) 16,
  (MR_Integer) 3,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__rbtree____Unify____rbtree_2_0_10001)),
  ((MR_Box) (mercury__rbtree____Compare____rbtree_2_0_10001)),
  (MR_String) "rbtree",
  (MR_String) "rbtree",
  {     mercury__rbtree__rbtree__du_name_ordered_rbtree_2 },
  {     mercury__rbtree__rbtree__du_ptag_ordered_rbtree_2 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__rbtree__rbtree__functor_number_map_rbtree_2
};

static MR_bool MR_CALL 
mercury__rbtree____Unify____rbtree_2_0_10001(
  MR_Box mercury__rbtree__wrapper_arg_1,
  MR_Box mercury__rbtree__wrapper_arg_2,
  MR_Box mercury__rbtree__wrapper_arg_3,
  MR_Box mercury__rbtree__wrapper_arg_4)
{
  {
    MR_bool mercury__rbtree__succeeded;

    {
      mercury__rbtree__succeeded = mercury__rbtree____Unify____rbtree_2_0(((MR_Word) mercury__rbtree__wrapper_arg_1), ((MR_Word) mercury__rbtree__wrapper_arg_2), ((MR_Word) mercury__rbtree__wrapper_arg_3), ((MR_Word) mercury__rbtree__wrapper_arg_4));
    }
    return mercury__rbtree__succeeded;
  }
}

static void MR_CALL 
mercury__rbtree____Compare____rbtree_2_0_10001(
  MR_Box mercury__rbtree__wrapper_arg_1,
  MR_Box mercury__rbtree__wrapper_arg_2,
  MR_Box * mercury__rbtree__wrapper_arg_3,
  MR_Box mercury__rbtree__wrapper_arg_4,
  MR_Box mercury__rbtree__wrapper_arg_5)
{
  {
    MR_Word mercury__rbtree__conv0_HeadVar__1_1;

    {
      mercury__rbtree____Compare____rbtree_2_0(((MR_Word) mercury__rbtree__wrapper_arg_1), ((MR_Word) mercury__rbtree__wrapper_arg_2), &mercury__rbtree__conv0_HeadVar__1_1, ((MR_Word) mercury__rbtree__wrapper_arg_4), ((MR_Word) mercury__rbtree__wrapper_arg_5));
    }
    *mercury__rbtree__wrapper_arg_3 = ((MR_Box) (mercury__rbtree__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_0(
  MR_Word mercury__rbtree__V_37_37,
  MR_Word mercury__rbtree__HeadVar__2_2,
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0_3,
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__rbtree__succeeded;

        switch (MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *mercury__rbtree__STATE_VARIABLE_Acc_4 = mercury__rbtree__STATE_VARIABLE_Acc_0_3;
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__rbtree__K_10 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
              MR_Box mercury__rbtree__V_11 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
              MR_Word mercury__rbtree__Left_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
              MR_Word mercury__rbtree__Right_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_17_17;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_18_18;
              MR_Box MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box);

              {
                mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_0(mercury__rbtree__V_37_37, mercury__rbtree__Left_12, mercury__rbtree__STATE_VARIABLE_Acc_0_3, &mercury__rbtree__STATE_VARIABLE_Acc_17_17);
              }
              mercury__rbtree__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__rbtree__V_37_37, (MR_Integer) 1)));
              {
                mercury__rbtree__STATE_VARIABLE_Acc_18_18 = mercury__rbtree__func_1(((MR_Box) mercury__rbtree__V_37_37), mercury__rbtree__K_10, mercury__rbtree__V_11, mercury__rbtree__STATE_VARIABLE_Acc_17_17);
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_13;
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc_18_18;

                mercury__rbtree__STATE_VARIABLE_Acc_0_3 = mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3;
                mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
              }
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Box mercury__rbtree__K_21 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
              MR_Box mercury__rbtree__V_22 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
              MR_Word mercury__rbtree__Left_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
              MR_Word mercury__rbtree__Right_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_28_28;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_29_29;
              MR_Box MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box);

              {
                mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_0(mercury__rbtree__V_37_37, mercury__rbtree__Left_23, mercury__rbtree__STATE_VARIABLE_Acc_0_3, &mercury__rbtree__STATE_VARIABLE_Acc_28_28);
              }
              mercury__rbtree__func_0 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__rbtree__V_37_37, (MR_Integer) 1)));
              {
                mercury__rbtree__STATE_VARIABLE_Acc_29_29 = mercury__rbtree__func_0(((MR_Box) mercury__rbtree__V_37_37), mercury__rbtree__K_21, mercury__rbtree__V_22, mercury__rbtree__STATE_VARIABLE_Acc_28_28);
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_24;
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc_29_29;

                mercury__rbtree__STATE_VARIABLE_Acc_0_3 = mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3;
                mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
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
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_0(
  MR_Word mercury__rbtree__V_31_31,
  MR_Word mercury__rbtree__HeadVar__2_2,
  MR_Word * mercury__rbtree__HeadVar__3_3)
{
  {
    MR_bool mercury__rbtree__succeeded;

    switch (MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *mercury__rbtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Box mercury__rbtree__K0_8 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
          MR_Box mercury__rbtree__V0_9 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
          MR_Word mercury__rbtree__Left0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
          MR_Word mercury__rbtree__Right0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
          MR_Box mercury__rbtree__W0_12;
          MR_Word mercury__rbtree__Left_13;
          MR_Word mercury__rbtree__Right_14;
          MR_Box MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__rbtree__V_31_31, (MR_Integer) 1)));

          {
            mercury__rbtree__W0_12 = mercury__rbtree__func_1(((MR_Box) mercury__rbtree__V_31_31), mercury__rbtree__K0_8, mercury__rbtree__V0_9);
          }
          {
            mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_0(mercury__rbtree__V_31_31, mercury__rbtree__Left0_10, &mercury__rbtree__Left_13);
          }
          {
            mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_0(mercury__rbtree__V_31_31, mercury__rbtree__Right0_11, &mercury__rbtree__Right_14);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *mercury__rbtree__HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K0_8;
            MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__W0_12;
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__Left_13));
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__Right_14));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box mercury__rbtree__K0_18 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
          MR_Box mercury__rbtree__V0_19 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
          MR_Word mercury__rbtree__Left0_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
          MR_Word mercury__rbtree__Right0_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
          MR_Box mercury__rbtree__W0_22;
          MR_Word mercury__rbtree__Left_23;
          MR_Word mercury__rbtree__Right_24;
          MR_Box MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__rbtree__V_31_31, (MR_Integer) 1)));

          {
            mercury__rbtree__W0_22 = mercury__rbtree__func_0(((MR_Box) mercury__rbtree__V_31_31), mercury__rbtree__K0_18, mercury__rbtree__V0_19);
          }
          {
            mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_0(mercury__rbtree__V_31_31, mercury__rbtree__Left0_20, &mercury__rbtree__Left_23);
          }
          {
            mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_0(mercury__rbtree__V_31_31, mercury__rbtree__Right0_21, &mercury__rbtree__Right_24);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *mercury__rbtree__HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_18;
            MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__W0_22;
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__Left_23));
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__Right_24));
          }
        }
        break;
    }
  }
}

static MR_Integer MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    MR_bool mercury__rbtree__succeeded;

    return (MR_Integer) 1200;
  }
}

void MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_p_1(
  MR_Word mercury__rbtree__TypeInfo_for_K_43,
  MR_Word mercury__rbtree__TypeInfo_for_V_44,
  MR_Word mercury__rbtree__HeadVar__1_1,
  MR_Box mercury__rbtree__HeadVar__2_2,
  MR_Word * mercury__rbtree__HeadVar__4_4,
  MR_Word * mercury__rbtree__HeadVar__5_5)
{
  {
    MR_bool mercury__rbtree__succeeded;

    switch (MR_tag((MR_Word) mercury__rbtree__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *mercury__rbtree__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          *mercury__rbtree__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box mercury__rbtree__K0_7 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));
          MR_Box mercury__rbtree__V0_8 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));
          MR_Word mercury__rbtree__L_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
          MR_Word mercury__rbtree__R_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));
          MR_Word mercury__rbtree__Result_15;

          {
            mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_K_43, &mercury__rbtree__Result_15, mercury__rbtree__HeadVar__2_2, mercury__rbtree__K0_7);
          }
          switch (mercury__rbtree__Result_15) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word mercury__rbtree__NewL_23;

                {
                  mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_p_1(mercury__rbtree__TypeInfo_for_K_43, mercury__rbtree__TypeInfo_for_V_44, mercury__rbtree__L_9, mercury__rbtree__HeadVar__2_2, mercury__rbtree__HeadVar__4_4, &mercury__rbtree__NewL_23);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__rbtree__HeadVar__5_5 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K0_7;
                  MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V0_8;
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__NewL_23));
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__R_10));
                }
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Box mercury__rbtree__NewK_16;
                MR_Box mercury__rbtree__NewV_17;
                MR_Word mercury__rbtree__NewL_18;

                {
                  mercury__rbtree__succeeded = mercury__rbtree__remove_largest_4_p_0(mercury__rbtree__TypeInfo_for_K_43, mercury__rbtree__TypeInfo_for_V_44, &mercury__rbtree__NewK_16, &mercury__rbtree__NewV_17, mercury__rbtree__L_9, &mercury__rbtree__NewL_18);
                }
                if (mercury__rbtree__succeeded)
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    *mercury__rbtree__HeadVar__5_5 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__NewK_16;
                    MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__NewV_17;
                    MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__NewL_18));
                    MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__R_10));
                  }
                else
                  {
                    MR_Word mercury__rbtree__NewR_19;
                    MR_Box mercury__rbtree__NewK_21;
                    MR_Box mercury__rbtree__NewV_22;

                    {
                      mercury__rbtree__succeeded = mercury__rbtree__remove_smallest_4_p_0(mercury__rbtree__TypeInfo_for_K_43, mercury__rbtree__TypeInfo_for_V_44, &mercury__rbtree__NewK_21, &mercury__rbtree__NewV_22, mercury__rbtree__R_10, &mercury__rbtree__NewR_19);
                    }
                    if (mercury__rbtree__succeeded)
                      {
                        MR_Word mercury__rbtree__V_20_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                          *mercury__rbtree__HeadVar__5_5 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__NewK_21;
                          MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__NewV_22;
                          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__V_20_20));
                          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__NewR_19));
                        }
                      }
                    else
                      *mercury__rbtree__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__rbtree__HeadVar__4_4 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__V0_8;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word mercury__rbtree__NewR_24;

                {
                  mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_p_1(mercury__rbtree__TypeInfo_for_K_43, mercury__rbtree__TypeInfo_for_V_44, mercury__rbtree__R_10, mercury__rbtree__HeadVar__2_2, mercury__rbtree__HeadVar__4_4, &mercury__rbtree__NewR_24);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__rbtree__HeadVar__5_5 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K0_7;
                  MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V0_8;
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__L_9));
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__NewR_24));
                }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box mercury__rbtree__K0_25 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));
          MR_Box mercury__rbtree__V0_26 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));
          MR_Word mercury__rbtree__L_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
          MR_Word mercury__rbtree__R_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));
          MR_Word mercury__rbtree__Result_33;

          {
            mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_K_43, &mercury__rbtree__Result_33, mercury__rbtree__HeadVar__2_2, mercury__rbtree__K0_25);
          }
          switch (mercury__rbtree__Result_33) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word mercury__rbtree__NewL_41;

                {
                  mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_p_1(mercury__rbtree__TypeInfo_for_K_43, mercury__rbtree__TypeInfo_for_V_44, mercury__rbtree__L_27, mercury__rbtree__HeadVar__2_2, mercury__rbtree__HeadVar__4_4, &mercury__rbtree__NewL_41);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__rbtree__HeadVar__5_5 = base;
                  MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_25;
                  MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_26;
                  MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__NewL_41));
                  MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R_28));
                }
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Box mercury__rbtree__NewK_34;
                MR_Box mercury__rbtree__NewV_35;
                MR_Word mercury__rbtree__NewL_36;

                {
                  mercury__rbtree__succeeded = mercury__rbtree__remove_largest_4_p_0(mercury__rbtree__TypeInfo_for_K_43, mercury__rbtree__TypeInfo_for_V_44, &mercury__rbtree__NewK_34, &mercury__rbtree__NewV_35, mercury__rbtree__L_27, &mercury__rbtree__NewL_36);
                }
                if (mercury__rbtree__succeeded)
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    *mercury__rbtree__HeadVar__5_5 = base;
                    MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__NewK_34;
                    MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__NewV_35;
                    MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__NewL_36));
                    MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R_28));
                  }
                else
                  {
                    MR_Word mercury__rbtree__NewR_37;
                    MR_Box mercury__rbtree__NewK_39;
                    MR_Box mercury__rbtree__NewV_40;

                    {
                      mercury__rbtree__succeeded = mercury__rbtree__remove_smallest_4_p_0(mercury__rbtree__TypeInfo_for_K_43, mercury__rbtree__TypeInfo_for_V_44, &mercury__rbtree__NewK_39, &mercury__rbtree__NewV_40, mercury__rbtree__R_28, &mercury__rbtree__NewR_37);
                    }
                    if (mercury__rbtree__succeeded)
                      {
                        MR_Word mercury__rbtree__V_38_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                          *mercury__rbtree__HeadVar__5_5 = base;
                          MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__NewK_39;
                          MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__NewV_40;
                          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__V_38_38));
                          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__NewR_37));
                        }
                      }
                    else
                      *mercury__rbtree__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__rbtree__HeadVar__4_4 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__V0_26;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word mercury__rbtree__NewR_42;

                {
                  mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_p_1(mercury__rbtree__TypeInfo_for_K_43, mercury__rbtree__TypeInfo_for_V_44, mercury__rbtree__R_28, mercury__rbtree__HeadVar__2_2, mercury__rbtree__HeadVar__4_4, &mercury__rbtree__NewR_42);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__rbtree__HeadVar__5_5 = base;
                  MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_25;
                  MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_26;
                  MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__L_27));
                  MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__NewR_42));
                }
              }
              break;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_p_0(
  MR_Word mercury__rbtree__TypeInfo_for_K_143,
  MR_Word mercury__rbtree__HeadVar__1_1,
  MR_Box mercury__rbtree__K_2,
  MR_Box mercury__rbtree__V_3,
  MR_Word * mercury__rbtree__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__rbtree__succeeded;

        switch (MR_tag((MR_Word) mercury__rbtree__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word mercury__rbtree__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              MR_Word mercury__rbtree__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *mercury__rbtree__HeadVar__4_4 = base;
                MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K_2;
                MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V_3;
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__V_7_7));
                MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__V_8_8));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__rbtree__K0_9 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));
              MR_Box mercury__rbtree__V0_10 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));
              MR_Word mercury__rbtree__L0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
              MR_Word mercury__rbtree__R0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));
              MR_Word mercury__rbtree__Result_16;

              {
                mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_K_143, &mercury__rbtree__Result_16, mercury__rbtree__K_2, mercury__rbtree__K0_9);
              }
              switch (mercury__rbtree__Result_16) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word mercury__rbtree__NewL_17;

                    {
                      mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_p_0(mercury__rbtree__TypeInfo_for_K_143, mercury__rbtree__L0_11, mercury__rbtree__K_2, mercury__rbtree__V_3, &mercury__rbtree__NewL_17);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      *mercury__rbtree__HeadVar__4_4 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K0_9;
                      MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V0_10;
                      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__NewL_17));
                      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__R0_12));
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word mercury__rbtree__NewL_19;

                    {
                      mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_p_0(mercury__rbtree__TypeInfo_for_K_143, mercury__rbtree__L0_11, mercury__rbtree__K_2, mercury__rbtree__V_3, &mercury__rbtree__NewL_19);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      *mercury__rbtree__HeadVar__4_4 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K0_9;
                      MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V0_10;
                      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__NewL_19));
                      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__R0_12));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word mercury__rbtree__NewR_18;

                    {
                      mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_p_0(mercury__rbtree__TypeInfo_for_K_143, mercury__rbtree__R0_12, mercury__rbtree__K_2, mercury__rbtree__V_3, &mercury__rbtree__NewR_18);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      *mercury__rbtree__HeadVar__4_4 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K0_9;
                      MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V0_10;
                      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__L0_11));
                      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__NewR_18));
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Box mercury__rbtree__K0_20 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));
              MR_Box mercury__rbtree__V0_21 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));
              MR_Word mercury__rbtree__L0_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
              MR_Word mercury__rbtree__R0_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));
              MR_Box mercury__rbtree__LK_27;
              MR_Box mercury__rbtree__LV_28;
              MR_Word mercury__rbtree__LL_29;
              MR_Word mercury__rbtree__LR_30;
              MR_Box mercury__rbtree__RK_31;
              MR_Box mercury__rbtree__RV_32;
              MR_Word mercury__rbtree__RL_33;
              MR_Word mercury__rbtree__RR_34;

              mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__L0_22)) == (MR_mktag((MR_Integer) 1)));
              if (mercury__rbtree__succeeded)
                {
                  mercury__rbtree__LK_27 = (MR_hl_field(MR_mktag(1), mercury__rbtree__L0_22, (MR_Integer) 0));
                  mercury__rbtree__LV_28 = (MR_hl_field(MR_mktag(1), mercury__rbtree__L0_22, (MR_Integer) 1));
                  mercury__rbtree__LL_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__L0_22, (MR_Integer) 2)));
                  mercury__rbtree__LR_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__L0_22, (MR_Integer) 3)));
                  mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__R0_23)) == (MR_mktag((MR_Integer) 1)));
                  if (mercury__rbtree__succeeded)
                    {
                      mercury__rbtree__RK_31 = (MR_hl_field(MR_mktag(1), mercury__rbtree__R0_23, (MR_Integer) 0));
                      mercury__rbtree__RV_32 = (MR_hl_field(MR_mktag(1), mercury__rbtree__R0_23, (MR_Integer) 1));
                      mercury__rbtree__RL_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__R0_23, (MR_Integer) 2)));
                      mercury__rbtree__RR_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__R0_23, (MR_Integer) 3)));
                    }
                }
              if (mercury__rbtree__succeeded)
                {
                  MR_Word mercury__rbtree__L_35;
                  MR_Word mercury__rbtree__R_36;
                  MR_Word mercury__rbtree__Tree0_37;

                  {
                    mercury__rbtree__L_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), mercury__rbtree__L_35, 0) = mercury__rbtree__LK_27;
                    MR_hl_field(MR_mktag(2), mercury__rbtree__L_35, 1) = mercury__rbtree__LV_28;
                    MR_hl_field(MR_mktag(2), mercury__rbtree__L_35, 2) = ((MR_Box) (mercury__rbtree__LL_29));
                    MR_hl_field(MR_mktag(2), mercury__rbtree__L_35, 3) = ((MR_Box) (mercury__rbtree__LR_30));
                  }
                  {
                    mercury__rbtree__R_36 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), mercury__rbtree__R_36, 0) = mercury__rbtree__RK_31;
                    MR_hl_field(MR_mktag(2), mercury__rbtree__R_36, 1) = mercury__rbtree__RV_32;
                    MR_hl_field(MR_mktag(2), mercury__rbtree__R_36, 2) = ((MR_Box) (mercury__rbtree__RL_33));
                    MR_hl_field(MR_mktag(2), mercury__rbtree__R_36, 3) = ((MR_Box) (mercury__rbtree__RR_34));
                  }
                  {
                    mercury__rbtree__Tree0_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_37, 0) = mercury__rbtree__K0_20;
                    MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_37, 1) = mercury__rbtree__V0_21;
                    MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_37, 2) = ((MR_Box) (mercury__rbtree__L_35));
                    MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_37, 3) = ((MR_Box) (mercury__rbtree__R_36));
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__rbtree__HeadVar__1__tmp_copy_1 = mercury__rbtree__Tree0_37;

                    mercury__rbtree__HeadVar__1_1 = mercury__rbtree__HeadVar__1__tmp_copy_1;
                  }
                  continue;
                }
              else
                {
                  MR_Word mercury__rbtree__Result_38;

                  {
                    mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_K_143, &mercury__rbtree__Result_38, mercury__rbtree__K_2, mercury__rbtree__K0_20);
                  }
                  switch (mercury__rbtree__Result_38) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        MR_Word mercury__rbtree__NewL_39;
                        MR_Box mercury__rbtree__LK_65;
                        MR_Box mercury__rbtree__LV_66;
                        MR_Word mercury__rbtree__LL_67;
                        MR_Word mercury__rbtree__LR_68;

                        {
                          mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_p_0(mercury__rbtree__TypeInfo_for_K_143, mercury__rbtree__L0_22, mercury__rbtree__K_2, mercury__rbtree__V_3, &mercury__rbtree__NewL_39);
                        }
                        mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__NewL_39)) == (MR_mktag((MR_Integer) 1)));
                        if (mercury__rbtree__succeeded)
                          {
                            mercury__rbtree__LK_65 = (MR_hl_field(MR_mktag(1), mercury__rbtree__NewL_39, (MR_Integer) 0));
                            mercury__rbtree__LV_66 = (MR_hl_field(MR_mktag(1), mercury__rbtree__NewL_39, (MR_Integer) 1));
                            mercury__rbtree__LL_67 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__NewL_39, (MR_Integer) 2)));
                            mercury__rbtree__LR_68 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__NewL_39, (MR_Integer) 3)));
                            {
                              MR_Box mercury__rbtree___LLK1_40;
                              MR_Box mercury__rbtree___LLV1_41;
                              MR_Word mercury__rbtree___LLL1_42;
                              MR_Word mercury__rbtree___LLR1_43;

                              mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__LL_67)) == (MR_mktag((MR_Integer) 1)));
                              if (mercury__rbtree__succeeded)
                                {
                                  mercury__rbtree___LLK1_40 = (MR_hl_field(MR_mktag(1), mercury__rbtree__LL_67, (MR_Integer) 0));
                                  mercury__rbtree___LLV1_41 = (MR_hl_field(MR_mktag(1), mercury__rbtree__LL_67, (MR_Integer) 1));
                                  mercury__rbtree___LLL1_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__LL_67, (MR_Integer) 2)));
                                  mercury__rbtree___LLR1_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__LL_67, (MR_Integer) 3)));
                                  {
                                    MR_Word mercury__rbtree__TreeR_44;

                                    {
                                      mercury__rbtree__TreeR_44 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_44, 0) = mercury__rbtree__K0_20;
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_44, 1) = mercury__rbtree__V0_21;
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_44, 2) = ((MR_Box) (mercury__rbtree__LR_68));
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_44, 3) = ((MR_Box) (mercury__rbtree__R0_23));
                                    }
                                    {
                                      MR_Word base;
                                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                      *mercury__rbtree__HeadVar__4_4 = base;
                                      MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__LK_65;
                                      MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__LV_66;
                                      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__LL_67));
                                      MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__TreeR_44));
                                    }
                                  }
                                }
                              else
                                {
                                  MR_Box mercury__rbtree__LRK_45;
                                  MR_Box mercury__rbtree__LRV_46;
                                  MR_Word mercury__rbtree__LRL_47;
                                  MR_Word mercury__rbtree__LRR_48;

                                  mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__LR_68)) == (MR_mktag((MR_Integer) 1)));
                                  if (mercury__rbtree__succeeded)
                                    {
                                      mercury__rbtree__LRK_45 = (MR_hl_field(MR_mktag(1), mercury__rbtree__LR_68, (MR_Integer) 0));
                                      mercury__rbtree__LRV_46 = (MR_hl_field(MR_mktag(1), mercury__rbtree__LR_68, (MR_Integer) 1));
                                      mercury__rbtree__LRL_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__LR_68, (MR_Integer) 2)));
                                      mercury__rbtree__LRR_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__LR_68, (MR_Integer) 3)));
                                      {
                                        MR_Word mercury__rbtree__TreeL_49;
                                        MR_Word mercury__rbtree__TreeR_63;

                                        {
                                          mercury__rbtree__TreeL_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_49, 0) = mercury__rbtree__LK_65;
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_49, 1) = mercury__rbtree__LV_66;
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_49, 2) = ((MR_Box) (mercury__rbtree__LL_67));
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_49, 3) = ((MR_Box) (mercury__rbtree__LRL_47));
                                        }
                                        {
                                          mercury__rbtree__TreeR_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_63, 0) = mercury__rbtree__K0_20;
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_63, 1) = mercury__rbtree__V0_21;
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_63, 2) = ((MR_Box) (mercury__rbtree__LRR_48));
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_63, 3) = ((MR_Box) (mercury__rbtree__R0_23));
                                        }
                                        {
                                          MR_Word base;
                                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                          *mercury__rbtree__HeadVar__4_4 = base;
                                          MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__LRK_45;
                                          MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__LRV_46;
                                          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__TreeL_49));
                                          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__TreeR_63));
                                        }
                                      }
                                    }
                                  else
                                    {
                                      MR_Word base;
                                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                      *mercury__rbtree__HeadVar__4_4 = base;
                                      MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_20;
                                      MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_21;
                                      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__NewL_39));
                                      MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R0_23));
                                    }
                                }
                            }
                          }
                        else
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                            *mercury__rbtree__HeadVar__4_4 = base;
                            MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_20;
                            MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_21;
                            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__NewL_39));
                            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R0_23));
                          }
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_Word mercury__rbtree__NewL_120;
                        MR_Box mercury__rbtree__LK_106;
                        MR_Box mercury__rbtree__LV_107;
                        MR_Word mercury__rbtree__LL_108;
                        MR_Word mercury__rbtree__LR_109;

                        {
                          mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_p_0(mercury__rbtree__TypeInfo_for_K_143, mercury__rbtree__L0_22, mercury__rbtree__K_2, mercury__rbtree__V_3, &mercury__rbtree__NewL_120);
                        }
                        mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__NewL_120)) == (MR_mktag((MR_Integer) 1)));
                        if (mercury__rbtree__succeeded)
                          {
                            mercury__rbtree__LK_106 = (MR_hl_field(MR_mktag(1), mercury__rbtree__NewL_120, (MR_Integer) 0));
                            mercury__rbtree__LV_107 = (MR_hl_field(MR_mktag(1), mercury__rbtree__NewL_120, (MR_Integer) 1));
                            mercury__rbtree__LL_108 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__NewL_120, (MR_Integer) 2)));
                            mercury__rbtree__LR_109 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__NewL_120, (MR_Integer) 3)));
                            {
                              MR_Box mercury__rbtree___LLK2_59;
                              MR_Box mercury__rbtree___LLV2_60;
                              MR_Word mercury__rbtree___LLL2_61;
                              MR_Word mercury__rbtree___LLR2_62;

                              mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__LL_108)) == (MR_mktag((MR_Integer) 1)));
                              if (mercury__rbtree__succeeded)
                                {
                                  mercury__rbtree___LLK2_59 = (MR_hl_field(MR_mktag(1), mercury__rbtree__LL_108, (MR_Integer) 0));
                                  mercury__rbtree___LLV2_60 = (MR_hl_field(MR_mktag(1), mercury__rbtree__LL_108, (MR_Integer) 1));
                                  mercury__rbtree___LLL2_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__LL_108, (MR_Integer) 2)));
                                  mercury__rbtree___LLR2_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__LL_108, (MR_Integer) 3)));
                                  {
                                    MR_Word mercury__rbtree__TreeR_91;

                                    {
                                      mercury__rbtree__TreeR_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_91, 0) = mercury__rbtree__K0_20;
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_91, 1) = mercury__rbtree__V0_21;
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_91, 2) = ((MR_Box) (mercury__rbtree__LR_109));
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_91, 3) = ((MR_Box) (mercury__rbtree__R0_23));
                                    }
                                    {
                                      MR_Word base;
                                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                      *mercury__rbtree__HeadVar__4_4 = base;
                                      MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__LK_106;
                                      MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__LV_107;
                                      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__LL_108));
                                      MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__TreeR_91));
                                    }
                                  }
                                }
                              else
                                {
                                  MR_Box mercury__rbtree__LRK_95;
                                  MR_Box mercury__rbtree__LRV_96;
                                  MR_Word mercury__rbtree__LRL_97;
                                  MR_Word mercury__rbtree__LRR_98;

                                  mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__LR_109)) == (MR_mktag((MR_Integer) 1)));
                                  if (mercury__rbtree__succeeded)
                                    {
                                      mercury__rbtree__LRK_95 = (MR_hl_field(MR_mktag(1), mercury__rbtree__LR_109, (MR_Integer) 0));
                                      mercury__rbtree__LRV_96 = (MR_hl_field(MR_mktag(1), mercury__rbtree__LR_109, (MR_Integer) 1));
                                      mercury__rbtree__LRL_97 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__LR_109, (MR_Integer) 2)));
                                      mercury__rbtree__LRR_98 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__LR_109, (MR_Integer) 3)));
                                      {
                                        MR_Word mercury__rbtree__TreeR_92;
                                        MR_Word mercury__rbtree__TreeL_93;

                                        {
                                          mercury__rbtree__TreeL_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_93, 0) = mercury__rbtree__LK_106;
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_93, 1) = mercury__rbtree__LV_107;
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_93, 2) = ((MR_Box) (mercury__rbtree__LL_108));
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_93, 3) = ((MR_Box) (mercury__rbtree__LRL_97));
                                        }
                                        {
                                          mercury__rbtree__TreeR_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_92, 0) = mercury__rbtree__K0_20;
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_92, 1) = mercury__rbtree__V0_21;
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_92, 2) = ((MR_Box) (mercury__rbtree__LRR_98));
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_92, 3) = ((MR_Box) (mercury__rbtree__R0_23));
                                        }
                                        {
                                          MR_Word base;
                                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                          *mercury__rbtree__HeadVar__4_4 = base;
                                          MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__LRK_95;
                                          MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__LRV_96;
                                          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__TreeL_93));
                                          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__TreeR_92));
                                        }
                                      }
                                    }
                                  else
                                    {
                                      MR_Word base;
                                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                      *mercury__rbtree__HeadVar__4_4 = base;
                                      MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_20;
                                      MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_21;
                                      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__NewL_120));
                                      MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R0_23));
                                    }
                                }
                            }
                          }
                        else
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                            *mercury__rbtree__HeadVar__4_4 = base;
                            MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_20;
                            MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_21;
                            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__NewL_120));
                            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R0_23));
                          }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word mercury__rbtree__NewR_50;
                        MR_Box mercury__rbtree__RK_79;
                        MR_Box mercury__rbtree__RV_80;
                        MR_Word mercury__rbtree__RL_81;
                        MR_Word mercury__rbtree__RR_82;

                        {
                          mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_p_0(mercury__rbtree__TypeInfo_for_K_143, mercury__rbtree__R0_23, mercury__rbtree__K_2, mercury__rbtree__V_3, &mercury__rbtree__NewR_50);
                        }
                        mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__NewR_50)) == (MR_mktag((MR_Integer) 1)));
                        if (mercury__rbtree__succeeded)
                          {
                            mercury__rbtree__RK_79 = (MR_hl_field(MR_mktag(1), mercury__rbtree__NewR_50, (MR_Integer) 0));
                            mercury__rbtree__RV_80 = (MR_hl_field(MR_mktag(1), mercury__rbtree__NewR_50, (MR_Integer) 1));
                            mercury__rbtree__RL_81 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__NewR_50, (MR_Integer) 2)));
                            mercury__rbtree__RR_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__NewR_50, (MR_Integer) 3)));
                            {
                              MR_Box mercury__rbtree__RLK_51;
                              MR_Box mercury__rbtree__RLV_52;
                              MR_Word mercury__rbtree__RLL_53;
                              MR_Word mercury__rbtree__RLR_54;

                              mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__RL_81)) == (MR_mktag((MR_Integer) 1)));
                              if (mercury__rbtree__succeeded)
                                {
                                  mercury__rbtree__RLK_51 = (MR_hl_field(MR_mktag(1), mercury__rbtree__RL_81, (MR_Integer) 0));
                                  mercury__rbtree__RLV_52 = (MR_hl_field(MR_mktag(1), mercury__rbtree__RL_81, (MR_Integer) 1));
                                  mercury__rbtree__RLL_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__RL_81, (MR_Integer) 2)));
                                  mercury__rbtree__RLR_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__RL_81, (MR_Integer) 3)));
                                  {
                                    MR_Word mercury__rbtree__TreeR_73;
                                    MR_Word mercury__rbtree__TreeL_74;

                                    {
                                      mercury__rbtree__TreeL_74 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_74, 0) = mercury__rbtree__K0_20;
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_74, 1) = mercury__rbtree__V0_21;
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_74, 2) = ((MR_Box) (mercury__rbtree__L0_22));
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_74, 3) = ((MR_Box) (mercury__rbtree__RLL_53));
                                    }
                                    {
                                      mercury__rbtree__TreeR_73 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_73, 0) = mercury__rbtree__RK_79;
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_73, 1) = mercury__rbtree__RV_80;
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_73, 2) = ((MR_Box) (mercury__rbtree__RLR_54));
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_73, 3) = ((MR_Box) (mercury__rbtree__RR_82));
                                    }
                                    {
                                      MR_Word base;
                                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                      *mercury__rbtree__HeadVar__4_4 = base;
                                      MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__RLK_51;
                                      MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__RLV_52;
                                      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__TreeL_74));
                                      MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__TreeR_73));
                                    }
                                  }
                                }
                              else
                                {
                                  MR_Box mercury__rbtree___RRK_55;
                                  MR_Box mercury__rbtree___RRV_56;
                                  MR_Word mercury__rbtree___RRL_57;
                                  MR_Word mercury__rbtree___RRR_58;

                                  mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__RR_82)) == (MR_mktag((MR_Integer) 1)));
                                  if (mercury__rbtree__succeeded)
                                    {
                                      mercury__rbtree___RRK_55 = (MR_hl_field(MR_mktag(1), mercury__rbtree__RR_82, (MR_Integer) 0));
                                      mercury__rbtree___RRV_56 = (MR_hl_field(MR_mktag(1), mercury__rbtree__RR_82, (MR_Integer) 1));
                                      mercury__rbtree___RRL_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__RR_82, (MR_Integer) 2)));
                                      mercury__rbtree___RRR_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__RR_82, (MR_Integer) 3)));
                                      {
                                        MR_Word mercury__rbtree__TreeL_75;

                                        {
                                          mercury__rbtree__TreeL_75 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_75, 0) = mercury__rbtree__K0_20;
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_75, 1) = mercury__rbtree__V0_21;
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_75, 2) = ((MR_Box) (mercury__rbtree__L0_22));
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_75, 3) = ((MR_Box) (mercury__rbtree__RL_81));
                                        }
                                        {
                                          MR_Word base;
                                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                          *mercury__rbtree__HeadVar__4_4 = base;
                                          MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__RK_79;
                                          MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__RV_80;
                                          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__TreeL_75));
                                          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__RR_82));
                                        }
                                      }
                                    }
                                  else
                                    {
                                      MR_Word base;
                                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                      *mercury__rbtree__HeadVar__4_4 = base;
                                      MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_20;
                                      MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_21;
                                      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__L0_22));
                                      MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__NewR_50));
                                    }
                                }
                            }
                          }
                        else
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                            *mercury__rbtree__HeadVar__4_4 = base;
                            MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_20;
                            MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_21;
                            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__L0_22));
                            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__NewR_50));
                          }
                      }
                      break;
                  }
                }
            }
            break;
        }
      }
      break;
    }
}

static void MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_p_1(
  MR_Word mercury__rbtree__TypeInfo_for_K_104,
  MR_Word mercury__rbtree__HeadVar__1_1,
  MR_Box mercury__rbtree__K_2,
  MR_Box mercury__rbtree__V_3,
  MR_Word * mercury__rbtree__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__rbtree__succeeded;

        switch (MR_tag((MR_Word) mercury__rbtree__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word mercury__rbtree__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              MR_Word mercury__rbtree__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *mercury__rbtree__HeadVar__4_4 = base;
                MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K_2;
                MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V_3;
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__V_7_7));
                MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__V_8_8));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__rbtree__K0_9 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));
              MR_Box mercury__rbtree__V0_10 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));
              MR_Word mercury__rbtree__L0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
              MR_Word mercury__rbtree__R0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));
              MR_Word mercury__rbtree__Result_16;

              {
                mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_K_104, &mercury__rbtree__Result_16, mercury__rbtree__K_2, mercury__rbtree__K0_9);
              }
              switch (mercury__rbtree__Result_16) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 1:
                  {
                    MR_Word mercury__rbtree__NewL_17;

                    {
                      mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_p_1(mercury__rbtree__TypeInfo_for_K_104, mercury__rbtree__L0_11, mercury__rbtree__K_2, mercury__rbtree__V_3, &mercury__rbtree__NewL_17);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      *mercury__rbtree__HeadVar__4_4 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K0_9;
                      MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V0_10;
                      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__NewL_17));
                      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__R0_12));
                    }
                  }
                  break;
                case (MR_Integer) 0:
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    *mercury__rbtree__HeadVar__4_4 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K_2;
                    MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V_3;
                    MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__L0_11));
                    MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__R0_12));
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word mercury__rbtree__NewR_18;

                    {
                      mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_p_1(mercury__rbtree__TypeInfo_for_K_104, mercury__rbtree__R0_12, mercury__rbtree__K_2, mercury__rbtree__V_3, &mercury__rbtree__NewR_18);
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      *mercury__rbtree__HeadVar__4_4 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K0_9;
                      MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V0_10;
                      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__L0_11));
                      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__NewR_18));
                    }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Box mercury__rbtree__K0_19 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));
              MR_Box mercury__rbtree__V0_20 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));
              MR_Word mercury__rbtree__L0_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
              MR_Word mercury__rbtree__R0_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));
              MR_Box mercury__rbtree__LK_26;
              MR_Box mercury__rbtree__LV_27;
              MR_Word mercury__rbtree__LL_28;
              MR_Word mercury__rbtree__LR_29;
              MR_Box mercury__rbtree__RK_30;
              MR_Box mercury__rbtree__RV_31;
              MR_Word mercury__rbtree__RL_32;
              MR_Word mercury__rbtree__RR_33;

              mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__L0_21)) == (MR_mktag((MR_Integer) 1)));
              if (mercury__rbtree__succeeded)
                {
                  mercury__rbtree__LK_26 = (MR_hl_field(MR_mktag(1), mercury__rbtree__L0_21, (MR_Integer) 0));
                  mercury__rbtree__LV_27 = (MR_hl_field(MR_mktag(1), mercury__rbtree__L0_21, (MR_Integer) 1));
                  mercury__rbtree__LL_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__L0_21, (MR_Integer) 2)));
                  mercury__rbtree__LR_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__L0_21, (MR_Integer) 3)));
                  mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__R0_22)) == (MR_mktag((MR_Integer) 1)));
                  if (mercury__rbtree__succeeded)
                    {
                      mercury__rbtree__RK_30 = (MR_hl_field(MR_mktag(1), mercury__rbtree__R0_22, (MR_Integer) 0));
                      mercury__rbtree__RV_31 = (MR_hl_field(MR_mktag(1), mercury__rbtree__R0_22, (MR_Integer) 1));
                      mercury__rbtree__RL_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__R0_22, (MR_Integer) 2)));
                      mercury__rbtree__RR_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__R0_22, (MR_Integer) 3)));
                    }
                }
              if (mercury__rbtree__succeeded)
                {
                  MR_Word mercury__rbtree__L_34;
                  MR_Word mercury__rbtree__R_35;
                  MR_Word mercury__rbtree__Tree0_36;

                  {
                    mercury__rbtree__L_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), mercury__rbtree__L_34, 0) = mercury__rbtree__LK_26;
                    MR_hl_field(MR_mktag(2), mercury__rbtree__L_34, 1) = mercury__rbtree__LV_27;
                    MR_hl_field(MR_mktag(2), mercury__rbtree__L_34, 2) = ((MR_Box) (mercury__rbtree__LL_28));
                    MR_hl_field(MR_mktag(2), mercury__rbtree__L_34, 3) = ((MR_Box) (mercury__rbtree__LR_29));
                  }
                  {
                    mercury__rbtree__R_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), mercury__rbtree__R_35, 0) = mercury__rbtree__RK_30;
                    MR_hl_field(MR_mktag(2), mercury__rbtree__R_35, 1) = mercury__rbtree__RV_31;
                    MR_hl_field(MR_mktag(2), mercury__rbtree__R_35, 2) = ((MR_Box) (mercury__rbtree__RL_32));
                    MR_hl_field(MR_mktag(2), mercury__rbtree__R_35, 3) = ((MR_Box) (mercury__rbtree__RR_33));
                  }
                  {
                    mercury__rbtree__Tree0_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_36, 0) = mercury__rbtree__K0_19;
                    MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_36, 1) = mercury__rbtree__V0_20;
                    MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_36, 2) = ((MR_Box) (mercury__rbtree__L_34));
                    MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_36, 3) = ((MR_Box) (mercury__rbtree__R_35));
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__rbtree__HeadVar__1__tmp_copy_1 = mercury__rbtree__Tree0_36;

                    mercury__rbtree__HeadVar__1_1 = mercury__rbtree__HeadVar__1__tmp_copy_1;
                  }
                  continue;
                }
              else
                {
                  MR_Word mercury__rbtree__Result_37;

                  {
                    mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_K_104, &mercury__rbtree__Result_37, mercury__rbtree__K_2, mercury__rbtree__K0_19);
                  }
                  switch (mercury__rbtree__Result_37) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 1:
                      {
                        MR_Word mercury__rbtree__NewL_38;
                        MR_Box mercury__rbtree__LK_62;
                        MR_Box mercury__rbtree__LV_63;
                        MR_Word mercury__rbtree__LL_64;
                        MR_Word mercury__rbtree__LR_65;

                        {
                          mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_p_1(mercury__rbtree__TypeInfo_for_K_104, mercury__rbtree__L0_21, mercury__rbtree__K_2, mercury__rbtree__V_3, &mercury__rbtree__NewL_38);
                        }
                        mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__NewL_38)) == (MR_mktag((MR_Integer) 1)));
                        if (mercury__rbtree__succeeded)
                          {
                            mercury__rbtree__LK_62 = (MR_hl_field(MR_mktag(1), mercury__rbtree__NewL_38, (MR_Integer) 0));
                            mercury__rbtree__LV_63 = (MR_hl_field(MR_mktag(1), mercury__rbtree__NewL_38, (MR_Integer) 1));
                            mercury__rbtree__LL_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__NewL_38, (MR_Integer) 2)));
                            mercury__rbtree__LR_65 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__NewL_38, (MR_Integer) 3)));
                            {
                              MR_Box mercury__rbtree___LLK_39;
                              MR_Box mercury__rbtree___LLV_40;
                              MR_Word mercury__rbtree___LLL_41;
                              MR_Word mercury__rbtree___LLR_42;

                              mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__LL_64)) == (MR_mktag((MR_Integer) 1)));
                              if (mercury__rbtree__succeeded)
                                {
                                  mercury__rbtree___LLK_39 = (MR_hl_field(MR_mktag(1), mercury__rbtree__LL_64, (MR_Integer) 0));
                                  mercury__rbtree___LLV_40 = (MR_hl_field(MR_mktag(1), mercury__rbtree__LL_64, (MR_Integer) 1));
                                  mercury__rbtree___LLL_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__LL_64, (MR_Integer) 2)));
                                  mercury__rbtree___LLR_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__LL_64, (MR_Integer) 3)));
                                  {
                                    MR_Word mercury__rbtree__TreeR_43;

                                    {
                                      mercury__rbtree__TreeR_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_43, 0) = mercury__rbtree__K0_19;
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_43, 1) = mercury__rbtree__V0_20;
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_43, 2) = ((MR_Box) (mercury__rbtree__LR_65));
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_43, 3) = ((MR_Box) (mercury__rbtree__R0_22));
                                    }
                                    {
                                      MR_Word base;
                                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                      *mercury__rbtree__HeadVar__4_4 = base;
                                      MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__LK_62;
                                      MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__LV_63;
                                      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__LL_64));
                                      MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__TreeR_43));
                                    }
                                  }
                                }
                              else
                                {
                                  MR_Box mercury__rbtree__LRK_44;
                                  MR_Box mercury__rbtree__LRV_45;
                                  MR_Word mercury__rbtree__LRL_46;
                                  MR_Word mercury__rbtree__LRR_47;

                                  mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__LR_65)) == (MR_mktag((MR_Integer) 1)));
                                  if (mercury__rbtree__succeeded)
                                    {
                                      mercury__rbtree__LRK_44 = (MR_hl_field(MR_mktag(1), mercury__rbtree__LR_65, (MR_Integer) 0));
                                      mercury__rbtree__LRV_45 = (MR_hl_field(MR_mktag(1), mercury__rbtree__LR_65, (MR_Integer) 1));
                                      mercury__rbtree__LRL_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__LR_65, (MR_Integer) 2)));
                                      mercury__rbtree__LRR_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__LR_65, (MR_Integer) 3)));
                                      {
                                        MR_Word mercury__rbtree__TreeL_48;
                                        MR_Word mercury__rbtree__TreeR_60;

                                        {
                                          mercury__rbtree__TreeL_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_48, 0) = mercury__rbtree__LK_62;
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_48, 1) = mercury__rbtree__LV_63;
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_48, 2) = ((MR_Box) (mercury__rbtree__LL_64));
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_48, 3) = ((MR_Box) (mercury__rbtree__LRL_46));
                                        }
                                        {
                                          mercury__rbtree__TreeR_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_60, 0) = mercury__rbtree__K0_19;
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_60, 1) = mercury__rbtree__V0_20;
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_60, 2) = ((MR_Box) (mercury__rbtree__LRR_47));
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_60, 3) = ((MR_Box) (mercury__rbtree__R0_22));
                                        }
                                        {
                                          MR_Word base;
                                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                          *mercury__rbtree__HeadVar__4_4 = base;
                                          MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__LRK_44;
                                          MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__LRV_45;
                                          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__TreeL_48));
                                          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__TreeR_60));
                                        }
                                      }
                                    }
                                  else
                                    {
                                      MR_Word base;
                                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                      *mercury__rbtree__HeadVar__4_4 = base;
                                      MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_19;
                                      MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_20;
                                      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__NewL_38));
                                      MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R0_22));
                                    }
                                }
                            }
                          }
                        else
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                            *mercury__rbtree__HeadVar__4_4 = base;
                            MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_19;
                            MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_20;
                            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__NewL_38));
                            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R0_22));
                          }
                      }
                      break;
                    case (MR_Integer) 0:
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                        *mercury__rbtree__HeadVar__4_4 = base;
                        MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K_2;
                        MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V_3;
                        MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__L0_21));
                        MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R0_22));
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word mercury__rbtree__NewR_50;
                        MR_Box mercury__rbtree__RK_76;
                        MR_Box mercury__rbtree__RV_77;
                        MR_Word mercury__rbtree__RL_78;
                        MR_Word mercury__rbtree__RR_79;

                        {
                          mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_p_1(mercury__rbtree__TypeInfo_for_K_104, mercury__rbtree__R0_22, mercury__rbtree__K_2, mercury__rbtree__V_3, &mercury__rbtree__NewR_50);
                        }
                        mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__NewR_50)) == (MR_mktag((MR_Integer) 1)));
                        if (mercury__rbtree__succeeded)
                          {
                            mercury__rbtree__RK_76 = (MR_hl_field(MR_mktag(1), mercury__rbtree__NewR_50, (MR_Integer) 0));
                            mercury__rbtree__RV_77 = (MR_hl_field(MR_mktag(1), mercury__rbtree__NewR_50, (MR_Integer) 1));
                            mercury__rbtree__RL_78 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__NewR_50, (MR_Integer) 2)));
                            mercury__rbtree__RR_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__NewR_50, (MR_Integer) 3)));
                            {
                              MR_Box mercury__rbtree__RLK_51;
                              MR_Box mercury__rbtree__RLV_52;
                              MR_Word mercury__rbtree__RLL_53;
                              MR_Word mercury__rbtree__RLR_54;

                              mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__RL_78)) == (MR_mktag((MR_Integer) 1)));
                              if (mercury__rbtree__succeeded)
                                {
                                  mercury__rbtree__RLK_51 = (MR_hl_field(MR_mktag(1), mercury__rbtree__RL_78, (MR_Integer) 0));
                                  mercury__rbtree__RLV_52 = (MR_hl_field(MR_mktag(1), mercury__rbtree__RL_78, (MR_Integer) 1));
                                  mercury__rbtree__RLL_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__RL_78, (MR_Integer) 2)));
                                  mercury__rbtree__RLR_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__RL_78, (MR_Integer) 3)));
                                  {
                                    MR_Word mercury__rbtree__TreeR_70;
                                    MR_Word mercury__rbtree__TreeL_71;

                                    {
                                      mercury__rbtree__TreeL_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_71, 0) = mercury__rbtree__K0_19;
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_71, 1) = mercury__rbtree__V0_20;
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_71, 2) = ((MR_Box) (mercury__rbtree__L0_21));
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_71, 3) = ((MR_Box) (mercury__rbtree__RLL_53));
                                    }
                                    {
                                      mercury__rbtree__TreeR_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_70, 0) = mercury__rbtree__RK_76;
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_70, 1) = mercury__rbtree__RV_77;
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_70, 2) = ((MR_Box) (mercury__rbtree__RLR_54));
                                      MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_70, 3) = ((MR_Box) (mercury__rbtree__RR_79));
                                    }
                                    {
                                      MR_Word base;
                                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                      *mercury__rbtree__HeadVar__4_4 = base;
                                      MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__RLK_51;
                                      MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__RLV_52;
                                      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__TreeL_71));
                                      MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__TreeR_70));
                                    }
                                  }
                                }
                              else
                                {
                                  MR_Box mercury__rbtree___RRK_55;
                                  MR_Box mercury__rbtree___RRV_56;
                                  MR_Word mercury__rbtree___RRL_57;
                                  MR_Word mercury__rbtree___RRR_58;

                                  mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__RR_79)) == (MR_mktag((MR_Integer) 1)));
                                  if (mercury__rbtree__succeeded)
                                    {
                                      mercury__rbtree___RRK_55 = (MR_hl_field(MR_mktag(1), mercury__rbtree__RR_79, (MR_Integer) 0));
                                      mercury__rbtree___RRV_56 = (MR_hl_field(MR_mktag(1), mercury__rbtree__RR_79, (MR_Integer) 1));
                                      mercury__rbtree___RRL_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__RR_79, (MR_Integer) 2)));
                                      mercury__rbtree___RRR_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__RR_79, (MR_Integer) 3)));
                                      {
                                        MR_Word mercury__rbtree__TreeL_72;

                                        {
                                          mercury__rbtree__TreeL_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_72, 0) = mercury__rbtree__K0_19;
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_72, 1) = mercury__rbtree__V0_20;
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_72, 2) = ((MR_Box) (mercury__rbtree__L0_21));
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_72, 3) = ((MR_Box) (mercury__rbtree__RL_78));
                                        }
                                        {
                                          MR_Word base;
                                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                          *mercury__rbtree__HeadVar__4_4 = base;
                                          MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__RK_76;
                                          MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__RV_77;
                                          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__TreeL_72));
                                          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__RR_79));
                                        }
                                      }
                                    }
                                  else
                                    {
                                      MR_Word base;
                                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                      *mercury__rbtree__HeadVar__4_4 = base;
                                      MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_19;
                                      MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_20;
                                      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__L0_21));
                                      MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__NewR_50));
                                    }
                                }
                            }
                          }
                        else
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                            *mercury__rbtree__HeadVar__4_4 = base;
                            MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_19;
                            MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_20;
                            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__L0_21));
                            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__NewR_50));
                          }
                      }
                      break;
                  }
                }
            }
            break;
        }
      }
      break;
    }
}

static MR_bool MR_CALL 
mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_p_0(
  MR_Word mercury__rbtree__TypeInfo_for_K_102,
  MR_Word mercury__rbtree__HeadVar__1_1,
  MR_Box mercury__rbtree__K_2,
  MR_Box mercury__rbtree__V_3,
  MR_Word * mercury__rbtree__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__rbtree__succeeded;

        switch (MR_tag((MR_Word) mercury__rbtree__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word mercury__rbtree__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              MR_Word mercury__rbtree__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *mercury__rbtree__HeadVar__4_4 = base;
                MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K_2;
                MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V_3;
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__V_7_7));
                MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__V_8_8));
              }
              mercury__rbtree__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__rbtree__K0_9 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));
              MR_Box mercury__rbtree__V0_10 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));
              MR_Word mercury__rbtree__L0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
              MR_Word mercury__rbtree__R0_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));
              MR_Word mercury__rbtree__Result_16;

              {
                mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_K_102, &mercury__rbtree__Result_16, mercury__rbtree__K_2, mercury__rbtree__K0_9);
              }
              switch (mercury__rbtree__Result_16) {
                default:
                  mercury__rbtree__succeeded = MR_FALSE;
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word mercury__rbtree__NewL_17;

                    {
                      mercury__rbtree__succeeded = mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_p_0(mercury__rbtree__TypeInfo_for_K_102, mercury__rbtree__L0_11, mercury__rbtree__K_2, mercury__rbtree__V_3, &mercury__rbtree__NewL_17);
                    }
                    if (mercury__rbtree__succeeded)
                      {
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                          *mercury__rbtree__HeadVar__4_4 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K0_9;
                          MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V0_10;
                          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__NewL_17));
                          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__R0_12));
                        }
                        mercury__rbtree__succeeded = MR_TRUE;
                      }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word mercury__rbtree__NewR_18;

                    {
                      mercury__rbtree__succeeded = mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_p_0(mercury__rbtree__TypeInfo_for_K_102, mercury__rbtree__R0_12, mercury__rbtree__K_2, mercury__rbtree__V_3, &mercury__rbtree__NewR_18);
                    }
                    if (mercury__rbtree__succeeded)
                      {
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                          *mercury__rbtree__HeadVar__4_4 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K0_9;
                          MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V0_10;
                          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__L0_11));
                          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__NewR_18));
                        }
                        mercury__rbtree__succeeded = MR_TRUE;
                      }
                  }
                  break;
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Box mercury__rbtree__K0_19 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));
              MR_Box mercury__rbtree__V0_20 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));
              MR_Word mercury__rbtree__L0_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
              MR_Word mercury__rbtree__R0_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));
              MR_Box mercury__rbtree__LK_26;
              MR_Box mercury__rbtree__LV_27;
              MR_Word mercury__rbtree__LL_28;
              MR_Word mercury__rbtree__LR_29;
              MR_Box mercury__rbtree__RK_30;
              MR_Box mercury__rbtree__RV_31;
              MR_Word mercury__rbtree__RL_32;
              MR_Word mercury__rbtree__RR_33;

              mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__L0_21)) == (MR_mktag((MR_Integer) 1)));
              if (mercury__rbtree__succeeded)
                {
                  mercury__rbtree__LK_26 = (MR_hl_field(MR_mktag(1), mercury__rbtree__L0_21, (MR_Integer) 0));
                  mercury__rbtree__LV_27 = (MR_hl_field(MR_mktag(1), mercury__rbtree__L0_21, (MR_Integer) 1));
                  mercury__rbtree__LL_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__L0_21, (MR_Integer) 2)));
                  mercury__rbtree__LR_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__L0_21, (MR_Integer) 3)));
                  mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__R0_22)) == (MR_mktag((MR_Integer) 1)));
                  if (mercury__rbtree__succeeded)
                    {
                      mercury__rbtree__RK_30 = (MR_hl_field(MR_mktag(1), mercury__rbtree__R0_22, (MR_Integer) 0));
                      mercury__rbtree__RV_31 = (MR_hl_field(MR_mktag(1), mercury__rbtree__R0_22, (MR_Integer) 1));
                      mercury__rbtree__RL_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__R0_22, (MR_Integer) 2)));
                      mercury__rbtree__RR_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__R0_22, (MR_Integer) 3)));
                    }
                }
              if (mercury__rbtree__succeeded)
                {
                  MR_Word mercury__rbtree__L_34;
                  MR_Word mercury__rbtree__R_35;
                  MR_Word mercury__rbtree__Tree0_36;

                  {
                    mercury__rbtree__L_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), mercury__rbtree__L_34, 0) = mercury__rbtree__LK_26;
                    MR_hl_field(MR_mktag(2), mercury__rbtree__L_34, 1) = mercury__rbtree__LV_27;
                    MR_hl_field(MR_mktag(2), mercury__rbtree__L_34, 2) = ((MR_Box) (mercury__rbtree__LL_28));
                    MR_hl_field(MR_mktag(2), mercury__rbtree__L_34, 3) = ((MR_Box) (mercury__rbtree__LR_29));
                  }
                  {
                    mercury__rbtree__R_35 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), mercury__rbtree__R_35, 0) = mercury__rbtree__RK_30;
                    MR_hl_field(MR_mktag(2), mercury__rbtree__R_35, 1) = mercury__rbtree__RV_31;
                    MR_hl_field(MR_mktag(2), mercury__rbtree__R_35, 2) = ((MR_Box) (mercury__rbtree__RL_32));
                    MR_hl_field(MR_mktag(2), mercury__rbtree__R_35, 3) = ((MR_Box) (mercury__rbtree__RR_33));
                  }
                  {
                    mercury__rbtree__Tree0_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_36, 0) = mercury__rbtree__K0_19;
                    MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_36, 1) = mercury__rbtree__V0_20;
                    MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_36, 2) = ((MR_Box) (mercury__rbtree__L_34));
                    MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_36, 3) = ((MR_Box) (mercury__rbtree__R_35));
                  }
                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__rbtree__HeadVar__1__tmp_copy_1 = mercury__rbtree__Tree0_36;

                    mercury__rbtree__HeadVar__1_1 = mercury__rbtree__HeadVar__1__tmp_copy_1;
                  }
                  continue;
                }
              else
                {
                  MR_Word mercury__rbtree__Result_37;

                  {
                    mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_K_102, &mercury__rbtree__Result_37, mercury__rbtree__K_2, mercury__rbtree__K0_19);
                  }
                  switch (mercury__rbtree__Result_37) {
                    default:
                      mercury__rbtree__succeeded = MR_FALSE;
                      break;
                    case (MR_Integer) 1:
                      {
                        MR_Word mercury__rbtree__NewL_38;
                        MR_Box mercury__rbtree__LK_60;
                        MR_Box mercury__rbtree__LV_61;
                        MR_Word mercury__rbtree__LL_62;
                        MR_Word mercury__rbtree__LR_63;

                        {
                          mercury__rbtree__succeeded = mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_p_0(mercury__rbtree__TypeInfo_for_K_102, mercury__rbtree__L0_21, mercury__rbtree__K_2, mercury__rbtree__V_3, &mercury__rbtree__NewL_38);
                        }
                        if (mercury__rbtree__succeeded)
                          {
                            mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__NewL_38)) == (MR_mktag((MR_Integer) 1)));
                            if (mercury__rbtree__succeeded)
                              {
                                mercury__rbtree__LK_60 = (MR_hl_field(MR_mktag(1), mercury__rbtree__NewL_38, (MR_Integer) 0));
                                mercury__rbtree__LV_61 = (MR_hl_field(MR_mktag(1), mercury__rbtree__NewL_38, (MR_Integer) 1));
                                mercury__rbtree__LL_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__NewL_38, (MR_Integer) 2)));
                                mercury__rbtree__LR_63 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__NewL_38, (MR_Integer) 3)));
                                {
                                  MR_Box mercury__rbtree___LLK_39;
                                  MR_Box mercury__rbtree___LLV_40;
                                  MR_Word mercury__rbtree___LLL_41;
                                  MR_Word mercury__rbtree___LLR_42;

                                  mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__LL_62)) == (MR_mktag((MR_Integer) 1)));
                                  if (mercury__rbtree__succeeded)
                                    {
                                      mercury__rbtree___LLK_39 = (MR_hl_field(MR_mktag(1), mercury__rbtree__LL_62, (MR_Integer) 0));
                                      mercury__rbtree___LLV_40 = (MR_hl_field(MR_mktag(1), mercury__rbtree__LL_62, (MR_Integer) 1));
                                      mercury__rbtree___LLL_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__LL_62, (MR_Integer) 2)));
                                      mercury__rbtree___LLR_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__LL_62, (MR_Integer) 3)));
                                      {
                                        MR_Word mercury__rbtree__TreeR_43;

                                        {
                                          mercury__rbtree__TreeR_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_43, 0) = mercury__rbtree__K0_19;
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_43, 1) = mercury__rbtree__V0_20;
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_43, 2) = ((MR_Box) (mercury__rbtree__LR_63));
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_43, 3) = ((MR_Box) (mercury__rbtree__R0_22));
                                        }
                                        {
                                          MR_Word base;
                                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                          *mercury__rbtree__HeadVar__4_4 = base;
                                          MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__LK_60;
                                          MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__LV_61;
                                          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__LL_62));
                                          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__TreeR_43));
                                        }
                                      }
                                    }
                                  else
                                    {
                                      MR_Box mercury__rbtree__LRK_44;
                                      MR_Box mercury__rbtree__LRV_45;
                                      MR_Word mercury__rbtree__LRL_46;
                                      MR_Word mercury__rbtree__LRR_47;

                                      mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__LR_63)) == (MR_mktag((MR_Integer) 1)));
                                      if (mercury__rbtree__succeeded)
                                        {
                                          mercury__rbtree__LRK_44 = (MR_hl_field(MR_mktag(1), mercury__rbtree__LR_63, (MR_Integer) 0));
                                          mercury__rbtree__LRV_45 = (MR_hl_field(MR_mktag(1), mercury__rbtree__LR_63, (MR_Integer) 1));
                                          mercury__rbtree__LRL_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__LR_63, (MR_Integer) 2)));
                                          mercury__rbtree__LRR_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__LR_63, (MR_Integer) 3)));
                                          {
                                            MR_Word mercury__rbtree__TreeL_48;
                                            MR_Word mercury__rbtree__TreeR_58;

                                            {
                                              mercury__rbtree__TreeL_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                              MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_48, 0) = mercury__rbtree__LK_60;
                                              MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_48, 1) = mercury__rbtree__LV_61;
                                              MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_48, 2) = ((MR_Box) (mercury__rbtree__LL_62));
                                              MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_48, 3) = ((MR_Box) (mercury__rbtree__LRL_46));
                                            }
                                            {
                                              mercury__rbtree__TreeR_58 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                              MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_58, 0) = mercury__rbtree__K0_19;
                                              MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_58, 1) = mercury__rbtree__V0_20;
                                              MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_58, 2) = ((MR_Box) (mercury__rbtree__LRR_47));
                                              MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_58, 3) = ((MR_Box) (mercury__rbtree__R0_22));
                                            }
                                            {
                                              MR_Word base;
                                              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                              *mercury__rbtree__HeadVar__4_4 = base;
                                              MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__LRK_44;
                                              MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__LRV_45;
                                              MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__TreeL_48));
                                              MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__TreeR_58));
                                            }
                                          }
                                        }
                                      else
                                        {
                                          MR_Word base;
                                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                          *mercury__rbtree__HeadVar__4_4 = base;
                                          MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_19;
                                          MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_20;
                                          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__NewL_38));
                                          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R0_22));
                                        }
                                    }
                                }
                              }
                            else
                              {
                                MR_Word base;
                                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                *mercury__rbtree__HeadVar__4_4 = base;
                                MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_19;
                                MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_20;
                                MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__NewL_38));
                                MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R0_22));
                              }
                            mercury__rbtree__succeeded = MR_TRUE;
                          }
                      }
                      break;
                    case (MR_Integer) 2:
                      {
                        MR_Word mercury__rbtree__NewR_49;
                        MR_Box mercury__rbtree__RK_74;
                        MR_Box mercury__rbtree__RV_75;
                        MR_Word mercury__rbtree__RL_76;
                        MR_Word mercury__rbtree__RR_77;

                        {
                          mercury__rbtree__succeeded = mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_p_0(mercury__rbtree__TypeInfo_for_K_102, mercury__rbtree__R0_22, mercury__rbtree__K_2, mercury__rbtree__V_3, &mercury__rbtree__NewR_49);
                        }
                        if (mercury__rbtree__succeeded)
                          {
                            mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__NewR_49)) == (MR_mktag((MR_Integer) 1)));
                            if (mercury__rbtree__succeeded)
                              {
                                mercury__rbtree__RK_74 = (MR_hl_field(MR_mktag(1), mercury__rbtree__NewR_49, (MR_Integer) 0));
                                mercury__rbtree__RV_75 = (MR_hl_field(MR_mktag(1), mercury__rbtree__NewR_49, (MR_Integer) 1));
                                mercury__rbtree__RL_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__NewR_49, (MR_Integer) 2)));
                                mercury__rbtree__RR_77 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__NewR_49, (MR_Integer) 3)));
                                {
                                  MR_Box mercury__rbtree__RLK_50;
                                  MR_Box mercury__rbtree__RLV_51;
                                  MR_Word mercury__rbtree__RLL_52;
                                  MR_Word mercury__rbtree__RLR_53;

                                  mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__RL_76)) == (MR_mktag((MR_Integer) 1)));
                                  if (mercury__rbtree__succeeded)
                                    {
                                      mercury__rbtree__RLK_50 = (MR_hl_field(MR_mktag(1), mercury__rbtree__RL_76, (MR_Integer) 0));
                                      mercury__rbtree__RLV_51 = (MR_hl_field(MR_mktag(1), mercury__rbtree__RL_76, (MR_Integer) 1));
                                      mercury__rbtree__RLL_52 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__RL_76, (MR_Integer) 2)));
                                      mercury__rbtree__RLR_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__RL_76, (MR_Integer) 3)));
                                      {
                                        MR_Word mercury__rbtree__TreeR_68;
                                        MR_Word mercury__rbtree__TreeL_69;

                                        {
                                          mercury__rbtree__TreeL_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_69, 0) = mercury__rbtree__K0_19;
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_69, 1) = mercury__rbtree__V0_20;
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_69, 2) = ((MR_Box) (mercury__rbtree__L0_21));
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_69, 3) = ((MR_Box) (mercury__rbtree__RLL_52));
                                        }
                                        {
                                          mercury__rbtree__TreeR_68 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_68, 0) = mercury__rbtree__RK_74;
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_68, 1) = mercury__rbtree__RV_75;
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_68, 2) = ((MR_Box) (mercury__rbtree__RLR_53));
                                          MR_hl_field(MR_mktag(1), mercury__rbtree__TreeR_68, 3) = ((MR_Box) (mercury__rbtree__RR_77));
                                        }
                                        {
                                          MR_Word base;
                                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                          *mercury__rbtree__HeadVar__4_4 = base;
                                          MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__RLK_50;
                                          MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__RLV_51;
                                          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__TreeL_69));
                                          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__TreeR_68));
                                        }
                                      }
                                    }
                                  else
                                    {
                                      MR_Box mercury__rbtree___RRK_54;
                                      MR_Box mercury__rbtree___RRV_55;
                                      MR_Word mercury__rbtree___RRL_56;
                                      MR_Word mercury__rbtree___RRR_57;

                                      mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__RR_77)) == (MR_mktag((MR_Integer) 1)));
                                      if (mercury__rbtree__succeeded)
                                        {
                                          mercury__rbtree___RRK_54 = (MR_hl_field(MR_mktag(1), mercury__rbtree__RR_77, (MR_Integer) 0));
                                          mercury__rbtree___RRV_55 = (MR_hl_field(MR_mktag(1), mercury__rbtree__RR_77, (MR_Integer) 1));
                                          mercury__rbtree___RRL_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__RR_77, (MR_Integer) 2)));
                                          mercury__rbtree___RRR_57 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__RR_77, (MR_Integer) 3)));
                                          {
                                            MR_Word mercury__rbtree__TreeL_70;

                                            {
                                              mercury__rbtree__TreeL_70 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                              MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_70, 0) = mercury__rbtree__K0_19;
                                              MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_70, 1) = mercury__rbtree__V0_20;
                                              MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_70, 2) = ((MR_Box) (mercury__rbtree__L0_21));
                                              MR_hl_field(MR_mktag(1), mercury__rbtree__TreeL_70, 3) = ((MR_Box) (mercury__rbtree__RL_76));
                                            }
                                            {
                                              MR_Word base;
                                              base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                              *mercury__rbtree__HeadVar__4_4 = base;
                                              MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__RK_74;
                                              MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__RV_75;
                                              MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__TreeL_70));
                                              MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__RR_77));
                                            }
                                          }
                                        }
                                      else
                                        {
                                          MR_Word base;
                                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                          *mercury__rbtree__HeadVar__4_4 = base;
                                          MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_19;
                                          MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_20;
                                          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__L0_21));
                                          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__NewR_49));
                                        }
                                    }
                                }
                              }
                            else
                              {
                                MR_Word base;
                                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                                *mercury__rbtree__HeadVar__4_4 = base;
                                MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_19;
                                MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_20;
                                MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__L0_21));
                                MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__NewR_49));
                              }
                            mercury__rbtree__succeeded = MR_TRUE;
                          }
                      }
                      break;
                  }
                }
            }
            break;
        }
        return mercury__rbtree__succeeded;
      }
      break;
    }
}

void MR_CALL 
mercury__rbtree____Compare____rbtree_2_0(
  MR_Word mercury__rbtree__TypeInfo_for_K_60,
  MR_Word mercury__rbtree__TypeInfo_for_V_61,
  MR_Word * mercury__rbtree__HeadVar__1_1,
  MR_Word mercury__rbtree__HeadVar__2_2,
  MR_Word mercury__rbtree__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__rbtree__succeeded;
        MR_Integer mercury__rbtree__CastX_58 = (MR_Integer) mercury__rbtree__HeadVar__2_2;
        MR_Integer mercury__rbtree__CastY_59 = (MR_Integer) mercury__rbtree__HeadVar__3_3;

        mercury__rbtree__succeeded = (mercury__rbtree__CastX_58 == mercury__rbtree__CastY_59);
        if (mercury__rbtree__succeeded)
          *mercury__rbtree__HeadVar__1_1 = (MR_Integer) 0;
        else
          switch (MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) mercury__rbtree__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *mercury__rbtree__HeadVar__1_1 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 1:
                  *mercury__rbtree__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *mercury__rbtree__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word mercury__rbtree__V_74_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
                MR_Word mercury__rbtree__V_75_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
                MR_Box mercury__rbtree__V_76_76 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
                MR_Box mercury__rbtree__V_77_77 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));

                switch (MR_tag((MR_Word) mercury__rbtree__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__rbtree__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    {
                      MR_Box mercury__rbtree__V_20_20 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__3_3, (MR_Integer) 0));
                      MR_Box mercury__rbtree__V_21_21 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__3_3, (MR_Integer) 1));
                      MR_Word mercury__rbtree__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__3_3, (MR_Integer) 2)));
                      MR_Word mercury__rbtree__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__3_3, (MR_Integer) 3)));
                      MR_Word mercury__rbtree__V_24_24;

                      {
                        mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_K_60, &mercury__rbtree__V_24_24, mercury__rbtree__V_77_77, mercury__rbtree__V_20_20);
                      }
                      mercury__rbtree__succeeded = (mercury__rbtree__V_24_24 == (MR_Integer) 0);
                      mercury__rbtree__succeeded = !(mercury__rbtree__succeeded);
                      if (mercury__rbtree__succeeded)
                        *mercury__rbtree__HeadVar__1_1 = mercury__rbtree__V_24_24;
                      else
                        {
                          MR_Word mercury__rbtree__V_25_25;

                          {
                            mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_V_61, &mercury__rbtree__V_25_25, mercury__rbtree__V_76_76, mercury__rbtree__V_21_21);
                          }
                          mercury__rbtree__succeeded = (mercury__rbtree__V_25_25 == (MR_Integer) 0);
                          mercury__rbtree__succeeded = !(mercury__rbtree__succeeded);
                          if (mercury__rbtree__succeeded)
                            *mercury__rbtree__HeadVar__1_1 = mercury__rbtree__V_25_25;
                          else
                            {
                              MR_Word mercury__rbtree__V_26_26;

                              {
                                mercury__rbtree____Compare____rbtree_2_0(mercury__rbtree__TypeInfo_for_K_60, mercury__rbtree__TypeInfo_for_V_61, &mercury__rbtree__V_26_26, mercury__rbtree__V_75_75, mercury__rbtree__V_22_22);
                              }
                              mercury__rbtree__succeeded = (mercury__rbtree__V_26_26 == (MR_Integer) 0);
                              mercury__rbtree__succeeded = !(mercury__rbtree__succeeded);
                              if (mercury__rbtree__succeeded)
                                *mercury__rbtree__HeadVar__1_1 = mercury__rbtree__V_26_26;
                              else
                                {
                                  /* direct tailcall eliminated */
                                  {
                                    MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__V_74_74;
                                    MR_Word mercury__rbtree__HeadVar__3__tmp_copy_3 = mercury__rbtree__V_23_23;

                                    mercury__rbtree__HeadVar__3_3 = mercury__rbtree__HeadVar__3__tmp_copy_3;
                                    mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
                                  }
                                  continue;
                                }
                            }
                        }
                    }
                    break;
                  case (MR_Integer) 2:
                    *mercury__rbtree__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word mercury__rbtree__V_70_70 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
                MR_Word mercury__rbtree__V_71_71 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
                MR_Box mercury__rbtree__V_72_72 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
                MR_Box mercury__rbtree__V_73_73 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));

                switch (MR_tag((MR_Word) mercury__rbtree__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__rbtree__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mercury__rbtree__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    {
                      MR_Box mercury__rbtree__V_51_51 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, (MR_Integer) 0));
                      MR_Box mercury__rbtree__V_52_52 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, (MR_Integer) 1));
                      MR_Word mercury__rbtree__V_53_53 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, (MR_Integer) 2)));
                      MR_Word mercury__rbtree__V_54_54 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, (MR_Integer) 3)));
                      MR_Word mercury__rbtree__V_55_55;

                      {
                        mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_K_60, &mercury__rbtree__V_55_55, mercury__rbtree__V_73_73, mercury__rbtree__V_51_51);
                      }
                      mercury__rbtree__succeeded = (mercury__rbtree__V_55_55 == (MR_Integer) 0);
                      mercury__rbtree__succeeded = !(mercury__rbtree__succeeded);
                      if (mercury__rbtree__succeeded)
                        *mercury__rbtree__HeadVar__1_1 = mercury__rbtree__V_55_55;
                      else
                        {
                          MR_Word mercury__rbtree__V_56_56;

                          {
                            mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_V_61, &mercury__rbtree__V_56_56, mercury__rbtree__V_72_72, mercury__rbtree__V_52_52);
                          }
                          mercury__rbtree__succeeded = (mercury__rbtree__V_56_56 == (MR_Integer) 0);
                          mercury__rbtree__succeeded = !(mercury__rbtree__succeeded);
                          if (mercury__rbtree__succeeded)
                            *mercury__rbtree__HeadVar__1_1 = mercury__rbtree__V_56_56;
                          else
                            {
                              MR_Word mercury__rbtree__V_57_57;

                              {
                                mercury__rbtree____Compare____rbtree_2_0(mercury__rbtree__TypeInfo_for_K_60, mercury__rbtree__TypeInfo_for_V_61, &mercury__rbtree__V_57_57, mercury__rbtree__V_71_71, mercury__rbtree__V_53_53);
                              }
                              mercury__rbtree__succeeded = (mercury__rbtree__V_57_57 == (MR_Integer) 0);
                              mercury__rbtree__succeeded = !(mercury__rbtree__succeeded);
                              if (mercury__rbtree__succeeded)
                                *mercury__rbtree__HeadVar__1_1 = mercury__rbtree__V_57_57;
                              else
                                {
                                  /* direct tailcall eliminated */
                                  {
                                    MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__V_70_70;
                                    MR_Word mercury__rbtree__HeadVar__3__tmp_copy_3 = mercury__rbtree__V_54_54;

                                    mercury__rbtree__HeadVar__3_3 = mercury__rbtree__HeadVar__3__tmp_copy_3;
                                    mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
                                  }
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
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__rbtree____Unify____rbtree_2_0(
  MR_Word mercury__rbtree__TypeInfo_for_K_23,
  MR_Word mercury__rbtree__TypeInfo_for_V_24,
  MR_Word mercury__rbtree__HeadVar__1_1,
  MR_Word mercury__rbtree__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__rbtree__succeeded;
        MR_Integer mercury__rbtree__CastX_21 = (MR_Integer) mercury__rbtree__HeadVar__1_1;
        MR_Integer mercury__rbtree__CastY_22 = (MR_Integer) mercury__rbtree__HeadVar__2_2;

        mercury__rbtree__succeeded = (mercury__rbtree__CastX_21 == mercury__rbtree__CastY_22);
        if (mercury__rbtree__succeeded)
          mercury__rbtree__succeeded = MR_TRUE;
        else
          switch (MR_tag((MR_Word) mercury__rbtree__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer mercury__rbtree__CastX_3 = (MR_Integer) mercury__rbtree__HeadVar__1_1;
                MR_Integer mercury__rbtree__CastY_4 = (MR_Integer) mercury__rbtree__HeadVar__2_2;

                mercury__rbtree__succeeded = (mercury__rbtree__CastY_4 == mercury__rbtree__CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Box mercury__rbtree__V_5_5 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));
                MR_Box mercury__rbtree__V_6_6 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));
                MR_Word mercury__rbtree__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
                MR_Word mercury__rbtree__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));
                MR_Box mercury__rbtree__V_9_9;
                MR_Box mercury__rbtree__V_10_10;
                MR_Word mercury__rbtree__V_11_11;
                MR_Word mercury__rbtree__V_12_12;

                mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
                if (mercury__rbtree__succeeded)
                  {
                    mercury__rbtree__V_9_9 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
                    mercury__rbtree__V_10_10 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
                    mercury__rbtree__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
                    mercury__rbtree__V_12_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
                    {
                      mercury__rbtree__succeeded = mercury__builtin__unify_2_p_0(mercury__rbtree__TypeInfo_for_K_23, mercury__rbtree__V_5_5, mercury__rbtree__V_9_9);
                    }
                    if (mercury__rbtree__succeeded)
                      {
                        {
                          mercury__rbtree__succeeded = mercury__builtin__unify_2_p_0(mercury__rbtree__TypeInfo_for_V_24, mercury__rbtree__V_6_6, mercury__rbtree__V_10_10);
                        }
                        if (mercury__rbtree__succeeded)
                          {
                            {
                              mercury__rbtree__succeeded = mercury__rbtree____Unify____rbtree_2_0(mercury__rbtree__TypeInfo_for_K_23, mercury__rbtree__TypeInfo_for_V_24, mercury__rbtree__V_7_7, mercury__rbtree__V_11_11);
                            }
                            if (mercury__rbtree__succeeded)
                              {
                                /* direct tailcall eliminated */
                                {
                                  MR_Word mercury__rbtree__HeadVar__1__tmp_copy_1 = mercury__rbtree__V_8_8;
                                  MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__V_12_12;

                                  mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
                                  mercury__rbtree__HeadVar__1_1 = mercury__rbtree__HeadVar__1__tmp_copy_1;
                                }
                                continue;
                              }
                          }
                      }
                  }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Box mercury__rbtree__V_13_13 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));
                MR_Box mercury__rbtree__V_14_14 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));
                MR_Word mercury__rbtree__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
                MR_Word mercury__rbtree__V_16_16 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));
                MR_Box mercury__rbtree__V_17_17;
                MR_Box mercury__rbtree__V_18_18;
                MR_Word mercury__rbtree__V_19_19;
                MR_Word mercury__rbtree__V_20_20;

                mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
                if (mercury__rbtree__succeeded)
                  {
                    mercury__rbtree__V_17_17 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
                    mercury__rbtree__V_18_18 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
                    mercury__rbtree__V_19_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
                    mercury__rbtree__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
                    {
                      mercury__rbtree__succeeded = mercury__builtin__unify_2_p_0(mercury__rbtree__TypeInfo_for_K_23, mercury__rbtree__V_13_13, mercury__rbtree__V_17_17);
                    }
                    if (mercury__rbtree__succeeded)
                      {
                        {
                          mercury__rbtree__succeeded = mercury__builtin__unify_2_p_0(mercury__rbtree__TypeInfo_for_V_24, mercury__rbtree__V_14_14, mercury__rbtree__V_18_18);
                        }
                        if (mercury__rbtree__succeeded)
                          {
                            {
                              mercury__rbtree__succeeded = mercury__rbtree____Unify____rbtree_2_0(mercury__rbtree__TypeInfo_for_K_23, mercury__rbtree__TypeInfo_for_V_24, mercury__rbtree__V_15_15, mercury__rbtree__V_19_19);
                            }
                            if (mercury__rbtree__succeeded)
                              {
                                /* direct tailcall eliminated */
                                {
                                  MR_Word mercury__rbtree__HeadVar__1__tmp_copy_1 = mercury__rbtree__V_16_16;
                                  MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__V_20_20;

                                  mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
                                  mercury__rbtree__HeadVar__1_1 = mercury__rbtree__HeadVar__1__tmp_copy_1;
                                }
                                continue;
                              }
                          }
                      }
                  }
              }
              break;
          }
        return mercury__rbtree__succeeded;
      }
      break;
    }
}

void MR_CALL 
mercury__rbtree__delete_2_5_p_1(
  MR_Word mercury__rbtree__TypeInfo_for_K_43,
  MR_Word mercury__rbtree__TypeInfo_for_V_44,
  MR_Word mercury__rbtree__HeadVar__1_1,
  MR_Box mercury__rbtree__HeadVar__2_2,
  MR_Word mercury__rbtree__HeadVar__3_3,
  MR_Word * mercury__rbtree__HeadVar__4_4,
  MR_Word * mercury__rbtree__HeadVar__5_5)
{
  {
    MR_bool mercury__rbtree__succeeded;

    {
      mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_p_1(mercury__rbtree__TypeInfo_for_K_43, mercury__rbtree__TypeInfo_for_V_44, mercury__rbtree__HeadVar__1_1, mercury__rbtree__HeadVar__2_2, mercury__rbtree__HeadVar__4_4, mercury__rbtree__HeadVar__5_5);
    }
  }
}

MR_bool MR_CALL 
mercury__rbtree__delete_2_5_p_0(
  MR_Word mercury__rbtree__TypeInfo_for_K_43,
  MR_Word mercury__rbtree__TypeInfo_for_V_44,
  MR_Word mercury__rbtree__HeadVar__1_1,
  MR_Box mercury__rbtree__HeadVar__2_2,
  MR_Word mercury__rbtree__HeadVar__3_3,
  MR_Word * mercury__rbtree__HeadVar__4_4,
  MR_Word * mercury__rbtree__HeadVar__5_5)
{
  {
    MR_bool mercury__rbtree__succeeded;

    switch (MR_tag((MR_Word) mercury__rbtree__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          mercury__rbtree__succeeded = (mercury__rbtree__HeadVar__3_3 == (MR_Integer) 0);
          if (mercury__rbtree__succeeded)
            {
              *mercury__rbtree__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              *mercury__rbtree__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              mercury__rbtree__succeeded = MR_TRUE;
            }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box mercury__rbtree__K0_7 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));
          MR_Box mercury__rbtree__V0_8 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));
          MR_Word mercury__rbtree__L_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
          MR_Word mercury__rbtree__R_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));
          MR_Word mercury__rbtree__Result_15;

          {
            mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_K_43, &mercury__rbtree__Result_15, mercury__rbtree__HeadVar__2_2, mercury__rbtree__K0_7);
          }
          switch (mercury__rbtree__Result_15) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word mercury__rbtree__NewL_23;

                {
                  mercury__rbtree__succeeded = mercury__rbtree__delete_2_5_p_0(mercury__rbtree__TypeInfo_for_K_43, mercury__rbtree__TypeInfo_for_V_44, mercury__rbtree__L_9, mercury__rbtree__HeadVar__2_2, mercury__rbtree__HeadVar__3_3, mercury__rbtree__HeadVar__4_4, &mercury__rbtree__NewL_23);
                }
                if (mercury__rbtree__succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      *mercury__rbtree__HeadVar__5_5 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K0_7;
                      MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V0_8;
                      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__NewL_23));
                      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__R_10));
                    }
                    mercury__rbtree__succeeded = MR_TRUE;
                  }
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Box mercury__rbtree__NewK_16;
                MR_Box mercury__rbtree__NewV_17;
                MR_Word mercury__rbtree__NewL_18;

                {
                  mercury__rbtree__succeeded = mercury__rbtree__remove_largest_4_p_0(mercury__rbtree__TypeInfo_for_K_43, mercury__rbtree__TypeInfo_for_V_44, &mercury__rbtree__NewK_16, &mercury__rbtree__NewV_17, mercury__rbtree__L_9, &mercury__rbtree__NewL_18);
                }
                if (mercury__rbtree__succeeded)
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    *mercury__rbtree__HeadVar__5_5 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__NewK_16;
                    MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__NewV_17;
                    MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__NewL_18));
                    MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__R_10));
                  }
                else
                  {
                    MR_Word mercury__rbtree__NewR_19;
                    MR_Box mercury__rbtree__NewK_21;
                    MR_Box mercury__rbtree__NewV_22;

                    {
                      mercury__rbtree__succeeded = mercury__rbtree__remove_smallest_4_p_0(mercury__rbtree__TypeInfo_for_K_43, mercury__rbtree__TypeInfo_for_V_44, &mercury__rbtree__NewK_21, &mercury__rbtree__NewV_22, mercury__rbtree__R_10, &mercury__rbtree__NewR_19);
                    }
                    if (mercury__rbtree__succeeded)
                      {
                        MR_Word mercury__rbtree__V_20_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                          *mercury__rbtree__HeadVar__5_5 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__NewK_21;
                          MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__NewV_22;
                          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__V_20_20));
                          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__NewR_19));
                        }
                      }
                    else
                      *mercury__rbtree__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__rbtree__HeadVar__4_4 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__V0_8;
                }
                mercury__rbtree__succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word mercury__rbtree__NewR_24;

                {
                  mercury__rbtree__succeeded = mercury__rbtree__delete_2_5_p_0(mercury__rbtree__TypeInfo_for_K_43, mercury__rbtree__TypeInfo_for_V_44, mercury__rbtree__R_10, mercury__rbtree__HeadVar__2_2, mercury__rbtree__HeadVar__3_3, mercury__rbtree__HeadVar__4_4, &mercury__rbtree__NewR_24);
                }
                if (mercury__rbtree__succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      *mercury__rbtree__HeadVar__5_5 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K0_7;
                      MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V0_8;
                      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__L_9));
                      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__NewR_24));
                    }
                    mercury__rbtree__succeeded = MR_TRUE;
                  }
              }
              break;
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box mercury__rbtree__K0_25 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));
          MR_Box mercury__rbtree__V0_26 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));
          MR_Word mercury__rbtree__L_27 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
          MR_Word mercury__rbtree__R_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));
          MR_Word mercury__rbtree__Result_33;

          {
            mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_K_43, &mercury__rbtree__Result_33, mercury__rbtree__HeadVar__2_2, mercury__rbtree__K0_25);
          }
          switch (mercury__rbtree__Result_33) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 1:
              {
                MR_Word mercury__rbtree__NewL_41;

                {
                  mercury__rbtree__succeeded = mercury__rbtree__delete_2_5_p_0(mercury__rbtree__TypeInfo_for_K_43, mercury__rbtree__TypeInfo_for_V_44, mercury__rbtree__L_27, mercury__rbtree__HeadVar__2_2, mercury__rbtree__HeadVar__3_3, mercury__rbtree__HeadVar__4_4, &mercury__rbtree__NewL_41);
                }
                if (mercury__rbtree__succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      *mercury__rbtree__HeadVar__5_5 = base;
                      MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_25;
                      MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_26;
                      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__NewL_41));
                      MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R_28));
                    }
                    mercury__rbtree__succeeded = MR_TRUE;
                  }
              }
              break;
            case (MR_Integer) 0:
              {
                MR_Box mercury__rbtree__NewK_34;
                MR_Box mercury__rbtree__NewV_35;
                MR_Word mercury__rbtree__NewL_36;

                {
                  mercury__rbtree__succeeded = mercury__rbtree__remove_largest_4_p_0(mercury__rbtree__TypeInfo_for_K_43, mercury__rbtree__TypeInfo_for_V_44, &mercury__rbtree__NewK_34, &mercury__rbtree__NewV_35, mercury__rbtree__L_27, &mercury__rbtree__NewL_36);
                }
                if (mercury__rbtree__succeeded)
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    *mercury__rbtree__HeadVar__5_5 = base;
                    MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__NewK_34;
                    MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__NewV_35;
                    MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__NewL_36));
                    MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R_28));
                  }
                else
                  {
                    MR_Word mercury__rbtree__NewR_37;
                    MR_Box mercury__rbtree__NewK_39;
                    MR_Box mercury__rbtree__NewV_40;

                    {
                      mercury__rbtree__succeeded = mercury__rbtree__remove_smallest_4_p_0(mercury__rbtree__TypeInfo_for_K_43, mercury__rbtree__TypeInfo_for_V_44, &mercury__rbtree__NewK_39, &mercury__rbtree__NewV_40, mercury__rbtree__R_28, &mercury__rbtree__NewR_37);
                    }
                    if (mercury__rbtree__succeeded)
                      {
                        MR_Word mercury__rbtree__V_38_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                          *mercury__rbtree__HeadVar__5_5 = base;
                          MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__NewK_39;
                          MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__NewV_40;
                          MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__V_38_38));
                          MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__NewR_37));
                        }
                      }
                    else
                      *mercury__rbtree__HeadVar__5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__rbtree__HeadVar__4_4 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__V0_26;
                }
                mercury__rbtree__succeeded = MR_TRUE;
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word mercury__rbtree__NewR_42;

                {
                  mercury__rbtree__succeeded = mercury__rbtree__delete_2_5_p_0(mercury__rbtree__TypeInfo_for_K_43, mercury__rbtree__TypeInfo_for_V_44, mercury__rbtree__R_28, mercury__rbtree__HeadVar__2_2, mercury__rbtree__HeadVar__3_3, mercury__rbtree__HeadVar__4_4, &mercury__rbtree__NewR_42);
                }
                if (mercury__rbtree__succeeded)
                  {
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      *mercury__rbtree__HeadVar__5_5 = base;
                      MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_25;
                      MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_26;
                      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__L_27));
                      MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__NewR_42));
                    }
                    mercury__rbtree__succeeded = MR_TRUE;
                  }
              }
              break;
          }
        }
        break;
    }
    return mercury__rbtree__succeeded;
  }
}

MR_bool MR_CALL 
mercury__rbtree__map_values_3_p_1(
  MR_Word mercury__rbtree__TypeInfo_for_K_25,
  MR_Word mercury__rbtree__TypeInfo_for_V_26,
  MR_Word mercury__rbtree__TypeInfo_for_W_27,
  MR_Word mercury__rbtree__HeadVar__1_1,
  MR_Word mercury__rbtree__HeadVar__2_2,
  MR_Word * mercury__rbtree__HeadVar__3_3)
{
  {
    MR_bool mercury__rbtree__succeeded;

    switch (MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *mercury__rbtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          mercury__rbtree__succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Box mercury__rbtree__K0_8 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
          MR_Box mercury__rbtree__V0_9 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
          MR_Word mercury__rbtree__Left0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
          MR_Word mercury__rbtree__Right0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
          MR_Box mercury__rbtree__W0_12;
          MR_Word mercury__rbtree__Left_13;
          MR_Word mercury__rbtree__Right_14;
          MR_bool MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1)));

          {
            mercury__rbtree__succeeded = mercury__rbtree__func_1(((MR_Box) mercury__rbtree__HeadVar__1_1), mercury__rbtree__K0_8, mercury__rbtree__V0_9, &mercury__rbtree__W0_12);
          }
          if (mercury__rbtree__succeeded)
            {
              {
                mercury__rbtree__succeeded = mercury__rbtree__map_values_3_p_1(mercury__rbtree__TypeInfo_for_K_25, mercury__rbtree__TypeInfo_for_V_26, mercury__rbtree__TypeInfo_for_W_27, mercury__rbtree__HeadVar__1_1, mercury__rbtree__Left0_10, &mercury__rbtree__Left_13);
              }
              if (mercury__rbtree__succeeded)
                {
                  {
                    mercury__rbtree__succeeded = mercury__rbtree__map_values_3_p_1(mercury__rbtree__TypeInfo_for_K_25, mercury__rbtree__TypeInfo_for_V_26, mercury__rbtree__TypeInfo_for_W_27, mercury__rbtree__HeadVar__1_1, mercury__rbtree__Right0_11, &mercury__rbtree__Right_14);
                  }
                  if (mercury__rbtree__succeeded)
                    {
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                        *mercury__rbtree__HeadVar__3_3 = base;
                        MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K0_8;
                        MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__W0_12;
                        MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__Left_13));
                        MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__Right_14));
                      }
                      mercury__rbtree__succeeded = MR_TRUE;
                    }
                }
            }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box mercury__rbtree__K0_18 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
          MR_Box mercury__rbtree__V0_19 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
          MR_Word mercury__rbtree__Left0_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
          MR_Word mercury__rbtree__Right0_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
          MR_Box mercury__rbtree__W0_22;
          MR_Word mercury__rbtree__Left_23;
          MR_Word mercury__rbtree__Right_24;
          MR_bool MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1)));

          {
            mercury__rbtree__succeeded = mercury__rbtree__func_0(((MR_Box) mercury__rbtree__HeadVar__1_1), mercury__rbtree__K0_18, mercury__rbtree__V0_19, &mercury__rbtree__W0_22);
          }
          if (mercury__rbtree__succeeded)
            {
              {
                mercury__rbtree__succeeded = mercury__rbtree__map_values_3_p_1(mercury__rbtree__TypeInfo_for_K_25, mercury__rbtree__TypeInfo_for_V_26, mercury__rbtree__TypeInfo_for_W_27, mercury__rbtree__HeadVar__1_1, mercury__rbtree__Left0_20, &mercury__rbtree__Left_23);
              }
              if (mercury__rbtree__succeeded)
                {
                  {
                    mercury__rbtree__succeeded = mercury__rbtree__map_values_3_p_1(mercury__rbtree__TypeInfo_for_K_25, mercury__rbtree__TypeInfo_for_V_26, mercury__rbtree__TypeInfo_for_W_27, mercury__rbtree__HeadVar__1_1, mercury__rbtree__Right0_21, &mercury__rbtree__Right_24);
                  }
                  if (mercury__rbtree__succeeded)
                    {
                      {
                        MR_Word base;
                        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                        *mercury__rbtree__HeadVar__3_3 = base;
                        MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_18;
                        MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__W0_22;
                        MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__Left_23));
                        MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__Right_24));
                      }
                      mercury__rbtree__succeeded = MR_TRUE;
                    }
                }
            }
        }
        break;
    }
    return mercury__rbtree__succeeded;
  }
}

void MR_CALL 
mercury__rbtree__map_values_3_p_0(
  MR_Word mercury__rbtree__TypeInfo_for_K_25,
  MR_Word mercury__rbtree__TypeInfo_for_V_26,
  MR_Word mercury__rbtree__TypeInfo_for_W_27,
  MR_Word mercury__rbtree__HeadVar__1_1,
  MR_Word mercury__rbtree__HeadVar__2_2,
  MR_Word * mercury__rbtree__HeadVar__3_3)
{
  {
    MR_bool mercury__rbtree__succeeded;

    switch (MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *mercury__rbtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Box mercury__rbtree__K0_8 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
          MR_Box mercury__rbtree__V0_9 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
          MR_Word mercury__rbtree__Left0_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
          MR_Word mercury__rbtree__Right0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
          MR_Box mercury__rbtree__W0_12;
          MR_Word mercury__rbtree__Left_13;
          MR_Word mercury__rbtree__Right_14;
          void MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1)));

          {
            mercury__rbtree__func_1(((MR_Box) mercury__rbtree__HeadVar__1_1), mercury__rbtree__K0_8, mercury__rbtree__V0_9, &mercury__rbtree__W0_12);
          }
          {
            mercury__rbtree__map_values_3_p_0(mercury__rbtree__TypeInfo_for_K_25, mercury__rbtree__TypeInfo_for_V_26, mercury__rbtree__TypeInfo_for_W_27, mercury__rbtree__HeadVar__1_1, mercury__rbtree__Left0_10, &mercury__rbtree__Left_13);
          }
          {
            mercury__rbtree__map_values_3_p_0(mercury__rbtree__TypeInfo_for_K_25, mercury__rbtree__TypeInfo_for_V_26, mercury__rbtree__TypeInfo_for_W_27, mercury__rbtree__HeadVar__1_1, mercury__rbtree__Right0_11, &mercury__rbtree__Right_14);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *mercury__rbtree__HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K0_8;
            MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__W0_12;
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__Left_13));
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__Right_14));
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box mercury__rbtree__K0_18 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
          MR_Box mercury__rbtree__V0_19 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
          MR_Word mercury__rbtree__Left0_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
          MR_Word mercury__rbtree__Right0_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
          MR_Box mercury__rbtree__W0_22;
          MR_Word mercury__rbtree__Left_23;
          MR_Word mercury__rbtree__Right_24;
          void MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1)));

          {
            mercury__rbtree__func_0(((MR_Box) mercury__rbtree__HeadVar__1_1), mercury__rbtree__K0_18, mercury__rbtree__V0_19, &mercury__rbtree__W0_22);
          }
          {
            mercury__rbtree__map_values_3_p_0(mercury__rbtree__TypeInfo_for_K_25, mercury__rbtree__TypeInfo_for_V_26, mercury__rbtree__TypeInfo_for_W_27, mercury__rbtree__HeadVar__1_1, mercury__rbtree__Left0_20, &mercury__rbtree__Left_23);
          }
          {
            mercury__rbtree__map_values_3_p_0(mercury__rbtree__TypeInfo_for_K_25, mercury__rbtree__TypeInfo_for_V_26, mercury__rbtree__TypeInfo_for_W_27, mercury__rbtree__HeadVar__1_1, mercury__rbtree__Right0_21, &mercury__rbtree__Right_24);
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *mercury__rbtree__HeadVar__3_3 = base;
            MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_18;
            MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__W0_22;
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__Left_23));
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__Right_24));
          }
        }
        break;
    }
  }
}

MR_Word MR_CALL 
mercury__rbtree__map_values_2_f_0(
  MR_Word mercury__rbtree__TypeInfo_for_K_17,
  MR_Word mercury__rbtree__TypeInfo_for_V_18,
  MR_Word mercury__rbtree__TypeInfo_for_W_19,
  MR_Word mercury__rbtree__F_4,
  MR_Word mercury__rbtree__T1_5)
{
  {
    MR_bool mercury__rbtree__succeeded;
    MR_Word mercury__rbtree__T2_6;

    {
      mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_97_112_95_118_97_108_117_101_115_95_95_104_111_49_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_3_p_0(mercury__rbtree__F_4, mercury__rbtree__T1_5, &mercury__rbtree__T2_6);
    }
    return mercury__rbtree__T2_6;
  }
}

void MR_CALL 
mercury__rbtree__foldl3_8_p_4(
  MR_Word mercury__rbtree__TypeInfo_for_K_65,
  MR_Word mercury__rbtree__TypeInfo_for_V_66,
  MR_Word mercury__rbtree__TypeInfo_for_T_67,
  MR_Word mercury__rbtree__TypeInfo_for_U_68,
  MR_Word mercury__rbtree__TypeInfo_for_W_69,
  MR_Word mercury__rbtree__Pred_1,
  MR_Word mercury__rbtree__HeadVar__2_2,
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0_3,
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc1_4,
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0_5,
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc2_6,
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_0_7,
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc3_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__rbtree__succeeded;

        switch (MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *mercury__rbtree__STATE_VARIABLE_Acc3_8 = mercury__rbtree__STATE_VARIABLE_Acc3_0_7;
              *mercury__rbtree__STATE_VARIABLE_Acc2_6 = mercury__rbtree__STATE_VARIABLE_Acc2_0_5;
              *mercury__rbtree__STATE_VARIABLE_Acc1_4 = mercury__rbtree__STATE_VARIABLE_Acc1_0_3;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__rbtree__K_20 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
              MR_Box mercury__rbtree__V_21 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
              MR_Word mercury__rbtree__Left_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
              MR_Word mercury__rbtree__Right_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_33_33;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_34_34;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_35_35;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_36_36;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_37_37;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_38_38;
              void MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

              {
                mercury__rbtree__foldl3_8_p_4(mercury__rbtree__TypeInfo_for_K_65, mercury__rbtree__TypeInfo_for_V_66, mercury__rbtree__TypeInfo_for_T_67, mercury__rbtree__TypeInfo_for_U_68, mercury__rbtree__TypeInfo_for_W_69, mercury__rbtree__Pred_1, mercury__rbtree__Left_22, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_33_33, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_34_34, mercury__rbtree__STATE_VARIABLE_Acc3_0_7, &mercury__rbtree__STATE_VARIABLE_Acc3_35_35);
              }
              mercury__rbtree__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
              {
                mercury__rbtree__func_1(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_20, mercury__rbtree__V_21, mercury__rbtree__STATE_VARIABLE_Acc1_33_33, &mercury__rbtree__STATE_VARIABLE_Acc1_36_36, mercury__rbtree__STATE_VARIABLE_Acc2_34_34, &mercury__rbtree__STATE_VARIABLE_Acc2_37_37, mercury__rbtree__STATE_VARIABLE_Acc3_35_35, &mercury__rbtree__STATE_VARIABLE_Acc3_38_38);
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_23;
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_36_36;
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_37_37;
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_0__tmp_copy_7 = mercury__rbtree__STATE_VARIABLE_Acc3_38_38;

                mercury__rbtree__STATE_VARIABLE_Acc3_0_7 = mercury__rbtree__STATE_VARIABLE_Acc3_0__tmp_copy_7;
                mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
                mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
                mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
              }
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Box mercury__rbtree__K_43 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
              MR_Box mercury__rbtree__V_44 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
              MR_Word mercury__rbtree__Left_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
              MR_Word mercury__rbtree__Right_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_56_56;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_57_57;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_58_58;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_59_59;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_60_60;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_61_61;
              void MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

              {
                mercury__rbtree__foldl3_8_p_4(mercury__rbtree__TypeInfo_for_K_65, mercury__rbtree__TypeInfo_for_V_66, mercury__rbtree__TypeInfo_for_T_67, mercury__rbtree__TypeInfo_for_U_68, mercury__rbtree__TypeInfo_for_W_69, mercury__rbtree__Pred_1, mercury__rbtree__Left_45, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_56_56, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_57_57, mercury__rbtree__STATE_VARIABLE_Acc3_0_7, &mercury__rbtree__STATE_VARIABLE_Acc3_58_58);
              }
              mercury__rbtree__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
              {
                mercury__rbtree__func_0(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_43, mercury__rbtree__V_44, mercury__rbtree__STATE_VARIABLE_Acc1_56_56, &mercury__rbtree__STATE_VARIABLE_Acc1_59_59, mercury__rbtree__STATE_VARIABLE_Acc2_57_57, &mercury__rbtree__STATE_VARIABLE_Acc2_60_60, mercury__rbtree__STATE_VARIABLE_Acc3_58_58, &mercury__rbtree__STATE_VARIABLE_Acc3_61_61);
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_46;
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_59_59;
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_60_60;
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_0__tmp_copy_7 = mercury__rbtree__STATE_VARIABLE_Acc3_61_61;

                mercury__rbtree__STATE_VARIABLE_Acc3_0_7 = mercury__rbtree__STATE_VARIABLE_Acc3_0__tmp_copy_7;
                mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
                mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
                mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
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
mercury__rbtree__foldl3_8_p_3(
  MR_Word mercury__rbtree__TypeInfo_for_K_65,
  MR_Word mercury__rbtree__TypeInfo_for_V_66,
  MR_Word mercury__rbtree__TypeInfo_for_T_67,
  MR_Word mercury__rbtree__TypeInfo_for_U_68,
  MR_Word mercury__rbtree__TypeInfo_for_W_69,
  MR_Word mercury__rbtree__Pred_1,
  MR_Word mercury__rbtree__HeadVar__2_2,
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0_3,
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc1_4,
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0_5,
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc2_6,
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_0_7,
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc3_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__rbtree__succeeded;

        switch (MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *mercury__rbtree__STATE_VARIABLE_Acc3_8 = mercury__rbtree__STATE_VARIABLE_Acc3_0_7;
              *mercury__rbtree__STATE_VARIABLE_Acc2_6 = mercury__rbtree__STATE_VARIABLE_Acc2_0_5;
              *mercury__rbtree__STATE_VARIABLE_Acc1_4 = mercury__rbtree__STATE_VARIABLE_Acc1_0_3;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__rbtree__K_20 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
              MR_Box mercury__rbtree__V_21 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
              MR_Word mercury__rbtree__Left_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
              MR_Word mercury__rbtree__Right_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_33_33;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_34_34;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_35_35;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_36_36;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_37_37;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_38_38;
              void MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

              {
                mercury__rbtree__foldl3_8_p_3(mercury__rbtree__TypeInfo_for_K_65, mercury__rbtree__TypeInfo_for_V_66, mercury__rbtree__TypeInfo_for_T_67, mercury__rbtree__TypeInfo_for_U_68, mercury__rbtree__TypeInfo_for_W_69, mercury__rbtree__Pred_1, mercury__rbtree__Left_22, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_33_33, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_34_34, mercury__rbtree__STATE_VARIABLE_Acc3_0_7, &mercury__rbtree__STATE_VARIABLE_Acc3_35_35);
              }
              mercury__rbtree__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
              {
                mercury__rbtree__func_1(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_20, mercury__rbtree__V_21, mercury__rbtree__STATE_VARIABLE_Acc1_33_33, &mercury__rbtree__STATE_VARIABLE_Acc1_36_36, mercury__rbtree__STATE_VARIABLE_Acc2_34_34, &mercury__rbtree__STATE_VARIABLE_Acc2_37_37, mercury__rbtree__STATE_VARIABLE_Acc3_35_35, &mercury__rbtree__STATE_VARIABLE_Acc3_38_38);
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_23;
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_36_36;
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_37_37;
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_0__tmp_copy_7 = mercury__rbtree__STATE_VARIABLE_Acc3_38_38;

                mercury__rbtree__STATE_VARIABLE_Acc3_0_7 = mercury__rbtree__STATE_VARIABLE_Acc3_0__tmp_copy_7;
                mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
                mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
                mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
              }
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Box mercury__rbtree__K_43 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
              MR_Box mercury__rbtree__V_44 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
              MR_Word mercury__rbtree__Left_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
              MR_Word mercury__rbtree__Right_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_56_56;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_57_57;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_58_58;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_59_59;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_60_60;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_61_61;
              void MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

              {
                mercury__rbtree__foldl3_8_p_3(mercury__rbtree__TypeInfo_for_K_65, mercury__rbtree__TypeInfo_for_V_66, mercury__rbtree__TypeInfo_for_T_67, mercury__rbtree__TypeInfo_for_U_68, mercury__rbtree__TypeInfo_for_W_69, mercury__rbtree__Pred_1, mercury__rbtree__Left_45, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_56_56, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_57_57, mercury__rbtree__STATE_VARIABLE_Acc3_0_7, &mercury__rbtree__STATE_VARIABLE_Acc3_58_58);
              }
              mercury__rbtree__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
              {
                mercury__rbtree__func_0(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_43, mercury__rbtree__V_44, mercury__rbtree__STATE_VARIABLE_Acc1_56_56, &mercury__rbtree__STATE_VARIABLE_Acc1_59_59, mercury__rbtree__STATE_VARIABLE_Acc2_57_57, &mercury__rbtree__STATE_VARIABLE_Acc2_60_60, mercury__rbtree__STATE_VARIABLE_Acc3_58_58, &mercury__rbtree__STATE_VARIABLE_Acc3_61_61);
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_46;
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_59_59;
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_60_60;
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_0__tmp_copy_7 = mercury__rbtree__STATE_VARIABLE_Acc3_61_61;

                mercury__rbtree__STATE_VARIABLE_Acc3_0_7 = mercury__rbtree__STATE_VARIABLE_Acc3_0__tmp_copy_7;
                mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
                mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
                mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
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
mercury__rbtree__foldl3_8_p_2(
  MR_Word mercury__rbtree__TypeInfo_for_K_65,
  MR_Word mercury__rbtree__TypeInfo_for_V_66,
  MR_Word mercury__rbtree__TypeInfo_for_T_67,
  MR_Word mercury__rbtree__TypeInfo_for_U_68,
  MR_Word mercury__rbtree__TypeInfo_for_W_69,
  MR_Word mercury__rbtree__Pred_1,
  MR_Word mercury__rbtree__HeadVar__2_2,
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0_3,
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc1_4,
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0_5,
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc2_6,
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_0_7,
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc3_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__rbtree__succeeded;

        switch (MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *mercury__rbtree__STATE_VARIABLE_Acc3_8 = mercury__rbtree__STATE_VARIABLE_Acc3_0_7;
              *mercury__rbtree__STATE_VARIABLE_Acc2_6 = mercury__rbtree__STATE_VARIABLE_Acc2_0_5;
              *mercury__rbtree__STATE_VARIABLE_Acc1_4 = mercury__rbtree__STATE_VARIABLE_Acc1_0_3;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__rbtree__K_20 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
              MR_Box mercury__rbtree__V_21 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
              MR_Word mercury__rbtree__Left_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
              MR_Word mercury__rbtree__Right_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_33_33;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_34_34;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_35_35;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_36_36;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_37_37;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_38_38;
              void MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

              {
                mercury__rbtree__foldl3_8_p_2(mercury__rbtree__TypeInfo_for_K_65, mercury__rbtree__TypeInfo_for_V_66, mercury__rbtree__TypeInfo_for_T_67, mercury__rbtree__TypeInfo_for_U_68, mercury__rbtree__TypeInfo_for_W_69, mercury__rbtree__Pred_1, mercury__rbtree__Left_22, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_33_33, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_34_34, mercury__rbtree__STATE_VARIABLE_Acc3_0_7, &mercury__rbtree__STATE_VARIABLE_Acc3_35_35);
              }
              mercury__rbtree__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
              {
                mercury__rbtree__func_1(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_20, mercury__rbtree__V_21, mercury__rbtree__STATE_VARIABLE_Acc1_33_33, &mercury__rbtree__STATE_VARIABLE_Acc1_36_36, mercury__rbtree__STATE_VARIABLE_Acc2_34_34, &mercury__rbtree__STATE_VARIABLE_Acc2_37_37, mercury__rbtree__STATE_VARIABLE_Acc3_35_35, &mercury__rbtree__STATE_VARIABLE_Acc3_38_38);
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_23;
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_36_36;
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_37_37;
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_0__tmp_copy_7 = mercury__rbtree__STATE_VARIABLE_Acc3_38_38;

                mercury__rbtree__STATE_VARIABLE_Acc3_0_7 = mercury__rbtree__STATE_VARIABLE_Acc3_0__tmp_copy_7;
                mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
                mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
                mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
              }
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Box mercury__rbtree__K_43 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
              MR_Box mercury__rbtree__V_44 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
              MR_Word mercury__rbtree__Left_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
              MR_Word mercury__rbtree__Right_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_56_56;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_57_57;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_58_58;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_59_59;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_60_60;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_61_61;
              void MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

              {
                mercury__rbtree__foldl3_8_p_2(mercury__rbtree__TypeInfo_for_K_65, mercury__rbtree__TypeInfo_for_V_66, mercury__rbtree__TypeInfo_for_T_67, mercury__rbtree__TypeInfo_for_U_68, mercury__rbtree__TypeInfo_for_W_69, mercury__rbtree__Pred_1, mercury__rbtree__Left_45, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_56_56, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_57_57, mercury__rbtree__STATE_VARIABLE_Acc3_0_7, &mercury__rbtree__STATE_VARIABLE_Acc3_58_58);
              }
              mercury__rbtree__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
              {
                mercury__rbtree__func_0(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_43, mercury__rbtree__V_44, mercury__rbtree__STATE_VARIABLE_Acc1_56_56, &mercury__rbtree__STATE_VARIABLE_Acc1_59_59, mercury__rbtree__STATE_VARIABLE_Acc2_57_57, &mercury__rbtree__STATE_VARIABLE_Acc2_60_60, mercury__rbtree__STATE_VARIABLE_Acc3_58_58, &mercury__rbtree__STATE_VARIABLE_Acc3_61_61);
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_46;
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_59_59;
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_60_60;
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_0__tmp_copy_7 = mercury__rbtree__STATE_VARIABLE_Acc3_61_61;

                mercury__rbtree__STATE_VARIABLE_Acc3_0_7 = mercury__rbtree__STATE_VARIABLE_Acc3_0__tmp_copy_7;
                mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
                mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
                mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
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
mercury__rbtree__foldl3_8_p_1(
  MR_Word mercury__rbtree__TypeInfo_for_K_65,
  MR_Word mercury__rbtree__TypeInfo_for_V_66,
  MR_Word mercury__rbtree__TypeInfo_for_T_67,
  MR_Word mercury__rbtree__TypeInfo_for_U_68,
  MR_Word mercury__rbtree__TypeInfo_for_W_69,
  MR_Word mercury__rbtree__Pred_1,
  MR_Word mercury__rbtree__HeadVar__2_2,
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0_3,
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc1_4,
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0_5,
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc2_6,
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_0_7,
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc3_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__rbtree__succeeded;

        switch (MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *mercury__rbtree__STATE_VARIABLE_Acc3_8 = mercury__rbtree__STATE_VARIABLE_Acc3_0_7;
              *mercury__rbtree__STATE_VARIABLE_Acc2_6 = mercury__rbtree__STATE_VARIABLE_Acc2_0_5;
              *mercury__rbtree__STATE_VARIABLE_Acc1_4 = mercury__rbtree__STATE_VARIABLE_Acc1_0_3;
              mercury__rbtree__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__rbtree__K_20 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
              MR_Box mercury__rbtree__V_21 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
              MR_Word mercury__rbtree__Left_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
              MR_Word mercury__rbtree__Right_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_33_33;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_34_34;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_35_35;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_36_36;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_37_37;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_38_38;
              MR_bool MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

              {
                mercury__rbtree__succeeded = mercury__rbtree__foldl3_8_p_1(mercury__rbtree__TypeInfo_for_K_65, mercury__rbtree__TypeInfo_for_V_66, mercury__rbtree__TypeInfo_for_T_67, mercury__rbtree__TypeInfo_for_U_68, mercury__rbtree__TypeInfo_for_W_69, mercury__rbtree__Pred_1, mercury__rbtree__Left_22, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_33_33, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_34_34, mercury__rbtree__STATE_VARIABLE_Acc3_0_7, &mercury__rbtree__STATE_VARIABLE_Acc3_35_35);
              }
              if (mercury__rbtree__succeeded)
                {
                  mercury__rbtree__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
                  {
                    mercury__rbtree__succeeded = mercury__rbtree__func_1(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_20, mercury__rbtree__V_21, mercury__rbtree__STATE_VARIABLE_Acc1_33_33, &mercury__rbtree__STATE_VARIABLE_Acc1_36_36, mercury__rbtree__STATE_VARIABLE_Acc2_34_34, &mercury__rbtree__STATE_VARIABLE_Acc2_37_37, mercury__rbtree__STATE_VARIABLE_Acc3_35_35, &mercury__rbtree__STATE_VARIABLE_Acc3_38_38);
                  }
                  if (mercury__rbtree__succeeded)
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_23;
                        MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_36_36;
                        MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_37_37;
                        MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_0__tmp_copy_7 = mercury__rbtree__STATE_VARIABLE_Acc3_38_38;

                        mercury__rbtree__STATE_VARIABLE_Acc3_0_7 = mercury__rbtree__STATE_VARIABLE_Acc3_0__tmp_copy_7;
                        mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
                        mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
                        mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
                      }
                      continue;
                    }
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Box mercury__rbtree__K_43 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
              MR_Box mercury__rbtree__V_44 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
              MR_Word mercury__rbtree__Left_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
              MR_Word mercury__rbtree__Right_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_56_56;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_57_57;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_58_58;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_59_59;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_60_60;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_61_61;
              MR_bool MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

              {
                mercury__rbtree__succeeded = mercury__rbtree__foldl3_8_p_1(mercury__rbtree__TypeInfo_for_K_65, mercury__rbtree__TypeInfo_for_V_66, mercury__rbtree__TypeInfo_for_T_67, mercury__rbtree__TypeInfo_for_U_68, mercury__rbtree__TypeInfo_for_W_69, mercury__rbtree__Pred_1, mercury__rbtree__Left_45, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_56_56, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_57_57, mercury__rbtree__STATE_VARIABLE_Acc3_0_7, &mercury__rbtree__STATE_VARIABLE_Acc3_58_58);
              }
              if (mercury__rbtree__succeeded)
                {
                  mercury__rbtree__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
                  {
                    mercury__rbtree__succeeded = mercury__rbtree__func_0(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_43, mercury__rbtree__V_44, mercury__rbtree__STATE_VARIABLE_Acc1_56_56, &mercury__rbtree__STATE_VARIABLE_Acc1_59_59, mercury__rbtree__STATE_VARIABLE_Acc2_57_57, &mercury__rbtree__STATE_VARIABLE_Acc2_60_60, mercury__rbtree__STATE_VARIABLE_Acc3_58_58, &mercury__rbtree__STATE_VARIABLE_Acc3_61_61);
                  }
                  if (mercury__rbtree__succeeded)
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_46;
                        MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_59_59;
                        MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_60_60;
                        MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_0__tmp_copy_7 = mercury__rbtree__STATE_VARIABLE_Acc3_61_61;

                        mercury__rbtree__STATE_VARIABLE_Acc3_0_7 = mercury__rbtree__STATE_VARIABLE_Acc3_0__tmp_copy_7;
                        mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
                        mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
                        mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
                      }
                      continue;
                    }
                }
            }
            break;
        }
        return mercury__rbtree__succeeded;
      }
      break;
    }
}

void MR_CALL 
mercury__rbtree__foldl3_8_p_0(
  MR_Word mercury__rbtree__TypeInfo_for_K_65,
  MR_Word mercury__rbtree__TypeInfo_for_V_66,
  MR_Word mercury__rbtree__TypeInfo_for_T_67,
  MR_Word mercury__rbtree__TypeInfo_for_U_68,
  MR_Word mercury__rbtree__TypeInfo_for_W_69,
  MR_Word mercury__rbtree__Pred_1,
  MR_Word mercury__rbtree__HeadVar__2_2,
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0_3,
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc1_4,
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0_5,
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc2_6,
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_0_7,
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc3_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__rbtree__succeeded;

        switch (MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *mercury__rbtree__STATE_VARIABLE_Acc3_8 = mercury__rbtree__STATE_VARIABLE_Acc3_0_7;
              *mercury__rbtree__STATE_VARIABLE_Acc2_6 = mercury__rbtree__STATE_VARIABLE_Acc2_0_5;
              *mercury__rbtree__STATE_VARIABLE_Acc1_4 = mercury__rbtree__STATE_VARIABLE_Acc1_0_3;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__rbtree__K_20 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
              MR_Box mercury__rbtree__V_21 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
              MR_Word mercury__rbtree__Left_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
              MR_Word mercury__rbtree__Right_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_33_33;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_34_34;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_35_35;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_36_36;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_37_37;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_38_38;
              void MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

              {
                mercury__rbtree__foldl3_8_p_0(mercury__rbtree__TypeInfo_for_K_65, mercury__rbtree__TypeInfo_for_V_66, mercury__rbtree__TypeInfo_for_T_67, mercury__rbtree__TypeInfo_for_U_68, mercury__rbtree__TypeInfo_for_W_69, mercury__rbtree__Pred_1, mercury__rbtree__Left_22, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_33_33, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_34_34, mercury__rbtree__STATE_VARIABLE_Acc3_0_7, &mercury__rbtree__STATE_VARIABLE_Acc3_35_35);
              }
              mercury__rbtree__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
              {
                mercury__rbtree__func_1(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_20, mercury__rbtree__V_21, mercury__rbtree__STATE_VARIABLE_Acc1_33_33, &mercury__rbtree__STATE_VARIABLE_Acc1_36_36, mercury__rbtree__STATE_VARIABLE_Acc2_34_34, &mercury__rbtree__STATE_VARIABLE_Acc2_37_37, mercury__rbtree__STATE_VARIABLE_Acc3_35_35, &mercury__rbtree__STATE_VARIABLE_Acc3_38_38);
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_23;
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_36_36;
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_37_37;
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_0__tmp_copy_7 = mercury__rbtree__STATE_VARIABLE_Acc3_38_38;

                mercury__rbtree__STATE_VARIABLE_Acc3_0_7 = mercury__rbtree__STATE_VARIABLE_Acc3_0__tmp_copy_7;
                mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
                mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
                mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
              }
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Box mercury__rbtree__K_43 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
              MR_Box mercury__rbtree__V_44 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
              MR_Word mercury__rbtree__Left_45 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
              MR_Word mercury__rbtree__Right_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_56_56;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_57_57;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_58_58;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_59_59;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_60_60;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_61_61;
              void MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *);

              {
                mercury__rbtree__foldl3_8_p_0(mercury__rbtree__TypeInfo_for_K_65, mercury__rbtree__TypeInfo_for_V_66, mercury__rbtree__TypeInfo_for_T_67, mercury__rbtree__TypeInfo_for_U_68, mercury__rbtree__TypeInfo_for_W_69, mercury__rbtree__Pred_1, mercury__rbtree__Left_45, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_56_56, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_57_57, mercury__rbtree__STATE_VARIABLE_Acc3_0_7, &mercury__rbtree__STATE_VARIABLE_Acc3_58_58);
              }
              mercury__rbtree__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
              {
                mercury__rbtree__func_0(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_43, mercury__rbtree__V_44, mercury__rbtree__STATE_VARIABLE_Acc1_56_56, &mercury__rbtree__STATE_VARIABLE_Acc1_59_59, mercury__rbtree__STATE_VARIABLE_Acc2_57_57, &mercury__rbtree__STATE_VARIABLE_Acc2_60_60, mercury__rbtree__STATE_VARIABLE_Acc3_58_58, &mercury__rbtree__STATE_VARIABLE_Acc3_61_61);
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_46;
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_59_59;
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_60_60;
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc3_0__tmp_copy_7 = mercury__rbtree__STATE_VARIABLE_Acc3_61_61;

                mercury__rbtree__STATE_VARIABLE_Acc3_0_7 = mercury__rbtree__STATE_VARIABLE_Acc3_0__tmp_copy_7;
                mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
                mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
                mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
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
mercury__rbtree__foldl2_6_p_6(
  MR_Word mercury__rbtree__TypeInfo_for_K_48,
  MR_Word mercury__rbtree__TypeInfo_for_V_49,
  MR_Word mercury__rbtree__TypeInfo_for_T_50,
  MR_Word mercury__rbtree__TypeInfo_for_U_51,
  MR_Word mercury__rbtree__Pred_1,
  MR_Word mercury__rbtree__HeadVar__2_2,
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0_3,
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc1_4,
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0_5,
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc2_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__rbtree__succeeded;

        switch (MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *mercury__rbtree__STATE_VARIABLE_Acc2_6 = mercury__rbtree__STATE_VARIABLE_Acc2_0_5;
              *mercury__rbtree__STATE_VARIABLE_Acc1_4 = mercury__rbtree__STATE_VARIABLE_Acc1_0_3;
              mercury__rbtree__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__rbtree__K_15 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
              MR_Box mercury__rbtree__V_16 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
              MR_Word mercury__rbtree__Left_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
              MR_Word mercury__rbtree__Right_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_25_25;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_26_26;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_27_27;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_28_28;
              MR_bool MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

              {
                mercury__rbtree__succeeded = mercury__rbtree__foldl2_6_p_6(mercury__rbtree__TypeInfo_for_K_48, mercury__rbtree__TypeInfo_for_V_49, mercury__rbtree__TypeInfo_for_T_50, mercury__rbtree__TypeInfo_for_U_51, mercury__rbtree__Pred_1, mercury__rbtree__Left_17, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_25_25, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_26_26);
              }
              if (mercury__rbtree__succeeded)
                {
                  mercury__rbtree__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
                  {
                    mercury__rbtree__succeeded = mercury__rbtree__func_1(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_15, mercury__rbtree__V_16, mercury__rbtree__STATE_VARIABLE_Acc1_25_25, &mercury__rbtree__STATE_VARIABLE_Acc1_27_27, mercury__rbtree__STATE_VARIABLE_Acc2_26_26, &mercury__rbtree__STATE_VARIABLE_Acc2_28_28);
                  }
                  if (mercury__rbtree__succeeded)
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_18;
                        MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_27_27;
                        MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_28_28;

                        mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
                        mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
                        mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
                      }
                      continue;
                    }
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Box mercury__rbtree__K_32 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
              MR_Box mercury__rbtree__V_33 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
              MR_Word mercury__rbtree__Left_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
              MR_Word mercury__rbtree__Right_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_42_42;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_43_43;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_44_44;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_45_45;
              MR_bool MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

              {
                mercury__rbtree__succeeded = mercury__rbtree__foldl2_6_p_6(mercury__rbtree__TypeInfo_for_K_48, mercury__rbtree__TypeInfo_for_V_49, mercury__rbtree__TypeInfo_for_T_50, mercury__rbtree__TypeInfo_for_U_51, mercury__rbtree__Pred_1, mercury__rbtree__Left_34, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_42_42, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_43_43);
              }
              if (mercury__rbtree__succeeded)
                {
                  mercury__rbtree__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
                  {
                    mercury__rbtree__succeeded = mercury__rbtree__func_0(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_32, mercury__rbtree__V_33, mercury__rbtree__STATE_VARIABLE_Acc1_42_42, &mercury__rbtree__STATE_VARIABLE_Acc1_44_44, mercury__rbtree__STATE_VARIABLE_Acc2_43_43, &mercury__rbtree__STATE_VARIABLE_Acc2_45_45);
                  }
                  if (mercury__rbtree__succeeded)
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_35;
                        MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_44_44;
                        MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_45_45;

                        mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
                        mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
                        mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
                      }
                      continue;
                    }
                }
            }
            break;
        }
        return mercury__rbtree__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__rbtree__foldl2_6_p_5(
  MR_Word mercury__rbtree__TypeInfo_for_K_48,
  MR_Word mercury__rbtree__TypeInfo_for_V_49,
  MR_Word mercury__rbtree__TypeInfo_for_T_50,
  MR_Word mercury__rbtree__TypeInfo_for_U_51,
  MR_Word mercury__rbtree__Pred_1,
  MR_Word mercury__rbtree__HeadVar__2_2,
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0_3,
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc1_4,
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0_5,
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc2_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__rbtree__succeeded;

        switch (MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *mercury__rbtree__STATE_VARIABLE_Acc2_6 = mercury__rbtree__STATE_VARIABLE_Acc2_0_5;
              *mercury__rbtree__STATE_VARIABLE_Acc1_4 = mercury__rbtree__STATE_VARIABLE_Acc1_0_3;
              mercury__rbtree__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__rbtree__K_15 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
              MR_Box mercury__rbtree__V_16 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
              MR_Word mercury__rbtree__Left_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
              MR_Word mercury__rbtree__Right_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_25_25;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_26_26;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_27_27;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_28_28;
              MR_bool MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

              {
                mercury__rbtree__succeeded = mercury__rbtree__foldl2_6_p_5(mercury__rbtree__TypeInfo_for_K_48, mercury__rbtree__TypeInfo_for_V_49, mercury__rbtree__TypeInfo_for_T_50, mercury__rbtree__TypeInfo_for_U_51, mercury__rbtree__Pred_1, mercury__rbtree__Left_17, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_25_25, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_26_26);
              }
              if (mercury__rbtree__succeeded)
                {
                  mercury__rbtree__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
                  {
                    mercury__rbtree__succeeded = mercury__rbtree__func_1(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_15, mercury__rbtree__V_16, mercury__rbtree__STATE_VARIABLE_Acc1_25_25, &mercury__rbtree__STATE_VARIABLE_Acc1_27_27, mercury__rbtree__STATE_VARIABLE_Acc2_26_26, &mercury__rbtree__STATE_VARIABLE_Acc2_28_28);
                  }
                  if (mercury__rbtree__succeeded)
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_18;
                        MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_27_27;
                        MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_28_28;

                        mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
                        mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
                        mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
                      }
                      continue;
                    }
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Box mercury__rbtree__K_32 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
              MR_Box mercury__rbtree__V_33 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
              MR_Word mercury__rbtree__Left_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
              MR_Word mercury__rbtree__Right_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_42_42;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_43_43;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_44_44;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_45_45;
              MR_bool MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

              {
                mercury__rbtree__succeeded = mercury__rbtree__foldl2_6_p_5(mercury__rbtree__TypeInfo_for_K_48, mercury__rbtree__TypeInfo_for_V_49, mercury__rbtree__TypeInfo_for_T_50, mercury__rbtree__TypeInfo_for_U_51, mercury__rbtree__Pred_1, mercury__rbtree__Left_34, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_42_42, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_43_43);
              }
              if (mercury__rbtree__succeeded)
                {
                  mercury__rbtree__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
                  {
                    mercury__rbtree__succeeded = mercury__rbtree__func_0(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_32, mercury__rbtree__V_33, mercury__rbtree__STATE_VARIABLE_Acc1_42_42, &mercury__rbtree__STATE_VARIABLE_Acc1_44_44, mercury__rbtree__STATE_VARIABLE_Acc2_43_43, &mercury__rbtree__STATE_VARIABLE_Acc2_45_45);
                  }
                  if (mercury__rbtree__succeeded)
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_35;
                        MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_44_44;
                        MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_45_45;

                        mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
                        mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
                        mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
                      }
                      continue;
                    }
                }
            }
            break;
        }
        return mercury__rbtree__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__rbtree__foldl2_6_p_4(
  MR_Word mercury__rbtree__TypeInfo_for_K_48,
  MR_Word mercury__rbtree__TypeInfo_for_V_49,
  MR_Word mercury__rbtree__TypeInfo_for_T_50,
  MR_Word mercury__rbtree__TypeInfo_for_U_51,
  MR_Word mercury__rbtree__Pred_1,
  MR_Word mercury__rbtree__HeadVar__2_2,
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0_3,
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc1_4,
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0_5,
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc2_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__rbtree__succeeded;

        switch (MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *mercury__rbtree__STATE_VARIABLE_Acc2_6 = mercury__rbtree__STATE_VARIABLE_Acc2_0_5;
              *mercury__rbtree__STATE_VARIABLE_Acc1_4 = mercury__rbtree__STATE_VARIABLE_Acc1_0_3;
              mercury__rbtree__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__rbtree__K_15 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
              MR_Box mercury__rbtree__V_16 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
              MR_Word mercury__rbtree__Left_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
              MR_Word mercury__rbtree__Right_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_25_25;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_26_26;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_27_27;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_28_28;
              MR_bool MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

              {
                mercury__rbtree__succeeded = mercury__rbtree__foldl2_6_p_4(mercury__rbtree__TypeInfo_for_K_48, mercury__rbtree__TypeInfo_for_V_49, mercury__rbtree__TypeInfo_for_T_50, mercury__rbtree__TypeInfo_for_U_51, mercury__rbtree__Pred_1, mercury__rbtree__Left_17, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_25_25, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_26_26);
              }
              if (mercury__rbtree__succeeded)
                {
                  mercury__rbtree__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
                  {
                    mercury__rbtree__succeeded = mercury__rbtree__func_1(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_15, mercury__rbtree__V_16, mercury__rbtree__STATE_VARIABLE_Acc1_25_25, &mercury__rbtree__STATE_VARIABLE_Acc1_27_27, mercury__rbtree__STATE_VARIABLE_Acc2_26_26, &mercury__rbtree__STATE_VARIABLE_Acc2_28_28);
                  }
                  if (mercury__rbtree__succeeded)
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_18;
                        MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_27_27;
                        MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_28_28;

                        mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
                        mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
                        mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
                      }
                      continue;
                    }
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Box mercury__rbtree__K_32 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
              MR_Box mercury__rbtree__V_33 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
              MR_Word mercury__rbtree__Left_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
              MR_Word mercury__rbtree__Right_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_42_42;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_43_43;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_44_44;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_45_45;
              MR_bool MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

              {
                mercury__rbtree__succeeded = mercury__rbtree__foldl2_6_p_4(mercury__rbtree__TypeInfo_for_K_48, mercury__rbtree__TypeInfo_for_V_49, mercury__rbtree__TypeInfo_for_T_50, mercury__rbtree__TypeInfo_for_U_51, mercury__rbtree__Pred_1, mercury__rbtree__Left_34, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_42_42, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_43_43);
              }
              if (mercury__rbtree__succeeded)
                {
                  mercury__rbtree__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
                  {
                    mercury__rbtree__succeeded = mercury__rbtree__func_0(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_32, mercury__rbtree__V_33, mercury__rbtree__STATE_VARIABLE_Acc1_42_42, &mercury__rbtree__STATE_VARIABLE_Acc1_44_44, mercury__rbtree__STATE_VARIABLE_Acc2_43_43, &mercury__rbtree__STATE_VARIABLE_Acc2_45_45);
                  }
                  if (mercury__rbtree__succeeded)
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_35;
                        MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_44_44;
                        MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_45_45;

                        mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
                        mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
                        mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
                      }
                      continue;
                    }
                }
            }
            break;
        }
        return mercury__rbtree__succeeded;
      }
      break;
    }
}

void MR_CALL 
mercury__rbtree__foldl2_6_p_3(
  MR_Word mercury__rbtree__TypeInfo_for_K_48,
  MR_Word mercury__rbtree__TypeInfo_for_V_49,
  MR_Word mercury__rbtree__TypeInfo_for_T_50,
  MR_Word mercury__rbtree__TypeInfo_for_U_51,
  MR_Word mercury__rbtree__Pred_1,
  MR_Word mercury__rbtree__HeadVar__2_2,
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0_3,
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc1_4,
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0_5,
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc2_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__rbtree__succeeded;

        switch (MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *mercury__rbtree__STATE_VARIABLE_Acc2_6 = mercury__rbtree__STATE_VARIABLE_Acc2_0_5;
              *mercury__rbtree__STATE_VARIABLE_Acc1_4 = mercury__rbtree__STATE_VARIABLE_Acc1_0_3;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__rbtree__K_15 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
              MR_Box mercury__rbtree__V_16 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
              MR_Word mercury__rbtree__Left_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
              MR_Word mercury__rbtree__Right_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_25_25;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_26_26;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_27_27;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_28_28;
              void MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

              {
                mercury__rbtree__foldl2_6_p_3(mercury__rbtree__TypeInfo_for_K_48, mercury__rbtree__TypeInfo_for_V_49, mercury__rbtree__TypeInfo_for_T_50, mercury__rbtree__TypeInfo_for_U_51, mercury__rbtree__Pred_1, mercury__rbtree__Left_17, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_25_25, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_26_26);
              }
              mercury__rbtree__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
              {
                mercury__rbtree__func_1(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_15, mercury__rbtree__V_16, mercury__rbtree__STATE_VARIABLE_Acc1_25_25, &mercury__rbtree__STATE_VARIABLE_Acc1_27_27, mercury__rbtree__STATE_VARIABLE_Acc2_26_26, &mercury__rbtree__STATE_VARIABLE_Acc2_28_28);
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_18;
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_27_27;
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_28_28;

                mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
                mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
                mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
              }
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Box mercury__rbtree__K_32 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
              MR_Box mercury__rbtree__V_33 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
              MR_Word mercury__rbtree__Left_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
              MR_Word mercury__rbtree__Right_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_42_42;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_43_43;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_44_44;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_45_45;
              void MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

              {
                mercury__rbtree__foldl2_6_p_3(mercury__rbtree__TypeInfo_for_K_48, mercury__rbtree__TypeInfo_for_V_49, mercury__rbtree__TypeInfo_for_T_50, mercury__rbtree__TypeInfo_for_U_51, mercury__rbtree__Pred_1, mercury__rbtree__Left_34, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_42_42, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_43_43);
              }
              mercury__rbtree__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
              {
                mercury__rbtree__func_0(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_32, mercury__rbtree__V_33, mercury__rbtree__STATE_VARIABLE_Acc1_42_42, &mercury__rbtree__STATE_VARIABLE_Acc1_44_44, mercury__rbtree__STATE_VARIABLE_Acc2_43_43, &mercury__rbtree__STATE_VARIABLE_Acc2_45_45);
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_35;
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_44_44;
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_45_45;

                mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
                mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
                mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
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
mercury__rbtree__foldl2_6_p_2(
  MR_Word mercury__rbtree__TypeInfo_for_K_48,
  MR_Word mercury__rbtree__TypeInfo_for_V_49,
  MR_Word mercury__rbtree__TypeInfo_for_T_50,
  MR_Word mercury__rbtree__TypeInfo_for_U_51,
  MR_Word mercury__rbtree__Pred_1,
  MR_Word mercury__rbtree__HeadVar__2_2,
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0_3,
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc1_4,
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0_5,
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc2_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__rbtree__succeeded;

        switch (MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *mercury__rbtree__STATE_VARIABLE_Acc2_6 = mercury__rbtree__STATE_VARIABLE_Acc2_0_5;
              *mercury__rbtree__STATE_VARIABLE_Acc1_4 = mercury__rbtree__STATE_VARIABLE_Acc1_0_3;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__rbtree__K_15 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
              MR_Box mercury__rbtree__V_16 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
              MR_Word mercury__rbtree__Left_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
              MR_Word mercury__rbtree__Right_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_25_25;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_26_26;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_27_27;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_28_28;
              void MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

              {
                mercury__rbtree__foldl2_6_p_2(mercury__rbtree__TypeInfo_for_K_48, mercury__rbtree__TypeInfo_for_V_49, mercury__rbtree__TypeInfo_for_T_50, mercury__rbtree__TypeInfo_for_U_51, mercury__rbtree__Pred_1, mercury__rbtree__Left_17, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_25_25, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_26_26);
              }
              mercury__rbtree__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
              {
                mercury__rbtree__func_1(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_15, mercury__rbtree__V_16, mercury__rbtree__STATE_VARIABLE_Acc1_25_25, &mercury__rbtree__STATE_VARIABLE_Acc1_27_27, mercury__rbtree__STATE_VARIABLE_Acc2_26_26, &mercury__rbtree__STATE_VARIABLE_Acc2_28_28);
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_18;
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_27_27;
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_28_28;

                mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
                mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
                mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
              }
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Box mercury__rbtree__K_32 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
              MR_Box mercury__rbtree__V_33 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
              MR_Word mercury__rbtree__Left_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
              MR_Word mercury__rbtree__Right_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_42_42;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_43_43;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_44_44;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_45_45;
              void MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

              {
                mercury__rbtree__foldl2_6_p_2(mercury__rbtree__TypeInfo_for_K_48, mercury__rbtree__TypeInfo_for_V_49, mercury__rbtree__TypeInfo_for_T_50, mercury__rbtree__TypeInfo_for_U_51, mercury__rbtree__Pred_1, mercury__rbtree__Left_34, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_42_42, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_43_43);
              }
              mercury__rbtree__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
              {
                mercury__rbtree__func_0(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_32, mercury__rbtree__V_33, mercury__rbtree__STATE_VARIABLE_Acc1_42_42, &mercury__rbtree__STATE_VARIABLE_Acc1_44_44, mercury__rbtree__STATE_VARIABLE_Acc2_43_43, &mercury__rbtree__STATE_VARIABLE_Acc2_45_45);
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_35;
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_44_44;
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_45_45;

                mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
                mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
                mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
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
mercury__rbtree__foldl2_6_p_1(
  MR_Word mercury__rbtree__TypeInfo_for_K_48,
  MR_Word mercury__rbtree__TypeInfo_for_V_49,
  MR_Word mercury__rbtree__TypeInfo_for_T_50,
  MR_Word mercury__rbtree__TypeInfo_for_U_51,
  MR_Word mercury__rbtree__Pred_1,
  MR_Word mercury__rbtree__HeadVar__2_2,
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0_3,
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc1_4,
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0_5,
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc2_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__rbtree__succeeded;

        switch (MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *mercury__rbtree__STATE_VARIABLE_Acc2_6 = mercury__rbtree__STATE_VARIABLE_Acc2_0_5;
              *mercury__rbtree__STATE_VARIABLE_Acc1_4 = mercury__rbtree__STATE_VARIABLE_Acc1_0_3;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__rbtree__K_15 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
              MR_Box mercury__rbtree__V_16 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
              MR_Word mercury__rbtree__Left_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
              MR_Word mercury__rbtree__Right_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_25_25;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_26_26;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_27_27;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_28_28;
              void MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

              {
                mercury__rbtree__foldl2_6_p_1(mercury__rbtree__TypeInfo_for_K_48, mercury__rbtree__TypeInfo_for_V_49, mercury__rbtree__TypeInfo_for_T_50, mercury__rbtree__TypeInfo_for_U_51, mercury__rbtree__Pred_1, mercury__rbtree__Left_17, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_25_25, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_26_26);
              }
              mercury__rbtree__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
              {
                mercury__rbtree__func_1(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_15, mercury__rbtree__V_16, mercury__rbtree__STATE_VARIABLE_Acc1_25_25, &mercury__rbtree__STATE_VARIABLE_Acc1_27_27, mercury__rbtree__STATE_VARIABLE_Acc2_26_26, &mercury__rbtree__STATE_VARIABLE_Acc2_28_28);
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_18;
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_27_27;
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_28_28;

                mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
                mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
                mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
              }
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Box mercury__rbtree__K_32 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
              MR_Box mercury__rbtree__V_33 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
              MR_Word mercury__rbtree__Left_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
              MR_Word mercury__rbtree__Right_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_42_42;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_43_43;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_44_44;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_45_45;
              void MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

              {
                mercury__rbtree__foldl2_6_p_1(mercury__rbtree__TypeInfo_for_K_48, mercury__rbtree__TypeInfo_for_V_49, mercury__rbtree__TypeInfo_for_T_50, mercury__rbtree__TypeInfo_for_U_51, mercury__rbtree__Pred_1, mercury__rbtree__Left_34, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_42_42, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_43_43);
              }
              mercury__rbtree__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
              {
                mercury__rbtree__func_0(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_32, mercury__rbtree__V_33, mercury__rbtree__STATE_VARIABLE_Acc1_42_42, &mercury__rbtree__STATE_VARIABLE_Acc1_44_44, mercury__rbtree__STATE_VARIABLE_Acc2_43_43, &mercury__rbtree__STATE_VARIABLE_Acc2_45_45);
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_35;
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_44_44;
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_45_45;

                mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
                mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
                mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
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
mercury__rbtree__foldl2_6_p_0(
  MR_Word mercury__rbtree__TypeInfo_for_K_48,
  MR_Word mercury__rbtree__TypeInfo_for_V_49,
  MR_Word mercury__rbtree__TypeInfo_for_T_50,
  MR_Word mercury__rbtree__TypeInfo_for_U_51,
  MR_Word mercury__rbtree__Pred_1,
  MR_Word mercury__rbtree__HeadVar__2_2,
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0_3,
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc1_4,
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0_5,
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc2_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__rbtree__succeeded;

        switch (MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *mercury__rbtree__STATE_VARIABLE_Acc2_6 = mercury__rbtree__STATE_VARIABLE_Acc2_0_5;
              *mercury__rbtree__STATE_VARIABLE_Acc1_4 = mercury__rbtree__STATE_VARIABLE_Acc1_0_3;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__rbtree__K_15 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
              MR_Box mercury__rbtree__V_16 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
              MR_Word mercury__rbtree__Left_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
              MR_Word mercury__rbtree__Right_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_25_25;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_26_26;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_27_27;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_28_28;
              void MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

              {
                mercury__rbtree__foldl2_6_p_0(mercury__rbtree__TypeInfo_for_K_48, mercury__rbtree__TypeInfo_for_V_49, mercury__rbtree__TypeInfo_for_T_50, mercury__rbtree__TypeInfo_for_U_51, mercury__rbtree__Pred_1, mercury__rbtree__Left_17, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_25_25, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_26_26);
              }
              mercury__rbtree__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
              {
                mercury__rbtree__func_1(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_15, mercury__rbtree__V_16, mercury__rbtree__STATE_VARIABLE_Acc1_25_25, &mercury__rbtree__STATE_VARIABLE_Acc1_27_27, mercury__rbtree__STATE_VARIABLE_Acc2_26_26, &mercury__rbtree__STATE_VARIABLE_Acc2_28_28);
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_18;
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_27_27;
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_28_28;

                mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
                mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
                mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
              }
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Box mercury__rbtree__K_32 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
              MR_Box mercury__rbtree__V_33 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
              MR_Word mercury__rbtree__Left_34 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
              MR_Word mercury__rbtree__Right_35 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_42_42;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_43_43;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_44_44;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_45_45;
              void MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *);

              {
                mercury__rbtree__foldl2_6_p_0(mercury__rbtree__TypeInfo_for_K_48, mercury__rbtree__TypeInfo_for_V_49, mercury__rbtree__TypeInfo_for_T_50, mercury__rbtree__TypeInfo_for_U_51, mercury__rbtree__Pred_1, mercury__rbtree__Left_34, mercury__rbtree__STATE_VARIABLE_Acc1_0_3, &mercury__rbtree__STATE_VARIABLE_Acc1_42_42, mercury__rbtree__STATE_VARIABLE_Acc2_0_5, &mercury__rbtree__STATE_VARIABLE_Acc2_43_43);
              }
              mercury__rbtree__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__Pred_1, (MR_Integer) 1)));
              {
                mercury__rbtree__func_0(((MR_Box) mercury__rbtree__Pred_1), mercury__rbtree__K_32, mercury__rbtree__V_33, mercury__rbtree__STATE_VARIABLE_Acc1_42_42, &mercury__rbtree__STATE_VARIABLE_Acc1_44_44, mercury__rbtree__STATE_VARIABLE_Acc2_43_43, &mercury__rbtree__STATE_VARIABLE_Acc2_45_45);
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_35;
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc1_44_44;
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5 = mercury__rbtree__STATE_VARIABLE_Acc2_45_45;

                mercury__rbtree__STATE_VARIABLE_Acc2_0_5 = mercury__rbtree__STATE_VARIABLE_Acc2_0__tmp_copy_5;
                mercury__rbtree__STATE_VARIABLE_Acc1_0_3 = mercury__rbtree__STATE_VARIABLE_Acc1_0__tmp_copy_3;
                mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
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
mercury__rbtree__foldl_4_p_5(
  MR_Word mercury__rbtree__TypeInfo_for_K_31,
  MR_Word mercury__rbtree__TypeInfo_for_V_32,
  MR_Word mercury__rbtree__TypeInfo_for_T_33,
  MR_Word mercury__rbtree__HeadVar__1_1,
  MR_Word mercury__rbtree__HeadVar__2_2,
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0_3,
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__rbtree__succeeded;

        switch (MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *mercury__rbtree__STATE_VARIABLE_Acc_4 = mercury__rbtree__STATE_VARIABLE_Acc_0_3;
              mercury__rbtree__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__rbtree__K_10 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
              MR_Box mercury__rbtree__V_11 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
              MR_Word mercury__rbtree__Left_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
              MR_Word mercury__rbtree__Right_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_17_17;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_18_18;
              MR_bool MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

              {
                mercury__rbtree__succeeded = mercury__rbtree__foldl_4_p_5(mercury__rbtree__TypeInfo_for_K_31, mercury__rbtree__TypeInfo_for_V_32, mercury__rbtree__TypeInfo_for_T_33, mercury__rbtree__HeadVar__1_1, mercury__rbtree__Left_12, mercury__rbtree__STATE_VARIABLE_Acc_0_3, &mercury__rbtree__STATE_VARIABLE_Acc_17_17);
              }
              if (mercury__rbtree__succeeded)
                {
                  mercury__rbtree__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1)));
                  {
                    mercury__rbtree__succeeded = mercury__rbtree__func_1(((MR_Box) mercury__rbtree__HeadVar__1_1), mercury__rbtree__K_10, mercury__rbtree__V_11, mercury__rbtree__STATE_VARIABLE_Acc_17_17, &mercury__rbtree__STATE_VARIABLE_Acc_18_18);
                  }
                  if (mercury__rbtree__succeeded)
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_13;
                        MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc_18_18;

                        mercury__rbtree__STATE_VARIABLE_Acc_0_3 = mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3;
                        mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
                      }
                      continue;
                    }
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Box mercury__rbtree__K_21 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
              MR_Box mercury__rbtree__V_22 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
              MR_Word mercury__rbtree__Left_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
              MR_Word mercury__rbtree__Right_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_28_28;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_29_29;
              MR_bool MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

              {
                mercury__rbtree__succeeded = mercury__rbtree__foldl_4_p_5(mercury__rbtree__TypeInfo_for_K_31, mercury__rbtree__TypeInfo_for_V_32, mercury__rbtree__TypeInfo_for_T_33, mercury__rbtree__HeadVar__1_1, mercury__rbtree__Left_23, mercury__rbtree__STATE_VARIABLE_Acc_0_3, &mercury__rbtree__STATE_VARIABLE_Acc_28_28);
              }
              if (mercury__rbtree__succeeded)
                {
                  mercury__rbtree__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1)));
                  {
                    mercury__rbtree__succeeded = mercury__rbtree__func_0(((MR_Box) mercury__rbtree__HeadVar__1_1), mercury__rbtree__K_21, mercury__rbtree__V_22, mercury__rbtree__STATE_VARIABLE_Acc_28_28, &mercury__rbtree__STATE_VARIABLE_Acc_29_29);
                  }
                  if (mercury__rbtree__succeeded)
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_24;
                        MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc_29_29;

                        mercury__rbtree__STATE_VARIABLE_Acc_0_3 = mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3;
                        mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
                      }
                      continue;
                    }
                }
            }
            break;
        }
        return mercury__rbtree__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__rbtree__foldl_4_p_4(
  MR_Word mercury__rbtree__TypeInfo_for_K_31,
  MR_Word mercury__rbtree__TypeInfo_for_V_32,
  MR_Word mercury__rbtree__TypeInfo_for_T_33,
  MR_Word mercury__rbtree__HeadVar__1_1,
  MR_Word mercury__rbtree__HeadVar__2_2,
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0_3,
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__rbtree__succeeded;

        switch (MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *mercury__rbtree__STATE_VARIABLE_Acc_4 = mercury__rbtree__STATE_VARIABLE_Acc_0_3;
              mercury__rbtree__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__rbtree__K_10 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
              MR_Box mercury__rbtree__V_11 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
              MR_Word mercury__rbtree__Left_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
              MR_Word mercury__rbtree__Right_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_17_17;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_18_18;
              MR_bool MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

              {
                mercury__rbtree__succeeded = mercury__rbtree__foldl_4_p_4(mercury__rbtree__TypeInfo_for_K_31, mercury__rbtree__TypeInfo_for_V_32, mercury__rbtree__TypeInfo_for_T_33, mercury__rbtree__HeadVar__1_1, mercury__rbtree__Left_12, mercury__rbtree__STATE_VARIABLE_Acc_0_3, &mercury__rbtree__STATE_VARIABLE_Acc_17_17);
              }
              if (mercury__rbtree__succeeded)
                {
                  mercury__rbtree__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1)));
                  {
                    mercury__rbtree__succeeded = mercury__rbtree__func_1(((MR_Box) mercury__rbtree__HeadVar__1_1), mercury__rbtree__K_10, mercury__rbtree__V_11, mercury__rbtree__STATE_VARIABLE_Acc_17_17, &mercury__rbtree__STATE_VARIABLE_Acc_18_18);
                  }
                  if (mercury__rbtree__succeeded)
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_13;
                        MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc_18_18;

                        mercury__rbtree__STATE_VARIABLE_Acc_0_3 = mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3;
                        mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
                      }
                      continue;
                    }
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Box mercury__rbtree__K_21 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
              MR_Box mercury__rbtree__V_22 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
              MR_Word mercury__rbtree__Left_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
              MR_Word mercury__rbtree__Right_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_28_28;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_29_29;
              MR_bool MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

              {
                mercury__rbtree__succeeded = mercury__rbtree__foldl_4_p_4(mercury__rbtree__TypeInfo_for_K_31, mercury__rbtree__TypeInfo_for_V_32, mercury__rbtree__TypeInfo_for_T_33, mercury__rbtree__HeadVar__1_1, mercury__rbtree__Left_23, mercury__rbtree__STATE_VARIABLE_Acc_0_3, &mercury__rbtree__STATE_VARIABLE_Acc_28_28);
              }
              if (mercury__rbtree__succeeded)
                {
                  mercury__rbtree__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1)));
                  {
                    mercury__rbtree__succeeded = mercury__rbtree__func_0(((MR_Box) mercury__rbtree__HeadVar__1_1), mercury__rbtree__K_21, mercury__rbtree__V_22, mercury__rbtree__STATE_VARIABLE_Acc_28_28, &mercury__rbtree__STATE_VARIABLE_Acc_29_29);
                  }
                  if (mercury__rbtree__succeeded)
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_24;
                        MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc_29_29;

                        mercury__rbtree__STATE_VARIABLE_Acc_0_3 = mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3;
                        mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
                      }
                      continue;
                    }
                }
            }
            break;
        }
        return mercury__rbtree__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__rbtree__foldl_4_p_3(
  MR_Word mercury__rbtree__TypeInfo_for_K_31,
  MR_Word mercury__rbtree__TypeInfo_for_V_32,
  MR_Word mercury__rbtree__TypeInfo_for_T_33,
  MR_Word mercury__rbtree__HeadVar__1_1,
  MR_Word mercury__rbtree__HeadVar__2_2,
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0_3,
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__rbtree__succeeded;

        switch (MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *mercury__rbtree__STATE_VARIABLE_Acc_4 = mercury__rbtree__STATE_VARIABLE_Acc_0_3;
              mercury__rbtree__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__rbtree__K_10 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
              MR_Box mercury__rbtree__V_11 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
              MR_Word mercury__rbtree__Left_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
              MR_Word mercury__rbtree__Right_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_17_17;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_18_18;
              MR_bool MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

              {
                mercury__rbtree__succeeded = mercury__rbtree__foldl_4_p_3(mercury__rbtree__TypeInfo_for_K_31, mercury__rbtree__TypeInfo_for_V_32, mercury__rbtree__TypeInfo_for_T_33, mercury__rbtree__HeadVar__1_1, mercury__rbtree__Left_12, mercury__rbtree__STATE_VARIABLE_Acc_0_3, &mercury__rbtree__STATE_VARIABLE_Acc_17_17);
              }
              if (mercury__rbtree__succeeded)
                {
                  mercury__rbtree__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1)));
                  {
                    mercury__rbtree__succeeded = mercury__rbtree__func_1(((MR_Box) mercury__rbtree__HeadVar__1_1), mercury__rbtree__K_10, mercury__rbtree__V_11, mercury__rbtree__STATE_VARIABLE_Acc_17_17, &mercury__rbtree__STATE_VARIABLE_Acc_18_18);
                  }
                  if (mercury__rbtree__succeeded)
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_13;
                        MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc_18_18;

                        mercury__rbtree__STATE_VARIABLE_Acc_0_3 = mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3;
                        mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
                      }
                      continue;
                    }
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Box mercury__rbtree__K_21 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
              MR_Box mercury__rbtree__V_22 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
              MR_Word mercury__rbtree__Left_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
              MR_Word mercury__rbtree__Right_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_28_28;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_29_29;
              MR_bool MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

              {
                mercury__rbtree__succeeded = mercury__rbtree__foldl_4_p_3(mercury__rbtree__TypeInfo_for_K_31, mercury__rbtree__TypeInfo_for_V_32, mercury__rbtree__TypeInfo_for_T_33, mercury__rbtree__HeadVar__1_1, mercury__rbtree__Left_23, mercury__rbtree__STATE_VARIABLE_Acc_0_3, &mercury__rbtree__STATE_VARIABLE_Acc_28_28);
              }
              if (mercury__rbtree__succeeded)
                {
                  mercury__rbtree__func_0 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1)));
                  {
                    mercury__rbtree__succeeded = mercury__rbtree__func_0(((MR_Box) mercury__rbtree__HeadVar__1_1), mercury__rbtree__K_21, mercury__rbtree__V_22, mercury__rbtree__STATE_VARIABLE_Acc_28_28, &mercury__rbtree__STATE_VARIABLE_Acc_29_29);
                  }
                  if (mercury__rbtree__succeeded)
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_24;
                        MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc_29_29;

                        mercury__rbtree__STATE_VARIABLE_Acc_0_3 = mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3;
                        mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
                      }
                      continue;
                    }
                }
            }
            break;
        }
        return mercury__rbtree__succeeded;
      }
      break;
    }
}

void MR_CALL 
mercury__rbtree__foldl_4_p_2(
  MR_Word mercury__rbtree__TypeInfo_for_K_31,
  MR_Word mercury__rbtree__TypeInfo_for_V_32,
  MR_Word mercury__rbtree__TypeInfo_for_T_33,
  MR_Word mercury__rbtree__HeadVar__1_1,
  MR_Word mercury__rbtree__HeadVar__2_2,
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0_3,
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__rbtree__succeeded;

        switch (MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *mercury__rbtree__STATE_VARIABLE_Acc_4 = mercury__rbtree__STATE_VARIABLE_Acc_0_3;
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__rbtree__K_10 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
              MR_Box mercury__rbtree__V_11 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
              MR_Word mercury__rbtree__Left_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
              MR_Word mercury__rbtree__Right_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_17_17;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_18_18;
              void MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

              {
                mercury__rbtree__foldl_4_p_2(mercury__rbtree__TypeInfo_for_K_31, mercury__rbtree__TypeInfo_for_V_32, mercury__rbtree__TypeInfo_for_T_33, mercury__rbtree__HeadVar__1_1, mercury__rbtree__Left_12, mercury__rbtree__STATE_VARIABLE_Acc_0_3, &mercury__rbtree__STATE_VARIABLE_Acc_17_17);
              }
              mercury__rbtree__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1)));
              {
                mercury__rbtree__func_1(((MR_Box) mercury__rbtree__HeadVar__1_1), mercury__rbtree__K_10, mercury__rbtree__V_11, mercury__rbtree__STATE_VARIABLE_Acc_17_17, &mercury__rbtree__STATE_VARIABLE_Acc_18_18);
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_13;
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc_18_18;

                mercury__rbtree__STATE_VARIABLE_Acc_0_3 = mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3;
                mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
              }
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Box mercury__rbtree__K_21 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
              MR_Box mercury__rbtree__V_22 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
              MR_Word mercury__rbtree__Left_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
              MR_Word mercury__rbtree__Right_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_28_28;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_29_29;
              void MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

              {
                mercury__rbtree__foldl_4_p_2(mercury__rbtree__TypeInfo_for_K_31, mercury__rbtree__TypeInfo_for_V_32, mercury__rbtree__TypeInfo_for_T_33, mercury__rbtree__HeadVar__1_1, mercury__rbtree__Left_23, mercury__rbtree__STATE_VARIABLE_Acc_0_3, &mercury__rbtree__STATE_VARIABLE_Acc_28_28);
              }
              mercury__rbtree__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1)));
              {
                mercury__rbtree__func_0(((MR_Box) mercury__rbtree__HeadVar__1_1), mercury__rbtree__K_21, mercury__rbtree__V_22, mercury__rbtree__STATE_VARIABLE_Acc_28_28, &mercury__rbtree__STATE_VARIABLE_Acc_29_29);
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_24;
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc_29_29;

                mercury__rbtree__STATE_VARIABLE_Acc_0_3 = mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3;
                mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
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
mercury__rbtree__foldl_4_p_1(
  MR_Word mercury__rbtree__TypeInfo_for_K_31,
  MR_Word mercury__rbtree__TypeInfo_for_V_32,
  MR_Word mercury__rbtree__TypeInfo_for_T_33,
  MR_Word mercury__rbtree__HeadVar__1_1,
  MR_Word mercury__rbtree__HeadVar__2_2,
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0_3,
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__rbtree__succeeded;

        switch (MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *mercury__rbtree__STATE_VARIABLE_Acc_4 = mercury__rbtree__STATE_VARIABLE_Acc_0_3;
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__rbtree__K_10 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
              MR_Box mercury__rbtree__V_11 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
              MR_Word mercury__rbtree__Left_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
              MR_Word mercury__rbtree__Right_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_17_17;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_18_18;
              void MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

              {
                mercury__rbtree__foldl_4_p_1(mercury__rbtree__TypeInfo_for_K_31, mercury__rbtree__TypeInfo_for_V_32, mercury__rbtree__TypeInfo_for_T_33, mercury__rbtree__HeadVar__1_1, mercury__rbtree__Left_12, mercury__rbtree__STATE_VARIABLE_Acc_0_3, &mercury__rbtree__STATE_VARIABLE_Acc_17_17);
              }
              mercury__rbtree__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1)));
              {
                mercury__rbtree__func_1(((MR_Box) mercury__rbtree__HeadVar__1_1), mercury__rbtree__K_10, mercury__rbtree__V_11, mercury__rbtree__STATE_VARIABLE_Acc_17_17, &mercury__rbtree__STATE_VARIABLE_Acc_18_18);
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_13;
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc_18_18;

                mercury__rbtree__STATE_VARIABLE_Acc_0_3 = mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3;
                mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
              }
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Box mercury__rbtree__K_21 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
              MR_Box mercury__rbtree__V_22 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
              MR_Word mercury__rbtree__Left_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
              MR_Word mercury__rbtree__Right_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_28_28;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_29_29;
              void MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

              {
                mercury__rbtree__foldl_4_p_1(mercury__rbtree__TypeInfo_for_K_31, mercury__rbtree__TypeInfo_for_V_32, mercury__rbtree__TypeInfo_for_T_33, mercury__rbtree__HeadVar__1_1, mercury__rbtree__Left_23, mercury__rbtree__STATE_VARIABLE_Acc_0_3, &mercury__rbtree__STATE_VARIABLE_Acc_28_28);
              }
              mercury__rbtree__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1)));
              {
                mercury__rbtree__func_0(((MR_Box) mercury__rbtree__HeadVar__1_1), mercury__rbtree__K_21, mercury__rbtree__V_22, mercury__rbtree__STATE_VARIABLE_Acc_28_28, &mercury__rbtree__STATE_VARIABLE_Acc_29_29);
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_24;
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc_29_29;

                mercury__rbtree__STATE_VARIABLE_Acc_0_3 = mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3;
                mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
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
mercury__rbtree__foldl_4_p_0(
  MR_Word mercury__rbtree__TypeInfo_for_K_31,
  MR_Word mercury__rbtree__TypeInfo_for_V_32,
  MR_Word mercury__rbtree__TypeInfo_for_T_33,
  MR_Word mercury__rbtree__HeadVar__1_1,
  MR_Word mercury__rbtree__HeadVar__2_2,
  MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0_3,
  MR_Box * mercury__rbtree__STATE_VARIABLE_Acc_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__rbtree__succeeded;

        switch (MR_tag((MR_Word) mercury__rbtree__HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *mercury__rbtree__STATE_VARIABLE_Acc_4 = mercury__rbtree__STATE_VARIABLE_Acc_0_3;
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__rbtree__K_10 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
              MR_Box mercury__rbtree__V_11 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
              MR_Word mercury__rbtree__Left_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
              MR_Word mercury__rbtree__Right_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_17_17;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_18_18;
              void MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

              {
                mercury__rbtree__foldl_4_p_0(mercury__rbtree__TypeInfo_for_K_31, mercury__rbtree__TypeInfo_for_V_32, mercury__rbtree__TypeInfo_for_T_33, mercury__rbtree__HeadVar__1_1, mercury__rbtree__Left_12, mercury__rbtree__STATE_VARIABLE_Acc_0_3, &mercury__rbtree__STATE_VARIABLE_Acc_17_17);
              }
              mercury__rbtree__func_1 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1)));
              {
                mercury__rbtree__func_1(((MR_Box) mercury__rbtree__HeadVar__1_1), mercury__rbtree__K_10, mercury__rbtree__V_11, mercury__rbtree__STATE_VARIABLE_Acc_17_17, &mercury__rbtree__STATE_VARIABLE_Acc_18_18);
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_13;
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc_18_18;

                mercury__rbtree__STATE_VARIABLE_Acc_0_3 = mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3;
                mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
              }
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Box mercury__rbtree__K_21 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 0));
              MR_Box mercury__rbtree__V_22 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 1));
              MR_Word mercury__rbtree__Left_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 2)));
              MR_Word mercury__rbtree__Right_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__2_2, (MR_Integer) 3)));
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_28_28;
              MR_Box mercury__rbtree__STATE_VARIABLE_Acc_29_29;
              void MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *);

              {
                mercury__rbtree__foldl_4_p_0(mercury__rbtree__TypeInfo_for_K_31, mercury__rbtree__TypeInfo_for_V_32, mercury__rbtree__TypeInfo_for_T_33, mercury__rbtree__HeadVar__1_1, mercury__rbtree__Left_23, mercury__rbtree__STATE_VARIABLE_Acc_0_3, &mercury__rbtree__STATE_VARIABLE_Acc_28_28);
              }
              mercury__rbtree__func_0 = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1)));
              {
                mercury__rbtree__func_0(((MR_Box) mercury__rbtree__HeadVar__1_1), mercury__rbtree__K_21, mercury__rbtree__V_22, mercury__rbtree__STATE_VARIABLE_Acc_28_28, &mercury__rbtree__STATE_VARIABLE_Acc_29_29);
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__rbtree__HeadVar__2__tmp_copy_2 = mercury__rbtree__Right_24;
                MR_Box mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3 = mercury__rbtree__STATE_VARIABLE_Acc_29_29;

                mercury__rbtree__STATE_VARIABLE_Acc_0_3 = mercury__rbtree__STATE_VARIABLE_Acc_0__tmp_copy_3;
                mercury__rbtree__HeadVar__2_2 = mercury__rbtree__HeadVar__2__tmp_copy_2;
              }
              continue;
            }
            break;
        }
      }
      break;
    }
}

MR_Box MR_CALL 
mercury__rbtree__foldl_3_f_0(
  MR_Word mercury__rbtree__TypeInfo_for_K_22,
  MR_Word mercury__rbtree__TypeInfo_for_V_23,
  MR_Word mercury__rbtree__TypeInfo_for_T_24,
  MR_Word mercury__rbtree__F_5,
  MR_Word mercury__rbtree__T_6,
  MR_Box mercury__rbtree__A_7)
{
  {
    MR_bool mercury__rbtree__succeeded;
    MR_Box mercury__rbtree__B_8;

    {
      mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_50_95_95_91_49_44_32_50_44_32_51_44_32_53_44_32_54_44_32_55_44_32_56_93_95_48_4_p_0(mercury__rbtree__F_5, mercury__rbtree__T_6, mercury__rbtree__A_7, &mercury__rbtree__B_8);
    }
    return mercury__rbtree__B_8;
  }
}

MR_Word MR_CALL 
mercury__rbtree__to_assoc_list_1_f_0(
  MR_Word mercury__rbtree__TypeInfo_for_K_4,
  MR_Word mercury__rbtree__TypeInfo_for_V_5,
  MR_Word mercury__rbtree__T_3)
{
  {
    MR_bool mercury__rbtree__succeeded;
    MR_Word mercury__rbtree__HeadVar__2_2;

    {
      mercury__rbtree__rbtree_to_assoc_list_2_p_0(mercury__rbtree__TypeInfo_for_K_4, mercury__rbtree__TypeInfo_for_V_5, mercury__rbtree__T_3, &mercury__rbtree__HeadVar__2_2);
    }
    return mercury__rbtree__HeadVar__2_2;
  }
}

void MR_CALL 
mercury__rbtree__rbtree_to_assoc_list_2_p_0(
  MR_Word mercury__rbtree__TypeInfo_for_K_21,
  MR_Word mercury__rbtree__TypeInfo_for_V_22,
  MR_Word mercury__rbtree__HeadVar__1_1,
  MR_Word * mercury__rbtree__HeadVar__2_2)
{
  {
    MR_bool mercury__rbtree__succeeded;

    switch (MR_tag((MR_Word) mercury__rbtree__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *mercury__rbtree__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Word mercury__rbtree__TypeCtorInfo_23_23;
          MR_Word mercury__rbtree__TypeInfo_24_24;
          MR_Box mercury__rbtree__K0_3 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));
          MR_Box mercury__rbtree__V0_4 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));
          MR_Word mercury__rbtree__Left_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
          MR_Word mercury__rbtree__Right_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));
          MR_Word mercury__rbtree__L0_8;
          MR_Word mercury__rbtree__L1_9;
          MR_Word mercury__rbtree__V_10_10;
          MR_Word mercury__rbtree__V_11_11;
          MR_Word mercury__rbtree__conv1_HeadVar__2_2;

          {
            mercury__rbtree__rbtree_to_assoc_list_2_p_0(mercury__rbtree__TypeInfo_for_K_21, mercury__rbtree__TypeInfo_for_V_22, mercury__rbtree__Left_5, &mercury__rbtree__L0_8);
          }
          {
            mercury__rbtree__rbtree_to_assoc_list_2_p_0(mercury__rbtree__TypeInfo_for_K_21, mercury__rbtree__TypeInfo_for_V_22, mercury__rbtree__Right_6, &mercury__rbtree__L1_9);
          }
          {
            mercury__rbtree__V_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mercury__rbtree__V_11_11, 0) = mercury__rbtree__K0_3;
            MR_hl_field(MR_mktag(0), mercury__rbtree__V_11_11, 1) = mercury__rbtree__V0_4;
          }
          {
            mercury__rbtree__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__rbtree__V_10_10, 0) = ((MR_Box) (mercury__rbtree__V_11_11));
            MR_hl_field(MR_mktag(1), mercury__rbtree__V_10_10, 1) = ((MR_Box) (mercury__rbtree__L1_9));
          }
          mercury__rbtree__TypeCtorInfo_23_23 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
          {
            mercury__rbtree__TypeInfo_24_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mercury__rbtree__TypeInfo_24_24, 0) = ((MR_Box) (mercury__rbtree__TypeCtorInfo_23_23));
            MR_hl_field(MR_mktag(0), mercury__rbtree__TypeInfo_24_24, 1) = ((MR_Box) (mercury__rbtree__TypeInfo_for_K_21));
            MR_hl_field(MR_mktag(0), mercury__rbtree__TypeInfo_24_24, 2) = ((MR_Box) (mercury__rbtree__TypeInfo_for_V_22));
          }
          {
            mercury__list__append_3_p_1(mercury__rbtree__TypeInfo_24_24, (MR_Word) mercury__rbtree__L0_8, (MR_Word) mercury__rbtree__V_10_10, &mercury__rbtree__conv1_HeadVar__2_2);
          }
          *mercury__rbtree__HeadVar__2_2 = (MR_Word) mercury__rbtree__conv1_HeadVar__2_2;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mercury__rbtree__TypeCtorInfo_25_25;
          MR_Word mercury__rbtree__TypeInfo_26_26;
          MR_Box mercury__rbtree__K0_12 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));
          MR_Box mercury__rbtree__V0_13 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));
          MR_Word mercury__rbtree__Left_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
          MR_Word mercury__rbtree__Right_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));
          MR_Word mercury__rbtree__L0_17;
          MR_Word mercury__rbtree__L1_18;
          MR_Word mercury__rbtree__V_19_19;
          MR_Word mercury__rbtree__V_20_20;
          MR_Word mercury__rbtree__conv0_HeadVar__2_2;

          {
            mercury__rbtree__rbtree_to_assoc_list_2_p_0(mercury__rbtree__TypeInfo_for_K_21, mercury__rbtree__TypeInfo_for_V_22, mercury__rbtree__Left_14, &mercury__rbtree__L0_17);
          }
          {
            mercury__rbtree__rbtree_to_assoc_list_2_p_0(mercury__rbtree__TypeInfo_for_K_21, mercury__rbtree__TypeInfo_for_V_22, mercury__rbtree__Right_15, &mercury__rbtree__L1_18);
          }
          {
            mercury__rbtree__V_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mercury__rbtree__V_20_20, 0) = mercury__rbtree__K0_12;
            MR_hl_field(MR_mktag(0), mercury__rbtree__V_20_20, 1) = mercury__rbtree__V0_13;
          }
          {
            mercury__rbtree__V_19_19 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__rbtree__V_19_19, 0) = ((MR_Box) (mercury__rbtree__V_20_20));
            MR_hl_field(MR_mktag(1), mercury__rbtree__V_19_19, 1) = ((MR_Box) (mercury__rbtree__L1_18));
          }
          mercury__rbtree__TypeCtorInfo_25_25 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
          {
            mercury__rbtree__TypeInfo_26_26 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mercury__rbtree__TypeInfo_26_26, 0) = ((MR_Box) (mercury__rbtree__TypeCtorInfo_25_25));
            MR_hl_field(MR_mktag(0), mercury__rbtree__TypeInfo_26_26, 1) = ((MR_Box) (mercury__rbtree__TypeInfo_for_K_21));
            MR_hl_field(MR_mktag(0), mercury__rbtree__TypeInfo_26_26, 2) = ((MR_Box) (mercury__rbtree__TypeInfo_for_V_22));
          }
          {
            mercury__list__append_3_p_1(mercury__rbtree__TypeInfo_26_26, (MR_Word) mercury__rbtree__L0_17, (MR_Word) mercury__rbtree__V_19_19, &mercury__rbtree__conv0_HeadVar__2_2);
          }
          *mercury__rbtree__HeadVar__2_2 = (MR_Word) mercury__rbtree__conv0_HeadVar__2_2;
        }
        break;
    }
  }
}

MR_Word MR_CALL 
mercury__rbtree__rbtree_to_assoc_list_1_f_0(
  MR_Word mercury__rbtree__TypeInfo_for_K_5,
  MR_Word mercury__rbtree__TypeInfo_for_V_6,
  MR_Word mercury__rbtree__RBT_3)
{
  {
    MR_bool mercury__rbtree__succeeded;
    MR_Word mercury__rbtree__AL_4;

    {
      mercury__rbtree__rbtree_to_assoc_list_2_p_0(mercury__rbtree__TypeInfo_for_K_5, mercury__rbtree__TypeInfo_for_V_6, mercury__rbtree__RBT_3, &mercury__rbtree__AL_4);
    }
    return mercury__rbtree__AL_4;
  }
}

MR_Word MR_CALL 
mercury__rbtree__from_assoc_list_1_f_0(
  MR_Word mercury__rbtree__TypeInfo_for_K_4,
  MR_Word mercury__rbtree__TypeInfo_for_V_5,
  MR_Word mercury__rbtree__AList_3)
{
  {
    MR_bool mercury__rbtree__succeeded;
    MR_Word mercury__rbtree__HeadVar__2_2;

    {
      mercury__rbtree__assoc_list_to_rbtree_2_p_0(mercury__rbtree__TypeInfo_for_K_4, mercury__rbtree__TypeInfo_for_V_5, mercury__rbtree__AList_3, &mercury__rbtree__HeadVar__2_2);
    }
    return mercury__rbtree__HeadVar__2_2;
  }
}

void MR_CALL 
mercury__rbtree__assoc_list_to_rbtree_2_p_0(
  MR_Word mercury__rbtree__TypeInfo_for_K_9,
  MR_Word mercury__rbtree__TypeInfo_for_V_10,
  MR_Word mercury__rbtree__HeadVar__1_1,
  MR_Word * mercury__rbtree__HeadVar__2_2)
{
  {
    MR_bool mercury__rbtree__succeeded;

    if ((mercury__rbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__rbtree__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Box mercury__rbtree__K_3;
        MR_Box mercury__rbtree__V_4;
        MR_Word mercury__rbtree__T_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__rbtree__Tree0_7;
        MR_Word mercury__rbtree__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0)));

        mercury__rbtree__K_3 = (MR_hl_field(MR_mktag(0), mercury__rbtree__V_8_8, (MR_Integer) 0));
        mercury__rbtree__V_4 = (MR_hl_field(MR_mktag(0), mercury__rbtree__V_8_8, (MR_Integer) 1));
        {
          mercury__rbtree__assoc_list_to_rbtree_2_p_0(mercury__rbtree__TypeInfo_for_K_9, mercury__rbtree__TypeInfo_for_V_10, mercury__rbtree__T_5, &mercury__rbtree__Tree0_7);
        }
        {
          mercury__rbtree__set_4_p_0(mercury__rbtree__TypeInfo_for_K_9, mercury__rbtree__TypeInfo_for_V_10, mercury__rbtree__K_3, mercury__rbtree__V_4, mercury__rbtree__Tree0_7, mercury__rbtree__HeadVar__2_2);
        }
      }
  }
}

MR_Word MR_CALL 
mercury__rbtree__assoc_list_to_rbtree_1_f_0(
  MR_Word mercury__rbtree__TypeInfo_for_K_5,
  MR_Word mercury__rbtree__TypeInfo_for_V_6,
  MR_Word mercury__rbtree__AL_3)
{
  {
    MR_bool mercury__rbtree__succeeded;
    MR_Word mercury__rbtree__RBT_4;

    {
      mercury__rbtree__assoc_list_to_rbtree_2_p_0(mercury__rbtree__TypeInfo_for_K_5, mercury__rbtree__TypeInfo_for_V_6, mercury__rbtree__AL_3, &mercury__rbtree__RBT_4);
    }
    return mercury__rbtree__RBT_4;
  }
}

void MR_CALL 
mercury__rbtree__count_2_p_0(
  MR_Word mercury__rbtree__TypeInfo_for_K_21,
  MR_Word mercury__rbtree__TypeInfo_for_V_22,
  MR_Word mercury__rbtree__HeadVar__1_1,
  MR_Integer * mercury__rbtree__HeadVar__2_2)
{
  {
    MR_bool mercury__rbtree__succeeded;

    switch (MR_tag((MR_Word) mercury__rbtree__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *mercury__rbtree__HeadVar__2_2 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        {
          MR_Word mercury__rbtree__L_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
          MR_Word mercury__rbtree__R_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));
          MR_Integer mercury__rbtree__NO_8;
          MR_Integer mercury__rbtree__N1_9;
          MR_Integer mercury__rbtree__V_10_10;
          MR_Box mercury__rbtree___K_3 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));
          MR_Box mercury__rbtree___V_4 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));

          {
            mercury__rbtree__count_2_p_0(mercury__rbtree__TypeInfo_for_K_21, mercury__rbtree__TypeInfo_for_V_22, mercury__rbtree__L_5, &mercury__rbtree__NO_8);
          }
          {
            mercury__rbtree__count_2_p_0(mercury__rbtree__TypeInfo_for_K_21, mercury__rbtree__TypeInfo_for_V_22, mercury__rbtree__R_6, &mercury__rbtree__N1_9);
          }
          mercury__rbtree__V_10_10 = ((MR_Integer) 1 + mercury__rbtree__NO_8);
          *mercury__rbtree__HeadVar__2_2 = (mercury__rbtree__V_10_10 + mercury__rbtree__N1_9);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mercury__rbtree__L_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
          MR_Word mercury__rbtree__R_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));
          MR_Integer mercury__rbtree__NO_17;
          MR_Integer mercury__rbtree__N1_18;
          MR_Integer mercury__rbtree__V_19_19;
          MR_Box mercury__rbtree___K_12 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));
          MR_Box mercury__rbtree___V_13 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));

          {
            mercury__rbtree__count_2_p_0(mercury__rbtree__TypeInfo_for_K_21, mercury__rbtree__TypeInfo_for_V_22, mercury__rbtree__L_14, &mercury__rbtree__NO_17);
          }
          {
            mercury__rbtree__count_2_p_0(mercury__rbtree__TypeInfo_for_K_21, mercury__rbtree__TypeInfo_for_V_22, mercury__rbtree__R_15, &mercury__rbtree__N1_18);
          }
          mercury__rbtree__V_19_19 = ((MR_Integer) 1 + mercury__rbtree__NO_17);
          *mercury__rbtree__HeadVar__2_2 = (mercury__rbtree__V_19_19 + mercury__rbtree__N1_18);
        }
        break;
    }
  }
}

MR_Integer MR_CALL 
mercury__rbtree__count_1_f_0(
  MR_Word mercury__rbtree__TypeInfo_for_K_5,
  MR_Word mercury__rbtree__TypeInfo_for_V_6,
  MR_Word mercury__rbtree__RBT_3)
{
  {
    MR_bool mercury__rbtree__succeeded;
    MR_Integer mercury__rbtree__N_4;

    {
      mercury__rbtree__count_2_p_0(mercury__rbtree__TypeInfo_for_K_5, mercury__rbtree__TypeInfo_for_V_6, mercury__rbtree__RBT_3, &mercury__rbtree__N_4);
    }
    return mercury__rbtree__N_4;
  }
}

void MR_CALL 
mercury__rbtree__values_2_p_0(
  MR_Word mercury__rbtree__TypeInfo_for_K_19,
  MR_Word mercury__rbtree__TypeInfo_for_V_20,
  MR_Word mercury__rbtree__HeadVar__1_1,
  MR_Word * mercury__rbtree__HeadVar__2_2)
{
  {
    MR_bool mercury__rbtree__succeeded;

    switch (MR_tag((MR_Word) mercury__rbtree__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *mercury__rbtree__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Box mercury__rbtree__V0_4 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));
          MR_Word mercury__rbtree__L_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
          MR_Word mercury__rbtree__R_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));
          MR_Word mercury__rbtree__List0_8;
          MR_Word mercury__rbtree__List1_9;
          MR_Word mercury__rbtree__V_10_10;
          MR_Box mercury__rbtree___K0_3 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));

          {
            mercury__rbtree__values_2_p_0(mercury__rbtree__TypeInfo_for_K_19, mercury__rbtree__TypeInfo_for_V_20, mercury__rbtree__L_5, &mercury__rbtree__List0_8);
          }
          {
            mercury__rbtree__values_2_p_0(mercury__rbtree__TypeInfo_for_K_19, mercury__rbtree__TypeInfo_for_V_20, mercury__rbtree__R_6, &mercury__rbtree__List1_9);
          }
          {
            mercury__rbtree__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__rbtree__V_10_10, 0) = mercury__rbtree__V0_4;
            MR_hl_field(MR_mktag(1), mercury__rbtree__V_10_10, 1) = ((MR_Box) (mercury__rbtree__List1_9));
          }
          {
            mercury__list__append_3_p_1(mercury__rbtree__TypeInfo_for_V_20, mercury__rbtree__List0_8, mercury__rbtree__V_10_10, mercury__rbtree__HeadVar__2_2);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box mercury__rbtree__V0_12 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));
          MR_Word mercury__rbtree__L_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
          MR_Word mercury__rbtree__R_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));
          MR_Word mercury__rbtree__List0_16;
          MR_Word mercury__rbtree__List1_17;
          MR_Word mercury__rbtree__V_18_18;
          MR_Box mercury__rbtree___K0_11 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));

          {
            mercury__rbtree__values_2_p_0(mercury__rbtree__TypeInfo_for_K_19, mercury__rbtree__TypeInfo_for_V_20, mercury__rbtree__L_13, &mercury__rbtree__List0_16);
          }
          {
            mercury__rbtree__values_2_p_0(mercury__rbtree__TypeInfo_for_K_19, mercury__rbtree__TypeInfo_for_V_20, mercury__rbtree__R_14, &mercury__rbtree__List1_17);
          }
          {
            mercury__rbtree__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__rbtree__V_18_18, 0) = mercury__rbtree__V0_12;
            MR_hl_field(MR_mktag(1), mercury__rbtree__V_18_18, 1) = ((MR_Box) (mercury__rbtree__List1_17));
          }
          {
            mercury__list__append_3_p_1(mercury__rbtree__TypeInfo_for_V_20, mercury__rbtree__List0_16, mercury__rbtree__V_18_18, mercury__rbtree__HeadVar__2_2);
          }
        }
        break;
    }
  }
}

MR_Word MR_CALL 
mercury__rbtree__values_1_f_0(
  MR_Word mercury__rbtree__TypeInfo_for_K_5,
  MR_Word mercury__rbtree__TypeInfo_for_V_6,
  MR_Word mercury__rbtree__RBT_3)
{
  {
    MR_bool mercury__rbtree__succeeded;
    MR_Word mercury__rbtree__Vs_4;

    {
      mercury__rbtree__values_2_p_0(mercury__rbtree__TypeInfo_for_K_5, mercury__rbtree__TypeInfo_for_V_6, mercury__rbtree__RBT_3, &mercury__rbtree__Vs_4);
    }
    return mercury__rbtree__Vs_4;
  }
}

void MR_CALL 
mercury__rbtree__keys_2_p_0(
  MR_Word mercury__rbtree__TypeInfo_for_K_19,
  MR_Word mercury__rbtree__TypeInfo_for_V_20,
  MR_Word mercury__rbtree__HeadVar__1_1,
  MR_Word * mercury__rbtree__HeadVar__2_2)
{
  {
    MR_bool mercury__rbtree__succeeded;

    switch (MR_tag((MR_Word) mercury__rbtree__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        *mercury__rbtree__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
      case (MR_Integer) 1:
        {
          MR_Box mercury__rbtree__K0_3 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));
          MR_Word mercury__rbtree__L_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
          MR_Word mercury__rbtree__R_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));
          MR_Word mercury__rbtree__List0_8;
          MR_Word mercury__rbtree__List1_9;
          MR_Word mercury__rbtree__V_10_10;
          MR_Box mercury__rbtree___V0_4 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));

          {
            mercury__rbtree__keys_2_p_0(mercury__rbtree__TypeInfo_for_K_19, mercury__rbtree__TypeInfo_for_V_20, mercury__rbtree__L_5, &mercury__rbtree__List0_8);
          }
          {
            mercury__rbtree__keys_2_p_0(mercury__rbtree__TypeInfo_for_K_19, mercury__rbtree__TypeInfo_for_V_20, mercury__rbtree__R_6, &mercury__rbtree__List1_9);
          }
          {
            mercury__rbtree__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__rbtree__V_10_10, 0) = mercury__rbtree__K0_3;
            MR_hl_field(MR_mktag(1), mercury__rbtree__V_10_10, 1) = ((MR_Box) (mercury__rbtree__List1_9));
          }
          {
            mercury__list__append_3_p_1(mercury__rbtree__TypeInfo_for_K_19, mercury__rbtree__List0_8, mercury__rbtree__V_10_10, mercury__rbtree__HeadVar__2_2);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Box mercury__rbtree__K0_11 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));
          MR_Word mercury__rbtree__L_13 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
          MR_Word mercury__rbtree__R_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));
          MR_Word mercury__rbtree__List0_16;
          MR_Word mercury__rbtree__List1_17;
          MR_Word mercury__rbtree__V_18_18;
          MR_Box mercury__rbtree___V0_12 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));

          {
            mercury__rbtree__keys_2_p_0(mercury__rbtree__TypeInfo_for_K_19, mercury__rbtree__TypeInfo_for_V_20, mercury__rbtree__L_13, &mercury__rbtree__List0_16);
          }
          {
            mercury__rbtree__keys_2_p_0(mercury__rbtree__TypeInfo_for_K_19, mercury__rbtree__TypeInfo_for_V_20, mercury__rbtree__R_14, &mercury__rbtree__List1_17);
          }
          {
            mercury__rbtree__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__rbtree__V_18_18, 0) = mercury__rbtree__K0_11;
            MR_hl_field(MR_mktag(1), mercury__rbtree__V_18_18, 1) = ((MR_Box) (mercury__rbtree__List1_17));
          }
          {
            mercury__list__append_3_p_1(mercury__rbtree__TypeInfo_for_K_19, mercury__rbtree__List0_16, mercury__rbtree__V_18_18, mercury__rbtree__HeadVar__2_2);
          }
        }
        break;
    }
  }
}

MR_Word MR_CALL 
mercury__rbtree__keys_1_f_0(
  MR_Word mercury__rbtree__TypeInfo_for_K_5,
  MR_Word mercury__rbtree__TypeInfo_for_V_6,
  MR_Word mercury__rbtree__RBT_3)
{
  {
    MR_bool mercury__rbtree__succeeded;
    MR_Word mercury__rbtree__Ks_4;

    {
      mercury__rbtree__keys_2_p_0(mercury__rbtree__TypeInfo_for_K_5, mercury__rbtree__TypeInfo_for_V_6, mercury__rbtree__RBT_3, &mercury__rbtree__Ks_4);
    }
    return mercury__rbtree__Ks_4;
  }
}

MR_bool MR_CALL 
mercury__rbtree__remove_largest_4_p_0(
  MR_Word mercury__rbtree__TypeInfo_for_K_40,
  MR_Word mercury__rbtree__TypeInfo_for_V_41,
  MR_Box * mercury__rbtree__HeadVar__1_1,
  MR_Box * mercury__rbtree__HeadVar__2_2,
  MR_Word mercury__rbtree__HeadVar__3_3,
  MR_Word * mercury__rbtree__HeadVar__4_4)
{
  {
    MR_bool mercury__rbtree__succeeded;

    if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
      {
        MR_Box mercury__rbtree__K0_26 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, (MR_Integer) 0));
        MR_Box mercury__rbtree__V0_27 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, (MR_Integer) 1));
        MR_Word mercury__rbtree__L_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word mercury__rbtree__R_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, (MR_Integer) 3)));

        switch (MR_tag((MR_Word) mercury__rbtree__R_29)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *mercury__rbtree__HeadVar__1_1 = mercury__rbtree__K0_26;
              *mercury__rbtree__HeadVar__2_2 = mercury__rbtree__V0_27;
              *mercury__rbtree__HeadVar__4_4 = mercury__rbtree__L_28;
              mercury__rbtree__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              MR_Word mercury__rbtree__NewR_39;

              {
                mercury__rbtree__succeeded = mercury__rbtree__remove_largest_4_p_0(mercury__rbtree__TypeInfo_for_K_40, mercury__rbtree__TypeInfo_for_V_41, mercury__rbtree__HeadVar__1_1, mercury__rbtree__HeadVar__2_2, mercury__rbtree__R_29, &mercury__rbtree__NewR_39);
              }
              if (mercury__rbtree__succeeded)
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    *mercury__rbtree__HeadVar__4_4 = base;
                    MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_26;
                    MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_27;
                    MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__L_28));
                    MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__NewR_39));
                  }
                  mercury__rbtree__succeeded = MR_TRUE;
                }
            }
            break;
        }
      }
    else
    if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Box mercury__rbtree__K0_10 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__3_3, (MR_Integer) 0));
        MR_Box mercury__rbtree__V0_11 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__3_3, (MR_Integer) 1));
        MR_Word mercury__rbtree__L_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word mercury__rbtree__R_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__3_3, (MR_Integer) 3)));

        switch (MR_tag((MR_Word) mercury__rbtree__R_13)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *mercury__rbtree__HeadVar__1_1 = mercury__rbtree__K0_10;
              *mercury__rbtree__HeadVar__2_2 = mercury__rbtree__V0_11;
              *mercury__rbtree__HeadVar__4_4 = mercury__rbtree__L_12;
              mercury__rbtree__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              MR_Word mercury__rbtree__NewR_23;

              {
                mercury__rbtree__succeeded = mercury__rbtree__remove_largest_4_p_0(mercury__rbtree__TypeInfo_for_K_40, mercury__rbtree__TypeInfo_for_V_41, mercury__rbtree__HeadVar__1_1, mercury__rbtree__HeadVar__2_2, mercury__rbtree__R_13, &mercury__rbtree__NewR_23);
              }
              if (mercury__rbtree__succeeded)
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    *mercury__rbtree__HeadVar__4_4 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K0_10;
                    MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V0_11;
                    MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__L_12));
                    MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__NewR_23));
                  }
                  mercury__rbtree__succeeded = MR_TRUE;
                }
            }
            break;
        }
      }
    else
      mercury__rbtree__succeeded = MR_FALSE;
    return mercury__rbtree__succeeded;
  }
}

MR_bool MR_CALL 
mercury__rbtree__remove_smallest_4_p_0(
  MR_Word mercury__rbtree__TypeInfo_for_K_40,
  MR_Word mercury__rbtree__TypeInfo_for_V_41,
  MR_Box * mercury__rbtree__HeadVar__1_1,
  MR_Box * mercury__rbtree__HeadVar__2_2,
  MR_Word mercury__rbtree__HeadVar__3_3,
  MR_Word * mercury__rbtree__HeadVar__4_4)
{
  {
    MR_bool mercury__rbtree__succeeded;

    if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
      {
        MR_Box mercury__rbtree__K0_26 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, (MR_Integer) 0));
        MR_Box mercury__rbtree__V0_27 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, (MR_Integer) 1));
        MR_Word mercury__rbtree__L_28 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word mercury__rbtree__R_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, (MR_Integer) 3)));

        switch (MR_tag((MR_Word) mercury__rbtree__L_28)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *mercury__rbtree__HeadVar__1_1 = mercury__rbtree__K0_26;
              *mercury__rbtree__HeadVar__2_2 = mercury__rbtree__V0_27;
              *mercury__rbtree__HeadVar__4_4 = mercury__rbtree__R_29;
              mercury__rbtree__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              MR_Word mercury__rbtree__NewL_39;

              {
                mercury__rbtree__succeeded = mercury__rbtree__remove_smallest_4_p_0(mercury__rbtree__TypeInfo_for_K_40, mercury__rbtree__TypeInfo_for_V_41, mercury__rbtree__HeadVar__1_1, mercury__rbtree__HeadVar__2_2, mercury__rbtree__L_28, &mercury__rbtree__NewL_39);
              }
              if (mercury__rbtree__succeeded)
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    *mercury__rbtree__HeadVar__4_4 = base;
                    MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_26;
                    MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_27;
                    MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__NewL_39));
                    MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R_29));
                  }
                  mercury__rbtree__succeeded = MR_TRUE;
                }
            }
            break;
        }
      }
    else
    if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Box mercury__rbtree__K0_10 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__3_3, (MR_Integer) 0));
        MR_Box mercury__rbtree__V0_11 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__3_3, (MR_Integer) 1));
        MR_Word mercury__rbtree__L_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word mercury__rbtree__R_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__3_3, (MR_Integer) 3)));

        switch (MR_tag((MR_Word) mercury__rbtree__L_12)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              *mercury__rbtree__HeadVar__1_1 = mercury__rbtree__K0_10;
              *mercury__rbtree__HeadVar__2_2 = mercury__rbtree__V0_11;
              *mercury__rbtree__HeadVar__4_4 = mercury__rbtree__R_13;
              mercury__rbtree__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 1:
          case (MR_Integer) 2:
            {
              MR_Word mercury__rbtree__NewL_23;

              {
                mercury__rbtree__succeeded = mercury__rbtree__remove_smallest_4_p_0(mercury__rbtree__TypeInfo_for_K_40, mercury__rbtree__TypeInfo_for_V_41, mercury__rbtree__HeadVar__1_1, mercury__rbtree__HeadVar__2_2, mercury__rbtree__L_12, &mercury__rbtree__NewL_23);
              }
              if (mercury__rbtree__succeeded)
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    *mercury__rbtree__HeadVar__4_4 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K0_10;
                    MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V0_11;
                    MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__NewL_23));
                    MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__R_13));
                  }
                  mercury__rbtree__succeeded = MR_TRUE;
                }
            }
            break;
        }
      }
    else
      mercury__rbtree__succeeded = MR_FALSE;
    return mercury__rbtree__succeeded;
  }
}

MR_bool MR_CALL 
mercury__rbtree__remove_4_p_0(
  MR_Word mercury__rbtree__TypeInfo_for_K_13,
  MR_Word mercury__rbtree__TypeInfo_for_V_14,
  MR_Box mercury__rbtree__K_5,
  MR_Box * mercury__rbtree__V_6,
  MR_Word mercury__rbtree__STATE_VARIABLE_Tree_0_8,
  MR_Word * mercury__rbtree__STATE_VARIABLE_Tree_9)
{
  {
    MR_bool mercury__rbtree__succeeded;
    MR_Word mercury__rbtree__V_11_11;

    {
      mercury__rbtree__succeeded = mercury__rbtree__delete_2_5_p_0(mercury__rbtree__TypeInfo_for_K_13, mercury__rbtree__TypeInfo_for_V_14, mercury__rbtree__STATE_VARIABLE_Tree_0_8, mercury__rbtree__K_5, (MR_Integer) 1, &mercury__rbtree__V_11_11, mercury__rbtree__STATE_VARIABLE_Tree_9);
    }
    if (mercury__rbtree__succeeded)
      {
        mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__V_11_11)) == (MR_mktag((MR_Integer) 1)));
        if (mercury__rbtree__succeeded)
          *mercury__rbtree__V_6 = (MR_hl_field(MR_mktag(1), mercury__rbtree__V_11_11, (MR_Integer) 0));
      }
    return mercury__rbtree__succeeded;
  }
}

void MR_CALL 
mercury__rbtree__delete_3_p_0(
  MR_Word mercury__rbtree__TypeInfo_for_K_11,
  MR_Word mercury__rbtree__TypeInfo_for_V_12,
  MR_Box mercury__rbtree__K_4,
  MR_Word mercury__rbtree__STATE_VARIABLE_Tree_0_7,
  MR_Word * mercury__rbtree__STATE_VARIABLE_Tree_8)
{
  {
    MR_bool mercury__rbtree__succeeded;
    MR_Word mercury__rbtree__V_6_6;

    {
      mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_p_1(mercury__rbtree__TypeInfo_for_K_11, mercury__rbtree__TypeInfo_for_V_12, mercury__rbtree__STATE_VARIABLE_Tree_0_7, mercury__rbtree__K_4, &mercury__rbtree__V_6_6, mercury__rbtree__STATE_VARIABLE_Tree_8);
    }
  }
}

MR_Word MR_CALL 
mercury__rbtree__delete_2_f_0(
  MR_Word mercury__rbtree__TypeInfo_for_K_9,
  MR_Word mercury__rbtree__TypeInfo_for_V_10,
  MR_Word mercury__rbtree__STATE_VARIABLE_RBT_0_6,
  MR_Box mercury__rbtree__K_5)
{
  {
    MR_bool mercury__rbtree__succeeded;
    MR_Word mercury__rbtree__STATE_VARIABLE_RBT_7;
    MR_Word mercury__rbtree__V_15_15;

    {
      mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_101_108_101_116_101_95_50_95_95_91_53_93_95_49_5_p_1(mercury__rbtree__TypeInfo_for_K_9, mercury__rbtree__TypeInfo_for_V_10, mercury__rbtree__STATE_VARIABLE_RBT_0_6, mercury__rbtree__K_5, &mercury__rbtree__V_15_15, &mercury__rbtree__STATE_VARIABLE_RBT_7);
    }
    return mercury__rbtree__STATE_VARIABLE_RBT_7;
  }
}

void MR_CALL 
mercury__rbtree__upper_bound_lookup_4_p_0(
  MR_Word mercury__rbtree__TypeInfo_for_K_12,
  MR_Word mercury__rbtree__TypeInfo_for_V_13,
  MR_Word mercury__rbtree__T_5,
  MR_Box mercury__rbtree__SearchK_6,
  MR_Box * mercury__rbtree__K_7,
  MR_Box * mercury__rbtree__V_8)
{
  {
    MR_bool mercury__rbtree__succeeded;
    MR_Box mercury__rbtree__K0_9;
    MR_Box mercury__rbtree__V0_10;

    {
      mercury__rbtree__succeeded = mercury__rbtree__upper_bound_search_4_p_0(mercury__rbtree__TypeInfo_for_K_12, mercury__rbtree__TypeInfo_for_V_13, mercury__rbtree__T_5, mercury__rbtree__SearchK_6, &mercury__rbtree__K0_9, &mercury__rbtree__V0_10);
    }
    if (mercury__rbtree__succeeded)
      {
        *mercury__rbtree__K_7 = mercury__rbtree__K0_9;
        *mercury__rbtree__V_8 = mercury__rbtree__V0_10;
      }
    else
      {
        {
          mercury__require__report_lookup_error_3_p_0(mercury__rbtree__TypeInfo_for_K_12, mercury__rbtree__TypeInfo_for_V_13, (MR_String) "rbtree.upper_bound_lookup: key not found", mercury__rbtree__SearchK_6);
          return;
        }
      }
  }
}

MR_bool MR_CALL 
mercury__rbtree__upper_bound_search_4_p_0(
  MR_Word mercury__rbtree__TypeInfo_for_K_16,
  MR_Word mercury__rbtree__TypeInfo_for_V_17,
  MR_Word mercury__rbtree__Tree_5,
  MR_Box mercury__rbtree__SearchK_6,
  MR_Box * mercury__rbtree__K_7,
  MR_Box * mercury__rbtree__V_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__rbtree__succeeded;
        MR_Box mercury__rbtree__K0_9;
        MR_Box mercury__rbtree__V0_10;
        MR_Word mercury__rbtree__Left_11;
        MR_Word mercury__rbtree__Right_12;
        MR_Word mercury__rbtree__Result_13;

        if (((MR_tag((MR_Word) mercury__rbtree__Tree_5)) == (MR_mktag((MR_Integer) 2))))
          {
            mercury__rbtree__K0_9 = (MR_hl_field(MR_mktag(2), mercury__rbtree__Tree_5, (MR_Integer) 0));
            mercury__rbtree__V0_10 = (MR_hl_field(MR_mktag(2), mercury__rbtree__Tree_5, (MR_Integer) 1));
            mercury__rbtree__Left_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__Tree_5, (MR_Integer) 2)));
            mercury__rbtree__Right_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__Tree_5, (MR_Integer) 3)));
            mercury__rbtree__succeeded = MR_TRUE;
          }
        else
        if (((MR_tag((MR_Word) mercury__rbtree__Tree_5)) == (MR_mktag((MR_Integer) 1))))
          {
            mercury__rbtree__K0_9 = (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree_5, (MR_Integer) 0));
            mercury__rbtree__V0_10 = (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree_5, (MR_Integer) 1));
            mercury__rbtree__Left_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree_5, (MR_Integer) 2)));
            mercury__rbtree__Right_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree_5, (MR_Integer) 3)));
            mercury__rbtree__succeeded = MR_TRUE;
          }
        else
          mercury__rbtree__succeeded = MR_FALSE;
        if (mercury__rbtree__succeeded)
          {
            {
              mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_K_16, &mercury__rbtree__Result_13, mercury__rbtree__SearchK_6, mercury__rbtree__K0_9);
            }
            switch (mercury__rbtree__Result_13) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Box mercury__rbtree__Kp_14;
                  MR_Box mercury__rbtree__Vp_15;

                  {
                    mercury__rbtree__succeeded = mercury__rbtree__upper_bound_search_4_p_0(mercury__rbtree__TypeInfo_for_K_16, mercury__rbtree__TypeInfo_for_V_17, mercury__rbtree__Left_11, mercury__rbtree__SearchK_6, &mercury__rbtree__Kp_14, &mercury__rbtree__Vp_15);
                  }
                  if (mercury__rbtree__succeeded)
                    {
                      *mercury__rbtree__K_7 = mercury__rbtree__Kp_14;
                      *mercury__rbtree__V_8 = mercury__rbtree__Vp_15;
                    }
                  else
                    {
                      *mercury__rbtree__K_7 = mercury__rbtree__K0_9;
                      *mercury__rbtree__V_8 = mercury__rbtree__V0_10;
                    }
                  mercury__rbtree__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 0:
                {
                  *mercury__rbtree__K_7 = mercury__rbtree__K0_9;
                  *mercury__rbtree__V_8 = mercury__rbtree__V0_10;
                  mercury__rbtree__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 2:
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__rbtree__Tree__tmp_copy_5 = mercury__rbtree__Right_12;

                    mercury__rbtree__Tree_5 = mercury__rbtree__Tree__tmp_copy_5;
                  }
                  continue;
                }
                break;
            }
          }
        return mercury__rbtree__succeeded;
      }
      break;
    }
}

void MR_CALL 
mercury__rbtree__lower_bound_lookup_4_p_0(
  MR_Word mercury__rbtree__TypeInfo_for_K_12,
  MR_Word mercury__rbtree__TypeInfo_for_V_13,
  MR_Word mercury__rbtree__T_5,
  MR_Box mercury__rbtree__SearchK_6,
  MR_Box * mercury__rbtree__K_7,
  MR_Box * mercury__rbtree__V_8)
{
  {
    MR_bool mercury__rbtree__succeeded;
    MR_Box mercury__rbtree__K0_9;
    MR_Box mercury__rbtree__V0_10;

    {
      mercury__rbtree__succeeded = mercury__rbtree__lower_bound_search_4_p_0(mercury__rbtree__TypeInfo_for_K_12, mercury__rbtree__TypeInfo_for_V_13, mercury__rbtree__T_5, mercury__rbtree__SearchK_6, &mercury__rbtree__K0_9, &mercury__rbtree__V0_10);
    }
    if (mercury__rbtree__succeeded)
      {
        *mercury__rbtree__K_7 = mercury__rbtree__K0_9;
        *mercury__rbtree__V_8 = mercury__rbtree__V0_10;
      }
    else
      {
        {
          mercury__require__report_lookup_error_3_p_0(mercury__rbtree__TypeInfo_for_K_12, mercury__rbtree__TypeInfo_for_V_13, (MR_String) "rbtree.lower_bound_lookup: key not found", mercury__rbtree__SearchK_6);
          return;
        }
      }
  }
}

MR_bool MR_CALL 
mercury__rbtree__lower_bound_search_4_p_0(
  MR_Word mercury__rbtree__TypeInfo_for_K_16,
  MR_Word mercury__rbtree__TypeInfo_for_V_17,
  MR_Word mercury__rbtree__Tree_5,
  MR_Box mercury__rbtree__SearchK_6,
  MR_Box * mercury__rbtree__K_7,
  MR_Box * mercury__rbtree__V_8)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__rbtree__succeeded;
        MR_Box mercury__rbtree__K0_9;
        MR_Box mercury__rbtree__V0_10;
        MR_Word mercury__rbtree__Left_11;
        MR_Word mercury__rbtree__Right_12;
        MR_Word mercury__rbtree__Result_13;

        if (((MR_tag((MR_Word) mercury__rbtree__Tree_5)) == (MR_mktag((MR_Integer) 2))))
          {
            mercury__rbtree__K0_9 = (MR_hl_field(MR_mktag(2), mercury__rbtree__Tree_5, (MR_Integer) 0));
            mercury__rbtree__V0_10 = (MR_hl_field(MR_mktag(2), mercury__rbtree__Tree_5, (MR_Integer) 1));
            mercury__rbtree__Left_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__Tree_5, (MR_Integer) 2)));
            mercury__rbtree__Right_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__Tree_5, (MR_Integer) 3)));
            mercury__rbtree__succeeded = MR_TRUE;
          }
        else
        if (((MR_tag((MR_Word) mercury__rbtree__Tree_5)) == (MR_mktag((MR_Integer) 1))))
          {
            mercury__rbtree__K0_9 = (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree_5, (MR_Integer) 0));
            mercury__rbtree__V0_10 = (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree_5, (MR_Integer) 1));
            mercury__rbtree__Left_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree_5, (MR_Integer) 2)));
            mercury__rbtree__Right_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree_5, (MR_Integer) 3)));
            mercury__rbtree__succeeded = MR_TRUE;
          }
        else
          mercury__rbtree__succeeded = MR_FALSE;
        if (mercury__rbtree__succeeded)
          {
            {
              mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_K_16, &mercury__rbtree__Result_13, mercury__rbtree__SearchK_6, mercury__rbtree__K0_9);
            }
            switch (mercury__rbtree__Result_13) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__rbtree__Tree__tmp_copy_5 = mercury__rbtree__Left_11;

                    mercury__rbtree__Tree_5 = mercury__rbtree__Tree__tmp_copy_5;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 0:
                {
                  *mercury__rbtree__K_7 = mercury__rbtree__K0_9;
                  *mercury__rbtree__V_8 = mercury__rbtree__V0_10;
                  mercury__rbtree__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Box mercury__rbtree__Kp_14;
                  MR_Box mercury__rbtree__Vp_15;

                  {
                    mercury__rbtree__succeeded = mercury__rbtree__lower_bound_search_4_p_0(mercury__rbtree__TypeInfo_for_K_16, mercury__rbtree__TypeInfo_for_V_17, mercury__rbtree__Right_12, mercury__rbtree__SearchK_6, &mercury__rbtree__Kp_14, &mercury__rbtree__Vp_15);
                  }
                  if (mercury__rbtree__succeeded)
                    {
                      *mercury__rbtree__K_7 = mercury__rbtree__Kp_14;
                      *mercury__rbtree__V_8 = mercury__rbtree__Vp_15;
                    }
                  else
                    {
                      *mercury__rbtree__K_7 = mercury__rbtree__K0_9;
                      *mercury__rbtree__V_8 = mercury__rbtree__V0_10;
                    }
                  mercury__rbtree__succeeded = MR_TRUE;
                }
                break;
            }
          }
        return mercury__rbtree__succeeded;
      }
      break;
    }
}

void MR_CALL 
mercury__rbtree__lookup_3_p_0(
  MR_Word mercury__rbtree__TypeInfo_for_K_9,
  MR_Word mercury__rbtree__TypeInfo_for_V_10,
  MR_Word mercury__rbtree__T_4,
  MR_Box mercury__rbtree__K_5,
  MR_Box * mercury__rbtree__V_6)
{
  {
    MR_bool mercury__rbtree__succeeded;
    MR_Box mercury__rbtree__V0_7;

    {
      mercury__rbtree__succeeded = mercury__rbtree__search_3_p_0(mercury__rbtree__TypeInfo_for_K_9, mercury__rbtree__TypeInfo_for_V_10, mercury__rbtree__T_4, mercury__rbtree__K_5, &mercury__rbtree__V0_7);
    }
    if (mercury__rbtree__succeeded)
      *mercury__rbtree__V_6 = mercury__rbtree__V0_7;
    else
      {
        {
          mercury__require__report_lookup_error_3_p_0(mercury__rbtree__TypeInfo_for_K_9, mercury__rbtree__TypeInfo_for_V_10, (MR_String) "rbtree.lookup: key not found", mercury__rbtree__K_5);
          return;
        }
      }
  }
}

MR_Box MR_CALL 
mercury__rbtree__lookup_2_f_0(
  MR_Word mercury__rbtree__TypeInfo_for_K_7,
  MR_Word mercury__rbtree__TypeInfo_for_V_8,
  MR_Word mercury__rbtree__RBT_4,
  MR_Box mercury__rbtree__K_5)
{
  {
    MR_bool mercury__rbtree__succeeded;
    MR_Box mercury__rbtree__V_6;
    MR_Box mercury__rbtree__V0_12;

    {
      mercury__rbtree__succeeded = mercury__rbtree__search_3_p_0(mercury__rbtree__TypeInfo_for_K_7, mercury__rbtree__TypeInfo_for_V_8, mercury__rbtree__RBT_4, mercury__rbtree__K_5, &mercury__rbtree__V0_12);
    }
    if (mercury__rbtree__succeeded)
      mercury__rbtree__V_6 = mercury__rbtree__V0_12;
    else
      {
        {
          mercury__require__report_lookup_error_3_p_0(mercury__rbtree__TypeInfo_for_K_7, mercury__rbtree__TypeInfo_for_V_8, (MR_String) "rbtree.lookup: key not found", mercury__rbtree__K_5);
        }
      }
    return mercury__rbtree__V_6;
  }
}

MR_bool MR_CALL 
mercury__rbtree__search_3_p_0(
  MR_Word mercury__rbtree__TypeInfo_for_K_12,
  MR_Word mercury__rbtree__TypeInfo_for_V_13,
  MR_Word mercury__rbtree__Tree_4,
  MR_Box mercury__rbtree__K_5,
  MR_Box * mercury__rbtree__V_6)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__rbtree__succeeded;
        MR_Box mercury__rbtree__K0_7;
        MR_Box mercury__rbtree__V0_8;
        MR_Word mercury__rbtree__Left_9;
        MR_Word mercury__rbtree__Right_10;
        MR_Word mercury__rbtree__Result_11;

        if (((MR_tag((MR_Word) mercury__rbtree__Tree_4)) == (MR_mktag((MR_Integer) 2))))
          {
            mercury__rbtree__K0_7 = (MR_hl_field(MR_mktag(2), mercury__rbtree__Tree_4, (MR_Integer) 0));
            mercury__rbtree__V0_8 = (MR_hl_field(MR_mktag(2), mercury__rbtree__Tree_4, (MR_Integer) 1));
            mercury__rbtree__Left_9 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__Tree_4, (MR_Integer) 2)));
            mercury__rbtree__Right_10 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__Tree_4, (MR_Integer) 3)));
            mercury__rbtree__succeeded = MR_TRUE;
          }
        else
        if (((MR_tag((MR_Word) mercury__rbtree__Tree_4)) == (MR_mktag((MR_Integer) 1))))
          {
            mercury__rbtree__K0_7 = (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree_4, (MR_Integer) 0));
            mercury__rbtree__V0_8 = (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree_4, (MR_Integer) 1));
            mercury__rbtree__Left_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree_4, (MR_Integer) 2)));
            mercury__rbtree__Right_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree_4, (MR_Integer) 3)));
            mercury__rbtree__succeeded = MR_TRUE;
          }
        else
          mercury__rbtree__succeeded = MR_FALSE;
        if (mercury__rbtree__succeeded)
          {
            {
              mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_K_12, &mercury__rbtree__Result_11, mercury__rbtree__K_5, mercury__rbtree__K0_7);
            }
            switch (mercury__rbtree__Result_11) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__rbtree__Tree__tmp_copy_4 = mercury__rbtree__Left_9;

                    mercury__rbtree__Tree_4 = mercury__rbtree__Tree__tmp_copy_4;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 0:
                {
                  *mercury__rbtree__V_6 = mercury__rbtree__V0_8;
                  mercury__rbtree__succeeded = MR_TRUE;
                }
                break;
              case (MR_Integer) 2:
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__rbtree__Tree__tmp_copy_4 = mercury__rbtree__Right_10;

                    mercury__rbtree__Tree_4 = mercury__rbtree__Tree__tmp_copy_4;
                  }
                  continue;
                }
                break;
            }
          }
        return mercury__rbtree__succeeded;
      }
      break;
    }
}

void MR_CALL 
mercury__rbtree__member_3_p_0(
  MR_Word mercury__rbtree__TypeInfo_for_K_18,
  MR_Word mercury__rbtree__TypeInfo_for_V_19,
  MR_Word mercury__rbtree__HeadVar__1_1,
  MR_Box * mercury__rbtree__HeadVar__2_2,
  MR_Box * mercury__rbtree__HeadVar__3_3,
  MR_Cont mercury__rbtree__cont,
  void * mercury__rbtree__cont_env_ptr)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__rbtree__succeeded;

        if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 2))))
          {
            MR_Box mercury__rbtree__K0_12 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));
            MR_Box mercury__rbtree__V0_13 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));
            MR_Word mercury__rbtree__Left_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
            MR_Word mercury__rbtree__Right_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));

            *mercury__rbtree__HeadVar__2_2 = mercury__rbtree__K0_12;
            *mercury__rbtree__HeadVar__3_3 = mercury__rbtree__V0_13;
            {
              mercury__rbtree__cont(mercury__rbtree__cont_env_ptr);
            }
            {
              mercury__rbtree__member_3_p_0(mercury__rbtree__TypeInfo_for_K_18, mercury__rbtree__TypeInfo_for_V_19, mercury__rbtree__Left_14, mercury__rbtree__HeadVar__2_2, mercury__rbtree__HeadVar__3_3, mercury__rbtree__cont, mercury__rbtree__cont_env_ptr);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__rbtree__HeadVar__1__tmp_copy_1 = mercury__rbtree__Right_15;

              mercury__rbtree__HeadVar__1_1 = mercury__rbtree__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
        else
        if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
          {
            MR_Box mercury__rbtree__K0_6 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 0));
            MR_Box mercury__rbtree__V0_7 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1));
            MR_Word mercury__rbtree__Left_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 2)));
            MR_Word mercury__rbtree__Right_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__1_1, (MR_Integer) 3)));

            *mercury__rbtree__HeadVar__2_2 = mercury__rbtree__K0_6;
            *mercury__rbtree__HeadVar__3_3 = mercury__rbtree__V0_7;
            {
              mercury__rbtree__cont(mercury__rbtree__cont_env_ptr);
            }
            {
              mercury__rbtree__member_3_p_0(mercury__rbtree__TypeInfo_for_K_18, mercury__rbtree__TypeInfo_for_V_19, mercury__rbtree__Left_8, mercury__rbtree__HeadVar__2_2, mercury__rbtree__HeadVar__3_3, mercury__rbtree__cont, mercury__rbtree__cont_env_ptr);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__rbtree__HeadVar__1__tmp_copy_1 = mercury__rbtree__Right_9;

              mercury__rbtree__HeadVar__1_1 = mercury__rbtree__HeadVar__1__tmp_copy_1;
            }
            continue;
          }
        else
          {
          }
      }
      break;
    }
}

void MR_CALL 
mercury__rbtree__insert_duplicate_4_p_0(
  MR_Word mercury__rbtree__TypeInfo_for_K_30,
  MR_Word mercury__rbtree__TypeInfo_for_V_31,
  MR_Box mercury__rbtree__HeadVar__1_1,
  MR_Box mercury__rbtree__HeadVar__2_2,
  MR_Word mercury__rbtree__HeadVar__3_3,
  MR_Word * mercury__rbtree__HeadVar__4_4)
{
  {
    MR_bool mercury__rbtree__succeeded;

    switch (MR_tag((MR_Word) mercury__rbtree__HeadVar__3_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word mercury__rbtree__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          MR_Word mercury__rbtree__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *mercury__rbtree__HeadVar__4_4 = base;
            MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__HeadVar__1_1;
            MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__HeadVar__2_2;
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__V_7_7));
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__V_8_8));
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
          MR_Word mercury__rbtree__Tree0_24;
          MR_Box mercury__rbtree__K1_25;
          MR_Box mercury__rbtree__V1_26;
          MR_Word mercury__rbtree__L1_27;
          MR_Word mercury__rbtree__R1_28;

          {
            mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_100_117_112_108_105_99_97_116_101_95_50_95_95_91_50_93_95_48_4_p_0(mercury__rbtree__TypeInfo_for_K_30, mercury__rbtree__HeadVar__3_3, mercury__rbtree__HeadVar__1_1, mercury__rbtree__HeadVar__2_2, &mercury__rbtree__Tree0_24);
          }
          mercury__rbtree__succeeded = ((MR_tag((MR_Word) mercury__rbtree__Tree0_24)) == (MR_mktag((MR_Integer) 1)));
          if (mercury__rbtree__succeeded)
            {
              mercury__rbtree__K1_25 = (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_24, (MR_Integer) 0));
              mercury__rbtree__V1_26 = (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_24, (MR_Integer) 1));
              mercury__rbtree__L1_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_24, (MR_Integer) 2)));
              mercury__rbtree__R1_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_24, (MR_Integer) 3)));
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *mercury__rbtree__HeadVar__4_4 = base;
                MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K1_25;
                MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V1_26;
                MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__L1_27));
                MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R1_28));
              }
            }
          else
            *mercury__rbtree__HeadVar__4_4 = mercury__rbtree__Tree0_24;
        }
        break;
    }
  }
}

MR_Word MR_CALL 
mercury__rbtree__insert_duplicate_3_f_0(
  MR_Word mercury__rbtree__TypeInfo_for_K_11,
  MR_Word mercury__rbtree__TypeInfo_for_V_12,
  MR_Word mercury__rbtree__STATE_VARIABLE_RBT_0_8,
  MR_Box mercury__rbtree__K_6,
  MR_Box mercury__rbtree__V_7)
{
  {
    MR_bool mercury__rbtree__succeeded;
    MR_Word mercury__rbtree__STATE_VARIABLE_RBT_9;

    {
      mercury__rbtree__insert_duplicate_4_p_0(mercury__rbtree__TypeInfo_for_K_11, mercury__rbtree__TypeInfo_for_V_12, mercury__rbtree__K_6, mercury__rbtree__V_7, mercury__rbtree__STATE_VARIABLE_RBT_0_8, &mercury__rbtree__STATE_VARIABLE_RBT_9);
    }
    return mercury__rbtree__STATE_VARIABLE_RBT_9;
  }
}

void MR_CALL 
mercury__rbtree__set_4_p_0(
  MR_Word mercury__rbtree__TypeInfo_for_K_35,
  MR_Word mercury__rbtree__TypeInfo_for_V_36,
  MR_Box mercury__rbtree__HeadVar__1_1,
  MR_Box mercury__rbtree__HeadVar__2_2,
  MR_Word mercury__rbtree__HeadVar__3_3,
  MR_Word * mercury__rbtree__HeadVar__4_4)
{
  {
    MR_bool mercury__rbtree__succeeded;

    switch (MR_tag((MR_Word) mercury__rbtree__HeadVar__3_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word mercury__rbtree__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          MR_Word mercury__rbtree__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *mercury__rbtree__HeadVar__4_4 = base;
            MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__HeadVar__1_1;
            MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__HeadVar__2_2;
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__V_7_7));
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__V_8_8));
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
          MR_Word mercury__rbtree__Tree0_24;

          {
            mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_50_95_95_91_50_93_95_49_4_p_1(mercury__rbtree__TypeInfo_for_K_35, mercury__rbtree__HeadVar__3_3, mercury__rbtree__HeadVar__1_1, mercury__rbtree__HeadVar__2_2, &mercury__rbtree__Tree0_24);
          }
          switch (MR_tag((MR_Word) mercury__rbtree__Tree0_24)) {
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
                MR_Box mercury__rbtree__K1_29 = (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_24, (MR_Integer) 0));
                MR_Box mercury__rbtree__V1_30 = (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_24, (MR_Integer) 1));
                MR_Word mercury__rbtree__L1_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_24, (MR_Integer) 2)));
                MR_Word mercury__rbtree__R1_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_24, (MR_Integer) 3)));

                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__rbtree__HeadVar__4_4 = base;
                  MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K1_29;
                  MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V1_30;
                  MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__L1_31));
                  MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R1_32));
                }
              }
              break;
            case (MR_Integer) 2:
              *mercury__rbtree__HeadVar__4_4 = mercury__rbtree__Tree0_24;
              break;
          }
        }
        break;
    }
  }
}

MR_Word MR_CALL 
mercury__rbtree__set_3_f_0(
  MR_Word mercury__rbtree__TypeInfo_for_K_11,
  MR_Word mercury__rbtree__TypeInfo_for_V_12,
  MR_Word mercury__rbtree__STATE_VARIABLE_RBT_0_8,
  MR_Box mercury__rbtree__K_6,
  MR_Box mercury__rbtree__V_7)
{
  {
    MR_bool mercury__rbtree__succeeded;
    MR_Word mercury__rbtree__STATE_VARIABLE_RBT_9;

    {
      mercury__rbtree__set_4_p_0(mercury__rbtree__TypeInfo_for_K_11, mercury__rbtree__TypeInfo_for_V_12, mercury__rbtree__K_6, mercury__rbtree__V_7, mercury__rbtree__STATE_VARIABLE_RBT_0_8, &mercury__rbtree__STATE_VARIABLE_RBT_9);
    }
    return mercury__rbtree__STATE_VARIABLE_RBT_9;
  }
}

MR_bool MR_CALL 
mercury__rbtree__transform_value_4_p_0(
  MR_Word mercury__rbtree__TypeInfo_for_V_30,
  MR_Word mercury__rbtree__TypeInfo_for_K_31,
  MR_Word mercury__rbtree__HeadVar__1_1,
  MR_Box mercury__rbtree__HeadVar__2_2,
  MR_Word mercury__rbtree__HeadVar__3_3,
  MR_Word * mercury__rbtree__HeadVar__4_4)
{
  {
    MR_bool mercury__rbtree__succeeded;

    if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
      {
        MR_Box mercury__rbtree__K0_21 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, (MR_Integer) 0));
        MR_Box mercury__rbtree__V0_22 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, (MR_Integer) 1));
        MR_Word mercury__rbtree__L_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word mercury__rbtree__R_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word mercury__rbtree__Result_26;

        {
          mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_K_31, &mercury__rbtree__Result_26, mercury__rbtree__HeadVar__2_2, mercury__rbtree__K0_21);
        }
        switch (mercury__rbtree__Result_26) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word mercury__rbtree__NewL_28;

              {
                mercury__rbtree__succeeded = mercury__rbtree__transform_value_4_p_0(mercury__rbtree__TypeInfo_for_V_30, mercury__rbtree__TypeInfo_for_K_31, mercury__rbtree__HeadVar__1_1, mercury__rbtree__HeadVar__2_2, mercury__rbtree__L_23, &mercury__rbtree__NewL_28);
              }
              if (mercury__rbtree__succeeded)
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    *mercury__rbtree__HeadVar__4_4 = base;
                    MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_21;
                    MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_22;
                    MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__NewL_28));
                    MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R_24));
                  }
                  mercury__rbtree__succeeded = MR_TRUE;
                }
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Box mercury__rbtree__NewV_27;
              void MR_CALL (* mercury__rbtree__func_0)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1)));

              {
                mercury__rbtree__func_0(((MR_Box) mercury__rbtree__HeadVar__1_1), mercury__rbtree__V0_22, &mercury__rbtree__NewV_27);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *mercury__rbtree__HeadVar__4_4 = base;
                MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__HeadVar__2_2;
                MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__NewV_27;
                MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__L_23));
                MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R_24));
              }
              mercury__rbtree__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__rbtree__NewR_29;

              {
                mercury__rbtree__succeeded = mercury__rbtree__transform_value_4_p_0(mercury__rbtree__TypeInfo_for_V_30, mercury__rbtree__TypeInfo_for_K_31, mercury__rbtree__HeadVar__1_1, mercury__rbtree__HeadVar__2_2, mercury__rbtree__R_24, &mercury__rbtree__NewR_29);
              }
              if (mercury__rbtree__succeeded)
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    *mercury__rbtree__HeadVar__4_4 = base;
                    MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_21;
                    MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_22;
                    MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__L_23));
                    MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__NewR_29));
                  }
                  mercury__rbtree__succeeded = MR_TRUE;
                }
            }
            break;
        }
      }
    else
    if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Box mercury__rbtree__K0_10 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__3_3, (MR_Integer) 0));
        MR_Box mercury__rbtree__V0_11 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__3_3, (MR_Integer) 1));
        MR_Word mercury__rbtree__L_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word mercury__rbtree__R_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word mercury__rbtree__Result_15;

        {
          mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_K_31, &mercury__rbtree__Result_15, mercury__rbtree__HeadVar__2_2, mercury__rbtree__K0_10);
        }
        switch (mercury__rbtree__Result_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word mercury__rbtree__NewL_17;

              {
                mercury__rbtree__succeeded = mercury__rbtree__transform_value_4_p_0(mercury__rbtree__TypeInfo_for_V_30, mercury__rbtree__TypeInfo_for_K_31, mercury__rbtree__HeadVar__1_1, mercury__rbtree__HeadVar__2_2, mercury__rbtree__L_12, &mercury__rbtree__NewL_17);
              }
              if (mercury__rbtree__succeeded)
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    *mercury__rbtree__HeadVar__4_4 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K0_10;
                    MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V0_11;
                    MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__NewL_17));
                    MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__R_13));
                  }
                  mercury__rbtree__succeeded = MR_TRUE;
                }
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Box mercury__rbtree__NewV_16;
              void MR_CALL (* mercury__rbtree__func_1)(MR_Box, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__rbtree__HeadVar__1_1, (MR_Integer) 1)));

              {
                mercury__rbtree__func_1(((MR_Box) mercury__rbtree__HeadVar__1_1), mercury__rbtree__V0_11, &mercury__rbtree__NewV_16);
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *mercury__rbtree__HeadVar__4_4 = base;
                MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__HeadVar__2_2;
                MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__NewV_16;
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__L_12));
                MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__R_13));
              }
              mercury__rbtree__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__rbtree__NewR_18;

              {
                mercury__rbtree__succeeded = mercury__rbtree__transform_value_4_p_0(mercury__rbtree__TypeInfo_for_V_30, mercury__rbtree__TypeInfo_for_K_31, mercury__rbtree__HeadVar__1_1, mercury__rbtree__HeadVar__2_2, mercury__rbtree__R_13, &mercury__rbtree__NewR_18);
              }
              if (mercury__rbtree__succeeded)
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    *mercury__rbtree__HeadVar__4_4 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K0_10;
                    MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V0_11;
                    MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__L_12));
                    MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__NewR_18));
                  }
                  mercury__rbtree__succeeded = MR_TRUE;
                }
            }
            break;
        }
      }
    else
      mercury__rbtree__succeeded = MR_FALSE;
    return mercury__rbtree__succeeded;
  }
}

MR_bool MR_CALL 
mercury__rbtree__update_4_p_0(
  MR_Word mercury__rbtree__TypeInfo_for_K_28,
  MR_Word mercury__rbtree__TypeInfo_for_V_29,
  MR_Box mercury__rbtree__HeadVar__1_1,
  MR_Box mercury__rbtree__HeadVar__2_2,
  MR_Word mercury__rbtree__HeadVar__3_3,
  MR_Word * mercury__rbtree__HeadVar__4_4)
{
  {
    MR_bool mercury__rbtree__succeeded;

    if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 2))))
      {
        MR_Box mercury__rbtree__K0_20 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, (MR_Integer) 0));
        MR_Box mercury__rbtree__V0_21 = (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, (MR_Integer) 1));
        MR_Word mercury__rbtree__L_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word mercury__rbtree__R_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word mercury__rbtree__Result_25;

        {
          mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_K_28, &mercury__rbtree__Result_25, mercury__rbtree__HeadVar__1_1, mercury__rbtree__K0_20);
        }
        switch (mercury__rbtree__Result_25) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word mercury__rbtree__NewL_26;

              {
                mercury__rbtree__succeeded = mercury__rbtree__update_4_p_0(mercury__rbtree__TypeInfo_for_K_28, mercury__rbtree__TypeInfo_for_V_29, mercury__rbtree__HeadVar__1_1, mercury__rbtree__HeadVar__2_2, mercury__rbtree__L_22, &mercury__rbtree__NewL_26);
              }
              if (mercury__rbtree__succeeded)
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    *mercury__rbtree__HeadVar__4_4 = base;
                    MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_20;
                    MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_21;
                    MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__NewL_26));
                    MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R_23));
                  }
                  mercury__rbtree__succeeded = MR_TRUE;
                }
            }
            break;
          case (MR_Integer) 0:
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *mercury__rbtree__HeadVar__4_4 = base;
                MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__HeadVar__1_1;
                MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__HeadVar__2_2;
                MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__L_22));
                MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R_23));
              }
              mercury__rbtree__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__rbtree__NewR_27;

              {
                mercury__rbtree__succeeded = mercury__rbtree__update_4_p_0(mercury__rbtree__TypeInfo_for_K_28, mercury__rbtree__TypeInfo_for_V_29, mercury__rbtree__HeadVar__1_1, mercury__rbtree__HeadVar__2_2, mercury__rbtree__R_23, &mercury__rbtree__NewR_27);
              }
              if (mercury__rbtree__succeeded)
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    *mercury__rbtree__HeadVar__4_4 = base;
                    MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K0_20;
                    MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V0_21;
                    MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__L_22));
                    MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__NewR_27));
                  }
                  mercury__rbtree__succeeded = MR_TRUE;
                }
            }
            break;
        }
      }
    else
    if (((MR_tag((MR_Word) mercury__rbtree__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Box mercury__rbtree__K0_10 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__3_3, (MR_Integer) 0));
        MR_Box mercury__rbtree__V0_11 = (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__3_3, (MR_Integer) 1));
        MR_Word mercury__rbtree__L_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word mercury__rbtree__R_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__HeadVar__3_3, (MR_Integer) 3)));
        MR_Word mercury__rbtree__Result_15;

        {
          mercury__builtin__compare_3_p_0(mercury__rbtree__TypeInfo_for_K_28, &mercury__rbtree__Result_15, mercury__rbtree__HeadVar__1_1, mercury__rbtree__K0_10);
        }
        switch (mercury__rbtree__Result_15) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word mercury__rbtree__NewL_16;

              {
                mercury__rbtree__succeeded = mercury__rbtree__update_4_p_0(mercury__rbtree__TypeInfo_for_K_28, mercury__rbtree__TypeInfo_for_V_29, mercury__rbtree__HeadVar__1_1, mercury__rbtree__HeadVar__2_2, mercury__rbtree__L_12, &mercury__rbtree__NewL_16);
              }
              if (mercury__rbtree__succeeded)
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    *mercury__rbtree__HeadVar__4_4 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K0_10;
                    MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V0_11;
                    MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__NewL_16));
                    MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__R_13));
                  }
                  mercury__rbtree__succeeded = MR_TRUE;
                }
            }
            break;
          case (MR_Integer) 0:
            {
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *mercury__rbtree__HeadVar__4_4 = base;
                MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__HeadVar__1_1;
                MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__HeadVar__2_2;
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__L_12));
                MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__R_13));
              }
              mercury__rbtree__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__rbtree__NewR_17;

              {
                mercury__rbtree__succeeded = mercury__rbtree__update_4_p_0(mercury__rbtree__TypeInfo_for_K_28, mercury__rbtree__TypeInfo_for_V_29, mercury__rbtree__HeadVar__1_1, mercury__rbtree__HeadVar__2_2, mercury__rbtree__R_13, &mercury__rbtree__NewR_17);
              }
              if (mercury__rbtree__succeeded)
                {
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    *mercury__rbtree__HeadVar__4_4 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = mercury__rbtree__K0_10;
                    MR_hl_field(MR_mktag(1), base, 1) = mercury__rbtree__V0_11;
                    MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__rbtree__L_12));
                    MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__rbtree__NewR_17));
                  }
                  mercury__rbtree__succeeded = MR_TRUE;
                }
            }
            break;
        }
      }
    else
      mercury__rbtree__succeeded = MR_FALSE;
    return mercury__rbtree__succeeded;
  }
}

MR_bool MR_CALL 
mercury__rbtree__insert_4_p_0(
  MR_Word mercury__rbtree__TypeInfo_for_K_35,
  MR_Word mercury__rbtree__TypeInfo_for_V_36,
  MR_Box mercury__rbtree__HeadVar__1_1,
  MR_Box mercury__rbtree__HeadVar__2_2,
  MR_Word mercury__rbtree__HeadVar__3_3,
  MR_Word * mercury__rbtree__HeadVar__4_4)
{
  {
    MR_bool mercury__rbtree__succeeded;

    switch (MR_tag((MR_Word) mercury__rbtree__HeadVar__3_3)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word mercury__rbtree__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          MR_Word mercury__rbtree__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *mercury__rbtree__HeadVar__4_4 = base;
            MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__HeadVar__1_1;
            MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__HeadVar__2_2;
            MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__V_7_7));
            MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__V_8_8));
          }
          mercury__rbtree__succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 1:
        {
          {
            mercury__require__error_1_p_0((MR_String) "rbtree.insert: root node cannot be red!");
          }
          mercury__rbtree__succeeded = MR_TRUE;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mercury__rbtree__Tree0_24;

          {
            mercury__rbtree__succeeded = mercury__rbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_110_115_101_114_116_95_50_95_95_91_50_93_95_48_4_p_0(mercury__rbtree__TypeInfo_for_K_35, mercury__rbtree__HeadVar__3_3, mercury__rbtree__HeadVar__1_1, mercury__rbtree__HeadVar__2_2, &mercury__rbtree__Tree0_24);
          }
          if (mercury__rbtree__succeeded)
            {
              switch (MR_tag((MR_Word) mercury__rbtree__Tree0_24)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    {
                      mercury__require__error_1_p_0((MR_String) "rbtree.insert: new tree is empty");
                    }
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Box mercury__rbtree__K1_29 = (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_24, (MR_Integer) 0));
                    MR_Box mercury__rbtree__V1_30 = (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_24, (MR_Integer) 1));
                    MR_Word mercury__rbtree__L1_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_24, (MR_Integer) 2)));
                    MR_Word mercury__rbtree__R1_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__rbtree__Tree0_24, (MR_Integer) 3)));

                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      *mercury__rbtree__HeadVar__4_4 = base;
                      MR_hl_field(MR_mktag(2), base, 0) = mercury__rbtree__K1_29;
                      MR_hl_field(MR_mktag(2), base, 1) = mercury__rbtree__V1_30;
                      MR_hl_field(MR_mktag(2), base, 2) = ((MR_Box) (mercury__rbtree__L1_31));
                      MR_hl_field(MR_mktag(2), base, 3) = ((MR_Box) (mercury__rbtree__R1_32));
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  *mercury__rbtree__HeadVar__4_4 = mercury__rbtree__Tree0_24;
                  break;
              }
              mercury__rbtree__succeeded = MR_TRUE;
            }
        }
        break;
    }
    return mercury__rbtree__succeeded;
  }
}

MR_bool MR_CALL 
mercury__rbtree__is_empty_1_p_0(
  MR_Word mercury__rbtree__TypeInfo_for_K_3,
  MR_Word mercury__rbtree__TypeInfo_for_V_4,
  MR_Word mercury__rbtree__Tree_2)
{
  {
    MR_bool mercury__rbtree__succeeded = (mercury__rbtree__Tree_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    return mercury__rbtree__succeeded;
  }
}

MR_Word MR_CALL 
mercury__rbtree__singleton_2_f_0(
  MR_Word mercury__rbtree__TypeInfo_for_K_8,
  MR_Word mercury__rbtree__TypeInfo_for_V_9,
  MR_Box mercury__rbtree__K_4,
  MR_Box mercury__rbtree__V_5)
{
  {
    MR_bool mercury__rbtree__succeeded;
    MR_Word mercury__rbtree__HeadVar__3_3;
    MR_Word mercury__rbtree__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__rbtree__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__rbtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, 0) = mercury__rbtree__K_4;
      MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, 1) = mercury__rbtree__V_5;
      MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, 2) = ((MR_Box) (mercury__rbtree__V_6_6));
      MR_hl_field(MR_mktag(2), mercury__rbtree__HeadVar__3_3, 3) = ((MR_Box) (mercury__rbtree__V_7_7));
    }
    return mercury__rbtree__HeadVar__3_3;
  }
}

void MR_CALL 
mercury__rbtree__init_1_p_0(
  MR_Word mercury__rbtree__TypeInfo_for_K_2,
  MR_Word mercury__rbtree__TypeInfo_for_V_3,
  MR_Word * mercury__rbtree__HeadVar__1_1)
{
  {
    MR_bool mercury__rbtree__succeeded;

    *mercury__rbtree__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

MR_Word MR_CALL 
mercury__rbtree__init_0_f_0(
  MR_Word mercury__rbtree__TypeInfo_for_K_3,
  MR_Word mercury__rbtree__TypeInfo_for_V_4)
{
  {
    MR_bool mercury__rbtree__succeeded;
    MR_Word mercury__rbtree__RBT_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    return mercury__rbtree__RBT_2;
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

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module rbtree. */
