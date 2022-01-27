/*
** Automatically generated from `multi_map.m'
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


/* :- module multi_map. */
/* :- implementation. */

/*
INIT mercury__multi_map__init
ENDINIT
*/

#include "multi_map.mih"


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



#line 85 "multi_map.m"
struct mercury__multi_map__inverse_search_3_p_0_env_0_s {
#line 85 "multi_map.m"
  MR_Word mercury__multi_map__inverse_search_3_p_0_env_0__TypeInfo_for_V_9;
#line 85 "multi_map.m"
  MR_Box mercury__multi_map__inverse_search_3_p_0_env_0__Value_5;
#line 85 "multi_map.m"
  MR_Cont mercury__multi_map__inverse_search_3_p_0_env_0__cont;
#line 85 "multi_map.m"
  void * mercury__multi_map__inverse_search_3_p_0_env_0__cont_env_ptr;
#line 353 "multi_map.m"
  MR_bool mercury__multi_map__inverse_search_3_p_0_env_0__succeeded;
#line 353 "multi_map.m"
  MR_Word mercury__multi_map__inverse_search_3_p_0_env_0__ValueList_7;
#line 400 "map.opt"
  MR_Box mercury__multi_map__inverse_search_3_p_0_env_0__conv0_ValueList_7;
#line 85 "multi_map.m"
};

#line 54 "multi_map.m"
struct mercury__multi_map__member_3_p_0_env_0_s {
#line 54 "multi_map.m"
  MR_Word mercury__multi_map__member_3_p_0_env_0__TypeInfo_for_V_9;
#line 54 "multi_map.m"
  MR_Box * mercury__multi_map__member_3_p_0_env_0__Value_6;
#line 54 "multi_map.m"
  MR_Cont mercury__multi_map__member_3_p_0_env_0__cont;
#line 54 "multi_map.m"
  void * mercury__multi_map__member_3_p_0_env_0__cont_env_ptr;
#line 332 "multi_map.m"
  MR_Word mercury__multi_map__member_3_p_0_env_0__ValueList_7;
#line 400 "map.opt"
  MR_Box mercury__multi_map__member_3_p_0_env_0__conv0_ValueList_7;
#line 54 "multi_map.m"
};


#line 130 "multi_map.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__multi_map__list__pti_list_1__pseudo_2;

#line 133 "multi_map.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__multi_map__tree234__pti_tree234_2__pseudo_1__pseudo_list__pti_list_1__pseudo_2;

#line 136 "multi_map.c"
static MR_bool MR_CALL 
mercury__multi_map____Unify____multi_map_2_0_10001(
#line 139 "multi_map.c"
  MR_Box mercury__multi_map__wrapper_arg_1,
#line 141 "multi_map.c"
  MR_Box mercury__multi_map__wrapper_arg_2,
#line 143 "multi_map.c"
  MR_Box mercury__multi_map__wrapper_arg_3,
#line 145 "multi_map.c"
  MR_Box mercury__multi_map__wrapper_arg_4);

#line 148 "multi_map.c"
static void MR_CALL 
mercury__multi_map____Compare____multi_map_2_0_10001(
#line 151 "multi_map.c"
  MR_Box mercury__multi_map__wrapper_arg_1,
#line 153 "multi_map.c"
  MR_Box mercury__multi_map__wrapper_arg_2,
#line 155 "multi_map.c"
  MR_Box * mercury__multi_map__wrapper_arg_3,
#line 157 "multi_map.c"
  MR_Box mercury__multi_map__wrapper_arg_4,
#line 159 "multi_map.c"
  MR_Box mercury__multi_map__wrapper_arg_5);

#line 103 "tree234.int"
static void MR_CALL 
mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_118_97_108_117_101_115_95_95_104_111_57_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__tree234_0(
#line 103 "tree234.int"
  MR_Word mercury__multi_map__V_55_55,
#line 103 "tree234.int"
  MR_Word mercury__multi_map__HeadVar__2_2,
#line 103 "tree234.int"
  MR_Integer mercury__multi_map__HeadVar__3_3,
#line 103 "tree234.int"
  MR_Integer * mercury__multi_map__HeadVar__4_4);

#line 35 "tree234.int"
static void MR_CALL 
mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__tree234_0(
#line 35 "tree234.int"
  MR_Word mercury__multi_map__V_60_60,
#line 35 "tree234.int"
  MR_Word mercury__multi_map__V_61_61,
#line 35 "tree234.int"
  MR_Word mercury__multi_map__HeadVar__2_2,
#line 35 "tree234.int"
  MR_Word mercury__multi_map__HeadVar__3_3,
#line 35 "tree234.int"
  MR_Word * mercury__multi_map__HeadVar__4_4);

#line 127 "list.int"
static void MR_CALL 
mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__list_0(
#line 127 "list.int"
  MR_Word mercury__multi_map__V_24_24,
#line 127 "list.int"
  MR_Word mercury__multi_map__V_25_25,
#line 127 "list.int"
  MR_Word mercury__multi_map__HeadVar__2_2,
#line 127 "list.int"
  MR_Word mercury__multi_map__HeadVar__3_3,
#line 127 "list.int"
  MR_Word * mercury__multi_map__HeadVar__4_4);

#line 313 "list.int"
static MR_Word MR_CALL 
mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_2_f_in__list_0(
#line 313 "list.int"
  MR_Box mercury__multi_map__V_17_17,
#line 313 "list.int"
  MR_Word mercury__multi_map__HeadVar__2_2);

#line 18 "ops.opt"
static MR_Integer MR_CALL 
mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 400 "map.opt"
static void MR_CALL 
mercury__multi_map__inverse_search_3_p_0_2(
#line 400 "map.opt"
  void * mercury__multi_map__env_ptr_arg);

#line 353 "multi_map.m"
static void MR_CALL 
mercury__multi_map__inverse_search_3_p_0_1(
#line 353 "multi_map.m"
  void * mercury__multi_map__env_ptr_arg);

#line 400 "map.opt"
static void MR_CALL 
mercury__multi_map__member_3_p_0_2(
#line 400 "map.opt"
  void * mercury__multi_map__env_ptr_arg);

#line 332 "multi_map.m"
static void MR_CALL 
mercury__multi_map__member_3_p_0_1(
#line 332 "multi_map.m"
  void * mercury__multi_map__env_ptr_arg);


static /* final */ const MR_Box mercury__multi_map_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__multi_map_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__multi_map_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__multi_map_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__multi_map_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__multi_map_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__multi_map_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__multi_map_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__multi_map_scalar_common_2[0])),
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



#line 313 "multi_map.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__multi_map__list__pti_list_1__pseudo_2 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

#line 321 "multi_map.c"
static const MR_FA_PseudoTypeInfo_Struct2 mercury__multi_map__tree234__pti_tree234_2__pseudo_1__pseudo_list__pti_list_1__pseudo_2 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__multi_map__list__pti_list_1__pseudo_2
  }
};

#line 330 "multi_map.c"
const MR_TypeCtorInfo_Struct mercury__multi_map__multi_map__type_ctor_info_multi_map_2 = {
  (MR_Integer) 2,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__multi_map____Unify____multi_map_2_0_10001)),
  ((MR_Box) (mercury__multi_map____Compare____multi_map_2_0_10001)),
  (MR_String) "multi_map",
  (MR_String) "multi_map",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__multi_map__tree234__pti_tree234_2__pseudo_1__pseudo_list__pti_list_1__pseudo_2 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 347 "multi_map.c"
static MR_bool MR_CALL 
mercury__multi_map____Unify____multi_map_2_0_10001(
#line 350 "multi_map.c"
  MR_Box mercury__multi_map__wrapper_arg_1,
#line 352 "multi_map.c"
  MR_Box mercury__multi_map__wrapper_arg_2,
#line 354 "multi_map.c"
  MR_Box mercury__multi_map__wrapper_arg_3,
#line 356 "multi_map.c"
  MR_Box mercury__multi_map__wrapper_arg_4)
#line 358 "multi_map.c"
{
#line 360 "multi_map.c"
  {
#line 362 "multi_map.c"
    MR_bool mercury__multi_map__succeeded;

#line 365 "multi_map.c"
    {
#line 367 "multi_map.c"
      mercury__multi_map__succeeded = mercury__multi_map____Unify____multi_map_2_0(((MR_Word) mercury__multi_map__wrapper_arg_1), ((MR_Word) mercury__multi_map__wrapper_arg_2), ((MR_Word) mercury__multi_map__wrapper_arg_3), ((MR_Word) mercury__multi_map__wrapper_arg_4));
    }
#line 370 "multi_map.c"
    return mercury__multi_map__succeeded;
#line 372 "multi_map.c"
  }
#line 374 "multi_map.c"
}

#line 377 "multi_map.c"
static void MR_CALL 
mercury__multi_map____Compare____multi_map_2_0_10001(
#line 380 "multi_map.c"
  MR_Box mercury__multi_map__wrapper_arg_1,
#line 382 "multi_map.c"
  MR_Box mercury__multi_map__wrapper_arg_2,
#line 384 "multi_map.c"
  MR_Box * mercury__multi_map__wrapper_arg_3,
#line 386 "multi_map.c"
  MR_Box mercury__multi_map__wrapper_arg_4,
#line 388 "multi_map.c"
  MR_Box mercury__multi_map__wrapper_arg_5)
#line 390 "multi_map.c"
{
#line 392 "multi_map.c"
  {
#line 394 "multi_map.c"
    MR_Word mercury__multi_map__conv0_HeadVar__1_1;

#line 397 "multi_map.c"
    {
#line 399 "multi_map.c"
      mercury__multi_map____Compare____multi_map_2_0(((MR_Word) mercury__multi_map__wrapper_arg_1), ((MR_Word) mercury__multi_map__wrapper_arg_2), &mercury__multi_map__conv0_HeadVar__1_1, ((MR_Word) mercury__multi_map__wrapper_arg_4), ((MR_Word) mercury__multi_map__wrapper_arg_5));
    }
#line 402 "multi_map.c"
    *mercury__multi_map__wrapper_arg_3 = ((MR_Box) (mercury__multi_map__conv0_HeadVar__1_1));
#line 404 "multi_map.c"
  }
#line 406 "multi_map.c"
}

#line 103 "tree234.int"
static void MR_CALL 
mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_118_97_108_117_101_115_95_95_104_111_57_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__tree234_0(
#line 103 "tree234.int"
  MR_Word mercury__multi_map__V_55_55,
#line 103 "tree234.int"
  MR_Word mercury__multi_map__HeadVar__2_2,
#line 103 "tree234.int"
  MR_Integer mercury__multi_map__HeadVar__3_3,
#line 103 "tree234.int"
  MR_Integer * mercury__multi_map__HeadVar__4_4)
#line 103 "tree234.int"
{
#line 166 "tree234.opt"
  while (MR_TRUE)
#line 166 "tree234.opt"
    {
#line 166 "tree234.opt"
      /* tailcall optimized into a loop */
#line 166 "tree234.opt"
      {
#line 166 "tree234.opt"
        MR_bool mercury__multi_map__succeeded;

#line 166 "tree234.opt"
#line 166 "tree234.opt"
        switch (MR_tag((MR_Word) mercury__multi_map__HeadVar__2_2)) {
#line 166 "tree234.opt"
          default: /*NOTREACHED*/ MR_assert(0);
#line 166 "tree234.opt"
          case (MR_Integer) 0:
#line 166 "tree234.opt"
            *mercury__multi_map__HeadVar__4_4 = mercury__multi_map__HeadVar__3_3;
#line 166 "tree234.opt"
            break;
#line 166 "tree234.opt"
          case (MR_Integer) 1:
#line 168 "tree234.opt"
            {
#line 168 "tree234.opt"
              MR_Word mercury__multi_map__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__2_2, (MR_Integer) 1)));
#line 168 "tree234.opt"
              MR_Word mercury__multi_map__V_12_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__2_2, (MR_Integer) 2)));
#line 168 "tree234.opt"
              MR_Word mercury__multi_map__V_13_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__2_2, (MR_Integer) 3)));
#line 168 "tree234.opt"
              MR_Integer mercury__multi_map__V_17_15;
#line 168 "tree234.opt"
              MR_Integer mercury__multi_map__V_18_16;
#line 168 "tree234.opt"
              MR_Box mercury__multi_map__V_10_9 = (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__2_2, (MR_Integer) 0));

#line 169 "tree234.opt"
              {
#line 169 "tree234.opt"
                mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_118_97_108_117_101_115_95_95_104_111_57_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__tree234_0(mercury__multi_map__V_55_55, mercury__multi_map__V_12_11, mercury__multi_map__HeadVar__3_3, &mercury__multi_map__V_17_15);
              }
#line 170 "tree234.opt"
              {
#line 170 "tree234.opt"
                mercury__multi_map__accumulate_length_3_p_0(mercury__multi_map__V_55_55, mercury__multi_map__V_11_10, mercury__multi_map__V_17_15, &mercury__multi_map__V_18_16);
              }
#line 171 "tree234.opt"
              /* direct tailcall eliminated */
#line 171 "tree234.opt"
              {
#line 171 "tree234.opt"
                MR_Word mercury__multi_map__HeadVar__2__tmp_copy_2 = mercury__multi_map__V_13_12;
#line 171 "tree234.opt"
                MR_Integer mercury__multi_map__HeadVar__3__tmp_copy_3 = mercury__multi_map__V_18_16;

#line 171 "tree234.opt"
                mercury__multi_map__HeadVar__3_3 = mercury__multi_map__HeadVar__3__tmp_copy_3;
#line 171 "tree234.opt"
                mercury__multi_map__HeadVar__2_2 = mercury__multi_map__HeadVar__2__tmp_copy_2;
#line 171 "tree234.opt"
              }
#line 171 "tree234.opt"
              continue;
#line 168 "tree234.opt"
            }
#line 166 "tree234.opt"
            break;
#line 166 "tree234.opt"
          case (MR_Integer) 2:
#line 172 "tree234.opt"
            {
#line 172 "tree234.opt"
              MR_Word mercury__multi_map__V_22_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__multi_map__HeadVar__2_2, (MR_Integer) 1)));
#line 172 "tree234.opt"
              MR_Word mercury__multi_map__V_24_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__multi_map__HeadVar__2_2, (MR_Integer) 3)));
#line 172 "tree234.opt"
              MR_Word mercury__multi_map__V_25_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__multi_map__HeadVar__2_2, (MR_Integer) 4)));
#line 172 "tree234.opt"
              MR_Word mercury__multi_map__V_26_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__multi_map__HeadVar__2_2, (MR_Integer) 5)));
#line 172 "tree234.opt"
              MR_Word mercury__multi_map__V_27_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__multi_map__HeadVar__2_2, (MR_Integer) 6)));
#line 172 "tree234.opt"
              MR_Integer mercury__multi_map__V_31_27;
#line 172 "tree234.opt"
              MR_Integer mercury__multi_map__V_32_28;
#line 172 "tree234.opt"
              MR_Integer mercury__multi_map__V_33_29;
#line 172 "tree234.opt"
              MR_Integer mercury__multi_map__V_34_30;
#line 172 "tree234.opt"
              MR_Integer mercury__multi_map__NVs_87;
#line 172 "tree234.opt"
              MR_Box mercury__multi_map__V_21_18 = (MR_hl_field(MR_mktag(2), mercury__multi_map__HeadVar__2_2, (MR_Integer) 0));
#line 172 "tree234.opt"
              MR_Box mercury__multi_map__V_23_20 = (MR_hl_field(MR_mktag(2), mercury__multi_map__HeadVar__2_2, (MR_Integer) 2));

#line 173 "tree234.opt"
              {
#line 173 "tree234.opt"
                mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_118_97_108_117_101_115_95_95_104_111_57_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__tree234_0(mercury__multi_map__V_55_55, mercury__multi_map__V_25_22, mercury__multi_map__HeadVar__3_3, &mercury__multi_map__V_31_27);
              }
#line 606 "list.opt"
              {
#line 606 "list.opt"
                mercury__list__length_acc_3_p_0(mercury__multi_map__V_55_55, mercury__multi_map__V_22_19, (MR_Integer) 0, &mercury__multi_map__NVs_87);
              }
#line 638 "multi_map.m"
              mercury__multi_map__V_32_28 = (mercury__multi_map__V_31_27 + mercury__multi_map__NVs_87);
#line 175 "tree234.opt"
              {
#line 175 "tree234.opt"
                mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_118_97_108_117_101_115_95_95_104_111_57_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__tree234_0(mercury__multi_map__V_55_55, mercury__multi_map__V_26_23, mercury__multi_map__V_32_28, &mercury__multi_map__V_33_29);
              }
#line 176 "tree234.opt"
              {
#line 176 "tree234.opt"
                mercury__multi_map__accumulate_length_3_p_0(mercury__multi_map__V_55_55, mercury__multi_map__V_24_21, mercury__multi_map__V_33_29, &mercury__multi_map__V_34_30);
              }
#line 177 "tree234.opt"
              /* direct tailcall eliminated */
#line 177 "tree234.opt"
              {
#line 177 "tree234.opt"
                MR_Word mercury__multi_map__HeadVar__2__tmp_copy_2 = mercury__multi_map__V_27_24;
#line 177 "tree234.opt"
                MR_Integer mercury__multi_map__HeadVar__3__tmp_copy_3 = mercury__multi_map__V_34_30;

#line 177 "tree234.opt"
                mercury__multi_map__HeadVar__3_3 = mercury__multi_map__HeadVar__3__tmp_copy_3;
#line 177 "tree234.opt"
                mercury__multi_map__HeadVar__2_2 = mercury__multi_map__HeadVar__2__tmp_copy_2;
#line 177 "tree234.opt"
              }
#line 177 "tree234.opt"
              continue;
#line 172 "tree234.opt"
            }
#line 166 "tree234.opt"
            break;
#line 166 "tree234.opt"
          case (MR_Integer) 3:
#line 178 "tree234.opt"
            {
#line 178 "tree234.opt"
              MR_Word mercury__multi_map__V_38_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__multi_map__HeadVar__2_2, (MR_Integer) 1)));
#line 178 "tree234.opt"
              MR_Word mercury__multi_map__V_40_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__multi_map__HeadVar__2_2, (MR_Integer) 3)));
#line 178 "tree234.opt"
              MR_Word mercury__multi_map__V_42_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__multi_map__HeadVar__2_2, (MR_Integer) 5)));
#line 178 "tree234.opt"
              MR_Word mercury__multi_map__V_43_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__multi_map__HeadVar__2_2, (MR_Integer) 6)));
#line 178 "tree234.opt"
              MR_Word mercury__multi_map__V_44_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__multi_map__HeadVar__2_2, (MR_Integer) 7)));
#line 178 "tree234.opt"
              MR_Word mercury__multi_map__V_45_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__multi_map__HeadVar__2_2, (MR_Integer) 8)));
#line 178 "tree234.opt"
              MR_Word mercury__multi_map__V_46_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__multi_map__HeadVar__2_2, (MR_Integer) 9)));
#line 178 "tree234.opt"
              MR_Integer mercury__multi_map__V_50_44;
#line 178 "tree234.opt"
              MR_Integer mercury__multi_map__V_51_45;
#line 178 "tree234.opt"
              MR_Integer mercury__multi_map__V_52_46;
#line 178 "tree234.opt"
              MR_Integer mercury__multi_map__V_53_47;
#line 178 "tree234.opt"
              MR_Integer mercury__multi_map__V_54_48;
#line 178 "tree234.opt"
              MR_Integer mercury__multi_map__V_55_49;
#line 178 "tree234.opt"
              MR_Integer mercury__multi_map__NVs_60;
#line 178 "tree234.opt"
              MR_Integer mercury__multi_map__NVs_69;
#line 178 "tree234.opt"
              MR_Integer mercury__multi_map__NVs_78;
#line 178 "tree234.opt"
              MR_Box mercury__multi_map__V_37_32 = (MR_hl_field(MR_mktag(3), mercury__multi_map__HeadVar__2_2, (MR_Integer) 0));
#line 178 "tree234.opt"
              MR_Box mercury__multi_map__V_39_34 = (MR_hl_field(MR_mktag(3), mercury__multi_map__HeadVar__2_2, (MR_Integer) 2));
#line 178 "tree234.opt"
              MR_Box mercury__multi_map__V_41_36 = (MR_hl_field(MR_mktag(3), mercury__multi_map__HeadVar__2_2, (MR_Integer) 4));

#line 179 "tree234.opt"
              {
#line 179 "tree234.opt"
                mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_118_97_108_117_101_115_95_95_104_111_57_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__tree234_0(mercury__multi_map__V_55_55, mercury__multi_map__V_43_38, mercury__multi_map__HeadVar__3_3, &mercury__multi_map__V_50_44);
              }
#line 606 "list.opt"
              {
#line 606 "list.opt"
                mercury__list__length_acc_3_p_0(mercury__multi_map__V_55_55, mercury__multi_map__V_38_33, (MR_Integer) 0, &mercury__multi_map__NVs_60);
              }
#line 638 "multi_map.m"
              mercury__multi_map__V_51_45 = (mercury__multi_map__V_50_44 + mercury__multi_map__NVs_60);
#line 181 "tree234.opt"
              {
#line 181 "tree234.opt"
                mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_118_97_108_117_101_115_95_95_104_111_57_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__tree234_0(mercury__multi_map__V_55_55, mercury__multi_map__V_44_39, mercury__multi_map__V_51_45, &mercury__multi_map__V_52_46);
              }
#line 606 "list.opt"
              {
#line 606 "list.opt"
                mercury__list__length_acc_3_p_0(mercury__multi_map__V_55_55, mercury__multi_map__V_40_35, (MR_Integer) 0, &mercury__multi_map__NVs_69);
              }
#line 638 "multi_map.m"
              mercury__multi_map__V_53_47 = (mercury__multi_map__V_52_46 + mercury__multi_map__NVs_69);
#line 183 "tree234.opt"
              {
#line 183 "tree234.opt"
                mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_118_97_108_117_101_115_95_95_104_111_57_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__tree234_0(mercury__multi_map__V_55_55, mercury__multi_map__V_45_40, mercury__multi_map__V_53_47, &mercury__multi_map__V_54_48);
              }
#line 606 "list.opt"
              {
#line 606 "list.opt"
                mercury__list__length_acc_3_p_0(mercury__multi_map__V_55_55, mercury__multi_map__V_42_37, (MR_Integer) 0, &mercury__multi_map__NVs_78);
              }
#line 638 "multi_map.m"
              mercury__multi_map__V_55_49 = (mercury__multi_map__V_54_48 + mercury__multi_map__NVs_78);
#line 185 "tree234.opt"
              /* direct tailcall eliminated */
#line 185 "tree234.opt"
              {
#line 185 "tree234.opt"
                MR_Word mercury__multi_map__HeadVar__2__tmp_copy_2 = mercury__multi_map__V_46_41;
#line 185 "tree234.opt"
                MR_Integer mercury__multi_map__HeadVar__3__tmp_copy_3 = mercury__multi_map__V_55_49;

#line 185 "tree234.opt"
                mercury__multi_map__HeadVar__3_3 = mercury__multi_map__HeadVar__3__tmp_copy_3;
#line 185 "tree234.opt"
                mercury__multi_map__HeadVar__2_2 = mercury__multi_map__HeadVar__2__tmp_copy_2;
#line 185 "tree234.opt"
              }
#line 185 "tree234.opt"
              continue;
#line 178 "tree234.opt"
            }
#line 166 "tree234.opt"
            break;
#line 166 "tree234.opt"
        }
#line 166 "tree234.opt"
      }
#line 166 "tree234.opt"
      break;
#line 166 "tree234.opt"
    }
#line 103 "tree234.int"
}

#line 35 "tree234.int"
static void MR_CALL 
mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__tree234_0(
#line 35 "tree234.int"
  MR_Word mercury__multi_map__V_60_60,
#line 35 "tree234.int"
  MR_Word mercury__multi_map__V_61_61,
#line 35 "tree234.int"
  MR_Word mercury__multi_map__HeadVar__2_2,
#line 35 "tree234.int"
  MR_Word mercury__multi_map__HeadVar__3_3,
#line 35 "tree234.int"
  MR_Word * mercury__multi_map__HeadVar__4_4)
#line 35 "tree234.int"
{
#line 88 "tree234.opt"
  while (MR_TRUE)
#line 88 "tree234.opt"
    {
#line 88 "tree234.opt"
      /* tailcall optimized into a loop */
#line 88 "tree234.opt"
      {
#line 88 "tree234.opt"
        MR_bool mercury__multi_map__succeeded;

#line 88 "tree234.opt"
#line 88 "tree234.opt"
        switch (MR_tag((MR_Word) mercury__multi_map__HeadVar__2_2)) {
#line 88 "tree234.opt"
          default: /*NOTREACHED*/ MR_assert(0);
#line 88 "tree234.opt"
          case (MR_Integer) 0:
#line 88 "tree234.opt"
            *mercury__multi_map__HeadVar__4_4 = mercury__multi_map__HeadVar__3_3;
#line 88 "tree234.opt"
            break;
#line 88 "tree234.opt"
          case (MR_Integer) 1:
#line 90 "tree234.opt"
            {
#line 90 "tree234.opt"
              MR_Box mercury__multi_map__V_10_9 = (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__2_2, (MR_Integer) 0));
#line 90 "tree234.opt"
              MR_Word mercury__multi_map__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__2_2, (MR_Integer) 1)));
#line 90 "tree234.opt"
              MR_Word mercury__multi_map__V_12_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__2_2, (MR_Integer) 2)));
#line 90 "tree234.opt"
              MR_Word mercury__multi_map__V_13_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__2_2, (MR_Integer) 3)));
#line 90 "tree234.opt"
              MR_Word mercury__multi_map__V_17_15;
#line 90 "tree234.opt"
              MR_Word mercury__multi_map__V_18_16;

#line 91 "tree234.opt"
              {
#line 91 "tree234.opt"
                mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__tree234_0(mercury__multi_map__V_60_60, mercury__multi_map__V_61_61, mercury__multi_map__V_12_11, mercury__multi_map__HeadVar__3_3, &mercury__multi_map__V_17_15);
              }
#line 92 "tree234.opt"
              {
#line 92 "tree234.opt"
                mercury__multi_map__to_flat_assoc_list_acc_4_p_0(mercury__multi_map__V_60_60, mercury__multi_map__V_61_61, mercury__multi_map__V_10_9, mercury__multi_map__V_11_10, mercury__multi_map__V_17_15, &mercury__multi_map__V_18_16);
              }
#line 93 "tree234.opt"
              /* direct tailcall eliminated */
#line 93 "tree234.opt"
              {
#line 93 "tree234.opt"
                MR_Word mercury__multi_map__HeadVar__2__tmp_copy_2 = mercury__multi_map__V_13_12;
#line 93 "tree234.opt"
                MR_Word mercury__multi_map__HeadVar__3__tmp_copy_3 = mercury__multi_map__V_18_16;

#line 93 "tree234.opt"
                mercury__multi_map__HeadVar__3_3 = mercury__multi_map__HeadVar__3__tmp_copy_3;
#line 93 "tree234.opt"
                mercury__multi_map__HeadVar__2_2 = mercury__multi_map__HeadVar__2__tmp_copy_2;
#line 93 "tree234.opt"
              }
#line 93 "tree234.opt"
              continue;
#line 90 "tree234.opt"
            }
#line 88 "tree234.opt"
            break;
#line 88 "tree234.opt"
          case (MR_Integer) 2:
#line 94 "tree234.opt"
            {
#line 94 "tree234.opt"
              MR_Box mercury__multi_map__V_21_18 = (MR_hl_field(MR_mktag(2), mercury__multi_map__HeadVar__2_2, (MR_Integer) 0));
#line 94 "tree234.opt"
              MR_Word mercury__multi_map__V_22_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__multi_map__HeadVar__2_2, (MR_Integer) 1)));
#line 94 "tree234.opt"
              MR_Box mercury__multi_map__V_23_20 = (MR_hl_field(MR_mktag(2), mercury__multi_map__HeadVar__2_2, (MR_Integer) 2));
#line 94 "tree234.opt"
              MR_Word mercury__multi_map__V_24_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__multi_map__HeadVar__2_2, (MR_Integer) 3)));
#line 94 "tree234.opt"
              MR_Word mercury__multi_map__V_25_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__multi_map__HeadVar__2_2, (MR_Integer) 4)));
#line 94 "tree234.opt"
              MR_Word mercury__multi_map__V_26_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__multi_map__HeadVar__2_2, (MR_Integer) 5)));
#line 94 "tree234.opt"
              MR_Word mercury__multi_map__V_27_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__multi_map__HeadVar__2_2, (MR_Integer) 6)));
#line 94 "tree234.opt"
              MR_Word mercury__multi_map__V_31_27;
#line 94 "tree234.opt"
              MR_Word mercury__multi_map__V_32_28;
#line 94 "tree234.opt"
              MR_Word mercury__multi_map__V_33_29;
#line 94 "tree234.opt"
              MR_Word mercury__multi_map__V_34_30;

#line 95 "tree234.opt"
              {
#line 95 "tree234.opt"
                mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__tree234_0(mercury__multi_map__V_60_60, mercury__multi_map__V_61_61, mercury__multi_map__V_25_22, mercury__multi_map__HeadVar__3_3, &mercury__multi_map__V_31_27);
              }
#line 96 "tree234.opt"
              {
#line 96 "tree234.opt"
                mercury__multi_map__to_flat_assoc_list_acc_4_p_0(mercury__multi_map__V_60_60, mercury__multi_map__V_61_61, mercury__multi_map__V_21_18, mercury__multi_map__V_22_19, mercury__multi_map__V_31_27, &mercury__multi_map__V_32_28);
              }
#line 97 "tree234.opt"
              {
#line 97 "tree234.opt"
                mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__tree234_0(mercury__multi_map__V_60_60, mercury__multi_map__V_61_61, mercury__multi_map__V_26_23, mercury__multi_map__V_32_28, &mercury__multi_map__V_33_29);
              }
#line 98 "tree234.opt"
              {
#line 98 "tree234.opt"
                mercury__multi_map__to_flat_assoc_list_acc_4_p_0(mercury__multi_map__V_60_60, mercury__multi_map__V_61_61, mercury__multi_map__V_23_20, mercury__multi_map__V_24_21, mercury__multi_map__V_33_29, &mercury__multi_map__V_34_30);
              }
#line 99 "tree234.opt"
              /* direct tailcall eliminated */
#line 99 "tree234.opt"
              {
#line 99 "tree234.opt"
                MR_Word mercury__multi_map__HeadVar__2__tmp_copy_2 = mercury__multi_map__V_27_24;
#line 99 "tree234.opt"
                MR_Word mercury__multi_map__HeadVar__3__tmp_copy_3 = mercury__multi_map__V_34_30;

#line 99 "tree234.opt"
                mercury__multi_map__HeadVar__3_3 = mercury__multi_map__HeadVar__3__tmp_copy_3;
#line 99 "tree234.opt"
                mercury__multi_map__HeadVar__2_2 = mercury__multi_map__HeadVar__2__tmp_copy_2;
#line 99 "tree234.opt"
              }
#line 99 "tree234.opt"
              continue;
#line 94 "tree234.opt"
            }
#line 88 "tree234.opt"
            break;
#line 88 "tree234.opt"
          case (MR_Integer) 3:
#line 100 "tree234.opt"
            {
#line 100 "tree234.opt"
              MR_Word mercury__multi_map__TypeCtorInfo_20_75;
#line 100 "tree234.opt"
              MR_Word mercury__multi_map__TypeInfo_21_91;
#line 100 "tree234.opt"
              MR_Box mercury__multi_map__V_37_32 = (MR_hl_field(MR_mktag(3), mercury__multi_map__HeadVar__2_2, (MR_Integer) 0));
#line 100 "tree234.opt"
              MR_Word mercury__multi_map__V_38_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__multi_map__HeadVar__2_2, (MR_Integer) 1)));
#line 100 "tree234.opt"
              MR_Box mercury__multi_map__V_39_34 = (MR_hl_field(MR_mktag(3), mercury__multi_map__HeadVar__2_2, (MR_Integer) 2));
#line 100 "tree234.opt"
              MR_Word mercury__multi_map__V_40_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__multi_map__HeadVar__2_2, (MR_Integer) 3)));
#line 100 "tree234.opt"
              MR_Box mercury__multi_map__V_41_36 = (MR_hl_field(MR_mktag(3), mercury__multi_map__HeadVar__2_2, (MR_Integer) 4));
#line 100 "tree234.opt"
              MR_Word mercury__multi_map__V_42_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__multi_map__HeadVar__2_2, (MR_Integer) 5)));
#line 100 "tree234.opt"
              MR_Word mercury__multi_map__V_43_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__multi_map__HeadVar__2_2, (MR_Integer) 6)));
#line 100 "tree234.opt"
              MR_Word mercury__multi_map__V_44_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__multi_map__HeadVar__2_2, (MR_Integer) 7)));
#line 100 "tree234.opt"
              MR_Word mercury__multi_map__V_45_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__multi_map__HeadVar__2_2, (MR_Integer) 8)));
#line 100 "tree234.opt"
              MR_Word mercury__multi_map__V_46_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__multi_map__HeadVar__2_2, (MR_Integer) 9)));
#line 100 "tree234.opt"
              MR_Word mercury__multi_map__V_50_44;
#line 100 "tree234.opt"
              MR_Word mercury__multi_map__V_51_45;
#line 100 "tree234.opt"
              MR_Word mercury__multi_map__V_52_46;
#line 100 "tree234.opt"
              MR_Word mercury__multi_map__V_53_47;
#line 100 "tree234.opt"
              MR_Word mercury__multi_map__V_54_48;
#line 100 "tree234.opt"
              MR_Word mercury__multi_map__V_55_49;
#line 100 "tree234.opt"
              MR_Word mercury__multi_map__KeyValues_67;
#line 100 "tree234.opt"
              MR_Word mercury__multi_map__V_73_73;
#line 100 "tree234.opt"
              MR_Word mercury__multi_map__KeyValues_82;
#line 100 "tree234.opt"
              MR_Word mercury__multi_map__V_88_88;
#line 529 "multi_map.m"
              MR_Word mercury__multi_map__conv0_V_73_73;
#line 529 "multi_map.m"
              MR_Word mercury__multi_map__conv1_V_51_45;
#line 529 "multi_map.m"
              MR_Word mercury__multi_map__conv2_V_88_88;
#line 529 "multi_map.m"
              MR_Word mercury__multi_map__conv3_V_53_47;

#line 101 "tree234.opt"
              {
#line 101 "tree234.opt"
                mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__tree234_0(mercury__multi_map__V_60_60, mercury__multi_map__V_61_61, mercury__multi_map__V_43_38, mercury__multi_map__HeadVar__3_3, &mercury__multi_map__V_50_44);
              }
#line 890 "multi_map.c"
              mercury__multi_map__TypeCtorInfo_20_75 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
#line 892 "multi_map.c"
              {
#line 894 "multi_map.c"
                mercury__multi_map__TypeInfo_21_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 896 "multi_map.c"
                MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_21_91, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_20_75));
#line 898 "multi_map.c"
                MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_21_91, 1) = ((MR_Box) (mercury__multi_map__V_60_60));
#line 900 "multi_map.c"
                MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_21_91, 2) = ((MR_Box) (mercury__multi_map__V_61_61));
#line 902 "multi_map.c"
              }
#line 528 "multi_map.m"
              {
#line 528 "multi_map.m"
                mercury__multi_map__KeyValues_67 = mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_2_f_in__list_0(mercury__multi_map__V_37_32, mercury__multi_map__V_38_33);
              }
#line 529 "multi_map.m"
              {
#line 529 "multi_map.m"
                mercury__multi_map__conv0_V_73_73 = mercury__cord__from_list_1_f_0(mercury__multi_map__TypeInfo_21_91, (MR_Word) mercury__multi_map__KeyValues_67);
              }
#line 529 "multi_map.m"
              mercury__multi_map__V_73_73 = (MR_Word) mercury__multi_map__conv0_V_73_73;
#line 529 "multi_map.m"
              {
#line 529 "multi_map.m"
                mercury__multi_map__conv1_V_51_45 = mercury__cord__f_43_43_2_f_0(mercury__multi_map__TypeInfo_21_91, (MR_Word) mercury__multi_map__V_50_44, (MR_Word) mercury__multi_map__V_73_73);
              }
#line 529 "multi_map.m"
              mercury__multi_map__V_51_45 = (MR_Word) mercury__multi_map__conv1_V_51_45;
#line 103 "tree234.opt"
              {
#line 103 "tree234.opt"
                mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__tree234_0(mercury__multi_map__V_60_60, mercury__multi_map__V_61_61, mercury__multi_map__V_44_39, mercury__multi_map__V_51_45, &mercury__multi_map__V_52_46);
              }
#line 528 "multi_map.m"
              {
#line 528 "multi_map.m"
                mercury__multi_map__KeyValues_82 = mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_2_f_in__list_0(mercury__multi_map__V_39_34, mercury__multi_map__V_40_35);
              }
#line 529 "multi_map.m"
              {
#line 529 "multi_map.m"
                mercury__multi_map__conv2_V_88_88 = mercury__cord__from_list_1_f_0(mercury__multi_map__TypeInfo_21_91, (MR_Word) mercury__multi_map__KeyValues_82);
              }
#line 529 "multi_map.m"
              mercury__multi_map__V_88_88 = (MR_Word) mercury__multi_map__conv2_V_88_88;
#line 529 "multi_map.m"
              {
#line 529 "multi_map.m"
                mercury__multi_map__conv3_V_53_47 = mercury__cord__f_43_43_2_f_0(mercury__multi_map__TypeInfo_21_91, (MR_Word) mercury__multi_map__V_52_46, (MR_Word) mercury__multi_map__V_88_88);
              }
#line 529 "multi_map.m"
              mercury__multi_map__V_53_47 = (MR_Word) mercury__multi_map__conv3_V_53_47;
#line 105 "tree234.opt"
              {
#line 105 "tree234.opt"
                mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__tree234_0(mercury__multi_map__V_60_60, mercury__multi_map__V_61_61, mercury__multi_map__V_45_40, mercury__multi_map__V_53_47, &mercury__multi_map__V_54_48);
              }
#line 106 "tree234.opt"
              {
#line 106 "tree234.opt"
                mercury__multi_map__to_flat_assoc_list_acc_4_p_0(mercury__multi_map__V_60_60, mercury__multi_map__V_61_61, mercury__multi_map__V_41_36, mercury__multi_map__V_42_37, mercury__multi_map__V_54_48, &mercury__multi_map__V_55_49);
              }
#line 107 "tree234.opt"
              /* direct tailcall eliminated */
#line 107 "tree234.opt"
              {
#line 107 "tree234.opt"
                MR_Word mercury__multi_map__HeadVar__2__tmp_copy_2 = mercury__multi_map__V_46_41;
#line 107 "tree234.opt"
                MR_Word mercury__multi_map__HeadVar__3__tmp_copy_3 = mercury__multi_map__V_55_49;

#line 107 "tree234.opt"
                mercury__multi_map__HeadVar__3_3 = mercury__multi_map__HeadVar__3__tmp_copy_3;
#line 107 "tree234.opt"
                mercury__multi_map__HeadVar__2_2 = mercury__multi_map__HeadVar__2__tmp_copy_2;
#line 107 "tree234.opt"
              }
#line 107 "tree234.opt"
              continue;
#line 100 "tree234.opt"
            }
#line 88 "tree234.opt"
            break;
#line 88 "tree234.opt"
        }
#line 88 "tree234.opt"
      }
#line 88 "tree234.opt"
      break;
#line 88 "tree234.opt"
    }
#line 35 "tree234.int"
}

#line 127 "list.int"
static void MR_CALL 
mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__list_0(
#line 127 "list.int"
  MR_Word mercury__multi_map__V_24_24,
#line 127 "list.int"
  MR_Word mercury__multi_map__V_25_25,
#line 127 "list.int"
  MR_Word mercury__multi_map__HeadVar__2_2,
#line 127 "list.int"
  MR_Word mercury__multi_map__HeadVar__3_3,
#line 127 "list.int"
  MR_Word * mercury__multi_map__HeadVar__4_4)
#line 127 "list.int"
{
#line 393 "list.opt"
  while (MR_TRUE)
#line 393 "list.opt"
    {
#line 393 "list.opt"
      /* tailcall optimized into a loop */
#line 393 "list.opt"
      {
#line 393 "list.opt"
        MR_bool mercury__multi_map__succeeded;

#line 393 "list.opt"
        if ((mercury__multi_map__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 393 "list.opt"
          *mercury__multi_map__HeadVar__4_4 = mercury__multi_map__HeadVar__3_3;
#line 393 "list.opt"
        else
#line 395 "list.opt"
          {
#line 395 "list.opt"
            MR_Word mercury__multi_map__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__2_2, (MR_Integer) 0)));
#line 395 "list.opt"
            MR_Word mercury__multi_map__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__2_2, (MR_Integer) 1)));
#line 395 "list.opt"
            MR_Word mercury__multi_map__V_15_13;
#line 395 "list.opt"
            MR_Box mercury__multi_map__K_28 = (MR_hl_field(MR_mktag(0), mercury__multi_map__V_10_9, (MR_Integer) 0));
#line 395 "list.opt"
            MR_Box mercury__multi_map__V_29 = (MR_hl_field(MR_mktag(0), mercury__multi_map__V_10_9, (MR_Integer) 1));

#line 407 "multi_map.m"
            {
#line 407 "multi_map.m"
              mercury__multi_map__set_4_p_0(mercury__multi_map__V_24_24, mercury__multi_map__V_25_25, mercury__multi_map__K_28, mercury__multi_map__V_29, mercury__multi_map__HeadVar__3_3, &mercury__multi_map__V_15_13);
            }
#line 397 "list.opt"
            /* direct tailcall eliminated */
#line 397 "list.opt"
            {
#line 397 "list.opt"
              MR_Word mercury__multi_map__HeadVar__2__tmp_copy_2 = mercury__multi_map__V_11_10;
#line 397 "list.opt"
              MR_Word mercury__multi_map__HeadVar__3__tmp_copy_3 = mercury__multi_map__V_15_13;

#line 397 "list.opt"
              mercury__multi_map__HeadVar__3_3 = mercury__multi_map__HeadVar__3__tmp_copy_3;
#line 397 "list.opt"
              mercury__multi_map__HeadVar__2_2 = mercury__multi_map__HeadVar__2__tmp_copy_2;
#line 397 "list.opt"
            }
#line 397 "list.opt"
            continue;
#line 395 "list.opt"
          }
#line 393 "list.opt"
      }
#line 393 "list.opt"
      break;
#line 393 "list.opt"
    }
#line 127 "list.int"
}

#line 313 "list.int"
static MR_Word MR_CALL 
mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_2_f_in__list_0(
#line 313 "list.int"
  MR_Box mercury__multi_map__V_17_17,
#line 313 "list.int"
  MR_Word mercury__multi_map__HeadVar__2_2)
#line 313 "list.int"
{
#line 616 "list.opt"
  {
#line 616 "list.opt"
    MR_bool mercury__multi_map__succeeded;
#line 616 "list.opt"
    MR_Word mercury__multi_map__HeadVar__3_3;

#line 616 "list.opt"
    if ((mercury__multi_map__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 616 "list.opt"
      mercury__multi_map__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 616 "list.opt"
    else
#line 617 "list.opt"
      {
#line 617 "list.opt"
        MR_Box mercury__multi_map__V_6_6 = (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__2_2, (MR_Integer) 0));
#line 617 "list.opt"
        MR_Word mercury__multi_map__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__2_2, (MR_Integer) 1)));
#line 617 "list.opt"
        MR_Word mercury__multi_map__V_8_8;
#line 617 "list.opt"
        MR_Word mercury__multi_map__V_9_9;

#line 528 "multi_map.m"
        {
#line 528 "multi_map.m"
          mercury__multi_map__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 528 "multi_map.m"
          MR_hl_field(MR_mktag(0), mercury__multi_map__V_8_8, 0) = mercury__multi_map__V_17_17;
#line 528 "multi_map.m"
          MR_hl_field(MR_mktag(0), mercury__multi_map__V_8_8, 1) = mercury__multi_map__V_6_6;
#line 528 "multi_map.m"
        }
#line 619 "list.opt"
        {
#line 619 "list.opt"
          mercury__multi_map__V_9_9 = mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_2_f_in__list_0(mercury__multi_map__V_17_17, mercury__multi_map__V_7_7);
        }
#line 617 "list.opt"
        {
#line 617 "list.opt"
          mercury__multi_map__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 617 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__3_3, 0) = ((MR_Box) (mercury__multi_map__V_8_8));
#line 617 "list.opt"
          MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__3_3, 1) = ((MR_Box) (mercury__multi_map__V_9_9));
#line 617 "list.opt"
        }
#line 617 "list.opt"
      }
#line 616 "list.opt"
    return mercury__multi_map__HeadVar__3_3;
#line 616 "list.opt"
  }
#line 313 "list.int"
}

#line 18 "ops.opt"
static MR_Integer MR_CALL 
mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 18 "ops.opt"
{
#line 47 "ops.opt"
  {
#line 47 "ops.opt"
    MR_bool mercury__multi_map__succeeded;

#line 47 "ops.opt"
    return (MR_Integer) 1200;
#line 47 "ops.opt"
  }
#line 18 "ops.opt"
}

#line 33 "multi_map.m"
void MR_CALL 
mercury__multi_map____Compare____multi_map_2_0(
#line 33 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_6,
#line 33 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_7,
#line 33 "multi_map.m"
  MR_Word * mercury__multi_map__HeadVar__1_1,
#line 33 "multi_map.m"
  MR_Word mercury__multi_map__HeadVar__2_2,
#line 33 "multi_map.m"
  MR_Word mercury__multi_map__HeadVar__3_3)
#line 33 "multi_map.m"
{
#line 33 "multi_map.m"
  {
#line 33 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 33 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_8_8 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 33 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_9_9;
#line 33 "multi_map.m"
    MR_Word mercury__multi_map__Cast_HeadVar1_4 = mercury__multi_map__HeadVar__2_2;
#line 33 "multi_map.m"
    MR_Word mercury__multi_map__Cast_HeadVar2_5 = mercury__multi_map__HeadVar__3_3;

#line 1179 "multi_map.c"
    {
#line 1181 "multi_map.c"
      mercury__multi_map__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1183 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_9_9, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_8_8));
#line 1185 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_9_9, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_7));
#line 1187 "multi_map.c"
    }
#line 33 "multi_map.m"
    {
#line 33 "multi_map.m"
      mercury__tree234____Compare____tree234_2_0(mercury__multi_map__TypeInfo_for_K_6, mercury__multi_map__TypeInfo_9_9, mercury__multi_map__HeadVar__1_1, (MR_Word) mercury__multi_map__Cast_HeadVar1_4, (MR_Word) mercury__multi_map__Cast_HeadVar2_5);
    }
#line 33 "multi_map.m"
  }
#line 33 "multi_map.m"
}

#line 33 "multi_map.m"
MR_bool MR_CALL 
mercury__multi_map____Unify____multi_map_2_0(
#line 33 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_5,
#line 33 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_6,
#line 33 "multi_map.m"
  MR_Word mercury__multi_map__HeadVar__1_1,
#line 33 "multi_map.m"
  MR_Word mercury__multi_map__HeadVar__2_2)
#line 33 "multi_map.m"
{
#line 33 "multi_map.m"
  {
#line 33 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 33 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_7_7 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 33 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_8_8;
#line 33 "multi_map.m"
    MR_Word mercury__multi_map__Cast_HeadVar1_3 = mercury__multi_map__HeadVar__1_1;
#line 33 "multi_map.m"
    MR_Word mercury__multi_map__Cast_HeadVar2_4 = mercury__multi_map__HeadVar__2_2;

#line 1225 "multi_map.c"
    {
#line 1227 "multi_map.c"
      mercury__multi_map__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1229 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_8, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_7_7));
#line 1231 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_8, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_6));
#line 1233 "multi_map.c"
    }
#line 33 "multi_map.m"
    {
#line 33 "multi_map.m"
      mercury__multi_map__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__multi_map__TypeInfo_for_K_5, mercury__multi_map__TypeInfo_8_8, (MR_Word) mercury__multi_map__Cast_HeadVar1_3, (MR_Word) mercury__multi_map__Cast_HeadVar2_4);
    }
#line 33 "multi_map.m"
    return mercury__multi_map__succeeded;
#line 33 "multi_map.m"
  }
#line 33 "multi_map.m"
}

#line 634 "multi_map.m"
void MR_CALL 
mercury__multi_map__accumulate_length_3_p_0(
#line 634 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_10,
#line 634 "multi_map.m"
  MR_Word mercury__multi_map__Vs_4,
#line 634 "multi_map.m"
  MR_Integer mercury__multi_map__STATE_VARIABLE_Count_0_7,
#line 634 "multi_map.m"
  MR_Integer * mercury__multi_map__STATE_VARIABLE_Count_8)
#line 634 "multi_map.m"
{
#line 636 "multi_map.m"
  {
#line 636 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 636 "multi_map.m"
    MR_Integer mercury__multi_map__NVs_6;

#line 606 "list.opt"
    {
#line 606 "list.opt"
      mercury__list__length_acc_3_p_0(mercury__multi_map__TypeInfo_for_V_10, mercury__multi_map__Vs_4, (MR_Integer) 0, &mercury__multi_map__NVs_6);
    }
#line 638 "multi_map.m"
    *mercury__multi_map__STATE_VARIABLE_Count_8 = (mercury__multi_map__STATE_VARIABLE_Count_0_7 + mercury__multi_map__NVs_6);
#line 636 "multi_map.m"
  }
#line 634 "multi_map.m"
}

#line 574 "multi_map.m"
void MR_CALL 
mercury__multi_map__from_corresponding_lists_2_4_p_0(
#line 574 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_33,
#line 574 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_34,
#line 574 "multi_map.m"
  MR_Word mercury__multi_map__HeadVar__1_1,
#line 574 "multi_map.m"
  MR_Word mercury__multi_map__HeadVar__2_2,
#line 574 "multi_map.m"
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_3,
#line 574 "multi_map.m"
  MR_Word * mercury__multi_map__STATE_VARIABLE_MultiMap_4)
#line 574 "multi_map.m"
{
#line 577 "multi_map.m"
  while (MR_TRUE)
#line 577 "multi_map.m"
    {
#line 577 "multi_map.m"
      /* tailcall optimized into a loop */
#line 577 "multi_map.m"
      {
#line 577 "multi_map.m"
        MR_bool mercury__multi_map__succeeded;

#line 577 "multi_map.m"
        if ((mercury__multi_map__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 577 "multi_map.m"
          if ((mercury__multi_map__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 577 "multi_map.m"
            *mercury__multi_map__STATE_VARIABLE_MultiMap_4 = mercury__multi_map__STATE_VARIABLE_MultiMap_0_3;
#line 577 "multi_map.m"
          else
#line 578 "multi_map.m"
            {
#line 579 "multi_map.m"
              {
#line 579 "multi_map.m"
                mercury__require__unexpected_3_p_0((MR_String) "multi_map", (MR_String) "from_corresponding_lists", (MR_String) "list length mismatch");
#line 579 "multi_map.m"
                return;
              }
#line 578 "multi_map.m"
            }
#line 577 "multi_map.m"
        else
#line 577 "multi_map.m"
          {
#line 577 "multi_map.m"
            MR_Word mercury__multi_map__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__1_1, (MR_Integer) 1)));
#line 577 "multi_map.m"
            MR_Box mercury__multi_map__V_36_36 = (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__1_1, (MR_Integer) 0));

#line 577 "multi_map.m"
            if ((mercury__multi_map__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 580 "multi_map.m"
              {
#line 581 "multi_map.m"
                {
#line 581 "multi_map.m"
                  mercury__require__unexpected_3_p_0((MR_String) "multi_map", (MR_String) "from_corresponding_lists", (MR_String) "list length mismatch");
#line 581 "multi_map.m"
                  return;
                }
#line 580 "multi_map.m"
              }
#line 577 "multi_map.m"
            else
#line 583 "multi_map.m"
              {
#line 583 "multi_map.m"
                MR_Box mercury__multi_map__Value_26 = (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__2_2, (MR_Integer) 0));
#line 583 "multi_map.m"
                MR_Word mercury__multi_map__Values_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__2_2, (MR_Integer) 1)));
#line 583 "multi_map.m"
                MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_31_31;

#line 407 "multi_map.m"
                {
#line 407 "multi_map.m"
                  mercury__multi_map__set_4_p_0(mercury__multi_map__TypeInfo_for_K_33, mercury__multi_map__TypeInfo_for_V_34, mercury__multi_map__V_36_36, mercury__multi_map__Value_26, mercury__multi_map__STATE_VARIABLE_MultiMap_0_3, &mercury__multi_map__STATE_VARIABLE_MultiMap_31_31);
                }
#line 585 "multi_map.m"
                /* direct tailcall eliminated */
#line 585 "multi_map.m"
                {
#line 585 "multi_map.m"
                  MR_Word mercury__multi_map__HeadVar__1__tmp_copy_1 = mercury__multi_map__V_35_35;
#line 585 "multi_map.m"
                  MR_Word mercury__multi_map__HeadVar__2__tmp_copy_2 = mercury__multi_map__Values_27;
#line 585 "multi_map.m"
                  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0__tmp_copy_3 = mercury__multi_map__STATE_VARIABLE_MultiMap_31_31;

#line 585 "multi_map.m"
                  mercury__multi_map__STATE_VARIABLE_MultiMap_0_3 = mercury__multi_map__STATE_VARIABLE_MultiMap_0__tmp_copy_3;
#line 585 "multi_map.m"
                  mercury__multi_map__HeadVar__2_2 = mercury__multi_map__HeadVar__2__tmp_copy_2;
#line 585 "multi_map.m"
                  mercury__multi_map__HeadVar__1_1 = mercury__multi_map__HeadVar__1__tmp_copy_1;
#line 585 "multi_map.m"
                }
#line 585 "multi_map.m"
                continue;
#line 583 "multi_map.m"
              }
#line 577 "multi_map.m"
          }
#line 577 "multi_map.m"
      }
#line 577 "multi_map.m"
      break;
#line 577 "multi_map.m"
    }
#line 574 "multi_map.m"
}

#line 539 "multi_map.m"
void MR_CALL 
mercury__multi_map__add_from_pair_3_p_0(
#line 539 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_10,
#line 539 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_11,
#line 539 "multi_map.m"
  MR_Word mercury__multi_map__HeadVar__1_1,
#line 539 "multi_map.m"
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_7,
#line 539 "multi_map.m"
  MR_Word * mercury__multi_map__STATE_VARIABLE_MultiMap_8)
#line 539 "multi_map.m"
{
#line 542 "multi_map.m"
  {
#line 542 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 542 "multi_map.m"
    MR_Box mercury__multi_map__K_4 = (MR_hl_field(MR_mktag(0), mercury__multi_map__HeadVar__1_1, (MR_Integer) 0));
#line 542 "multi_map.m"
    MR_Box mercury__multi_map__V_5 = (MR_hl_field(MR_mktag(0), mercury__multi_map__HeadVar__1_1, (MR_Integer) 1));

#line 407 "multi_map.m"
    {
#line 407 "multi_map.m"
      mercury__multi_map__set_4_p_0(mercury__multi_map__TypeInfo_for_K_10, mercury__multi_map__TypeInfo_for_V_11, mercury__multi_map__K_4, mercury__multi_map__V_5, mercury__multi_map__STATE_VARIABLE_MultiMap_0_7, mercury__multi_map__STATE_VARIABLE_MultiMap_8);
    }
#line 542 "multi_map.m"
  }
#line 539 "multi_map.m"
}

#line 524 "multi_map.m"
void MR_CALL 
mercury__multi_map__to_flat_assoc_list_acc_4_p_0(
#line 524 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_18,
#line 524 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_19,
#line 524 "multi_map.m"
  MR_Box mercury__multi_map__Key_5,
#line 524 "multi_map.m"
  MR_Word mercury__multi_map__Values_6,
#line 524 "multi_map.m"
  MR_Word mercury__multi_map__STATE_VARIABLE_Cord_0_10,
#line 524 "multi_map.m"
  MR_Word * mercury__multi_map__STATE_VARIABLE_Cord_11)
#line 524 "multi_map.m"
{
#line 527 "multi_map.m"
  {
#line 527 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 527 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_20_20 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
#line 527 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_21_21;
#line 527 "multi_map.m"
    MR_Word mercury__multi_map__KeyValues_8;
#line 527 "multi_map.m"
    MR_Word mercury__multi_map__V_16_16;
#line 529 "multi_map.m"
    MR_Word mercury__multi_map__conv0_V_16_16;
#line 529 "multi_map.m"
    MR_Word mercury__multi_map__conv1_STATE_VARIABLE_Cord_11;

#line 1466 "multi_map.c"
    {
#line 1468 "multi_map.c"
      mercury__multi_map__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 1470 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_21_21, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_20_20));
#line 1472 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_21_21, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_K_18));
#line 1474 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_21_21, 2) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_19));
#line 1476 "multi_map.c"
    }
#line 528 "multi_map.m"
    {
#line 528 "multi_map.m"
      mercury__multi_map__KeyValues_8 = mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_2_f_in__list_0(mercury__multi_map__Key_5, mercury__multi_map__Values_6);
    }
#line 529 "multi_map.m"
    {
#line 529 "multi_map.m"
      mercury__multi_map__conv0_V_16_16 = mercury__cord__from_list_1_f_0(mercury__multi_map__TypeInfo_21_21, (MR_Word) mercury__multi_map__KeyValues_8);
    }
#line 529 "multi_map.m"
    mercury__multi_map__V_16_16 = (MR_Word) mercury__multi_map__conv0_V_16_16;
#line 529 "multi_map.m"
    {
#line 529 "multi_map.m"
      mercury__multi_map__conv1_STATE_VARIABLE_Cord_11 = mercury__cord__f_43_43_2_f_0(mercury__multi_map__TypeInfo_21_21, (MR_Word) mercury__multi_map__STATE_VARIABLE_Cord_0_10, (MR_Word) mercury__multi_map__V_16_16);
    }
#line 529 "multi_map.m"
    *mercury__multi_map__STATE_VARIABLE_Cord_11 = (MR_Word) mercury__multi_map__conv1_STATE_VARIABLE_Cord_11;
#line 527 "multi_map.m"
  }
#line 524 "multi_map.m"
}

#line 470 "multi_map.m"
void MR_CALL 
mercury__multi_map__assoc_list_merge_3_p_0(
#line 470 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_20,
#line 470 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_21,
#line 470 "multi_map.m"
  MR_Word mercury__multi_map__ListA_4,
#line 470 "multi_map.m"
  MR_Word mercury__multi_map__ListB_5,
#line 470 "multi_map.m"
  MR_Word * mercury__multi_map__List_6)
#line 470 "multi_map.m"
{
#line 477 "multi_map.m"
  {
#line 477 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;

#line 477 "multi_map.m"
    if ((mercury__multi_map__ListA_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 476 "multi_map.m"
      *mercury__multi_map__List_6 = mercury__multi_map__ListB_5;
#line 477 "multi_map.m"
    else
#line 478 "multi_map.m"
      {
#line 478 "multi_map.m"
        MR_Word mercury__multi_map__HeadA_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__multi_map__ListA_4, (MR_Integer) 0)));
#line 478 "multi_map.m"
        MR_Word mercury__multi_map__TailA_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__multi_map__ListA_4, (MR_Integer) 1)));

#line 482 "multi_map.m"
        if ((mercury__multi_map__ListB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 481 "multi_map.m"
          *mercury__multi_map__List_6 = mercury__multi_map__ListA_4;
#line 482 "multi_map.m"
        else
#line 483 "multi_map.m"
          {
#line 483 "multi_map.m"
            MR_Word mercury__multi_map__HeadB_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__multi_map__ListB_5, (MR_Integer) 0)));
#line 483 "multi_map.m"
            MR_Word mercury__multi_map__TailB_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__multi_map__ListB_5, (MR_Integer) 1)));
#line 483 "multi_map.m"
            MR_Box mercury__multi_map__KeyA_11 = (MR_hl_field(MR_mktag(0), mercury__multi_map__HeadA_7, (MR_Integer) 0));
#line 483 "multi_map.m"
            MR_Word mercury__multi_map__ValuesA_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__multi_map__HeadA_7, (MR_Integer) 1)));
#line 483 "multi_map.m"
            MR_Box mercury__multi_map__KeyB_13 = (MR_hl_field(MR_mktag(0), mercury__multi_map__HeadB_9, (MR_Integer) 0));
#line 483 "multi_map.m"
            MR_Word mercury__multi_map__ValuesB_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__multi_map__HeadB_9, (MR_Integer) 1)));
#line 483 "multi_map.m"
            MR_Word mercury__multi_map__Res_15;
#line 483 "multi_map.m"
            MR_Box mercury__multi_map__Key_16;
#line 483 "multi_map.m"
            MR_Word mercury__multi_map__Values_17;
#line 483 "multi_map.m"
            MR_Word mercury__multi_map__Tail_18;
#line 483 "multi_map.m"
            MR_Word mercury__multi_map__V_19_19;

#line 486 "multi_map.m"
            {
#line 486 "multi_map.m"
              mercury__builtin__compare_3_p_0(mercury__multi_map__TypeInfo_for_K_20, &mercury__multi_map__Res_15, mercury__multi_map__KeyA_11, mercury__multi_map__KeyB_13);
            }
#line 492 "multi_map.m"
#line 492 "multi_map.m"
            switch (mercury__multi_map__Res_15) {
#line 492 "multi_map.m"
              default: /*NOTREACHED*/ MR_assert(0);
#line 492 "multi_map.m"
              case (MR_Integer) 1:
#line 488 "multi_map.m"
                {
#line 489 "multi_map.m"
                  mercury__multi_map__Key_16 = mercury__multi_map__KeyA_11;
#line 490 "multi_map.m"
                  mercury__multi_map__Values_17 = mercury__multi_map__ValuesA_12;
#line 491 "multi_map.m"
                  {
#line 491 "multi_map.m"
                    mercury__multi_map__assoc_list_merge_3_p_0(mercury__multi_map__TypeInfo_for_K_20, mercury__multi_map__TypeInfo_for_V_21, mercury__multi_map__TailA_8, mercury__multi_map__ListB_5, &mercury__multi_map__Tail_18);
                  }
#line 488 "multi_map.m"
                }
#line 492 "multi_map.m"
                break;
#line 492 "multi_map.m"
              case (MR_Integer) 0:
#line 493 "multi_map.m"
                {
#line 494 "multi_map.m"
                  mercury__multi_map__Key_16 = mercury__multi_map__KeyA_11;
#line 495 "multi_map.m"
                  {
#line 495 "multi_map.m"
                    mercury__list__append_3_p_1(mercury__multi_map__TypeInfo_for_V_21, mercury__multi_map__ValuesA_12, mercury__multi_map__ValuesB_14, &mercury__multi_map__Values_17);
                  }
#line 496 "multi_map.m"
                  {
#line 496 "multi_map.m"
                    mercury__multi_map__assoc_list_merge_3_p_0(mercury__multi_map__TypeInfo_for_K_20, mercury__multi_map__TypeInfo_for_V_21, mercury__multi_map__TailA_8, mercury__multi_map__TailB_10, &mercury__multi_map__Tail_18);
                  }
#line 493 "multi_map.m"
                }
#line 492 "multi_map.m"
                break;
#line 492 "multi_map.m"
              case (MR_Integer) 2:
#line 498 "multi_map.m"
                {
#line 499 "multi_map.m"
                  mercury__multi_map__Key_16 = mercury__multi_map__KeyB_13;
#line 500 "multi_map.m"
                  mercury__multi_map__Values_17 = mercury__multi_map__ValuesB_14;
#line 501 "multi_map.m"
                  {
#line 501 "multi_map.m"
                    mercury__multi_map__assoc_list_merge_3_p_0(mercury__multi_map__TypeInfo_for_K_20, mercury__multi_map__TypeInfo_for_V_21, mercury__multi_map__ListA_4, mercury__multi_map__TailB_10, &mercury__multi_map__Tail_18);
                  }
#line 498 "multi_map.m"
                }
#line 492 "multi_map.m"
                break;
#line 492 "multi_map.m"
            }
#line 503 "multi_map.m"
            {
#line 503 "multi_map.m"
              mercury__multi_map__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 503 "multi_map.m"
              MR_hl_field(MR_mktag(0), mercury__multi_map__V_19_19, 0) = mercury__multi_map__Key_16;
#line 503 "multi_map.m"
              MR_hl_field(MR_mktag(0), mercury__multi_map__V_19_19, 1) = ((MR_Box) (mercury__multi_map__Values_17));
#line 503 "multi_map.m"
            }
#line 503 "multi_map.m"
            {
#line 503 "multi_map.m"
              MR_Word base;
#line 503 "multi_map.m"
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 503 "multi_map.m"
              *mercury__multi_map__List_6 = base;
#line 503 "multi_map.m"
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__multi_map__V_19_19));
#line 503 "multi_map.m"
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__multi_map__Tail_18));
#line 503 "multi_map.m"
            }
#line 483 "multi_map.m"
          }
#line 478 "multi_map.m"
      }
#line 477 "multi_map.m"
  }
#line 470 "multi_map.m"
}

#line 304 "multi_map.m"
void MR_CALL 
mercury__multi_map__all_count_2_p_0(
#line 304 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_7,
#line 304 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_8,
#line 304 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap_3,
#line 304 "multi_map.m"
  MR_Integer * mercury__multi_map__Count_4)
#line 304 "multi_map.m"
{
#line 631 "multi_map.m"
  {
#line 631 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;

#line 208 "map.opt"
    {
#line 208 "map.opt"
      mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_118_97_108_117_101_115_95_95_104_111_57_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__tree234_0(mercury__multi_map__TypeInfo_for_V_8, mercury__multi_map__MultiMap_3, (MR_Integer) 0, mercury__multi_map__Count_4);
    }
#line 631 "multi_map.m"
  }
#line 304 "multi_map.m"
}

#line 303 "multi_map.m"
MR_Integer MR_CALL 
mercury__multi_map__all_count_1_f_0(
#line 303 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_5,
#line 303 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_6,
#line 303 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap0_3)
#line 303 "multi_map.m"
{
#line 629 "multi_map.m"
  {
#line 629 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 629 "multi_map.m"
    MR_Integer mercury__multi_map__Count_4;

#line 629 "multi_map.m"
    {
#line 629 "multi_map.m"
      mercury__multi_map__all_count_2_p_0(mercury__multi_map__TypeInfo_for_K_5, mercury__multi_map__TypeInfo_for_V_6, mercury__multi_map__MultiMap0_3, &mercury__multi_map__Count_4);
    }
#line 629 "multi_map.m"
    return mercury__multi_map__Count_4;
#line 629 "multi_map.m"
  }
#line 303 "multi_map.m"
}

#line 299 "multi_map.m"
void MR_CALL 
mercury__multi_map__count_2_p_0(
#line 299 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_5,
#line 299 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_6,
#line 299 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap_3,
#line 299 "multi_map.m"
  MR_Integer * mercury__multi_map__Count_4)
#line 299 "multi_map.m"
{
#line 626 "multi_map.m"
  {
#line 626 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 626 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_7_7 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 626 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_8_8;

#line 1745 "multi_map.c"
    {
#line 1747 "multi_map.c"
      mercury__multi_map__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1749 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_8, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_7_7));
#line 1751 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_8, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_6));
#line 1753 "multi_map.c"
    }
#line 43 "map.opt"
    {
#line 43 "map.opt"
      mercury__tree234__count_2_p_0(mercury__multi_map__TypeInfo_for_K_5, mercury__multi_map__TypeInfo_8_8, (MR_Word) mercury__multi_map__MultiMap_3, mercury__multi_map__Count_4);
    }
#line 626 "multi_map.m"
  }
#line 299 "multi_map.m"
}

#line 298 "multi_map.m"
MR_Integer MR_CALL 
mercury__multi_map__count_1_f_0(
#line 298 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_5,
#line 298 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_6,
#line 298 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap0_3)
#line 298 "multi_map.m"
{
#line 626 "multi_map.m"
  {
#line 626 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 626 "multi_map.m"
    MR_Integer mercury__multi_map__Count_4;
#line 626 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_7_9 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 626 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_8_10;

#line 1787 "multi_map.c"
    {
#line 1789 "multi_map.c"
      mercury__multi_map__TypeInfo_8_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1791 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_10, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_7_9));
#line 1793 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_10, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_6));
#line 1795 "multi_map.c"
    }
#line 43 "map.opt"
    {
#line 43 "map.opt"
      mercury__tree234__count_2_p_0(mercury__multi_map__TypeInfo_for_K_5, mercury__multi_map__TypeInfo_8_10, (MR_Word) mercury__multi_map__MultiMap0_3, &mercury__multi_map__Count_4);
    }
#line 626 "multi_map.m"
    return mercury__multi_map__Count_4;
#line 626 "multi_map.m"
  }
#line 298 "multi_map.m"
}

#line 292 "multi_map.m"
void MR_CALL 
mercury__multi_map__values_2_p_0(
#line 292 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for__K_6,
#line 292 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_7,
#line 292 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap_3,
#line 292 "multi_map.m"
  MR_Word * mercury__multi_map__Values_4)
#line 292 "multi_map.m"
{
#line 616 "multi_map.m"
  {
#line 616 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 616 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_8_8 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 616 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_10_22;
#line 616 "multi_map.m"
    MR_Word mercury__multi_map__ValueLists_5;
#line 616 "multi_map.m"
    MR_Word mercury__multi_map__V_5_14;
#line 616 "multi_map.m"
    MR_Word mercury__multi_map__V_5_18;
#line 616 "multi_map.m"
    MR_Word mercury__multi_map__V_6_19;
#line 416 "tree234.opt"
    MR_Word mercury__multi_map__conv0_ValueLists_5;

#line 1841 "multi_map.c"
    {
#line 1843 "multi_map.c"
      mercury__multi_map__TypeInfo_10_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1845 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_22, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_8_8));
#line 1847 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_22, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_7));
#line 1849 "multi_map.c"
    }
#line 415 "tree234.opt"
    mercury__multi_map__V_5_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 416 "tree234.opt"
    {
#line 416 "tree234.opt"
      mercury__tree234__values_acc_3_p_0(mercury__multi_map__TypeInfo_for__K_6, mercury__multi_map__TypeInfo_10_22, (MR_Word) mercury__multi_map__MultiMap_3, (MR_Word) mercury__multi_map__V_5_14, &mercury__multi_map__conv0_ValueLists_5);
    }
#line 416 "tree234.opt"
    mercury__multi_map__ValueLists_5 = (MR_Word) mercury__multi_map__conv0_ValueLists_5;
#line 126 "list.opt"
    {
#line 126 "list.opt"
      mercury__list__reverse_2_p_0(mercury__multi_map__TypeInfo_10_22, mercury__multi_map__ValueLists_5, &mercury__multi_map__V_5_18);
    }
#line 127 "list.opt"
    mercury__multi_map__V_6_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 128 "list.opt"
    {
#line 128 "list.opt"
      mercury__list__condense_acc_3_p_0(mercury__multi_map__TypeInfo_for_V_7, mercury__multi_map__V_5_18, mercury__multi_map__V_6_19, mercury__multi_map__Values_4);
    }
#line 616 "multi_map.m"
  }
#line 292 "multi_map.m"
}

#line 291 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__values_1_f_0(
#line 291 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for__K_5,
#line 291 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_6,
#line 291 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap_3)
#line 291 "multi_map.m"
{
#line 614 "multi_map.m"
  {
#line 614 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 614 "multi_map.m"
    MR_Word mercury__multi_map__Values_4;

#line 614 "multi_map.m"
    {
#line 614 "multi_map.m"
      mercury__multi_map__values_2_p_0(mercury__multi_map__TypeInfo_for__K_5, mercury__multi_map__TypeInfo_for_V_6, mercury__multi_map__MultiMap_3, &mercury__multi_map__Values_4);
    }
#line 614 "multi_map.m"
    return mercury__multi_map__Values_4;
#line 614 "multi_map.m"
  }
#line 291 "multi_map.m"
}

#line 287 "multi_map.m"
void MR_CALL 
mercury__multi_map__keys_2_p_0(
#line 287 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_5,
#line 287 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for__V_6,
#line 287 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap_3,
#line 287 "multi_map.m"
  MR_Word * mercury__multi_map__Keys_4)
#line 287 "multi_map.m"
{
#line 611 "multi_map.m"
  {
#line 611 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 611 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_7_7 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 611 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_8_8;
#line 611 "multi_map.m"
    MR_Word mercury__multi_map__V_5_13;

#line 1931 "multi_map.c"
    {
#line 1933 "multi_map.c"
      mercury__multi_map__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1935 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_8, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_7_7));
#line 1937 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_8, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for__V_6));
#line 1939 "multi_map.c"
    }
#line 251 "tree234.opt"
    mercury__multi_map__V_5_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 252 "tree234.opt"
    {
#line 252 "tree234.opt"
      mercury__tree234__keys_acc_3_p_0(mercury__multi_map__TypeInfo_for_K_5, mercury__multi_map__TypeInfo_8_8, (MR_Word) mercury__multi_map__MultiMap_3, mercury__multi_map__V_5_13, mercury__multi_map__Keys_4);
    }
#line 611 "multi_map.m"
  }
#line 287 "multi_map.m"
}

#line 286 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__keys_1_f_0(
#line 286 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_5,
#line 286 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for__V_6,
#line 286 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap_3)
#line 286 "multi_map.m"
{
#line 611 "multi_map.m"
  {
#line 611 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 611 "multi_map.m"
    MR_Word mercury__multi_map__Keys_4;
#line 611 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_7_9 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 611 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_8_10;
#line 611 "multi_map.m"
    MR_Word mercury__multi_map__V_5_15;

#line 1977 "multi_map.c"
    {
#line 1979 "multi_map.c"
      mercury__multi_map__TypeInfo_8_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 1981 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_10, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_7_9));
#line 1983 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_10, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for__V_6));
#line 1985 "multi_map.c"
    }
#line 251 "tree234.opt"
    mercury__multi_map__V_5_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 252 "tree234.opt"
    {
#line 252 "tree234.opt"
      mercury__tree234__keys_acc_3_p_0(mercury__multi_map__TypeInfo_for_K_5, mercury__multi_map__TypeInfo_8_10, (MR_Word) mercury__multi_map__MultiMap_3, mercury__multi_map__V_5_15, &mercury__multi_map__Keys_4);
    }
#line 611 "multi_map.m"
    return mercury__multi_map__Keys_4;
#line 611 "multi_map.m"
  }
#line 286 "multi_map.m"
}

#line 280 "multi_map.m"
void MR_CALL 
mercury__multi_map__apply_to_list_3_p_0(
#line 280 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_11,
#line 280 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_12,
#line 280 "multi_map.m"
  MR_Word mercury__multi_map__HeadVar__1_1,
#line 280 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap_2,
#line 280 "multi_map.m"
  MR_Word * mercury__multi_map__HeadVar__3_3)
#line 280 "multi_map.m"
{
#line 600 "multi_map.m"
  {
#line 600 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;

#line 600 "multi_map.m"
    if ((mercury__multi_map__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 600 "multi_map.m"
      *mercury__multi_map__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 600 "multi_map.m"
    else
#line 601 "multi_map.m"
      {
#line 601 "multi_map.m"
        MR_Word mercury__multi_map__TypeCtorInfo_13_13 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 601 "multi_map.m"
        MR_Word mercury__multi_map__TypeInfo_10_21;
#line 601 "multi_map.m"
        MR_Word mercury__multi_map__ValueLists_10;
#line 601 "multi_map.m"
        MR_Word mercury__multi_map__V_5_17;
#line 601 "multi_map.m"
        MR_Word mercury__multi_map__V_6_18;
#line 602 "multi_map.m"
        MR_Word mercury__multi_map__conv0_ValueLists_10;

#line 2042 "multi_map.c"
        {
#line 2044 "multi_map.c"
          mercury__multi_map__TypeInfo_10_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2046 "multi_map.c"
          MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_21, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_13_13));
#line 2048 "multi_map.c"
          MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_21, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_12));
#line 2050 "multi_map.c"
        }
#line 602 "multi_map.m"
        {
#line 602 "multi_map.m"
          mercury__map__apply_to_list_3_p_0(mercury__multi_map__TypeInfo_for_K_11, mercury__multi_map__TypeInfo_10_21, mercury__multi_map__HeadVar__1_1, (MR_Word) mercury__multi_map__MultiMap_2, &mercury__multi_map__conv0_ValueLists_10);
        }
#line 602 "multi_map.m"
        mercury__multi_map__ValueLists_10 = (MR_Word) mercury__multi_map__conv0_ValueLists_10;
#line 126 "list.opt"
        {
#line 126 "list.opt"
          mercury__list__reverse_2_p_0(mercury__multi_map__TypeInfo_10_21, mercury__multi_map__ValueLists_10, &mercury__multi_map__V_5_17);
        }
#line 127 "list.opt"
        mercury__multi_map__V_6_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 128 "list.opt"
        {
#line 128 "list.opt"
          mercury__list__condense_acc_3_p_0(mercury__multi_map__TypeInfo_for_V_12, mercury__multi_map__V_5_17, mercury__multi_map__V_6_18, mercury__multi_map__HeadVar__3_3);
        }
#line 601 "multi_map.m"
      }
#line 600 "multi_map.m"
  }
#line 280 "multi_map.m"
}

#line 279 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__apply_to_list_2_f_0(
#line 279 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_7,
#line 279 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_8,
#line 279 "multi_map.m"
  MR_Word mercury__multi_map__Keys_4,
#line 279 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap_5)
#line 279 "multi_map.m"
{
#line 598 "multi_map.m"
  {
#line 598 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 598 "multi_map.m"
    MR_Word mercury__multi_map__Values_6;

#line 598 "multi_map.m"
    {
#line 598 "multi_map.m"
      mercury__multi_map__apply_to_list_3_p_0(mercury__multi_map__TypeInfo_for_K_7, mercury__multi_map__TypeInfo_for_V_8, mercury__multi_map__Keys_4, mercury__multi_map__MultiMap_5, &mercury__multi_map__Values_6);
    }
#line 598 "multi_map.m"
    return mercury__multi_map__Values_6;
#line 598 "multi_map.m"
  }
#line 279 "multi_map.m"
}

#line 271 "multi_map.m"
void MR_CALL 
mercury__multi_map__from_corresponding_list_lists_3_p_0(
#line 271 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_7,
#line 271 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_8,
#line 271 "multi_map.m"
  MR_Word mercury__multi_map__Keys_4,
#line 271 "multi_map.m"
  MR_Word mercury__multi_map__Values_5,
#line 271 "multi_map.m"
  MR_Word * mercury__multi_map__MultiMap_6)
#line 271 "multi_map.m"
{
#line 593 "multi_map.m"
  {
#line 593 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 593 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_9_9 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 593 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_10_10;
#line 593 "multi_map.m"
    MR_Word mercury__multi_map__V_7_14;
#line 593 "multi_map.m"
    MR_Word mercury__multi_map__V_5_17;
#line 245 "map.opt"
    MR_Word mercury__multi_map__conv0_V_7_14;
#line 70 "tree234.opt"
    MR_Word mercury__multi_map__conv1_MultiMap_6;

#line 2142 "multi_map.c"
    {
#line 2144 "multi_map.c"
      mercury__multi_map__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2146 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_10, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_9_9));
#line 2148 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_10, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_8));
#line 2150 "multi_map.c"
    }
#line 245 "map.opt"
    {
#line 245 "map.opt"
      mercury__assoc_list__from_corresponding_lists_3_p_0(mercury__multi_map__TypeInfo_for_K_7, mercury__multi_map__TypeInfo_10_10, mercury__multi_map__Keys_4, (MR_Word) mercury__multi_map__Values_5, &mercury__multi_map__conv0_V_7_14);
    }
#line 245 "map.opt"
    mercury__multi_map__V_7_14 = (MR_Word) mercury__multi_map__conv0_V_7_14;
#line 69 "tree234.opt"
    mercury__multi_map__V_5_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 70 "tree234.opt"
    {
#line 70 "tree234.opt"
      mercury__tree234__assoc_list_to_tree234_acc_3_p_0(mercury__multi_map__TypeInfo_for_K_7, mercury__multi_map__TypeInfo_10_10, (MR_Word) mercury__multi_map__V_7_14, (MR_Word) mercury__multi_map__V_5_17, &mercury__multi_map__conv1_MultiMap_6);
    }
#line 70 "tree234.opt"
    *mercury__multi_map__MultiMap_6 = (MR_Word) mercury__multi_map__conv1_MultiMap_6;
#line 593 "multi_map.m"
  }
#line 271 "multi_map.m"
}

#line 269 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__from_corresponding_list_lists_2_f_0(
#line 269 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_7,
#line 269 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_8,
#line 269 "multi_map.m"
  MR_Word mercury__multi_map__Keys_4,
#line 269 "multi_map.m"
  MR_Word mercury__multi_map__Values_5)
#line 269 "multi_map.m"
{
#line 593 "multi_map.m"
  {
#line 593 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 593 "multi_map.m"
    MR_Word mercury__multi_map__MultiMap_6;
#line 593 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_9_12 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 593 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_10_13;
#line 593 "multi_map.m"
    MR_Word mercury__multi_map__V_7_17;
#line 593 "multi_map.m"
    MR_Word mercury__multi_map__V_5_20;
#line 245 "map.opt"
    MR_Word mercury__multi_map__conv0_V_7_17;
#line 70 "tree234.opt"
    MR_Word mercury__multi_map__conv1_MultiMap_6;

#line 2205 "multi_map.c"
    {
#line 2207 "multi_map.c"
      mercury__multi_map__TypeInfo_10_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2209 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_13, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_9_12));
#line 2211 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_13, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_8));
#line 2213 "multi_map.c"
    }
#line 245 "map.opt"
    {
#line 245 "map.opt"
      mercury__assoc_list__from_corresponding_lists_3_p_0(mercury__multi_map__TypeInfo_for_K_7, mercury__multi_map__TypeInfo_10_13, mercury__multi_map__Keys_4, (MR_Word) mercury__multi_map__Values_5, &mercury__multi_map__conv0_V_7_17);
    }
#line 245 "map.opt"
    mercury__multi_map__V_7_17 = (MR_Word) mercury__multi_map__conv0_V_7_17;
#line 69 "tree234.opt"
    mercury__multi_map__V_5_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 70 "tree234.opt"
    {
#line 70 "tree234.opt"
      mercury__tree234__assoc_list_to_tree234_acc_3_p_0(mercury__multi_map__TypeInfo_for_K_7, mercury__multi_map__TypeInfo_10_13, (MR_Word) mercury__multi_map__V_7_17, (MR_Word) mercury__multi_map__V_5_20, &mercury__multi_map__conv1_MultiMap_6);
    }
#line 70 "tree234.opt"
    mercury__multi_map__MultiMap_6 = (MR_Word) mercury__multi_map__conv1_MultiMap_6;
#line 593 "multi_map.m"
    return mercury__multi_map__MultiMap_6;
#line 593 "multi_map.m"
  }
#line 269 "multi_map.m"
}

#line 260 "multi_map.m"
void MR_CALL 
mercury__multi_map__from_corresponding_lists_3_p_0(
#line 260 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_8,
#line 260 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_9,
#line 260 "multi_map.m"
  MR_Word mercury__multi_map__Keys_4,
#line 260 "multi_map.m"
  MR_Word mercury__multi_map__Values_5,
#line 260 "multi_map.m"
  MR_Word * mercury__multi_map__MultiMap_6)
#line 260 "multi_map.m"
{
#line 570 "multi_map.m"
  {
#line 570 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 570 "multi_map.m"
    MR_Word mercury__multi_map__MultiMap0_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 572 "multi_map.m"
    {
#line 572 "multi_map.m"
      mercury__multi_map__from_corresponding_lists_2_4_p_0(mercury__multi_map__TypeInfo_for_K_8, mercury__multi_map__TypeInfo_for_V_9, mercury__multi_map__Keys_4, mercury__multi_map__Values_5, mercury__multi_map__MultiMap0_7, mercury__multi_map__MultiMap_6);
    }
#line 570 "multi_map.m"
  }
#line 260 "multi_map.m"
}

#line 258 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__from_corresponding_lists_2_f_0(
#line 258 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_7,
#line 258 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_8,
#line 258 "multi_map.m"
  MR_Word mercury__multi_map__Keys_4,
#line 258 "multi_map.m"
  MR_Word mercury__multi_map__Values_5)
#line 258 "multi_map.m"
{
#line 570 "multi_map.m"
  {
#line 570 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 570 "multi_map.m"
    MR_Word mercury__multi_map__MultiMap_6;
#line 570 "multi_map.m"
    MR_Word mercury__multi_map__MultiMap0_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 572 "multi_map.m"
    {
#line 572 "multi_map.m"
      mercury__multi_map__from_corresponding_lists_2_4_p_0(mercury__multi_map__TypeInfo_for_K_7, mercury__multi_map__TypeInfo_for_V_8, mercury__multi_map__Keys_4, mercury__multi_map__Values_5, mercury__multi_map__MultiMap0_12, &mercury__multi_map__MultiMap_6);
    }
#line 570 "multi_map.m"
    return mercury__multi_map__MultiMap_6;
#line 570 "multi_map.m"
  }
#line 258 "multi_map.m"
}

#line 250 "multi_map.m"
void MR_CALL 
mercury__multi_map__from_sorted_assoc_list_2_p_0(
#line 250 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_5,
#line 250 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_6,
#line 250 "multi_map.m"
  MR_Word mercury__multi_map__AssocList_3,
#line 250 "multi_map.m"
  MR_Word * mercury__multi_map__MultiMap_4)
#line 250 "multi_map.m"
{
#line 563 "multi_map.m"
  {
#line 563 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 563 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_7_7 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 563 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_8_8;
#line 258 "map.opt"
    MR_Word mercury__multi_map__conv0_MultiMap_4;

#line 2328 "multi_map.c"
    {
#line 2330 "multi_map.c"
      mercury__multi_map__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2332 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_8, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_7_7));
#line 2334 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_8, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_6));
#line 2336 "multi_map.c"
    }
#line 258 "map.opt"
    {
#line 258 "map.opt"
      mercury__tree234__from_sorted_assoc_list_2_p_0(mercury__multi_map__TypeInfo_for_K_5, mercury__multi_map__TypeInfo_8_8, (MR_Word) mercury__multi_map__AssocList_3, &mercury__multi_map__conv0_MultiMap_4);
    }
#line 258 "map.opt"
    *mercury__multi_map__MultiMap_4 = (MR_Word) mercury__multi_map__conv0_MultiMap_4;
#line 563 "multi_map.m"
  }
#line 250 "multi_map.m"
}

#line 248 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__from_sorted_assoc_list_1_f_0(
#line 248 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_5,
#line 248 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_6,
#line 248 "multi_map.m"
  MR_Word mercury__multi_map__AssocList_3)
#line 248 "multi_map.m"
{
#line 563 "multi_map.m"
  {
#line 563 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 563 "multi_map.m"
    MR_Word mercury__multi_map__MultiMap_4;
#line 563 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_7_9 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 563 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_8_10;
#line 258 "map.opt"
    MR_Word mercury__multi_map__conv0_MultiMap_4;

#line 2374 "multi_map.c"
    {
#line 2376 "multi_map.c"
      mercury__multi_map__TypeInfo_8_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2378 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_10, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_7_9));
#line 2380 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_10, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_6));
#line 2382 "multi_map.c"
    }
#line 258 "map.opt"
    {
#line 258 "map.opt"
      mercury__tree234__from_sorted_assoc_list_2_p_0(mercury__multi_map__TypeInfo_for_K_5, mercury__multi_map__TypeInfo_8_10, (MR_Word) mercury__multi_map__AssocList_3, &mercury__multi_map__conv0_MultiMap_4);
    }
#line 258 "map.opt"
    mercury__multi_map__MultiMap_4 = (MR_Word) mercury__multi_map__conv0_MultiMap_4;
#line 563 "multi_map.m"
    return mercury__multi_map__MultiMap_4;
#line 563 "multi_map.m"
  }
#line 248 "multi_map.m"
}

#line 243 "multi_map.m"
void MR_CALL 
mercury__multi_map__from_assoc_list_2_p_0(
#line 243 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_5,
#line 243 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_6,
#line 243 "multi_map.m"
  MR_Word mercury__multi_map__AssocList_3,
#line 243 "multi_map.m"
  MR_Word * mercury__multi_map__MultiMap_4)
#line 243 "multi_map.m"
{
#line 557 "multi_map.m"
  {
#line 557 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 557 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_7_7 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 557 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_8_8;
#line 557 "multi_map.m"
    MR_Word mercury__multi_map__V_5_13;
#line 70 "tree234.opt"
    MR_Word mercury__multi_map__conv0_MultiMap_4;

#line 2424 "multi_map.c"
    {
#line 2426 "multi_map.c"
      mercury__multi_map__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2428 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_8, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_7_7));
#line 2430 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_8, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_6));
#line 2432 "multi_map.c"
    }
#line 69 "tree234.opt"
    mercury__multi_map__V_5_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 70 "tree234.opt"
    {
#line 70 "tree234.opt"
      mercury__tree234__assoc_list_to_tree234_acc_3_p_0(mercury__multi_map__TypeInfo_for_K_5, mercury__multi_map__TypeInfo_8_8, (MR_Word) mercury__multi_map__AssocList_3, (MR_Word) mercury__multi_map__V_5_13, &mercury__multi_map__conv0_MultiMap_4);
    }
#line 70 "tree234.opt"
    *mercury__multi_map__MultiMap_4 = (MR_Word) mercury__multi_map__conv0_MultiMap_4;
#line 557 "multi_map.m"
  }
#line 243 "multi_map.m"
}

#line 242 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__from_assoc_list_1_f_0(
#line 242 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_5,
#line 242 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_6,
#line 242 "multi_map.m"
  MR_Word mercury__multi_map__AssocList_3)
#line 242 "multi_map.m"
{
#line 557 "multi_map.m"
  {
#line 557 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 557 "multi_map.m"
    MR_Word mercury__multi_map__MultiMap_4;
#line 557 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_7_9 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 557 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_8_10;
#line 557 "multi_map.m"
    MR_Word mercury__multi_map__V_5_15;
#line 70 "tree234.opt"
    MR_Word mercury__multi_map__conv0_MultiMap_4;

#line 2474 "multi_map.c"
    {
#line 2476 "multi_map.c"
      mercury__multi_map__TypeInfo_8_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2478 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_10, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_7_9));
#line 2480 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_10, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_6));
#line 2482 "multi_map.c"
    }
#line 69 "tree234.opt"
    mercury__multi_map__V_5_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 70 "tree234.opt"
    {
#line 70 "tree234.opt"
      mercury__tree234__assoc_list_to_tree234_acc_3_p_0(mercury__multi_map__TypeInfo_for_K_5, mercury__multi_map__TypeInfo_8_10, (MR_Word) mercury__multi_map__AssocList_3, (MR_Word) mercury__multi_map__V_5_15, &mercury__multi_map__conv0_MultiMap_4);
    }
#line 70 "tree234.opt"
    mercury__multi_map__MultiMap_4 = (MR_Word) mercury__multi_map__conv0_MultiMap_4;
#line 557 "multi_map.m"
    return mercury__multi_map__MultiMap_4;
#line 557 "multi_map.m"
  }
#line 242 "multi_map.m"
}

#line 236 "multi_map.m"
void MR_CALL 
mercury__multi_map__to_assoc_list_2_p_0(
#line 236 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_5,
#line 236 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_6,
#line 236 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap_3,
#line 236 "multi_map.m"
  MR_Word * mercury__multi_map__AssocList_4)
#line 236 "multi_map.m"
{
#line 551 "multi_map.m"
  {
#line 551 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 551 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_7_7 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 551 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_8_8;
#line 551 "multi_map.m"
    MR_Word mercury__multi_map__V_5_13;
#line 409 "tree234.opt"
    MR_Word mercury__multi_map__conv0_AssocList_4;

#line 2526 "multi_map.c"
    {
#line 2528 "multi_map.c"
      mercury__multi_map__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2530 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_8, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_7_7));
#line 2532 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_8, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_6));
#line 2534 "multi_map.c"
    }
#line 408 "tree234.opt"
    mercury__multi_map__V_5_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 409 "tree234.opt"
    {
#line 409 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__multi_map__TypeInfo_for_K_5, mercury__multi_map__TypeInfo_8_8, (MR_Word) mercury__multi_map__MultiMap_3, (MR_Word) mercury__multi_map__V_5_13, &mercury__multi_map__conv0_AssocList_4);
    }
#line 409 "tree234.opt"
    *mercury__multi_map__AssocList_4 = (MR_Word) mercury__multi_map__conv0_AssocList_4;
#line 551 "multi_map.m"
  }
#line 236 "multi_map.m"
}

#line 235 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__to_assoc_list_1_f_0(
#line 235 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_5,
#line 235 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_6,
#line 235 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap_3)
#line 235 "multi_map.m"
{
#line 551 "multi_map.m"
  {
#line 551 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 551 "multi_map.m"
    MR_Word mercury__multi_map__AssocList_4;
#line 551 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_7_9 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 551 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_8_10;
#line 551 "multi_map.m"
    MR_Word mercury__multi_map__V_5_15;
#line 409 "tree234.opt"
    MR_Word mercury__multi_map__conv0_AssocList_4;

#line 2576 "multi_map.c"
    {
#line 2578 "multi_map.c"
      mercury__multi_map__TypeInfo_8_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2580 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_10, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_7_9));
#line 2582 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_10, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_6));
#line 2584 "multi_map.c"
    }
#line 408 "tree234.opt"
    mercury__multi_map__V_5_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 409 "tree234.opt"
    {
#line 409 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__multi_map__TypeInfo_for_K_5, mercury__multi_map__TypeInfo_8_10, (MR_Word) mercury__multi_map__MultiMap_3, (MR_Word) mercury__multi_map__V_5_15, &mercury__multi_map__conv0_AssocList_4);
    }
#line 409 "tree234.opt"
    mercury__multi_map__AssocList_4 = (MR_Word) mercury__multi_map__conv0_AssocList_4;
#line 551 "multi_map.m"
    return mercury__multi_map__AssocList_4;
#line 551 "multi_map.m"
  }
#line 235 "multi_map.m"
}

#line 229 "multi_map.m"
void MR_CALL 
mercury__multi_map__from_flat_assoc_list_2_p_0(
#line 229 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_7,
#line 229 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_8,
#line 229 "multi_map.m"
  MR_Word mercury__multi_map__AssocList_3,
#line 229 "multi_map.m"
  MR_Word * mercury__multi_map__MultiMap_4)
#line 229 "multi_map.m"
{
#line 536 "multi_map.m"
  {
#line 536 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 536 "multi_map.m"
    MR_Word mercury__multi_map__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 537 "multi_map.m"
    {
#line 537 "multi_map.m"
      mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__list_0(mercury__multi_map__TypeInfo_for_K_7, mercury__multi_map__TypeInfo_for_V_8, mercury__multi_map__AssocList_3, mercury__multi_map__V_6_6, mercury__multi_map__MultiMap_4);
    }
#line 536 "multi_map.m"
  }
#line 229 "multi_map.m"
}

#line 228 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__from_flat_assoc_list_1_f_0(
#line 228 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_5,
#line 228 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_6,
#line 228 "multi_map.m"
  MR_Word mercury__multi_map__AssocList_3)
#line 228 "multi_map.m"
{
#line 534 "multi_map.m"
  {
#line 534 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 534 "multi_map.m"
    MR_Word mercury__multi_map__MultiMap_4;

#line 534 "multi_map.m"
    {
#line 534 "multi_map.m"
      mercury__multi_map__from_flat_assoc_list_2_p_0(mercury__multi_map__TypeInfo_for_K_5, mercury__multi_map__TypeInfo_for_V_6, mercury__multi_map__AssocList_3, &mercury__multi_map__MultiMap_4);
    }
#line 534 "multi_map.m"
    return mercury__multi_map__MultiMap_4;
#line 534 "multi_map.m"
  }
#line 228 "multi_map.m"
}

#line 223 "multi_map.m"
void MR_CALL 
mercury__multi_map__to_flat_assoc_list_2_p_0(
#line 223 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_8,
#line 223 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_9,
#line 223 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap_3,
#line 223 "multi_map.m"
  MR_Word * mercury__multi_map__AssocList_4)
#line 223 "multi_map.m"
{
#line 520 "multi_map.m"
  {
#line 520 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 520 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_14_14 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
#line 520 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_15_15;
#line 520 "multi_map.m"
    MR_Word mercury__multi_map__Cord_5;
#line 520 "multi_map.m"
    MR_Word mercury__multi_map__V_7_7;
#line 522 "multi_map.m"
    MR_Word mercury__multi_map__conv0_AssocList_4;

#line 2690 "multi_map.c"
    {
#line 2692 "multi_map.c"
      mercury__multi_map__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
#line 2694 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_15_15, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_14_14));
#line 2696 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_15_15, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_K_8));
#line 2698 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_15_15, 2) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_9));
#line 2700 "multi_map.c"
    }
#line 280 "cord.opt"
    mercury__multi_map__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 174 "map.opt"
    {
#line 174 "map.opt"
      mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__tree234_0(mercury__multi_map__TypeInfo_for_K_8, mercury__multi_map__TypeInfo_for_V_9, mercury__multi_map__MultiMap_3, mercury__multi_map__V_7_7, &mercury__multi_map__Cord_5);
    }
#line 522 "multi_map.m"
    {
#line 522 "multi_map.m"
      mercury__multi_map__conv0_AssocList_4 = mercury__cord__list_1_f_0(mercury__multi_map__TypeInfo_15_15, (MR_Word) mercury__multi_map__Cord_5);
    }
#line 522 "multi_map.m"
    *mercury__multi_map__AssocList_4 = (MR_Word) mercury__multi_map__conv0_AssocList_4;
#line 520 "multi_map.m"
  }
#line 223 "multi_map.m"
}

#line 222 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__to_flat_assoc_list_1_f_0(
#line 222 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_5,
#line 222 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_6,
#line 222 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap_3)
#line 222 "multi_map.m"
{
#line 518 "multi_map.m"
  {
#line 518 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 518 "multi_map.m"
    MR_Word mercury__multi_map__AssocList_4;

#line 518 "multi_map.m"
    {
#line 518 "multi_map.m"
      mercury__multi_map__to_flat_assoc_list_2_p_0(mercury__multi_map__TypeInfo_for_K_5, mercury__multi_map__TypeInfo_for_V_6, mercury__multi_map__MultiMap_3, &mercury__multi_map__AssocList_4);
    }
#line 518 "multi_map.m"
    return mercury__multi_map__AssocList_4;
#line 518 "multi_map.m"
  }
#line 222 "multi_map.m"
}

#line 216 "multi_map.m"
void MR_CALL 
mercury__multi_map__optimize_2_p_0(
#line 216 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_5,
#line 216 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_6,
#line 216 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap0_3,
#line 216 "multi_map.m"
  MR_Word * mercury__multi_map__MultiMap_4)
#line 216 "multi_map.m"
{
#line 421 "map.opt"
  {
#line 421 "map.opt"
    MR_bool mercury__multi_map__succeeded;

#line 421 "map.opt"
    *mercury__multi_map__MultiMap_4 = mercury__multi_map__MultiMap0_3;
#line 421 "map.opt"
  }
#line 216 "multi_map.m"
}

#line 215 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__optimize_1_f_0(
#line 215 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_5,
#line 215 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_6,
#line 215 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap0_3)
#line 215 "multi_map.m"
{
#line 421 "map.opt"
  {
#line 421 "map.opt"
    MR_bool mercury__multi_map__succeeded;
#line 421 "map.opt"
    MR_Word mercury__multi_map__MultiMap_4 = mercury__multi_map__MultiMap0_3;

#line 421 "map.opt"
    return mercury__multi_map__MultiMap_4;
#line 421 "map.opt"
  }
#line 215 "multi_map.m"
}

#line 204 "multi_map.m"
void MR_CALL 
mercury__multi_map__merge_3_p_0(
#line 204 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_10,
#line 204 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_11,
#line 204 "multi_map.m"
  MR_Word mercury__multi_map__M0_4,
#line 204 "multi_map.m"
  MR_Word mercury__multi_map__M1_5,
#line 204 "multi_map.m"
  MR_Word * mercury__multi_map__M_6)
#line 204 "multi_map.m"
{
#line 464 "multi_map.m"
  {
#line 464 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 464 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_7_14 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 464 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_8_37;
#line 464 "multi_map.m"
    MR_Word mercury__multi_map__ML0_7;
#line 464 "multi_map.m"
    MR_Word mercury__multi_map__ML1_8;
#line 464 "multi_map.m"
    MR_Word mercury__multi_map__ML_9;
#line 464 "multi_map.m"
    MR_Word mercury__multi_map__V_5_20;
#line 464 "multi_map.m"
    MR_Word mercury__multi_map__V_5_31;
#line 409 "tree234.opt"
    MR_Word mercury__multi_map__conv0_ML0_7;
#line 409 "tree234.opt"
    MR_Word mercury__multi_map__conv1_ML1_8;
#line 258 "map.opt"
    MR_Word mercury__multi_map__conv2_M_6;

#line 2841 "multi_map.c"
    {
#line 2843 "multi_map.c"
      mercury__multi_map__TypeInfo_8_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2845 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_37, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_7_14));
#line 2847 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_37, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_11));
#line 2849 "multi_map.c"
    }
#line 408 "tree234.opt"
    mercury__multi_map__V_5_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 409 "tree234.opt"
    {
#line 409 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__multi_map__TypeInfo_for_K_10, mercury__multi_map__TypeInfo_8_37, (MR_Word) mercury__multi_map__M0_4, (MR_Word) mercury__multi_map__V_5_20, &mercury__multi_map__conv0_ML0_7);
    }
#line 409 "tree234.opt"
    mercury__multi_map__ML0_7 = (MR_Word) mercury__multi_map__conv0_ML0_7;
#line 408 "tree234.opt"
    mercury__multi_map__V_5_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 409 "tree234.opt"
    {
#line 409 "tree234.opt"
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__multi_map__TypeInfo_for_K_10, mercury__multi_map__TypeInfo_8_37, (MR_Word) mercury__multi_map__M1_5, (MR_Word) mercury__multi_map__V_5_31, &mercury__multi_map__conv1_ML1_8);
    }
#line 409 "tree234.opt"
    mercury__multi_map__ML1_8 = (MR_Word) mercury__multi_map__conv1_ML1_8;
#line 467 "multi_map.m"
    {
#line 467 "multi_map.m"
      mercury__multi_map__assoc_list_merge_3_p_0(mercury__multi_map__TypeInfo_for_K_10, mercury__multi_map__TypeInfo_for_V_11, mercury__multi_map__ML0_7, mercury__multi_map__ML1_8, &mercury__multi_map__ML_9);
    }
#line 258 "map.opt"
    {
#line 258 "map.opt"
      mercury__tree234__from_sorted_assoc_list_2_p_0(mercury__multi_map__TypeInfo_for_K_10, mercury__multi_map__TypeInfo_8_37, (MR_Word) mercury__multi_map__ML_9, &mercury__multi_map__conv2_M_6);
    }
#line 258 "map.opt"
    *mercury__multi_map__M_6 = (MR_Word) mercury__multi_map__conv2_M_6;
#line 464 "multi_map.m"
  }
#line 204 "multi_map.m"
}

#line 202 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__merge_2_f_0(
#line 202 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_7,
#line 202 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_8,
#line 202 "multi_map.m"
  MR_Word mercury__multi_map__MultiMapA_4,
#line 202 "multi_map.m"
  MR_Word mercury__multi_map__MultiMapB_5)
#line 202 "multi_map.m"
{
#line 462 "multi_map.m"
  {
#line 462 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 462 "multi_map.m"
    MR_Word mercury__multi_map__MultiMap_6;

#line 462 "multi_map.m"
    {
#line 462 "multi_map.m"
      mercury__multi_map__merge_3_p_0(mercury__multi_map__TypeInfo_for_K_7, mercury__multi_map__TypeInfo_for_V_8, mercury__multi_map__MultiMapA_4, mercury__multi_map__MultiMapB_5, &mercury__multi_map__MultiMap_6);
    }
#line 462 "multi_map.m"
    return mercury__multi_map__MultiMap_6;
#line 462 "multi_map.m"
  }
#line 202 "multi_map.m"
}

#line 187 "multi_map.m"
void MR_CALL 
mercury__multi_map__select_3_p_0(
#line 187 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_7,
#line 187 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_8,
#line 187 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap0_4,
#line 187 "multi_map.m"
  MR_Word mercury__multi_map__KeySet_5,
#line 187 "multi_map.m"
  MR_Word * mercury__multi_map__MultiMap_6)
#line 187 "multi_map.m"
{
#line 457 "multi_map.m"
  {
#line 457 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 457 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_9_9 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 457 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_10_10;
#line 457 "multi_map.m"
    MR_Word mercury__multi_map__V_7_14;
#line 457 "multi_map.m"
    MR_Word mercury__multi_map__V_8_15;
#line 463 "map.opt"
    MR_Word mercury__multi_map__conv0_MultiMap_6;

#line 2948 "multi_map.c"
    {
#line 2950 "multi_map.c"
      mercury__multi_map__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 2952 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_10, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_9_9));
#line 2954 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_10, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_8));
#line 2956 "multi_map.c"
    }
#line 271 "set_ordlist.opt"
    mercury__multi_map__V_7_14 = (MR_Word) mercury__multi_map__KeySet_5;
#line 243 "tree234.opt"
    mercury__multi_map__V_8_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 463 "map.opt"
    {
#line 463 "map.opt"
      mercury__map__select_loop_4_p_0(mercury__multi_map__TypeInfo_for_K_7, mercury__multi_map__TypeInfo_10_10, mercury__multi_map__V_7_14, (MR_Word) mercury__multi_map__MultiMap0_4, (MR_Word) mercury__multi_map__V_8_15, &mercury__multi_map__conv0_MultiMap_6);
    }
#line 463 "map.opt"
    *mercury__multi_map__MultiMap_6 = (MR_Word) mercury__multi_map__conv0_MultiMap_6;
#line 457 "multi_map.m"
  }
#line 187 "multi_map.m"
}

#line 186 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__select_2_f_0(
#line 186 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_7,
#line 186 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_8,
#line 186 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap0_4,
#line 186 "multi_map.m"
  MR_Word mercury__multi_map__KeySet_5)
#line 186 "multi_map.m"
{
#line 457 "multi_map.m"
  {
#line 457 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 457 "multi_map.m"
    MR_Word mercury__multi_map__MultiMap_6;
#line 457 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_9_12 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 457 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_10_13;
#line 457 "multi_map.m"
    MR_Word mercury__multi_map__V_7_17;
#line 457 "multi_map.m"
    MR_Word mercury__multi_map__V_8_18;
#line 463 "map.opt"
    MR_Word mercury__multi_map__conv0_MultiMap_6;

#line 3004 "multi_map.c"
    {
#line 3006 "multi_map.c"
      mercury__multi_map__TypeInfo_10_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3008 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_13, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_9_12));
#line 3010 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_13, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_8));
#line 3012 "multi_map.c"
    }
#line 271 "set_ordlist.opt"
    mercury__multi_map__V_7_17 = (MR_Word) mercury__multi_map__KeySet_5;
#line 243 "tree234.opt"
    mercury__multi_map__V_8_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 463 "map.opt"
    {
#line 463 "map.opt"
      mercury__map__select_loop_4_p_0(mercury__multi_map__TypeInfo_for_K_7, mercury__multi_map__TypeInfo_10_13, mercury__multi_map__V_7_17, (MR_Word) mercury__multi_map__MultiMap0_4, (MR_Word) mercury__multi_map__V_8_18, &mercury__multi_map__conv0_MultiMap_6);
    }
#line 463 "map.opt"
    mercury__multi_map__MultiMap_6 = (MR_Word) mercury__multi_map__conv0_MultiMap_6;
#line 457 "multi_map.m"
    return mercury__multi_map__MultiMap_6;
#line 457 "multi_map.m"
  }
#line 186 "multi_map.m"
}

#line 177 "multi_map.m"
MR_bool MR_CALL 
mercury__multi_map__remove_smallest_4_p_0(
#line 177 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_9,
#line 177 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_10,
#line 177 "multi_map.m"
  MR_Box * mercury__multi_map__MultiMap0_5,
#line 177 "multi_map.m"
  MR_Word * mercury__multi_map__Key_6,
#line 177 "multi_map.m"
  MR_Word mercury__multi_map__Values_7,
#line 177 "multi_map.m"
  MR_Word * mercury__multi_map__MultiMap_8)
#line 177 "multi_map.m"
{
#line 449 "multi_map.m"
  {
#line 449 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 449 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_11_11 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 449 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_12_12;
#line 398 "tree234.opt"
    MR_Word mercury__multi_map__V_9_21;
#line 398 "tree234.opt"
    MR_Box mercury__multi_map__conv1_Key_6;
#line 398 "tree234.opt"
    MR_Word mercury__multi_map__conv0_MultiMap_8;

#line 3064 "multi_map.c"
    {
#line 3066 "multi_map.c"
      mercury__multi_map__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3068 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_12_12, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_11_11));
#line 3070 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_12_12, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_10));
#line 3072 "multi_map.c"
    }
#line 398 "tree234.opt"
    {
#line 398 "tree234.opt"
      mercury__multi_map__succeeded = mercury__tree234__remove_smallest_2_5_p_0(mercury__multi_map__TypeInfo_for_K_9, mercury__multi_map__TypeInfo_12_12, (MR_Word) mercury__multi_map__Values_7, mercury__multi_map__MultiMap0_5, &mercury__multi_map__conv1_Key_6, &mercury__multi_map__conv0_MultiMap_8, &mercury__multi_map__V_9_21);
    }
#line 398 "tree234.opt"
    if (mercury__multi_map__succeeded)
#line 398 "tree234.opt"
      {
#line 398 "tree234.opt"
        *mercury__multi_map__Key_6 = ((MR_Word) mercury__multi_map__conv1_Key_6);
#line 398 "tree234.opt"
        *mercury__multi_map__MultiMap_8 = (MR_Word) mercury__multi_map__conv0_MultiMap_8;
#line 398 "tree234.opt"
        mercury__multi_map__succeeded = MR_TRUE;
#line 398 "tree234.opt"
      }
#line 449 "multi_map.m"
    return mercury__multi_map__succeeded;
#line 449 "multi_map.m"
  }
#line 177 "multi_map.m"
}

#line 171 "multi_map.m"
void MR_CALL 
mercury__multi_map__det_remove_4_p_0(
#line 171 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_9,
#line 171 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_10,
#line 171 "multi_map.m"
  MR_Box mercury__multi_map__MultiMap0_5,
#line 171 "multi_map.m"
  MR_Word * mercury__multi_map__Key_6,
#line 171 "multi_map.m"
  MR_Word mercury__multi_map__Values_7,
#line 171 "multi_map.m"
  MR_Word * mercury__multi_map__MultiMap_8)
#line 171 "multi_map.m"
{
#line 446 "multi_map.m"
  {
#line 446 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 446 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_11_11 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 446 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_12_12;
#line 446 "multi_map.m"
    MR_Box mercury__multi_map__conv1_Key_6;
#line 446 "multi_map.m"
    MR_Word mercury__multi_map__conv0_MultiMap_8;

#line 3128 "multi_map.c"
    {
#line 3130 "multi_map.c"
      mercury__multi_map__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3132 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_12_12, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_11_11));
#line 3134 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_12_12, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_10));
#line 3136 "multi_map.c"
    }
#line 446 "multi_map.m"
    {
#line 446 "multi_map.m"
      mercury__map__det_remove_4_p_0(mercury__multi_map__TypeInfo_for_K_9, mercury__multi_map__TypeInfo_12_12, mercury__multi_map__MultiMap0_5, &mercury__multi_map__conv1_Key_6, (MR_Word) mercury__multi_map__Values_7, &mercury__multi_map__conv0_MultiMap_8);
    }
#line 446 "multi_map.m"
    *mercury__multi_map__Key_6 = ((MR_Word) mercury__multi_map__conv1_Key_6);
#line 446 "multi_map.m"
    *mercury__multi_map__MultiMap_8 = (MR_Word) mercury__multi_map__conv0_MultiMap_8;
#line 446 "multi_map.m"
  }
#line 171 "multi_map.m"
}

#line 164 "multi_map.m"
MR_bool MR_CALL 
mercury__multi_map__remove_4_p_0(
#line 164 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_9,
#line 164 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_10,
#line 164 "multi_map.m"
  MR_Box mercury__multi_map__MultiMap0_5,
#line 164 "multi_map.m"
  MR_Word * mercury__multi_map__Key_6,
#line 164 "multi_map.m"
  MR_Word mercury__multi_map__Values_7,
#line 164 "multi_map.m"
  MR_Word * mercury__multi_map__MultiMap_8)
#line 164 "multi_map.m"
{
#line 443 "multi_map.m"
  {
#line 443 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 443 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_11_11 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 443 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_12_12;
#line 395 "tree234.opt"
    MR_Word mercury__multi_map__V_9_21;
#line 395 "tree234.opt"
    MR_Box mercury__multi_map__conv1_Key_6;
#line 395 "tree234.opt"
    MR_Word mercury__multi_map__conv0_MultiMap_8;

#line 3184 "multi_map.c"
    {
#line 3186 "multi_map.c"
      mercury__multi_map__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3188 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_12_12, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_11_11));
#line 3190 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_12_12, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_10));
#line 3192 "multi_map.c"
    }
#line 395 "tree234.opt"
    {
#line 395 "tree234.opt"
      mercury__multi_map__succeeded = mercury__tree234__remove_2_5_p_0(mercury__multi_map__TypeInfo_for_K_9, mercury__multi_map__TypeInfo_12_12, (MR_Word) mercury__multi_map__Values_7, mercury__multi_map__MultiMap0_5, &mercury__multi_map__conv1_Key_6, &mercury__multi_map__conv0_MultiMap_8, &mercury__multi_map__V_9_21);
    }
#line 395 "tree234.opt"
    if (mercury__multi_map__succeeded)
#line 395 "tree234.opt"
      {
#line 395 "tree234.opt"
        *mercury__multi_map__Key_6 = ((MR_Word) mercury__multi_map__conv1_Key_6);
#line 395 "tree234.opt"
        *mercury__multi_map__MultiMap_8 = (MR_Word) mercury__multi_map__conv0_MultiMap_8;
#line 395 "tree234.opt"
        mercury__multi_map__succeeded = MR_TRUE;
#line 395 "tree234.opt"
      }
#line 443 "multi_map.m"
    return mercury__multi_map__succeeded;
#line 443 "multi_map.m"
  }
#line 164 "multi_map.m"
}

#line 157 "multi_map.m"
void MR_CALL 
mercury__multi_map__delete_4_p_0(
#line 157 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_16,
#line 157 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_17,
#line 157 "multi_map.m"
  MR_Box mercury__multi_map__Key_5,
#line 157 "multi_map.m"
  MR_Box mercury__multi_map__Value_6,
#line 157 "multi_map.m"
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_12,
#line 157 "multi_map.m"
  MR_Word * mercury__multi_map__STATE_VARIABLE_MultiMap_13)
#line 157 "multi_map.m"
{
#line 438 "multi_map.m"
  {
#line 438 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 438 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_19_19;
#line 438 "multi_map.m"
    MR_Word mercury__multi_map__Values_9;
#line 428 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_18_18 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 428 "multi_map.m"
    MR_Word mercury__multi_map__Values0_8;
#line 452 "map.opt"
    MR_Box mercury__multi_map__conv0_Values0_8;

#line 3250 "multi_map.c"
    {
#line 3252 "multi_map.c"
      mercury__multi_map__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3254 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_19_19, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_18_18));
#line 3256 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_19_19, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_17));
#line 3258 "multi_map.c"
    }
#line 452 "map.opt"
    {
#line 452 "map.opt"
      mercury__multi_map__succeeded = mercury__tree234__search_3_p_0(mercury__multi_map__TypeInfo_for_K_16, mercury__multi_map__TypeInfo_19_19, (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_12, mercury__multi_map__Key_5, &mercury__multi_map__conv0_Values0_8);
    }
#line 452 "map.opt"
    if (mercury__multi_map__succeeded)
#line 452 "map.opt"
      {
#line 452 "map.opt"
        mercury__multi_map__Values0_8 = ((MR_Word) mercury__multi_map__conv0_Values0_8);
#line 452 "map.opt"
        mercury__multi_map__succeeded = MR_TRUE;
#line 452 "map.opt"
      }
#line 428 "multi_map.m"
    if (mercury__multi_map__succeeded)
#line 428 "multi_map.m"
      {
#line 429 "multi_map.m"
        {
#line 429 "multi_map.m"
          mercury__list__delete_all_3_p_1(mercury__multi_map__TypeInfo_for_V_17, mercury__multi_map__Values0_8, mercury__multi_map__Value_6, &mercury__multi_map__Values_9);
        }
#line 429 "multi_map.m"
        mercury__multi_map__succeeded = MR_TRUE;
#line 428 "multi_map.m"
      }
#line 438 "multi_map.m"
    if (mercury__multi_map__succeeded)
#line 434 "multi_map.m"
      if ((mercury__multi_map__Values_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 79 "tree234.opt"
        {
#line 79 "tree234.opt"
          MR_Word mercury__multi_map__V_7_33;
#line 79 "tree234.opt"
          MR_Word mercury__multi_map__conv1_STATE_VARIABLE_MultiMap_13;

#line 79 "tree234.opt"
          {
#line 79 "tree234.opt"
            mercury__tree234__delete_2_4_p_0(mercury__multi_map__TypeInfo_for_K_16, mercury__multi_map__TypeInfo_19_19, (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_12, mercury__multi_map__Key_5, &mercury__multi_map__conv1_STATE_VARIABLE_MultiMap_13, &mercury__multi_map__V_7_33);
          }
#line 79 "tree234.opt"
          *mercury__multi_map__STATE_VARIABLE_MultiMap_13 = (MR_Word) mercury__multi_map__conv1_STATE_VARIABLE_MultiMap_13;
#line 79 "tree234.opt"
        }
#line 434 "multi_map.m"
      else
#line 476 "map.opt"
        {
#line 476 "map.opt"
          MR_Word mercury__multi_map__conv2_STATE_VARIABLE_MultiMap_13;

#line 476 "map.opt"
          {
#line 476 "map.opt"
            mercury__tree234__set_4_p_0(mercury__multi_map__TypeInfo_for_K_16, mercury__multi_map__TypeInfo_19_19, mercury__multi_map__Key_5, ((MR_Box) (mercury__multi_map__Values_9)), (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_12, &mercury__multi_map__conv2_STATE_VARIABLE_MultiMap_13);
          }
#line 476 "map.opt"
          *mercury__multi_map__STATE_VARIABLE_MultiMap_13 = (MR_Word) mercury__multi_map__conv2_STATE_VARIABLE_MultiMap_13;
#line 476 "map.opt"
        }
#line 438 "multi_map.m"
    else
#line 438 "multi_map.m"
      *mercury__multi_map__STATE_VARIABLE_MultiMap_13 = mercury__multi_map__STATE_VARIABLE_MultiMap_0_12;
#line 438 "multi_map.m"
  }
#line 157 "multi_map.m"
}

#line 156 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__delete_3_f_0(
#line 156 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_11,
#line 156 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_12,
#line 156 "multi_map.m"
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_8,
#line 156 "multi_map.m"
  MR_Box mercury__multi_map__Key_6,
#line 156 "multi_map.m"
  MR_Box mercury__multi_map__Value_7)
#line 156 "multi_map.m"
{
#line 424 "multi_map.m"
  {
#line 424 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 424 "multi_map.m"
    MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_9;

#line 424 "multi_map.m"
    {
#line 424 "multi_map.m"
      mercury__multi_map__delete_4_p_0(mercury__multi_map__TypeInfo_for_K_11, mercury__multi_map__TypeInfo_for_V_12, mercury__multi_map__Key_6, mercury__multi_map__Value_7, mercury__multi_map__STATE_VARIABLE_MultiMap_0_8, &mercury__multi_map__STATE_VARIABLE_MultiMap_9);
    }
#line 424 "multi_map.m"
    return mercury__multi_map__STATE_VARIABLE_MultiMap_9;
#line 424 "multi_map.m"
  }
#line 156 "multi_map.m"
}

#line 150 "multi_map.m"
void MR_CALL 
mercury__multi_map__delete_3_p_0(
#line 150 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_9,
#line 150 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_10,
#line 150 "multi_map.m"
  MR_Box mercury__multi_map__Key_4,
#line 150 "multi_map.m"
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_6,
#line 150 "multi_map.m"
  MR_Word * mercury__multi_map__STATE_VARIABLE_MultiMap_7)
#line 150 "multi_map.m"
{
#line 421 "multi_map.m"
  {
#line 421 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 421 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_11_11 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 421 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_12_12;
#line 79 "tree234.opt"
    MR_Word mercury__multi_map__V_7_19;
#line 79 "tree234.opt"
    MR_Word mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_7;

#line 3395 "multi_map.c"
    {
#line 3397 "multi_map.c"
      mercury__multi_map__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3399 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_12_12, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_11_11));
#line 3401 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_12_12, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_10));
#line 3403 "multi_map.c"
    }
#line 79 "tree234.opt"
    {
#line 79 "tree234.opt"
      mercury__tree234__delete_2_4_p_0(mercury__multi_map__TypeInfo_for_K_9, mercury__multi_map__TypeInfo_12_12, (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_6, mercury__multi_map__Key_4, &mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_7, &mercury__multi_map__V_7_19);
    }
#line 79 "tree234.opt"
    *mercury__multi_map__STATE_VARIABLE_MultiMap_7 = (MR_Word) mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_7;
#line 421 "multi_map.m"
  }
#line 150 "multi_map.m"
}

#line 149 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__delete_2_f_0(
#line 149 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_9,
#line 149 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_10,
#line 149 "multi_map.m"
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_6,
#line 149 "multi_map.m"
  MR_Box mercury__multi_map__Key_5)
#line 149 "multi_map.m"
{
#line 421 "multi_map.m"
  {
#line 421 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 421 "multi_map.m"
    MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_7;
#line 421 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_11_16 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 421 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_12_17;
#line 79 "tree234.opt"
    MR_Word mercury__multi_map__V_7_24;
#line 79 "tree234.opt"
    MR_Word mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_7;

#line 3445 "multi_map.c"
    {
#line 3447 "multi_map.c"
      mercury__multi_map__TypeInfo_12_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3449 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_12_17, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_11_16));
#line 3451 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_12_17, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_10));
#line 3453 "multi_map.c"
    }
#line 79 "tree234.opt"
    {
#line 79 "tree234.opt"
      mercury__tree234__delete_2_4_p_0(mercury__multi_map__TypeInfo_for_K_9, mercury__multi_map__TypeInfo_12_17, (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_6, mercury__multi_map__Key_5, &mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_7, &mercury__multi_map__V_7_24);
    }
#line 79 "tree234.opt"
    mercury__multi_map__STATE_VARIABLE_MultiMap_7 = (MR_Word) mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_7;
#line 421 "multi_map.m"
    return mercury__multi_map__STATE_VARIABLE_MultiMap_7;
#line 421 "multi_map.m"
  }
#line 149 "multi_map.m"
}

#line 141 "multi_map.m"
void MR_CALL 
mercury__multi_map__reverse_set_4_p_0(
#line 141 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_11,
#line 141 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_12,
#line 141 "multi_map.m"
  MR_Box mercury__multi_map__Value_5,
#line 141 "multi_map.m"
  MR_Box mercury__multi_map__Key_6,
#line 141 "multi_map.m"
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_8,
#line 141 "multi_map.m"
  MR_Word * mercury__multi_map__STATE_VARIABLE_MultiMap_9)
#line 141 "multi_map.m"
{
#line 413 "multi_map.m"
  {
#line 413 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;

#line 413 "multi_map.m"
    {
#line 413 "multi_map.m"
      mercury__multi_map__set_4_p_0(mercury__multi_map__TypeInfo_for_K_12, mercury__multi_map__TypeInfo_for_V_11, mercury__multi_map__Key_6, mercury__multi_map__Value_5, mercury__multi_map__STATE_VARIABLE_MultiMap_0_8, mercury__multi_map__STATE_VARIABLE_MultiMap_9);
    }
#line 413 "multi_map.m"
  }
#line 141 "multi_map.m"
}

#line 140 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__reverse_set_3_f_0(
#line 140 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_11,
#line 140 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_12,
#line 140 "multi_map.m"
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_8,
#line 140 "multi_map.m"
  MR_Box mercury__multi_map__Value_6,
#line 140 "multi_map.m"
  MR_Box mercury__multi_map__Key_7)
#line 140 "multi_map.m"
{
#line 413 "multi_map.m"
  {
#line 413 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 413 "multi_map.m"
    MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_9;

#line 413 "multi_map.m"
    {
#line 413 "multi_map.m"
      mercury__multi_map__set_4_p_0(mercury__multi_map__TypeInfo_for_K_11, mercury__multi_map__TypeInfo_for_V_12, mercury__multi_map__Key_7, mercury__multi_map__Value_6, mercury__multi_map__STATE_VARIABLE_MultiMap_0_8, &mercury__multi_map__STATE_VARIABLE_MultiMap_9);
    }
#line 413 "multi_map.m"
    return mercury__multi_map__STATE_VARIABLE_MultiMap_9;
#line 413 "multi_map.m"
  }
#line 140 "multi_map.m"
}

#line 135 "multi_map.m"
void MR_CALL 
mercury__multi_map__add_4_p_0(
#line 135 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_11,
#line 135 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_12,
#line 135 "multi_map.m"
  MR_Box mercury__multi_map__Key_5,
#line 135 "multi_map.m"
  MR_Box mercury__multi_map__Value_6,
#line 135 "multi_map.m"
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_8,
#line 135 "multi_map.m"
  MR_Word * mercury__multi_map__STATE_VARIABLE_MultiMap_9)
#line 135 "multi_map.m"
{
#line 407 "multi_map.m"
  {
#line 407 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;

#line 407 "multi_map.m"
    {
#line 407 "multi_map.m"
      mercury__multi_map__set_4_p_0(mercury__multi_map__TypeInfo_for_K_11, mercury__multi_map__TypeInfo_for_V_12, mercury__multi_map__Key_5, mercury__multi_map__Value_6, mercury__multi_map__STATE_VARIABLE_MultiMap_0_8, mercury__multi_map__STATE_VARIABLE_MultiMap_9);
    }
#line 407 "multi_map.m"
  }
#line 135 "multi_map.m"
}

#line 134 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__add_3_f_0(
#line 134 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_11,
#line 134 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_12,
#line 134 "multi_map.m"
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_8,
#line 134 "multi_map.m"
  MR_Box mercury__multi_map__Key_6,
#line 134 "multi_map.m"
  MR_Box mercury__multi_map__Value_7)
#line 134 "multi_map.m"
{
#line 404 "multi_map.m"
  {
#line 404 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 404 "multi_map.m"
    MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_9;

#line 404 "multi_map.m"
    {
#line 404 "multi_map.m"
      mercury__multi_map__set_4_p_0(mercury__multi_map__TypeInfo_for_K_11, mercury__multi_map__TypeInfo_for_V_12, mercury__multi_map__Key_6, mercury__multi_map__Value_7, mercury__multi_map__STATE_VARIABLE_MultiMap_0_8, &mercury__multi_map__STATE_VARIABLE_MultiMap_9);
    }
#line 404 "multi_map.m"
    return mercury__multi_map__STATE_VARIABLE_MultiMap_9;
#line 404 "multi_map.m"
  }
#line 134 "multi_map.m"
}

#line 132 "multi_map.m"
void MR_CALL 
mercury__multi_map__set_4_p_0(
#line 132 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_16,
#line 132 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_17,
#line 132 "multi_map.m"
  MR_Box mercury__multi_map__Key_5,
#line 132 "multi_map.m"
  MR_Box mercury__multi_map__Value_6,
#line 132 "multi_map.m"
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_10,
#line 132 "multi_map.m"
  MR_Word * mercury__multi_map__STATE_VARIABLE_MultiMap_11)
#line 132 "multi_map.m"
{
#line 399 "multi_map.m"
  {
#line 399 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 399 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_19_19;
#line 399 "multi_map.m"
    MR_Word mercury__multi_map__Values0_8;
#line 396 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_18_18 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 452 "map.opt"
    MR_Box mercury__multi_map__conv0_Values0_8;

#line 3631 "multi_map.c"
    {
#line 3633 "multi_map.c"
      mercury__multi_map__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3635 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_19_19, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_18_18));
#line 3637 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_19_19, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_17));
#line 3639 "multi_map.c"
    }
#line 452 "map.opt"
    {
#line 452 "map.opt"
      mercury__multi_map__succeeded = mercury__tree234__search_3_p_0(mercury__multi_map__TypeInfo_for_K_16, mercury__multi_map__TypeInfo_19_19, (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_10, mercury__multi_map__Key_5, &mercury__multi_map__conv0_Values0_8);
    }
#line 452 "map.opt"
    if (mercury__multi_map__succeeded)
#line 452 "map.opt"
      {
#line 452 "map.opt"
        mercury__multi_map__Values0_8 = ((MR_Word) mercury__multi_map__conv0_Values0_8);
#line 452 "map.opt"
        mercury__multi_map__succeeded = MR_TRUE;
#line 452 "map.opt"
      }
#line 399 "multi_map.m"
    if (mercury__multi_map__succeeded)
#line 397 "multi_map.m"
      {
#line 397 "multi_map.m"
        MR_Word mercury__multi_map__Values_9;
#line 476 "map.opt"
        MR_Word mercury__multi_map__conv1_STATE_VARIABLE_MultiMap_11;

#line 397 "multi_map.m"
        {
#line 397 "multi_map.m"
          mercury__multi_map__Values_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 397 "multi_map.m"
          MR_hl_field(MR_mktag(1), mercury__multi_map__Values_9, 0) = mercury__multi_map__Value_6;
#line 397 "multi_map.m"
          MR_hl_field(MR_mktag(1), mercury__multi_map__Values_9, 1) = ((MR_Box) (mercury__multi_map__Values0_8));
#line 397 "multi_map.m"
        }
#line 476 "map.opt"
        {
#line 476 "map.opt"
          mercury__tree234__set_4_p_0(mercury__multi_map__TypeInfo_for_K_16, mercury__multi_map__TypeInfo_19_19, mercury__multi_map__Key_5, ((MR_Box) (mercury__multi_map__Values_9)), (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_10, &mercury__multi_map__conv1_STATE_VARIABLE_MultiMap_11);
        }
#line 476 "map.opt"
        *mercury__multi_map__STATE_VARIABLE_MultiMap_11 = (MR_Word) mercury__multi_map__conv1_STATE_VARIABLE_MultiMap_11;
#line 397 "multi_map.m"
      }
#line 399 "multi_map.m"
    else
#line 400 "multi_map.m"
      {
#line 400 "multi_map.m"
        MR_Word mercury__multi_map__TypeCtorInfo_22_22;
#line 400 "multi_map.m"
        MR_Word mercury__multi_map__TypeInfo_23_23;
#line 400 "multi_map.m"
        MR_Word mercury__multi_map__V_13_13;
#line 400 "multi_map.m"
        MR_Word mercury__multi_map__V_15_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 400 "multi_map.m"
        MR_Word mercury__multi_map__conv2_STATE_VARIABLE_MultiMap_11;

#line 400 "multi_map.m"
        {
#line 400 "multi_map.m"
          mercury__multi_map__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 400 "multi_map.m"
          MR_hl_field(MR_mktag(1), mercury__multi_map__V_13_13, 0) = mercury__multi_map__Value_6;
#line 400 "multi_map.m"
          MR_hl_field(MR_mktag(1), mercury__multi_map__V_13_13, 1) = ((MR_Box) (mercury__multi_map__V_15_15));
#line 400 "multi_map.m"
        }
#line 3709 "multi_map.c"
        mercury__multi_map__TypeCtorInfo_22_22 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 3711 "multi_map.c"
        {
#line 3713 "multi_map.c"
          mercury__multi_map__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3715 "multi_map.c"
          MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_23_23, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_22_22));
#line 3717 "multi_map.c"
          MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_23_23, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_17));
#line 3719 "multi_map.c"
        }
#line 400 "multi_map.m"
        {
#line 400 "multi_map.m"
          mercury__map__det_insert_4_p_0(mercury__multi_map__TypeInfo_for_K_16, mercury__multi_map__TypeInfo_23_23, mercury__multi_map__Key_5, ((MR_Box) (mercury__multi_map__V_13_13)), (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_10, &mercury__multi_map__conv2_STATE_VARIABLE_MultiMap_11);
        }
#line 400 "multi_map.m"
        *mercury__multi_map__STATE_VARIABLE_MultiMap_11 = (MR_Word) mercury__multi_map__conv2_STATE_VARIABLE_MultiMap_11;
#line 400 "multi_map.m"
      }
#line 399 "multi_map.m"
  }
#line 132 "multi_map.m"
}

#line 131 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__set_3_f_0(
#line 131 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_11,
#line 131 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_12,
#line 131 "multi_map.m"
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_8,
#line 131 "multi_map.m"
  MR_Box mercury__multi_map__Key_6,
#line 131 "multi_map.m"
  MR_Box mercury__multi_map__Value_7)
#line 131 "multi_map.m"
{
#line 393 "multi_map.m"
  {
#line 393 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 393 "multi_map.m"
    MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_9;

#line 393 "multi_map.m"
    {
#line 393 "multi_map.m"
      mercury__multi_map__set_4_p_0(mercury__multi_map__TypeInfo_for_K_11, mercury__multi_map__TypeInfo_for_V_12, mercury__multi_map__Key_6, mercury__multi_map__Value_7, mercury__multi_map__STATE_VARIABLE_MultiMap_0_8, &mercury__multi_map__STATE_VARIABLE_MultiMap_9);
    }
#line 393 "multi_map.m"
    return mercury__multi_map__STATE_VARIABLE_MultiMap_9;
#line 393 "multi_map.m"
  }
#line 131 "multi_map.m"
}

#line 125 "multi_map.m"
void MR_CALL 
mercury__multi_map__det_replace_4_p_0(
#line 125 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_11,
#line 125 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_12,
#line 125 "multi_map.m"
  MR_Box mercury__multi_map__Key_5,
#line 125 "multi_map.m"
  MR_Word mercury__multi_map__Values_6,
#line 125 "multi_map.m"
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_8,
#line 125 "multi_map.m"
  MR_Word * mercury__multi_map__STATE_VARIABLE_MultiMap_9)
#line 125 "multi_map.m"
{
#line 390 "multi_map.m"
  {
#line 390 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 390 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_13_13 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 390 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_14_14;
#line 390 "multi_map.m"
    MR_Word mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9;

#line 3797 "multi_map.c"
    {
#line 3799 "multi_map.c"
      mercury__multi_map__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3801 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_14_14, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_13_13));
#line 3803 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_14_14, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_12));
#line 3805 "multi_map.c"
    }
#line 390 "multi_map.m"
    {
#line 390 "multi_map.m"
      mercury__map__det_update_4_p_0(mercury__multi_map__TypeInfo_for_K_11, mercury__multi_map__TypeInfo_14_14, mercury__multi_map__Key_5, ((MR_Box) (mercury__multi_map__Values_6)), (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_8, &mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9);
    }
#line 390 "multi_map.m"
    *mercury__multi_map__STATE_VARIABLE_MultiMap_9 = (MR_Word) mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9;
#line 390 "multi_map.m"
  }
#line 125 "multi_map.m"
}

#line 124 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__det_replace_3_f_0(
#line 124 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_11,
#line 124 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_12,
#line 124 "multi_map.m"
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_8,
#line 124 "multi_map.m"
  MR_Box mercury__multi_map__Key_6,
#line 124 "multi_map.m"
  MR_Word mercury__multi_map__Values_7)
#line 124 "multi_map.m"
{
#line 390 "multi_map.m"
  {
#line 390 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 390 "multi_map.m"
    MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_9;
#line 390 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_13_19 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 390 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_14_20;
#line 390 "multi_map.m"
    MR_Word mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9;

#line 3847 "multi_map.c"
    {
#line 3849 "multi_map.c"
      mercury__multi_map__TypeInfo_14_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3851 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_14_20, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_13_19));
#line 3853 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_14_20, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_12));
#line 3855 "multi_map.c"
    }
#line 390 "multi_map.m"
    {
#line 390 "multi_map.m"
      mercury__map__det_update_4_p_0(mercury__multi_map__TypeInfo_for_K_11, mercury__multi_map__TypeInfo_14_20, mercury__multi_map__Key_6, ((MR_Box) (mercury__multi_map__Values_7)), (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_8, &mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9);
    }
#line 390 "multi_map.m"
    mercury__multi_map__STATE_VARIABLE_MultiMap_9 = (MR_Word) mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9;
#line 390 "multi_map.m"
    return mercury__multi_map__STATE_VARIABLE_MultiMap_9;
#line 390 "multi_map.m"
  }
#line 124 "multi_map.m"
}

#line 118 "multi_map.m"
MR_bool MR_CALL 
mercury__multi_map__replace_4_p_0(
#line 118 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_11,
#line 118 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_12,
#line 118 "multi_map.m"
  MR_Box mercury__multi_map__Key_5,
#line 118 "multi_map.m"
  MR_Word mercury__multi_map__Value_6,
#line 118 "multi_map.m"
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_8,
#line 118 "multi_map.m"
  MR_Word * mercury__multi_map__STATE_VARIABLE_MultiMap_9)
#line 118 "multi_map.m"
{
#line 384 "multi_map.m"
  {
#line 384 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 384 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_13_13 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 384 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_14_14;
#line 575 "map.opt"
    MR_Word mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9;

#line 3899 "multi_map.c"
    {
#line 3901 "multi_map.c"
      mercury__multi_map__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3903 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_14_14, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_13_13));
#line 3905 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_14_14, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_12));
#line 3907 "multi_map.c"
    }
#line 575 "map.opt"
    {
#line 575 "map.opt"
      mercury__multi_map__succeeded = mercury__tree234__update_4_p_0(mercury__multi_map__TypeInfo_for_K_11, mercury__multi_map__TypeInfo_14_14, mercury__multi_map__Key_5, ((MR_Box) (mercury__multi_map__Value_6)), (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_8, &mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9);
    }
#line 575 "map.opt"
    if (mercury__multi_map__succeeded)
#line 575 "map.opt"
      {
#line 575 "map.opt"
        *mercury__multi_map__STATE_VARIABLE_MultiMap_9 = (MR_Word) mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9;
#line 575 "map.opt"
        mercury__multi_map__succeeded = MR_TRUE;
#line 575 "map.opt"
      }
#line 384 "multi_map.m"
    return mercury__multi_map__succeeded;
#line 384 "multi_map.m"
  }
#line 118 "multi_map.m"
}

#line 112 "multi_map.m"
void MR_CALL 
mercury__multi_map__det_update_4_p_0(
#line 112 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_13,
#line 112 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_14,
#line 112 "multi_map.m"
  MR_Box mercury__multi_map__Key_5,
#line 112 "multi_map.m"
  MR_Box mercury__multi_map__Value_6,
#line 112 "multi_map.m"
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_8,
#line 112 "multi_map.m"
  MR_Word * mercury__multi_map__STATE_VARIABLE_MultiMap_9)
#line 112 "multi_map.m"
{
#line 379 "multi_map.m"
  {
#line 379 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 379 "multi_map.m"
    MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_10_10;
#line 368 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_15_23 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 368 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_16_24;
#line 368 "multi_map.m"
    MR_Word mercury__multi_map__Values0_20;
#line 368 "multi_map.m"
    MR_Word mercury__multi_map__Values_21;
#line 452 "map.opt"
    MR_Box mercury__multi_map__conv0_Values0_20;
#line 575 "map.opt"
    MR_Word mercury__multi_map__conv1_STATE_VARIABLE_MultiMap_10_10;

#line 3967 "multi_map.c"
    {
#line 3969 "multi_map.c"
      mercury__multi_map__TypeInfo_16_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 3971 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_16_24, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_15_23));
#line 3973 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_16_24, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_14));
#line 3975 "multi_map.c"
    }
#line 452 "map.opt"
    {
#line 452 "map.opt"
      mercury__multi_map__succeeded = mercury__tree234__search_3_p_0(mercury__multi_map__TypeInfo_for_K_13, mercury__multi_map__TypeInfo_16_24, (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_8, mercury__multi_map__Key_5, &mercury__multi_map__conv0_Values0_20);
    }
#line 452 "map.opt"
    if (mercury__multi_map__succeeded)
#line 452 "map.opt"
      {
#line 452 "map.opt"
        mercury__multi_map__Values0_20 = ((MR_Word) mercury__multi_map__conv0_Values0_20);
#line 452 "map.opt"
        mercury__multi_map__succeeded = MR_TRUE;
#line 452 "map.opt"
      }
#line 368 "multi_map.m"
    if (mercury__multi_map__succeeded)
#line 368 "multi_map.m"
      {
#line 370 "multi_map.m"
        {
#line 370 "multi_map.m"
          mercury__multi_map__Values_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 370 "multi_map.m"
          MR_hl_field(MR_mktag(1), mercury__multi_map__Values_21, 0) = mercury__multi_map__Value_6;
#line 370 "multi_map.m"
          MR_hl_field(MR_mktag(1), mercury__multi_map__Values_21, 1) = ((MR_Box) (mercury__multi_map__Values0_20));
#line 370 "multi_map.m"
        }
#line 575 "map.opt"
        {
#line 575 "map.opt"
          mercury__multi_map__succeeded = mercury__tree234__update_4_p_0(mercury__multi_map__TypeInfo_for_K_13, mercury__multi_map__TypeInfo_16_24, mercury__multi_map__Key_5, ((MR_Box) (mercury__multi_map__Values_21)), (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_8, &mercury__multi_map__conv1_STATE_VARIABLE_MultiMap_10_10);
        }
#line 575 "map.opt"
        if (mercury__multi_map__succeeded)
#line 575 "map.opt"
          {
#line 575 "map.opt"
            mercury__multi_map__STATE_VARIABLE_MultiMap_10_10 = (MR_Word) mercury__multi_map__conv1_STATE_VARIABLE_MultiMap_10_10;
#line 575 "map.opt"
            mercury__multi_map__succeeded = MR_TRUE;
#line 575 "map.opt"
          }
#line 368 "multi_map.m"
      }
#line 379 "multi_map.m"
    if (mercury__multi_map__succeeded)
#line 379 "multi_map.m"
      *mercury__multi_map__STATE_VARIABLE_MultiMap_9 = mercury__multi_map__STATE_VARIABLE_MultiMap_10_10;
#line 379 "multi_map.m"
    else
#line 380 "multi_map.m"
      {
#line 380 "multi_map.m"
        {
#line 380 "multi_map.m"
          mercury__require__report_lookup_error_2_p_0(mercury__multi_map__TypeInfo_for_K_13, (MR_String) "multi_map.det_update: key not found", mercury__multi_map__Key_5);
#line 380 "multi_map.m"
          return;
        }
#line 380 "multi_map.m"
      }
#line 379 "multi_map.m"
  }
#line 112 "multi_map.m"
}

#line 111 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__det_update_3_f_0(
#line 111 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_11,
#line 111 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_12,
#line 111 "multi_map.m"
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_8,
#line 111 "multi_map.m"
  MR_Box mercury__multi_map__Key_6,
#line 111 "multi_map.m"
  MR_Box mercury__multi_map__Value_7)
#line 111 "multi_map.m"
{
#line 374 "multi_map.m"
  {
#line 374 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 374 "multi_map.m"
    MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_9;

#line 374 "multi_map.m"
    {
#line 374 "multi_map.m"
      mercury__multi_map__det_update_4_p_0(mercury__multi_map__TypeInfo_for_K_11, mercury__multi_map__TypeInfo_for_V_12, mercury__multi_map__Key_6, mercury__multi_map__Value_7, mercury__multi_map__STATE_VARIABLE_MultiMap_0_8, &mercury__multi_map__STATE_VARIABLE_MultiMap_9);
    }
#line 374 "multi_map.m"
    return mercury__multi_map__STATE_VARIABLE_MultiMap_9;
#line 374 "multi_map.m"
  }
#line 111 "multi_map.m"
}

#line 105 "multi_map.m"
MR_bool MR_CALL 
mercury__multi_map__update_4_p_0(
#line 105 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_13,
#line 105 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_14,
#line 105 "multi_map.m"
  MR_Box mercury__multi_map__Key_5,
#line 105 "multi_map.m"
  MR_Box mercury__multi_map__Value_6,
#line 105 "multi_map.m"
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_10,
#line 105 "multi_map.m"
  MR_Word * mercury__multi_map__STATE_VARIABLE_MultiMap_11)
#line 105 "multi_map.m"
{
#line 368 "multi_map.m"
  {
#line 368 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 368 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_15_15 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 368 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_16_16;
#line 368 "multi_map.m"
    MR_Word mercury__multi_map__Values0_8;
#line 368 "multi_map.m"
    MR_Word mercury__multi_map__Values_9;
#line 452 "map.opt"
    MR_Box mercury__multi_map__conv0_Values0_8;
#line 575 "map.opt"
    MR_Word mercury__multi_map__conv1_STATE_VARIABLE_MultiMap_11;

#line 4113 "multi_map.c"
    {
#line 4115 "multi_map.c"
      mercury__multi_map__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4117 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_16_16, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_15_15));
#line 4119 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_16_16, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_14));
#line 4121 "multi_map.c"
    }
#line 452 "map.opt"
    {
#line 452 "map.opt"
      mercury__multi_map__succeeded = mercury__tree234__search_3_p_0(mercury__multi_map__TypeInfo_for_K_13, mercury__multi_map__TypeInfo_16_16, (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_10, mercury__multi_map__Key_5, &mercury__multi_map__conv0_Values0_8);
    }
#line 452 "map.opt"
    if (mercury__multi_map__succeeded)
#line 452 "map.opt"
      {
#line 452 "map.opt"
        mercury__multi_map__Values0_8 = ((MR_Word) mercury__multi_map__conv0_Values0_8);
#line 452 "map.opt"
        mercury__multi_map__succeeded = MR_TRUE;
#line 452 "map.opt"
      }
#line 368 "multi_map.m"
    if (mercury__multi_map__succeeded)
#line 368 "multi_map.m"
      {
#line 370 "multi_map.m"
        {
#line 370 "multi_map.m"
          mercury__multi_map__Values_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 370 "multi_map.m"
          MR_hl_field(MR_mktag(1), mercury__multi_map__Values_9, 0) = mercury__multi_map__Value_6;
#line 370 "multi_map.m"
          MR_hl_field(MR_mktag(1), mercury__multi_map__Values_9, 1) = ((MR_Box) (mercury__multi_map__Values0_8));
#line 370 "multi_map.m"
        }
#line 575 "map.opt"
        {
#line 575 "map.opt"
          mercury__multi_map__succeeded = mercury__tree234__update_4_p_0(mercury__multi_map__TypeInfo_for_K_13, mercury__multi_map__TypeInfo_16_16, mercury__multi_map__Key_5, ((MR_Box) (mercury__multi_map__Values_9)), (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_10, &mercury__multi_map__conv1_STATE_VARIABLE_MultiMap_11);
        }
#line 575 "map.opt"
        if (mercury__multi_map__succeeded)
#line 575 "map.opt"
          {
#line 575 "map.opt"
            *mercury__multi_map__STATE_VARIABLE_MultiMap_11 = (MR_Word) mercury__multi_map__conv1_STATE_VARIABLE_MultiMap_11;
#line 575 "map.opt"
            mercury__multi_map__succeeded = MR_TRUE;
#line 575 "map.opt"
          }
#line 368 "multi_map.m"
      }
#line 368 "multi_map.m"
    return mercury__multi_map__succeeded;
#line 368 "multi_map.m"
  }
#line 105 "multi_map.m"
}

#line 99 "multi_map.m"
void MR_CALL 
mercury__multi_map__det_insert_4_p_0(
#line 99 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_13,
#line 99 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_14,
#line 99 "multi_map.m"
  MR_Box mercury__multi_map__Key_5,
#line 99 "multi_map.m"
  MR_Box mercury__multi_map__Value_6,
#line 99 "multi_map.m"
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_8,
#line 99 "multi_map.m"
  MR_Word * mercury__multi_map__STATE_VARIABLE_MultiMap_9)
#line 99 "multi_map.m"
{
#line 365 "multi_map.m"
  {
#line 365 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 365 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_15_15;
#line 365 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_16_16;
#line 365 "multi_map.m"
    MR_Word mercury__multi_map__V_10_10;
#line 365 "multi_map.m"
    MR_Word mercury__multi_map__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 366 "multi_map.m"
    MR_Word mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9;

#line 366 "multi_map.m"
    {
#line 366 "multi_map.m"
      mercury__multi_map__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 366 "multi_map.m"
      MR_hl_field(MR_mktag(1), mercury__multi_map__V_10_10, 0) = mercury__multi_map__Value_6;
#line 366 "multi_map.m"
      MR_hl_field(MR_mktag(1), mercury__multi_map__V_10_10, 1) = ((MR_Box) (mercury__multi_map__V_12_12));
#line 366 "multi_map.m"
    }
#line 4218 "multi_map.c"
    mercury__multi_map__TypeCtorInfo_15_15 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 4220 "multi_map.c"
    {
#line 4222 "multi_map.c"
      mercury__multi_map__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4224 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_16_16, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_15_15));
#line 4226 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_16_16, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_14));
#line 4228 "multi_map.c"
    }
#line 366 "multi_map.m"
    {
#line 366 "multi_map.m"
      mercury__map__det_insert_4_p_0(mercury__multi_map__TypeInfo_for_K_13, mercury__multi_map__TypeInfo_16_16, mercury__multi_map__Key_5, ((MR_Box) (mercury__multi_map__V_10_10)), (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_8, &mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9);
    }
#line 366 "multi_map.m"
    *mercury__multi_map__STATE_VARIABLE_MultiMap_9 = (MR_Word) mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9;
#line 365 "multi_map.m"
  }
#line 99 "multi_map.m"
}

#line 98 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__det_insert_3_f_0(
#line 98 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_11,
#line 98 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_12,
#line 98 "multi_map.m"
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_8,
#line 98 "multi_map.m"
  MR_Box mercury__multi_map__Key_6,
#line 98 "multi_map.m"
  MR_Box mercury__multi_map__Value_7)
#line 98 "multi_map.m"
{
#line 365 "multi_map.m"
  {
#line 365 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 365 "multi_map.m"
    MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_9;
#line 365 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_15_21;
#line 365 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_16_22;
#line 365 "multi_map.m"
    MR_Word mercury__multi_map__V_18_18;
#line 365 "multi_map.m"
    MR_Word mercury__multi_map__V_20_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 366 "multi_map.m"
    MR_Word mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9;

#line 366 "multi_map.m"
    {
#line 366 "multi_map.m"
      mercury__multi_map__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 366 "multi_map.m"
      MR_hl_field(MR_mktag(1), mercury__multi_map__V_18_18, 0) = mercury__multi_map__Value_7;
#line 366 "multi_map.m"
      MR_hl_field(MR_mktag(1), mercury__multi_map__V_18_18, 1) = ((MR_Box) (mercury__multi_map__V_20_20));
#line 366 "multi_map.m"
    }
#line 4284 "multi_map.c"
    mercury__multi_map__TypeCtorInfo_15_21 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 4286 "multi_map.c"
    {
#line 4288 "multi_map.c"
      mercury__multi_map__TypeInfo_16_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4290 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_16_22, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_15_21));
#line 4292 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_16_22, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_12));
#line 4294 "multi_map.c"
    }
#line 366 "multi_map.m"
    {
#line 366 "multi_map.m"
      mercury__map__det_insert_4_p_0(mercury__multi_map__TypeInfo_for_K_11, mercury__multi_map__TypeInfo_16_22, mercury__multi_map__Key_6, ((MR_Box) (mercury__multi_map__V_18_18)), (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_8, &mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9);
    }
#line 366 "multi_map.m"
    mercury__multi_map__STATE_VARIABLE_MultiMap_9 = (MR_Word) mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9;
#line 365 "multi_map.m"
    return mercury__multi_map__STATE_VARIABLE_MultiMap_9;
#line 365 "multi_map.m"
  }
#line 98 "multi_map.m"
}

#line 92 "multi_map.m"
MR_bool MR_CALL 
mercury__multi_map__insert_4_p_0(
#line 92 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_13,
#line 92 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_14,
#line 92 "multi_map.m"
  MR_Box mercury__multi_map__Key_5,
#line 92 "multi_map.m"
  MR_Box mercury__multi_map__Value_6,
#line 92 "multi_map.m"
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_8,
#line 92 "multi_map.m"
  MR_Word * mercury__multi_map__STATE_VARIABLE_MultiMap_9)
#line 92 "multi_map.m"
{
#line 359 "multi_map.m"
  {
#line 359 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 359 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_15_15 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 359 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_16_16;
#line 359 "multi_map.m"
    MR_Word mercury__multi_map__V_10_10;
#line 359 "multi_map.m"
    MR_Word mercury__multi_map__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 270 "map.opt"
    MR_Word mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9;

#line 360 "multi_map.m"
    {
#line 360 "multi_map.m"
      mercury__multi_map__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 360 "multi_map.m"
      MR_hl_field(MR_mktag(1), mercury__multi_map__V_10_10, 0) = mercury__multi_map__Value_6;
#line 360 "multi_map.m"
      MR_hl_field(MR_mktag(1), mercury__multi_map__V_10_10, 1) = ((MR_Box) (mercury__multi_map__V_12_12));
#line 360 "multi_map.m"
    }
#line 4352 "multi_map.c"
    {
#line 4354 "multi_map.c"
      mercury__multi_map__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4356 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_16_16, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_15_15));
#line 4358 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_16_16, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_14));
#line 4360 "multi_map.c"
    }
#line 270 "map.opt"
    {
#line 270 "map.opt"
      mercury__multi_map__succeeded = mercury__tree234__insert_4_p_0(mercury__multi_map__TypeInfo_for_K_13, mercury__multi_map__TypeInfo_16_16, mercury__multi_map__Key_5, ((MR_Box) (mercury__multi_map__V_10_10)), (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_8, &mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9);
    }
#line 270 "map.opt"
    if (mercury__multi_map__succeeded)
#line 270 "map.opt"
      {
#line 270 "map.opt"
        *mercury__multi_map__STATE_VARIABLE_MultiMap_9 = (MR_Word) mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9;
#line 270 "map.opt"
        mercury__multi_map__succeeded = MR_TRUE;
#line 270 "map.opt"
      }
#line 359 "multi_map.m"
    return mercury__multi_map__succeeded;
#line 359 "multi_map.m"
  }
#line 92 "multi_map.m"
}

#line 400 "map.opt"
static void MR_CALL 
mercury__multi_map__inverse_search_3_p_0_2(
#line 400 "map.opt"
  void * mercury__multi_map__env_ptr_arg)
#line 400 "map.opt"
{
#line 400 "map.opt"
  {
#line 400 "map.opt"
    struct mercury__multi_map__inverse_search_3_p_0_env_0_s * mercury__multi_map__env_ptr = (struct mercury__multi_map__inverse_search_3_p_0_env_0_s *) mercury__multi_map__env_ptr_arg;

#line 400 "map.opt"
    (mercury__multi_map__env_ptr)->mercury__multi_map__inverse_search_3_p_0_env_0__ValueList_7 = ((MR_Word) (mercury__multi_map__env_ptr)->mercury__multi_map__inverse_search_3_p_0_env_0__conv0_ValueList_7);
#line 400 "map.opt"
    {
#line 400 "map.opt"
      mercury__multi_map__inverse_search_3_p_0_1(mercury__multi_map__env_ptr);
    }
#line 400 "map.opt"
  }
#line 400 "map.opt"
}

#line 353 "multi_map.m"
static void MR_CALL 
mercury__multi_map__inverse_search_3_p_0_1(
#line 353 "multi_map.m"
  void * mercury__multi_map__env_ptr_arg)
#line 353 "multi_map.m"
{
#line 353 "multi_map.m"
  {
#line 353 "multi_map.m"
    struct mercury__multi_map__inverse_search_3_p_0_env_0_s * mercury__multi_map__env_ptr = (struct mercury__multi_map__inverse_search_3_p_0_env_0_s *) mercury__multi_map__env_ptr_arg;

#line 355 "multi_map.m"
    {
#line 355 "multi_map.m"
      (mercury__multi_map__env_ptr)->mercury__multi_map__inverse_search_3_p_0_env_0__succeeded = mercury__list__member_2_p_0((mercury__multi_map__env_ptr)->mercury__multi_map__inverse_search_3_p_0_env_0__TypeInfo_for_V_9, (mercury__multi_map__env_ptr)->mercury__multi_map__inverse_search_3_p_0_env_0__Value_5, (mercury__multi_map__env_ptr)->mercury__multi_map__inverse_search_3_p_0_env_0__ValueList_7);
    }
#line 355 "multi_map.m"
    if ((mercury__multi_map__env_ptr)->mercury__multi_map__inverse_search_3_p_0_env_0__succeeded)
#line 355 "multi_map.m"
      {
#line 355 "multi_map.m"
        ((mercury__multi_map__env_ptr)->mercury__multi_map__inverse_search_3_p_0_env_0__cont)((mercury__multi_map__env_ptr)->mercury__multi_map__inverse_search_3_p_0_env_0__cont_env_ptr);
      }
#line 353 "multi_map.m"
  }
#line 353 "multi_map.m"
}

#line 85 "multi_map.m"
void MR_CALL 
mercury__multi_map__inverse_search_3_p_0(
#line 85 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_8,
#line 85 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_9,
#line 85 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap_4,
#line 85 "multi_map.m"
  MR_Box mercury__multi_map__Value_5,
#line 85 "multi_map.m"
  MR_Box * mercury__multi_map__Key_6,
#line 85 "multi_map.m"
  MR_Cont mercury__multi_map__cont,
#line 85 "multi_map.m"
  void * mercury__multi_map__cont_env_ptr)
#line 85 "multi_map.m"
{
#line 85 "multi_map.m"
  {
#line 85 "multi_map.m"
    struct mercury__multi_map__inverse_search_3_p_0_env_0_s mercury__multi_map__env;

#line 85 "multi_map.m"
    (mercury__multi_map__env).mercury__multi_map__inverse_search_3_p_0_env_0__TypeInfo_for_V_9 = mercury__multi_map__TypeInfo_for_V_9;
#line 85 "multi_map.m"
    (mercury__multi_map__env).mercury__multi_map__inverse_search_3_p_0_env_0__Value_5 = mercury__multi_map__Value_5;
#line 85 "multi_map.m"
    (mercury__multi_map__env).mercury__multi_map__inverse_search_3_p_0_env_0__cont = mercury__multi_map__cont;
#line 85 "multi_map.m"
    (mercury__multi_map__env).mercury__multi_map__inverse_search_3_p_0_env_0__cont_env_ptr = mercury__multi_map__cont_env_ptr;
#line 353 "multi_map.m"
    {
#line 353 "multi_map.m"
      MR_Word mercury__multi_map__TypeCtorInfo_10_10 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 353 "multi_map.m"
      MR_Word mercury__multi_map__TypeInfo_11_11;

#line 4476 "multi_map.c"
      {
#line 4478 "multi_map.c"
        mercury__multi_map__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4480 "multi_map.c"
        MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_11_11, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_10_10));
#line 4482 "multi_map.c"
        MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_11_11, 1) = ((MR_Box) ((mercury__multi_map__env).mercury__multi_map__inverse_search_3_p_0_env_0__TypeInfo_for_V_9));
#line 4484 "multi_map.c"
      }
#line 400 "map.opt"
      {
#line 400 "map.opt"
        mercury__tree234__member_3_p_0(mercury__multi_map__TypeInfo_for_K_8, mercury__multi_map__TypeInfo_11_11, (MR_Word) mercury__multi_map__MultiMap_4, mercury__multi_map__Key_6, &(mercury__multi_map__env).mercury__multi_map__inverse_search_3_p_0_env_0__conv0_ValueList_7, mercury__multi_map__inverse_search_3_p_0_2, &mercury__multi_map__env);
      }
#line 353 "multi_map.m"
    }
#line 85 "multi_map.m"
  }
#line 85 "multi_map.m"
}

#line 77 "multi_map.m"
void MR_CALL 
mercury__multi_map__nondet_lookup_3_p_0(
#line 77 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_8,
#line 77 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_9,
#line 77 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap_4,
#line 77 "multi_map.m"
  MR_Box mercury__multi_map__Key_5,
#line 77 "multi_map.m"
  MR_Box * mercury__multi_map__Value_6,
#line 77 "multi_map.m"
  MR_Cont mercury__multi_map__cont,
#line 77 "multi_map.m"
  void * mercury__multi_map__cont_env_ptr)
#line 77 "multi_map.m"
{
#line 349 "multi_map.m"
  {
#line 349 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 349 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_10_10 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 349 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_11_11;
#line 349 "multi_map.m"
    MR_Word mercury__multi_map__Values_7;
#line 452 "map.opt"
    MR_Box mercury__multi_map__conv0_Values_7;

#line 4530 "multi_map.c"
    {
#line 4532 "multi_map.c"
      mercury__multi_map__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4534 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_11_11, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_10_10));
#line 4536 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_11_11, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_9));
#line 4538 "multi_map.c"
    }
#line 452 "map.opt"
    {
#line 452 "map.opt"
      mercury__multi_map__succeeded = mercury__tree234__search_3_p_0(mercury__multi_map__TypeInfo_for_K_8, mercury__multi_map__TypeInfo_11_11, (MR_Word) mercury__multi_map__MultiMap_4, mercury__multi_map__Key_5, &mercury__multi_map__conv0_Values_7);
    }
#line 452 "map.opt"
    if (mercury__multi_map__succeeded)
#line 452 "map.opt"
      {
#line 452 "map.opt"
        mercury__multi_map__Values_7 = ((MR_Word) mercury__multi_map__conv0_Values_7);
#line 452 "map.opt"
        mercury__multi_map__succeeded = MR_TRUE;
#line 452 "map.opt"
      }
#line 349 "multi_map.m"
    if (mercury__multi_map__succeeded)
#line 351 "multi_map.m"
      {
#line 351 "multi_map.m"
        mercury__list__member_2_p_1(mercury__multi_map__TypeInfo_for_V_9, mercury__multi_map__Value_6, mercury__multi_map__Values_7, mercury__multi_map__cont, mercury__multi_map__cont_env_ptr);
      }
#line 349 "multi_map.m"
  }
#line 77 "multi_map.m"
}

#line 71 "multi_map.m"
void MR_CALL 
mercury__multi_map__lookup_3_p_0(
#line 71 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_7,
#line 71 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_8,
#line 71 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap_4,
#line 71 "multi_map.m"
  MR_Box mercury__multi_map__Key_5,
#line 71 "multi_map.m"
  MR_Word * mercury__multi_map__Values_6)
#line 71 "multi_map.m"
{
#line 347 "multi_map.m"
  {
#line 347 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 347 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_9_9 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 347 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_10_10;
#line 347 "multi_map.m"
    MR_Box mercury__multi_map__conv0_Values_6;

#line 4593 "multi_map.c"
    {
#line 4595 "multi_map.c"
      mercury__multi_map__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4597 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_10, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_9_9));
#line 4599 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_10, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_8));
#line 4601 "multi_map.c"
    }
#line 347 "multi_map.m"
    {
#line 347 "multi_map.m"
      mercury__map__lookup_3_p_0(mercury__multi_map__TypeInfo_for_K_7, mercury__multi_map__TypeInfo_10_10, (MR_Word) mercury__multi_map__MultiMap_4, mercury__multi_map__Key_5, &mercury__multi_map__conv0_Values_6);
    }
#line 347 "multi_map.m"
    *mercury__multi_map__Values_6 = ((MR_Word) mercury__multi_map__conv0_Values_6);
#line 347 "multi_map.m"
  }
#line 71 "multi_map.m"
}

#line 70 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__lookup_2_f_0(
#line 70 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_7,
#line 70 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_8,
#line 70 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap_4,
#line 70 "multi_map.m"
  MR_Box mercury__multi_map__Key_5)
#line 70 "multi_map.m"
{
#line 347 "multi_map.m"
  {
#line 347 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 347 "multi_map.m"
    MR_Word mercury__multi_map__Value_6;
#line 347 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_9_12 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 347 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_10_13;
#line 347 "multi_map.m"
    MR_Box mercury__multi_map__conv0_Value_6;

#line 4641 "multi_map.c"
    {
#line 4643 "multi_map.c"
      mercury__multi_map__TypeInfo_10_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4645 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_13, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_9_12));
#line 4647 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_13, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_8));
#line 4649 "multi_map.c"
    }
#line 347 "multi_map.m"
    {
#line 347 "multi_map.m"
      mercury__map__lookup_3_p_0(mercury__multi_map__TypeInfo_for_K_7, mercury__multi_map__TypeInfo_10_13, (MR_Word) mercury__multi_map__MultiMap_4, mercury__multi_map__Key_5, &mercury__multi_map__conv0_Value_6);
    }
#line 347 "multi_map.m"
    mercury__multi_map__Value_6 = ((MR_Word) mercury__multi_map__conv0_Value_6);
#line 347 "multi_map.m"
    return mercury__multi_map__Value_6;
#line 347 "multi_map.m"
  }
#line 70 "multi_map.m"
}

#line 64 "multi_map.m"
void MR_CALL 
mercury__multi_map__nondet_search_3_p_0(
#line 64 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_8,
#line 64 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_9,
#line 64 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap_4,
#line 64 "multi_map.m"
  MR_Box mercury__multi_map__Key_5,
#line 64 "multi_map.m"
  MR_Box * mercury__multi_map__Value_6,
#line 64 "multi_map.m"
  MR_Cont mercury__multi_map__cont,
#line 64 "multi_map.m"
  void * mercury__multi_map__cont_env_ptr)
#line 64 "multi_map.m"
{
#line 339 "multi_map.m"
  {
#line 339 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 339 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_10_10 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 339 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_11_11;
#line 339 "multi_map.m"
    MR_Word mercury__multi_map__Values_7;
#line 452 "map.opt"
    MR_Box mercury__multi_map__conv0_Values_7;

#line 4697 "multi_map.c"
    {
#line 4699 "multi_map.c"
      mercury__multi_map__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4701 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_11_11, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_10_10));
#line 4703 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_11_11, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_9));
#line 4705 "multi_map.c"
    }
#line 452 "map.opt"
    {
#line 452 "map.opt"
      mercury__multi_map__succeeded = mercury__tree234__search_3_p_0(mercury__multi_map__TypeInfo_for_K_8, mercury__multi_map__TypeInfo_11_11, (MR_Word) mercury__multi_map__MultiMap_4, mercury__multi_map__Key_5, &mercury__multi_map__conv0_Values_7);
    }
#line 452 "map.opt"
    if (mercury__multi_map__succeeded)
#line 452 "map.opt"
      {
#line 452 "map.opt"
        mercury__multi_map__Values_7 = ((MR_Word) mercury__multi_map__conv0_Values_7);
#line 452 "map.opt"
        mercury__multi_map__succeeded = MR_TRUE;
#line 452 "map.opt"
      }
#line 339 "multi_map.m"
    if (mercury__multi_map__succeeded)
#line 341 "multi_map.m"
      {
#line 341 "multi_map.m"
        mercury__list__member_2_p_1(mercury__multi_map__TypeInfo_for_V_9, mercury__multi_map__Value_6, mercury__multi_map__Values_7, mercury__multi_map__cont, mercury__multi_map__cont_env_ptr);
      }
#line 339 "multi_map.m"
  }
#line 64 "multi_map.m"
}

#line 59 "multi_map.m"
MR_bool MR_CALL 
mercury__multi_map__search_3_p_0(
#line 59 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_7,
#line 59 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_8,
#line 59 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap_4,
#line 59 "multi_map.m"
  MR_Box mercury__multi_map__Key_5,
#line 59 "multi_map.m"
  MR_Word * mercury__multi_map__Values_6)
#line 59 "multi_map.m"
{
#line 337 "multi_map.m"
  {
#line 337 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 337 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_9_9 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 337 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_10_10;
#line 452 "map.opt"
    MR_Box mercury__multi_map__conv0_Values_6;

#line 4760 "multi_map.c"
    {
#line 4762 "multi_map.c"
      mercury__multi_map__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4764 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_10, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_9_9));
#line 4766 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_10, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_8));
#line 4768 "multi_map.c"
    }
#line 452 "map.opt"
    {
#line 452 "map.opt"
      mercury__multi_map__succeeded = mercury__tree234__search_3_p_0(mercury__multi_map__TypeInfo_for_K_7, mercury__multi_map__TypeInfo_10_10, (MR_Word) mercury__multi_map__MultiMap_4, mercury__multi_map__Key_5, &mercury__multi_map__conv0_Values_6);
    }
#line 452 "map.opt"
    if (mercury__multi_map__succeeded)
#line 452 "map.opt"
      {
#line 452 "map.opt"
        *mercury__multi_map__Values_6 = ((MR_Word) mercury__multi_map__conv0_Values_6);
#line 452 "map.opt"
        mercury__multi_map__succeeded = MR_TRUE;
#line 452 "map.opt"
      }
#line 337 "multi_map.m"
    return mercury__multi_map__succeeded;
#line 337 "multi_map.m"
  }
#line 59 "multi_map.m"
}

#line 400 "map.opt"
static void MR_CALL 
mercury__multi_map__member_3_p_0_2(
#line 400 "map.opt"
  void * mercury__multi_map__env_ptr_arg)
#line 400 "map.opt"
{
#line 400 "map.opt"
  {
#line 400 "map.opt"
    struct mercury__multi_map__member_3_p_0_env_0_s * mercury__multi_map__env_ptr = (struct mercury__multi_map__member_3_p_0_env_0_s *) mercury__multi_map__env_ptr_arg;

#line 400 "map.opt"
    (mercury__multi_map__env_ptr)->mercury__multi_map__member_3_p_0_env_0__ValueList_7 = ((MR_Word) (mercury__multi_map__env_ptr)->mercury__multi_map__member_3_p_0_env_0__conv0_ValueList_7);
#line 400 "map.opt"
    {
#line 400 "map.opt"
      mercury__multi_map__member_3_p_0_1(mercury__multi_map__env_ptr);
    }
#line 400 "map.opt"
  }
#line 400 "map.opt"
}

#line 332 "multi_map.m"
static void MR_CALL 
mercury__multi_map__member_3_p_0_1(
#line 332 "multi_map.m"
  void * mercury__multi_map__env_ptr_arg)
#line 332 "multi_map.m"
{
#line 332 "multi_map.m"
  {
#line 332 "multi_map.m"
    struct mercury__multi_map__member_3_p_0_env_0_s * mercury__multi_map__env_ptr = (struct mercury__multi_map__member_3_p_0_env_0_s *) mercury__multi_map__env_ptr_arg;

#line 334 "multi_map.m"
    {
#line 334 "multi_map.m"
      mercury__list__member_2_p_1((mercury__multi_map__env_ptr)->mercury__multi_map__member_3_p_0_env_0__TypeInfo_for_V_9, (mercury__multi_map__env_ptr)->mercury__multi_map__member_3_p_0_env_0__Value_6, (mercury__multi_map__env_ptr)->mercury__multi_map__member_3_p_0_env_0__ValueList_7, (mercury__multi_map__env_ptr)->mercury__multi_map__member_3_p_0_env_0__cont, (mercury__multi_map__env_ptr)->mercury__multi_map__member_3_p_0_env_0__cont_env_ptr);
    }
#line 332 "multi_map.m"
  }
#line 332 "multi_map.m"
}

#line 54 "multi_map.m"
void MR_CALL 
mercury__multi_map__member_3_p_0(
#line 54 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_8,
#line 54 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_V_9,
#line 54 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap_4,
#line 54 "multi_map.m"
  MR_Box * mercury__multi_map__Key_5,
#line 54 "multi_map.m"
  MR_Box * mercury__multi_map__Value_6,
#line 54 "multi_map.m"
  MR_Cont mercury__multi_map__cont,
#line 54 "multi_map.m"
  void * mercury__multi_map__cont_env_ptr)
#line 54 "multi_map.m"
{
#line 54 "multi_map.m"
  {
#line 54 "multi_map.m"
    struct mercury__multi_map__member_3_p_0_env_0_s mercury__multi_map__env;

#line 54 "multi_map.m"
    (mercury__multi_map__env).mercury__multi_map__member_3_p_0_env_0__TypeInfo_for_V_9 = mercury__multi_map__TypeInfo_for_V_9;
#line 54 "multi_map.m"
    (mercury__multi_map__env).mercury__multi_map__member_3_p_0_env_0__Value_6 = mercury__multi_map__Value_6;
#line 54 "multi_map.m"
    (mercury__multi_map__env).mercury__multi_map__member_3_p_0_env_0__cont = mercury__multi_map__cont;
#line 54 "multi_map.m"
    (mercury__multi_map__env).mercury__multi_map__member_3_p_0_env_0__cont_env_ptr = mercury__multi_map__cont_env_ptr;
#line 332 "multi_map.m"
    {
#line 332 "multi_map.m"
      MR_bool mercury__multi_map__succeeded;
#line 332 "multi_map.m"
      MR_Word mercury__multi_map__TypeCtorInfo_10_10 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 332 "multi_map.m"
      MR_Word mercury__multi_map__TypeInfo_11_11;

#line 4879 "multi_map.c"
      {
#line 4881 "multi_map.c"
        mercury__multi_map__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4883 "multi_map.c"
        MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_11_11, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_10_10));
#line 4885 "multi_map.c"
        MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_11_11, 1) = ((MR_Box) ((mercury__multi_map__env).mercury__multi_map__member_3_p_0_env_0__TypeInfo_for_V_9));
#line 4887 "multi_map.c"
      }
#line 400 "map.opt"
      {
#line 400 "map.opt"
        mercury__tree234__member_3_p_0(mercury__multi_map__TypeInfo_for_K_8, mercury__multi_map__TypeInfo_11_11, (MR_Word) mercury__multi_map__MultiMap_4, mercury__multi_map__Key_5, &(mercury__multi_map__env).mercury__multi_map__member_3_p_0_env_0__conv0_ValueList_7, mercury__multi_map__member_3_p_0_2, &mercury__multi_map__env);
      }
#line 332 "multi_map.m"
    }
#line 54 "multi_map.m"
  }
#line 54 "multi_map.m"
}

#line 50 "multi_map.m"
MR_bool MR_CALL 
mercury__multi_map__contains_2_p_0(
#line 50 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for_K_6,
#line 50 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for__V_7,
#line 50 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap_3,
#line 50 "multi_map.m"
  MR_Box mercury__multi_map__Key_4)
#line 50 "multi_map.m"
{
#line 330 "multi_map.m"
  {
#line 330 "multi_map.m"
    MR_bool mercury__multi_map__succeeded;
#line 330 "multi_map.m"
    MR_Word mercury__multi_map__TypeCtorInfo_8_8 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
#line 330 "multi_map.m"
    MR_Word mercury__multi_map__TypeInfo_9_9;
#line 452 "map.opt"
    MR_Word mercury__multi_map__V_5_5;
#line 452 "map.opt"
    MR_Box mercury__multi_map__conv0_V_5_5;

#line 4927 "multi_map.c"
    {
#line 4929 "multi_map.c"
      mercury__multi_map__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 4931 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_9_9, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_8_8));
#line 4933 "multi_map.c"
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_9_9, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for__V_7));
#line 4935 "multi_map.c"
    }
#line 452 "map.opt"
    {
#line 452 "map.opt"
      mercury__multi_map__succeeded = mercury__tree234__search_3_p_0(mercury__multi_map__TypeInfo_for_K_6, mercury__multi_map__TypeInfo_9_9, (MR_Word) mercury__multi_map__MultiMap_3, mercury__multi_map__Key_4, &mercury__multi_map__conv0_V_5_5);
    }
#line 452 "map.opt"
    if (mercury__multi_map__succeeded)
#line 452 "map.opt"
      {
#line 452 "map.opt"
        mercury__multi_map__V_5_5 = ((MR_Word) mercury__multi_map__conv0_V_5_5);
#line 452 "map.opt"
        mercury__multi_map__succeeded = MR_TRUE;
#line 452 "map.opt"
      }
#line 330 "multi_map.m"
    return mercury__multi_map__succeeded;
#line 330 "multi_map.m"
  }
#line 50 "multi_map.m"
}

#line 44 "multi_map.m"
MR_bool MR_CALL 
mercury__multi_map__is_empty_1_p_0(
#line 44 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for__K_3,
#line 44 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for__V_4,
#line 44 "multi_map.m"
  MR_Word mercury__multi_map__MultiMap_2)
#line 44 "multi_map.m"
{
#line 248 "tree234.opt"
  {
#line 248 "tree234.opt"
    MR_bool mercury__multi_map__succeeded = (mercury__multi_map__MultiMap_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

#line 248 "tree234.opt"
    return mercury__multi_map__succeeded;
#line 248 "tree234.opt"
  }
#line 44 "multi_map.m"
}

#line 40 "multi_map.m"
void MR_CALL 
mercury__multi_map__init_1_p_0(
#line 40 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for__K_3,
#line 40 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for__V_4,
#line 40 "multi_map.m"
  MR_Word * mercury__multi_map__MultiMap_2)
#line 40 "multi_map.m"
{
#line 243 "tree234.opt"
  {
#line 243 "tree234.opt"
    MR_bool mercury__multi_map__succeeded;

#line 243 "tree234.opt"
    *mercury__multi_map__MultiMap_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 243 "tree234.opt"
  }
#line 40 "multi_map.m"
}

#line 39 "multi_map.m"
MR_Word MR_CALL 
mercury__multi_map__init_0_f_0(
#line 39 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for__K_3,
#line 39 "multi_map.m"
  MR_Word mercury__multi_map__TypeInfo_for__V_4)
#line 39 "multi_map.m"
{
#line 243 "tree234.opt"
  {
#line 243 "tree234.opt"
    MR_bool mercury__multi_map__succeeded;
#line 243 "tree234.opt"
    MR_Word mercury__multi_map__MultiMap_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 243 "tree234.opt"
    return mercury__multi_map__MultiMap_2;
#line 243 "tree234.opt"
  }
#line 39 "multi_map.m"
}

void mercury__multi_map__init(void)
{
}

void mercury__multi_map__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__multi_map__multi_map__type_ctor_info_multi_map_2);
}

void mercury__multi_map__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module multi_map. */
