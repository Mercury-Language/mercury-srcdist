/*
** Automatically generated from `pqueue.m'
** by the Mercury compiler,
** version rotd-2015-09-15
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


/* :- module pqueue. */
/* :- implementation. */

/*
INIT mercury__pqueue__init
ENDINIT
*/

#include "pqueue.mih"


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




#line 94 "pqueue.c"
static const MR_DuFunctorDesc mercury__pqueue__pqueue__du_functor_desc_pqueue_2_0;

#line 97 "pqueue.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__pqueue__pqueue__pti_pqueue_2__pseudo_1__pseudo_2;

#line 100 "pqueue.c"
static const MR_PseudoTypeInfo mercury__pqueue__pqueue__field_types_pqueue_2_1[5];

#line 103 "pqueue.c"
static const MR_DuFunctorDesc mercury__pqueue__pqueue__du_functor_desc_pqueue_2_1;

#line 106 "pqueue.c"
static const MR_DuFunctorDescPtr mercury__pqueue__pqueue__du_stag_ordered_pqueue_2_0[1];

#line 109 "pqueue.c"
static const MR_DuFunctorDescPtr mercury__pqueue__pqueue__du_stag_ordered_pqueue_2_1[1];

#line 112 "pqueue.c"
static const MR_DuPtagLayout mercury__pqueue__pqueue__du_ptag_ordered_pqueue_2[2];

#line 115 "pqueue.c"
static const MR_DuFunctorDescPtr mercury__pqueue__pqueue__du_name_ordered_pqueue_2[2];

#line 118 "pqueue.c"
static const MR_Integer mercury__pqueue__pqueue__functor_number_map_pqueue_2[2];

#line 121 "pqueue.c"
static MR_bool MR_CALL 
mercury__pqueue____Unify____pqueue_2_0_10001(
#line 124 "pqueue.c"
  MR_Box mercury__pqueue__wrapper_arg_1,
#line 126 "pqueue.c"
  MR_Box mercury__pqueue__wrapper_arg_2,
#line 128 "pqueue.c"
  MR_Box mercury__pqueue__wrapper_arg_3,
#line 130 "pqueue.c"
  MR_Box mercury__pqueue__wrapper_arg_4);

#line 133 "pqueue.c"
static void MR_CALL 
mercury__pqueue____Compare____pqueue_2_0_10001(
#line 136 "pqueue.c"
  MR_Box mercury__pqueue__wrapper_arg_1,
#line 138 "pqueue.c"
  MR_Box mercury__pqueue__wrapper_arg_2,
#line 140 "pqueue.c"
  MR_Box * mercury__pqueue__wrapper_arg_3,
#line 142 "pqueue.c"
  MR_Box mercury__pqueue__wrapper_arg_4,
#line 144 "pqueue.c"
  MR_Box mercury__pqueue__wrapper_arg_5);

#line 18 "ops.opt"
static MR_Integer MR_CALL 
mercury__pqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 185 "pqueue.m"
static void MR_CALL 
mercury__pqueue__insert_2_6_p_0(
#line 185 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_K_48,
#line 185 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_V_49,
#line 185 "pqueue.m"
  MR_Box mercury__pqueue__K_1,
#line 185 "pqueue.m"
  MR_Box mercury__pqueue__V_2,
#line 185 "pqueue.m"
  MR_Word mercury__pqueue__HeadVar__3_3,
#line 185 "pqueue.m"
  MR_Word mercury__pqueue__HeadVar__4_4,
#line 185 "pqueue.m"
  MR_Word * mercury__pqueue__HeadVar__5_5,
#line 185 "pqueue.m"
  MR_Word * mercury__pqueue__HeadVar__6_6);


static /* final */ const MR_Box mercury__pqueue_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__pqueue_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__pqueue_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__pqueue_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__pqueue_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__pqueue_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__pqueue_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__pqueue_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__pqueue_scalar_common_2[0])),
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



#line 246 "pqueue.c"
static const MR_DuFunctorDesc mercury__pqueue__pqueue__du_functor_desc_pqueue_2_0 = {
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
  NULL
};

#line 261 "pqueue.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__pqueue__pqueue__pti_pqueue_2__pseudo_1__pseudo_2 = {
  &mercury__pqueue__pqueue__type_ctor_info_pqueue_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 270 "pqueue.c"
static const MR_PseudoTypeInfo mercury__pqueue__pqueue__field_types_pqueue_2_1[5] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) (MR_Integer) 2,
  (MR_PseudoTypeInfo) &mercury__pqueue__pqueue__pti_pqueue_2__pseudo_1__pseudo_2,
  (MR_PseudoTypeInfo) &mercury__pqueue__pqueue__pti_pqueue_2__pseudo_1__pseudo_2
};

#line 279 "pqueue.c"
static const MR_DuFunctorDesc mercury__pqueue__pqueue__du_functor_desc_pqueue_2_1 = {
  (MR_String) "pqueue",
  (MR_Integer) 5,
  (MR_Integer) 30,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__pqueue__pqueue__field_types_pqueue_2_1,
  NULL,
  NULL,
  NULL
};

#line 294 "pqueue.c"
static const MR_DuFunctorDescPtr mercury__pqueue__pqueue__du_stag_ordered_pqueue_2_0[1] = {
  &mercury__pqueue__pqueue__du_functor_desc_pqueue_2_0
};

#line 299 "pqueue.c"
static const MR_DuFunctorDescPtr mercury__pqueue__pqueue__du_stag_ordered_pqueue_2_1[1] = {
  &mercury__pqueue__pqueue__du_functor_desc_pqueue_2_1
};

#line 304 "pqueue.c"
static const MR_DuPtagLayout mercury__pqueue__pqueue__du_ptag_ordered_pqueue_2[2] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_LOCAL,
    mercury__pqueue__pqueue__du_stag_ordered_pqueue_2_0
  },
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__pqueue__pqueue__du_stag_ordered_pqueue_2_1
  }
};

#line 318 "pqueue.c"
static const MR_DuFunctorDescPtr mercury__pqueue__pqueue__du_name_ordered_pqueue_2[2] = {
  &mercury__pqueue__pqueue__du_functor_desc_pqueue_2_0,
  &mercury__pqueue__pqueue__du_functor_desc_pqueue_2_1
};

#line 324 "pqueue.c"
static const MR_Integer mercury__pqueue__pqueue__functor_number_map_pqueue_2[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

#line 330 "pqueue.c"
const MR_TypeCtorInfo_Struct mercury__pqueue__pqueue__type_ctor_info_pqueue_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) 2,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__pqueue____Unify____pqueue_2_0_10001)),
  ((MR_Box) (mercury__pqueue____Compare____pqueue_2_0_10001)),
  (MR_String) "pqueue",
  (MR_String) "pqueue",
  {     mercury__pqueue__pqueue__du_name_ordered_pqueue_2 },
  {     mercury__pqueue__pqueue__du_ptag_ordered_pqueue_2 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__pqueue__pqueue__functor_number_map_pqueue_2
};

#line 347 "pqueue.c"
static MR_bool MR_CALL 
mercury__pqueue____Unify____pqueue_2_0_10001(
#line 350 "pqueue.c"
  MR_Box mercury__pqueue__wrapper_arg_1,
#line 352 "pqueue.c"
  MR_Box mercury__pqueue__wrapper_arg_2,
#line 354 "pqueue.c"
  MR_Box mercury__pqueue__wrapper_arg_3,
#line 356 "pqueue.c"
  MR_Box mercury__pqueue__wrapper_arg_4)
#line 358 "pqueue.c"
{
#line 360 "pqueue.c"
  {
#line 362 "pqueue.c"
    MR_bool mercury__pqueue__succeeded;

#line 365 "pqueue.c"
    {
#line 367 "pqueue.c"
      mercury__pqueue__succeeded = mercury__pqueue____Unify____pqueue_2_0(((MR_Word) mercury__pqueue__wrapper_arg_1), ((MR_Word) mercury__pqueue__wrapper_arg_2), ((MR_Word) mercury__pqueue__wrapper_arg_3), ((MR_Word) mercury__pqueue__wrapper_arg_4));
    }
#line 370 "pqueue.c"
    return mercury__pqueue__succeeded;
#line 372 "pqueue.c"
  }
#line 374 "pqueue.c"
}

#line 377 "pqueue.c"
static void MR_CALL 
mercury__pqueue____Compare____pqueue_2_0_10001(
#line 380 "pqueue.c"
  MR_Box mercury__pqueue__wrapper_arg_1,
#line 382 "pqueue.c"
  MR_Box mercury__pqueue__wrapper_arg_2,
#line 384 "pqueue.c"
  MR_Box * mercury__pqueue__wrapper_arg_3,
#line 386 "pqueue.c"
  MR_Box mercury__pqueue__wrapper_arg_4,
#line 388 "pqueue.c"
  MR_Box mercury__pqueue__wrapper_arg_5)
#line 390 "pqueue.c"
{
#line 392 "pqueue.c"
  {
#line 394 "pqueue.c"
    MR_Word mercury__pqueue__conv0_HeadVar__1_1;

#line 397 "pqueue.c"
    {
#line 399 "pqueue.c"
      mercury__pqueue____Compare____pqueue_2_0(((MR_Word) mercury__pqueue__wrapper_arg_1), ((MR_Word) mercury__pqueue__wrapper_arg_2), &mercury__pqueue__conv0_HeadVar__1_1, ((MR_Word) mercury__pqueue__wrapper_arg_4), ((MR_Word) mercury__pqueue__wrapper_arg_5));
    }
#line 402 "pqueue.c"
    *mercury__pqueue__wrapper_arg_3 = ((MR_Box) (mercury__pqueue__conv0_HeadVar__1_1));
#line 404 "pqueue.c"
  }
#line 406 "pqueue.c"
}

#line 18 "ops.opt"
static MR_Integer MR_CALL 
mercury__pqueue__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 18 "ops.opt"
{
#line 47 "ops.opt"
  {
#line 47 "ops.opt"
    MR_bool mercury__pqueue__succeeded;

#line 47 "ops.opt"
    return (MR_Integer) 1200;
#line 47 "ops.opt"
  }
#line 18 "ops.opt"
}

#line 129 "pqueue.m"
void MR_CALL 
mercury__pqueue____Compare____pqueue_2_0(
#line 129 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_K_30,
#line 129 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_V_31,
#line 129 "pqueue.m"
  MR_Word * mercury__pqueue__HeadVar__1_1,
#line 129 "pqueue.m"
  MR_Word mercury__pqueue__HeadVar__2_2,
#line 129 "pqueue.m"
  MR_Word mercury__pqueue__HeadVar__3_3)
#line 129 "pqueue.m"
{
#line 129 "pqueue.m"
  while (MR_TRUE)
#line 129 "pqueue.m"
    {
#line 129 "pqueue.m"
      /* tailcall optimized into a loop */
#line 129 "pqueue.m"
      {
#line 129 "pqueue.m"
        MR_bool mercury__pqueue__succeeded;
#line 129 "pqueue.m"
        MR_Integer mercury__pqueue__CastX_28 = (MR_Integer) mercury__pqueue__HeadVar__2_2;
#line 129 "pqueue.m"
        MR_Integer mercury__pqueue__CastY_29 = (MR_Integer) mercury__pqueue__HeadVar__3_3;

#line 129 "pqueue.m"
        mercury__pqueue__succeeded = (mercury__pqueue__CastX_28 == mercury__pqueue__CastY_29);
#line 129 "pqueue.m"
        if (mercury__pqueue__succeeded)
#line 460 "pqueue.c"
          *mercury__pqueue__HeadVar__1_1 = (MR_Integer) 0;
#line 129 "pqueue.m"
        else
#line 129 "pqueue.m"
        if ((mercury__pqueue__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 129 "pqueue.m"
          if ((mercury__pqueue__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 129 "pqueue.m"
            *mercury__pqueue__HeadVar__1_1 = (MR_Integer) 0;
#line 129 "pqueue.m"
          else
#line 472 "pqueue.c"
            *mercury__pqueue__HeadVar__1_1 = (MR_Integer) 1;
#line 129 "pqueue.m"
        else
#line 129 "pqueue.m"
          {
#line 129 "pqueue.m"
            MR_Word mercury__pqueue__V_37_37 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__2_2, (MR_Integer) 4)));
#line 129 "pqueue.m"
            MR_Word mercury__pqueue__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__2_2, (MR_Integer) 3)));
#line 129 "pqueue.m"
            MR_Box mercury__pqueue__V_39_39 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__2_2, (MR_Integer) 2));
#line 129 "pqueue.m"
            MR_Box mercury__pqueue__V_40_40 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__2_2, (MR_Integer) 1));
#line 129 "pqueue.m"
            MR_Integer mercury__pqueue__V_41_41 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__2_2, (MR_Integer) 0)));

#line 129 "pqueue.m"
            if ((mercury__pqueue__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 491 "pqueue.c"
              *mercury__pqueue__HeadVar__1_1 = (MR_Integer) 2;
#line 129 "pqueue.m"
            else
#line 129 "pqueue.m"
              {
#line 129 "pqueue.m"
                MR_Integer mercury__pqueue__V_19_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__3_3, (MR_Integer) 0)));
#line 129 "pqueue.m"
                MR_Box mercury__pqueue__V_20_20 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__3_3, (MR_Integer) 1));
#line 129 "pqueue.m"
                MR_Box mercury__pqueue__V_21_21 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__3_3, (MR_Integer) 2));
#line 129 "pqueue.m"
                MR_Word mercury__pqueue__V_22_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__3_3, (MR_Integer) 3)));
#line 129 "pqueue.m"
                MR_Word mercury__pqueue__V_23_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__3_3, (MR_Integer) 4)));
#line 129 "pqueue.m"
                MR_Word mercury__pqueue__V_24_24;

#line 71 "private_builtin.opt"
                mercury__pqueue__succeeded = (mercury__pqueue__V_41_41 < mercury__pqueue__V_19_19);
#line 74 "private_builtin.opt"
                if (mercury__pqueue__succeeded)
#line 73 "private_builtin.opt"
                  mercury__pqueue__V_24_24 = (MR_Integer) 1;
#line 74 "private_builtin.opt"
                else
#line 79 "private_builtin.opt"
                  {
#line 76 "private_builtin.opt"
                    mercury__pqueue__succeeded = (mercury__pqueue__V_41_41 == mercury__pqueue__V_19_19);
#line 79 "private_builtin.opt"
                    if (mercury__pqueue__succeeded)
#line 78 "private_builtin.opt"
                      mercury__pqueue__V_24_24 = (MR_Integer) 0;
#line 79 "private_builtin.opt"
                    else
#line 80 "private_builtin.opt"
                      mercury__pqueue__V_24_24 = (MR_Integer) 2;
#line 79 "private_builtin.opt"
                  }
#line 532 "pqueue.c"
                mercury__pqueue__succeeded = (mercury__pqueue__V_24_24 == (MR_Integer) 0);
#line 129 "pqueue.m"
                mercury__pqueue__succeeded = !(mercury__pqueue__succeeded);
#line 129 "pqueue.m"
                if (mercury__pqueue__succeeded)
#line 129 "pqueue.m"
                  *mercury__pqueue__HeadVar__1_1 = mercury__pqueue__V_24_24;
#line 129 "pqueue.m"
                else
#line 129 "pqueue.m"
                  {
#line 129 "pqueue.m"
                    MR_Word mercury__pqueue__V_25_25;

#line 129 "pqueue.m"
                    {
#line 129 "pqueue.m"
                      mercury__builtin__compare_3_p_0(mercury__pqueue__TypeInfo_for_K_30, &mercury__pqueue__V_25_25, mercury__pqueue__V_40_40, mercury__pqueue__V_20_20);
                    }
#line 552 "pqueue.c"
                    mercury__pqueue__succeeded = (mercury__pqueue__V_25_25 == (MR_Integer) 0);
#line 129 "pqueue.m"
                    mercury__pqueue__succeeded = !(mercury__pqueue__succeeded);
#line 129 "pqueue.m"
                    if (mercury__pqueue__succeeded)
#line 129 "pqueue.m"
                      *mercury__pqueue__HeadVar__1_1 = mercury__pqueue__V_25_25;
#line 129 "pqueue.m"
                    else
#line 129 "pqueue.m"
                      {
#line 129 "pqueue.m"
                        MR_Word mercury__pqueue__V_26_26;

#line 129 "pqueue.m"
                        {
#line 129 "pqueue.m"
                          mercury__builtin__compare_3_p_0(mercury__pqueue__TypeInfo_for_V_31, &mercury__pqueue__V_26_26, mercury__pqueue__V_39_39, mercury__pqueue__V_21_21);
                        }
#line 572 "pqueue.c"
                        mercury__pqueue__succeeded = (mercury__pqueue__V_26_26 == (MR_Integer) 0);
#line 129 "pqueue.m"
                        mercury__pqueue__succeeded = !(mercury__pqueue__succeeded);
#line 129 "pqueue.m"
                        if (mercury__pqueue__succeeded)
#line 129 "pqueue.m"
                          *mercury__pqueue__HeadVar__1_1 = mercury__pqueue__V_26_26;
#line 129 "pqueue.m"
                        else
#line 129 "pqueue.m"
                          {
#line 129 "pqueue.m"
                            MR_Word mercury__pqueue__V_27_27;

#line 129 "pqueue.m"
                            {
#line 129 "pqueue.m"
                              mercury__pqueue____Compare____pqueue_2_0(mercury__pqueue__TypeInfo_for_K_30, mercury__pqueue__TypeInfo_for_V_31, &mercury__pqueue__V_27_27, mercury__pqueue__V_38_38, mercury__pqueue__V_22_22);
                            }
#line 592 "pqueue.c"
                            mercury__pqueue__succeeded = (mercury__pqueue__V_27_27 == (MR_Integer) 0);
#line 129 "pqueue.m"
                            mercury__pqueue__succeeded = !(mercury__pqueue__succeeded);
#line 129 "pqueue.m"
                            if (mercury__pqueue__succeeded)
#line 129 "pqueue.m"
                              *mercury__pqueue__HeadVar__1_1 = mercury__pqueue__V_27_27;
#line 129 "pqueue.m"
                            else
#line 129 "pqueue.m"
                              {
#line 129 "pqueue.m"
                                /* direct tailcall eliminated */
#line 129 "pqueue.m"
                                {
#line 129 "pqueue.m"
                                  MR_Word mercury__pqueue__HeadVar__2__tmp_copy_2 = mercury__pqueue__V_37_37;
#line 129 "pqueue.m"
                                  MR_Word mercury__pqueue__HeadVar__3__tmp_copy_3 = mercury__pqueue__V_23_23;

#line 129 "pqueue.m"
                                  mercury__pqueue__HeadVar__3_3 = mercury__pqueue__HeadVar__3__tmp_copy_3;
#line 129 "pqueue.m"
                                  mercury__pqueue__HeadVar__2_2 = mercury__pqueue__HeadVar__2__tmp_copy_2;
#line 129 "pqueue.m"
                                }
#line 129 "pqueue.m"
                                continue;
#line 129 "pqueue.m"
                              }
#line 129 "pqueue.m"
                          }
#line 129 "pqueue.m"
                      }
#line 129 "pqueue.m"
                  }
#line 129 "pqueue.m"
              }
#line 129 "pqueue.m"
          }
#line 129 "pqueue.m"
      }
#line 129 "pqueue.m"
      break;
#line 129 "pqueue.m"
    }
#line 129 "pqueue.m"
}

#line 129 "pqueue.m"
MR_bool MR_CALL 
mercury__pqueue____Unify____pqueue_2_0(
#line 129 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_K_17,
#line 129 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_V_18,
#line 129 "pqueue.m"
  MR_Word mercury__pqueue__HeadVar__1_1,
#line 129 "pqueue.m"
  MR_Word mercury__pqueue__HeadVar__2_2)
#line 129 "pqueue.m"
{
#line 129 "pqueue.m"
  while (MR_TRUE)
#line 129 "pqueue.m"
    {
#line 129 "pqueue.m"
      /* tailcall optimized into a loop */
#line 129 "pqueue.m"
      {
#line 129 "pqueue.m"
        MR_bool mercury__pqueue__succeeded;
#line 129 "pqueue.m"
        MR_Integer mercury__pqueue__CastX_15 = (MR_Integer) mercury__pqueue__HeadVar__1_1;
#line 129 "pqueue.m"
        MR_Integer mercury__pqueue__CastY_16 = (MR_Integer) mercury__pqueue__HeadVar__2_2;

#line 129 "pqueue.m"
        mercury__pqueue__succeeded = (mercury__pqueue__CastX_15 == mercury__pqueue__CastY_16);
#line 129 "pqueue.m"
        if (mercury__pqueue__succeeded)
#line 129 "pqueue.m"
          mercury__pqueue__succeeded = MR_TRUE;
#line 129 "pqueue.m"
        else
#line 129 "pqueue.m"
        if ((mercury__pqueue__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 129 "pqueue.m"
          {
#line 129 "pqueue.m"
            MR_Integer mercury__pqueue__CastX_3 = (MR_Integer) mercury__pqueue__HeadVar__1_1;
#line 129 "pqueue.m"
            MR_Integer mercury__pqueue__CastY_4 = (MR_Integer) mercury__pqueue__HeadVar__2_2;

#line 129 "pqueue.m"
            mercury__pqueue__succeeded = (mercury__pqueue__CastY_4 == mercury__pqueue__CastX_3);
#line 129 "pqueue.m"
          }
#line 129 "pqueue.m"
        else
#line 129 "pqueue.m"
          {
#line 129 "pqueue.m"
            MR_Integer mercury__pqueue__V_5_5 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 0)));
#line 129 "pqueue.m"
            MR_Box mercury__pqueue__V_6_6 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 1));
#line 129 "pqueue.m"
            MR_Box mercury__pqueue__V_7_7 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 2));
#line 129 "pqueue.m"
            MR_Word mercury__pqueue__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 3)));
#line 129 "pqueue.m"
            MR_Word mercury__pqueue__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 4)));
#line 129 "pqueue.m"
            MR_Integer mercury__pqueue__V_10_10;
#line 129 "pqueue.m"
            MR_Box mercury__pqueue__V_11_11;
#line 129 "pqueue.m"
            MR_Box mercury__pqueue__V_12_12;
#line 129 "pqueue.m"
            MR_Word mercury__pqueue__V_13_13;
#line 129 "pqueue.m"
            MR_Word mercury__pqueue__V_14_14;

#line 129 "pqueue.m"
            mercury__pqueue__succeeded = ((MR_tag((MR_Word) mercury__pqueue__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
#line 129 "pqueue.m"
            if (mercury__pqueue__succeeded)
#line 129 "pqueue.m"
              {
#line 129 "pqueue.m"
                mercury__pqueue__V_10_10 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__2_2, (MR_Integer) 0)));
#line 129 "pqueue.m"
                mercury__pqueue__V_11_11 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__2_2, (MR_Integer) 1));
#line 129 "pqueue.m"
                mercury__pqueue__V_12_12 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__2_2, (MR_Integer) 2));
#line 129 "pqueue.m"
                mercury__pqueue__V_13_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__2_2, (MR_Integer) 3)));
#line 129 "pqueue.m"
                mercury__pqueue__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__2_2, (MR_Integer) 4)));
#line 732 "pqueue.c"
                mercury__pqueue__succeeded = (mercury__pqueue__V_5_5 == mercury__pqueue__V_10_10);
#line 129 "pqueue.m"
                if (mercury__pqueue__succeeded)
#line 129 "pqueue.m"
                  {
#line 738 "pqueue.c"
                    {
#line 740 "pqueue.c"
                      mercury__pqueue__succeeded = mercury__builtin__unify_2_p_0(mercury__pqueue__TypeInfo_for_K_17, mercury__pqueue__V_6_6, mercury__pqueue__V_11_11);
                    }
#line 129 "pqueue.m"
                    if (mercury__pqueue__succeeded)
#line 129 "pqueue.m"
                      {
#line 747 "pqueue.c"
                        {
#line 749 "pqueue.c"
                          mercury__pqueue__succeeded = mercury__builtin__unify_2_p_0(mercury__pqueue__TypeInfo_for_V_18, mercury__pqueue__V_7_7, mercury__pqueue__V_12_12);
                        }
#line 129 "pqueue.m"
                        if (mercury__pqueue__succeeded)
#line 129 "pqueue.m"
                          {
#line 756 "pqueue.c"
                            {
#line 758 "pqueue.c"
                              mercury__pqueue__succeeded = mercury__pqueue____Unify____pqueue_2_0(mercury__pqueue__TypeInfo_for_K_17, mercury__pqueue__TypeInfo_for_V_18, mercury__pqueue__V_8_8, mercury__pqueue__V_13_13);
                            }
#line 129 "pqueue.m"
                            if (mercury__pqueue__succeeded)
#line 763 "pqueue.c"
                              {
#line 765 "pqueue.c"
                                /* direct tailcall eliminated */
#line 767 "pqueue.c"
                                {
#line 769 "pqueue.c"
                                  MR_Word mercury__pqueue__HeadVar__1__tmp_copy_1 = mercury__pqueue__V_9_9;
#line 771 "pqueue.c"
                                  MR_Word mercury__pqueue__HeadVar__2__tmp_copy_2 = mercury__pqueue__V_14_14;

#line 774 "pqueue.c"
                                  mercury__pqueue__HeadVar__2_2 = mercury__pqueue__HeadVar__2__tmp_copy_2;
#line 776 "pqueue.c"
                                  mercury__pqueue__HeadVar__1_1 = mercury__pqueue__HeadVar__1__tmp_copy_1;
#line 778 "pqueue.c"
                                }
#line 780 "pqueue.c"
                                continue;
#line 782 "pqueue.c"
                              }
#line 129 "pqueue.m"
                          }
#line 129 "pqueue.m"
                      }
#line 129 "pqueue.m"
                  }
#line 129 "pqueue.m"
              }
#line 129 "pqueue.m"
          }
#line 129 "pqueue.m"
        return mercury__pqueue__succeeded;
#line 129 "pqueue.m"
      }
#line 129 "pqueue.m"
      break;
#line 129 "pqueue.m"
    }
#line 129 "pqueue.m"
}

#line 248 "pqueue.m"
void MR_CALL 
mercury__pqueue__do_merge_3_p_0(
#line 248 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_K_19,
#line 248 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_V_20,
#line 248 "pqueue.m"
  MR_Word mercury__pqueue__A_4,
#line 248 "pqueue.m"
  MR_Word mercury__pqueue__B_5,
#line 248 "pqueue.m"
  MR_Word * mercury__pqueue__C_6)
#line 248 "pqueue.m"
{
#line 255 "pqueue.m"
  {
#line 255 "pqueue.m"
    MR_bool mercury__pqueue__succeeded;

#line 255 "pqueue.m"
    if ((mercury__pqueue__A_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 254 "pqueue.m"
      *mercury__pqueue__C_6 = mercury__pqueue__B_5;
#line 255 "pqueue.m"
    else
#line 256 "pqueue.m"
      {
#line 256 "pqueue.m"
        MR_Box mercury__pqueue__K_8 = (MR_hl_field(MR_mktag(1), mercury__pqueue__A_4, (MR_Integer) 1));
#line 256 "pqueue.m"
        MR_Box mercury__pqueue__V_9 = (MR_hl_field(MR_mktag(1), mercury__pqueue__A_4, (MR_Integer) 2));
#line 256 "pqueue.m"
        MR_Word mercury__pqueue__L_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__A_4, (MR_Integer) 3)));
#line 256 "pqueue.m"
        MR_Word mercury__pqueue__R_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__A_4, (MR_Integer) 4)));
#line 256 "pqueue.m"
        MR_Integer mercury__pqueue__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pqueue__A_4, (MR_Integer) 0)));

#line 260 "pqueue.m"
        if ((mercury__pqueue__B_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 259 "pqueue.m"
          *mercury__pqueue__C_6 = mercury__pqueue__A_4;
#line 260 "pqueue.m"
        else
#line 261 "pqueue.m"
          {
#line 261 "pqueue.m"
            MR_Word mercury__pqueue__C0_17;
#line 261 "pqueue.m"
            MR_Word mercury__pqueue__C1_18;

#line 262 "pqueue.m"
            {
#line 262 "pqueue.m"
              mercury__pqueue__do_merge_3_p_0(mercury__pqueue__TypeInfo_for_K_19, mercury__pqueue__TypeInfo_for_V_20, mercury__pqueue__L_10, mercury__pqueue__B_5, &mercury__pqueue__C0_17);
            }
#line 263 "pqueue.m"
            {
#line 263 "pqueue.m"
              mercury__pqueue__do_merge_3_p_0(mercury__pqueue__TypeInfo_for_K_19, mercury__pqueue__TypeInfo_for_V_20, mercury__pqueue__R_11, mercury__pqueue__C0_17, &mercury__pqueue__C1_18);
            }
#line 264 "pqueue.m"
            {
#line 264 "pqueue.m"
              mercury__pqueue__insert_4_p_0(mercury__pqueue__TypeInfo_for_K_19, mercury__pqueue__TypeInfo_for_V_20, mercury__pqueue__K_8, mercury__pqueue__V_9, mercury__pqueue__C1_18, mercury__pqueue__C_6);
#line 264 "pqueue.m"
              return;
            }
#line 261 "pqueue.m"
          }
#line 256 "pqueue.m"
      }
#line 255 "pqueue.m"
  }
#line 248 "pqueue.m"
}

#line 216 "pqueue.m"
void MR_CALL 
mercury__pqueue__remove_2_3_p_0(
#line 216 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_K_36,
#line 216 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_V_37,
#line 216 "pqueue.m"
  MR_Word mercury__pqueue__HeadVar__1_1,
#line 216 "pqueue.m"
  MR_Word mercury__pqueue__HeadVar__2_2,
#line 216 "pqueue.m"
  MR_Word * mercury__pqueue__HeadVar__3_3)
#line 216 "pqueue.m"
{
#line 219 "pqueue.m"
  {
#line 219 "pqueue.m"
    MR_bool mercury__pqueue__succeeded;

#line 219 "pqueue.m"
    if ((mercury__pqueue__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 219 "pqueue.m"
      if ((mercury__pqueue__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 219 "pqueue.m"
        *mercury__pqueue__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 219 "pqueue.m"
      else
#line 220 "pqueue.m"
        *mercury__pqueue__HeadVar__3_3 = mercury__pqueue__HeadVar__2_2;
#line 219 "pqueue.m"
    else
#line 219 "pqueue.m"
      {
#line 219 "pqueue.m"
        MR_Word mercury__pqueue__V_38_38 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 4)));
#line 219 "pqueue.m"
        MR_Word mercury__pqueue__V_39_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 3)));
#line 219 "pqueue.m"
        MR_Box mercury__pqueue__V_40_40 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 2));
#line 219 "pqueue.m"
        MR_Box mercury__pqueue__V_41_41 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 1));
#line 219 "pqueue.m"
        MR_Integer mercury__pqueue__V_42_42 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 0)));

#line 219 "pqueue.m"
        if ((mercury__pqueue__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 221 "pqueue.m"
          *mercury__pqueue__HeadVar__3_3 = mercury__pqueue__HeadVar__1_1;
#line 219 "pqueue.m"
        else
#line 222 "pqueue.m"
          {
#line 222 "pqueue.m"
            MR_Integer mercury__pqueue__D1_19 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__2_2, (MR_Integer) 0)));
#line 222 "pqueue.m"
            MR_Box mercury__pqueue__K1_20 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__2_2, (MR_Integer) 1));
#line 222 "pqueue.m"
            MR_Box mercury__pqueue__V1_21 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__2_2, (MR_Integer) 2));
#line 222 "pqueue.m"
            MR_Word mercury__pqueue__L1_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__2_2, (MR_Integer) 3)));
#line 222 "pqueue.m"
            MR_Word mercury__pqueue__R1_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__2_2, (MR_Integer) 4)));
#line 222 "pqueue.m"
            MR_Word mercury__pqueue__CMP_25;

#line 223 "pqueue.m"
            {
#line 223 "pqueue.m"
              mercury__builtin__compare_3_p_0(mercury__pqueue__TypeInfo_for_K_36, &mercury__pqueue__CMP_25, mercury__pqueue__V_41_41, mercury__pqueue__K1_20);
            }
#line 224 "pqueue.m"
            mercury__pqueue__succeeded = (mercury__pqueue__CMP_25 == (MR_Integer) 1);
#line 229 "pqueue.m"
            if (mercury__pqueue__succeeded)
#line 225 "pqueue.m"
              {
#line 225 "pqueue.m"
                MR_Integer mercury__pqueue__D0M1_26 = (mercury__pqueue__V_42_42 - (MR_Integer) 1);
#line 225 "pqueue.m"
                MR_Integer mercury__pqueue__D_27;
#line 225 "pqueue.m"
                MR_Word mercury__pqueue__PQ0_28;

#line 213 "int.opt"
                mercury__pqueue__succeeded = (mercury__pqueue__D0M1_26 > mercury__pqueue__D1_19);
#line 216 "int.opt"
                if (mercury__pqueue__succeeded)
#line 215 "int.opt"
                  mercury__pqueue__D_27 = mercury__pqueue__D0M1_26;
#line 216 "int.opt"
                else
#line 217 "int.opt"
                  mercury__pqueue__D_27 = mercury__pqueue__D1_19;
#line 227 "pqueue.m"
                {
#line 227 "pqueue.m"
                  mercury__pqueue__remove_2_3_p_0(mercury__pqueue__TypeInfo_for_K_36, mercury__pqueue__TypeInfo_for_V_37, mercury__pqueue__V_39_39, mercury__pqueue__V_38_38, &mercury__pqueue__PQ0_28);
                }
#line 228 "pqueue.m"
                {
#line 228 "pqueue.m"
                  MR_Word base;
#line 228 "pqueue.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 228 "pqueue.m"
                  *mercury__pqueue__HeadVar__3_3 = base;
#line 228 "pqueue.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pqueue__D_27));
#line 228 "pqueue.m"
                  MR_hl_field(MR_mktag(1), base, 1) = mercury__pqueue__V_41_41;
#line 228 "pqueue.m"
                  MR_hl_field(MR_mktag(1), base, 2) = mercury__pqueue__V_40_40;
#line 228 "pqueue.m"
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__pqueue__PQ0_28));
#line 228 "pqueue.m"
                  MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (mercury__pqueue__HeadVar__2_2));
#line 228 "pqueue.m"
                }
#line 225 "pqueue.m"
              }
#line 229 "pqueue.m"
            else
#line 230 "pqueue.m"
              {
#line 230 "pqueue.m"
                MR_Integer mercury__pqueue__D1M1_29 = (mercury__pqueue__V_42_42 - (MR_Integer) 1);
#line 230 "pqueue.m"
                MR_Word mercury__pqueue__PQ1_30;
#line 230 "pqueue.m"
                MR_Integer mercury__pqueue__D_35;

#line 213 "int.opt"
                mercury__pqueue__succeeded = (mercury__pqueue__D1M1_29 > mercury__pqueue__D1_19);
#line 216 "int.opt"
                if (mercury__pqueue__succeeded)
#line 215 "int.opt"
                  mercury__pqueue__D_35 = mercury__pqueue__D1M1_29;
#line 216 "int.opt"
                else
#line 217 "int.opt"
                  mercury__pqueue__D_35 = mercury__pqueue__D1_19;
#line 232 "pqueue.m"
                {
#line 232 "pqueue.m"
                  mercury__pqueue__remove_2_3_p_0(mercury__pqueue__TypeInfo_for_K_36, mercury__pqueue__TypeInfo_for_V_37, mercury__pqueue__L1_22, mercury__pqueue__R1_23, &mercury__pqueue__PQ1_30);
                }
#line 233 "pqueue.m"
                {
#line 233 "pqueue.m"
                  MR_Word base;
#line 233 "pqueue.m"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 233 "pqueue.m"
                  *mercury__pqueue__HeadVar__3_3 = base;
#line 233 "pqueue.m"
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pqueue__D_35));
#line 233 "pqueue.m"
                  MR_hl_field(MR_mktag(1), base, 1) = mercury__pqueue__K1_20;
#line 233 "pqueue.m"
                  MR_hl_field(MR_mktag(1), base, 2) = mercury__pqueue__V1_21;
#line 233 "pqueue.m"
                  MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__pqueue__PQ1_30));
#line 233 "pqueue.m"
                  MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (mercury__pqueue__HeadVar__1_1));
#line 233 "pqueue.m"
                }
#line 230 "pqueue.m"
              }
#line 222 "pqueue.m"
          }
#line 219 "pqueue.m"
      }
#line 219 "pqueue.m"
  }
#line 216 "pqueue.m"
}

#line 185 "pqueue.m"
static void MR_CALL 
mercury__pqueue__insert_2_6_p_0(
#line 185 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_K_48,
#line 185 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_V_49,
#line 185 "pqueue.m"
  MR_Box mercury__pqueue__K_1,
#line 185 "pqueue.m"
  MR_Box mercury__pqueue__V_2,
#line 185 "pqueue.m"
  MR_Word mercury__pqueue__HeadVar__3_3,
#line 185 "pqueue.m"
  MR_Word mercury__pqueue__HeadVar__4_4,
#line 185 "pqueue.m"
  MR_Word * mercury__pqueue__HeadVar__5_5,
#line 185 "pqueue.m"
  MR_Word * mercury__pqueue__HeadVar__6_6)
#line 185 "pqueue.m"
{
#line 188 "pqueue.m"
  {
#line 188 "pqueue.m"
    MR_bool mercury__pqueue__succeeded;

#line 188 "pqueue.m"
    if ((mercury__pqueue__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 188 "pqueue.m"
      if ((mercury__pqueue__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 188 "pqueue.m"
        {
#line 188 "pqueue.m"
          MR_Word mercury__pqueue__V_10_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 188 "pqueue.m"
          MR_Word mercury__pqueue__V_11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 188 "pqueue.m"
          {
#line 188 "pqueue.m"
            MR_Word base;
#line 188 "pqueue.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 188 "pqueue.m"
            *mercury__pqueue__HeadVar__5_5 = base;
#line 188 "pqueue.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
#line 188 "pqueue.m"
            MR_hl_field(MR_mktag(1), base, 1) = mercury__pqueue__K_1;
#line 188 "pqueue.m"
            MR_hl_field(MR_mktag(1), base, 2) = mercury__pqueue__V_2;
#line 188 "pqueue.m"
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__pqueue__V_10_10));
#line 188 "pqueue.m"
            MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (mercury__pqueue__V_11_11));
#line 188 "pqueue.m"
          }
#line 188 "pqueue.m"
          *mercury__pqueue__HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 188 "pqueue.m"
        }
#line 188 "pqueue.m"
      else
#line 191 "pqueue.m"
        {
#line 191 "pqueue.m"
          MR_Word mercury__pqueue__V_30_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 191 "pqueue.m"
          MR_Word mercury__pqueue__V_31_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 192 "pqueue.m"
          {
#line 192 "pqueue.m"
            MR_Word base;
#line 192 "pqueue.m"
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 192 "pqueue.m"
            *mercury__pqueue__HeadVar__5_5 = base;
#line 192 "pqueue.m"
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
#line 192 "pqueue.m"
            MR_hl_field(MR_mktag(1), base, 1) = mercury__pqueue__K_1;
#line 192 "pqueue.m"
            MR_hl_field(MR_mktag(1), base, 2) = mercury__pqueue__V_2;
#line 192 "pqueue.m"
            MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__pqueue__V_30_30));
#line 192 "pqueue.m"
            MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (mercury__pqueue__V_31_31));
#line 192 "pqueue.m"
          }
#line 192 "pqueue.m"
          *mercury__pqueue__HeadVar__6_6 = mercury__pqueue__HeadVar__4_4;
#line 191 "pqueue.m"
        }
#line 188 "pqueue.m"
    else
#line 188 "pqueue.m"
      {
#line 188 "pqueue.m"
        MR_Integer mercury__pqueue__V_54_54 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__3_3, (MR_Integer) 0)));
#line 189 "pqueue.m"
        MR_Word mercury__pqueue__V_50_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__3_3, (MR_Integer) 4)));
#line 189 "pqueue.m"
        MR_Word mercury__pqueue__V_51_51 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__3_3, (MR_Integer) 3)));
#line 189 "pqueue.m"
        MR_Box mercury__pqueue__V_52_52 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__3_3, (MR_Integer) 2));
#line 189 "pqueue.m"
        MR_Box mercury__pqueue__V_53_53 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__3_3, (MR_Integer) 1));

#line 188 "pqueue.m"
        if ((mercury__pqueue__HeadVar__4_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 189 "pqueue.m"
          {
#line 189 "pqueue.m"
            MR_Word mercury__pqueue__V_20_20;
#line 189 "pqueue.m"
            MR_Word mercury__pqueue__V_21_21;

#line 190 "pqueue.m"
            *mercury__pqueue__HeadVar__5_5 = mercury__pqueue__HeadVar__3_3;
#line 190 "pqueue.m"
            mercury__pqueue__V_20_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 190 "pqueue.m"
            mercury__pqueue__V_21_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 190 "pqueue.m"
            {
#line 190 "pqueue.m"
              MR_Word base;
#line 190 "pqueue.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 190 "pqueue.m"
              *mercury__pqueue__HeadVar__6_6 = base;
#line 190 "pqueue.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
#line 190 "pqueue.m"
              MR_hl_field(MR_mktag(1), base, 1) = mercury__pqueue__K_1;
#line 190 "pqueue.m"
              MR_hl_field(MR_mktag(1), base, 2) = mercury__pqueue__V_2;
#line 190 "pqueue.m"
              MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__pqueue__V_20_20));
#line 190 "pqueue.m"
              MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (mercury__pqueue__V_21_21));
#line 190 "pqueue.m"
            }
#line 189 "pqueue.m"
          }
#line 188 "pqueue.m"
        else
#line 194 "pqueue.m"
          {
#line 194 "pqueue.m"
            MR_Integer mercury__pqueue__D1_39 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__4_4, (MR_Integer) 0)));
#line 194 "pqueue.m"
            MR_Box mercury__pqueue__K1_40 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__4_4, (MR_Integer) 1));
#line 194 "pqueue.m"
            MR_Box mercury__pqueue__V1_41 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__4_4, (MR_Integer) 2));
#line 194 "pqueue.m"
            MR_Word mercury__pqueue__L1_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__4_4, (MR_Integer) 3)));
#line 194 "pqueue.m"
            MR_Word mercury__pqueue__R1_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__4_4, (MR_Integer) 4)));

#line 195 "pqueue.m"
            mercury__pqueue__succeeded = (mercury__pqueue__V_54_54 > mercury__pqueue__D1_39);
#line 198 "pqueue.m"
            if (mercury__pqueue__succeeded)
#line 196 "pqueue.m"
              {
#line 196 "pqueue.m"
                {
#line 196 "pqueue.m"
                  mercury__pqueue__insert_4_p_0(mercury__pqueue__TypeInfo_for_K_48, mercury__pqueue__TypeInfo_for_V_49, mercury__pqueue__K_1, mercury__pqueue__V_2, mercury__pqueue__HeadVar__4_4, mercury__pqueue__HeadVar__6_6);
                }
#line 197 "pqueue.m"
                *mercury__pqueue__HeadVar__5_5 = mercury__pqueue__HeadVar__3_3;
#line 196 "pqueue.m"
              }
#line 198 "pqueue.m"
            else
#line 199 "pqueue.m"
              {
#line 199 "pqueue.m"
                {
#line 199 "pqueue.m"
                  mercury__pqueue__insert_4_p_0(mercury__pqueue__TypeInfo_for_K_48, mercury__pqueue__TypeInfo_for_V_49, mercury__pqueue__K_1, mercury__pqueue__V_2, mercury__pqueue__HeadVar__3_3, mercury__pqueue__HeadVar__5_5);
                }
#line 200 "pqueue.m"
                *mercury__pqueue__HeadVar__6_6 = mercury__pqueue__HeadVar__4_4;
#line 199 "pqueue.m"
              }
#line 194 "pqueue.m"
          }
#line 188 "pqueue.m"
      }
#line 188 "pqueue.m"
  }
#line 185 "pqueue.m"
}

#line 115 "pqueue.m"
MR_Integer MR_CALL 
mercury__pqueue__length_1_f_0(
#line 115 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_K_9,
#line 115 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_V_10,
#line 115 "pqueue.m"
  MR_Word mercury__pqueue__HeadVar__1_1)
#line 115 "pqueue.m"
{
#line 295 "pqueue.m"
  {
#line 295 "pqueue.m"
    MR_bool mercury__pqueue__succeeded;
#line 295 "pqueue.m"
    MR_Integer mercury__pqueue__HeadVar__2_2;

#line 295 "pqueue.m"
    if ((mercury__pqueue__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 295 "pqueue.m"
      mercury__pqueue__HeadVar__2_2 = (MR_Integer) 0;
#line 295 "pqueue.m"
    else
#line 296 "pqueue.m"
      {
#line 296 "pqueue.m"
        MR_Integer mercury__pqueue__D_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 0)));
#line 296 "pqueue.m"
        MR_Box mercury__pqueue__V_4_4 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 1));
#line 296 "pqueue.m"
        MR_Box mercury__pqueue__V_5_5 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 2));
#line 296 "pqueue.m"
        MR_Word mercury__pqueue__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 3)));
#line 296 "pqueue.m"
        MR_Word mercury__pqueue__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 4)));

#line 296 "pqueue.m"
        mercury__pqueue__HeadVar__2_2 = (mercury__pqueue__D_3 + (MR_Integer) 1);
#line 296 "pqueue.m"
      }
#line 295 "pqueue.m"
    return mercury__pqueue__HeadVar__2_2;
#line 295 "pqueue.m"
  }
#line 115 "pqueue.m"
}

#line 109 "pqueue.m"
MR_Word MR_CALL 
mercury__pqueue__from_assoc_list_1_f_0(
#line 109 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_K_5,
#line 109 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_V_6,
#line 109 "pqueue.m"
  MR_Word mercury__pqueue__List_3)
#line 109 "pqueue.m"
{
#line 291 "pqueue.m"
  {
#line 291 "pqueue.m"
    MR_bool mercury__pqueue__succeeded;
#line 291 "pqueue.m"
    MR_Word mercury__pqueue__PQueue_4;

#line 291 "pqueue.m"
    {
#line 291 "pqueue.m"
      mercury__pqueue__assoc_list_to_pqueue_2_p_0(mercury__pqueue__TypeInfo_for_K_5, mercury__pqueue__TypeInfo_for_V_6, mercury__pqueue__List_3, &mercury__pqueue__PQueue_4);
    }
#line 291 "pqueue.m"
    return mercury__pqueue__PQueue_4;
#line 291 "pqueue.m"
  }
#line 109 "pqueue.m"
}

#line 104 "pqueue.m"
void MR_CALL 
mercury__pqueue__assoc_list_to_pqueue_2_p_0(
#line 104 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_K_10,
#line 104 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_V_11,
#line 104 "pqueue.m"
  MR_Word mercury__pqueue__HeadVar__1_1,
#line 104 "pqueue.m"
  MR_Word * mercury__pqueue__Q_2)
#line 104 "pqueue.m"
{
#line 284 "pqueue.m"
  {
#line 284 "pqueue.m"
    MR_bool mercury__pqueue__succeeded;

#line 284 "pqueue.m"
    if ((mercury__pqueue__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 138 "pqueue.m"
      *mercury__pqueue__Q_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 284 "pqueue.m"
    else
#line 286 "pqueue.m"
      {
#line 286 "pqueue.m"
        MR_Box mercury__pqueue__K_4;
#line 286 "pqueue.m"
        MR_Box mercury__pqueue__V_5;
#line 286 "pqueue.m"
        MR_Word mercury__pqueue__L_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 1)));
#line 286 "pqueue.m"
        MR_Word mercury__pqueue__Q0_8;
#line 286 "pqueue.m"
        MR_Word mercury__pqueue__V_9_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 0)));

#line 286 "pqueue.m"
        mercury__pqueue__K_4 = (MR_hl_field(MR_mktag(0), mercury__pqueue__V_9_9, (MR_Integer) 0));
#line 286 "pqueue.m"
        mercury__pqueue__V_5 = (MR_hl_field(MR_mktag(0), mercury__pqueue__V_9_9, (MR_Integer) 1));
#line 287 "pqueue.m"
        {
#line 287 "pqueue.m"
          mercury__pqueue__assoc_list_to_pqueue_2_p_0(mercury__pqueue__TypeInfo_for_K_10, mercury__pqueue__TypeInfo_for_V_11, mercury__pqueue__L_6, &mercury__pqueue__Q0_8);
        }
#line 288 "pqueue.m"
        {
#line 288 "pqueue.m"
          mercury__pqueue__insert_4_p_0(mercury__pqueue__TypeInfo_for_K_10, mercury__pqueue__TypeInfo_for_V_11, mercury__pqueue__K_4, mercury__pqueue__V_5, mercury__pqueue__Q0_8, mercury__pqueue__Q_2);
#line 288 "pqueue.m"
          return;
        }
#line 286 "pqueue.m"
      }
#line 284 "pqueue.m"
  }
#line 104 "pqueue.m"
}

#line 103 "pqueue.m"
MR_Word MR_CALL 
mercury__pqueue__assoc_list_to_pqueue_1_f_0(
#line 103 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_K_5,
#line 103 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_V_6,
#line 103 "pqueue.m"
  MR_Word mercury__pqueue__AL_3)
#line 103 "pqueue.m"
{
#line 282 "pqueue.m"
  {
#line 282 "pqueue.m"
    MR_bool mercury__pqueue__succeeded;
#line 282 "pqueue.m"
    MR_Word mercury__pqueue__PQ2_4;

#line 282 "pqueue.m"
    {
#line 282 "pqueue.m"
      mercury__pqueue__assoc_list_to_pqueue_2_p_0(mercury__pqueue__TypeInfo_for_K_5, mercury__pqueue__TypeInfo_for_V_6, mercury__pqueue__AL_3, &mercury__pqueue__PQ2_4);
    }
#line 282 "pqueue.m"
    return mercury__pqueue__PQ2_4;
#line 282 "pqueue.m"
  }
#line 103 "pqueue.m"
}

#line 97 "pqueue.m"
void MR_CALL 
mercury__pqueue__to_assoc_list_2_p_0(
#line 97 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_K_10,
#line 97 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_V_11,
#line 97 "pqueue.m"
  MR_Word mercury__pqueue__Q0_3,
#line 97 "pqueue.m"
  MR_Word * mercury__pqueue__L_4)
#line 97 "pqueue.m"
{
#line 277 "pqueue.m"
  {
#line 277 "pqueue.m"
    MR_bool mercury__pqueue__succeeded = ((MR_tag((MR_Word) mercury__pqueue__Q0_3)) == (MR_mktag((MR_Integer) 1)));
#line 277 "pqueue.m"
    MR_Box mercury__pqueue__K_5;
#line 277 "pqueue.m"
    MR_Box mercury__pqueue__V_6;
#line 277 "pqueue.m"
    MR_Word mercury__pqueue__Q1_7;
#line 213 "pqueue.m"
    MR_Word mercury__pqueue__L0_16;
#line 213 "pqueue.m"
    MR_Word mercury__pqueue__R0_17;
#line 213 "pqueue.m"
    MR_Integer mercury__pqueue__V_15_15;

#line 213 "pqueue.m"
    if (mercury__pqueue__succeeded)
#line 213 "pqueue.m"
      {
#line 213 "pqueue.m"
        mercury__pqueue__V_15_15 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pqueue__Q0_3, (MR_Integer) 0)));
#line 213 "pqueue.m"
        mercury__pqueue__K_5 = (MR_hl_field(MR_mktag(1), mercury__pqueue__Q0_3, (MR_Integer) 1));
#line 213 "pqueue.m"
        mercury__pqueue__V_6 = (MR_hl_field(MR_mktag(1), mercury__pqueue__Q0_3, (MR_Integer) 2));
#line 213 "pqueue.m"
        mercury__pqueue__L0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__Q0_3, (MR_Integer) 3)));
#line 213 "pqueue.m"
        mercury__pqueue__R0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__Q0_3, (MR_Integer) 4)));
#line 214 "pqueue.m"
        {
#line 214 "pqueue.m"
          mercury__pqueue__remove_2_3_p_0(mercury__pqueue__TypeInfo_for_K_10, mercury__pqueue__TypeInfo_for_V_11, mercury__pqueue__L0_16, mercury__pqueue__R0_17, &mercury__pqueue__Q1_7);
        }
#line 214 "pqueue.m"
        mercury__pqueue__succeeded = MR_TRUE;
#line 213 "pqueue.m"
      }
#line 277 "pqueue.m"
    if (mercury__pqueue__succeeded)
#line 275 "pqueue.m"
      {
#line 275 "pqueue.m"
        MR_Word mercury__pqueue__L0_8;
#line 275 "pqueue.m"
        MR_Word mercury__pqueue__V_9_9;

#line 275 "pqueue.m"
        {
#line 275 "pqueue.m"
          mercury__pqueue__to_assoc_list_2_p_0(mercury__pqueue__TypeInfo_for_K_10, mercury__pqueue__TypeInfo_for_V_11, mercury__pqueue__Q1_7, &mercury__pqueue__L0_8);
        }
#line 276 "pqueue.m"
        {
#line 276 "pqueue.m"
          mercury__pqueue__V_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 276 "pqueue.m"
          MR_hl_field(MR_mktag(0), mercury__pqueue__V_9_9, 0) = mercury__pqueue__K_5;
#line 276 "pqueue.m"
          MR_hl_field(MR_mktag(0), mercury__pqueue__V_9_9, 1) = mercury__pqueue__V_6;
#line 276 "pqueue.m"
        }
#line 276 "pqueue.m"
        {
#line 276 "pqueue.m"
          MR_Word base;
#line 276 "pqueue.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 276 "pqueue.m"
          *mercury__pqueue__L_4 = base;
#line 276 "pqueue.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pqueue__V_9_9));
#line 276 "pqueue.m"
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__pqueue__L0_8));
#line 276 "pqueue.m"
        }
#line 275 "pqueue.m"
      }
#line 277 "pqueue.m"
    else
#line 278 "pqueue.m"
      *mercury__pqueue__L_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 277 "pqueue.m"
  }
#line 97 "pqueue.m"
}

#line 96 "pqueue.m"
MR_Word MR_CALL 
mercury__pqueue__to_assoc_list_1_f_0(
#line 96 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_K_5,
#line 96 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_V_6,
#line 96 "pqueue.m"
  MR_Word mercury__pqueue__PQ_3)
#line 96 "pqueue.m"
{
#line 271 "pqueue.m"
  {
#line 271 "pqueue.m"
    MR_bool mercury__pqueue__succeeded;
#line 271 "pqueue.m"
    MR_Word mercury__pqueue__AL_4;

#line 271 "pqueue.m"
    {
#line 271 "pqueue.m"
      mercury__pqueue__to_assoc_list_2_p_0(mercury__pqueue__TypeInfo_for_K_5, mercury__pqueue__TypeInfo_for_V_6, mercury__pqueue__PQ_3, &mercury__pqueue__AL_4);
    }
#line 271 "pqueue.m"
    return mercury__pqueue__AL_4;
#line 271 "pqueue.m"
  }
#line 96 "pqueue.m"
}

#line 90 "pqueue.m"
void MR_CALL 
mercury__pqueue__merge_3_p_0(
#line 90 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_K_9,
#line 90 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_V_10,
#line 90 "pqueue.m"
  MR_Word mercury__pqueue__A_4,
#line 90 "pqueue.m"
  MR_Word mercury__pqueue__B_5,
#line 90 "pqueue.m"
  MR_Word * mercury__pqueue__C_6)
#line 90 "pqueue.m"
{
#line 244 "pqueue.m"
  {
#line 244 "pqueue.m"
    MR_bool mercury__pqueue__succeeded;
#line 242 "pqueue.m"
    MR_Integer mercury__pqueue__V_7_7;
#line 242 "pqueue.m"
    MR_Integer mercury__pqueue__V_8_8;

#line 295 "pqueue.m"
    if ((mercury__pqueue__A_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 295 "pqueue.m"
      mercury__pqueue__V_7_7 = (MR_Integer) 0;
#line 295 "pqueue.m"
    else
#line 296 "pqueue.m"
      {
#line 296 "pqueue.m"
        MR_Integer mercury__pqueue__D_11 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pqueue__A_4, (MR_Integer) 0)));
#line 296 "pqueue.m"
        MR_Box mercury__pqueue__V_12_12 = (MR_hl_field(MR_mktag(1), mercury__pqueue__A_4, (MR_Integer) 1));
#line 296 "pqueue.m"
        MR_Box mercury__pqueue__V_13_13 = (MR_hl_field(MR_mktag(1), mercury__pqueue__A_4, (MR_Integer) 2));
#line 296 "pqueue.m"
        MR_Word mercury__pqueue__V_14_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__A_4, (MR_Integer) 3)));
#line 296 "pqueue.m"
        MR_Word mercury__pqueue__V_15_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__A_4, (MR_Integer) 4)));

#line 296 "pqueue.m"
        mercury__pqueue__V_7_7 = (mercury__pqueue__D_11 + (MR_Integer) 1);
#line 296 "pqueue.m"
      }
#line 295 "pqueue.m"
    if ((mercury__pqueue__B_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 295 "pqueue.m"
      mercury__pqueue__V_8_8 = (MR_Integer) 0;
#line 295 "pqueue.m"
    else
#line 296 "pqueue.m"
      {
#line 296 "pqueue.m"
        MR_Integer mercury__pqueue__D_17 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pqueue__B_5, (MR_Integer) 0)));
#line 296 "pqueue.m"
        MR_Box mercury__pqueue__V_18_18 = (MR_hl_field(MR_mktag(1), mercury__pqueue__B_5, (MR_Integer) 1));
#line 296 "pqueue.m"
        MR_Box mercury__pqueue__V_19_19 = (MR_hl_field(MR_mktag(1), mercury__pqueue__B_5, (MR_Integer) 2));
#line 296 "pqueue.m"
        MR_Word mercury__pqueue__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__B_5, (MR_Integer) 3)));
#line 296 "pqueue.m"
        MR_Word mercury__pqueue__V_21_21 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__B_5, (MR_Integer) 4)));

#line 296 "pqueue.m"
        mercury__pqueue__V_8_8 = (mercury__pqueue__D_17 + (MR_Integer) 1);
#line 296 "pqueue.m"
      }
#line 242 "pqueue.m"
    mercury__pqueue__succeeded = (mercury__pqueue__V_7_7 <= mercury__pqueue__V_8_8);
#line 244 "pqueue.m"
    if (mercury__pqueue__succeeded)
#line 243 "pqueue.m"
      {
#line 243 "pqueue.m"
        mercury__pqueue__do_merge_3_p_0(mercury__pqueue__TypeInfo_for_K_9, mercury__pqueue__TypeInfo_for_V_10, mercury__pqueue__A_4, mercury__pqueue__B_5, mercury__pqueue__C_6);
#line 243 "pqueue.m"
        return;
      }
#line 244 "pqueue.m"
    else
#line 245 "pqueue.m"
      {
#line 245 "pqueue.m"
        mercury__pqueue__do_merge_3_p_0(mercury__pqueue__TypeInfo_for_K_9, mercury__pqueue__TypeInfo_for_V_10, mercury__pqueue__B_5, mercury__pqueue__A_4, mercury__pqueue__C_6);
#line 245 "pqueue.m"
        return;
      }
#line 244 "pqueue.m"
  }
#line 90 "pqueue.m"
}

#line 89 "pqueue.m"
MR_Word MR_CALL 
mercury__pqueue__merge_2_f_0(
#line 89 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_K_7,
#line 89 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_V_8,
#line 89 "pqueue.m"
  MR_Word mercury__pqueue__A_4,
#line 89 "pqueue.m"
  MR_Word mercury__pqueue__B_5)
#line 89 "pqueue.m"
{
#line 239 "pqueue.m"
  {
#line 239 "pqueue.m"
    MR_bool mercury__pqueue__succeeded;
#line 239 "pqueue.m"
    MR_Word mercury__pqueue__C_6;

#line 239 "pqueue.m"
    {
#line 239 "pqueue.m"
      mercury__pqueue__merge_3_p_0(mercury__pqueue__TypeInfo_for_K_7, mercury__pqueue__TypeInfo_for_V_8, mercury__pqueue__A_4, mercury__pqueue__B_5, &mercury__pqueue__C_6);
    }
#line 239 "pqueue.m"
    return mercury__pqueue__C_6;
#line 239 "pqueue.m"
  }
#line 89 "pqueue.m"
}

#line 83 "pqueue.m"
void MR_CALL 
mercury__pqueue__det_remove_4_p_0(
#line 83 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_K_17,
#line 83 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_V_18,
#line 83 "pqueue.m"
  MR_Box * mercury__pqueue__K_5,
#line 83 "pqueue.m"
  MR_Box * mercury__pqueue__V_6,
#line 83 "pqueue.m"
  MR_Word mercury__pqueue__STATE_VARIABLE_PQ_0_10,
#line 83 "pqueue.m"
  MR_Word * mercury__pqueue__STATE_VARIABLE_PQ_11)
#line 83 "pqueue.m"
{
#line 209 "pqueue.m"
  {
#line 209 "pqueue.m"
    MR_bool mercury__pqueue__succeeded = ((MR_tag((MR_Word) mercury__pqueue__STATE_VARIABLE_PQ_0_10)) == (MR_mktag((MR_Integer) 1)));
#line 209 "pqueue.m"
    MR_Box mercury__pqueue__K0_8;
#line 209 "pqueue.m"
    MR_Box mercury__pqueue__V0_9;
#line 209 "pqueue.m"
    MR_Word mercury__pqueue__STATE_VARIABLE_PQ_12_12;
#line 213 "pqueue.m"
    MR_Word mercury__pqueue__L0_23;
#line 213 "pqueue.m"
    MR_Word mercury__pqueue__R0_24;
#line 213 "pqueue.m"
    MR_Integer mercury__pqueue__V_22_22;

#line 213 "pqueue.m"
    if (mercury__pqueue__succeeded)
#line 213 "pqueue.m"
      {
#line 213 "pqueue.m"
        mercury__pqueue__V_22_22 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pqueue__STATE_VARIABLE_PQ_0_10, (MR_Integer) 0)));
#line 213 "pqueue.m"
        mercury__pqueue__K0_8 = (MR_hl_field(MR_mktag(1), mercury__pqueue__STATE_VARIABLE_PQ_0_10, (MR_Integer) 1));
#line 213 "pqueue.m"
        mercury__pqueue__V0_9 = (MR_hl_field(MR_mktag(1), mercury__pqueue__STATE_VARIABLE_PQ_0_10, (MR_Integer) 2));
#line 213 "pqueue.m"
        mercury__pqueue__L0_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__STATE_VARIABLE_PQ_0_10, (MR_Integer) 3)));
#line 213 "pqueue.m"
        mercury__pqueue__R0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__STATE_VARIABLE_PQ_0_10, (MR_Integer) 4)));
#line 214 "pqueue.m"
        {
#line 214 "pqueue.m"
          mercury__pqueue__remove_2_3_p_0(mercury__pqueue__TypeInfo_for_K_17, mercury__pqueue__TypeInfo_for_V_18, mercury__pqueue__L0_23, mercury__pqueue__R0_24, &mercury__pqueue__STATE_VARIABLE_PQ_12_12);
        }
#line 214 "pqueue.m"
        mercury__pqueue__succeeded = MR_TRUE;
#line 213 "pqueue.m"
      }
#line 209 "pqueue.m"
    if (mercury__pqueue__succeeded)
#line 207 "pqueue.m"
      {
#line 207 "pqueue.m"
        *mercury__pqueue__STATE_VARIABLE_PQ_11 = mercury__pqueue__STATE_VARIABLE_PQ_12_12;
#line 207 "pqueue.m"
        *mercury__pqueue__K_5 = mercury__pqueue__K0_8;
#line 208 "pqueue.m"
        *mercury__pqueue__V_6 = mercury__pqueue__V0_9;
#line 207 "pqueue.m"
      }
#line 209 "pqueue.m"
    else
#line 210 "pqueue.m"
      {
#line 210 "pqueue.m"
        {
#line 210 "pqueue.m"
          mercury__require__unexpected_3_p_0((MR_String) "pqueue.m", (MR_String) "predicate \140pqueue.det_remove\'/4", (MR_String) "empty priority queue");
#line 210 "pqueue.m"
          return;
        }
#line 210 "pqueue.m"
      }
#line 209 "pqueue.m"
  }
#line 83 "pqueue.m"
}

#line 78 "pqueue.m"
MR_bool MR_CALL 
mercury__pqueue__remove_4_p_0(
#line 78 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_K_11,
#line 78 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_V_12,
#line 78 "pqueue.m"
  MR_Box * mercury__pqueue__K_5,
#line 78 "pqueue.m"
  MR_Box * mercury__pqueue__V_6,
#line 78 "pqueue.m"
  MR_Word mercury__pqueue__HeadVar__3_3,
#line 78 "pqueue.m"
  MR_Word * mercury__pqueue__PQ_10)
#line 78 "pqueue.m"
{
#line 213 "pqueue.m"
  {
#line 213 "pqueue.m"
    MR_bool mercury__pqueue__succeeded = ((MR_tag((MR_Word) mercury__pqueue__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
#line 213 "pqueue.m"
    MR_Word mercury__pqueue__L0_8;
#line 213 "pqueue.m"
    MR_Word mercury__pqueue__R0_9;
#line 213 "pqueue.m"
    MR_Integer mercury__pqueue__V_7_7;

#line 213 "pqueue.m"
    if (mercury__pqueue__succeeded)
#line 213 "pqueue.m"
      {
#line 213 "pqueue.m"
        mercury__pqueue__V_7_7 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__3_3, (MR_Integer) 0)));
#line 213 "pqueue.m"
        *mercury__pqueue__K_5 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__3_3, (MR_Integer) 1));
#line 213 "pqueue.m"
        *mercury__pqueue__V_6 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__3_3, (MR_Integer) 2));
#line 213 "pqueue.m"
        mercury__pqueue__L0_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__3_3, (MR_Integer) 3)));
#line 213 "pqueue.m"
        mercury__pqueue__R0_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__3_3, (MR_Integer) 4)));
#line 214 "pqueue.m"
        {
#line 214 "pqueue.m"
          mercury__pqueue__remove_2_3_p_0(mercury__pqueue__TypeInfo_for_K_11, mercury__pqueue__TypeInfo_for_V_12, mercury__pqueue__L0_8, mercury__pqueue__R0_9, mercury__pqueue__PQ_10);
        }
#line 214 "pqueue.m"
        mercury__pqueue__succeeded = MR_TRUE;
#line 213 "pqueue.m"
      }
#line 213 "pqueue.m"
    return mercury__pqueue__succeeded;
#line 213 "pqueue.m"
  }
#line 78 "pqueue.m"
}

#line 73 "pqueue.m"
MR_Box MR_CALL 
mercury__pqueue__det_peek_value_1_f_0(
#line 73 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_K_6,
#line 73 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_V_7,
#line 73 "pqueue.m"
  MR_Word mercury__pqueue__PQ_3)
#line 73 "pqueue.m"
{
#line 163 "pqueue.m"
  {
#line 163 "pqueue.m"
    MR_bool mercury__pqueue__succeeded;
#line 163 "pqueue.m"
    MR_Box mercury__pqueue__V_4;
#line 163 "pqueue.m"
    MR_Box mercury__pqueue__V_5_5;

#line 163 "pqueue.m"
    {
#line 163 "pqueue.m"
      mercury__pqueue__det_peek_3_p_0(mercury__pqueue__TypeInfo_for_K_6, mercury__pqueue__TypeInfo_for_V_7, mercury__pqueue__PQ_3, &mercury__pqueue__V_5_5, &mercury__pqueue__V_4);
    }
#line 163 "pqueue.m"
    return mercury__pqueue__V_4;
#line 163 "pqueue.m"
  }
#line 73 "pqueue.m"
}

#line 72 "pqueue.m"
MR_Box MR_CALL 
mercury__pqueue__det_peek_key_1_f_0(
#line 72 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_K_6,
#line 72 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_V_7,
#line 72 "pqueue.m"
  MR_Word mercury__pqueue__PQ_3)
#line 72 "pqueue.m"
{
#line 161 "pqueue.m"
  {
#line 161 "pqueue.m"
    MR_bool mercury__pqueue__succeeded;
#line 161 "pqueue.m"
    MR_Box mercury__pqueue__K_4;
#line 161 "pqueue.m"
    MR_Box mercury__pqueue__V_5_5;

#line 161 "pqueue.m"
    {
#line 161 "pqueue.m"
      mercury__pqueue__det_peek_3_p_0(mercury__pqueue__TypeInfo_for_K_6, mercury__pqueue__TypeInfo_for_V_7, mercury__pqueue__PQ_3, &mercury__pqueue__K_4, &mercury__pqueue__V_5_5);
    }
#line 161 "pqueue.m"
    return mercury__pqueue__K_4;
#line 161 "pqueue.m"
  }
#line 72 "pqueue.m"
}

#line 71 "pqueue.m"
void MR_CALL 
mercury__pqueue__det_peek_3_p_0(
#line 71 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_K_12,
#line 71 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_V_13,
#line 71 "pqueue.m"
  MR_Word mercury__pqueue__PQ_4,
#line 71 "pqueue.m"
  MR_Box * mercury__pqueue__K_5,
#line 71 "pqueue.m"
  MR_Box * mercury__pqueue__V_6)
#line 71 "pqueue.m"
{
#line 156 "pqueue.m"
  {
#line 156 "pqueue.m"
    MR_bool mercury__pqueue__succeeded = ((MR_tag((MR_Word) mercury__pqueue__PQ_4)) == (MR_mktag((MR_Integer) 1)));
#line 156 "pqueue.m"
    MR_Box mercury__pqueue__KPrime_7;
#line 156 "pqueue.m"
    MR_Box mercury__pqueue__VPrime_8;
#line 146 "pqueue.m"
    MR_Integer mercury__pqueue__V_16_16;
#line 146 "pqueue.m"
    MR_Word mercury__pqueue__V_17_17;
#line 146 "pqueue.m"
    MR_Word mercury__pqueue__V_18_18;

#line 146 "pqueue.m"
    if (mercury__pqueue__succeeded)
#line 146 "pqueue.m"
      {
#line 146 "pqueue.m"
        mercury__pqueue__V_16_16 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pqueue__PQ_4, (MR_Integer) 0)));
#line 146 "pqueue.m"
        mercury__pqueue__KPrime_7 = (MR_hl_field(MR_mktag(1), mercury__pqueue__PQ_4, (MR_Integer) 1));
#line 146 "pqueue.m"
        mercury__pqueue__VPrime_8 = (MR_hl_field(MR_mktag(1), mercury__pqueue__PQ_4, (MR_Integer) 2));
#line 146 "pqueue.m"
        mercury__pqueue__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__PQ_4, (MR_Integer) 3)));
#line 146 "pqueue.m"
        mercury__pqueue__V_18_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__PQ_4, (MR_Integer) 4)));
#line 154 "pqueue.m"
        *mercury__pqueue__K_5 = mercury__pqueue__KPrime_7;
#line 155 "pqueue.m"
        *mercury__pqueue__V_6 = mercury__pqueue__VPrime_8;
#line 146 "pqueue.m"
      }
#line 146 "pqueue.m"
    else
#line 157 "pqueue.m"
      {
#line 157 "pqueue.m"
        {
#line 157 "pqueue.m"
          mercury__require__unexpected_3_p_0((MR_String) "pqueue.m", (MR_String) "predicate \140pqueue.det_peek\'/3", (MR_String) "empty priority queue");
#line 157 "pqueue.m"
          return;
        }
#line 157 "pqueue.m"
      }
#line 156 "pqueue.m"
  }
#line 71 "pqueue.m"
}

#line 67 "pqueue.m"
MR_bool MR_CALL 
mercury__pqueue__peek_value_2_p_0(
#line 67 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_K_8,
#line 67 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_V_9,
#line 67 "pqueue.m"
  MR_Word mercury__pqueue__HeadVar__1_1,
#line 67 "pqueue.m"
  MR_Box * mercury__pqueue__V_5)
#line 67 "pqueue.m"
{
#line 148 "pqueue.m"
  {
#line 148 "pqueue.m"
    MR_bool mercury__pqueue__succeeded = ((MR_tag((MR_Word) mercury__pqueue__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 148 "pqueue.m"
    MR_Integer mercury__pqueue__V_3_3;
#line 148 "pqueue.m"
    MR_Box mercury__pqueue__V_4_4;
#line 148 "pqueue.m"
    MR_Word mercury__pqueue__V_6_6;
#line 148 "pqueue.m"
    MR_Word mercury__pqueue__V_7_7;

#line 148 "pqueue.m"
    if (mercury__pqueue__succeeded)
#line 148 "pqueue.m"
      {
#line 148 "pqueue.m"
        mercury__pqueue__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 0)));
#line 148 "pqueue.m"
        mercury__pqueue__V_4_4 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 1));
#line 148 "pqueue.m"
        *mercury__pqueue__V_5 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 2));
#line 148 "pqueue.m"
        mercury__pqueue__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 3)));
#line 148 "pqueue.m"
        mercury__pqueue__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 4)));
#line 148 "pqueue.m"
      }
#line 148 "pqueue.m"
    return mercury__pqueue__succeeded;
#line 148 "pqueue.m"
  }
#line 67 "pqueue.m"
}

#line 62 "pqueue.m"
MR_bool MR_CALL 
mercury__pqueue__peek_key_2_p_0(
#line 62 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_K_8,
#line 62 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_V_9,
#line 62 "pqueue.m"
  MR_Word mercury__pqueue__HeadVar__1_1,
#line 62 "pqueue.m"
  MR_Box * mercury__pqueue__K_4)
#line 62 "pqueue.m"
{
#line 147 "pqueue.m"
  {
#line 147 "pqueue.m"
    MR_bool mercury__pqueue__succeeded = ((MR_tag((MR_Word) mercury__pqueue__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 147 "pqueue.m"
    MR_Integer mercury__pqueue__V_3_3;
#line 147 "pqueue.m"
    MR_Box mercury__pqueue__V_5_5;
#line 147 "pqueue.m"
    MR_Word mercury__pqueue__V_6_6;
#line 147 "pqueue.m"
    MR_Word mercury__pqueue__V_7_7;

#line 147 "pqueue.m"
    if (mercury__pqueue__succeeded)
#line 147 "pqueue.m"
      {
#line 147 "pqueue.m"
        mercury__pqueue__V_3_3 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 0)));
#line 147 "pqueue.m"
        *mercury__pqueue__K_4 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 1));
#line 147 "pqueue.m"
        mercury__pqueue__V_5_5 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 2));
#line 147 "pqueue.m"
        mercury__pqueue__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 3)));
#line 147 "pqueue.m"
        mercury__pqueue__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 4)));
#line 147 "pqueue.m"
      }
#line 147 "pqueue.m"
    return mercury__pqueue__succeeded;
#line 147 "pqueue.m"
  }
#line 62 "pqueue.m"
}

#line 57 "pqueue.m"
MR_bool MR_CALL 
mercury__pqueue__peek_3_p_0(
#line 57 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_K_9,
#line 57 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_V_10,
#line 57 "pqueue.m"
  MR_Word mercury__pqueue__HeadVar__1_1,
#line 57 "pqueue.m"
  MR_Box * mercury__pqueue__K_5,
#line 57 "pqueue.m"
  MR_Box * mercury__pqueue__V_6)
#line 57 "pqueue.m"
{
#line 146 "pqueue.m"
  {
#line 146 "pqueue.m"
    MR_bool mercury__pqueue__succeeded = ((MR_tag((MR_Word) mercury__pqueue__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1)));
#line 146 "pqueue.m"
    MR_Integer mercury__pqueue__V_4_4;
#line 146 "pqueue.m"
    MR_Word mercury__pqueue__V_7_7;
#line 146 "pqueue.m"
    MR_Word mercury__pqueue__V_8_8;

#line 146 "pqueue.m"
    if (mercury__pqueue__succeeded)
#line 146 "pqueue.m"
      {
#line 146 "pqueue.m"
        mercury__pqueue__V_4_4 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 0)));
#line 146 "pqueue.m"
        *mercury__pqueue__K_5 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 1));
#line 146 "pqueue.m"
        *mercury__pqueue__V_6 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 2));
#line 146 "pqueue.m"
        mercury__pqueue__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 3)));
#line 146 "pqueue.m"
        mercury__pqueue__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__1_1, (MR_Integer) 4)));
#line 146 "pqueue.m"
      }
#line 146 "pqueue.m"
    return mercury__pqueue__succeeded;
#line 146 "pqueue.m"
  }
#line 57 "pqueue.m"
}

#line 51 "pqueue.m"
void MR_CALL 
mercury__pqueue__insert_4_p_0(
#line 51 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_K_25,
#line 51 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_V_26,
#line 51 "pqueue.m"
  MR_Box mercury__pqueue__K_1,
#line 51 "pqueue.m"
  MR_Box mercury__pqueue__V_2,
#line 51 "pqueue.m"
  MR_Word mercury__pqueue__HeadVar__3_3,
#line 51 "pqueue.m"
  MR_Word * mercury__pqueue__HeadVar__4_4)
#line 51 "pqueue.m"
{
#line 170 "pqueue.m"
  {
#line 170 "pqueue.m"
    MR_bool mercury__pqueue__succeeded;

#line 170 "pqueue.m"
    if ((mercury__pqueue__HeadVar__3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 170 "pqueue.m"
      {
#line 170 "pqueue.m"
        MR_Word mercury__pqueue__V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 170 "pqueue.m"
        MR_Word mercury__pqueue__V_9_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 170 "pqueue.m"
        {
#line 170 "pqueue.m"
          MR_Word base;
#line 170 "pqueue.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 170 "pqueue.m"
          *mercury__pqueue__HeadVar__4_4 = base;
#line 170 "pqueue.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) ((MR_Integer) 0));
#line 170 "pqueue.m"
          MR_hl_field(MR_mktag(1), base, 1) = mercury__pqueue__K_1;
#line 170 "pqueue.m"
          MR_hl_field(MR_mktag(1), base, 2) = mercury__pqueue__V_2;
#line 170 "pqueue.m"
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__pqueue__V_8_8));
#line 170 "pqueue.m"
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (mercury__pqueue__V_9_9));
#line 170 "pqueue.m"
        }
#line 170 "pqueue.m"
      }
#line 170 "pqueue.m"
    else
#line 171 "pqueue.m"
      {
#line 171 "pqueue.m"
        MR_Integer mercury__pqueue__D0_12 = ((MR_Integer) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__3_3, (MR_Integer) 0)));
#line 171 "pqueue.m"
        MR_Box mercury__pqueue__K0_13 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__3_3, (MR_Integer) 1));
#line 171 "pqueue.m"
        MR_Box mercury__pqueue__V0_14 = (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__3_3, (MR_Integer) 2));
#line 171 "pqueue.m"
        MR_Word mercury__pqueue__L0_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__3_3, (MR_Integer) 3)));
#line 171 "pqueue.m"
        MR_Word mercury__pqueue__R0_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__pqueue__HeadVar__3_3, (MR_Integer) 4)));
#line 171 "pqueue.m"
        MR_Integer mercury__pqueue__D_18 = (mercury__pqueue__D0_12 + (MR_Integer) 1);
#line 171 "pqueue.m"
        MR_Word mercury__pqueue__CMP_19;
#line 171 "pqueue.m"
        MR_Box mercury__pqueue__K1_20;
#line 171 "pqueue.m"
        MR_Box mercury__pqueue__V1_21;
#line 171 "pqueue.m"
        MR_Word mercury__pqueue__L_22;
#line 171 "pqueue.m"
        MR_Word mercury__pqueue__R_23;

#line 173 "pqueue.m"
        {
#line 173 "pqueue.m"
          mercury__builtin__compare_3_p_0(mercury__pqueue__TypeInfo_for_K_25, &mercury__pqueue__CMP_19, mercury__pqueue__K_1, mercury__pqueue__K0_13);
        }
#line 174 "pqueue.m"
        mercury__pqueue__succeeded = (mercury__pqueue__CMP_19 == (MR_Integer) 1);
#line 178 "pqueue.m"
        if (mercury__pqueue__succeeded)
#line 175 "pqueue.m"
          {
#line 175 "pqueue.m"
            mercury__pqueue__K1_20 = mercury__pqueue__K_1;
#line 176 "pqueue.m"
            mercury__pqueue__V1_21 = mercury__pqueue__V_2;
#line 177 "pqueue.m"
            {
#line 177 "pqueue.m"
              mercury__pqueue__insert_2_6_p_0(mercury__pqueue__TypeInfo_for_K_25, mercury__pqueue__TypeInfo_for_V_26, mercury__pqueue__K0_13, mercury__pqueue__V0_14, mercury__pqueue__L0_15, mercury__pqueue__R0_16, &mercury__pqueue__L_22, &mercury__pqueue__R_23);
            }
#line 175 "pqueue.m"
          }
#line 178 "pqueue.m"
        else
#line 179 "pqueue.m"
          {
#line 179 "pqueue.m"
            mercury__pqueue__K1_20 = mercury__pqueue__K0_13;
#line 180 "pqueue.m"
            mercury__pqueue__V1_21 = mercury__pqueue__V0_14;
#line 181 "pqueue.m"
            {
#line 181 "pqueue.m"
              mercury__pqueue__insert_2_6_p_0(mercury__pqueue__TypeInfo_for_K_25, mercury__pqueue__TypeInfo_for_V_26, mercury__pqueue__K_1, mercury__pqueue__V_2, mercury__pqueue__L0_15, mercury__pqueue__R0_16, &mercury__pqueue__L_22, &mercury__pqueue__R_23);
            }
#line 179 "pqueue.m"
          }
#line 183 "pqueue.m"
        {
#line 183 "pqueue.m"
          MR_Word base;
#line 183 "pqueue.m"
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL));
#line 183 "pqueue.m"
          *mercury__pqueue__HeadVar__4_4 = base;
#line 183 "pqueue.m"
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__pqueue__D_18));
#line 183 "pqueue.m"
          MR_hl_field(MR_mktag(1), base, 1) = mercury__pqueue__K1_20;
#line 183 "pqueue.m"
          MR_hl_field(MR_mktag(1), base, 2) = mercury__pqueue__V1_21;
#line 183 "pqueue.m"
          MR_hl_field(MR_mktag(1), base, 3) = ((MR_Box) (mercury__pqueue__L_22));
#line 183 "pqueue.m"
          MR_hl_field(MR_mktag(1), base, 4) = ((MR_Box) (mercury__pqueue__R_23));
#line 183 "pqueue.m"
        }
#line 171 "pqueue.m"
      }
#line 170 "pqueue.m"
  }
#line 51 "pqueue.m"
}

#line 50 "pqueue.m"
MR_Word MR_CALL 
mercury__pqueue__insert_3_f_0(
#line 50 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_K_11,
#line 50 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_V_12,
#line 50 "pqueue.m"
  MR_Word mercury__pqueue__STATE_VARIABLE_PQ_0_8,
#line 50 "pqueue.m"
  MR_Box mercury__pqueue__K_6,
#line 50 "pqueue.m"
  MR_Box mercury__pqueue__V_7)
#line 50 "pqueue.m"
{
#line 168 "pqueue.m"
  {
#line 168 "pqueue.m"
    MR_bool mercury__pqueue__succeeded;
#line 168 "pqueue.m"
    MR_Word mercury__pqueue__STATE_VARIABLE_PQ_9;

#line 168 "pqueue.m"
    {
#line 168 "pqueue.m"
      mercury__pqueue__insert_4_p_0(mercury__pqueue__TypeInfo_for_K_11, mercury__pqueue__TypeInfo_for_V_12, mercury__pqueue__K_6, mercury__pqueue__V_7, mercury__pqueue__STATE_VARIABLE_PQ_0_8, &mercury__pqueue__STATE_VARIABLE_PQ_9);
    }
#line 168 "pqueue.m"
    return mercury__pqueue__STATE_VARIABLE_PQ_9;
#line 168 "pqueue.m"
  }
#line 50 "pqueue.m"
}

#line 45 "pqueue.m"
MR_bool MR_CALL 
mercury__pqueue__is_empty_1_p_0(
#line 45 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_K_2,
#line 45 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_V_3,
#line 45 "pqueue.m"
  MR_Word mercury__pqueue__HeadVar__1_1)
#line 45 "pqueue.m"
{
#line 142 "pqueue.m"
  {
#line 142 "pqueue.m"
    MR_bool mercury__pqueue__succeeded = (mercury__pqueue__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 142 "pqueue.m"
    return mercury__pqueue__succeeded;
#line 142 "pqueue.m"
  }
#line 45 "pqueue.m"
}

#line 41 "pqueue.m"
void MR_CALL 
mercury__pqueue__init_1_p_0(
#line 41 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_K_2,
#line 41 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_V_3,
#line 41 "pqueue.m"
  MR_Word * mercury__pqueue__HeadVar__1_1)
#line 41 "pqueue.m"
{
#line 138 "pqueue.m"
  {
#line 138 "pqueue.m"
    MR_bool mercury__pqueue__succeeded;

#line 138 "pqueue.m"
    *mercury__pqueue__HeadVar__1_1 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 138 "pqueue.m"
  }
#line 41 "pqueue.m"
}

#line 40 "pqueue.m"
MR_Word MR_CALL 
mercury__pqueue__init_0_f_0(
#line 40 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_K_3,
#line 40 "pqueue.m"
  MR_Word mercury__pqueue__TypeInfo_for_V_4)
#line 40 "pqueue.m"
{
#line 138 "pqueue.m"
  {
#line 138 "pqueue.m"
    MR_bool mercury__pqueue__succeeded;
#line 138 "pqueue.m"
    MR_Word mercury__pqueue__PQ_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 138 "pqueue.m"
    return mercury__pqueue__PQ_2;
#line 138 "pqueue.m"
  }
#line 40 "pqueue.m"
}

void mercury__pqueue__init(void)
{
}

void mercury__pqueue__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__pqueue__pqueue__type_ctor_info_pqueue_2);
}

void mercury__pqueue__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module pqueue. */
