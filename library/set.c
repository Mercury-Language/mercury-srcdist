/*
** Automatically generated from `set.m'
** by the Mercury compiler,
** version 14.01.2-beta-2015-02-18, configured for x86_64-apple-darwin13.4.0.
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
#include "term_io.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "stream.string_writer.mih"



#line 237 "set.m"
struct mercury__set__map_3_p_4_env_0_s {
#line 237 "set.m"
  MR_Word mercury__set__map_3_p_4_env_0__TypeInfo_for_T2_10;
#line 237 "set.m"
  MR_Word * mercury__set__map_3_p_4_env_0__S2_6;
#line 237 "set.m"
  MR_Cont mercury__set__map_3_p_4_env_0__cont;
#line 237 "set.m"
  void * mercury__set__map_3_p_4_env_0__cont_env_ptr;
#line 676 "set.m"
  MR_Word mercury__set__map_3_p_4_env_0__L2_8;
#line 676 "set.m"
  MR_Word mercury__set__map_3_p_4_env_0__List_4_17;
#line 676 "set.m"
  MR_Integer mercury__set__map_3_p_4_env_0__V_5_20;
#line 676 "set.m"
  MR_Integer mercury__set__map_3_p_4_env_0__V_5_25;
#line 237 "set.m"
};

#line 236 "set.m"
struct mercury__set__map_3_p_3_env_0_s {
#line 236 "set.m"
  MR_Word mercury__set__map_3_p_3_env_0__TypeInfo_for_T2_10;
#line 236 "set.m"
  MR_Word * mercury__set__map_3_p_3_env_0__S2_6;
#line 236 "set.m"
  MR_Cont mercury__set__map_3_p_3_env_0__cont;
#line 236 "set.m"
  void * mercury__set__map_3_p_3_env_0__cont_env_ptr;
#line 676 "set.m"
  MR_Word mercury__set__map_3_p_3_env_0__L2_8;
#line 676 "set.m"
  MR_Word mercury__set__map_3_p_3_env_0__List_4_17;
#line 676 "set.m"
  MR_Integer mercury__set__map_3_p_3_env_0__V_5_20;
#line 676 "set.m"
  MR_Integer mercury__set__map_3_p_3_env_0__V_5_25;
#line 236 "set.m"
};


#line 127 "set.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__set__set_ordlist__pti_set_ordlist_1__pseudo_1;

#line 130 "set.c"
static MR_bool MR_CALL 
mercury__set____Unify____set_1_0_10001(
#line 133 "set.c"
  MR_Box mercury__set__wrapper_arg_1,
#line 135 "set.c"
  MR_Box mercury__set__wrapper_arg_2,
#line 137 "set.c"
  MR_Box mercury__set__wrapper_arg_3);

#line 140 "set.c"
static void MR_CALL 
mercury__set____Compare____set_1_0_10001(
#line 143 "set.c"
  MR_Box mercury__set__wrapper_arg_1,
#line 145 "set.c"
  MR_Box * mercury__set__wrapper_arg_2,
#line 147 "set.c"
  MR_Box mercury__set__wrapper_arg_3,
#line 149 "set.c"
  MR_Box mercury__set__wrapper_arg_4);

#line 107 "list.int"
static void MR_CALL 
mercury__set__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(
#line 107 "list.int"
  MR_Word mercury__set__V_16_16,
#line 107 "list.int"
  MR_Word mercury__set__HeadVar__2_2,
#line 107 "list.int"
  MR_Word * mercury__set__HeadVar__3_3);

#line 129 "list.int"
static void MR_CALL 
mercury__set__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
#line 129 "list.int"
  MR_Word mercury__set__V_18_18,
#line 129 "list.int"
  MR_Word mercury__set__HeadVar__2_2,
#line 129 "list.int"
  MR_Box mercury__set__HeadVar__3_3,
#line 129 "list.int"
  MR_Box * mercury__set__HeadVar__4_4);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__set__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 676 "set.m"
static void MR_CALL 
mercury__set__map_3_p_4_1(
#line 676 "set.m"
  void * mercury__set__env_ptr_arg);

#line 676 "set.m"
static void MR_CALL 
mercury__set__map_3_p_3_1(
#line 676 "set.m"
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
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
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
#include "type_desc.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
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



#line 552 "set.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__set__set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 560 "set.c"
const MR_TypeCtorInfo_Struct mercury__set__set__type_ctor_info_set_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__set____Unify____set_1_0_10001)),
  ((MR_Box) (mercury__set____Compare____set_1_0_10001)),
  (MR_String) "set",
  (MR_String) "set",
  {
    NULL
  },
  {
    (MR_PseudoTypeInfo) &mercury__set__set_ordlist__pti_set_ordlist_1__pseudo_1
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 581 "set.c"
static MR_bool MR_CALL 
mercury__set____Unify____set_1_0_10001(
#line 584 "set.c"
  MR_Box mercury__set__wrapper_arg_1,
#line 586 "set.c"
  MR_Box mercury__set__wrapper_arg_2,
#line 588 "set.c"
  MR_Box mercury__set__wrapper_arg_3)
#line 590 "set.c"
{
#line 592 "set.c"
  {
#line 594 "set.c"
    MR_bool mercury__set__succeeded;

#line 597 "set.c"
    {
#line 599 "set.c"
      mercury__set__succeeded = mercury__set____Unify____set_1_0(((MR_Word) mercury__set__wrapper_arg_1), ((MR_Word) mercury__set__wrapper_arg_2), ((MR_Word) mercury__set__wrapper_arg_3));
    }
#line 602 "set.c"
    return mercury__set__succeeded;
#line 604 "set.c"
  }
#line 606 "set.c"
}

#line 609 "set.c"
static void MR_CALL 
mercury__set____Compare____set_1_0_10001(
#line 612 "set.c"
  MR_Box mercury__set__wrapper_arg_1,
#line 614 "set.c"
  MR_Box * mercury__set__wrapper_arg_2,
#line 616 "set.c"
  MR_Box mercury__set__wrapper_arg_3,
#line 618 "set.c"
  MR_Box mercury__set__wrapper_arg_4)
#line 620 "set.c"
{
#line 622 "set.c"
  {
#line 624 "set.c"
    MR_Word mercury__set__conv0_HeadVar__1_1;

#line 627 "set.c"
    {
#line 629 "set.c"
      mercury__set____Compare____set_1_0(((MR_Word) mercury__set__wrapper_arg_1), &mercury__set__conv0_HeadVar__1_1, ((MR_Word) mercury__set__wrapper_arg_3), ((MR_Word) mercury__set__wrapper_arg_4));
    }
#line 632 "set.c"
    *mercury__set__wrapper_arg_2 = ((MR_Box) (mercury__set__conv0_HeadVar__1_1));
#line 634 "set.c"
  }
#line 636 "set.c"
}

#line 107 "list.int"
static void MR_CALL 
mercury__set__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(
#line 107 "list.int"
  MR_Word mercury__set__V_16_16,
#line 107 "list.int"
  MR_Word mercury__set__HeadVar__2_2,
#line 107 "list.int"
  MR_Word * mercury__set__HeadVar__3_3)
#line 107 "list.int"
{
#line 648 "list.opt"
  while (MR_TRUE)
#line 648 "list.opt"
    {
#line 648 "list.opt"
      /* tailcall optimized into a loop */
#line 648 "list.opt"
      {
#line 648 "list.opt"
        MR_bool mercury__set__succeeded;

#line 648 "list.opt"
        if ((mercury__set__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 648 "list.opt"
          *mercury__set__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 648 "list.opt"
        else
#line 649 "list.opt"
          {
#line 649 "list.opt"
            MR_Box mercury__set__H0_6_6 = (MR_hl_field(MR_mktag(1), mercury__set__HeadVar__2_2, (MR_Integer) 0));
#line 649 "list.opt"
            MR_Word mercury__set__T0_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set__HeadVar__2_2, (MR_Integer) 1)));
#line 655 "list.opt"
            MR_Box mercury__set__H_9_9;
#line 662 "list.opt"
            MR_bool MR_CALL (* mercury__set__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__set__V_16_16, (MR_Integer) 1)));

#line 662 "list.opt"
            {
#line 662 "list.opt"
              mercury__set__succeeded = mercury__set__func_0(((MR_Box) mercury__set__V_16_16), mercury__set__H0_6_6, &mercury__set__H_9_9);
            }
#line 655 "list.opt"
            if (mercury__set__succeeded)
#line 653 "list.opt"
              {
#line 653 "list.opt"
                MR_Word mercury__set__TrueTail_10_10;

#line 653 "list.opt"
                {
#line 653 "list.opt"
                  mercury__set__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(mercury__set__V_16_16, mercury__set__T0_7_7, &mercury__set__TrueTail_10_10);
                }
#line 654 "list.opt"
                {
#line 654 "list.opt"
                  MR_Word base;
#line 654 "list.opt"
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 654 "list.opt"
                  *mercury__set__HeadVar__3_3 = base;
#line 654 "list.opt"
                  MR_hl_field(MR_mktag(1), base, 0) = mercury__set__H_9_9;
#line 654 "list.opt"
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__set__TrueTail_10_10));
#line 654 "list.opt"
                }
#line 653 "list.opt"
              }
#line 655 "list.opt"
            else
#line 656 "list.opt"
              {
#line 656 "list.opt"
                /* direct tailcall eliminated */
#line 656 "list.opt"
                {
#line 656 "list.opt"
                  MR_Word mercury__set__HeadVar__2__tmp_copy_2 = mercury__set__T0_7_7;

#line 656 "list.opt"
                  mercury__set__HeadVar__2_2 = mercury__set__HeadVar__2__tmp_copy_2;
#line 656 "list.opt"
                }
#line 656 "list.opt"
                continue;
#line 656 "list.opt"
              }
#line 649 "list.opt"
          }
#line 648 "list.opt"
      }
#line 648 "list.opt"
      break;
#line 648 "list.opt"
    }
#line 107 "list.int"
}

#line 129 "list.int"
static void MR_CALL 
mercury__set__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(
#line 129 "list.int"
  MR_Word mercury__set__V_18_18,
#line 129 "list.int"
  MR_Word mercury__set__HeadVar__2_2,
#line 129 "list.int"
  MR_Box mercury__set__HeadVar__3_3,
#line 129 "list.int"
  MR_Box * mercury__set__HeadVar__4_4)
#line 129 "list.int"
{
#line 332 "list.opt"
  while (MR_TRUE)
#line 332 "list.opt"
    {
#line 332 "list.opt"
      /* tailcall optimized into a loop */
#line 332 "list.opt"
      {
#line 332 "list.opt"
        MR_bool mercury__set__succeeded;

#line 332 "list.opt"
        if ((mercury__set__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 332 "list.opt"
          *mercury__set__HeadVar__4_4 = mercury__set__HeadVar__3_3;
#line 332 "list.opt"
        else
#line 334 "list.opt"
          {
#line 334 "list.opt"
            MR_Box mercury__set__H_10_9 = (MR_hl_field(MR_mktag(1), mercury__set__HeadVar__2_2, (MR_Integer) 0));
#line 334 "list.opt"
            MR_Word mercury__set__T_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set__HeadVar__2_2, (MR_Integer) 1)));
#line 334 "list.opt"
            MR_Box mercury__set__STATE_VARIABLE_A_15_15_13;
#line 342 "list.opt"
            MR_Box MR_CALL (* mercury__set__func_0)(MR_Box, MR_Box, MR_Box) = ((MR_Box MR_CALL (*)(MR_Box, MR_Box, MR_Box)) (MR_hl_field(MR_mktag(0), mercury__set__V_18_18, (MR_Integer) 1)));

#line 342 "list.opt"
            {
#line 342 "list.opt"
              mercury__set__STATE_VARIABLE_A_15_15_13 = mercury__set__func_0(((MR_Box) mercury__set__V_18_18), mercury__set__H_10_9, mercury__set__HeadVar__3_3);
            }
#line 336 "list.opt"
            /* direct tailcall eliminated */
#line 336 "list.opt"
            {
#line 336 "list.opt"
              MR_Word mercury__set__HeadVar__2__tmp_copy_2 = mercury__set__T_11_10;
#line 336 "list.opt"
              MR_Box mercury__set__HeadVar__3__tmp_copy_3 = mercury__set__STATE_VARIABLE_A_15_15_13;

#line 336 "list.opt"
              mercury__set__HeadVar__3_3 = mercury__set__HeadVar__3__tmp_copy_3;
#line 336 "list.opt"
              mercury__set__HeadVar__2_2 = mercury__set__HeadVar__2__tmp_copy_2;
#line 336 "list.opt"
            }
#line 336 "list.opt"
            continue;
#line 334 "list.opt"
          }
#line 332 "list.opt"
      }
#line 332 "list.opt"
      break;
#line 332 "list.opt"
    }
#line 129 "list.int"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__set__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__set__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
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
#line 552 "set.m"
  {
#line 552 "set.m"
    MR_bool mercury__set__succeeded;
#line 552 "set.m"
    MR_Word mercury__set__List_4_9;
#line 552 "set.m"
    MR_Integer mercury__set__V_5_13;

#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__set__TypeInfo_for_T_5, (MR_Word) mercury__set__List_3, (MR_Integer) 0, &mercury__set__V_5_13);
    }
#line 110 "list.opt"
    {
#line 110 "list.opt"
      mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__set__V_7_7, mercury__set__TypeInfo_for_T_5, mercury__set__V_5_13, mercury__set__List_3, &mercury__set__List_4_9);
    }
#line 26 "set_ordlist.opt"
    *mercury__set__Set_4 = (MR_Word) mercury__set__List_4_9;
#line 552 "set.m"
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
#line 546 "set.m"
  {
#line 546 "set.m"
    MR_bool mercury__set__succeeded;
#line 546 "set.m"
    MR_Word mercury__set__S_4;
#line 546 "set.m"
    MR_Word mercury__set__List_4_12;
#line 546 "set.m"
    MR_Integer mercury__set__V_5_16;

#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__set__TypeInfo_for_T_5, (MR_Word) mercury__set__Xs_3, (MR_Integer) 0, &mercury__set__V_5_16);
    }
#line 110 "list.opt"
    {
#line 110 "list.opt"
      mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__set__V_7_7, mercury__set__TypeInfo_for_T_5, mercury__set__V_5_16, mercury__set__Xs_3, &mercury__set__List_4_12);
    }
#line 26 "set_ordlist.opt"
    mercury__set__S_4 = (MR_Word) mercury__set__List_4_12;
#line 546 "set.m"
    return mercury__set__S_4;
#line 546 "set.m"
  }
#line 39 "set.m"
}

#line 100 "set.m"
MR_bool MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(
#line 100 "set.m"
  MR_Word mercury__set__V_11_11,
#line 100 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_8,
#line 100 "set.m"
  MR_Word mercury__set__X_1,
#line 100 "set.m"
  MR_Word mercury__set__Set_2)
#line 100 "set.m"
{
#line 604 "set.m"
  {
#line 604 "set.m"
    MR_bool mercury__set__succeeded;
#line 604 "set.m"
    MR_Word mercury__set__V_9_9;
#line 604 "set.m"
    MR_Word mercury__set__L_5_14 = (MR_Word) mercury__set__Set_2;

#line 64 "set_ordlist.opt"
    {
#line 64 "set_ordlist.opt"
      mercury__set_ordlist__is_member_2_3_p_0(mercury__set__TypeInfo_for_T_8, ((MR_Box) (mercury__set__X_1)), (MR_Word) mercury__set__L_5_14, &mercury__set__V_9_9);
    }
#line 605 "set.m"
    mercury__set__succeeded = ((MR_Integer) 1 == mercury__set__V_9_9);
#line 604 "set.m"
    return mercury__set__succeeded;
#line 604 "set.m"
  }
#line 100 "set.m"
}

#line 110 "set.m"
MR_bool MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_99_111_110_116_97_105_110_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(
#line 110 "set.m"
  MR_Word mercury__set__V_7_7,
#line 110 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_5,
#line 110 "set.m"
  MR_Word mercury__set__Set_3,
#line 110 "set.m"
  MR_Word mercury__set__X_4)
#line 110 "set.m"
{
#line 66 "set_ordlist.opt"
  {
#line 66 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;

#line 66 "set_ordlist.opt"
    {
#line 66 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__set_ordlist__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_109_98_101_114_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_p_0(mercury__set__V_7_7, mercury__set__TypeInfo_for_T_5, mercury__set__X_4, mercury__set__Set_3);
    }
#line 66 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 66 "set_ordlist.opt"
  }
#line 110 "set.m"
}

#line 116 "set.m"
void MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
#line 116 "set.m"
  MR_Word mercury__set__V_11_11,
#line 116 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_9,
#line 116 "set.m"
  MR_Word mercury__set__X_4,
#line 116 "set.m"
  MR_Word mercury__set__STATE_VARIABLE_Set_0_6,
#line 116 "set.m"
  MR_Word * mercury__set__STATE_VARIABLE_Set_7)
#line 116 "set.m"
{
#line 579 "set.m"
  {
#line 579 "set.m"
    MR_bool mercury__set__succeeded;
#line 579 "set.m"
    MR_Word mercury__set__List0_5_13 = (MR_Word) mercury__set__STATE_VARIABLE_Set_0_6;
#line 579 "set.m"
    MR_Word mercury__set__List_6_14;
#line 68 "set_ordlist.opt"
    MR_Word mercury__set__conv0_List_6_14;

#line 68 "set_ordlist.opt"
    {
#line 68 "set_ordlist.opt"
      mercury__set_ordlist__insert_2_3_p_0(mercury__set__TypeInfo_for_T_9, (MR_Word) mercury__set__List0_5_13, ((MR_Box) (mercury__set__X_4)), &mercury__set__conv0_List_6_14);
    }
#line 68 "set_ordlist.opt"
    mercury__set__List_6_14 = (MR_Word) mercury__set__conv0_List_6_14;
#line 67 "set_ordlist.opt"
    *mercury__set__STATE_VARIABLE_Set_7 = (MR_Word) mercury__set__List_6_14;
#line 579 "set.m"
  }
#line 116 "set.m"
}

#line 115 "set.m"
MR_Word MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(
#line 115 "set.m"
  MR_Word mercury__set__V_9_9,
#line 115 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_7,
#line 115 "set.m"
  MR_Word mercury__set__S1_4,
#line 115 "set.m"
  MR_Word mercury__set__T_5)
#line 115 "set.m"
{
#line 576 "set.m"
  {
#line 576 "set.m"
    MR_bool mercury__set__succeeded;
#line 576 "set.m"
    MR_Word mercury__set__S2_6;
#line 576 "set.m"
    MR_Word mercury__set__List0_5_17 = (MR_Word) mercury__set__S1_4;
#line 576 "set.m"
    MR_Word mercury__set__List_6_18;
#line 68 "set_ordlist.opt"
    MR_Word mercury__set__conv0_List_6_18;

#line 68 "set_ordlist.opt"
    {
#line 68 "set_ordlist.opt"
      mercury__set_ordlist__insert_2_3_p_0(mercury__set__TypeInfo_for_T_7, (MR_Word) mercury__set__List0_5_17, ((MR_Box) (mercury__set__T_5)), &mercury__set__conv0_List_6_18);
    }
#line 68 "set_ordlist.opt"
    mercury__set__List_6_18 = (MR_Word) mercury__set__conv0_List_6_18;
#line 67 "set_ordlist.opt"
    mercury__set__S2_6 = (MR_Word) mercury__set__List_6_18;
#line 576 "set.m"
    return mercury__set__S2_6;
#line 576 "set.m"
  }
#line 115 "set.m"
}

#line 127 "set.m"
void MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
#line 127 "set.m"
  MR_Word mercury__set__V_11_11,
#line 127 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_9,
#line 127 "set.m"
  MR_Word mercury__set__List_4,
#line 127 "set.m"
  MR_Word mercury__set__STATE_VARIABLE_Set_0_6,
#line 127 "set.m"
  MR_Word * mercury__set__STATE_VARIABLE_Set_7)
#line 127 "set.m"
{
#line 573 "set.m"
  {
#line 573 "set.m"
    MR_bool mercury__set__succeeded;
#line 573 "set.m"
    MR_Integer mercury__set__V_5_21;
#line 573 "set.m"
    MR_Word mercury__set__Set0_4_28;
#line 573 "set.m"
    MR_Word mercury__set__Set1_5_29;
#line 573 "set.m"
    MR_Word mercury__set__Set_6_30;

#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__set__TypeInfo_for_T_9, (MR_Word) mercury__set__List_4, (MR_Integer) 0, &mercury__set__V_5_21);
    }
#line 110 "list.opt"
    {
#line 110 "list.opt"
      mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_115_111_114_116_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_50_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__set__V_11_11, mercury__set__TypeInfo_for_T_9, mercury__set__V_5_21, mercury__set__List_4, &mercury__set__Set0_4_28);
    }
#line 100 "set_ordlist.opt"
    mercury__set__Set1_5_29 = (MR_Word) mercury__set__STATE_VARIABLE_Set_0_6;
#line 101 "set_ordlist.opt"
    {
#line 101 "set_ordlist.opt"
      mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__set__V_11_11, mercury__set__TypeInfo_for_T_9, mercury__set__Set0_4_28, mercury__set__Set1_5_29, &mercury__set__Set_6_30);
    }
#line 100 "set_ordlist.opt"
    *mercury__set__STATE_VARIABLE_Set_7 = (MR_Word) mercury__set__Set_6_30;
#line 573 "set.m"
  }
#line 127 "set.m"
}

#line 126 "set.m"
MR_Word MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(
#line 126 "set.m"
  MR_Word mercury__set__V_9_9,
#line 126 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_7,
#line 126 "set.m"
  MR_Word mercury__set__S1_4,
#line 126 "set.m"
  MR_Word mercury__set__Xs_5)
#line 126 "set.m"
{
#line 570 "set.m"
  {
#line 570 "set.m"
    MR_bool mercury__set__succeeded;
#line 570 "set.m"
    MR_Word mercury__set__S2_6;

#line 570 "set.m"
    {
#line 570 "set.m"
      mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_115_101_114_116_95_108_105_115_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__set__V_9_9, mercury__set__TypeInfo_for_T_7, mercury__set__Xs_5, mercury__set__S1_4, &mercury__set__S2_6);
    }
#line 570 "set.m"
    return mercury__set__S2_6;
#line 570 "set.m"
  }
#line 126 "set.m"
}

#line 176 "set.m"
void MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
#line 176 "set.m"
  MR_Word mercury__set__V_9_9,
#line 176 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_7,
#line 176 "set.m"
  MR_Word mercury__set__SetA_4,
#line 176 "set.m"
  MR_Word mercury__set__SetB_5,
#line 176 "set.m"
  MR_Word * mercury__set__Set_6)
#line 176 "set.m"
{
#line 640 "set.m"
  {
#line 640 "set.m"
    MR_bool mercury__set__succeeded;
#line 640 "set.m"
    MR_Word mercury__set__Set0_4_10 = (MR_Word) mercury__set__SetA_4;
#line 640 "set.m"
    MR_Word mercury__set__Set1_5_11 = (MR_Word) mercury__set__SetB_5;
#line 640 "set.m"
    MR_Word mercury__set__Set_6_12;

#line 101 "set_ordlist.opt"
    {
#line 101 "set_ordlist.opt"
      mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__set__V_9_9, mercury__set__TypeInfo_for_T_7, mercury__set__Set0_4_10, mercury__set__Set1_5_11, &mercury__set__Set_6_12);
    }
#line 100 "set_ordlist.opt"
    *mercury__set__Set_6 = (MR_Word) mercury__set__Set_6_12;
#line 640 "set.m"
  }
#line 176 "set.m"
}

#line 175 "set.m"
MR_Word MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_117_110_105_111_110_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(
#line 175 "set.m"
  MR_Word mercury__set__V_9_9,
#line 175 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_7,
#line 175 "set.m"
  MR_Word mercury__set__S1_4,
#line 175 "set.m"
  MR_Word mercury__set__S2_5)
#line 175 "set.m"
{
#line 637 "set.m"
  {
#line 637 "set.m"
    MR_bool mercury__set__succeeded;
#line 637 "set.m"
    MR_Word mercury__set__S3_6;
#line 637 "set.m"
    MR_Word mercury__set__Set0_4_14 = (MR_Word) mercury__set__S1_4;
#line 637 "set.m"
    MR_Word mercury__set__Set1_5_15 = (MR_Word) mercury__set__S2_5;
#line 637 "set.m"
    MR_Word mercury__set__Set_6_16;

#line 101 "set_ordlist.opt"
    {
#line 101 "set_ordlist.opt"
      mercury__list__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_95_109_101_114_103_101_95_97_110_100_95_114_101_109_111_118_101_95_100_117_112_115_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(mercury__set__V_9_9, mercury__set__TypeInfo_for_T_7, mercury__set__Set0_4_14, mercury__set__Set1_5_15, &mercury__set__Set_6_16);
    }
#line 100 "set_ordlist.opt"
    mercury__set__S3_6 = (MR_Word) mercury__set__Set_6_16;
#line 637 "set.m"
    return mercury__set__S3_6;
#line 637 "set.m"
  }
#line 175 "set.m"
}

#line 200 "set.m"
void MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
#line 200 "set.m"
  MR_Word mercury__set__V_9_9,
#line 200 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_7,
#line 200 "set.m"
  MR_Word mercury__set__SetA_4,
#line 200 "set.m"
  MR_Word mercury__set__SetB_5,
#line 200 "set.m"
  MR_Word * mercury__set__Set_6)
#line 200 "set.m"
{
#line 654 "set.m"
  {
#line 654 "set.m"
    MR_bool mercury__set__succeeded;
#line 654 "set.m"
    MR_Word mercury__set__Xs_4_10 = (MR_Word) mercury__set__SetA_4;
#line 654 "set.m"
    MR_Word mercury__set__Ys_5_11 = (MR_Word) mercury__set__SetB_5;
#line 654 "set.m"
    MR_Word mercury__set__Set_6_12;
#line 114 "set_ordlist.opt"
    MR_Word mercury__set__conv0_Set_6_12;

#line 114 "set_ordlist.opt"
    {
#line 114 "set_ordlist.opt"
      mercury__set_ordlist__intersect_2_3_p_0(mercury__set__TypeInfo_for_T_7, (MR_Word) mercury__set__Xs_4_10, (MR_Word) mercury__set__Ys_5_11, &mercury__set__conv0_Set_6_12);
    }
#line 114 "set_ordlist.opt"
    mercury__set__Set_6_12 = (MR_Word) mercury__set__conv0_Set_6_12;
#line 113 "set_ordlist.opt"
    *mercury__set__Set_6 = (MR_Word) mercury__set__Set_6_12;
#line 654 "set.m"
  }
#line 200 "set.m"
}

#line 199 "set.m"
MR_Word MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_105_110_116_101_114_115_101_99_116_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(
#line 199 "set.m"
  MR_Word mercury__set__V_9_9,
#line 199 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_7,
#line 199 "set.m"
  MR_Word mercury__set__S1_4,
#line 199 "set.m"
  MR_Word mercury__set__S2_5)
#line 199 "set.m"
{
#line 651 "set.m"
  {
#line 651 "set.m"
    MR_bool mercury__set__succeeded;
#line 651 "set.m"
    MR_Word mercury__set__S3_6;
#line 651 "set.m"
    MR_Word mercury__set__Xs_4_14 = (MR_Word) mercury__set__S1_4;
#line 651 "set.m"
    MR_Word mercury__set__Ys_5_15 = (MR_Word) mercury__set__S2_5;
#line 651 "set.m"
    MR_Word mercury__set__Set_6_16;
#line 114 "set_ordlist.opt"
    MR_Word mercury__set__conv0_Set_6_16;

#line 114 "set_ordlist.opt"
    {
#line 114 "set_ordlist.opt"
      mercury__set_ordlist__intersect_2_3_p_0(mercury__set__TypeInfo_for_T_7, (MR_Word) mercury__set__Xs_4_14, (MR_Word) mercury__set__Ys_5_15, &mercury__set__conv0_Set_6_16);
    }
#line 114 "set_ordlist.opt"
    mercury__set__Set_6_16 = (MR_Word) mercury__set__conv0_Set_6_16;
#line 113 "set_ordlist.opt"
    mercury__set__S3_6 = (MR_Word) mercury__set__Set_6_16;
#line 651 "set.m"
    return mercury__set__S3_6;
#line 651 "set.m"
  }
#line 199 "set.m"
}

#line 218 "set.m"
void MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_3_p_0(
#line 218 "set.m"
  MR_Word mercury__set__V_9_9,
#line 218 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_7,
#line 218 "set.m"
  MR_Word mercury__set__SetA_4,
#line 218 "set.m"
  MR_Word mercury__set__SetB_5,
#line 218 "set.m"
  MR_Word * mercury__set__Set_6)
#line 218 "set.m"
{
#line 668 "set.m"
  {
#line 668 "set.m"
    MR_bool mercury__set__succeeded;
#line 668 "set.m"
    MR_Word mercury__set__Xs_4_10 = (MR_Word) mercury__set__SetA_4;
#line 668 "set.m"
    MR_Word mercury__set__Ys_5_11 = (MR_Word) mercury__set__SetB_5;
#line 668 "set.m"
    MR_Word mercury__set__Set_6_12;
#line 124 "set_ordlist.opt"
    MR_Word mercury__set__conv0_Set_6_12;

#line 124 "set_ordlist.opt"
    {
#line 124 "set_ordlist.opt"
      mercury__set_ordlist__difference_2_3_p_0(mercury__set__TypeInfo_for_T_7, (MR_Word) mercury__set__Xs_4_10, (MR_Word) mercury__set__Ys_5_11, &mercury__set__conv0_Set_6_12);
    }
#line 124 "set_ordlist.opt"
    mercury__set__Set_6_12 = (MR_Word) mercury__set__conv0_Set_6_12;
#line 123 "set_ordlist.opt"
    *mercury__set__Set_6 = (MR_Word) mercury__set__Set_6_12;
#line 668 "set.m"
  }
#line 218 "set.m"
}

#line 217 "set.m"
MR_Word MR_CALL 
mercury__set__f_84_121_112_101_83_112_101_99_79_102_95_95_112_114_101_100_95_111_114_95_102_117_110_99_95_95_100_105_102_102_101_114_101_110_99_101_95_95_91_84_32_61_32_118_97_114_40_86_95_50_41_93_95_48_95_49_2_f_0(
#line 217 "set.m"
  MR_Word mercury__set__V_9_9,
#line 217 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_7,
#line 217 "set.m"
  MR_Word mercury__set__S1_4,
#line 217 "set.m"
  MR_Word mercury__set__S2_5)
#line 217 "set.m"
{
#line 660 "set.m"
  {
#line 660 "set.m"
    MR_bool mercury__set__succeeded;
#line 660 "set.m"
    MR_Word mercury__set__S3_6;
#line 660 "set.m"
    MR_Word mercury__set__Xs_4_14 = (MR_Word) mercury__set__S1_4;
#line 660 "set.m"
    MR_Word mercury__set__Ys_5_15 = (MR_Word) mercury__set__S2_5;
#line 660 "set.m"
    MR_Word mercury__set__Set_6_16;
#line 124 "set_ordlist.opt"
    MR_Word mercury__set__conv0_Set_6_16;

#line 124 "set_ordlist.opt"
    {
#line 124 "set_ordlist.opt"
      mercury__set_ordlist__difference_2_3_p_0(mercury__set__TypeInfo_for_T_7, (MR_Word) mercury__set__Xs_4_14, (MR_Word) mercury__set__Ys_5_15, &mercury__set__conv0_Set_6_16);
    }
#line 124 "set_ordlist.opt"
    mercury__set__Set_6_16 = (MR_Word) mercury__set__conv0_Set_6_16;
#line 123 "set_ordlist.opt"
    mercury__set__S3_6 = (MR_Word) mercury__set__Set_6_16;
#line 660 "set.m"
    return mercury__set__S3_6;
#line 660 "set.m"
  }
#line 217 "set.m"
}

#line 502 "set.m"
void MR_CALL 
mercury__set____Compare____set_1_0(
#line 502 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_6,
#line 502 "set.m"
  MR_Word * mercury__set__HeadVar__1_1,
#line 502 "set.m"
  MR_Word mercury__set__HeadVar__2_2,
#line 502 "set.m"
  MR_Word mercury__set__HeadVar__3_3)
#line 502 "set.m"
{
#line 502 "set.m"
  {
#line 502 "set.m"
    MR_bool mercury__set__succeeded;
#line 502 "set.m"
    MR_Word mercury__set__Cast_HeadVar1_4 = mercury__set__HeadVar__2_2;
#line 502 "set.m"
    MR_Word mercury__set__Cast_HeadVar2_5 = mercury__set__HeadVar__3_3;

#line 502 "set.m"
    {
#line 502 "set.m"
      mercury__set_ordlist____Compare____set_ordlist_1_0(mercury__set__TypeInfo_for_T_6, mercury__set__HeadVar__1_1, mercury__set__Cast_HeadVar1_4, mercury__set__Cast_HeadVar2_5);
#line 502 "set.m"
      return;
    }
#line 502 "set.m"
  }
#line 502 "set.m"
}

#line 502 "set.m"
MR_bool MR_CALL 
mercury__set____Unify____set_1_0(
#line 502 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_5,
#line 502 "set.m"
  MR_Word mercury__set__HeadVar__1_1,
#line 502 "set.m"
  MR_Word mercury__set__HeadVar__2_2)
#line 502 "set.m"
{
#line 502 "set.m"
  {
#line 502 "set.m"
    MR_bool mercury__set__succeeded;
#line 502 "set.m"
    MR_Word mercury__set__Cast_HeadVar1_3 = mercury__set__HeadVar__1_1;
#line 502 "set.m"
    MR_Word mercury__set__Cast_HeadVar2_4 = mercury__set__HeadVar__2_2;

#line 502 "set.m"
    {
#line 502 "set.m"
      return mercury__set__succeeded = mercury__set_ordlist____Unify____set_ordlist_1_0(mercury__set__TypeInfo_for_T_5, mercury__set__Cast_HeadVar1_3, mercury__set__Cast_HeadVar2_4);
    }
#line 502 "set.m"
    return mercury__set__succeeded;
#line 502 "set.m"
  }
#line 502 "set.m"
}

#line 486 "set.m"
void MR_CALL 
mercury__set__divide_by_set_4_p_0(
#line 486 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_9,
#line 486 "set.m"
  MR_Word mercury__set__DivideBySet_5,
#line 486 "set.m"
  MR_Word mercury__set__Set_6,
#line 486 "set.m"
  MR_Word * mercury__set__TruePart_7,
#line 486 "set.m"
  MR_Word * mercury__set__FalsePart_8)
#line 486 "set.m"
{
#line 755 "set.m"
  {
#line 755 "set.m"
    MR_bool mercury__set__succeeded;

#line 755 "set.m"
    {
#line 755 "set.m"
      mercury__set_ordlist__divide_by_set_4_p_0(mercury__set__TypeInfo_for_T_9, mercury__set__DivideBySet_5, mercury__set__Set_6, mercury__set__TruePart_7, mercury__set__FalsePart_8);
#line 755 "set.m"
      return;
    }
#line 755 "set.m"
  }
#line 486 "set.m"
}

#line 479 "set.m"
void MR_CALL 
mercury__set__divide_4_p_0(
#line 479 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_9,
#line 479 "set.m"
  MR_Word mercury__set__P_5,
#line 479 "set.m"
  MR_Word mercury__set__Set_6,
#line 479 "set.m"
  MR_Word * mercury__set__TruePart_7,
#line 479 "set.m"
  MR_Word * mercury__set__FalsePart_8)
#line 479 "set.m"
{
#line 191 "set_ordlist.opt"
  {
#line 191 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 191 "set_ordlist.opt"
    MR_Word mercury__set__Set_6_11 = (MR_Word) mercury__set__Set_6;
#line 191 "set_ordlist.opt"
    MR_Word mercury__set__TruePart_7_12;
#line 191 "set_ordlist.opt"
    MR_Word mercury__set__FalsePart_8_13;
#line 191 "set_ordlist.opt"
    MR_Word mercury__set__V_11_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 191 "set_ordlist.opt"
    MR_Word mercury__set__V_12_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 191 "set_ordlist.opt"
    MR_Word mercury__set__RevTruePart_9_17;
#line 191 "set_ordlist.opt"
    MR_Word mercury__set__RevFalsePart_10_18;

#line 194 "set_ordlist.opt"
    {
#line 194 "set_ordlist.opt"
      mercury__set_ordlist__divide_2_6_p_0(mercury__set__TypeInfo_for_T_9, mercury__set__P_5, mercury__set__Set_6_11, mercury__set__V_11_14, &mercury__set__RevTruePart_9_17, mercury__set__V_12_16, &mercury__set__RevFalsePart_10_18);
    }
#line 195 "set_ordlist.opt"
    {
#line 195 "set_ordlist.opt"
      mercury__list__reverse_2_p_0(mercury__set__TypeInfo_for_T_9, mercury__set__RevTruePart_9_17, &mercury__set__TruePart_7_12);
    }
#line 191 "set_ordlist.opt"
    *mercury__set__TruePart_7 = (MR_Word) mercury__set__TruePart_7_12;
#line 196 "set_ordlist.opt"
    {
#line 196 "set_ordlist.opt"
      mercury__list__reverse_2_p_0(mercury__set__TypeInfo_for_T_9, mercury__set__RevFalsePart_10_18, &mercury__set__FalsePart_8_13);
    }
#line 191 "set_ordlist.opt"
    *mercury__set__FalsePart_8 = (MR_Word) mercury__set__FalsePart_8_13;
#line 191 "set_ordlist.opt"
  }
#line 479 "set.m"
}

#line 473 "set.m"
MR_bool MR_CALL 
mercury__set__all_true_2_p_0(
#line 473 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_5,
#line 473 "set.m"
  MR_Word mercury__set__P_3,
#line 473 "set.m"
  MR_Word mercury__set__S_4)
#line 473 "set.m"
{
#line 189 "set_ordlist.opt"
  {
#line 189 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 189 "set_ordlist.opt"
    MR_Word mercury__set__L_4_7 = (MR_Word) mercury__set__S_4;

#line 190 "set_ordlist.opt"
    {
#line 190 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__all_true_2_p_0(mercury__set__TypeInfo_for_T_5, mercury__set__P_3, mercury__set__L_4_7);
    }
#line 189 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 189 "set_ordlist.opt"
  }
#line 473 "set.m"
}

#line 466 "set.m"
MR_bool MR_CALL 
mercury__set__foldl6_14_p_5(
#line 466 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_40,
#line 466 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_41,
#line 466 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_42,
#line 466 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_43,
#line 466 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_44,
#line 466 "set.m"
  MR_Word mercury__set__TypeInfo_for_E_45,
#line 466 "set.m"
  MR_Word mercury__set__TypeInfo_for_F_46,
#line 466 "set.m"
  MR_Word mercury__set__F_15,
#line 466 "set.m"
  MR_Word mercury__set__S_16,
#line 466 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_22,
#line 466 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_23,
#line 466 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_24,
#line 466 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_25,
#line 466 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_26,
#line 466 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_27,
#line 466 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_28,
#line 466 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_29,
#line 466 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_E_0_30,
#line 466 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_E_31,
#line 466 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_F_0_32,
#line 466 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_F_33)
#line 466 "set.m"
{
#line 186 "set_ordlist.opt"
  {
#line 186 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 186 "set_ordlist.opt"
    MR_Word mercury__set__V_35_75 = (MR_Word) mercury__set__S_16;

#line 188 "set_ordlist.opt"
    {
#line 188 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl6_14_p_7(mercury__set__TypeInfo_for_T_40, mercury__set__TypeInfo_for_A_41, mercury__set__TypeInfo_for_B_42, mercury__set__TypeInfo_for_C_43, mercury__set__TypeInfo_for_D_44, mercury__set__TypeInfo_for_E_45, mercury__set__TypeInfo_for_F_46, mercury__set__F_15, mercury__set__V_35_75, mercury__set__STATE_VARIABLE_A_0_22, mercury__set__STATE_VARIABLE_A_23, mercury__set__STATE_VARIABLE_B_0_24, mercury__set__STATE_VARIABLE_B_25, mercury__set__STATE_VARIABLE_C_0_26, mercury__set__STATE_VARIABLE_C_27, mercury__set__STATE_VARIABLE_D_0_28, mercury__set__STATE_VARIABLE_D_29, mercury__set__STATE_VARIABLE_E_0_30, mercury__set__STATE_VARIABLE_E_31, mercury__set__STATE_VARIABLE_F_0_32, mercury__set__STATE_VARIABLE_F_33);
    }
#line 186 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 186 "set_ordlist.opt"
  }
#line 466 "set.m"
}

#line 463 "set.m"
MR_bool MR_CALL 
mercury__set__foldl6_14_p_4(
#line 463 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_40,
#line 463 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_41,
#line 463 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_42,
#line 463 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_43,
#line 463 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_44,
#line 463 "set.m"
  MR_Word mercury__set__TypeInfo_for_E_45,
#line 463 "set.m"
  MR_Word mercury__set__TypeInfo_for_F_46,
#line 463 "set.m"
  MR_Word mercury__set__F_15,
#line 463 "set.m"
  MR_Word mercury__set__S_16,
#line 463 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_22,
#line 463 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_23,
#line 463 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_24,
#line 463 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_25,
#line 463 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_26,
#line 463 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_27,
#line 463 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_28,
#line 463 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_29,
#line 463 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_E_0_30,
#line 463 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_E_31,
#line 463 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_F_0_32,
#line 463 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_F_33)
#line 463 "set.m"
{
#line 186 "set_ordlist.opt"
  {
#line 186 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 186 "set_ordlist.opt"
    MR_Word mercury__set__V_35_75 = (MR_Word) mercury__set__S_16;

#line 188 "set_ordlist.opt"
    {
#line 188 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl6_14_p_6(mercury__set__TypeInfo_for_T_40, mercury__set__TypeInfo_for_A_41, mercury__set__TypeInfo_for_B_42, mercury__set__TypeInfo_for_C_43, mercury__set__TypeInfo_for_D_44, mercury__set__TypeInfo_for_E_45, mercury__set__TypeInfo_for_F_46, mercury__set__F_15, mercury__set__V_35_75, mercury__set__STATE_VARIABLE_A_0_22, mercury__set__STATE_VARIABLE_A_23, mercury__set__STATE_VARIABLE_B_0_24, mercury__set__STATE_VARIABLE_B_25, mercury__set__STATE_VARIABLE_C_0_26, mercury__set__STATE_VARIABLE_C_27, mercury__set__STATE_VARIABLE_D_0_28, mercury__set__STATE_VARIABLE_D_29, mercury__set__STATE_VARIABLE_E_0_30, mercury__set__STATE_VARIABLE_E_31, mercury__set__STATE_VARIABLE_F_0_32, mercury__set__STATE_VARIABLE_F_33);
    }
#line 186 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 186 "set_ordlist.opt"
  }
#line 463 "set.m"
}

#line 460 "set.m"
MR_bool MR_CALL 
mercury__set__foldl6_14_p_3(
#line 460 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_40,
#line 460 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_41,
#line 460 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_42,
#line 460 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_43,
#line 460 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_44,
#line 460 "set.m"
  MR_Word mercury__set__TypeInfo_for_E_45,
#line 460 "set.m"
  MR_Word mercury__set__TypeInfo_for_F_46,
#line 460 "set.m"
  MR_Word mercury__set__F_15,
#line 460 "set.m"
  MR_Word mercury__set__S_16,
#line 460 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_22,
#line 460 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_23,
#line 460 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_24,
#line 460 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_25,
#line 460 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_26,
#line 460 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_27,
#line 460 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_28,
#line 460 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_29,
#line 460 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_E_0_30,
#line 460 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_E_31,
#line 460 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_F_0_32,
#line 460 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_F_33)
#line 460 "set.m"
{
#line 186 "set_ordlist.opt"
  {
#line 186 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 186 "set_ordlist.opt"
    MR_Word mercury__set__V_35_75 = (MR_Word) mercury__set__S_16;

#line 188 "set_ordlist.opt"
    {
#line 188 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl6_14_p_5(mercury__set__TypeInfo_for_T_40, mercury__set__TypeInfo_for_A_41, mercury__set__TypeInfo_for_B_42, mercury__set__TypeInfo_for_C_43, mercury__set__TypeInfo_for_D_44, mercury__set__TypeInfo_for_E_45, mercury__set__TypeInfo_for_F_46, mercury__set__F_15, mercury__set__V_35_75, mercury__set__STATE_VARIABLE_A_0_22, mercury__set__STATE_VARIABLE_A_23, mercury__set__STATE_VARIABLE_B_0_24, mercury__set__STATE_VARIABLE_B_25, mercury__set__STATE_VARIABLE_C_0_26, mercury__set__STATE_VARIABLE_C_27, mercury__set__STATE_VARIABLE_D_0_28, mercury__set__STATE_VARIABLE_D_29, mercury__set__STATE_VARIABLE_E_0_30, mercury__set__STATE_VARIABLE_E_31, mercury__set__STATE_VARIABLE_F_0_32, mercury__set__STATE_VARIABLE_F_33);
    }
#line 186 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 186 "set_ordlist.opt"
  }
#line 460 "set.m"
}

#line 457 "set.m"
void MR_CALL 
mercury__set__foldl6_14_p_2(
#line 457 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_40,
#line 457 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_41,
#line 457 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_42,
#line 457 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_43,
#line 457 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_44,
#line 457 "set.m"
  MR_Word mercury__set__TypeInfo_for_E_45,
#line 457 "set.m"
  MR_Word mercury__set__TypeInfo_for_F_46,
#line 457 "set.m"
  MR_Word mercury__set__F_15,
#line 457 "set.m"
  MR_Word mercury__set__S_16,
#line 457 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_22,
#line 457 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_23,
#line 457 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_24,
#line 457 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_25,
#line 457 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_26,
#line 457 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_27,
#line 457 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_28,
#line 457 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_29,
#line 457 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_E_0_30,
#line 457 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_E_31,
#line 457 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_F_0_32,
#line 457 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_F_33)
#line 457 "set.m"
{
#line 186 "set_ordlist.opt"
  {
#line 186 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 186 "set_ordlist.opt"
    MR_Word mercury__set__V_35_75 = (MR_Word) mercury__set__S_16;

#line 188 "set_ordlist.opt"
    {
#line 188 "set_ordlist.opt"
      mercury__list__foldl6_14_p_2(mercury__set__TypeInfo_for_T_40, mercury__set__TypeInfo_for_A_41, mercury__set__TypeInfo_for_B_42, mercury__set__TypeInfo_for_C_43, mercury__set__TypeInfo_for_D_44, mercury__set__TypeInfo_for_E_45, mercury__set__TypeInfo_for_F_46, mercury__set__F_15, mercury__set__V_35_75, mercury__set__STATE_VARIABLE_A_0_22, mercury__set__STATE_VARIABLE_A_23, mercury__set__STATE_VARIABLE_B_0_24, mercury__set__STATE_VARIABLE_B_25, mercury__set__STATE_VARIABLE_C_0_26, mercury__set__STATE_VARIABLE_C_27, mercury__set__STATE_VARIABLE_D_0_28, mercury__set__STATE_VARIABLE_D_29, mercury__set__STATE_VARIABLE_E_0_30, mercury__set__STATE_VARIABLE_E_31, mercury__set__STATE_VARIABLE_F_0_32, mercury__set__STATE_VARIABLE_F_33);
#line 188 "set_ordlist.opt"
      return;
    }
#line 186 "set_ordlist.opt"
  }
#line 457 "set.m"
}

#line 454 "set.m"
void MR_CALL 
mercury__set__foldl6_14_p_1(
#line 454 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_40,
#line 454 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_41,
#line 454 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_42,
#line 454 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_43,
#line 454 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_44,
#line 454 "set.m"
  MR_Word mercury__set__TypeInfo_for_E_45,
#line 454 "set.m"
  MR_Word mercury__set__TypeInfo_for_F_46,
#line 454 "set.m"
  MR_Word mercury__set__F_15,
#line 454 "set.m"
  MR_Word mercury__set__S_16,
#line 454 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_22,
#line 454 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_23,
#line 454 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_24,
#line 454 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_25,
#line 454 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_26,
#line 454 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_27,
#line 454 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_28,
#line 454 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_29,
#line 454 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_E_0_30,
#line 454 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_E_31,
#line 454 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_F_0_32,
#line 454 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_F_33)
#line 454 "set.m"
{
#line 186 "set_ordlist.opt"
  {
#line 186 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 186 "set_ordlist.opt"
    MR_Word mercury__set__V_35_75 = (MR_Word) mercury__set__S_16;

#line 188 "set_ordlist.opt"
    {
#line 188 "set_ordlist.opt"
      mercury__list__foldl6_14_p_1(mercury__set__TypeInfo_for_T_40, mercury__set__TypeInfo_for_A_41, mercury__set__TypeInfo_for_B_42, mercury__set__TypeInfo_for_C_43, mercury__set__TypeInfo_for_D_44, mercury__set__TypeInfo_for_E_45, mercury__set__TypeInfo_for_F_46, mercury__set__F_15, mercury__set__V_35_75, mercury__set__STATE_VARIABLE_A_0_22, mercury__set__STATE_VARIABLE_A_23, mercury__set__STATE_VARIABLE_B_0_24, mercury__set__STATE_VARIABLE_B_25, mercury__set__STATE_VARIABLE_C_0_26, mercury__set__STATE_VARIABLE_C_27, mercury__set__STATE_VARIABLE_D_0_28, mercury__set__STATE_VARIABLE_D_29, mercury__set__STATE_VARIABLE_E_0_30, mercury__set__STATE_VARIABLE_E_31, mercury__set__STATE_VARIABLE_F_0_32, mercury__set__STATE_VARIABLE_F_33);
#line 188 "set_ordlist.opt"
      return;
    }
#line 186 "set_ordlist.opt"
  }
#line 454 "set.m"
}

#line 451 "set.m"
void MR_CALL 
mercury__set__foldl6_14_p_0(
#line 451 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_40,
#line 451 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_41,
#line 451 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_42,
#line 451 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_43,
#line 451 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_44,
#line 451 "set.m"
  MR_Word mercury__set__TypeInfo_for_E_45,
#line 451 "set.m"
  MR_Word mercury__set__TypeInfo_for_F_46,
#line 451 "set.m"
  MR_Word mercury__set__F_15,
#line 451 "set.m"
  MR_Word mercury__set__S_16,
#line 451 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_22,
#line 451 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_23,
#line 451 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_24,
#line 451 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_25,
#line 451 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_26,
#line 451 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_27,
#line 451 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_28,
#line 451 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_29,
#line 451 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_E_0_30,
#line 451 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_E_31,
#line 451 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_F_0_32,
#line 451 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_F_33)
#line 451 "set.m"
{
#line 186 "set_ordlist.opt"
  {
#line 186 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 186 "set_ordlist.opt"
    MR_Word mercury__set__V_35_75 = (MR_Word) mercury__set__S_16;

#line 188 "set_ordlist.opt"
    {
#line 188 "set_ordlist.opt"
      mercury__list__foldl6_14_p_0(mercury__set__TypeInfo_for_T_40, mercury__set__TypeInfo_for_A_41, mercury__set__TypeInfo_for_B_42, mercury__set__TypeInfo_for_C_43, mercury__set__TypeInfo_for_D_44, mercury__set__TypeInfo_for_E_45, mercury__set__TypeInfo_for_F_46, mercury__set__F_15, mercury__set__V_35_75, mercury__set__STATE_VARIABLE_A_0_22, mercury__set__STATE_VARIABLE_A_23, mercury__set__STATE_VARIABLE_B_0_24, mercury__set__STATE_VARIABLE_B_25, mercury__set__STATE_VARIABLE_C_0_26, mercury__set__STATE_VARIABLE_C_27, mercury__set__STATE_VARIABLE_D_0_28, mercury__set__STATE_VARIABLE_D_29, mercury__set__STATE_VARIABLE_E_0_30, mercury__set__STATE_VARIABLE_E_31, mercury__set__STATE_VARIABLE_F_0_32, mercury__set__STATE_VARIABLE_F_33);
#line 188 "set_ordlist.opt"
      return;
    }
#line 186 "set_ordlist.opt"
  }
#line 451 "set.m"
}

#line 445 "set.m"
MR_bool MR_CALL 
mercury__set__fold6_14_p_5(
#line 445 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_40,
#line 445 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_41,
#line 445 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_42,
#line 445 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_43,
#line 445 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_44,
#line 445 "set.m"
  MR_Word mercury__set__TypeInfo_for_E_45,
#line 445 "set.m"
  MR_Word mercury__set__TypeInfo_for_F_46,
#line 445 "set.m"
  MR_Word mercury__set__F_15,
#line 445 "set.m"
  MR_Word mercury__set__S_16,
#line 445 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_22,
#line 445 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_23,
#line 445 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_24,
#line 445 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_25,
#line 445 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_26,
#line 445 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_27,
#line 445 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_28,
#line 445 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_29,
#line 445 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_E_0_30,
#line 445 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_E_31,
#line 445 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_F_0_32,
#line 445 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_F_33)
#line 445 "set.m"
{
#line 186 "set_ordlist.opt"
  {
#line 186 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 186 "set_ordlist.opt"
    MR_Word mercury__set__V_35_100 = (MR_Word) mercury__set__S_16;

#line 188 "set_ordlist.opt"
    {
#line 188 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl6_14_p_7(mercury__set__TypeInfo_for_T_40, mercury__set__TypeInfo_for_A_41, mercury__set__TypeInfo_for_B_42, mercury__set__TypeInfo_for_C_43, mercury__set__TypeInfo_for_D_44, mercury__set__TypeInfo_for_E_45, mercury__set__TypeInfo_for_F_46, mercury__set__F_15, mercury__set__V_35_100, mercury__set__STATE_VARIABLE_A_0_22, mercury__set__STATE_VARIABLE_A_23, mercury__set__STATE_VARIABLE_B_0_24, mercury__set__STATE_VARIABLE_B_25, mercury__set__STATE_VARIABLE_C_0_26, mercury__set__STATE_VARIABLE_C_27, mercury__set__STATE_VARIABLE_D_0_28, mercury__set__STATE_VARIABLE_D_29, mercury__set__STATE_VARIABLE_E_0_30, mercury__set__STATE_VARIABLE_E_31, mercury__set__STATE_VARIABLE_F_0_32, mercury__set__STATE_VARIABLE_F_33);
    }
#line 186 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 186 "set_ordlist.opt"
  }
#line 445 "set.m"
}

#line 442 "set.m"
MR_bool MR_CALL 
mercury__set__fold6_14_p_4(
#line 442 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_40,
#line 442 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_41,
#line 442 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_42,
#line 442 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_43,
#line 442 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_44,
#line 442 "set.m"
  MR_Word mercury__set__TypeInfo_for_E_45,
#line 442 "set.m"
  MR_Word mercury__set__TypeInfo_for_F_46,
#line 442 "set.m"
  MR_Word mercury__set__F_15,
#line 442 "set.m"
  MR_Word mercury__set__S_16,
#line 442 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_22,
#line 442 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_23,
#line 442 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_24,
#line 442 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_25,
#line 442 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_26,
#line 442 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_27,
#line 442 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_28,
#line 442 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_29,
#line 442 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_E_0_30,
#line 442 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_E_31,
#line 442 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_F_0_32,
#line 442 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_F_33)
#line 442 "set.m"
{
#line 186 "set_ordlist.opt"
  {
#line 186 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 186 "set_ordlist.opt"
    MR_Word mercury__set__V_35_100 = (MR_Word) mercury__set__S_16;

#line 188 "set_ordlist.opt"
    {
#line 188 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl6_14_p_6(mercury__set__TypeInfo_for_T_40, mercury__set__TypeInfo_for_A_41, mercury__set__TypeInfo_for_B_42, mercury__set__TypeInfo_for_C_43, mercury__set__TypeInfo_for_D_44, mercury__set__TypeInfo_for_E_45, mercury__set__TypeInfo_for_F_46, mercury__set__F_15, mercury__set__V_35_100, mercury__set__STATE_VARIABLE_A_0_22, mercury__set__STATE_VARIABLE_A_23, mercury__set__STATE_VARIABLE_B_0_24, mercury__set__STATE_VARIABLE_B_25, mercury__set__STATE_VARIABLE_C_0_26, mercury__set__STATE_VARIABLE_C_27, mercury__set__STATE_VARIABLE_D_0_28, mercury__set__STATE_VARIABLE_D_29, mercury__set__STATE_VARIABLE_E_0_30, mercury__set__STATE_VARIABLE_E_31, mercury__set__STATE_VARIABLE_F_0_32, mercury__set__STATE_VARIABLE_F_33);
    }
#line 186 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 186 "set_ordlist.opt"
  }
#line 442 "set.m"
}

#line 439 "set.m"
MR_bool MR_CALL 
mercury__set__fold6_14_p_3(
#line 439 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_40,
#line 439 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_41,
#line 439 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_42,
#line 439 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_43,
#line 439 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_44,
#line 439 "set.m"
  MR_Word mercury__set__TypeInfo_for_E_45,
#line 439 "set.m"
  MR_Word mercury__set__TypeInfo_for_F_46,
#line 439 "set.m"
  MR_Word mercury__set__F_15,
#line 439 "set.m"
  MR_Word mercury__set__S_16,
#line 439 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_22,
#line 439 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_23,
#line 439 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_24,
#line 439 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_25,
#line 439 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_26,
#line 439 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_27,
#line 439 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_28,
#line 439 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_29,
#line 439 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_E_0_30,
#line 439 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_E_31,
#line 439 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_F_0_32,
#line 439 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_F_33)
#line 439 "set.m"
{
#line 186 "set_ordlist.opt"
  {
#line 186 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 186 "set_ordlist.opt"
    MR_Word mercury__set__V_35_100 = (MR_Word) mercury__set__S_16;

#line 188 "set_ordlist.opt"
    {
#line 188 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl6_14_p_5(mercury__set__TypeInfo_for_T_40, mercury__set__TypeInfo_for_A_41, mercury__set__TypeInfo_for_B_42, mercury__set__TypeInfo_for_C_43, mercury__set__TypeInfo_for_D_44, mercury__set__TypeInfo_for_E_45, mercury__set__TypeInfo_for_F_46, mercury__set__F_15, mercury__set__V_35_100, mercury__set__STATE_VARIABLE_A_0_22, mercury__set__STATE_VARIABLE_A_23, mercury__set__STATE_VARIABLE_B_0_24, mercury__set__STATE_VARIABLE_B_25, mercury__set__STATE_VARIABLE_C_0_26, mercury__set__STATE_VARIABLE_C_27, mercury__set__STATE_VARIABLE_D_0_28, mercury__set__STATE_VARIABLE_D_29, mercury__set__STATE_VARIABLE_E_0_30, mercury__set__STATE_VARIABLE_E_31, mercury__set__STATE_VARIABLE_F_0_32, mercury__set__STATE_VARIABLE_F_33);
    }
#line 186 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 186 "set_ordlist.opt"
  }
#line 439 "set.m"
}

#line 436 "set.m"
void MR_CALL 
mercury__set__fold6_14_p_2(
#line 436 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_40,
#line 436 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_41,
#line 436 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_42,
#line 436 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_43,
#line 436 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_44,
#line 436 "set.m"
  MR_Word mercury__set__TypeInfo_for_E_45,
#line 436 "set.m"
  MR_Word mercury__set__TypeInfo_for_F_46,
#line 436 "set.m"
  MR_Word mercury__set__F_15,
#line 436 "set.m"
  MR_Word mercury__set__S_16,
#line 436 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_22,
#line 436 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_23,
#line 436 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_24,
#line 436 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_25,
#line 436 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_26,
#line 436 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_27,
#line 436 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_28,
#line 436 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_29,
#line 436 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_E_0_30,
#line 436 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_E_31,
#line 436 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_F_0_32,
#line 436 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_F_33)
#line 436 "set.m"
{
#line 186 "set_ordlist.opt"
  {
#line 186 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 186 "set_ordlist.opt"
    MR_Word mercury__set__V_35_100 = (MR_Word) mercury__set__S_16;

#line 188 "set_ordlist.opt"
    {
#line 188 "set_ordlist.opt"
      mercury__list__foldl6_14_p_2(mercury__set__TypeInfo_for_T_40, mercury__set__TypeInfo_for_A_41, mercury__set__TypeInfo_for_B_42, mercury__set__TypeInfo_for_C_43, mercury__set__TypeInfo_for_D_44, mercury__set__TypeInfo_for_E_45, mercury__set__TypeInfo_for_F_46, mercury__set__F_15, mercury__set__V_35_100, mercury__set__STATE_VARIABLE_A_0_22, mercury__set__STATE_VARIABLE_A_23, mercury__set__STATE_VARIABLE_B_0_24, mercury__set__STATE_VARIABLE_B_25, mercury__set__STATE_VARIABLE_C_0_26, mercury__set__STATE_VARIABLE_C_27, mercury__set__STATE_VARIABLE_D_0_28, mercury__set__STATE_VARIABLE_D_29, mercury__set__STATE_VARIABLE_E_0_30, mercury__set__STATE_VARIABLE_E_31, mercury__set__STATE_VARIABLE_F_0_32, mercury__set__STATE_VARIABLE_F_33);
#line 188 "set_ordlist.opt"
      return;
    }
#line 186 "set_ordlist.opt"
  }
#line 436 "set.m"
}

#line 433 "set.m"
void MR_CALL 
mercury__set__fold6_14_p_1(
#line 433 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_40,
#line 433 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_41,
#line 433 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_42,
#line 433 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_43,
#line 433 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_44,
#line 433 "set.m"
  MR_Word mercury__set__TypeInfo_for_E_45,
#line 433 "set.m"
  MR_Word mercury__set__TypeInfo_for_F_46,
#line 433 "set.m"
  MR_Word mercury__set__F_15,
#line 433 "set.m"
  MR_Word mercury__set__S_16,
#line 433 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_22,
#line 433 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_23,
#line 433 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_24,
#line 433 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_25,
#line 433 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_26,
#line 433 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_27,
#line 433 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_28,
#line 433 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_29,
#line 433 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_E_0_30,
#line 433 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_E_31,
#line 433 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_F_0_32,
#line 433 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_F_33)
#line 433 "set.m"
{
#line 186 "set_ordlist.opt"
  {
#line 186 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 186 "set_ordlist.opt"
    MR_Word mercury__set__V_35_100 = (MR_Word) mercury__set__S_16;

#line 188 "set_ordlist.opt"
    {
#line 188 "set_ordlist.opt"
      mercury__list__foldl6_14_p_1(mercury__set__TypeInfo_for_T_40, mercury__set__TypeInfo_for_A_41, mercury__set__TypeInfo_for_B_42, mercury__set__TypeInfo_for_C_43, mercury__set__TypeInfo_for_D_44, mercury__set__TypeInfo_for_E_45, mercury__set__TypeInfo_for_F_46, mercury__set__F_15, mercury__set__V_35_100, mercury__set__STATE_VARIABLE_A_0_22, mercury__set__STATE_VARIABLE_A_23, mercury__set__STATE_VARIABLE_B_0_24, mercury__set__STATE_VARIABLE_B_25, mercury__set__STATE_VARIABLE_C_0_26, mercury__set__STATE_VARIABLE_C_27, mercury__set__STATE_VARIABLE_D_0_28, mercury__set__STATE_VARIABLE_D_29, mercury__set__STATE_VARIABLE_E_0_30, mercury__set__STATE_VARIABLE_E_31, mercury__set__STATE_VARIABLE_F_0_32, mercury__set__STATE_VARIABLE_F_33);
#line 188 "set_ordlist.opt"
      return;
    }
#line 186 "set_ordlist.opt"
  }
#line 433 "set.m"
}

#line 430 "set.m"
void MR_CALL 
mercury__set__fold6_14_p_0(
#line 430 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_40,
#line 430 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_41,
#line 430 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_42,
#line 430 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_43,
#line 430 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_44,
#line 430 "set.m"
  MR_Word mercury__set__TypeInfo_for_E_45,
#line 430 "set.m"
  MR_Word mercury__set__TypeInfo_for_F_46,
#line 430 "set.m"
  MR_Word mercury__set__F_15,
#line 430 "set.m"
  MR_Word mercury__set__S_16,
#line 430 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_22,
#line 430 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_23,
#line 430 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_24,
#line 430 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_25,
#line 430 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_26,
#line 430 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_27,
#line 430 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_28,
#line 430 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_29,
#line 430 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_E_0_30,
#line 430 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_E_31,
#line 430 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_F_0_32,
#line 430 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_F_33)
#line 430 "set.m"
{
#line 186 "set_ordlist.opt"
  {
#line 186 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 186 "set_ordlist.opt"
    MR_Word mercury__set__V_35_100 = (MR_Word) mercury__set__S_16;

#line 188 "set_ordlist.opt"
    {
#line 188 "set_ordlist.opt"
      mercury__list__foldl6_14_p_0(mercury__set__TypeInfo_for_T_40, mercury__set__TypeInfo_for_A_41, mercury__set__TypeInfo_for_B_42, mercury__set__TypeInfo_for_C_43, mercury__set__TypeInfo_for_D_44, mercury__set__TypeInfo_for_E_45, mercury__set__TypeInfo_for_F_46, mercury__set__F_15, mercury__set__V_35_100, mercury__set__STATE_VARIABLE_A_0_22, mercury__set__STATE_VARIABLE_A_23, mercury__set__STATE_VARIABLE_B_0_24, mercury__set__STATE_VARIABLE_B_25, mercury__set__STATE_VARIABLE_C_0_26, mercury__set__STATE_VARIABLE_C_27, mercury__set__STATE_VARIABLE_D_0_28, mercury__set__STATE_VARIABLE_D_29, mercury__set__STATE_VARIABLE_E_0_30, mercury__set__STATE_VARIABLE_E_31, mercury__set__STATE_VARIABLE_F_0_32, mercury__set__STATE_VARIABLE_F_33);
#line 188 "set_ordlist.opt"
      return;
    }
#line 186 "set_ordlist.opt"
  }
#line 430 "set.m"
}

#line 424 "set.m"
MR_bool MR_CALL 
mercury__set__foldl5_12_p_5(
#line 424 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_35,
#line 424 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_36,
#line 424 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_37,
#line 424 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_38,
#line 424 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_39,
#line 424 "set.m"
  MR_Word mercury__set__TypeInfo_for_E_40,
#line 424 "set.m"
  MR_Word mercury__set__F_13,
#line 424 "set.m"
  MR_Word mercury__set__S_14,
#line 424 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_20,
#line 424 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_21,
#line 424 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_22,
#line 424 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_23,
#line 424 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_24,
#line 424 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_25,
#line 424 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_26,
#line 424 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_27,
#line 424 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_E_0_28,
#line 424 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_E_29)
#line 424 "set.m"
{
#line 181 "set_ordlist.opt"
  {
#line 181 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 181 "set_ordlist.opt"
    MR_Word mercury__set__V_30_65 = (MR_Word) mercury__set__S_14;

#line 183 "set_ordlist.opt"
    {
#line 183 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl5_12_p_5(mercury__set__TypeInfo_for_T_35, mercury__set__TypeInfo_for_A_36, mercury__set__TypeInfo_for_B_37, mercury__set__TypeInfo_for_C_38, mercury__set__TypeInfo_for_D_39, mercury__set__TypeInfo_for_E_40, mercury__set__F_13, mercury__set__V_30_65, mercury__set__STATE_VARIABLE_A_0_20, mercury__set__STATE_VARIABLE_A_21, mercury__set__STATE_VARIABLE_B_0_22, mercury__set__STATE_VARIABLE_B_23, mercury__set__STATE_VARIABLE_C_0_24, mercury__set__STATE_VARIABLE_C_25, mercury__set__STATE_VARIABLE_D_0_26, mercury__set__STATE_VARIABLE_D_27, mercury__set__STATE_VARIABLE_E_0_28, mercury__set__STATE_VARIABLE_E_29);
    }
#line 181 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 181 "set_ordlist.opt"
  }
#line 424 "set.m"
}

#line 421 "set.m"
MR_bool MR_CALL 
mercury__set__foldl5_12_p_4(
#line 421 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_35,
#line 421 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_36,
#line 421 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_37,
#line 421 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_38,
#line 421 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_39,
#line 421 "set.m"
  MR_Word mercury__set__TypeInfo_for_E_40,
#line 421 "set.m"
  MR_Word mercury__set__F_13,
#line 421 "set.m"
  MR_Word mercury__set__S_14,
#line 421 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_20,
#line 421 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_21,
#line 421 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_22,
#line 421 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_23,
#line 421 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_24,
#line 421 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_25,
#line 421 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_26,
#line 421 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_27,
#line 421 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_E_0_28,
#line 421 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_E_29)
#line 421 "set.m"
{
#line 181 "set_ordlist.opt"
  {
#line 181 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 181 "set_ordlist.opt"
    MR_Word mercury__set__V_30_65 = (MR_Word) mercury__set__S_14;

#line 183 "set_ordlist.opt"
    {
#line 183 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl5_12_p_4(mercury__set__TypeInfo_for_T_35, mercury__set__TypeInfo_for_A_36, mercury__set__TypeInfo_for_B_37, mercury__set__TypeInfo_for_C_38, mercury__set__TypeInfo_for_D_39, mercury__set__TypeInfo_for_E_40, mercury__set__F_13, mercury__set__V_30_65, mercury__set__STATE_VARIABLE_A_0_20, mercury__set__STATE_VARIABLE_A_21, mercury__set__STATE_VARIABLE_B_0_22, mercury__set__STATE_VARIABLE_B_23, mercury__set__STATE_VARIABLE_C_0_24, mercury__set__STATE_VARIABLE_C_25, mercury__set__STATE_VARIABLE_D_0_26, mercury__set__STATE_VARIABLE_D_27, mercury__set__STATE_VARIABLE_E_0_28, mercury__set__STATE_VARIABLE_E_29);
    }
#line 181 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 181 "set_ordlist.opt"
  }
#line 421 "set.m"
}

#line 418 "set.m"
MR_bool MR_CALL 
mercury__set__foldl5_12_p_3(
#line 418 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_35,
#line 418 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_36,
#line 418 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_37,
#line 418 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_38,
#line 418 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_39,
#line 418 "set.m"
  MR_Word mercury__set__TypeInfo_for_E_40,
#line 418 "set.m"
  MR_Word mercury__set__F_13,
#line 418 "set.m"
  MR_Word mercury__set__S_14,
#line 418 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_20,
#line 418 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_21,
#line 418 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_22,
#line 418 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_23,
#line 418 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_24,
#line 418 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_25,
#line 418 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_26,
#line 418 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_27,
#line 418 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_E_0_28,
#line 418 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_E_29)
#line 418 "set.m"
{
#line 181 "set_ordlist.opt"
  {
#line 181 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 181 "set_ordlist.opt"
    MR_Word mercury__set__V_30_65 = (MR_Word) mercury__set__S_14;

#line 183 "set_ordlist.opt"
    {
#line 183 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl5_12_p_3(mercury__set__TypeInfo_for_T_35, mercury__set__TypeInfo_for_A_36, mercury__set__TypeInfo_for_B_37, mercury__set__TypeInfo_for_C_38, mercury__set__TypeInfo_for_D_39, mercury__set__TypeInfo_for_E_40, mercury__set__F_13, mercury__set__V_30_65, mercury__set__STATE_VARIABLE_A_0_20, mercury__set__STATE_VARIABLE_A_21, mercury__set__STATE_VARIABLE_B_0_22, mercury__set__STATE_VARIABLE_B_23, mercury__set__STATE_VARIABLE_C_0_24, mercury__set__STATE_VARIABLE_C_25, mercury__set__STATE_VARIABLE_D_0_26, mercury__set__STATE_VARIABLE_D_27, mercury__set__STATE_VARIABLE_E_0_28, mercury__set__STATE_VARIABLE_E_29);
    }
#line 181 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 181 "set_ordlist.opt"
  }
#line 418 "set.m"
}

#line 415 "set.m"
void MR_CALL 
mercury__set__foldl5_12_p_2(
#line 415 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_35,
#line 415 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_36,
#line 415 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_37,
#line 415 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_38,
#line 415 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_39,
#line 415 "set.m"
  MR_Word mercury__set__TypeInfo_for_E_40,
#line 415 "set.m"
  MR_Word mercury__set__F_13,
#line 415 "set.m"
  MR_Word mercury__set__S_14,
#line 415 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_20,
#line 415 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_21,
#line 415 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_22,
#line 415 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_23,
#line 415 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_24,
#line 415 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_25,
#line 415 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_26,
#line 415 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_27,
#line 415 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_E_0_28,
#line 415 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_E_29)
#line 415 "set.m"
{
#line 181 "set_ordlist.opt"
  {
#line 181 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 181 "set_ordlist.opt"
    MR_Word mercury__set__V_30_65 = (MR_Word) mercury__set__S_14;

#line 183 "set_ordlist.opt"
    {
#line 183 "set_ordlist.opt"
      mercury__list__foldl5_12_p_2(mercury__set__TypeInfo_for_T_35, mercury__set__TypeInfo_for_A_36, mercury__set__TypeInfo_for_B_37, mercury__set__TypeInfo_for_C_38, mercury__set__TypeInfo_for_D_39, mercury__set__TypeInfo_for_E_40, mercury__set__F_13, mercury__set__V_30_65, mercury__set__STATE_VARIABLE_A_0_20, mercury__set__STATE_VARIABLE_A_21, mercury__set__STATE_VARIABLE_B_0_22, mercury__set__STATE_VARIABLE_B_23, mercury__set__STATE_VARIABLE_C_0_24, mercury__set__STATE_VARIABLE_C_25, mercury__set__STATE_VARIABLE_D_0_26, mercury__set__STATE_VARIABLE_D_27, mercury__set__STATE_VARIABLE_E_0_28, mercury__set__STATE_VARIABLE_E_29);
#line 183 "set_ordlist.opt"
      return;
    }
#line 181 "set_ordlist.opt"
  }
#line 415 "set.m"
}

#line 412 "set.m"
void MR_CALL 
mercury__set__foldl5_12_p_1(
#line 412 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_35,
#line 412 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_36,
#line 412 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_37,
#line 412 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_38,
#line 412 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_39,
#line 412 "set.m"
  MR_Word mercury__set__TypeInfo_for_E_40,
#line 412 "set.m"
  MR_Word mercury__set__F_13,
#line 412 "set.m"
  MR_Word mercury__set__S_14,
#line 412 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_20,
#line 412 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_21,
#line 412 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_22,
#line 412 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_23,
#line 412 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_24,
#line 412 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_25,
#line 412 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_26,
#line 412 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_27,
#line 412 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_E_0_28,
#line 412 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_E_29)
#line 412 "set.m"
{
#line 181 "set_ordlist.opt"
  {
#line 181 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 181 "set_ordlist.opt"
    MR_Word mercury__set__V_30_65 = (MR_Word) mercury__set__S_14;

#line 183 "set_ordlist.opt"
    {
#line 183 "set_ordlist.opt"
      mercury__list__foldl5_12_p_1(mercury__set__TypeInfo_for_T_35, mercury__set__TypeInfo_for_A_36, mercury__set__TypeInfo_for_B_37, mercury__set__TypeInfo_for_C_38, mercury__set__TypeInfo_for_D_39, mercury__set__TypeInfo_for_E_40, mercury__set__F_13, mercury__set__V_30_65, mercury__set__STATE_VARIABLE_A_0_20, mercury__set__STATE_VARIABLE_A_21, mercury__set__STATE_VARIABLE_B_0_22, mercury__set__STATE_VARIABLE_B_23, mercury__set__STATE_VARIABLE_C_0_24, mercury__set__STATE_VARIABLE_C_25, mercury__set__STATE_VARIABLE_D_0_26, mercury__set__STATE_VARIABLE_D_27, mercury__set__STATE_VARIABLE_E_0_28, mercury__set__STATE_VARIABLE_E_29);
#line 183 "set_ordlist.opt"
      return;
    }
#line 181 "set_ordlist.opt"
  }
#line 412 "set.m"
}

#line 409 "set.m"
void MR_CALL 
mercury__set__foldl5_12_p_0(
#line 409 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_35,
#line 409 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_36,
#line 409 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_37,
#line 409 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_38,
#line 409 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_39,
#line 409 "set.m"
  MR_Word mercury__set__TypeInfo_for_E_40,
#line 409 "set.m"
  MR_Word mercury__set__F_13,
#line 409 "set.m"
  MR_Word mercury__set__S_14,
#line 409 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_20,
#line 409 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_21,
#line 409 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_22,
#line 409 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_23,
#line 409 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_24,
#line 409 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_25,
#line 409 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_26,
#line 409 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_27,
#line 409 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_E_0_28,
#line 409 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_E_29)
#line 409 "set.m"
{
#line 181 "set_ordlist.opt"
  {
#line 181 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 181 "set_ordlist.opt"
    MR_Word mercury__set__V_30_65 = (MR_Word) mercury__set__S_14;

#line 183 "set_ordlist.opt"
    {
#line 183 "set_ordlist.opt"
      mercury__list__foldl5_12_p_0(mercury__set__TypeInfo_for_T_35, mercury__set__TypeInfo_for_A_36, mercury__set__TypeInfo_for_B_37, mercury__set__TypeInfo_for_C_38, mercury__set__TypeInfo_for_D_39, mercury__set__TypeInfo_for_E_40, mercury__set__F_13, mercury__set__V_30_65, mercury__set__STATE_VARIABLE_A_0_20, mercury__set__STATE_VARIABLE_A_21, mercury__set__STATE_VARIABLE_B_0_22, mercury__set__STATE_VARIABLE_B_23, mercury__set__STATE_VARIABLE_C_0_24, mercury__set__STATE_VARIABLE_C_25, mercury__set__STATE_VARIABLE_D_0_26, mercury__set__STATE_VARIABLE_D_27, mercury__set__STATE_VARIABLE_E_0_28, mercury__set__STATE_VARIABLE_E_29);
#line 183 "set_ordlist.opt"
      return;
    }
#line 181 "set_ordlist.opt"
  }
#line 409 "set.m"
}

#line 403 "set.m"
MR_bool MR_CALL 
mercury__set__fold5_12_p_5(
#line 403 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_35,
#line 403 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_36,
#line 403 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_37,
#line 403 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_38,
#line 403 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_39,
#line 403 "set.m"
  MR_Word mercury__set__TypeInfo_for_E_40,
#line 403 "set.m"
  MR_Word mercury__set__F_13,
#line 403 "set.m"
  MR_Word mercury__set__S_14,
#line 403 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_20,
#line 403 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_21,
#line 403 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_22,
#line 403 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_23,
#line 403 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_24,
#line 403 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_25,
#line 403 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_26,
#line 403 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_27,
#line 403 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_E_0_28,
#line 403 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_E_29)
#line 403 "set.m"
{
#line 181 "set_ordlist.opt"
  {
#line 181 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 181 "set_ordlist.opt"
    MR_Word mercury__set__V_30_87 = (MR_Word) mercury__set__S_14;

#line 183 "set_ordlist.opt"
    {
#line 183 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl5_12_p_5(mercury__set__TypeInfo_for_T_35, mercury__set__TypeInfo_for_A_36, mercury__set__TypeInfo_for_B_37, mercury__set__TypeInfo_for_C_38, mercury__set__TypeInfo_for_D_39, mercury__set__TypeInfo_for_E_40, mercury__set__F_13, mercury__set__V_30_87, mercury__set__STATE_VARIABLE_A_0_20, mercury__set__STATE_VARIABLE_A_21, mercury__set__STATE_VARIABLE_B_0_22, mercury__set__STATE_VARIABLE_B_23, mercury__set__STATE_VARIABLE_C_0_24, mercury__set__STATE_VARIABLE_C_25, mercury__set__STATE_VARIABLE_D_0_26, mercury__set__STATE_VARIABLE_D_27, mercury__set__STATE_VARIABLE_E_0_28, mercury__set__STATE_VARIABLE_E_29);
    }
#line 181 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 181 "set_ordlist.opt"
  }
#line 403 "set.m"
}

#line 400 "set.m"
MR_bool MR_CALL 
mercury__set__fold5_12_p_4(
#line 400 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_35,
#line 400 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_36,
#line 400 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_37,
#line 400 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_38,
#line 400 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_39,
#line 400 "set.m"
  MR_Word mercury__set__TypeInfo_for_E_40,
#line 400 "set.m"
  MR_Word mercury__set__F_13,
#line 400 "set.m"
  MR_Word mercury__set__S_14,
#line 400 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_20,
#line 400 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_21,
#line 400 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_22,
#line 400 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_23,
#line 400 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_24,
#line 400 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_25,
#line 400 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_26,
#line 400 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_27,
#line 400 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_E_0_28,
#line 400 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_E_29)
#line 400 "set.m"
{
#line 181 "set_ordlist.opt"
  {
#line 181 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 181 "set_ordlist.opt"
    MR_Word mercury__set__V_30_87 = (MR_Word) mercury__set__S_14;

#line 183 "set_ordlist.opt"
    {
#line 183 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl5_12_p_4(mercury__set__TypeInfo_for_T_35, mercury__set__TypeInfo_for_A_36, mercury__set__TypeInfo_for_B_37, mercury__set__TypeInfo_for_C_38, mercury__set__TypeInfo_for_D_39, mercury__set__TypeInfo_for_E_40, mercury__set__F_13, mercury__set__V_30_87, mercury__set__STATE_VARIABLE_A_0_20, mercury__set__STATE_VARIABLE_A_21, mercury__set__STATE_VARIABLE_B_0_22, mercury__set__STATE_VARIABLE_B_23, mercury__set__STATE_VARIABLE_C_0_24, mercury__set__STATE_VARIABLE_C_25, mercury__set__STATE_VARIABLE_D_0_26, mercury__set__STATE_VARIABLE_D_27, mercury__set__STATE_VARIABLE_E_0_28, mercury__set__STATE_VARIABLE_E_29);
    }
#line 181 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 181 "set_ordlist.opt"
  }
#line 400 "set.m"
}

#line 397 "set.m"
MR_bool MR_CALL 
mercury__set__fold5_12_p_3(
#line 397 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_35,
#line 397 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_36,
#line 397 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_37,
#line 397 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_38,
#line 397 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_39,
#line 397 "set.m"
  MR_Word mercury__set__TypeInfo_for_E_40,
#line 397 "set.m"
  MR_Word mercury__set__F_13,
#line 397 "set.m"
  MR_Word mercury__set__S_14,
#line 397 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_20,
#line 397 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_21,
#line 397 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_22,
#line 397 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_23,
#line 397 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_24,
#line 397 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_25,
#line 397 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_26,
#line 397 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_27,
#line 397 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_E_0_28,
#line 397 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_E_29)
#line 397 "set.m"
{
#line 181 "set_ordlist.opt"
  {
#line 181 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 181 "set_ordlist.opt"
    MR_Word mercury__set__V_30_87 = (MR_Word) mercury__set__S_14;

#line 183 "set_ordlist.opt"
    {
#line 183 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl5_12_p_3(mercury__set__TypeInfo_for_T_35, mercury__set__TypeInfo_for_A_36, mercury__set__TypeInfo_for_B_37, mercury__set__TypeInfo_for_C_38, mercury__set__TypeInfo_for_D_39, mercury__set__TypeInfo_for_E_40, mercury__set__F_13, mercury__set__V_30_87, mercury__set__STATE_VARIABLE_A_0_20, mercury__set__STATE_VARIABLE_A_21, mercury__set__STATE_VARIABLE_B_0_22, mercury__set__STATE_VARIABLE_B_23, mercury__set__STATE_VARIABLE_C_0_24, mercury__set__STATE_VARIABLE_C_25, mercury__set__STATE_VARIABLE_D_0_26, mercury__set__STATE_VARIABLE_D_27, mercury__set__STATE_VARIABLE_E_0_28, mercury__set__STATE_VARIABLE_E_29);
    }
#line 181 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 181 "set_ordlist.opt"
  }
#line 397 "set.m"
}

#line 394 "set.m"
void MR_CALL 
mercury__set__fold5_12_p_2(
#line 394 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_35,
#line 394 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_36,
#line 394 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_37,
#line 394 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_38,
#line 394 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_39,
#line 394 "set.m"
  MR_Word mercury__set__TypeInfo_for_E_40,
#line 394 "set.m"
  MR_Word mercury__set__F_13,
#line 394 "set.m"
  MR_Word mercury__set__S_14,
#line 394 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_20,
#line 394 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_21,
#line 394 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_22,
#line 394 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_23,
#line 394 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_24,
#line 394 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_25,
#line 394 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_26,
#line 394 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_27,
#line 394 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_E_0_28,
#line 394 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_E_29)
#line 394 "set.m"
{
#line 181 "set_ordlist.opt"
  {
#line 181 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 181 "set_ordlist.opt"
    MR_Word mercury__set__V_30_87 = (MR_Word) mercury__set__S_14;

#line 183 "set_ordlist.opt"
    {
#line 183 "set_ordlist.opt"
      mercury__list__foldl5_12_p_2(mercury__set__TypeInfo_for_T_35, mercury__set__TypeInfo_for_A_36, mercury__set__TypeInfo_for_B_37, mercury__set__TypeInfo_for_C_38, mercury__set__TypeInfo_for_D_39, mercury__set__TypeInfo_for_E_40, mercury__set__F_13, mercury__set__V_30_87, mercury__set__STATE_VARIABLE_A_0_20, mercury__set__STATE_VARIABLE_A_21, mercury__set__STATE_VARIABLE_B_0_22, mercury__set__STATE_VARIABLE_B_23, mercury__set__STATE_VARIABLE_C_0_24, mercury__set__STATE_VARIABLE_C_25, mercury__set__STATE_VARIABLE_D_0_26, mercury__set__STATE_VARIABLE_D_27, mercury__set__STATE_VARIABLE_E_0_28, mercury__set__STATE_VARIABLE_E_29);
#line 183 "set_ordlist.opt"
      return;
    }
#line 181 "set_ordlist.opt"
  }
#line 394 "set.m"
}

#line 391 "set.m"
void MR_CALL 
mercury__set__fold5_12_p_1(
#line 391 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_35,
#line 391 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_36,
#line 391 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_37,
#line 391 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_38,
#line 391 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_39,
#line 391 "set.m"
  MR_Word mercury__set__TypeInfo_for_E_40,
#line 391 "set.m"
  MR_Word mercury__set__F_13,
#line 391 "set.m"
  MR_Word mercury__set__S_14,
#line 391 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_20,
#line 391 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_21,
#line 391 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_22,
#line 391 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_23,
#line 391 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_24,
#line 391 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_25,
#line 391 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_26,
#line 391 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_27,
#line 391 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_E_0_28,
#line 391 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_E_29)
#line 391 "set.m"
{
#line 181 "set_ordlist.opt"
  {
#line 181 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 181 "set_ordlist.opt"
    MR_Word mercury__set__V_30_87 = (MR_Word) mercury__set__S_14;

#line 183 "set_ordlist.opt"
    {
#line 183 "set_ordlist.opt"
      mercury__list__foldl5_12_p_1(mercury__set__TypeInfo_for_T_35, mercury__set__TypeInfo_for_A_36, mercury__set__TypeInfo_for_B_37, mercury__set__TypeInfo_for_C_38, mercury__set__TypeInfo_for_D_39, mercury__set__TypeInfo_for_E_40, mercury__set__F_13, mercury__set__V_30_87, mercury__set__STATE_VARIABLE_A_0_20, mercury__set__STATE_VARIABLE_A_21, mercury__set__STATE_VARIABLE_B_0_22, mercury__set__STATE_VARIABLE_B_23, mercury__set__STATE_VARIABLE_C_0_24, mercury__set__STATE_VARIABLE_C_25, mercury__set__STATE_VARIABLE_D_0_26, mercury__set__STATE_VARIABLE_D_27, mercury__set__STATE_VARIABLE_E_0_28, mercury__set__STATE_VARIABLE_E_29);
#line 183 "set_ordlist.opt"
      return;
    }
#line 181 "set_ordlist.opt"
  }
#line 391 "set.m"
}

#line 388 "set.m"
void MR_CALL 
mercury__set__fold5_12_p_0(
#line 388 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_35,
#line 388 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_36,
#line 388 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_37,
#line 388 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_38,
#line 388 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_39,
#line 388 "set.m"
  MR_Word mercury__set__TypeInfo_for_E_40,
#line 388 "set.m"
  MR_Word mercury__set__F_13,
#line 388 "set.m"
  MR_Word mercury__set__S_14,
#line 388 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_20,
#line 388 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_21,
#line 388 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_22,
#line 388 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_23,
#line 388 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_24,
#line 388 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_25,
#line 388 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_26,
#line 388 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_27,
#line 388 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_E_0_28,
#line 388 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_E_29)
#line 388 "set.m"
{
#line 181 "set_ordlist.opt"
  {
#line 181 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 181 "set_ordlist.opt"
    MR_Word mercury__set__V_30_87 = (MR_Word) mercury__set__S_14;

#line 183 "set_ordlist.opt"
    {
#line 183 "set_ordlist.opt"
      mercury__list__foldl5_12_p_0(mercury__set__TypeInfo_for_T_35, mercury__set__TypeInfo_for_A_36, mercury__set__TypeInfo_for_B_37, mercury__set__TypeInfo_for_C_38, mercury__set__TypeInfo_for_D_39, mercury__set__TypeInfo_for_E_40, mercury__set__F_13, mercury__set__V_30_87, mercury__set__STATE_VARIABLE_A_0_20, mercury__set__STATE_VARIABLE_A_21, mercury__set__STATE_VARIABLE_B_0_22, mercury__set__STATE_VARIABLE_B_23, mercury__set__STATE_VARIABLE_C_0_24, mercury__set__STATE_VARIABLE_C_25, mercury__set__STATE_VARIABLE_D_0_26, mercury__set__STATE_VARIABLE_D_27, mercury__set__STATE_VARIABLE_E_0_28, mercury__set__STATE_VARIABLE_E_29);
#line 183 "set_ordlist.opt"
      return;
    }
#line 181 "set_ordlist.opt"
  }
#line 388 "set.m"
}

#line 383 "set.m"
MR_bool MR_CALL 
mercury__set__foldl4_10_p_5(
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
#line 176 "set_ordlist.opt"
  {
#line 176 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 176 "set_ordlist.opt"
    MR_Word mercury__set__V_25_54 = (MR_Word) mercury__set__S_12;

#line 178 "set_ordlist.opt"
    {
#line 178 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl4_10_p_7(mercury__set__TypeInfo_for_T_29, mercury__set__TypeInfo_for_A_30, mercury__set__TypeInfo_for_B_31, mercury__set__TypeInfo_for_C_32, mercury__set__TypeInfo_for_D_33, mercury__set__F_11, mercury__set__V_25_54, mercury__set__STATE_VARIABLE_A_0_17, mercury__set__STATE_VARIABLE_A_18, mercury__set__STATE_VARIABLE_B_0_19, mercury__set__STATE_VARIABLE_B_20, mercury__set__STATE_VARIABLE_C_0_21, mercury__set__STATE_VARIABLE_C_22, mercury__set__STATE_VARIABLE_D_0_23, mercury__set__STATE_VARIABLE_D_24);
    }
#line 176 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 176 "set_ordlist.opt"
  }
#line 383 "set.m"
}

#line 381 "set.m"
MR_bool MR_CALL 
mercury__set__foldl4_10_p_4(
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
#line 176 "set_ordlist.opt"
  {
#line 176 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 176 "set_ordlist.opt"
    MR_Word mercury__set__V_25_54 = (MR_Word) mercury__set__S_12;

#line 178 "set_ordlist.opt"
    {
#line 178 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl4_10_p_6(mercury__set__TypeInfo_for_T_29, mercury__set__TypeInfo_for_A_30, mercury__set__TypeInfo_for_B_31, mercury__set__TypeInfo_for_C_32, mercury__set__TypeInfo_for_D_33, mercury__set__F_11, mercury__set__V_25_54, mercury__set__STATE_VARIABLE_A_0_17, mercury__set__STATE_VARIABLE_A_18, mercury__set__STATE_VARIABLE_B_0_19, mercury__set__STATE_VARIABLE_B_20, mercury__set__STATE_VARIABLE_C_0_21, mercury__set__STATE_VARIABLE_C_22, mercury__set__STATE_VARIABLE_D_0_23, mercury__set__STATE_VARIABLE_D_24);
    }
#line 176 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 176 "set_ordlist.opt"
  }
#line 381 "set.m"
}

#line 379 "set.m"
MR_bool MR_CALL 
mercury__set__foldl4_10_p_3(
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
#line 176 "set_ordlist.opt"
  {
#line 176 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 176 "set_ordlist.opt"
    MR_Word mercury__set__V_25_54 = (MR_Word) mercury__set__S_12;

#line 178 "set_ordlist.opt"
    {
#line 178 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl4_10_p_5(mercury__set__TypeInfo_for_T_29, mercury__set__TypeInfo_for_A_30, mercury__set__TypeInfo_for_B_31, mercury__set__TypeInfo_for_C_32, mercury__set__TypeInfo_for_D_33, mercury__set__F_11, mercury__set__V_25_54, mercury__set__STATE_VARIABLE_A_0_17, mercury__set__STATE_VARIABLE_A_18, mercury__set__STATE_VARIABLE_B_0_19, mercury__set__STATE_VARIABLE_B_20, mercury__set__STATE_VARIABLE_C_0_21, mercury__set__STATE_VARIABLE_C_22, mercury__set__STATE_VARIABLE_D_0_23, mercury__set__STATE_VARIABLE_D_24);
    }
#line 176 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 176 "set_ordlist.opt"
  }
#line 379 "set.m"
}

#line 377 "set.m"
void MR_CALL 
mercury__set__foldl4_10_p_2(
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
#line 176 "set_ordlist.opt"
  {
#line 176 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 176 "set_ordlist.opt"
    MR_Word mercury__set__V_25_54 = (MR_Word) mercury__set__S_12;

#line 178 "set_ordlist.opt"
    {
#line 178 "set_ordlist.opt"
      mercury__list__foldl4_10_p_2(mercury__set__TypeInfo_for_T_29, mercury__set__TypeInfo_for_A_30, mercury__set__TypeInfo_for_B_31, mercury__set__TypeInfo_for_C_32, mercury__set__TypeInfo_for_D_33, mercury__set__F_11, mercury__set__V_25_54, mercury__set__STATE_VARIABLE_A_0_17, mercury__set__STATE_VARIABLE_A_18, mercury__set__STATE_VARIABLE_B_0_19, mercury__set__STATE_VARIABLE_B_20, mercury__set__STATE_VARIABLE_C_0_21, mercury__set__STATE_VARIABLE_C_22, mercury__set__STATE_VARIABLE_D_0_23, mercury__set__STATE_VARIABLE_D_24);
#line 178 "set_ordlist.opt"
      return;
    }
#line 176 "set_ordlist.opt"
  }
#line 377 "set.m"
}

#line 375 "set.m"
void MR_CALL 
mercury__set__foldl4_10_p_1(
#line 375 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_29,
#line 375 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_30,
#line 375 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_31,
#line 375 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_32,
#line 375 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_33,
#line 375 "set.m"
  MR_Word mercury__set__F_11,
#line 375 "set.m"
  MR_Word mercury__set__S_12,
#line 375 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_17,
#line 375 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_18,
#line 375 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_19,
#line 375 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_20,
#line 375 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_21,
#line 375 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_22,
#line 375 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_23,
#line 375 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_24)
#line 375 "set.m"
{
#line 176 "set_ordlist.opt"
  {
#line 176 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 176 "set_ordlist.opt"
    MR_Word mercury__set__V_25_54 = (MR_Word) mercury__set__S_12;

#line 178 "set_ordlist.opt"
    {
#line 178 "set_ordlist.opt"
      mercury__list__foldl4_10_p_1(mercury__set__TypeInfo_for_T_29, mercury__set__TypeInfo_for_A_30, mercury__set__TypeInfo_for_B_31, mercury__set__TypeInfo_for_C_32, mercury__set__TypeInfo_for_D_33, mercury__set__F_11, mercury__set__V_25_54, mercury__set__STATE_VARIABLE_A_0_17, mercury__set__STATE_VARIABLE_A_18, mercury__set__STATE_VARIABLE_B_0_19, mercury__set__STATE_VARIABLE_B_20, mercury__set__STATE_VARIABLE_C_0_21, mercury__set__STATE_VARIABLE_C_22, mercury__set__STATE_VARIABLE_D_0_23, mercury__set__STATE_VARIABLE_D_24);
#line 178 "set_ordlist.opt"
      return;
    }
#line 176 "set_ordlist.opt"
  }
#line 375 "set.m"
}

#line 373 "set.m"
void MR_CALL 
mercury__set__foldl4_10_p_0(
#line 373 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_29,
#line 373 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_30,
#line 373 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_31,
#line 373 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_32,
#line 373 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_33,
#line 373 "set.m"
  MR_Word mercury__set__F_11,
#line 373 "set.m"
  MR_Word mercury__set__S_12,
#line 373 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_17,
#line 373 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_18,
#line 373 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_19,
#line 373 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_20,
#line 373 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_21,
#line 373 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_22,
#line 373 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_23,
#line 373 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_24)
#line 373 "set.m"
{
#line 176 "set_ordlist.opt"
  {
#line 176 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 176 "set_ordlist.opt"
    MR_Word mercury__set__V_25_54 = (MR_Word) mercury__set__S_12;

#line 178 "set_ordlist.opt"
    {
#line 178 "set_ordlist.opt"
      mercury__list__foldl4_10_p_0(mercury__set__TypeInfo_for_T_29, mercury__set__TypeInfo_for_A_30, mercury__set__TypeInfo_for_B_31, mercury__set__TypeInfo_for_C_32, mercury__set__TypeInfo_for_D_33, mercury__set__F_11, mercury__set__V_25_54, mercury__set__STATE_VARIABLE_A_0_17, mercury__set__STATE_VARIABLE_A_18, mercury__set__STATE_VARIABLE_B_0_19, mercury__set__STATE_VARIABLE_B_20, mercury__set__STATE_VARIABLE_C_0_21, mercury__set__STATE_VARIABLE_C_22, mercury__set__STATE_VARIABLE_D_0_23, mercury__set__STATE_VARIABLE_D_24);
#line 178 "set_ordlist.opt"
      return;
    }
#line 176 "set_ordlist.opt"
  }
#line 373 "set.m"
}

#line 368 "set.m"
MR_bool MR_CALL 
mercury__set__fold4_10_p_5(
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
#line 176 "set_ordlist.opt"
  {
#line 176 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 176 "set_ordlist.opt"
    MR_Word mercury__set__V_25_72 = (MR_Word) mercury__set__S_12;

#line 178 "set_ordlist.opt"
    {
#line 178 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl4_10_p_7(mercury__set__TypeInfo_for_T_29, mercury__set__TypeInfo_for_A_30, mercury__set__TypeInfo_for_B_31, mercury__set__TypeInfo_for_C_32, mercury__set__TypeInfo_for_D_33, mercury__set__F_11, mercury__set__V_25_72, mercury__set__STATE_VARIABLE_A_0_17, mercury__set__STATE_VARIABLE_A_18, mercury__set__STATE_VARIABLE_B_0_19, mercury__set__STATE_VARIABLE_B_20, mercury__set__STATE_VARIABLE_C_0_21, mercury__set__STATE_VARIABLE_C_22, mercury__set__STATE_VARIABLE_D_0_23, mercury__set__STATE_VARIABLE_D_24);
    }
#line 176 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 176 "set_ordlist.opt"
  }
#line 368 "set.m"
}

#line 366 "set.m"
MR_bool MR_CALL 
mercury__set__fold4_10_p_4(
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
#line 176 "set_ordlist.opt"
  {
#line 176 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 176 "set_ordlist.opt"
    MR_Word mercury__set__V_25_72 = (MR_Word) mercury__set__S_12;

#line 178 "set_ordlist.opt"
    {
#line 178 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl4_10_p_6(mercury__set__TypeInfo_for_T_29, mercury__set__TypeInfo_for_A_30, mercury__set__TypeInfo_for_B_31, mercury__set__TypeInfo_for_C_32, mercury__set__TypeInfo_for_D_33, mercury__set__F_11, mercury__set__V_25_72, mercury__set__STATE_VARIABLE_A_0_17, mercury__set__STATE_VARIABLE_A_18, mercury__set__STATE_VARIABLE_B_0_19, mercury__set__STATE_VARIABLE_B_20, mercury__set__STATE_VARIABLE_C_0_21, mercury__set__STATE_VARIABLE_C_22, mercury__set__STATE_VARIABLE_D_0_23, mercury__set__STATE_VARIABLE_D_24);
    }
#line 176 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 176 "set_ordlist.opt"
  }
#line 366 "set.m"
}

#line 364 "set.m"
MR_bool MR_CALL 
mercury__set__fold4_10_p_3(
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
#line 176 "set_ordlist.opt"
  {
#line 176 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 176 "set_ordlist.opt"
    MR_Word mercury__set__V_25_72 = (MR_Word) mercury__set__S_12;

#line 178 "set_ordlist.opt"
    {
#line 178 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl4_10_p_5(mercury__set__TypeInfo_for_T_29, mercury__set__TypeInfo_for_A_30, mercury__set__TypeInfo_for_B_31, mercury__set__TypeInfo_for_C_32, mercury__set__TypeInfo_for_D_33, mercury__set__F_11, mercury__set__V_25_72, mercury__set__STATE_VARIABLE_A_0_17, mercury__set__STATE_VARIABLE_A_18, mercury__set__STATE_VARIABLE_B_0_19, mercury__set__STATE_VARIABLE_B_20, mercury__set__STATE_VARIABLE_C_0_21, mercury__set__STATE_VARIABLE_C_22, mercury__set__STATE_VARIABLE_D_0_23, mercury__set__STATE_VARIABLE_D_24);
    }
#line 176 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 176 "set_ordlist.opt"
  }
#line 364 "set.m"
}

#line 362 "set.m"
void MR_CALL 
mercury__set__fold4_10_p_2(
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
#line 176 "set_ordlist.opt"
  {
#line 176 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 176 "set_ordlist.opt"
    MR_Word mercury__set__V_25_72 = (MR_Word) mercury__set__S_12;

#line 178 "set_ordlist.opt"
    {
#line 178 "set_ordlist.opt"
      mercury__list__foldl4_10_p_2(mercury__set__TypeInfo_for_T_29, mercury__set__TypeInfo_for_A_30, mercury__set__TypeInfo_for_B_31, mercury__set__TypeInfo_for_C_32, mercury__set__TypeInfo_for_D_33, mercury__set__F_11, mercury__set__V_25_72, mercury__set__STATE_VARIABLE_A_0_17, mercury__set__STATE_VARIABLE_A_18, mercury__set__STATE_VARIABLE_B_0_19, mercury__set__STATE_VARIABLE_B_20, mercury__set__STATE_VARIABLE_C_0_21, mercury__set__STATE_VARIABLE_C_22, mercury__set__STATE_VARIABLE_D_0_23, mercury__set__STATE_VARIABLE_D_24);
#line 178 "set_ordlist.opt"
      return;
    }
#line 176 "set_ordlist.opt"
  }
#line 362 "set.m"
}

#line 360 "set.m"
void MR_CALL 
mercury__set__fold4_10_p_1(
#line 360 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_29,
#line 360 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_30,
#line 360 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_31,
#line 360 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_32,
#line 360 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_33,
#line 360 "set.m"
  MR_Word mercury__set__F_11,
#line 360 "set.m"
  MR_Word mercury__set__S_12,
#line 360 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_17,
#line 360 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_18,
#line 360 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_19,
#line 360 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_20,
#line 360 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_21,
#line 360 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_22,
#line 360 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_23,
#line 360 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_24)
#line 360 "set.m"
{
#line 176 "set_ordlist.opt"
  {
#line 176 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 176 "set_ordlist.opt"
    MR_Word mercury__set__V_25_72 = (MR_Word) mercury__set__S_12;

#line 178 "set_ordlist.opt"
    {
#line 178 "set_ordlist.opt"
      mercury__list__foldl4_10_p_1(mercury__set__TypeInfo_for_T_29, mercury__set__TypeInfo_for_A_30, mercury__set__TypeInfo_for_B_31, mercury__set__TypeInfo_for_C_32, mercury__set__TypeInfo_for_D_33, mercury__set__F_11, mercury__set__V_25_72, mercury__set__STATE_VARIABLE_A_0_17, mercury__set__STATE_VARIABLE_A_18, mercury__set__STATE_VARIABLE_B_0_19, mercury__set__STATE_VARIABLE_B_20, mercury__set__STATE_VARIABLE_C_0_21, mercury__set__STATE_VARIABLE_C_22, mercury__set__STATE_VARIABLE_D_0_23, mercury__set__STATE_VARIABLE_D_24);
#line 178 "set_ordlist.opt"
      return;
    }
#line 176 "set_ordlist.opt"
  }
#line 360 "set.m"
}

#line 358 "set.m"
void MR_CALL 
mercury__set__fold4_10_p_0(
#line 358 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_29,
#line 358 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_30,
#line 358 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_31,
#line 358 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_32,
#line 358 "set.m"
  MR_Word mercury__set__TypeInfo_for_D_33,
#line 358 "set.m"
  MR_Word mercury__set__F_11,
#line 358 "set.m"
  MR_Word mercury__set__S_12,
#line 358 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_17,
#line 358 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_18,
#line 358 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_19,
#line 358 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_20,
#line 358 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_21,
#line 358 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_22,
#line 358 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_D_0_23,
#line 358 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_D_24)
#line 358 "set.m"
{
#line 176 "set_ordlist.opt"
  {
#line 176 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 176 "set_ordlist.opt"
    MR_Word mercury__set__V_25_72 = (MR_Word) mercury__set__S_12;

#line 178 "set_ordlist.opt"
    {
#line 178 "set_ordlist.opt"
      mercury__list__foldl4_10_p_0(mercury__set__TypeInfo_for_T_29, mercury__set__TypeInfo_for_A_30, mercury__set__TypeInfo_for_B_31, mercury__set__TypeInfo_for_C_32, mercury__set__TypeInfo_for_D_33, mercury__set__F_11, mercury__set__V_25_72, mercury__set__STATE_VARIABLE_A_0_17, mercury__set__STATE_VARIABLE_A_18, mercury__set__STATE_VARIABLE_B_0_19, mercury__set__STATE_VARIABLE_B_20, mercury__set__STATE_VARIABLE_C_0_21, mercury__set__STATE_VARIABLE_C_22, mercury__set__STATE_VARIABLE_D_0_23, mercury__set__STATE_VARIABLE_D_24);
#line 178 "set_ordlist.opt"
      return;
    }
#line 176 "set_ordlist.opt"
  }
#line 358 "set.m"
}

#line 353 "set.m"
MR_bool MR_CALL 
mercury__set__foldl3_8_p_5(
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
#line 171 "set_ordlist.opt"
  {
#line 171 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 171 "set_ordlist.opt"
    MR_Word mercury__set__V_20_43 = (MR_Word) mercury__set__S_10;

#line 173 "set_ordlist.opt"
    {
#line 173 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl3_8_p_5(mercury__set__TypeInfo_for_T_23, mercury__set__TypeInfo_for_A_24, mercury__set__TypeInfo_for_B_25, mercury__set__TypeInfo_for_C_26, mercury__set__F_9, mercury__set__V_20_43, mercury__set__STATE_VARIABLE_A_0_14, mercury__set__STATE_VARIABLE_A_15, mercury__set__STATE_VARIABLE_B_0_16, mercury__set__STATE_VARIABLE_B_17, mercury__set__STATE_VARIABLE_C_0_18, mercury__set__STATE_VARIABLE_C_19);
    }
#line 171 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 171 "set_ordlist.opt"
  }
#line 353 "set.m"
}

#line 351 "set.m"
MR_bool MR_CALL 
mercury__set__foldl3_8_p_4(
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
#line 171 "set_ordlist.opt"
  {
#line 171 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 171 "set_ordlist.opt"
    MR_Word mercury__set__V_20_43 = (MR_Word) mercury__set__S_10;

#line 173 "set_ordlist.opt"
    {
#line 173 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl3_8_p_4(mercury__set__TypeInfo_for_T_23, mercury__set__TypeInfo_for_A_24, mercury__set__TypeInfo_for_B_25, mercury__set__TypeInfo_for_C_26, mercury__set__F_9, mercury__set__V_20_43, mercury__set__STATE_VARIABLE_A_0_14, mercury__set__STATE_VARIABLE_A_15, mercury__set__STATE_VARIABLE_B_0_16, mercury__set__STATE_VARIABLE_B_17, mercury__set__STATE_VARIABLE_C_0_18, mercury__set__STATE_VARIABLE_C_19);
    }
#line 171 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 171 "set_ordlist.opt"
  }
#line 351 "set.m"
}

#line 349 "set.m"
MR_bool MR_CALL 
mercury__set__foldl3_8_p_3(
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
#line 171 "set_ordlist.opt"
  {
#line 171 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 171 "set_ordlist.opt"
    MR_Word mercury__set__V_20_43 = (MR_Word) mercury__set__S_10;

#line 173 "set_ordlist.opt"
    {
#line 173 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl3_8_p_3(mercury__set__TypeInfo_for_T_23, mercury__set__TypeInfo_for_A_24, mercury__set__TypeInfo_for_B_25, mercury__set__TypeInfo_for_C_26, mercury__set__F_9, mercury__set__V_20_43, mercury__set__STATE_VARIABLE_A_0_14, mercury__set__STATE_VARIABLE_A_15, mercury__set__STATE_VARIABLE_B_0_16, mercury__set__STATE_VARIABLE_B_17, mercury__set__STATE_VARIABLE_C_0_18, mercury__set__STATE_VARIABLE_C_19);
    }
#line 171 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 171 "set_ordlist.opt"
  }
#line 349 "set.m"
}

#line 347 "set.m"
void MR_CALL 
mercury__set__foldl3_8_p_2(
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
#line 171 "set_ordlist.opt"
  {
#line 171 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 171 "set_ordlist.opt"
    MR_Word mercury__set__V_20_43 = (MR_Word) mercury__set__S_10;

#line 173 "set_ordlist.opt"
    {
#line 173 "set_ordlist.opt"
      mercury__list__foldl3_8_p_2(mercury__set__TypeInfo_for_T_23, mercury__set__TypeInfo_for_A_24, mercury__set__TypeInfo_for_B_25, mercury__set__TypeInfo_for_C_26, mercury__set__F_9, mercury__set__V_20_43, mercury__set__STATE_VARIABLE_A_0_14, mercury__set__STATE_VARIABLE_A_15, mercury__set__STATE_VARIABLE_B_0_16, mercury__set__STATE_VARIABLE_B_17, mercury__set__STATE_VARIABLE_C_0_18, mercury__set__STATE_VARIABLE_C_19);
#line 173 "set_ordlist.opt"
      return;
    }
#line 171 "set_ordlist.opt"
  }
#line 347 "set.m"
}

#line 345 "set.m"
void MR_CALL 
mercury__set__foldl3_8_p_1(
#line 345 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_23,
#line 345 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_24,
#line 345 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_25,
#line 345 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_26,
#line 345 "set.m"
  MR_Word mercury__set__F_9,
#line 345 "set.m"
  MR_Word mercury__set__S_10,
#line 345 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_14,
#line 345 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_15,
#line 345 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_16,
#line 345 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_17,
#line 345 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_18,
#line 345 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_19)
#line 345 "set.m"
{
#line 171 "set_ordlist.opt"
  {
#line 171 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 171 "set_ordlist.opt"
    MR_Word mercury__set__V_20_43 = (MR_Word) mercury__set__S_10;

#line 173 "set_ordlist.opt"
    {
#line 173 "set_ordlist.opt"
      mercury__list__foldl3_8_p_1(mercury__set__TypeInfo_for_T_23, mercury__set__TypeInfo_for_A_24, mercury__set__TypeInfo_for_B_25, mercury__set__TypeInfo_for_C_26, mercury__set__F_9, mercury__set__V_20_43, mercury__set__STATE_VARIABLE_A_0_14, mercury__set__STATE_VARIABLE_A_15, mercury__set__STATE_VARIABLE_B_0_16, mercury__set__STATE_VARIABLE_B_17, mercury__set__STATE_VARIABLE_C_0_18, mercury__set__STATE_VARIABLE_C_19);
#line 173 "set_ordlist.opt"
      return;
    }
#line 171 "set_ordlist.opt"
  }
#line 345 "set.m"
}

#line 343 "set.m"
void MR_CALL 
mercury__set__foldl3_8_p_0(
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
#line 171 "set_ordlist.opt"
  {
#line 171 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 171 "set_ordlist.opt"
    MR_Word mercury__set__V_20_43 = (MR_Word) mercury__set__S_10;

#line 173 "set_ordlist.opt"
    {
#line 173 "set_ordlist.opt"
      mercury__list__foldl3_8_p_0(mercury__set__TypeInfo_for_T_23, mercury__set__TypeInfo_for_A_24, mercury__set__TypeInfo_for_B_25, mercury__set__TypeInfo_for_C_26, mercury__set__F_9, mercury__set__V_20_43, mercury__set__STATE_VARIABLE_A_0_14, mercury__set__STATE_VARIABLE_A_15, mercury__set__STATE_VARIABLE_B_0_16, mercury__set__STATE_VARIABLE_B_17, mercury__set__STATE_VARIABLE_C_0_18, mercury__set__STATE_VARIABLE_C_19);
#line 173 "set_ordlist.opt"
      return;
    }
#line 171 "set_ordlist.opt"
  }
#line 343 "set.m"
}

#line 339 "set.m"
MR_bool MR_CALL 
mercury__set__fold3_8_p_5(
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
#line 171 "set_ordlist.opt"
  {
#line 171 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 171 "set_ordlist.opt"
    MR_Word mercury__set__V_20_57 = (MR_Word) mercury__set__S_10;

#line 173 "set_ordlist.opt"
    {
#line 173 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl3_8_p_5(mercury__set__TypeInfo_for_T_23, mercury__set__TypeInfo_for_A_24, mercury__set__TypeInfo_for_B_25, mercury__set__TypeInfo_for_C_26, mercury__set__F_9, mercury__set__V_20_57, mercury__set__STATE_VARIABLE_A_0_14, mercury__set__STATE_VARIABLE_A_15, mercury__set__STATE_VARIABLE_B_0_16, mercury__set__STATE_VARIABLE_B_17, mercury__set__STATE_VARIABLE_C_0_18, mercury__set__STATE_VARIABLE_C_19);
    }
#line 171 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 171 "set_ordlist.opt"
  }
#line 339 "set.m"
}

#line 337 "set.m"
MR_bool MR_CALL 
mercury__set__fold3_8_p_4(
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
#line 171 "set_ordlist.opt"
  {
#line 171 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 171 "set_ordlist.opt"
    MR_Word mercury__set__V_20_57 = (MR_Word) mercury__set__S_10;

#line 173 "set_ordlist.opt"
    {
#line 173 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl3_8_p_4(mercury__set__TypeInfo_for_T_23, mercury__set__TypeInfo_for_A_24, mercury__set__TypeInfo_for_B_25, mercury__set__TypeInfo_for_C_26, mercury__set__F_9, mercury__set__V_20_57, mercury__set__STATE_VARIABLE_A_0_14, mercury__set__STATE_VARIABLE_A_15, mercury__set__STATE_VARIABLE_B_0_16, mercury__set__STATE_VARIABLE_B_17, mercury__set__STATE_VARIABLE_C_0_18, mercury__set__STATE_VARIABLE_C_19);
    }
#line 171 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 171 "set_ordlist.opt"
  }
#line 337 "set.m"
}

#line 335 "set.m"
MR_bool MR_CALL 
mercury__set__fold3_8_p_3(
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
#line 171 "set_ordlist.opt"
  {
#line 171 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 171 "set_ordlist.opt"
    MR_Word mercury__set__V_20_57 = (MR_Word) mercury__set__S_10;

#line 173 "set_ordlist.opt"
    {
#line 173 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl3_8_p_3(mercury__set__TypeInfo_for_T_23, mercury__set__TypeInfo_for_A_24, mercury__set__TypeInfo_for_B_25, mercury__set__TypeInfo_for_C_26, mercury__set__F_9, mercury__set__V_20_57, mercury__set__STATE_VARIABLE_A_0_14, mercury__set__STATE_VARIABLE_A_15, mercury__set__STATE_VARIABLE_B_0_16, mercury__set__STATE_VARIABLE_B_17, mercury__set__STATE_VARIABLE_C_0_18, mercury__set__STATE_VARIABLE_C_19);
    }
#line 171 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 171 "set_ordlist.opt"
  }
#line 335 "set.m"
}

#line 333 "set.m"
void MR_CALL 
mercury__set__fold3_8_p_2(
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
#line 171 "set_ordlist.opt"
  {
#line 171 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 171 "set_ordlist.opt"
    MR_Word mercury__set__V_20_57 = (MR_Word) mercury__set__S_10;

#line 173 "set_ordlist.opt"
    {
#line 173 "set_ordlist.opt"
      mercury__list__foldl3_8_p_2(mercury__set__TypeInfo_for_T_23, mercury__set__TypeInfo_for_A_24, mercury__set__TypeInfo_for_B_25, mercury__set__TypeInfo_for_C_26, mercury__set__F_9, mercury__set__V_20_57, mercury__set__STATE_VARIABLE_A_0_14, mercury__set__STATE_VARIABLE_A_15, mercury__set__STATE_VARIABLE_B_0_16, mercury__set__STATE_VARIABLE_B_17, mercury__set__STATE_VARIABLE_C_0_18, mercury__set__STATE_VARIABLE_C_19);
#line 173 "set_ordlist.opt"
      return;
    }
#line 171 "set_ordlist.opt"
  }
#line 333 "set.m"
}

#line 331 "set.m"
void MR_CALL 
mercury__set__fold3_8_p_1(
#line 331 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_23,
#line 331 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_24,
#line 331 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_25,
#line 331 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_26,
#line 331 "set.m"
  MR_Word mercury__set__F_9,
#line 331 "set.m"
  MR_Word mercury__set__S_10,
#line 331 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_14,
#line 331 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_15,
#line 331 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_16,
#line 331 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_17,
#line 331 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_18,
#line 331 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_19)
#line 331 "set.m"
{
#line 171 "set_ordlist.opt"
  {
#line 171 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 171 "set_ordlist.opt"
    MR_Word mercury__set__V_20_57 = (MR_Word) mercury__set__S_10;

#line 173 "set_ordlist.opt"
    {
#line 173 "set_ordlist.opt"
      mercury__list__foldl3_8_p_1(mercury__set__TypeInfo_for_T_23, mercury__set__TypeInfo_for_A_24, mercury__set__TypeInfo_for_B_25, mercury__set__TypeInfo_for_C_26, mercury__set__F_9, mercury__set__V_20_57, mercury__set__STATE_VARIABLE_A_0_14, mercury__set__STATE_VARIABLE_A_15, mercury__set__STATE_VARIABLE_B_0_16, mercury__set__STATE_VARIABLE_B_17, mercury__set__STATE_VARIABLE_C_0_18, mercury__set__STATE_VARIABLE_C_19);
#line 173 "set_ordlist.opt"
      return;
    }
#line 171 "set_ordlist.opt"
  }
#line 331 "set.m"
}

#line 329 "set.m"
void MR_CALL 
mercury__set__fold3_8_p_0(
#line 329 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_23,
#line 329 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_24,
#line 329 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_25,
#line 329 "set.m"
  MR_Word mercury__set__TypeInfo_for_C_26,
#line 329 "set.m"
  MR_Word mercury__set__F_9,
#line 329 "set.m"
  MR_Word mercury__set__S_10,
#line 329 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_14,
#line 329 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_15,
#line 329 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_16,
#line 329 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_17,
#line 329 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_C_0_18,
#line 329 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_C_19)
#line 329 "set.m"
{
#line 171 "set_ordlist.opt"
  {
#line 171 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 171 "set_ordlist.opt"
    MR_Word mercury__set__V_20_57 = (MR_Word) mercury__set__S_10;

#line 173 "set_ordlist.opt"
    {
#line 173 "set_ordlist.opt"
      mercury__list__foldl3_8_p_0(mercury__set__TypeInfo_for_T_23, mercury__set__TypeInfo_for_A_24, mercury__set__TypeInfo_for_B_25, mercury__set__TypeInfo_for_C_26, mercury__set__F_9, mercury__set__V_20_57, mercury__set__STATE_VARIABLE_A_0_14, mercury__set__STATE_VARIABLE_A_15, mercury__set__STATE_VARIABLE_B_0_16, mercury__set__STATE_VARIABLE_B_17, mercury__set__STATE_VARIABLE_C_0_18, mercury__set__STATE_VARIABLE_C_19);
#line 173 "set_ordlist.opt"
      return;
    }
#line 171 "set_ordlist.opt"
  }
#line 329 "set.m"
}

#line 325 "set.m"
MR_bool MR_CALL 
mercury__set__foldl2_6_p_5(
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
#line 166 "set_ordlist.opt"
  {
#line 166 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 166 "set_ordlist.opt"
    MR_Word mercury__set__V_15_32 = (MR_Word) mercury__set__S_8;

#line 168 "set_ordlist.opt"
    {
#line 168 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl2_6_p_6(mercury__set__TypeInfo_for_T_17, mercury__set__TypeInfo_for_A_18, mercury__set__TypeInfo_for_B_19, mercury__set__F_7, mercury__set__V_15_32, mercury__set__STATE_VARIABLE_A_0_11, mercury__set__STATE_VARIABLE_A_12, mercury__set__STATE_VARIABLE_B_0_13, mercury__set__STATE_VARIABLE_B_14);
    }
#line 166 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 166 "set_ordlist.opt"
  }
#line 325 "set.m"
}

#line 323 "set.m"
MR_bool MR_CALL 
mercury__set__foldl2_6_p_4(
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
#line 166 "set_ordlist.opt"
  {
#line 166 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 166 "set_ordlist.opt"
    MR_Word mercury__set__V_15_32 = (MR_Word) mercury__set__S_8;

#line 168 "set_ordlist.opt"
    {
#line 168 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl2_6_p_5(mercury__set__TypeInfo_for_T_17, mercury__set__TypeInfo_for_A_18, mercury__set__TypeInfo_for_B_19, mercury__set__F_7, mercury__set__V_15_32, mercury__set__STATE_VARIABLE_A_0_11, mercury__set__STATE_VARIABLE_A_12, mercury__set__STATE_VARIABLE_B_0_13, mercury__set__STATE_VARIABLE_B_14);
    }
#line 166 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 166 "set_ordlist.opt"
  }
#line 323 "set.m"
}

#line 321 "set.m"
MR_bool MR_CALL 
mercury__set__foldl2_6_p_3(
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
#line 166 "set_ordlist.opt"
  {
#line 166 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 166 "set_ordlist.opt"
    MR_Word mercury__set__V_15_32 = (MR_Word) mercury__set__S_8;

#line 168 "set_ordlist.opt"
    {
#line 168 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl2_6_p_4(mercury__set__TypeInfo_for_T_17, mercury__set__TypeInfo_for_A_18, mercury__set__TypeInfo_for_B_19, mercury__set__F_7, mercury__set__V_15_32, mercury__set__STATE_VARIABLE_A_0_11, mercury__set__STATE_VARIABLE_A_12, mercury__set__STATE_VARIABLE_B_0_13, mercury__set__STATE_VARIABLE_B_14);
    }
#line 166 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 166 "set_ordlist.opt"
  }
#line 321 "set.m"
}

#line 319 "set.m"
void MR_CALL 
mercury__set__foldl2_6_p_2(
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
#line 166 "set_ordlist.opt"
  {
#line 166 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 166 "set_ordlist.opt"
    MR_Word mercury__set__V_15_32 = (MR_Word) mercury__set__S_8;

#line 168 "set_ordlist.opt"
    {
#line 168 "set_ordlist.opt"
      mercury__list__foldl2_6_p_2(mercury__set__TypeInfo_for_T_17, mercury__set__TypeInfo_for_A_18, mercury__set__TypeInfo_for_B_19, mercury__set__F_7, mercury__set__V_15_32, mercury__set__STATE_VARIABLE_A_0_11, mercury__set__STATE_VARIABLE_A_12, mercury__set__STATE_VARIABLE_B_0_13, mercury__set__STATE_VARIABLE_B_14);
#line 168 "set_ordlist.opt"
      return;
    }
#line 166 "set_ordlist.opt"
  }
#line 319 "set.m"
}

#line 317 "set.m"
void MR_CALL 
mercury__set__foldl2_6_p_1(
#line 317 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_17,
#line 317 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_18,
#line 317 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_19,
#line 317 "set.m"
  MR_Word mercury__set__F_7,
#line 317 "set.m"
  MR_Word mercury__set__S_8,
#line 317 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_11,
#line 317 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_12,
#line 317 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_13,
#line 317 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_14)
#line 317 "set.m"
{
#line 166 "set_ordlist.opt"
  {
#line 166 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 166 "set_ordlist.opt"
    MR_Word mercury__set__V_15_32 = (MR_Word) mercury__set__S_8;

#line 168 "set_ordlist.opt"
    {
#line 168 "set_ordlist.opt"
      mercury__list__foldl2_6_p_1(mercury__set__TypeInfo_for_T_17, mercury__set__TypeInfo_for_A_18, mercury__set__TypeInfo_for_B_19, mercury__set__F_7, mercury__set__V_15_32, mercury__set__STATE_VARIABLE_A_0_11, mercury__set__STATE_VARIABLE_A_12, mercury__set__STATE_VARIABLE_B_0_13, mercury__set__STATE_VARIABLE_B_14);
#line 168 "set_ordlist.opt"
      return;
    }
#line 166 "set_ordlist.opt"
  }
#line 317 "set.m"
}

#line 315 "set.m"
void MR_CALL 
mercury__set__foldl2_6_p_0(
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
#line 166 "set_ordlist.opt"
  {
#line 166 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 166 "set_ordlist.opt"
    MR_Word mercury__set__V_15_32 = (MR_Word) mercury__set__S_8;

#line 168 "set_ordlist.opt"
    {
#line 168 "set_ordlist.opt"
      mercury__list__foldl2_6_p_0(mercury__set__TypeInfo_for_T_17, mercury__set__TypeInfo_for_A_18, mercury__set__TypeInfo_for_B_19, mercury__set__F_7, mercury__set__V_15_32, mercury__set__STATE_VARIABLE_A_0_11, mercury__set__STATE_VARIABLE_A_12, mercury__set__STATE_VARIABLE_B_0_13, mercury__set__STATE_VARIABLE_B_14);
#line 168 "set_ordlist.opt"
      return;
    }
#line 166 "set_ordlist.opt"
  }
#line 315 "set.m"
}

#line 311 "set.m"
MR_bool MR_CALL 
mercury__set__fold2_6_p_5(
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
#line 166 "set_ordlist.opt"
  {
#line 166 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 166 "set_ordlist.opt"
    MR_Word mercury__set__V_15_42 = (MR_Word) mercury__set__S_8;

#line 168 "set_ordlist.opt"
    {
#line 168 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl2_6_p_6(mercury__set__TypeInfo_for_T_17, mercury__set__TypeInfo_for_A_18, mercury__set__TypeInfo_for_B_19, mercury__set__F_7, mercury__set__V_15_42, mercury__set__STATE_VARIABLE_A_0_11, mercury__set__STATE_VARIABLE_A_12, mercury__set__STATE_VARIABLE_B_0_13, mercury__set__STATE_VARIABLE_B_14);
    }
#line 166 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 166 "set_ordlist.opt"
  }
#line 311 "set.m"
}

#line 309 "set.m"
MR_bool MR_CALL 
mercury__set__fold2_6_p_4(
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
#line 166 "set_ordlist.opt"
  {
#line 166 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 166 "set_ordlist.opt"
    MR_Word mercury__set__V_15_42 = (MR_Word) mercury__set__S_8;

#line 168 "set_ordlist.opt"
    {
#line 168 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl2_6_p_5(mercury__set__TypeInfo_for_T_17, mercury__set__TypeInfo_for_A_18, mercury__set__TypeInfo_for_B_19, mercury__set__F_7, mercury__set__V_15_42, mercury__set__STATE_VARIABLE_A_0_11, mercury__set__STATE_VARIABLE_A_12, mercury__set__STATE_VARIABLE_B_0_13, mercury__set__STATE_VARIABLE_B_14);
    }
#line 166 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 166 "set_ordlist.opt"
  }
#line 309 "set.m"
}

#line 307 "set.m"
MR_bool MR_CALL 
mercury__set__fold2_6_p_3(
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
#line 166 "set_ordlist.opt"
  {
#line 166 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 166 "set_ordlist.opt"
    MR_Word mercury__set__V_15_42 = (MR_Word) mercury__set__S_8;

#line 168 "set_ordlist.opt"
    {
#line 168 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl2_6_p_4(mercury__set__TypeInfo_for_T_17, mercury__set__TypeInfo_for_A_18, mercury__set__TypeInfo_for_B_19, mercury__set__F_7, mercury__set__V_15_42, mercury__set__STATE_VARIABLE_A_0_11, mercury__set__STATE_VARIABLE_A_12, mercury__set__STATE_VARIABLE_B_0_13, mercury__set__STATE_VARIABLE_B_14);
    }
#line 166 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 166 "set_ordlist.opt"
  }
#line 307 "set.m"
}

#line 305 "set.m"
void MR_CALL 
mercury__set__fold2_6_p_2(
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
#line 166 "set_ordlist.opt"
  {
#line 166 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 166 "set_ordlist.opt"
    MR_Word mercury__set__V_15_42 = (MR_Word) mercury__set__S_8;

#line 168 "set_ordlist.opt"
    {
#line 168 "set_ordlist.opt"
      mercury__list__foldl2_6_p_2(mercury__set__TypeInfo_for_T_17, mercury__set__TypeInfo_for_A_18, mercury__set__TypeInfo_for_B_19, mercury__set__F_7, mercury__set__V_15_42, mercury__set__STATE_VARIABLE_A_0_11, mercury__set__STATE_VARIABLE_A_12, mercury__set__STATE_VARIABLE_B_0_13, mercury__set__STATE_VARIABLE_B_14);
#line 168 "set_ordlist.opt"
      return;
    }
#line 166 "set_ordlist.opt"
  }
#line 305 "set.m"
}

#line 303 "set.m"
void MR_CALL 
mercury__set__fold2_6_p_1(
#line 303 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_17,
#line 303 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_18,
#line 303 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_19,
#line 303 "set.m"
  MR_Word mercury__set__F_7,
#line 303 "set.m"
  MR_Word mercury__set__S_8,
#line 303 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_11,
#line 303 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_12,
#line 303 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_13,
#line 303 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_14)
#line 303 "set.m"
{
#line 166 "set_ordlist.opt"
  {
#line 166 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 166 "set_ordlist.opt"
    MR_Word mercury__set__V_15_42 = (MR_Word) mercury__set__S_8;

#line 168 "set_ordlist.opt"
    {
#line 168 "set_ordlist.opt"
      mercury__list__foldl2_6_p_1(mercury__set__TypeInfo_for_T_17, mercury__set__TypeInfo_for_A_18, mercury__set__TypeInfo_for_B_19, mercury__set__F_7, mercury__set__V_15_42, mercury__set__STATE_VARIABLE_A_0_11, mercury__set__STATE_VARIABLE_A_12, mercury__set__STATE_VARIABLE_B_0_13, mercury__set__STATE_VARIABLE_B_14);
#line 168 "set_ordlist.opt"
      return;
    }
#line 166 "set_ordlist.opt"
  }
#line 303 "set.m"
}

#line 301 "set.m"
void MR_CALL 
mercury__set__fold2_6_p_0(
#line 301 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_17,
#line 301 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_18,
#line 301 "set.m"
  MR_Word mercury__set__TypeInfo_for_B_19,
#line 301 "set.m"
  MR_Word mercury__set__F_7,
#line 301 "set.m"
  MR_Word mercury__set__S_8,
#line 301 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_11,
#line 301 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_12,
#line 301 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_B_0_13,
#line 301 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_B_14)
#line 301 "set.m"
{
#line 166 "set_ordlist.opt"
  {
#line 166 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 166 "set_ordlist.opt"
    MR_Word mercury__set__V_15_42 = (MR_Word) mercury__set__S_8;

#line 168 "set_ordlist.opt"
    {
#line 168 "set_ordlist.opt"
      mercury__list__foldl2_6_p_0(mercury__set__TypeInfo_for_T_17, mercury__set__TypeInfo_for_A_18, mercury__set__TypeInfo_for_B_19, mercury__set__F_7, mercury__set__V_15_42, mercury__set__STATE_VARIABLE_A_0_11, mercury__set__STATE_VARIABLE_A_12, mercury__set__STATE_VARIABLE_B_0_13, mercury__set__STATE_VARIABLE_B_14);
#line 168 "set_ordlist.opt"
      return;
    }
#line 166 "set_ordlist.opt"
  }
#line 301 "set.m"
}

#line 298 "set.m"
MR_bool MR_CALL 
mercury__set__foldl_4_p_5(
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
#line 161 "set_ordlist.opt"
  {
#line 161 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 161 "set_ordlist.opt"
    MR_Word mercury__set__V_10_21 = (MR_Word) mercury__set__S_6;

#line 163 "set_ordlist.opt"
    {
#line 163 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl_4_p_5(mercury__set__TypeInfo_for_T_11, mercury__set__TypeInfo_for_A_12, mercury__set__F_5, mercury__set__V_10_21, mercury__set__STATE_VARIABLE_A_0_8, mercury__set__STATE_VARIABLE_A_9);
    }
#line 161 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 161 "set_ordlist.opt"
  }
#line 298 "set.m"
}

#line 297 "set.m"
MR_bool MR_CALL 
mercury__set__foldl_4_p_4(
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
#line 161 "set_ordlist.opt"
  {
#line 161 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 161 "set_ordlist.opt"
    MR_Word mercury__set__V_10_21 = (MR_Word) mercury__set__S_6;

#line 163 "set_ordlist.opt"
    {
#line 163 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl_4_p_4(mercury__set__TypeInfo_for_T_11, mercury__set__TypeInfo_for_A_12, mercury__set__F_5, mercury__set__V_10_21, mercury__set__STATE_VARIABLE_A_0_8, mercury__set__STATE_VARIABLE_A_9);
    }
#line 161 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 161 "set_ordlist.opt"
  }
#line 297 "set.m"
}

#line 296 "set.m"
MR_bool MR_CALL 
mercury__set__foldl_4_p_3(
#line 296 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_11,
#line 296 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_12,
#line 296 "set.m"
  MR_Word mercury__set__F_5,
#line 296 "set.m"
  MR_Word mercury__set__S_6,
#line 296 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_8,
#line 296 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_9)
#line 296 "set.m"
{
#line 161 "set_ordlist.opt"
  {
#line 161 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 161 "set_ordlist.opt"
    MR_Word mercury__set__V_10_21 = (MR_Word) mercury__set__S_6;

#line 163 "set_ordlist.opt"
    {
#line 163 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl_4_p_3(mercury__set__TypeInfo_for_T_11, mercury__set__TypeInfo_for_A_12, mercury__set__F_5, mercury__set__V_10_21, mercury__set__STATE_VARIABLE_A_0_8, mercury__set__STATE_VARIABLE_A_9);
    }
#line 161 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 161 "set_ordlist.opt"
  }
#line 296 "set.m"
}

#line 295 "set.m"
void MR_CALL 
mercury__set__foldl_4_p_2(
#line 295 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_11,
#line 295 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_12,
#line 295 "set.m"
  MR_Word mercury__set__F_5,
#line 295 "set.m"
  MR_Word mercury__set__S_6,
#line 295 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_8,
#line 295 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_9)
#line 295 "set.m"
{
#line 161 "set_ordlist.opt"
  {
#line 161 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 161 "set_ordlist.opt"
    MR_Word mercury__set__V_10_21 = (MR_Word) mercury__set__S_6;

#line 163 "set_ordlist.opt"
    {
#line 163 "set_ordlist.opt"
      mercury__list__foldl_4_p_2(mercury__set__TypeInfo_for_T_11, mercury__set__TypeInfo_for_A_12, mercury__set__F_5, mercury__set__V_10_21, mercury__set__STATE_VARIABLE_A_0_8, mercury__set__STATE_VARIABLE_A_9);
#line 163 "set_ordlist.opt"
      return;
    }
#line 161 "set_ordlist.opt"
  }
#line 295 "set.m"
}

#line 294 "set.m"
void MR_CALL 
mercury__set__foldl_4_p_1(
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
#line 161 "set_ordlist.opt"
  {
#line 161 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 161 "set_ordlist.opt"
    MR_Word mercury__set__V_10_21 = (MR_Word) mercury__set__S_6;

#line 163 "set_ordlist.opt"
    {
#line 163 "set_ordlist.opt"
      mercury__list__foldl_4_p_1(mercury__set__TypeInfo_for_T_11, mercury__set__TypeInfo_for_A_12, mercury__set__F_5, mercury__set__V_10_21, mercury__set__STATE_VARIABLE_A_0_8, mercury__set__STATE_VARIABLE_A_9);
#line 163 "set_ordlist.opt"
      return;
    }
#line 161 "set_ordlist.opt"
  }
#line 294 "set.m"
}

#line 293 "set.m"
void MR_CALL 
mercury__set__foldl_4_p_0(
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
#line 161 "set_ordlist.opt"
  {
#line 161 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 161 "set_ordlist.opt"
    MR_Word mercury__set__V_10_21 = (MR_Word) mercury__set__S_6;

#line 163 "set_ordlist.opt"
    {
#line 163 "set_ordlist.opt"
      mercury__list__foldl_4_p_0(mercury__set__TypeInfo_for_T_11, mercury__set__TypeInfo_for_A_12, mercury__set__F_5, mercury__set__V_10_21, mercury__set__STATE_VARIABLE_A_0_8, mercury__set__STATE_VARIABLE_A_9);
#line 163 "set_ordlist.opt"
      return;
    }
#line 161 "set_ordlist.opt"
  }
#line 293 "set.m"
}

#line 290 "set.m"
MR_bool MR_CALL 
mercury__set__fold_4_p_5(
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
#line 161 "set_ordlist.opt"
  {
#line 161 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 161 "set_ordlist.opt"
    MR_Word mercury__set__V_10_27 = (MR_Word) mercury__set__S_6;

#line 163 "set_ordlist.opt"
    {
#line 163 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl_4_p_5(mercury__set__TypeInfo_for_T_11, mercury__set__TypeInfo_for_A_12, mercury__set__F_5, mercury__set__V_10_27, mercury__set__STATE_VARIABLE_A_0_8, mercury__set__STATE_VARIABLE_A_9);
    }
#line 161 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 161 "set_ordlist.opt"
  }
#line 290 "set.m"
}

#line 289 "set.m"
MR_bool MR_CALL 
mercury__set__fold_4_p_4(
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
#line 161 "set_ordlist.opt"
  {
#line 161 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 161 "set_ordlist.opt"
    MR_Word mercury__set__V_10_27 = (MR_Word) mercury__set__S_6;

#line 163 "set_ordlist.opt"
    {
#line 163 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl_4_p_4(mercury__set__TypeInfo_for_T_11, mercury__set__TypeInfo_for_A_12, mercury__set__F_5, mercury__set__V_10_27, mercury__set__STATE_VARIABLE_A_0_8, mercury__set__STATE_VARIABLE_A_9);
    }
#line 161 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 161 "set_ordlist.opt"
  }
#line 289 "set.m"
}

#line 288 "set.m"
MR_bool MR_CALL 
mercury__set__fold_4_p_3(
#line 288 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_11,
#line 288 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_12,
#line 288 "set.m"
  MR_Word mercury__set__F_5,
#line 288 "set.m"
  MR_Word mercury__set__S_6,
#line 288 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_8,
#line 288 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_9)
#line 288 "set.m"
{
#line 161 "set_ordlist.opt"
  {
#line 161 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 161 "set_ordlist.opt"
    MR_Word mercury__set__V_10_27 = (MR_Word) mercury__set__S_6;

#line 163 "set_ordlist.opt"
    {
#line 163 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__list__foldl_4_p_3(mercury__set__TypeInfo_for_T_11, mercury__set__TypeInfo_for_A_12, mercury__set__F_5, mercury__set__V_10_27, mercury__set__STATE_VARIABLE_A_0_8, mercury__set__STATE_VARIABLE_A_9);
    }
#line 161 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 161 "set_ordlist.opt"
  }
#line 288 "set.m"
}

#line 287 "set.m"
void MR_CALL 
mercury__set__fold_4_p_2(
#line 287 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_11,
#line 287 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_12,
#line 287 "set.m"
  MR_Word mercury__set__F_5,
#line 287 "set.m"
  MR_Word mercury__set__S_6,
#line 287 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_8,
#line 287 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_9)
#line 287 "set.m"
{
#line 161 "set_ordlist.opt"
  {
#line 161 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 161 "set_ordlist.opt"
    MR_Word mercury__set__V_10_27 = (MR_Word) mercury__set__S_6;

#line 163 "set_ordlist.opt"
    {
#line 163 "set_ordlist.opt"
      mercury__list__foldl_4_p_2(mercury__set__TypeInfo_for_T_11, mercury__set__TypeInfo_for_A_12, mercury__set__F_5, mercury__set__V_10_27, mercury__set__STATE_VARIABLE_A_0_8, mercury__set__STATE_VARIABLE_A_9);
#line 163 "set_ordlist.opt"
      return;
    }
#line 161 "set_ordlist.opt"
  }
#line 287 "set.m"
}

#line 286 "set.m"
void MR_CALL 
mercury__set__fold_4_p_1(
#line 286 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_11,
#line 286 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_12,
#line 286 "set.m"
  MR_Word mercury__set__F_5,
#line 286 "set.m"
  MR_Word mercury__set__S_6,
#line 286 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_8,
#line 286 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_9)
#line 286 "set.m"
{
#line 161 "set_ordlist.opt"
  {
#line 161 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 161 "set_ordlist.opt"
    MR_Word mercury__set__V_10_27 = (MR_Word) mercury__set__S_6;

#line 163 "set_ordlist.opt"
    {
#line 163 "set_ordlist.opt"
      mercury__list__foldl_4_p_1(mercury__set__TypeInfo_for_T_11, mercury__set__TypeInfo_for_A_12, mercury__set__F_5, mercury__set__V_10_27, mercury__set__STATE_VARIABLE_A_0_8, mercury__set__STATE_VARIABLE_A_9);
#line 163 "set_ordlist.opt"
      return;
    }
#line 161 "set_ordlist.opt"
  }
#line 286 "set.m"
}

#line 285 "set.m"
void MR_CALL 
mercury__set__fold_4_p_0(
#line 285 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_11,
#line 285 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_12,
#line 285 "set.m"
  MR_Word mercury__set__F_5,
#line 285 "set.m"
  MR_Word mercury__set__S_6,
#line 285 "set.m"
  MR_Box mercury__set__STATE_VARIABLE_A_0_8,
#line 285 "set.m"
  MR_Box * mercury__set__STATE_VARIABLE_A_9)
#line 285 "set.m"
{
#line 161 "set_ordlist.opt"
  {
#line 161 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 161 "set_ordlist.opt"
    MR_Word mercury__set__V_10_27 = (MR_Word) mercury__set__S_6;

#line 163 "set_ordlist.opt"
    {
#line 163 "set_ordlist.opt"
      mercury__list__foldl_4_p_0(mercury__set__TypeInfo_for_T_11, mercury__set__TypeInfo_for_A_12, mercury__set__F_5, mercury__set__V_10_27, mercury__set__STATE_VARIABLE_A_0_8, mercury__set__STATE_VARIABLE_A_9);
#line 163 "set_ordlist.opt"
      return;
    }
#line 161 "set_ordlist.opt"
  }
#line 285 "set.m"
}

#line 282 "set.m"
MR_Box MR_CALL 
mercury__set__foldl_3_f_0(
#line 282 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_8,
#line 282 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_9,
#line 282 "set.m"
  MR_Word mercury__set__F_5,
#line 282 "set.m"
  MR_Word mercury__set__S_6,
#line 282 "set.m"
  MR_Box mercury__set__A_7)
#line 282 "set.m"
{
#line 158 "set_ordlist.opt"
  {
#line 158 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 158 "set_ordlist.opt"
    MR_Box mercury__set__HeadVar__4_4;
#line 158 "set_ordlist.opt"
    MR_Word mercury__set__V_9_18 = (MR_Word) mercury__set__S_6;

#line 347 "list.opt"
    {
#line 347 "list.opt"
      mercury__set__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(mercury__set__F_5, mercury__set__V_9_18, mercury__set__A_7, &mercury__set__HeadVar__4_4);
    }
#line 158 "set_ordlist.opt"
    return mercury__set__HeadVar__4_4;
#line 158 "set_ordlist.opt"
  }
#line 282 "set.m"
}

#line 281 "set.m"
MR_Box MR_CALL 
mercury__set__fold_3_f_0(
#line 281 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_8,
#line 281 "set.m"
  MR_Word mercury__set__TypeInfo_for_A_9,
#line 281 "set.m"
  MR_Word mercury__set__F_5,
#line 281 "set.m"
  MR_Word mercury__set__S_6,
#line 281 "set.m"
  MR_Box mercury__set__A_7)
#line 281 "set.m"
{
#line 158 "set_ordlist.opt"
  {
#line 158 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 158 "set_ordlist.opt"
    MR_Box mercury__set__HeadVar__4_4;
#line 158 "set_ordlist.opt"
    MR_Word mercury__set__V_9_21 = (MR_Word) mercury__set__S_6;

#line 347 "list.opt"
    {
#line 347 "list.opt"
      mercury__set__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_4_p_in__list_0(mercury__set__F_5, mercury__set__V_9_21, mercury__set__A_7, &mercury__set__HeadVar__4_4);
    }
#line 158 "set_ordlist.opt"
    return mercury__set__HeadVar__4_4;
#line 158 "set_ordlist.opt"
  }
#line 281 "set.m"
}

#line 276 "set.m"
MR_Word MR_CALL 
mercury__set__filter_map_2_f_0(
#line 276 "set.m"
  MR_Word mercury__set__TypeInfo_for_T1_6,
#line 276 "set.m"
  MR_Word mercury__set__TypeInfo_for_T2_7,
#line 276 "set.m"
  MR_Word mercury__set__PF_4,
#line 276 "set.m"
  MR_Word mercury__set__Set_5)
#line 276 "set.m"
{
#line 146 "set_ordlist.opt"
  {
#line 146 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 146 "set_ordlist.opt"
    MR_Word mercury__set__HeadVar__3_3;
#line 146 "set_ordlist.opt"
    MR_Word mercury__set__List_7_11 = (MR_Word) mercury__set__Set_5;
#line 146 "set_ordlist.opt"
    MR_Word mercury__set__TransformedTrueList_8_12;
#line 146 "set_ordlist.opt"
    MR_Word mercury__set__List_4_29;
#line 146 "set_ordlist.opt"
    MR_Integer mercury__set__V_5_32;

#line 667 "list.opt"
    {
#line 667 "list.opt"
      mercury__set__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_105_108_116_101_114_95_109_97_112_95_95_104_111_57_95_95_91_49_44_32_50_44_32_52_44_32_53_44_32_54_93_95_48_3_p_in__list_0(mercury__set__PF_4, mercury__set__List_7_11, &mercury__set__TransformedTrueList_8_12);
    }
#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__set__TypeInfo_for_T2_7, mercury__set__TransformedTrueList_8_12, (MR_Integer) 0, &mercury__set__V_5_32);
    }
#line 110 "list.opt"
    {
#line 110 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__set__TypeInfo_for_T2_7, mercury__set__V_5_32, mercury__set__TransformedTrueList_8_12, &mercury__set__List_4_29);
    }
#line 26 "set_ordlist.opt"
    mercury__set__HeadVar__3_3 = (MR_Word) mercury__set__List_4_29;
#line 146 "set_ordlist.opt"
    return mercury__set__HeadVar__3_3;
#line 146 "set_ordlist.opt"
  }
#line 276 "set.m"
}

#line 274 "set.m"
void MR_CALL 
mercury__set__filter_map_3_p_0(
#line 274 "set.m"
  MR_Word mercury__set__TypeInfo_for_T1_7,
#line 274 "set.m"
  MR_Word mercury__set__TypeInfo_for_T2_8,
#line 274 "set.m"
  MR_Word mercury__set__P_4,
#line 274 "set.m"
  MR_Word mercury__set__Set_5,
#line 274 "set.m"
  MR_Word * mercury__set__TransformedTrueSet_6)
#line 274 "set.m"
{
#line 150 "set_ordlist.opt"
  {
#line 150 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 150 "set_ordlist.opt"
    MR_Word mercury__set__List_7_12 = (MR_Word) mercury__set__Set_5;
#line 150 "set_ordlist.opt"
    MR_Word mercury__set__TransformedTrueList_8_13;
#line 150 "set_ordlist.opt"
    MR_Word mercury__set__List_4_16;
#line 150 "set_ordlist.opt"
    MR_Integer mercury__set__V_5_19;

#line 152 "set_ordlist.opt"
    {
#line 152 "set_ordlist.opt"
      mercury__list__filter_map_3_p_0(mercury__set__TypeInfo_for_T1_7, mercury__set__TypeInfo_for_T2_8, mercury__set__P_4, mercury__set__List_7_12, &mercury__set__TransformedTrueList_8_13);
    }
#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__set__TypeInfo_for_T2_8, mercury__set__TransformedTrueList_8_13, (MR_Integer) 0, &mercury__set__V_5_19);
    }
#line 110 "list.opt"
    {
#line 110 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__set__TypeInfo_for_T2_8, mercury__set__V_5_19, mercury__set__TransformedTrueList_8_13, &mercury__set__List_4_16);
    }
#line 26 "set_ordlist.opt"
    *mercury__set__TransformedTrueSet_6 = (MR_Word) mercury__set__List_4_16;
#line 150 "set_ordlist.opt"
  }
#line 274 "set.m"
}

#line 268 "set.m"
void MR_CALL 
mercury__set__filter_4_p_0(
#line 268 "set.m"
  MR_Word mercury__set__TypeInfo_for_T1_9,
#line 268 "set.m"
  MR_Word mercury__set__P_5,
#line 268 "set.m"
  MR_Word mercury__set__Set_6,
#line 268 "set.m"
  MR_Word * mercury__set__TrueSet_7,
#line 268 "set.m"
  MR_Word * mercury__set__FalseSet_8)
#line 268 "set.m"
{
#line 137 "set_ordlist.opt"
  {
#line 137 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 137 "set_ordlist.opt"
    MR_Word mercury__set__List_9_14 = (MR_Word) mercury__set__Set_6;
#line 137 "set_ordlist.opt"
    MR_Word mercury__set__TrueList_10_15;
#line 137 "set_ordlist.opt"
    MR_Word mercury__set__FalseList_11_16;
#line 137 "set_ordlist.opt"
    MR_Word mercury__set__List_4_21;
#line 137 "set_ordlist.opt"
    MR_Word mercury__set__List_4_26;

#line 139 "set_ordlist.opt"
    {
#line 139 "set_ordlist.opt"
      mercury__list__filter_4_p_0(mercury__set__TypeInfo_for_T1_9, mercury__set__P_5, mercury__set__List_9_14, &mercury__set__TrueList_10_15, &mercury__set__FalseList_11_16);
    }
#line 58 "list.opt"
    if ((mercury__set__TrueList_10_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 58 "list.opt"
      mercury__set__List_4_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 58 "list.opt"
    else
#line 59 "list.opt"
      {
#line 59 "list.opt"
        MR_Box mercury__set__X_3_22 = (MR_hl_field(MR_mktag(1), mercury__set__TrueList_10_15, (MR_Integer) 0));
#line 59 "list.opt"
        MR_Word mercury__set__Xs_4_23 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set__TrueList_10_15, (MR_Integer) 1)));

#line 60 "list.opt"
        {
#line 60 "list.opt"
          mercury__list__remove_adjacent_dups_2_3_p_0(mercury__set__TypeInfo_for_T1_9, mercury__set__Xs_4_23, mercury__set__X_3_22, &mercury__set__List_4_21);
        }
#line 59 "list.opt"
      }
#line 32 "set_ordlist.opt"
    *mercury__set__TrueSet_7 = (MR_Word) mercury__set__List_4_21;
#line 58 "list.opt"
    if ((mercury__set__FalseList_11_16 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 58 "list.opt"
      mercury__set__List_4_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 58 "list.opt"
    else
#line 59 "list.opt"
      {
#line 59 "list.opt"
        MR_Box mercury__set__X_3_27 = (MR_hl_field(MR_mktag(1), mercury__set__FalseList_11_16, (MR_Integer) 0));
#line 59 "list.opt"
        MR_Word mercury__set__Xs_4_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set__FalseList_11_16, (MR_Integer) 1)));

#line 60 "list.opt"
        {
#line 60 "list.opt"
          mercury__list__remove_adjacent_dups_2_3_p_0(mercury__set__TypeInfo_for_T1_9, mercury__set__Xs_4_28, mercury__set__X_3_27, &mercury__set__List_4_26);
        }
#line 59 "list.opt"
      }
#line 32 "set_ordlist.opt"
    *mercury__set__FalseSet_8 = (MR_Word) mercury__set__List_4_26;
#line 137 "set_ordlist.opt"
  }
#line 268 "set.m"
}

#line 262 "set.m"
void MR_CALL 
mercury__set__filter_3_p_0(
#line 262 "set.m"
  MR_Word mercury__set__TypeInfo_for_T1_7,
#line 262 "set.m"
  MR_Word mercury__set__P_4,
#line 262 "set.m"
  MR_Word mercury__set__Set_5,
#line 262 "set.m"
  MR_Word * mercury__set__TrueSet_6)
#line 262 "set.m"
{
#line 131 "set_ordlist.opt"
  {
#line 131 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 131 "set_ordlist.opt"
    MR_Word mercury__set__List_7_14 = (MR_Word) mercury__set__Set_5;
#line 131 "set_ordlist.opt"
    MR_Word mercury__set__TrueList_8_15;
#line 131 "set_ordlist.opt"
    MR_Word mercury__set__List_4_20;

#line 133 "set_ordlist.opt"
    {
#line 133 "set_ordlist.opt"
      mercury__list__filter_3_p_0(mercury__set__TypeInfo_for_T1_7, mercury__set__P_4, mercury__set__List_7_14, &mercury__set__TrueList_8_15);
    }
#line 58 "list.opt"
    if ((mercury__set__TrueList_8_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 58 "list.opt"
      mercury__set__List_4_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 58 "list.opt"
    else
#line 59 "list.opt"
      {
#line 59 "list.opt"
        MR_Box mercury__set__X_3_21 = (MR_hl_field(MR_mktag(1), mercury__set__TrueList_8_15, (MR_Integer) 0));
#line 59 "list.opt"
        MR_Word mercury__set__Xs_4_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set__TrueList_8_15, (MR_Integer) 1)));

#line 60 "list.opt"
        {
#line 60 "list.opt"
          mercury__list__remove_adjacent_dups_2_3_p_0(mercury__set__TypeInfo_for_T1_7, mercury__set__Xs_4_22, mercury__set__X_3_21, &mercury__set__List_4_20);
        }
#line 59 "list.opt"
      }
#line 32 "set_ordlist.opt"
    *mercury__set__TrueSet_6 = (MR_Word) mercury__set__List_4_20;
#line 131 "set_ordlist.opt"
  }
#line 262 "set.m"
}

#line 260 "set.m"
MR_Word MR_CALL 
mercury__set__filter_2_f_0(
#line 260 "set.m"
  MR_Word mercury__set__TypeInfo_for_T1_6,
#line 260 "set.m"
  MR_Word mercury__set__P_4,
#line 260 "set.m"
  MR_Word mercury__set__Set_5)
#line 260 "set.m"
{
#line 131 "set_ordlist.opt"
  {
#line 131 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 131 "set_ordlist.opt"
    MR_Word mercury__set__HeadVar__3_3;
#line 131 "set_ordlist.opt"
    MR_Word mercury__set__List_7_10 = (MR_Word) mercury__set__Set_5;
#line 131 "set_ordlist.opt"
    MR_Word mercury__set__TrueList_8_11;
#line 131 "set_ordlist.opt"
    MR_Word mercury__set__List_4_16;

#line 133 "set_ordlist.opt"
    {
#line 133 "set_ordlist.opt"
      mercury__list__filter_3_p_0(mercury__set__TypeInfo_for_T1_6, mercury__set__P_4, mercury__set__List_7_10, &mercury__set__TrueList_8_11);
    }
#line 58 "list.opt"
    if ((mercury__set__TrueList_8_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 58 "list.opt"
      mercury__set__List_4_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 58 "list.opt"
    else
#line 59 "list.opt"
      {
#line 59 "list.opt"
        MR_Box mercury__set__X_3_17 = (MR_hl_field(MR_mktag(1), mercury__set__TrueList_8_11, (MR_Integer) 0));
#line 59 "list.opt"
        MR_Word mercury__set__Xs_4_18 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set__TrueList_8_11, (MR_Integer) 1)));

#line 60 "list.opt"
        {
#line 60 "list.opt"
          mercury__list__remove_adjacent_dups_2_3_p_0(mercury__set__TypeInfo_for_T1_6, mercury__set__Xs_4_18, mercury__set__X_3_17, &mercury__set__List_4_16);
        }
#line 59 "list.opt"
      }
#line 32 "set_ordlist.opt"
    mercury__set__HeadVar__3_3 = (MR_Word) mercury__set__List_4_16;
#line 131 "set_ordlist.opt"
    return mercury__set__HeadVar__3_3;
#line 131 "set_ordlist.opt"
  }
#line 260 "set.m"
}

#line 252 "set.m"
MR_bool MR_CALL 
mercury__set__map_fold_5_p_5(
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
#line 686 "set.m"
  {
#line 686 "set.m"
    MR_bool mercury__set__succeeded;
#line 686 "set.m"
    MR_Word mercury__set__L0_11 = (MR_Word) mercury__set__S0_7;
#line 686 "set.m"
    MR_Word mercury__set__L_12;
#line 686 "set.m"
    MR_Word mercury__set__List_4_26;
#line 686 "set.m"
    MR_Integer mercury__set__V_5_29;
#line 686 "set.m"
    MR_Integer mercury__set__V_5_34;

#line 688 "set.m"
    {
#line 688 "set.m"
      mercury__set__succeeded = mercury__list__map_foldl_5_p_5(mercury__set__TypeInfo_for_T1_13, mercury__set__TypeInfo_for_T2_14, mercury__set__TypeInfo_for_T3_15, mercury__set__P_6, mercury__set__L0_11, &mercury__set__L_12, mercury__set__A0_9, mercury__set__A_10);
    }
#line 686 "set.m"
    if (mercury__set__succeeded)
#line 686 "set.m"
      {
#line 77 "list.opt"
        mercury__set__V_5_34 = (MR_Integer) 0;
#line 78 "list.opt"
        {
#line 78 "list.opt"
          mercury__list__length_2_3_p_0(mercury__set__TypeInfo_for_T2_14, mercury__set__L_12, mercury__set__V_5_34, &mercury__set__V_5_29);
        }
#line 110 "list.opt"
        {
#line 110 "list.opt"
          mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__set__TypeInfo_for_T2_14, mercury__set__V_5_29, mercury__set__L_12, &mercury__set__List_4_26);
        }
#line 26 "set_ordlist.opt"
        *mercury__set__S_8 = (MR_Word) mercury__set__List_4_26;
#line 26 "set_ordlist.opt"
        mercury__set__succeeded = MR_TRUE;
#line 686 "set.m"
      }
#line 686 "set.m"
    return mercury__set__succeeded;
#line 686 "set.m"
  }
#line 252 "set.m"
}

#line 250 "set.m"
MR_bool MR_CALL 
mercury__set__map_fold_5_p_4(
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
#line 686 "set.m"
  {
#line 686 "set.m"
    MR_bool mercury__set__succeeded;
#line 686 "set.m"
    MR_Word mercury__set__L0_11 = (MR_Word) mercury__set__S0_7;
#line 686 "set.m"
    MR_Word mercury__set__L_12;
#line 686 "set.m"
    MR_Word mercury__set__List_4_26;
#line 686 "set.m"
    MR_Integer mercury__set__V_5_29;
#line 686 "set.m"
    MR_Integer mercury__set__V_5_34;

#line 688 "set.m"
    {
#line 688 "set.m"
      mercury__set__succeeded = mercury__list__map_foldl_5_p_4(mercury__set__TypeInfo_for_T1_13, mercury__set__TypeInfo_for_T2_14, mercury__set__TypeInfo_for_T3_15, mercury__set__P_6, mercury__set__L0_11, &mercury__set__L_12, mercury__set__A0_9, mercury__set__A_10);
    }
#line 686 "set.m"
    if (mercury__set__succeeded)
#line 686 "set.m"
      {
#line 77 "list.opt"
        mercury__set__V_5_34 = (MR_Integer) 0;
#line 78 "list.opt"
        {
#line 78 "list.opt"
          mercury__list__length_2_3_p_0(mercury__set__TypeInfo_for_T2_14, mercury__set__L_12, mercury__set__V_5_34, &mercury__set__V_5_29);
        }
#line 110 "list.opt"
        {
#line 110 "list.opt"
          mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__set__TypeInfo_for_T2_14, mercury__set__V_5_29, mercury__set__L_12, &mercury__set__List_4_26);
        }
#line 26 "set_ordlist.opt"
        *mercury__set__S_8 = (MR_Word) mercury__set__List_4_26;
#line 26 "set_ordlist.opt"
        mercury__set__succeeded = MR_TRUE;
#line 686 "set.m"
      }
#line 686 "set.m"
    return mercury__set__succeeded;
#line 686 "set.m"
  }
#line 250 "set.m"
}

#line 248 "set.m"
MR_bool MR_CALL 
mercury__set__map_fold_5_p_3(
#line 248 "set.m"
  MR_Word mercury__set__TypeInfo_for_T1_13,
#line 248 "set.m"
  MR_Word mercury__set__TypeInfo_for_T2_14,
#line 248 "set.m"
  MR_Word mercury__set__TypeInfo_for_T3_15,
#line 248 "set.m"
  MR_Word mercury__set__P_6,
#line 248 "set.m"
  MR_Word mercury__set__S0_7,
#line 248 "set.m"
  MR_Word * mercury__set__S_8,
#line 248 "set.m"
  MR_Box mercury__set__A0_9,
#line 248 "set.m"
  MR_Box * mercury__set__A_10)
#line 248 "set.m"
{
#line 686 "set.m"
  {
#line 686 "set.m"
    MR_bool mercury__set__succeeded;
#line 686 "set.m"
    MR_Word mercury__set__L0_11 = (MR_Word) mercury__set__S0_7;
#line 686 "set.m"
    MR_Word mercury__set__L_12;
#line 686 "set.m"
    MR_Word mercury__set__List_4_26;
#line 686 "set.m"
    MR_Integer mercury__set__V_5_29;
#line 686 "set.m"
    MR_Integer mercury__set__V_5_34;

#line 688 "set.m"
    {
#line 688 "set.m"
      mercury__set__succeeded = mercury__list__map_foldl_5_p_3(mercury__set__TypeInfo_for_T1_13, mercury__set__TypeInfo_for_T2_14, mercury__set__TypeInfo_for_T3_15, mercury__set__P_6, mercury__set__L0_11, &mercury__set__L_12, mercury__set__A0_9, mercury__set__A_10);
    }
#line 686 "set.m"
    if (mercury__set__succeeded)
#line 686 "set.m"
      {
#line 77 "list.opt"
        mercury__set__V_5_34 = (MR_Integer) 0;
#line 78 "list.opt"
        {
#line 78 "list.opt"
          mercury__list__length_2_3_p_0(mercury__set__TypeInfo_for_T2_14, mercury__set__L_12, mercury__set__V_5_34, &mercury__set__V_5_29);
        }
#line 110 "list.opt"
        {
#line 110 "list.opt"
          mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__set__TypeInfo_for_T2_14, mercury__set__V_5_29, mercury__set__L_12, &mercury__set__List_4_26);
        }
#line 26 "set_ordlist.opt"
        *mercury__set__S_8 = (MR_Word) mercury__set__List_4_26;
#line 26 "set_ordlist.opt"
        mercury__set__succeeded = MR_TRUE;
#line 686 "set.m"
      }
#line 686 "set.m"
    return mercury__set__succeeded;
#line 686 "set.m"
  }
#line 248 "set.m"
}

#line 247 "set.m"
void MR_CALL 
mercury__set__map_fold_5_p_2(
#line 247 "set.m"
  MR_Word mercury__set__TypeInfo_for_T1_13,
#line 247 "set.m"
  MR_Word mercury__set__TypeInfo_for_T2_14,
#line 247 "set.m"
  MR_Word mercury__set__TypeInfo_for_T3_15,
#line 247 "set.m"
  MR_Word mercury__set__P_6,
#line 247 "set.m"
  MR_Word mercury__set__S0_7,
#line 247 "set.m"
  MR_Word * mercury__set__S_8,
#line 247 "set.m"
  MR_Box mercury__set__A0_9,
#line 247 "set.m"
  MR_Box * mercury__set__A_10)
#line 247 "set.m"
{
#line 686 "set.m"
  {
#line 686 "set.m"
    MR_bool mercury__set__succeeded;
#line 686 "set.m"
    MR_Word mercury__set__L0_11 = (MR_Word) mercury__set__S0_7;
#line 686 "set.m"
    MR_Word mercury__set__L_12;
#line 686 "set.m"
    MR_Word mercury__set__List_4_26;
#line 686 "set.m"
    MR_Integer mercury__set__V_5_29;

#line 688 "set.m"
    {
#line 688 "set.m"
      mercury__list__map_foldl_5_p_2(mercury__set__TypeInfo_for_T1_13, mercury__set__TypeInfo_for_T2_14, mercury__set__TypeInfo_for_T3_15, mercury__set__P_6, mercury__set__L0_11, &mercury__set__L_12, mercury__set__A0_9, mercury__set__A_10);
    }
#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__set__TypeInfo_for_T2_14, mercury__set__L_12, (MR_Integer) 0, &mercury__set__V_5_29);
    }
#line 110 "list.opt"
    {
#line 110 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__set__TypeInfo_for_T2_14, mercury__set__V_5_29, mercury__set__L_12, &mercury__set__List_4_26);
    }
#line 26 "set_ordlist.opt"
    *mercury__set__S_8 = (MR_Word) mercury__set__List_4_26;
#line 686 "set.m"
  }
#line 247 "set.m"
}

#line 246 "set.m"
void MR_CALL 
mercury__set__map_fold_5_p_1(
#line 246 "set.m"
  MR_Word mercury__set__TypeInfo_for_T1_13,
#line 246 "set.m"
  MR_Word mercury__set__TypeInfo_for_T2_14,
#line 246 "set.m"
  MR_Word mercury__set__TypeInfo_for_T3_15,
#line 246 "set.m"
  MR_Word mercury__set__P_6,
#line 246 "set.m"
  MR_Word mercury__set__S0_7,
#line 246 "set.m"
  MR_Word * mercury__set__S_8,
#line 246 "set.m"
  MR_Box mercury__set__A0_9,
#line 246 "set.m"
  MR_Box * mercury__set__A_10)
#line 246 "set.m"
{
#line 686 "set.m"
  {
#line 686 "set.m"
    MR_bool mercury__set__succeeded;
#line 686 "set.m"
    MR_Word mercury__set__L0_11 = (MR_Word) mercury__set__S0_7;
#line 686 "set.m"
    MR_Word mercury__set__L_12;
#line 686 "set.m"
    MR_Word mercury__set__List_4_26;
#line 686 "set.m"
    MR_Integer mercury__set__V_5_29;

#line 688 "set.m"
    {
#line 688 "set.m"
      mercury__list__map_foldl_5_p_1(mercury__set__TypeInfo_for_T1_13, mercury__set__TypeInfo_for_T2_14, mercury__set__TypeInfo_for_T3_15, mercury__set__P_6, mercury__set__L0_11, &mercury__set__L_12, mercury__set__A0_9, mercury__set__A_10);
    }
#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__set__TypeInfo_for_T2_14, mercury__set__L_12, (MR_Integer) 0, &mercury__set__V_5_29);
    }
#line 110 "list.opt"
    {
#line 110 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__set__TypeInfo_for_T2_14, mercury__set__V_5_29, mercury__set__L_12, &mercury__set__List_4_26);
    }
#line 26 "set_ordlist.opt"
    *mercury__set__S_8 = (MR_Word) mercury__set__List_4_26;
#line 686 "set.m"
  }
#line 246 "set.m"
}

#line 245 "set.m"
void MR_CALL 
mercury__set__map_fold_5_p_0(
#line 245 "set.m"
  MR_Word mercury__set__TypeInfo_for_T1_13,
#line 245 "set.m"
  MR_Word mercury__set__TypeInfo_for_T2_14,
#line 245 "set.m"
  MR_Word mercury__set__TypeInfo_for_T3_15,
#line 245 "set.m"
  MR_Word mercury__set__P_6,
#line 245 "set.m"
  MR_Word mercury__set__S0_7,
#line 245 "set.m"
  MR_Word * mercury__set__S_8,
#line 245 "set.m"
  MR_Box mercury__set__A0_9,
#line 245 "set.m"
  MR_Box * mercury__set__A_10)
#line 245 "set.m"
{
#line 686 "set.m"
  {
#line 686 "set.m"
    MR_bool mercury__set__succeeded;
#line 686 "set.m"
    MR_Word mercury__set__L0_11 = (MR_Word) mercury__set__S0_7;
#line 686 "set.m"
    MR_Word mercury__set__L_12;
#line 686 "set.m"
    MR_Word mercury__set__List_4_26;
#line 686 "set.m"
    MR_Integer mercury__set__V_5_29;

#line 688 "set.m"
    {
#line 688 "set.m"
      mercury__list__map_foldl_5_p_0(mercury__set__TypeInfo_for_T1_13, mercury__set__TypeInfo_for_T2_14, mercury__set__TypeInfo_for_T3_15, mercury__set__P_6, mercury__set__L0_11, &mercury__set__L_12, mercury__set__A0_9, mercury__set__A_10);
    }
#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__set__TypeInfo_for_T2_14, mercury__set__L_12, (MR_Integer) 0, &mercury__set__V_5_29);
    }
#line 110 "list.opt"
    {
#line 110 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__set__TypeInfo_for_T2_14, mercury__set__V_5_29, mercury__set__L_12, &mercury__set__List_4_26);
    }
#line 26 "set_ordlist.opt"
    *mercury__set__S_8 = (MR_Word) mercury__set__List_4_26;
#line 686 "set.m"
  }
#line 245 "set.m"
}

#line 676 "set.m"
static void MR_CALL 
mercury__set__map_3_p_4_1(
#line 676 "set.m"
  void * mercury__set__env_ptr_arg)
#line 676 "set.m"
{
#line 676 "set.m"
  {
#line 676 "set.m"
    struct mercury__set__map_3_p_4_env_0_s * mercury__set__env_ptr = (struct mercury__set__map_3_p_4_env_0_s *) mercury__set__env_ptr_arg;

#line 77 "list.opt"
    (mercury__set__env_ptr)->mercury__set__map_3_p_4_env_0__V_5_25 = (MR_Integer) 0;
#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0((mercury__set__env_ptr)->mercury__set__map_3_p_4_env_0__TypeInfo_for_T2_10, (mercury__set__env_ptr)->mercury__set__map_3_p_4_env_0__L2_8, (mercury__set__env_ptr)->mercury__set__map_3_p_4_env_0__V_5_25, &(mercury__set__env_ptr)->mercury__set__map_3_p_4_env_0__V_5_20);
    }
#line 110 "list.opt"
    {
#line 110 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0((mercury__set__env_ptr)->mercury__set__map_3_p_4_env_0__TypeInfo_for_T2_10, (mercury__set__env_ptr)->mercury__set__map_3_p_4_env_0__V_5_20, (mercury__set__env_ptr)->mercury__set__map_3_p_4_env_0__L2_8, &(mercury__set__env_ptr)->mercury__set__map_3_p_4_env_0__List_4_17);
    }
#line 26 "set_ordlist.opt"
    *((mercury__set__env_ptr)->mercury__set__map_3_p_4_env_0__S2_6) = (MR_Word) (mercury__set__env_ptr)->mercury__set__map_3_p_4_env_0__List_4_17;
#line 26 "set_ordlist.opt"
    {
#line 26 "set_ordlist.opt"
      ((mercury__set__env_ptr)->mercury__set__map_3_p_4_env_0__cont)((mercury__set__env_ptr)->mercury__set__map_3_p_4_env_0__cont_env_ptr);
#line 26 "set_ordlist.opt"
      return;
    }
#line 676 "set.m"
  }
#line 676 "set.m"
}

#line 237 "set.m"
void MR_CALL 
mercury__set__map_3_p_4(
#line 237 "set.m"
  MR_Word mercury__set__TypeInfo_for_T1_9,
#line 237 "set.m"
  MR_Word mercury__set__TypeInfo_for_T2_10,
#line 237 "set.m"
  MR_Word mercury__set__P_4,
#line 237 "set.m"
  MR_Word mercury__set__S1_5,
#line 237 "set.m"
  MR_Word * mercury__set__S2_6,
#line 237 "set.m"
  MR_Cont mercury__set__cont,
#line 237 "set.m"
  void * mercury__set__cont_env_ptr)
#line 237 "set.m"
{
#line 237 "set.m"
  {
#line 237 "set.m"
    struct mercury__set__map_3_p_4_env_0_s mercury__set__env;

#line 237 "set.m"
    (mercury__set__env).mercury__set__map_3_p_4_env_0__TypeInfo_for_T2_10 = mercury__set__TypeInfo_for_T2_10;
#line 237 "set.m"
    (mercury__set__env).mercury__set__map_3_p_4_env_0__S2_6 = mercury__set__S2_6;
#line 237 "set.m"
    (mercury__set__env).mercury__set__map_3_p_4_env_0__cont = mercury__set__cont;
#line 237 "set.m"
    (mercury__set__env).mercury__set__map_3_p_4_env_0__cont_env_ptr = mercury__set__cont_env_ptr;
#line 676 "set.m"
    {
#line 676 "set.m"
      MR_bool mercury__set__succeeded;
#line 676 "set.m"
      MR_Word mercury__set__L1_7 = (MR_Word) mercury__set__S1_5;

#line 678 "set.m"
      {
#line 678 "set.m"
        mercury__list__map_3_p_4(mercury__set__TypeInfo_for_T1_9, (mercury__set__env).mercury__set__map_3_p_4_env_0__TypeInfo_for_T2_10, mercury__set__P_4, mercury__set__L1_7, &(mercury__set__env).mercury__set__map_3_p_4_env_0__L2_8, mercury__set__map_3_p_4_1, &mercury__set__env);
      }
#line 676 "set.m"
    }
#line 237 "set.m"
  }
#line 237 "set.m"
}

#line 676 "set.m"
static void MR_CALL 
mercury__set__map_3_p_3_1(
#line 676 "set.m"
  void * mercury__set__env_ptr_arg)
#line 676 "set.m"
{
#line 676 "set.m"
  {
#line 676 "set.m"
    struct mercury__set__map_3_p_3_env_0_s * mercury__set__env_ptr = (struct mercury__set__map_3_p_3_env_0_s *) mercury__set__env_ptr_arg;

#line 77 "list.opt"
    (mercury__set__env_ptr)->mercury__set__map_3_p_3_env_0__V_5_25 = (MR_Integer) 0;
#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0((mercury__set__env_ptr)->mercury__set__map_3_p_3_env_0__TypeInfo_for_T2_10, (mercury__set__env_ptr)->mercury__set__map_3_p_3_env_0__L2_8, (mercury__set__env_ptr)->mercury__set__map_3_p_3_env_0__V_5_25, &(mercury__set__env_ptr)->mercury__set__map_3_p_3_env_0__V_5_20);
    }
#line 110 "list.opt"
    {
#line 110 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0((mercury__set__env_ptr)->mercury__set__map_3_p_3_env_0__TypeInfo_for_T2_10, (mercury__set__env_ptr)->mercury__set__map_3_p_3_env_0__V_5_20, (mercury__set__env_ptr)->mercury__set__map_3_p_3_env_0__L2_8, &(mercury__set__env_ptr)->mercury__set__map_3_p_3_env_0__List_4_17);
    }
#line 26 "set_ordlist.opt"
    *((mercury__set__env_ptr)->mercury__set__map_3_p_3_env_0__S2_6) = (MR_Word) (mercury__set__env_ptr)->mercury__set__map_3_p_3_env_0__List_4_17;
#line 26 "set_ordlist.opt"
    {
#line 26 "set_ordlist.opt"
      ((mercury__set__env_ptr)->mercury__set__map_3_p_3_env_0__cont)((mercury__set__env_ptr)->mercury__set__map_3_p_3_env_0__cont_env_ptr);
#line 26 "set_ordlist.opt"
      return;
    }
#line 676 "set.m"
  }
#line 676 "set.m"
}

#line 236 "set.m"
void MR_CALL 
mercury__set__map_3_p_3(
#line 236 "set.m"
  MR_Word mercury__set__TypeInfo_for_T1_9,
#line 236 "set.m"
  MR_Word mercury__set__TypeInfo_for_T2_10,
#line 236 "set.m"
  MR_Word mercury__set__P_4,
#line 236 "set.m"
  MR_Word mercury__set__S1_5,
#line 236 "set.m"
  MR_Word * mercury__set__S2_6,
#line 236 "set.m"
  MR_Cont mercury__set__cont,
#line 236 "set.m"
  void * mercury__set__cont_env_ptr)
#line 236 "set.m"
{
#line 236 "set.m"
  {
#line 236 "set.m"
    struct mercury__set__map_3_p_3_env_0_s mercury__set__env;

#line 236 "set.m"
    (mercury__set__env).mercury__set__map_3_p_3_env_0__TypeInfo_for_T2_10 = mercury__set__TypeInfo_for_T2_10;
#line 236 "set.m"
    (mercury__set__env).mercury__set__map_3_p_3_env_0__S2_6 = mercury__set__S2_6;
#line 236 "set.m"
    (mercury__set__env).mercury__set__map_3_p_3_env_0__cont = mercury__set__cont;
#line 236 "set.m"
    (mercury__set__env).mercury__set__map_3_p_3_env_0__cont_env_ptr = mercury__set__cont_env_ptr;
#line 676 "set.m"
    {
#line 676 "set.m"
      MR_bool mercury__set__succeeded;
#line 676 "set.m"
      MR_Word mercury__set__L1_7 = (MR_Word) mercury__set__S1_5;

#line 678 "set.m"
      {
#line 678 "set.m"
        mercury__list__map_3_p_3(mercury__set__TypeInfo_for_T1_9, (mercury__set__env).mercury__set__map_3_p_3_env_0__TypeInfo_for_T2_10, mercury__set__P_4, mercury__set__L1_7, &(mercury__set__env).mercury__set__map_3_p_3_env_0__L2_8, mercury__set__map_3_p_3_1, &mercury__set__env);
      }
#line 676 "set.m"
    }
#line 236 "set.m"
  }
#line 236 "set.m"
}

#line 235 "set.m"
MR_bool MR_CALL 
mercury__set__map_3_p_2(
#line 235 "set.m"
  MR_Word mercury__set__TypeInfo_for_T1_9,
#line 235 "set.m"
  MR_Word mercury__set__TypeInfo_for_T2_10,
#line 235 "set.m"
  MR_Word mercury__set__P_4,
#line 235 "set.m"
  MR_Word mercury__set__S1_5,
#line 235 "set.m"
  MR_Word * mercury__set__S2_6)
#line 235 "set.m"
{
#line 676 "set.m"
  {
#line 676 "set.m"
    MR_bool mercury__set__succeeded;
#line 676 "set.m"
    MR_Word mercury__set__L1_7 = (MR_Word) mercury__set__S1_5;
#line 676 "set.m"
    MR_Word mercury__set__L2_8;
#line 676 "set.m"
    MR_Word mercury__set__List_4_17;
#line 676 "set.m"
    MR_Integer mercury__set__V_5_20;
#line 676 "set.m"
    MR_Integer mercury__set__V_5_25;

#line 678 "set.m"
    {
#line 678 "set.m"
      mercury__set__succeeded = mercury__list__map_3_p_2(mercury__set__TypeInfo_for_T1_9, mercury__set__TypeInfo_for_T2_10, mercury__set__P_4, mercury__set__L1_7, &mercury__set__L2_8);
    }
#line 676 "set.m"
    if (mercury__set__succeeded)
#line 676 "set.m"
      {
#line 77 "list.opt"
        mercury__set__V_5_25 = (MR_Integer) 0;
#line 78 "list.opt"
        {
#line 78 "list.opt"
          mercury__list__length_2_3_p_0(mercury__set__TypeInfo_for_T2_10, mercury__set__L2_8, mercury__set__V_5_25, &mercury__set__V_5_20);
        }
#line 110 "list.opt"
        {
#line 110 "list.opt"
          mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__set__TypeInfo_for_T2_10, mercury__set__V_5_20, mercury__set__L2_8, &mercury__set__List_4_17);
        }
#line 26 "set_ordlist.opt"
        *mercury__set__S2_6 = (MR_Word) mercury__set__List_4_17;
#line 26 "set_ordlist.opt"
        mercury__set__succeeded = MR_TRUE;
#line 676 "set.m"
      }
#line 676 "set.m"
    return mercury__set__succeeded;
#line 676 "set.m"
  }
#line 235 "set.m"
}

#line 234 "set.m"
void MR_CALL 
mercury__set__map_3_p_1(
#line 234 "set.m"
  MR_Word mercury__set__TypeInfo_for_T1_9,
#line 234 "set.m"
  MR_Word mercury__set__TypeInfo_for_T2_10,
#line 234 "set.m"
  MR_Word mercury__set__P_4,
#line 234 "set.m"
  MR_Word mercury__set__S1_5,
#line 234 "set.m"
  MR_Word * mercury__set__S2_6)
#line 234 "set.m"
{
#line 676 "set.m"
  {
#line 676 "set.m"
    MR_bool mercury__set__succeeded;
#line 676 "set.m"
    MR_Word mercury__set__L1_7 = (MR_Word) mercury__set__S1_5;
#line 676 "set.m"
    MR_Word mercury__set__L2_8;
#line 676 "set.m"
    MR_Word mercury__set__List_4_17;
#line 676 "set.m"
    MR_Integer mercury__set__V_5_20;

#line 678 "set.m"
    {
#line 678 "set.m"
      mercury__list__map_3_p_1(mercury__set__TypeInfo_for_T1_9, mercury__set__TypeInfo_for_T2_10, mercury__set__P_4, mercury__set__L1_7, &mercury__set__L2_8);
    }
#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__set__TypeInfo_for_T2_10, mercury__set__L2_8, (MR_Integer) 0, &mercury__set__V_5_20);
    }
#line 110 "list.opt"
    {
#line 110 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__set__TypeInfo_for_T2_10, mercury__set__V_5_20, mercury__set__L2_8, &mercury__set__List_4_17);
    }
#line 26 "set_ordlist.opt"
    *mercury__set__S2_6 = (MR_Word) mercury__set__List_4_17;
#line 676 "set.m"
  }
#line 234 "set.m"
}

#line 233 "set.m"
void MR_CALL 
mercury__set__map_3_p_0(
#line 233 "set.m"
  MR_Word mercury__set__TypeInfo_for_T1_9,
#line 233 "set.m"
  MR_Word mercury__set__TypeInfo_for_T2_10,
#line 233 "set.m"
  MR_Word mercury__set__P_4,
#line 233 "set.m"
  MR_Word mercury__set__S1_5,
#line 233 "set.m"
  MR_Word * mercury__set__S2_6)
#line 233 "set.m"
{
#line 676 "set.m"
  {
#line 676 "set.m"
    MR_bool mercury__set__succeeded;
#line 676 "set.m"
    MR_Word mercury__set__L1_7 = (MR_Word) mercury__set__S1_5;
#line 676 "set.m"
    MR_Word mercury__set__L2_8;
#line 676 "set.m"
    MR_Word mercury__set__List_4_17;
#line 676 "set.m"
    MR_Integer mercury__set__V_5_20;

#line 678 "set.m"
    {
#line 678 "set.m"
      mercury__list__map_3_p_0(mercury__set__TypeInfo_for_T1_9, mercury__set__TypeInfo_for_T2_10, mercury__set__P_4, mercury__set__L1_7, &mercury__set__L2_8);
    }
#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__set__TypeInfo_for_T2_10, mercury__set__L2_8, (MR_Integer) 0, &mercury__set__V_5_20);
    }
#line 110 "list.opt"
    {
#line 110 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__set__TypeInfo_for_T2_10, mercury__set__V_5_20, mercury__set__L2_8, &mercury__set__List_4_17);
    }
#line 26 "set_ordlist.opt"
    *mercury__set__S2_6 = (MR_Word) mercury__set__List_4_17;
#line 676 "set.m"
  }
#line 233 "set.m"
}

#line 231 "set.m"
MR_Word MR_CALL 
mercury__set__map_2_f_0(
#line 231 "set.m"
  MR_Word mercury__set__TypeInfo_for_T1_9,
#line 231 "set.m"
  MR_Word mercury__set__TypeInfo_for_T2_10,
#line 231 "set.m"
  MR_Word mercury__set__F_4,
#line 231 "set.m"
  MR_Word mercury__set__Set_5)
#line 231 "set.m"
{
#line 681 "set.m"
  {
#line 681 "set.m"
    MR_bool mercury__set__succeeded;
#line 681 "set.m"
    MR_Word mercury__set__TransformedSet_6;
#line 681 "set.m"
    MR_Word mercury__set__List_7 = (MR_Word) mercury__set__Set_5;
#line 681 "set.m"
    MR_Word mercury__set__TransformedList_8;
#line 681 "set.m"
    MR_Word mercury__set__List_4_21;
#line 681 "set.m"
    MR_Integer mercury__set__V_5_24;

#line 683 "set.m"
    {
#line 683 "set.m"
      mercury__set__TransformedList_8 = mercury__list__map_2_f_0(mercury__set__TypeInfo_for_T1_9, mercury__set__TypeInfo_for_T2_10, mercury__set__F_4, mercury__set__List_7);
    }
#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__set__TypeInfo_for_T2_10, mercury__set__TransformedList_8, (MR_Integer) 0, &mercury__set__V_5_24);
    }
#line 110 "list.opt"
    {
#line 110 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__set__TypeInfo_for_T2_10, mercury__set__V_5_24, mercury__set__TransformedList_8, &mercury__set__List_4_21);
    }
#line 26 "set_ordlist.opt"
    mercury__set__TransformedSet_6 = (MR_Word) mercury__set__List_4_21;
#line 681 "set.m"
    return mercury__set__TransformedSet_6;
#line 681 "set.m"
  }
#line 231 "set.m"
}

#line 224 "set.m"
void MR_CALL 
mercury__set__count_2_p_0(
#line 224 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_5,
#line 224 "set.m"
  MR_Word mercury__set__Set_3,
#line 224 "set.m"
  MR_Integer * mercury__set__Count_4)
#line 224 "set.m"
{
#line 127 "set_ordlist.opt"
  {
#line 127 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 127 "set_ordlist.opt"
    MR_Word mercury__set__Set_3_7 = (MR_Word) mercury__set__Set_3;

#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__set__TypeInfo_for_T_5, mercury__set__Set_3_7, (MR_Integer) 0, mercury__set__Count_4);
#line 78 "list.opt"
      return;
    }
#line 127 "set_ordlist.opt"
  }
#line 224 "set.m"
}

#line 223 "set.m"
MR_Integer MR_CALL 
mercury__set__count_1_f_0(
#line 223 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_5,
#line 223 "set.m"
  MR_Word mercury__set__S_3)
#line 223 "set.m"
{
#line 127 "set_ordlist.opt"
  {
#line 127 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 127 "set_ordlist.opt"
    MR_Integer mercury__set__N_4;
#line 127 "set_ordlist.opt"
    MR_Word mercury__set__Set_3_9 = (MR_Word) mercury__set__S_3;

#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__set__TypeInfo_for_T_5, mercury__set__Set_3_9, (MR_Integer) 0, &mercury__set__N_4);
    }
#line 127 "set_ordlist.opt"
    return mercury__set__N_4;
#line 127 "set_ordlist.opt"
  }
#line 223 "set.m"
}

#line 218 "set.m"
void MR_CALL 
mercury__set__difference_3_p_0(
#line 218 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_7,
#line 218 "set.m"
  MR_Word mercury__set__SetA_4,
#line 218 "set.m"
  MR_Word mercury__set__SetB_5,
#line 218 "set.m"
  MR_Word * mercury__set__Set_6)
#line 218 "set.m"
{
#line 123 "set_ordlist.opt"
  {
#line 123 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 123 "set_ordlist.opt"
    MR_Word mercury__set__Xs_4_8 = (MR_Word) mercury__set__SetA_4;
#line 123 "set_ordlist.opt"
    MR_Word mercury__set__Ys_5_9 = (MR_Word) mercury__set__SetB_5;
#line 123 "set_ordlist.opt"
    MR_Word mercury__set__Set_6_10;

#line 124 "set_ordlist.opt"
    {
#line 124 "set_ordlist.opt"
      mercury__set_ordlist__difference_2_3_p_0(mercury__set__TypeInfo_for_T_7, mercury__set__Xs_4_8, mercury__set__Ys_5_9, &mercury__set__Set_6_10);
    }
#line 123 "set_ordlist.opt"
    *mercury__set__Set_6 = (MR_Word) mercury__set__Set_6_10;
#line 123 "set_ordlist.opt"
  }
#line 218 "set.m"
}

#line 217 "set.m"
MR_Word MR_CALL 
mercury__set__difference_2_f_0(
#line 217 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_7,
#line 217 "set.m"
  MR_Word mercury__set__S1_4,
#line 217 "set.m"
  MR_Word mercury__set__S2_5)
#line 217 "set.m"
{
#line 123 "set_ordlist.opt"
  {
#line 123 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 123 "set_ordlist.opt"
    MR_Word mercury__set__S3_6;
#line 123 "set_ordlist.opt"
    MR_Word mercury__set__Xs_4_11 = (MR_Word) mercury__set__S1_4;
#line 123 "set_ordlist.opt"
    MR_Word mercury__set__Ys_5_12 = (MR_Word) mercury__set__S2_5;
#line 123 "set_ordlist.opt"
    MR_Word mercury__set__Set_6_13;

#line 124 "set_ordlist.opt"
    {
#line 124 "set_ordlist.opt"
      mercury__set_ordlist__difference_2_3_p_0(mercury__set__TypeInfo_for_T_7, mercury__set__Xs_4_11, mercury__set__Ys_5_12, &mercury__set__Set_6_13);
    }
#line 123 "set_ordlist.opt"
    mercury__set__S3_6 = (MR_Word) mercury__set__Set_6_13;
#line 123 "set_ordlist.opt"
    return mercury__set__S3_6;
#line 123 "set_ordlist.opt"
  }
#line 217 "set.m"
}

#line 211 "set.m"
MR_Word MR_CALL 
mercury__set__intersect_list_1_f_0(
#line 211 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_4,
#line 211 "set.m"
  MR_Word mercury__set__Sets_3)
#line 211 "set.m"
{
#line 665 "set.m"
  {
#line 665 "set.m"
    MR_bool mercury__set__succeeded;
#line 665 "set.m"
    MR_Word mercury__set__HeadVar__2_2;

#line 665 "set.m"
    {
#line 665 "set.m"
      return mercury__set__HeadVar__2_2 = mercury__set_ordlist__intersect_list_1_f_0(mercury__set__TypeInfo_for_T_4, mercury__set__Sets_3);
    }
#line 665 "set.m"
    return mercury__set__HeadVar__2_2;
#line 665 "set.m"
  }
#line 211 "set.m"
}

#line 206 "set.m"
void MR_CALL 
mercury__set__power_intersect_2_p_0(
#line 206 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_5,
#line 206 "set.m"
  MR_Word mercury__set__Sets_3,
#line 206 "set.m"
  MR_Word * mercury__set__Set_4)
#line 206 "set.m"
{
#line 117 "set_ordlist.opt"
  {
#line 117 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 117 "set_ordlist.opt"
    MR_Word mercury__set__S0_3_7 = (MR_Word) mercury__set__Sets_3;

#line 118 "set_ordlist.opt"
    {
#line 118 "set_ordlist.opt"
      *mercury__set__Set_4 = mercury__set_ordlist__intersect_list_1_f_0(mercury__set__TypeInfo_for_T_5, mercury__set__S0_3_7);
    }
#line 117 "set_ordlist.opt"
  }
#line 206 "set.m"
}

#line 205 "set.m"
MR_Word MR_CALL 
mercury__set__power_intersect_1_f_0(
#line 205 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_5,
#line 205 "set.m"
  MR_Word mercury__set__SS_3)
#line 205 "set.m"
{
#line 117 "set_ordlist.opt"
  {
#line 117 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 117 "set_ordlist.opt"
    MR_Word mercury__set__S_4;
#line 117 "set_ordlist.opt"
    MR_Word mercury__set__S0_3_9 = (MR_Word) mercury__set__SS_3;

#line 118 "set_ordlist.opt"
    {
#line 118 "set_ordlist.opt"
      return mercury__set__S_4 = mercury__set_ordlist__intersect_list_1_f_0(mercury__set__TypeInfo_for_T_5, mercury__set__S0_3_9);
    }
#line 117 "set_ordlist.opt"
    return mercury__set__S_4;
#line 117 "set_ordlist.opt"
  }
#line 205 "set.m"
}

#line 200 "set.m"
void MR_CALL 
mercury__set__intersect_3_p_0(
#line 200 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_7,
#line 200 "set.m"
  MR_Word mercury__set__SetA_4,
#line 200 "set.m"
  MR_Word mercury__set__SetB_5,
#line 200 "set.m"
  MR_Word * mercury__set__Set_6)
#line 200 "set.m"
{
#line 113 "set_ordlist.opt"
  {
#line 113 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 113 "set_ordlist.opt"
    MR_Word mercury__set__Xs_4_8 = (MR_Word) mercury__set__SetA_4;
#line 113 "set_ordlist.opt"
    MR_Word mercury__set__Ys_5_9 = (MR_Word) mercury__set__SetB_5;
#line 113 "set_ordlist.opt"
    MR_Word mercury__set__Set_6_10;

#line 114 "set_ordlist.opt"
    {
#line 114 "set_ordlist.opt"
      mercury__set_ordlist__intersect_2_3_p_0(mercury__set__TypeInfo_for_T_7, mercury__set__Xs_4_8, mercury__set__Ys_5_9, &mercury__set__Set_6_10);
    }
#line 113 "set_ordlist.opt"
    *mercury__set__Set_6 = (MR_Word) mercury__set__Set_6_10;
#line 113 "set_ordlist.opt"
  }
#line 200 "set.m"
}

#line 199 "set.m"
MR_Word MR_CALL 
mercury__set__intersect_2_f_0(
#line 199 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_7,
#line 199 "set.m"
  MR_Word mercury__set__S1_4,
#line 199 "set.m"
  MR_Word mercury__set__S2_5)
#line 199 "set.m"
{
#line 113 "set_ordlist.opt"
  {
#line 113 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 113 "set_ordlist.opt"
    MR_Word mercury__set__S3_6;
#line 113 "set_ordlist.opt"
    MR_Word mercury__set__Xs_4_11 = (MR_Word) mercury__set__S1_4;
#line 113 "set_ordlist.opt"
    MR_Word mercury__set__Ys_5_12 = (MR_Word) mercury__set__S2_5;
#line 113 "set_ordlist.opt"
    MR_Word mercury__set__Set_6_13;

#line 114 "set_ordlist.opt"
    {
#line 114 "set_ordlist.opt"
      mercury__set_ordlist__intersect_2_3_p_0(mercury__set__TypeInfo_for_T_7, mercury__set__Xs_4_11, mercury__set__Ys_5_12, &mercury__set__Set_6_13);
    }
#line 113 "set_ordlist.opt"
    mercury__set__S3_6 = (MR_Word) mercury__set__Set_6_13;
#line 113 "set_ordlist.opt"
    return mercury__set__S3_6;
#line 113 "set_ordlist.opt"
  }
#line 199 "set.m"
}

#line 187 "set.m"
void MR_CALL 
mercury__set__power_union_2_p_0(
#line 187 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_5,
#line 187 "set.m"
  MR_Word mercury__set__Sets_3,
#line 187 "set.m"
  MR_Word * mercury__set__Set_4)
#line 187 "set.m"
{
#line 109 "set_ordlist.opt"
  {
#line 109 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 109 "set_ordlist.opt"
    MR_Word mercury__set__ListofSets_3_7 = (MR_Word) mercury__set__Sets_3;
#line 109 "set_ordlist.opt"
    MR_Word mercury__set__Set0_5_10 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 109 "set_ordlist.opt"
    MR_Word mercury__set__V_2_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 108 "set_ordlist.opt"
    {
#line 108 "set_ordlist.opt"
      mercury__set_ordlist__power_union_2_3_p_0(mercury__set__TypeInfo_for_T_5, mercury__set__ListofSets_3_7, mercury__set__Set0_5_10, mercury__set__Set_4);
#line 108 "set_ordlist.opt"
      return;
    }
#line 109 "set_ordlist.opt"
  }
#line 187 "set.m"
}

#line 186 "set.m"
MR_Word MR_CALL 
mercury__set__power_union_1_f_0(
#line 186 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_5,
#line 186 "set.m"
  MR_Word mercury__set__SS_3)
#line 186 "set.m"
{
#line 109 "set_ordlist.opt"
  {
#line 109 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 109 "set_ordlist.opt"
    MR_Word mercury__set__S_4;
#line 109 "set_ordlist.opt"
    MR_Word mercury__set__ListofSets_3_9 = (MR_Word) mercury__set__SS_3;
#line 109 "set_ordlist.opt"
    MR_Word mercury__set__Set0_5_12 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 109 "set_ordlist.opt"
    MR_Word mercury__set__V_2_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 108 "set_ordlist.opt"
    {
#line 108 "set_ordlist.opt"
      mercury__set_ordlist__power_union_2_3_p_0(mercury__set__TypeInfo_for_T_5, mercury__set__ListofSets_3_9, mercury__set__Set0_5_12, &mercury__set__S_4);
    }
#line 109 "set_ordlist.opt"
    return mercury__set__S_4;
#line 109 "set_ordlist.opt"
  }
#line 186 "set.m"
}

#line 181 "set.m"
MR_Word MR_CALL 
mercury__set__union_list_1_f_0(
#line 181 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_4,
#line 181 "set.m"
  MR_Word mercury__set__Sets_3)
#line 181 "set.m"
{
#line 106 "set_ordlist.opt"
  {
#line 106 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 106 "set_ordlist.opt"
    MR_Word mercury__set__HeadVar__2_2;
#line 106 "set_ordlist.opt"
    MR_Word mercury__set__Set0_5_7 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 106 "set_ordlist.opt"
    MR_Word mercury__set__V_2_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 108 "set_ordlist.opt"
    {
#line 108 "set_ordlist.opt"
      mercury__set_ordlist__power_union_2_3_p_0(mercury__set__TypeInfo_for_T_4, mercury__set__Sets_3, mercury__set__Set0_5_7, &mercury__set__HeadVar__2_2);
    }
#line 106 "set_ordlist.opt"
    return mercury__set__HeadVar__2_2;
#line 106 "set_ordlist.opt"
  }
#line 181 "set.m"
}

#line 176 "set.m"
void MR_CALL 
mercury__set__union_3_p_0(
#line 176 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_7,
#line 176 "set.m"
  MR_Word mercury__set__SetA_4,
#line 176 "set.m"
  MR_Word mercury__set__SetB_5,
#line 176 "set.m"
  MR_Word * mercury__set__Set_6)
#line 176 "set.m"
{
#line 100 "set_ordlist.opt"
  {
#line 100 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 100 "set_ordlist.opt"
    MR_Word mercury__set__Set0_4_8 = (MR_Word) mercury__set__SetA_4;
#line 100 "set_ordlist.opt"
    MR_Word mercury__set__Set1_5_9 = (MR_Word) mercury__set__SetB_5;
#line 100 "set_ordlist.opt"
    MR_Word mercury__set__Set_6_10;

#line 101 "set_ordlist.opt"
    {
#line 101 "set_ordlist.opt"
      mercury__list__merge_and_remove_dups_3_p_0(mercury__set__TypeInfo_for_T_7, mercury__set__Set0_4_8, mercury__set__Set1_5_9, &mercury__set__Set_6_10);
    }
#line 100 "set_ordlist.opt"
    *mercury__set__Set_6 = (MR_Word) mercury__set__Set_6_10;
#line 100 "set_ordlist.opt"
  }
#line 176 "set.m"
}

#line 175 "set.m"
MR_Word MR_CALL 
mercury__set__union_2_f_0(
#line 175 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_7,
#line 175 "set.m"
  MR_Word mercury__set__S1_4,
#line 175 "set.m"
  MR_Word mercury__set__S2_5)
#line 175 "set.m"
{
#line 100 "set_ordlist.opt"
  {
#line 100 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 100 "set_ordlist.opt"
    MR_Word mercury__set__S3_6;
#line 100 "set_ordlist.opt"
    MR_Word mercury__set__Set0_4_11 = (MR_Word) mercury__set__S1_4;
#line 100 "set_ordlist.opt"
    MR_Word mercury__set__Set1_5_12 = (MR_Word) mercury__set__S2_5;
#line 100 "set_ordlist.opt"
    MR_Word mercury__set__Set_6_13;

#line 101 "set_ordlist.opt"
    {
#line 101 "set_ordlist.opt"
      mercury__list__merge_and_remove_dups_3_p_0(mercury__set__TypeInfo_for_T_7, mercury__set__Set0_4_11, mercury__set__Set1_5_12, &mercury__set__Set_6_13);
    }
#line 100 "set_ordlist.opt"
    mercury__set__S3_6 = (MR_Word) mercury__set__Set_6_13;
#line 100 "set_ordlist.opt"
    return mercury__set__S3_6;
#line 100 "set_ordlist.opt"
  }
#line 175 "set.m"
}

#line 164 "set.m"
MR_bool MR_CALL 
mercury__set__remove_least_3_p_0(
#line 164 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_9,
#line 164 "set.m"
  MR_Box * mercury__set__X_4,
#line 164 "set.m"
  MR_Word mercury__set__STATE_VARIABLE_Set_0_6,
#line 164 "set.m"
  MR_Word * mercury__set__STATE_VARIABLE_Set_7)
#line 164 "set.m"
{
#line 98 "set_ordlist.opt"
  {
#line 98 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 98 "set_ordlist.opt"
    MR_Word mercury__set__V_6_11 = (MR_Word) mercury__set__STATE_VARIABLE_Set_0_6;
#line 98 "set_ordlist.opt"
    MR_Word mercury__set__Set_5_12;

#line 99 "set_ordlist.opt"
    mercury__set__succeeded = ((MR_tag((MR_Word) mercury__set__V_6_11)) == (MR_mktag((MR_Integer) 1)));
#line 99 "set_ordlist.opt"
    if (mercury__set__succeeded)
#line 99 "set_ordlist.opt"
      {
#line 99 "set_ordlist.opt"
        *mercury__set__X_4 = (MR_hl_field(MR_mktag(1), mercury__set__V_6_11, (MR_Integer) 0));
#line 99 "set_ordlist.opt"
        mercury__set__Set_5_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set__V_6_11, (MR_Integer) 1)));
#line 98 "set_ordlist.opt"
        *mercury__set__STATE_VARIABLE_Set_7 = (MR_Word) mercury__set__Set_5_12;
#line 98 "set_ordlist.opt"
        mercury__set__succeeded = MR_TRUE;
#line 99 "set_ordlist.opt"
      }
#line 98 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 98 "set_ordlist.opt"
  }
#line 164 "set.m"
}

#line 156 "set.m"
MR_bool MR_CALL 
mercury__set__remove_list_3_p_0(
#line 156 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_9,
#line 156 "set.m"
  MR_Word mercury__set__List_4,
#line 156 "set.m"
  MR_Word mercury__set__STATE_VARIABLE_Set_0_6,
#line 156 "set.m"
  MR_Word * mercury__set__STATE_VARIABLE_Set_7)
#line 156 "set.m"
{
#line 94 "set_ordlist.opt"
  {
#line 94 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 94 "set_ordlist.opt"
    MR_Word mercury__set__ElemSet_6_13;
#line 94 "set_ordlist.opt"
    MR_Word mercury__set__Xs_4_17;
#line 94 "set_ordlist.opt"
    MR_Word mercury__set__Set_6_19;
#line 94 "set_ordlist.opt"
    MR_Word mercury__set__Xs_4_20;
#line 94 "set_ordlist.opt"
    MR_Word mercury__set__Ys_5_21;
#line 94 "set_ordlist.opt"
    MR_Word mercury__set__Set_6_22;

#line 95 "set_ordlist.opt"
    {
#line 95 "set_ordlist.opt"
      mercury__set__succeeded = mercury__set_ordlist__sort_no_dups_2_p_0(mercury__set__TypeInfo_for_T_9, mercury__set__List_4, &mercury__set__ElemSet_6_13);
    }
#line 94 "set_ordlist.opt"
    if (mercury__set__succeeded)
#line 94 "set_ordlist.opt"
      {
#line 113 "set_ordlist.opt"
        mercury__set__Xs_4_17 = (MR_Word) mercury__set__STATE_VARIABLE_Set_0_6;
#line 113 "set_ordlist.opt"
        mercury__set__Set_6_19 = (MR_Word) mercury__set__ElemSet_6_13;
#line 114 "set_ordlist.opt"
        {
#line 114 "set_ordlist.opt"
          mercury__set__succeeded = mercury__set_ordlist__intersect_2_3_p_1(mercury__set__TypeInfo_for_T_9, mercury__set__Xs_4_17, mercury__set__Set_6_19, mercury__set__Set_6_19);
        }
#line 94 "set_ordlist.opt"
        if (mercury__set__succeeded)
#line 94 "set_ordlist.opt"
          {
#line 123 "set_ordlist.opt"
            mercury__set__Xs_4_20 = (MR_Word) mercury__set__STATE_VARIABLE_Set_0_6;
#line 123 "set_ordlist.opt"
            mercury__set__Ys_5_21 = (MR_Word) mercury__set__ElemSet_6_13;
#line 124 "set_ordlist.opt"
            {
#line 124 "set_ordlist.opt"
              mercury__set_ordlist__difference_2_3_p_0(mercury__set__TypeInfo_for_T_9, mercury__set__Xs_4_20, mercury__set__Ys_5_21, &mercury__set__Set_6_22);
            }
#line 123 "set_ordlist.opt"
            *mercury__set__STATE_VARIABLE_Set_7 = (MR_Word) mercury__set__Set_6_22;
#line 123 "set_ordlist.opt"
            mercury__set__succeeded = MR_TRUE;
#line 94 "set_ordlist.opt"
          }
#line 94 "set_ordlist.opt"
      }
#line 94 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 94 "set_ordlist.opt"
  }
#line 156 "set.m"
}

#line 149 "set.m"
MR_bool MR_CALL 
mercury__set__remove_3_p_0(
#line 149 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_9,
#line 149 "set.m"
  MR_Box mercury__set__X_4,
#line 149 "set.m"
  MR_Word mercury__set__STATE_VARIABLE_Set_0_6,
#line 149 "set.m"
  MR_Word * mercury__set__STATE_VARIABLE_Set_7)
#line 149 "set.m"
{
#line 92 "set_ordlist.opt"
  {
#line 92 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 92 "set_ordlist.opt"
    MR_Word mercury__set__Set0_5_11 = (MR_Word) mercury__set__STATE_VARIABLE_Set_0_6;
#line 92 "set_ordlist.opt"
    MR_Word mercury__set__Set_6_12;

#line 93 "set_ordlist.opt"
    {
#line 93 "set_ordlist.opt"
      mercury__set__succeeded = mercury__list__delete_first_3_p_0(mercury__set__TypeInfo_for_T_9, mercury__set__Set0_5_11, mercury__set__X_4, &mercury__set__Set_6_12);
    }
#line 92 "set_ordlist.opt"
    if (mercury__set__succeeded)
#line 92 "set_ordlist.opt"
      {
#line 92 "set_ordlist.opt"
        *mercury__set__STATE_VARIABLE_Set_7 = (MR_Word) mercury__set__Set_6_12;
#line 92 "set_ordlist.opt"
        mercury__set__succeeded = MR_TRUE;
#line 92 "set_ordlist.opt"
      }
#line 92 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 92 "set_ordlist.opt"
  }
#line 149 "set.m"
}

#line 142 "set.m"
void MR_CALL 
mercury__set__delete_list_3_p_0(
#line 142 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_9,
#line 142 "set.m"
  MR_Word mercury__set__List_4,
#line 142 "set.m"
  MR_Word mercury__set__STATE_VARIABLE_Set_0_6,
#line 142 "set.m"
  MR_Word * mercury__set__STATE_VARIABLE_Set_7)
#line 142 "set.m"
{
#line 86 "set_ordlist.opt"
  {
#line 86 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 86 "set_ordlist.opt"
    MR_Integer mercury__set__V_5_18;
#line 86 "set_ordlist.opt"
    MR_Word mercury__set__Xs_4_24;
#line 86 "set_ordlist.opt"
    MR_Word mercury__set__Ys_5_25;
#line 86 "set_ordlist.opt"
    MR_Word mercury__set__Set_6_26;

#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__set__TypeInfo_for_T_9, mercury__set__List_4, (MR_Integer) 0, &mercury__set__V_5_18);
    }
#line 110 "list.opt"
    {
#line 110 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__set__TypeInfo_for_T_9, mercury__set__V_5_18, mercury__set__List_4, &mercury__set__Ys_5_25);
    }
#line 123 "set_ordlist.opt"
    mercury__set__Xs_4_24 = (MR_Word) mercury__set__STATE_VARIABLE_Set_0_6;
#line 124 "set_ordlist.opt"
    {
#line 124 "set_ordlist.opt"
      mercury__set_ordlist__difference_2_3_p_0(mercury__set__TypeInfo_for_T_9, mercury__set__Xs_4_24, mercury__set__Ys_5_25, &mercury__set__Set_6_26);
    }
#line 123 "set_ordlist.opt"
    *mercury__set__STATE_VARIABLE_Set_7 = (MR_Word) mercury__set__Set_6_26;
#line 86 "set_ordlist.opt"
  }
#line 142 "set.m"
}

#line 141 "set.m"
MR_Word MR_CALL 
mercury__set__delete_list_2_f_0(
#line 141 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_7,
#line 141 "set.m"
  MR_Word mercury__set__S1_4,
#line 141 "set.m"
  MR_Word mercury__set__Xs_5)
#line 141 "set.m"
{
#line 616 "set.m"
  {
#line 616 "set.m"
    MR_bool mercury__set__succeeded;
#line 616 "set.m"
    MR_Word mercury__set__S2_6;

#line 616 "set.m"
    {
#line 616 "set.m"
      mercury__set__delete_list_3_p_0(mercury__set__TypeInfo_for_T_7, mercury__set__Xs_5, mercury__set__S1_4, &mercury__set__S2_6);
    }
#line 616 "set.m"
    return mercury__set__S2_6;
#line 616 "set.m"
  }
#line 141 "set.m"
}

#line 135 "set.m"
void MR_CALL 
mercury__set__delete_3_p_0(
#line 135 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_9,
#line 135 "set.m"
  MR_Box mercury__set__X_4,
#line 135 "set.m"
  MR_Word mercury__set__STATE_VARIABLE_Set_0_6,
#line 135 "set.m"
  MR_Word * mercury__set__STATE_VARIABLE_Set_7)
#line 135 "set.m"
{
#line 79 "set_ordlist.opt"
  {
#line 79 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 79 "set_ordlist.opt"
    MR_Word mercury__set__V_11_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 79 "set_ordlist.opt"
    MR_Word mercury__set__Xs_4_17;
#line 79 "set_ordlist.opt"
    MR_Word mercury__set__Ys_5_18;
#line 79 "set_ordlist.opt"
    MR_Word mercury__set__Set_6_19;

#line 81 "set_ordlist.opt"
    {
#line 81 "set_ordlist.opt"
      mercury__set__Ys_5_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 81 "set_ordlist.opt"
      MR_hl_field(MR_mktag(1), mercury__set__Ys_5_18, 0) = mercury__set__X_4;
#line 81 "set_ordlist.opt"
      MR_hl_field(MR_mktag(1), mercury__set__Ys_5_18, 1) = ((MR_Box) (mercury__set__V_11_16));
#line 81 "set_ordlist.opt"
    }
#line 123 "set_ordlist.opt"
    mercury__set__Xs_4_17 = (MR_Word) mercury__set__STATE_VARIABLE_Set_0_6;
#line 124 "set_ordlist.opt"
    {
#line 124 "set_ordlist.opt"
      mercury__set_ordlist__difference_2_3_p_0(mercury__set__TypeInfo_for_T_9, mercury__set__Xs_4_17, mercury__set__Ys_5_18, &mercury__set__Set_6_19);
    }
#line 123 "set_ordlist.opt"
    *mercury__set__STATE_VARIABLE_Set_7 = (MR_Word) mercury__set__Set_6_19;
#line 79 "set_ordlist.opt"
  }
#line 135 "set.m"
}

#line 134 "set.m"
MR_Word MR_CALL 
mercury__set__delete_2_f_0(
#line 134 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_7,
#line 134 "set.m"
  MR_Word mercury__set__S1_4,
#line 134 "set.m"
  MR_Box mercury__set__T_5)
#line 134 "set.m"
{
#line 79 "set_ordlist.opt"
  {
#line 79 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 79 "set_ordlist.opt"
    MR_Word mercury__set__S2_6;
#line 79 "set_ordlist.opt"
    MR_Word mercury__set__V_11_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 79 "set_ordlist.opt"
    MR_Word mercury__set__Xs_4_20;
#line 79 "set_ordlist.opt"
    MR_Word mercury__set__Ys_5_21;
#line 79 "set_ordlist.opt"
    MR_Word mercury__set__Set_6_22;

#line 81 "set_ordlist.opt"
    {
#line 81 "set_ordlist.opt"
      mercury__set__Ys_5_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 81 "set_ordlist.opt"
      MR_hl_field(MR_mktag(1), mercury__set__Ys_5_21, 0) = mercury__set__T_5;
#line 81 "set_ordlist.opt"
      MR_hl_field(MR_mktag(1), mercury__set__Ys_5_21, 1) = ((MR_Box) (mercury__set__V_11_19));
#line 81 "set_ordlist.opt"
    }
#line 123 "set_ordlist.opt"
    mercury__set__Xs_4_20 = (MR_Word) mercury__set__S1_4;
#line 124 "set_ordlist.opt"
    {
#line 124 "set_ordlist.opt"
      mercury__set_ordlist__difference_2_3_p_0(mercury__set__TypeInfo_for_T_7, mercury__set__Xs_4_20, mercury__set__Ys_5_21, &mercury__set__Set_6_22);
    }
#line 123 "set_ordlist.opt"
    mercury__set__S2_6 = (MR_Word) mercury__set__Set_6_22;
#line 79 "set_ordlist.opt"
    return mercury__set__S2_6;
#line 79 "set_ordlist.opt"
  }
#line 134 "set.m"
}

#line 127 "set.m"
void MR_CALL 
mercury__set__insert_list_3_p_0(
#line 127 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_9,
#line 127 "set.m"
  MR_Word mercury__set__List_4,
#line 127 "set.m"
  MR_Word mercury__set__STATE_VARIABLE_Set_0_6,
#line 127 "set.m"
  MR_Word * mercury__set__STATE_VARIABLE_Set_7)
#line 127 "set.m"
{
#line 73 "set_ordlist.opt"
  {
#line 73 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 73 "set_ordlist.opt"
    MR_Integer mercury__set__V_5_18;
#line 73 "set_ordlist.opt"
    MR_Word mercury__set__Set0_4_24;
#line 73 "set_ordlist.opt"
    MR_Word mercury__set__Set1_5_25;
#line 73 "set_ordlist.opt"
    MR_Word mercury__set__Set_6_26;

#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__set__TypeInfo_for_T_9, mercury__set__List_4, (MR_Integer) 0, &mercury__set__V_5_18);
    }
#line 110 "list.opt"
    {
#line 110 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__set__TypeInfo_for_T_9, mercury__set__V_5_18, mercury__set__List_4, &mercury__set__Set0_4_24);
    }
#line 100 "set_ordlist.opt"
    mercury__set__Set1_5_25 = (MR_Word) mercury__set__STATE_VARIABLE_Set_0_6;
#line 101 "set_ordlist.opt"
    {
#line 101 "set_ordlist.opt"
      mercury__list__merge_and_remove_dups_3_p_0(mercury__set__TypeInfo_for_T_9, mercury__set__Set0_4_24, mercury__set__Set1_5_25, &mercury__set__Set_6_26);
    }
#line 100 "set_ordlist.opt"
    *mercury__set__STATE_VARIABLE_Set_7 = (MR_Word) mercury__set__Set_6_26;
#line 73 "set_ordlist.opt"
  }
#line 127 "set.m"
}

#line 126 "set.m"
MR_Word MR_CALL 
mercury__set__insert_list_2_f_0(
#line 126 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_7,
#line 126 "set.m"
  MR_Word mercury__set__S1_4,
#line 126 "set.m"
  MR_Word mercury__set__Xs_5)
#line 126 "set.m"
{
#line 570 "set.m"
  {
#line 570 "set.m"
    MR_bool mercury__set__succeeded;
#line 570 "set.m"
    MR_Word mercury__set__S2_6;

#line 570 "set.m"
    {
#line 570 "set.m"
      mercury__set__insert_list_3_p_0(mercury__set__TypeInfo_for_T_7, mercury__set__Xs_5, mercury__set__S1_4, &mercury__set__S2_6);
    }
#line 570 "set.m"
    return mercury__set__S2_6;
#line 570 "set.m"
  }
#line 126 "set.m"
}

#line 121 "set.m"
MR_bool MR_CALL 
mercury__set__insert_new_3_p_0(
#line 121 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_9,
#line 121 "set.m"
  MR_Box mercury__set__X_4,
#line 121 "set.m"
  MR_Word mercury__set__STATE_VARIABLE_Set_0_6,
#line 121 "set.m"
  MR_Word * mercury__set__STATE_VARIABLE_Set_7)
#line 121 "set.m"
{
#line 71 "set_ordlist.opt"
  {
#line 71 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 71 "set_ordlist.opt"
    MR_Word mercury__set__List0_5_11 = (MR_Word) mercury__set__STATE_VARIABLE_Set_0_6;
#line 71 "set_ordlist.opt"
    MR_Word mercury__set__List_6_12;

#line 72 "set_ordlist.opt"
    {
#line 72 "set_ordlist.opt"
      mercury__set__succeeded = mercury__set_ordlist__insert_new_2_3_p_0(mercury__set__TypeInfo_for_T_9, mercury__set__List0_5_11, mercury__set__X_4, &mercury__set__List_6_12);
    }
#line 71 "set_ordlist.opt"
    if (mercury__set__succeeded)
#line 71 "set_ordlist.opt"
      {
#line 71 "set_ordlist.opt"
        *mercury__set__STATE_VARIABLE_Set_7 = (MR_Word) mercury__set__List_6_12;
#line 71 "set_ordlist.opt"
        mercury__set__succeeded = MR_TRUE;
#line 71 "set_ordlist.opt"
      }
#line 71 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 71 "set_ordlist.opt"
  }
#line 121 "set.m"
}

#line 116 "set.m"
void MR_CALL 
mercury__set__insert_3_p_0(
#line 116 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_9,
#line 116 "set.m"
  MR_Box mercury__set__X_4,
#line 116 "set.m"
  MR_Word mercury__set__STATE_VARIABLE_Set_0_6,
#line 116 "set.m"
  MR_Word * mercury__set__STATE_VARIABLE_Set_7)
#line 116 "set.m"
{
#line 67 "set_ordlist.opt"
  {
#line 67 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 67 "set_ordlist.opt"
    MR_Word mercury__set__List0_5_11 = (MR_Word) mercury__set__STATE_VARIABLE_Set_0_6;
#line 67 "set_ordlist.opt"
    MR_Word mercury__set__List_6_12;

#line 68 "set_ordlist.opt"
    {
#line 68 "set_ordlist.opt"
      mercury__set_ordlist__insert_2_3_p_0(mercury__set__TypeInfo_for_T_9, mercury__set__List0_5_11, mercury__set__X_4, &mercury__set__List_6_12);
    }
#line 67 "set_ordlist.opt"
    *mercury__set__STATE_VARIABLE_Set_7 = (MR_Word) mercury__set__List_6_12;
#line 67 "set_ordlist.opt"
  }
#line 116 "set.m"
}

#line 115 "set.m"
MR_Word MR_CALL 
mercury__set__insert_2_f_0(
#line 115 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_7,
#line 115 "set.m"
  MR_Word mercury__set__S1_4,
#line 115 "set.m"
  MR_Box mercury__set__T_5)
#line 115 "set.m"
{
#line 67 "set_ordlist.opt"
  {
#line 67 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 67 "set_ordlist.opt"
    MR_Word mercury__set__S2_6;
#line 67 "set_ordlist.opt"
    MR_Word mercury__set__List0_5_14 = (MR_Word) mercury__set__S1_4;
#line 67 "set_ordlist.opt"
    MR_Word mercury__set__List_6_15;

#line 68 "set_ordlist.opt"
    {
#line 68 "set_ordlist.opt"
      mercury__set_ordlist__insert_2_3_p_0(mercury__set__TypeInfo_for_T_7, mercury__set__List0_5_14, mercury__set__T_5, &mercury__set__List_6_15);
    }
#line 67 "set_ordlist.opt"
    mercury__set__S2_6 = (MR_Word) mercury__set__List_6_15;
#line 67 "set_ordlist.opt"
    return mercury__set__S2_6;
#line 67 "set_ordlist.opt"
  }
#line 115 "set.m"
}

#line 110 "set.m"
MR_bool MR_CALL 
mercury__set__contains_2_p_0(
#line 110 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_5,
#line 110 "set.m"
  MR_Word mercury__set__Set_3,
#line 110 "set.m"
  MR_Box mercury__set__X_4)
#line 110 "set.m"
{
#line 66 "set_ordlist.opt"
  {
#line 66 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;

#line 66 "set_ordlist.opt"
    {
#line 66 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__set_ordlist__member_2_p_0(mercury__set__TypeInfo_for_T_5, mercury__set__X_4, mercury__set__Set_3);
    }
#line 66 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 66 "set_ordlist.opt"
  }
#line 110 "set.m"
}

#line 106 "set.m"
void MR_CALL 
mercury__set__is_member_3_p_0(
#line 106 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_7,
#line 106 "set.m"
  MR_Box mercury__set__X_4,
#line 106 "set.m"
  MR_Word mercury__set__Set_5,
#line 106 "set.m"
  MR_Word * mercury__set__Result_6)
#line 106 "set.m"
{
#line 63 "set_ordlist.opt"
  {
#line 63 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 63 "set_ordlist.opt"
    MR_Word mercury__set__L_5_10 = (MR_Word) mercury__set__Set_5;

#line 64 "set_ordlist.opt"
    {
#line 64 "set_ordlist.opt"
      mercury__set_ordlist__is_member_2_3_p_0(mercury__set__TypeInfo_for_T_7, mercury__set__X_4, mercury__set__L_5_10, mercury__set__Result_6);
#line 64 "set_ordlist.opt"
      return;
    }
#line 63 "set_ordlist.opt"
  }
#line 106 "set.m"
}

#line 101 "set.m"
void MR_CALL 
mercury__set__member_2_p_1(
#line 101 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_8,
#line 101 "set.m"
  MR_Box * mercury__set__X_1,
#line 101 "set.m"
  MR_Word mercury__set__Set_2,
#line 101 "set.m"
  MR_Cont mercury__set__cont,
#line 101 "set.m"
  void * mercury__set__cont_env_ptr)
#line 101 "set.m"
{
#line 607 "set.m"
  {
#line 607 "set.m"
    MR_bool mercury__set__succeeded;

#line 607 "set.m"
    {
#line 607 "set.m"
      mercury__set_ordlist__member_2_p_1(mercury__set__TypeInfo_for_T_8, mercury__set__X_1, mercury__set__Set_2, mercury__set__cont, mercury__set__cont_env_ptr);
#line 607 "set.m"
      return;
    }
#line 607 "set.m"
  }
#line 101 "set.m"
}

#line 100 "set.m"
MR_bool MR_CALL 
mercury__set__member_2_p_0(
#line 100 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_8,
#line 100 "set.m"
  MR_Box mercury__set__X_1,
#line 100 "set.m"
  MR_Word mercury__set__Set_2)
#line 100 "set.m"
{
#line 604 "set.m"
  {
#line 604 "set.m"
    MR_bool mercury__set__succeeded;
#line 604 "set.m"
    MR_Word mercury__set__V_9_9;
#line 604 "set.m"
    MR_Word mercury__set__L_5_12 = (MR_Word) mercury__set__Set_2;

#line 64 "set_ordlist.opt"
    {
#line 64 "set_ordlist.opt"
      mercury__set_ordlist__is_member_2_3_p_0(mercury__set__TypeInfo_for_T_8, mercury__set__X_1, mercury__set__L_5_12, &mercury__set__V_9_9);
    }
#line 605 "set.m"
    mercury__set__succeeded = ((MR_Integer) 1 == mercury__set__V_9_9);
#line 604 "set.m"
    return mercury__set__succeeded;
#line 604 "set.m"
  }
#line 100 "set.m"
}

#line 95 "set.m"
MR_bool MR_CALL 
mercury__set__superset_2_p_0(
#line 95 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_5,
#line 95 "set.m"
  MR_Word mercury__set__SetA_3,
#line 95 "set.m"
  MR_Word mercury__set__SetB_4)
#line 95 "set.m"
{
#line 113 "set_ordlist.opt"
  {
#line 113 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 113 "set_ordlist.opt"
    MR_Word mercury__set__Xs_4_11 = (MR_Word) mercury__set__SetA_3;
#line 113 "set_ordlist.opt"
    MR_Word mercury__set__Set_6_13 = (MR_Word) mercury__set__SetB_4;

#line 114 "set_ordlist.opt"
    {
#line 114 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__set_ordlist__intersect_2_3_p_1(mercury__set__TypeInfo_for_T_5, mercury__set__Xs_4_11, mercury__set__Set_6_13, mercury__set__Set_6_13);
    }
#line 113 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 113 "set_ordlist.opt"
  }
#line 95 "set.m"
}

#line 90 "set.m"
MR_bool MR_CALL 
mercury__set__subset_2_p_0(
#line 90 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_5,
#line 90 "set.m"
  MR_Word mercury__set__SetA_3,
#line 90 "set.m"
  MR_Word mercury__set__SetB_4)
#line 90 "set.m"
{
#line 113 "set_ordlist.opt"
  {
#line 113 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 113 "set_ordlist.opt"
    MR_Word mercury__set__Xs_4_9 = (MR_Word) mercury__set__SetB_4;
#line 113 "set_ordlist.opt"
    MR_Word mercury__set__Set_6_11 = (MR_Word) mercury__set__SetA_3;

#line 114 "set_ordlist.opt"
    {
#line 114 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__set_ordlist__intersect_2_3_p_1(mercury__set__TypeInfo_for_T_5, mercury__set__Xs_4_9, mercury__set__Set_6_11, mercury__set__Set_6_11);
    }
#line 113 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 113 "set_ordlist.opt"
  }
#line 90 "set.m"
}

#line 86 "set.m"
MR_bool MR_CALL 
mercury__set__is_empty_1_p_0(
#line 86 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_3,
#line 86 "set.m"
  MR_Word mercury__set__Set_2)
#line 86 "set.m"
{
#line 50 "set_ordlist.opt"
  {
#line 50 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 50 "set_ordlist.opt"
    MR_Word mercury__set__V_2_4 = (MR_Word) mercury__set__Set_2;

#line 51 "set_ordlist.opt"
    mercury__set__succeeded = (mercury__set__V_2_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 50 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 50 "set_ordlist.opt"
  }
#line 86 "set.m"
}

#line 82 "set.m"
MR_bool MR_CALL 
mercury__set__non_empty_1_p_0(
#line 82 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_3,
#line 82 "set.m"
  MR_Word mercury__set__Set_2)
#line 82 "set.m"
{
#line 594 "set.m"
  {
#line 594 "set.m"
    MR_bool mercury__set__succeeded;
#line 50 "set_ordlist.opt"
    MR_Word mercury__set__V_2_4 = (MR_Word) mercury__set__Set_2;

#line 51 "set_ordlist.opt"
    mercury__set__succeeded = (mercury__set__V_2_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 594 "set.m"
    mercury__set__succeeded = !(mercury__set__succeeded);
#line 594 "set.m"
    return mercury__set__succeeded;
#line 594 "set.m"
  }
#line 82 "set.m"
}

#line 80 "set.m"
MR_bool MR_CALL 
mercury__set__empty_1_p_0(
#line 80 "set.m"
  MR_Word mercury__set__TypeInfo_for_T_3,
#line 80 "set.m"
  MR_Word mercury__set__Set_2)
#line 80 "set.m"
{
#line 50 "set_ordlist.opt"
  {
#line 50 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 50 "set_ordlist.opt"
    MR_Word mercury__set__V_2_4 = (MR_Word) mercury__set__Set_2;

#line 51 "set_ordlist.opt"
    mercury__set__succeeded = (mercury__set__V_2_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 50 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 50 "set_ordlist.opt"
  }
#line 80 "set.m"
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
#line 49 "set_ordlist.opt"
  {
#line 49 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;

#line 49 "set_ordlist.opt"
    {
#line 49 "set_ordlist.opt"
      return mercury__set__succeeded = mercury__set_ordlist____Unify____set_ordlist_1_0(mercury__set__TypeInfo_for_T_5, mercury__set__SetB_4, mercury__set__SetA_3);
    }
#line 49 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 49 "set_ordlist.opt"
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
#line 46 "set_ordlist.opt"
  {
#line 46 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 46 "set_ordlist.opt"
    MR_Word mercury__set__V_4_7 = (MR_Word) mercury__set__Set_3;
#line 46 "set_ordlist.opt"
    MR_Word mercury__set__V_5_8;

#line 47 "set_ordlist.opt"
    mercury__set__succeeded = ((MR_tag((MR_Word) mercury__set__V_4_7)) == (MR_mktag((MR_Integer) 1)));
#line 47 "set_ordlist.opt"
    if (mercury__set__succeeded)
#line 47 "set_ordlist.opt"
      {
#line 47 "set_ordlist.opt"
        *mercury__set__X_4 = (MR_hl_field(MR_mktag(1), mercury__set__V_4_7, (MR_Integer) 0));
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
#line 41 "set_ordlist.opt"
  {
#line 41 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 41 "set_ordlist.opt"
    MR_Word mercury__set__S_4;
#line 41 "set_ordlist.opt"
    MR_Word mercury__set__V_4_9;
#line 41 "set_ordlist.opt"
    MR_Word mercury__set__V_5_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 42 "set_ordlist.opt"
    {
#line 42 "set_ordlist.opt"
      mercury__set__V_4_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 42 "set_ordlist.opt"
      MR_hl_field(MR_mktag(1), mercury__set__V_4_9, 0) = mercury__set__T_3;
#line 42 "set_ordlist.opt"
      MR_hl_field(MR_mktag(1), mercury__set__V_4_9, 1) = ((MR_Box) (mercury__set__V_5_10));
#line 42 "set_ordlist.opt"
    }
#line 41 "set_ordlist.opt"
    mercury__set__S_4 = (MR_Word) mercury__set__V_4_9;
#line 41 "set_ordlist.opt"
    return mercury__set__S_4;
#line 41 "set_ordlist.opt"
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
#line 41 "set_ordlist.opt"
  {
#line 41 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 41 "set_ordlist.opt"
    MR_Word mercury__set__V_4_7 = (MR_Word) mercury__set__Set_4;
#line 41 "set_ordlist.opt"
    MR_Word mercury__set__V_5_8;

#line 42 "set_ordlist.opt"
    mercury__set__succeeded = ((MR_tag((MR_Word) mercury__set__V_4_7)) == (MR_mktag((MR_Integer) 1)));
#line 42 "set_ordlist.opt"
    if (mercury__set__succeeded)
#line 42 "set_ordlist.opt"
      {
#line 42 "set_ordlist.opt"
        *mercury__set__X_3 = (MR_hl_field(MR_mktag(1), mercury__set__V_4_7, (MR_Integer) 0));
#line 42 "set_ordlist.opt"
        mercury__set__V_5_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set__V_4_7, (MR_Integer) 1)));
#line 43 "set_ordlist.opt"
        mercury__set__succeeded = (mercury__set__V_5_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 42 "set_ordlist.opt"
      }
#line 41 "set_ordlist.opt"
    return mercury__set__succeeded;
#line 41 "set_ordlist.opt"
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
#line 41 "set_ordlist.opt"
  {
#line 41 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 41 "set_ordlist.opt"
    MR_Word mercury__set__V_4_7;
#line 41 "set_ordlist.opt"
    MR_Word mercury__set__V_5_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 42 "set_ordlist.opt"
    {
#line 42 "set_ordlist.opt"
      mercury__set__V_4_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 42 "set_ordlist.opt"
      MR_hl_field(MR_mktag(1), mercury__set__V_4_7, 0) = mercury__set__X_3;
#line 42 "set_ordlist.opt"
      MR_hl_field(MR_mktag(1), mercury__set__V_4_7, 1) = ((MR_Box) (mercury__set__V_5_8));
#line 42 "set_ordlist.opt"
    }
#line 41 "set_ordlist.opt"
    *mercury__set__Set_4 = (MR_Word) mercury__set__V_4_7;
#line 41 "set_ordlist.opt"
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
#line 38 "set_ordlist.opt"
  {
#line 38 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 38 "set_ordlist.opt"
    MR_Word mercury__set__Xs_4 = (MR_Word) mercury__set__S_3;

#line 38 "set_ordlist.opt"
    return mercury__set__Xs_4;
#line 38 "set_ordlist.opt"
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
#line 38 "set_ordlist.opt"
  {
#line 38 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;

#line 38 "set_ordlist.opt"
    *mercury__set__List_4 = (MR_Word) mercury__set__Set_3;
#line 38 "set_ordlist.opt"
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
#line 32 "set_ordlist.opt"
  {
#line 32 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 32 "set_ordlist.opt"
    MR_Word mercury__set__HeadVar__2_2;
#line 32 "set_ordlist.opt"
    MR_Word mercury__set__List_4_8;

#line 58 "list.opt"
    if ((mercury__set__List_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 58 "list.opt"
      mercury__set__List_4_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 58 "list.opt"
    else
#line 59 "list.opt"
      {
#line 59 "list.opt"
        MR_Box mercury__set__X_3_9 = (MR_hl_field(MR_mktag(1), mercury__set__List_3, (MR_Integer) 0));
#line 59 "list.opt"
        MR_Word mercury__set__Xs_4_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set__List_3, (MR_Integer) 1)));

#line 60 "list.opt"
        {
#line 60 "list.opt"
          mercury__list__remove_adjacent_dups_2_3_p_0(mercury__set__TypeInfo_for_T_4, mercury__set__Xs_4_10, mercury__set__X_3_9, &mercury__set__List_4_8);
        }
#line 59 "list.opt"
      }
#line 32 "set_ordlist.opt"
    mercury__set__HeadVar__2_2 = (MR_Word) mercury__set__List_4_8;
#line 32 "set_ordlist.opt"
    return mercury__set__HeadVar__2_2;
#line 32 "set_ordlist.opt"
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
#line 32 "set_ordlist.opt"
  {
#line 32 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 32 "set_ordlist.opt"
    MR_Word mercury__set__S_4;
#line 32 "set_ordlist.opt"
    MR_Word mercury__set__List_4_9;

#line 58 "list.opt"
    if ((mercury__set__Xs_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 58 "list.opt"
      mercury__set__List_4_9 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 58 "list.opt"
    else
#line 59 "list.opt"
      {
#line 59 "list.opt"
        MR_Box mercury__set__X_3_10 = (MR_hl_field(MR_mktag(1), mercury__set__Xs_3, (MR_Integer) 0));
#line 59 "list.opt"
        MR_Word mercury__set__Xs_4_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set__Xs_3, (MR_Integer) 1)));

#line 60 "list.opt"
        {
#line 60 "list.opt"
          mercury__list__remove_adjacent_dups_2_3_p_0(mercury__set__TypeInfo_for_T_5, mercury__set__Xs_4_11, mercury__set__X_3_10, &mercury__set__List_4_9);
        }
#line 59 "list.opt"
      }
#line 32 "set_ordlist.opt"
    mercury__set__S_4 = (MR_Word) mercury__set__List_4_9;
#line 32 "set_ordlist.opt"
    return mercury__set__S_4;
#line 32 "set_ordlist.opt"
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
#line 32 "set_ordlist.opt"
  {
#line 32 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 32 "set_ordlist.opt"
    MR_Word mercury__set__List_4_7;

#line 58 "list.opt"
    if ((mercury__set__List_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 58 "list.opt"
      mercury__set__List_4_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 58 "list.opt"
    else
#line 59 "list.opt"
      {
#line 59 "list.opt"
        MR_Box mercury__set__X_3_8 = (MR_hl_field(MR_mktag(1), mercury__set__List_3, (MR_Integer) 0));
#line 59 "list.opt"
        MR_Word mercury__set__Xs_4_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__set__List_3, (MR_Integer) 1)));

#line 60 "list.opt"
        {
#line 60 "list.opt"
          mercury__list__remove_adjacent_dups_2_3_p_0(mercury__set__TypeInfo_for_T_5, mercury__set__Xs_4_9, mercury__set__X_3_8, &mercury__set__List_4_7);
        }
#line 59 "list.opt"
      }
#line 32 "set_ordlist.opt"
    *mercury__set__Set_4 = (MR_Word) mercury__set__List_4_7;
#line 32 "set_ordlist.opt"
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
#line 26 "set_ordlist.opt"
  {
#line 26 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 26 "set_ordlist.opt"
    MR_Word mercury__set__HeadVar__2_2;
#line 26 "set_ordlist.opt"
    MR_Word mercury__set__List_4_8;
#line 26 "set_ordlist.opt"
    MR_Integer mercury__set__V_5_11;

#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__set__TypeInfo_for_T_4, mercury__set__List_3, (MR_Integer) 0, &mercury__set__V_5_11);
    }
#line 110 "list.opt"
    {
#line 110 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__set__TypeInfo_for_T_4, mercury__set__V_5_11, mercury__set__List_3, &mercury__set__List_4_8);
    }
#line 26 "set_ordlist.opt"
    mercury__set__HeadVar__2_2 = (MR_Word) mercury__set__List_4_8;
#line 26 "set_ordlist.opt"
    return mercury__set__HeadVar__2_2;
#line 26 "set_ordlist.opt"
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
#line 26 "set_ordlist.opt"
  {
#line 26 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 26 "set_ordlist.opt"
    MR_Word mercury__set__HeadVar__2_2;
#line 26 "set_ordlist.opt"
    MR_Word mercury__set__List_4_8;
#line 26 "set_ordlist.opt"
    MR_Integer mercury__set__V_5_11;

#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__set__TypeInfo_for_T_4, mercury__set__List_3, (MR_Integer) 0, &mercury__set__V_5_11);
    }
#line 110 "list.opt"
    {
#line 110 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__set__TypeInfo_for_T_4, mercury__set__V_5_11, mercury__set__List_3, &mercury__set__List_4_8);
    }
#line 26 "set_ordlist.opt"
    mercury__set__HeadVar__2_2 = (MR_Word) mercury__set__List_4_8;
#line 26 "set_ordlist.opt"
    return mercury__set__HeadVar__2_2;
#line 26 "set_ordlist.opt"
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
#line 26 "set_ordlist.opt"
  {
#line 26 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 26 "set_ordlist.opt"
    MR_Word mercury__set__S_4;
#line 26 "set_ordlist.opt"
    MR_Word mercury__set__List_4_9;
#line 26 "set_ordlist.opt"
    MR_Integer mercury__set__V_5_12;

#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__set__TypeInfo_for_T_5, mercury__set__Xs_3, (MR_Integer) 0, &mercury__set__V_5_12);
    }
#line 110 "list.opt"
    {
#line 110 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__set__TypeInfo_for_T_5, mercury__set__V_5_12, mercury__set__Xs_3, &mercury__set__List_4_9);
    }
#line 26 "set_ordlist.opt"
    mercury__set__S_4 = (MR_Word) mercury__set__List_4_9;
#line 26 "set_ordlist.opt"
    return mercury__set__S_4;
#line 26 "set_ordlist.opt"
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
#line 26 "set_ordlist.opt"
  {
#line 26 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 26 "set_ordlist.opt"
    MR_Word mercury__set__List_4_7;
#line 26 "set_ordlist.opt"
    MR_Integer mercury__set__V_5_10;

#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__set__TypeInfo_for_T_5, mercury__set__List_3, (MR_Integer) 0, &mercury__set__V_5_10);
    }
#line 110 "list.opt"
    {
#line 110 "list.opt"
      mercury__list__merge_sort_and_remove_dups_2_3_p_0(mercury__set__TypeInfo_for_T_5, mercury__set__V_5_10, mercury__set__List_3, &mercury__set__List_4_7);
    }
#line 26 "set_ordlist.opt"
    *mercury__set__Set_4 = (MR_Word) mercury__set__List_4_7;
#line 26 "set_ordlist.opt"
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
#line 22 "set_ordlist.opt"
  {
#line 22 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 22 "set_ordlist.opt"
    MR_Word mercury__set__V_2_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 22 "set_ordlist.opt"
    *mercury__set__Set_2 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 22 "set_ordlist.opt"
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
#line 22 "set_ordlist.opt"
  {
#line 22 "set_ordlist.opt"
    MR_bool mercury__set__succeeded;
#line 22 "set_ordlist.opt"
    MR_Word mercury__set__S_2 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 22 "set_ordlist.opt"
    MR_Word mercury__set__V_2_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 22 "set_ordlist.opt"
    return mercury__set__S_2;
#line 22 "set_ordlist.opt"
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
