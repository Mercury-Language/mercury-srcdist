/*
** Automatically generated from `std_util.m'
** by the Mercury compiler,
** version rotd-2014-12-12
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


/* :- module std_util. */
/* :- implementation. */

/*
INIT mercury__std_util__init
ENDINIT
*/

#include "std_util.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "benchmarking.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
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
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
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




#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__std_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);


static /* final */ const MR_Box mercury__std_util_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__std_util_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__std_util_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__std_util_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__std_util_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__std_util_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__std_util_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__std_util_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__std_util_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "int.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "bitmap.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "char.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "dir.mh"
#include "dir.mh"
#include "table_builtin.mh"
#include "table_builtin.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "benchmarking.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "dir.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "rtti_implementation.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "table_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "time.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "float.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "construct.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "version_array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "array.mh"
#include "array.mh"
#include "type_desc.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "exception.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "store.mh"
#include "store.mh"
#include "store.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "math.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "pretty_printer.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "version_array.mh"
#include "version_array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "version_array.mh"
#include "version_array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "private_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#include "array.mh"
#include "array.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "dir.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "table_builtin.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "time.mh"
#include "version_array.mh"
#include "version_array.mh"



#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__std_util__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__std_util__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 78 "std_util.m"
MR_bool MR_CALL 
mercury__std_util__negate_1_p_0(
#line 78 "std_util.m"
  MR_Word mercury__std_util__P_2)
#line 78 "std_util.m"
{
#line 108 "std_util.m"
  {
#line 108 "std_util.m"
    MR_bool mercury__std_util__succeeded;
#line 108 "std_util.m"
    MR_bool MR_CALL (* mercury__std_util__func_0)(MR_Box) = ((MR_bool MR_CALL (*)(MR_Box)) (MR_hl_field(MR_mktag(0), mercury__std_util__P_2, (MR_Integer) 1)));

#line 108 "std_util.m"
    {
#line 108 "std_util.m"
      mercury__std_util__succeeded = mercury__std_util__func_0(((MR_Box) mercury__std_util__P_2));
    }
#line 108 "std_util.m"
    mercury__std_util__succeeded = !(mercury__std_util__succeeded);
#line 108 "std_util.m"
    return mercury__std_util__succeeded;
#line 108 "std_util.m"
  }
#line 78 "std_util.m"
}

#line 71 "std_util.m"
MR_bool MR_CALL 
mercury__std_util__isnt_2_p_0(
#line 71 "std_util.m"
  MR_Word mercury__std_util__TypeInfo_for_T_5,
#line 71 "std_util.m"
  MR_Word mercury__std_util__P_3,
#line 71 "std_util.m"
  MR_Box mercury__std_util__X_4)
#line 71 "std_util.m"
{
#line 105 "std_util.m"
  {
#line 105 "std_util.m"
    MR_bool mercury__std_util__succeeded;
#line 105 "std_util.m"
    MR_bool MR_CALL (* mercury__std_util__func_0)(MR_Box, MR_Box) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__std_util__P_3, (MR_Integer) 1)));

#line 105 "std_util.m"
    {
#line 105 "std_util.m"
      mercury__std_util__succeeded = mercury__std_util__func_0(((MR_Box) mercury__std_util__P_3), mercury__std_util__X_4);
    }
#line 105 "std_util.m"
    mercury__std_util__succeeded = !(mercury__std_util__succeeded);
#line 105 "std_util.m"
    return mercury__std_util__succeeded;
#line 105 "std_util.m"
  }
#line 71 "std_util.m"
}

#line 61 "std_util.m"
MR_Word MR_CALL 
mercury__std_util__maybe_func_2_f_0(
#line 61 "std_util.m"
  MR_Word mercury__std_util__TypeInfo_for_T1_7,
#line 61 "std_util.m"
  MR_Word mercury__std_util__TypeInfo_for_T2_8,
#line 61 "std_util.m"
  MR_Word mercury__std_util__PF_4,
#line 61 "std_util.m"
  MR_Box mercury__std_util__X_5)
#line 61 "std_util.m"
{
#line 92 "std_util.m"
  {
#line 92 "std_util.m"
    MR_bool mercury__std_util__succeeded;
#line 92 "std_util.m"
    MR_Word mercury__std_util__HeadVar__3_3;
#line 92 "std_util.m"
    MR_Box mercury__std_util__Y_6;
#line 93 "std_util.m"
    MR_bool MR_CALL (* mercury__std_util__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__std_util__PF_4, (MR_Integer) 1)));

#line 93 "std_util.m"
    {
#line 93 "std_util.m"
      mercury__std_util__succeeded = mercury__std_util__func_0(((MR_Box) mercury__std_util__PF_4), mercury__std_util__X_5, &mercury__std_util__Y_6);
    }
#line 92 "std_util.m"
    if (mercury__std_util__succeeded)
#line 93 "std_util.m"
      {
#line 93 "std_util.m"
        mercury__std_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 93 "std_util.m"
        MR_hl_field(MR_mktag(1), mercury__std_util__HeadVar__3_3, 0) = mercury__std_util__Y_6;
#line 93 "std_util.m"
      }
#line 92 "std_util.m"
    else
#line 93 "std_util.m"
      mercury__std_util__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 92 "std_util.m"
    return mercury__std_util__HeadVar__3_3;
#line 92 "std_util.m"
  }
#line 61 "std_util.m"
}

#line 58 "std_util.m"
void MR_CALL 
mercury__std_util__maybe_pred_3_p_0(
#line 58 "std_util.m"
  MR_Word mercury__std_util__TypeInfo_for_T1_8,
#line 58 "std_util.m"
  MR_Word mercury__std_util__TypeInfo_for_T2_9,
#line 58 "std_util.m"
  MR_Word mercury__std_util__Pred_4,
#line 58 "std_util.m"
  MR_Box mercury__std_util__X_5,
#line 58 "std_util.m"
  MR_Word * mercury__std_util__Y_6)
#line 58 "std_util.m"
{
#line 90 "std_util.m"
  {
#line 90 "std_util.m"
    MR_bool mercury__std_util__succeeded;
#line 90 "std_util.m"
    MR_Box mercury__std_util__Z_7;
#line 90 "std_util.m"
    MR_bool MR_CALL (* mercury__std_util__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__std_util__Pred_4, (MR_Integer) 1)));

#line 90 "std_util.m"
    {
#line 90 "std_util.m"
      mercury__std_util__succeeded = mercury__std_util__func_0(((MR_Box) mercury__std_util__Pred_4), mercury__std_util__X_5, &mercury__std_util__Z_7);
    }
#line 90 "std_util.m"
    if (mercury__std_util__succeeded)
#line 90 "std_util.m"
      {
#line 90 "std_util.m"
        MR_Word base;
#line 90 "std_util.m"
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
#line 90 "std_util.m"
        *mercury__std_util__Y_6 = base;
#line 90 "std_util.m"
        MR_hl_field(MR_mktag(1), base, 0) = mercury__std_util__Z_7;
#line 90 "std_util.m"
      }
#line 90 "std_util.m"
    else
#line 90 "std_util.m"
      *mercury__std_util__Y_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 90 "std_util.m"
  }
#line 58 "std_util.m"
}

#line 48 "std_util.m"
MR_Box MR_CALL 
mercury__std_util__id_1_f_0(
#line 48 "std_util.m"
  MR_Word mercury__std_util__TypeInfo_for_T_4,
#line 48 "std_util.m"
  MR_Box mercury__std_util__X_3)
#line 48 "std_util.m"
{
#line 110 "std_util.m"
  {
#line 110 "std_util.m"
    MR_bool mercury__std_util__succeeded;
#line 110 "std_util.m"
    MR_Box mercury__std_util__X_2 = mercury__std_util__X_3;

#line 110 "std_util.m"
    return mercury__std_util__X_2;
#line 110 "std_util.m"
  }
#line 48 "std_util.m"
}

#line 44 "std_util.m"
MR_Box MR_CALL 
mercury__std_util__pow_3_f_0(
#line 44 "std_util.m"
  MR_Word mercury__std_util__TypeInfo_for_T_11,
#line 44 "std_util.m"
  MR_Word mercury__std_util__F_5,
#line 44 "std_util.m"
  MR_Integer mercury__std_util__N_6,
#line 44 "std_util.m"
  MR_Box mercury__std_util__X_7)
#line 44 "std_util.m"
{
#line 101 "std_util.m"
  while (MR_TRUE)
#line 101 "std_util.m"
    {
#line 101 "std_util.m"
      /* tailcall optimized into a loop */
#line 101 "std_util.m"
      {
#line 101 "std_util.m"
        MR_bool mercury__std_util__succeeded = (mercury__std_util__N_6 == (MR_Integer) 0);
#line 101 "std_util.m"
        MR_Box mercury__std_util__HeadVar__4_4;

#line 101 "std_util.m"
        if (mercury__std_util__succeeded)
#line 101 "std_util.m"
          mercury__std_util__HeadVar__4_4 = mercury__std_util__X_7;
#line 101 "std_util.m"
        else
#line 102 "std_util.m"
          {
#line 102 "std_util.m"
            MR_Integer mercury__std_util__V_8_8 = (mercury__std_util__N_6 - (MR_Integer) 1);
#line 102 "std_util.m"
            MR_Box mercury__std_util__V_10_10;
#line 102 "std_util.m"
            MR_Box MR_CALL (* mercury__std_util__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__std_util__F_5, (MR_Integer) 1)));

#line 102 "std_util.m"
            {
#line 102 "std_util.m"
              mercury__std_util__V_10_10 = mercury__std_util__func_0(((MR_Box) mercury__std_util__F_5), mercury__std_util__X_7);
            }
#line 102 "std_util.m"
            /* direct tailcall eliminated */
#line 102 "std_util.m"
            {
#line 102 "std_util.m"
              MR_Integer mercury__std_util__N__tmp_copy_6 = mercury__std_util__V_8_8;
#line 102 "std_util.m"
              MR_Box mercury__std_util__X__tmp_copy_7 = mercury__std_util__V_10_10;

#line 102 "std_util.m"
              mercury__std_util__X_7 = mercury__std_util__X__tmp_copy_7;
#line 102 "std_util.m"
              mercury__std_util__N_6 = mercury__std_util__N__tmp_copy_6;
#line 102 "std_util.m"
            }
#line 102 "std_util.m"
            continue;
#line 102 "std_util.m"
          }
#line 101 "std_util.m"
        return mercury__std_util__HeadVar__4_4;
#line 101 "std_util.m"
      }
#line 101 "std_util.m"
      break;
#line 101 "std_util.m"
    }
#line 44 "std_util.m"
}

#line 38 "std_util.m"
MR_Box MR_CALL 
mercury__std_util__converse_3_f_0(
#line 38 "std_util.m"
  MR_Word mercury__std_util__TypeInfo_for_T1_8,
#line 38 "std_util.m"
  MR_Word mercury__std_util__TypeInfo_for_T2_9,
#line 38 "std_util.m"
  MR_Word mercury__std_util__TypeInfo_for_T3_10,
#line 38 "std_util.m"
  MR_Word mercury__std_util__F_5,
#line 38 "std_util.m"
  MR_Box mercury__std_util__X_6,
#line 38 "std_util.m"
  MR_Box mercury__std_util__Y_7)
#line 38 "std_util.m"
{
#line 99 "std_util.m"
  {
#line 99 "std_util.m"
    MR_bool mercury__std_util__succeeded;
#line 99 "std_util.m"
    MR_Box mercury__std_util__HeadVar__4_4;
#line 99 "std_util.m"
    MR_Box MR_CALL (* mercury__std_util__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__std_util__F_5, (MR_Integer) 1)));

#line 99 "std_util.m"
    {
#line 99 "std_util.m"
      return mercury__std_util__HeadVar__4_4 = mercury__std_util__func_0(((MR_Box) mercury__std_util__F_5), mercury__std_util__Y_7, mercury__std_util__X_6);
    }
#line 99 "std_util.m"
    return mercury__std_util__HeadVar__4_4;
#line 99 "std_util.m"
  }
#line 38 "std_util.m"
}

#line 34 "std_util.m"
MR_Box MR_CALL 
mercury__std_util__compose_3_f_0(
#line 34 "std_util.m"
  MR_Word mercury__std_util__TypeInfo_for_T2_9,
#line 34 "std_util.m"
  MR_Word mercury__std_util__TypeInfo_for_T3_10,
#line 34 "std_util.m"
  MR_Word mercury__std_util__TypeInfo_for_T1_11,
#line 34 "std_util.m"
  MR_Word mercury__std_util__F_5,
#line 34 "std_util.m"
  MR_Word mercury__std_util__G_6,
#line 34 "std_util.m"
  MR_Box mercury__std_util__X_7)
#line 34 "std_util.m"
{
#line 95 "std_util.m"
  {
#line 95 "std_util.m"
    MR_bool mercury__std_util__succeeded;
#line 95 "std_util.m"
    MR_Box mercury__std_util__HeadVar__4_4;
#line 95 "std_util.m"
    MR_Box mercury__std_util__V_8_8;
#line 96 "std_util.m"
    MR_Box MR_CALL (* mercury__std_util__func_0)(MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__std_util__G_6, (MR_Integer) 1)));
#line 96 "std_util.m"
    MR_Box MR_CALL (* mercury__std_util__func_1)(MR_Box, MR_Box);

#line 96 "std_util.m"
    {
#line 96 "std_util.m"
      mercury__std_util__V_8_8 = mercury__std_util__func_0(((MR_Box) mercury__std_util__G_6), mercury__std_util__X_7);
    }
#line 96 "std_util.m"
    mercury__std_util__func_1 = ((MR_Box MR_CALL (*)(MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__std_util__F_5, (MR_Integer) 1)));
#line 96 "std_util.m"
    {
#line 96 "std_util.m"
      return mercury__std_util__HeadVar__4_4 = mercury__std_util__func_1(((MR_Box) mercury__std_util__F_5), mercury__std_util__V_8_8);
    }
#line 95 "std_util.m"
    return mercury__std_util__HeadVar__4_4;
#line 95 "std_util.m"
  }
#line 34 "std_util.m"
}

void mercury__std_util__init(void)
{
}

void mercury__std_util__init_type_tables(void)
{
}

void mercury__std_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module std_util. */
