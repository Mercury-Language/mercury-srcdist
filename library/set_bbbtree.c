/*
** Automatically generated from `set_bbbtree.m'
** by the Mercury compiler,
** version rotd-2018-02-05
** configured for x86_64-pc-linux-gnu.
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


// :- module set_bbbtree.
// :- implementation.

/*
INIT mercury__set_bbbtree__init
ENDINIT
*/

#include "set_bbbtree.mih"


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



struct mercury__set_bbbtree__member_2_p_1_env_0_s {
  MR_Word mercury__set_bbbtree__member_2_p_1_env_0__TypeInfo_for_T_9;
  MR_Box * mercury__set_bbbtree__member_2_p_1_env_0__X_3;
  MR_Cont mercury__set_bbbtree__member_2_p_1_env_0__cont;
  void * mercury__set_bbbtree__member_2_p_1_env_0__cont_env_ptr;
  MR_bool mercury__set_bbbtree__member_2_p_1_env_0__succeeded;
  MR_Box mercury__set_bbbtree__member_2_p_1_env_0__V_4;
  MR_Word mercury__set_bbbtree__member_2_p_1_env_0__Result_8;
  MR_Word mercury__set_bbbtree__member_2_p_1_env_0__Var_10;
};


static const MR_DuFunctorDesc mercury__set_bbbtree__set_bbbtree__du_functor_desc_set_bbbtree_1_0;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__set_bbbtree__set_bbbtree__pti_set_bbbtree_1__pseudo_1;

static const MR_PseudoTypeInfo mercury__set_bbbtree__set_bbbtree__field_types_set_bbbtree_1_1[4];

static const MR_DuFunctorDesc mercury__set_bbbtree__set_bbbtree__du_functor_desc_set_bbbtree_1_1;

static const MR_DuFunctorDescPtr mercury__set_bbbtree__set_bbbtree__du_stag_ordered_set_bbbtree_1_0[1];

static const MR_DuFunctorDescPtr mercury__set_bbbtree__set_bbbtree__du_stag_ordered_set_bbbtree_1_1[1];

static const MR_DuPtagLayout mercury__set_bbbtree__set_bbbtree__du_ptag_ordered_set_bbbtree_1[2];

static const MR_DuFunctorDescPtr mercury__set_bbbtree__set_bbbtree__du_name_ordered_set_bbbtree_1[2];

static const MR_Integer mercury__set_bbbtree__set_bbbtree__functor_number_map_set_bbbtree_1[2];

static MR_Integer MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_50_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(
  MR_Word Var_16,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
  MR_Word Var_18,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4);

static void MR_CALL 
mercury__set_bbbtree__power_intersect_r2_4_p_0(
  MR_Word TypeInfo_for_T_29,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Integer HeadVar__4_4);

static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__list_0(
  MR_Word Var_27,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_p_0(
  MR_Word List_5,
  MR_Word * RestOfList_6,
  MR_Integer N_7,
  MR_Word * Set_8);

static void MR_CALL 
mercury__set_bbbtree__split_gt_4_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Integer HeadVar__4_4);

static void MR_CALL 
mercury__set_bbbtree__split_lt_4_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Integer HeadVar__4_4);

static void MR_CALL 
mercury__set_bbbtree__concat4_5_p_0(
  MR_Word TypeInfo_for_T_31,
  MR_Word HeadVar__1_1,
  MR_Word R_2,
  MR_Box V_3,
  MR_Word * Set_4,
  MR_Integer Ratio_5);

static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_p_0(
  MR_Box V_6,
  MR_Word L_7,
  MR_Word R_8,
  MR_Word * Set_9,
  MR_Integer Ratio_10);

static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_117_98_108_101_95_114_111_116_95_114_95_95_91_49_93_95_48_4_p_0(
  MR_Box HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_110_103_108_101_95_114_111_116_95_114_95_95_91_49_93_95_48_4_p_0(
  MR_Box HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(
  MR_Box X_5,
  MR_Word L_6,
  MR_Word R_7,
  MR_Word * Tree_8);

static void MR_CALL 
mercury__set_bbbtree__member_2_p_1_1(
  void * env_ptr_arg);

static MR_bool MR_CALL 
mercury__set_bbbtree____Unify____set_bbbtree_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__set_bbbtree____Compare____set_bbbtree_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);


static /* final */ const MR_Box mercury__set_bbbtree_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__set_bbbtree_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__set_bbbtree_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__set_bbbtree_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__set_bbbtree_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__set_bbbtree_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__set_bbbtree_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__set_bbbtree_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__set_bbbtree_scalar_common_2[0])),
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



static const MR_DuFunctorDesc mercury__set_bbbtree__set_bbbtree__du_functor_desc_set_bbbtree_1_0 = {
  (MR_String) "empty",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__set_bbbtree__set_bbbtree__pti_set_bbbtree_1__pseudo_1 = {
  &mercury__set_bbbtree__set_bbbtree__type_ctor_info_set_bbbtree_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_PseudoTypeInfo mercury__set_bbbtree__set_bbbtree__field_types_set_bbbtree_1_1[4] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__set_bbbtree__set_bbbtree__pti_set_bbbtree_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__set_bbbtree__set_bbbtree__pti_set_bbbtree_1__pseudo_1
};

static const MR_DuFunctorDesc mercury__set_bbbtree__set_bbbtree__du_functor_desc_set_bbbtree_1_1 = {
  (MR_String) "tree",
  (MR_Integer) 4,
  (MR_Integer) 13,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__set_bbbtree__set_bbbtree__field_types_set_bbbtree_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__set_bbbtree__set_bbbtree__du_stag_ordered_set_bbbtree_1_0[1] = {
  &mercury__set_bbbtree__set_bbbtree__du_functor_desc_set_bbbtree_1_0
};

static const MR_DuFunctorDescPtr mercury__set_bbbtree__set_bbbtree__du_stag_ordered_set_bbbtree_1_1[1] = {
  &mercury__set_bbbtree__set_bbbtree__du_functor_desc_set_bbbtree_1_1
};

static const MR_DuPtagLayout mercury__set_bbbtree__set_bbbtree__du_ptag_ordered_set_bbbtree_1[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    mercury__set_bbbtree__set_bbbtree__du_stag_ordered_set_bbbtree_1_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__set_bbbtree__set_bbbtree__du_stag_ordered_set_bbbtree_1_1
  }
};

static const MR_DuFunctorDescPtr mercury__set_bbbtree__set_bbbtree__du_name_ordered_set_bbbtree_1[2] = {
  &mercury__set_bbbtree__set_bbbtree__du_functor_desc_set_bbbtree_1_0,
  &mercury__set_bbbtree__set_bbbtree__du_functor_desc_set_bbbtree_1_1
};

static const MR_Integer mercury__set_bbbtree__set_bbbtree__functor_number_map_set_bbbtree_1[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__set_bbbtree__set_bbbtree__type_ctor_info_set_bbbtree_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__set_bbbtree____Unify____set_bbbtree_1_0_10001)),
  ((MR_Box) (mercury__set_bbbtree____Compare____set_bbbtree_1_0_10001)),
  (MR_String) "set_bbbtree",
  (MR_String) "set_bbbtree",
  {     mercury__set_bbbtree__set_bbbtree__du_name_ordered_set_bbbtree_1 },
  {     mercury__set_bbbtree__set_bbbtree__du_ptag_ordered_set_bbbtree_1 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__set_bbbtree__set_bbbtree__functor_number_map_set_bbbtree_1
};

static MR_Integer MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    return (MR_Integer) 1200;
  }
}

void MR_CALL 
mercury__set_bbbtree____Compare____set_bbbtree_1_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_23 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_24 = (MR_Integer) HeadVar__3_3;

    // setup for model_det tailcalls optimized into a loop
    succeeded = (CastX_23 == CastY_24);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3)));
      MR_Word Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2)));
      MR_Integer Var_33 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Box Var_34 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));

      if ((HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *HeadVar__1_1 = (MR_Integer) 2;
      else
      {
        MR_Box ArgY1_13 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));
        MR_Integer ArgY2_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ArgY3_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2)));
        MR_Word ArgY4_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 3)));
        MR_Word Var_20;

        mercury__builtin__compare_3_p_0(TypeInfo_for_T_25, &Var_20, Var_34, ArgY1_13);
        succeeded = (Var_20 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_20;
        else
        {
          MR_Word Var_21;

          succeeded = (Var_33 < ArgY2_15);
          if (succeeded)
            Var_21 = (MR_Integer) 1;
          else
          {
            succeeded = (Var_33 == ArgY2_15);
            if (succeeded)
              Var_21 = (MR_Integer) 0;
            else
              Var_21 = (MR_Integer) 2;
          }
          succeeded = (Var_21 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_21;
          else
          {
            MR_Word Var_22;

            mercury__set_bbbtree____Compare____set_bbbtree_1_0(TypeInfo_for_T_25, &Var_22, Var_32, ArgY3_17);
            succeeded = (Var_22 == (MR_Integer) 0);
            succeeded = !(succeeded);
            if (succeeded)
              *HeadVar__1_1 = Var_22;
            else
            {
              MR_Word next_value_of_HeadVar__2_2 = Var_31;
              MR_Word next_value_of_HeadVar__3_3 = ArgY4_19;

              // direct tailcall eliminated
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              HeadVar__3_3 = next_value_of_HeadVar__3_3;
              continue;
            }
          }
        }
      }
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree____Unify____set_bbbtree_1_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_14 = (MR_Integer) HeadVar__2_2;

    // setup for model_semi tailcalls optimized into a loop
    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Integer CastX_3 = (MR_Integer) HeadVar__1_1;
      MR_Integer CastY_4 = (MR_Integer) HeadVar__2_2;

      succeeded = (CastY_4 == CastX_3);
    }
    else
    {
      MR_Box ArgX1_5 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      MR_Box ArgY1_6;
      MR_Integer ArgX2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Integer ArgY2_8;
      MR_Word ArgX3_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_10;
      MR_Word ArgX4_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word ArgY4_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
        ArgY2_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
        ArgY3_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2)));
        ArgY4_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3)));
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_15, ArgX1_5, ArgY1_6);
        if (succeeded)
        {
          succeeded = (ArgX2_7 == ArgY2_8);
          if (succeeded)
          {
            succeeded = mercury__set_bbbtree____Unify____set_bbbtree_1_0(TypeInfo_for_T_15, ArgX3_9, ArgY3_10);
            if (succeeded)
            {
              // direct tailcall eliminated
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
    return succeeded;
    break;
  }
}

void MR_CALL 
mercury__set_bbbtree__power_intersect_r_3_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word V_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word L_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2)));
    MR_Word R_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3)));
    MR_Word Intersection0_11;
    MR_Integer _N_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));

    mercury__set_bbbtree__power_intersect_r2_4_p_0(TypeInfo_for_T_12, L_7, V_5, &Intersection0_11, HeadVar__3_3);
    mercury__set_bbbtree__power_intersect_r2_4_p_0(TypeInfo_for_T_12, R_8, Intersection0_11, HeadVar__2_2, HeadVar__3_3);
  }
}

void MR_CALL 
mercury__set_bbbtree__list_to_set_r_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word List_4,
  MR_Word * Set_5,
  MR_Integer Ratio_6)
{
  {
    MR_Word InitSet_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__set_bbbtree__insert_list_r_4_p_0(TypeInfo_for_T_8, InitSet_7, List_4, Set_5, Ratio_6);
  }
}

void MR_CALL 
mercury__set_bbbtree__def_ratio_1_p_0(
  MR_Integer * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Integer) 5;
}

void MR_CALL 
mercury__set_bbbtree__filter_4_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word P_5,
  MR_Word Set_6,
  MR_Word * TrueSet_7,
  MR_Word * FalseSet_8)
{
  {
    MR_Word List_9;
    MR_Word TrueList_10;
    MR_Word FalseList_11;
    MR_Word Var_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word InitSet_22;
    MR_Word InitSet_29;

    mercury__set_bbbtree__to_sorted_list2_3_p_1(TypeInfo_for_T_12, Set_6, Var_15, &List_9);
    mercury__list__filter_4_p_0(TypeInfo_for_T_12, P_5, List_9, &TrueList_10, &FalseList_11);
    InitSet_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__set_bbbtree__insert_list_r_4_p_0(TypeInfo_for_T_12, InitSet_22, TrueList_10, TrueSet_7, (MR_Integer) 5);
    InitSet_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__set_bbbtree__insert_list_r_4_p_0(TypeInfo_for_T_12, InitSet_29, FalseList_11, FalseSet_8, (MR_Integer) 5);
  }
}

void MR_CALL 
mercury__set_bbbtree__filter_3_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word P_4,
  MR_Word Set_5,
  MR_Word * TrueSet_6)
{
  {
    MR_Word List_7;
    MR_Word TrueList_8;
    MR_Word Var_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word InitSet_19;

    mercury__set_bbbtree__to_sorted_list2_3_p_1(TypeInfo_for_T_9, Set_5, Var_12, &List_7);
    mercury__list__filter_3_p_0(TypeInfo_for_T_9, P_4, List_7, &TrueList_8);
    InitSet_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__set_bbbtree__insert_list_r_4_p_0(TypeInfo_for_T_9, InitSet_19, TrueList_8, TrueSet_6, (MR_Integer) 5);
  }
}

MR_Word MR_CALL 
mercury__set_bbbtree__filter_map_2_f_0(
  MR_Word TypeInfo_for_T1_9,
  MR_Word TypeInfo_for_T2_10,
  MR_Word PF_4,
  MR_Word S1_5)
{
  {
    MR_Word S2_6;
    MR_Word L1_7;
    MR_Word L2_8;
    MR_Word Var_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word InitSet_34;

    mercury__set_bbbtree__to_sorted_list2_3_p_1(TypeInfo_for_T1_9, S1_5, Var_13, &L1_7);
    mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_50_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(PF_4, L1_7, &L2_8);
    InitSet_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__set_bbbtree__insert_list_r_4_p_0(TypeInfo_for_T2_10, InitSet_34, L2_8, &S2_6, (MR_Integer) 5);
    return S2_6;
  }
}

static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_50_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(
  MR_Word Var_16,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Box V_6_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Word V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Box V_9_9;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Var_16, (MR_Integer) 1)));

      succeeded = func_0(((MR_Box) Var_16), V_6_6, &V_9_9);
      if (succeeded)
      {
        MR_Word V_10_10;

        mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_50_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(Var_16, V_7_7, &V_10_10);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = V_9_9;
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (V_10_10));
        }
      }
      else
      {
        MR_Word next_value_of_HeadVar__2_2 = V_7_7;

        // direct tailcall eliminated
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__set_bbbtree__map_2_f_0(
  MR_Word TypeInfo_for_T1_9,
  MR_Word TypeInfo_for_T2_10,
  MR_Word F_4,
  MR_Word S1_5)
{
  {
    MR_Word S2_6;
    MR_Word L1_7;
    MR_Word L2_8;
    MR_Word Var_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word InitSet_20;

    mercury__set_bbbtree__to_sorted_list2_3_p_1(TypeInfo_for_T1_9, S1_5, Var_13, &L1_7);
    L2_8 = mercury__list__map_2_f_0(TypeInfo_for_T1_9, TypeInfo_for_T2_10, F_4, L1_7);
    InitSet_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__set_bbbtree__insert_list_r_4_p_0(TypeInfo_for_T2_10, InitSet_20, L2_8, &S2_6, (MR_Integer) 5);
    return S2_6;
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__all_true_2_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word P_3,
  MR_Word S_4)
{
  {
    MR_bool succeeded;
    MR_Word L_5;
    MR_Word Var_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__set_bbbtree__to_sorted_list2_3_p_1(TypeInfo_for_T_6, S_4, Var_9, &L_5);
    succeeded = mercury__list__all_true_2_p_0(TypeInfo_for_T_6, P_3, L_5);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__fold6_14_p_5(
  MR_Word TypeInfo_for_T1_42,
  MR_Word TypeInfo_for_T2_43,
  MR_Word TypeInfo_for_T3_44,
  MR_Word TypeInfo_for_T4_45,
  MR_Word TypeInfo_for_T5_46,
  MR_Word TypeInfo_for_T6_47,
  MR_Word TypeInfo_for_T7_48,
  MR_Word P_15,
  MR_Word S_16,
  MR_Box STATE_VARIABLE_A_0_23,
  MR_Box * STATE_VARIABLE_A_24,
  MR_Box STATE_VARIABLE_B_0_25,
  MR_Box * STATE_VARIABLE_B_26,
  MR_Box STATE_VARIABLE_C_0_27,
  MR_Box * STATE_VARIABLE_C_28,
  MR_Box STATE_VARIABLE_D_0_29,
  MR_Box * STATE_VARIABLE_D_30,
  MR_Box STATE_VARIABLE_E_0_31,
  MR_Box * STATE_VARIABLE_E_32,
  MR_Box STATE_VARIABLE_F_0_33,
  MR_Box * STATE_VARIABLE_F_34)
{
  {
    MR_bool succeeded;
    MR_Word Var_35;
    MR_Word Var_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__set_bbbtree__to_sorted_list2_3_p_1(TypeInfo_for_T1_42, S_16, Var_53, &Var_35);
    succeeded = mercury__list__foldl6_14_p_7(TypeInfo_for_T1_42, TypeInfo_for_T2_43, TypeInfo_for_T3_44, TypeInfo_for_T4_45, TypeInfo_for_T5_46, TypeInfo_for_T6_47, TypeInfo_for_T7_48, P_15, Var_35, STATE_VARIABLE_A_0_23, STATE_VARIABLE_A_24, STATE_VARIABLE_B_0_25, STATE_VARIABLE_B_26, STATE_VARIABLE_C_0_27, STATE_VARIABLE_C_28, STATE_VARIABLE_D_0_29, STATE_VARIABLE_D_30, STATE_VARIABLE_E_0_31, STATE_VARIABLE_E_32, STATE_VARIABLE_F_0_33, STATE_VARIABLE_F_34);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__fold6_14_p_4(
  MR_Word TypeInfo_for_T1_42,
  MR_Word TypeInfo_for_T2_43,
  MR_Word TypeInfo_for_T3_44,
  MR_Word TypeInfo_for_T4_45,
  MR_Word TypeInfo_for_T5_46,
  MR_Word TypeInfo_for_T6_47,
  MR_Word TypeInfo_for_T7_48,
  MR_Word P_15,
  MR_Word S_16,
  MR_Box STATE_VARIABLE_A_0_23,
  MR_Box * STATE_VARIABLE_A_24,
  MR_Box STATE_VARIABLE_B_0_25,
  MR_Box * STATE_VARIABLE_B_26,
  MR_Box STATE_VARIABLE_C_0_27,
  MR_Box * STATE_VARIABLE_C_28,
  MR_Box STATE_VARIABLE_D_0_29,
  MR_Box * STATE_VARIABLE_D_30,
  MR_Box STATE_VARIABLE_E_0_31,
  MR_Box * STATE_VARIABLE_E_32,
  MR_Box STATE_VARIABLE_F_0_33,
  MR_Box * STATE_VARIABLE_F_34)
{
  {
    MR_bool succeeded;
    MR_Word Var_35;
    MR_Word Var_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__set_bbbtree__to_sorted_list2_3_p_1(TypeInfo_for_T1_42, S_16, Var_53, &Var_35);
    succeeded = mercury__list__foldl6_14_p_6(TypeInfo_for_T1_42, TypeInfo_for_T2_43, TypeInfo_for_T3_44, TypeInfo_for_T4_45, TypeInfo_for_T5_46, TypeInfo_for_T6_47, TypeInfo_for_T7_48, P_15, Var_35, STATE_VARIABLE_A_0_23, STATE_VARIABLE_A_24, STATE_VARIABLE_B_0_25, STATE_VARIABLE_B_26, STATE_VARIABLE_C_0_27, STATE_VARIABLE_C_28, STATE_VARIABLE_D_0_29, STATE_VARIABLE_D_30, STATE_VARIABLE_E_0_31, STATE_VARIABLE_E_32, STATE_VARIABLE_F_0_33, STATE_VARIABLE_F_34);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__fold6_14_p_3(
  MR_Word TypeInfo_for_T1_42,
  MR_Word TypeInfo_for_T2_43,
  MR_Word TypeInfo_for_T3_44,
  MR_Word TypeInfo_for_T4_45,
  MR_Word TypeInfo_for_T5_46,
  MR_Word TypeInfo_for_T6_47,
  MR_Word TypeInfo_for_T7_48,
  MR_Word P_15,
  MR_Word S_16,
  MR_Box STATE_VARIABLE_A_0_23,
  MR_Box * STATE_VARIABLE_A_24,
  MR_Box STATE_VARIABLE_B_0_25,
  MR_Box * STATE_VARIABLE_B_26,
  MR_Box STATE_VARIABLE_C_0_27,
  MR_Box * STATE_VARIABLE_C_28,
  MR_Box STATE_VARIABLE_D_0_29,
  MR_Box * STATE_VARIABLE_D_30,
  MR_Box STATE_VARIABLE_E_0_31,
  MR_Box * STATE_VARIABLE_E_32,
  MR_Box STATE_VARIABLE_F_0_33,
  MR_Box * STATE_VARIABLE_F_34)
{
  {
    MR_bool succeeded;
    MR_Word Var_35;
    MR_Word Var_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__set_bbbtree__to_sorted_list2_3_p_1(TypeInfo_for_T1_42, S_16, Var_53, &Var_35);
    succeeded = mercury__list__foldl6_14_p_5(TypeInfo_for_T1_42, TypeInfo_for_T2_43, TypeInfo_for_T3_44, TypeInfo_for_T4_45, TypeInfo_for_T5_46, TypeInfo_for_T6_47, TypeInfo_for_T7_48, P_15, Var_35, STATE_VARIABLE_A_0_23, STATE_VARIABLE_A_24, STATE_VARIABLE_B_0_25, STATE_VARIABLE_B_26, STATE_VARIABLE_C_0_27, STATE_VARIABLE_C_28, STATE_VARIABLE_D_0_29, STATE_VARIABLE_D_30, STATE_VARIABLE_E_0_31, STATE_VARIABLE_E_32, STATE_VARIABLE_F_0_33, STATE_VARIABLE_F_34);
    return succeeded;
  }
}

void MR_CALL 
mercury__set_bbbtree__fold6_14_p_2(
  MR_Word TypeInfo_for_T1_42,
  MR_Word TypeInfo_for_T2_43,
  MR_Word TypeInfo_for_T3_44,
  MR_Word TypeInfo_for_T4_45,
  MR_Word TypeInfo_for_T5_46,
  MR_Word TypeInfo_for_T6_47,
  MR_Word TypeInfo_for_T7_48,
  MR_Word P_15,
  MR_Word S_16,
  MR_Box STATE_VARIABLE_A_0_23,
  MR_Box * STATE_VARIABLE_A_24,
  MR_Box STATE_VARIABLE_B_0_25,
  MR_Box * STATE_VARIABLE_B_26,
  MR_Box STATE_VARIABLE_C_0_27,
  MR_Box * STATE_VARIABLE_C_28,
  MR_Box STATE_VARIABLE_D_0_29,
  MR_Box * STATE_VARIABLE_D_30,
  MR_Box STATE_VARIABLE_E_0_31,
  MR_Box * STATE_VARIABLE_E_32,
  MR_Box STATE_VARIABLE_F_0_33,
  MR_Box * STATE_VARIABLE_F_34)
{
  {
    MR_Word Var_35;
    MR_Word Var_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__set_bbbtree__to_sorted_list2_3_p_1(TypeInfo_for_T1_42, S_16, Var_53, &Var_35);
    mercury__list__foldl6_14_p_2(TypeInfo_for_T1_42, TypeInfo_for_T2_43, TypeInfo_for_T3_44, TypeInfo_for_T4_45, TypeInfo_for_T5_46, TypeInfo_for_T6_47, TypeInfo_for_T7_48, P_15, Var_35, STATE_VARIABLE_A_0_23, STATE_VARIABLE_A_24, STATE_VARIABLE_B_0_25, STATE_VARIABLE_B_26, STATE_VARIABLE_C_0_27, STATE_VARIABLE_C_28, STATE_VARIABLE_D_0_29, STATE_VARIABLE_D_30, STATE_VARIABLE_E_0_31, STATE_VARIABLE_E_32, STATE_VARIABLE_F_0_33, STATE_VARIABLE_F_34);
  }
}

void MR_CALL 
mercury__set_bbbtree__fold6_14_p_1(
  MR_Word TypeInfo_for_T1_42,
  MR_Word TypeInfo_for_T2_43,
  MR_Word TypeInfo_for_T3_44,
  MR_Word TypeInfo_for_T4_45,
  MR_Word TypeInfo_for_T5_46,
  MR_Word TypeInfo_for_T6_47,
  MR_Word TypeInfo_for_T7_48,
  MR_Word P_15,
  MR_Word S_16,
  MR_Box STATE_VARIABLE_A_0_23,
  MR_Box * STATE_VARIABLE_A_24,
  MR_Box STATE_VARIABLE_B_0_25,
  MR_Box * STATE_VARIABLE_B_26,
  MR_Box STATE_VARIABLE_C_0_27,
  MR_Box * STATE_VARIABLE_C_28,
  MR_Box STATE_VARIABLE_D_0_29,
  MR_Box * STATE_VARIABLE_D_30,
  MR_Box STATE_VARIABLE_E_0_31,
  MR_Box * STATE_VARIABLE_E_32,
  MR_Box STATE_VARIABLE_F_0_33,
  MR_Box * STATE_VARIABLE_F_34)
{
  {
    MR_Word Var_35;
    MR_Word Var_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__set_bbbtree__to_sorted_list2_3_p_1(TypeInfo_for_T1_42, S_16, Var_53, &Var_35);
    mercury__list__foldl6_14_p_1(TypeInfo_for_T1_42, TypeInfo_for_T2_43, TypeInfo_for_T3_44, TypeInfo_for_T4_45, TypeInfo_for_T5_46, TypeInfo_for_T6_47, TypeInfo_for_T7_48, P_15, Var_35, STATE_VARIABLE_A_0_23, STATE_VARIABLE_A_24, STATE_VARIABLE_B_0_25, STATE_VARIABLE_B_26, STATE_VARIABLE_C_0_27, STATE_VARIABLE_C_28, STATE_VARIABLE_D_0_29, STATE_VARIABLE_D_30, STATE_VARIABLE_E_0_31, STATE_VARIABLE_E_32, STATE_VARIABLE_F_0_33, STATE_VARIABLE_F_34);
  }
}

void MR_CALL 
mercury__set_bbbtree__fold6_14_p_0(
  MR_Word TypeInfo_for_T1_42,
  MR_Word TypeInfo_for_T2_43,
  MR_Word TypeInfo_for_T3_44,
  MR_Word TypeInfo_for_T4_45,
  MR_Word TypeInfo_for_T5_46,
  MR_Word TypeInfo_for_T6_47,
  MR_Word TypeInfo_for_T7_48,
  MR_Word P_15,
  MR_Word S_16,
  MR_Box STATE_VARIABLE_A_0_23,
  MR_Box * STATE_VARIABLE_A_24,
  MR_Box STATE_VARIABLE_B_0_25,
  MR_Box * STATE_VARIABLE_B_26,
  MR_Box STATE_VARIABLE_C_0_27,
  MR_Box * STATE_VARIABLE_C_28,
  MR_Box STATE_VARIABLE_D_0_29,
  MR_Box * STATE_VARIABLE_D_30,
  MR_Box STATE_VARIABLE_E_0_31,
  MR_Box * STATE_VARIABLE_E_32,
  MR_Box STATE_VARIABLE_F_0_33,
  MR_Box * STATE_VARIABLE_F_34)
{
  {
    MR_Word Var_35;
    MR_Word Var_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__set_bbbtree__to_sorted_list2_3_p_1(TypeInfo_for_T1_42, S_16, Var_53, &Var_35);
    mercury__list__foldl6_14_p_0(TypeInfo_for_T1_42, TypeInfo_for_T2_43, TypeInfo_for_T3_44, TypeInfo_for_T4_45, TypeInfo_for_T5_46, TypeInfo_for_T6_47, TypeInfo_for_T7_48, P_15, Var_35, STATE_VARIABLE_A_0_23, STATE_VARIABLE_A_24, STATE_VARIABLE_B_0_25, STATE_VARIABLE_B_26, STATE_VARIABLE_C_0_27, STATE_VARIABLE_C_28, STATE_VARIABLE_D_0_29, STATE_VARIABLE_D_30, STATE_VARIABLE_E_0_31, STATE_VARIABLE_E_32, STATE_VARIABLE_F_0_33, STATE_VARIABLE_F_34);
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__fold5_12_p_5(
  MR_Word TypeInfo_for_T1_36,
  MR_Word TypeInfo_for_T2_37,
  MR_Word TypeInfo_for_T3_38,
  MR_Word TypeInfo_for_T4_39,
  MR_Word TypeInfo_for_T5_40,
  MR_Word TypeInfo_for_T6_41,
  MR_Word P_13,
  MR_Word S_14,
  MR_Box STATE_VARIABLE_A_0_20,
  MR_Box * STATE_VARIABLE_A_21,
  MR_Box STATE_VARIABLE_B_0_22,
  MR_Box * STATE_VARIABLE_B_23,
  MR_Box STATE_VARIABLE_C_0_24,
  MR_Box * STATE_VARIABLE_C_25,
  MR_Box STATE_VARIABLE_D_0_26,
  MR_Box * STATE_VARIABLE_D_27,
  MR_Box STATE_VARIABLE_E_0_28,
  MR_Box * STATE_VARIABLE_E_29)
{
  {
    MR_bool succeeded;
    MR_Word Var_30;
    MR_Word Var_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__set_bbbtree__to_sorted_list2_3_p_1(TypeInfo_for_T1_36, S_14, Var_46, &Var_30);
    succeeded = mercury__list__foldl5_12_p_5(TypeInfo_for_T1_36, TypeInfo_for_T2_37, TypeInfo_for_T3_38, TypeInfo_for_T4_39, TypeInfo_for_T5_40, TypeInfo_for_T6_41, P_13, Var_30, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__fold5_12_p_4(
  MR_Word TypeInfo_for_T1_36,
  MR_Word TypeInfo_for_T2_37,
  MR_Word TypeInfo_for_T3_38,
  MR_Word TypeInfo_for_T4_39,
  MR_Word TypeInfo_for_T5_40,
  MR_Word TypeInfo_for_T6_41,
  MR_Word P_13,
  MR_Word S_14,
  MR_Box STATE_VARIABLE_A_0_20,
  MR_Box * STATE_VARIABLE_A_21,
  MR_Box STATE_VARIABLE_B_0_22,
  MR_Box * STATE_VARIABLE_B_23,
  MR_Box STATE_VARIABLE_C_0_24,
  MR_Box * STATE_VARIABLE_C_25,
  MR_Box STATE_VARIABLE_D_0_26,
  MR_Box * STATE_VARIABLE_D_27,
  MR_Box STATE_VARIABLE_E_0_28,
  MR_Box * STATE_VARIABLE_E_29)
{
  {
    MR_bool succeeded;
    MR_Word Var_30;
    MR_Word Var_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__set_bbbtree__to_sorted_list2_3_p_1(TypeInfo_for_T1_36, S_14, Var_46, &Var_30);
    succeeded = mercury__list__foldl5_12_p_4(TypeInfo_for_T1_36, TypeInfo_for_T2_37, TypeInfo_for_T3_38, TypeInfo_for_T4_39, TypeInfo_for_T5_40, TypeInfo_for_T6_41, P_13, Var_30, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__fold5_12_p_3(
  MR_Word TypeInfo_for_T1_36,
  MR_Word TypeInfo_for_T2_37,
  MR_Word TypeInfo_for_T3_38,
  MR_Word TypeInfo_for_T4_39,
  MR_Word TypeInfo_for_T5_40,
  MR_Word TypeInfo_for_T6_41,
  MR_Word P_13,
  MR_Word S_14,
  MR_Box STATE_VARIABLE_A_0_20,
  MR_Box * STATE_VARIABLE_A_21,
  MR_Box STATE_VARIABLE_B_0_22,
  MR_Box * STATE_VARIABLE_B_23,
  MR_Box STATE_VARIABLE_C_0_24,
  MR_Box * STATE_VARIABLE_C_25,
  MR_Box STATE_VARIABLE_D_0_26,
  MR_Box * STATE_VARIABLE_D_27,
  MR_Box STATE_VARIABLE_E_0_28,
  MR_Box * STATE_VARIABLE_E_29)
{
  {
    MR_bool succeeded;
    MR_Word Var_30;
    MR_Word Var_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__set_bbbtree__to_sorted_list2_3_p_1(TypeInfo_for_T1_36, S_14, Var_46, &Var_30);
    succeeded = mercury__list__foldl5_12_p_3(TypeInfo_for_T1_36, TypeInfo_for_T2_37, TypeInfo_for_T3_38, TypeInfo_for_T4_39, TypeInfo_for_T5_40, TypeInfo_for_T6_41, P_13, Var_30, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
    return succeeded;
  }
}

void MR_CALL 
mercury__set_bbbtree__fold5_12_p_2(
  MR_Word TypeInfo_for_T1_36,
  MR_Word TypeInfo_for_T2_37,
  MR_Word TypeInfo_for_T3_38,
  MR_Word TypeInfo_for_T4_39,
  MR_Word TypeInfo_for_T5_40,
  MR_Word TypeInfo_for_T6_41,
  MR_Word P_13,
  MR_Word S_14,
  MR_Box STATE_VARIABLE_A_0_20,
  MR_Box * STATE_VARIABLE_A_21,
  MR_Box STATE_VARIABLE_B_0_22,
  MR_Box * STATE_VARIABLE_B_23,
  MR_Box STATE_VARIABLE_C_0_24,
  MR_Box * STATE_VARIABLE_C_25,
  MR_Box STATE_VARIABLE_D_0_26,
  MR_Box * STATE_VARIABLE_D_27,
  MR_Box STATE_VARIABLE_E_0_28,
  MR_Box * STATE_VARIABLE_E_29)
{
  {
    MR_Word Var_30;
    MR_Word Var_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__set_bbbtree__to_sorted_list2_3_p_1(TypeInfo_for_T1_36, S_14, Var_46, &Var_30);
    mercury__list__foldl5_12_p_2(TypeInfo_for_T1_36, TypeInfo_for_T2_37, TypeInfo_for_T3_38, TypeInfo_for_T4_39, TypeInfo_for_T5_40, TypeInfo_for_T6_41, P_13, Var_30, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
  }
}

void MR_CALL 
mercury__set_bbbtree__fold5_12_p_1(
  MR_Word TypeInfo_for_T1_36,
  MR_Word TypeInfo_for_T2_37,
  MR_Word TypeInfo_for_T3_38,
  MR_Word TypeInfo_for_T4_39,
  MR_Word TypeInfo_for_T5_40,
  MR_Word TypeInfo_for_T6_41,
  MR_Word P_13,
  MR_Word S_14,
  MR_Box STATE_VARIABLE_A_0_20,
  MR_Box * STATE_VARIABLE_A_21,
  MR_Box STATE_VARIABLE_B_0_22,
  MR_Box * STATE_VARIABLE_B_23,
  MR_Box STATE_VARIABLE_C_0_24,
  MR_Box * STATE_VARIABLE_C_25,
  MR_Box STATE_VARIABLE_D_0_26,
  MR_Box * STATE_VARIABLE_D_27,
  MR_Box STATE_VARIABLE_E_0_28,
  MR_Box * STATE_VARIABLE_E_29)
{
  {
    MR_Word Var_30;
    MR_Word Var_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__set_bbbtree__to_sorted_list2_3_p_1(TypeInfo_for_T1_36, S_14, Var_46, &Var_30);
    mercury__list__foldl5_12_p_1(TypeInfo_for_T1_36, TypeInfo_for_T2_37, TypeInfo_for_T3_38, TypeInfo_for_T4_39, TypeInfo_for_T5_40, TypeInfo_for_T6_41, P_13, Var_30, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
  }
}

void MR_CALL 
mercury__set_bbbtree__fold5_12_p_0(
  MR_Word TypeInfo_for_T1_36,
  MR_Word TypeInfo_for_T2_37,
  MR_Word TypeInfo_for_T3_38,
  MR_Word TypeInfo_for_T4_39,
  MR_Word TypeInfo_for_T5_40,
  MR_Word TypeInfo_for_T6_41,
  MR_Word P_13,
  MR_Word S_14,
  MR_Box STATE_VARIABLE_A_0_20,
  MR_Box * STATE_VARIABLE_A_21,
  MR_Box STATE_VARIABLE_B_0_22,
  MR_Box * STATE_VARIABLE_B_23,
  MR_Box STATE_VARIABLE_C_0_24,
  MR_Box * STATE_VARIABLE_C_25,
  MR_Box STATE_VARIABLE_D_0_26,
  MR_Box * STATE_VARIABLE_D_27,
  MR_Box STATE_VARIABLE_E_0_28,
  MR_Box * STATE_VARIABLE_E_29)
{
  {
    MR_Word Var_30;
    MR_Word Var_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__set_bbbtree__to_sorted_list2_3_p_1(TypeInfo_for_T1_36, S_14, Var_46, &Var_30);
    mercury__list__foldl5_12_p_0(TypeInfo_for_T1_36, TypeInfo_for_T2_37, TypeInfo_for_T3_38, TypeInfo_for_T4_39, TypeInfo_for_T5_40, TypeInfo_for_T6_41, P_13, Var_30, STATE_VARIABLE_A_0_20, STATE_VARIABLE_A_21, STATE_VARIABLE_B_0_22, STATE_VARIABLE_B_23, STATE_VARIABLE_C_0_24, STATE_VARIABLE_C_25, STATE_VARIABLE_D_0_26, STATE_VARIABLE_D_27, STATE_VARIABLE_E_0_28, STATE_VARIABLE_E_29);
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__fold4_10_p_5(
  MR_Word TypeInfo_for_T1_30,
  MR_Word TypeInfo_for_T2_31,
  MR_Word TypeInfo_for_T3_32,
  MR_Word TypeInfo_for_T4_33,
  MR_Word TypeInfo_for_T5_34,
  MR_Word P_11,
  MR_Word S_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  {
    MR_bool succeeded;
    MR_Word Var_25;
    MR_Word Var_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__set_bbbtree__to_sorted_list2_3_p_1(TypeInfo_for_T1_30, S_12, Var_39, &Var_25);
    succeeded = mercury__list__foldl4_10_p_7(TypeInfo_for_T1_30, TypeInfo_for_T2_31, TypeInfo_for_T3_32, TypeInfo_for_T4_33, TypeInfo_for_T5_34, P_11, Var_25, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__fold4_10_p_4(
  MR_Word TypeInfo_for_T1_30,
  MR_Word TypeInfo_for_T2_31,
  MR_Word TypeInfo_for_T3_32,
  MR_Word TypeInfo_for_T4_33,
  MR_Word TypeInfo_for_T5_34,
  MR_Word P_11,
  MR_Word S_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  {
    MR_bool succeeded;
    MR_Word Var_25;
    MR_Word Var_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__set_bbbtree__to_sorted_list2_3_p_1(TypeInfo_for_T1_30, S_12, Var_39, &Var_25);
    succeeded = mercury__list__foldl4_10_p_6(TypeInfo_for_T1_30, TypeInfo_for_T2_31, TypeInfo_for_T3_32, TypeInfo_for_T4_33, TypeInfo_for_T5_34, P_11, Var_25, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__fold4_10_p_3(
  MR_Word TypeInfo_for_T1_30,
  MR_Word TypeInfo_for_T2_31,
  MR_Word TypeInfo_for_T3_32,
  MR_Word TypeInfo_for_T4_33,
  MR_Word TypeInfo_for_T5_34,
  MR_Word P_11,
  MR_Word S_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  {
    MR_bool succeeded;
    MR_Word Var_25;
    MR_Word Var_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__set_bbbtree__to_sorted_list2_3_p_1(TypeInfo_for_T1_30, S_12, Var_39, &Var_25);
    succeeded = mercury__list__foldl4_10_p_5(TypeInfo_for_T1_30, TypeInfo_for_T2_31, TypeInfo_for_T3_32, TypeInfo_for_T4_33, TypeInfo_for_T5_34, P_11, Var_25, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
    return succeeded;
  }
}

void MR_CALL 
mercury__set_bbbtree__fold4_10_p_2(
  MR_Word TypeInfo_for_T1_30,
  MR_Word TypeInfo_for_T2_31,
  MR_Word TypeInfo_for_T3_32,
  MR_Word TypeInfo_for_T4_33,
  MR_Word TypeInfo_for_T5_34,
  MR_Word P_11,
  MR_Word S_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  {
    MR_Word Var_25;
    MR_Word Var_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__set_bbbtree__to_sorted_list2_3_p_1(TypeInfo_for_T1_30, S_12, Var_39, &Var_25);
    mercury__list__foldl4_10_p_2(TypeInfo_for_T1_30, TypeInfo_for_T2_31, TypeInfo_for_T3_32, TypeInfo_for_T4_33, TypeInfo_for_T5_34, P_11, Var_25, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
  }
}

void MR_CALL 
mercury__set_bbbtree__fold4_10_p_1(
  MR_Word TypeInfo_for_T1_30,
  MR_Word TypeInfo_for_T2_31,
  MR_Word TypeInfo_for_T3_32,
  MR_Word TypeInfo_for_T4_33,
  MR_Word TypeInfo_for_T5_34,
  MR_Word P_11,
  MR_Word S_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  {
    MR_Word Var_25;
    MR_Word Var_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__set_bbbtree__to_sorted_list2_3_p_1(TypeInfo_for_T1_30, S_12, Var_39, &Var_25);
    mercury__list__foldl4_10_p_1(TypeInfo_for_T1_30, TypeInfo_for_T2_31, TypeInfo_for_T3_32, TypeInfo_for_T4_33, TypeInfo_for_T5_34, P_11, Var_25, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
  }
}

void MR_CALL 
mercury__set_bbbtree__fold4_10_p_0(
  MR_Word TypeInfo_for_T1_30,
  MR_Word TypeInfo_for_T2_31,
  MR_Word TypeInfo_for_T3_32,
  MR_Word TypeInfo_for_T4_33,
  MR_Word TypeInfo_for_T5_34,
  MR_Word P_11,
  MR_Word S_12,
  MR_Box STATE_VARIABLE_A_0_17,
  MR_Box * STATE_VARIABLE_A_18,
  MR_Box STATE_VARIABLE_B_0_19,
  MR_Box * STATE_VARIABLE_B_20,
  MR_Box STATE_VARIABLE_C_0_21,
  MR_Box * STATE_VARIABLE_C_22,
  MR_Box STATE_VARIABLE_D_0_23,
  MR_Box * STATE_VARIABLE_D_24)
{
  {
    MR_Word Var_25;
    MR_Word Var_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__set_bbbtree__to_sorted_list2_3_p_1(TypeInfo_for_T1_30, S_12, Var_39, &Var_25);
    mercury__list__foldl4_10_p_0(TypeInfo_for_T1_30, TypeInfo_for_T2_31, TypeInfo_for_T3_32, TypeInfo_for_T4_33, TypeInfo_for_T5_34, P_11, Var_25, STATE_VARIABLE_A_0_17, STATE_VARIABLE_A_18, STATE_VARIABLE_B_0_19, STATE_VARIABLE_B_20, STATE_VARIABLE_C_0_21, STATE_VARIABLE_C_22, STATE_VARIABLE_D_0_23, STATE_VARIABLE_D_24);
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__fold3_8_p_5(
  MR_Word TypeInfo_for_T1_24,
  MR_Word TypeInfo_for_T2_25,
  MR_Word TypeInfo_for_T3_26,
  MR_Word TypeInfo_for_T4_27,
  MR_Word P_9,
  MR_Word S_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  {
    MR_bool succeeded;
    MR_Word Var_20;
    MR_Word Var_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__set_bbbtree__to_sorted_list2_3_p_1(TypeInfo_for_T1_24, S_10, Var_32, &Var_20);
    succeeded = mercury__list__foldl3_8_p_5(TypeInfo_for_T1_24, TypeInfo_for_T2_25, TypeInfo_for_T3_26, TypeInfo_for_T4_27, P_9, Var_20, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__fold3_8_p_4(
  MR_Word TypeInfo_for_T1_24,
  MR_Word TypeInfo_for_T2_25,
  MR_Word TypeInfo_for_T3_26,
  MR_Word TypeInfo_for_T4_27,
  MR_Word P_9,
  MR_Word S_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  {
    MR_bool succeeded;
    MR_Word Var_20;
    MR_Word Var_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__set_bbbtree__to_sorted_list2_3_p_1(TypeInfo_for_T1_24, S_10, Var_32, &Var_20);
    succeeded = mercury__list__foldl3_8_p_4(TypeInfo_for_T1_24, TypeInfo_for_T2_25, TypeInfo_for_T3_26, TypeInfo_for_T4_27, P_9, Var_20, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__fold3_8_p_3(
  MR_Word TypeInfo_for_T1_24,
  MR_Word TypeInfo_for_T2_25,
  MR_Word TypeInfo_for_T3_26,
  MR_Word TypeInfo_for_T4_27,
  MR_Word P_9,
  MR_Word S_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  {
    MR_bool succeeded;
    MR_Word Var_20;
    MR_Word Var_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__set_bbbtree__to_sorted_list2_3_p_1(TypeInfo_for_T1_24, S_10, Var_32, &Var_20);
    succeeded = mercury__list__foldl3_8_p_3(TypeInfo_for_T1_24, TypeInfo_for_T2_25, TypeInfo_for_T3_26, TypeInfo_for_T4_27, P_9, Var_20, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
    return succeeded;
  }
}

void MR_CALL 
mercury__set_bbbtree__fold3_8_p_2(
  MR_Word TypeInfo_for_T1_24,
  MR_Word TypeInfo_for_T2_25,
  MR_Word TypeInfo_for_T3_26,
  MR_Word TypeInfo_for_T4_27,
  MR_Word P_9,
  MR_Word S_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  {
    MR_Word Var_20;
    MR_Word Var_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__set_bbbtree__to_sorted_list2_3_p_1(TypeInfo_for_T1_24, S_10, Var_32, &Var_20);
    mercury__list__foldl3_8_p_2(TypeInfo_for_T1_24, TypeInfo_for_T2_25, TypeInfo_for_T3_26, TypeInfo_for_T4_27, P_9, Var_20, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
  }
}

void MR_CALL 
mercury__set_bbbtree__fold3_8_p_1(
  MR_Word TypeInfo_for_T1_24,
  MR_Word TypeInfo_for_T2_25,
  MR_Word TypeInfo_for_T3_26,
  MR_Word TypeInfo_for_T4_27,
  MR_Word P_9,
  MR_Word S_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  {
    MR_Word Var_20;
    MR_Word Var_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__set_bbbtree__to_sorted_list2_3_p_1(TypeInfo_for_T1_24, S_10, Var_32, &Var_20);
    mercury__list__foldl3_8_p_1(TypeInfo_for_T1_24, TypeInfo_for_T2_25, TypeInfo_for_T3_26, TypeInfo_for_T4_27, P_9, Var_20, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
  }
}

void MR_CALL 
mercury__set_bbbtree__fold3_8_p_0(
  MR_Word TypeInfo_for_T1_24,
  MR_Word TypeInfo_for_T2_25,
  MR_Word TypeInfo_for_T3_26,
  MR_Word TypeInfo_for_T4_27,
  MR_Word P_9,
  MR_Word S_10,
  MR_Box STATE_VARIABLE_A_0_14,
  MR_Box * STATE_VARIABLE_A_15,
  MR_Box STATE_VARIABLE_B_0_16,
  MR_Box * STATE_VARIABLE_B_17,
  MR_Box STATE_VARIABLE_C_0_18,
  MR_Box * STATE_VARIABLE_C_19)
{
  {
    MR_Word Var_20;
    MR_Word Var_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__set_bbbtree__to_sorted_list2_3_p_1(TypeInfo_for_T1_24, S_10, Var_32, &Var_20);
    mercury__list__foldl3_8_p_0(TypeInfo_for_T1_24, TypeInfo_for_T2_25, TypeInfo_for_T3_26, TypeInfo_for_T4_27, P_9, Var_20, STATE_VARIABLE_A_0_14, STATE_VARIABLE_A_15, STATE_VARIABLE_B_0_16, STATE_VARIABLE_B_17, STATE_VARIABLE_C_0_18, STATE_VARIABLE_C_19);
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__fold2_6_p_5(
  MR_Word TypeInfo_for_T1_18,
  MR_Word TypeInfo_for_T2_19,
  MR_Word TypeInfo_for_T3_20,
  MR_Word P_7,
  MR_Word S_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  {
    MR_bool succeeded;
    MR_Word Var_15;
    MR_Word Var_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__set_bbbtree__to_sorted_list2_3_p_1(TypeInfo_for_T1_18, S_8, Var_25, &Var_15);
    succeeded = mercury__list__foldl2_6_p_6(TypeInfo_for_T1_18, TypeInfo_for_T2_19, TypeInfo_for_T3_20, P_7, Var_15, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__fold2_6_p_4(
  MR_Word TypeInfo_for_T1_18,
  MR_Word TypeInfo_for_T2_19,
  MR_Word TypeInfo_for_T3_20,
  MR_Word P_7,
  MR_Word S_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  {
    MR_bool succeeded;
    MR_Word Var_15;
    MR_Word Var_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__set_bbbtree__to_sorted_list2_3_p_1(TypeInfo_for_T1_18, S_8, Var_25, &Var_15);
    succeeded = mercury__list__foldl2_6_p_5(TypeInfo_for_T1_18, TypeInfo_for_T2_19, TypeInfo_for_T3_20, P_7, Var_15, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__fold2_6_p_3(
  MR_Word TypeInfo_for_T1_18,
  MR_Word TypeInfo_for_T2_19,
  MR_Word TypeInfo_for_T3_20,
  MR_Word P_7,
  MR_Word S_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  {
    MR_bool succeeded;
    MR_Word Var_15;
    MR_Word Var_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__set_bbbtree__to_sorted_list2_3_p_1(TypeInfo_for_T1_18, S_8, Var_25, &Var_15);
    succeeded = mercury__list__foldl2_6_p_4(TypeInfo_for_T1_18, TypeInfo_for_T2_19, TypeInfo_for_T3_20, P_7, Var_15, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
    return succeeded;
  }
}

void MR_CALL 
mercury__set_bbbtree__fold2_6_p_2(
  MR_Word TypeInfo_for_T1_18,
  MR_Word TypeInfo_for_T2_19,
  MR_Word TypeInfo_for_T3_20,
  MR_Word P_7,
  MR_Word S_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  {
    MR_Word Var_15;
    MR_Word Var_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__set_bbbtree__to_sorted_list2_3_p_1(TypeInfo_for_T1_18, S_8, Var_25, &Var_15);
    mercury__list__foldl2_6_p_2(TypeInfo_for_T1_18, TypeInfo_for_T2_19, TypeInfo_for_T3_20, P_7, Var_15, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
  }
}

void MR_CALL 
mercury__set_bbbtree__fold2_6_p_1(
  MR_Word TypeInfo_for_T1_18,
  MR_Word TypeInfo_for_T2_19,
  MR_Word TypeInfo_for_T3_20,
  MR_Word P_7,
  MR_Word S_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  {
    MR_Word Var_15;
    MR_Word Var_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__set_bbbtree__to_sorted_list2_3_p_1(TypeInfo_for_T1_18, S_8, Var_25, &Var_15);
    mercury__list__foldl2_6_p_1(TypeInfo_for_T1_18, TypeInfo_for_T2_19, TypeInfo_for_T3_20, P_7, Var_15, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
  }
}

void MR_CALL 
mercury__set_bbbtree__fold2_6_p_0(
  MR_Word TypeInfo_for_T1_18,
  MR_Word TypeInfo_for_T2_19,
  MR_Word TypeInfo_for_T3_20,
  MR_Word P_7,
  MR_Word S_8,
  MR_Box STATE_VARIABLE_A_0_11,
  MR_Box * STATE_VARIABLE_A_12,
  MR_Box STATE_VARIABLE_B_0_13,
  MR_Box * STATE_VARIABLE_B_14)
{
  {
    MR_Word Var_15;
    MR_Word Var_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__set_bbbtree__to_sorted_list2_3_p_1(TypeInfo_for_T1_18, S_8, Var_25, &Var_15);
    mercury__list__foldl2_6_p_0(TypeInfo_for_T1_18, TypeInfo_for_T2_19, TypeInfo_for_T3_20, P_7, Var_15, STATE_VARIABLE_A_0_11, STATE_VARIABLE_A_12, STATE_VARIABLE_B_0_13, STATE_VARIABLE_B_14);
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__fold_4_p_5(
  MR_Word TypeInfo_for_T1_12,
  MR_Word TypeInfo_for_T2_13,
  MR_Word P_5,
  MR_Word S_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  {
    MR_bool succeeded;
    MR_Word Var_10;
    MR_Word Var_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__set_bbbtree__to_sorted_list2_3_p_1(TypeInfo_for_T1_12, S_6, Var_18, &Var_10);
    succeeded = mercury__list__foldl_4_p_5(TypeInfo_for_T1_12, TypeInfo_for_T2_13, P_5, Var_10, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__fold_4_p_4(
  MR_Word TypeInfo_for_T1_12,
  MR_Word TypeInfo_for_T2_13,
  MR_Word P_5,
  MR_Word S_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  {
    MR_bool succeeded;
    MR_Word Var_10;
    MR_Word Var_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__set_bbbtree__to_sorted_list2_3_p_1(TypeInfo_for_T1_12, S_6, Var_18, &Var_10);
    succeeded = mercury__list__foldl_4_p_4(TypeInfo_for_T1_12, TypeInfo_for_T2_13, P_5, Var_10, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__fold_4_p_3(
  MR_Word TypeInfo_for_T1_12,
  MR_Word TypeInfo_for_T2_13,
  MR_Word P_5,
  MR_Word S_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  {
    MR_bool succeeded;
    MR_Word Var_10;
    MR_Word Var_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__set_bbbtree__to_sorted_list2_3_p_1(TypeInfo_for_T1_12, S_6, Var_18, &Var_10);
    succeeded = mercury__list__foldl_4_p_3(TypeInfo_for_T1_12, TypeInfo_for_T2_13, P_5, Var_10, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
    return succeeded;
  }
}

void MR_CALL 
mercury__set_bbbtree__fold_4_p_2(
  MR_Word TypeInfo_for_T1_12,
  MR_Word TypeInfo_for_T2_13,
  MR_Word P_5,
  MR_Word S_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  {
    MR_Word Var_10;
    MR_Word Var_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__set_bbbtree__to_sorted_list2_3_p_1(TypeInfo_for_T1_12, S_6, Var_18, &Var_10);
    mercury__list__foldl_4_p_2(TypeInfo_for_T1_12, TypeInfo_for_T2_13, P_5, Var_10, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
  }
}

void MR_CALL 
mercury__set_bbbtree__fold_4_p_1(
  MR_Word TypeInfo_for_T1_12,
  MR_Word TypeInfo_for_T2_13,
  MR_Word P_5,
  MR_Word S_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  {
    MR_Word Var_10;
    MR_Word Var_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__set_bbbtree__to_sorted_list2_3_p_1(TypeInfo_for_T1_12, S_6, Var_18, &Var_10);
    mercury__list__foldl_4_p_1(TypeInfo_for_T1_12, TypeInfo_for_T2_13, P_5, Var_10, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
  }
}

void MR_CALL 
mercury__set_bbbtree__fold_4_p_0(
  MR_Word TypeInfo_for_T1_12,
  MR_Word TypeInfo_for_T2_13,
  MR_Word P_5,
  MR_Word S_6,
  MR_Box STATE_VARIABLE_A_0_8,
  MR_Box * STATE_VARIABLE_A_9)
{
  {
    MR_Word Var_10;
    MR_Word Var_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__set_bbbtree__to_sorted_list2_3_p_1(TypeInfo_for_T1_12, S_6, Var_18, &Var_10);
    mercury__list__foldl_4_p_0(TypeInfo_for_T1_12, TypeInfo_for_T2_13, P_5, Var_10, STATE_VARIABLE_A_0_8, STATE_VARIABLE_A_9);
  }
}

MR_Box MR_CALL 
mercury__set_bbbtree__fold_3_f_0(
  MR_Word TypeInfo_for_T1_10,
  MR_Word TypeInfo_for_T2_11,
  MR_Word F_5,
  MR_Word S_6,
  MR_Box A_7)
{
  {
    MR_Box B_8;
    MR_Word Var_9;
    MR_Word Var_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__set_bbbtree__to_sorted_list2_3_p_1(TypeInfo_for_T1_10, S_6, Var_16, &Var_9);
    mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(F_5, Var_9, A_7, &B_8);
    return B_8;
  }
}

static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
  MR_Word Var_18,
  MR_Word HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Box V_10_9 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Word V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Box V_15_13;
      MR_Box MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), Var_18, (MR_Integer) 1)));
      MR_Word next_value_of_HeadVar__2_2;
      MR_Box next_value_of_HeadVar__3_3;

      V_15_13 = func_0(((MR_Box) Var_18), V_10_9, HeadVar__3_3);
      // direct tailcall eliminated
      next_value_of_HeadVar__2_2 = V_11_10;
      next_value_of_HeadVar__3_3 = V_15_13;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__superset_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word SetA_3,
  MR_Word SetB_4)
{
  {
    MR_bool succeeded;
    MR_Word Set_8;

    mercury__set_bbbtree__difference_r_4_p_0(TypeInfo_for_T_5, SetB_4, SetA_3, &Set_8, (MR_Integer) 5);
    succeeded = (Set_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__subset_2_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word SetA_3,
  MR_Word SetB_4)
{
  {
    MR_bool succeeded;
    MR_Word Set_5;

    mercury__set_bbbtree__difference_r_4_p_0(TypeInfo_for_T_6, SetA_3, SetB_4, &Set_5, (MR_Integer) 5);
    succeeded = (Set_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    return succeeded;
  }
}

MR_Word MR_CALL 
mercury__set_bbbtree__difference_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word S1_4,
  MR_Word S2_5)
{
  {
    MR_Word S3_6;

    mercury__set_bbbtree__difference_r_4_p_0(TypeInfo_for_T_7, S1_4, S2_5, &S3_6, (MR_Integer) 5);
    return S3_6;
  }
}

void MR_CALL 
mercury__set_bbbtree__difference_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word SetA_4,
  MR_Word SetB_5,
  MR_Word * Set_6)
{
  {
    mercury__set_bbbtree__difference_r_4_p_0(TypeInfo_for_T_8, SetA_4, SetB_5, Set_6, (MR_Integer) 5);
  }
}

MR_Word MR_CALL 
mercury__set_bbbtree__intersect_list_1_f_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word HeadVar__1_1)
{
  {
    MR_Word HeadVar__2_2;

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word Set_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Sets_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));

      HeadVar__2_2 = mercury__set_bbbtree__intersect_list_r_3_f_0(TypeInfo_for_T_6, Set_3, Sets_4, (MR_Integer) 5);
    }
    return HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__set_bbbtree__intersect_list_r_3_f_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  while (MR_TRUE)
  {
    MR_Word HeadVar__4_4;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      HeadVar__4_4 = HeadVar__1_1;
    else
    {
      MR_Word Set_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Sets_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word Intersect1_11;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      mercury__set_bbbtree__intersect_r_4_p_0(TypeInfo_for_T_12, HeadVar__1_1, Set_8, &Intersect1_11, HeadVar__3_3);
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = Intersect1_11;
      next_value_of_HeadVar__2_2 = Sets_9;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    return HeadVar__4_4;
    break;
  }
}

MR_Word MR_CALL 
mercury__set_bbbtree__power_intersect_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word SS_3)
{
  {
    MR_Word S_4;

    if ((SS_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      S_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word V_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), SS_3, (MR_Integer) 0)));
      MR_Word L_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), SS_3, (MR_Integer) 2)));
      MR_Word R_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), SS_3, (MR_Integer) 3)));
      MR_Word Intersection0_16;
      MR_Integer _N_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), SS_3, (MR_Integer) 1)));

      mercury__set_bbbtree__power_intersect_r2_4_p_0(TypeInfo_for_T_5, L_12, V_10, &Intersection0_16, (MR_Integer) 5);
      mercury__set_bbbtree__power_intersect_r2_4_p_0(TypeInfo_for_T_5, R_13, Intersection0_16, &S_4, (MR_Integer) 5);
    }
    return S_4;
  }
}

void MR_CALL 
mercury__set_bbbtree__power_intersect_2_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word Sets_3,
  MR_Word * Set_4)
{
  {
    if ((Sets_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *Set_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word V_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), Sets_3, (MR_Integer) 0)));
      MR_Word L_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), Sets_3, (MR_Integer) 2)));
      MR_Word R_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Sets_3, (MR_Integer) 3)));
      MR_Word Intersection0_14;
      MR_Integer _N_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Sets_3, (MR_Integer) 1)));

      mercury__set_bbbtree__power_intersect_r2_4_p_0(TypeInfo_for_T_6, L_10, V_8, &Intersection0_14, (MR_Integer) 5);
      mercury__set_bbbtree__power_intersect_r2_4_p_0(TypeInfo_for_T_6, R_11, Intersection0_14, Set_4, (MR_Integer) 5);
    }
  }
}

static void MR_CALL 
mercury__set_bbbtree__power_intersect_r2_4_p_0(
  MR_Word TypeInfo_for_T_29,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Integer HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
        *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Integer Var_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));

      if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      else
      {
        MR_Word Intersection0_26;
        MR_Word Intersection1_27;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_HeadVar__2_2;

        mercury__set_bbbtree__intersect_r_4_p_0(TypeInfo_for_T_29, Var_33, HeadVar__2_2, &Intersection0_26, HeadVar__4_4);
        mercury__set_bbbtree__power_intersect_r2_4_p_0(TypeInfo_for_T_29, Var_31, Intersection0_26, &Intersection1_27, HeadVar__4_4);
        // direct tailcall eliminated
        next_value_of_HeadVar__1_1 = Var_30;
        next_value_of_HeadVar__2_2 = Intersection1_27;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__set_bbbtree__intersect_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word S1_4,
  MR_Word S2_5)
{
  {
    MR_Word S3_6;

    mercury__set_bbbtree__intersect_r_4_p_0(TypeInfo_for_T_7, S1_4, S2_5, &S3_6, (MR_Integer) 5);
    return S3_6;
  }
}

void MR_CALL 
mercury__set_bbbtree__intersect_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word SetA_4,
  MR_Word SetB_5,
  MR_Word * Set_6)
{
  {
    mercury__set_bbbtree__intersect_r_4_p_0(TypeInfo_for_T_8, SetA_4, SetB_5, Set_6, (MR_Integer) 5);
  }
}

void MR_CALL 
mercury__set_bbbtree__intersect_r_4_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Integer HeadVar__4_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Box V_7 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      MR_Word LL_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word LR_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word NewRL_14;
      MR_Word NewRR_15;
      MR_Word LSet_16;
      MR_Word RSet_17;
      MR_Integer _N_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));

      mercury__set_bbbtree__split_lt_4_p_0(TypeInfo_for_T_18, HeadVar__2_2, V_7, &NewRL_14, HeadVar__4_4);
      mercury__set_bbbtree__split_gt_4_p_0(TypeInfo_for_T_18, HeadVar__2_2, V_7, &NewRR_15, HeadVar__4_4);
      mercury__set_bbbtree__intersect_r_4_p_0(TypeInfo_for_T_18, LL_9, NewRL_14, &LSet_16, HeadVar__4_4);
      mercury__set_bbbtree__intersect_r_4_p_0(TypeInfo_for_T_18, LR_10, NewRR_15, &RSet_17, HeadVar__4_4);
      succeeded = mercury__set_bbbtree__member_2_p_0(TypeInfo_for_T_18, V_7, HeadVar__2_2);
      if (succeeded)
        mercury__set_bbbtree__concat4_5_p_0(TypeInfo_for_T_18, LSet_16, RSet_17, V_7, HeadVar__3_3, HeadVar__4_4);
      else
      {
        MR_Integer LSize_22;

        if ((LSet_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          LSize_22 = (MR_Integer) 0;
        else
        {
          MR_Box _V_30 = (MR_hl_field(MR_mktag(1), LSet_16, (MR_Integer) 0));
          MR_Word _L_32;
          MR_Word _R_33;

          LSize_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), LSet_16, (MR_Integer) 1)));
          _L_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), LSet_16, (MR_Integer) 2)));
          _R_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), LSet_16, (MR_Integer) 3)));
        }
        succeeded = (LSize_22 == (MR_Integer) 0);
        if (succeeded)
          *HeadVar__3_3 = RSet_17;
        else
        {
          MR_Integer RSize_23;

          if ((RSet_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            RSize_23 = (MR_Integer) 0;
          else
          {
            MR_Box _V_34 = (MR_hl_field(MR_mktag(1), RSet_17, (MR_Integer) 0));
            MR_Word _L_36;
            MR_Word _R_37;

            RSize_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), RSet_17, (MR_Integer) 1)));
            _L_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), RSet_17, (MR_Integer) 2)));
            _R_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), RSet_17, (MR_Integer) 3)));
          }
          succeeded = (RSize_23 == (MR_Integer) 0);
          if (succeeded)
            *HeadVar__3_3 = LSet_16;
          else
          {
            succeeded = (LSize_22 > RSize_23);
            if (succeeded)
            {
              MR_Box X_24;
              MR_Word NewL_25;

              succeeded = mercury__set_bbbtree__remove_largest_3_p_0(TypeInfo_for_T_18, &X_24, LSet_16, &NewL_25);
              if (succeeded)
                mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(X_24, NewL_25, RSet_17, HeadVar__3_3);
              else
              {
                {
                  mercury__require__error_1_p_0((MR_String) "set_bbbtree.concat3.1");
                  return;
                }
              }
            }
            else
            {
              MR_Word NewR_26;
              MR_Box X_29;

              succeeded = mercury__set_bbbtree__remove_least_3_p_0(TypeInfo_for_T_18, &X_29, RSet_17, &NewR_26);
              if (succeeded)
                mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(X_29, LSet_16, NewR_26, HeadVar__3_3);
              else
              {
                {
                  mercury__require__error_1_p_0((MR_String) "set_bbbtree.concat3.2");
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
}

MR_Word MR_CALL 
mercury__set_bbbtree__power_union_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word SS_3)
{
  {
    MR_Word S_4;

    mercury__set_bbbtree__power_union_r_3_p_0(TypeInfo_for_T_5, SS_3, &S_4, (MR_Integer) 5);
    return S_4;
  }
}

void MR_CALL 
mercury__set_bbbtree__power_union_2_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word Sets_3,
  MR_Word * Set_4)
{
  {
    mercury__set_bbbtree__power_union_r_3_p_0(TypeInfo_for_T_6, Sets_3, Set_4, (MR_Integer) 5);
  }
}

void MR_CALL 
mercury__set_bbbtree__power_union_r_3_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word V_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
    MR_Word L_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2)));
    MR_Word R_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3)));
    MR_Word LUnion_11;
    MR_Word RUnion_12;
    MR_Word Union_13;
    MR_Integer _N_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));

    mercury__set_bbbtree__power_union_r_3_p_0(TypeInfo_for_T_14, L_7, &LUnion_11, HeadVar__3_3);
    mercury__set_bbbtree__power_union_r_3_p_0(TypeInfo_for_T_14, R_8, &RUnion_12, HeadVar__3_3);
    mercury__set_bbbtree__union_r_4_p_0(TypeInfo_for_T_14, LUnion_11, RUnion_12, &Union_13, HeadVar__3_3);
    mercury__set_bbbtree__union_r_4_p_0(TypeInfo_for_T_14, V_5, Union_13, HeadVar__2_2, HeadVar__3_3);
  }
}

MR_Word MR_CALL 
mercury__set_bbbtree__union_list_1_f_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word ListofSets_3)
{
  {
    MR_Word HeadVar__2_2;
    MR_Word Var_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__list_0(TypeInfo_for_T_6, ListofSets_3, Var_5, &HeadVar__2_2);
    return HeadVar__2_2;
  }
}

static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__list_0(
  MR_Word Var_27,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__4_4 = HeadVar__3_3;
    else
    {
      MR_Word V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word V_15_13;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word next_value_of_HeadVar__3_3;

      mercury__set_bbbtree__union_r_4_p_0(Var_27, V_10_9, HeadVar__3_3, &V_15_13, (MR_Integer) 5);
      // direct tailcall eliminated
      next_value_of_HeadVar__2_2 = V_11_10;
      next_value_of_HeadVar__3_3 = V_15_13;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      HeadVar__3_3 = next_value_of_HeadVar__3_3;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__set_bbbtree__union_2_f_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word S1_4,
  MR_Word S2_5)
{
  {
    MR_Word S3_6;

    mercury__set_bbbtree__union_r_4_p_0(TypeInfo_for_T_7, S1_4, S2_5, &S3_6, (MR_Integer) 5);
    return S3_6;
  }
}

void MR_CALL 
mercury__set_bbbtree__union_3_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Word SetA_4,
  MR_Word SetB_5,
  MR_Word * Set_6)
{
  {
    mercury__set_bbbtree__union_r_4_p_0(TypeInfo_for_T_8, SetA_4, SetB_5, Set_6, (MR_Integer) 5);
  }
}

void MR_CALL 
mercury__set_bbbtree__union_r_4_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * Set_3,
  MR_Integer HeadVar__4_4)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *Set_3 = HeadVar__2_2;
  else
  {
    MR_Box V_7 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
    MR_Word LL_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2)));
    MR_Word LR_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3)));
    MR_Word NewRL_14;
    MR_Word NewRR_15;
    MR_Word LSet_16;
    MR_Word RSet_17;
    MR_Integer _N_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));

    mercury__set_bbbtree__split_lt_4_p_0(TypeInfo_for_T_18, HeadVar__2_2, V_7, &NewRL_14, HeadVar__4_4);
    mercury__set_bbbtree__split_gt_4_p_0(TypeInfo_for_T_18, HeadVar__2_2, V_7, &NewRR_15, HeadVar__4_4);
    mercury__set_bbbtree__union_r_4_p_0(TypeInfo_for_T_18, LL_9, NewRL_14, &LSet_16, HeadVar__4_4);
    mercury__set_bbbtree__union_r_4_p_0(TypeInfo_for_T_18, LR_10, NewRR_15, &RSet_17, HeadVar__4_4);
    mercury__set_bbbtree__concat4_5_p_0(TypeInfo_for_T_18, LSet_16, RSet_17, V_7, Set_3, HeadVar__4_4);
  }
}

MR_Word MR_CALL 
mercury__set_bbbtree__to_sorted_list_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word S_3)
{
  {
    MR_Word Xs_4;
    MR_Word Var_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__set_bbbtree__to_sorted_list2_3_p_1(TypeInfo_for_T_5, S_3, Var_8, &Xs_4);
    return Xs_4;
  }
}

void MR_CALL 
mercury__set_bbbtree__to_sorted_list_2_p_1(
  MR_Word TypeInfo_for_T_6,
  MR_Word Set_3,
  MR_Word * List_4)
{
  {
    MR_Word Var_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__set_bbbtree__to_sorted_list2_3_p_1(TypeInfo_for_T_6, Set_3, Var_5, List_4);
  }
}

void MR_CALL 
mercury__set_bbbtree__to_sorted_list2_3_p_1(
  MR_Word TypeInfo_for_T_13,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * List_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *List_3 = HeadVar__2_2;
    else
    {
      MR_Box V_5 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      MR_Word L_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word R_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word List0_11;
      MR_Word Var_12;
      MR_Integer _N_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      mercury__set_bbbtree__to_sorted_list2_3_p_1(TypeInfo_for_T_13, R_8, HeadVar__2_2, &List0_11);
      {
        Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_12, 0) = V_5;
        MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (List0_11));
      }
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = L_7;
      next_value_of_HeadVar__2_2 = Var_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__set_bbbtree__to_sorted_list_2_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word Set_3,
  MR_Word * List_4)
{
  {
    MR_Word Var_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__set_bbbtree__to_sorted_list2_3_p_0(TypeInfo_for_T_6, Set_3, Var_5, List_4);
  }
}

void MR_CALL 
mercury__set_bbbtree__to_sorted_list2_3_p_0(
  MR_Word TypeInfo_for_T_13,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * List_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *List_3 = HeadVar__2_2;
    else
    {
      MR_Box V_5 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      MR_Word L_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word R_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word List0_11;
      MR_Word Var_12;
      MR_Integer _N_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      mercury__set_bbbtree__to_sorted_list2_3_p_0(TypeInfo_for_T_13, R_8, HeadVar__2_2, &List0_11);
      {
        Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_12, 0) = V_5;
        MR_hl_field(MR_mktag(1), Var_12, 1) = ((MR_Box) (List0_11));
      }
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = L_7;
      next_value_of_HeadVar__2_2 = Var_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

void MR_CALL 
mercury__set_bbbtree__sorted_list_to_set_len_3_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  else
  {
    MR_Word RestOfList_9;

    mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_p_0(HeadVar__1_1, &RestOfList_9, HeadVar__3_3, HeadVar__2_2);
    if (!((RestOfList_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
    {
      {
        mercury__require__error_1_p_0((MR_String) "set_bbbtree.sorted_list_to_set_r");
        return;
      }
    }
  }
}

MR_Word MR_CALL 
mercury__set_bbbtree__from_sorted_list_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word List_3)
{
  {
    MR_Word Set_4;

    mercury__set_bbbtree__sorted_list_to_set_2_p_0(TypeInfo_for_T_5, List_3, &Set_4);
    return Set_4;
  }
}

MR_Word MR_CALL 
mercury__set_bbbtree__sorted_list_to_set_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Xs_3)
{
  {
    MR_Word S_4;

    mercury__set_bbbtree__sorted_list_to_set_2_p_0(TypeInfo_for_T_5, Xs_3, &S_4);
    return S_4;
  }
}

void MR_CALL 
mercury__set_bbbtree__sorted_list_to_set_2_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word List_3,
  MR_Word * Set_4)
{
  {
    MR_Integer N_5;

    mercury__list__length_acc_3_p_0(TypeInfo_for_T_6, List_3, (MR_Integer) 0, &N_5);
    if ((List_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *Set_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word RestOfList_15;

      mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_p_0(List_3, &RestOfList_15, N_5, Set_4);
      if (!((RestOfList_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))))
      {
        {
          mercury__require__error_1_p_0((MR_String) "set_bbbtree.sorted_list_to_set_r");
          return;
        }
      }
    }
  }
}

static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_p_0(
  MR_Word List_5,
  MR_Word * RestOfList_6,
  MR_Integer N_7,
  MR_Word * Set_8)
{
  {
    MR_bool succeeded = (N_7 > (MR_Integer) 3);

    if (succeeded)
    {
      MR_Integer NL_9 = (N_7 / (MR_Integer) 2);
      MR_Integer NR_10;
      MR_Word RestOfList0_11;
      MR_Word L_12;
      MR_Integer Var_21 = (N_7 - NL_9);

      NR_10 = (Var_21 - (MR_Integer) 1);
      mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_p_0(List_5, &RestOfList0_11, NL_9, &L_12);
      if ((RestOfList0_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__error_1_p_0((MR_String) "set_bbbtree.sorted_list_to_set_len2.1");
          return;
        }
      }
      else
      {
        MR_Box V_13 = (MR_hl_field(MR_mktag(1), RestOfList0_11, (MR_Integer) 0));
        MR_Word RestOfList1_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), RestOfList0_11, (MR_Integer) 1)));
        MR_Word R_15;

        mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_p_0(RestOfList1_14, RestOfList_6, NR_10, &R_15);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          *Set_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = V_13;
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (N_7));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (L_12));
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (R_15));
        }
      }
    }
    else
    {
      succeeded = (N_7 == (MR_Integer) 3);
      if (succeeded)
      {
        MR_Box X_16;
        MR_Box Y_17;
        MR_Box Z_18;
        MR_Word RestOfList0_45;
        MR_Word Var_24;
        MR_Word Var_25;

        succeeded = ((MR_tag((MR_Word) List_5)) == (MR_mktag((MR_Integer) 1)));
        if (succeeded)
        {
          X_16 = (MR_hl_field(MR_mktag(1), List_5, (MR_Integer) 0));
          Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), List_5, (MR_Integer) 1)));
          succeeded = ((MR_tag((MR_Word) Var_24)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            Y_17 = (MR_hl_field(MR_mktag(1), Var_24, (MR_Integer) 0));
            Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_24, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) Var_25)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Z_18 = (MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 0));
              RestOfList0_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_25, (MR_Integer) 1)));
            }
          }
        }
        if (succeeded)
        {
          MR_Word Var_26;
          MR_Word Var_28;
          MR_Word Var_29;
          MR_Word Var_30;
          MR_Word Var_32;
          MR_Word Var_33;

          *RestOfList_6 = RestOfList0_45;
          Var_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          Var_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          {
            Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_26, 0) = X_16;
            MR_hl_field(MR_mktag(1), Var_26, 1) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(1), Var_26, 2) = ((MR_Box) (Var_28));
            MR_hl_field(MR_mktag(1), Var_26, 3) = ((MR_Box) (Var_29));
          }
          Var_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          Var_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          {
            Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_30, 0) = Z_18;
            MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) ((MR_Integer) 1));
            MR_hl_field(MR_mktag(1), Var_30, 2) = ((MR_Box) (Var_32));
            MR_hl_field(MR_mktag(1), Var_30, 3) = ((MR_Box) (Var_33));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *Set_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = Y_17;
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (N_7));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Var_26));
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Var_30));
          }
        }
        else
        {
          {
            mercury__require__error_1_p_0((MR_String) "set_bbbtree.sorted_list_to_set_len2.2");
            return;
          }
        }
      }
      else
      {
        succeeded = (N_7 == (MR_Integer) 2);
        if (succeeded)
        {
          MR_Word RestOfList0_46;
          MR_Box X_47;
          MR_Box Y_48;
          MR_Word Var_35;

          succeeded = ((MR_tag((MR_Word) List_5)) == (MR_mktag((MR_Integer) 1)));
          if (succeeded)
          {
            X_47 = (MR_hl_field(MR_mktag(1), List_5, (MR_Integer) 0));
            Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), List_5, (MR_Integer) 1)));
            succeeded = ((MR_tag((MR_Word) Var_35)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              Y_48 = (MR_hl_field(MR_mktag(1), Var_35, (MR_Integer) 0));
              RestOfList0_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_35, (MR_Integer) 1)));
            }
          }
          if (succeeded)
          {
            MR_Word Var_36;
            MR_Word Var_38;
            MR_Word Var_39;
            MR_Word Var_40;

            *RestOfList_6 = RestOfList0_46;
            Var_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            Var_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_36, 0) = X_47;
              MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) ((MR_Integer) 1));
              MR_hl_field(MR_mktag(1), Var_36, 2) = ((MR_Box) (Var_38));
              MR_hl_field(MR_mktag(1), Var_36, 3) = ((MR_Box) (Var_39));
            }
            Var_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              *Set_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = Y_48;
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (N_7));
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Var_36));
              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Var_40));
            }
          }
          else
          {
            {
              mercury__require__error_1_p_0((MR_String) "set_bbbtree.sorted_list_to_set_len2.3");
              return;
            }
          }
        }
        else
        {
          succeeded = (N_7 == (MR_Integer) 1);
          if (succeeded)
          {
            MR_Word RestOfList0_49;
            MR_Box X_50;

            succeeded = ((MR_tag((MR_Word) List_5)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              X_50 = (MR_hl_field(MR_mktag(1), List_5, (MR_Integer) 0));
              RestOfList0_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), List_5, (MR_Integer) 1)));
              {
                MR_Word Var_42;
                MR_Word Var_43;

                *RestOfList_6 = RestOfList0_49;
                Var_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                Var_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  *Set_8 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = X_50;
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (N_7));
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Var_42));
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Var_43));
                }
              }
            }
            else
            {
              {
                mercury__require__error_1_p_0((MR_String) "set_bbbtree.sorted_list_to_set_len2.4");
                return;
              }
            }
          }
          else
          {
            *RestOfList_6 = List_5;
            *Set_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
        }
      }
    }
  }
}

MR_Word MR_CALL 
mercury__set_bbbtree__from_list_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word List_3)
{
  {
    MR_Word Set_4;
    MR_Word InitSet_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__set_bbbtree__insert_list_r_4_p_0(TypeInfo_for_T_5, InitSet_12, List_3, &Set_4, (MR_Integer) 5);
    return Set_4;
  }
}

MR_Word MR_CALL 
mercury__set_bbbtree__list_to_set_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Xs_3)
{
  {
    MR_Word S_4;
    MR_Word InitSet_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__set_bbbtree__insert_list_r_4_p_0(TypeInfo_for_T_5, InitSet_12, Xs_3, &S_4, (MR_Integer) 5);
    return S_4;
  }
}

void MR_CALL 
mercury__set_bbbtree__list_to_set_2_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word List_3,
  MR_Word * Set_4)
{
  {
    MR_Word InitSet_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__set_bbbtree__insert_list_r_4_p_0(TypeInfo_for_T_6, InitSet_10, List_3, Set_4, (MR_Integer) 5);
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__remove_list_3_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Set_0_2,
  MR_Word * STATE_VARIABLE_Set_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_semi tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *STATE_VARIABLE_Set_3 = STATE_VARIABLE_Set_0_2;
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box X_7 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      MR_Word Xs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_Set_12_12;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Set_0_2;

      succeeded = mercury__set_bbbtree__remove_3_p_0(TypeInfo_for_T_14, X_7, STATE_VARIABLE_Set_0_2, &STATE_VARIABLE_Set_12_12);
      if (succeeded)
      {
        // direct tailcall eliminated
        next_value_of_HeadVar__1_1 = Xs_8;
        next_value_of_STATE_VARIABLE_Set_0_2 = STATE_VARIABLE_Set_12_12;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        STATE_VARIABLE_Set_0_2 = next_value_of_STATE_VARIABLE_Set_0_2;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_Word MR_CALL 
mercury__set_bbbtree__delete_list_2_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word STATE_VARIABLE_S_0_6,
  MR_Word Xs_5)
{
  {
    MR_Word STATE_VARIABLE_S_7;

    mercury__set_bbbtree__delete_list_3_p_0(TypeInfo_for_T_9, Xs_5, STATE_VARIABLE_S_0_6, &STATE_VARIABLE_S_7);
    return STATE_VARIABLE_S_7;
  }
}

void MR_CALL 
mercury__set_bbbtree__delete_list_3_p_0(
  MR_Word TypeInfo_for_T_14,
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_Set_0_2,
  MR_Word * STATE_VARIABLE_Set_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *STATE_VARIABLE_Set_3 = STATE_VARIABLE_Set_0_2;
    else
    {
      MR_Box X_7 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      MR_Word Xs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_Set_12_12;
      MR_Word STATE_VARIABLE_Set_9_20;
      MR_Word NewSet_19;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_Set_0_2;

      succeeded = mercury__set_bbbtree__remove_3_p_0(TypeInfo_for_T_14, X_7, STATE_VARIABLE_Set_0_2, &NewSet_19);
      if (succeeded)
        STATE_VARIABLE_Set_9_20 = NewSet_19;
      else
        STATE_VARIABLE_Set_9_20 = STATE_VARIABLE_Set_0_2;
      STATE_VARIABLE_Set_12_12 = STATE_VARIABLE_Set_9_20;
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = Xs_8;
      next_value_of_STATE_VARIABLE_Set_0_2 = STATE_VARIABLE_Set_12_12;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_Set_0_2 = next_value_of_STATE_VARIABLE_Set_0_2;
      continue;
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__set_bbbtree__delete_2_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word STATE_VARIABLE_S_0_6,
  MR_Box T_5)
{
  {
    MR_bool succeeded;
    MR_Word STATE_VARIABLE_S_7;
    MR_Word STATE_VARIABLE_Set_9_15;
    MR_Word NewSet_14;

    succeeded = mercury__set_bbbtree__remove_3_p_0(TypeInfo_for_T_9, T_5, STATE_VARIABLE_S_0_6, &NewSet_14);
    if (succeeded)
      STATE_VARIABLE_Set_9_15 = NewSet_14;
    else
      STATE_VARIABLE_Set_9_15 = STATE_VARIABLE_S_0_6;
    STATE_VARIABLE_S_7 = STATE_VARIABLE_Set_9_15;
    return STATE_VARIABLE_S_7;
  }
}

void MR_CALL 
mercury__set_bbbtree__delete_3_p_1(
  MR_Word TypeInfo_for_T_11,
  MR_Box X_4,
  MR_Word STATE_VARIABLE_Set_0_7,
  MR_Word * STATE_VARIABLE_Set_8)
{
  {
    MR_bool succeeded;
    MR_Word STATE_VARIABLE_Set_9_9;
    MR_Word NewSet_6;

    succeeded = mercury__set_bbbtree__remove_3_p_0(TypeInfo_for_T_11, X_4, STATE_VARIABLE_Set_0_7, &NewSet_6);
    if (succeeded)
      STATE_VARIABLE_Set_9_9 = NewSet_6;
    else
      STATE_VARIABLE_Set_9_9 = STATE_VARIABLE_Set_0_7;
    *STATE_VARIABLE_Set_8 = STATE_VARIABLE_Set_9_9;
  }
}

void MR_CALL 
mercury__set_bbbtree__delete_3_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Box X_4,
  MR_Word STATE_VARIABLE_Set_0_7,
  MR_Word * STATE_VARIABLE_Set_8)
{
  {
    MR_bool succeeded;
    MR_Word STATE_VARIABLE_Set_9_9;
    MR_Word NewSet_6;

    succeeded = mercury__set_bbbtree__remove_3_p_0(TypeInfo_for_T_11, X_4, STATE_VARIABLE_Set_0_7, &NewSet_6);
    if (succeeded)
      STATE_VARIABLE_Set_9_9 = NewSet_6;
    else
      STATE_VARIABLE_Set_9_9 = STATE_VARIABLE_Set_0_7;
    *STATE_VARIABLE_Set_8 = STATE_VARIABLE_Set_9_9;
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__remove_3_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Box X_4,
  MR_Word HeadVar__2_2,
  MR_Word * Set_9)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
    MR_Box V_5;
    MR_Integer N_6;
    MR_Word L_7;
    MR_Word R_8;
    MR_Word Result_10;

    if (succeeded)
    {
      V_5 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      N_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      L_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2)));
      R_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3)));
      mercury__builtin__compare_3_p_0(TypeInfo_for_T_17, &Result_10, X_4, V_5);
      switch (Result_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word NewL_11;
            MR_Integer NewN_12;
            MR_Integer Var_15;

            succeeded = mercury__set_bbbtree__remove_3_p_0(TypeInfo_for_T_17, X_4, L_7, &NewL_11);
            if (succeeded)
            {
              Var_15 = (MR_Integer) 1;
              NewN_12 = (N_6 - Var_15);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *Set_9 = base;
                MR_hl_field(MR_mktag(1), base, 0) = V_5;
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (NewN_12));
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (NewL_11));
                MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (R_8));
              }
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 0:
          {
            MR_Integer LSize_21;

            if ((L_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              LSize_21 = (MR_Integer) 0;
            else
            {
              MR_Box _V_29 = (MR_hl_field(MR_mktag(1), L_7, (MR_Integer) 0));
              MR_Word _L_31;
              MR_Word _R_32;

              LSize_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), L_7, (MR_Integer) 1)));
              _L_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), L_7, (MR_Integer) 2)));
              _R_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), L_7, (MR_Integer) 3)));
            }
            succeeded = (LSize_21 == (MR_Integer) 0);
            if (succeeded)
              *Set_9 = R_8;
            else
            {
              MR_Integer RSize_22;

              if ((R_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                RSize_22 = (MR_Integer) 0;
              else
              {
                MR_Box _V_33 = (MR_hl_field(MR_mktag(1), R_8, (MR_Integer) 0));
                MR_Word _L_35;
                MR_Word _R_36;

                RSize_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), R_8, (MR_Integer) 1)));
                _L_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), R_8, (MR_Integer) 2)));
                _R_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), R_8, (MR_Integer) 3)));
              }
              succeeded = (RSize_22 == (MR_Integer) 0);
              if (succeeded)
                *Set_9 = L_7;
              else
              {
                succeeded = (LSize_21 > RSize_22);
                if (succeeded)
                {
                  MR_Box X_23;
                  MR_Word NewL_24;

                  succeeded = mercury__set_bbbtree__remove_largest_3_p_0(TypeInfo_for_T_17, &X_23, L_7, &NewL_24);
                  if (succeeded)
                    mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(X_23, NewL_24, R_8, Set_9);
                  else
                  {
                    mercury__require__error_1_p_0((MR_String) "set_bbbtree.concat3.1");
                  }
                }
                else
                {
                  MR_Word NewR_25;
                  MR_Box X_28;

                  succeeded = mercury__set_bbbtree__remove_least_3_p_0(TypeInfo_for_T_17, &X_28, R_8, &NewR_25);
                  if (succeeded)
                    mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(X_28, L_7, NewR_25, Set_9);
                  else
                  {
                    mercury__require__error_1_p_0((MR_String) "set_bbbtree.concat3.2");
                  }
                }
              }
            }
            succeeded = MR_TRUE;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word NewR_13;
            MR_Integer Var_14;
            MR_Integer NewN_16;

            succeeded = mercury__set_bbbtree__remove_3_p_0(TypeInfo_for_T_17, X_4, R_8, &NewR_13);
            if (succeeded)
            {
              Var_14 = (MR_Integer) 1;
              NewN_16 = (N_6 - Var_14);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                *Set_9 = base;
                MR_hl_field(MR_mktag(1), base, 0) = V_5;
                MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (NewN_16));
                MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (L_7));
                MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (NewR_13));
              }
              succeeded = MR_TRUE;
            }
          }
          break;
      }
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
mercury__set_bbbtree__insert_list_2_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word STATE_VARIABLE_S_0_6,
  MR_Word Xs_5)
{
  {
    MR_Word STATE_VARIABLE_S_7;

    mercury__set_bbbtree__insert_list_r_4_p_0(TypeInfo_for_T_9, STATE_VARIABLE_S_0_6, Xs_5, &STATE_VARIABLE_S_7, (MR_Integer) 5);
    return STATE_VARIABLE_S_7;
  }
}

void MR_CALL 
mercury__set_bbbtree__insert_list_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word List_4,
  MR_Word STATE_VARIABLE_Set_0_7,
  MR_Word * STATE_VARIABLE_Set_8)
{
  {
    mercury__set_bbbtree__insert_list_r_4_p_0(TypeInfo_for_T_10, STATE_VARIABLE_Set_0_7, List_4, STATE_VARIABLE_Set_8, (MR_Integer) 5);
  }
}

void MR_CALL 
mercury__set_bbbtree__insert_list_r_4_p_0(
  MR_Word TypeInfo_for_T_15,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Integer HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__3_3 = HeadVar__1_1;
    else
    {
      MR_Box X_8 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      MR_Word Xs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word STATE_VARIABLE_Set_13_13;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

      mercury__set_bbbtree__insert_r_4_p_0(TypeInfo_for_T_15, HeadVar__1_1, X_8, &STATE_VARIABLE_Set_13_13, HeadVar__4_4);
      // direct tailcall eliminated
      next_value_of_HeadVar__1_1 = STATE_VARIABLE_Set_13_13;
      next_value_of_HeadVar__2_2 = Xs_9;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__insert_new_3_p_0(
  MR_Word TypeInfo_for_T_10,
  MR_Box X_4,
  MR_Word STATE_VARIABLE_Set_0_7,
  MR_Word * STATE_VARIABLE_Set_8)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set_bbbtree__insert_new_r_4_p_0(TypeInfo_for_T_10, STATE_VARIABLE_Set_0_7, X_4, STATE_VARIABLE_Set_8, (MR_Integer) 5);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__insert_new_r_4_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word HeadVar__1_1,
  MR_Box X_2,
  MR_Word * HeadVar__3_3,
  MR_Integer HeadVar__4_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      MR_Word Var_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      MR_Word Var_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(MR_mktag(1), base, 0) = X_2;
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Var_8));
        MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Var_9));
      }
      succeeded = MR_TRUE;
    }
    else
    {
      MR_Box V_10 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      MR_Word L_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word R_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word Result_17;
      MR_Integer _N_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));

      mercury__builtin__compare_3_p_0(TypeInfo_for_T_20, &Result_17, X_2, V_10);
      switch (Result_17) {
        default:
          succeeded = MR_FALSE;
          break;
        case (MR_Integer) 1:
          {
            MR_Word NewL_18;

            succeeded = mercury__set_bbbtree__insert_new_r_4_p_0(TypeInfo_for_T_20, L_12, X_2, &NewL_18, HeadVar__4_4);
            if (succeeded)
            {
              mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_p_0(V_10, NewL_18, R_13, HeadVar__3_3, HeadVar__4_4);
              succeeded = MR_TRUE;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word NewR_19;

            succeeded = mercury__set_bbbtree__insert_new_r_4_p_0(TypeInfo_for_T_20, R_13, X_2, &NewR_19, HeadVar__4_4);
            if (succeeded)
            {
              mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_p_0(V_10, L_12, NewR_19, HeadVar__3_3, HeadVar__4_4);
              succeeded = MR_TRUE;
            }
          }
          break;
      }
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
mercury__set_bbbtree__insert_2_f_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word STATE_VARIABLE_S_0_6,
  MR_Box T_5)
{
  {
    MR_Word STATE_VARIABLE_S_7;
    MR_Word STATE_VARIABLE_Set_9_15;

    mercury__set_bbbtree__insert_r_4_p_0(TypeInfo_for_T_9, STATE_VARIABLE_S_0_6, T_5, &STATE_VARIABLE_Set_9_15, (MR_Integer) 5);
    STATE_VARIABLE_S_7 = STATE_VARIABLE_Set_9_15;
    return STATE_VARIABLE_S_7;
  }
}

void MR_CALL 
mercury__set_bbbtree__insert_3_p_1(
  MR_Word TypeInfo_for_T_11,
  MR_Box X_4,
  MR_Word STATE_VARIABLE_Set_0_7,
  MR_Word * STATE_VARIABLE_Set_8)
{
  {
    MR_Word STATE_VARIABLE_Set_9_9;

    mercury__set_bbbtree__insert_r_4_p_0(TypeInfo_for_T_11, STATE_VARIABLE_Set_0_7, X_4, &STATE_VARIABLE_Set_9_9, (MR_Integer) 5);
    *STATE_VARIABLE_Set_8 = STATE_VARIABLE_Set_9_9;
  }
}

void MR_CALL 
mercury__set_bbbtree__insert_3_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Box X_4,
  MR_Word STATE_VARIABLE_Set_0_7,
  MR_Word * STATE_VARIABLE_Set_8)
{
  {
    MR_Word STATE_VARIABLE_Set_9_9;

    mercury__set_bbbtree__insert_r_4_p_0(TypeInfo_for_T_11, STATE_VARIABLE_Set_0_7, X_4, &STATE_VARIABLE_Set_9_9, (MR_Integer) 5);
    *STATE_VARIABLE_Set_8 = STATE_VARIABLE_Set_9_9;
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__equal_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word SetA_3,
  MR_Word SetB_4)
{
  {
    MR_bool succeeded;
    MR_Word Set_8;
    MR_Word Set_15;
    MR_Integer Ratio_19;

    mercury__set_bbbtree__difference_r_4_p_0(TypeInfo_for_T_5, SetA_3, SetB_4, &Set_8, (MR_Integer) 5);
    succeeded = (Set_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (succeeded)
    {
      Ratio_19 = (MR_Integer) 5;
      mercury__set_bbbtree__difference_r_4_p_0(TypeInfo_for_T_5, SetB_4, SetA_3, &Set_15, Ratio_19);
      succeeded = (Set_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__set_bbbtree__difference_r_4_p_0(
  MR_Word TypeInfo_for_T_18,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Integer HeadVar__4_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Box V_7 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      MR_Word LL_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word LR_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word NewRL_14;
      MR_Word NewRR_15;
      MR_Word LSet_16;
      MR_Word RSet_17;
      MR_Integer _N_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));

      mercury__set_bbbtree__split_lt_4_p_0(TypeInfo_for_T_18, HeadVar__2_2, V_7, &NewRL_14, HeadVar__4_4);
      mercury__set_bbbtree__split_gt_4_p_0(TypeInfo_for_T_18, HeadVar__2_2, V_7, &NewRR_15, HeadVar__4_4);
      mercury__set_bbbtree__difference_r_4_p_0(TypeInfo_for_T_18, LL_9, NewRL_14, &LSet_16, HeadVar__4_4);
      mercury__set_bbbtree__difference_r_4_p_0(TypeInfo_for_T_18, LR_10, NewRR_15, &RSet_17, HeadVar__4_4);
      succeeded = mercury__set_bbbtree__member_2_p_0(TypeInfo_for_T_18, V_7, HeadVar__2_2);
      if (succeeded)
      {
        MR_Integer LSize_22;

        if ((LSet_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          LSize_22 = (MR_Integer) 0;
        else
        {
          MR_Box _V_30 = (MR_hl_field(MR_mktag(1), LSet_16, (MR_Integer) 0));
          MR_Word _L_32;
          MR_Word _R_33;

          LSize_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), LSet_16, (MR_Integer) 1)));
          _L_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), LSet_16, (MR_Integer) 2)));
          _R_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), LSet_16, (MR_Integer) 3)));
        }
        succeeded = (LSize_22 == (MR_Integer) 0);
        if (succeeded)
          *HeadVar__3_3 = RSet_17;
        else
        {
          MR_Integer RSize_23;

          if ((RSet_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            RSize_23 = (MR_Integer) 0;
          else
          {
            MR_Box _V_34 = (MR_hl_field(MR_mktag(1), RSet_17, (MR_Integer) 0));
            MR_Word _L_36;
            MR_Word _R_37;

            RSize_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), RSet_17, (MR_Integer) 1)));
            _L_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), RSet_17, (MR_Integer) 2)));
            _R_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), RSet_17, (MR_Integer) 3)));
          }
          succeeded = (RSize_23 == (MR_Integer) 0);
          if (succeeded)
            *HeadVar__3_3 = LSet_16;
          else
          {
            succeeded = (LSize_22 > RSize_23);
            if (succeeded)
            {
              MR_Box X_24;
              MR_Word NewL_25;

              succeeded = mercury__set_bbbtree__remove_largest_3_p_0(TypeInfo_for_T_18, &X_24, LSet_16, &NewL_25);
              if (succeeded)
                mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(X_24, NewL_25, RSet_17, HeadVar__3_3);
              else
              {
                {
                  mercury__require__error_1_p_0((MR_String) "set_bbbtree.concat3.1");
                  return;
                }
              }
            }
            else
            {
              MR_Word NewR_26;
              MR_Box X_29;

              succeeded = mercury__set_bbbtree__remove_least_3_p_0(TypeInfo_for_T_18, &X_29, RSet_17, &NewR_26);
              if (succeeded)
                mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(X_29, LSet_16, NewR_26, HeadVar__3_3);
              else
              {
                {
                  mercury__require__error_1_p_0((MR_String) "set_bbbtree.concat3.2");
                  return;
                }
              }
            }
          }
        }
      }
      else
        mercury__set_bbbtree__concat4_5_p_0(TypeInfo_for_T_18, LSet_16, RSet_17, V_7, HeadVar__3_3, HeadVar__4_4);
    }
  }
}

static void MR_CALL 
mercury__set_bbbtree__split_gt_4_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Integer HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Box V_7 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      MR_Word L_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word R_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word Result_14;
      MR_Integer _N_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));

      mercury__builtin__compare_3_p_0(TypeInfo_for_T_16, &Result_14, HeadVar__2_2, V_7);
      switch (Result_14) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word Set0_15;

            mercury__set_bbbtree__split_gt_4_p_0(TypeInfo_for_T_16, L_9, HeadVar__2_2, &Set0_15, HeadVar__4_4);
            mercury__set_bbbtree__concat4_5_p_0(TypeInfo_for_T_16, Set0_15, R_10, V_7, HeadVar__3_3, HeadVar__4_4);
          }
          break;
        case (MR_Integer) 0:
          *HeadVar__3_3 = R_10;
          break;
        case (MR_Integer) 2:
          {
            MR_Word next_value_of_HeadVar__1_1 = R_10;

            // direct tailcall eliminated
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__set_bbbtree__split_lt_4_p_0(
  MR_Word TypeInfo_for_T_16,
  MR_Word HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Integer HeadVar__4_4)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Box V_7 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      MR_Word L_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word R_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3)));
      MR_Word Result_14;
      MR_Integer _N_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));

      mercury__builtin__compare_3_p_0(TypeInfo_for_T_16, &Result_14, HeadVar__2_2, V_7);
      switch (Result_14) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word next_value_of_HeadVar__1_1 = L_9;

            // direct tailcall eliminated
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
          break;
        case (MR_Integer) 0:
          *HeadVar__3_3 = L_9;
          break;
        case (MR_Integer) 2:
          {
            MR_Word Set0_15;

            mercury__set_bbbtree__split_lt_4_p_0(TypeInfo_for_T_16, R_10, HeadVar__2_2, &Set0_15, HeadVar__4_4);
            mercury__set_bbbtree__concat4_5_p_0(TypeInfo_for_T_16, L_9, Set0_15, V_7, HeadVar__3_3, HeadVar__4_4);
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__set_bbbtree__concat4_5_p_0(
  MR_Word TypeInfo_for_T_31,
  MR_Word HeadVar__1_1,
  MR_Word R_2,
  MR_Box V_3,
  MR_Word * Set_4,
  MR_Integer Ratio_5)
{
  {
    MR_bool succeeded;

    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__set_bbbtree__insert_r_4_p_0(TypeInfo_for_T_31, R_2, V_3, Set_4, Ratio_5);
    else
    {
      MR_Box LV_10 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      MR_Integer LN_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word LL_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word LR_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3)));

      if ((R_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        mercury__set_bbbtree__insert_r_4_p_0(TypeInfo_for_T_31, HeadVar__1_1, V_3, Set_4, Ratio_5);
      else
      {
        MR_Box RV_18 = (MR_hl_field(MR_mktag(1), R_2, (MR_Integer) 0));
        MR_Integer RN_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), R_2, (MR_Integer) 1)));
        MR_Word RL_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), R_2, (MR_Integer) 2)));
        MR_Word RR_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), R_2, (MR_Integer) 3)));
        MR_Integer Val_22 = (Ratio_5 * LN_11);

        succeeded = (Val_22 < RN_19);
        if (succeeded)
        {
          MR_Word NewL_23;

          mercury__set_bbbtree__concat4_5_p_0(TypeInfo_for_T_31, HeadVar__1_1, RL_20, V_3, &NewL_23, Ratio_5);
          mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_p_0(RV_18, NewL_23, RR_21, Set_4, Ratio_5);
        }
        else
        {
          MR_Integer Val_29 = (Ratio_5 * RN_19);

          succeeded = (Val_29 < LN_11);
          if (succeeded)
          {
            MR_Word NewR_24;

            mercury__set_bbbtree__concat4_5_p_0(TypeInfo_for_T_31, LR_13, R_2, V_3, &NewR_24, Ratio_5);
            mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_p_0(LV_10, LL_12, NewR_24, Set_4, Ratio_5);
          }
          else
            mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(V_3, HeadVar__1_1, R_2, Set_4);
        }
      }
    }
  }
}

void MR_CALL 
mercury__set_bbbtree__insert_r_4_p_0(
  MR_Word TypeInfo_for_T_20,
  MR_Word HeadVar__1_1,
  MR_Box X_2,
  MR_Word * HeadVar__3_3,
  MR_Integer HeadVar__4_4)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    MR_Word Var_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word Var_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__3_3 = base;
      MR_hl_field(MR_mktag(1), base, 0) = X_2;
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Var_9));
    }
  }
  else
  {
    MR_Box V_10 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
    MR_Word L_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2)));
    MR_Word R_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3)));
    MR_Word Result_17;
    MR_Integer N_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));

    mercury__builtin__compare_3_p_0(TypeInfo_for_T_20, &Result_17, X_2, V_10);
    switch (Result_17) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        {
          MR_Word NewL_18;

          mercury__set_bbbtree__insert_r_4_p_0(TypeInfo_for_T_20, L_12, X_2, &NewL_18, HeadVar__4_4);
          mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_p_0(V_10, NewL_18, R_13, HeadVar__3_3, HeadVar__4_4);
        }
        break;
      case (MR_Integer) 0:
        *HeadVar__3_3 = HeadVar__1_1;
        break;
      case (MR_Integer) 2:
        {
          MR_Word NewR_19;

          mercury__set_bbbtree__insert_r_4_p_0(TypeInfo_for_T_20, R_13, X_2, &NewR_19, HeadVar__4_4);
          mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_p_0(V_10, L_12, NewR_19, HeadVar__3_3, HeadVar__4_4);
        }
        break;
    }
  }
}

static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_p_0(
  MR_Box V_6,
  MR_Word L_7,
  MR_Word R_8,
  MR_Word * Set_9,
  MR_Integer Ratio_10)
{
  {
    MR_bool succeeded;
    MR_Integer LSize_11;
    MR_Integer RSize_12;
    MR_Integer Val_13;

    if ((L_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      LSize_11 = (MR_Integer) 0;
    else
    {
      MR_Box _V_34 = (MR_hl_field(MR_mktag(1), L_7, (MR_Integer) 0));
      MR_Word _L_36;
      MR_Word _R_37;

      LSize_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), L_7, (MR_Integer) 1)));
      _L_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), L_7, (MR_Integer) 2)));
      _R_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), L_7, (MR_Integer) 3)));
    }
    if ((R_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      RSize_12 = (MR_Integer) 0;
    else
    {
      MR_Box _V_38 = (MR_hl_field(MR_mktag(1), R_8, (MR_Integer) 0));
      MR_Word _L_40;
      MR_Word _R_41;

      RSize_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), R_8, (MR_Integer) 1)));
      _L_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), R_8, (MR_Integer) 2)));
      _R_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), R_8, (MR_Integer) 3)));
    }
    Val_13 = (LSize_11 + RSize_12);
    succeeded = (Val_13 < (MR_Integer) 2);
    if (succeeded)
      mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(V_6, L_7, R_8, Set_9);
    else
    {
      MR_Integer Val_29 = (Ratio_10 * LSize_11);

      succeeded = (RSize_12 > Val_29);
      if (succeeded)
        if ((R_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          {
            mercury__require__error_1_p_0((MR_String) "set_bbbtree.balance.1");
            return;
          }
        }
        else
        {
          MR_Word RL_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), R_8, (MR_Integer) 2)));
          MR_Word RR_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), R_8, (MR_Integer) 3)));
          MR_Integer RLSize_18;
          MR_Integer RRSize_19;
          MR_Box _V0_14 = (MR_hl_field(MR_mktag(1), R_8, (MR_Integer) 0));
          MR_Integer _N0_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), R_8, (MR_Integer) 1)));

          if ((RL_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            RLSize_18 = (MR_Integer) 0;
          else
          {
            MR_Box _V_42 = (MR_hl_field(MR_mktag(1), RL_16, (MR_Integer) 0));
            MR_Word _L_44;
            MR_Word _R_45;

            RLSize_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), RL_16, (MR_Integer) 1)));
            _L_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), RL_16, (MR_Integer) 2)));
            _R_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), RL_16, (MR_Integer) 3)));
          }
          if ((RR_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            RRSize_19 = (MR_Integer) 0;
          else
          {
            MR_Box _V_46 = (MR_hl_field(MR_mktag(1), RR_17, (MR_Integer) 0));
            MR_Word _L_48;
            MR_Word _R_49;

            RRSize_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), RR_17, (MR_Integer) 1)));
            _L_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), RR_17, (MR_Integer) 2)));
            _R_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), RR_17, (MR_Integer) 3)));
          }
          succeeded = (RLSize_18 < RRSize_19);
          if (succeeded)
          {
            MR_Box B_56 = (MR_hl_field(MR_mktag(1), R_8, (MR_Integer) 0));
            MR_Word Y_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), R_8, (MR_Integer) 2)));
            MR_Word Z_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), R_8, (MR_Integer) 3)));
            MR_Word A_X_and_Y_61;
            MR_Integer _N_57 = ((MR_Integer) (MR_hl_field(MR_mktag(1), R_8, (MR_Integer) 1)));

            mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(V_6, L_7, Y_58, &A_X_and_Y_61);
            mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(B_56, A_X_and_Y_61, Z_59, Set_9);
          }
          else
          {
            MR_Box C_68 = (MR_hl_field(MR_mktag(1), R_8, (MR_Integer) 0));
            MR_Word Y_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), R_8, (MR_Integer) 2)));
            MR_Word Z_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), R_8, (MR_Integer) 3)));
            MR_Integer _N0_69 = ((MR_Integer) (MR_hl_field(MR_mktag(1), R_8, (MR_Integer) 1)));

            if ((Y_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                mercury__require__error_1_p_0((MR_String) "set_bbbtree.double_rot_l.2");
                return;
              }
            }
            else
            {
              MR_Box B_73 = (MR_hl_field(MR_mktag(1), Y_70, (MR_Integer) 0));
              MR_Word Y1_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), Y_70, (MR_Integer) 2)));
              MR_Word Y2_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), Y_70, (MR_Integer) 3)));
              MR_Word A_X_and_Y1_77;
              MR_Word C_Y2_and_Z_78;
              MR_Integer _N1_74 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Y_70, (MR_Integer) 1)));

              mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(V_6, L_7, Y1_75, &A_X_and_Y1_77);
              mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(C_68, Y2_76, Z_71, &C_Y2_and_Z_78);
              mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(B_73, A_X_and_Y1_77, C_Y2_and_Z_78, Set_9);
            }
          }
        }
      else
      {
        MR_Integer Val_30 = (Ratio_10 * RSize_12);

        succeeded = (LSize_11 > Val_30);
        if (succeeded)
          if ((L_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__error_1_p_0((MR_String) "set_bbbtree.balance.2");
              return;
            }
          }
          else
          {
            MR_Word LL_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), L_7, (MR_Integer) 2)));
            MR_Word LR_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), L_7, (MR_Integer) 3)));
            MR_Integer LLSize_24;
            MR_Integer LRSize_25;
            MR_Box _V1_20 = (MR_hl_field(MR_mktag(1), L_7, (MR_Integer) 0));
            MR_Integer _N1_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), L_7, (MR_Integer) 1)));

            if ((LL_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              LLSize_24 = (MR_Integer) 0;
            else
            {
              MR_Box _V_80 = (MR_hl_field(MR_mktag(1), LL_22, (MR_Integer) 0));
              MR_Word _L_82;
              MR_Word _R_83;

              LLSize_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), LL_22, (MR_Integer) 1)));
              _L_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), LL_22, (MR_Integer) 2)));
              _R_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), LL_22, (MR_Integer) 3)));
            }
            if ((LR_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              LRSize_25 = (MR_Integer) 0;
            else
            {
              MR_Box _V_84 = (MR_hl_field(MR_mktag(1), LR_23, (MR_Integer) 0));
              MR_Word _L_86;
              MR_Word _R_87;

              LRSize_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), LR_23, (MR_Integer) 1)));
              _L_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), LR_23, (MR_Integer) 2)));
              _R_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), LR_23, (MR_Integer) 3)));
            }
            succeeded = (LRSize_25 < LLSize_24);
            if (succeeded)
              mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_110_103_108_101_95_114_111_116_95_114_95_95_91_49_93_95_48_4_p_0(V_6, L_7, R_8, Set_9);
            else
              mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_117_98_108_101_95_114_111_116_95_114_95_95_91_49_93_95_48_4_p_0(V_6, L_7, R_8, Set_9);
          }
        else
          mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(V_6, L_7, R_8, Set_9);
      }
    }
  }
}

static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_117_98_108_101_95_114_111_116_95_114_95_95_91_49_93_95_48_4_p_0(
  MR_Box HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    {
      mercury__require__error_1_p_0((MR_String) "set_bbbtree.double_rot_r.1");
      return;
    }
  }
  else
  {
    MR_Box A_10 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
    MR_Word X_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2)));
    MR_Word Y_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3)));
    MR_Integer _N0_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));

    if ((Y_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__error_1_p_0((MR_String) "set_bbbtree.double_rot_r.2");
        return;
      }
    }
    else
    {
      MR_Box B_16 = (MR_hl_field(MR_mktag(1), Y_13, (MR_Integer) 0));
      MR_Word Y1_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), Y_13, (MR_Integer) 2)));
      MR_Word Y2_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), Y_13, (MR_Integer) 3)));
      MR_Word A_X_and_Y1_20;
      MR_Word C_Y2_and_Z_21;
      MR_Integer _N1_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Y_13, (MR_Integer) 1)));

      mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(A_10, X_12, Y1_18, &A_X_and_Y1_20);
      mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(HeadVar__1_1, Y2_19, HeadVar__3_3, &C_Y2_and_Z_21);
      mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(B_16, A_X_and_Y1_20, C_Y2_and_Z_21, HeadVar__4_4);
    }
  }
}

static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_110_103_108_101_95_114_111_116_95_114_95_95_91_49_93_95_48_4_p_0(
  MR_Box HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  if ((HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
  {
    {
      mercury__require__error_1_p_0((MR_String) "set_bbbtree.single_rot_r");
      return;
    }
  }
  else
  {
    MR_Box A_10 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
    MR_Word X_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2)));
    MR_Word Y_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3)));
    MR_Word B_Y_and_Z_16;
    MR_Integer _N_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));

    mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(HeadVar__1_1, Y_13, HeadVar__3_3, &B_Y_and_Z_16);
    mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(A_10, X_12, B_Y_and_Z_16, HeadVar__4_4);
  }
}

static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(
  MR_Box X_5,
  MR_Word L_6,
  MR_Word R_7,
  MR_Word * Tree_8)
{
  {
    MR_Integer LSize_9;
    MR_Integer RSize_10;
    MR_Integer N_11;
    MR_Word Tree0_12;
    MR_Integer Var_13;

    if ((L_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      LSize_9 = (MR_Integer) 0;
    else
    {
      MR_Box _V_16 = (MR_hl_field(MR_mktag(1), L_6, (MR_Integer) 0));
      MR_Word _L_18;
      MR_Word _R_19;

      LSize_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), L_6, (MR_Integer) 1)));
      _L_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), L_6, (MR_Integer) 2)));
      _R_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), L_6, (MR_Integer) 3)));
    }
    if ((R_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      RSize_10 = (MR_Integer) 0;
    else
    {
      MR_Box _V_20 = (MR_hl_field(MR_mktag(1), R_7, (MR_Integer) 0));
      MR_Word _L_22;
      MR_Word _R_23;

      RSize_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), R_7, (MR_Integer) 1)));
      _L_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), R_7, (MR_Integer) 2)));
      _R_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), R_7, (MR_Integer) 3)));
    }
    Var_13 = ((MR_Integer) 1 + LSize_9);
    N_11 = (Var_13 + RSize_10);
    {
      Tree0_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Tree0_12, 0) = X_5;
      MR_hl_field(MR_mktag(1), Tree0_12, 1) = ((MR_Box) (N_11));
      MR_hl_field(MR_mktag(1), Tree0_12, 2) = ((MR_Box) (L_6));
      MR_hl_field(MR_mktag(1), Tree0_12, 3) = ((MR_Box) (R_7));
    }
    *Tree_8 = Tree0_12;
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__remove_largest_3_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Box * X_4,
  MR_Word HeadVar__2_2,
  MR_Word * Set_9)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
    MR_Box V_5;
    MR_Integer N_6;
    MR_Word L_7;
    MR_Word R_8;

    if (succeeded)
    {
      V_5 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      N_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      L_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2)));
      R_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3)));
      if ((R_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *X_4 = V_5;
        *Set_9 = L_7;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word NewR_14;
        MR_Integer NewN_15;
        MR_Integer Var_16;

        succeeded = mercury__set_bbbtree__remove_largest_3_p_0(TypeInfo_for_T_17, X_4, R_8, &NewR_14);
        if (succeeded)
        {
          Var_16 = (MR_Integer) 1;
          NewN_15 = (N_6 - Var_16);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *Set_9 = base;
            MR_hl_field(MR_mktag(1), base, 0) = V_5;
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (NewN_15));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (L_7));
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (NewR_14));
          }
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__remove_least_3_p_0(
  MR_Word TypeInfo_for_T_17,
  MR_Box * X_4,
  MR_Word HeadVar__2_2,
  MR_Word * Set_9)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
    MR_Box V_5;
    MR_Integer N_6;
    MR_Word L_7;
    MR_Word R_8;

    if (succeeded)
    {
      V_5 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      N_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      L_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2)));
      R_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3)));
      if ((L_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *X_4 = V_5;
        *Set_9 = R_8;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word NewL_14;
        MR_Integer NewN_15;
        MR_Integer Var_16;

        succeeded = mercury__set_bbbtree__remove_least_3_p_0(TypeInfo_for_T_17, X_4, L_7, &NewL_14);
        if (succeeded)
        {
          Var_16 = (MR_Integer) 1;
          NewN_15 = (N_6 - Var_16);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
            *Set_9 = base;
            MR_hl_field(MR_mktag(1), base, 0) = V_5;
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (NewN_15));
            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (NewL_14));
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (R_8));
          }
          succeeded = MR_TRUE;
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__is_singleton_2_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1,
  MR_Box * V_3)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Integer Var_4;
    MR_Word Var_5;
    MR_Word Var_6;

    if (succeeded)
    {
      *V_3 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2)));
      Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3)));
      succeeded = (Var_4 == (MR_Integer) 1);
      if (succeeded)
      {
        succeeded = (Var_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (succeeded)
          succeeded = (Var_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
mercury__set_bbbtree__make_singleton_set_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Box T_3)
{
  {
    MR_Word S_4;
    MR_Word Var_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word Var_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      S_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), S_4, 0) = T_3;
      MR_hl_field(MR_mktag(1), S_4, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(1), S_4, 2) = ((MR_Box) (Var_8));
      MR_hl_field(MR_mktag(1), S_4, 3) = ((MR_Box) (Var_9));
    }
    return S_4;
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__singleton_set_2_p_2(
  MR_Word TypeInfo_for_T_7,
  MR_Box * V_3,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
    MR_Integer Var_4;
    MR_Word Var_5;
    MR_Word Var_6;

    if (succeeded)
    {
      *V_3 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2)));
      Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3)));
      succeeded = (Var_4 == (MR_Integer) 1);
      if (succeeded)
      {
        succeeded = (Var_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (succeeded)
          succeeded = (Var_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__singleton_set_2_p_1(
  MR_Word TypeInfo_for_T_7,
  MR_Box V_3,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
    MR_Integer Var_4;
    MR_Word Var_5;
    MR_Word Var_6;
    MR_Box Var_8;

    if (succeeded)
    {
      Var_8 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2)));
      Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3)));
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_7, V_3, Var_8);
      if (succeeded)
      {
        succeeded = (Var_4 == (MR_Integer) 1);
        if (succeeded)
        {
          succeeded = (Var_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (succeeded)
            succeeded = (Var_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__set_bbbtree__singleton_set_2_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Box V_3,
  MR_Word * HeadVar__2_2)
{
  {
    MR_Word Var_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word Var_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      *HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = V_3;
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (Var_5));
      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (Var_6));
    }
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__largest_2_p_1(
  MR_Word TypeInfo_for_T_12,
  MR_Word HeadVar__1_1,
  MR_Box X_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Box V_3;
    MR_Word R_6;
    MR_Integer _N_4;
    MR_Word _L_5;

    // setup for model_semi tailcalls optimized into a loop
    if (succeeded)
    {
      V_3 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      _N_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      _L_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2)));
      R_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3)));
      if ((R_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_12, X_7, V_3);
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = R_6;

        // direct tailcall eliminated
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__largest_2_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word HeadVar__1_1,
  MR_Box * X_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Box V_3;
    MR_Word R_6;
    MR_Integer _N_4;
    MR_Word _L_5;

    // setup for model_semi tailcalls optimized into a loop
    if (succeeded)
    {
      V_3 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      _N_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      _L_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2)));
      R_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3)));
      if ((R_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *X_7 = V_3;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = R_6;

        // direct tailcall eliminated
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__least_2_p_1(
  MR_Word TypeInfo_for_T_12,
  MR_Word HeadVar__1_1,
  MR_Box X_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Box V_3;
    MR_Word L_5;
    MR_Integer _N_4;
    MR_Word _R_6;

    // setup for model_semi tailcalls optimized into a loop
    if (succeeded)
    {
      V_3 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      _N_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      L_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2)));
      _R_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3)));
      if ((L_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_12, X_7, V_3);
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = L_5;

        // direct tailcall eliminated
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__least_2_p_0(
  MR_Word TypeInfo_for_T_12,
  MR_Word HeadVar__1_1,
  MR_Box * X_7)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Box V_3;
    MR_Word L_5;
    MR_Integer _N_4;
    MR_Word _R_6;

    // setup for model_semi tailcalls optimized into a loop
    if (succeeded)
    {
      V_3 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      _N_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      L_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2)));
      _R_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3)));
      if ((L_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *X_7 = V_3;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word next_value_of_HeadVar__1_1 = L_5;

        // direct tailcall eliminated
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
    }
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__contains_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Set_3,
  MR_Box X_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set_bbbtree__member_2_p_0(TypeInfo_for_T_5, X_4, Set_3);
    return succeeded;
  }
}

void MR_CALL 
mercury__set_bbbtree__is_member_3_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Box X_4,
  MR_Word Set_5,
  MR_Word * Result_6)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set_bbbtree__member_2_p_0(TypeInfo_for_T_7, X_4, Set_5);
    if (succeeded)
      *Result_6 = (MR_Integer) 1;
    else
      *Result_6 = (MR_Integer) 0;
  }
}

static void MR_CALL 
mercury__set_bbbtree__member_2_p_1_1(
  void * env_ptr_arg)
{
  {
    struct mercury__set_bbbtree__member_2_p_1_env_0_s * env_ptr = (struct mercury__set_bbbtree__member_2_p_1_env_0_s *) env_ptr_arg;

    mercury__builtin__compare_3_p_0((env_ptr)->mercury__set_bbbtree__member_2_p_1_env_0__TypeInfo_for_T_9, &(env_ptr)->mercury__set_bbbtree__member_2_p_1_env_0__Var_10, *((env_ptr)->mercury__set_bbbtree__member_2_p_1_env_0__X_3), (env_ptr)->mercury__set_bbbtree__member_2_p_1_env_0__V_4);
    (env_ptr)->mercury__set_bbbtree__member_2_p_1_env_0__succeeded = ((env_ptr)->mercury__set_bbbtree__member_2_p_1_env_0__Result_8 == (env_ptr)->mercury__set_bbbtree__member_2_p_1_env_0__Var_10);
    if ((env_ptr)->mercury__set_bbbtree__member_2_p_1_env_0__succeeded)
      ((env_ptr)->mercury__set_bbbtree__member_2_p_1_env_0__cont)((env_ptr)->mercury__set_bbbtree__member_2_p_1_env_0__cont_env_ptr);
  }
}

void MR_CALL 
mercury__set_bbbtree__member_2_p_1(
  MR_Word TypeInfo_for_T_9,
  MR_Box * X_3,
  MR_Word HeadVar__2_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mercury__set_bbbtree__member_2_p_1_env_0_s env;

    (env).mercury__set_bbbtree__member_2_p_1_env_0__TypeInfo_for_T_9 = TypeInfo_for_T_9;
    (env).mercury__set_bbbtree__member_2_p_1_env_0__X_3 = X_3;
    (env).mercury__set_bbbtree__member_2_p_1_env_0__cont = cont;
    (env).mercury__set_bbbtree__member_2_p_1_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Word L_6;
      MR_Word R_7;
      MR_Integer _N_5;

      (env).mercury__set_bbbtree__member_2_p_1_env_0__succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if ((env).mercury__set_bbbtree__member_2_p_1_env_0__succeeded)
      {
        (env).mercury__set_bbbtree__member_2_p_1_env_0__V_4 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
        _N_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
        L_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2)));
        R_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3)));
        (env).mercury__set_bbbtree__member_2_p_1_env_0__Result_8 = (MR_Integer) 1;
        mercury__set_bbbtree__member_2_p_1((env).mercury__set_bbbtree__member_2_p_1_env_0__TypeInfo_for_T_9, (env).mercury__set_bbbtree__member_2_p_1_env_0__X_3, L_6, mercury__set_bbbtree__member_2_p_1_1, &env);
        (env).mercury__set_bbbtree__member_2_p_1_env_0__Result_8 = (MR_Integer) 2;
        mercury__set_bbbtree__member_2_p_1((env).mercury__set_bbbtree__member_2_p_1_env_0__TypeInfo_for_T_9, (env).mercury__set_bbbtree__member_2_p_1_env_0__X_3, R_7, mercury__set_bbbtree__member_2_p_1_1, &env);
        (env).mercury__set_bbbtree__member_2_p_1_env_0__Result_8 = (MR_Integer) 0;
        *((env).mercury__set_bbbtree__member_2_p_1_env_0__X_3) = (env).mercury__set_bbbtree__member_2_p_1_env_0__V_4;
        mercury__set_bbbtree__member_2_p_1_1(&env);
      }
    }
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__member_2_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Box X_3,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
    MR_Box V_4;
    MR_Word L_6;
    MR_Word R_7;
    MR_Word Result_8;
    MR_Integer _N_5;

    // setup for model_semi tailcalls optimized into a loop
    if (succeeded)
    {
      V_4 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
      _N_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      L_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2)));
      R_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3)));
      mercury__builtin__compare_3_p_0(TypeInfo_for_T_9, &Result_8, X_3, V_4);
      switch (Result_8) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 1:
          {
            MR_Word next_value_of_HeadVar__2_2 = L_6;

            // direct tailcall eliminated
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            continue;
          }
          break;
        case (MR_Integer) 0:
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_9, X_3, V_4);
          break;
        case (MR_Integer) 2:
          {
            MR_Word next_value_of_HeadVar__2_2 = R_7;

            // direct tailcall eliminated
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
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
mercury__set_bbbtree__count_2_p_0(
  MR_Word TypeInfo_for_T_7,
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
  if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    *HeadVar__2_2 = (MR_Integer) 0;
  else
  {
    MR_Box _V_3 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
    MR_Word _L_5;
    MR_Word _R_6;

    *HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
    _L_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2)));
    _R_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3)));
  }
}

MR_Integer MR_CALL 
mercury__set_bbbtree__count_1_f_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word Set_3)
{
  {
    MR_Integer Count_4;

    if ((Set_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      Count_4 = (MR_Integer) 0;
    else
    {
      MR_Box _V_6 = (MR_hl_field(MR_mktag(1), Set_3, (MR_Integer) 0));
      MR_Word _L_8;
      MR_Word _R_9;

      Count_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), Set_3, (MR_Integer) 1)));
      _L_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), Set_3, (MR_Integer) 2)));
      _R_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), Set_3, (MR_Integer) 3)));
    }
    return Count_4;
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__is_non_empty_1_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Box Var_2;
    MR_Integer Var_3;
    MR_Word Var_4;
    MR_Word Var_5;

    if (succeeded)
    {
      Var_2 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      Var_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2)));
      Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3)));
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__non_empty_1_p_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Box Var_2;
    MR_Integer Var_3;
    MR_Word Var_4;
    MR_Word Var_5;

    if (succeeded)
    {
      Var_2 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      Var_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2)));
      Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3)));
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__is_empty_1_p_0(
  MR_Word TypeInfo_for_T_2,
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded = (HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__empty_1_p_0(
  MR_Word TypeInfo_for_T_2,
  MR_Word HeadVar__1_1)
{
  {
    MR_bool succeeded = (HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    return succeeded;
  }
}

void MR_CALL 
mercury__set_bbbtree__init_1_p_0(
  MR_Word TypeInfo_for_T_2,
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
}

MR_Word MR_CALL 
mercury__set_bbbtree__init_0_f_0(
  MR_Word TypeInfo_for_T_3)
{
  {
    MR_Word S_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    return S_2;
  }
}

static MR_bool MR_CALL 
mercury__set_bbbtree____Unify____set_bbbtree_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__set_bbbtree____Unify____set_bbbtree_1_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    return succeeded;
  }
}

static void MR_CALL 
mercury__set_bbbtree____Compare____set_bbbtree_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__set_bbbtree____Compare____set_bbbtree_1_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__set_bbbtree__init(void)
{
}

void mercury__set_bbbtree__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__set_bbbtree__set_bbbtree__type_ctor_info_set_bbbtree_1);
}

void mercury__set_bbbtree__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__set_bbbtree__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module set_bbbtree.
