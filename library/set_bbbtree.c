/*
** Automatically generated from `set_bbbtree.m'
** by the Mercury compiler,
** version rotd-2017-07-26
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


/* :- module set_bbbtree. */
/* :- implementation. */

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
  MR_Word mercury__set_bbbtree__Var_16,
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
  MR_Word * mercury__set_bbbtree__HeadVar__3_3);

static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
  MR_Word mercury__set_bbbtree__Var_18,
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
  MR_Box mercury__set_bbbtree__HeadVar__3_3,
  MR_Box * mercury__set_bbbtree__HeadVar__4_4);

static void MR_CALL 
mercury__set_bbbtree__power_intersect_r2_4_p_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_29,
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
  MR_Word * mercury__set_bbbtree__HeadVar__3_3,
  MR_Integer mercury__set_bbbtree__HeadVar__4_4);

static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__list_0(
  MR_Word mercury__set_bbbtree__Var_27,
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
  MR_Word mercury__set_bbbtree__HeadVar__3_3,
  MR_Word * mercury__set_bbbtree__HeadVar__4_4);

static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_p_0(
  MR_Word mercury__set_bbbtree__List_5,
  MR_Word * mercury__set_bbbtree__RestOfList_6,
  MR_Integer mercury__set_bbbtree__N_7,
  MR_Word * mercury__set_bbbtree__Set_8);

static void MR_CALL 
mercury__set_bbbtree__split_gt_4_p_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_16,
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
  MR_Box mercury__set_bbbtree__HeadVar__2_2,
  MR_Word * mercury__set_bbbtree__HeadVar__3_3,
  MR_Integer mercury__set_bbbtree__HeadVar__4_4);

static void MR_CALL 
mercury__set_bbbtree__split_lt_4_p_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_16,
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
  MR_Box mercury__set_bbbtree__HeadVar__2_2,
  MR_Word * mercury__set_bbbtree__HeadVar__3_3,
  MR_Integer mercury__set_bbbtree__HeadVar__4_4);

static void MR_CALL 
mercury__set_bbbtree__concat4_5_p_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_31,
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
  MR_Word mercury__set_bbbtree__R_2,
  MR_Box mercury__set_bbbtree__V_3,
  MR_Word * mercury__set_bbbtree__Set_4,
  MR_Integer mercury__set_bbbtree__Ratio_5);

static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_p_0(
  MR_Box mercury__set_bbbtree__V_6,
  MR_Word mercury__set_bbbtree__L_7,
  MR_Word mercury__set_bbbtree__R_8,
  MR_Word * mercury__set_bbbtree__Set_9,
  MR_Integer mercury__set_bbbtree__Ratio_10);

static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_117_98_108_101_95_114_111_116_95_114_95_95_91_49_93_95_48_4_p_0(
  MR_Box mercury__set_bbbtree__HeadVar__1_1,
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
  MR_Word mercury__set_bbbtree__HeadVar__3_3,
  MR_Word * mercury__set_bbbtree__HeadVar__4_4);

static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_110_103_108_101_95_114_111_116_95_114_95_95_91_49_93_95_48_4_p_0(
  MR_Box mercury__set_bbbtree__HeadVar__1_1,
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
  MR_Word mercury__set_bbbtree__HeadVar__3_3,
  MR_Word * mercury__set_bbbtree__HeadVar__4_4);

static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(
  MR_Box mercury__set_bbbtree__X_5,
  MR_Word mercury__set_bbbtree__L_6,
  MR_Word mercury__set_bbbtree__R_7,
  MR_Word * mercury__set_bbbtree__Tree_8);

static void MR_CALL 
mercury__set_bbbtree__member_2_p_1_1(
  void * mercury__set_bbbtree__env_ptr_arg);

static MR_bool MR_CALL 
mercury__set_bbbtree____Unify____set_bbbtree_1_0_10001(
  MR_Box mercury__set_bbbtree__wrapper_arg_1,
  MR_Box mercury__set_bbbtree__wrapper_arg_2,
  MR_Box mercury__set_bbbtree__wrapper_arg_3);

static void MR_CALL 
mercury__set_bbbtree____Compare____set_bbbtree_1_0_10001(
  MR_Box mercury__set_bbbtree__wrapper_arg_1,
  MR_Box * mercury__set_bbbtree__wrapper_arg_2,
  MR_Box mercury__set_bbbtree__wrapper_arg_3,
  MR_Box mercury__set_bbbtree__wrapper_arg_4);


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
    MR_bool mercury__set_bbbtree__succeeded;

    return (MR_Integer) 1200;
  }
}

void MR_CALL 
mercury__set_bbbtree____Compare____set_bbbtree_1_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_25,
  MR_Word * mercury__set_bbbtree__HeadVar__1_1,
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
  MR_Word mercury__set_bbbtree__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__set_bbbtree__succeeded;
        MR_Integer mercury__set_bbbtree__CastX_23 = (MR_Integer) mercury__set_bbbtree__HeadVar__2_2;
        MR_Integer mercury__set_bbbtree__CastY_24 = (MR_Integer) mercury__set_bbbtree__HeadVar__3_3;

        mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__CastX_23 == mercury__set_bbbtree__CastY_24);
        if (mercury__set_bbbtree__succeeded)
          *mercury__set_bbbtree__HeadVar__1_1 = (MR_Integer) 0;
        else
        if ((mercury__set_bbbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((mercury__set_bbbtree__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *mercury__set_bbbtree__HeadVar__1_1 = (MR_Integer) 0;
          else
            *mercury__set_bbbtree__HeadVar__1_1 = (MR_Integer) 1;
        else
          {
            MR_Word mercury__set_bbbtree__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 3)));
            MR_Word mercury__set_bbbtree__Var_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 2)));
            MR_Integer mercury__set_bbbtree__Var_33 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 1)));
            MR_Box mercury__set_bbbtree__Var_34 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 0));

            if ((mercury__set_bbbtree__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *mercury__set_bbbtree__HeadVar__1_1 = (MR_Integer) 2;
            else
              {
                MR_Box mercury__set_bbbtree__ArgY1_13 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__3_3, (MR_Integer) 0));
                MR_Integer mercury__set_bbbtree__ArgY2_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__3_3, (MR_Integer) 1)));
                MR_Word mercury__set_bbbtree__ArgY3_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__3_3, (MR_Integer) 2)));
                MR_Word mercury__set_bbbtree__ArgY4_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__3_3, (MR_Integer) 3)));
                MR_Word mercury__set_bbbtree__Var_20;

                {
                  mercury__builtin__compare_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_25, &mercury__set_bbbtree__Var_20, mercury__set_bbbtree__Var_34, mercury__set_bbbtree__ArgY1_13);
                }
                mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__Var_20 == (MR_Integer) 0);
                mercury__set_bbbtree__succeeded = !(mercury__set_bbbtree__succeeded);
                if (mercury__set_bbbtree__succeeded)
                  *mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__Var_20;
                else
                  {
                    MR_Word mercury__set_bbbtree__Var_21;

                    mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__Var_33 < mercury__set_bbbtree__ArgY2_15);
                    if (mercury__set_bbbtree__succeeded)
                      mercury__set_bbbtree__Var_21 = (MR_Integer) 1;
                    else
                      {
                        mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__Var_33 == mercury__set_bbbtree__ArgY2_15);
                        if (mercury__set_bbbtree__succeeded)
                          mercury__set_bbbtree__Var_21 = (MR_Integer) 0;
                        else
                          mercury__set_bbbtree__Var_21 = (MR_Integer) 2;
                      }
                    mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__Var_21 == (MR_Integer) 0);
                    mercury__set_bbbtree__succeeded = !(mercury__set_bbbtree__succeeded);
                    if (mercury__set_bbbtree__succeeded)
                      *mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__Var_21;
                    else
                      {
                        MR_Word mercury__set_bbbtree__Var_22;

                        {
                          mercury__set_bbbtree____Compare____set_bbbtree_1_0(mercury__set_bbbtree__TypeInfo_for_T_25, &mercury__set_bbbtree__Var_22, mercury__set_bbbtree__Var_32, mercury__set_bbbtree__ArgY3_17);
                        }
                        mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__Var_22 == (MR_Integer) 0);
                        mercury__set_bbbtree__succeeded = !(mercury__set_bbbtree__succeeded);
                        if (mercury__set_bbbtree__succeeded)
                          *mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__Var_22;
                        else
                          {
                            /* direct tailcall eliminated */
                            {
                              MR_Word mercury__set_bbbtree__next_value_of_HeadVar__2_2 = mercury__set_bbbtree__Var_31;
                              MR_Word mercury__set_bbbtree__next_value_of_HeadVar__3_3 = mercury__set_bbbtree__ArgY4_19;

                              mercury__set_bbbtree__HeadVar__3_3 = mercury__set_bbbtree__next_value_of_HeadVar__3_3;
                              mercury__set_bbbtree__HeadVar__2_2 = mercury__set_bbbtree__next_value_of_HeadVar__2_2;
                            }
                            continue;
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
mercury__set_bbbtree____Unify____set_bbbtree_1_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_15,
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
  MR_Word mercury__set_bbbtree__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__set_bbbtree__succeeded;
        MR_Integer mercury__set_bbbtree__CastX_13 = (MR_Integer) mercury__set_bbbtree__HeadVar__1_1;
        MR_Integer mercury__set_bbbtree__CastY_14 = (MR_Integer) mercury__set_bbbtree__HeadVar__2_2;

        mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__CastX_13 == mercury__set_bbbtree__CastY_14);
        if (mercury__set_bbbtree__succeeded)
          mercury__set_bbbtree__succeeded = MR_TRUE;
        else
        if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Integer mercury__set_bbbtree__CastX_3 = (MR_Integer) mercury__set_bbbtree__HeadVar__1_1;
            MR_Integer mercury__set_bbbtree__CastY_4 = (MR_Integer) mercury__set_bbbtree__HeadVar__2_2;

            mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__CastY_4 == mercury__set_bbbtree__CastX_3);
          }
        else
          {
            MR_Box mercury__set_bbbtree__ArgX1_5 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
            MR_Box mercury__set_bbbtree__ArgY1_6;
            MR_Integer mercury__set_bbbtree__ArgX2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));
            MR_Integer mercury__set_bbbtree__ArgY2_8;
            MR_Word mercury__set_bbbtree__ArgX3_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
            MR_Word mercury__set_bbbtree__ArgY3_10;
            MR_Word mercury__set_bbbtree__ArgX4_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
            MR_Word mercury__set_bbbtree__ArgY4_12;

            mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__set_bbbtree__succeeded)
              {
                mercury__set_bbbtree__ArgY1_6 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 0));
                mercury__set_bbbtree__ArgY2_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 1)));
                mercury__set_bbbtree__ArgY3_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 2)));
                mercury__set_bbbtree__ArgY4_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 3)));
                {
                  mercury__set_bbbtree__succeeded = mercury__builtin__unify_2_p_0(mercury__set_bbbtree__TypeInfo_for_T_15, mercury__set_bbbtree__ArgX1_5, mercury__set_bbbtree__ArgY1_6);
                }
                if (mercury__set_bbbtree__succeeded)
                  {
                    mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__ArgX2_7 == mercury__set_bbbtree__ArgY2_8);
                    if (mercury__set_bbbtree__succeeded)
                      {
                        {
                          mercury__set_bbbtree__succeeded = mercury__set_bbbtree____Unify____set_bbbtree_1_0(mercury__set_bbbtree__TypeInfo_for_T_15, mercury__set_bbbtree__ArgX3_9, mercury__set_bbbtree__ArgY3_10);
                        }
                        if (mercury__set_bbbtree__succeeded)
                          {
                            /* direct tailcall eliminated */
                            {
                              MR_Word mercury__set_bbbtree__next_value_of_HeadVar__1_1 = mercury__set_bbbtree__ArgX4_11;
                              MR_Word mercury__set_bbbtree__next_value_of_HeadVar__2_2 = mercury__set_bbbtree__ArgY4_12;

                              mercury__set_bbbtree__HeadVar__2_2 = mercury__set_bbbtree__next_value_of_HeadVar__2_2;
                              mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__next_value_of_HeadVar__1_1;
                            }
                            continue;
                          }
                      }
                  }
              }
          }
        return mercury__set_bbbtree__succeeded;
      }
      break;
    }
}

void MR_CALL 
mercury__set_bbbtree__power_intersect_r_3_p_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_12,
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
  MR_Word * mercury__set_bbbtree__HeadVar__2_2,
  MR_Integer mercury__set_bbbtree__HeadVar__3_3)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;

    if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__set_bbbtree__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word mercury__set_bbbtree__V_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__set_bbbtree__L_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word mercury__set_bbbtree__R_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word mercury__set_bbbtree__Intersection0_11;
        MR_Integer mercury__set_bbbtree___N_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));

        {
          mercury__set_bbbtree__power_intersect_r2_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_12, mercury__set_bbbtree__L_7, mercury__set_bbbtree__V_5, &mercury__set_bbbtree__Intersection0_11, mercury__set_bbbtree__HeadVar__3_3);
        }
        {
          mercury__set_bbbtree__power_intersect_r2_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_12, mercury__set_bbbtree__R_8, mercury__set_bbbtree__Intersection0_11, mercury__set_bbbtree__HeadVar__2_2, mercury__set_bbbtree__HeadVar__3_3);
        }
      }
  }
}

void MR_CALL 
mercury__set_bbbtree__list_to_set_r_3_p_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_8,
  MR_Word mercury__set_bbbtree__List_4,
  MR_Word * mercury__set_bbbtree__Set_5,
  MR_Integer mercury__set_bbbtree__Ratio_6)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__InitSet_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__set_bbbtree__insert_list_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_8, mercury__set_bbbtree__InitSet_7, mercury__set_bbbtree__List_4, mercury__set_bbbtree__Set_5, mercury__set_bbbtree__Ratio_6);
    }
  }
}

void MR_CALL 
mercury__set_bbbtree__def_ratio_1_p_0(
  MR_Integer * mercury__set_bbbtree__HeadVar__1_1)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;

    *mercury__set_bbbtree__HeadVar__1_1 = (MR_Integer) 5;
  }
}

void MR_CALL 
mercury__set_bbbtree__filter_4_p_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_12,
  MR_Word mercury__set_bbbtree__P_5,
  MR_Word mercury__set_bbbtree__Set_6,
  MR_Word * mercury__set_bbbtree__TrueSet_7,
  MR_Word * mercury__set_bbbtree__FalseSet_8)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__List_9;
    MR_Word mercury__set_bbbtree__TrueList_10;
    MR_Word mercury__set_bbbtree__FalseList_11;
    MR_Word mercury__set_bbbtree__Var_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__set_bbbtree__InitSet_22;
    MR_Word mercury__set_bbbtree__InitSet_29;

    {
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T_12, mercury__set_bbbtree__Set_6, mercury__set_bbbtree__Var_15, &mercury__set_bbbtree__List_9);
    }
    {
      mercury__list__filter_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_12, mercury__set_bbbtree__P_5, mercury__set_bbbtree__List_9, &mercury__set_bbbtree__TrueList_10, &mercury__set_bbbtree__FalseList_11);
    }
    mercury__set_bbbtree__InitSet_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__set_bbbtree__insert_list_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_12, mercury__set_bbbtree__InitSet_22, mercury__set_bbbtree__TrueList_10, mercury__set_bbbtree__TrueSet_7, (MR_Integer) 5);
    }
    mercury__set_bbbtree__InitSet_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__set_bbbtree__insert_list_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_12, mercury__set_bbbtree__InitSet_29, mercury__set_bbbtree__FalseList_11, mercury__set_bbbtree__FalseSet_8, (MR_Integer) 5);
    }
  }
}

void MR_CALL 
mercury__set_bbbtree__filter_3_p_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_9,
  MR_Word mercury__set_bbbtree__P_4,
  MR_Word mercury__set_bbbtree__Set_5,
  MR_Word * mercury__set_bbbtree__TrueSet_6)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__List_7;
    MR_Word mercury__set_bbbtree__TrueList_8;
    MR_Word mercury__set_bbbtree__Var_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__set_bbbtree__InitSet_19;

    {
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T_9, mercury__set_bbbtree__Set_5, mercury__set_bbbtree__Var_12, &mercury__set_bbbtree__List_7);
    }
    {
      mercury__list__filter_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_9, mercury__set_bbbtree__P_4, mercury__set_bbbtree__List_7, &mercury__set_bbbtree__TrueList_8);
    }
    mercury__set_bbbtree__InitSet_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__set_bbbtree__insert_list_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_9, mercury__set_bbbtree__InitSet_19, mercury__set_bbbtree__TrueList_8, mercury__set_bbbtree__TrueSet_6, (MR_Integer) 5);
    }
  }
}

MR_Word MR_CALL 
mercury__set_bbbtree__filter_map_2_f_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_9,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_10,
  MR_Word mercury__set_bbbtree__PF_4,
  MR_Word mercury__set_bbbtree__S1_5)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__S2_6;
    MR_Word mercury__set_bbbtree__L1_7;
    MR_Word mercury__set_bbbtree__L2_8;
    MR_Word mercury__set_bbbtree__Var_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__set_bbbtree__InitSet_34;

    {
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_9, mercury__set_bbbtree__S1_5, mercury__set_bbbtree__Var_13, &mercury__set_bbbtree__L1_7);
    }
    {
      mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_50_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(mercury__set_bbbtree__PF_4, mercury__set_bbbtree__L1_7, &mercury__set_bbbtree__L2_8);
    }
    mercury__set_bbbtree__InitSet_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__set_bbbtree__insert_list_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T2_10, mercury__set_bbbtree__InitSet_34, mercury__set_bbbtree__L2_8, &mercury__set_bbbtree__S2_6, (MR_Integer) 5);
    }
    return mercury__set_bbbtree__S2_6;
  }
}

static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_50_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(
  MR_Word mercury__set_bbbtree__Var_16,
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
  MR_Word * mercury__set_bbbtree__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__set_bbbtree__succeeded;

        if ((mercury__set_bbbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__set_bbbtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Box mercury__set_bbbtree__V_6_6 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 0));
            MR_Word mercury__set_bbbtree__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 1)));
            MR_Box mercury__set_bbbtree__V_9_9;
            MR_bool MR_CALL (* mercury__set_bbbtree__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__set_bbbtree__Var_16, (MR_Integer) 1)));

            {
              mercury__set_bbbtree__succeeded = mercury__set_bbbtree__func_0(((MR_Box) mercury__set_bbbtree__Var_16), mercury__set_bbbtree__V_6_6, &mercury__set_bbbtree__V_9_9);
            }
            if (mercury__set_bbbtree__succeeded)
              {
                MR_Word mercury__set_bbbtree__V_10_10;

                {
                  mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_50_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(mercury__set_bbbtree__Var_16, mercury__set_bbbtree__V_7_7, &mercury__set_bbbtree__V_10_10);
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__set_bbbtree__HeadVar__3_3 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__set_bbbtree__V_9_9;
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__set_bbbtree__V_10_10));
                }
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__set_bbbtree__next_value_of_HeadVar__2_2 = mercury__set_bbbtree__V_7_7;

                  mercury__set_bbbtree__HeadVar__2_2 = mercury__set_bbbtree__next_value_of_HeadVar__2_2;
                }
                continue;
              }
          }
      }
      break;
    }
}

MR_Word MR_CALL 
mercury__set_bbbtree__map_2_f_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_9,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_10,
  MR_Word mercury__set_bbbtree__F_4,
  MR_Word mercury__set_bbbtree__S1_5)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__S2_6;
    MR_Word mercury__set_bbbtree__L1_7;
    MR_Word mercury__set_bbbtree__L2_8;
    MR_Word mercury__set_bbbtree__Var_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__set_bbbtree__InitSet_20;

    {
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_9, mercury__set_bbbtree__S1_5, mercury__set_bbbtree__Var_13, &mercury__set_bbbtree__L1_7);
    }
    {
      mercury__set_bbbtree__L2_8 = mercury__list__map_2_f_0(mercury__set_bbbtree__TypeInfo_for_T1_9, mercury__set_bbbtree__TypeInfo_for_T2_10, mercury__set_bbbtree__F_4, mercury__set_bbbtree__L1_7);
    }
    mercury__set_bbbtree__InitSet_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__set_bbbtree__insert_list_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T2_10, mercury__set_bbbtree__InitSet_20, mercury__set_bbbtree__L2_8, &mercury__set_bbbtree__S2_6, (MR_Integer) 5);
    }
    return mercury__set_bbbtree__S2_6;
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__all_true_2_p_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_6,
  MR_Word mercury__set_bbbtree__P_3,
  MR_Word mercury__set_bbbtree__S_4)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__L_5;
    MR_Word mercury__set_bbbtree__Var_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T_6, mercury__set_bbbtree__S_4, mercury__set_bbbtree__Var_9, &mercury__set_bbbtree__L_5);
    }
    {
      mercury__set_bbbtree__succeeded = mercury__list__all_true_2_p_0(mercury__set_bbbtree__TypeInfo_for_T_6, mercury__set_bbbtree__P_3, mercury__set_bbbtree__L_5);
    }
    return mercury__set_bbbtree__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__fold6_14_p_5(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_42,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_43,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_44,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_45,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T5_46,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T6_47,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T7_48,
  MR_Word mercury__set_bbbtree__P_15,
  MR_Word mercury__set_bbbtree__S_16,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_23,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_24,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_25,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_26,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_27,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_28,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_D_0_29,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_D_30,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_E_0_31,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_E_32,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_F_0_33,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_F_34)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__Var_35;
    MR_Word mercury__set_bbbtree__Var_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_42, mercury__set_bbbtree__S_16, mercury__set_bbbtree__Var_53, &mercury__set_bbbtree__Var_35);
    }
    {
      mercury__set_bbbtree__succeeded = mercury__list__foldl6_14_p_7(mercury__set_bbbtree__TypeInfo_for_T1_42, mercury__set_bbbtree__TypeInfo_for_T2_43, mercury__set_bbbtree__TypeInfo_for_T3_44, mercury__set_bbbtree__TypeInfo_for_T4_45, mercury__set_bbbtree__TypeInfo_for_T5_46, mercury__set_bbbtree__TypeInfo_for_T6_47, mercury__set_bbbtree__TypeInfo_for_T7_48, mercury__set_bbbtree__P_15, mercury__set_bbbtree__Var_35, mercury__set_bbbtree__STATE_VARIABLE_A_0_23, mercury__set_bbbtree__STATE_VARIABLE_A_24, mercury__set_bbbtree__STATE_VARIABLE_B_0_25, mercury__set_bbbtree__STATE_VARIABLE_B_26, mercury__set_bbbtree__STATE_VARIABLE_C_0_27, mercury__set_bbbtree__STATE_VARIABLE_C_28, mercury__set_bbbtree__STATE_VARIABLE_D_0_29, mercury__set_bbbtree__STATE_VARIABLE_D_30, mercury__set_bbbtree__STATE_VARIABLE_E_0_31, mercury__set_bbbtree__STATE_VARIABLE_E_32, mercury__set_bbbtree__STATE_VARIABLE_F_0_33, mercury__set_bbbtree__STATE_VARIABLE_F_34);
    }
    return mercury__set_bbbtree__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__fold6_14_p_4(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_42,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_43,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_44,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_45,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T5_46,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T6_47,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T7_48,
  MR_Word mercury__set_bbbtree__P_15,
  MR_Word mercury__set_bbbtree__S_16,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_23,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_24,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_25,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_26,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_27,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_28,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_D_0_29,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_D_30,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_E_0_31,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_E_32,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_F_0_33,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_F_34)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__Var_35;
    MR_Word mercury__set_bbbtree__Var_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_42, mercury__set_bbbtree__S_16, mercury__set_bbbtree__Var_53, &mercury__set_bbbtree__Var_35);
    }
    {
      mercury__set_bbbtree__succeeded = mercury__list__foldl6_14_p_6(mercury__set_bbbtree__TypeInfo_for_T1_42, mercury__set_bbbtree__TypeInfo_for_T2_43, mercury__set_bbbtree__TypeInfo_for_T3_44, mercury__set_bbbtree__TypeInfo_for_T4_45, mercury__set_bbbtree__TypeInfo_for_T5_46, mercury__set_bbbtree__TypeInfo_for_T6_47, mercury__set_bbbtree__TypeInfo_for_T7_48, mercury__set_bbbtree__P_15, mercury__set_bbbtree__Var_35, mercury__set_bbbtree__STATE_VARIABLE_A_0_23, mercury__set_bbbtree__STATE_VARIABLE_A_24, mercury__set_bbbtree__STATE_VARIABLE_B_0_25, mercury__set_bbbtree__STATE_VARIABLE_B_26, mercury__set_bbbtree__STATE_VARIABLE_C_0_27, mercury__set_bbbtree__STATE_VARIABLE_C_28, mercury__set_bbbtree__STATE_VARIABLE_D_0_29, mercury__set_bbbtree__STATE_VARIABLE_D_30, mercury__set_bbbtree__STATE_VARIABLE_E_0_31, mercury__set_bbbtree__STATE_VARIABLE_E_32, mercury__set_bbbtree__STATE_VARIABLE_F_0_33, mercury__set_bbbtree__STATE_VARIABLE_F_34);
    }
    return mercury__set_bbbtree__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__fold6_14_p_3(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_42,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_43,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_44,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_45,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T5_46,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T6_47,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T7_48,
  MR_Word mercury__set_bbbtree__P_15,
  MR_Word mercury__set_bbbtree__S_16,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_23,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_24,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_25,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_26,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_27,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_28,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_D_0_29,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_D_30,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_E_0_31,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_E_32,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_F_0_33,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_F_34)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__Var_35;
    MR_Word mercury__set_bbbtree__Var_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_42, mercury__set_bbbtree__S_16, mercury__set_bbbtree__Var_53, &mercury__set_bbbtree__Var_35);
    }
    {
      mercury__set_bbbtree__succeeded = mercury__list__foldl6_14_p_5(mercury__set_bbbtree__TypeInfo_for_T1_42, mercury__set_bbbtree__TypeInfo_for_T2_43, mercury__set_bbbtree__TypeInfo_for_T3_44, mercury__set_bbbtree__TypeInfo_for_T4_45, mercury__set_bbbtree__TypeInfo_for_T5_46, mercury__set_bbbtree__TypeInfo_for_T6_47, mercury__set_bbbtree__TypeInfo_for_T7_48, mercury__set_bbbtree__P_15, mercury__set_bbbtree__Var_35, mercury__set_bbbtree__STATE_VARIABLE_A_0_23, mercury__set_bbbtree__STATE_VARIABLE_A_24, mercury__set_bbbtree__STATE_VARIABLE_B_0_25, mercury__set_bbbtree__STATE_VARIABLE_B_26, mercury__set_bbbtree__STATE_VARIABLE_C_0_27, mercury__set_bbbtree__STATE_VARIABLE_C_28, mercury__set_bbbtree__STATE_VARIABLE_D_0_29, mercury__set_bbbtree__STATE_VARIABLE_D_30, mercury__set_bbbtree__STATE_VARIABLE_E_0_31, mercury__set_bbbtree__STATE_VARIABLE_E_32, mercury__set_bbbtree__STATE_VARIABLE_F_0_33, mercury__set_bbbtree__STATE_VARIABLE_F_34);
    }
    return mercury__set_bbbtree__succeeded;
  }
}

void MR_CALL 
mercury__set_bbbtree__fold6_14_p_2(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_42,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_43,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_44,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_45,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T5_46,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T6_47,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T7_48,
  MR_Word mercury__set_bbbtree__P_15,
  MR_Word mercury__set_bbbtree__S_16,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_23,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_24,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_25,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_26,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_27,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_28,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_D_0_29,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_D_30,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_E_0_31,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_E_32,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_F_0_33,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_F_34)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__Var_35;
    MR_Word mercury__set_bbbtree__Var_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_42, mercury__set_bbbtree__S_16, mercury__set_bbbtree__Var_53, &mercury__set_bbbtree__Var_35);
    }
    {
      mercury__list__foldl6_14_p_2(mercury__set_bbbtree__TypeInfo_for_T1_42, mercury__set_bbbtree__TypeInfo_for_T2_43, mercury__set_bbbtree__TypeInfo_for_T3_44, mercury__set_bbbtree__TypeInfo_for_T4_45, mercury__set_bbbtree__TypeInfo_for_T5_46, mercury__set_bbbtree__TypeInfo_for_T6_47, mercury__set_bbbtree__TypeInfo_for_T7_48, mercury__set_bbbtree__P_15, mercury__set_bbbtree__Var_35, mercury__set_bbbtree__STATE_VARIABLE_A_0_23, mercury__set_bbbtree__STATE_VARIABLE_A_24, mercury__set_bbbtree__STATE_VARIABLE_B_0_25, mercury__set_bbbtree__STATE_VARIABLE_B_26, mercury__set_bbbtree__STATE_VARIABLE_C_0_27, mercury__set_bbbtree__STATE_VARIABLE_C_28, mercury__set_bbbtree__STATE_VARIABLE_D_0_29, mercury__set_bbbtree__STATE_VARIABLE_D_30, mercury__set_bbbtree__STATE_VARIABLE_E_0_31, mercury__set_bbbtree__STATE_VARIABLE_E_32, mercury__set_bbbtree__STATE_VARIABLE_F_0_33, mercury__set_bbbtree__STATE_VARIABLE_F_34);
    }
  }
}

void MR_CALL 
mercury__set_bbbtree__fold6_14_p_1(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_42,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_43,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_44,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_45,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T5_46,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T6_47,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T7_48,
  MR_Word mercury__set_bbbtree__P_15,
  MR_Word mercury__set_bbbtree__S_16,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_23,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_24,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_25,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_26,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_27,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_28,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_D_0_29,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_D_30,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_E_0_31,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_E_32,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_F_0_33,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_F_34)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__Var_35;
    MR_Word mercury__set_bbbtree__Var_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_42, mercury__set_bbbtree__S_16, mercury__set_bbbtree__Var_53, &mercury__set_bbbtree__Var_35);
    }
    {
      mercury__list__foldl6_14_p_1(mercury__set_bbbtree__TypeInfo_for_T1_42, mercury__set_bbbtree__TypeInfo_for_T2_43, mercury__set_bbbtree__TypeInfo_for_T3_44, mercury__set_bbbtree__TypeInfo_for_T4_45, mercury__set_bbbtree__TypeInfo_for_T5_46, mercury__set_bbbtree__TypeInfo_for_T6_47, mercury__set_bbbtree__TypeInfo_for_T7_48, mercury__set_bbbtree__P_15, mercury__set_bbbtree__Var_35, mercury__set_bbbtree__STATE_VARIABLE_A_0_23, mercury__set_bbbtree__STATE_VARIABLE_A_24, mercury__set_bbbtree__STATE_VARIABLE_B_0_25, mercury__set_bbbtree__STATE_VARIABLE_B_26, mercury__set_bbbtree__STATE_VARIABLE_C_0_27, mercury__set_bbbtree__STATE_VARIABLE_C_28, mercury__set_bbbtree__STATE_VARIABLE_D_0_29, mercury__set_bbbtree__STATE_VARIABLE_D_30, mercury__set_bbbtree__STATE_VARIABLE_E_0_31, mercury__set_bbbtree__STATE_VARIABLE_E_32, mercury__set_bbbtree__STATE_VARIABLE_F_0_33, mercury__set_bbbtree__STATE_VARIABLE_F_34);
    }
  }
}

void MR_CALL 
mercury__set_bbbtree__fold6_14_p_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_42,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_43,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_44,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_45,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T5_46,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T6_47,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T7_48,
  MR_Word mercury__set_bbbtree__P_15,
  MR_Word mercury__set_bbbtree__S_16,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_23,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_24,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_25,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_26,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_27,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_28,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_D_0_29,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_D_30,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_E_0_31,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_E_32,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_F_0_33,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_F_34)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__Var_35;
    MR_Word mercury__set_bbbtree__Var_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_42, mercury__set_bbbtree__S_16, mercury__set_bbbtree__Var_53, &mercury__set_bbbtree__Var_35);
    }
    {
      mercury__list__foldl6_14_p_0(mercury__set_bbbtree__TypeInfo_for_T1_42, mercury__set_bbbtree__TypeInfo_for_T2_43, mercury__set_bbbtree__TypeInfo_for_T3_44, mercury__set_bbbtree__TypeInfo_for_T4_45, mercury__set_bbbtree__TypeInfo_for_T5_46, mercury__set_bbbtree__TypeInfo_for_T6_47, mercury__set_bbbtree__TypeInfo_for_T7_48, mercury__set_bbbtree__P_15, mercury__set_bbbtree__Var_35, mercury__set_bbbtree__STATE_VARIABLE_A_0_23, mercury__set_bbbtree__STATE_VARIABLE_A_24, mercury__set_bbbtree__STATE_VARIABLE_B_0_25, mercury__set_bbbtree__STATE_VARIABLE_B_26, mercury__set_bbbtree__STATE_VARIABLE_C_0_27, mercury__set_bbbtree__STATE_VARIABLE_C_28, mercury__set_bbbtree__STATE_VARIABLE_D_0_29, mercury__set_bbbtree__STATE_VARIABLE_D_30, mercury__set_bbbtree__STATE_VARIABLE_E_0_31, mercury__set_bbbtree__STATE_VARIABLE_E_32, mercury__set_bbbtree__STATE_VARIABLE_F_0_33, mercury__set_bbbtree__STATE_VARIABLE_F_34);
    }
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__fold5_12_p_5(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_36,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_37,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_38,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_39,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T5_40,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T6_41,
  MR_Word mercury__set_bbbtree__P_13,
  MR_Word mercury__set_bbbtree__S_14,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_20,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_21,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_22,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_23,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_24,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_25,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_D_0_26,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_D_27,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_E_0_28,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_E_29)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__Var_30;
    MR_Word mercury__set_bbbtree__Var_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_36, mercury__set_bbbtree__S_14, mercury__set_bbbtree__Var_46, &mercury__set_bbbtree__Var_30);
    }
    {
      mercury__set_bbbtree__succeeded = mercury__list__foldl5_12_p_5(mercury__set_bbbtree__TypeInfo_for_T1_36, mercury__set_bbbtree__TypeInfo_for_T2_37, mercury__set_bbbtree__TypeInfo_for_T3_38, mercury__set_bbbtree__TypeInfo_for_T4_39, mercury__set_bbbtree__TypeInfo_for_T5_40, mercury__set_bbbtree__TypeInfo_for_T6_41, mercury__set_bbbtree__P_13, mercury__set_bbbtree__Var_30, mercury__set_bbbtree__STATE_VARIABLE_A_0_20, mercury__set_bbbtree__STATE_VARIABLE_A_21, mercury__set_bbbtree__STATE_VARIABLE_B_0_22, mercury__set_bbbtree__STATE_VARIABLE_B_23, mercury__set_bbbtree__STATE_VARIABLE_C_0_24, mercury__set_bbbtree__STATE_VARIABLE_C_25, mercury__set_bbbtree__STATE_VARIABLE_D_0_26, mercury__set_bbbtree__STATE_VARIABLE_D_27, mercury__set_bbbtree__STATE_VARIABLE_E_0_28, mercury__set_bbbtree__STATE_VARIABLE_E_29);
    }
    return mercury__set_bbbtree__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__fold5_12_p_4(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_36,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_37,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_38,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_39,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T5_40,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T6_41,
  MR_Word mercury__set_bbbtree__P_13,
  MR_Word mercury__set_bbbtree__S_14,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_20,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_21,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_22,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_23,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_24,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_25,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_D_0_26,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_D_27,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_E_0_28,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_E_29)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__Var_30;
    MR_Word mercury__set_bbbtree__Var_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_36, mercury__set_bbbtree__S_14, mercury__set_bbbtree__Var_46, &mercury__set_bbbtree__Var_30);
    }
    {
      mercury__set_bbbtree__succeeded = mercury__list__foldl5_12_p_4(mercury__set_bbbtree__TypeInfo_for_T1_36, mercury__set_bbbtree__TypeInfo_for_T2_37, mercury__set_bbbtree__TypeInfo_for_T3_38, mercury__set_bbbtree__TypeInfo_for_T4_39, mercury__set_bbbtree__TypeInfo_for_T5_40, mercury__set_bbbtree__TypeInfo_for_T6_41, mercury__set_bbbtree__P_13, mercury__set_bbbtree__Var_30, mercury__set_bbbtree__STATE_VARIABLE_A_0_20, mercury__set_bbbtree__STATE_VARIABLE_A_21, mercury__set_bbbtree__STATE_VARIABLE_B_0_22, mercury__set_bbbtree__STATE_VARIABLE_B_23, mercury__set_bbbtree__STATE_VARIABLE_C_0_24, mercury__set_bbbtree__STATE_VARIABLE_C_25, mercury__set_bbbtree__STATE_VARIABLE_D_0_26, mercury__set_bbbtree__STATE_VARIABLE_D_27, mercury__set_bbbtree__STATE_VARIABLE_E_0_28, mercury__set_bbbtree__STATE_VARIABLE_E_29);
    }
    return mercury__set_bbbtree__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__fold5_12_p_3(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_36,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_37,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_38,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_39,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T5_40,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T6_41,
  MR_Word mercury__set_bbbtree__P_13,
  MR_Word mercury__set_bbbtree__S_14,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_20,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_21,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_22,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_23,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_24,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_25,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_D_0_26,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_D_27,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_E_0_28,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_E_29)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__Var_30;
    MR_Word mercury__set_bbbtree__Var_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_36, mercury__set_bbbtree__S_14, mercury__set_bbbtree__Var_46, &mercury__set_bbbtree__Var_30);
    }
    {
      mercury__set_bbbtree__succeeded = mercury__list__foldl5_12_p_3(mercury__set_bbbtree__TypeInfo_for_T1_36, mercury__set_bbbtree__TypeInfo_for_T2_37, mercury__set_bbbtree__TypeInfo_for_T3_38, mercury__set_bbbtree__TypeInfo_for_T4_39, mercury__set_bbbtree__TypeInfo_for_T5_40, mercury__set_bbbtree__TypeInfo_for_T6_41, mercury__set_bbbtree__P_13, mercury__set_bbbtree__Var_30, mercury__set_bbbtree__STATE_VARIABLE_A_0_20, mercury__set_bbbtree__STATE_VARIABLE_A_21, mercury__set_bbbtree__STATE_VARIABLE_B_0_22, mercury__set_bbbtree__STATE_VARIABLE_B_23, mercury__set_bbbtree__STATE_VARIABLE_C_0_24, mercury__set_bbbtree__STATE_VARIABLE_C_25, mercury__set_bbbtree__STATE_VARIABLE_D_0_26, mercury__set_bbbtree__STATE_VARIABLE_D_27, mercury__set_bbbtree__STATE_VARIABLE_E_0_28, mercury__set_bbbtree__STATE_VARIABLE_E_29);
    }
    return mercury__set_bbbtree__succeeded;
  }
}

void MR_CALL 
mercury__set_bbbtree__fold5_12_p_2(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_36,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_37,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_38,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_39,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T5_40,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T6_41,
  MR_Word mercury__set_bbbtree__P_13,
  MR_Word mercury__set_bbbtree__S_14,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_20,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_21,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_22,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_23,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_24,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_25,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_D_0_26,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_D_27,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_E_0_28,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_E_29)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__Var_30;
    MR_Word mercury__set_bbbtree__Var_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_36, mercury__set_bbbtree__S_14, mercury__set_bbbtree__Var_46, &mercury__set_bbbtree__Var_30);
    }
    {
      mercury__list__foldl5_12_p_2(mercury__set_bbbtree__TypeInfo_for_T1_36, mercury__set_bbbtree__TypeInfo_for_T2_37, mercury__set_bbbtree__TypeInfo_for_T3_38, mercury__set_bbbtree__TypeInfo_for_T4_39, mercury__set_bbbtree__TypeInfo_for_T5_40, mercury__set_bbbtree__TypeInfo_for_T6_41, mercury__set_bbbtree__P_13, mercury__set_bbbtree__Var_30, mercury__set_bbbtree__STATE_VARIABLE_A_0_20, mercury__set_bbbtree__STATE_VARIABLE_A_21, mercury__set_bbbtree__STATE_VARIABLE_B_0_22, mercury__set_bbbtree__STATE_VARIABLE_B_23, mercury__set_bbbtree__STATE_VARIABLE_C_0_24, mercury__set_bbbtree__STATE_VARIABLE_C_25, mercury__set_bbbtree__STATE_VARIABLE_D_0_26, mercury__set_bbbtree__STATE_VARIABLE_D_27, mercury__set_bbbtree__STATE_VARIABLE_E_0_28, mercury__set_bbbtree__STATE_VARIABLE_E_29);
    }
  }
}

void MR_CALL 
mercury__set_bbbtree__fold5_12_p_1(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_36,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_37,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_38,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_39,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T5_40,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T6_41,
  MR_Word mercury__set_bbbtree__P_13,
  MR_Word mercury__set_bbbtree__S_14,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_20,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_21,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_22,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_23,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_24,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_25,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_D_0_26,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_D_27,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_E_0_28,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_E_29)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__Var_30;
    MR_Word mercury__set_bbbtree__Var_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_36, mercury__set_bbbtree__S_14, mercury__set_bbbtree__Var_46, &mercury__set_bbbtree__Var_30);
    }
    {
      mercury__list__foldl5_12_p_1(mercury__set_bbbtree__TypeInfo_for_T1_36, mercury__set_bbbtree__TypeInfo_for_T2_37, mercury__set_bbbtree__TypeInfo_for_T3_38, mercury__set_bbbtree__TypeInfo_for_T4_39, mercury__set_bbbtree__TypeInfo_for_T5_40, mercury__set_bbbtree__TypeInfo_for_T6_41, mercury__set_bbbtree__P_13, mercury__set_bbbtree__Var_30, mercury__set_bbbtree__STATE_VARIABLE_A_0_20, mercury__set_bbbtree__STATE_VARIABLE_A_21, mercury__set_bbbtree__STATE_VARIABLE_B_0_22, mercury__set_bbbtree__STATE_VARIABLE_B_23, mercury__set_bbbtree__STATE_VARIABLE_C_0_24, mercury__set_bbbtree__STATE_VARIABLE_C_25, mercury__set_bbbtree__STATE_VARIABLE_D_0_26, mercury__set_bbbtree__STATE_VARIABLE_D_27, mercury__set_bbbtree__STATE_VARIABLE_E_0_28, mercury__set_bbbtree__STATE_VARIABLE_E_29);
    }
  }
}

void MR_CALL 
mercury__set_bbbtree__fold5_12_p_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_36,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_37,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_38,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_39,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T5_40,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T6_41,
  MR_Word mercury__set_bbbtree__P_13,
  MR_Word mercury__set_bbbtree__S_14,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_20,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_21,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_22,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_23,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_24,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_25,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_D_0_26,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_D_27,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_E_0_28,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_E_29)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__Var_30;
    MR_Word mercury__set_bbbtree__Var_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_36, mercury__set_bbbtree__S_14, mercury__set_bbbtree__Var_46, &mercury__set_bbbtree__Var_30);
    }
    {
      mercury__list__foldl5_12_p_0(mercury__set_bbbtree__TypeInfo_for_T1_36, mercury__set_bbbtree__TypeInfo_for_T2_37, mercury__set_bbbtree__TypeInfo_for_T3_38, mercury__set_bbbtree__TypeInfo_for_T4_39, mercury__set_bbbtree__TypeInfo_for_T5_40, mercury__set_bbbtree__TypeInfo_for_T6_41, mercury__set_bbbtree__P_13, mercury__set_bbbtree__Var_30, mercury__set_bbbtree__STATE_VARIABLE_A_0_20, mercury__set_bbbtree__STATE_VARIABLE_A_21, mercury__set_bbbtree__STATE_VARIABLE_B_0_22, mercury__set_bbbtree__STATE_VARIABLE_B_23, mercury__set_bbbtree__STATE_VARIABLE_C_0_24, mercury__set_bbbtree__STATE_VARIABLE_C_25, mercury__set_bbbtree__STATE_VARIABLE_D_0_26, mercury__set_bbbtree__STATE_VARIABLE_D_27, mercury__set_bbbtree__STATE_VARIABLE_E_0_28, mercury__set_bbbtree__STATE_VARIABLE_E_29);
    }
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__fold4_10_p_5(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_30,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_31,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_32,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_33,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T5_34,
  MR_Word mercury__set_bbbtree__P_11,
  MR_Word mercury__set_bbbtree__S_12,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_17,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_18,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_19,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_20,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_21,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_22,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_D_0_23,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_D_24)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__Var_25;
    MR_Word mercury__set_bbbtree__Var_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_30, mercury__set_bbbtree__S_12, mercury__set_bbbtree__Var_39, &mercury__set_bbbtree__Var_25);
    }
    {
      mercury__set_bbbtree__succeeded = mercury__list__foldl4_10_p_7(mercury__set_bbbtree__TypeInfo_for_T1_30, mercury__set_bbbtree__TypeInfo_for_T2_31, mercury__set_bbbtree__TypeInfo_for_T3_32, mercury__set_bbbtree__TypeInfo_for_T4_33, mercury__set_bbbtree__TypeInfo_for_T5_34, mercury__set_bbbtree__P_11, mercury__set_bbbtree__Var_25, mercury__set_bbbtree__STATE_VARIABLE_A_0_17, mercury__set_bbbtree__STATE_VARIABLE_A_18, mercury__set_bbbtree__STATE_VARIABLE_B_0_19, mercury__set_bbbtree__STATE_VARIABLE_B_20, mercury__set_bbbtree__STATE_VARIABLE_C_0_21, mercury__set_bbbtree__STATE_VARIABLE_C_22, mercury__set_bbbtree__STATE_VARIABLE_D_0_23, mercury__set_bbbtree__STATE_VARIABLE_D_24);
    }
    return mercury__set_bbbtree__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__fold4_10_p_4(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_30,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_31,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_32,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_33,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T5_34,
  MR_Word mercury__set_bbbtree__P_11,
  MR_Word mercury__set_bbbtree__S_12,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_17,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_18,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_19,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_20,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_21,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_22,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_D_0_23,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_D_24)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__Var_25;
    MR_Word mercury__set_bbbtree__Var_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_30, mercury__set_bbbtree__S_12, mercury__set_bbbtree__Var_39, &mercury__set_bbbtree__Var_25);
    }
    {
      mercury__set_bbbtree__succeeded = mercury__list__foldl4_10_p_6(mercury__set_bbbtree__TypeInfo_for_T1_30, mercury__set_bbbtree__TypeInfo_for_T2_31, mercury__set_bbbtree__TypeInfo_for_T3_32, mercury__set_bbbtree__TypeInfo_for_T4_33, mercury__set_bbbtree__TypeInfo_for_T5_34, mercury__set_bbbtree__P_11, mercury__set_bbbtree__Var_25, mercury__set_bbbtree__STATE_VARIABLE_A_0_17, mercury__set_bbbtree__STATE_VARIABLE_A_18, mercury__set_bbbtree__STATE_VARIABLE_B_0_19, mercury__set_bbbtree__STATE_VARIABLE_B_20, mercury__set_bbbtree__STATE_VARIABLE_C_0_21, mercury__set_bbbtree__STATE_VARIABLE_C_22, mercury__set_bbbtree__STATE_VARIABLE_D_0_23, mercury__set_bbbtree__STATE_VARIABLE_D_24);
    }
    return mercury__set_bbbtree__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__fold4_10_p_3(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_30,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_31,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_32,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_33,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T5_34,
  MR_Word mercury__set_bbbtree__P_11,
  MR_Word mercury__set_bbbtree__S_12,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_17,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_18,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_19,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_20,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_21,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_22,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_D_0_23,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_D_24)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__Var_25;
    MR_Word mercury__set_bbbtree__Var_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_30, mercury__set_bbbtree__S_12, mercury__set_bbbtree__Var_39, &mercury__set_bbbtree__Var_25);
    }
    {
      mercury__set_bbbtree__succeeded = mercury__list__foldl4_10_p_5(mercury__set_bbbtree__TypeInfo_for_T1_30, mercury__set_bbbtree__TypeInfo_for_T2_31, mercury__set_bbbtree__TypeInfo_for_T3_32, mercury__set_bbbtree__TypeInfo_for_T4_33, mercury__set_bbbtree__TypeInfo_for_T5_34, mercury__set_bbbtree__P_11, mercury__set_bbbtree__Var_25, mercury__set_bbbtree__STATE_VARIABLE_A_0_17, mercury__set_bbbtree__STATE_VARIABLE_A_18, mercury__set_bbbtree__STATE_VARIABLE_B_0_19, mercury__set_bbbtree__STATE_VARIABLE_B_20, mercury__set_bbbtree__STATE_VARIABLE_C_0_21, mercury__set_bbbtree__STATE_VARIABLE_C_22, mercury__set_bbbtree__STATE_VARIABLE_D_0_23, mercury__set_bbbtree__STATE_VARIABLE_D_24);
    }
    return mercury__set_bbbtree__succeeded;
  }
}

void MR_CALL 
mercury__set_bbbtree__fold4_10_p_2(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_30,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_31,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_32,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_33,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T5_34,
  MR_Word mercury__set_bbbtree__P_11,
  MR_Word mercury__set_bbbtree__S_12,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_17,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_18,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_19,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_20,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_21,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_22,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_D_0_23,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_D_24)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__Var_25;
    MR_Word mercury__set_bbbtree__Var_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_30, mercury__set_bbbtree__S_12, mercury__set_bbbtree__Var_39, &mercury__set_bbbtree__Var_25);
    }
    {
      mercury__list__foldl4_10_p_2(mercury__set_bbbtree__TypeInfo_for_T1_30, mercury__set_bbbtree__TypeInfo_for_T2_31, mercury__set_bbbtree__TypeInfo_for_T3_32, mercury__set_bbbtree__TypeInfo_for_T4_33, mercury__set_bbbtree__TypeInfo_for_T5_34, mercury__set_bbbtree__P_11, mercury__set_bbbtree__Var_25, mercury__set_bbbtree__STATE_VARIABLE_A_0_17, mercury__set_bbbtree__STATE_VARIABLE_A_18, mercury__set_bbbtree__STATE_VARIABLE_B_0_19, mercury__set_bbbtree__STATE_VARIABLE_B_20, mercury__set_bbbtree__STATE_VARIABLE_C_0_21, mercury__set_bbbtree__STATE_VARIABLE_C_22, mercury__set_bbbtree__STATE_VARIABLE_D_0_23, mercury__set_bbbtree__STATE_VARIABLE_D_24);
    }
  }
}

void MR_CALL 
mercury__set_bbbtree__fold4_10_p_1(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_30,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_31,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_32,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_33,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T5_34,
  MR_Word mercury__set_bbbtree__P_11,
  MR_Word mercury__set_bbbtree__S_12,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_17,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_18,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_19,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_20,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_21,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_22,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_D_0_23,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_D_24)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__Var_25;
    MR_Word mercury__set_bbbtree__Var_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_30, mercury__set_bbbtree__S_12, mercury__set_bbbtree__Var_39, &mercury__set_bbbtree__Var_25);
    }
    {
      mercury__list__foldl4_10_p_1(mercury__set_bbbtree__TypeInfo_for_T1_30, mercury__set_bbbtree__TypeInfo_for_T2_31, mercury__set_bbbtree__TypeInfo_for_T3_32, mercury__set_bbbtree__TypeInfo_for_T4_33, mercury__set_bbbtree__TypeInfo_for_T5_34, mercury__set_bbbtree__P_11, mercury__set_bbbtree__Var_25, mercury__set_bbbtree__STATE_VARIABLE_A_0_17, mercury__set_bbbtree__STATE_VARIABLE_A_18, mercury__set_bbbtree__STATE_VARIABLE_B_0_19, mercury__set_bbbtree__STATE_VARIABLE_B_20, mercury__set_bbbtree__STATE_VARIABLE_C_0_21, mercury__set_bbbtree__STATE_VARIABLE_C_22, mercury__set_bbbtree__STATE_VARIABLE_D_0_23, mercury__set_bbbtree__STATE_VARIABLE_D_24);
    }
  }
}

void MR_CALL 
mercury__set_bbbtree__fold4_10_p_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_30,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_31,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_32,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_33,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T5_34,
  MR_Word mercury__set_bbbtree__P_11,
  MR_Word mercury__set_bbbtree__S_12,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_17,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_18,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_19,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_20,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_21,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_22,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_D_0_23,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_D_24)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__Var_25;
    MR_Word mercury__set_bbbtree__Var_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_30, mercury__set_bbbtree__S_12, mercury__set_bbbtree__Var_39, &mercury__set_bbbtree__Var_25);
    }
    {
      mercury__list__foldl4_10_p_0(mercury__set_bbbtree__TypeInfo_for_T1_30, mercury__set_bbbtree__TypeInfo_for_T2_31, mercury__set_bbbtree__TypeInfo_for_T3_32, mercury__set_bbbtree__TypeInfo_for_T4_33, mercury__set_bbbtree__TypeInfo_for_T5_34, mercury__set_bbbtree__P_11, mercury__set_bbbtree__Var_25, mercury__set_bbbtree__STATE_VARIABLE_A_0_17, mercury__set_bbbtree__STATE_VARIABLE_A_18, mercury__set_bbbtree__STATE_VARIABLE_B_0_19, mercury__set_bbbtree__STATE_VARIABLE_B_20, mercury__set_bbbtree__STATE_VARIABLE_C_0_21, mercury__set_bbbtree__STATE_VARIABLE_C_22, mercury__set_bbbtree__STATE_VARIABLE_D_0_23, mercury__set_bbbtree__STATE_VARIABLE_D_24);
    }
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__fold3_8_p_5(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_24,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_25,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_26,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_27,
  MR_Word mercury__set_bbbtree__P_9,
  MR_Word mercury__set_bbbtree__S_10,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_15,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_17,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_18,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_19)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__Var_20;
    MR_Word mercury__set_bbbtree__Var_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_24, mercury__set_bbbtree__S_10, mercury__set_bbbtree__Var_32, &mercury__set_bbbtree__Var_20);
    }
    {
      mercury__set_bbbtree__succeeded = mercury__list__foldl3_8_p_5(mercury__set_bbbtree__TypeInfo_for_T1_24, mercury__set_bbbtree__TypeInfo_for_T2_25, mercury__set_bbbtree__TypeInfo_for_T3_26, mercury__set_bbbtree__TypeInfo_for_T4_27, mercury__set_bbbtree__P_9, mercury__set_bbbtree__Var_20, mercury__set_bbbtree__STATE_VARIABLE_A_0_14, mercury__set_bbbtree__STATE_VARIABLE_A_15, mercury__set_bbbtree__STATE_VARIABLE_B_0_16, mercury__set_bbbtree__STATE_VARIABLE_B_17, mercury__set_bbbtree__STATE_VARIABLE_C_0_18, mercury__set_bbbtree__STATE_VARIABLE_C_19);
    }
    return mercury__set_bbbtree__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__fold3_8_p_4(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_24,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_25,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_26,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_27,
  MR_Word mercury__set_bbbtree__P_9,
  MR_Word mercury__set_bbbtree__S_10,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_15,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_17,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_18,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_19)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__Var_20;
    MR_Word mercury__set_bbbtree__Var_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_24, mercury__set_bbbtree__S_10, mercury__set_bbbtree__Var_32, &mercury__set_bbbtree__Var_20);
    }
    {
      mercury__set_bbbtree__succeeded = mercury__list__foldl3_8_p_4(mercury__set_bbbtree__TypeInfo_for_T1_24, mercury__set_bbbtree__TypeInfo_for_T2_25, mercury__set_bbbtree__TypeInfo_for_T3_26, mercury__set_bbbtree__TypeInfo_for_T4_27, mercury__set_bbbtree__P_9, mercury__set_bbbtree__Var_20, mercury__set_bbbtree__STATE_VARIABLE_A_0_14, mercury__set_bbbtree__STATE_VARIABLE_A_15, mercury__set_bbbtree__STATE_VARIABLE_B_0_16, mercury__set_bbbtree__STATE_VARIABLE_B_17, mercury__set_bbbtree__STATE_VARIABLE_C_0_18, mercury__set_bbbtree__STATE_VARIABLE_C_19);
    }
    return mercury__set_bbbtree__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__fold3_8_p_3(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_24,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_25,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_26,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_27,
  MR_Word mercury__set_bbbtree__P_9,
  MR_Word mercury__set_bbbtree__S_10,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_15,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_17,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_18,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_19)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__Var_20;
    MR_Word mercury__set_bbbtree__Var_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_24, mercury__set_bbbtree__S_10, mercury__set_bbbtree__Var_32, &mercury__set_bbbtree__Var_20);
    }
    {
      mercury__set_bbbtree__succeeded = mercury__list__foldl3_8_p_3(mercury__set_bbbtree__TypeInfo_for_T1_24, mercury__set_bbbtree__TypeInfo_for_T2_25, mercury__set_bbbtree__TypeInfo_for_T3_26, mercury__set_bbbtree__TypeInfo_for_T4_27, mercury__set_bbbtree__P_9, mercury__set_bbbtree__Var_20, mercury__set_bbbtree__STATE_VARIABLE_A_0_14, mercury__set_bbbtree__STATE_VARIABLE_A_15, mercury__set_bbbtree__STATE_VARIABLE_B_0_16, mercury__set_bbbtree__STATE_VARIABLE_B_17, mercury__set_bbbtree__STATE_VARIABLE_C_0_18, mercury__set_bbbtree__STATE_VARIABLE_C_19);
    }
    return mercury__set_bbbtree__succeeded;
  }
}

void MR_CALL 
mercury__set_bbbtree__fold3_8_p_2(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_24,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_25,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_26,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_27,
  MR_Word mercury__set_bbbtree__P_9,
  MR_Word mercury__set_bbbtree__S_10,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_15,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_17,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_18,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_19)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__Var_20;
    MR_Word mercury__set_bbbtree__Var_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_24, mercury__set_bbbtree__S_10, mercury__set_bbbtree__Var_32, &mercury__set_bbbtree__Var_20);
    }
    {
      mercury__list__foldl3_8_p_2(mercury__set_bbbtree__TypeInfo_for_T1_24, mercury__set_bbbtree__TypeInfo_for_T2_25, mercury__set_bbbtree__TypeInfo_for_T3_26, mercury__set_bbbtree__TypeInfo_for_T4_27, mercury__set_bbbtree__P_9, mercury__set_bbbtree__Var_20, mercury__set_bbbtree__STATE_VARIABLE_A_0_14, mercury__set_bbbtree__STATE_VARIABLE_A_15, mercury__set_bbbtree__STATE_VARIABLE_B_0_16, mercury__set_bbbtree__STATE_VARIABLE_B_17, mercury__set_bbbtree__STATE_VARIABLE_C_0_18, mercury__set_bbbtree__STATE_VARIABLE_C_19);
    }
  }
}

void MR_CALL 
mercury__set_bbbtree__fold3_8_p_1(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_24,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_25,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_26,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_27,
  MR_Word mercury__set_bbbtree__P_9,
  MR_Word mercury__set_bbbtree__S_10,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_15,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_17,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_18,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_19)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__Var_20;
    MR_Word mercury__set_bbbtree__Var_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_24, mercury__set_bbbtree__S_10, mercury__set_bbbtree__Var_32, &mercury__set_bbbtree__Var_20);
    }
    {
      mercury__list__foldl3_8_p_1(mercury__set_bbbtree__TypeInfo_for_T1_24, mercury__set_bbbtree__TypeInfo_for_T2_25, mercury__set_bbbtree__TypeInfo_for_T3_26, mercury__set_bbbtree__TypeInfo_for_T4_27, mercury__set_bbbtree__P_9, mercury__set_bbbtree__Var_20, mercury__set_bbbtree__STATE_VARIABLE_A_0_14, mercury__set_bbbtree__STATE_VARIABLE_A_15, mercury__set_bbbtree__STATE_VARIABLE_B_0_16, mercury__set_bbbtree__STATE_VARIABLE_B_17, mercury__set_bbbtree__STATE_VARIABLE_C_0_18, mercury__set_bbbtree__STATE_VARIABLE_C_19);
    }
  }
}

void MR_CALL 
mercury__set_bbbtree__fold3_8_p_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_24,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_25,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_26,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T4_27,
  MR_Word mercury__set_bbbtree__P_9,
  MR_Word mercury__set_bbbtree__S_10,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_14,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_15,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_16,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_17,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_C_0_18,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_C_19)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__Var_20;
    MR_Word mercury__set_bbbtree__Var_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_24, mercury__set_bbbtree__S_10, mercury__set_bbbtree__Var_32, &mercury__set_bbbtree__Var_20);
    }
    {
      mercury__list__foldl3_8_p_0(mercury__set_bbbtree__TypeInfo_for_T1_24, mercury__set_bbbtree__TypeInfo_for_T2_25, mercury__set_bbbtree__TypeInfo_for_T3_26, mercury__set_bbbtree__TypeInfo_for_T4_27, mercury__set_bbbtree__P_9, mercury__set_bbbtree__Var_20, mercury__set_bbbtree__STATE_VARIABLE_A_0_14, mercury__set_bbbtree__STATE_VARIABLE_A_15, mercury__set_bbbtree__STATE_VARIABLE_B_0_16, mercury__set_bbbtree__STATE_VARIABLE_B_17, mercury__set_bbbtree__STATE_VARIABLE_C_0_18, mercury__set_bbbtree__STATE_VARIABLE_C_19);
    }
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__fold2_6_p_5(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_18,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_19,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_20,
  MR_Word mercury__set_bbbtree__P_7,
  MR_Word mercury__set_bbbtree__S_8,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_12,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_14)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__Var_15;
    MR_Word mercury__set_bbbtree__Var_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_18, mercury__set_bbbtree__S_8, mercury__set_bbbtree__Var_25, &mercury__set_bbbtree__Var_15);
    }
    {
      mercury__set_bbbtree__succeeded = mercury__list__foldl2_6_p_6(mercury__set_bbbtree__TypeInfo_for_T1_18, mercury__set_bbbtree__TypeInfo_for_T2_19, mercury__set_bbbtree__TypeInfo_for_T3_20, mercury__set_bbbtree__P_7, mercury__set_bbbtree__Var_15, mercury__set_bbbtree__STATE_VARIABLE_A_0_11, mercury__set_bbbtree__STATE_VARIABLE_A_12, mercury__set_bbbtree__STATE_VARIABLE_B_0_13, mercury__set_bbbtree__STATE_VARIABLE_B_14);
    }
    return mercury__set_bbbtree__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__fold2_6_p_4(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_18,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_19,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_20,
  MR_Word mercury__set_bbbtree__P_7,
  MR_Word mercury__set_bbbtree__S_8,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_12,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_14)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__Var_15;
    MR_Word mercury__set_bbbtree__Var_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_18, mercury__set_bbbtree__S_8, mercury__set_bbbtree__Var_25, &mercury__set_bbbtree__Var_15);
    }
    {
      mercury__set_bbbtree__succeeded = mercury__list__foldl2_6_p_5(mercury__set_bbbtree__TypeInfo_for_T1_18, mercury__set_bbbtree__TypeInfo_for_T2_19, mercury__set_bbbtree__TypeInfo_for_T3_20, mercury__set_bbbtree__P_7, mercury__set_bbbtree__Var_15, mercury__set_bbbtree__STATE_VARIABLE_A_0_11, mercury__set_bbbtree__STATE_VARIABLE_A_12, mercury__set_bbbtree__STATE_VARIABLE_B_0_13, mercury__set_bbbtree__STATE_VARIABLE_B_14);
    }
    return mercury__set_bbbtree__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__fold2_6_p_3(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_18,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_19,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_20,
  MR_Word mercury__set_bbbtree__P_7,
  MR_Word mercury__set_bbbtree__S_8,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_12,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_14)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__Var_15;
    MR_Word mercury__set_bbbtree__Var_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_18, mercury__set_bbbtree__S_8, mercury__set_bbbtree__Var_25, &mercury__set_bbbtree__Var_15);
    }
    {
      mercury__set_bbbtree__succeeded = mercury__list__foldl2_6_p_4(mercury__set_bbbtree__TypeInfo_for_T1_18, mercury__set_bbbtree__TypeInfo_for_T2_19, mercury__set_bbbtree__TypeInfo_for_T3_20, mercury__set_bbbtree__P_7, mercury__set_bbbtree__Var_15, mercury__set_bbbtree__STATE_VARIABLE_A_0_11, mercury__set_bbbtree__STATE_VARIABLE_A_12, mercury__set_bbbtree__STATE_VARIABLE_B_0_13, mercury__set_bbbtree__STATE_VARIABLE_B_14);
    }
    return mercury__set_bbbtree__succeeded;
  }
}

void MR_CALL 
mercury__set_bbbtree__fold2_6_p_2(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_18,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_19,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_20,
  MR_Word mercury__set_bbbtree__P_7,
  MR_Word mercury__set_bbbtree__S_8,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_12,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_14)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__Var_15;
    MR_Word mercury__set_bbbtree__Var_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_18, mercury__set_bbbtree__S_8, mercury__set_bbbtree__Var_25, &mercury__set_bbbtree__Var_15);
    }
    {
      mercury__list__foldl2_6_p_2(mercury__set_bbbtree__TypeInfo_for_T1_18, mercury__set_bbbtree__TypeInfo_for_T2_19, mercury__set_bbbtree__TypeInfo_for_T3_20, mercury__set_bbbtree__P_7, mercury__set_bbbtree__Var_15, mercury__set_bbbtree__STATE_VARIABLE_A_0_11, mercury__set_bbbtree__STATE_VARIABLE_A_12, mercury__set_bbbtree__STATE_VARIABLE_B_0_13, mercury__set_bbbtree__STATE_VARIABLE_B_14);
    }
  }
}

void MR_CALL 
mercury__set_bbbtree__fold2_6_p_1(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_18,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_19,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_20,
  MR_Word mercury__set_bbbtree__P_7,
  MR_Word mercury__set_bbbtree__S_8,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_12,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_14)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__Var_15;
    MR_Word mercury__set_bbbtree__Var_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_18, mercury__set_bbbtree__S_8, mercury__set_bbbtree__Var_25, &mercury__set_bbbtree__Var_15);
    }
    {
      mercury__list__foldl2_6_p_1(mercury__set_bbbtree__TypeInfo_for_T1_18, mercury__set_bbbtree__TypeInfo_for_T2_19, mercury__set_bbbtree__TypeInfo_for_T3_20, mercury__set_bbbtree__P_7, mercury__set_bbbtree__Var_15, mercury__set_bbbtree__STATE_VARIABLE_A_0_11, mercury__set_bbbtree__STATE_VARIABLE_A_12, mercury__set_bbbtree__STATE_VARIABLE_B_0_13, mercury__set_bbbtree__STATE_VARIABLE_B_14);
    }
  }
}

void MR_CALL 
mercury__set_bbbtree__fold2_6_p_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_18,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_19,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T3_20,
  MR_Word mercury__set_bbbtree__P_7,
  MR_Word mercury__set_bbbtree__S_8,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_11,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_12,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_B_0_13,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_B_14)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__Var_15;
    MR_Word mercury__set_bbbtree__Var_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_18, mercury__set_bbbtree__S_8, mercury__set_bbbtree__Var_25, &mercury__set_bbbtree__Var_15);
    }
    {
      mercury__list__foldl2_6_p_0(mercury__set_bbbtree__TypeInfo_for_T1_18, mercury__set_bbbtree__TypeInfo_for_T2_19, mercury__set_bbbtree__TypeInfo_for_T3_20, mercury__set_bbbtree__P_7, mercury__set_bbbtree__Var_15, mercury__set_bbbtree__STATE_VARIABLE_A_0_11, mercury__set_bbbtree__STATE_VARIABLE_A_12, mercury__set_bbbtree__STATE_VARIABLE_B_0_13, mercury__set_bbbtree__STATE_VARIABLE_B_14);
    }
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__fold_4_p_5(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_12,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_13,
  MR_Word mercury__set_bbbtree__P_5,
  MR_Word mercury__set_bbbtree__S_6,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_9)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__Var_10;
    MR_Word mercury__set_bbbtree__Var_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_12, mercury__set_bbbtree__S_6, mercury__set_bbbtree__Var_18, &mercury__set_bbbtree__Var_10);
    }
    {
      mercury__set_bbbtree__succeeded = mercury__list__foldl_4_p_5(mercury__set_bbbtree__TypeInfo_for_T1_12, mercury__set_bbbtree__TypeInfo_for_T2_13, mercury__set_bbbtree__P_5, mercury__set_bbbtree__Var_10, mercury__set_bbbtree__STATE_VARIABLE_A_0_8, mercury__set_bbbtree__STATE_VARIABLE_A_9);
    }
    return mercury__set_bbbtree__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__fold_4_p_4(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_12,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_13,
  MR_Word mercury__set_bbbtree__P_5,
  MR_Word mercury__set_bbbtree__S_6,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_9)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__Var_10;
    MR_Word mercury__set_bbbtree__Var_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_12, mercury__set_bbbtree__S_6, mercury__set_bbbtree__Var_18, &mercury__set_bbbtree__Var_10);
    }
    {
      mercury__set_bbbtree__succeeded = mercury__list__foldl_4_p_4(mercury__set_bbbtree__TypeInfo_for_T1_12, mercury__set_bbbtree__TypeInfo_for_T2_13, mercury__set_bbbtree__P_5, mercury__set_bbbtree__Var_10, mercury__set_bbbtree__STATE_VARIABLE_A_0_8, mercury__set_bbbtree__STATE_VARIABLE_A_9);
    }
    return mercury__set_bbbtree__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__fold_4_p_3(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_12,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_13,
  MR_Word mercury__set_bbbtree__P_5,
  MR_Word mercury__set_bbbtree__S_6,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_9)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__Var_10;
    MR_Word mercury__set_bbbtree__Var_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_12, mercury__set_bbbtree__S_6, mercury__set_bbbtree__Var_18, &mercury__set_bbbtree__Var_10);
    }
    {
      mercury__set_bbbtree__succeeded = mercury__list__foldl_4_p_3(mercury__set_bbbtree__TypeInfo_for_T1_12, mercury__set_bbbtree__TypeInfo_for_T2_13, mercury__set_bbbtree__P_5, mercury__set_bbbtree__Var_10, mercury__set_bbbtree__STATE_VARIABLE_A_0_8, mercury__set_bbbtree__STATE_VARIABLE_A_9);
    }
    return mercury__set_bbbtree__succeeded;
  }
}

void MR_CALL 
mercury__set_bbbtree__fold_4_p_2(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_12,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_13,
  MR_Word mercury__set_bbbtree__P_5,
  MR_Word mercury__set_bbbtree__S_6,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_9)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__Var_10;
    MR_Word mercury__set_bbbtree__Var_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_12, mercury__set_bbbtree__S_6, mercury__set_bbbtree__Var_18, &mercury__set_bbbtree__Var_10);
    }
    {
      mercury__list__foldl_4_p_2(mercury__set_bbbtree__TypeInfo_for_T1_12, mercury__set_bbbtree__TypeInfo_for_T2_13, mercury__set_bbbtree__P_5, mercury__set_bbbtree__Var_10, mercury__set_bbbtree__STATE_VARIABLE_A_0_8, mercury__set_bbbtree__STATE_VARIABLE_A_9);
    }
  }
}

void MR_CALL 
mercury__set_bbbtree__fold_4_p_1(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_12,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_13,
  MR_Word mercury__set_bbbtree__P_5,
  MR_Word mercury__set_bbbtree__S_6,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_9)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__Var_10;
    MR_Word mercury__set_bbbtree__Var_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_12, mercury__set_bbbtree__S_6, mercury__set_bbbtree__Var_18, &mercury__set_bbbtree__Var_10);
    }
    {
      mercury__list__foldl_4_p_1(mercury__set_bbbtree__TypeInfo_for_T1_12, mercury__set_bbbtree__TypeInfo_for_T2_13, mercury__set_bbbtree__P_5, mercury__set_bbbtree__Var_10, mercury__set_bbbtree__STATE_VARIABLE_A_0_8, mercury__set_bbbtree__STATE_VARIABLE_A_9);
    }
  }
}

void MR_CALL 
mercury__set_bbbtree__fold_4_p_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_12,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_13,
  MR_Word mercury__set_bbbtree__P_5,
  MR_Word mercury__set_bbbtree__S_6,
  MR_Box mercury__set_bbbtree__STATE_VARIABLE_A_0_8,
  MR_Box * mercury__set_bbbtree__STATE_VARIABLE_A_9)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__Var_10;
    MR_Word mercury__set_bbbtree__Var_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_12, mercury__set_bbbtree__S_6, mercury__set_bbbtree__Var_18, &mercury__set_bbbtree__Var_10);
    }
    {
      mercury__list__foldl_4_p_0(mercury__set_bbbtree__TypeInfo_for_T1_12, mercury__set_bbbtree__TypeInfo_for_T2_13, mercury__set_bbbtree__P_5, mercury__set_bbbtree__Var_10, mercury__set_bbbtree__STATE_VARIABLE_A_0_8, mercury__set_bbbtree__STATE_VARIABLE_A_9);
    }
  }
}

MR_Box MR_CALL 
mercury__set_bbbtree__fold_3_f_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T1_10,
  MR_Word mercury__set_bbbtree__TypeInfo_for_T2_11,
  MR_Word mercury__set_bbbtree__F_5,
  MR_Word mercury__set_bbbtree__S_6,
  MR_Box mercury__set_bbbtree__A_7)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Box mercury__set_bbbtree__B_8;
    MR_Word mercury__set_bbbtree__Var_9;
    MR_Word mercury__set_bbbtree__Var_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T1_10, mercury__set_bbbtree__S_6, mercury__set_bbbtree__Var_16, &mercury__set_bbbtree__Var_9);
    }
    {
      mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(mercury__set_bbbtree__F_5, mercury__set_bbbtree__Var_9, mercury__set_bbbtree__A_7, &mercury__set_bbbtree__B_8);
    }
    return mercury__set_bbbtree__B_8;
  }
}

static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_49_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
  MR_Word mercury__set_bbbtree__Var_18,
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
  MR_Box mercury__set_bbbtree__HeadVar__3_3,
  MR_Box * mercury__set_bbbtree__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__set_bbbtree__succeeded;

        if ((mercury__set_bbbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__set_bbbtree__HeadVar__4_4 = mercury__set_bbbtree__HeadVar__3_3;
        else
          {
            MR_Box mercury__set_bbbtree__V_10_9 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 0));
            MR_Word mercury__set_bbbtree__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 1)));
            MR_Box mercury__set_bbbtree__V_15_13;
            MR_Box MR_CALL (* mercury__set_bbbtree__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__set_bbbtree__Var_18, (MR_Integer) 1)));

            {
              mercury__set_bbbtree__V_15_13 = mercury__set_bbbtree__func_0(((MR_Box) mercury__set_bbbtree__Var_18), mercury__set_bbbtree__V_10_9, mercury__set_bbbtree__HeadVar__3_3);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__set_bbbtree__next_value_of_HeadVar__2_2 = mercury__set_bbbtree__V_11_10;
              MR_Box mercury__set_bbbtree__next_value_of_HeadVar__3_3 = mercury__set_bbbtree__V_15_13;

              mercury__set_bbbtree__HeadVar__3_3 = mercury__set_bbbtree__next_value_of_HeadVar__3_3;
              mercury__set_bbbtree__HeadVar__2_2 = mercury__set_bbbtree__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__set_bbbtree__superset_2_p_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_5,
  MR_Word mercury__set_bbbtree__SetA_3,
  MR_Word mercury__set_bbbtree__SetB_4)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__Set_8;

    {
      mercury__set_bbbtree__difference_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_5, mercury__set_bbbtree__SetB_4, mercury__set_bbbtree__SetA_3, &mercury__set_bbbtree__Set_8, (MR_Integer) 5);
    }
    mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__Set_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    return mercury__set_bbbtree__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__subset_2_p_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_6,
  MR_Word mercury__set_bbbtree__SetA_3,
  MR_Word mercury__set_bbbtree__SetB_4)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__Set_5;

    {
      mercury__set_bbbtree__difference_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_6, mercury__set_bbbtree__SetA_3, mercury__set_bbbtree__SetB_4, &mercury__set_bbbtree__Set_5, (MR_Integer) 5);
    }
    mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__Set_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    return mercury__set_bbbtree__succeeded;
  }
}

MR_Word MR_CALL 
mercury__set_bbbtree__difference_2_f_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_7,
  MR_Word mercury__set_bbbtree__S1_4,
  MR_Word mercury__set_bbbtree__S2_5)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__S3_6;

    {
      mercury__set_bbbtree__difference_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_7, mercury__set_bbbtree__S1_4, mercury__set_bbbtree__S2_5, &mercury__set_bbbtree__S3_6, (MR_Integer) 5);
    }
    return mercury__set_bbbtree__S3_6;
  }
}

void MR_CALL 
mercury__set_bbbtree__difference_3_p_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_8,
  MR_Word mercury__set_bbbtree__SetA_4,
  MR_Word mercury__set_bbbtree__SetB_5,
  MR_Word * mercury__set_bbbtree__Set_6)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;

    {
      mercury__set_bbbtree__difference_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_8, mercury__set_bbbtree__SetA_4, mercury__set_bbbtree__SetB_5, mercury__set_bbbtree__Set_6, (MR_Integer) 5);
    }
  }
}

MR_Word MR_CALL 
mercury__set_bbbtree__intersect_list_1_f_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_6,
  MR_Word mercury__set_bbbtree__HeadVar__1_1)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__HeadVar__2_2;

    if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__set_bbbtree__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word mercury__set_bbbtree__Set_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__set_bbbtree__Sets_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));

        {
          mercury__set_bbbtree__HeadVar__2_2 = mercury__set_bbbtree__intersect_list_r_3_f_0(mercury__set_bbbtree__TypeInfo_for_T_6, mercury__set_bbbtree__Set_3, mercury__set_bbbtree__Sets_4, (MR_Integer) 5);
        }
      }
    return mercury__set_bbbtree__HeadVar__2_2;
  }
}

MR_Word MR_CALL 
mercury__set_bbbtree__intersect_list_r_3_f_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_12,
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
  MR_Integer mercury__set_bbbtree__HeadVar__3_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__set_bbbtree__succeeded;
        MR_Word mercury__set_bbbtree__HeadVar__4_4;

        if ((mercury__set_bbbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          mercury__set_bbbtree__HeadVar__4_4 = mercury__set_bbbtree__HeadVar__1_1;
        else
          {
            MR_Word mercury__set_bbbtree__Set_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__set_bbbtree__Sets_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mercury__set_bbbtree__Intersect1_11;

            {
              mercury__set_bbbtree__intersect_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_12, mercury__set_bbbtree__HeadVar__1_1, mercury__set_bbbtree__Set_8, &mercury__set_bbbtree__Intersect1_11, mercury__set_bbbtree__HeadVar__3_3);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__set_bbbtree__next_value_of_HeadVar__1_1 = mercury__set_bbbtree__Intersect1_11;
              MR_Word mercury__set_bbbtree__next_value_of_HeadVar__2_2 = mercury__set_bbbtree__Sets_9;

              mercury__set_bbbtree__HeadVar__2_2 = mercury__set_bbbtree__next_value_of_HeadVar__2_2;
              mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__next_value_of_HeadVar__1_1;
            }
            continue;
          }
        return mercury__set_bbbtree__HeadVar__4_4;
      }
      break;
    }
}

MR_Word MR_CALL 
mercury__set_bbbtree__power_intersect_1_f_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_5,
  MR_Word mercury__set_bbbtree__SS_3)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__S_4;

    if ((mercury__set_bbbtree__SS_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__set_bbbtree__S_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word mercury__set_bbbtree__V_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__SS_3, (MR_Integer) 0)));
        MR_Word mercury__set_bbbtree__L_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__SS_3, (MR_Integer) 2)));
        MR_Word mercury__set_bbbtree__R_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__SS_3, (MR_Integer) 3)));
        MR_Word mercury__set_bbbtree__Intersection0_16;
        MR_Integer mercury__set_bbbtree___N_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__SS_3, (MR_Integer) 1)));

        {
          mercury__set_bbbtree__power_intersect_r2_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_5, mercury__set_bbbtree__L_12, mercury__set_bbbtree__V_10, &mercury__set_bbbtree__Intersection0_16, (MR_Integer) 5);
        }
        {
          mercury__set_bbbtree__power_intersect_r2_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_5, mercury__set_bbbtree__R_13, mercury__set_bbbtree__Intersection0_16, &mercury__set_bbbtree__S_4, (MR_Integer) 5);
        }
      }
    return mercury__set_bbbtree__S_4;
  }
}

void MR_CALL 
mercury__set_bbbtree__power_intersect_2_p_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_6,
  MR_Word mercury__set_bbbtree__Sets_3,
  MR_Word * mercury__set_bbbtree__Set_4)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;

    if ((mercury__set_bbbtree__Sets_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__set_bbbtree__Set_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word mercury__set_bbbtree__V_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Sets_3, (MR_Integer) 0)));
        MR_Word mercury__set_bbbtree__L_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Sets_3, (MR_Integer) 2)));
        MR_Word mercury__set_bbbtree__R_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Sets_3, (MR_Integer) 3)));
        MR_Word mercury__set_bbbtree__Intersection0_14;
        MR_Integer mercury__set_bbbtree___N_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Sets_3, (MR_Integer) 1)));

        {
          mercury__set_bbbtree__power_intersect_r2_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_6, mercury__set_bbbtree__L_10, mercury__set_bbbtree__V_8, &mercury__set_bbbtree__Intersection0_14, (MR_Integer) 5);
        }
        {
          mercury__set_bbbtree__power_intersect_r2_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_6, mercury__set_bbbtree__R_11, mercury__set_bbbtree__Intersection0_14, mercury__set_bbbtree__Set_4, (MR_Integer) 5);
        }
      }
  }
}

static void MR_CALL 
mercury__set_bbbtree__power_intersect_r2_4_p_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_29,
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
  MR_Word * mercury__set_bbbtree__HeadVar__3_3,
  MR_Integer mercury__set_bbbtree__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__set_bbbtree__succeeded;

        if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((mercury__set_bbbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *mercury__set_bbbtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          else
            *mercury__set_bbbtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Word mercury__set_bbbtree__Var_30 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
            MR_Word mercury__set_bbbtree__Var_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
            MR_Word mercury__set_bbbtree__Var_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer mercury__set_bbbtree__Var_32 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));

            if ((mercury__set_bbbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              *mercury__set_bbbtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            else
              {
                MR_Word mercury__set_bbbtree__Intersection0_26;
                MR_Word mercury__set_bbbtree__Intersection1_27;

                {
                  mercury__set_bbbtree__intersect_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_29, mercury__set_bbbtree__Var_33, mercury__set_bbbtree__HeadVar__2_2, &mercury__set_bbbtree__Intersection0_26, mercury__set_bbbtree__HeadVar__4_4);
                }
                {
                  mercury__set_bbbtree__power_intersect_r2_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_29, mercury__set_bbbtree__Var_31, mercury__set_bbbtree__Intersection0_26, &mercury__set_bbbtree__Intersection1_27, mercury__set_bbbtree__HeadVar__4_4);
                }
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__set_bbbtree__next_value_of_HeadVar__1_1 = mercury__set_bbbtree__Var_30;
                  MR_Word mercury__set_bbbtree__next_value_of_HeadVar__2_2 = mercury__set_bbbtree__Intersection1_27;

                  mercury__set_bbbtree__HeadVar__2_2 = mercury__set_bbbtree__next_value_of_HeadVar__2_2;
                  mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
      }
      break;
    }
}

MR_Word MR_CALL 
mercury__set_bbbtree__intersect_2_f_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_7,
  MR_Word mercury__set_bbbtree__S1_4,
  MR_Word mercury__set_bbbtree__S2_5)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__S3_6;

    {
      mercury__set_bbbtree__intersect_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_7, mercury__set_bbbtree__S1_4, mercury__set_bbbtree__S2_5, &mercury__set_bbbtree__S3_6, (MR_Integer) 5);
    }
    return mercury__set_bbbtree__S3_6;
  }
}

void MR_CALL 
mercury__set_bbbtree__intersect_3_p_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_8,
  MR_Word mercury__set_bbbtree__SetA_4,
  MR_Word mercury__set_bbbtree__SetB_5,
  MR_Word * mercury__set_bbbtree__Set_6)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;

    {
      mercury__set_bbbtree__intersect_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_8, mercury__set_bbbtree__SetA_4, mercury__set_bbbtree__SetB_5, mercury__set_bbbtree__Set_6, (MR_Integer) 5);
    }
  }
}

void MR_CALL 
mercury__set_bbbtree__intersect_r_4_p_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_18,
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
  MR_Word * mercury__set_bbbtree__HeadVar__3_3,
  MR_Integer mercury__set_bbbtree__HeadVar__4_4)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;

    if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__set_bbbtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Box mercury__set_bbbtree__V_7 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
        MR_Word mercury__set_bbbtree__LL_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word mercury__set_bbbtree__LR_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word mercury__set_bbbtree__NewRL_14;
        MR_Word mercury__set_bbbtree__NewRR_15;
        MR_Word mercury__set_bbbtree__LSet_16;
        MR_Word mercury__set_bbbtree__RSet_17;
        MR_Integer mercury__set_bbbtree___N_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));

        {
          mercury__set_bbbtree__split_lt_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__HeadVar__2_2, mercury__set_bbbtree__V_7, &mercury__set_bbbtree__NewRL_14, mercury__set_bbbtree__HeadVar__4_4);
        }
        {
          mercury__set_bbbtree__split_gt_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__HeadVar__2_2, mercury__set_bbbtree__V_7, &mercury__set_bbbtree__NewRR_15, mercury__set_bbbtree__HeadVar__4_4);
        }
        {
          mercury__set_bbbtree__intersect_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__LL_9, mercury__set_bbbtree__NewRL_14, &mercury__set_bbbtree__LSet_16, mercury__set_bbbtree__HeadVar__4_4);
        }
        {
          mercury__set_bbbtree__intersect_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__LR_10, mercury__set_bbbtree__NewRR_15, &mercury__set_bbbtree__RSet_17, mercury__set_bbbtree__HeadVar__4_4);
        }
        {
          mercury__set_bbbtree__succeeded = mercury__set_bbbtree__member_2_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__V_7, mercury__set_bbbtree__HeadVar__2_2);
        }
        if (mercury__set_bbbtree__succeeded)
          {
            mercury__set_bbbtree__concat4_5_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__LSet_16, mercury__set_bbbtree__RSet_17, mercury__set_bbbtree__V_7, mercury__set_bbbtree__HeadVar__3_3, mercury__set_bbbtree__HeadVar__4_4);
          }
        else
          {
            MR_Integer mercury__set_bbbtree__LSize_22;

            if ((mercury__set_bbbtree__LSet_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              mercury__set_bbbtree__LSize_22 = (MR_Integer) 0;
            else
              {
                MR_Box mercury__set_bbbtree___V_30 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LSet_16, (MR_Integer) 0));
                MR_Word mercury__set_bbbtree___L_32;
                MR_Word mercury__set_bbbtree___R_33;

                mercury__set_bbbtree__LSize_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LSet_16, (MR_Integer) 1)));
                mercury__set_bbbtree___L_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LSet_16, (MR_Integer) 2)));
                mercury__set_bbbtree___R_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LSet_16, (MR_Integer) 3)));
              }
            mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__LSize_22 == (MR_Integer) 0);
            if (mercury__set_bbbtree__succeeded)
              *mercury__set_bbbtree__HeadVar__3_3 = mercury__set_bbbtree__RSet_17;
            else
              {
                MR_Integer mercury__set_bbbtree__RSize_23;

                if ((mercury__set_bbbtree__RSet_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  mercury__set_bbbtree__RSize_23 = (MR_Integer) 0;
                else
                  {
                    MR_Box mercury__set_bbbtree___V_34 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RSet_17, (MR_Integer) 0));
                    MR_Word mercury__set_bbbtree___L_36;
                    MR_Word mercury__set_bbbtree___R_37;

                    mercury__set_bbbtree__RSize_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RSet_17, (MR_Integer) 1)));
                    mercury__set_bbbtree___L_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RSet_17, (MR_Integer) 2)));
                    mercury__set_bbbtree___R_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RSet_17, (MR_Integer) 3)));
                  }
                mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__RSize_23 == (MR_Integer) 0);
                if (mercury__set_bbbtree__succeeded)
                  *mercury__set_bbbtree__HeadVar__3_3 = mercury__set_bbbtree__LSet_16;
                else
                  {
                    mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__LSize_22 > mercury__set_bbbtree__RSize_23);
                    if (mercury__set_bbbtree__succeeded)
                      {
                        MR_Box mercury__set_bbbtree__X_24;
                        MR_Word mercury__set_bbbtree__NewL_25;

                        {
                          mercury__set_bbbtree__succeeded = mercury__set_bbbtree__remove_largest_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, &mercury__set_bbbtree__X_24, mercury__set_bbbtree__LSet_16, &mercury__set_bbbtree__NewL_25);
                        }
                        if (mercury__set_bbbtree__succeeded)
                          {
                            mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__X_24, mercury__set_bbbtree__NewL_25, mercury__set_bbbtree__RSet_17, mercury__set_bbbtree__HeadVar__3_3);
                          }
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
                        MR_Word mercury__set_bbbtree__NewR_26;
                        MR_Box mercury__set_bbbtree__X_29;

                        {
                          mercury__set_bbbtree__succeeded = mercury__set_bbbtree__remove_least_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, &mercury__set_bbbtree__X_29, mercury__set_bbbtree__RSet_17, &mercury__set_bbbtree__NewR_26);
                        }
                        if (mercury__set_bbbtree__succeeded)
                          {
                            mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__X_29, mercury__set_bbbtree__LSet_16, mercury__set_bbbtree__NewR_26, mercury__set_bbbtree__HeadVar__3_3);
                          }
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
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_5,
  MR_Word mercury__set_bbbtree__SS_3)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__S_4;

    {
      mercury__set_bbbtree__power_union_r_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_5, mercury__set_bbbtree__SS_3, &mercury__set_bbbtree__S_4, (MR_Integer) 5);
    }
    return mercury__set_bbbtree__S_4;
  }
}

void MR_CALL 
mercury__set_bbbtree__power_union_2_p_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_6,
  MR_Word mercury__set_bbbtree__Sets_3,
  MR_Word * mercury__set_bbbtree__Set_4)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;

    {
      mercury__set_bbbtree__power_union_r_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_6, mercury__set_bbbtree__Sets_3, mercury__set_bbbtree__Set_4, (MR_Integer) 5);
    }
  }
}

void MR_CALL 
mercury__set_bbbtree__power_union_r_3_p_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_14,
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
  MR_Word * mercury__set_bbbtree__HeadVar__2_2,
  MR_Integer mercury__set_bbbtree__HeadVar__3_3)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;

    if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__set_bbbtree__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word mercury__set_bbbtree__V_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__set_bbbtree__L_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word mercury__set_bbbtree__R_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word mercury__set_bbbtree__LUnion_11;
        MR_Word mercury__set_bbbtree__RUnion_12;
        MR_Word mercury__set_bbbtree__Union_13;
        MR_Integer mercury__set_bbbtree___N_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));

        {
          mercury__set_bbbtree__power_union_r_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_14, mercury__set_bbbtree__L_7, &mercury__set_bbbtree__LUnion_11, mercury__set_bbbtree__HeadVar__3_3);
        }
        {
          mercury__set_bbbtree__power_union_r_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_14, mercury__set_bbbtree__R_8, &mercury__set_bbbtree__RUnion_12, mercury__set_bbbtree__HeadVar__3_3);
        }
        {
          mercury__set_bbbtree__union_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_14, mercury__set_bbbtree__LUnion_11, mercury__set_bbbtree__RUnion_12, &mercury__set_bbbtree__Union_13, mercury__set_bbbtree__HeadVar__3_3);
        }
        {
          mercury__set_bbbtree__union_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_14, mercury__set_bbbtree__V_5, mercury__set_bbbtree__Union_13, mercury__set_bbbtree__HeadVar__2_2, mercury__set_bbbtree__HeadVar__3_3);
        }
      }
  }
}

MR_Word MR_CALL 
mercury__set_bbbtree__union_list_1_f_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_6,
  MR_Word mercury__set_bbbtree__ListofSets_3)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__HeadVar__2_2;
    MR_Word mercury__set_bbbtree__Var_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__list_0(mercury__set_bbbtree__TypeInfo_for_T_6, mercury__set_bbbtree__ListofSets_3, mercury__set_bbbtree__Var_5, &mercury__set_bbbtree__HeadVar__2_2);
    }
    return mercury__set_bbbtree__HeadVar__2_2;
  }
}

static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_54_44_32_55_44_32_57_44_32_49_48_44_32_49_49_93_95_48_4_p_in__list_0(
  MR_Word mercury__set_bbbtree__Var_27,
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
  MR_Word mercury__set_bbbtree__HeadVar__3_3,
  MR_Word * mercury__set_bbbtree__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__set_bbbtree__succeeded;

        if ((mercury__set_bbbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__set_bbbtree__HeadVar__4_4 = mercury__set_bbbtree__HeadVar__3_3;
        else
          {
            MR_Word mercury__set_bbbtree__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__set_bbbtree__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mercury__set_bbbtree__V_15_13;

            {
              mercury__set_bbbtree__union_r_4_p_0(mercury__set_bbbtree__Var_27, mercury__set_bbbtree__V_10_9, mercury__set_bbbtree__HeadVar__3_3, &mercury__set_bbbtree__V_15_13, (MR_Integer) 5);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__set_bbbtree__next_value_of_HeadVar__2_2 = mercury__set_bbbtree__V_11_10;
              MR_Word mercury__set_bbbtree__next_value_of_HeadVar__3_3 = mercury__set_bbbtree__V_15_13;

              mercury__set_bbbtree__HeadVar__3_3 = mercury__set_bbbtree__next_value_of_HeadVar__3_3;
              mercury__set_bbbtree__HeadVar__2_2 = mercury__set_bbbtree__next_value_of_HeadVar__2_2;
            }
            continue;
          }
      }
      break;
    }
}

MR_Word MR_CALL 
mercury__set_bbbtree__union_2_f_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_7,
  MR_Word mercury__set_bbbtree__S1_4,
  MR_Word mercury__set_bbbtree__S2_5)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__S3_6;

    {
      mercury__set_bbbtree__union_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_7, mercury__set_bbbtree__S1_4, mercury__set_bbbtree__S2_5, &mercury__set_bbbtree__S3_6, (MR_Integer) 5);
    }
    return mercury__set_bbbtree__S3_6;
  }
}

void MR_CALL 
mercury__set_bbbtree__union_3_p_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_8,
  MR_Word mercury__set_bbbtree__SetA_4,
  MR_Word mercury__set_bbbtree__SetB_5,
  MR_Word * mercury__set_bbbtree__Set_6)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;

    {
      mercury__set_bbbtree__union_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_8, mercury__set_bbbtree__SetA_4, mercury__set_bbbtree__SetB_5, mercury__set_bbbtree__Set_6, (MR_Integer) 5);
    }
  }
}

void MR_CALL 
mercury__set_bbbtree__union_r_4_p_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_18,
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
  MR_Word * mercury__set_bbbtree__Set_3,
  MR_Integer mercury__set_bbbtree__HeadVar__4_4)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;

    if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__set_bbbtree__Set_3 = mercury__set_bbbtree__HeadVar__2_2;
    else
      {
        MR_Box mercury__set_bbbtree__V_7 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
        MR_Word mercury__set_bbbtree__LL_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word mercury__set_bbbtree__LR_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word mercury__set_bbbtree__NewRL_14;
        MR_Word mercury__set_bbbtree__NewRR_15;
        MR_Word mercury__set_bbbtree__LSet_16;
        MR_Word mercury__set_bbbtree__RSet_17;
        MR_Integer mercury__set_bbbtree___N_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));

        {
          mercury__set_bbbtree__split_lt_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__HeadVar__2_2, mercury__set_bbbtree__V_7, &mercury__set_bbbtree__NewRL_14, mercury__set_bbbtree__HeadVar__4_4);
        }
        {
          mercury__set_bbbtree__split_gt_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__HeadVar__2_2, mercury__set_bbbtree__V_7, &mercury__set_bbbtree__NewRR_15, mercury__set_bbbtree__HeadVar__4_4);
        }
        {
          mercury__set_bbbtree__union_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__LL_9, mercury__set_bbbtree__NewRL_14, &mercury__set_bbbtree__LSet_16, mercury__set_bbbtree__HeadVar__4_4);
        }
        {
          mercury__set_bbbtree__union_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__LR_10, mercury__set_bbbtree__NewRR_15, &mercury__set_bbbtree__RSet_17, mercury__set_bbbtree__HeadVar__4_4);
        }
        {
          mercury__set_bbbtree__concat4_5_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__LSet_16, mercury__set_bbbtree__RSet_17, mercury__set_bbbtree__V_7, mercury__set_bbbtree__Set_3, mercury__set_bbbtree__HeadVar__4_4);
        }
      }
  }
}

MR_Word MR_CALL 
mercury__set_bbbtree__to_sorted_list_1_f_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_5,
  MR_Word mercury__set_bbbtree__S_3)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__Xs_4;
    MR_Word mercury__set_bbbtree__Var_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T_5, mercury__set_bbbtree__S_3, mercury__set_bbbtree__Var_8, &mercury__set_bbbtree__Xs_4);
    }
    return mercury__set_bbbtree__Xs_4;
  }
}

void MR_CALL 
mercury__set_bbbtree__to_sorted_list_2_p_1(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_6,
  MR_Word mercury__set_bbbtree__Set_3,
  MR_Word * mercury__set_bbbtree__List_4)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__Var_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T_6, mercury__set_bbbtree__Set_3, mercury__set_bbbtree__Var_5, mercury__set_bbbtree__List_4);
    }
  }
}

void MR_CALL 
mercury__set_bbbtree__to_sorted_list2_3_p_1(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_13,
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
  MR_Word * mercury__set_bbbtree__List_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__set_bbbtree__succeeded;

        if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__set_bbbtree__List_3 = mercury__set_bbbtree__HeadVar__2_2;
        else
          {
            MR_Box mercury__set_bbbtree__V_5 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
            MR_Word mercury__set_bbbtree__L_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
            MR_Word mercury__set_bbbtree__R_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
            MR_Word mercury__set_bbbtree__List0_11;
            MR_Word mercury__set_bbbtree__Var_12;
            MR_Integer mercury__set_bbbtree___N_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));

            {
              mercury__set_bbbtree__to_sorted_list2_3_p_1(mercury__set_bbbtree__TypeInfo_for_T_13, mercury__set_bbbtree__R_8, mercury__set_bbbtree__HeadVar__2_2, &mercury__set_bbbtree__List0_11);
            }
            {
              mercury__set_bbbtree__Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Var_12, 0) = mercury__set_bbbtree__V_5;
              MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Var_12, 1) = ((MR_Box) (mercury__set_bbbtree__List0_11));
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__set_bbbtree__next_value_of_HeadVar__1_1 = mercury__set_bbbtree__L_7;
              MR_Word mercury__set_bbbtree__next_value_of_HeadVar__2_2 = mercury__set_bbbtree__Var_12;

              mercury__set_bbbtree__HeadVar__2_2 = mercury__set_bbbtree__next_value_of_HeadVar__2_2;
              mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__set_bbbtree__to_sorted_list_2_p_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_6,
  MR_Word mercury__set_bbbtree__Set_3,
  MR_Word * mercury__set_bbbtree__List_4)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__Var_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__set_bbbtree__to_sorted_list2_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_6, mercury__set_bbbtree__Set_3, mercury__set_bbbtree__Var_5, mercury__set_bbbtree__List_4);
    }
  }
}

void MR_CALL 
mercury__set_bbbtree__to_sorted_list2_3_p_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_13,
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
  MR_Word * mercury__set_bbbtree__List_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__set_bbbtree__succeeded;

        if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__set_bbbtree__List_3 = mercury__set_bbbtree__HeadVar__2_2;
        else
          {
            MR_Box mercury__set_bbbtree__V_5 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
            MR_Word mercury__set_bbbtree__L_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
            MR_Word mercury__set_bbbtree__R_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
            MR_Word mercury__set_bbbtree__List0_11;
            MR_Word mercury__set_bbbtree__Var_12;
            MR_Integer mercury__set_bbbtree___N_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));

            {
              mercury__set_bbbtree__to_sorted_list2_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_13, mercury__set_bbbtree__R_8, mercury__set_bbbtree__HeadVar__2_2, &mercury__set_bbbtree__List0_11);
            }
            {
              mercury__set_bbbtree__Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Var_12, 0) = mercury__set_bbbtree__V_5;
              MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Var_12, 1) = ((MR_Box) (mercury__set_bbbtree__List0_11));
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__set_bbbtree__next_value_of_HeadVar__1_1 = mercury__set_bbbtree__L_7;
              MR_Word mercury__set_bbbtree__next_value_of_HeadVar__2_2 = mercury__set_bbbtree__Var_12;

              mercury__set_bbbtree__HeadVar__2_2 = mercury__set_bbbtree__next_value_of_HeadVar__2_2;
              mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

void MR_CALL 
mercury__set_bbbtree__sorted_list_to_set_len_3_p_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_14,
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
  MR_Word * mercury__set_bbbtree__HeadVar__2_2,
  MR_Integer mercury__set_bbbtree__HeadVar__3_3)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;

    if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__set_bbbtree__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word mercury__set_bbbtree__RestOfList_9;

        {
          mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__HeadVar__1_1, &mercury__set_bbbtree__RestOfList_9, mercury__set_bbbtree__HeadVar__3_3, mercury__set_bbbtree__HeadVar__2_2);
        }
        if ((mercury__set_bbbtree__RestOfList_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
          {
            {
              mercury__require__error_1_p_0((MR_String) "set_bbbtree.sorted_list_to_set_r");
              return;
            }
          }
      }
  }
}

MR_Word MR_CALL 
mercury__set_bbbtree__from_sorted_list_1_f_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_5,
  MR_Word mercury__set_bbbtree__List_3)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__Set_4;

    {
      mercury__set_bbbtree__sorted_list_to_set_2_p_0(mercury__set_bbbtree__TypeInfo_for_T_5, mercury__set_bbbtree__List_3, &mercury__set_bbbtree__Set_4);
    }
    return mercury__set_bbbtree__Set_4;
  }
}

MR_Word MR_CALL 
mercury__set_bbbtree__sorted_list_to_set_1_f_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_5,
  MR_Word mercury__set_bbbtree__Xs_3)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__S_4;

    {
      mercury__set_bbbtree__sorted_list_to_set_2_p_0(mercury__set_bbbtree__TypeInfo_for_T_5, mercury__set_bbbtree__Xs_3, &mercury__set_bbbtree__S_4);
    }
    return mercury__set_bbbtree__S_4;
  }
}

void MR_CALL 
mercury__set_bbbtree__sorted_list_to_set_2_p_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_6,
  MR_Word mercury__set_bbbtree__List_3,
  MR_Word * mercury__set_bbbtree__Set_4)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Integer mercury__set_bbbtree__N_5;

    {
      mercury__list__length_acc_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_6, mercury__set_bbbtree__List_3, (MR_Integer) 0, &mercury__set_bbbtree__N_5);
    }
    if ((mercury__set_bbbtree__List_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__set_bbbtree__Set_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word mercury__set_bbbtree__RestOfList_15;

        {
          mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__List_3, &mercury__set_bbbtree__RestOfList_15, mercury__set_bbbtree__N_5, mercury__set_bbbtree__Set_4);
        }
        if ((mercury__set_bbbtree__RestOfList_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
          }
        else
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
  MR_Word mercury__set_bbbtree__List_5,
  MR_Word * mercury__set_bbbtree__RestOfList_6,
  MR_Integer mercury__set_bbbtree__N_7,
  MR_Word * mercury__set_bbbtree__Set_8)
{
  {
    MR_bool mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__N_7 > (MR_Integer) 3);

    if (mercury__set_bbbtree__succeeded)
      {
        MR_Integer mercury__set_bbbtree__NL_9 = (mercury__set_bbbtree__N_7 / (MR_Integer) 2);
        MR_Integer mercury__set_bbbtree__NR_10;
        MR_Word mercury__set_bbbtree__RestOfList0_11;
        MR_Word mercury__set_bbbtree__L_12;
        MR_Integer mercury__set_bbbtree__Var_21 = (mercury__set_bbbtree__N_7 - mercury__set_bbbtree__NL_9);

        mercury__set_bbbtree__NR_10 = (mercury__set_bbbtree__Var_21 - (MR_Integer) 1);
        {
          mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__List_5, &mercury__set_bbbtree__RestOfList0_11, mercury__set_bbbtree__NL_9, &mercury__set_bbbtree__L_12);
        }
        if ((mercury__set_bbbtree__RestOfList0_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__error_1_p_0((MR_String) "set_bbbtree.sorted_list_to_set_len2.1");
              return;
            }
          }
        else
          {
            MR_Box mercury__set_bbbtree__V_13 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RestOfList0_11, (MR_Integer) 0));
            MR_Word mercury__set_bbbtree__RestOfList1_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RestOfList0_11, (MR_Integer) 1)));
            MR_Word mercury__set_bbbtree__R_15;

            {
              mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_111_114_116_101_100_95_108_105_115_116_95_116_111_95_115_101_116_95_108_101_110_50_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__RestOfList1_14, mercury__set_bbbtree__RestOfList_6, mercury__set_bbbtree__NR_10, &mercury__set_bbbtree__R_15);
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
              *mercury__set_bbbtree__Set_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = mercury__set_bbbtree__V_13;
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__set_bbbtree__N_7));
              MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__set_bbbtree__L_12));
              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__set_bbbtree__R_15));
            }
          }
      }
    else
      {
        mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__N_7 == (MR_Integer) 3);
        if (mercury__set_bbbtree__succeeded)
          {
            MR_Box mercury__set_bbbtree__X_16;
            MR_Box mercury__set_bbbtree__Y_17;
            MR_Box mercury__set_bbbtree__Z_18;
            MR_Word mercury__set_bbbtree__RestOfList0_45;
            MR_Word mercury__set_bbbtree__Var_24;
            MR_Word mercury__set_bbbtree__Var_25;

            mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__List_5)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__set_bbbtree__succeeded)
              {
                mercury__set_bbbtree__X_16 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__List_5, (MR_Integer) 0));
                mercury__set_bbbtree__Var_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__List_5, (MR_Integer) 1)));
                mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__Var_24)) == (MR_mktag((MR_Integer) 1)));
                if (mercury__set_bbbtree__succeeded)
                  {
                    mercury__set_bbbtree__Y_17 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Var_24, (MR_Integer) 0));
                    mercury__set_bbbtree__Var_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Var_24, (MR_Integer) 1)));
                    mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__Var_25)) == (MR_mktag((MR_Integer) 1)));
                    if (mercury__set_bbbtree__succeeded)
                      {
                        mercury__set_bbbtree__Z_18 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Var_25, (MR_Integer) 0));
                        mercury__set_bbbtree__RestOfList0_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Var_25, (MR_Integer) 1)));
                      }
                  }
              }
            if (mercury__set_bbbtree__succeeded)
              {
                MR_Word mercury__set_bbbtree__Var_26;
                MR_Word mercury__set_bbbtree__Var_28;
                MR_Word mercury__set_bbbtree__Var_29;
                MR_Word mercury__set_bbbtree__Var_30;
                MR_Word mercury__set_bbbtree__Var_32;
                MR_Word mercury__set_bbbtree__Var_33;

                *mercury__set_bbbtree__RestOfList_6 = mercury__set_bbbtree__RestOfList0_45;
                mercury__set_bbbtree__Var_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                mercury__set_bbbtree__Var_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                {
                  mercury__set_bbbtree__Var_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Var_26, 0) = mercury__set_bbbtree__X_16;
                  MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Var_26, 1) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Var_26, 2) = ((MR_Box) (mercury__set_bbbtree__Var_28));
                  MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Var_26, 3) = ((MR_Box) (mercury__set_bbbtree__Var_29));
                }
                mercury__set_bbbtree__Var_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                mercury__set_bbbtree__Var_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                {
                  mercury__set_bbbtree__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Var_30, 0) = mercury__set_bbbtree__Z_18;
                  MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Var_30, 1) = ((MR_Box) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Var_30, 2) = ((MR_Box) (mercury__set_bbbtree__Var_32));
                  MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Var_30, 3) = ((MR_Box) (mercury__set_bbbtree__Var_33));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__set_bbbtree__Set_8 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__set_bbbtree__Y_17;
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__set_bbbtree__N_7));
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__set_bbbtree__Var_26));
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__set_bbbtree__Var_30));
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
            mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__N_7 == (MR_Integer) 2);
            if (mercury__set_bbbtree__succeeded)
              {
                MR_Word mercury__set_bbbtree__RestOfList0_46;
                MR_Box mercury__set_bbbtree__X_47;
                MR_Box mercury__set_bbbtree__Y_48;
                MR_Word mercury__set_bbbtree__Var_35;

                mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__List_5)) == (MR_mktag((MR_Integer) 1)));
                if (mercury__set_bbbtree__succeeded)
                  {
                    mercury__set_bbbtree__X_47 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__List_5, (MR_Integer) 0));
                    mercury__set_bbbtree__Var_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__List_5, (MR_Integer) 1)));
                    mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__Var_35)) == (MR_mktag((MR_Integer) 1)));
                    if (mercury__set_bbbtree__succeeded)
                      {
                        mercury__set_bbbtree__Y_48 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Var_35, (MR_Integer) 0));
                        mercury__set_bbbtree__RestOfList0_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Var_35, (MR_Integer) 1)));
                      }
                  }
                if (mercury__set_bbbtree__succeeded)
                  {
                    MR_Word mercury__set_bbbtree__Var_36;
                    MR_Word mercury__set_bbbtree__Var_38;
                    MR_Word mercury__set_bbbtree__Var_39;
                    MR_Word mercury__set_bbbtree__Var_40;

                    *mercury__set_bbbtree__RestOfList_6 = mercury__set_bbbtree__RestOfList0_46;
                    mercury__set_bbbtree__Var_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    mercury__set_bbbtree__Var_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    {
                      mercury__set_bbbtree__Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Var_36, 0) = mercury__set_bbbtree__X_47;
                      MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Var_36, 1) = ((MR_Box) ((MR_Integer) 1));
                      MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Var_36, 2) = ((MR_Box) (mercury__set_bbbtree__Var_38));
                      MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Var_36, 3) = ((MR_Box) (mercury__set_bbbtree__Var_39));
                    }
                    mercury__set_bbbtree__Var_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                      *mercury__set_bbbtree__Set_8 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = mercury__set_bbbtree__Y_48;
                      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__set_bbbtree__N_7));
                      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__set_bbbtree__Var_36));
                      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__set_bbbtree__Var_40));
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
                mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__N_7 == (MR_Integer) 1);
                if (mercury__set_bbbtree__succeeded)
                  {
                    MR_Word mercury__set_bbbtree__RestOfList0_49;
                    MR_Box mercury__set_bbbtree__X_50;

                    mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__List_5)) == (MR_mktag((MR_Integer) 1)));
                    if (mercury__set_bbbtree__succeeded)
                      {
                        mercury__set_bbbtree__X_50 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__List_5, (MR_Integer) 0));
                        mercury__set_bbbtree__RestOfList0_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__List_5, (MR_Integer) 1)));
                        {
                          MR_Word mercury__set_bbbtree__Var_42;
                          MR_Word mercury__set_bbbtree__Var_43;

                          *mercury__set_bbbtree__RestOfList_6 = mercury__set_bbbtree__RestOfList0_49;
                          mercury__set_bbbtree__Var_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                          mercury__set_bbbtree__Var_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                          {
                            MR_Word base;
                            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                            *mercury__set_bbbtree__Set_8 = base;
                            MR_hl_field(MR_mktag(1), base, 0) = mercury__set_bbbtree__X_50;
                            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__set_bbbtree__N_7));
                            MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__set_bbbtree__Var_42));
                            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__set_bbbtree__Var_43));
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
                    *mercury__set_bbbtree__RestOfList_6 = mercury__set_bbbtree__List_5;
                    *mercury__set_bbbtree__Set_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  }
              }
          }
      }
  }
}

MR_Word MR_CALL 
mercury__set_bbbtree__from_list_1_f_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_5,
  MR_Word mercury__set_bbbtree__List_3)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__Set_4;
    MR_Word mercury__set_bbbtree__InitSet_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__set_bbbtree__insert_list_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_5, mercury__set_bbbtree__InitSet_12, mercury__set_bbbtree__List_3, &mercury__set_bbbtree__Set_4, (MR_Integer) 5);
    }
    return mercury__set_bbbtree__Set_4;
  }
}

MR_Word MR_CALL 
mercury__set_bbbtree__list_to_set_1_f_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_5,
  MR_Word mercury__set_bbbtree__Xs_3)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__S_4;
    MR_Word mercury__set_bbbtree__InitSet_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__set_bbbtree__insert_list_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_5, mercury__set_bbbtree__InitSet_12, mercury__set_bbbtree__Xs_3, &mercury__set_bbbtree__S_4, (MR_Integer) 5);
    }
    return mercury__set_bbbtree__S_4;
  }
}

void MR_CALL 
mercury__set_bbbtree__list_to_set_2_p_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_6,
  MR_Word mercury__set_bbbtree__List_3,
  MR_Word * mercury__set_bbbtree__Set_4)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__InitSet_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__set_bbbtree__insert_list_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_6, mercury__set_bbbtree__InitSet_10, mercury__set_bbbtree__List_3, mercury__set_bbbtree__Set_4, (MR_Integer) 5);
    }
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__remove_list_3_p_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_14,
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
  MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_0_2,
  MR_Word * mercury__set_bbbtree__STATE_VARIABLE_Set_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__set_bbbtree__succeeded;

        if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__set_bbbtree__STATE_VARIABLE_Set_3 = mercury__set_bbbtree__STATE_VARIABLE_Set_0_2;
            mercury__set_bbbtree__succeeded = MR_TRUE;
          }
        else
          {
            MR_Box mercury__set_bbbtree__X_7 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
            MR_Word mercury__set_bbbtree__Xs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_12_12;

            {
              mercury__set_bbbtree__succeeded = mercury__set_bbbtree__remove_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_14, mercury__set_bbbtree__X_7, mercury__set_bbbtree__STATE_VARIABLE_Set_0_2, &mercury__set_bbbtree__STATE_VARIABLE_Set_12_12);
            }
            if (mercury__set_bbbtree__succeeded)
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__set_bbbtree__next_value_of_HeadVar__1_1 = mercury__set_bbbtree__Xs_8;
                  MR_Word mercury__set_bbbtree__next_value_of_STATE_VARIABLE_Set_0_2 = mercury__set_bbbtree__STATE_VARIABLE_Set_12_12;

                  mercury__set_bbbtree__STATE_VARIABLE_Set_0_2 = mercury__set_bbbtree__next_value_of_STATE_VARIABLE_Set_0_2;
                  mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
        return mercury__set_bbbtree__succeeded;
      }
      break;
    }
}

MR_Word MR_CALL 
mercury__set_bbbtree__delete_list_2_f_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_9,
  MR_Word mercury__set_bbbtree__STATE_VARIABLE_S_0_6,
  MR_Word mercury__set_bbbtree__Xs_5)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__STATE_VARIABLE_S_7;

    {
      mercury__set_bbbtree__delete_list_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_9, mercury__set_bbbtree__Xs_5, mercury__set_bbbtree__STATE_VARIABLE_S_0_6, &mercury__set_bbbtree__STATE_VARIABLE_S_7);
    }
    return mercury__set_bbbtree__STATE_VARIABLE_S_7;
  }
}

void MR_CALL 
mercury__set_bbbtree__delete_list_3_p_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_14,
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
  MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_0_2,
  MR_Word * mercury__set_bbbtree__STATE_VARIABLE_Set_3)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__set_bbbtree__succeeded;

        if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__set_bbbtree__STATE_VARIABLE_Set_3 = mercury__set_bbbtree__STATE_VARIABLE_Set_0_2;
        else
          {
            MR_Box mercury__set_bbbtree__X_7 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
            MR_Word mercury__set_bbbtree__Xs_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_12_12;
            MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_9_20;
            MR_Word mercury__set_bbbtree__NewSet_19;

            {
              mercury__set_bbbtree__succeeded = mercury__set_bbbtree__remove_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_14, mercury__set_bbbtree__X_7, mercury__set_bbbtree__STATE_VARIABLE_Set_0_2, &mercury__set_bbbtree__NewSet_19);
            }
            if (mercury__set_bbbtree__succeeded)
              mercury__set_bbbtree__STATE_VARIABLE_Set_9_20 = mercury__set_bbbtree__NewSet_19;
            else
              mercury__set_bbbtree__STATE_VARIABLE_Set_9_20 = mercury__set_bbbtree__STATE_VARIABLE_Set_0_2;
            mercury__set_bbbtree__STATE_VARIABLE_Set_12_12 = mercury__set_bbbtree__STATE_VARIABLE_Set_9_20;
            /* direct tailcall eliminated */
            {
              MR_Word mercury__set_bbbtree__next_value_of_HeadVar__1_1 = mercury__set_bbbtree__Xs_8;
              MR_Word mercury__set_bbbtree__next_value_of_STATE_VARIABLE_Set_0_2 = mercury__set_bbbtree__STATE_VARIABLE_Set_12_12;

              mercury__set_bbbtree__STATE_VARIABLE_Set_0_2 = mercury__set_bbbtree__next_value_of_STATE_VARIABLE_Set_0_2;
              mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

MR_Word MR_CALL 
mercury__set_bbbtree__delete_2_f_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_9,
  MR_Word mercury__set_bbbtree__STATE_VARIABLE_S_0_6,
  MR_Box mercury__set_bbbtree__T_5)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__STATE_VARIABLE_S_7;
    MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_9_15;
    MR_Word mercury__set_bbbtree__NewSet_14;

    {
      mercury__set_bbbtree__succeeded = mercury__set_bbbtree__remove_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_9, mercury__set_bbbtree__T_5, mercury__set_bbbtree__STATE_VARIABLE_S_0_6, &mercury__set_bbbtree__NewSet_14);
    }
    if (mercury__set_bbbtree__succeeded)
      mercury__set_bbbtree__STATE_VARIABLE_Set_9_15 = mercury__set_bbbtree__NewSet_14;
    else
      mercury__set_bbbtree__STATE_VARIABLE_Set_9_15 = mercury__set_bbbtree__STATE_VARIABLE_S_0_6;
    mercury__set_bbbtree__STATE_VARIABLE_S_7 = mercury__set_bbbtree__STATE_VARIABLE_Set_9_15;
    return mercury__set_bbbtree__STATE_VARIABLE_S_7;
  }
}

void MR_CALL 
mercury__set_bbbtree__delete_3_p_1(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_11,
  MR_Box mercury__set_bbbtree__X_4,
  MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_0_7,
  MR_Word * mercury__set_bbbtree__STATE_VARIABLE_Set_8)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_9_9;
    MR_Word mercury__set_bbbtree__NewSet_6;

    {
      mercury__set_bbbtree__succeeded = mercury__set_bbbtree__remove_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_11, mercury__set_bbbtree__X_4, mercury__set_bbbtree__STATE_VARIABLE_Set_0_7, &mercury__set_bbbtree__NewSet_6);
    }
    if (mercury__set_bbbtree__succeeded)
      mercury__set_bbbtree__STATE_VARIABLE_Set_9_9 = mercury__set_bbbtree__NewSet_6;
    else
      mercury__set_bbbtree__STATE_VARIABLE_Set_9_9 = mercury__set_bbbtree__STATE_VARIABLE_Set_0_7;
    *mercury__set_bbbtree__STATE_VARIABLE_Set_8 = mercury__set_bbbtree__STATE_VARIABLE_Set_9_9;
  }
}

void MR_CALL 
mercury__set_bbbtree__delete_3_p_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_11,
  MR_Box mercury__set_bbbtree__X_4,
  MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_0_7,
  MR_Word * mercury__set_bbbtree__STATE_VARIABLE_Set_8)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_9_9;
    MR_Word mercury__set_bbbtree__NewSet_6;

    {
      mercury__set_bbbtree__succeeded = mercury__set_bbbtree__remove_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_11, mercury__set_bbbtree__X_4, mercury__set_bbbtree__STATE_VARIABLE_Set_0_7, &mercury__set_bbbtree__NewSet_6);
    }
    if (mercury__set_bbbtree__succeeded)
      mercury__set_bbbtree__STATE_VARIABLE_Set_9_9 = mercury__set_bbbtree__NewSet_6;
    else
      mercury__set_bbbtree__STATE_VARIABLE_Set_9_9 = mercury__set_bbbtree__STATE_VARIABLE_Set_0_7;
    *mercury__set_bbbtree__STATE_VARIABLE_Set_8 = mercury__set_bbbtree__STATE_VARIABLE_Set_9_9;
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__remove_3_p_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_17,
  MR_Box mercury__set_bbbtree__X_4,
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
  MR_Word * mercury__set_bbbtree__Set_9)
{
  {
    MR_bool mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
    MR_Box mercury__set_bbbtree__V_5;
    MR_Integer mercury__set_bbbtree__N_6;
    MR_Word mercury__set_bbbtree__L_7;
    MR_Word mercury__set_bbbtree__R_8;
    MR_Word mercury__set_bbbtree__Result_10;

    if (mercury__set_bbbtree__succeeded)
      {
        mercury__set_bbbtree__V_5 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 0));
        mercury__set_bbbtree__N_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 1)));
        mercury__set_bbbtree__L_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 2)));
        mercury__set_bbbtree__R_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 3)));
        {
          mercury__builtin__compare_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_17, &mercury__set_bbbtree__Result_10, mercury__set_bbbtree__X_4, mercury__set_bbbtree__V_5);
        }
        switch (mercury__set_bbbtree__Result_10) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word mercury__set_bbbtree__NewL_11;
              MR_Integer mercury__set_bbbtree__NewN_12;
              MR_Integer mercury__set_bbbtree__Var_15;

              {
                mercury__set_bbbtree__succeeded = mercury__set_bbbtree__remove_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_17, mercury__set_bbbtree__X_4, mercury__set_bbbtree__L_7, &mercury__set_bbbtree__NewL_11);
              }
              if (mercury__set_bbbtree__succeeded)
                {
                  mercury__set_bbbtree__Var_15 = (MR_Integer) 1;
                  mercury__set_bbbtree__NewN_12 = (mercury__set_bbbtree__N_6 - mercury__set_bbbtree__Var_15);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    *mercury__set_bbbtree__Set_9 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = mercury__set_bbbtree__V_5;
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__set_bbbtree__NewN_12));
                    MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__set_bbbtree__NewL_11));
                    MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__set_bbbtree__R_8));
                  }
                  mercury__set_bbbtree__succeeded = MR_TRUE;
                }
            }
            break;
          case (MR_Integer) 0:
            {
              MR_Integer mercury__set_bbbtree__LSize_21;

              if ((mercury__set_bbbtree__L_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                mercury__set_bbbtree__LSize_21 = (MR_Integer) 0;
              else
                {
                  MR_Box mercury__set_bbbtree___V_29 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_7, (MR_Integer) 0));
                  MR_Word mercury__set_bbbtree___L_31;
                  MR_Word mercury__set_bbbtree___R_32;

                  mercury__set_bbbtree__LSize_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_7, (MR_Integer) 1)));
                  mercury__set_bbbtree___L_31 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_7, (MR_Integer) 2)));
                  mercury__set_bbbtree___R_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_7, (MR_Integer) 3)));
                }
              mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__LSize_21 == (MR_Integer) 0);
              if (mercury__set_bbbtree__succeeded)
                *mercury__set_bbbtree__Set_9 = mercury__set_bbbtree__R_8;
              else
                {
                  MR_Integer mercury__set_bbbtree__RSize_22;

                  if ((mercury__set_bbbtree__R_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    mercury__set_bbbtree__RSize_22 = (MR_Integer) 0;
                  else
                    {
                      MR_Box mercury__set_bbbtree___V_33 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 0));
                      MR_Word mercury__set_bbbtree___L_35;
                      MR_Word mercury__set_bbbtree___R_36;

                      mercury__set_bbbtree__RSize_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 1)));
                      mercury__set_bbbtree___L_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 2)));
                      mercury__set_bbbtree___R_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 3)));
                    }
                  mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__RSize_22 == (MR_Integer) 0);
                  if (mercury__set_bbbtree__succeeded)
                    *mercury__set_bbbtree__Set_9 = mercury__set_bbbtree__L_7;
                  else
                    {
                      mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__LSize_21 > mercury__set_bbbtree__RSize_22);
                      if (mercury__set_bbbtree__succeeded)
                        {
                          MR_Box mercury__set_bbbtree__X_23;
                          MR_Word mercury__set_bbbtree__NewL_24;

                          {
                            mercury__set_bbbtree__succeeded = mercury__set_bbbtree__remove_largest_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_17, &mercury__set_bbbtree__X_23, mercury__set_bbbtree__L_7, &mercury__set_bbbtree__NewL_24);
                          }
                          if (mercury__set_bbbtree__succeeded)
                            {
                              mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__X_23, mercury__set_bbbtree__NewL_24, mercury__set_bbbtree__R_8, mercury__set_bbbtree__Set_9);
                            }
                          else
                            {
                              {
                                mercury__require__error_1_p_0((MR_String) "set_bbbtree.concat3.1");
                              }
                            }
                        }
                      else
                        {
                          MR_Word mercury__set_bbbtree__NewR_25;
                          MR_Box mercury__set_bbbtree__X_28;

                          {
                            mercury__set_bbbtree__succeeded = mercury__set_bbbtree__remove_least_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_17, &mercury__set_bbbtree__X_28, mercury__set_bbbtree__R_8, &mercury__set_bbbtree__NewR_25);
                          }
                          if (mercury__set_bbbtree__succeeded)
                            {
                              mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__X_28, mercury__set_bbbtree__L_7, mercury__set_bbbtree__NewR_25, mercury__set_bbbtree__Set_9);
                            }
                          else
                            {
                              {
                                mercury__require__error_1_p_0((MR_String) "set_bbbtree.concat3.2");
                              }
                            }
                        }
                    }
                }
              mercury__set_bbbtree__succeeded = MR_TRUE;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__set_bbbtree__NewR_13;
              MR_Integer mercury__set_bbbtree__Var_14;
              MR_Integer mercury__set_bbbtree__NewN_16;

              {
                mercury__set_bbbtree__succeeded = mercury__set_bbbtree__remove_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_17, mercury__set_bbbtree__X_4, mercury__set_bbbtree__R_8, &mercury__set_bbbtree__NewR_13);
              }
              if (mercury__set_bbbtree__succeeded)
                {
                  mercury__set_bbbtree__Var_14 = (MR_Integer) 1;
                  mercury__set_bbbtree__NewN_16 = (mercury__set_bbbtree__N_6 - mercury__set_bbbtree__Var_14);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                    *mercury__set_bbbtree__Set_9 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = mercury__set_bbbtree__V_5;
                    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__set_bbbtree__NewN_16));
                    MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__set_bbbtree__L_7));
                    MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__set_bbbtree__NewR_13));
                  }
                  mercury__set_bbbtree__succeeded = MR_TRUE;
                }
            }
            break;
        }
      }
    return mercury__set_bbbtree__succeeded;
  }
}

MR_Word MR_CALL 
mercury__set_bbbtree__insert_list_2_f_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_9,
  MR_Word mercury__set_bbbtree__STATE_VARIABLE_S_0_6,
  MR_Word mercury__set_bbbtree__Xs_5)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__STATE_VARIABLE_S_7;

    {
      mercury__set_bbbtree__insert_list_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_9, mercury__set_bbbtree__STATE_VARIABLE_S_0_6, mercury__set_bbbtree__Xs_5, &mercury__set_bbbtree__STATE_VARIABLE_S_7, (MR_Integer) 5);
    }
    return mercury__set_bbbtree__STATE_VARIABLE_S_7;
  }
}

void MR_CALL 
mercury__set_bbbtree__insert_list_3_p_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_10,
  MR_Word mercury__set_bbbtree__List_4,
  MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_0_7,
  MR_Word * mercury__set_bbbtree__STATE_VARIABLE_Set_8)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;

    {
      mercury__set_bbbtree__insert_list_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_10, mercury__set_bbbtree__STATE_VARIABLE_Set_0_7, mercury__set_bbbtree__List_4, mercury__set_bbbtree__STATE_VARIABLE_Set_8, (MR_Integer) 5);
    }
  }
}

void MR_CALL 
mercury__set_bbbtree__insert_list_r_4_p_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_15,
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
  MR_Word * mercury__set_bbbtree__HeadVar__3_3,
  MR_Integer mercury__set_bbbtree__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__set_bbbtree__succeeded;

        if ((mercury__set_bbbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__set_bbbtree__HeadVar__3_3 = mercury__set_bbbtree__HeadVar__1_1;
        else
          {
            MR_Box mercury__set_bbbtree__X_8 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 0));
            MR_Word mercury__set_bbbtree__Xs_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_13_13;

            {
              mercury__set_bbbtree__insert_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_15, mercury__set_bbbtree__HeadVar__1_1, mercury__set_bbbtree__X_8, &mercury__set_bbbtree__STATE_VARIABLE_Set_13_13, mercury__set_bbbtree__HeadVar__4_4);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__set_bbbtree__next_value_of_HeadVar__1_1 = mercury__set_bbbtree__STATE_VARIABLE_Set_13_13;
              MR_Word mercury__set_bbbtree__next_value_of_HeadVar__2_2 = mercury__set_bbbtree__Xs_9;

              mercury__set_bbbtree__HeadVar__2_2 = mercury__set_bbbtree__next_value_of_HeadVar__2_2;
              mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__next_value_of_HeadVar__1_1;
            }
            continue;
          }
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__set_bbbtree__insert_new_3_p_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_10,
  MR_Box mercury__set_bbbtree__X_4,
  MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_0_7,
  MR_Word * mercury__set_bbbtree__STATE_VARIABLE_Set_8)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;

    {
      mercury__set_bbbtree__succeeded = mercury__set_bbbtree__insert_new_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_10, mercury__set_bbbtree__STATE_VARIABLE_Set_0_7, mercury__set_bbbtree__X_4, mercury__set_bbbtree__STATE_VARIABLE_Set_8, (MR_Integer) 5);
    }
    return mercury__set_bbbtree__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__insert_new_r_4_p_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_20,
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
  MR_Box mercury__set_bbbtree__X_2,
  MR_Word * mercury__set_bbbtree__HeadVar__3_3,
  MR_Integer mercury__set_bbbtree__HeadVar__4_4)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;

    if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word mercury__set_bbbtree__Var_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        MR_Word mercury__set_bbbtree__Var_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          *mercury__set_bbbtree__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = mercury__set_bbbtree__X_2;
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__set_bbbtree__Var_8));
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__set_bbbtree__Var_9));
        }
        mercury__set_bbbtree__succeeded = MR_TRUE;
      }
    else
      {
        MR_Box mercury__set_bbbtree__V_10 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
        MR_Word mercury__set_bbbtree__L_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word mercury__set_bbbtree__R_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word mercury__set_bbbtree__Result_17;
        MR_Integer mercury__set_bbbtree___N_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));

        {
          mercury__builtin__compare_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_20, &mercury__set_bbbtree__Result_17, mercury__set_bbbtree__X_2, mercury__set_bbbtree__V_10);
        }
        switch (mercury__set_bbbtree__Result_17) {
          default:
            mercury__set_bbbtree__succeeded = MR_FALSE;
            break;
          case (MR_Integer) 1:
            {
              MR_Word mercury__set_bbbtree__NewL_18;

              {
                mercury__set_bbbtree__succeeded = mercury__set_bbbtree__insert_new_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_20, mercury__set_bbbtree__L_12, mercury__set_bbbtree__X_2, &mercury__set_bbbtree__NewL_18, mercury__set_bbbtree__HeadVar__4_4);
              }
              if (mercury__set_bbbtree__succeeded)
                {
                  {
                    mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_p_0(mercury__set_bbbtree__V_10, mercury__set_bbbtree__NewL_18, mercury__set_bbbtree__R_13, mercury__set_bbbtree__HeadVar__3_3, mercury__set_bbbtree__HeadVar__4_4);
                  }
                  mercury__set_bbbtree__succeeded = MR_TRUE;
                }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__set_bbbtree__NewR_19;

              {
                mercury__set_bbbtree__succeeded = mercury__set_bbbtree__insert_new_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_20, mercury__set_bbbtree__R_13, mercury__set_bbbtree__X_2, &mercury__set_bbbtree__NewR_19, mercury__set_bbbtree__HeadVar__4_4);
              }
              if (mercury__set_bbbtree__succeeded)
                {
                  {
                    mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_p_0(mercury__set_bbbtree__V_10, mercury__set_bbbtree__L_12, mercury__set_bbbtree__NewR_19, mercury__set_bbbtree__HeadVar__3_3, mercury__set_bbbtree__HeadVar__4_4);
                  }
                  mercury__set_bbbtree__succeeded = MR_TRUE;
                }
            }
            break;
        }
      }
    return mercury__set_bbbtree__succeeded;
  }
}

MR_Word MR_CALL 
mercury__set_bbbtree__insert_2_f_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_9,
  MR_Word mercury__set_bbbtree__STATE_VARIABLE_S_0_6,
  MR_Box mercury__set_bbbtree__T_5)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__STATE_VARIABLE_S_7;
    MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_9_15;

    {
      mercury__set_bbbtree__insert_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_9, mercury__set_bbbtree__STATE_VARIABLE_S_0_6, mercury__set_bbbtree__T_5, &mercury__set_bbbtree__STATE_VARIABLE_Set_9_15, (MR_Integer) 5);
    }
    mercury__set_bbbtree__STATE_VARIABLE_S_7 = mercury__set_bbbtree__STATE_VARIABLE_Set_9_15;
    return mercury__set_bbbtree__STATE_VARIABLE_S_7;
  }
}

void MR_CALL 
mercury__set_bbbtree__insert_3_p_1(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_11,
  MR_Box mercury__set_bbbtree__X_4,
  MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_0_7,
  MR_Word * mercury__set_bbbtree__STATE_VARIABLE_Set_8)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_9_9;

    {
      mercury__set_bbbtree__insert_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_11, mercury__set_bbbtree__STATE_VARIABLE_Set_0_7, mercury__set_bbbtree__X_4, &mercury__set_bbbtree__STATE_VARIABLE_Set_9_9, (MR_Integer) 5);
    }
    *mercury__set_bbbtree__STATE_VARIABLE_Set_8 = mercury__set_bbbtree__STATE_VARIABLE_Set_9_9;
  }
}

void MR_CALL 
mercury__set_bbbtree__insert_3_p_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_11,
  MR_Box mercury__set_bbbtree__X_4,
  MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_0_7,
  MR_Word * mercury__set_bbbtree__STATE_VARIABLE_Set_8)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__STATE_VARIABLE_Set_9_9;

    {
      mercury__set_bbbtree__insert_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_11, mercury__set_bbbtree__STATE_VARIABLE_Set_0_7, mercury__set_bbbtree__X_4, &mercury__set_bbbtree__STATE_VARIABLE_Set_9_9, (MR_Integer) 5);
    }
    *mercury__set_bbbtree__STATE_VARIABLE_Set_8 = mercury__set_bbbtree__STATE_VARIABLE_Set_9_9;
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__equal_2_p_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_5,
  MR_Word mercury__set_bbbtree__SetA_3,
  MR_Word mercury__set_bbbtree__SetB_4)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__Set_8;
    MR_Word mercury__set_bbbtree__Set_15;
    MR_Integer mercury__set_bbbtree__Ratio_19;

    {
      mercury__set_bbbtree__difference_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_5, mercury__set_bbbtree__SetA_3, mercury__set_bbbtree__SetB_4, &mercury__set_bbbtree__Set_8, (MR_Integer) 5);
    }
    mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__Set_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (mercury__set_bbbtree__succeeded)
      {
        mercury__set_bbbtree__Ratio_19 = (MR_Integer) 5;
        {
          mercury__set_bbbtree__difference_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_5, mercury__set_bbbtree__SetB_4, mercury__set_bbbtree__SetA_3, &mercury__set_bbbtree__Set_15, mercury__set_bbbtree__Ratio_19);
        }
        mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__Set_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      }
    return mercury__set_bbbtree__succeeded;
  }
}

void MR_CALL 
mercury__set_bbbtree__difference_r_4_p_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_18,
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
  MR_Word * mercury__set_bbbtree__HeadVar__3_3,
  MR_Integer mercury__set_bbbtree__HeadVar__4_4)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;

    if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__set_bbbtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Box mercury__set_bbbtree__V_7 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
        MR_Word mercury__set_bbbtree__LL_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word mercury__set_bbbtree__LR_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word mercury__set_bbbtree__NewRL_14;
        MR_Word mercury__set_bbbtree__NewRR_15;
        MR_Word mercury__set_bbbtree__LSet_16;
        MR_Word mercury__set_bbbtree__RSet_17;
        MR_Integer mercury__set_bbbtree___N_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));

        {
          mercury__set_bbbtree__split_lt_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__HeadVar__2_2, mercury__set_bbbtree__V_7, &mercury__set_bbbtree__NewRL_14, mercury__set_bbbtree__HeadVar__4_4);
        }
        {
          mercury__set_bbbtree__split_gt_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__HeadVar__2_2, mercury__set_bbbtree__V_7, &mercury__set_bbbtree__NewRR_15, mercury__set_bbbtree__HeadVar__4_4);
        }
        {
          mercury__set_bbbtree__difference_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__LL_9, mercury__set_bbbtree__NewRL_14, &mercury__set_bbbtree__LSet_16, mercury__set_bbbtree__HeadVar__4_4);
        }
        {
          mercury__set_bbbtree__difference_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__LR_10, mercury__set_bbbtree__NewRR_15, &mercury__set_bbbtree__RSet_17, mercury__set_bbbtree__HeadVar__4_4);
        }
        {
          mercury__set_bbbtree__succeeded = mercury__set_bbbtree__member_2_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__V_7, mercury__set_bbbtree__HeadVar__2_2);
        }
        if (mercury__set_bbbtree__succeeded)
          {
            MR_Integer mercury__set_bbbtree__LSize_22;

            if ((mercury__set_bbbtree__LSet_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              mercury__set_bbbtree__LSize_22 = (MR_Integer) 0;
            else
              {
                MR_Box mercury__set_bbbtree___V_30 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LSet_16, (MR_Integer) 0));
                MR_Word mercury__set_bbbtree___L_32;
                MR_Word mercury__set_bbbtree___R_33;

                mercury__set_bbbtree__LSize_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LSet_16, (MR_Integer) 1)));
                mercury__set_bbbtree___L_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LSet_16, (MR_Integer) 2)));
                mercury__set_bbbtree___R_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LSet_16, (MR_Integer) 3)));
              }
            mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__LSize_22 == (MR_Integer) 0);
            if (mercury__set_bbbtree__succeeded)
              *mercury__set_bbbtree__HeadVar__3_3 = mercury__set_bbbtree__RSet_17;
            else
              {
                MR_Integer mercury__set_bbbtree__RSize_23;

                if ((mercury__set_bbbtree__RSet_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  mercury__set_bbbtree__RSize_23 = (MR_Integer) 0;
                else
                  {
                    MR_Box mercury__set_bbbtree___V_34 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RSet_17, (MR_Integer) 0));
                    MR_Word mercury__set_bbbtree___L_36;
                    MR_Word mercury__set_bbbtree___R_37;

                    mercury__set_bbbtree__RSize_23 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RSet_17, (MR_Integer) 1)));
                    mercury__set_bbbtree___L_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RSet_17, (MR_Integer) 2)));
                    mercury__set_bbbtree___R_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RSet_17, (MR_Integer) 3)));
                  }
                mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__RSize_23 == (MR_Integer) 0);
                if (mercury__set_bbbtree__succeeded)
                  *mercury__set_bbbtree__HeadVar__3_3 = mercury__set_bbbtree__LSet_16;
                else
                  {
                    mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__LSize_22 > mercury__set_bbbtree__RSize_23);
                    if (mercury__set_bbbtree__succeeded)
                      {
                        MR_Box mercury__set_bbbtree__X_24;
                        MR_Word mercury__set_bbbtree__NewL_25;

                        {
                          mercury__set_bbbtree__succeeded = mercury__set_bbbtree__remove_largest_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, &mercury__set_bbbtree__X_24, mercury__set_bbbtree__LSet_16, &mercury__set_bbbtree__NewL_25);
                        }
                        if (mercury__set_bbbtree__succeeded)
                          {
                            mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__X_24, mercury__set_bbbtree__NewL_25, mercury__set_bbbtree__RSet_17, mercury__set_bbbtree__HeadVar__3_3);
                          }
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
                        MR_Word mercury__set_bbbtree__NewR_26;
                        MR_Box mercury__set_bbbtree__X_29;

                        {
                          mercury__set_bbbtree__succeeded = mercury__set_bbbtree__remove_least_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, &mercury__set_bbbtree__X_29, mercury__set_bbbtree__RSet_17, &mercury__set_bbbtree__NewR_26);
                        }
                        if (mercury__set_bbbtree__succeeded)
                          {
                            mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__X_29, mercury__set_bbbtree__LSet_16, mercury__set_bbbtree__NewR_26, mercury__set_bbbtree__HeadVar__3_3);
                          }
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
          {
            mercury__set_bbbtree__concat4_5_p_0(mercury__set_bbbtree__TypeInfo_for_T_18, mercury__set_bbbtree__LSet_16, mercury__set_bbbtree__RSet_17, mercury__set_bbbtree__V_7, mercury__set_bbbtree__HeadVar__3_3, mercury__set_bbbtree__HeadVar__4_4);
          }
      }
  }
}

static void MR_CALL 
mercury__set_bbbtree__split_gt_4_p_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_16,
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
  MR_Box mercury__set_bbbtree__HeadVar__2_2,
  MR_Word * mercury__set_bbbtree__HeadVar__3_3,
  MR_Integer mercury__set_bbbtree__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__set_bbbtree__succeeded;

        if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__set_bbbtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Box mercury__set_bbbtree__V_7 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
            MR_Word mercury__set_bbbtree__L_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
            MR_Word mercury__set_bbbtree__R_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
            MR_Word mercury__set_bbbtree__Result_14;
            MR_Integer mercury__set_bbbtree___N_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));

            {
              mercury__builtin__compare_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_16, &mercury__set_bbbtree__Result_14, mercury__set_bbbtree__HeadVar__2_2, mercury__set_bbbtree__V_7);
            }
            switch (mercury__set_bbbtree__Result_14) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  MR_Word mercury__set_bbbtree__Set0_15;

                  {
                    mercury__set_bbbtree__split_gt_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_16, mercury__set_bbbtree__L_9, mercury__set_bbbtree__HeadVar__2_2, &mercury__set_bbbtree__Set0_15, mercury__set_bbbtree__HeadVar__4_4);
                  }
                  {
                    mercury__set_bbbtree__concat4_5_p_0(mercury__set_bbbtree__TypeInfo_for_T_16, mercury__set_bbbtree__Set0_15, mercury__set_bbbtree__R_10, mercury__set_bbbtree__V_7, mercury__set_bbbtree__HeadVar__3_3, mercury__set_bbbtree__HeadVar__4_4);
                  }
                }
                break;
              case (MR_Integer) 0:
                *mercury__set_bbbtree__HeadVar__3_3 = mercury__set_bbbtree__R_10;
                break;
              case (MR_Integer) 2:
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__set_bbbtree__next_value_of_HeadVar__1_1 = mercury__set_bbbtree__R_10;

                    mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__next_value_of_HeadVar__1_1;
                  }
                  continue;
                }
                break;
            }
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__set_bbbtree__split_lt_4_p_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_16,
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
  MR_Box mercury__set_bbbtree__HeadVar__2_2,
  MR_Word * mercury__set_bbbtree__HeadVar__3_3,
  MR_Integer mercury__set_bbbtree__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__set_bbbtree__succeeded;

        if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__set_bbbtree__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        else
          {
            MR_Box mercury__set_bbbtree__V_7 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
            MR_Word mercury__set_bbbtree__L_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
            MR_Word mercury__set_bbbtree__R_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
            MR_Word mercury__set_bbbtree__Result_14;
            MR_Integer mercury__set_bbbtree___N_8 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));

            {
              mercury__builtin__compare_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_16, &mercury__set_bbbtree__Result_14, mercury__set_bbbtree__HeadVar__2_2, mercury__set_bbbtree__V_7);
            }
            switch (mercury__set_bbbtree__Result_14) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__set_bbbtree__next_value_of_HeadVar__1_1 = mercury__set_bbbtree__L_9;

                    mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__next_value_of_HeadVar__1_1;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 0:
                *mercury__set_bbbtree__HeadVar__3_3 = mercury__set_bbbtree__L_9;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word mercury__set_bbbtree__Set0_15;

                  {
                    mercury__set_bbbtree__split_lt_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_16, mercury__set_bbbtree__R_10, mercury__set_bbbtree__HeadVar__2_2, &mercury__set_bbbtree__Set0_15, mercury__set_bbbtree__HeadVar__4_4);
                  }
                  {
                    mercury__set_bbbtree__concat4_5_p_0(mercury__set_bbbtree__TypeInfo_for_T_16, mercury__set_bbbtree__L_9, mercury__set_bbbtree__Set0_15, mercury__set_bbbtree__V_7, mercury__set_bbbtree__HeadVar__3_3, mercury__set_bbbtree__HeadVar__4_4);
                  }
                }
                break;
            }
          }
      }
      break;
    }
}

static void MR_CALL 
mercury__set_bbbtree__concat4_5_p_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_31,
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
  MR_Word mercury__set_bbbtree__R_2,
  MR_Box mercury__set_bbbtree__V_3,
  MR_Word * mercury__set_bbbtree__Set_4,
  MR_Integer mercury__set_bbbtree__Ratio_5)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;

    if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        mercury__set_bbbtree__insert_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_31, mercury__set_bbbtree__R_2, mercury__set_bbbtree__V_3, mercury__set_bbbtree__Set_4, mercury__set_bbbtree__Ratio_5);
      }
    else
      {
        MR_Box mercury__set_bbbtree__LV_10 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
        MR_Integer mercury__set_bbbtree__LN_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__set_bbbtree__LL_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word mercury__set_bbbtree__LR_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));

        if ((mercury__set_bbbtree__R_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            mercury__set_bbbtree__insert_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_31, mercury__set_bbbtree__HeadVar__1_1, mercury__set_bbbtree__V_3, mercury__set_bbbtree__Set_4, mercury__set_bbbtree__Ratio_5);
          }
        else
          {
            MR_Box mercury__set_bbbtree__RV_18 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_2, (MR_Integer) 0));
            MR_Integer mercury__set_bbbtree__RN_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_2, (MR_Integer) 1)));
            MR_Word mercury__set_bbbtree__RL_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_2, (MR_Integer) 2)));
            MR_Word mercury__set_bbbtree__RR_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_2, (MR_Integer) 3)));
            MR_Integer mercury__set_bbbtree__Val_22 = (mercury__set_bbbtree__Ratio_5 * mercury__set_bbbtree__LN_11);

            mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__Val_22 < mercury__set_bbbtree__RN_19);
            if (mercury__set_bbbtree__succeeded)
              {
                MR_Word mercury__set_bbbtree__NewL_23;

                {
                  mercury__set_bbbtree__concat4_5_p_0(mercury__set_bbbtree__TypeInfo_for_T_31, mercury__set_bbbtree__HeadVar__1_1, mercury__set_bbbtree__RL_20, mercury__set_bbbtree__V_3, &mercury__set_bbbtree__NewL_23, mercury__set_bbbtree__Ratio_5);
                }
                {
                  mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_p_0(mercury__set_bbbtree__RV_18, mercury__set_bbbtree__NewL_23, mercury__set_bbbtree__RR_21, mercury__set_bbbtree__Set_4, mercury__set_bbbtree__Ratio_5);
                }
              }
            else
              {
                MR_Integer mercury__set_bbbtree__Val_29 = (mercury__set_bbbtree__Ratio_5 * mercury__set_bbbtree__RN_19);

                mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__Val_29 < mercury__set_bbbtree__LN_11);
                if (mercury__set_bbbtree__succeeded)
                  {
                    MR_Word mercury__set_bbbtree__NewR_24;

                    {
                      mercury__set_bbbtree__concat4_5_p_0(mercury__set_bbbtree__TypeInfo_for_T_31, mercury__set_bbbtree__LR_13, mercury__set_bbbtree__R_2, mercury__set_bbbtree__V_3, &mercury__set_bbbtree__NewR_24, mercury__set_bbbtree__Ratio_5);
                    }
                    {
                      mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_p_0(mercury__set_bbbtree__LV_10, mercury__set_bbbtree__LL_12, mercury__set_bbbtree__NewR_24, mercury__set_bbbtree__Set_4, mercury__set_bbbtree__Ratio_5);
                    }
                  }
                else
                  {
                    mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__V_3, mercury__set_bbbtree__HeadVar__1_1, mercury__set_bbbtree__R_2, mercury__set_bbbtree__Set_4);
                  }
              }
          }
      }
  }
}

void MR_CALL 
mercury__set_bbbtree__insert_r_4_p_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_20,
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
  MR_Box mercury__set_bbbtree__X_2,
  MR_Word * mercury__set_bbbtree__HeadVar__3_3,
  MR_Integer mercury__set_bbbtree__HeadVar__4_4)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;

    if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word mercury__set_bbbtree__Var_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        MR_Word mercury__set_bbbtree__Var_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
          *mercury__set_bbbtree__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = mercury__set_bbbtree__X_2;
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__set_bbbtree__Var_8));
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__set_bbbtree__Var_9));
        }
      }
    else
      {
        MR_Box mercury__set_bbbtree__V_10 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
        MR_Word mercury__set_bbbtree__L_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
        MR_Word mercury__set_bbbtree__R_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
        MR_Word mercury__set_bbbtree__Result_17;
        MR_Integer mercury__set_bbbtree__N_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));

        {
          mercury__builtin__compare_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_20, &mercury__set_bbbtree__Result_17, mercury__set_bbbtree__X_2, mercury__set_bbbtree__V_10);
        }
        switch (mercury__set_bbbtree__Result_17) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 1:
            {
              MR_Word mercury__set_bbbtree__NewL_18;

              {
                mercury__set_bbbtree__insert_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_20, mercury__set_bbbtree__L_12, mercury__set_bbbtree__X_2, &mercury__set_bbbtree__NewL_18, mercury__set_bbbtree__HeadVar__4_4);
              }
              {
                mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_p_0(mercury__set_bbbtree__V_10, mercury__set_bbbtree__NewL_18, mercury__set_bbbtree__R_13, mercury__set_bbbtree__HeadVar__3_3, mercury__set_bbbtree__HeadVar__4_4);
              }
            }
            break;
          case (MR_Integer) 0:
            *mercury__set_bbbtree__HeadVar__3_3 = mercury__set_bbbtree__HeadVar__1_1;
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__set_bbbtree__NewR_19;

              {
                mercury__set_bbbtree__insert_r_4_p_0(mercury__set_bbbtree__TypeInfo_for_T_20, mercury__set_bbbtree__R_13, mercury__set_bbbtree__X_2, &mercury__set_bbbtree__NewR_19, mercury__set_bbbtree__HeadVar__4_4);
              }
              {
                mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_p_0(mercury__set_bbbtree__V_10, mercury__set_bbbtree__L_12, mercury__set_bbbtree__NewR_19, mercury__set_bbbtree__HeadVar__3_3, mercury__set_bbbtree__HeadVar__4_4);
              }
            }
            break;
        }
      }
  }
}

static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_97_108_97_110_99_101_95_95_91_49_93_95_48_5_p_0(
  MR_Box mercury__set_bbbtree__V_6,
  MR_Word mercury__set_bbbtree__L_7,
  MR_Word mercury__set_bbbtree__R_8,
  MR_Word * mercury__set_bbbtree__Set_9,
  MR_Integer mercury__set_bbbtree__Ratio_10)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Integer mercury__set_bbbtree__LSize_11;
    MR_Integer mercury__set_bbbtree__RSize_12;
    MR_Integer mercury__set_bbbtree__Val_13;

    if ((mercury__set_bbbtree__L_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__set_bbbtree__LSize_11 = (MR_Integer) 0;
    else
      {
        MR_Box mercury__set_bbbtree___V_34 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_7, (MR_Integer) 0));
        MR_Word mercury__set_bbbtree___L_36;
        MR_Word mercury__set_bbbtree___R_37;

        mercury__set_bbbtree__LSize_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_7, (MR_Integer) 1)));
        mercury__set_bbbtree___L_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_7, (MR_Integer) 2)));
        mercury__set_bbbtree___R_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_7, (MR_Integer) 3)));
      }
    if ((mercury__set_bbbtree__R_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__set_bbbtree__RSize_12 = (MR_Integer) 0;
    else
      {
        MR_Box mercury__set_bbbtree___V_38 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 0));
        MR_Word mercury__set_bbbtree___L_40;
        MR_Word mercury__set_bbbtree___R_41;

        mercury__set_bbbtree__RSize_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 1)));
        mercury__set_bbbtree___L_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 2)));
        mercury__set_bbbtree___R_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 3)));
      }
    mercury__set_bbbtree__Val_13 = (mercury__set_bbbtree__LSize_11 + mercury__set_bbbtree__RSize_12);
    mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__Val_13 < (MR_Integer) 2);
    if (mercury__set_bbbtree__succeeded)
      {
        mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__V_6, mercury__set_bbbtree__L_7, mercury__set_bbbtree__R_8, mercury__set_bbbtree__Set_9);
      }
    else
      {
        MR_Integer mercury__set_bbbtree__Val_29 = (mercury__set_bbbtree__Ratio_10 * mercury__set_bbbtree__LSize_11);

        mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__RSize_12 > mercury__set_bbbtree__Val_29);
        if (mercury__set_bbbtree__succeeded)
          if ((mercury__set_bbbtree__R_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                mercury__require__error_1_p_0((MR_String) "set_bbbtree.balance.1");
                return;
              }
            }
          else
            {
              MR_Word mercury__set_bbbtree__RL_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 2)));
              MR_Word mercury__set_bbbtree__RR_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 3)));
              MR_Integer mercury__set_bbbtree__RLSize_18;
              MR_Integer mercury__set_bbbtree__RRSize_19;
              MR_Box mercury__set_bbbtree___V0_14 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 0));
              MR_Integer mercury__set_bbbtree___N0_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 1)));

              if ((mercury__set_bbbtree__RL_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                mercury__set_bbbtree__RLSize_18 = (MR_Integer) 0;
              else
                {
                  MR_Box mercury__set_bbbtree___V_42 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RL_16, (MR_Integer) 0));
                  MR_Word mercury__set_bbbtree___L_44;
                  MR_Word mercury__set_bbbtree___R_45;

                  mercury__set_bbbtree__RLSize_18 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RL_16, (MR_Integer) 1)));
                  mercury__set_bbbtree___L_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RL_16, (MR_Integer) 2)));
                  mercury__set_bbbtree___R_45 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RL_16, (MR_Integer) 3)));
                }
              if ((mercury__set_bbbtree__RR_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                mercury__set_bbbtree__RRSize_19 = (MR_Integer) 0;
              else
                {
                  MR_Box mercury__set_bbbtree___V_46 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RR_17, (MR_Integer) 0));
                  MR_Word mercury__set_bbbtree___L_48;
                  MR_Word mercury__set_bbbtree___R_49;

                  mercury__set_bbbtree__RRSize_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RR_17, (MR_Integer) 1)));
                  mercury__set_bbbtree___L_48 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RR_17, (MR_Integer) 2)));
                  mercury__set_bbbtree___R_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__RR_17, (MR_Integer) 3)));
                }
              mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__RLSize_18 < mercury__set_bbbtree__RRSize_19);
              if (mercury__set_bbbtree__succeeded)
                {
                  MR_Box mercury__set_bbbtree__B_56 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 0));
                  MR_Word mercury__set_bbbtree__Y_58 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 2)));
                  MR_Word mercury__set_bbbtree__Z_59 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 3)));
                  MR_Word mercury__set_bbbtree__A_X_and_Y_61;
                  MR_Integer mercury__set_bbbtree___N_57 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 1)));

                  {
                    mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__V_6, mercury__set_bbbtree__L_7, mercury__set_bbbtree__Y_58, &mercury__set_bbbtree__A_X_and_Y_61);
                  }
                  {
                    mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__B_56, mercury__set_bbbtree__A_X_and_Y_61, mercury__set_bbbtree__Z_59, mercury__set_bbbtree__Set_9);
                  }
                }
              else
                {
                  MR_Box mercury__set_bbbtree__C_68 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 0));
                  MR_Word mercury__set_bbbtree__Y_70 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 2)));
                  MR_Word mercury__set_bbbtree__Z_71 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 3)));
                  MR_Integer mercury__set_bbbtree___N0_69 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_8, (MR_Integer) 1)));

                  if ((mercury__set_bbbtree__Y_70 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      {
                        mercury__require__error_1_p_0((MR_String) "set_bbbtree.double_rot_l.2");
                        return;
                      }
                    }
                  else
                    {
                      MR_Box mercury__set_bbbtree__B_73 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Y_70, (MR_Integer) 0));
                      MR_Word mercury__set_bbbtree__Y1_75 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Y_70, (MR_Integer) 2)));
                      MR_Word mercury__set_bbbtree__Y2_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Y_70, (MR_Integer) 3)));
                      MR_Word mercury__set_bbbtree__A_X_and_Y1_77;
                      MR_Word mercury__set_bbbtree__C_Y2_and_Z_78;
                      MR_Integer mercury__set_bbbtree___N1_74 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Y_70, (MR_Integer) 1)));

                      {
                        mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__V_6, mercury__set_bbbtree__L_7, mercury__set_bbbtree__Y1_75, &mercury__set_bbbtree__A_X_and_Y1_77);
                      }
                      {
                        mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__C_68, mercury__set_bbbtree__Y2_76, mercury__set_bbbtree__Z_71, &mercury__set_bbbtree__C_Y2_and_Z_78);
                      }
                      {
                        mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__B_73, mercury__set_bbbtree__A_X_and_Y1_77, mercury__set_bbbtree__C_Y2_and_Z_78, mercury__set_bbbtree__Set_9);
                      }
                    }
                }
            }
        else
          {
            MR_Integer mercury__set_bbbtree__Val_30 = (mercury__set_bbbtree__Ratio_10 * mercury__set_bbbtree__RSize_12);

            mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__LSize_11 > mercury__set_bbbtree__Val_30);
            if (mercury__set_bbbtree__succeeded)
              if ((mercury__set_bbbtree__L_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  {
                    mercury__require__error_1_p_0((MR_String) "set_bbbtree.balance.2");
                    return;
                  }
                }
              else
                {
                  MR_Word mercury__set_bbbtree__LL_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_7, (MR_Integer) 2)));
                  MR_Word mercury__set_bbbtree__LR_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_7, (MR_Integer) 3)));
                  MR_Integer mercury__set_bbbtree__LLSize_24;
                  MR_Integer mercury__set_bbbtree__LRSize_25;
                  MR_Box mercury__set_bbbtree___V1_20 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_7, (MR_Integer) 0));
                  MR_Integer mercury__set_bbbtree___N1_21 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_7, (MR_Integer) 1)));

                  if ((mercury__set_bbbtree__LL_22 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    mercury__set_bbbtree__LLSize_24 = (MR_Integer) 0;
                  else
                    {
                      MR_Box mercury__set_bbbtree___V_80 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LL_22, (MR_Integer) 0));
                      MR_Word mercury__set_bbbtree___L_82;
                      MR_Word mercury__set_bbbtree___R_83;

                      mercury__set_bbbtree__LLSize_24 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LL_22, (MR_Integer) 1)));
                      mercury__set_bbbtree___L_82 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LL_22, (MR_Integer) 2)));
                      mercury__set_bbbtree___R_83 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LL_22, (MR_Integer) 3)));
                    }
                  if ((mercury__set_bbbtree__LR_23 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    mercury__set_bbbtree__LRSize_25 = (MR_Integer) 0;
                  else
                    {
                      MR_Box mercury__set_bbbtree___V_84 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LR_23, (MR_Integer) 0));
                      MR_Word mercury__set_bbbtree___L_86;
                      MR_Word mercury__set_bbbtree___R_87;

                      mercury__set_bbbtree__LRSize_25 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LR_23, (MR_Integer) 1)));
                      mercury__set_bbbtree___L_86 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LR_23, (MR_Integer) 2)));
                      mercury__set_bbbtree___R_87 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__LR_23, (MR_Integer) 3)));
                    }
                  mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__LRSize_25 < mercury__set_bbbtree__LLSize_24);
                  if (mercury__set_bbbtree__succeeded)
                    {
                      mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_110_103_108_101_95_114_111_116_95_114_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__V_6, mercury__set_bbbtree__L_7, mercury__set_bbbtree__R_8, mercury__set_bbbtree__Set_9);
                    }
                  else
                    {
                      mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_117_98_108_101_95_114_111_116_95_114_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__V_6, mercury__set_bbbtree__L_7, mercury__set_bbbtree__R_8, mercury__set_bbbtree__Set_9);
                    }
                }
            else
              {
                mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__V_6, mercury__set_bbbtree__L_7, mercury__set_bbbtree__R_8, mercury__set_bbbtree__Set_9);
              }
          }
      }
  }
}

static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_100_111_117_98_108_101_95_114_111_116_95_114_95_95_91_49_93_95_48_4_p_0(
  MR_Box mercury__set_bbbtree__HeadVar__1_1,
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
  MR_Word mercury__set_bbbtree__HeadVar__3_3,
  MR_Word * mercury__set_bbbtree__HeadVar__4_4)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;

    if ((mercury__set_bbbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__error_1_p_0((MR_String) "set_bbbtree.double_rot_r.1");
          return;
        }
      }
    else
      {
        MR_Box mercury__set_bbbtree__A_10 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 0));
        MR_Word mercury__set_bbbtree__X_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word mercury__set_bbbtree__Y_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 3)));
        MR_Integer mercury__set_bbbtree___N0_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 1)));

        if ((mercury__set_bbbtree__Y_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__error_1_p_0((MR_String) "set_bbbtree.double_rot_r.2");
              return;
            }
          }
        else
          {
            MR_Box mercury__set_bbbtree__B_16 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Y_13, (MR_Integer) 0));
            MR_Word mercury__set_bbbtree__Y1_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Y_13, (MR_Integer) 2)));
            MR_Word mercury__set_bbbtree__Y2_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Y_13, (MR_Integer) 3)));
            MR_Word mercury__set_bbbtree__A_X_and_Y1_20;
            MR_Word mercury__set_bbbtree__C_Y2_and_Z_21;
            MR_Integer mercury__set_bbbtree___N1_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Y_13, (MR_Integer) 1)));

            {
              mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__A_10, mercury__set_bbbtree__X_12, mercury__set_bbbtree__Y1_18, &mercury__set_bbbtree__A_X_and_Y1_20);
            }
            {
              mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__HeadVar__1_1, mercury__set_bbbtree__Y2_19, mercury__set_bbbtree__HeadVar__3_3, &mercury__set_bbbtree__C_Y2_and_Z_21);
            }
            {
              mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__B_16, mercury__set_bbbtree__A_X_and_Y1_20, mercury__set_bbbtree__C_Y2_and_Z_21, mercury__set_bbbtree__HeadVar__4_4);
            }
          }
      }
  }
}

static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_105_110_103_108_101_95_114_111_116_95_114_95_95_91_49_93_95_48_4_p_0(
  MR_Box mercury__set_bbbtree__HeadVar__1_1,
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
  MR_Word mercury__set_bbbtree__HeadVar__3_3,
  MR_Word * mercury__set_bbbtree__HeadVar__4_4)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;

    if ((mercury__set_bbbtree__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        {
          mercury__require__error_1_p_0((MR_String) "set_bbbtree.single_rot_r");
          return;
        }
      }
    else
      {
        MR_Box mercury__set_bbbtree__A_10 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 0));
        MR_Word mercury__set_bbbtree__X_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 2)));
        MR_Word mercury__set_bbbtree__Y_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 3)));
        MR_Word mercury__set_bbbtree__B_Y_and_Z_16;
        MR_Integer mercury__set_bbbtree___N_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 1)));

        {
          mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__HeadVar__1_1, mercury__set_bbbtree__Y_13, mercury__set_bbbtree__HeadVar__3_3, &mercury__set_bbbtree__B_Y_and_Z_16);
        }
        {
          mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(mercury__set_bbbtree__A_10, mercury__set_bbbtree__X_12, mercury__set_bbbtree__B_Y_and_Z_16, mercury__set_bbbtree__HeadVar__4_4);
        }
      }
  }
}

static void MR_CALL 
mercury__set_bbbtree__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_98_117_105_108_100_95_110_111_100_101_95_95_91_49_93_95_48_4_p_0(
  MR_Box mercury__set_bbbtree__X_5,
  MR_Word mercury__set_bbbtree__L_6,
  MR_Word mercury__set_bbbtree__R_7,
  MR_Word * mercury__set_bbbtree__Tree_8)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Integer mercury__set_bbbtree__LSize_9;
    MR_Integer mercury__set_bbbtree__RSize_10;
    MR_Integer mercury__set_bbbtree__N_11;
    MR_Word mercury__set_bbbtree__Tree0_12;
    MR_Integer mercury__set_bbbtree__Var_13;

    if ((mercury__set_bbbtree__L_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__set_bbbtree__LSize_9 = (MR_Integer) 0;
    else
      {
        MR_Box mercury__set_bbbtree___V_16 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_6, (MR_Integer) 0));
        MR_Word mercury__set_bbbtree___L_18;
        MR_Word mercury__set_bbbtree___R_19;

        mercury__set_bbbtree__LSize_9 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_6, (MR_Integer) 1)));
        mercury__set_bbbtree___L_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_6, (MR_Integer) 2)));
        mercury__set_bbbtree___R_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__L_6, (MR_Integer) 3)));
      }
    if ((mercury__set_bbbtree__R_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__set_bbbtree__RSize_10 = (MR_Integer) 0;
    else
      {
        MR_Box mercury__set_bbbtree___V_20 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_7, (MR_Integer) 0));
        MR_Word mercury__set_bbbtree___L_22;
        MR_Word mercury__set_bbbtree___R_23;

        mercury__set_bbbtree__RSize_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_7, (MR_Integer) 1)));
        mercury__set_bbbtree___L_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_7, (MR_Integer) 2)));
        mercury__set_bbbtree___R_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__R_7, (MR_Integer) 3)));
      }
    mercury__set_bbbtree__Var_13 = ((MR_Integer) 1 + mercury__set_bbbtree__LSize_9);
    mercury__set_bbbtree__N_11 = (mercury__set_bbbtree__Var_13 + mercury__set_bbbtree__RSize_10);
    {
      mercury__set_bbbtree__Tree0_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Tree0_12, 0) = mercury__set_bbbtree__X_5;
      MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Tree0_12, 1) = ((MR_Box) (mercury__set_bbbtree__N_11));
      MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Tree0_12, 2) = ((MR_Box) (mercury__set_bbbtree__L_6));
      MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Tree0_12, 3) = ((MR_Box) (mercury__set_bbbtree__R_7));
    }
    *mercury__set_bbbtree__Tree_8 = mercury__set_bbbtree__Tree0_12;
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__remove_largest_3_p_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_17,
  MR_Box * mercury__set_bbbtree__X_4,
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
  MR_Word * mercury__set_bbbtree__Set_9)
{
  {
    MR_bool mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
    MR_Box mercury__set_bbbtree__V_5;
    MR_Integer mercury__set_bbbtree__N_6;
    MR_Word mercury__set_bbbtree__L_7;
    MR_Word mercury__set_bbbtree__R_8;

    if (mercury__set_bbbtree__succeeded)
      {
        mercury__set_bbbtree__V_5 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 0));
        mercury__set_bbbtree__N_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 1)));
        mercury__set_bbbtree__L_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 2)));
        mercury__set_bbbtree__R_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 3)));
        if ((mercury__set_bbbtree__R_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__set_bbbtree__X_4 = mercury__set_bbbtree__V_5;
            *mercury__set_bbbtree__Set_9 = mercury__set_bbbtree__L_7;
            mercury__set_bbbtree__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word mercury__set_bbbtree__NewR_14;
            MR_Integer mercury__set_bbbtree__NewN_15;
            MR_Integer mercury__set_bbbtree__Var_16;

            {
              mercury__set_bbbtree__succeeded = mercury__set_bbbtree__remove_largest_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_17, mercury__set_bbbtree__X_4, mercury__set_bbbtree__R_8, &mercury__set_bbbtree__NewR_14);
            }
            if (mercury__set_bbbtree__succeeded)
              {
                mercury__set_bbbtree__Var_16 = (MR_Integer) 1;
                mercury__set_bbbtree__NewN_15 = (mercury__set_bbbtree__N_6 - mercury__set_bbbtree__Var_16);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__set_bbbtree__Set_9 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__set_bbbtree__V_5;
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__set_bbbtree__NewN_15));
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__set_bbbtree__L_7));
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__set_bbbtree__NewR_14));
                }
                mercury__set_bbbtree__succeeded = MR_TRUE;
              }
          }
      }
    return mercury__set_bbbtree__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__remove_least_3_p_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_17,
  MR_Box * mercury__set_bbbtree__X_4,
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
  MR_Word * mercury__set_bbbtree__Set_9)
{
  {
    MR_bool mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
    MR_Box mercury__set_bbbtree__V_5;
    MR_Integer mercury__set_bbbtree__N_6;
    MR_Word mercury__set_bbbtree__L_7;
    MR_Word mercury__set_bbbtree__R_8;

    if (mercury__set_bbbtree__succeeded)
      {
        mercury__set_bbbtree__V_5 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 0));
        mercury__set_bbbtree__N_6 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 1)));
        mercury__set_bbbtree__L_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 2)));
        mercury__set_bbbtree__R_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 3)));
        if ((mercury__set_bbbtree__L_7 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            *mercury__set_bbbtree__X_4 = mercury__set_bbbtree__V_5;
            *mercury__set_bbbtree__Set_9 = mercury__set_bbbtree__R_8;
            mercury__set_bbbtree__succeeded = MR_TRUE;
          }
        else
          {
            MR_Word mercury__set_bbbtree__NewL_14;
            MR_Integer mercury__set_bbbtree__NewN_15;
            MR_Integer mercury__set_bbbtree__Var_16;

            {
              mercury__set_bbbtree__succeeded = mercury__set_bbbtree__remove_least_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_17, mercury__set_bbbtree__X_4, mercury__set_bbbtree__L_7, &mercury__set_bbbtree__NewL_14);
            }
            if (mercury__set_bbbtree__succeeded)
              {
                mercury__set_bbbtree__Var_16 = (MR_Integer) 1;
                mercury__set_bbbtree__NewN_15 = (mercury__set_bbbtree__N_6 - mercury__set_bbbtree__Var_16);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__set_bbbtree__Set_9 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__set_bbbtree__V_5;
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__set_bbbtree__NewN_15));
                  MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__set_bbbtree__NewL_14));
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__set_bbbtree__R_8));
                }
                mercury__set_bbbtree__succeeded = MR_TRUE;
              }
          }
      }
    return mercury__set_bbbtree__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__is_singleton_2_p_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_7,
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
  MR_Box * mercury__set_bbbtree__V_3)
{
  {
    MR_bool mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Integer mercury__set_bbbtree__Var_4;
    MR_Word mercury__set_bbbtree__Var_5;
    MR_Word mercury__set_bbbtree__Var_6;

    if (mercury__set_bbbtree__succeeded)
      {
        *mercury__set_bbbtree__V_3 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
        mercury__set_bbbtree__Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));
        mercury__set_bbbtree__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
        mercury__set_bbbtree__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
        mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__Var_4 == (MR_Integer) 1);
        if (mercury__set_bbbtree__succeeded)
          {
            mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__Var_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (mercury__set_bbbtree__succeeded)
              mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__Var_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
      }
    return mercury__set_bbbtree__succeeded;
  }
}

MR_Word MR_CALL 
mercury__set_bbbtree__make_singleton_set_1_f_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_5,
  MR_Box mercury__set_bbbtree__T_3)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__S_4;
    MR_Word mercury__set_bbbtree__Var_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__set_bbbtree__Var_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__set_bbbtree__S_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__set_bbbtree__S_4, 0) = mercury__set_bbbtree__T_3;
      MR_hl_field(MR_mktag(1), mercury__set_bbbtree__S_4, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(1), mercury__set_bbbtree__S_4, 2) = ((MR_Box) (mercury__set_bbbtree__Var_8));
      MR_hl_field(MR_mktag(1), mercury__set_bbbtree__S_4, 3) = ((MR_Box) (mercury__set_bbbtree__Var_9));
    }
    return mercury__set_bbbtree__S_4;
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__singleton_set_2_p_2(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_7,
  MR_Box * mercury__set_bbbtree__V_3,
  MR_Word mercury__set_bbbtree__HeadVar__2_2)
{
  {
    MR_bool mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
    MR_Integer mercury__set_bbbtree__Var_4;
    MR_Word mercury__set_bbbtree__Var_5;
    MR_Word mercury__set_bbbtree__Var_6;

    if (mercury__set_bbbtree__succeeded)
      {
        *mercury__set_bbbtree__V_3 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 0));
        mercury__set_bbbtree__Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 1)));
        mercury__set_bbbtree__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 2)));
        mercury__set_bbbtree__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 3)));
        mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__Var_4 == (MR_Integer) 1);
        if (mercury__set_bbbtree__succeeded)
          {
            mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__Var_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (mercury__set_bbbtree__succeeded)
              mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__Var_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          }
      }
    return mercury__set_bbbtree__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__singleton_set_2_p_1(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_7,
  MR_Box mercury__set_bbbtree__V_3,
  MR_Word mercury__set_bbbtree__HeadVar__2_2)
{
  {
    MR_bool mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
    MR_Integer mercury__set_bbbtree__Var_4;
    MR_Word mercury__set_bbbtree__Var_5;
    MR_Word mercury__set_bbbtree__Var_6;
    MR_Box mercury__set_bbbtree__Var_8;

    if (mercury__set_bbbtree__succeeded)
      {
        mercury__set_bbbtree__Var_8 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 0));
        mercury__set_bbbtree__Var_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 1)));
        mercury__set_bbbtree__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 2)));
        mercury__set_bbbtree__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 3)));
        {
          mercury__set_bbbtree__succeeded = mercury__builtin__unify_2_p_0(mercury__set_bbbtree__TypeInfo_for_T_7, mercury__set_bbbtree__V_3, mercury__set_bbbtree__Var_8);
        }
        if (mercury__set_bbbtree__succeeded)
          {
            mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__Var_4 == (MR_Integer) 1);
            if (mercury__set_bbbtree__succeeded)
              {
                mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__Var_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                if (mercury__set_bbbtree__succeeded)
                  mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__Var_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
          }
      }
    return mercury__set_bbbtree__succeeded;
  }
}

void MR_CALL 
mercury__set_bbbtree__singleton_set_2_p_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_7,
  MR_Box mercury__set_bbbtree__V_3,
  MR_Word * mercury__set_bbbtree__HeadVar__2_2)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__Var_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__set_bbbtree__Var_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL));
      *mercury__set_bbbtree__HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(1), base, 0) = mercury__set_bbbtree__V_3;
      MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(1), base, 2) = ((MR_Box) (mercury__set_bbbtree__Var_5));
      MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__set_bbbtree__Var_6));
    }
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__largest_2_p_1(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_12,
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
  MR_Box mercury__set_bbbtree__X_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
        MR_Box mercury__set_bbbtree__V_3;
        MR_Word mercury__set_bbbtree__R_6;
        MR_Integer mercury__set_bbbtree___N_4;
        MR_Word mercury__set_bbbtree___L_5;

        if (mercury__set_bbbtree__succeeded)
          {
            mercury__set_bbbtree__V_3 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
            mercury__set_bbbtree___N_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));
            mercury__set_bbbtree___L_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
            mercury__set_bbbtree__R_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
            if ((mercury__set_bbbtree__R_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                mercury__set_bbbtree__succeeded = mercury__builtin__unify_2_p_0(mercury__set_bbbtree__TypeInfo_for_T_12, mercury__set_bbbtree__X_7, mercury__set_bbbtree__V_3);
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__set_bbbtree__next_value_of_HeadVar__1_1 = mercury__set_bbbtree__R_6;

                  mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
        return mercury__set_bbbtree__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__set_bbbtree__largest_2_p_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_12,
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
  MR_Box * mercury__set_bbbtree__X_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
        MR_Box mercury__set_bbbtree__V_3;
        MR_Word mercury__set_bbbtree__R_6;
        MR_Integer mercury__set_bbbtree___N_4;
        MR_Word mercury__set_bbbtree___L_5;

        if (mercury__set_bbbtree__succeeded)
          {
            mercury__set_bbbtree__V_3 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
            mercury__set_bbbtree___N_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));
            mercury__set_bbbtree___L_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
            mercury__set_bbbtree__R_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
            if ((mercury__set_bbbtree__R_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                *mercury__set_bbbtree__X_7 = mercury__set_bbbtree__V_3;
                mercury__set_bbbtree__succeeded = MR_TRUE;
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__set_bbbtree__next_value_of_HeadVar__1_1 = mercury__set_bbbtree__R_6;

                  mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
        return mercury__set_bbbtree__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__set_bbbtree__least_2_p_1(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_12,
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
  MR_Box mercury__set_bbbtree__X_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
        MR_Box mercury__set_bbbtree__V_3;
        MR_Word mercury__set_bbbtree__L_5;
        MR_Integer mercury__set_bbbtree___N_4;
        MR_Word mercury__set_bbbtree___R_6;

        if (mercury__set_bbbtree__succeeded)
          {
            mercury__set_bbbtree__V_3 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
            mercury__set_bbbtree___N_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));
            mercury__set_bbbtree__L_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
            mercury__set_bbbtree___R_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
            if ((mercury__set_bbbtree__L_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                mercury__set_bbbtree__succeeded = mercury__builtin__unify_2_p_0(mercury__set_bbbtree__TypeInfo_for_T_12, mercury__set_bbbtree__X_7, mercury__set_bbbtree__V_3);
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__set_bbbtree__next_value_of_HeadVar__1_1 = mercury__set_bbbtree__L_5;

                  mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
        return mercury__set_bbbtree__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__set_bbbtree__least_2_p_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_12,
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
  MR_Box * mercury__set_bbbtree__X_7)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
        MR_Box mercury__set_bbbtree__V_3;
        MR_Word mercury__set_bbbtree__L_5;
        MR_Integer mercury__set_bbbtree___N_4;
        MR_Word mercury__set_bbbtree___R_6;

        if (mercury__set_bbbtree__succeeded)
          {
            mercury__set_bbbtree__V_3 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
            mercury__set_bbbtree___N_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));
            mercury__set_bbbtree__L_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
            mercury__set_bbbtree___R_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
            if ((mercury__set_bbbtree__L_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                *mercury__set_bbbtree__X_7 = mercury__set_bbbtree__V_3;
                mercury__set_bbbtree__succeeded = MR_TRUE;
              }
            else
              {
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__set_bbbtree__next_value_of_HeadVar__1_1 = mercury__set_bbbtree__L_5;

                  mercury__set_bbbtree__HeadVar__1_1 = mercury__set_bbbtree__next_value_of_HeadVar__1_1;
                }
                continue;
              }
          }
        return mercury__set_bbbtree__succeeded;
      }
      break;
    }
}

MR_bool MR_CALL 
mercury__set_bbbtree__contains_2_p_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_5,
  MR_Word mercury__set_bbbtree__Set_3,
  MR_Box mercury__set_bbbtree__X_4)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;

    {
      mercury__set_bbbtree__succeeded = mercury__set_bbbtree__member_2_p_0(mercury__set_bbbtree__TypeInfo_for_T_5, mercury__set_bbbtree__X_4, mercury__set_bbbtree__Set_3);
    }
    return mercury__set_bbbtree__succeeded;
  }
}

void MR_CALL 
mercury__set_bbbtree__is_member_3_p_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_7,
  MR_Box mercury__set_bbbtree__X_4,
  MR_Word mercury__set_bbbtree__Set_5,
  MR_Word * mercury__set_bbbtree__Result_6)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;

    {
      mercury__set_bbbtree__succeeded = mercury__set_bbbtree__member_2_p_0(mercury__set_bbbtree__TypeInfo_for_T_7, mercury__set_bbbtree__X_4, mercury__set_bbbtree__Set_5);
    }
    if (mercury__set_bbbtree__succeeded)
      *mercury__set_bbbtree__Result_6 = (MR_Integer) 1;
    else
      *mercury__set_bbbtree__Result_6 = (MR_Integer) 0;
  }
}

static void MR_CALL 
mercury__set_bbbtree__member_2_p_1_1(
  void * mercury__set_bbbtree__env_ptr_arg)
{
  {
    struct mercury__set_bbbtree__member_2_p_1_env_0_s * mercury__set_bbbtree__env_ptr = (struct mercury__set_bbbtree__member_2_p_1_env_0_s *) mercury__set_bbbtree__env_ptr_arg;

    {
      mercury__builtin__compare_3_p_0((mercury__set_bbbtree__env_ptr)->mercury__set_bbbtree__member_2_p_1_env_0__TypeInfo_for_T_9, &(mercury__set_bbbtree__env_ptr)->mercury__set_bbbtree__member_2_p_1_env_0__Var_10, *((mercury__set_bbbtree__env_ptr)->mercury__set_bbbtree__member_2_p_1_env_0__X_3), (mercury__set_bbbtree__env_ptr)->mercury__set_bbbtree__member_2_p_1_env_0__V_4);
    }
    (mercury__set_bbbtree__env_ptr)->mercury__set_bbbtree__member_2_p_1_env_0__succeeded = ((mercury__set_bbbtree__env_ptr)->mercury__set_bbbtree__member_2_p_1_env_0__Result_8 == (mercury__set_bbbtree__env_ptr)->mercury__set_bbbtree__member_2_p_1_env_0__Var_10);
    if ((mercury__set_bbbtree__env_ptr)->mercury__set_bbbtree__member_2_p_1_env_0__succeeded)
      {
        ((mercury__set_bbbtree__env_ptr)->mercury__set_bbbtree__member_2_p_1_env_0__cont)((mercury__set_bbbtree__env_ptr)->mercury__set_bbbtree__member_2_p_1_env_0__cont_env_ptr);
      }
  }
}

void MR_CALL 
mercury__set_bbbtree__member_2_p_1(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_9,
  MR_Box * mercury__set_bbbtree__X_3,
  MR_Word mercury__set_bbbtree__HeadVar__2_2,
  MR_Cont mercury__set_bbbtree__cont,
  void * mercury__set_bbbtree__cont_env_ptr)
{
  {
    struct mercury__set_bbbtree__member_2_p_1_env_0_s mercury__set_bbbtree__env;

    (mercury__set_bbbtree__env).mercury__set_bbbtree__member_2_p_1_env_0__TypeInfo_for_T_9 = mercury__set_bbbtree__TypeInfo_for_T_9;
    (mercury__set_bbbtree__env).mercury__set_bbbtree__member_2_p_1_env_0__X_3 = mercury__set_bbbtree__X_3;
    (mercury__set_bbbtree__env).mercury__set_bbbtree__member_2_p_1_env_0__cont = mercury__set_bbbtree__cont;
    (mercury__set_bbbtree__env).mercury__set_bbbtree__member_2_p_1_env_0__cont_env_ptr = mercury__set_bbbtree__cont_env_ptr;
    {
      MR_Word mercury__set_bbbtree__L_6;
      MR_Word mercury__set_bbbtree__R_7;
      MR_Integer mercury__set_bbbtree___N_5;

      (mercury__set_bbbtree__env).mercury__set_bbbtree__member_2_p_1_env_0__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if ((mercury__set_bbbtree__env).mercury__set_bbbtree__member_2_p_1_env_0__succeeded)
        {
          (mercury__set_bbbtree__env).mercury__set_bbbtree__member_2_p_1_env_0__V_4 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 0));
          mercury__set_bbbtree___N_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 1)));
          mercury__set_bbbtree__L_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 2)));
          mercury__set_bbbtree__R_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 3)));
          (mercury__set_bbbtree__env).mercury__set_bbbtree__member_2_p_1_env_0__Result_8 = (MR_Integer) 1;
          {
            mercury__set_bbbtree__member_2_p_1((mercury__set_bbbtree__env).mercury__set_bbbtree__member_2_p_1_env_0__TypeInfo_for_T_9, (mercury__set_bbbtree__env).mercury__set_bbbtree__member_2_p_1_env_0__X_3, mercury__set_bbbtree__L_6, mercury__set_bbbtree__member_2_p_1_1, &mercury__set_bbbtree__env);
          }
          (mercury__set_bbbtree__env).mercury__set_bbbtree__member_2_p_1_env_0__Result_8 = (MR_Integer) 2;
          {
            mercury__set_bbbtree__member_2_p_1((mercury__set_bbbtree__env).mercury__set_bbbtree__member_2_p_1_env_0__TypeInfo_for_T_9, (mercury__set_bbbtree__env).mercury__set_bbbtree__member_2_p_1_env_0__X_3, mercury__set_bbbtree__R_7, mercury__set_bbbtree__member_2_p_1_1, &mercury__set_bbbtree__env);
          }
          (mercury__set_bbbtree__env).mercury__set_bbbtree__member_2_p_1_env_0__Result_8 = (MR_Integer) 0;
          *((mercury__set_bbbtree__env).mercury__set_bbbtree__member_2_p_1_env_0__X_3) = (mercury__set_bbbtree__env).mercury__set_bbbtree__member_2_p_1_env_0__V_4;
          {
            mercury__set_bbbtree__member_2_p_1_1(&mercury__set_bbbtree__env);
          }
        }
    }
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__member_2_p_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_9,
  MR_Box mercury__set_bbbtree__X_3,
  MR_Word mercury__set_bbbtree__HeadVar__2_2)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
        MR_Box mercury__set_bbbtree__V_4;
        MR_Word mercury__set_bbbtree__L_6;
        MR_Word mercury__set_bbbtree__R_7;
        MR_Word mercury__set_bbbtree__Result_8;
        MR_Integer mercury__set_bbbtree___N_5;

        if (mercury__set_bbbtree__succeeded)
          {
            mercury__set_bbbtree__V_4 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 0));
            mercury__set_bbbtree___N_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 1)));
            mercury__set_bbbtree__L_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 2)));
            mercury__set_bbbtree__R_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__2_2, (MR_Integer) 3)));
            {
              mercury__builtin__compare_3_p_0(mercury__set_bbbtree__TypeInfo_for_T_9, &mercury__set_bbbtree__Result_8, mercury__set_bbbtree__X_3, mercury__set_bbbtree__V_4);
            }
            switch (mercury__set_bbbtree__Result_8) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__set_bbbtree__next_value_of_HeadVar__2_2 = mercury__set_bbbtree__L_6;

                    mercury__set_bbbtree__HeadVar__2_2 = mercury__set_bbbtree__next_value_of_HeadVar__2_2;
                  }
                  continue;
                }
                break;
              case (MR_Integer) 0:
                {
                  mercury__set_bbbtree__succeeded = mercury__builtin__unify_2_p_0(mercury__set_bbbtree__TypeInfo_for_T_9, mercury__set_bbbtree__X_3, mercury__set_bbbtree__V_4);
                }
                break;
              case (MR_Integer) 2:
                {
                  /* direct tailcall eliminated */
                  {
                    MR_Word mercury__set_bbbtree__next_value_of_HeadVar__2_2 = mercury__set_bbbtree__R_7;

                    mercury__set_bbbtree__HeadVar__2_2 = mercury__set_bbbtree__next_value_of_HeadVar__2_2;
                  }
                  continue;
                }
                break;
            }
          }
        return mercury__set_bbbtree__succeeded;
      }
      break;
    }
}

void MR_CALL 
mercury__set_bbbtree__count_2_p_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_7,
  MR_Word mercury__set_bbbtree__HeadVar__1_1,
  MR_Integer * mercury__set_bbbtree__HeadVar__2_2)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;

    if ((mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__set_bbbtree__HeadVar__2_2 = (MR_Integer) 0;
    else
      {
        MR_Box mercury__set_bbbtree___V_3 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
        MR_Word mercury__set_bbbtree___L_5;
        MR_Word mercury__set_bbbtree___R_6;

        *mercury__set_bbbtree__HeadVar__2_2 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));
        mercury__set_bbbtree___L_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
        mercury__set_bbbtree___R_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
      }
  }
}

MR_Integer MR_CALL 
mercury__set_bbbtree__count_1_f_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_5,
  MR_Word mercury__set_bbbtree__Set_3)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Integer mercury__set_bbbtree__Count_4;

    if ((mercury__set_bbbtree__Set_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__set_bbbtree__Count_4 = (MR_Integer) 0;
    else
      {
        MR_Box mercury__set_bbbtree___V_6 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Set_3, (MR_Integer) 0));
        MR_Word mercury__set_bbbtree___L_8;
        MR_Word mercury__set_bbbtree___R_9;

        mercury__set_bbbtree__Count_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Set_3, (MR_Integer) 1)));
        mercury__set_bbbtree___L_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Set_3, (MR_Integer) 2)));
        mercury__set_bbbtree___R_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__Set_3, (MR_Integer) 3)));
      }
    return mercury__set_bbbtree__Count_4;
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__is_non_empty_1_p_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_6,
  MR_Word mercury__set_bbbtree__HeadVar__1_1)
{
  {
    MR_bool mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Box mercury__set_bbbtree__Var_2;
    MR_Integer mercury__set_bbbtree__Var_3;
    MR_Word mercury__set_bbbtree__Var_4;
    MR_Word mercury__set_bbbtree__Var_5;

    if (mercury__set_bbbtree__succeeded)
      {
        mercury__set_bbbtree__Var_2 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
        mercury__set_bbbtree__Var_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));
        mercury__set_bbbtree__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
        mercury__set_bbbtree__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
      }
    return mercury__set_bbbtree__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__non_empty_1_p_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_6,
  MR_Word mercury__set_bbbtree__HeadVar__1_1)
{
  {
    MR_bool mercury__set_bbbtree__succeeded = ((MR_tag((MR_Word) mercury__set_bbbtree__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
    MR_Box mercury__set_bbbtree__Var_2;
    MR_Integer mercury__set_bbbtree__Var_3;
    MR_Word mercury__set_bbbtree__Var_4;
    MR_Word mercury__set_bbbtree__Var_5;

    if (mercury__set_bbbtree__succeeded)
      {
        mercury__set_bbbtree__Var_2 = (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 0));
        mercury__set_bbbtree__Var_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 1)));
        mercury__set_bbbtree__Var_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 2)));
        mercury__set_bbbtree__Var_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set_bbbtree__HeadVar__1_1, (MR_Integer) 3)));
      }
    return mercury__set_bbbtree__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__is_empty_1_p_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_2,
  MR_Word mercury__set_bbbtree__HeadVar__1_1)
{
  {
    MR_bool mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    return mercury__set_bbbtree__succeeded;
  }
}

MR_bool MR_CALL 
mercury__set_bbbtree__empty_1_p_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_2,
  MR_Word mercury__set_bbbtree__HeadVar__1_1)
{
  {
    MR_bool mercury__set_bbbtree__succeeded = (mercury__set_bbbtree__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    return mercury__set_bbbtree__succeeded;
  }
}

void MR_CALL 
mercury__set_bbbtree__init_1_p_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_2,
  MR_Word * mercury__set_bbbtree__HeadVar__1_1)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;

    *mercury__set_bbbtree__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

MR_Word MR_CALL 
mercury__set_bbbtree__init_0_f_0(
  MR_Word mercury__set_bbbtree__TypeInfo_for_T_3)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;
    MR_Word mercury__set_bbbtree__S_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    return mercury__set_bbbtree__S_2;
  }
}

static MR_bool MR_CALL 
mercury__set_bbbtree____Unify____set_bbbtree_1_0_10001(
  MR_Box mercury__set_bbbtree__wrapper_arg_1,
  MR_Box mercury__set_bbbtree__wrapper_arg_2,
  MR_Box mercury__set_bbbtree__wrapper_arg_3)
{
  {
    MR_bool mercury__set_bbbtree__succeeded;

    {
      mercury__set_bbbtree__succeeded = mercury__set_bbbtree____Unify____set_bbbtree_1_0(((MR_Word) mercury__set_bbbtree__wrapper_arg_1), ((MR_Word) mercury__set_bbbtree__wrapper_arg_2), ((MR_Word) mercury__set_bbbtree__wrapper_arg_3));
    }
    return mercury__set_bbbtree__succeeded;
  }
}

static void MR_CALL 
mercury__set_bbbtree____Compare____set_bbbtree_1_0_10001(
  MR_Box mercury__set_bbbtree__wrapper_arg_1,
  MR_Box * mercury__set_bbbtree__wrapper_arg_2,
  MR_Box mercury__set_bbbtree__wrapper_arg_3,
  MR_Box mercury__set_bbbtree__wrapper_arg_4)
{
  {
    MR_Word mercury__set_bbbtree__conv0_HeadVar__1_1;

    {
      mercury__set_bbbtree____Compare____set_bbbtree_1_0(((MR_Word) mercury__set_bbbtree__wrapper_arg_1), &mercury__set_bbbtree__conv0_HeadVar__1_1, ((MR_Word) mercury__set_bbbtree__wrapper_arg_3), ((MR_Word) mercury__set_bbbtree__wrapper_arg_4));
    }
    *mercury__set_bbbtree__wrapper_arg_2 = ((MR_Box) (mercury__set_bbbtree__conv0_HeadVar__1_1));
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

/* :- end_module set_bbbtree. */
