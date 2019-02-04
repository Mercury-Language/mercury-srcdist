/*
** Automatically generated from `array2d.m'
** by the Mercury compiler,
** version rotd-2017-08-02
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


/* :- module array2d. */
/* :- implementation. */

/*
INIT mercury__array2d__init
ENDINIT
*/

#include "array2d.mih"


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



struct mercury__array2d__array2d_2_f_0_env_0_s {
  MR_Word mercury__array2d__array2d_2_f_0_env_0__TypeInfo_for_T_16;
  MR_Word mercury__array2d__array2d_2_f_0_env_0__HeadVar__1_1;
  MR_bool mercury__array2d__array2d_2_f_0_env_0__succeeded;
  MR_Word mercury__array2d__array2d_2_f_0_env_0__TypeInfo_10_41;
  MR_Integer mercury__array2d__array2d_2_f_0_env_0__N_11;
  jmp_buf mercury__array2d__array2d_2_f_0_env_0__commit_0;
  MR_Word mercury__array2d__array2d_2_f_0_env_0__Ys_13;
  MR_Box mercury__array2d__array2d_2_f_0_env_0__conv1_Ys_13;
};


static const MR_FA_PseudoTypeInfo_Struct1 mercury__array2d__array__pti_array_1__pseudo_1;

static const MR_PseudoTypeInfo mercury__array2d__array2d__field_types_array2d_1_0[3];

static const MR_DuFunctorDesc mercury__array2d__array2d__du_functor_desc_array2d_1_0;

static const MR_DuFunctorDescPtr mercury__array2d__array2d__du_stag_ordered_array2d_1_0[1];

static const MR_DuPtagLayout mercury__array2d__array2d__du_ptag_ordered_array2d_1[1];

static const MR_DuFunctorDescPtr mercury__array2d__array2d__du_name_ordered_array2d_1[1];

static const MR_Integer mercury__array2d__array2d__functor_number_map_array2d_1[1];

static MR_Integer MR_CALL 
mercury__array2d__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static MR_Word MR_CALL 
mercury__array2d__lists_2_6_f_0(
  MR_Word mercury__array2d__TypeInfo_for_T_26,
  MR_Integer mercury__array2d__IJ_8,
  MR_Integer mercury__array2d__J_9,
  MR_Integer mercury__array2d__N_10,
  MR_ArrayPtr mercury__array2d__A_11,
  MR_Word mercury__array2d__Xs_12,
  MR_Word mercury__array2d__Xss_13);

static void MR_CALL 
mercury__array2d__array2d_1_f_0_1(
  void * mercury__array2d__env_ptr_arg);

static void MR_CALL 
mercury__array2d__array2d_1_f_0_3(
  void * mercury__array2d__env_ptr_arg);

static void MR_CALL 
mercury__array2d__array2d_1_f_0_2(
  void * mercury__array2d__env_ptr_arg);

static void MR_CALL 
mercury__array2d__array2d_1_f_0_4(
  void * mercury__array2d__env_ptr_arg);

static MR_bool MR_CALL 
mercury__array2d____Unify____array2d_1_0_10001(
  MR_Box mercury__array2d__wrapper_arg_1,
  MR_Box mercury__array2d__wrapper_arg_2,
  MR_Box mercury__array2d__wrapper_arg_3);

static void MR_CALL 
mercury__array2d____Compare____array2d_1_0_10001(
  MR_Box mercury__array2d__wrapper_arg_1,
  MR_Box * mercury__array2d__wrapper_arg_2,
  MR_Box mercury__array2d__wrapper_arg_3,
  MR_Box mercury__array2d__wrapper_arg_4);


static /* final */ const MR_Box mercury__array2d_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__array2d_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__array2d_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__array2d_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__array2d_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__array2d_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__array2d_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__array2d_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__array2d_scalar_common_2[0])),
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



static const MR_FA_PseudoTypeInfo_Struct1 mercury__array2d__array__pti_array_1__pseudo_1 = {
  &mercury__array__array__type_ctor_info_array_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_PseudoTypeInfo mercury__array2d__array2d__field_types_array2d_1_0[3] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) &mercury__array2d__array__pti_array_1__pseudo_1
};

static const MR_DuFunctorDesc mercury__array2d__array2d__du_functor_desc_array2d_1_0 = {
  (MR_String) "array2d",
  (MR_Integer) 3,
  (MR_Integer) 4,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__array2d__array2d__field_types_array2d_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__array2d__array2d__du_stag_ordered_array2d_1_0[1] = {
  &mercury__array2d__array2d__du_functor_desc_array2d_1_0
};

static const MR_DuPtagLayout mercury__array2d__array2d__du_ptag_ordered_array2d_1[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__array2d__array2d__du_stag_ordered_array2d_1_0
  }
};

static const MR_DuFunctorDescPtr mercury__array2d__array2d__du_name_ordered_array2d_1[1] = {
  &mercury__array2d__array2d__du_functor_desc_array2d_1_0
};

static const MR_Integer mercury__array2d__array2d__functor_number_map_array2d_1[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__array2d__array2d__type_ctor_info_array2d_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__array2d____Unify____array2d_1_0_10001)),
  ((MR_Box) (mercury__array2d____Compare____array2d_1_0_10001)),
  (MR_String) "array2d",
  (MR_String) "array2d",
  {     mercury__array2d__array2d__du_name_ordered_array2d_1 },
  {     mercury__array2d__array2d__du_ptag_ordered_array2d_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__array2d__array2d__functor_number_map_array2d_1
};

static MR_Integer MR_CALL 
mercury__array2d__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    return (MR_Integer) 1200;
  }
}

void MR_CALL 
mercury__array2d____Compare____array2d_1_0(
  MR_Word mercury__array2d__TypeInfo_for_T_14,
  MR_Word * mercury__array2d__HeadVar__1_1,
  MR_Word mercury__array2d__HeadVar__2_2,
  MR_Word mercury__array2d__HeadVar__3_3)
{
  {
    MR_bool mercury__array2d__succeeded;
    MR_Integer mercury__array2d__CastX_12 = (MR_Integer) mercury__array2d__HeadVar__2_2;
    MR_Integer mercury__array2d__CastY_13 = (MR_Integer) mercury__array2d__HeadVar__3_3;

    mercury__array2d__succeeded = (mercury__array2d__CastX_12 == mercury__array2d__CastY_13);
    if (mercury__array2d__succeeded)
      *mercury__array2d__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer mercury__array2d__ArgX1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer mercury__array2d__ArgY1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__3_3, (MR_Integer) 0)));
      MR_Integer mercury__array2d__ArgX2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__2_2, (MR_Integer) 1)));
      MR_Integer mercury__array2d__ArgY2_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__3_3, (MR_Integer) 1)));
      MR_ArrayPtr mercury__array2d__ArgX3_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__2_2, (MR_Integer) 2)));
      MR_ArrayPtr mercury__array2d__ArgY3_9 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__3_3, (MR_Integer) 2)));
      MR_Word mercury__array2d__Var_10;

      mercury__array2d__succeeded = (mercury__array2d__ArgX1_4 < mercury__array2d__ArgY1_5);
      if (mercury__array2d__succeeded)
        mercury__array2d__Var_10 = (MR_Integer) 1;
      else
      {
        mercury__array2d__succeeded = (mercury__array2d__ArgX1_4 == mercury__array2d__ArgY1_5);
        if (mercury__array2d__succeeded)
          mercury__array2d__Var_10 = (MR_Integer) 0;
        else
          mercury__array2d__Var_10 = (MR_Integer) 2;
      }
      mercury__array2d__succeeded = (mercury__array2d__Var_10 == (MR_Integer) 0);
      mercury__array2d__succeeded = !(mercury__array2d__succeeded);
      if (mercury__array2d__succeeded)
        *mercury__array2d__HeadVar__1_1 = mercury__array2d__Var_10;
      else
      {
        MR_Word mercury__array2d__Var_11;

        mercury__array2d__succeeded = (mercury__array2d__ArgX2_6 < mercury__array2d__ArgY2_7);
        if (mercury__array2d__succeeded)
          mercury__array2d__Var_11 = (MR_Integer) 1;
        else
        {
          mercury__array2d__succeeded = (mercury__array2d__ArgX2_6 == mercury__array2d__ArgY2_7);
          if (mercury__array2d__succeeded)
            mercury__array2d__Var_11 = (MR_Integer) 0;
          else
            mercury__array2d__Var_11 = (MR_Integer) 2;
        }
        mercury__array2d__succeeded = (mercury__array2d__Var_11 == (MR_Integer) 0);
        mercury__array2d__succeeded = !(mercury__array2d__succeeded);
        if (mercury__array2d__succeeded)
          *mercury__array2d__HeadVar__1_1 = mercury__array2d__Var_11;
        else
          mercury__array____Compare____array_1_0(mercury__array2d__TypeInfo_for_T_14, mercury__array2d__HeadVar__1_1, mercury__array2d__ArgX3_8, mercury__array2d__ArgY3_9);
      }
    }
  }
}

MR_bool MR_CALL 
mercury__array2d____Unify____array2d_1_0(
  MR_Word mercury__array2d__TypeInfo_for_T_11,
  MR_Word mercury__array2d__HeadVar__1_1,
  MR_Word mercury__array2d__HeadVar__2_2)
{
  {
    MR_bool mercury__array2d__succeeded;
    MR_Integer mercury__array2d__CastX_9 = (MR_Integer) mercury__array2d__HeadVar__1_1;
    MR_Integer mercury__array2d__CastY_10 = (MR_Integer) mercury__array2d__HeadVar__2_2;

    mercury__array2d__succeeded = (mercury__array2d__CastX_9 == mercury__array2d__CastY_10);
    if (mercury__array2d__succeeded)
      mercury__array2d__succeeded = MR_TRUE;
    else
    {
      MR_Integer mercury__array2d__ArgX1_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__1_1, (MR_Integer) 0)));
      MR_Integer mercury__array2d__ArgY1_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__2_2, (MR_Integer) 0)));
      MR_Integer mercury__array2d__ArgX2_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__1_1, (MR_Integer) 1)));
      MR_Integer mercury__array2d__ArgY2_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__2_2, (MR_Integer) 1)));
      MR_ArrayPtr mercury__array2d__ArgX3_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__1_1, (MR_Integer) 2)));
      MR_ArrayPtr mercury__array2d__ArgY3_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__2_2, (MR_Integer) 2)));

      mercury__array2d__succeeded = (mercury__array2d__ArgX1_3 == mercury__array2d__ArgY1_4);
      if (mercury__array2d__succeeded)
      {
        mercury__array2d__succeeded = (mercury__array2d__ArgX2_5 == mercury__array2d__ArgY2_6);
        if (mercury__array2d__succeeded)
          mercury__array2d__succeeded = mercury__array____Unify____array_1_0(mercury__array2d__TypeInfo_for_T_11, mercury__array2d__ArgX3_7, mercury__array2d__ArgY3_8);
      }
    }
    return mercury__array2d__succeeded;
  }
}

MR_Word MR_CALL 
mercury__array2d__lists_1_f_0(
  MR_Word mercury__array2d__TypeInfo_for_T_13,
  MR_Word mercury__array2d__HeadVar__1_1)
{
  {
    MR_Word mercury__array2d__HeadVar__2_2;
    MR_Integer mercury__array2d__M_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer mercury__array2d__N_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__1_1, (MR_Integer) 1)));
    MR_ArrayPtr mercury__array2d__A_5 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__1_1, (MR_Integer) 2)));
    MR_Integer mercury__array2d__Var_6;
    MR_Integer mercury__array2d__Var_7 = (mercury__array2d__M_3 * mercury__array2d__N_4);
    MR_Integer mercury__array2d__Var_9;
    MR_Word mercury__array2d__Var_11;
    MR_Word mercury__array2d__Var_12;

    mercury__array2d__Var_6 = (mercury__array2d__Var_7 - (MR_Integer) 1);
    mercury__array2d__Var_9 = (mercury__array2d__N_4 - (MR_Integer) 1);
    mercury__array2d__Var_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__array2d__Var_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__array2d__HeadVar__2_2 = mercury__array2d__lists_2_6_f_0(mercury__array2d__TypeInfo_for_T_13, mercury__array2d__Var_6, mercury__array2d__Var_9, mercury__array2d__N_4, mercury__array2d__A_5, mercury__array2d__Var_11, mercury__array2d__Var_12);
    return mercury__array2d__HeadVar__2_2;
  }
}

static MR_Word MR_CALL 
mercury__array2d__lists_2_6_f_0(
  MR_Word mercury__array2d__TypeInfo_for_T_26,
  MR_Integer mercury__array2d__IJ_8,
  MR_Integer mercury__array2d__J_9,
  MR_Integer mercury__array2d__N_10,
  MR_ArrayPtr mercury__array2d__A_11,
  MR_Word mercury__array2d__Xs_12,
  MR_Word mercury__array2d__Xss_13)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__array2d__succeeded = ((MR_Integer) 0 <= mercury__array2d__IJ_8);
      MR_Word mercury__array2d__HeadVar__7_7;

      if (mercury__array2d__succeeded)
      {
        mercury__array2d__succeeded = ((MR_Integer) 0 <= mercury__array2d__J_9);
        if (mercury__array2d__succeeded)
        {
          MR_Integer mercury__array2d__Var_16 = (mercury__array2d__IJ_8 - (MR_Integer) 1);
          MR_Integer mercury__array2d__Var_18 = (mercury__array2d__J_9 - (MR_Integer) 1);
          MR_Word mercury__array2d__Var_20;
          MR_Box mercury__array2d__Var_21;

          mercury__array__lookup_3_p_0(mercury__array2d__TypeInfo_for_T_26, mercury__array2d__A_11, mercury__array2d__IJ_8, &mercury__array2d__Var_21);
          {
            mercury__array2d__Var_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__array2d__Var_20, 0) = mercury__array2d__Var_21;
            MR_hl_field(MR_mktag(1), mercury__array2d__Var_20, 1) = ((MR_Box) (mercury__array2d__Xs_12));
          }
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__array2d__next_value_of_IJ_8 = mercury__array2d__Var_16;
            MR_Integer mercury__array2d__next_value_of_J_9 = mercury__array2d__Var_18;
            MR_Word mercury__array2d__next_value_of_Xs_12 = mercury__array2d__Var_20;

            mercury__array2d__Xs_12 = mercury__array2d__next_value_of_Xs_12;
            mercury__array2d__J_9 = mercury__array2d__next_value_of_J_9;
            mercury__array2d__IJ_8 = mercury__array2d__next_value_of_IJ_8;
          }
          continue;
        }
        else
        {
          MR_Integer mercury__array2d__Var_22 = (mercury__array2d__N_10 - (MR_Integer) 1);
          MR_Word mercury__array2d__Var_24 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          MR_Word mercury__array2d__Var_25;

          {
            mercury__array2d__Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__array2d__Var_25, 0) = ((MR_Box) (mercury__array2d__Xs_12));
            MR_hl_field(MR_mktag(1), mercury__array2d__Var_25, 1) = ((MR_Box) (mercury__array2d__Xss_13));
          }
          /* direct tailcall eliminated */
          {
            MR_Integer mercury__array2d__next_value_of_J_9 = mercury__array2d__Var_22;
            MR_Word mercury__array2d__next_value_of_Xs_12 = mercury__array2d__Var_24;
            MR_Word mercury__array2d__next_value_of_Xss_13 = mercury__array2d__Var_25;

            mercury__array2d__Xss_13 = mercury__array2d__next_value_of_Xss_13;
            mercury__array2d__Xs_12 = mercury__array2d__next_value_of_Xs_12;
            mercury__array2d__J_9 = mercury__array2d__next_value_of_J_9;
          }
          continue;
        }
      }
      else
        {
          mercury__array2d__HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__array2d__HeadVar__7_7, 0) = ((MR_Box) (mercury__array2d__Xs_12));
          MR_hl_field(MR_mktag(1), mercury__array2d__HeadVar__7_7, 1) = ((MR_Box) (mercury__array2d__Xss_13));
        }
      return mercury__array2d__HeadVar__7_7;
    }
    break;
  }
}

void MR_CALL 
mercury__array2d__unsafe_set_5_p_0(
  MR_Word mercury__array2d__TypeInfo_for_T_10,
  MR_Integer mercury__array2d__I_6,
  MR_Integer mercury__array2d__J_7,
  MR_Box mercury__array2d__X_8,
  MR_Word mercury__array2d__A_9,
  MR_Word * mercury__array2d__HeadVar__5_5)
{
  {
    MR_Integer mercury__array2d__M_14 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__array2d__A_9, (MR_Integer) 0)));
    MR_Integer mercury__array2d__N_15 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__array2d__A_9, (MR_Integer) 1)));
    MR_ArrayPtr mercury__array2d__A_16 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__array2d__A_9, (MR_Integer) 2)));
    MR_ArrayPtr mercury__array2d__Var_17;
    MR_Integer mercury__array2d__Var_18;
    MR_Integer mercury__array2d__Var_19 = (mercury__array2d__I_6 * mercury__array2d__N_15);
    MR_Word mercury__array2d__TypeInfo_for_T_24;

    mercury__array2d__Var_18 = (mercury__array2d__Var_19 + mercury__array2d__J_7);
{
#define MR_PROC_LABEL mercury__array2d__unsafe_set_5_p_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index =  mercury__array2d__Var_18 ;
	Item = (MR_Word) mercury__array2d__X_8 ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array2d__A_16 , Array0);
		{

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array2d__Var_17 );
}
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *mercury__array2d__HeadVar__5_5 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__array2d__M_14));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__array2d__N_15));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (mercury__array2d__Var_17));
    }
  }
}

MR_Word MR_CALL 
mercury__array2d__f_117_110_115_97_102_101_95_101_108_101_109_32_58_61_4_f_0(
  MR_Word mercury__array2d__TypeInfo_for_T_15,
  MR_Integer mercury__array2d__I_9,
  MR_Integer mercury__array2d__J_10,
  MR_Word mercury__array2d__HeadVar__3_3,
  MR_Box mercury__array2d__X_11)
{
  {
    MR_Word mercury__array2d__HeadVar__5_5;
    MR_Integer mercury__array2d__M_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__3_3, (MR_Integer) 0)));
    MR_Integer mercury__array2d__N_7 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__3_3, (MR_Integer) 1)));
    MR_ArrayPtr mercury__array2d__A_8 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__3_3, (MR_Integer) 2)));
    MR_ArrayPtr mercury__array2d__Var_12;
    MR_Integer mercury__array2d__Var_13;
    MR_Integer mercury__array2d__Var_14 = (mercury__array2d__I_9 * mercury__array2d__N_7);
    MR_Word mercury__array2d__TypeInfo_for_T_20;

    mercury__array2d__Var_13 = (mercury__array2d__Var_14 + mercury__array2d__J_10);
{
#define MR_PROC_LABEL mercury__array2d__f_117_110_115_97_102_101_95_101_108_101_109_32_58_61_4_f_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index =  mercury__array2d__Var_13 ;
	Item = (MR_Word) mercury__array2d__X_11 ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array2d__A_8 , Array0);
		{

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array2d__Var_12 );
}
    {
      mercury__array2d__HeadVar__5_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__5_5, 0) = ((MR_Box) (mercury__array2d__M_6));
      MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__5_5, 1) = ((MR_Box) (mercury__array2d__N_7));
      MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__5_5, 2) = ((MR_Box) (mercury__array2d__Var_12));
    }
    return mercury__array2d__HeadVar__5_5;
  }
}

void MR_CALL 
mercury__array2d__set_5_p_0(
  MR_Word mercury__array2d__TypeInfo_for_T_10,
  MR_Integer mercury__array2d__I_6,
  MR_Integer mercury__array2d__J_7,
  MR_Box mercury__array2d__X_8,
  MR_Word mercury__array2d__A_9,
  MR_Word * mercury__array2d__HeadVar__5_5)
{
  *mercury__array2d__HeadVar__5_5 = mercury__array2d__f_101_108_101_109_32_58_61_4_f_0(mercury__array2d__TypeInfo_for_T_10, mercury__array2d__I_6, mercury__array2d__J_7, mercury__array2d__A_9, mercury__array2d__X_8);
}

MR_Word MR_CALL 
mercury__array2d__f_101_108_101_109_32_58_61_4_f_0(
  MR_Word mercury__array2d__TypeInfo_for_T_11,
  MR_Integer mercury__array2d__I_7,
  MR_Integer mercury__array2d__J_8,
  MR_Word mercury__array2d__T_6,
  MR_Box mercury__array2d__X_9)
{
  {
    MR_bool mercury__array2d__succeeded = ((MR_Integer) 0 <= mercury__array2d__I_7);
    MR_Word mercury__array2d__HeadVar__5_5;
    MR_Integer mercury__array2d__M_16 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__array2d__T_6, (MR_Integer) 0)));
    MR_Integer mercury__array2d__N_17 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__array2d__T_6, (MR_Integer) 1)));
    MR_ArrayPtr mercury__array2d___A_18 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__array2d__T_6, (MR_Integer) 2)));
    MR_Integer mercury__array2d__Var_20;

    if (mercury__array2d__succeeded)
    {
      mercury__array2d__succeeded = (mercury__array2d__I_7 < mercury__array2d__M_16);
      if (mercury__array2d__succeeded)
      {
        mercury__array2d__Var_20 = (MR_Integer) 0;
        mercury__array2d__succeeded = (mercury__array2d__Var_20 <= mercury__array2d__J_8);
        if (mercury__array2d__succeeded)
          mercury__array2d__succeeded = (mercury__array2d__J_8 < mercury__array2d__N_17);
      }
    }
    if (mercury__array2d__succeeded)
    {
      MR_ArrayPtr mercury__array2d__Var_27;
      MR_Integer mercury__array2d__Var_28;
      MR_Integer mercury__array2d__Var_29 = (mercury__array2d__I_7 * mercury__array2d__N_17);
      MR_Word mercury__array2d__TypeInfo_for_T_34;

      mercury__array2d__Var_28 = (mercury__array2d__Var_29 + mercury__array2d__J_8);
{
#define MR_PROC_LABEL mercury__array2d__f_101_108_101_109_32_58_61_4_f_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index =  mercury__array2d__Var_28 ;
	Item = (MR_Word) mercury__array2d__X_9 ;
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array2d___A_18 , Array0);
		{

    Array0->elements[Index] = Item; /* destructive update! */
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array2d__Var_27 );
}
      {
        mercury__array2d__HeadVar__5_5 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__5_5, 0) = ((MR_Box) (mercury__array2d__M_16));
        MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__5_5, 1) = ((MR_Box) (mercury__array2d__N_17));
        MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__5_5, 2) = ((MR_Box) (mercury__array2d__Var_27));
      }
    }
    else
    {
      MR_Word mercury__array2d__TypeCtorInfo_12_12 = (MR_Word) &mercury__array2d__array2d__type_ctor_info_array2d_1;
      MR_Word mercury__array2d__TypeInfo_13_13;
      MR_Box mercury__array2d__conv0_HeadVar__5_5;

      {
        mercury__array2d__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), mercury__array2d__TypeInfo_13_13, 0) = ((MR_Box) (mercury__array2d__TypeCtorInfo_12_12));
        MR_hl_field(MR_mktag(0), mercury__array2d__TypeInfo_13_13, 1) = ((MR_Box) (mercury__array2d__TypeInfo_for_T_11));
      }
      mercury__array2d__conv0_HeadVar__5_5 = mercury__require__func_error_1_f_0(mercury__array2d__TypeInfo_13_13, (MR_String) "array2d.\'elem :=\': indices out of bounds");
      mercury__array2d__HeadVar__5_5 = ((MR_Word) mercury__array2d__conv0_HeadVar__5_5);
    }
    return mercury__array2d__HeadVar__5_5;
  }
}

MR_Box MR_CALL 
mercury__array2d__unsafe_elem_3_f_0(
  MR_Word mercury__array2d__TypeInfo_for_T_12,
  MR_Integer mercury__array2d__I_8,
  MR_Integer mercury__array2d__J_9,
  MR_Word mercury__array2d__HeadVar__3_3)
{
  {
    MR_Box mercury__array2d__HeadVar__4_4;
    MR_Integer mercury__array2d__N_6 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__3_3, (MR_Integer) 1)));
    MR_ArrayPtr mercury__array2d__A_7 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__3_3, (MR_Integer) 2)));
    MR_Integer mercury__array2d__Var_10;
    MR_Integer mercury__array2d__Var_11 = (mercury__array2d__I_8 * mercury__array2d__N_6);
    MR_Integer mercury__array2d___M_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__3_3, (MR_Integer) 0)));
    MR_Word mercury__array2d__TypeInfo_for_T_16;

    mercury__array2d__Var_10 = (mercury__array2d__Var_11 + mercury__array2d__J_9);
{
#define MR_PROC_LABEL mercury__array2d__unsafe_elem_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array2d__A_7 , Array);
	Index =  mercury__array2d__Var_10 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array2d__HeadVar__4_4  = (MR_Box) Item;
}
    return mercury__array2d__HeadVar__4_4;
  }
}

MR_Box MR_CALL 
mercury__array2d__elem_3_f_0(
  MR_Word mercury__array2d__TypeInfo_for_T_9,
  MR_Integer mercury__array2d__I_6,
  MR_Integer mercury__array2d__J_7,
  MR_Word mercury__array2d__T_5)
{
  {
    MR_bool mercury__array2d__succeeded = ((MR_Integer) 0 <= mercury__array2d__I_6);
    MR_Box mercury__array2d__HeadVar__4_4;
    MR_Integer mercury__array2d__N_13 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__array2d__T_5, (MR_Integer) 1)));
    MR_ArrayPtr mercury__array2d___A_14 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__array2d__T_5, (MR_Integer) 2)));
    MR_Integer mercury__array2d__M_12 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__array2d__T_5, (MR_Integer) 0)));
    MR_Integer mercury__array2d__Var_16;

    if (mercury__array2d__succeeded)
    {
      mercury__array2d__succeeded = (mercury__array2d__I_6 < mercury__array2d__M_12);
      if (mercury__array2d__succeeded)
      {
        mercury__array2d__Var_16 = (MR_Integer) 0;
        mercury__array2d__succeeded = (mercury__array2d__Var_16 <= mercury__array2d__J_7);
        if (mercury__array2d__succeeded)
          mercury__array2d__succeeded = (mercury__array2d__J_7 < mercury__array2d__N_13);
      }
    }
    if (mercury__array2d__succeeded)
    {
      MR_Integer mercury__array2d__Var_22;
      MR_Integer mercury__array2d__Var_23 = (mercury__array2d__I_6 * mercury__array2d__N_13);
      MR_Word mercury__array2d__TypeInfo_for_T_27;

      mercury__array2d__Var_22 = (mercury__array2d__Var_23 + mercury__array2d__J_7);
{
#define MR_PROC_LABEL mercury__array2d__elem_3_f_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array2d___A_14 , Array);
	Index =  mercury__array2d__Var_22 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	 mercury__array2d__HeadVar__4_4  = (MR_Box) Item;
}
    }
    else
    {
      return mercury__array2d__HeadVar__4_4 = mercury__require__func_error_1_f_0(mercury__array2d__TypeInfo_for_T_9, (MR_String) "array2d.elem: indices out of bounds");
    }
    return mercury__array2d__HeadVar__4_4;
  }
}

MR_bool MR_CALL 
mercury__array2d__in_bounds_3_p_0(
  MR_Word mercury__array2d__TypeInfo_for_T_11,
  MR_Word mercury__array2d__HeadVar__1_1,
  MR_Integer mercury__array2d__I_7,
  MR_Integer mercury__array2d__J_8)
{
  {
    MR_bool mercury__array2d__succeeded = ((MR_Integer) 0 <= mercury__array2d__I_7);
    MR_Integer mercury__array2d__M_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer mercury__array2d__N_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__1_1, (MR_Integer) 1)));
    MR_Integer mercury__array2d__Var_10;
    MR_ArrayPtr mercury__array2d___A_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__1_1, (MR_Integer) 2)));

    if (mercury__array2d__succeeded)
    {
      mercury__array2d__succeeded = (mercury__array2d__I_7 < mercury__array2d__M_4);
      if (mercury__array2d__succeeded)
      {
        mercury__array2d__Var_10 = (MR_Integer) 0;
        mercury__array2d__succeeded = (mercury__array2d__Var_10 <= mercury__array2d__J_8);
        if (mercury__array2d__succeeded)
          mercury__array2d__succeeded = (mercury__array2d__J_8 < mercury__array2d__N_5);
      }
    }
    return mercury__array2d__succeeded;
  }
}

void MR_CALL 
mercury__array2d__bounds_3_p_0(
  MR_Word mercury__array2d__TypeInfo_for_T_7,
  MR_Word mercury__array2d__HeadVar__1_1,
  MR_Integer * mercury__array2d__M_4,
  MR_Integer * mercury__array2d__N_5)
{
  {
    MR_ArrayPtr mercury__array2d___A_6;

    *mercury__array2d__M_4 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__1_1, (MR_Integer) 0)));
    *mercury__array2d__N_5 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__1_1, (MR_Integer) 1)));
    mercury__array2d___A_6 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__1_1, (MR_Integer) 2)));
  }
}

MR_Word MR_CALL 
mercury__array2d__from_lists_1_f_0(
  MR_Word mercury__array2d__TypeInfo_for_T_4,
  MR_Word mercury__array2d__Xss_3)
{
  {
    MR_Word mercury__array2d__HeadVar__2_2;

    mercury__array2d__HeadVar__2_2 = mercury__array2d__array2d_1_f_0(mercury__array2d__TypeInfo_for_T_4, mercury__array2d__Xss_3);
    return mercury__array2d__HeadVar__2_2;
  }
}

MR_bool MR_CALL 
mercury__array2d__is_empty_1_p_0(
  MR_Word mercury__array2d__TypeInfo_for_T_5,
  MR_Word mercury__array2d__HeadVar__1_1)
{
  {
    MR_bool mercury__array2d__succeeded;
    MR_ArrayPtr mercury__array2d__A_4 = ((MR_ArrayPtr) (MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__1_1, (MR_Integer) 2)));
    MR_Integer mercury__array2d__Var_8;
    MR_Integer mercury__array2d__Var_2 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__1_1, (MR_Integer) 0)));
    MR_Integer mercury__array2d__Var_3 = ((MR_Integer) (MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word mercury__array2d__TypeInfo_for_T_9;

{
#define MR_PROC_LABEL mercury__array2d__is_empty_1_p_0

	MR_ArrayPtr Array;
	MR_Integer Max;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_ArrayPtr, mercury__array2d__A_4 , Array);
		{

    Max = Array->size;


		;}
#undef MR_PROC_LABEL
	 mercury__array2d__Var_8  = Max;
}
    mercury__array2d__succeeded = ((MR_Integer) 0 == mercury__array2d__Var_8);
    return mercury__array2d__succeeded;
  }
}

static void MR_CALL 
mercury__array2d__array2d_1_f_0_1(
  void * mercury__array2d__env_ptr_arg)
{
  {
    struct mercury__array2d__array2d_2_f_0_env_0_s * mercury__array2d__env_ptr = (struct mercury__array2d__array2d_2_f_0_env_0_s *) mercury__array2d__env_ptr_arg;

    MR_builtin_longjmp((mercury__array2d__env_ptr)->mercury__array2d__array2d_2_f_0_env_0__commit_0, 1);
  }
}

static void MR_CALL 
mercury__array2d__array2d_1_f_0_3(
  void * mercury__array2d__env_ptr_arg)
{
  {
    struct mercury__array2d__array2d_2_f_0_env_0_s * mercury__array2d__env_ptr = (struct mercury__array2d__array2d_2_f_0_env_0_s *) mercury__array2d__env_ptr_arg;

    (mercury__array2d__env_ptr)->mercury__array2d__array2d_2_f_0_env_0__Ys_13 = ((MR_Word) (mercury__array2d__env_ptr)->mercury__array2d__array2d_2_f_0_env_0__conv1_Ys_13);
    mercury__array2d__array2d_1_f_0_2(mercury__array2d__env_ptr);
  }
}

static void MR_CALL 
mercury__array2d__array2d_1_f_0_2(
  void * mercury__array2d__env_ptr_arg)
{
  {
    struct mercury__array2d__array2d_2_f_0_env_0_s * mercury__array2d__env_ptr = (struct mercury__array2d__array2d_2_f_0_env_0_s *) mercury__array2d__env_ptr_arg;

    {
      MR_Integer mercury__array2d__Var_21;

      mercury__list__length_acc_3_p_0((mercury__array2d__env_ptr)->mercury__array2d__array2d_2_f_0_env_0__TypeInfo_for_T_16, (mercury__array2d__env_ptr)->mercury__array2d__array2d_2_f_0_env_0__Ys_13, (MR_Integer) 0, &mercury__array2d__Var_21);
      (mercury__array2d__env_ptr)->mercury__array2d__array2d_2_f_0_env_0__succeeded = ((mercury__array2d__env_ptr)->mercury__array2d__array2d_2_f_0_env_0__N_11 == mercury__array2d__Var_21);
      (mercury__array2d__env_ptr)->mercury__array2d__array2d_2_f_0_env_0__succeeded = !((mercury__array2d__env_ptr)->mercury__array2d__array2d_2_f_0_env_0__succeeded);
      if ((mercury__array2d__env_ptr)->mercury__array2d__array2d_2_f_0_env_0__succeeded)
        mercury__array2d__array2d_1_f_0_1(mercury__array2d__env_ptr);
    }
  }
}

static void MR_CALL 
mercury__array2d__array2d_1_f_0_4(
  void * mercury__array2d__env_ptr_arg)
{
  {
    struct mercury__array2d__array2d_2_f_0_env_0_s * mercury__array2d__env_ptr = (struct mercury__array2d__array2d_2_f_0_env_0_s *) mercury__array2d__env_ptr_arg;

    if (MR_builtin_setjmp((mercury__array2d__env_ptr)->mercury__array2d__array2d_2_f_0_env_0__commit_0) == 0)
      {
        mercury__list__member_2_p_1((mercury__array2d__env_ptr)->mercury__array2d__array2d_2_f_0_env_0__TypeInfo_10_41, &(mercury__array2d__env_ptr)->mercury__array2d__array2d_2_f_0_env_0__conv1_Ys_13, (MR_Word) (mercury__array2d__env_ptr)->mercury__array2d__array2d_2_f_0_env_0__HeadVar__1_1, mercury__array2d__array2d_1_f_0_3, mercury__array2d__env_ptr);
        (mercury__array2d__env_ptr)->mercury__array2d__array2d_2_f_0_env_0__succeeded = MR_FALSE;
      }
    else
      (mercury__array2d__env_ptr)->mercury__array2d__array2d_2_f_0_env_0__succeeded = MR_TRUE;
  }
}

MR_Word MR_CALL 
mercury__array2d__array2d_1_f_0(
  MR_Word mercury__array2d__TypeInfo_for_T_16,
  MR_Word mercury__array2d__HeadVar__1_1)
{
  {
    struct mercury__array2d__array2d_2_f_0_env_0_s mercury__array2d__env;

    (mercury__array2d__env).mercury__array2d__array2d_2_f_0_env_0__TypeInfo_for_T_16 = mercury__array2d__TypeInfo_for_T_16;
    (mercury__array2d__env).mercury__array2d__array2d_2_f_0_env_0__HeadVar__1_1 = mercury__array2d__HeadVar__1_1;
    {
      MR_Word mercury__array2d__HeadVar__2_2;

      if (((mercury__array2d__env).mercury__array2d__array2d_2_f_0_env_0__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_ArrayPtr mercury__array2d__Var_5;
        MR_Word mercury__array2d__TypeInfo_for_T_49;

{
#define MR_PROC_LABEL mercury__array2d__array2d_1_f_0

	MR_ArrayPtr Array;

		{

    ML_alloc_array(Array, 1, MR_ALLOC_ID);
    ML_init_array(Array, 0, 0);


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_ArrayPtr, Array, mercury__array2d__Var_5 );
}
        {
          mercury__array2d__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__2_2, 0) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__2_2, 1) = ((MR_Box) ((MR_Integer) 0));
          MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__2_2, 2) = ((MR_Box) (mercury__array2d__Var_5));
        }
      }
      else
      {
        MR_Word mercury__array2d__TypeCtorInfo_17_17 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
        MR_Word mercury__array2d__Xs_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), (mercury__array2d__env).mercury__array2d__array2d_2_f_0_env_0__HeadVar__1_1, (MR_Integer) 0)));
        MR_Integer mercury__array2d__M_10;
        MR_ArrayPtr mercury__array2d__A_12;
        MR_Word mercury__array2d__Var_14;
        MR_Word mercury__array2d__V_5_37;
        MR_Word mercury__array2d__V_6_38;
        MR_Word mercury__array2d__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), (mercury__array2d__env).mercury__array2d__array2d_2_f_0_env_0__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__array2d__conv0_V_5_37;

        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          (mercury__array2d__env).mercury__array2d__array2d_2_f_0_env_0__TypeInfo_10_41 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__array2d__TypeCtorInfo_17_17));
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((mercury__array2d__env).mercury__array2d__array2d_2_f_0_env_0__TypeInfo_for_T_16));
        }
        mercury__list__length_acc_3_p_0((mercury__array2d__env).mercury__array2d__array2d_2_f_0_env_0__TypeInfo_10_41, (MR_Word) (mercury__array2d__env).mercury__array2d__array2d_2_f_0_env_0__HeadVar__1_1, (MR_Integer) 0, &mercury__array2d__M_10);
        mercury__list__length_acc_3_p_0((mercury__array2d__env).mercury__array2d__array2d_2_f_0_env_0__TypeInfo_for_T_16, mercury__array2d__Xs_7, (MR_Integer) 0, &(mercury__array2d__env).mercury__array2d__array2d_2_f_0_env_0__N_11);
        mercury__list__reverse_2_p_0((mercury__array2d__env).mercury__array2d__array2d_2_f_0_env_0__TypeInfo_10_41, (MR_Word) (mercury__array2d__env).mercury__array2d__array2d_2_f_0_env_0__HeadVar__1_1, &mercury__array2d__conv0_V_5_37);
        mercury__array2d__V_5_37 = (MR_Word) mercury__array2d__conv0_V_5_37;
        mercury__array2d__V_6_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        mercury__list__condense_acc_3_p_0((mercury__array2d__env).mercury__array2d__array2d_2_f_0_env_0__TypeInfo_for_T_16, mercury__array2d__V_5_37, mercury__array2d__V_6_38, &mercury__array2d__Var_14);
        mercury__array__from_list_2_p_0((mercury__array2d__env).mercury__array2d__array2d_2_f_0_env_0__TypeInfo_for_T_16, mercury__array2d__Var_14, &mercury__array2d__A_12);
        mercury__array2d__array2d_1_f_0_4(&mercury__array2d__env);
        (mercury__array2d__env).mercury__array2d__array2d_2_f_0_env_0__succeeded = !((mercury__array2d__env).mercury__array2d__array2d_2_f_0_env_0__succeeded);
        if ((mercury__array2d__env).mercury__array2d__array2d_2_f_0_env_0__succeeded)
          {
            mercury__array2d__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__2_2, 0) = ((MR_Box) (mercury__array2d__M_10));
            MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__2_2, 1) = ((MR_Box) ((mercury__array2d__env).mercury__array2d__array2d_2_f_0_env_0__N_11));
            MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__2_2, 2) = ((MR_Box) (mercury__array2d__A_12));
          }
        else
        {
          MR_Word mercury__array2d__TypeCtorInfo_19_19 = (MR_Word) &mercury__array2d__array2d__type_ctor_info_array2d_1;
          MR_Word mercury__array2d__TypeInfo_20_20;
          MR_Box mercury__array2d__conv2_HeadVar__2_2;

          {
            mercury__array2d__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mercury__array2d__TypeInfo_20_20, 0) = ((MR_Box) (mercury__array2d__TypeCtorInfo_19_19));
            MR_hl_field(MR_mktag(0), mercury__array2d__TypeInfo_20_20, 1) = ((MR_Box) ((mercury__array2d__env).mercury__array2d__array2d_2_f_0_env_0__TypeInfo_for_T_16));
          }
          mercury__array2d__conv2_HeadVar__2_2 = mercury__require__func_error_1_f_0(mercury__array2d__TypeInfo_20_20, (MR_String) "array2d.array2d/1: non-rectangular list of lists");
          mercury__array2d__HeadVar__2_2 = ((MR_Word) mercury__array2d__conv2_HeadVar__2_2);
        }
      }
      return mercury__array2d__HeadVar__2_2;
    }
  }
}

MR_Word MR_CALL 
mercury__array2d__init_3_f_0(
  MR_Word mercury__array2d__TypeInfo_for_T_13,
  MR_Integer mercury__array2d__M_5,
  MR_Integer mercury__array2d__N_6,
  MR_Box mercury__array2d__X_7)
{
  {
    MR_bool mercury__array2d__succeeded = (mercury__array2d__M_5 >= (MR_Integer) 0);
    MR_Word mercury__array2d__HeadVar__4_4;
    MR_Integer mercury__array2d__Var_9;

    if (mercury__array2d__succeeded)
    {
      mercury__array2d__Var_9 = (MR_Integer) 0;
      mercury__array2d__succeeded = (mercury__array2d__N_6 >= mercury__array2d__Var_9);
    }
    if (mercury__array2d__succeeded)
    {
      MR_ArrayPtr mercury__array2d__Var_10;
      MR_Integer mercury__array2d__Var_11 = (mercury__array2d__M_5 * mercury__array2d__N_6);

      mercury__array__init_3_p_0(mercury__array2d__TypeInfo_for_T_13, mercury__array2d__Var_11, mercury__array2d__X_7, &mercury__array2d__Var_10);
      {
        mercury__array2d__HeadVar__4_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__4_4, 0) = ((MR_Box) (mercury__array2d__M_5));
        MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__4_4, 1) = ((MR_Box) (mercury__array2d__N_6));
        MR_hl_field(MR_mktag(0), mercury__array2d__HeadVar__4_4, 2) = ((MR_Box) (mercury__array2d__Var_10));
      }
    }
    else
    {
      MR_Word mercury__array2d__TypeCtorInfo_14_14 = (MR_Word) &mercury__array2d__array2d__type_ctor_info_array2d_1;
      MR_Word mercury__array2d__TypeInfo_15_15;
      MR_Box mercury__array2d__conv0_HeadVar__4_4;

      {
        mercury__array2d__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), mercury__array2d__TypeInfo_15_15, 0) = ((MR_Box) (mercury__array2d__TypeCtorInfo_14_14));
        MR_hl_field(MR_mktag(0), mercury__array2d__TypeInfo_15_15, 1) = ((MR_Box) (mercury__array2d__TypeInfo_for_T_13));
      }
      mercury__array2d__conv0_HeadVar__4_4 = mercury__require__func_error_1_f_0(mercury__array2d__TypeInfo_15_15, (MR_String) "array2d.init: bounds must be non-negative");
      mercury__array2d__HeadVar__4_4 = ((MR_Word) mercury__array2d__conv0_HeadVar__4_4);
    }
    return mercury__array2d__HeadVar__4_4;
  }
}

static MR_bool MR_CALL 
mercury__array2d____Unify____array2d_1_0_10001(
  MR_Box mercury__array2d__wrapper_arg_1,
  MR_Box mercury__array2d__wrapper_arg_2,
  MR_Box mercury__array2d__wrapper_arg_3)
{
  {
    MR_bool mercury__array2d__succeeded;

    mercury__array2d__succeeded = mercury__array2d____Unify____array2d_1_0(((MR_Word) mercury__array2d__wrapper_arg_1), ((MR_Word) mercury__array2d__wrapper_arg_2), ((MR_Word) mercury__array2d__wrapper_arg_3));
    return mercury__array2d__succeeded;
  }
}

static void MR_CALL 
mercury__array2d____Compare____array2d_1_0_10001(
  MR_Box mercury__array2d__wrapper_arg_1,
  MR_Box * mercury__array2d__wrapper_arg_2,
  MR_Box mercury__array2d__wrapper_arg_3,
  MR_Box mercury__array2d__wrapper_arg_4)
{
  {
    MR_Word mercury__array2d__conv0_HeadVar__1_1;

    mercury__array2d____Compare____array2d_1_0(((MR_Word) mercury__array2d__wrapper_arg_1), &mercury__array2d__conv0_HeadVar__1_1, ((MR_Word) mercury__array2d__wrapper_arg_3), ((MR_Word) mercury__array2d__wrapper_arg_4));
    *mercury__array2d__wrapper_arg_2 = ((MR_Box) (mercury__array2d__conv0_HeadVar__1_1));
  }
}

void mercury__array2d__init(void)
{
}

void mercury__array2d__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__array2d__array2d__type_ctor_info_array2d_1);
}

void mercury__array2d__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__array2d__grade_check(void)
{
    return &MR_GRADE_VAR;
}

/* :- end_module array2d. */
