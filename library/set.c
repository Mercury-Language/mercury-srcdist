/*
** Automatically generated from `set.m'
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


/* :- module set. */
/* :- implementation. */

/*
INIT mercury__set__init
ENDINIT
*/

#include "set.mih"


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



#line 241 "set.m"
struct mercury__set__map_3_p_4_env_0_s {
#line 241 "set.m"
  MR_Word mercury__set__map_3_p_4_env_0__TypeInfo_for_T2_10;
#line 241 "set.m"
  MR_Word * mercury__set__map_3_p_4_env_0__S2_6;
#line 241 "set.m"
  MR_Cont mercury__set__map_3_p_4_env_0__cont;
#line 241 "set.m"
  void * mercury__set__map_3_p_4_env_0__cont_env_ptr;
#line 690 "set.m"
  MR_Word mercury__set__map_3_p_4_env_0__L2_8;
#line 690 "set.m"
  MR_Word mercury__set__map_3_p_4_env_0__V_4_17;
#line 690 "set.m"
  MR_Integer mercury__set__map_3_p_4_env_0__V_5_20;
#line 690 "set.m"
  MR_Integer mercury__set__map_3_p_4_env_0__V_5_25;
#line 241 "set.m"
};

#line 240 "set.m"
struct mercury__set__map_3_p_3_env_0_s {
#line 240 "set.m"
  MR_Word mercury__set__map_3_p_3_env_0__TypeInfo_for_T2_10;
#line 240 "set.m"
  MR_Word * mercury__set__map_3_p_3_env_0__S2_6;
#line 240 "set.m"
  MR_Cont mercury__set__map_3_p_3_env_0__cont;
#line 240 "set.m"
  void * mercury__set__map_3_p_3_env_0__cont_env_ptr;
#line 690 "set.m"
  MR_Word mercury__set__map_3_p_3_env_0__L2_8;
#line 690 "set.m"
  MR_Word mercury__set__map_3_p_3_env_0__V_4_17;
#line 690 "set.m"
  MR_Integer mercury__set__map_3_p_3_env_0__V_5_20;
#line 690 "set.m"
  MR_Integer mercury__set__map_3_p_3_env_0__V_5_25;
#line 240 "set.m"
};


#line 135 "set.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__set__set_ordlist__pti_set_ordlist_1__pseudo_1;

#line 138 "set.c"
static MR_bool MR_CALL 
mercury__set____Unify____set_1_0_10001(
#line 141 "set.c"
  MR_Box mercury__set__wrapper_arg_1,
#line 143 "set.c"
  MR_Box mercury__set__wrapper_arg_2,
#line 145 "set.c"
  MR_Box mercury__set__wrapper_arg_3);

#line 148 "set.c"
static void MR_CALL 
mercury__set____Compare____set_1_0_10001(
#line 151 "set.c"
  MR_Box mercury__set__wrapper_arg_1,
#line 153 "set.c"
  MR_Box * mercury__set__wrapper_arg_2,
#line 155 "set.c"
  MR_Box mercury__set__wrapper_arg_3,
#line 157 "set.c"
  MR_Box mercury__set__wrapper_arg_4);

#line 99 "list.int"
static void MR_CALL 
mercury__set__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(
#line 99 "list.int"
  MR_Word mercury__set__V_16_16,
#line 99 "list.int"
  MR_Word mercury__set__HeadVar__2_2,
#line 99 "list.int"
  MR_Word * mercury__set__HeadVar__3_3);

#line 126 "list.int"
static void MR_CALL 
mercury__set__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
#line 126 "list.int"
  MR_Word mercury__set__V_18_18,
#line 126 "list.int"
  MR_Word mercury__set__HeadVar__2_2,
#line 126 "list.int"
  MR_Box mercury__set__HeadVar__3_3,
#line 126 "list.int"
  MR_Box * mercury__set__HeadVar__4_4);

#line 16 "ops.opt"
static MR_Integer MR_CALL 
mercury__set__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 690 "set.m"
static void MR_CALL 
mercury__set__map_3_p_4_1(
#line 690 "set.m"
  void * mercury__set__env_ptr_arg);

#line 690 "set.m"
static void MR_CALL 
mercury__set__map_3_p_3_1(
#line 690 "set.m"
  void * mercury__set__env_ptr_arg);


static /* final */ const MR_Box mercury__set_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__set_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__set_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__set_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__set_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__set_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__set_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__set_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__set_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "table_builtin.mh"
#include "time.mh"
#include "version_array.mh"
#include "builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "int.mh"
#include "array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "char.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "float.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "time.mh"
#include "array.mh"
#include "dir.mh"
#include "table_builtin.mh"
#include "benchmarking.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "construct.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "rtti_implementation.mh"
#include "array.mh"
#include "bitmap.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "table_builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "version_array.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "time.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "type_desc.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "exception.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "stm_builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "store.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "math.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "pretty_printer.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "array.mh"
#include "version_array.mh"
#include "string.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "private_builtin.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"



#line 368 "set.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__set__set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 376 "set.c"
const MR_TypeCtorInfo_Struct mercury__set__set__type_ctor_info_set_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__set____Unify____set_1_0_10001)),
  ((MR_Box) (mercury__set____Compare____set_1_0_10001)),
  (MR_String) "set",
  (MR_String) "set",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__set__set_ordlist__pti_set_ordlist_1__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 393 "set.c"
static MR_bool MR_CALL 
mercury__set____Unify____set_1_0_10001(
#line 396 "set.c"
  MR_Box mercury__set__wrapper_arg_1,
#line 398 "set.c"
  MR_Box mercury__set__wrapper_arg_2,
#line 400 "set.c"
  MR_Box mercury__set__wrapper_arg_3)
#line 402 "set.c"
{
#line 404 "set.c"
  {
#line 406 "set.c"
    MR_bool mercury__set__succeeded;

#line 409 "set.c"
    {
#line 411 "set.c"
      mercury__set__succeeded = mercury__set____Unify____set_1_0(((MR_Word) mercury__set__wrapper_arg_1), ((MR_Word) mercury__set__wrapper_arg_2), ((MR_Word) mercury__set__wrapper_arg_3));
    }
#line 414 "set.c"
    return mercury__set__succeeded;
#line 416 "set.c"
  }
#line 418 "set.c"
}

#line 421 "set.c"
static void MR_CALL 
mercury__set____Compare____set_1_0_10001(
#line 424 "set.c"
  MR_Box mercury__set__wrapper_arg_1,
#line 426 "set.c"
  MR_Box * mercury__set__wrapper_arg_2,
#line 428 "set.c"
  MR_Box mercury__set__wrapper_arg_3,
#line 430 "set.c"
  MR_Box mercury__set__wrapper_arg_4)
#line 432 "set.c"
{
#line 434 "set.c"
  {
#line 436 "set.c"
    MR_Word mercury__set__conv0_HeadVar__1_1;

#line 439 "set.c"
    {
#line 441 "set.c"
      mercury__set____Compare____set_1_0(((MR_Word) mercury__set__wrapper_arg_1), &mercury__set__conv0_HeadVar__1_1, ((MR_Word) mercury__set__wrapper_arg_3), ((MR_Word) mercury__set__wrapper_arg_4));
    }
#line 444 "set.c"
    *mercury__set__wrapper_arg_2 = ((MR_Box) (mercury__set__conv0_HeadVar__1_1));
#line 446 "set.c"
  }
#line 448 "set.c"
}

#line 99 "list.int"
static void MR_CALL 
mercury__set__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(
#line 99 "list.int"
  MR_Word mercury__set__V_16_16,
#line 99 "list.int"
  MR_Word mercury__set__HeadVar__2_2,
#line 99 "list.int"
  MR_Word * mercury__set__HeadVar__3_3)
#line 99 "list.int"
{
#line 710 "list.opt"
  while (MR_TRUE)
#line 710 "list.opt"
    {
#line 710 "list.opt"
      /* tailcall optimized into a loop */
#line 710 "list.opt"
      {
#line 710 "list.opt"
        MR_bool mercury__set__succeeded;

#line 710 "list.opt"
        if ((mercury__set__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 710 "list.opt"
          *mercury__set__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 710 "list.opt"
        else
#line 711 "list.opt"
          {
#line 711 "list.opt"
            MR_Box mercury__set__V_6_6 = (MR_hl_field(MR_mktag(1), mercury__set__HeadVar__2_2, (MR_Integer) 0));
#line 711 "list.opt"
            MR_Word mercury__set__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set__HeadVar__2_2, (MR_Integer) 1)));
#line 717 "list.opt"
            MR_Box mercury__set__V_9_9;
#line 724 "list.opt"
            MR_bool MR_CALL (* mercury__set__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__set__V_16_16, (MR_Integer) 1)));

#line 724 "list.opt"
            {
#line 724 "list.opt"
              mercury__set__succeeded = mercury__set__func_0(((MR_Box) mercury__set__V_16_16), mercury__set__V_6_6, &mercury__set__V_9_9);
            }
#line 717 "list.opt"
            if (mercury__set__succeeded)
#line 715 "list.opt"
              {
#line 715 "list.opt"
                MR_Word mercury__set__V_10_10;

#line 715 "list.opt"
                {
#line 715 "list.opt"
                  mercury__set__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(mercury__set__V_16_16, mercury__set__V_7_7, &mercury__set__V_10_10);
                }
#line 716 "list.opt"
                {
#line 716 "list.opt"
                  MR_Word base;
#line 716 "list.opt"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 716 "list.opt"
                  *mercury__set__HeadVar__3_3 = base;
#line 716 "list.opt"
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__set__V_9_9;
#line 716 "list.opt"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__set__V_10_10));
#line 716 "list.opt"
                }
#line 715 "list.opt"
              }
#line 717 "list.opt"
            else
#line 718 "list.opt"
              {
#line 718 "list.opt"
                /* direct tailcall eliminated */
#line 718 "list.opt"
                {
#line 718 "list.opt"
                  MR_Word mercury__set__HeadVar__2__tmp_copy_2 = mercury__set__V_7_7;

#line 718 "list.opt"
                  mercury__set__HeadVar__2_2 = mercury__set__HeadVar__2__tmp_copy_2;
#line 718 "list.opt"
                }
#line 718 "list.opt"
                continue;
#line 718 "list.opt"
              }
#line 711 "list.opt"
          }
#line 710 "list.opt"
      }
#line 710 "list.opt"
      break;
#line 710 "list.opt"
    }
#line 99 "list.int"
}

#line 126 "list.int"
static void MR_CALL 
mercury__set__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
#line 126 "list.int"
  MR_Word mercury__set__V_18_18,
#line 126 "list.int"
  MR_Word mercury__set__HeadVar__2_2,
#line 126 "list.int"
  MR_Box mercury__set__HeadVar__3_3,
#line 126 "list.int"
  MR_Box * mercury__set__HeadVar__4_4)
#line 126 "list.int"
{
#line 394 "list.opt"
  while (MR_TRUE)
#line 394 "list.opt"
    {
#line 394 "list.opt"
      /* tailcall optimized into a loop */
#line 394 "list.opt"
      {
#line 394 "list.opt"
        MR_bool mercury__set__succeeded;

#line 394 "list.opt"
        if ((mercury__set__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 394 "list.opt"
          *mercury__set__HeadVar__4_4 = mercury__set__HeadVar__3_3;
#line 394 "list.opt"
        else
#line 396 "list.opt"
          {
#line 396 "list.opt"
            MR_Box mercury__set__V_10_9 = (MR_hl_field(MR_mktag(1), mercury__set__HeadVar__2_2, (MR_Integer) 0));
#line 396 "list.opt"
            MR_Word mercury__set__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set__HeadVar__2_2, (MR_Integer) 1)));
#line 396 "list.opt"
            MR_Box mercury__set__V_15_13;
#line 404 "list.opt"
            MR_Box MR_CALL (* mercury__set__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__set__V_18_18, (MR_Integer) 1)));

#line 404 "list.opt"
            {
#line 404 "list.opt"
              mercury__set__V_15_13 = mercury__set__func_0(((MR_Box) mercury__set__V_18_18), mercury__set__V_10_9, mercury__set__HeadVar__3_3);
            }
#line 398 "list.opt"
            /* direct tailcall eliminated */
#line 398 "list.opt"
            {
#line 398 "list.opt"
              MR_Word mercury__set__HeadVar__2__tmp_copy_2 = mercury__set__V_11_10;
#line 398 "list.opt"
              MR_Box mercury__set__HeadVar__3__tmp_copy_3 = mercury__set__V_15_13;

#line 398 "list.opt"
              mercury__set__HeadVar__3_3 = mercury__set__HeadVar__3__tmp_copy_3;
#line 398 "list.opt"
              mercury__set__HeadVar__2_2 = mercury__set__HeadVar__2__tmp_copy_2;
#line 398 "list.opt"
            }
#line 398 "list.opt"
            continue;
#line 396 "list.opt"
          }
#line 394 "list.opt"
      }
#line 394 "list.opt"
      break;
#line 394 "list.opt"
    }
#line 126 "list.int"
}

#line 16 "ops.opt"
static MR_Integer MR_CALL 
mercury__set__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 16 "ops.opt"
{
#line 41 "ops.opt"
  {
#line 41 "ops.opt"
    MR_bool mercury__set__succeeded;

#line 41 "ops.opt"
    return (MR_Integer) 1200;
#line 41 "ops.opt"
  }
#line 16 "ops.opt"
}

#line 38 "set.m"
void MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(
#line 38 "set.m"
  MR_Word mercury__set__V_7_7,
#line 38 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_5,
#line 38 "set.m"
  MR_Word mercury__set__List_3,
#line 38 "set.m"
  MR_Word * mercury__set__Set_4)
#line 38 "set.m"
{
#line 563 "set.m"
  {
#line 563 "set.m"
    MR_bool mercury__set__succeeded;
#line 563 "set.m"
    MR_Word mercury__set__V_4_9;
#line 563 "set.m"
    MR_Integer mercury__set__V_5_13;

#line 91 "list.opt"
    {
#line 91 "list.opt"
      mercury__list__length_acc_3_p_0(mercury__set__TypeInfo_for_T_5, (MR_Word) mercury__set__List_3, (MR_Integer) 0, &mercury__set__V_5_13);
    }
#line 123 "list.opt"
    {
#line 123 "list.opt"
      mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__set__V_7_7, mercury__set__TypeInfo_for_T_5, mercury__set__V_5_13, mercury__set__List_3, &mercury__set__V_4_9);
    }
#line 31 "set_ordlist.opt"
    *mercury__set__Set_4 = (MR_Word) mercury__set__V_4_9;
#line 563 "set.m"
  }
#line 38 "set.m"
}

#line 39 "set.m"
MR_Word MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_108_105_115_116_95_116_111_95_115_101_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_1_f_0(
#line 39 "set.m"
  MR_Word mercury__set__V_7_7,
#line 39 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_5,
#line 39 "set.m"
  MR_Word mercury__set__Xs_3)
#line 39 "set.m"
{
#line 557 "set.m"
  {
#line 557 "set.m"
    MR_bool mercury__set__succeeded;
#line 557 "set.m"
    MR_Word mercury__set__S_4;
#line 557 "set.m"
    MR_Word mercury__set__V_4_12;
#line 557 "set.m"
    MR_Integer mercury__set__V_5_16;

#line 91 "list.opt"
    {
#line 91 "list.opt"
      mercury__list__length_acc_3_p_0(mercury__set__TypeInfo_for_T_5, (MR_Word) mercury__set__Xs_3, (MR_Integer) 0, &mercury__set__V_5_16);
    }
#line 123 "list.opt"
    {
#line 123 "list.opt"
      mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__set__V_7_7, mercury__set__TypeInfo_for_T_5, mercury__set__V_5_16, mercury__set__Xs_3, &mercury__set__V_4_12);
    }
#line 31 "set_ordlist.opt"
    mercury__set__S_4 = (MR_Word) mercury__set__V_4_12;
#line 557 "set.m"
    return mercury__set__S_4;
#line 557 "set.m"
  }
#line 39 "set.m"
}

#line 104 "set.m"
MR_bool MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(
#line 104 "set.m"
  MR_Word mercury__set__V_11_11,
#line 104 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_8,
#line 104 "set.m"
  MR_Word mercury__set__X_1,
#line 104 "set.m"
  MR_Word mercury__set__Set_2)
#line 104 "set.m"
{
#line 618 "set.m"
  {
#line 618 "set.m"
    MR_bool mercury__set__succeeded;
#line 618 "set.m"
    MR_Word mercury__set__V_9_9;
#line 618 "set.m"
    MR_Word mercury__set__V_5_14 = (MR_Word) mercury__set__Set_2;

#line 69 "set_ordlist.opt"
    {
#line 69 "set_ordlist.opt"
      mercury__set_ordlist__is_member_loop_3_p_0(mercury__set__TypeInfo_for_T_8, ((MR_Box) (mercury__set__X_1)), (MR_Word) mercury__set__V_5_14, &mercury__set__V_9_9);
    }
#line 619 "set.m"
    mercury__set__succeeded = ((MR_Integer) 1 == mercury__set__V_9_9);
#line 618 "set.m"
    return mercury__set__succeeded;
#line 618 "set.m"
  }
#line 104 "set.m"
}

#line 114 "set.m"
MR_bool MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(
#line 114 "set.m"
  MR_Word mercury__set__V_7_7,
#line 114 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_5,
#line 114 "set.m"
  MR_Word mercury__set__Set_3,
#line 114 "set.m"
  MR_Word mercury__set__X_4)
#line 114 "set.m"
{
#line 71 "set_ordlist.opt"
  {
#line 71 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;

#line 71 "set_ordlist.opt"
    {
#line 71 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__set_ordlist__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mercury__set__V_7_7, mercury__set__TypeInfo_for_T_5, mercury__set__X_4, mercury__set__Set_3);
    }
#line 71 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 71 "set_ordlist.opt"
  }
#line 114 "set.m"
}

#line 120 "set.m"
void MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
#line 120 "set.m"
  MR_Word mercury__set__V_11_11,
#line 120 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_9,
#line 120 "set.m"
  MR_Word mercury__set__X_4,
#line 120 "set.m"
  MR_Word mercury__set__STATE_VARIABLE_Set_0_6,
#line 120 "set.m"
  MR_Word * mercury__set__STATE_VARIABLE_Set_7)
#line 120 "set.m"
{
#line 590 "set.m"
  {
#line 590 "set.m"
    MR_bool mercury__set__succeeded;
#line 590 "set.m"
    MR_Word mercury__set__V_5_13 = (MR_Word) mercury__set__STATE_VARIABLE_Set_0_6;
#line 590 "set.m"
    MR_Word mercury__set__V_6_14;
#line 73 "set_ordlist.opt"
    MR_Word mercury__set__conv0_V_6_14;

#line 73 "set_ordlist.opt"
    {
#line 73 "set_ordlist.opt"
      mercury__set_ordlist__insert_loop_3_p_0(mercury__set__TypeInfo_for_T_9, (MR_Word) mercury__set__V_5_13, ((MR_Box) (mercury__set__X_4)), &mercury__set__conv0_V_6_14);
    }
#line 73 "set_ordlist.opt"
    mercury__set__V_6_14 = (MR_Word) mercury__set__conv0_V_6_14;
#line 72 "set_ordlist.opt"
    *mercury__set__STATE_VARIABLE_Set_7 = (MR_Word) mercury__set__V_6_14;
#line 590 "set.m"
  }
#line 120 "set.m"
}

#line 119 "set.m"
MR_Word MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(
#line 119 "set.m"
  MR_Word mercury__set__V_9_9,
#line 119 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_7,
#line 119 "set.m"
  MR_Word mercury__set__S1_4,
#line 119 "set.m"
  MR_Word mercury__set__T_5)
#line 119 "set.m"
{
#line 587 "set.m"
  {
#line 587 "set.m"
    MR_bool mercury__set__succeeded;
#line 587 "set.m"
    MR_Word mercury__set__S2_6;
#line 587 "set.m"
    MR_Word mercury__set__V_5_17 = (MR_Word) mercury__set__S1_4;
#line 587 "set.m"
    MR_Word mercury__set__V_6_18;
#line 73 "set_ordlist.opt"
    MR_Word mercury__set__conv0_V_6_18;

#line 73 "set_ordlist.opt"
    {
#line 73 "set_ordlist.opt"
      mercury__set_ordlist__insert_loop_3_p_0(mercury__set__TypeInfo_for_T_7, (MR_Word) mercury__set__V_5_17, ((MR_Box) (mercury__set__T_5)), &mercury__set__conv0_V_6_18);
    }
#line 73 "set_ordlist.opt"
    mercury__set__V_6_18 = (MR_Word) mercury__set__conv0_V_6_18;
#line 72 "set_ordlist.opt"
    mercury__set__S2_6 = (MR_Word) mercury__set__V_6_18;
#line 587 "set.m"
    return mercury__set__S2_6;
#line 587 "set.m"
  }
#line 119 "set.m"
}

#line 131 "set.m"
void MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
#line 131 "set.m"
  MR_Word mercury__set__V_11_11,
#line 131 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_9,
#line 131 "set.m"
  MR_Word mercury__set__List_4,
#line 131 "set.m"
  MR_Word mercury__set__STATE_VARIABLE_Set_0_6,
#line 131 "set.m"
  MR_Word * mercury__set__STATE_VARIABLE_Set_7)
#line 131 "set.m"
{
#line 584 "set.m"
  {
#line 584 "set.m"
    MR_bool mercury__set__succeeded;
#line 584 "set.m"
    MR_Integer mercury__set__V_5_21;
#line 584 "set.m"
    MR_Word mercury__set__V_4_28;
#line 584 "set.m"
    MR_Word mercury__set__V_5_29;
#line 584 "set.m"
    MR_Word mercury__set__V_6_30;

#line 91 "list.opt"
    {
#line 91 "list.opt"
      mercury__list__length_acc_3_p_0(mercury__set__TypeInfo_for_T_9, (MR_Word) mercury__set__List_4, (MR_Integer) 0, &mercury__set__V_5_21);
    }
#line 123 "list.opt"
    {
#line 123 "list.opt"
      mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__set__V_11_11, mercury__set__TypeInfo_for_T_9, mercury__set__V_5_21, mercury__set__List_4, &mercury__set__V_4_28);
    }
#line 105 "set_ordlist.opt"
    mercury__set__V_5_29 = (MR_Word) mercury__set__STATE_VARIABLE_Set_0_6;
#line 106 "set_ordlist.opt"
    {
#line 106 "set_ordlist.opt"
      mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__set__V_11_11, mercury__set__TypeInfo_for_T_9, mercury__set__V_4_28, mercury__set__V_5_29, &mercury__set__V_6_30);
    }
#line 105 "set_ordlist.opt"
    *mercury__set__STATE_VARIABLE_Set_7 = (MR_Word) mercury__set__V_6_30;
#line 584 "set.m"
  }
#line 131 "set.m"
}

#line 130 "set.m"
MR_Word MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(
#line 130 "set.m"
  MR_Word mercury__set__V_9_9,
#line 130 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_7,
#line 130 "set.m"
  MR_Word mercury__set__S1_4,
#line 130 "set.m"
  MR_Word mercury__set__Xs_5)
#line 130 "set.m"
{
#line 581 "set.m"
  {
#line 581 "set.m"
    MR_bool mercury__set__succeeded;
#line 581 "set.m"
    MR_Word mercury__set__S2_6;

#line 581 "set.m"
    {
#line 581 "set.m"
      mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__set__V_9_9, mercury__set__TypeInfo_for_T_7, mercury__set__Xs_5, mercury__set__S1_4, &mercury__set__S2_6);
    }
#line 581 "set.m"
    return mercury__set__S2_6;
#line 581 "set.m"
  }
#line 130 "set.m"
}

#line 180 "set.m"
void MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
#line 180 "set.m"
  MR_Word mercury__set__V_9_9,
#line 180 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_7,
#line 180 "set.m"
  MR_Word mercury__set__SetA_4,
#line 180 "set.m"
  MR_Word mercury__set__SetB_5,
#line 180 "set.m"
  MR_Word * mercury__set__Set_6)
#line 180 "set.m"
{
#line 654 "set.m"
  {
#line 654 "set.m"
    MR_bool mercury__set__succeeded;
#line 654 "set.m"
    MR_Word mercury__set__V_4_10 = (MR_Word) mercury__set__SetA_4;
#line 654 "set.m"
    MR_Word mercury__set__V_5_11 = (MR_Word) mercury__set__SetB_5;
#line 654 "set.m"
    MR_Word mercury__set__V_6_12;

#line 106 "set_ordlist.opt"
    {
#line 106 "set_ordlist.opt"
      mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__set__V_9_9, mercury__set__TypeInfo_for_T_7, mercury__set__V_4_10, mercury__set__V_5_11, &mercury__set__V_6_12);
    }
#line 105 "set_ordlist.opt"
    *mercury__set__Set_6 = (MR_Word) mercury__set__V_6_12;
#line 654 "set.m"
  }
#line 180 "set.m"
}

#line 179 "set.m"
MR_Word MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(
#line 179 "set.m"
  MR_Word mercury__set__V_9_9,
#line 179 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_7,
#line 179 "set.m"
  MR_Word mercury__set__S1_4,
#line 179 "set.m"
  MR_Word mercury__set__S2_5)
#line 179 "set.m"
{
#line 651 "set.m"
  {
#line 651 "set.m"
    MR_bool mercury__set__succeeded;
#line 651 "set.m"
    MR_Word mercury__set__S3_6;
#line 651 "set.m"
    MR_Word mercury__set__V_4_14 = (MR_Word) mercury__set__S1_4;
#line 651 "set.m"
    MR_Word mercury__set__V_5_15 = (MR_Word) mercury__set__S2_5;
#line 651 "set.m"
    MR_Word mercury__set__V_6_16;

#line 106 "set_ordlist.opt"
    {
#line 106 "set_ordlist.opt"
      mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__set__V_9_9, mercury__set__TypeInfo_for_T_7, mercury__set__V_4_14, mercury__set__V_5_15, &mercury__set__V_6_16);
    }
#line 105 "set_ordlist.opt"
    mercury__set__S3_6 = (MR_Word) mercury__set__V_6_16;
#line 651 "set.m"
    return mercury__set__S3_6;
#line 651 "set.m"
  }
#line 179 "set.m"
}

#line 204 "set.m"
void MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
#line 204 "set.m"
  MR_Word mercury__set__V_9_9,
#line 204 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_7,
#line 204 "set.m"
  MR_Word mercury__set__SetA_4,
#line 204 "set.m"
  MR_Word mercury__set__SetB_5,
#line 204 "set.m"
  MR_Word * mercury__set__Set_6)
#line 204 "set.m"
{
#line 668 "set.m"
  {
#line 668 "set.m"
    MR_bool mercury__set__succeeded;
#line 668 "set.m"
    MR_Word mercury__set__V_4_10 = (MR_Word) mercury__set__SetA_4;
#line 668 "set.m"
    MR_Word mercury__set__V_5_11 = (MR_Word) mercury__set__SetB_5;
#line 668 "set.m"
    MR_Word mercury__set__V_6_12;
#line 119 "set_ordlist.opt"
    MR_Word mercury__set__conv0_V_6_12;

#line 119 "set_ordlist.opt"
    {
#line 119 "set_ordlist.opt"
      mercury__set_ordlist__intersect_loop_3_p_0(mercury__set__TypeInfo_for_T_7, (MR_Word) mercury__set__V_4_10, (MR_Word) mercury__set__V_5_11, &mercury__set__conv0_V_6_12);
    }
#line 119 "set_ordlist.opt"
    mercury__set__V_6_12 = (MR_Word) mercury__set__conv0_V_6_12;
#line 118 "set_ordlist.opt"
    *mercury__set__Set_6 = (MR_Word) mercury__set__V_6_12;
#line 668 "set.m"
  }
#line 204 "set.m"
}

#line 203 "set.m"
MR_Word MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(
#line 203 "set.m"
  MR_Word mercury__set__V_9_9,
#line 203 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_7,
#line 203 "set.m"
  MR_Word mercury__set__S1_4,
#line 203 "set.m"
  MR_Word mercury__set__S2_5)
#line 203 "set.m"
{
#line 665 "set.m"
  {
#line 665 "set.m"
    MR_bool mercury__set__succeeded;
#line 665 "set.m"
    MR_Word mercury__set__S3_6;
#line 665 "set.m"
    MR_Word mercury__set__V_4_14 = (MR_Word) mercury__set__S1_4;
#line 665 "set.m"
    MR_Word mercury__set__V_5_15 = (MR_Word) mercury__set__S2_5;
#line 665 "set.m"
    MR_Word mercury__set__V_6_16;
#line 119 "set_ordlist.opt"
    MR_Word mercury__set__conv0_V_6_16;

#line 119 "set_ordlist.opt"
    {
#line 119 "set_ordlist.opt"
      mercury__set_ordlist__intersect_loop_3_p_0(mercury__set__TypeInfo_for_T_7, (MR_Word) mercury__set__V_4_14, (MR_Word) mercury__set__V_5_15, &mercury__set__conv0_V_6_16);
    }
#line 119 "set_ordlist.opt"
    mercury__set__V_6_16 = (MR_Word) mercury__set__conv0_V_6_16;
#line 118 "set_ordlist.opt"
    mercury__set__S3_6 = (MR_Word) mercury__set__V_6_16;
#line 665 "set.m"
    return mercury__set__S3_6;
#line 665 "set.m"
  }
#line 203 "set.m"
}

#line 222 "set.m"
void MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
#line 222 "set.m"
  MR_Word mercury__set__V_9_9,
#line 222 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_7,
#line 222 "set.m"
  MR_Word mercury__set__SetA_4,
#line 222 "set.m"
  MR_Word mercury__set__SetB_5,
#line 222 "set.m"
  MR_Word * mercury__set__Set_6)
#line 222 "set.m"
{
#line 682 "set.m"
  {
#line 682 "set.m"
    MR_bool mercury__set__succeeded;
#line 682 "set.m"
    MR_Word mercury__set__V_4_10 = (MR_Word) mercury__set__SetA_4;
#line 682 "set.m"
    MR_Word mercury__set__V_5_11 = (MR_Word) mercury__set__SetB_5;
#line 682 "set.m"
    MR_Word mercury__set__V_6_12;
#line 129 "set_ordlist.opt"
    MR_Word mercury__set__conv0_V_6_12;

#line 129 "set_ordlist.opt"
    {
#line 129 "set_ordlist.opt"
      mercury__set_ordlist__difference_loop_3_p_0(mercury__set__TypeInfo_for_T_7, (MR_Word) mercury__set__V_4_10, (MR_Word) mercury__set__V_5_11, &mercury__set__conv0_V_6_12);
    }
#line 129 "set_ordlist.opt"
    mercury__set__V_6_12 = (MR_Word) mercury__set__conv0_V_6_12;
#line 128 "set_ordlist.opt"
    *mercury__set__Set_6 = (MR_Word) mercury__set__V_6_12;
#line 682 "set.m"
  }
#line 222 "set.m"
}

#line 221 "set.m"
MR_Word MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(
#line 221 "set.m"
  MR_Word mercury__set__V_9_9,
#line 221 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_7,
#line 221 "set.m"
  MR_Word mercury__set__S1_4,
#line 221 "set.m"
  MR_Word mercury__set__S2_5)
#line 221 "set.m"
{
#line 674 "set.m"
  {
#line 674 "set.m"
    MR_bool mercury__set__succeeded;
#line 674 "set.m"
    MR_Word mercury__set__S3_6;
#line 674 "set.m"
    MR_Word mercury__set__V_4_14 = (MR_Word) mercury__set__S1_4;
#line 674 "set.m"
    MR_Word mercury__set__V_5_15 = (MR_Word) mercury__set__S2_5;
#line 674 "set.m"
    MR_Word mercury__set__V_6_16;
#line 129 "set_ordlist.opt"
    MR_Word mercury__set__conv0_V_6_16;

#line 129 "set_ordlist.opt"
    {
#line 129 "set_ordlist.opt"
      mercury__set_ordlist__difference_loop_3_p_0(mercury__set__TypeInfo_for_T_7, (MR_Word) mercury__set__V_4_14, (MR_Word) mercury__set__V_5_15, &mercury__set__conv0_V_6_16);
    }
#line 129 "set_ordlist.opt"
    mercury__set__V_6_16 = (MR_Word) mercury__set__conv0_V_6_16;
#line 128 "set_ordlist.opt"
    mercury__set__S3_6 = (MR_Word) mercury__set__V_6_16;
#line 674 "set.m"
    return mercury__set__S3_6;
#line 674 "set.m"
  }
#line 221 "set.m"
}

#line 513 "set.m"
void MR_CALL 
mercury__set____Compare____set_1_0(
#line 513 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_6,
#line 513 "set.m"
  MR_Word * mercury__set__HeadVar__1_1,
#line 513 "set.m"
  MR_Word mercury__set__HeadVar__2_2,
#line 513 "set.m"
  MR_Word mercury__set__HeadVar__3_3)
#line 513 "set.m"
{
#line 513 "set.m"
  {
#line 513 "set.m"
    MR_bool mercury__set__succeeded;
#line 513 "set.m"
    MR_Word mercury__set__Cast_HeadVar1_4 = mercury__set__HeadVar__2_2;
#line 513 "set.m"
    MR_Word mercury__set__Cast_HeadVar2_5 = mercury__set__HeadVar__3_3;

#line 513 "set.m"
    {
#line 513 "set.m"
      mercury__set_ordlist____Compare____set_ordlist_1_0(mercury__set__TypeInfo_for_T_6, mercury__set__HeadVar__1_1, mercury__set__Cast_HeadVar1_4, mercury__set__Cast_HeadVar2_5);
#line 513 "set.m"
      return;
    }
#line 513 "set.m"
  }
#line 513 "set.m"
}

#line 513 "set.m"
MR_bool MR_CALL 
mercury__set____Unify____set_1_0(
#line 513 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_5,
#line 513 "set.m"
  MR_Word mercury__set__HeadVar__1_1,
#line 513 "set.m"
  MR_Word mercury__set__HeadVar__2_2)
#line 513 "set.m"
{
#line 513 "set.m"
  {
#line 513 "set.m"
    MR_bool mercury__set__succeeded;
#line 513 "set.m"
    MR_Word mercury__set__Cast_HeadVar1_3 = mercury__set__HeadVar__1_1;
#line 513 "set.m"
    MR_Word mercury__set__Cast_HeadVar2_4 = mercury__set__HeadVar__2_2;

#line 513 "set.m"
    {
#line 513 "set.m"
      return mercury__set__succeeded = mercury__set_ordlist____Unify____set_ordlist_1_0(mercury__set__TypeInfo_for_T_5, mercury__set__Cast_HeadVar1_3, mercury__set__Cast_HeadVar2_4);
    }
#line 513 "set.m"
    return mercury__set__succeeded;
#line 513 "set.m"
  }
#line 513 "set.m"
}

#line 497 "set.m"
void MR_CALL 
mercury__set__intersection_and_differences_5_p_0(
#line 497 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_11,
#line 497 "set.m"
  MR_Word mercury__set__SetA_6,
#line 497 "set.m"
  MR_Word mercury__set__SetB_7,
#line 497 "set.m"
  MR_Word * mercury__set__InAandB_8,
#line 497 "set.m"
  MR_Word * mercury__set__OnlyInA_9,
#line 497 "set.m"
  MR_Word * mercury__set__OnlyInB_10)
#line 497 "set.m"
{
#line 772 "set.m"
  {
#line 772 "set.m"
    MR_bool mercury__set__succeeded;

#line 772 "set.m"
    {
#line 772 "set.m"
      mercury__set_ordlist__intersection_and_differences_5_p_0(mercury__set__TypeInfo_for_T_11, mercury__set__SetA_6, mercury__set__SetB_7, mercury__set__InAandB_8, mercury__set__OnlyInA_9, mercury__set__OnlyInB_10);
#line 772 "set.m"
      return;
    }
#line 772 "set.m"
  }
#line 497 "set.m"
}

#line 490 "set.m"
void MR_CALL 
mercury__set__divide_by_set_4_p_0(
#line 490 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_9,
#line 490 "set.m"
  MR_Word mercury__set__DivideBySet_5,
#line 490 "set.m"
  MR_Word mercury__set__Set_6,
#line 490 "set.m"
  MR_Word * mercury__set__TruePart_7,
#line 490 "set.m"
  MR_Word * mercury__set__FalsePart_8)
#line 490 "set.m"
{
#line 769 "set.m"
  {
#line 769 "set.m"
    MR_bool mercury__set__succeeded;

#line 769 "set.m"
    {
#line 769 "set.m"
      mercury__set_ordlist__divide_by_set_4_p_0(mercury__set__TypeInfo_for_T_9, mercury__set__DivideBySet_5, mercury__set__Set_6, mercury__set__TruePart_7, mercury__set__FalsePart_8);
#line 769 "set.m"
      return;
    }
#line 769 "set.m"
  }
#line 490 "set.m"
}

#line 483 "set.m"
void MR_CALL 
mercury__set__divide_4_p_0(
#line 483 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_9,
#line 483 "set.m"
  MR_Word mercury__set__P_5,
#line 483 "set.m"
  MR_Word mercury__set__Set_6,
#line 483 "set.m"
  MR_Word * mercury__set__TruePart_7,
#line 483 "set.m"
  MR_Word * mercury__set__FalsePart_8)
#line 483 "set.m"
{
#line 196 "set_ordlist.opt"
  {
#line 196 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 196 "set_ordlist.opt"
    MR_Word mercury__set__V_6_11 = (MR_Word) mercury__set__Set_6;
#line 196 "set_ordlist.opt"
    MR_Word mercury__set__V_7_12;
#line 196 "set_ordlist.opt"
    MR_Word mercury__set__V_8_13;
#line 196 "set_ordlist.opt"
    MR_Word mercury__set__V_11_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 196 "set_ordlist.opt"
    MR_Word mercury__set__V_12_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 196 "set_ordlist.opt"
    MR_Word mercury__set__V_9_17;
#line 196 "set_ordlist.opt"
    MR_Word mercury__set__V_10_18;

#line 199 "set_ordlist.opt"
    {
#line 199 "set_ordlist.opt"
      mercury__set_ordlist__divide_loop_6_p_0(mercury__set__TypeInfo_for_T_9, mercury__set__P_5, mercury__set__V_6_11, mercury__set__V_11_14, &mercury__set__V_9_17, mercury__set__V_12_16, &mercury__set__V_10_18);
    }
#line 200 "set_ordlist.opt"
    {
#line 200 "set_ordlist.opt"
      mercury__list__reverse_2_p_0(mercury__set__TypeInfo_for_T_9, mercury__set__V_9_17, &mercury__set__V_7_12);
    }
#line 196 "set_ordlist.opt"
    *mercury__set__TruePart_7 = (MR_Word) mercury__set__V_7_12;
#line 201 "set_ordlist.opt"
    {
#line 201 "set_ordlist.opt"
      mercury__list__reverse_2_p_0(mercury__set__TypeInfo_for_T_9, mercury__set__V_10_18, &mercury__set__V_8_13);
    }
#line 196 "set_ordlist.opt"
    *mercury__set__FalsePart_8 = (MR_Word) mercury__set__V_8_13;
#line 196 "set_ordlist.opt"
  }
#line 483 "set.m"
}

#line 477 "set.m"
MR_bool MR_CALL 
mercury__set__all_true_2_p_0(
#line 477 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_5,
#line 477 "set.m"
  MR_Word mercury__set__P_3,
#line 477 "set.m"
  MR_Word mercury__set__S_4)
#line 477 "set.m"
{
#line 194 "set_ordlist.opt"
  {
#line 194 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 194 "set_ordlist.opt"
    MR_Word mercury__set__V_4_7 = (MR_Word) mercury__set__S_4;

#line 195 "set_ordlist.opt"
    {
#line 195 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__all_true_2_p_0(mercury__set__TypeInfo_for_T_5, mercury__set__P_3, mercury__set__V_4_7);
    }
#line 194 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 194 "set_ordlist.opt"
  }
#line 477 "set.m"
}

#line 470 "set.m"
MR_bool MR_CALL 
mercury__set__foldl6_14_p_5(
#line 470 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_40,
#line 470 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_41,
#line 470 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_42,
#line 470 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_43,
#line 470 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_44,
#line 470 "set.m"
  MR_Word mercury__set__TypeInfo_for_E_45,
#line 470 "set.m"
  MR_Word mercury__set__TypeInfo_for_F_46,
#line 470 "set.m"
  MR_Word mercury__set__F_15,
#line 470 "set.m"
  MR_Word mercury__set__S_16,
#line 470 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_22,
#line 470 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_23,
#line 470 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_24,
#line 470 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_25,
#line 470 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_26,
#line 470 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_27,
#line 470 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_28,
#line 470 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_29,
#line 470 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_E_0_30,
#line 470 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_E_31,
#line 470 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_F_0_32,
#line 470 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_F_33)
#line 470 "set.m"
{
#line 191 "set_ordlist.opt"
  {
#line 191 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 191 "set_ordlist.opt"
    MR_Word mercury__set__V_35_75 = (MR_Word) mercury__set__S_16;

#line 193 "set_ordlist.opt"
    {
#line 193 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl6_14_p_7(mercury__set__TypeInfo_for_T_40, mercury__set__TypeInfo_for_A_41, mercury__set__TypeInfo_for_B_42, mercury__set__TypeInfo_for_C_43, mercury__set__TypeInfo_for_D_44, mercury__set__TypeInfo_for_E_45, mercury__set__TypeInfo_for_F_46, mercury__set__F_15, mercury__set__V_35_75, mercury__set__STATE_VARIABLE_A_0_22, mercury__set__STATE_VARIABLE_A_23, mercury__set__STATE_VARIABLE_B_0_24, mercury__set__STATE_VARIABLE_B_25, mercury__set__STATE_VARIABLE_C_0_26, mercury__set__STATE_VARIABLE_C_27, mercury__set__STATE_VARIABLE_D_0_28, mercury__set__STATE_VARIABLE_D_29, mercury__set__STATE_VARIABLE_E_0_30, mercury__set__STATE_VARIABLE_E_31, mercury__set__STATE_VARIABLE_F_0_32, mercury__set__STATE_VARIABLE_F_33);
    }
#line 191 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 191 "set_ordlist.opt"
  }
#line 470 "set.m"
}

#line 467 "set.m"
MR_bool MR_CALL 
mercury__set__foldl6_14_p_4(
#line 467 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_40,
#line 467 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_41,
#line 467 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_42,
#line 467 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_43,
#line 467 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_44,
#line 467 "set.m"
  MR_Word mercury__set__TypeInfo_for_E_45,
#line 467 "set.m"
  MR_Word mercury__set__TypeInfo_for_F_46,
#line 467 "set.m"
  MR_Word mercury__set__F_15,
#line 467 "set.m"
  MR_Word mercury__set__S_16,
#line 467 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_22,
#line 467 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_23,
#line 467 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_24,
#line 467 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_25,
#line 467 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_26,
#line 467 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_27,
#line 467 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_28,
#line 467 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_29,
#line 467 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_E_0_30,
#line 467 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_E_31,
#line 467 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_F_0_32,
#line 467 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_F_33)
#line 467 "set.m"
{
#line 191 "set_ordlist.opt"
  {
#line 191 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 191 "set_ordlist.opt"
    MR_Word mercury__set__V_35_75 = (MR_Word) mercury__set__S_16;

#line 193 "set_ordlist.opt"
    {
#line 193 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl6_14_p_6(mercury__set__TypeInfo_for_T_40, mercury__set__TypeInfo_for_A_41, mercury__set__TypeInfo_for_B_42, mercury__set__TypeInfo_for_C_43, mercury__set__TypeInfo_for_D_44, mercury__set__TypeInfo_for_E_45, mercury__set__TypeInfo_for_F_46, mercury__set__F_15, mercury__set__V_35_75, mercury__set__STATE_VARIABLE_A_0_22, mercury__set__STATE_VARIABLE_A_23, mercury__set__STATE_VARIABLE_B_0_24, mercury__set__STATE_VARIABLE_B_25, mercury__set__STATE_VARIABLE_C_0_26, mercury__set__STATE_VARIABLE_C_27, mercury__set__STATE_VARIABLE_D_0_28, mercury__set__STATE_VARIABLE_D_29, mercury__set__STATE_VARIABLE_E_0_30, mercury__set__STATE_VARIABLE_E_31, mercury__set__STATE_VARIABLE_F_0_32, mercury__set__STATE_VARIABLE_F_33);
    }
#line 191 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 191 "set_ordlist.opt"
  }
#line 467 "set.m"
}

#line 464 "set.m"
MR_bool MR_CALL 
mercury__set__foldl6_14_p_3(
#line 464 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_40,
#line 464 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_41,
#line 464 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_42,
#line 464 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_43,
#line 464 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_44,
#line 464 "set.m"
  MR_Word mercury__set__TypeInfo_for_E_45,
#line 464 "set.m"
  MR_Word mercury__set__TypeInfo_for_F_46,
#line 464 "set.m"
  MR_Word mercury__set__F_15,
#line 464 "set.m"
  MR_Word mercury__set__S_16,
#line 464 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_22,
#line 464 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_23,
#line 464 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_24,
#line 464 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_25,
#line 464 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_26,
#line 464 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_27,
#line 464 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_28,
#line 464 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_29,
#line 464 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_E_0_30,
#line 464 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_E_31,
#line 464 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_F_0_32,
#line 464 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_F_33)
#line 464 "set.m"
{
#line 191 "set_ordlist.opt"
  {
#line 191 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 191 "set_ordlist.opt"
    MR_Word mercury__set__V_35_75 = (MR_Word) mercury__set__S_16;

#line 193 "set_ordlist.opt"
    {
#line 193 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl6_14_p_5(mercury__set__TypeInfo_for_T_40, mercury__set__TypeInfo_for_A_41, mercury__set__TypeInfo_for_B_42, mercury__set__TypeInfo_for_C_43, mercury__set__TypeInfo_for_D_44, mercury__set__TypeInfo_for_E_45, mercury__set__TypeInfo_for_F_46, mercury__set__F_15, mercury__set__V_35_75, mercury__set__STATE_VARIABLE_A_0_22, mercury__set__STATE_VARIABLE_A_23, mercury__set__STATE_VARIABLE_B_0_24, mercury__set__STATE_VARIABLE_B_25, mercury__set__STATE_VARIABLE_C_0_26, mercury__set__STATE_VARIABLE_C_27, mercury__set__STATE_VARIABLE_D_0_28, mercury__set__STATE_VARIABLE_D_29, mercury__set__STATE_VARIABLE_E_0_30, mercury__set__STATE_VARIABLE_E_31, mercury__set__STATE_VARIABLE_F_0_32, mercury__set__STATE_VARIABLE_F_33);
    }
#line 191 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 191 "set_ordlist.opt"
  }
#line 464 "set.m"
}

#line 461 "set.m"
void MR_CALL 
mercury__set__foldl6_14_p_2(
#line 461 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_40,
#line 461 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_41,
#line 461 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_42,
#line 461 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_43,
#line 461 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_44,
#line 461 "set.m"
  MR_Word mercury__set__TypeInfo_for_E_45,
#line 461 "set.m"
  MR_Word mercury__set__TypeInfo_for_F_46,
#line 461 "set.m"
  MR_Word mercury__set__F_15,
#line 461 "set.m"
  MR_Word mercury__set__S_16,
#line 461 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_22,
#line 461 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_23,
#line 461 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_24,
#line 461 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_25,
#line 461 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_26,
#line 461 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_27,
#line 461 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_28,
#line 461 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_29,
#line 461 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_E_0_30,
#line 461 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_E_31,
#line 461 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_F_0_32,
#line 461 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_F_33)
#line 461 "set.m"
{
#line 191 "set_ordlist.opt"
  {
#line 191 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 191 "set_ordlist.opt"
    MR_Word mercury__set__V_35_75 = (MR_Word) mercury__set__S_16;

#line 193 "set_ordlist.opt"
    {
#line 193 "set_ordlist.opt"
      mercury__list__foldl6_14_p_2(mercury__set__TypeInfo_for_T_40, mercury__set__TypeInfo_for_A_41, mercury__set__TypeInfo_for_B_42, mercury__set__TypeInfo_for_C_43, mercury__set__TypeInfo_for_D_44, mercury__set__TypeInfo_for_E_45, mercury__set__TypeInfo_for_F_46, mercury__set__F_15, mercury__set__V_35_75, mercury__set__STATE_VARIABLE_A_0_22, mercury__set__STATE_VARIABLE_A_23, mercury__set__STATE_VARIABLE_B_0_24, mercury__set__STATE_VARIABLE_B_25, mercury__set__STATE_VARIABLE_C_0_26, mercury__set__STATE_VARIABLE_C_27, mercury__set__STATE_VARIABLE_D_0_28, mercury__set__STATE_VARIABLE_D_29, mercury__set__STATE_VARIABLE_E_0_30, mercury__set__STATE_VARIABLE_E_31, mercury__set__STATE_VARIABLE_F_0_32, mercury__set__STATE_VARIABLE_F_33);
#line 193 "set_ordlist.opt"
      return;
    }
#line 191 "set_ordlist.opt"
  }
#line 461 "set.m"
}

#line 458 "set.m"
void MR_CALL 
mercury__set__foldl6_14_p_1(
#line 458 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_40,
#line 458 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_41,
#line 458 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_42,
#line 458 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_43,
#line 458 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_44,
#line 458 "set.m"
  MR_Word mercury__set__TypeInfo_for_E_45,
#line 458 "set.m"
  MR_Word mercury__set__TypeInfo_for_F_46,
#line 458 "set.m"
  MR_Word mercury__set__F_15,
#line 458 "set.m"
  MR_Word mercury__set__S_16,
#line 458 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_22,
#line 458 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_23,
#line 458 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_24,
#line 458 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_25,
#line 458 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_26,
#line 458 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_27,
#line 458 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_28,
#line 458 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_29,
#line 458 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_E_0_30,
#line 458 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_E_31,
#line 458 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_F_0_32,
#line 458 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_F_33)
#line 458 "set.m"
{
#line 191 "set_ordlist.opt"
  {
#line 191 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 191 "set_ordlist.opt"
    MR_Word mercury__set__V_35_75 = (MR_Word) mercury__set__S_16;

#line 193 "set_ordlist.opt"
    {
#line 193 "set_ordlist.opt"
      mercury__list__foldl6_14_p_1(mercury__set__TypeInfo_for_T_40, mercury__set__TypeInfo_for_A_41, mercury__set__TypeInfo_for_B_42, mercury__set__TypeInfo_for_C_43, mercury__set__TypeInfo_for_D_44, mercury__set__TypeInfo_for_E_45, mercury__set__TypeInfo_for_F_46, mercury__set__F_15, mercury__set__V_35_75, mercury__set__STATE_VARIABLE_A_0_22, mercury__set__STATE_VARIABLE_A_23, mercury__set__STATE_VARIABLE_B_0_24, mercury__set__STATE_VARIABLE_B_25, mercury__set__STATE_VARIABLE_C_0_26, mercury__set__STATE_VARIABLE_C_27, mercury__set__STATE_VARIABLE_D_0_28, mercury__set__STATE_VARIABLE_D_29, mercury__set__STATE_VARIABLE_E_0_30, mercury__set__STATE_VARIABLE_E_31, mercury__set__STATE_VARIABLE_F_0_32, mercury__set__STATE_VARIABLE_F_33);
#line 193 "set_ordlist.opt"
      return;
    }
#line 191 "set_ordlist.opt"
  }
#line 458 "set.m"
}

#line 455 "set.m"
void MR_CALL 
mercury__set__foldl6_14_p_0(
#line 455 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_40,
#line 455 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_41,
#line 455 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_42,
#line 455 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_43,
#line 455 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_44,
#line 455 "set.m"
  MR_Word mercury__set__TypeInfo_for_E_45,
#line 455 "set.m"
  MR_Word mercury__set__TypeInfo_for_F_46,
#line 455 "set.m"
  MR_Word mercury__set__F_15,
#line 455 "set.m"
  MR_Word mercury__set__S_16,
#line 455 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_22,
#line 455 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_23,
#line 455 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_24,
#line 455 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_25,
#line 455 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_26,
#line 455 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_27,
#line 455 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_28,
#line 455 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_29,
#line 455 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_E_0_30,
#line 455 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_E_31,
#line 455 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_F_0_32,
#line 455 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_F_33)
#line 455 "set.m"
{
#line 191 "set_ordlist.opt"
  {
#line 191 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 191 "set_ordlist.opt"
    MR_Word mercury__set__V_35_75 = (MR_Word) mercury__set__S_16;

#line 193 "set_ordlist.opt"
    {
#line 193 "set_ordlist.opt"
      mercury__list__foldl6_14_p_0(mercury__set__TypeInfo_for_T_40, mercury__set__TypeInfo_for_A_41, mercury__set__TypeInfo_for_B_42, mercury__set__TypeInfo_for_C_43, mercury__set__TypeInfo_for_D_44, mercury__set__TypeInfo_for_E_45, mercury__set__TypeInfo_for_F_46, mercury__set__F_15, mercury__set__V_35_75, mercury__set__STATE_VARIABLE_A_0_22, mercury__set__STATE_VARIABLE_A_23, mercury__set__STATE_VARIABLE_B_0_24, mercury__set__STATE_VARIABLE_B_25, mercury__set__STATE_VARIABLE_C_0_26, mercury__set__STATE_VARIABLE_C_27, mercury__set__STATE_VARIABLE_D_0_28, mercury__set__STATE_VARIABLE_D_29, mercury__set__STATE_VARIABLE_E_0_30, mercury__set__STATE_VARIABLE_E_31, mercury__set__STATE_VARIABLE_F_0_32, mercury__set__STATE_VARIABLE_F_33);
#line 193 "set_ordlist.opt"
      return;
    }
#line 191 "set_ordlist.opt"
  }
#line 455 "set.m"
}

#line 449 "set.m"
MR_bool MR_CALL 
mercury__set__fold6_14_p_5(
#line 449 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_40,
#line 449 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_41,
#line 449 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_42,
#line 449 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_43,
#line 449 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_44,
#line 449 "set.m"
  MR_Word mercury__set__TypeInfo_for_E_45,
#line 449 "set.m"
  MR_Word mercury__set__TypeInfo_for_F_46,
#line 449 "set.m"
  MR_Word mercury__set__F_15,
#line 449 "set.m"
  MR_Word mercury__set__S_16,
#line 449 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_22,
#line 449 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_23,
#line 449 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_24,
#line 449 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_25,
#line 449 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_26,
#line 449 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_27,
#line 449 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_28,
#line 449 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_29,
#line 449 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_E_0_30,
#line 449 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_E_31,
#line 449 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_F_0_32,
#line 449 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_F_33)
#line 449 "set.m"
{
#line 191 "set_ordlist.opt"
  {
#line 191 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 191 "set_ordlist.opt"
    MR_Word mercury__set__V_35_100 = (MR_Word) mercury__set__S_16;

#line 193 "set_ordlist.opt"
    {
#line 193 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl6_14_p_7(mercury__set__TypeInfo_for_T_40, mercury__set__TypeInfo_for_A_41, mercury__set__TypeInfo_for_B_42, mercury__set__TypeInfo_for_C_43, mercury__set__TypeInfo_for_D_44, mercury__set__TypeInfo_for_E_45, mercury__set__TypeInfo_for_F_46, mercury__set__F_15, mercury__set__V_35_100, mercury__set__STATE_VARIABLE_A_0_22, mercury__set__STATE_VARIABLE_A_23, mercury__set__STATE_VARIABLE_B_0_24, mercury__set__STATE_VARIABLE_B_25, mercury__set__STATE_VARIABLE_C_0_26, mercury__set__STATE_VARIABLE_C_27, mercury__set__STATE_VARIABLE_D_0_28, mercury__set__STATE_VARIABLE_D_29, mercury__set__STATE_VARIABLE_E_0_30, mercury__set__STATE_VARIABLE_E_31, mercury__set__STATE_VARIABLE_F_0_32, mercury__set__STATE_VARIABLE_F_33);
    }
#line 191 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 191 "set_ordlist.opt"
  }
#line 449 "set.m"
}

#line 446 "set.m"
MR_bool MR_CALL 
mercury__set__fold6_14_p_4(
#line 446 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_40,
#line 446 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_41,
#line 446 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_42,
#line 446 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_43,
#line 446 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_44,
#line 446 "set.m"
  MR_Word mercury__set__TypeInfo_for_E_45,
#line 446 "set.m"
  MR_Word mercury__set__TypeInfo_for_F_46,
#line 446 "set.m"
  MR_Word mercury__set__F_15,
#line 446 "set.m"
  MR_Word mercury__set__S_16,
#line 446 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_22,
#line 446 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_23,
#line 446 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_24,
#line 446 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_25,
#line 446 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_26,
#line 446 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_27,
#line 446 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_28,
#line 446 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_29,
#line 446 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_E_0_30,
#line 446 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_E_31,
#line 446 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_F_0_32,
#line 446 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_F_33)
#line 446 "set.m"
{
#line 191 "set_ordlist.opt"
  {
#line 191 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 191 "set_ordlist.opt"
    MR_Word mercury__set__V_35_100 = (MR_Word) mercury__set__S_16;

#line 193 "set_ordlist.opt"
    {
#line 193 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl6_14_p_6(mercury__set__TypeInfo_for_T_40, mercury__set__TypeInfo_for_A_41, mercury__set__TypeInfo_for_B_42, mercury__set__TypeInfo_for_C_43, mercury__set__TypeInfo_for_D_44, mercury__set__TypeInfo_for_E_45, mercury__set__TypeInfo_for_F_46, mercury__set__F_15, mercury__set__V_35_100, mercury__set__STATE_VARIABLE_A_0_22, mercury__set__STATE_VARIABLE_A_23, mercury__set__STATE_VARIABLE_B_0_24, mercury__set__STATE_VARIABLE_B_25, mercury__set__STATE_VARIABLE_C_0_26, mercury__set__STATE_VARIABLE_C_27, mercury__set__STATE_VARIABLE_D_0_28, mercury__set__STATE_VARIABLE_D_29, mercury__set__STATE_VARIABLE_E_0_30, mercury__set__STATE_VARIABLE_E_31, mercury__set__STATE_VARIABLE_F_0_32, mercury__set__STATE_VARIABLE_F_33);
    }
#line 191 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 191 "set_ordlist.opt"
  }
#line 446 "set.m"
}

#line 443 "set.m"
MR_bool MR_CALL 
mercury__set__fold6_14_p_3(
#line 443 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_40,
#line 443 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_41,
#line 443 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_42,
#line 443 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_43,
#line 443 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_44,
#line 443 "set.m"
  MR_Word mercury__set__TypeInfo_for_E_45,
#line 443 "set.m"
  MR_Word mercury__set__TypeInfo_for_F_46,
#line 443 "set.m"
  MR_Word mercury__set__F_15,
#line 443 "set.m"
  MR_Word mercury__set__S_16,
#line 443 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_22,
#line 443 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_23,
#line 443 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_24,
#line 443 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_25,
#line 443 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_26,
#line 443 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_27,
#line 443 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_28,
#line 443 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_29,
#line 443 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_E_0_30,
#line 443 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_E_31,
#line 443 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_F_0_32,
#line 443 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_F_33)
#line 443 "set.m"
{
#line 191 "set_ordlist.opt"
  {
#line 191 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 191 "set_ordlist.opt"
    MR_Word mercury__set__V_35_100 = (MR_Word) mercury__set__S_16;

#line 193 "set_ordlist.opt"
    {
#line 193 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl6_14_p_5(mercury__set__TypeInfo_for_T_40, mercury__set__TypeInfo_for_A_41, mercury__set__TypeInfo_for_B_42, mercury__set__TypeInfo_for_C_43, mercury__set__TypeInfo_for_D_44, mercury__set__TypeInfo_for_E_45, mercury__set__TypeInfo_for_F_46, mercury__set__F_15, mercury__set__V_35_100, mercury__set__STATE_VARIABLE_A_0_22, mercury__set__STATE_VARIABLE_A_23, mercury__set__STATE_VARIABLE_B_0_24, mercury__set__STATE_VARIABLE_B_25, mercury__set__STATE_VARIABLE_C_0_26, mercury__set__STATE_VARIABLE_C_27, mercury__set__STATE_VARIABLE_D_0_28, mercury__set__STATE_VARIABLE_D_29, mercury__set__STATE_VARIABLE_E_0_30, mercury__set__STATE_VARIABLE_E_31, mercury__set__STATE_VARIABLE_F_0_32, mercury__set__STATE_VARIABLE_F_33);
    }
#line 191 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 191 "set_ordlist.opt"
  }
#line 443 "set.m"
}

#line 440 "set.m"
void MR_CALL 
mercury__set__fold6_14_p_2(
#line 440 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_40,
#line 440 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_41,
#line 440 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_42,
#line 440 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_43,
#line 440 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_44,
#line 440 "set.m"
  MR_Word mercury__set__TypeInfo_for_E_45,
#line 440 "set.m"
  MR_Word mercury__set__TypeInfo_for_F_46,
#line 440 "set.m"
  MR_Word mercury__set__F_15,
#line 440 "set.m"
  MR_Word mercury__set__S_16,
#line 440 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_22,
#line 440 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_23,
#line 440 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_24,
#line 440 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_25,
#line 440 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_26,
#line 440 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_27,
#line 440 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_28,
#line 440 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_29,
#line 440 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_E_0_30,
#line 440 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_E_31,
#line 440 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_F_0_32,
#line 440 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_F_33)
#line 440 "set.m"
{
#line 191 "set_ordlist.opt"
  {
#line 191 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 191 "set_ordlist.opt"
    MR_Word mercury__set__V_35_100 = (MR_Word) mercury__set__S_16;

#line 193 "set_ordlist.opt"
    {
#line 193 "set_ordlist.opt"
      mercury__list__foldl6_14_p_2(mercury__set__TypeInfo_for_T_40, mercury__set__TypeInfo_for_A_41, mercury__set__TypeInfo_for_B_42, mercury__set__TypeInfo_for_C_43, mercury__set__TypeInfo_for_D_44, mercury__set__TypeInfo_for_E_45, mercury__set__TypeInfo_for_F_46, mercury__set__F_15, mercury__set__V_35_100, mercury__set__STATE_VARIABLE_A_0_22, mercury__set__STATE_VARIABLE_A_23, mercury__set__STATE_VARIABLE_B_0_24, mercury__set__STATE_VARIABLE_B_25, mercury__set__STATE_VARIABLE_C_0_26, mercury__set__STATE_VARIABLE_C_27, mercury__set__STATE_VARIABLE_D_0_28, mercury__set__STATE_VARIABLE_D_29, mercury__set__STATE_VARIABLE_E_0_30, mercury__set__STATE_VARIABLE_E_31, mercury__set__STATE_VARIABLE_F_0_32, mercury__set__STATE_VARIABLE_F_33);
#line 193 "set_ordlist.opt"
      return;
    }
#line 191 "set_ordlist.opt"
  }
#line 440 "set.m"
}

#line 437 "set.m"
void MR_CALL 
mercury__set__fold6_14_p_1(
#line 437 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_40,
#line 437 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_41,
#line 437 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_42,
#line 437 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_43,
#line 437 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_44,
#line 437 "set.m"
  MR_Word mercury__set__TypeInfo_for_E_45,
#line 437 "set.m"
  MR_Word mercury__set__TypeInfo_for_F_46,
#line 437 "set.m"
  MR_Word mercury__set__F_15,
#line 437 "set.m"
  MR_Word mercury__set__S_16,
#line 437 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_22,
#line 437 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_23,
#line 437 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_24,
#line 437 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_25,
#line 437 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_26,
#line 437 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_27,
#line 437 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_28,
#line 437 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_29,
#line 437 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_E_0_30,
#line 437 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_E_31,
#line 437 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_F_0_32,
#line 437 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_F_33)
#line 437 "set.m"
{
#line 191 "set_ordlist.opt"
  {
#line 191 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 191 "set_ordlist.opt"
    MR_Word mercury__set__V_35_100 = (MR_Word) mercury__set__S_16;

#line 193 "set_ordlist.opt"
    {
#line 193 "set_ordlist.opt"
      mercury__list__foldl6_14_p_1(mercury__set__TypeInfo_for_T_40, mercury__set__TypeInfo_for_A_41, mercury__set__TypeInfo_for_B_42, mercury__set__TypeInfo_for_C_43, mercury__set__TypeInfo_for_D_44, mercury__set__TypeInfo_for_E_45, mercury__set__TypeInfo_for_F_46, mercury__set__F_15, mercury__set__V_35_100, mercury__set__STATE_VARIABLE_A_0_22, mercury__set__STATE_VARIABLE_A_23, mercury__set__STATE_VARIABLE_B_0_24, mercury__set__STATE_VARIABLE_B_25, mercury__set__STATE_VARIABLE_C_0_26, mercury__set__STATE_VARIABLE_C_27, mercury__set__STATE_VARIABLE_D_0_28, mercury__set__STATE_VARIABLE_D_29, mercury__set__STATE_VARIABLE_E_0_30, mercury__set__STATE_VARIABLE_E_31, mercury__set__STATE_VARIABLE_F_0_32, mercury__set__STATE_VARIABLE_F_33);
#line 193 "set_ordlist.opt"
      return;
    }
#line 191 "set_ordlist.opt"
  }
#line 437 "set.m"
}

#line 434 "set.m"
void MR_CALL 
mercury__set__fold6_14_p_0(
#line 434 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_40,
#line 434 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_41,
#line 434 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_42,
#line 434 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_43,
#line 434 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_44,
#line 434 "set.m"
  MR_Word mercury__set__TypeInfo_for_E_45,
#line 434 "set.m"
  MR_Word mercury__set__TypeInfo_for_F_46,
#line 434 "set.m"
  MR_Word mercury__set__F_15,
#line 434 "set.m"
  MR_Word mercury__set__S_16,
#line 434 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_22,
#line 434 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_23,
#line 434 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_24,
#line 434 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_25,
#line 434 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_26,
#line 434 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_27,
#line 434 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_28,
#line 434 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_29,
#line 434 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_E_0_30,
#line 434 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_E_31,
#line 434 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_F_0_32,
#line 434 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_F_33)
#line 434 "set.m"
{
#line 191 "set_ordlist.opt"
  {
#line 191 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 191 "set_ordlist.opt"
    MR_Word mercury__set__V_35_100 = (MR_Word) mercury__set__S_16;

#line 193 "set_ordlist.opt"
    {
#line 193 "set_ordlist.opt"
      mercury__list__foldl6_14_p_0(mercury__set__TypeInfo_for_T_40, mercury__set__TypeInfo_for_A_41, mercury__set__TypeInfo_for_B_42, mercury__set__TypeInfo_for_C_43, mercury__set__TypeInfo_for_D_44, mercury__set__TypeInfo_for_E_45, mercury__set__TypeInfo_for_F_46, mercury__set__F_15, mercury__set__V_35_100, mercury__set__STATE_VARIABLE_A_0_22, mercury__set__STATE_VARIABLE_A_23, mercury__set__STATE_VARIABLE_B_0_24, mercury__set__STATE_VARIABLE_B_25, mercury__set__STATE_VARIABLE_C_0_26, mercury__set__STATE_VARIABLE_C_27, mercury__set__STATE_VARIABLE_D_0_28, mercury__set__STATE_VARIABLE_D_29, mercury__set__STATE_VARIABLE_E_0_30, mercury__set__STATE_VARIABLE_E_31, mercury__set__STATE_VARIABLE_F_0_32, mercury__set__STATE_VARIABLE_F_33);
#line 193 "set_ordlist.opt"
      return;
    }
#line 191 "set_ordlist.opt"
  }
#line 434 "set.m"
}

#line 428 "set.m"
MR_bool MR_CALL 
mercury__set__foldl5_12_p_5(
#line 428 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_35,
#line 428 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_36,
#line 428 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_37,
#line 428 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_38,
#line 428 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_39,
#line 428 "set.m"
  MR_Word mercury__set__TypeInfo_for_E_40,
#line 428 "set.m"
  MR_Word mercury__set__F_13,
#line 428 "set.m"
  MR_Word mercury__set__S_14,
#line 428 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_20,
#line 428 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_21,
#line 428 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_22,
#line 428 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_23,
#line 428 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_24,
#line 428 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_25,
#line 428 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_26,
#line 428 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_27,
#line 428 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_E_0_28,
#line 428 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_E_29)
#line 428 "set.m"
{
#line 186 "set_ordlist.opt"
  {
#line 186 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 186 "set_ordlist.opt"
    MR_Word mercury__set__V_30_65 = (MR_Word) mercury__set__S_14;

#line 188 "set_ordlist.opt"
    {
#line 188 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl5_12_p_5(mercury__set__TypeInfo_for_T_35, mercury__set__TypeInfo_for_A_36, mercury__set__TypeInfo_for_B_37, mercury__set__TypeInfo_for_C_38, mercury__set__TypeInfo_for_D_39, mercury__set__TypeInfo_for_E_40, mercury__set__F_13, mercury__set__V_30_65, mercury__set__STATE_VARIABLE_A_0_20, mercury__set__STATE_VARIABLE_A_21, mercury__set__STATE_VARIABLE_B_0_22, mercury__set__STATE_VARIABLE_B_23, mercury__set__STATE_VARIABLE_C_0_24, mercury__set__STATE_VARIABLE_C_25, mercury__set__STATE_VARIABLE_D_0_26, mercury__set__STATE_VARIABLE_D_27, mercury__set__STATE_VARIABLE_E_0_28, mercury__set__STATE_VARIABLE_E_29);
    }
#line 186 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 186 "set_ordlist.opt"
  }
#line 428 "set.m"
}

#line 425 "set.m"
MR_bool MR_CALL 
mercury__set__foldl5_12_p_4(
#line 425 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_35,
#line 425 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_36,
#line 425 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_37,
#line 425 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_38,
#line 425 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_39,
#line 425 "set.m"
  MR_Word mercury__set__TypeInfo_for_E_40,
#line 425 "set.m"
  MR_Word mercury__set__F_13,
#line 425 "set.m"
  MR_Word mercury__set__S_14,
#line 425 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_20,
#line 425 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_21,
#line 425 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_22,
#line 425 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_23,
#line 425 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_24,
#line 425 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_25,
#line 425 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_26,
#line 425 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_27,
#line 425 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_E_0_28,
#line 425 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_E_29)
#line 425 "set.m"
{
#line 186 "set_ordlist.opt"
  {
#line 186 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 186 "set_ordlist.opt"
    MR_Word mercury__set__V_30_65 = (MR_Word) mercury__set__S_14;

#line 188 "set_ordlist.opt"
    {
#line 188 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl5_12_p_4(mercury__set__TypeInfo_for_T_35, mercury__set__TypeInfo_for_A_36, mercury__set__TypeInfo_for_B_37, mercury__set__TypeInfo_for_C_38, mercury__set__TypeInfo_for_D_39, mercury__set__TypeInfo_for_E_40, mercury__set__F_13, mercury__set__V_30_65, mercury__set__STATE_VARIABLE_A_0_20, mercury__set__STATE_VARIABLE_A_21, mercury__set__STATE_VARIABLE_B_0_22, mercury__set__STATE_VARIABLE_B_23, mercury__set__STATE_VARIABLE_C_0_24, mercury__set__STATE_VARIABLE_C_25, mercury__set__STATE_VARIABLE_D_0_26, mercury__set__STATE_VARIABLE_D_27, mercury__set__STATE_VARIABLE_E_0_28, mercury__set__STATE_VARIABLE_E_29);
    }
#line 186 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 186 "set_ordlist.opt"
  }
#line 425 "set.m"
}

#line 422 "set.m"
MR_bool MR_CALL 
mercury__set__foldl5_12_p_3(
#line 422 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_35,
#line 422 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_36,
#line 422 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_37,
#line 422 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_38,
#line 422 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_39,
#line 422 "set.m"
  MR_Word mercury__set__TypeInfo_for_E_40,
#line 422 "set.m"
  MR_Word mercury__set__F_13,
#line 422 "set.m"
  MR_Word mercury__set__S_14,
#line 422 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_20,
#line 422 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_21,
#line 422 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_22,
#line 422 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_23,
#line 422 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_24,
#line 422 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_25,
#line 422 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_26,
#line 422 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_27,
#line 422 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_E_0_28,
#line 422 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_E_29)
#line 422 "set.m"
{
#line 186 "set_ordlist.opt"
  {
#line 186 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 186 "set_ordlist.opt"
    MR_Word mercury__set__V_30_65 = (MR_Word) mercury__set__S_14;

#line 188 "set_ordlist.opt"
    {
#line 188 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl5_12_p_3(mercury__set__TypeInfo_for_T_35, mercury__set__TypeInfo_for_A_36, mercury__set__TypeInfo_for_B_37, mercury__set__TypeInfo_for_C_38, mercury__set__TypeInfo_for_D_39, mercury__set__TypeInfo_for_E_40, mercury__set__F_13, mercury__set__V_30_65, mercury__set__STATE_VARIABLE_A_0_20, mercury__set__STATE_VARIABLE_A_21, mercury__set__STATE_VARIABLE_B_0_22, mercury__set__STATE_VARIABLE_B_23, mercury__set__STATE_VARIABLE_C_0_24, mercury__set__STATE_VARIABLE_C_25, mercury__set__STATE_VARIABLE_D_0_26, mercury__set__STATE_VARIABLE_D_27, mercury__set__STATE_VARIABLE_E_0_28, mercury__set__STATE_VARIABLE_E_29);
    }
#line 186 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 186 "set_ordlist.opt"
  }
#line 422 "set.m"
}

#line 419 "set.m"
void MR_CALL 
mercury__set__foldl5_12_p_2(
#line 419 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_35,
#line 419 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_36,
#line 419 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_37,
#line 419 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_38,
#line 419 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_39,
#line 419 "set.m"
  MR_Word mercury__set__TypeInfo_for_E_40,
#line 419 "set.m"
  MR_Word mercury__set__F_13,
#line 419 "set.m"
  MR_Word mercury__set__S_14,
#line 419 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_20,
#line 419 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_21,
#line 419 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_22,
#line 419 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_23,
#line 419 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_24,
#line 419 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_25,
#line 419 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_26,
#line 419 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_27,
#line 419 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_E_0_28,
#line 419 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_E_29)
#line 419 "set.m"
{
#line 186 "set_ordlist.opt"
  {
#line 186 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 186 "set_ordlist.opt"
    MR_Word mercury__set__V_30_65 = (MR_Word) mercury__set__S_14;

#line 188 "set_ordlist.opt"
    {
#line 188 "set_ordlist.opt"
      mercury__list__foldl5_12_p_2(mercury__set__TypeInfo_for_T_35, mercury__set__TypeInfo_for_A_36, mercury__set__TypeInfo_for_B_37, mercury__set__TypeInfo_for_C_38, mercury__set__TypeInfo_for_D_39, mercury__set__TypeInfo_for_E_40, mercury__set__F_13, mercury__set__V_30_65, mercury__set__STATE_VARIABLE_A_0_20, mercury__set__STATE_VARIABLE_A_21, mercury__set__STATE_VARIABLE_B_0_22, mercury__set__STATE_VARIABLE_B_23, mercury__set__STATE_VARIABLE_C_0_24, mercury__set__STATE_VARIABLE_C_25, mercury__set__STATE_VARIABLE_D_0_26, mercury__set__STATE_VARIABLE_D_27, mercury__set__STATE_VARIABLE_E_0_28, mercury__set__STATE_VARIABLE_E_29);
#line 188 "set_ordlist.opt"
      return;
    }
#line 186 "set_ordlist.opt"
  }
#line 419 "set.m"
}

#line 416 "set.m"
void MR_CALL 
mercury__set__foldl5_12_p_1(
#line 416 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_35,
#line 416 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_36,
#line 416 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_37,
#line 416 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_38,
#line 416 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_39,
#line 416 "set.m"
  MR_Word mercury__set__TypeInfo_for_E_40,
#line 416 "set.m"
  MR_Word mercury__set__F_13,
#line 416 "set.m"
  MR_Word mercury__set__S_14,
#line 416 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_20,
#line 416 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_21,
#line 416 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_22,
#line 416 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_23,
#line 416 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_24,
#line 416 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_25,
#line 416 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_26,
#line 416 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_27,
#line 416 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_E_0_28,
#line 416 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_E_29)
#line 416 "set.m"
{
#line 186 "set_ordlist.opt"
  {
#line 186 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 186 "set_ordlist.opt"
    MR_Word mercury__set__V_30_65 = (MR_Word) mercury__set__S_14;

#line 188 "set_ordlist.opt"
    {
#line 188 "set_ordlist.opt"
      mercury__list__foldl5_12_p_1(mercury__set__TypeInfo_for_T_35, mercury__set__TypeInfo_for_A_36, mercury__set__TypeInfo_for_B_37, mercury__set__TypeInfo_for_C_38, mercury__set__TypeInfo_for_D_39, mercury__set__TypeInfo_for_E_40, mercury__set__F_13, mercury__set__V_30_65, mercury__set__STATE_VARIABLE_A_0_20, mercury__set__STATE_VARIABLE_A_21, mercury__set__STATE_VARIABLE_B_0_22, mercury__set__STATE_VARIABLE_B_23, mercury__set__STATE_VARIABLE_C_0_24, mercury__set__STATE_VARIABLE_C_25, mercury__set__STATE_VARIABLE_D_0_26, mercury__set__STATE_VARIABLE_D_27, mercury__set__STATE_VARIABLE_E_0_28, mercury__set__STATE_VARIABLE_E_29);
#line 188 "set_ordlist.opt"
      return;
    }
#line 186 "set_ordlist.opt"
  }
#line 416 "set.m"
}

#line 413 "set.m"
void MR_CALL 
mercury__set__foldl5_12_p_0(
#line 413 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_35,
#line 413 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_36,
#line 413 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_37,
#line 413 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_38,
#line 413 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_39,
#line 413 "set.m"
  MR_Word mercury__set__TypeInfo_for_E_40,
#line 413 "set.m"
  MR_Word mercury__set__F_13,
#line 413 "set.m"
  MR_Word mercury__set__S_14,
#line 413 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_20,
#line 413 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_21,
#line 413 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_22,
#line 413 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_23,
#line 413 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_24,
#line 413 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_25,
#line 413 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_26,
#line 413 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_27,
#line 413 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_E_0_28,
#line 413 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_E_29)
#line 413 "set.m"
{
#line 186 "set_ordlist.opt"
  {
#line 186 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 186 "set_ordlist.opt"
    MR_Word mercury__set__V_30_65 = (MR_Word) mercury__set__S_14;

#line 188 "set_ordlist.opt"
    {
#line 188 "set_ordlist.opt"
      mercury__list__foldl5_12_p_0(mercury__set__TypeInfo_for_T_35, mercury__set__TypeInfo_for_A_36, mercury__set__TypeInfo_for_B_37, mercury__set__TypeInfo_for_C_38, mercury__set__TypeInfo_for_D_39, mercury__set__TypeInfo_for_E_40, mercury__set__F_13, mercury__set__V_30_65, mercury__set__STATE_VARIABLE_A_0_20, mercury__set__STATE_VARIABLE_A_21, mercury__set__STATE_VARIABLE_B_0_22, mercury__set__STATE_VARIABLE_B_23, mercury__set__STATE_VARIABLE_C_0_24, mercury__set__STATE_VARIABLE_C_25, mercury__set__STATE_VARIABLE_D_0_26, mercury__set__STATE_VARIABLE_D_27, mercury__set__STATE_VARIABLE_E_0_28, mercury__set__STATE_VARIABLE_E_29);
#line 188 "set_ordlist.opt"
      return;
    }
#line 186 "set_ordlist.opt"
  }
#line 413 "set.m"
}

#line 407 "set.m"
MR_bool MR_CALL 
mercury__set__fold5_12_p_5(
#line 407 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_35,
#line 407 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_36,
#line 407 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_37,
#line 407 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_38,
#line 407 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_39,
#line 407 "set.m"
  MR_Word mercury__set__TypeInfo_for_E_40,
#line 407 "set.m"
  MR_Word mercury__set__F_13,
#line 407 "set.m"
  MR_Word mercury__set__S_14,
#line 407 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_20,
#line 407 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_21,
#line 407 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_22,
#line 407 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_23,
#line 407 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_24,
#line 407 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_25,
#line 407 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_26,
#line 407 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_27,
#line 407 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_E_0_28,
#line 407 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_E_29)
#line 407 "set.m"
{
#line 186 "set_ordlist.opt"
  {
#line 186 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 186 "set_ordlist.opt"
    MR_Word mercury__set__V_30_87 = (MR_Word) mercury__set__S_14;

#line 188 "set_ordlist.opt"
    {
#line 188 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl5_12_p_5(mercury__set__TypeInfo_for_T_35, mercury__set__TypeInfo_for_A_36, mercury__set__TypeInfo_for_B_37, mercury__set__TypeInfo_for_C_38, mercury__set__TypeInfo_for_D_39, mercury__set__TypeInfo_for_E_40, mercury__set__F_13, mercury__set__V_30_87, mercury__set__STATE_VARIABLE_A_0_20, mercury__set__STATE_VARIABLE_A_21, mercury__set__STATE_VARIABLE_B_0_22, mercury__set__STATE_VARIABLE_B_23, mercury__set__STATE_VARIABLE_C_0_24, mercury__set__STATE_VARIABLE_C_25, mercury__set__STATE_VARIABLE_D_0_26, mercury__set__STATE_VARIABLE_D_27, mercury__set__STATE_VARIABLE_E_0_28, mercury__set__STATE_VARIABLE_E_29);
    }
#line 186 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 186 "set_ordlist.opt"
  }
#line 407 "set.m"
}

#line 404 "set.m"
MR_bool MR_CALL 
mercury__set__fold5_12_p_4(
#line 404 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_35,
#line 404 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_36,
#line 404 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_37,
#line 404 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_38,
#line 404 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_39,
#line 404 "set.m"
  MR_Word mercury__set__TypeInfo_for_E_40,
#line 404 "set.m"
  MR_Word mercury__set__F_13,
#line 404 "set.m"
  MR_Word mercury__set__S_14,
#line 404 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_20,
#line 404 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_21,
#line 404 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_22,
#line 404 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_23,
#line 404 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_24,
#line 404 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_25,
#line 404 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_26,
#line 404 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_27,
#line 404 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_E_0_28,
#line 404 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_E_29)
#line 404 "set.m"
{
#line 186 "set_ordlist.opt"
  {
#line 186 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 186 "set_ordlist.opt"
    MR_Word mercury__set__V_30_87 = (MR_Word) mercury__set__S_14;

#line 188 "set_ordlist.opt"
    {
#line 188 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl5_12_p_4(mercury__set__TypeInfo_for_T_35, mercury__set__TypeInfo_for_A_36, mercury__set__TypeInfo_for_B_37, mercury__set__TypeInfo_for_C_38, mercury__set__TypeInfo_for_D_39, mercury__set__TypeInfo_for_E_40, mercury__set__F_13, mercury__set__V_30_87, mercury__set__STATE_VARIABLE_A_0_20, mercury__set__STATE_VARIABLE_A_21, mercury__set__STATE_VARIABLE_B_0_22, mercury__set__STATE_VARIABLE_B_23, mercury__set__STATE_VARIABLE_C_0_24, mercury__set__STATE_VARIABLE_C_25, mercury__set__STATE_VARIABLE_D_0_26, mercury__set__STATE_VARIABLE_D_27, mercury__set__STATE_VARIABLE_E_0_28, mercury__set__STATE_VARIABLE_E_29);
    }
#line 186 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 186 "set_ordlist.opt"
  }
#line 404 "set.m"
}

#line 401 "set.m"
MR_bool MR_CALL 
mercury__set__fold5_12_p_3(
#line 401 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_35,
#line 401 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_36,
#line 401 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_37,
#line 401 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_38,
#line 401 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_39,
#line 401 "set.m"
  MR_Word mercury__set__TypeInfo_for_E_40,
#line 401 "set.m"
  MR_Word mercury__set__F_13,
#line 401 "set.m"
  MR_Word mercury__set__S_14,
#line 401 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_20,
#line 401 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_21,
#line 401 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_22,
#line 401 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_23,
#line 401 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_24,
#line 401 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_25,
#line 401 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_26,
#line 401 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_27,
#line 401 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_E_0_28,
#line 401 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_E_29)
#line 401 "set.m"
{
#line 186 "set_ordlist.opt"
  {
#line 186 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 186 "set_ordlist.opt"
    MR_Word mercury__set__V_30_87 = (MR_Word) mercury__set__S_14;

#line 188 "set_ordlist.opt"
    {
#line 188 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl5_12_p_3(mercury__set__TypeInfo_for_T_35, mercury__set__TypeInfo_for_A_36, mercury__set__TypeInfo_for_B_37, mercury__set__TypeInfo_for_C_38, mercury__set__TypeInfo_for_D_39, mercury__set__TypeInfo_for_E_40, mercury__set__F_13, mercury__set__V_30_87, mercury__set__STATE_VARIABLE_A_0_20, mercury__set__STATE_VARIABLE_A_21, mercury__set__STATE_VARIABLE_B_0_22, mercury__set__STATE_VARIABLE_B_23, mercury__set__STATE_VARIABLE_C_0_24, mercury__set__STATE_VARIABLE_C_25, mercury__set__STATE_VARIABLE_D_0_26, mercury__set__STATE_VARIABLE_D_27, mercury__set__STATE_VARIABLE_E_0_28, mercury__set__STATE_VARIABLE_E_29);
    }
#line 186 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 186 "set_ordlist.opt"
  }
#line 401 "set.m"
}

#line 398 "set.m"
void MR_CALL 
mercury__set__fold5_12_p_2(
#line 398 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_35,
#line 398 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_36,
#line 398 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_37,
#line 398 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_38,
#line 398 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_39,
#line 398 "set.m"
  MR_Word mercury__set__TypeInfo_for_E_40,
#line 398 "set.m"
  MR_Word mercury__set__F_13,
#line 398 "set.m"
  MR_Word mercury__set__S_14,
#line 398 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_20,
#line 398 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_21,
#line 398 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_22,
#line 398 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_23,
#line 398 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_24,
#line 398 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_25,
#line 398 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_26,
#line 398 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_27,
#line 398 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_E_0_28,
#line 398 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_E_29)
#line 398 "set.m"
{
#line 186 "set_ordlist.opt"
  {
#line 186 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 186 "set_ordlist.opt"
    MR_Word mercury__set__V_30_87 = (MR_Word) mercury__set__S_14;

#line 188 "set_ordlist.opt"
    {
#line 188 "set_ordlist.opt"
      mercury__list__foldl5_12_p_2(mercury__set__TypeInfo_for_T_35, mercury__set__TypeInfo_for_A_36, mercury__set__TypeInfo_for_B_37, mercury__set__TypeInfo_for_C_38, mercury__set__TypeInfo_for_D_39, mercury__set__TypeInfo_for_E_40, mercury__set__F_13, mercury__set__V_30_87, mercury__set__STATE_VARIABLE_A_0_20, mercury__set__STATE_VARIABLE_A_21, mercury__set__STATE_VARIABLE_B_0_22, mercury__set__STATE_VARIABLE_B_23, mercury__set__STATE_VARIABLE_C_0_24, mercury__set__STATE_VARIABLE_C_25, mercury__set__STATE_VARIABLE_D_0_26, mercury__set__STATE_VARIABLE_D_27, mercury__set__STATE_VARIABLE_E_0_28, mercury__set__STATE_VARIABLE_E_29);
#line 188 "set_ordlist.opt"
      return;
    }
#line 186 "set_ordlist.opt"
  }
#line 398 "set.m"
}

#line 395 "set.m"
void MR_CALL 
mercury__set__fold5_12_p_1(
#line 395 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_35,
#line 395 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_36,
#line 395 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_37,
#line 395 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_38,
#line 395 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_39,
#line 395 "set.m"
  MR_Word mercury__set__TypeInfo_for_E_40,
#line 395 "set.m"
  MR_Word mercury__set__F_13,
#line 395 "set.m"
  MR_Word mercury__set__S_14,
#line 395 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_20,
#line 395 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_21,
#line 395 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_22,
#line 395 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_23,
#line 395 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_24,
#line 395 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_25,
#line 395 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_26,
#line 395 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_27,
#line 395 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_E_0_28,
#line 395 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_E_29)
#line 395 "set.m"
{
#line 186 "set_ordlist.opt"
  {
#line 186 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 186 "set_ordlist.opt"
    MR_Word mercury__set__V_30_87 = (MR_Word) mercury__set__S_14;

#line 188 "set_ordlist.opt"
    {
#line 188 "set_ordlist.opt"
      mercury__list__foldl5_12_p_1(mercury__set__TypeInfo_for_T_35, mercury__set__TypeInfo_for_A_36, mercury__set__TypeInfo_for_B_37, mercury__set__TypeInfo_for_C_38, mercury__set__TypeInfo_for_D_39, mercury__set__TypeInfo_for_E_40, mercury__set__F_13, mercury__set__V_30_87, mercury__set__STATE_VARIABLE_A_0_20, mercury__set__STATE_VARIABLE_A_21, mercury__set__STATE_VARIABLE_B_0_22, mercury__set__STATE_VARIABLE_B_23, mercury__set__STATE_VARIABLE_C_0_24, mercury__set__STATE_VARIABLE_C_25, mercury__set__STATE_VARIABLE_D_0_26, mercury__set__STATE_VARIABLE_D_27, mercury__set__STATE_VARIABLE_E_0_28, mercury__set__STATE_VARIABLE_E_29);
#line 188 "set_ordlist.opt"
      return;
    }
#line 186 "set_ordlist.opt"
  }
#line 395 "set.m"
}

#line 392 "set.m"
void MR_CALL 
mercury__set__fold5_12_p_0(
#line 392 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_35,
#line 392 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_36,
#line 392 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_37,
#line 392 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_38,
#line 392 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_39,
#line 392 "set.m"
  MR_Word mercury__set__TypeInfo_for_E_40,
#line 392 "set.m"
  MR_Word mercury__set__F_13,
#line 392 "set.m"
  MR_Word mercury__set__S_14,
#line 392 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_20,
#line 392 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_21,
#line 392 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_22,
#line 392 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_23,
#line 392 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_24,
#line 392 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_25,
#line 392 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_26,
#line 392 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_27,
#line 392 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_E_0_28,
#line 392 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_E_29)
#line 392 "set.m"
{
#line 186 "set_ordlist.opt"
  {
#line 186 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 186 "set_ordlist.opt"
    MR_Word mercury__set__V_30_87 = (MR_Word) mercury__set__S_14;

#line 188 "set_ordlist.opt"
    {
#line 188 "set_ordlist.opt"
      mercury__list__foldl5_12_p_0(mercury__set__TypeInfo_for_T_35, mercury__set__TypeInfo_for_A_36, mercury__set__TypeInfo_for_B_37, mercury__set__TypeInfo_for_C_38, mercury__set__TypeInfo_for_D_39, mercury__set__TypeInfo_for_E_40, mercury__set__F_13, mercury__set__V_30_87, mercury__set__STATE_VARIABLE_A_0_20, mercury__set__STATE_VARIABLE_A_21, mercury__set__STATE_VARIABLE_B_0_22, mercury__set__STATE_VARIABLE_B_23, mercury__set__STATE_VARIABLE_C_0_24, mercury__set__STATE_VARIABLE_C_25, mercury__set__STATE_VARIABLE_D_0_26, mercury__set__STATE_VARIABLE_D_27, mercury__set__STATE_VARIABLE_E_0_28, mercury__set__STATE_VARIABLE_E_29);
#line 188 "set_ordlist.opt"
      return;
    }
#line 186 "set_ordlist.opt"
  }
#line 392 "set.m"
}

#line 387 "set.m"
MR_bool MR_CALL 
mercury__set__foldl4_10_p_5(
#line 387 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_29,
#line 387 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_30,
#line 387 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_31,
#line 387 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_32,
#line 387 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_33,
#line 387 "set.m"
  MR_Word mercury__set__F_11,
#line 387 "set.m"
  MR_Word mercury__set__S_12,
#line 387 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_17,
#line 387 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_18,
#line 387 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_19,
#line 387 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_20,
#line 387 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_21,
#line 387 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_22,
#line 387 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_23,
#line 387 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_24)
#line 387 "set.m"
{
#line 181 "set_ordlist.opt"
  {
#line 181 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 181 "set_ordlist.opt"
    MR_Word mercury__set__V_25_54 = (MR_Word) mercury__set__S_12;

#line 183 "set_ordlist.opt"
    {
#line 183 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl4_10_p_7(mercury__set__TypeInfo_for_T_29, mercury__set__TypeInfo_for_A_30, mercury__set__TypeInfo_for_B_31, mercury__set__TypeInfo_for_C_32, mercury__set__TypeInfo_for_D_33, mercury__set__F_11, mercury__set__V_25_54, mercury__set__STATE_VARIABLE_A_0_17, mercury__set__STATE_VARIABLE_A_18, mercury__set__STATE_VARIABLE_B_0_19, mercury__set__STATE_VARIABLE_B_20, mercury__set__STATE_VARIABLE_C_0_21, mercury__set__STATE_VARIABLE_C_22, mercury__set__STATE_VARIABLE_D_0_23, mercury__set__STATE_VARIABLE_D_24);
    }
#line 181 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 181 "set_ordlist.opt"
  }
#line 387 "set.m"
}

#line 385 "set.m"
MR_bool MR_CALL 
mercury__set__foldl4_10_p_4(
#line 385 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_29,
#line 385 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_30,
#line 385 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_31,
#line 385 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_32,
#line 385 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_33,
#line 385 "set.m"
  MR_Word mercury__set__F_11,
#line 385 "set.m"
  MR_Word mercury__set__S_12,
#line 385 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_17,
#line 385 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_18,
#line 385 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_19,
#line 385 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_20,
#line 385 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_21,
#line 385 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_22,
#line 385 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_23,
#line 385 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_24)
#line 385 "set.m"
{
#line 181 "set_ordlist.opt"
  {
#line 181 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 181 "set_ordlist.opt"
    MR_Word mercury__set__V_25_54 = (MR_Word) mercury__set__S_12;

#line 183 "set_ordlist.opt"
    {
#line 183 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl4_10_p_6(mercury__set__TypeInfo_for_T_29, mercury__set__TypeInfo_for_A_30, mercury__set__TypeInfo_for_B_31, mercury__set__TypeInfo_for_C_32, mercury__set__TypeInfo_for_D_33, mercury__set__F_11, mercury__set__V_25_54, mercury__set__STATE_VARIABLE_A_0_17, mercury__set__STATE_VARIABLE_A_18, mercury__set__STATE_VARIABLE_B_0_19, mercury__set__STATE_VARIABLE_B_20, mercury__set__STATE_VARIABLE_C_0_21, mercury__set__STATE_VARIABLE_C_22, mercury__set__STATE_VARIABLE_D_0_23, mercury__set__STATE_VARIABLE_D_24);
    }
#line 181 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 181 "set_ordlist.opt"
  }
#line 385 "set.m"
}

#line 383 "set.m"
MR_bool MR_CALL 
mercury__set__foldl4_10_p_3(
#line 383 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_29,
#line 383 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_30,
#line 383 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_31,
#line 383 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_32,
#line 383 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_33,
#line 383 "set.m"
  MR_Word mercury__set__F_11,
#line 383 "set.m"
  MR_Word mercury__set__S_12,
#line 383 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_17,
#line 383 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_18,
#line 383 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_19,
#line 383 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_20,
#line 383 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_21,
#line 383 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_22,
#line 383 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_23,
#line 383 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_24)
#line 383 "set.m"
{
#line 181 "set_ordlist.opt"
  {
#line 181 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 181 "set_ordlist.opt"
    MR_Word mercury__set__V_25_54 = (MR_Word) mercury__set__S_12;

#line 183 "set_ordlist.opt"
    {
#line 183 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl4_10_p_5(mercury__set__TypeInfo_for_T_29, mercury__set__TypeInfo_for_A_30, mercury__set__TypeInfo_for_B_31, mercury__set__TypeInfo_for_C_32, mercury__set__TypeInfo_for_D_33, mercury__set__F_11, mercury__set__V_25_54, mercury__set__STATE_VARIABLE_A_0_17, mercury__set__STATE_VARIABLE_A_18, mercury__set__STATE_VARIABLE_B_0_19, mercury__set__STATE_VARIABLE_B_20, mercury__set__STATE_VARIABLE_C_0_21, mercury__set__STATE_VARIABLE_C_22, mercury__set__STATE_VARIABLE_D_0_23, mercury__set__STATE_VARIABLE_D_24);
    }
#line 181 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 181 "set_ordlist.opt"
  }
#line 383 "set.m"
}

#line 381 "set.m"
void MR_CALL 
mercury__set__foldl4_10_p_2(
#line 381 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_29,
#line 381 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_30,
#line 381 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_31,
#line 381 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_32,
#line 381 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_33,
#line 381 "set.m"
  MR_Word mercury__set__F_11,
#line 381 "set.m"
  MR_Word mercury__set__S_12,
#line 381 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_17,
#line 381 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_18,
#line 381 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_19,
#line 381 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_20,
#line 381 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_21,
#line 381 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_22,
#line 381 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_23,
#line 381 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_24)
#line 381 "set.m"
{
#line 181 "set_ordlist.opt"
  {
#line 181 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 181 "set_ordlist.opt"
    MR_Word mercury__set__V_25_54 = (MR_Word) mercury__set__S_12;

#line 183 "set_ordlist.opt"
    {
#line 183 "set_ordlist.opt"
      mercury__list__foldl4_10_p_2(mercury__set__TypeInfo_for_T_29, mercury__set__TypeInfo_for_A_30, mercury__set__TypeInfo_for_B_31, mercury__set__TypeInfo_for_C_32, mercury__set__TypeInfo_for_D_33, mercury__set__F_11, mercury__set__V_25_54, mercury__set__STATE_VARIABLE_A_0_17, mercury__set__STATE_VARIABLE_A_18, mercury__set__STATE_VARIABLE_B_0_19, mercury__set__STATE_VARIABLE_B_20, mercury__set__STATE_VARIABLE_C_0_21, mercury__set__STATE_VARIABLE_C_22, mercury__set__STATE_VARIABLE_D_0_23, mercury__set__STATE_VARIABLE_D_24);
#line 183 "set_ordlist.opt"
      return;
    }
#line 181 "set_ordlist.opt"
  }
#line 381 "set.m"
}

#line 379 "set.m"
void MR_CALL 
mercury__set__foldl4_10_p_1(
#line 379 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_29,
#line 379 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_30,
#line 379 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_31,
#line 379 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_32,
#line 379 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_33,
#line 379 "set.m"
  MR_Word mercury__set__F_11,
#line 379 "set.m"
  MR_Word mercury__set__S_12,
#line 379 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_17,
#line 379 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_18,
#line 379 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_19,
#line 379 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_20,
#line 379 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_21,
#line 379 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_22,
#line 379 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_23,
#line 379 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_24)
#line 379 "set.m"
{
#line 181 "set_ordlist.opt"
  {
#line 181 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 181 "set_ordlist.opt"
    MR_Word mercury__set__V_25_54 = (MR_Word) mercury__set__S_12;

#line 183 "set_ordlist.opt"
    {
#line 183 "set_ordlist.opt"
      mercury__list__foldl4_10_p_1(mercury__set__TypeInfo_for_T_29, mercury__set__TypeInfo_for_A_30, mercury__set__TypeInfo_for_B_31, mercury__set__TypeInfo_for_C_32, mercury__set__TypeInfo_for_D_33, mercury__set__F_11, mercury__set__V_25_54, mercury__set__STATE_VARIABLE_A_0_17, mercury__set__STATE_VARIABLE_A_18, mercury__set__STATE_VARIABLE_B_0_19, mercury__set__STATE_VARIABLE_B_20, mercury__set__STATE_VARIABLE_C_0_21, mercury__set__STATE_VARIABLE_C_22, mercury__set__STATE_VARIABLE_D_0_23, mercury__set__STATE_VARIABLE_D_24);
#line 183 "set_ordlist.opt"
      return;
    }
#line 181 "set_ordlist.opt"
  }
#line 379 "set.m"
}

#line 377 "set.m"
void MR_CALL 
mercury__set__foldl4_10_p_0(
#line 377 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_29,
#line 377 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_30,
#line 377 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_31,
#line 377 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_32,
#line 377 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_33,
#line 377 "set.m"
  MR_Word mercury__set__F_11,
#line 377 "set.m"
  MR_Word mercury__set__S_12,
#line 377 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_17,
#line 377 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_18,
#line 377 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_19,
#line 377 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_20,
#line 377 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_21,
#line 377 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_22,
#line 377 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_23,
#line 377 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_24)
#line 377 "set.m"
{
#line 181 "set_ordlist.opt"
  {
#line 181 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 181 "set_ordlist.opt"
    MR_Word mercury__set__V_25_54 = (MR_Word) mercury__set__S_12;

#line 183 "set_ordlist.opt"
    {
#line 183 "set_ordlist.opt"
      mercury__list__foldl4_10_p_0(mercury__set__TypeInfo_for_T_29, mercury__set__TypeInfo_for_A_30, mercury__set__TypeInfo_for_B_31, mercury__set__TypeInfo_for_C_32, mercury__set__TypeInfo_for_D_33, mercury__set__F_11, mercury__set__V_25_54, mercury__set__STATE_VARIABLE_A_0_17, mercury__set__STATE_VARIABLE_A_18, mercury__set__STATE_VARIABLE_B_0_19, mercury__set__STATE_VARIABLE_B_20, mercury__set__STATE_VARIABLE_C_0_21, mercury__set__STATE_VARIABLE_C_22, mercury__set__STATE_VARIABLE_D_0_23, mercury__set__STATE_VARIABLE_D_24);
#line 183 "set_ordlist.opt"
      return;
    }
#line 181 "set_ordlist.opt"
  }
#line 377 "set.m"
}

#line 372 "set.m"
MR_bool MR_CALL 
mercury__set__fold4_10_p_5(
#line 372 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_29,
#line 372 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_30,
#line 372 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_31,
#line 372 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_32,
#line 372 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_33,
#line 372 "set.m"
  MR_Word mercury__set__F_11,
#line 372 "set.m"
  MR_Word mercury__set__S_12,
#line 372 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_17,
#line 372 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_18,
#line 372 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_19,
#line 372 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_20,
#line 372 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_21,
#line 372 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_22,
#line 372 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_23,
#line 372 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_24)
#line 372 "set.m"
{
#line 181 "set_ordlist.opt"
  {
#line 181 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 181 "set_ordlist.opt"
    MR_Word mercury__set__V_25_72 = (MR_Word) mercury__set__S_12;

#line 183 "set_ordlist.opt"
    {
#line 183 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl4_10_p_7(mercury__set__TypeInfo_for_T_29, mercury__set__TypeInfo_for_A_30, mercury__set__TypeInfo_for_B_31, mercury__set__TypeInfo_for_C_32, mercury__set__TypeInfo_for_D_33, mercury__set__F_11, mercury__set__V_25_72, mercury__set__STATE_VARIABLE_A_0_17, mercury__set__STATE_VARIABLE_A_18, mercury__set__STATE_VARIABLE_B_0_19, mercury__set__STATE_VARIABLE_B_20, mercury__set__STATE_VARIABLE_C_0_21, mercury__set__STATE_VARIABLE_C_22, mercury__set__STATE_VARIABLE_D_0_23, mercury__set__STATE_VARIABLE_D_24);
    }
#line 181 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 181 "set_ordlist.opt"
  }
#line 372 "set.m"
}

#line 370 "set.m"
MR_bool MR_CALL 
mercury__set__fold4_10_p_4(
#line 370 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_29,
#line 370 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_30,
#line 370 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_31,
#line 370 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_32,
#line 370 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_33,
#line 370 "set.m"
  MR_Word mercury__set__F_11,
#line 370 "set.m"
  MR_Word mercury__set__S_12,
#line 370 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_17,
#line 370 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_18,
#line 370 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_19,
#line 370 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_20,
#line 370 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_21,
#line 370 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_22,
#line 370 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_23,
#line 370 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_24)
#line 370 "set.m"
{
#line 181 "set_ordlist.opt"
  {
#line 181 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 181 "set_ordlist.opt"
    MR_Word mercury__set__V_25_72 = (MR_Word) mercury__set__S_12;

#line 183 "set_ordlist.opt"
    {
#line 183 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl4_10_p_6(mercury__set__TypeInfo_for_T_29, mercury__set__TypeInfo_for_A_30, mercury__set__TypeInfo_for_B_31, mercury__set__TypeInfo_for_C_32, mercury__set__TypeInfo_for_D_33, mercury__set__F_11, mercury__set__V_25_72, mercury__set__STATE_VARIABLE_A_0_17, mercury__set__STATE_VARIABLE_A_18, mercury__set__STATE_VARIABLE_B_0_19, mercury__set__STATE_VARIABLE_B_20, mercury__set__STATE_VARIABLE_C_0_21, mercury__set__STATE_VARIABLE_C_22, mercury__set__STATE_VARIABLE_D_0_23, mercury__set__STATE_VARIABLE_D_24);
    }
#line 181 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 181 "set_ordlist.opt"
  }
#line 370 "set.m"
}

#line 368 "set.m"
MR_bool MR_CALL 
mercury__set__fold4_10_p_3(
#line 368 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_29,
#line 368 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_30,
#line 368 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_31,
#line 368 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_32,
#line 368 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_33,
#line 368 "set.m"
  MR_Word mercury__set__F_11,
#line 368 "set.m"
  MR_Word mercury__set__S_12,
#line 368 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_17,
#line 368 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_18,
#line 368 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_19,
#line 368 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_20,
#line 368 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_21,
#line 368 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_22,
#line 368 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_23,
#line 368 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_24)
#line 368 "set.m"
{
#line 181 "set_ordlist.opt"
  {
#line 181 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 181 "set_ordlist.opt"
    MR_Word mercury__set__V_25_72 = (MR_Word) mercury__set__S_12;

#line 183 "set_ordlist.opt"
    {
#line 183 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl4_10_p_5(mercury__set__TypeInfo_for_T_29, mercury__set__TypeInfo_for_A_30, mercury__set__TypeInfo_for_B_31, mercury__set__TypeInfo_for_C_32, mercury__set__TypeInfo_for_D_33, mercury__set__F_11, mercury__set__V_25_72, mercury__set__STATE_VARIABLE_A_0_17, mercury__set__STATE_VARIABLE_A_18, mercury__set__STATE_VARIABLE_B_0_19, mercury__set__STATE_VARIABLE_B_20, mercury__set__STATE_VARIABLE_C_0_21, mercury__set__STATE_VARIABLE_C_22, mercury__set__STATE_VARIABLE_D_0_23, mercury__set__STATE_VARIABLE_D_24);
    }
#line 181 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 181 "set_ordlist.opt"
  }
#line 368 "set.m"
}

#line 366 "set.m"
void MR_CALL 
mercury__set__fold4_10_p_2(
#line 366 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_29,
#line 366 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_30,
#line 366 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_31,
#line 366 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_32,
#line 366 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_33,
#line 366 "set.m"
  MR_Word mercury__set__F_11,
#line 366 "set.m"
  MR_Word mercury__set__S_12,
#line 366 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_17,
#line 366 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_18,
#line 366 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_19,
#line 366 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_20,
#line 366 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_21,
#line 366 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_22,
#line 366 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_23,
#line 366 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_24)
#line 366 "set.m"
{
#line 181 "set_ordlist.opt"
  {
#line 181 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 181 "set_ordlist.opt"
    MR_Word mercury__set__V_25_72 = (MR_Word) mercury__set__S_12;

#line 183 "set_ordlist.opt"
    {
#line 183 "set_ordlist.opt"
      mercury__list__foldl4_10_p_2(mercury__set__TypeInfo_for_T_29, mercury__set__TypeInfo_for_A_30, mercury__set__TypeInfo_for_B_31, mercury__set__TypeInfo_for_C_32, mercury__set__TypeInfo_for_D_33, mercury__set__F_11, mercury__set__V_25_72, mercury__set__STATE_VARIABLE_A_0_17, mercury__set__STATE_VARIABLE_A_18, mercury__set__STATE_VARIABLE_B_0_19, mercury__set__STATE_VARIABLE_B_20, mercury__set__STATE_VARIABLE_C_0_21, mercury__set__STATE_VARIABLE_C_22, mercury__set__STATE_VARIABLE_D_0_23, mercury__set__STATE_VARIABLE_D_24);
#line 183 "set_ordlist.opt"
      return;
    }
#line 181 "set_ordlist.opt"
  }
#line 366 "set.m"
}

#line 364 "set.m"
void MR_CALL 
mercury__set__fold4_10_p_1(
#line 364 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_29,
#line 364 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_30,
#line 364 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_31,
#line 364 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_32,
#line 364 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_33,
#line 364 "set.m"
  MR_Word mercury__set__F_11,
#line 364 "set.m"
  MR_Word mercury__set__S_12,
#line 364 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_17,
#line 364 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_18,
#line 364 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_19,
#line 364 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_20,
#line 364 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_21,
#line 364 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_22,
#line 364 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_23,
#line 364 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_24)
#line 364 "set.m"
{
#line 181 "set_ordlist.opt"
  {
#line 181 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 181 "set_ordlist.opt"
    MR_Word mercury__set__V_25_72 = (MR_Word) mercury__set__S_12;

#line 183 "set_ordlist.opt"
    {
#line 183 "set_ordlist.opt"
      mercury__list__foldl4_10_p_1(mercury__set__TypeInfo_for_T_29, mercury__set__TypeInfo_for_A_30, mercury__set__TypeInfo_for_B_31, mercury__set__TypeInfo_for_C_32, mercury__set__TypeInfo_for_D_33, mercury__set__F_11, mercury__set__V_25_72, mercury__set__STATE_VARIABLE_A_0_17, mercury__set__STATE_VARIABLE_A_18, mercury__set__STATE_VARIABLE_B_0_19, mercury__set__STATE_VARIABLE_B_20, mercury__set__STATE_VARIABLE_C_0_21, mercury__set__STATE_VARIABLE_C_22, mercury__set__STATE_VARIABLE_D_0_23, mercury__set__STATE_VARIABLE_D_24);
#line 183 "set_ordlist.opt"
      return;
    }
#line 181 "set_ordlist.opt"
  }
#line 364 "set.m"
}

#line 362 "set.m"
void MR_CALL 
mercury__set__fold4_10_p_0(
#line 362 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_29,
#line 362 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_30,
#line 362 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_31,
#line 362 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_32,
#line 362 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_33,
#line 362 "set.m"
  MR_Word mercury__set__F_11,
#line 362 "set.m"
  MR_Word mercury__set__S_12,
#line 362 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_17,
#line 362 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_18,
#line 362 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_19,
#line 362 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_20,
#line 362 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_21,
#line 362 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_22,
#line 362 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_23,
#line 362 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_24)
#line 362 "set.m"
{
#line 181 "set_ordlist.opt"
  {
#line 181 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 181 "set_ordlist.opt"
    MR_Word mercury__set__V_25_72 = (MR_Word) mercury__set__S_12;

#line 183 "set_ordlist.opt"
    {
#line 183 "set_ordlist.opt"
      mercury__list__foldl4_10_p_0(mercury__set__TypeInfo_for_T_29, mercury__set__TypeInfo_for_A_30, mercury__set__TypeInfo_for_B_31, mercury__set__TypeInfo_for_C_32, mercury__set__TypeInfo_for_D_33, mercury__set__F_11, mercury__set__V_25_72, mercury__set__STATE_VARIABLE_A_0_17, mercury__set__STATE_VARIABLE_A_18, mercury__set__STATE_VARIABLE_B_0_19, mercury__set__STATE_VARIABLE_B_20, mercury__set__STATE_VARIABLE_C_0_21, mercury__set__STATE_VARIABLE_C_22, mercury__set__STATE_VARIABLE_D_0_23, mercury__set__STATE_VARIABLE_D_24);
#line 183 "set_ordlist.opt"
      return;
    }
#line 181 "set_ordlist.opt"
  }
#line 362 "set.m"
}

#line 357 "set.m"
MR_bool MR_CALL 
mercury__set__foldl3_8_p_5(
#line 357 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_23,
#line 357 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_24,
#line 357 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_25,
#line 357 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_26,
#line 357 "set.m"
  MR_Word mercury__set__F_9,
#line 357 "set.m"
  MR_Word mercury__set__S_10,
#line 357 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_14,
#line 357 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_15,
#line 357 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_16,
#line 357 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_17,
#line 357 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_18,
#line 357 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_19)
#line 357 "set.m"
{
#line 176 "set_ordlist.opt"
  {
#line 176 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 176 "set_ordlist.opt"
    MR_Word mercury__set__V_20_43 = (MR_Word) mercury__set__S_10;

#line 178 "set_ordlist.opt"
    {
#line 178 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl3_8_p_5(mercury__set__TypeInfo_for_T_23, mercury__set__TypeInfo_for_A_24, mercury__set__TypeInfo_for_B_25, mercury__set__TypeInfo_for_C_26, mercury__set__F_9, mercury__set__V_20_43, mercury__set__STATE_VARIABLE_A_0_14, mercury__set__STATE_VARIABLE_A_15, mercury__set__STATE_VARIABLE_B_0_16, mercury__set__STATE_VARIABLE_B_17, mercury__set__STATE_VARIABLE_C_0_18, mercury__set__STATE_VARIABLE_C_19);
    }
#line 176 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 176 "set_ordlist.opt"
  }
#line 357 "set.m"
}

#line 355 "set.m"
MR_bool MR_CALL 
mercury__set__foldl3_8_p_4(
#line 355 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_23,
#line 355 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_24,
#line 355 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_25,
#line 355 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_26,
#line 355 "set.m"
  MR_Word mercury__set__F_9,
#line 355 "set.m"
  MR_Word mercury__set__S_10,
#line 355 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_14,
#line 355 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_15,
#line 355 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_16,
#line 355 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_17,
#line 355 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_18,
#line 355 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_19)
#line 355 "set.m"
{
#line 176 "set_ordlist.opt"
  {
#line 176 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 176 "set_ordlist.opt"
    MR_Word mercury__set__V_20_43 = (MR_Word) mercury__set__S_10;

#line 178 "set_ordlist.opt"
    {
#line 178 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl3_8_p_4(mercury__set__TypeInfo_for_T_23, mercury__set__TypeInfo_for_A_24, mercury__set__TypeInfo_for_B_25, mercury__set__TypeInfo_for_C_26, mercury__set__F_9, mercury__set__V_20_43, mercury__set__STATE_VARIABLE_A_0_14, mercury__set__STATE_VARIABLE_A_15, mercury__set__STATE_VARIABLE_B_0_16, mercury__set__STATE_VARIABLE_B_17, mercury__set__STATE_VARIABLE_C_0_18, mercury__set__STATE_VARIABLE_C_19);
    }
#line 176 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 176 "set_ordlist.opt"
  }
#line 355 "set.m"
}

#line 353 "set.m"
MR_bool MR_CALL 
mercury__set__foldl3_8_p_3(
#line 353 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_23,
#line 353 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_24,
#line 353 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_25,
#line 353 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_26,
#line 353 "set.m"
  MR_Word mercury__set__F_9,
#line 353 "set.m"
  MR_Word mercury__set__S_10,
#line 353 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_14,
#line 353 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_15,
#line 353 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_16,
#line 353 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_17,
#line 353 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_18,
#line 353 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_19)
#line 353 "set.m"
{
#line 176 "set_ordlist.opt"
  {
#line 176 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 176 "set_ordlist.opt"
    MR_Word mercury__set__V_20_43 = (MR_Word) mercury__set__S_10;

#line 178 "set_ordlist.opt"
    {
#line 178 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl3_8_p_3(mercury__set__TypeInfo_for_T_23, mercury__set__TypeInfo_for_A_24, mercury__set__TypeInfo_for_B_25, mercury__set__TypeInfo_for_C_26, mercury__set__F_9, mercury__set__V_20_43, mercury__set__STATE_VARIABLE_A_0_14, mercury__set__STATE_VARIABLE_A_15, mercury__set__STATE_VARIABLE_B_0_16, mercury__set__STATE_VARIABLE_B_17, mercury__set__STATE_VARIABLE_C_0_18, mercury__set__STATE_VARIABLE_C_19);
    }
#line 176 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 176 "set_ordlist.opt"
  }
#line 353 "set.m"
}

#line 351 "set.m"
void MR_CALL 
mercury__set__foldl3_8_p_2(
#line 351 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_23,
#line 351 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_24,
#line 351 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_25,
#line 351 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_26,
#line 351 "set.m"
  MR_Word mercury__set__F_9,
#line 351 "set.m"
  MR_Word mercury__set__S_10,
#line 351 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_14,
#line 351 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_15,
#line 351 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_16,
#line 351 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_17,
#line 351 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_18,
#line 351 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_19)
#line 351 "set.m"
{
#line 176 "set_ordlist.opt"
  {
#line 176 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 176 "set_ordlist.opt"
    MR_Word mercury__set__V_20_43 = (MR_Word) mercury__set__S_10;

#line 178 "set_ordlist.opt"
    {
#line 178 "set_ordlist.opt"
      mercury__list__foldl3_8_p_2(mercury__set__TypeInfo_for_T_23, mercury__set__TypeInfo_for_A_24, mercury__set__TypeInfo_for_B_25, mercury__set__TypeInfo_for_C_26, mercury__set__F_9, mercury__set__V_20_43, mercury__set__STATE_VARIABLE_A_0_14, mercury__set__STATE_VARIABLE_A_15, mercury__set__STATE_VARIABLE_B_0_16, mercury__set__STATE_VARIABLE_B_17, mercury__set__STATE_VARIABLE_C_0_18, mercury__set__STATE_VARIABLE_C_19);
#line 178 "set_ordlist.opt"
      return;
    }
#line 176 "set_ordlist.opt"
  }
#line 351 "set.m"
}

#line 349 "set.m"
void MR_CALL 
mercury__set__foldl3_8_p_1(
#line 349 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_23,
#line 349 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_24,
#line 349 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_25,
#line 349 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_26,
#line 349 "set.m"
  MR_Word mercury__set__F_9,
#line 349 "set.m"
  MR_Word mercury__set__S_10,
#line 349 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_14,
#line 349 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_15,
#line 349 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_16,
#line 349 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_17,
#line 349 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_18,
#line 349 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_19)
#line 349 "set.m"
{
#line 176 "set_ordlist.opt"
  {
#line 176 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 176 "set_ordlist.opt"
    MR_Word mercury__set__V_20_43 = (MR_Word) mercury__set__S_10;

#line 178 "set_ordlist.opt"
    {
#line 178 "set_ordlist.opt"
      mercury__list__foldl3_8_p_1(mercury__set__TypeInfo_for_T_23, mercury__set__TypeInfo_for_A_24, mercury__set__TypeInfo_for_B_25, mercury__set__TypeInfo_for_C_26, mercury__set__F_9, mercury__set__V_20_43, mercury__set__STATE_VARIABLE_A_0_14, mercury__set__STATE_VARIABLE_A_15, mercury__set__STATE_VARIABLE_B_0_16, mercury__set__STATE_VARIABLE_B_17, mercury__set__STATE_VARIABLE_C_0_18, mercury__set__STATE_VARIABLE_C_19);
#line 178 "set_ordlist.opt"
      return;
    }
#line 176 "set_ordlist.opt"
  }
#line 349 "set.m"
}

#line 347 "set.m"
void MR_CALL 
mercury__set__foldl3_8_p_0(
#line 347 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_23,
#line 347 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_24,
#line 347 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_25,
#line 347 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_26,
#line 347 "set.m"
  MR_Word mercury__set__F_9,
#line 347 "set.m"
  MR_Word mercury__set__S_10,
#line 347 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_14,
#line 347 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_15,
#line 347 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_16,
#line 347 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_17,
#line 347 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_18,
#line 347 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_19)
#line 347 "set.m"
{
#line 176 "set_ordlist.opt"
  {
#line 176 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 176 "set_ordlist.opt"
    MR_Word mercury__set__V_20_43 = (MR_Word) mercury__set__S_10;

#line 178 "set_ordlist.opt"
    {
#line 178 "set_ordlist.opt"
      mercury__list__foldl3_8_p_0(mercury__set__TypeInfo_for_T_23, mercury__set__TypeInfo_for_A_24, mercury__set__TypeInfo_for_B_25, mercury__set__TypeInfo_for_C_26, mercury__set__F_9, mercury__set__V_20_43, mercury__set__STATE_VARIABLE_A_0_14, mercury__set__STATE_VARIABLE_A_15, mercury__set__STATE_VARIABLE_B_0_16, mercury__set__STATE_VARIABLE_B_17, mercury__set__STATE_VARIABLE_C_0_18, mercury__set__STATE_VARIABLE_C_19);
#line 178 "set_ordlist.opt"
      return;
    }
#line 176 "set_ordlist.opt"
  }
#line 347 "set.m"
}

#line 343 "set.m"
MR_bool MR_CALL 
mercury__set__fold3_8_p_5(
#line 343 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_23,
#line 343 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_24,
#line 343 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_25,
#line 343 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_26,
#line 343 "set.m"
  MR_Word mercury__set__F_9,
#line 343 "set.m"
  MR_Word mercury__set__S_10,
#line 343 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_14,
#line 343 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_15,
#line 343 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_16,
#line 343 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_17,
#line 343 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_18,
#line 343 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_19)
#line 343 "set.m"
{
#line 176 "set_ordlist.opt"
  {
#line 176 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 176 "set_ordlist.opt"
    MR_Word mercury__set__V_20_57 = (MR_Word) mercury__set__S_10;

#line 178 "set_ordlist.opt"
    {
#line 178 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl3_8_p_5(mercury__set__TypeInfo_for_T_23, mercury__set__TypeInfo_for_A_24, mercury__set__TypeInfo_for_B_25, mercury__set__TypeInfo_for_C_26, mercury__set__F_9, mercury__set__V_20_57, mercury__set__STATE_VARIABLE_A_0_14, mercury__set__STATE_VARIABLE_A_15, mercury__set__STATE_VARIABLE_B_0_16, mercury__set__STATE_VARIABLE_B_17, mercury__set__STATE_VARIABLE_C_0_18, mercury__set__STATE_VARIABLE_C_19);
    }
#line 176 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 176 "set_ordlist.opt"
  }
#line 343 "set.m"
}

#line 341 "set.m"
MR_bool MR_CALL 
mercury__set__fold3_8_p_4(
#line 341 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_23,
#line 341 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_24,
#line 341 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_25,
#line 341 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_26,
#line 341 "set.m"
  MR_Word mercury__set__F_9,
#line 341 "set.m"
  MR_Word mercury__set__S_10,
#line 341 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_14,
#line 341 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_15,
#line 341 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_16,
#line 341 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_17,
#line 341 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_18,
#line 341 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_19)
#line 341 "set.m"
{
#line 176 "set_ordlist.opt"
  {
#line 176 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 176 "set_ordlist.opt"
    MR_Word mercury__set__V_20_57 = (MR_Word) mercury__set__S_10;

#line 178 "set_ordlist.opt"
    {
#line 178 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl3_8_p_4(mercury__set__TypeInfo_for_T_23, mercury__set__TypeInfo_for_A_24, mercury__set__TypeInfo_for_B_25, mercury__set__TypeInfo_for_C_26, mercury__set__F_9, mercury__set__V_20_57, mercury__set__STATE_VARIABLE_A_0_14, mercury__set__STATE_VARIABLE_A_15, mercury__set__STATE_VARIABLE_B_0_16, mercury__set__STATE_VARIABLE_B_17, mercury__set__STATE_VARIABLE_C_0_18, mercury__set__STATE_VARIABLE_C_19);
    }
#line 176 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 176 "set_ordlist.opt"
  }
#line 341 "set.m"
}

#line 339 "set.m"
MR_bool MR_CALL 
mercury__set__fold3_8_p_3(
#line 339 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_23,
#line 339 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_24,
#line 339 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_25,
#line 339 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_26,
#line 339 "set.m"
  MR_Word mercury__set__F_9,
#line 339 "set.m"
  MR_Word mercury__set__S_10,
#line 339 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_14,
#line 339 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_15,
#line 339 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_16,
#line 339 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_17,
#line 339 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_18,
#line 339 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_19)
#line 339 "set.m"
{
#line 176 "set_ordlist.opt"
  {
#line 176 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 176 "set_ordlist.opt"
    MR_Word mercury__set__V_20_57 = (MR_Word) mercury__set__S_10;

#line 178 "set_ordlist.opt"
    {
#line 178 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl3_8_p_3(mercury__set__TypeInfo_for_T_23, mercury__set__TypeInfo_for_A_24, mercury__set__TypeInfo_for_B_25, mercury__set__TypeInfo_for_C_26, mercury__set__F_9, mercury__set__V_20_57, mercury__set__STATE_VARIABLE_A_0_14, mercury__set__STATE_VARIABLE_A_15, mercury__set__STATE_VARIABLE_B_0_16, mercury__set__STATE_VARIABLE_B_17, mercury__set__STATE_VARIABLE_C_0_18, mercury__set__STATE_VARIABLE_C_19);
    }
#line 176 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 176 "set_ordlist.opt"
  }
#line 339 "set.m"
}

#line 337 "set.m"
void MR_CALL 
mercury__set__fold3_8_p_2(
#line 337 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_23,
#line 337 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_24,
#line 337 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_25,
#line 337 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_26,
#line 337 "set.m"
  MR_Word mercury__set__F_9,
#line 337 "set.m"
  MR_Word mercury__set__S_10,
#line 337 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_14,
#line 337 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_15,
#line 337 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_16,
#line 337 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_17,
#line 337 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_18,
#line 337 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_19)
#line 337 "set.m"
{
#line 176 "set_ordlist.opt"
  {
#line 176 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 176 "set_ordlist.opt"
    MR_Word mercury__set__V_20_57 = (MR_Word) mercury__set__S_10;

#line 178 "set_ordlist.opt"
    {
#line 178 "set_ordlist.opt"
      mercury__list__foldl3_8_p_2(mercury__set__TypeInfo_for_T_23, mercury__set__TypeInfo_for_A_24, mercury__set__TypeInfo_for_B_25, mercury__set__TypeInfo_for_C_26, mercury__set__F_9, mercury__set__V_20_57, mercury__set__STATE_VARIABLE_A_0_14, mercury__set__STATE_VARIABLE_A_15, mercury__set__STATE_VARIABLE_B_0_16, mercury__set__STATE_VARIABLE_B_17, mercury__set__STATE_VARIABLE_C_0_18, mercury__set__STATE_VARIABLE_C_19);
#line 178 "set_ordlist.opt"
      return;
    }
#line 176 "set_ordlist.opt"
  }
#line 337 "set.m"
}

#line 335 "set.m"
void MR_CALL 
mercury__set__fold3_8_p_1(
#line 335 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_23,
#line 335 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_24,
#line 335 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_25,
#line 335 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_26,
#line 335 "set.m"
  MR_Word mercury__set__F_9,
#line 335 "set.m"
  MR_Word mercury__set__S_10,
#line 335 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_14,
#line 335 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_15,
#line 335 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_16,
#line 335 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_17,
#line 335 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_18,
#line 335 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_19)
#line 335 "set.m"
{
#line 176 "set_ordlist.opt"
  {
#line 176 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 176 "set_ordlist.opt"
    MR_Word mercury__set__V_20_57 = (MR_Word) mercury__set__S_10;

#line 178 "set_ordlist.opt"
    {
#line 178 "set_ordlist.opt"
      mercury__list__foldl3_8_p_1(mercury__set__TypeInfo_for_T_23, mercury__set__TypeInfo_for_A_24, mercury__set__TypeInfo_for_B_25, mercury__set__TypeInfo_for_C_26, mercury__set__F_9, mercury__set__V_20_57, mercury__set__STATE_VARIABLE_A_0_14, mercury__set__STATE_VARIABLE_A_15, mercury__set__STATE_VARIABLE_B_0_16, mercury__set__STATE_VARIABLE_B_17, mercury__set__STATE_VARIABLE_C_0_18, mercury__set__STATE_VARIABLE_C_19);
#line 178 "set_ordlist.opt"
      return;
    }
#line 176 "set_ordlist.opt"
  }
#line 335 "set.m"
}

#line 333 "set.m"
void MR_CALL 
mercury__set__fold3_8_p_0(
#line 333 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_23,
#line 333 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_24,
#line 333 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_25,
#line 333 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_26,
#line 333 "set.m"
  MR_Word mercury__set__F_9,
#line 333 "set.m"
  MR_Word mercury__set__S_10,
#line 333 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_14,
#line 333 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_15,
#line 333 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_16,
#line 333 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_17,
#line 333 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_18,
#line 333 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_19)
#line 333 "set.m"
{
#line 176 "set_ordlist.opt"
  {
#line 176 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 176 "set_ordlist.opt"
    MR_Word mercury__set__V_20_57 = (MR_Word) mercury__set__S_10;

#line 178 "set_ordlist.opt"
    {
#line 178 "set_ordlist.opt"
      mercury__list__foldl3_8_p_0(mercury__set__TypeInfo_for_T_23, mercury__set__TypeInfo_for_A_24, mercury__set__TypeInfo_for_B_25, mercury__set__TypeInfo_for_C_26, mercury__set__F_9, mercury__set__V_20_57, mercury__set__STATE_VARIABLE_A_0_14, mercury__set__STATE_VARIABLE_A_15, mercury__set__STATE_VARIABLE_B_0_16, mercury__set__STATE_VARIABLE_B_17, mercury__set__STATE_VARIABLE_C_0_18, mercury__set__STATE_VARIABLE_C_19);
#line 178 "set_ordlist.opt"
      return;
    }
#line 176 "set_ordlist.opt"
  }
#line 333 "set.m"
}

#line 329 "set.m"
MR_bool MR_CALL 
mercury__set__foldl2_6_p_5(
#line 329 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_17,
#line 329 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_18,
#line 329 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_19,
#line 329 "set.m"
  MR_Word mercury__set__F_7,
#line 329 "set.m"
  MR_Word mercury__set__S_8,
#line 329 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_11,
#line 329 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_12,
#line 329 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_13,
#line 329 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_14)
#line 329 "set.m"
{
#line 171 "set_ordlist.opt"
  {
#line 171 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 171 "set_ordlist.opt"
    MR_Word mercury__set__V_15_32 = (MR_Word) mercury__set__S_8;

#line 173 "set_ordlist.opt"
    {
#line 173 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl2_6_p_6(mercury__set__TypeInfo_for_T_17, mercury__set__TypeInfo_for_A_18, mercury__set__TypeInfo_for_B_19, mercury__set__F_7, mercury__set__V_15_32, mercury__set__STATE_VARIABLE_A_0_11, mercury__set__STATE_VARIABLE_A_12, mercury__set__STATE_VARIABLE_B_0_13, mercury__set__STATE_VARIABLE_B_14);
    }
#line 171 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 171 "set_ordlist.opt"
  }
#line 329 "set.m"
}

#line 327 "set.m"
MR_bool MR_CALL 
mercury__set__foldl2_6_p_4(
#line 327 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_17,
#line 327 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_18,
#line 327 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_19,
#line 327 "set.m"
  MR_Word mercury__set__F_7,
#line 327 "set.m"
  MR_Word mercury__set__S_8,
#line 327 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_11,
#line 327 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_12,
#line 327 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_13,
#line 327 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_14)
#line 327 "set.m"
{
#line 171 "set_ordlist.opt"
  {
#line 171 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 171 "set_ordlist.opt"
    MR_Word mercury__set__V_15_32 = (MR_Word) mercury__set__S_8;

#line 173 "set_ordlist.opt"
    {
#line 173 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl2_6_p_5(mercury__set__TypeInfo_for_T_17, mercury__set__TypeInfo_for_A_18, mercury__set__TypeInfo_for_B_19, mercury__set__F_7, mercury__set__V_15_32, mercury__set__STATE_VARIABLE_A_0_11, mercury__set__STATE_VARIABLE_A_12, mercury__set__STATE_VARIABLE_B_0_13, mercury__set__STATE_VARIABLE_B_14);
    }
#line 171 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 171 "set_ordlist.opt"
  }
#line 327 "set.m"
}

#line 325 "set.m"
MR_bool MR_CALL 
mercury__set__foldl2_6_p_3(
#line 325 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_17,
#line 325 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_18,
#line 325 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_19,
#line 325 "set.m"
  MR_Word mercury__set__F_7,
#line 325 "set.m"
  MR_Word mercury__set__S_8,
#line 325 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_11,
#line 325 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_12,
#line 325 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_13,
#line 325 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_14)
#line 325 "set.m"
{
#line 171 "set_ordlist.opt"
  {
#line 171 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 171 "set_ordlist.opt"
    MR_Word mercury__set__V_15_32 = (MR_Word) mercury__set__S_8;

#line 173 "set_ordlist.opt"
    {
#line 173 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl2_6_p_4(mercury__set__TypeInfo_for_T_17, mercury__set__TypeInfo_for_A_18, mercury__set__TypeInfo_for_B_19, mercury__set__F_7, mercury__set__V_15_32, mercury__set__STATE_VARIABLE_A_0_11, mercury__set__STATE_VARIABLE_A_12, mercury__set__STATE_VARIABLE_B_0_13, mercury__set__STATE_VARIABLE_B_14);
    }
#line 171 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 171 "set_ordlist.opt"
  }
#line 325 "set.m"
}

#line 323 "set.m"
void MR_CALL 
mercury__set__foldl2_6_p_2(
#line 323 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_17,
#line 323 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_18,
#line 323 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_19,
#line 323 "set.m"
  MR_Word mercury__set__F_7,
#line 323 "set.m"
  MR_Word mercury__set__S_8,
#line 323 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_11,
#line 323 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_12,
#line 323 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_13,
#line 323 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_14)
#line 323 "set.m"
{
#line 171 "set_ordlist.opt"
  {
#line 171 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 171 "set_ordlist.opt"
    MR_Word mercury__set__V_15_32 = (MR_Word) mercury__set__S_8;

#line 173 "set_ordlist.opt"
    {
#line 173 "set_ordlist.opt"
      mercury__list__foldl2_6_p_2(mercury__set__TypeInfo_for_T_17, mercury__set__TypeInfo_for_A_18, mercury__set__TypeInfo_for_B_19, mercury__set__F_7, mercury__set__V_15_32, mercury__set__STATE_VARIABLE_A_0_11, mercury__set__STATE_VARIABLE_A_12, mercury__set__STATE_VARIABLE_B_0_13, mercury__set__STATE_VARIABLE_B_14);
#line 173 "set_ordlist.opt"
      return;
    }
#line 171 "set_ordlist.opt"
  }
#line 323 "set.m"
}

#line 321 "set.m"
void MR_CALL 
mercury__set__foldl2_6_p_1(
#line 321 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_17,
#line 321 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_18,
#line 321 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_19,
#line 321 "set.m"
  MR_Word mercury__set__F_7,
#line 321 "set.m"
  MR_Word mercury__set__S_8,
#line 321 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_11,
#line 321 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_12,
#line 321 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_13,
#line 321 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_14)
#line 321 "set.m"
{
#line 171 "set_ordlist.opt"
  {
#line 171 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 171 "set_ordlist.opt"
    MR_Word mercury__set__V_15_32 = (MR_Word) mercury__set__S_8;

#line 173 "set_ordlist.opt"
    {
#line 173 "set_ordlist.opt"
      mercury__list__foldl2_6_p_1(mercury__set__TypeInfo_for_T_17, mercury__set__TypeInfo_for_A_18, mercury__set__TypeInfo_for_B_19, mercury__set__F_7, mercury__set__V_15_32, mercury__set__STATE_VARIABLE_A_0_11, mercury__set__STATE_VARIABLE_A_12, mercury__set__STATE_VARIABLE_B_0_13, mercury__set__STATE_VARIABLE_B_14);
#line 173 "set_ordlist.opt"
      return;
    }
#line 171 "set_ordlist.opt"
  }
#line 321 "set.m"
}

#line 319 "set.m"
void MR_CALL 
mercury__set__foldl2_6_p_0(
#line 319 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_17,
#line 319 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_18,
#line 319 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_19,
#line 319 "set.m"
  MR_Word mercury__set__F_7,
#line 319 "set.m"
  MR_Word mercury__set__S_8,
#line 319 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_11,
#line 319 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_12,
#line 319 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_13,
#line 319 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_14)
#line 319 "set.m"
{
#line 171 "set_ordlist.opt"
  {
#line 171 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 171 "set_ordlist.opt"
    MR_Word mercury__set__V_15_32 = (MR_Word) mercury__set__S_8;

#line 173 "set_ordlist.opt"
    {
#line 173 "set_ordlist.opt"
      mercury__list__foldl2_6_p_0(mercury__set__TypeInfo_for_T_17, mercury__set__TypeInfo_for_A_18, mercury__set__TypeInfo_for_B_19, mercury__set__F_7, mercury__set__V_15_32, mercury__set__STATE_VARIABLE_A_0_11, mercury__set__STATE_VARIABLE_A_12, mercury__set__STATE_VARIABLE_B_0_13, mercury__set__STATE_VARIABLE_B_14);
#line 173 "set_ordlist.opt"
      return;
    }
#line 171 "set_ordlist.opt"
  }
#line 319 "set.m"
}

#line 315 "set.m"
MR_bool MR_CALL 
mercury__set__fold2_6_p_5(
#line 315 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_17,
#line 315 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_18,
#line 315 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_19,
#line 315 "set.m"
  MR_Word mercury__set__F_7,
#line 315 "set.m"
  MR_Word mercury__set__S_8,
#line 315 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_11,
#line 315 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_12,
#line 315 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_13,
#line 315 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_14)
#line 315 "set.m"
{
#line 171 "set_ordlist.opt"
  {
#line 171 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 171 "set_ordlist.opt"
    MR_Word mercury__set__V_15_42 = (MR_Word) mercury__set__S_8;

#line 173 "set_ordlist.opt"
    {
#line 173 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl2_6_p_6(mercury__set__TypeInfo_for_T_17, mercury__set__TypeInfo_for_A_18, mercury__set__TypeInfo_for_B_19, mercury__set__F_7, mercury__set__V_15_42, mercury__set__STATE_VARIABLE_A_0_11, mercury__set__STATE_VARIABLE_A_12, mercury__set__STATE_VARIABLE_B_0_13, mercury__set__STATE_VARIABLE_B_14);
    }
#line 171 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 171 "set_ordlist.opt"
  }
#line 315 "set.m"
}

#line 313 "set.m"
MR_bool MR_CALL 
mercury__set__fold2_6_p_4(
#line 313 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_17,
#line 313 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_18,
#line 313 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_19,
#line 313 "set.m"
  MR_Word mercury__set__F_7,
#line 313 "set.m"
  MR_Word mercury__set__S_8,
#line 313 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_11,
#line 313 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_12,
#line 313 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_13,
#line 313 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_14)
#line 313 "set.m"
{
#line 171 "set_ordlist.opt"
  {
#line 171 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 171 "set_ordlist.opt"
    MR_Word mercury__set__V_15_42 = (MR_Word) mercury__set__S_8;

#line 173 "set_ordlist.opt"
    {
#line 173 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl2_6_p_5(mercury__set__TypeInfo_for_T_17, mercury__set__TypeInfo_for_A_18, mercury__set__TypeInfo_for_B_19, mercury__set__F_7, mercury__set__V_15_42, mercury__set__STATE_VARIABLE_A_0_11, mercury__set__STATE_VARIABLE_A_12, mercury__set__STATE_VARIABLE_B_0_13, mercury__set__STATE_VARIABLE_B_14);
    }
#line 171 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 171 "set_ordlist.opt"
  }
#line 313 "set.m"
}

#line 311 "set.m"
MR_bool MR_CALL 
mercury__set__fold2_6_p_3(
#line 311 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_17,
#line 311 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_18,
#line 311 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_19,
#line 311 "set.m"
  MR_Word mercury__set__F_7,
#line 311 "set.m"
  MR_Word mercury__set__S_8,
#line 311 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_11,
#line 311 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_12,
#line 311 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_13,
#line 311 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_14)
#line 311 "set.m"
{
#line 171 "set_ordlist.opt"
  {
#line 171 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 171 "set_ordlist.opt"
    MR_Word mercury__set__V_15_42 = (MR_Word) mercury__set__S_8;

#line 173 "set_ordlist.opt"
    {
#line 173 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl2_6_p_4(mercury__set__TypeInfo_for_T_17, mercury__set__TypeInfo_for_A_18, mercury__set__TypeInfo_for_B_19, mercury__set__F_7, mercury__set__V_15_42, mercury__set__STATE_VARIABLE_A_0_11, mercury__set__STATE_VARIABLE_A_12, mercury__set__STATE_VARIABLE_B_0_13, mercury__set__STATE_VARIABLE_B_14);
    }
#line 171 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 171 "set_ordlist.opt"
  }
#line 311 "set.m"
}

#line 309 "set.m"
void MR_CALL 
mercury__set__fold2_6_p_2(
#line 309 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_17,
#line 309 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_18,
#line 309 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_19,
#line 309 "set.m"
  MR_Word mercury__set__F_7,
#line 309 "set.m"
  MR_Word mercury__set__S_8,
#line 309 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_11,
#line 309 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_12,
#line 309 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_13,
#line 309 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_14)
#line 309 "set.m"
{
#line 171 "set_ordlist.opt"
  {
#line 171 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 171 "set_ordlist.opt"
    MR_Word mercury__set__V_15_42 = (MR_Word) mercury__set__S_8;

#line 173 "set_ordlist.opt"
    {
#line 173 "set_ordlist.opt"
      mercury__list__foldl2_6_p_2(mercury__set__TypeInfo_for_T_17, mercury__set__TypeInfo_for_A_18, mercury__set__TypeInfo_for_B_19, mercury__set__F_7, mercury__set__V_15_42, mercury__set__STATE_VARIABLE_A_0_11, mercury__set__STATE_VARIABLE_A_12, mercury__set__STATE_VARIABLE_B_0_13, mercury__set__STATE_VARIABLE_B_14);
#line 173 "set_ordlist.opt"
      return;
    }
#line 171 "set_ordlist.opt"
  }
#line 309 "set.m"
}

#line 307 "set.m"
void MR_CALL 
mercury__set__fold2_6_p_1(
#line 307 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_17,
#line 307 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_18,
#line 307 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_19,
#line 307 "set.m"
  MR_Word mercury__set__F_7,
#line 307 "set.m"
  MR_Word mercury__set__S_8,
#line 307 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_11,
#line 307 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_12,
#line 307 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_13,
#line 307 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_14)
#line 307 "set.m"
{
#line 171 "set_ordlist.opt"
  {
#line 171 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 171 "set_ordlist.opt"
    MR_Word mercury__set__V_15_42 = (MR_Word) mercury__set__S_8;

#line 173 "set_ordlist.opt"
    {
#line 173 "set_ordlist.opt"
      mercury__list__foldl2_6_p_1(mercury__set__TypeInfo_for_T_17, mercury__set__TypeInfo_for_A_18, mercury__set__TypeInfo_for_B_19, mercury__set__F_7, mercury__set__V_15_42, mercury__set__STATE_VARIABLE_A_0_11, mercury__set__STATE_VARIABLE_A_12, mercury__set__STATE_VARIABLE_B_0_13, mercury__set__STATE_VARIABLE_B_14);
#line 173 "set_ordlist.opt"
      return;
    }
#line 171 "set_ordlist.opt"
  }
#line 307 "set.m"
}

#line 305 "set.m"
void MR_CALL 
mercury__set__fold2_6_p_0(
#line 305 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_17,
#line 305 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_18,
#line 305 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_19,
#line 305 "set.m"
  MR_Word mercury__set__F_7,
#line 305 "set.m"
  MR_Word mercury__set__S_8,
#line 305 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_11,
#line 305 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_12,
#line 305 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_13,
#line 305 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_14)
#line 305 "set.m"
{
#line 171 "set_ordlist.opt"
  {
#line 171 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 171 "set_ordlist.opt"
    MR_Word mercury__set__V_15_42 = (MR_Word) mercury__set__S_8;

#line 173 "set_ordlist.opt"
    {
#line 173 "set_ordlist.opt"
      mercury__list__foldl2_6_p_0(mercury__set__TypeInfo_for_T_17, mercury__set__TypeInfo_for_A_18, mercury__set__TypeInfo_for_B_19, mercury__set__F_7, mercury__set__V_15_42, mercury__set__STATE_VARIABLE_A_0_11, mercury__set__STATE_VARIABLE_A_12, mercury__set__STATE_VARIABLE_B_0_13, mercury__set__STATE_VARIABLE_B_14);
#line 173 "set_ordlist.opt"
      return;
    }
#line 171 "set_ordlist.opt"
  }
#line 305 "set.m"
}

#line 302 "set.m"
MR_bool MR_CALL 
mercury__set__foldl_4_p_5(
#line 302 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_11,
#line 302 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_12,
#line 302 "set.m"
  MR_Word mercury__set__F_5,
#line 302 "set.m"
  MR_Word mercury__set__S_6,
#line 302 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_8,
#line 302 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_9)
#line 302 "set.m"
{
#line 166 "set_ordlist.opt"
  {
#line 166 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 166 "set_ordlist.opt"
    MR_Word mercury__set__V_10_21 = (MR_Word) mercury__set__S_6;

#line 168 "set_ordlist.opt"
    {
#line 168 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl_4_p_5(mercury__set__TypeInfo_for_T_11, mercury__set__TypeInfo_for_A_12, mercury__set__F_5, mercury__set__V_10_21, mercury__set__STATE_VARIABLE_A_0_8, mercury__set__STATE_VARIABLE_A_9);
    }
#line 166 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 166 "set_ordlist.opt"
  }
#line 302 "set.m"
}

#line 301 "set.m"
MR_bool MR_CALL 
mercury__set__foldl_4_p_4(
#line 301 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_11,
#line 301 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_12,
#line 301 "set.m"
  MR_Word mercury__set__F_5,
#line 301 "set.m"
  MR_Word mercury__set__S_6,
#line 301 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_8,
#line 301 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_9)
#line 301 "set.m"
{
#line 166 "set_ordlist.opt"
  {
#line 166 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 166 "set_ordlist.opt"
    MR_Word mercury__set__V_10_21 = (MR_Word) mercury__set__S_6;

#line 168 "set_ordlist.opt"
    {
#line 168 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl_4_p_4(mercury__set__TypeInfo_for_T_11, mercury__set__TypeInfo_for_A_12, mercury__set__F_5, mercury__set__V_10_21, mercury__set__STATE_VARIABLE_A_0_8, mercury__set__STATE_VARIABLE_A_9);
    }
#line 166 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 166 "set_ordlist.opt"
  }
#line 301 "set.m"
}

#line 300 "set.m"
MR_bool MR_CALL 
mercury__set__foldl_4_p_3(
#line 300 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_11,
#line 300 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_12,
#line 300 "set.m"
  MR_Word mercury__set__F_5,
#line 300 "set.m"
  MR_Word mercury__set__S_6,
#line 300 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_8,
#line 300 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_9)
#line 300 "set.m"
{
#line 166 "set_ordlist.opt"
  {
#line 166 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 166 "set_ordlist.opt"
    MR_Word mercury__set__V_10_21 = (MR_Word) mercury__set__S_6;

#line 168 "set_ordlist.opt"
    {
#line 168 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl_4_p_3(mercury__set__TypeInfo_for_T_11, mercury__set__TypeInfo_for_A_12, mercury__set__F_5, mercury__set__V_10_21, mercury__set__STATE_VARIABLE_A_0_8, mercury__set__STATE_VARIABLE_A_9);
    }
#line 166 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 166 "set_ordlist.opt"
  }
#line 300 "set.m"
}

#line 299 "set.m"
void MR_CALL 
mercury__set__foldl_4_p_2(
#line 299 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_11,
#line 299 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_12,
#line 299 "set.m"
  MR_Word mercury__set__F_5,
#line 299 "set.m"
  MR_Word mercury__set__S_6,
#line 299 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_8,
#line 299 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_9)
#line 299 "set.m"
{
#line 166 "set_ordlist.opt"
  {
#line 166 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 166 "set_ordlist.opt"
    MR_Word mercury__set__V_10_21 = (MR_Word) mercury__set__S_6;

#line 168 "set_ordlist.opt"
    {
#line 168 "set_ordlist.opt"
      mercury__list__foldl_4_p_2(mercury__set__TypeInfo_for_T_11, mercury__set__TypeInfo_for_A_12, mercury__set__F_5, mercury__set__V_10_21, mercury__set__STATE_VARIABLE_A_0_8, mercury__set__STATE_VARIABLE_A_9);
#line 168 "set_ordlist.opt"
      return;
    }
#line 166 "set_ordlist.opt"
  }
#line 299 "set.m"
}

#line 298 "set.m"
void MR_CALL 
mercury__set__foldl_4_p_1(
#line 298 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_11,
#line 298 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_12,
#line 298 "set.m"
  MR_Word mercury__set__F_5,
#line 298 "set.m"
  MR_Word mercury__set__S_6,
#line 298 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_8,
#line 298 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_9)
#line 298 "set.m"
{
#line 166 "set_ordlist.opt"
  {
#line 166 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 166 "set_ordlist.opt"
    MR_Word mercury__set__V_10_21 = (MR_Word) mercury__set__S_6;

#line 168 "set_ordlist.opt"
    {
#line 168 "set_ordlist.opt"
      mercury__list__foldl_4_p_1(mercury__set__TypeInfo_for_T_11, mercury__set__TypeInfo_for_A_12, mercury__set__F_5, mercury__set__V_10_21, mercury__set__STATE_VARIABLE_A_0_8, mercury__set__STATE_VARIABLE_A_9);
#line 168 "set_ordlist.opt"
      return;
    }
#line 166 "set_ordlist.opt"
  }
#line 298 "set.m"
}

#line 297 "set.m"
void MR_CALL 
mercury__set__foldl_4_p_0(
#line 297 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_11,
#line 297 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_12,
#line 297 "set.m"
  MR_Word mercury__set__F_5,
#line 297 "set.m"
  MR_Word mercury__set__S_6,
#line 297 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_8,
#line 297 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_9)
#line 297 "set.m"
{
#line 166 "set_ordlist.opt"
  {
#line 166 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 166 "set_ordlist.opt"
    MR_Word mercury__set__V_10_21 = (MR_Word) mercury__set__S_6;

#line 168 "set_ordlist.opt"
    {
#line 168 "set_ordlist.opt"
      mercury__list__foldl_4_p_0(mercury__set__TypeInfo_for_T_11, mercury__set__TypeInfo_for_A_12, mercury__set__F_5, mercury__set__V_10_21, mercury__set__STATE_VARIABLE_A_0_8, mercury__set__STATE_VARIABLE_A_9);
#line 168 "set_ordlist.opt"
      return;
    }
#line 166 "set_ordlist.opt"
  }
#line 297 "set.m"
}

#line 294 "set.m"
MR_bool MR_CALL 
mercury__set__fold_4_p_5(
#line 294 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_11,
#line 294 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_12,
#line 294 "set.m"
  MR_Word mercury__set__F_5,
#line 294 "set.m"
  MR_Word mercury__set__S_6,
#line 294 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_8,
#line 294 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_9)
#line 294 "set.m"
{
#line 166 "set_ordlist.opt"
  {
#line 166 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 166 "set_ordlist.opt"
    MR_Word mercury__set__V_10_27 = (MR_Word) mercury__set__S_6;

#line 168 "set_ordlist.opt"
    {
#line 168 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl_4_p_5(mercury__set__TypeInfo_for_T_11, mercury__set__TypeInfo_for_A_12, mercury__set__F_5, mercury__set__V_10_27, mercury__set__STATE_VARIABLE_A_0_8, mercury__set__STATE_VARIABLE_A_9);
    }
#line 166 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 166 "set_ordlist.opt"
  }
#line 294 "set.m"
}

#line 293 "set.m"
MR_bool MR_CALL 
mercury__set__fold_4_p_4(
#line 293 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_11,
#line 293 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_12,
#line 293 "set.m"
  MR_Word mercury__set__F_5,
#line 293 "set.m"
  MR_Word mercury__set__S_6,
#line 293 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_8,
#line 293 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_9)
#line 293 "set.m"
{
#line 166 "set_ordlist.opt"
  {
#line 166 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 166 "set_ordlist.opt"
    MR_Word mercury__set__V_10_27 = (MR_Word) mercury__set__S_6;

#line 168 "set_ordlist.opt"
    {
#line 168 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl_4_p_4(mercury__set__TypeInfo_for_T_11, mercury__set__TypeInfo_for_A_12, mercury__set__F_5, mercury__set__V_10_27, mercury__set__STATE_VARIABLE_A_0_8, mercury__set__STATE_VARIABLE_A_9);
    }
#line 166 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 166 "set_ordlist.opt"
  }
#line 293 "set.m"
}

#line 292 "set.m"
MR_bool MR_CALL 
mercury__set__fold_4_p_3(
#line 292 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_11,
#line 292 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_12,
#line 292 "set.m"
  MR_Word mercury__set__F_5,
#line 292 "set.m"
  MR_Word mercury__set__S_6,
#line 292 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_8,
#line 292 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_9)
#line 292 "set.m"
{
#line 166 "set_ordlist.opt"
  {
#line 166 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 166 "set_ordlist.opt"
    MR_Word mercury__set__V_10_27 = (MR_Word) mercury__set__S_6;

#line 168 "set_ordlist.opt"
    {
#line 168 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl_4_p_3(mercury__set__TypeInfo_for_T_11, mercury__set__TypeInfo_for_A_12, mercury__set__F_5, mercury__set__V_10_27, mercury__set__STATE_VARIABLE_A_0_8, mercury__set__STATE_VARIABLE_A_9);
    }
#line 166 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 166 "set_ordlist.opt"
  }
#line 292 "set.m"
}

#line 291 "set.m"
void MR_CALL 
mercury__set__fold_4_p_2(
#line 291 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_11,
#line 291 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_12,
#line 291 "set.m"
  MR_Word mercury__set__F_5,
#line 291 "set.m"
  MR_Word mercury__set__S_6,
#line 291 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_8,
#line 291 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_9)
#line 291 "set.m"
{
#line 166 "set_ordlist.opt"
  {
#line 166 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 166 "set_ordlist.opt"
    MR_Word mercury__set__V_10_27 = (MR_Word) mercury__set__S_6;

#line 168 "set_ordlist.opt"
    {
#line 168 "set_ordlist.opt"
      mercury__list__foldl_4_p_2(mercury__set__TypeInfo_for_T_11, mercury__set__TypeInfo_for_A_12, mercury__set__F_5, mercury__set__V_10_27, mercury__set__STATE_VARIABLE_A_0_8, mercury__set__STATE_VARIABLE_A_9);
#line 168 "set_ordlist.opt"
      return;
    }
#line 166 "set_ordlist.opt"
  }
#line 291 "set.m"
}

#line 290 "set.m"
void MR_CALL 
mercury__set__fold_4_p_1(
#line 290 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_11,
#line 290 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_12,
#line 290 "set.m"
  MR_Word mercury__set__F_5,
#line 290 "set.m"
  MR_Word mercury__set__S_6,
#line 290 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_8,
#line 290 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_9)
#line 290 "set.m"
{
#line 166 "set_ordlist.opt"
  {
#line 166 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 166 "set_ordlist.opt"
    MR_Word mercury__set__V_10_27 = (MR_Word) mercury__set__S_6;

#line 168 "set_ordlist.opt"
    {
#line 168 "set_ordlist.opt"
      mercury__list__foldl_4_p_1(mercury__set__TypeInfo_for_T_11, mercury__set__TypeInfo_for_A_12, mercury__set__F_5, mercury__set__V_10_27, mercury__set__STATE_VARIABLE_A_0_8, mercury__set__STATE_VARIABLE_A_9);
#line 168 "set_ordlist.opt"
      return;
    }
#line 166 "set_ordlist.opt"
  }
#line 290 "set.m"
}

#line 289 "set.m"
void MR_CALL 
mercury__set__fold_4_p_0(
#line 289 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_11,
#line 289 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_12,
#line 289 "set.m"
  MR_Word mercury__set__F_5,
#line 289 "set.m"
  MR_Word mercury__set__S_6,
#line 289 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_8,
#line 289 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_9)
#line 289 "set.m"
{
#line 166 "set_ordlist.opt"
  {
#line 166 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 166 "set_ordlist.opt"
    MR_Word mercury__set__V_10_27 = (MR_Word) mercury__set__S_6;

#line 168 "set_ordlist.opt"
    {
#line 168 "set_ordlist.opt"
      mercury__list__foldl_4_p_0(mercury__set__TypeInfo_for_T_11, mercury__set__TypeInfo_for_A_12, mercury__set__F_5, mercury__set__V_10_27, mercury__set__STATE_VARIABLE_A_0_8, mercury__set__STATE_VARIABLE_A_9);
#line 168 "set_ordlist.opt"
      return;
    }
#line 166 "set_ordlist.opt"
  }
#line 289 "set.m"
}

#line 286 "set.m"
MR_Box MR_CALL 
mercury__set__foldl_3_f_0(
#line 286 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_8,
#line 286 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_9,
#line 286 "set.m"
  MR_Word mercury__set__F_5,
#line 286 "set.m"
  MR_Word mercury__set__S_6,
#line 286 "set.m"
  MR_Box mercury__set__A_7)
#line 286 "set.m"
{
#line 163 "set_ordlist.opt"
  {
#line 163 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 163 "set_ordlist.opt"
    MR_Box mercury__set__HeadVar__4_4;
#line 163 "set_ordlist.opt"
    MR_Word mercury__set__V_9_18 = (MR_Word) mercury__set__S_6;

#line 409 "list.opt"
    {
#line 409 "list.opt"
      mercury__set__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(mercury__set__F_5, mercury__set__V_9_18, mercury__set__A_7, &mercury__set__HeadVar__4_4);
    }
#line 163 "set_ordlist.opt"
    return mercury__set__HeadVar__4_4;
#line 163 "set_ordlist.opt"
  }
#line 286 "set.m"
}

#line 285 "set.m"
MR_Box MR_CALL 
mercury__set__fold_3_f_0(
#line 285 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_8,
#line 285 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_9,
#line 285 "set.m"
  MR_Word mercury__set__F_5,
#line 285 "set.m"
  MR_Word mercury__set__S_6,
#line 285 "set.m"
  MR_Box mercury__set__A_7)
#line 285 "set.m"
{
#line 163 "set_ordlist.opt"
  {
#line 163 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 163 "set_ordlist.opt"
    MR_Box mercury__set__HeadVar__4_4;
#line 163 "set_ordlist.opt"
    MR_Word mercury__set__V_9_21 = (MR_Word) mercury__set__S_6;

#line 409 "list.opt"
    {
#line 409 "list.opt"
      mercury__set__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_52_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(mercury__set__F_5, mercury__set__V_9_21, mercury__set__A_7, &mercury__set__HeadVar__4_4);
    }
#line 163 "set_ordlist.opt"
    return mercury__set__HeadVar__4_4;
#line 163 "set_ordlist.opt"
  }
#line 285 "set.m"
}

#line 280 "set.m"
MR_Word MR_CALL 
mercury__set__filter_map_2_f_0(
#line 280 "set.m"
  MR_Word mercury__set__TypeInfo_for_T1_6,
#line 280 "set.m"
  MR_Word mercury__set__TypeInfo_for_T2_7,
#line 280 "set.m"
  MR_Word mercury__set__PF_4,
#line 280 "set.m"
  MR_Word mercury__set__Set_5)
#line 280 "set.m"
{
#line 151 "set_ordlist.opt"
  {
#line 151 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 151 "set_ordlist.opt"
    MR_Word mercury__set__HeadVar__3_3;
#line 151 "set_ordlist.opt"
    MR_Word mercury__set__V_7_11 = (MR_Word) mercury__set__Set_5;
#line 151 "set_ordlist.opt"
    MR_Word mercury__set__V_8_12;
#line 151 "set_ordlist.opt"
    MR_Word mercury__set__V_4_29;
#line 151 "set_ordlist.opt"
    MR_Integer mercury__set__V_5_32;

#line 729 "list.opt"
    {
#line 729 "list.opt"
      mercury__set__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_53_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(mercury__set__PF_4, mercury__set__V_7_11, &mercury__set__V_8_12);
    }
#line 91 "list.opt"
    {
#line 91 "list.opt"
      mercury__list__length_acc_3_p_0(mercury__set__TypeInfo_for_T2_7, mercury__set__V_8_12, (MR_Integer) 0, &mercury__set__V_5_32);
    }
#line 123 "list.opt"
    {
#line 123 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__set__TypeInfo_for_T2_7, mercury__set__V_5_32, mercury__set__V_8_12, &mercury__set__V_4_29);
    }
#line 31 "set_ordlist.opt"
    mercury__set__HeadVar__3_3 = (MR_Word) mercury__set__V_4_29;
#line 151 "set_ordlist.opt"
    return mercury__set__HeadVar__3_3;
#line 151 "set_ordlist.opt"
  }
#line 280 "set.m"
}

#line 278 "set.m"
void MR_CALL 
mercury__set__filter_map_3_p_0(
#line 278 "set.m"
  MR_Word mercury__set__TypeInfo_for_T1_7,
#line 278 "set.m"
  MR_Word mercury__set__TypeInfo_for_T2_8,
#line 278 "set.m"
  MR_Word mercury__set__P_4,
#line 278 "set.m"
  MR_Word mercury__set__Set_5,
#line 278 "set.m"
  MR_Word * mercury__set__TransformedTrueSet_6)
#line 278 "set.m"
{
#line 155 "set_ordlist.opt"
  {
#line 155 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 155 "set_ordlist.opt"
    MR_Word mercury__set__V_7_12 = (MR_Word) mercury__set__Set_5;
#line 155 "set_ordlist.opt"
    MR_Word mercury__set__V_8_13;
#line 155 "set_ordlist.opt"
    MR_Word mercury__set__V_4_16;
#line 155 "set_ordlist.opt"
    MR_Integer mercury__set__V_5_19;

#line 157 "set_ordlist.opt"
    {
#line 157 "set_ordlist.opt"
      mercury__list__filter_map_3_p_0(mercury__set__TypeInfo_for_T1_7, mercury__set__TypeInfo_for_T2_8, mercury__set__P_4, mercury__set__V_7_12, &mercury__set__V_8_13);
    }
#line 91 "list.opt"
    {
#line 91 "list.opt"
      mercury__list__length_acc_3_p_0(mercury__set__TypeInfo_for_T2_8, mercury__set__V_8_13, (MR_Integer) 0, &mercury__set__V_5_19);
    }
#line 123 "list.opt"
    {
#line 123 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__set__TypeInfo_for_T2_8, mercury__set__V_5_19, mercury__set__V_8_13, &mercury__set__V_4_16);
    }
#line 31 "set_ordlist.opt"
    *mercury__set__TransformedTrueSet_6 = (MR_Word) mercury__set__V_4_16;
#line 155 "set_ordlist.opt"
  }
#line 278 "set.m"
}

#line 272 "set.m"
void MR_CALL 
mercury__set__filter_4_p_0(
#line 272 "set.m"
  MR_Word mercury__set__TypeInfo_for_T1_9,
#line 272 "set.m"
  MR_Word mercury__set__P_5,
#line 272 "set.m"
  MR_Word mercury__set__Set_6,
#line 272 "set.m"
  MR_Word * mercury__set__TrueSet_7,
#line 272 "set.m"
  MR_Word * mercury__set__FalseSet_8)
#line 272 "set.m"
{
#line 142 "set_ordlist.opt"
  {
#line 142 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 142 "set_ordlist.opt"
    MR_Word mercury__set__V_9_14 = (MR_Word) mercury__set__Set_6;
#line 142 "set_ordlist.opt"
    MR_Word mercury__set__V_10_15;
#line 142 "set_ordlist.opt"
    MR_Word mercury__set__V_11_16;
#line 142 "set_ordlist.opt"
    MR_Word mercury__set__V_4_21;
#line 142 "set_ordlist.opt"
    MR_Word mercury__set__V_4_26;

#line 144 "set_ordlist.opt"
    {
#line 144 "set_ordlist.opt"
      mercury__list__filter_4_p_0(mercury__set__TypeInfo_for_T1_9, mercury__set__P_5, mercury__set__V_9_14, &mercury__set__V_10_15, &mercury__set__V_11_16);
    }
#line 68 "list.opt"
    if ((mercury__set__V_10_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 68 "list.opt"
      mercury__set__V_4_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 68 "list.opt"
    else
#line 69 "list.opt"
      {
#line 69 "list.opt"
        MR_Box mercury__set__V_3_22 = (MR_hl_field(MR_mktag(1), mercury__set__V_10_15, (MR_Integer) 0));
#line 69 "list.opt"
        MR_Word mercury__set__V_4_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set__V_10_15, (MR_Integer) 1)));

#line 70 "list.opt"
        {
#line 70 "list.opt"
          mercury__list__remove_adjacent_dups_2_3_p_0(mercury__set__TypeInfo_for_T1_9, mercury__set__V_3_22, mercury__set__V_4_23, &mercury__set__V_4_21);
        }
#line 69 "list.opt"
      }
#line 37 "set_ordlist.opt"
    *mercury__set__TrueSet_7 = (MR_Word) mercury__set__V_4_21;
#line 68 "list.opt"
    if ((mercury__set__V_11_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 68 "list.opt"
      mercury__set__V_4_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 68 "list.opt"
    else
#line 69 "list.opt"
      {
#line 69 "list.opt"
        MR_Box mercury__set__V_3_27 = (MR_hl_field(MR_mktag(1), mercury__set__V_11_16, (MR_Integer) 0));
#line 69 "list.opt"
        MR_Word mercury__set__V_4_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set__V_11_16, (MR_Integer) 1)));

#line 70 "list.opt"
        {
#line 70 "list.opt"
          mercury__list__remove_adjacent_dups_2_3_p_0(mercury__set__TypeInfo_for_T1_9, mercury__set__V_3_27, mercury__set__V_4_28, &mercury__set__V_4_26);
        }
#line 69 "list.opt"
      }
#line 37 "set_ordlist.opt"
    *mercury__set__FalseSet_8 = (MR_Word) mercury__set__V_4_26;
#line 142 "set_ordlist.opt"
  }
#line 272 "set.m"
}

#line 266 "set.m"
void MR_CALL 
mercury__set__filter_3_p_0(
#line 266 "set.m"
  MR_Word mercury__set__TypeInfo_for_T1_7,
#line 266 "set.m"
  MR_Word mercury__set__P_4,
#line 266 "set.m"
  MR_Word mercury__set__Set_5,
#line 266 "set.m"
  MR_Word * mercury__set__TrueSet_6)
#line 266 "set.m"
{
#line 136 "set_ordlist.opt"
  {
#line 136 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 136 "set_ordlist.opt"
    MR_Word mercury__set__V_7_14 = (MR_Word) mercury__set__Set_5;
#line 136 "set_ordlist.opt"
    MR_Word mercury__set__V_8_15;
#line 136 "set_ordlist.opt"
    MR_Word mercury__set__V_4_20;

#line 138 "set_ordlist.opt"
    {
#line 138 "set_ordlist.opt"
      mercury__list__filter_3_p_0(mercury__set__TypeInfo_for_T1_7, mercury__set__P_4, mercury__set__V_7_14, &mercury__set__V_8_15);
    }
#line 68 "list.opt"
    if ((mercury__set__V_8_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 68 "list.opt"
      mercury__set__V_4_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 68 "list.opt"
    else
#line 69 "list.opt"
      {
#line 69 "list.opt"
        MR_Box mercury__set__V_3_21 = (MR_hl_field(MR_mktag(1), mercury__set__V_8_15, (MR_Integer) 0));
#line 69 "list.opt"
        MR_Word mercury__set__V_4_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set__V_8_15, (MR_Integer) 1)));

#line 70 "list.opt"
        {
#line 70 "list.opt"
          mercury__list__remove_adjacent_dups_2_3_p_0(mercury__set__TypeInfo_for_T1_7, mercury__set__V_3_21, mercury__set__V_4_22, &mercury__set__V_4_20);
        }
#line 69 "list.opt"
      }
#line 37 "set_ordlist.opt"
    *mercury__set__TrueSet_6 = (MR_Word) mercury__set__V_4_20;
#line 136 "set_ordlist.opt"
  }
#line 266 "set.m"
}

#line 264 "set.m"
MR_Word MR_CALL 
mercury__set__filter_2_f_0(
#line 264 "set.m"
  MR_Word mercury__set__TypeInfo_for_T1_6,
#line 264 "set.m"
  MR_Word mercury__set__P_4,
#line 264 "set.m"
  MR_Word mercury__set__Set_5)
#line 264 "set.m"
{
#line 136 "set_ordlist.opt"
  {
#line 136 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 136 "set_ordlist.opt"
    MR_Word mercury__set__HeadVar__3_3;
#line 136 "set_ordlist.opt"
    MR_Word mercury__set__V_7_10 = (MR_Word) mercury__set__Set_5;
#line 136 "set_ordlist.opt"
    MR_Word mercury__set__V_8_11;
#line 136 "set_ordlist.opt"
    MR_Word mercury__set__V_4_16;

#line 138 "set_ordlist.opt"
    {
#line 138 "set_ordlist.opt"
      mercury__list__filter_3_p_0(mercury__set__TypeInfo_for_T1_6, mercury__set__P_4, mercury__set__V_7_10, &mercury__set__V_8_11);
    }
#line 68 "list.opt"
    if ((mercury__set__V_8_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 68 "list.opt"
      mercury__set__V_4_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 68 "list.opt"
    else
#line 69 "list.opt"
      {
#line 69 "list.opt"
        MR_Box mercury__set__V_3_17 = (MR_hl_field(MR_mktag(1), mercury__set__V_8_11, (MR_Integer) 0));
#line 69 "list.opt"
        MR_Word mercury__set__V_4_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set__V_8_11, (MR_Integer) 1)));

#line 70 "list.opt"
        {
#line 70 "list.opt"
          mercury__list__remove_adjacent_dups_2_3_p_0(mercury__set__TypeInfo_for_T1_6, mercury__set__V_3_17, mercury__set__V_4_18, &mercury__set__V_4_16);
        }
#line 69 "list.opt"
      }
#line 37 "set_ordlist.opt"
    mercury__set__HeadVar__3_3 = (MR_Word) mercury__set__V_4_16;
#line 136 "set_ordlist.opt"
    return mercury__set__HeadVar__3_3;
#line 136 "set_ordlist.opt"
  }
#line 264 "set.m"
}

#line 256 "set.m"
MR_bool MR_CALL 
mercury__set__map_fold_5_p_5(
#line 256 "set.m"
  MR_Word mercury__set__TypeInfo_for_T1_13,
#line 256 "set.m"
  MR_Word mercury__set__TypeInfo_for_T2_14,
#line 256 "set.m"
  MR_Word mercury__set__TypeInfo_for_T3_15,
#line 256 "set.m"
  MR_Word mercury__set__P_6,
#line 256 "set.m"
  MR_Word mercury__set__S0_7,
#line 256 "set.m"
  MR_Word * mercury__set__S_8,
#line 256 "set.m"
  MR_Box mercury__set__A0_9,
#line 256 "set.m"
  MR_Box * mercury__set__A_10)
#line 256 "set.m"
{
#line 700 "set.m"
  {
#line 700 "set.m"
    MR_bool mercury__set__succeeded;
#line 700 "set.m"
    MR_Word mercury__set__L0_11 = (MR_Word) mercury__set__S0_7;
#line 700 "set.m"
    MR_Word mercury__set__L_12;
#line 700 "set.m"
    MR_Word mercury__set__V_4_26;
#line 700 "set.m"
    MR_Integer mercury__set__V_5_29;
#line 700 "set.m"
    MR_Integer mercury__set__V_5_34;

#line 702 "set.m"
    {
#line 702 "set.m"
      mercury__set__succeeded = mercury__list__map_foldl_5_p_5(mercury__set__TypeInfo_for_T1_13, mercury__set__TypeInfo_for_T2_14, mercury__set__TypeInfo_for_T3_15, mercury__set__P_6, mercury__set__L0_11, &mercury__set__L_12, mercury__set__A0_9, mercury__set__A_10);
    }
#line 700 "set.m"
    if (mercury__set__succeeded)
#line 700 "set.m"
      {
#line 90 "list.opt"
        mercury__set__V_5_34 = (MR_Integer) 0;
#line 91 "list.opt"
        {
#line 91 "list.opt"
          mercury__list__length_acc_3_p_0(mercury__set__TypeInfo_for_T2_14, mercury__set__L_12, mercury__set__V_5_34, &mercury__set__V_5_29);
        }
#line 123 "list.opt"
        {
#line 123 "list.opt"
          mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__set__TypeInfo_for_T2_14, mercury__set__V_5_29, mercury__set__L_12, &mercury__set__V_4_26);
        }
#line 31 "set_ordlist.opt"
        *mercury__set__S_8 = (MR_Word) mercury__set__V_4_26;
#line 31 "set_ordlist.opt"
        mercury__set__succeeded = MR_TRUE;
#line 700 "set.m"
      }
#line 700 "set.m"
    return mercury__set__succeeded;
#line 700 "set.m"
  }
#line 256 "set.m"
}

#line 254 "set.m"
MR_bool MR_CALL 
mercury__set__map_fold_5_p_4(
#line 254 "set.m"
  MR_Word mercury__set__TypeInfo_for_T1_13,
#line 254 "set.m"
  MR_Word mercury__set__TypeInfo_for_T2_14,
#line 254 "set.m"
  MR_Word mercury__set__TypeInfo_for_T3_15,
#line 254 "set.m"
  MR_Word mercury__set__P_6,
#line 254 "set.m"
  MR_Word mercury__set__S0_7,
#line 254 "set.m"
  MR_Word * mercury__set__S_8,
#line 254 "set.m"
  MR_Box mercury__set__A0_9,
#line 254 "set.m"
  MR_Box * mercury__set__A_10)
#line 254 "set.m"
{
#line 700 "set.m"
  {
#line 700 "set.m"
    MR_bool mercury__set__succeeded;
#line 700 "set.m"
    MR_Word mercury__set__L0_11 = (MR_Word) mercury__set__S0_7;
#line 700 "set.m"
    MR_Word mercury__set__L_12;
#line 700 "set.m"
    MR_Word mercury__set__V_4_26;
#line 700 "set.m"
    MR_Integer mercury__set__V_5_29;
#line 700 "set.m"
    MR_Integer mercury__set__V_5_34;

#line 702 "set.m"
    {
#line 702 "set.m"
      mercury__set__succeeded = mercury__list__map_foldl_5_p_4(mercury__set__TypeInfo_for_T1_13, mercury__set__TypeInfo_for_T2_14, mercury__set__TypeInfo_for_T3_15, mercury__set__P_6, mercury__set__L0_11, &mercury__set__L_12, mercury__set__A0_9, mercury__set__A_10);
    }
#line 700 "set.m"
    if (mercury__set__succeeded)
#line 700 "set.m"
      {
#line 90 "list.opt"
        mercury__set__V_5_34 = (MR_Integer) 0;
#line 91 "list.opt"
        {
#line 91 "list.opt"
          mercury__list__length_acc_3_p_0(mercury__set__TypeInfo_for_T2_14, mercury__set__L_12, mercury__set__V_5_34, &mercury__set__V_5_29);
        }
#line 123 "list.opt"
        {
#line 123 "list.opt"
          mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__set__TypeInfo_for_T2_14, mercury__set__V_5_29, mercury__set__L_12, &mercury__set__V_4_26);
        }
#line 31 "set_ordlist.opt"
        *mercury__set__S_8 = (MR_Word) mercury__set__V_4_26;
#line 31 "set_ordlist.opt"
        mercury__set__succeeded = MR_TRUE;
#line 700 "set.m"
      }
#line 700 "set.m"
    return mercury__set__succeeded;
#line 700 "set.m"
  }
#line 254 "set.m"
}

#line 252 "set.m"
MR_bool MR_CALL 
mercury__set__map_fold_5_p_3(
#line 252 "set.m"
  MR_Word mercury__set__TypeInfo_for_T1_13,
#line 252 "set.m"
  MR_Word mercury__set__TypeInfo_for_T2_14,
#line 252 "set.m"
  MR_Word mercury__set__TypeInfo_for_T3_15,
#line 252 "set.m"
  MR_Word mercury__set__P_6,
#line 252 "set.m"
  MR_Word mercury__set__S0_7,
#line 252 "set.m"
  MR_Word * mercury__set__S_8,
#line 252 "set.m"
  MR_Box mercury__set__A0_9,
#line 252 "set.m"
  MR_Box * mercury__set__A_10)
#line 252 "set.m"
{
#line 700 "set.m"
  {
#line 700 "set.m"
    MR_bool mercury__set__succeeded;
#line 700 "set.m"
    MR_Word mercury__set__L0_11 = (MR_Word) mercury__set__S0_7;
#line 700 "set.m"
    MR_Word mercury__set__L_12;
#line 700 "set.m"
    MR_Word mercury__set__V_4_26;
#line 700 "set.m"
    MR_Integer mercury__set__V_5_29;
#line 700 "set.m"
    MR_Integer mercury__set__V_5_34;

#line 702 "set.m"
    {
#line 702 "set.m"
      mercury__set__succeeded = mercury__list__map_foldl_5_p_3(mercury__set__TypeInfo_for_T1_13, mercury__set__TypeInfo_for_T2_14, mercury__set__TypeInfo_for_T3_15, mercury__set__P_6, mercury__set__L0_11, &mercury__set__L_12, mercury__set__A0_9, mercury__set__A_10);
    }
#line 700 "set.m"
    if (mercury__set__succeeded)
#line 700 "set.m"
      {
#line 90 "list.opt"
        mercury__set__V_5_34 = (MR_Integer) 0;
#line 91 "list.opt"
        {
#line 91 "list.opt"
          mercury__list__length_acc_3_p_0(mercury__set__TypeInfo_for_T2_14, mercury__set__L_12, mercury__set__V_5_34, &mercury__set__V_5_29);
        }
#line 123 "list.opt"
        {
#line 123 "list.opt"
          mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__set__TypeInfo_for_T2_14, mercury__set__V_5_29, mercury__set__L_12, &mercury__set__V_4_26);
        }
#line 31 "set_ordlist.opt"
        *mercury__set__S_8 = (MR_Word) mercury__set__V_4_26;
#line 31 "set_ordlist.opt"
        mercury__set__succeeded = MR_TRUE;
#line 700 "set.m"
      }
#line 700 "set.m"
    return mercury__set__succeeded;
#line 700 "set.m"
  }
#line 252 "set.m"
}

#line 251 "set.m"
void MR_CALL 
mercury__set__map_fold_5_p_2(
#line 251 "set.m"
  MR_Word mercury__set__TypeInfo_for_T1_13,
#line 251 "set.m"
  MR_Word mercury__set__TypeInfo_for_T2_14,
#line 251 "set.m"
  MR_Word mercury__set__TypeInfo_for_T3_15,
#line 251 "set.m"
  MR_Word mercury__set__P_6,
#line 251 "set.m"
  MR_Word mercury__set__S0_7,
#line 251 "set.m"
  MR_Word * mercury__set__S_8,
#line 251 "set.m"
  MR_Box mercury__set__A0_9,
#line 251 "set.m"
  MR_Box * mercury__set__A_10)
#line 251 "set.m"
{
#line 700 "set.m"
  {
#line 700 "set.m"
    MR_bool mercury__set__succeeded;
#line 700 "set.m"
    MR_Word mercury__set__L0_11 = (MR_Word) mercury__set__S0_7;
#line 700 "set.m"
    MR_Word mercury__set__L_12;
#line 700 "set.m"
    MR_Word mercury__set__V_4_26;
#line 700 "set.m"
    MR_Integer mercury__set__V_5_29;

#line 702 "set.m"
    {
#line 702 "set.m"
      mercury__list__map_foldl_5_p_2(mercury__set__TypeInfo_for_T1_13, mercury__set__TypeInfo_for_T2_14, mercury__set__TypeInfo_for_T3_15, mercury__set__P_6, mercury__set__L0_11, &mercury__set__L_12, mercury__set__A0_9, mercury__set__A_10);
    }
#line 91 "list.opt"
    {
#line 91 "list.opt"
      mercury__list__length_acc_3_p_0(mercury__set__TypeInfo_for_T2_14, mercury__set__L_12, (MR_Integer) 0, &mercury__set__V_5_29);
    }
#line 123 "list.opt"
    {
#line 123 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__set__TypeInfo_for_T2_14, mercury__set__V_5_29, mercury__set__L_12, &mercury__set__V_4_26);
    }
#line 31 "set_ordlist.opt"
    *mercury__set__S_8 = (MR_Word) mercury__set__V_4_26;
#line 700 "set.m"
  }
#line 251 "set.m"
}

#line 250 "set.m"
void MR_CALL 
mercury__set__map_fold_5_p_1(
#line 250 "set.m"
  MR_Word mercury__set__TypeInfo_for_T1_13,
#line 250 "set.m"
  MR_Word mercury__set__TypeInfo_for_T2_14,
#line 250 "set.m"
  MR_Word mercury__set__TypeInfo_for_T3_15,
#line 250 "set.m"
  MR_Word mercury__set__P_6,
#line 250 "set.m"
  MR_Word mercury__set__S0_7,
#line 250 "set.m"
  MR_Word * mercury__set__S_8,
#line 250 "set.m"
  MR_Box mercury__set__A0_9,
#line 250 "set.m"
  MR_Box * mercury__set__A_10)
#line 250 "set.m"
{
#line 700 "set.m"
  {
#line 700 "set.m"
    MR_bool mercury__set__succeeded;
#line 700 "set.m"
    MR_Word mercury__set__L0_11 = (MR_Word) mercury__set__S0_7;
#line 700 "set.m"
    MR_Word mercury__set__L_12;
#line 700 "set.m"
    MR_Word mercury__set__V_4_26;
#line 700 "set.m"
    MR_Integer mercury__set__V_5_29;

#line 702 "set.m"
    {
#line 702 "set.m"
      mercury__list__map_foldl_5_p_1(mercury__set__TypeInfo_for_T1_13, mercury__set__TypeInfo_for_T2_14, mercury__set__TypeInfo_for_T3_15, mercury__set__P_6, mercury__set__L0_11, &mercury__set__L_12, mercury__set__A0_9, mercury__set__A_10);
    }
#line 91 "list.opt"
    {
#line 91 "list.opt"
      mercury__list__length_acc_3_p_0(mercury__set__TypeInfo_for_T2_14, mercury__set__L_12, (MR_Integer) 0, &mercury__set__V_5_29);
    }
#line 123 "list.opt"
    {
#line 123 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__set__TypeInfo_for_T2_14, mercury__set__V_5_29, mercury__set__L_12, &mercury__set__V_4_26);
    }
#line 31 "set_ordlist.opt"
    *mercury__set__S_8 = (MR_Word) mercury__set__V_4_26;
#line 700 "set.m"
  }
#line 250 "set.m"
}

#line 249 "set.m"
void MR_CALL 
mercury__set__map_fold_5_p_0(
#line 249 "set.m"
  MR_Word mercury__set__TypeInfo_for_T1_13,
#line 249 "set.m"
  MR_Word mercury__set__TypeInfo_for_T2_14,
#line 249 "set.m"
  MR_Word mercury__set__TypeInfo_for_T3_15,
#line 249 "set.m"
  MR_Word mercury__set__P_6,
#line 249 "set.m"
  MR_Word mercury__set__S0_7,
#line 249 "set.m"
  MR_Word * mercury__set__S_8,
#line 249 "set.m"
  MR_Box mercury__set__A0_9,
#line 249 "set.m"
  MR_Box * mercury__set__A_10)
#line 249 "set.m"
{
#line 700 "set.m"
  {
#line 700 "set.m"
    MR_bool mercury__set__succeeded;
#line 700 "set.m"
    MR_Word mercury__set__L0_11 = (MR_Word) mercury__set__S0_7;
#line 700 "set.m"
    MR_Word mercury__set__L_12;
#line 700 "set.m"
    MR_Word mercury__set__V_4_26;
#line 700 "set.m"
    MR_Integer mercury__set__V_5_29;

#line 702 "set.m"
    {
#line 702 "set.m"
      mercury__list__map_foldl_5_p_0(mercury__set__TypeInfo_for_T1_13, mercury__set__TypeInfo_for_T2_14, mercury__set__TypeInfo_for_T3_15, mercury__set__P_6, mercury__set__L0_11, &mercury__set__L_12, mercury__set__A0_9, mercury__set__A_10);
    }
#line 91 "list.opt"
    {
#line 91 "list.opt"
      mercury__list__length_acc_3_p_0(mercury__set__TypeInfo_for_T2_14, mercury__set__L_12, (MR_Integer) 0, &mercury__set__V_5_29);
    }
#line 123 "list.opt"
    {
#line 123 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__set__TypeInfo_for_T2_14, mercury__set__V_5_29, mercury__set__L_12, &mercury__set__V_4_26);
    }
#line 31 "set_ordlist.opt"
    *mercury__set__S_8 = (MR_Word) mercury__set__V_4_26;
#line 700 "set.m"
  }
#line 249 "set.m"
}

#line 690 "set.m"
static void MR_CALL 
mercury__set__map_3_p_4_1(
#line 690 "set.m"
  void * mercury__set__env_ptr_arg)
#line 690 "set.m"
{
#line 690 "set.m"
  {
#line 690 "set.m"
    struct mercury__set__map_3_p_4_env_0_s * mercury__set__env_ptr = (struct mercury__set__map_3_p_4_env_0_s *) mercury__set__env_ptr_arg;

#line 90 "list.opt"
    (mercury__set__env_ptr)->mercury__set__map_3_p_4_env_0__V_5_25 = (MR_Integer) 0;
#line 91 "list.opt"
    {
#line 91 "list.opt"
      mercury__list__length_acc_3_p_0((mercury__set__env_ptr)->mercury__set__map_3_p_4_env_0__TypeInfo_for_T2_10, (mercury__set__env_ptr)->mercury__set__map_3_p_4_env_0__L2_8, (mercury__set__env_ptr)->mercury__set__map_3_p_4_env_0__V_5_25, &(mercury__set__env_ptr)->mercury__set__map_3_p_4_env_0__V_5_20);
    }
#line 123 "list.opt"
    {
#line 123 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0((mercury__set__env_ptr)->mercury__set__map_3_p_4_env_0__TypeInfo_for_T2_10, (mercury__set__env_ptr)->mercury__set__map_3_p_4_env_0__V_5_20, (mercury__set__env_ptr)->mercury__set__map_3_p_4_env_0__L2_8, &(mercury__set__env_ptr)->mercury__set__map_3_p_4_env_0__V_4_17);
    }
#line 31 "set_ordlist.opt"
    *((mercury__set__env_ptr)->mercury__set__map_3_p_4_env_0__S2_6) = (MR_Word) (mercury__set__env_ptr)->mercury__set__map_3_p_4_env_0__V_4_17;
#line 31 "set_ordlist.opt"
    {
#line 31 "set_ordlist.opt"
      ((mercury__set__env_ptr)->mercury__set__map_3_p_4_env_0__cont)((mercury__set__env_ptr)->mercury__set__map_3_p_4_env_0__cont_env_ptr);
#line 31 "set_ordlist.opt"
      return;
    }
#line 690 "set.m"
  }
#line 690 "set.m"
}

#line 241 "set.m"
void MR_CALL 
mercury__set__map_3_p_4(
#line 241 "set.m"
  MR_Word mercury__set__TypeInfo_for_T1_9,
#line 241 "set.m"
  MR_Word mercury__set__TypeInfo_for_T2_10,
#line 241 "set.m"
  MR_Word mercury__set__P_4,
#line 241 "set.m"
  MR_Word mercury__set__S1_5,
#line 241 "set.m"
  MR_Word * mercury__set__S2_6,
#line 241 "set.m"
  MR_Cont mercury__set__cont,
#line 241 "set.m"
  void * mercury__set__cont_env_ptr)
#line 241 "set.m"
{
#line 241 "set.m"
  {
#line 241 "set.m"
    struct mercury__set__map_3_p_4_env_0_s mercury__set__env;

#line 241 "set.m"
    (mercury__set__env).mercury__set__map_3_p_4_env_0__TypeInfo_for_T2_10 = mercury__set__TypeInfo_for_T2_10;
#line 241 "set.m"
    (mercury__set__env).mercury__set__map_3_p_4_env_0__S2_6 = mercury__set__S2_6;
#line 241 "set.m"
    (mercury__set__env).mercury__set__map_3_p_4_env_0__cont = mercury__set__cont;
#line 241 "set.m"
    (mercury__set__env).mercury__set__map_3_p_4_env_0__cont_env_ptr = mercury__set__cont_env_ptr;
#line 690 "set.m"
    {
#line 690 "set.m"
      MR_bool mercury__set__succeeded;
#line 690 "set.m"
      MR_Word mercury__set__L1_7 = (MR_Word) mercury__set__S1_5;

#line 692 "set.m"
      {
#line 692 "set.m"
        mercury__list__map_3_p_4(mercury__set__TypeInfo_for_T1_9, (mercury__set__env).mercury__set__map_3_p_4_env_0__TypeInfo_for_T2_10, mercury__set__P_4, mercury__set__L1_7, &(mercury__set__env).mercury__set__map_3_p_4_env_0__L2_8, mercury__set__map_3_p_4_1, &mercury__set__env);
      }
#line 690 "set.m"
    }
#line 241 "set.m"
  }
#line 241 "set.m"
}

#line 690 "set.m"
static void MR_CALL 
mercury__set__map_3_p_3_1(
#line 690 "set.m"
  void * mercury__set__env_ptr_arg)
#line 690 "set.m"
{
#line 690 "set.m"
  {
#line 690 "set.m"
    struct mercury__set__map_3_p_3_env_0_s * mercury__set__env_ptr = (struct mercury__set__map_3_p_3_env_0_s *) mercury__set__env_ptr_arg;

#line 90 "list.opt"
    (mercury__set__env_ptr)->mercury__set__map_3_p_3_env_0__V_5_25 = (MR_Integer) 0;
#line 91 "list.opt"
    {
#line 91 "list.opt"
      mercury__list__length_acc_3_p_0((mercury__set__env_ptr)->mercury__set__map_3_p_3_env_0__TypeInfo_for_T2_10, (mercury__set__env_ptr)->mercury__set__map_3_p_3_env_0__L2_8, (mercury__set__env_ptr)->mercury__set__map_3_p_3_env_0__V_5_25, &(mercury__set__env_ptr)->mercury__set__map_3_p_3_env_0__V_5_20);
    }
#line 123 "list.opt"
    {
#line 123 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0((mercury__set__env_ptr)->mercury__set__map_3_p_3_env_0__TypeInfo_for_T2_10, (mercury__set__env_ptr)->mercury__set__map_3_p_3_env_0__V_5_20, (mercury__set__env_ptr)->mercury__set__map_3_p_3_env_0__L2_8, &(mercury__set__env_ptr)->mercury__set__map_3_p_3_env_0__V_4_17);
    }
#line 31 "set_ordlist.opt"
    *((mercury__set__env_ptr)->mercury__set__map_3_p_3_env_0__S2_6) = (MR_Word) (mercury__set__env_ptr)->mercury__set__map_3_p_3_env_0__V_4_17;
#line 31 "set_ordlist.opt"
    {
#line 31 "set_ordlist.opt"
      ((mercury__set__env_ptr)->mercury__set__map_3_p_3_env_0__cont)((mercury__set__env_ptr)->mercury__set__map_3_p_3_env_0__cont_env_ptr);
#line 31 "set_ordlist.opt"
      return;
    }
#line 690 "set.m"
  }
#line 690 "set.m"
}

#line 240 "set.m"
void MR_CALL 
mercury__set__map_3_p_3(
#line 240 "set.m"
  MR_Word mercury__set__TypeInfo_for_T1_9,
#line 240 "set.m"
  MR_Word mercury__set__TypeInfo_for_T2_10,
#line 240 "set.m"
  MR_Word mercury__set__P_4,
#line 240 "set.m"
  MR_Word mercury__set__S1_5,
#line 240 "set.m"
  MR_Word * mercury__set__S2_6,
#line 240 "set.m"
  MR_Cont mercury__set__cont,
#line 240 "set.m"
  void * mercury__set__cont_env_ptr)
#line 240 "set.m"
{
#line 240 "set.m"
  {
#line 240 "set.m"
    struct mercury__set__map_3_p_3_env_0_s mercury__set__env;

#line 240 "set.m"
    (mercury__set__env).mercury__set__map_3_p_3_env_0__TypeInfo_for_T2_10 = mercury__set__TypeInfo_for_T2_10;
#line 240 "set.m"
    (mercury__set__env).mercury__set__map_3_p_3_env_0__S2_6 = mercury__set__S2_6;
#line 240 "set.m"
    (mercury__set__env).mercury__set__map_3_p_3_env_0__cont = mercury__set__cont;
#line 240 "set.m"
    (mercury__set__env).mercury__set__map_3_p_3_env_0__cont_env_ptr = mercury__set__cont_env_ptr;
#line 690 "set.m"
    {
#line 690 "set.m"
      MR_bool mercury__set__succeeded;
#line 690 "set.m"
      MR_Word mercury__set__L1_7 = (MR_Word) mercury__set__S1_5;

#line 692 "set.m"
      {
#line 692 "set.m"
        mercury__list__map_3_p_3(mercury__set__TypeInfo_for_T1_9, (mercury__set__env).mercury__set__map_3_p_3_env_0__TypeInfo_for_T2_10, mercury__set__P_4, mercury__set__L1_7, &(mercury__set__env).mercury__set__map_3_p_3_env_0__L2_8, mercury__set__map_3_p_3_1, &mercury__set__env);
      }
#line 690 "set.m"
    }
#line 240 "set.m"
  }
#line 240 "set.m"
}

#line 239 "set.m"
MR_bool MR_CALL 
mercury__set__map_3_p_2(
#line 239 "set.m"
  MR_Word mercury__set__TypeInfo_for_T1_9,
#line 239 "set.m"
  MR_Word mercury__set__TypeInfo_for_T2_10,
#line 239 "set.m"
  MR_Word mercury__set__P_4,
#line 239 "set.m"
  MR_Word mercury__set__S1_5,
#line 239 "set.m"
  MR_Word * mercury__set__S2_6)
#line 239 "set.m"
{
#line 690 "set.m"
  {
#line 690 "set.m"
    MR_bool mercury__set__succeeded;
#line 690 "set.m"
    MR_Word mercury__set__L1_7 = (MR_Word) mercury__set__S1_5;
#line 690 "set.m"
    MR_Word mercury__set__L2_8;
#line 690 "set.m"
    MR_Word mercury__set__V_4_17;
#line 690 "set.m"
    MR_Integer mercury__set__V_5_20;
#line 690 "set.m"
    MR_Integer mercury__set__V_5_25;

#line 692 "set.m"
    {
#line 692 "set.m"
      mercury__set__succeeded = mercury__list__map_3_p_2(mercury__set__TypeInfo_for_T1_9, mercury__set__TypeInfo_for_T2_10, mercury__set__P_4, mercury__set__L1_7, &mercury__set__L2_8);
    }
#line 690 "set.m"
    if (mercury__set__succeeded)
#line 690 "set.m"
      {
#line 90 "list.opt"
        mercury__set__V_5_25 = (MR_Integer) 0;
#line 91 "list.opt"
        {
#line 91 "list.opt"
          mercury__list__length_acc_3_p_0(mercury__set__TypeInfo_for_T2_10, mercury__set__L2_8, mercury__set__V_5_25, &mercury__set__V_5_20);
        }
#line 123 "list.opt"
        {
#line 123 "list.opt"
          mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__set__TypeInfo_for_T2_10, mercury__set__V_5_20, mercury__set__L2_8, &mercury__set__V_4_17);
        }
#line 31 "set_ordlist.opt"
        *mercury__set__S2_6 = (MR_Word) mercury__set__V_4_17;
#line 31 "set_ordlist.opt"
        mercury__set__succeeded = MR_TRUE;
#line 690 "set.m"
      }
#line 690 "set.m"
    return mercury__set__succeeded;
#line 690 "set.m"
  }
#line 239 "set.m"
}

#line 238 "set.m"
void MR_CALL 
mercury__set__map_3_p_1(
#line 238 "set.m"
  MR_Word mercury__set__TypeInfo_for_T1_9,
#line 238 "set.m"
  MR_Word mercury__set__TypeInfo_for_T2_10,
#line 238 "set.m"
  MR_Word mercury__set__P_4,
#line 238 "set.m"
  MR_Word mercury__set__S1_5,
#line 238 "set.m"
  MR_Word * mercury__set__S2_6)
#line 238 "set.m"
{
#line 690 "set.m"
  {
#line 690 "set.m"
    MR_bool mercury__set__succeeded;
#line 690 "set.m"
    MR_Word mercury__set__L1_7 = (MR_Word) mercury__set__S1_5;
#line 690 "set.m"
    MR_Word mercury__set__L2_8;
#line 690 "set.m"
    MR_Word mercury__set__V_4_17;
#line 690 "set.m"
    MR_Integer mercury__set__V_5_20;

#line 692 "set.m"
    {
#line 692 "set.m"
      mercury__list__map_3_p_1(mercury__set__TypeInfo_for_T1_9, mercury__set__TypeInfo_for_T2_10, mercury__set__P_4, mercury__set__L1_7, &mercury__set__L2_8);
    }
#line 91 "list.opt"
    {
#line 91 "list.opt"
      mercury__list__length_acc_3_p_0(mercury__set__TypeInfo_for_T2_10, mercury__set__L2_8, (MR_Integer) 0, &mercury__set__V_5_20);
    }
#line 123 "list.opt"
    {
#line 123 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__set__TypeInfo_for_T2_10, mercury__set__V_5_20, mercury__set__L2_8, &mercury__set__V_4_17);
    }
#line 31 "set_ordlist.opt"
    *mercury__set__S2_6 = (MR_Word) mercury__set__V_4_17;
#line 690 "set.m"
  }
#line 238 "set.m"
}

#line 237 "set.m"
void MR_CALL 
mercury__set__map_3_p_0(
#line 237 "set.m"
  MR_Word mercury__set__TypeInfo_for_T1_9,
#line 237 "set.m"
  MR_Word mercury__set__TypeInfo_for_T2_10,
#line 237 "set.m"
  MR_Word mercury__set__P_4,
#line 237 "set.m"
  MR_Word mercury__set__S1_5,
#line 237 "set.m"
  MR_Word * mercury__set__S2_6)
#line 237 "set.m"
{
#line 690 "set.m"
  {
#line 690 "set.m"
    MR_bool mercury__set__succeeded;
#line 690 "set.m"
    MR_Word mercury__set__L1_7 = (MR_Word) mercury__set__S1_5;
#line 690 "set.m"
    MR_Word mercury__set__L2_8;
#line 690 "set.m"
    MR_Word mercury__set__V_4_17;
#line 690 "set.m"
    MR_Integer mercury__set__V_5_20;

#line 692 "set.m"
    {
#line 692 "set.m"
      mercury__list__map_3_p_0(mercury__set__TypeInfo_for_T1_9, mercury__set__TypeInfo_for_T2_10, mercury__set__P_4, mercury__set__L1_7, &mercury__set__L2_8);
    }
#line 91 "list.opt"
    {
#line 91 "list.opt"
      mercury__list__length_acc_3_p_0(mercury__set__TypeInfo_for_T2_10, mercury__set__L2_8, (MR_Integer) 0, &mercury__set__V_5_20);
    }
#line 123 "list.opt"
    {
#line 123 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__set__TypeInfo_for_T2_10, mercury__set__V_5_20, mercury__set__L2_8, &mercury__set__V_4_17);
    }
#line 31 "set_ordlist.opt"
    *mercury__set__S2_6 = (MR_Word) mercury__set__V_4_17;
#line 690 "set.m"
  }
#line 237 "set.m"
}

#line 235 "set.m"
MR_Word MR_CALL 
mercury__set__map_2_f_0(
#line 235 "set.m"
  MR_Word mercury__set__TypeInfo_for_T1_9,
#line 235 "set.m"
  MR_Word mercury__set__TypeInfo_for_T2_10,
#line 235 "set.m"
  MR_Word mercury__set__F_4,
#line 235 "set.m"
  MR_Word mercury__set__Set_5)
#line 235 "set.m"
{
#line 695 "set.m"
  {
#line 695 "set.m"
    MR_bool mercury__set__succeeded;
#line 695 "set.m"
    MR_Word mercury__set__TransformedSet_6;
#line 695 "set.m"
    MR_Word mercury__set__List_7 = (MR_Word) mercury__set__Set_5;
#line 695 "set.m"
    MR_Word mercury__set__TransformedList_8;
#line 695 "set.m"
    MR_Word mercury__set__V_4_21;
#line 695 "set.m"
    MR_Integer mercury__set__V_5_24;

#line 697 "set.m"
    {
#line 697 "set.m"
      mercury__set__TransformedList_8 = mercury__list__map_2_f_0(mercury__set__TypeInfo_for_T1_9, mercury__set__TypeInfo_for_T2_10, mercury__set__F_4, mercury__set__List_7);
    }
#line 91 "list.opt"
    {
#line 91 "list.opt"
      mercury__list__length_acc_3_p_0(mercury__set__TypeInfo_for_T2_10, mercury__set__TransformedList_8, (MR_Integer) 0, &mercury__set__V_5_24);
    }
#line 123 "list.opt"
    {
#line 123 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__set__TypeInfo_for_T2_10, mercury__set__V_5_24, mercury__set__TransformedList_8, &mercury__set__V_4_21);
    }
#line 31 "set_ordlist.opt"
    mercury__set__TransformedSet_6 = (MR_Word) mercury__set__V_4_21;
#line 695 "set.m"
    return mercury__set__TransformedSet_6;
#line 695 "set.m"
  }
#line 235 "set.m"
}

#line 228 "set.m"
void MR_CALL 
mercury__set__count_2_p_0(
#line 228 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_5,
#line 228 "set.m"
  MR_Word mercury__set__Set_3,
#line 228 "set.m"
  MR_Integer * mercury__set__Count_4)
#line 228 "set.m"
{
#line 132 "set_ordlist.opt"
  {
#line 132 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 132 "set_ordlist.opt"
    MR_Word mercury__set__V_3_7 = (MR_Word) mercury__set__Set_3;

#line 91 "list.opt"
    {
#line 91 "list.opt"
      mercury__list__length_acc_3_p_0(mercury__set__TypeInfo_for_T_5, mercury__set__V_3_7, (MR_Integer) 0, mercury__set__Count_4);
#line 91 "list.opt"
      return;
    }
#line 132 "set_ordlist.opt"
  }
#line 228 "set.m"
}

#line 227 "set.m"
MR_Integer MR_CALL 
mercury__set__count_1_f_0(
#line 227 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_5,
#line 227 "set.m"
  MR_Word mercury__set__S_3)
#line 227 "set.m"
{
#line 132 "set_ordlist.opt"
  {
#line 132 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 132 "set_ordlist.opt"
    MR_Integer mercury__set__N_4;
#line 132 "set_ordlist.opt"
    MR_Word mercury__set__V_3_9 = (MR_Word) mercury__set__S_3;

#line 91 "list.opt"
    {
#line 91 "list.opt"
      mercury__list__length_acc_3_p_0(mercury__set__TypeInfo_for_T_5, mercury__set__V_3_9, (MR_Integer) 0, &mercury__set__N_4);
    }
#line 132 "set_ordlist.opt"
    return mercury__set__N_4;
#line 132 "set_ordlist.opt"
  }
#line 227 "set.m"
}

#line 222 "set.m"
void MR_CALL 
mercury__set__difference_3_p_0(
#line 222 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_7,
#line 222 "set.m"
  MR_Word mercury__set__SetA_4,
#line 222 "set.m"
  MR_Word mercury__set__SetB_5,
#line 222 "set.m"
  MR_Word * mercury__set__Set_6)
#line 222 "set.m"
{
#line 128 "set_ordlist.opt"
  {
#line 128 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 128 "set_ordlist.opt"
    MR_Word mercury__set__V_4_8 = (MR_Word) mercury__set__SetA_4;
#line 128 "set_ordlist.opt"
    MR_Word mercury__set__V_5_9 = (MR_Word) mercury__set__SetB_5;
#line 128 "set_ordlist.opt"
    MR_Word mercury__set__V_6_10;

#line 129 "set_ordlist.opt"
    {
#line 129 "set_ordlist.opt"
      mercury__set_ordlist__difference_loop_3_p_0(mercury__set__TypeInfo_for_T_7, mercury__set__V_4_8, mercury__set__V_5_9, &mercury__set__V_6_10);
    }
#line 128 "set_ordlist.opt"
    *mercury__set__Set_6 = (MR_Word) mercury__set__V_6_10;
#line 128 "set_ordlist.opt"
  }
#line 222 "set.m"
}

#line 221 "set.m"
MR_Word MR_CALL 
mercury__set__difference_2_f_0(
#line 221 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_7,
#line 221 "set.m"
  MR_Word mercury__set__S1_4,
#line 221 "set.m"
  MR_Word mercury__set__S2_5)
#line 221 "set.m"
{
#line 128 "set_ordlist.opt"
  {
#line 128 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 128 "set_ordlist.opt"
    MR_Word mercury__set__S3_6;
#line 128 "set_ordlist.opt"
    MR_Word mercury__set__V_4_11 = (MR_Word) mercury__set__S1_4;
#line 128 "set_ordlist.opt"
    MR_Word mercury__set__V_5_12 = (MR_Word) mercury__set__S2_5;
#line 128 "set_ordlist.opt"
    MR_Word mercury__set__V_6_13;

#line 129 "set_ordlist.opt"
    {
#line 129 "set_ordlist.opt"
      mercury__set_ordlist__difference_loop_3_p_0(mercury__set__TypeInfo_for_T_7, mercury__set__V_4_11, mercury__set__V_5_12, &mercury__set__V_6_13);
    }
#line 128 "set_ordlist.opt"
    mercury__set__S3_6 = (MR_Word) mercury__set__V_6_13;
#line 128 "set_ordlist.opt"
    return mercury__set__S3_6;
#line 128 "set_ordlist.opt"
  }
#line 221 "set.m"
}

#line 215 "set.m"
MR_Word MR_CALL 
mercury__set__intersect_list_1_f_0(
#line 215 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_4,
#line 215 "set.m"
  MR_Word mercury__set__Sets_3)
#line 215 "set.m"
{
#line 679 "set.m"
  {
#line 679 "set.m"
    MR_bool mercury__set__succeeded;
#line 679 "set.m"
    MR_Word mercury__set__HeadVar__2_2;

#line 679 "set.m"
    {
#line 679 "set.m"
      return mercury__set__HeadVar__2_2 = mercury__set_ordlist__intersect_list_1_f_0(mercury__set__TypeInfo_for_T_4, mercury__set__Sets_3);
    }
#line 679 "set.m"
    return mercury__set__HeadVar__2_2;
#line 679 "set.m"
  }
#line 215 "set.m"
}

#line 210 "set.m"
void MR_CALL 
mercury__set__power_intersect_2_p_0(
#line 210 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_5,
#line 210 "set.m"
  MR_Word mercury__set__Sets_3,
#line 210 "set.m"
  MR_Word * mercury__set__Set_4)
#line 210 "set.m"
{
#line 122 "set_ordlist.opt"
  {
#line 122 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 122 "set_ordlist.opt"
    MR_Word mercury__set__V_3_7 = (MR_Word) mercury__set__Sets_3;

#line 123 "set_ordlist.opt"
    {
#line 123 "set_ordlist.opt"
      *mercury__set__Set_4 = mercury__set_ordlist__intersect_list_1_f_0(mercury__set__TypeInfo_for_T_5, mercury__set__V_3_7);
    }
#line 122 "set_ordlist.opt"
  }
#line 210 "set.m"
}

#line 209 "set.m"
MR_Word MR_CALL 
mercury__set__power_intersect_1_f_0(
#line 209 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_5,
#line 209 "set.m"
  MR_Word mercury__set__SS_3)
#line 209 "set.m"
{
#line 122 "set_ordlist.opt"
  {
#line 122 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 122 "set_ordlist.opt"
    MR_Word mercury__set__S_4;
#line 122 "set_ordlist.opt"
    MR_Word mercury__set__V_3_9 = (MR_Word) mercury__set__SS_3;

#line 123 "set_ordlist.opt"
    {
#line 123 "set_ordlist.opt"
      return mercury__set__S_4 = mercury__set_ordlist__intersect_list_1_f_0(mercury__set__TypeInfo_for_T_5, mercury__set__V_3_9);
    }
#line 122 "set_ordlist.opt"
    return mercury__set__S_4;
#line 122 "set_ordlist.opt"
  }
#line 209 "set.m"
}

#line 204 "set.m"
void MR_CALL 
mercury__set__intersect_3_p_0(
#line 204 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_7,
#line 204 "set.m"
  MR_Word mercury__set__SetA_4,
#line 204 "set.m"
  MR_Word mercury__set__SetB_5,
#line 204 "set.m"
  MR_Word * mercury__set__Set_6)
#line 204 "set.m"
{
#line 118 "set_ordlist.opt"
  {
#line 118 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 118 "set_ordlist.opt"
    MR_Word mercury__set__V_4_8 = (MR_Word) mercury__set__SetA_4;
#line 118 "set_ordlist.opt"
    MR_Word mercury__set__V_5_9 = (MR_Word) mercury__set__SetB_5;
#line 118 "set_ordlist.opt"
    MR_Word mercury__set__V_6_10;

#line 119 "set_ordlist.opt"
    {
#line 119 "set_ordlist.opt"
      mercury__set_ordlist__intersect_loop_3_p_0(mercury__set__TypeInfo_for_T_7, mercury__set__V_4_8, mercury__set__V_5_9, &mercury__set__V_6_10);
    }
#line 118 "set_ordlist.opt"
    *mercury__set__Set_6 = (MR_Word) mercury__set__V_6_10;
#line 118 "set_ordlist.opt"
  }
#line 204 "set.m"
}

#line 203 "set.m"
MR_Word MR_CALL 
mercury__set__intersect_2_f_0(
#line 203 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_7,
#line 203 "set.m"
  MR_Word mercury__set__S1_4,
#line 203 "set.m"
  MR_Word mercury__set__S2_5)
#line 203 "set.m"
{
#line 118 "set_ordlist.opt"
  {
#line 118 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 118 "set_ordlist.opt"
    MR_Word mercury__set__S3_6;
#line 118 "set_ordlist.opt"
    MR_Word mercury__set__V_4_11 = (MR_Word) mercury__set__S1_4;
#line 118 "set_ordlist.opt"
    MR_Word mercury__set__V_5_12 = (MR_Word) mercury__set__S2_5;
#line 118 "set_ordlist.opt"
    MR_Word mercury__set__V_6_13;

#line 119 "set_ordlist.opt"
    {
#line 119 "set_ordlist.opt"
      mercury__set_ordlist__intersect_loop_3_p_0(mercury__set__TypeInfo_for_T_7, mercury__set__V_4_11, mercury__set__V_5_12, &mercury__set__V_6_13);
    }
#line 118 "set_ordlist.opt"
    mercury__set__S3_6 = (MR_Word) mercury__set__V_6_13;
#line 118 "set_ordlist.opt"
    return mercury__set__S3_6;
#line 118 "set_ordlist.opt"
  }
#line 203 "set.m"
}

#line 191 "set.m"
void MR_CALL 
mercury__set__power_union_2_p_0(
#line 191 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_5,
#line 191 "set.m"
  MR_Word mercury__set__Sets_3,
#line 191 "set.m"
  MR_Word * mercury__set__Set_4)
#line 191 "set.m"
{
#line 114 "set_ordlist.opt"
  {
#line 114 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 114 "set_ordlist.opt"
    MR_Word mercury__set__V_3_7 = (MR_Word) mercury__set__Sets_3;
#line 114 "set_ordlist.opt"
    MR_Word mercury__set__V_5_10 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 114 "set_ordlist.opt"
    MR_Word mercury__set__V_2_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 113 "set_ordlist.opt"
    {
#line 113 "set_ordlist.opt"
      mercury__set_ordlist__power_union_2_3_p_0(mercury__set__TypeInfo_for_T_5, mercury__set__V_3_7, mercury__set__V_5_10, mercury__set__Set_4);
#line 113 "set_ordlist.opt"
      return;
    }
#line 114 "set_ordlist.opt"
  }
#line 191 "set.m"
}

#line 190 "set.m"
MR_Word MR_CALL 
mercury__set__power_union_1_f_0(
#line 190 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_5,
#line 190 "set.m"
  MR_Word mercury__set__SS_3)
#line 190 "set.m"
{
#line 114 "set_ordlist.opt"
  {
#line 114 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 114 "set_ordlist.opt"
    MR_Word mercury__set__S_4;
#line 114 "set_ordlist.opt"
    MR_Word mercury__set__V_3_9 = (MR_Word) mercury__set__SS_3;
#line 114 "set_ordlist.opt"
    MR_Word mercury__set__V_5_12 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 114 "set_ordlist.opt"
    MR_Word mercury__set__V_2_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 113 "set_ordlist.opt"
    {
#line 113 "set_ordlist.opt"
      mercury__set_ordlist__power_union_2_3_p_0(mercury__set__TypeInfo_for_T_5, mercury__set__V_3_9, mercury__set__V_5_12, &mercury__set__S_4);
    }
#line 114 "set_ordlist.opt"
    return mercury__set__S_4;
#line 114 "set_ordlist.opt"
  }
#line 190 "set.m"
}

#line 185 "set.m"
MR_Word MR_CALL 
mercury__set__union_list_1_f_0(
#line 185 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_4,
#line 185 "set.m"
  MR_Word mercury__set__Sets_3)
#line 185 "set.m"
{
#line 111 "set_ordlist.opt"
  {
#line 111 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 111 "set_ordlist.opt"
    MR_Word mercury__set__HeadVar__2_2;
#line 111 "set_ordlist.opt"
    MR_Word mercury__set__V_5_7 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 111 "set_ordlist.opt"
    MR_Word mercury__set__V_2_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 113 "set_ordlist.opt"
    {
#line 113 "set_ordlist.opt"
      mercury__set_ordlist__power_union_2_3_p_0(mercury__set__TypeInfo_for_T_4, mercury__set__Sets_3, mercury__set__V_5_7, &mercury__set__HeadVar__2_2);
    }
#line 111 "set_ordlist.opt"
    return mercury__set__HeadVar__2_2;
#line 111 "set_ordlist.opt"
  }
#line 185 "set.m"
}

#line 180 "set.m"
void MR_CALL 
mercury__set__union_3_p_0(
#line 180 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_7,
#line 180 "set.m"
  MR_Word mercury__set__SetA_4,
#line 180 "set.m"
  MR_Word mercury__set__SetB_5,
#line 180 "set.m"
  MR_Word * mercury__set__Set_6)
#line 180 "set.m"
{
#line 105 "set_ordlist.opt"
  {
#line 105 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 105 "set_ordlist.opt"
    MR_Word mercury__set__V_4_8 = (MR_Word) mercury__set__SetA_4;
#line 105 "set_ordlist.opt"
    MR_Word mercury__set__V_5_9 = (MR_Word) mercury__set__SetB_5;
#line 105 "set_ordlist.opt"
    MR_Word mercury__set__V_6_10;

#line 106 "set_ordlist.opt"
    {
#line 106 "set_ordlist.opt"
      mercury__list__merge_and_remove_dups_3_p_0(mercury__set__TypeInfo_for_T_7, mercury__set__V_4_8, mercury__set__V_5_9, &mercury__set__V_6_10);
    }
#line 105 "set_ordlist.opt"
    *mercury__set__Set_6 = (MR_Word) mercury__set__V_6_10;
#line 105 "set_ordlist.opt"
  }
#line 180 "set.m"
}

#line 179 "set.m"
MR_Word MR_CALL 
mercury__set__union_2_f_0(
#line 179 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_7,
#line 179 "set.m"
  MR_Word mercury__set__S1_4,
#line 179 "set.m"
  MR_Word mercury__set__S2_5)
#line 179 "set.m"
{
#line 105 "set_ordlist.opt"
  {
#line 105 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 105 "set_ordlist.opt"
    MR_Word mercury__set__S3_6;
#line 105 "set_ordlist.opt"
    MR_Word mercury__set__V_4_11 = (MR_Word) mercury__set__S1_4;
#line 105 "set_ordlist.opt"
    MR_Word mercury__set__V_5_12 = (MR_Word) mercury__set__S2_5;
#line 105 "set_ordlist.opt"
    MR_Word mercury__set__V_6_13;

#line 106 "set_ordlist.opt"
    {
#line 106 "set_ordlist.opt"
      mercury__list__merge_and_remove_dups_3_p_0(mercury__set__TypeInfo_for_T_7, mercury__set__V_4_11, mercury__set__V_5_12, &mercury__set__V_6_13);
    }
#line 105 "set_ordlist.opt"
    mercury__set__S3_6 = (MR_Word) mercury__set__V_6_13;
#line 105 "set_ordlist.opt"
    return mercury__set__S3_6;
#line 105 "set_ordlist.opt"
  }
#line 179 "set.m"
}

#line 168 "set.m"
MR_bool MR_CALL 
mercury__set__remove_least_3_p_0(
#line 168 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_9,
#line 168 "set.m"
  MR_Box * mercury__set__X_4,
#line 168 "set.m"
  MR_Word mercury__set__STATE_VARIABLE_Set_0_6,
#line 168 "set.m"
  MR_Word * mercury__set__STATE_VARIABLE_Set_7)
#line 168 "set.m"
{
#line 103 "set_ordlist.opt"
  {
#line 103 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 103 "set_ordlist.opt"
    MR_Word mercury__set__V_6_11 = (MR_Word) mercury__set__STATE_VARIABLE_Set_0_6;
#line 103 "set_ordlist.opt"
    MR_Word mercury__set__V_5_12;

#line 104 "set_ordlist.opt"
    mercury__set__succeeded = ((MR_tag((MR_Word) mercury__set__V_6_11)) == (MR_mktag((MR_Integer) 1)));
#line 104 "set_ordlist.opt"
    if (mercury__set__succeeded)
#line 104 "set_ordlist.opt"
      {
#line 104 "set_ordlist.opt"
        *mercury__set__X_4 = (MR_hl_field(MR_mktag(1), mercury__set__V_6_11, (MR_Integer) 0));
#line 104 "set_ordlist.opt"
        mercury__set__V_5_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set__V_6_11, (MR_Integer) 1)));
#line 103 "set_ordlist.opt"
        *mercury__set__STATE_VARIABLE_Set_7 = (MR_Word) mercury__set__V_5_12;
#line 103 "set_ordlist.opt"
        mercury__set__succeeded = MR_TRUE;
#line 104 "set_ordlist.opt"
      }
#line 103 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 103 "set_ordlist.opt"
  }
#line 168 "set.m"
}

#line 160 "set.m"
MR_bool MR_CALL 
mercury__set__remove_list_3_p_0(
#line 160 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_9,
#line 160 "set.m"
  MR_Word mercury__set__List_4,
#line 160 "set.m"
  MR_Word mercury__set__STATE_VARIABLE_Set_0_6,
#line 160 "set.m"
  MR_Word * mercury__set__STATE_VARIABLE_Set_7)
#line 160 "set.m"
{
#line 99 "set_ordlist.opt"
  {
#line 99 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 99 "set_ordlist.opt"
    MR_Word mercury__set__V_6_13;
#line 99 "set_ordlist.opt"
    MR_Word mercury__set__V_4_17;
#line 99 "set_ordlist.opt"
    MR_Word mercury__set__V_6_19;
#line 99 "set_ordlist.opt"
    MR_Word mercury__set__V_4_20;
#line 99 "set_ordlist.opt"
    MR_Word mercury__set__V_5_21;
#line 99 "set_ordlist.opt"
    MR_Word mercury__set__V_6_22;

#line 100 "set_ordlist.opt"
    {
#line 100 "set_ordlist.opt"
      mercury__set__succeeded = mercury__set_ordlist__sort_no_dups_2_p_0(mercury__set__TypeInfo_for_T_9, mercury__set__List_4, &mercury__set__V_6_13);
    }
#line 99 "set_ordlist.opt"
    if (mercury__set__succeeded)
#line 99 "set_ordlist.opt"
      {
#line 118 "set_ordlist.opt"
        mercury__set__V_4_17 = (MR_Word) mercury__set__STATE_VARIABLE_Set_0_6;
#line 118 "set_ordlist.opt"
        mercury__set__V_6_19 = (MR_Word) mercury__set__V_6_13;
#line 119 "set_ordlist.opt"
        {
#line 119 "set_ordlist.opt"
          mercury__set__succeeded = mercury__set_ordlist__intersect_loop_3_p_1(mercury__set__TypeInfo_for_T_9, mercury__set__V_4_17, mercury__set__V_6_19, mercury__set__V_6_19);
        }
#line 99 "set_ordlist.opt"
        if (mercury__set__succeeded)
#line 99 "set_ordlist.opt"
          {
#line 128 "set_ordlist.opt"
            mercury__set__V_4_20 = (MR_Word) mercury__set__STATE_VARIABLE_Set_0_6;
#line 128 "set_ordlist.opt"
            mercury__set__V_5_21 = (MR_Word) mercury__set__V_6_13;
#line 129 "set_ordlist.opt"
            {
#line 129 "set_ordlist.opt"
              mercury__set_ordlist__difference_loop_3_p_0(mercury__set__TypeInfo_for_T_9, mercury__set__V_4_20, mercury__set__V_5_21, &mercury__set__V_6_22);
            }
#line 128 "set_ordlist.opt"
            *mercury__set__STATE_VARIABLE_Set_7 = (MR_Word) mercury__set__V_6_22;
#line 128 "set_ordlist.opt"
            mercury__set__succeeded = MR_TRUE;
#line 99 "set_ordlist.opt"
          }
#line 99 "set_ordlist.opt"
      }
#line 99 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 99 "set_ordlist.opt"
  }
#line 160 "set.m"
}

#line 153 "set.m"
MR_bool MR_CALL 
mercury__set__remove_3_p_0(
#line 153 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_9,
#line 153 "set.m"
  MR_Box mercury__set__X_4,
#line 153 "set.m"
  MR_Word mercury__set__STATE_VARIABLE_Set_0_6,
#line 153 "set.m"
  MR_Word * mercury__set__STATE_VARIABLE_Set_7)
#line 153 "set.m"
{
#line 97 "set_ordlist.opt"
  {
#line 97 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 97 "set_ordlist.opt"
    MR_Word mercury__set__V_5_11 = (MR_Word) mercury__set__STATE_VARIABLE_Set_0_6;
#line 97 "set_ordlist.opt"
    MR_Word mercury__set__V_6_12;

#line 98 "set_ordlist.opt"
    {
#line 98 "set_ordlist.opt"
      mercury__set__succeeded = mercury__list__delete_first_3_p_0(mercury__set__TypeInfo_for_T_9, mercury__set__V_5_11, mercury__set__X_4, &mercury__set__V_6_12);
    }
#line 97 "set_ordlist.opt"
    if (mercury__set__succeeded)
#line 97 "set_ordlist.opt"
      {
#line 97 "set_ordlist.opt"
        *mercury__set__STATE_VARIABLE_Set_7 = (MR_Word) mercury__set__V_6_12;
#line 97 "set_ordlist.opt"
        mercury__set__succeeded = MR_TRUE;
#line 97 "set_ordlist.opt"
      }
#line 97 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 97 "set_ordlist.opt"
  }
#line 153 "set.m"
}

#line 146 "set.m"
void MR_CALL 
mercury__set__delete_list_3_p_0(
#line 146 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_9,
#line 146 "set.m"
  MR_Word mercury__set__List_4,
#line 146 "set.m"
  MR_Word mercury__set__STATE_VARIABLE_Set_0_6,
#line 146 "set.m"
  MR_Word * mercury__set__STATE_VARIABLE_Set_7)
#line 146 "set.m"
{
#line 91 "set_ordlist.opt"
  {
#line 91 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 91 "set_ordlist.opt"
    MR_Integer mercury__set__V_5_18;
#line 91 "set_ordlist.opt"
    MR_Word mercury__set__V_4_24;
#line 91 "set_ordlist.opt"
    MR_Word mercury__set__V_5_25;
#line 91 "set_ordlist.opt"
    MR_Word mercury__set__V_6_26;

#line 91 "list.opt"
    {
#line 91 "list.opt"
      mercury__list__length_acc_3_p_0(mercury__set__TypeInfo_for_T_9, mercury__set__List_4, (MR_Integer) 0, &mercury__set__V_5_18);
    }
#line 123 "list.opt"
    {
#line 123 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__set__TypeInfo_for_T_9, mercury__set__V_5_18, mercury__set__List_4, &mercury__set__V_5_25);
    }
#line 128 "set_ordlist.opt"
    mercury__set__V_4_24 = (MR_Word) mercury__set__STATE_VARIABLE_Set_0_6;
#line 129 "set_ordlist.opt"
    {
#line 129 "set_ordlist.opt"
      mercury__set_ordlist__difference_loop_3_p_0(mercury__set__TypeInfo_for_T_9, mercury__set__V_4_24, mercury__set__V_5_25, &mercury__set__V_6_26);
    }
#line 128 "set_ordlist.opt"
    *mercury__set__STATE_VARIABLE_Set_7 = (MR_Word) mercury__set__V_6_26;
#line 91 "set_ordlist.opt"
  }
#line 146 "set.m"
}

#line 145 "set.m"
MR_Word MR_CALL 
mercury__set__delete_list_2_f_0(
#line 145 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_7,
#line 145 "set.m"
  MR_Word mercury__set__S1_4,
#line 145 "set.m"
  MR_Word mercury__set__Xs_5)
#line 145 "set.m"
{
#line 630 "set.m"
  {
#line 630 "set.m"
    MR_bool mercury__set__succeeded;
#line 630 "set.m"
    MR_Word mercury__set__S2_6;

#line 630 "set.m"
    {
#line 630 "set.m"
      mercury__set__delete_list_3_p_0(mercury__set__TypeInfo_for_T_7, mercury__set__Xs_5, mercury__set__S1_4, &mercury__set__S2_6);
    }
#line 630 "set.m"
    return mercury__set__S2_6;
#line 630 "set.m"
  }
#line 145 "set.m"
}

#line 139 "set.m"
void MR_CALL 
mercury__set__delete_3_p_0(
#line 139 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_9,
#line 139 "set.m"
  MR_Box mercury__set__X_4,
#line 139 "set.m"
  MR_Word mercury__set__STATE_VARIABLE_Set_0_6,
#line 139 "set.m"
  MR_Word * mercury__set__STATE_VARIABLE_Set_7)
#line 139 "set.m"
{
#line 84 "set_ordlist.opt"
  {
#line 84 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 84 "set_ordlist.opt"
    MR_Word mercury__set__V_11_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 84 "set_ordlist.opt"
    MR_Word mercury__set__V_4_17;
#line 84 "set_ordlist.opt"
    MR_Word mercury__set__V_5_18;
#line 84 "set_ordlist.opt"
    MR_Word mercury__set__V_6_19;

#line 86 "set_ordlist.opt"
    {
#line 86 "set_ordlist.opt"
      mercury__set__V_5_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 86 "set_ordlist.opt"
      MR_hl_field(MR_mktag(1), mercury__set__V_5_18, 0) = mercury__set__X_4;
#line 86 "set_ordlist.opt"
      MR_hl_field(MR_mktag(1), mercury__set__V_5_18, 1) = ((MR_Box) (mercury__set__V_11_16));
#line 86 "set_ordlist.opt"
    }
#line 128 "set_ordlist.opt"
    mercury__set__V_4_17 = (MR_Word) mercury__set__STATE_VARIABLE_Set_0_6;
#line 129 "set_ordlist.opt"
    {
#line 129 "set_ordlist.opt"
      mercury__set_ordlist__difference_loop_3_p_0(mercury__set__TypeInfo_for_T_9, mercury__set__V_4_17, mercury__set__V_5_18, &mercury__set__V_6_19);
    }
#line 128 "set_ordlist.opt"
    *mercury__set__STATE_VARIABLE_Set_7 = (MR_Word) mercury__set__V_6_19;
#line 84 "set_ordlist.opt"
  }
#line 139 "set.m"
}

#line 138 "set.m"
MR_Word MR_CALL 
mercury__set__delete_2_f_0(
#line 138 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_7,
#line 138 "set.m"
  MR_Word mercury__set__S1_4,
#line 138 "set.m"
  MR_Box mercury__set__T_5)
#line 138 "set.m"
{
#line 84 "set_ordlist.opt"
  {
#line 84 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 84 "set_ordlist.opt"
    MR_Word mercury__set__S2_6;
#line 84 "set_ordlist.opt"
    MR_Word mercury__set__V_11_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 84 "set_ordlist.opt"
    MR_Word mercury__set__V_4_20;
#line 84 "set_ordlist.opt"
    MR_Word mercury__set__V_5_21;
#line 84 "set_ordlist.opt"
    MR_Word mercury__set__V_6_22;

#line 86 "set_ordlist.opt"
    {
#line 86 "set_ordlist.opt"
      mercury__set__V_5_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 86 "set_ordlist.opt"
      MR_hl_field(MR_mktag(1), mercury__set__V_5_21, 0) = mercury__set__T_5;
#line 86 "set_ordlist.opt"
      MR_hl_field(MR_mktag(1), mercury__set__V_5_21, 1) = ((MR_Box) (mercury__set__V_11_19));
#line 86 "set_ordlist.opt"
    }
#line 128 "set_ordlist.opt"
    mercury__set__V_4_20 = (MR_Word) mercury__set__S1_4;
#line 129 "set_ordlist.opt"
    {
#line 129 "set_ordlist.opt"
      mercury__set_ordlist__difference_loop_3_p_0(mercury__set__TypeInfo_for_T_7, mercury__set__V_4_20, mercury__set__V_5_21, &mercury__set__V_6_22);
    }
#line 128 "set_ordlist.opt"
    mercury__set__S2_6 = (MR_Word) mercury__set__V_6_22;
#line 84 "set_ordlist.opt"
    return mercury__set__S2_6;
#line 84 "set_ordlist.opt"
  }
#line 138 "set.m"
}

#line 131 "set.m"
void MR_CALL 
mercury__set__insert_list_3_p_0(
#line 131 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_9,
#line 131 "set.m"
  MR_Word mercury__set__List_4,
#line 131 "set.m"
  MR_Word mercury__set__STATE_VARIABLE_Set_0_6,
#line 131 "set.m"
  MR_Word * mercury__set__STATE_VARIABLE_Set_7)
#line 131 "set.m"
{
#line 78 "set_ordlist.opt"
  {
#line 78 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 78 "set_ordlist.opt"
    MR_Integer mercury__set__V_5_18;
#line 78 "set_ordlist.opt"
    MR_Word mercury__set__V_4_24;
#line 78 "set_ordlist.opt"
    MR_Word mercury__set__V_5_25;
#line 78 "set_ordlist.opt"
    MR_Word mercury__set__V_6_26;

#line 91 "list.opt"
    {
#line 91 "list.opt"
      mercury__list__length_acc_3_p_0(mercury__set__TypeInfo_for_T_9, mercury__set__List_4, (MR_Integer) 0, &mercury__set__V_5_18);
    }
#line 123 "list.opt"
    {
#line 123 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__set__TypeInfo_for_T_9, mercury__set__V_5_18, mercury__set__List_4, &mercury__set__V_4_24);
    }
#line 105 "set_ordlist.opt"
    mercury__set__V_5_25 = (MR_Word) mercury__set__STATE_VARIABLE_Set_0_6;
#line 106 "set_ordlist.opt"
    {
#line 106 "set_ordlist.opt"
      mercury__list__merge_and_remove_dups_3_p_0(mercury__set__TypeInfo_for_T_9, mercury__set__V_4_24, mercury__set__V_5_25, &mercury__set__V_6_26);
    }
#line 105 "set_ordlist.opt"
    *mercury__set__STATE_VARIABLE_Set_7 = (MR_Word) mercury__set__V_6_26;
#line 78 "set_ordlist.opt"
  }
#line 131 "set.m"
}

#line 130 "set.m"
MR_Word MR_CALL 
mercury__set__insert_list_2_f_0(
#line 130 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_7,
#line 130 "set.m"
  MR_Word mercury__set__S1_4,
#line 130 "set.m"
  MR_Word mercury__set__Xs_5)
#line 130 "set.m"
{
#line 581 "set.m"
  {
#line 581 "set.m"
    MR_bool mercury__set__succeeded;
#line 581 "set.m"
    MR_Word mercury__set__S2_6;

#line 581 "set.m"
    {
#line 581 "set.m"
      mercury__set__insert_list_3_p_0(mercury__set__TypeInfo_for_T_7, mercury__set__Xs_5, mercury__set__S1_4, &mercury__set__S2_6);
    }
#line 581 "set.m"
    return mercury__set__S2_6;
#line 581 "set.m"
  }
#line 130 "set.m"
}

#line 125 "set.m"
MR_bool MR_CALL 
mercury__set__insert_new_3_p_0(
#line 125 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_9,
#line 125 "set.m"
  MR_Box mercury__set__X_4,
#line 125 "set.m"
  MR_Word mercury__set__STATE_VARIABLE_Set_0_6,
#line 125 "set.m"
  MR_Word * mercury__set__STATE_VARIABLE_Set_7)
#line 125 "set.m"
{
#line 76 "set_ordlist.opt"
  {
#line 76 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 76 "set_ordlist.opt"
    MR_Word mercury__set__V_5_11 = (MR_Word) mercury__set__STATE_VARIABLE_Set_0_6;
#line 76 "set_ordlist.opt"
    MR_Word mercury__set__V_6_12;

#line 77 "set_ordlist.opt"
    {
#line 77 "set_ordlist.opt"
      mercury__set__succeeded = mercury__set_ordlist__insert_new_loop_3_p_0(mercury__set__TypeInfo_for_T_9, mercury__set__V_5_11, mercury__set__X_4, &mercury__set__V_6_12);
    }
#line 76 "set_ordlist.opt"
    if (mercury__set__succeeded)
#line 76 "set_ordlist.opt"
      {
#line 76 "set_ordlist.opt"
        *mercury__set__STATE_VARIABLE_Set_7 = (MR_Word) mercury__set__V_6_12;
#line 76 "set_ordlist.opt"
        mercury__set__succeeded = MR_TRUE;
#line 76 "set_ordlist.opt"
      }
#line 76 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 76 "set_ordlist.opt"
  }
#line 125 "set.m"
}

#line 120 "set.m"
void MR_CALL 
mercury__set__insert_3_p_0(
#line 120 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_9,
#line 120 "set.m"
  MR_Box mercury__set__X_4,
#line 120 "set.m"
  MR_Word mercury__set__STATE_VARIABLE_Set_0_6,
#line 120 "set.m"
  MR_Word * mercury__set__STATE_VARIABLE_Set_7)
#line 120 "set.m"
{
#line 72 "set_ordlist.opt"
  {
#line 72 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 72 "set_ordlist.opt"
    MR_Word mercury__set__V_5_11 = (MR_Word) mercury__set__STATE_VARIABLE_Set_0_6;
#line 72 "set_ordlist.opt"
    MR_Word mercury__set__V_6_12;

#line 73 "set_ordlist.opt"
    {
#line 73 "set_ordlist.opt"
      mercury__set_ordlist__insert_loop_3_p_0(mercury__set__TypeInfo_for_T_9, mercury__set__V_5_11, mercury__set__X_4, &mercury__set__V_6_12);
    }
#line 72 "set_ordlist.opt"
    *mercury__set__STATE_VARIABLE_Set_7 = (MR_Word) mercury__set__V_6_12;
#line 72 "set_ordlist.opt"
  }
#line 120 "set.m"
}

#line 119 "set.m"
MR_Word MR_CALL 
mercury__set__insert_2_f_0(
#line 119 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_7,
#line 119 "set.m"
  MR_Word mercury__set__S1_4,
#line 119 "set.m"
  MR_Box mercury__set__T_5)
#line 119 "set.m"
{
#line 72 "set_ordlist.opt"
  {
#line 72 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 72 "set_ordlist.opt"
    MR_Word mercury__set__S2_6;
#line 72 "set_ordlist.opt"
    MR_Word mercury__set__V_5_14 = (MR_Word) mercury__set__S1_4;
#line 72 "set_ordlist.opt"
    MR_Word mercury__set__V_6_15;

#line 73 "set_ordlist.opt"
    {
#line 73 "set_ordlist.opt"
      mercury__set_ordlist__insert_loop_3_p_0(mercury__set__TypeInfo_for_T_7, mercury__set__V_5_14, mercury__set__T_5, &mercury__set__V_6_15);
    }
#line 72 "set_ordlist.opt"
    mercury__set__S2_6 = (MR_Word) mercury__set__V_6_15;
#line 72 "set_ordlist.opt"
    return mercury__set__S2_6;
#line 72 "set_ordlist.opt"
  }
#line 119 "set.m"
}

#line 114 "set.m"
MR_bool MR_CALL 
mercury__set__contains_2_p_0(
#line 114 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_5,
#line 114 "set.m"
  MR_Word mercury__set__Set_3,
#line 114 "set.m"
  MR_Box mercury__set__X_4)
#line 114 "set.m"
{
#line 71 "set_ordlist.opt"
  {
#line 71 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;

#line 71 "set_ordlist.opt"
    {
#line 71 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__set_ordlist__member_2_p_0(mercury__set__TypeInfo_for_T_5, mercury__set__X_4, mercury__set__Set_3);
    }
#line 71 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 71 "set_ordlist.opt"
  }
#line 114 "set.m"
}

#line 110 "set.m"
void MR_CALL 
mercury__set__is_member_3_p_0(
#line 110 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_7,
#line 110 "set.m"
  MR_Box mercury__set__X_4,
#line 110 "set.m"
  MR_Word mercury__set__Set_5,
#line 110 "set.m"
  MR_Word * mercury__set__Result_6)
#line 110 "set.m"
{
#line 68 "set_ordlist.opt"
  {
#line 68 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 68 "set_ordlist.opt"
    MR_Word mercury__set__V_5_10 = (MR_Word) mercury__set__Set_5;

#line 69 "set_ordlist.opt"
    {
#line 69 "set_ordlist.opt"
      mercury__set_ordlist__is_member_loop_3_p_0(mercury__set__TypeInfo_for_T_7, mercury__set__X_4, mercury__set__V_5_10, mercury__set__Result_6);
#line 69 "set_ordlist.opt"
      return;
    }
#line 68 "set_ordlist.opt"
  }
#line 110 "set.m"
}

#line 105 "set.m"
void MR_CALL 
mercury__set__member_2_p_1(
#line 105 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_8,
#line 105 "set.m"
  MR_Box * mercury__set__X_1,
#line 105 "set.m"
  MR_Word mercury__set__Set_2,
#line 105 "set.m"
  MR_Cont mercury__set__cont,
#line 105 "set.m"
  void * mercury__set__cont_env_ptr)
#line 105 "set.m"
{
#line 621 "set.m"
  {
#line 621 "set.m"
    MR_bool mercury__set__succeeded;

#line 621 "set.m"
    {
#line 621 "set.m"
      mercury__set_ordlist__member_2_p_1(mercury__set__TypeInfo_for_T_8, mercury__set__X_1, mercury__set__Set_2, mercury__set__cont, mercury__set__cont_env_ptr);
#line 621 "set.m"
      return;
    }
#line 621 "set.m"
  }
#line 105 "set.m"
}

#line 104 "set.m"
MR_bool MR_CALL 
mercury__set__member_2_p_0(
#line 104 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_8,
#line 104 "set.m"
  MR_Box mercury__set__X_1,
#line 104 "set.m"
  MR_Word mercury__set__Set_2)
#line 104 "set.m"
{
#line 618 "set.m"
  {
#line 618 "set.m"
    MR_bool mercury__set__succeeded;
#line 618 "set.m"
    MR_Word mercury__set__V_9_9;
#line 618 "set.m"
    MR_Word mercury__set__V_5_12 = (MR_Word) mercury__set__Set_2;

#line 69 "set_ordlist.opt"
    {
#line 69 "set_ordlist.opt"
      mercury__set_ordlist__is_member_loop_3_p_0(mercury__set__TypeInfo_for_T_8, mercury__set__X_1, mercury__set__V_5_12, &mercury__set__V_9_9);
    }
#line 619 "set.m"
    mercury__set__succeeded = ((MR_Integer) 1 == mercury__set__V_9_9);
#line 618 "set.m"
    return mercury__set__succeeded;
#line 618 "set.m"
  }
#line 104 "set.m"
}

#line 99 "set.m"
MR_bool MR_CALL 
mercury__set__superset_2_p_0(
#line 99 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_5,
#line 99 "set.m"
  MR_Word mercury__set__SetA_3,
#line 99 "set.m"
  MR_Word mercury__set__SetB_4)
#line 99 "set.m"
{
#line 118 "set_ordlist.opt"
  {
#line 118 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 118 "set_ordlist.opt"
    MR_Word mercury__set__V_4_11 = (MR_Word) mercury__set__SetA_3;
#line 118 "set_ordlist.opt"
    MR_Word mercury__set__V_6_13 = (MR_Word) mercury__set__SetB_4;

#line 119 "set_ordlist.opt"
    {
#line 119 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__set_ordlist__intersect_loop_3_p_1(mercury__set__TypeInfo_for_T_5, mercury__set__V_4_11, mercury__set__V_6_13, mercury__set__V_6_13);
    }
#line 118 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 118 "set_ordlist.opt"
  }
#line 99 "set.m"
}

#line 94 "set.m"
MR_bool MR_CALL 
mercury__set__subset_2_p_0(
#line 94 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_5,
#line 94 "set.m"
  MR_Word mercury__set__SetA_3,
#line 94 "set.m"
  MR_Word mercury__set__SetB_4)
#line 94 "set.m"
{
#line 118 "set_ordlist.opt"
  {
#line 118 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 118 "set_ordlist.opt"
    MR_Word mercury__set__V_4_9 = (MR_Word) mercury__set__SetB_4;
#line 118 "set_ordlist.opt"
    MR_Word mercury__set__V_6_11 = (MR_Word) mercury__set__SetA_3;

#line 119 "set_ordlist.opt"
    {
#line 119 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__set_ordlist__intersect_loop_3_p_1(mercury__set__TypeInfo_for_T_5, mercury__set__V_4_9, mercury__set__V_6_11, mercury__set__V_6_11);
    }
#line 118 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 118 "set_ordlist.opt"
  }
#line 94 "set.m"
}

#line 90 "set.m"
MR_bool MR_CALL 
mercury__set__is_non_empty_1_p_0(
#line 90 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_3,
#line 90 "set.m"
  MR_Word mercury__set__Set_2)
#line 90 "set.m"
{
#line 61 "set_ordlist.opt"
  {
#line 61 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 61 "set_ordlist.opt"
    MR_Word mercury__set__V_4_4 = (MR_Word) mercury__set__Set_2;
#line 62 "set_ordlist.opt"
    MR_Box mercury__set__V_2_5;
#line 62 "set_ordlist.opt"
    MR_Word mercury__set__V_3_6;

#line 62 "set_ordlist.opt"
    mercury__set__succeeded = ((MR_tag((MR_Word) mercury__set__V_4_4)) == (MR_mktag((MR_Integer) 1)));
#line 62 "set_ordlist.opt"
    if (mercury__set__succeeded)
#line 62 "set_ordlist.opt"
      {
#line 62 "set_ordlist.opt"
        mercury__set__V_2_5 = (MR_hl_field(MR_mktag(1), mercury__set__V_4_4, (MR_Integer) 0));
#line 62 "set_ordlist.opt"
        mercury__set__V_3_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set__V_4_4, (MR_Integer) 1)));
#line 62 "set_ordlist.opt"
      }
#line 61 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 61 "set_ordlist.opt"
  }
#line 90 "set.m"
}

#line 89 "set.m"
MR_bool MR_CALL 
mercury__set__non_empty_1_p_0(
#line 89 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_3,
#line 89 "set.m"
  MR_Word mercury__set__Set_2)
#line 89 "set.m"
{
#line 61 "set_ordlist.opt"
  {
#line 61 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 61 "set_ordlist.opt"
    MR_Word mercury__set__V_4_4 = (MR_Word) mercury__set__Set_2;
#line 62 "set_ordlist.opt"
    MR_Box mercury__set__V_2_5;
#line 62 "set_ordlist.opt"
    MR_Word mercury__set__V_3_6;

#line 62 "set_ordlist.opt"
    mercury__set__succeeded = ((MR_tag((MR_Word) mercury__set__V_4_4)) == (MR_mktag((MR_Integer) 1)));
#line 62 "set_ordlist.opt"
    if (mercury__set__succeeded)
#line 62 "set_ordlist.opt"
      {
#line 62 "set_ordlist.opt"
        mercury__set__V_2_5 = (MR_hl_field(MR_mktag(1), mercury__set__V_4_4, (MR_Integer) 0));
#line 62 "set_ordlist.opt"
        mercury__set__V_3_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set__V_4_4, (MR_Integer) 1)));
#line 62 "set_ordlist.opt"
      }
#line 61 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 61 "set_ordlist.opt"
  }
#line 89 "set.m"
}

#line 84 "set.m"
MR_bool MR_CALL 
mercury__set__is_empty_1_p_0(
#line 84 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_3,
#line 84 "set.m"
  MR_Word mercury__set__Set_2)
#line 84 "set.m"
{
#line 57 "set_ordlist.opt"
  {
#line 57 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 57 "set_ordlist.opt"
    MR_Word mercury__set__V_2_4 = (MR_Word) mercury__set__Set_2;

#line 58 "set_ordlist.opt"
    mercury__set__succeeded = (mercury__set__V_2_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 57 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 57 "set_ordlist.opt"
  }
#line 84 "set.m"
}

#line 83 "set.m"
MR_bool MR_CALL 
mercury__set__empty_1_p_0(
#line 83 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_3,
#line 83 "set.m"
  MR_Word mercury__set__Set_2)
#line 83 "set.m"
{
#line 57 "set_ordlist.opt"
  {
#line 57 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 57 "set_ordlist.opt"
    MR_Word mercury__set__V_2_4 = (MR_Word) mercury__set__Set_2;

#line 58 "set_ordlist.opt"
    mercury__set__succeeded = (mercury__set__V_2_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 57 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 57 "set_ordlist.opt"
  }
#line 83 "set.m"
}

#line 78 "set.m"
MR_bool MR_CALL 
mercury__set__equal_2_p_0(
#line 78 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_5,
#line 78 "set.m"
  MR_Word mercury__set__SetA_3,
#line 78 "set.m"
  MR_Word mercury__set__SetB_4)
#line 78 "set.m"
{
#line 54 "set_ordlist.opt"
  {
#line 54 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;

#line 54 "set_ordlist.opt"
    {
#line 54 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__set_ordlist____Unify____set_ordlist_1_0(mercury__set__TypeInfo_for_T_5, mercury__set__SetB_4, mercury__set__SetA_3);
    }
#line 54 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 54 "set_ordlist.opt"
  }
#line 78 "set.m"
}

#line 73 "set.m"
MR_bool MR_CALL 
mercury__set__is_singleton_2_p_0(
#line 73 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_5,
#line 73 "set.m"
  MR_Word mercury__set__Set_3,
#line 73 "set.m"
  MR_Box * mercury__set__X_4)
#line 73 "set.m"
{
#line 51 "set_ordlist.opt"
  {
#line 51 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 51 "set_ordlist.opt"
    MR_Word mercury__set__V_4_7 = (MR_Word) mercury__set__Set_3;
#line 51 "set_ordlist.opt"
    MR_Word mercury__set__V_5_8;

#line 52 "set_ordlist.opt"
    mercury__set__succeeded = ((MR_tag((MR_Word) mercury__set__V_4_7)) == (MR_mktag((MR_Integer) 1)));
#line 52 "set_ordlist.opt"
    if (mercury__set__succeeded)
#line 52 "set_ordlist.opt"
      {
#line 52 "set_ordlist.opt"
        *mercury__set__X_4 = (MR_hl_field(MR_mktag(1), mercury__set__V_4_7, (MR_Integer) 0));
#line 52 "set_ordlist.opt"
        mercury__set__V_5_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set__V_4_7, (MR_Integer) 1)));
#line 53 "set_ordlist.opt"
        mercury__set__succeeded = (mercury__set__V_5_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 52 "set_ordlist.opt"
      }
#line 51 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 51 "set_ordlist.opt"
  }
#line 73 "set.m"
}

#line 71 "set.m"
MR_Word MR_CALL 
mercury__set__make_singleton_set_1_f_0(
#line 71 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_5,
#line 71 "set.m"
  MR_Box mercury__set__T_3)
#line 71 "set.m"
{
#line 46 "set_ordlist.opt"
  {
#line 46 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 46 "set_ordlist.opt"
    MR_Word mercury__set__S_4;
#line 46 "set_ordlist.opt"
    MR_Word mercury__set__V_4_9;
#line 46 "set_ordlist.opt"
    MR_Word mercury__set__V_5_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 47 "set_ordlist.opt"
    {
#line 47 "set_ordlist.opt"
      mercury__set__V_4_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 47 "set_ordlist.opt"
      MR_hl_field(MR_mktag(1), mercury__set__V_4_9, 0) = mercury__set__T_3;
#line 47 "set_ordlist.opt"
      MR_hl_field(MR_mktag(1), mercury__set__V_4_9, 1) = ((MR_Box) (mercury__set__V_5_10));
#line 47 "set_ordlist.opt"
    }
#line 46 "set_ordlist.opt"
    mercury__set__S_4 = (MR_Word) mercury__set__V_4_9;
#line 46 "set_ordlist.opt"
    return mercury__set__S_4;
#line 46 "set_ordlist.opt"
  }
#line 71 "set.m"
}

#line 69 "set.m"
MR_bool MR_CALL 
mercury__set__singleton_set_2_p_1(
#line 69 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_5,
#line 69 "set.m"
  MR_Box * mercury__set__X_3,
#line 69 "set.m"
  MR_Word mercury__set__Set_4)
#line 69 "set.m"
{
#line 46 "set_ordlist.opt"
  {
#line 46 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 46 "set_ordlist.opt"
    MR_Word mercury__set__V_4_7 = (MR_Word) mercury__set__Set_4;
#line 46 "set_ordlist.opt"
    MR_Word mercury__set__V_5_8;

#line 47 "set_ordlist.opt"
    mercury__set__succeeded = ((MR_tag((MR_Word) mercury__set__V_4_7)) == (MR_mktag((MR_Integer) 1)));
#line 47 "set_ordlist.opt"
    if (mercury__set__succeeded)
#line 47 "set_ordlist.opt"
      {
#line 47 "set_ordlist.opt"
        *mercury__set__X_3 = (MR_hl_field(MR_mktag(1), mercury__set__V_4_7, (MR_Integer) 0));
#line 47 "set_ordlist.opt"
        mercury__set__V_5_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set__V_4_7, (MR_Integer) 1)));
#line 48 "set_ordlist.opt"
        mercury__set__succeeded = (mercury__set__V_5_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 47 "set_ordlist.opt"
      }
#line 46 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 46 "set_ordlist.opt"
  }
#line 69 "set.m"
}

#line 68 "set.m"
void MR_CALL 
mercury__set__singleton_set_2_p_0(
#line 68 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_5,
#line 68 "set.m"
  MR_Box mercury__set__X_3,
#line 68 "set.m"
  MR_Word * mercury__set__Set_4)
#line 68 "set.m"
{
#line 46 "set_ordlist.opt"
  {
#line 46 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 46 "set_ordlist.opt"
    MR_Word mercury__set__V_4_7;
#line 46 "set_ordlist.opt"
    MR_Word mercury__set__V_5_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 47 "set_ordlist.opt"
    {
#line 47 "set_ordlist.opt"
      mercury__set__V_4_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 47 "set_ordlist.opt"
      MR_hl_field(MR_mktag(1), mercury__set__V_4_7, 0) = mercury__set__X_3;
#line 47 "set_ordlist.opt"
      MR_hl_field(MR_mktag(1), mercury__set__V_4_7, 1) = ((MR_Box) (mercury__set__V_5_8));
#line 47 "set_ordlist.opt"
    }
#line 46 "set_ordlist.opt"
    *mercury__set__Set_4 = (MR_Word) mercury__set__V_4_7;
#line 46 "set_ordlist.opt"
  }
#line 68 "set.m"
}

#line 62 "set.m"
MR_Word MR_CALL 
mercury__set__to_sorted_list_1_f_0(
#line 62 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_5,
#line 62 "set.m"
  MR_Word mercury__set__S_3)
#line 62 "set.m"
{
#line 43 "set_ordlist.opt"
  {
#line 43 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 43 "set_ordlist.opt"
    MR_Word mercury__set__Xs_4 = (MR_Word) mercury__set__S_3;

#line 43 "set_ordlist.opt"
    return mercury__set__Xs_4;
#line 43 "set_ordlist.opt"
  }
#line 62 "set.m"
}

#line 61 "set.m"
void MR_CALL 
mercury__set__to_sorted_list_2_p_0(
#line 61 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_5,
#line 61 "set.m"
  MR_Word mercury__set__Set_3,
#line 61 "set.m"
  MR_Word * mercury__set__List_4)
#line 61 "set.m"
{
#line 43 "set_ordlist.opt"
  {
#line 43 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;

#line 43 "set_ordlist.opt"
    *mercury__set__List_4 = (MR_Word) mercury__set__Set_3;
#line 43 "set_ordlist.opt"
  }
#line 61 "set.m"
}

#line 55 "set.m"
MR_Word MR_CALL 
mercury__set__from_sorted_list_1_f_0(
#line 55 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_4,
#line 55 "set.m"
  MR_Word mercury__set__List_3)
#line 55 "set.m"
{
#line 37 "set_ordlist.opt"
  {
#line 37 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 37 "set_ordlist.opt"
    MR_Word mercury__set__HeadVar__2_2;
#line 37 "set_ordlist.opt"
    MR_Word mercury__set__V_4_8;

#line 68 "list.opt"
    if ((mercury__set__List_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 68 "list.opt"
      mercury__set__V_4_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 68 "list.opt"
    else
#line 69 "list.opt"
      {
#line 69 "list.opt"
        MR_Box mercury__set__V_3_9 = (MR_hl_field(MR_mktag(1), mercury__set__List_3, (MR_Integer) 0));
#line 69 "list.opt"
        MR_Word mercury__set__V_4_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set__List_3, (MR_Integer) 1)));

#line 70 "list.opt"
        {
#line 70 "list.opt"
          mercury__list__remove_adjacent_dups_2_3_p_0(mercury__set__TypeInfo_for_T_4, mercury__set__V_3_9, mercury__set__V_4_10, &mercury__set__V_4_8);
        }
#line 69 "list.opt"
      }
#line 37 "set_ordlist.opt"
    mercury__set__HeadVar__2_2 = (MR_Word) mercury__set__V_4_8;
#line 37 "set_ordlist.opt"
    return mercury__set__HeadVar__2_2;
#line 37 "set_ordlist.opt"
  }
#line 55 "set.m"
}

#line 51 "set.m"
MR_Word MR_CALL 
mercury__set__sorted_list_to_set_1_f_0(
#line 51 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_5,
#line 51 "set.m"
  MR_Word mercury__set__Xs_3)
#line 51 "set.m"
{
#line 37 "set_ordlist.opt"
  {
#line 37 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 37 "set_ordlist.opt"
    MR_Word mercury__set__S_4;
#line 37 "set_ordlist.opt"
    MR_Word mercury__set__V_4_9;

#line 68 "list.opt"
    if ((mercury__set__Xs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 68 "list.opt"
      mercury__set__V_4_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 68 "list.opt"
    else
#line 69 "list.opt"
      {
#line 69 "list.opt"
        MR_Box mercury__set__V_3_10 = (MR_hl_field(MR_mktag(1), mercury__set__Xs_3, (MR_Integer) 0));
#line 69 "list.opt"
        MR_Word mercury__set__V_4_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set__Xs_3, (MR_Integer) 1)));

#line 70 "list.opt"
        {
#line 70 "list.opt"
          mercury__list__remove_adjacent_dups_2_3_p_0(mercury__set__TypeInfo_for_T_5, mercury__set__V_3_10, mercury__set__V_4_11, &mercury__set__V_4_9);
        }
#line 69 "list.opt"
      }
#line 37 "set_ordlist.opt"
    mercury__set__S_4 = (MR_Word) mercury__set__V_4_9;
#line 37 "set_ordlist.opt"
    return mercury__set__S_4;
#line 37 "set_ordlist.opt"
  }
#line 51 "set.m"
}

#line 50 "set.m"
void MR_CALL 
mercury__set__sorted_list_to_set_2_p_0(
#line 50 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_5,
#line 50 "set.m"
  MR_Word mercury__set__List_3,
#line 50 "set.m"
  MR_Word * mercury__set__Set_4)
#line 50 "set.m"
{
#line 37 "set_ordlist.opt"
  {
#line 37 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 37 "set_ordlist.opt"
    MR_Word mercury__set__V_4_7;

#line 68 "list.opt"
    if ((mercury__set__List_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 68 "list.opt"
      mercury__set__V_4_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 68 "list.opt"
    else
#line 69 "list.opt"
      {
#line 69 "list.opt"
        MR_Box mercury__set__V_3_8 = (MR_hl_field(MR_mktag(1), mercury__set__List_3, (MR_Integer) 0));
#line 69 "list.opt"
        MR_Word mercury__set__V_4_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set__List_3, (MR_Integer) 1)));

#line 70 "list.opt"
        {
#line 70 "list.opt"
          mercury__list__remove_adjacent_dups_2_3_p_0(mercury__set__TypeInfo_for_T_5, mercury__set__V_3_8, mercury__set__V_4_9, &mercury__set__V_4_7);
        }
#line 69 "list.opt"
      }
#line 37 "set_ordlist.opt"
    *mercury__set__Set_4 = (MR_Word) mercury__set__V_4_7;
#line 37 "set_ordlist.opt"
  }
#line 50 "set.m"
}

#line 44 "set.m"
MR_Word MR_CALL 
mercury__set__set_1_f_0(
#line 44 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_4,
#line 44 "set.m"
  MR_Word mercury__set__List_3)
#line 44 "set.m"
{
#line 31 "set_ordlist.opt"
  {
#line 31 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 31 "set_ordlist.opt"
    MR_Word mercury__set__HeadVar__2_2;
#line 31 "set_ordlist.opt"
    MR_Word mercury__set__V_4_8;
#line 31 "set_ordlist.opt"
    MR_Integer mercury__set__V_5_11;

#line 91 "list.opt"
    {
#line 91 "list.opt"
      mercury__list__length_acc_3_p_0(mercury__set__TypeInfo_for_T_4, mercury__set__List_3, (MR_Integer) 0, &mercury__set__V_5_11);
    }
#line 123 "list.opt"
    {
#line 123 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__set__TypeInfo_for_T_4, mercury__set__V_5_11, mercury__set__List_3, &mercury__set__V_4_8);
    }
#line 31 "set_ordlist.opt"
    mercury__set__HeadVar__2_2 = (MR_Word) mercury__set__V_4_8;
#line 31 "set_ordlist.opt"
    return mercury__set__HeadVar__2_2;
#line 31 "set_ordlist.opt"
  }
#line 44 "set.m"
}

#line 43 "set.m"
MR_Word MR_CALL 
mercury__set__from_list_1_f_0(
#line 43 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_4,
#line 43 "set.m"
  MR_Word mercury__set__List_3)
#line 43 "set.m"
{
#line 31 "set_ordlist.opt"
  {
#line 31 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 31 "set_ordlist.opt"
    MR_Word mercury__set__HeadVar__2_2;
#line 31 "set_ordlist.opt"
    MR_Word mercury__set__V_4_8;
#line 31 "set_ordlist.opt"
    MR_Integer mercury__set__V_5_11;

#line 91 "list.opt"
    {
#line 91 "list.opt"
      mercury__list__length_acc_3_p_0(mercury__set__TypeInfo_for_T_4, mercury__set__List_3, (MR_Integer) 0, &mercury__set__V_5_11);
    }
#line 123 "list.opt"
    {
#line 123 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__set__TypeInfo_for_T_4, mercury__set__V_5_11, mercury__set__List_3, &mercury__set__V_4_8);
    }
#line 31 "set_ordlist.opt"
    mercury__set__HeadVar__2_2 = (MR_Word) mercury__set__V_4_8;
#line 31 "set_ordlist.opt"
    return mercury__set__HeadVar__2_2;
#line 31 "set_ordlist.opt"
  }
#line 43 "set.m"
}

#line 39 "set.m"
MR_Word MR_CALL 
mercury__set__list_to_set_1_f_0(
#line 39 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_5,
#line 39 "set.m"
  MR_Word mercury__set__Xs_3)
#line 39 "set.m"
{
#line 31 "set_ordlist.opt"
  {
#line 31 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 31 "set_ordlist.opt"
    MR_Word mercury__set__S_4;
#line 31 "set_ordlist.opt"
    MR_Word mercury__set__V_4_9;
#line 31 "set_ordlist.opt"
    MR_Integer mercury__set__V_5_12;

#line 91 "list.opt"
    {
#line 91 "list.opt"
      mercury__list__length_acc_3_p_0(mercury__set__TypeInfo_for_T_5, mercury__set__Xs_3, (MR_Integer) 0, &mercury__set__V_5_12);
    }
#line 123 "list.opt"
    {
#line 123 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__set__TypeInfo_for_T_5, mercury__set__V_5_12, mercury__set__Xs_3, &mercury__set__V_4_9);
    }
#line 31 "set_ordlist.opt"
    mercury__set__S_4 = (MR_Word) mercury__set__V_4_9;
#line 31 "set_ordlist.opt"
    return mercury__set__S_4;
#line 31 "set_ordlist.opt"
  }
#line 39 "set.m"
}

#line 38 "set.m"
void MR_CALL 
mercury__set__list_to_set_2_p_0(
#line 38 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_5,
#line 38 "set.m"
  MR_Word mercury__set__List_3,
#line 38 "set.m"
  MR_Word * mercury__set__Set_4)
#line 38 "set.m"
{
#line 31 "set_ordlist.opt"
  {
#line 31 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 31 "set_ordlist.opt"
    MR_Word mercury__set__V_4_7;
#line 31 "set_ordlist.opt"
    MR_Integer mercury__set__V_5_10;

#line 91 "list.opt"
    {
#line 91 "list.opt"
      mercury__list__length_acc_3_p_0(mercury__set__TypeInfo_for_T_5, mercury__set__List_3, (MR_Integer) 0, &mercury__set__V_5_10);
    }
#line 123 "list.opt"
    {
#line 123 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__set__TypeInfo_for_T_5, mercury__set__V_5_10, mercury__set__List_3, &mercury__set__V_4_7);
    }
#line 31 "set_ordlist.opt"
    *mercury__set__Set_4 = (MR_Word) mercury__set__V_4_7;
#line 31 "set_ordlist.opt"
  }
#line 38 "set.m"
}

#line 33 "set.m"
void MR_CALL 
mercury__set__init_1_p_0(
#line 33 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_3,
#line 33 "set.m"
  MR_Word * mercury__set__Set_2)
#line 33 "set.m"
{
#line 27 "set_ordlist.opt"
  {
#line 27 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 27 "set_ordlist.opt"
    MR_Word mercury__set__V_2_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 27 "set_ordlist.opt"
    *mercury__set__Set_2 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 27 "set_ordlist.opt"
  }
#line 33 "set.m"
}

#line 32 "set.m"
MR_Word MR_CALL 
mercury__set__init_0_f_0(
#line 32 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_3)
#line 32 "set.m"
{
#line 27 "set_ordlist.opt"
  {
#line 27 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 27 "set_ordlist.opt"
    MR_Word mercury__set__S_2 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 27 "set_ordlist.opt"
    MR_Word mercury__set__V_2_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 27 "set_ordlist.opt"
    return mercury__set__S_2;
#line 27 "set_ordlist.opt"
  }
#line 32 "set.m"
}

void mercury__set__init(void)
{
}

void mercury__set__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__set__set__type_ctor_info_set_1);
}

void mercury__set__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module set. */
