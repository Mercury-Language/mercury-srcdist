/*
** Automatically generated from `multi_map.m'
** by the Mercury compiler,
** version rotd-2016-01-15
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



struct mercury__multi_map__inverse_search_3_p_0_env_0_s {
  MR_Word mercury__multi_map__inverse_search_3_p_0_env_0__TypeInfo_for_V_9;
  MR_Box mercury__multi_map__inverse_search_3_p_0_env_0__Value_5;
  MR_Cont mercury__multi_map__inverse_search_3_p_0_env_0__cont;
  void * mercury__multi_map__inverse_search_3_p_0_env_0__cont_env_ptr;
  MR_bool mercury__multi_map__inverse_search_3_p_0_env_0__succeeded;
  MR_Word mercury__multi_map__inverse_search_3_p_0_env_0__ValueList_7;
  MR_Box mercury__multi_map__inverse_search_3_p_0_env_0__conv0_ValueList_7;
};

struct mercury__multi_map__member_3_p_0_env_0_s {
  MR_Word mercury__multi_map__member_3_p_0_env_0__TypeInfo_for_V_9;
  MR_Box * mercury__multi_map__member_3_p_0_env_0__Value_6;
  MR_Cont mercury__multi_map__member_3_p_0_env_0__cont;
  void * mercury__multi_map__member_3_p_0_env_0__cont_env_ptr;
  MR_Word mercury__multi_map__member_3_p_0_env_0__ValueList_7;
  MR_Box mercury__multi_map__member_3_p_0_env_0__conv0_ValueList_7;
};


static const MR_FA_PseudoTypeInfo_Struct1 mercury__multi_map__list__pti_list_1__pseudo_2;

static const MR_FA_PseudoTypeInfo_Struct2 mercury__multi_map__tree234__pti_tree234_2__pseudo_1__pseudo_list__pti_list_1__pseudo_2;

static MR_bool MR_CALL 
mercury__multi_map____Unify____multi_map_2_0_10001(
  MR_Box mercury__multi_map__wrapper_arg_1,
  MR_Box mercury__multi_map__wrapper_arg_2,
  MR_Box mercury__multi_map__wrapper_arg_3,
  MR_Box mercury__multi_map__wrapper_arg_4);

static void MR_CALL 
mercury__multi_map____Compare____multi_map_2_0_10001(
  MR_Box mercury__multi_map__wrapper_arg_1,
  MR_Box mercury__multi_map__wrapper_arg_2,
  MR_Box * mercury__multi_map__wrapper_arg_3,
  MR_Box mercury__multi_map__wrapper_arg_4,
  MR_Box mercury__multi_map__wrapper_arg_5);

static void MR_CALL 
mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_118_97_108_117_101_115_95_95_104_111_57_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__tree234_0(
  MR_Word mercury__multi_map__V_55_55,
  MR_Word mercury__multi_map__HeadVar__2_2,
  MR_Integer mercury__multi_map__HeadVar__3_3,
  MR_Integer * mercury__multi_map__HeadVar__4_4);

static void MR_CALL 
mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__tree234_0(
  MR_Word mercury__multi_map__V_60_60,
  MR_Word mercury__multi_map__V_61_61,
  MR_Word mercury__multi_map__HeadVar__2_2,
  MR_Word mercury__multi_map__HeadVar__3_3,
  MR_Word * mercury__multi_map__HeadVar__4_4);

static void MR_CALL 
mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__list_0(
  MR_Word mercury__multi_map__V_24_24,
  MR_Word mercury__multi_map__V_25_25,
  MR_Word mercury__multi_map__HeadVar__2_2,
  MR_Word mercury__multi_map__HeadVar__3_3,
  MR_Word * mercury__multi_map__HeadVar__4_4);

static MR_Word MR_CALL 
mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_2_f_in__list_0(
  MR_Box mercury__multi_map__V_17_17,
  MR_Word mercury__multi_map__HeadVar__2_2);

static MR_Integer MR_CALL 
mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__multi_map__inverse_search_3_p_0_2(
  void * mercury__multi_map__env_ptr_arg);

static void MR_CALL 
mercury__multi_map__inverse_search_3_p_0_1(
  void * mercury__multi_map__env_ptr_arg);

static void MR_CALL 
mercury__multi_map__member_3_p_0_2(
  void * mercury__multi_map__env_ptr_arg);

static void MR_CALL 
mercury__multi_map__member_3_p_0_1(
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



static const MR_FA_PseudoTypeInfo_Struct1 mercury__multi_map__list__pti_list_1__pseudo_2 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 2
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__multi_map__tree234__pti_tree234_2__pseudo_1__pseudo_list__pti_list_1__pseudo_2 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__multi_map__list__pti_list_1__pseudo_2
  }
};

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

static MR_bool MR_CALL 
mercury__multi_map____Unify____multi_map_2_0_10001(
  MR_Box mercury__multi_map__wrapper_arg_1,
  MR_Box mercury__multi_map__wrapper_arg_2,
  MR_Box mercury__multi_map__wrapper_arg_3,
  MR_Box mercury__multi_map__wrapper_arg_4)
{
  {
    MR_bool mercury__multi_map__succeeded;

    {
      mercury__multi_map__succeeded = mercury__multi_map____Unify____multi_map_2_0(((MR_Word) mercury__multi_map__wrapper_arg_1), ((MR_Word) mercury__multi_map__wrapper_arg_2), ((MR_Word) mercury__multi_map__wrapper_arg_3), ((MR_Word) mercury__multi_map__wrapper_arg_4));
    }
    return mercury__multi_map__succeeded;
  }
}

static void MR_CALL 
mercury__multi_map____Compare____multi_map_2_0_10001(
  MR_Box mercury__multi_map__wrapper_arg_1,
  MR_Box mercury__multi_map__wrapper_arg_2,
  MR_Box * mercury__multi_map__wrapper_arg_3,
  MR_Box mercury__multi_map__wrapper_arg_4,
  MR_Box mercury__multi_map__wrapper_arg_5)
{
  {
    MR_Word mercury__multi_map__conv0_HeadVar__1_1;

    {
      mercury__multi_map____Compare____multi_map_2_0(((MR_Word) mercury__multi_map__wrapper_arg_1), ((MR_Word) mercury__multi_map__wrapper_arg_2), &mercury__multi_map__conv0_HeadVar__1_1, ((MR_Word) mercury__multi_map__wrapper_arg_4), ((MR_Word) mercury__multi_map__wrapper_arg_5));
    }
    *mercury__multi_map__wrapper_arg_3 = ((MR_Box) (mercury__multi_map__conv0_HeadVar__1_1));
  }
}

static void MR_CALL 
mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_118_97_108_117_101_115_95_95_104_111_57_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__tree234_0(
  MR_Word mercury__multi_map__V_55_55,
  MR_Word mercury__multi_map__HeadVar__2_2,
  MR_Integer mercury__multi_map__HeadVar__3_3,
  MR_Integer * mercury__multi_map__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__multi_map__succeeded;

        switch (MR_tag((MR_Word) mercury__multi_map__HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *mercury__multi_map__HeadVar__4_4 = mercury__multi_map__HeadVar__3_3;
            break;
          case (MR_Integer) 1:
            {
              MR_Word mercury__multi_map__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__2_2, (MR_Integer) 1)));
              MR_Word mercury__multi_map__V_12_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__2_2, (MR_Integer) 2)));
              MR_Word mercury__multi_map__V_13_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__2_2, (MR_Integer) 3)));
              MR_Integer mercury__multi_map__V_17_15;
              MR_Integer mercury__multi_map__V_18_16;
              MR_Box mercury__multi_map__V_10_9 = (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__2_2, (MR_Integer) 0));

              {
                mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_118_97_108_117_101_115_95_95_104_111_57_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__tree234_0(mercury__multi_map__V_55_55, mercury__multi_map__V_12_11, mercury__multi_map__HeadVar__3_3, &mercury__multi_map__V_17_15);
              }
              {
                mercury__multi_map__accumulate_length_3_p_0(mercury__multi_map__V_55_55, mercury__multi_map__V_11_10, mercury__multi_map__V_17_15, &mercury__multi_map__V_18_16);
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__multi_map__HeadVar__2__tmp_copy_2 = mercury__multi_map__V_13_12;
                MR_Integer mercury__multi_map__HeadVar__3__tmp_copy_3 = mercury__multi_map__V_18_16;

                mercury__multi_map__HeadVar__3_3 = mercury__multi_map__HeadVar__3__tmp_copy_3;
                mercury__multi_map__HeadVar__2_2 = mercury__multi_map__HeadVar__2__tmp_copy_2;
              }
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__multi_map__V_22_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__multi_map__HeadVar__2_2, (MR_Integer) 1)));
              MR_Word mercury__multi_map__V_24_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__multi_map__HeadVar__2_2, (MR_Integer) 3)));
              MR_Word mercury__multi_map__V_25_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__multi_map__HeadVar__2_2, (MR_Integer) 4)));
              MR_Word mercury__multi_map__V_26_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__multi_map__HeadVar__2_2, (MR_Integer) 5)));
              MR_Word mercury__multi_map__V_27_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__multi_map__HeadVar__2_2, (MR_Integer) 6)));
              MR_Integer mercury__multi_map__V_31_27;
              MR_Integer mercury__multi_map__V_32_28;
              MR_Integer mercury__multi_map__V_33_29;
              MR_Integer mercury__multi_map__V_34_30;
              MR_Integer mercury__multi_map__NVs_87;
              MR_Box mercury__multi_map__V_21_18 = (MR_hl_field(MR_mktag(2), mercury__multi_map__HeadVar__2_2, (MR_Integer) 0));
              MR_Box mercury__multi_map__V_23_20 = (MR_hl_field(MR_mktag(2), mercury__multi_map__HeadVar__2_2, (MR_Integer) 2));

              {
                mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_118_97_108_117_101_115_95_95_104_111_57_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__tree234_0(mercury__multi_map__V_55_55, mercury__multi_map__V_25_22, mercury__multi_map__HeadVar__3_3, &mercury__multi_map__V_31_27);
              }
              {
                mercury__list__length_acc_3_p_0(mercury__multi_map__V_55_55, mercury__multi_map__V_22_19, (MR_Integer) 0, &mercury__multi_map__NVs_87);
              }
              mercury__multi_map__V_32_28 = (mercury__multi_map__V_31_27 + mercury__multi_map__NVs_87);
              {
                mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_118_97_108_117_101_115_95_95_104_111_57_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__tree234_0(mercury__multi_map__V_55_55, mercury__multi_map__V_26_23, mercury__multi_map__V_32_28, &mercury__multi_map__V_33_29);
              }
              {
                mercury__multi_map__accumulate_length_3_p_0(mercury__multi_map__V_55_55, mercury__multi_map__V_24_21, mercury__multi_map__V_33_29, &mercury__multi_map__V_34_30);
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__multi_map__HeadVar__2__tmp_copy_2 = mercury__multi_map__V_27_24;
                MR_Integer mercury__multi_map__HeadVar__3__tmp_copy_3 = mercury__multi_map__V_34_30;

                mercury__multi_map__HeadVar__3_3 = mercury__multi_map__HeadVar__3__tmp_copy_3;
                mercury__multi_map__HeadVar__2_2 = mercury__multi_map__HeadVar__2__tmp_copy_2;
              }
              continue;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word mercury__multi_map__V_38_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__multi_map__HeadVar__2_2, (MR_Integer) 1)));
              MR_Word mercury__multi_map__V_40_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__multi_map__HeadVar__2_2, (MR_Integer) 3)));
              MR_Word mercury__multi_map__V_42_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__multi_map__HeadVar__2_2, (MR_Integer) 5)));
              MR_Word mercury__multi_map__V_43_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__multi_map__HeadVar__2_2, (MR_Integer) 6)));
              MR_Word mercury__multi_map__V_44_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__multi_map__HeadVar__2_2, (MR_Integer) 7)));
              MR_Word mercury__multi_map__V_45_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__multi_map__HeadVar__2_2, (MR_Integer) 8)));
              MR_Word mercury__multi_map__V_46_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__multi_map__HeadVar__2_2, (MR_Integer) 9)));
              MR_Integer mercury__multi_map__V_50_44;
              MR_Integer mercury__multi_map__V_51_45;
              MR_Integer mercury__multi_map__V_52_46;
              MR_Integer mercury__multi_map__V_53_47;
              MR_Integer mercury__multi_map__V_54_48;
              MR_Integer mercury__multi_map__V_55_49;
              MR_Integer mercury__multi_map__NVs_60;
              MR_Integer mercury__multi_map__NVs_69;
              MR_Integer mercury__multi_map__NVs_78;
              MR_Box mercury__multi_map__V_37_32 = (MR_hl_field(MR_mktag(3), mercury__multi_map__HeadVar__2_2, (MR_Integer) 0));
              MR_Box mercury__multi_map__V_39_34 = (MR_hl_field(MR_mktag(3), mercury__multi_map__HeadVar__2_2, (MR_Integer) 2));
              MR_Box mercury__multi_map__V_41_36 = (MR_hl_field(MR_mktag(3), mercury__multi_map__HeadVar__2_2, (MR_Integer) 4));

              {
                mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_118_97_108_117_101_115_95_95_104_111_57_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__tree234_0(mercury__multi_map__V_55_55, mercury__multi_map__V_43_38, mercury__multi_map__HeadVar__3_3, &mercury__multi_map__V_50_44);
              }
              {
                mercury__list__length_acc_3_p_0(mercury__multi_map__V_55_55, mercury__multi_map__V_38_33, (MR_Integer) 0, &mercury__multi_map__NVs_60);
              }
              mercury__multi_map__V_51_45 = (mercury__multi_map__V_50_44 + mercury__multi_map__NVs_60);
              {
                mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_118_97_108_117_101_115_95_95_104_111_57_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__tree234_0(mercury__multi_map__V_55_55, mercury__multi_map__V_44_39, mercury__multi_map__V_51_45, &mercury__multi_map__V_52_46);
              }
              {
                mercury__list__length_acc_3_p_0(mercury__multi_map__V_55_55, mercury__multi_map__V_40_35, (MR_Integer) 0, &mercury__multi_map__NVs_69);
              }
              mercury__multi_map__V_53_47 = (mercury__multi_map__V_52_46 + mercury__multi_map__NVs_69);
              {
                mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_118_97_108_117_101_115_95_95_104_111_57_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__tree234_0(mercury__multi_map__V_55_55, mercury__multi_map__V_45_40, mercury__multi_map__V_53_47, &mercury__multi_map__V_54_48);
              }
              {
                mercury__list__length_acc_3_p_0(mercury__multi_map__V_55_55, mercury__multi_map__V_42_37, (MR_Integer) 0, &mercury__multi_map__NVs_78);
              }
              mercury__multi_map__V_55_49 = (mercury__multi_map__V_54_48 + mercury__multi_map__NVs_78);
              /* direct tailcall eliminated */
              {
                MR_Word mercury__multi_map__HeadVar__2__tmp_copy_2 = mercury__multi_map__V_46_41;
                MR_Integer mercury__multi_map__HeadVar__3__tmp_copy_3 = mercury__multi_map__V_55_49;

                mercury__multi_map__HeadVar__3_3 = mercury__multi_map__HeadVar__3__tmp_copy_3;
                mercury__multi_map__HeadVar__2_2 = mercury__multi_map__HeadVar__2__tmp_copy_2;
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
mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__tree234_0(
  MR_Word mercury__multi_map__V_60_60,
  MR_Word mercury__multi_map__V_61_61,
  MR_Word mercury__multi_map__HeadVar__2_2,
  MR_Word mercury__multi_map__HeadVar__3_3,
  MR_Word * mercury__multi_map__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__multi_map__succeeded;

        switch (MR_tag((MR_Word) mercury__multi_map__HeadVar__2_2)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *mercury__multi_map__HeadVar__4_4 = mercury__multi_map__HeadVar__3_3;
            break;
          case (MR_Integer) 1:
            {
              MR_Box mercury__multi_map__V_10_9 = (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__2_2, (MR_Integer) 0));
              MR_Word mercury__multi_map__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__2_2, (MR_Integer) 1)));
              MR_Word mercury__multi_map__V_12_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__2_2, (MR_Integer) 2)));
              MR_Word mercury__multi_map__V_13_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__2_2, (MR_Integer) 3)));
              MR_Word mercury__multi_map__V_17_15;
              MR_Word mercury__multi_map__V_18_16;

              {
                mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__tree234_0(mercury__multi_map__V_60_60, mercury__multi_map__V_61_61, mercury__multi_map__V_12_11, mercury__multi_map__HeadVar__3_3, &mercury__multi_map__V_17_15);
              }
              {
                mercury__multi_map__to_flat_assoc_list_acc_4_p_0(mercury__multi_map__V_60_60, mercury__multi_map__V_61_61, mercury__multi_map__V_10_9, mercury__multi_map__V_11_10, mercury__multi_map__V_17_15, &mercury__multi_map__V_18_16);
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__multi_map__HeadVar__2__tmp_copy_2 = mercury__multi_map__V_13_12;
                MR_Word mercury__multi_map__HeadVar__3__tmp_copy_3 = mercury__multi_map__V_18_16;

                mercury__multi_map__HeadVar__3_3 = mercury__multi_map__HeadVar__3__tmp_copy_3;
                mercury__multi_map__HeadVar__2_2 = mercury__multi_map__HeadVar__2__tmp_copy_2;
              }
              continue;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Box mercury__multi_map__V_21_18 = (MR_hl_field(MR_mktag(2), mercury__multi_map__HeadVar__2_2, (MR_Integer) 0));
              MR_Word mercury__multi_map__V_22_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__multi_map__HeadVar__2_2, (MR_Integer) 1)));
              MR_Box mercury__multi_map__V_23_20 = (MR_hl_field(MR_mktag(2), mercury__multi_map__HeadVar__2_2, (MR_Integer) 2));
              MR_Word mercury__multi_map__V_24_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__multi_map__HeadVar__2_2, (MR_Integer) 3)));
              MR_Word mercury__multi_map__V_25_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__multi_map__HeadVar__2_2, (MR_Integer) 4)));
              MR_Word mercury__multi_map__V_26_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__multi_map__HeadVar__2_2, (MR_Integer) 5)));
              MR_Word mercury__multi_map__V_27_24 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__multi_map__HeadVar__2_2, (MR_Integer) 6)));
              MR_Word mercury__multi_map__V_31_27;
              MR_Word mercury__multi_map__V_32_28;
              MR_Word mercury__multi_map__V_33_29;
              MR_Word mercury__multi_map__V_34_30;

              {
                mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__tree234_0(mercury__multi_map__V_60_60, mercury__multi_map__V_61_61, mercury__multi_map__V_25_22, mercury__multi_map__HeadVar__3_3, &mercury__multi_map__V_31_27);
              }
              {
                mercury__multi_map__to_flat_assoc_list_acc_4_p_0(mercury__multi_map__V_60_60, mercury__multi_map__V_61_61, mercury__multi_map__V_21_18, mercury__multi_map__V_22_19, mercury__multi_map__V_31_27, &mercury__multi_map__V_32_28);
              }
              {
                mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__tree234_0(mercury__multi_map__V_60_60, mercury__multi_map__V_61_61, mercury__multi_map__V_26_23, mercury__multi_map__V_32_28, &mercury__multi_map__V_33_29);
              }
              {
                mercury__multi_map__to_flat_assoc_list_acc_4_p_0(mercury__multi_map__V_60_60, mercury__multi_map__V_61_61, mercury__multi_map__V_23_20, mercury__multi_map__V_24_21, mercury__multi_map__V_33_29, &mercury__multi_map__V_34_30);
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__multi_map__HeadVar__2__tmp_copy_2 = mercury__multi_map__V_27_24;
                MR_Word mercury__multi_map__HeadVar__3__tmp_copy_3 = mercury__multi_map__V_34_30;

                mercury__multi_map__HeadVar__3_3 = mercury__multi_map__HeadVar__3__tmp_copy_3;
                mercury__multi_map__HeadVar__2_2 = mercury__multi_map__HeadVar__2__tmp_copy_2;
              }
              continue;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word mercury__multi_map__TypeCtorInfo_20_75;
              MR_Word mercury__multi_map__TypeInfo_21_91;
              MR_Box mercury__multi_map__V_37_32 = (MR_hl_field(MR_mktag(3), mercury__multi_map__HeadVar__2_2, (MR_Integer) 0));
              MR_Word mercury__multi_map__V_38_33 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__multi_map__HeadVar__2_2, (MR_Integer) 1)));
              MR_Box mercury__multi_map__V_39_34 = (MR_hl_field(MR_mktag(3), mercury__multi_map__HeadVar__2_2, (MR_Integer) 2));
              MR_Word mercury__multi_map__V_40_35 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__multi_map__HeadVar__2_2, (MR_Integer) 3)));
              MR_Box mercury__multi_map__V_41_36 = (MR_hl_field(MR_mktag(3), mercury__multi_map__HeadVar__2_2, (MR_Integer) 4));
              MR_Word mercury__multi_map__V_42_37 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__multi_map__HeadVar__2_2, (MR_Integer) 5)));
              MR_Word mercury__multi_map__V_43_38 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__multi_map__HeadVar__2_2, (MR_Integer) 6)));
              MR_Word mercury__multi_map__V_44_39 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__multi_map__HeadVar__2_2, (MR_Integer) 7)));
              MR_Word mercury__multi_map__V_45_40 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__multi_map__HeadVar__2_2, (MR_Integer) 8)));
              MR_Word mercury__multi_map__V_46_41 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__multi_map__HeadVar__2_2, (MR_Integer) 9)));
              MR_Word mercury__multi_map__V_50_44;
              MR_Word mercury__multi_map__V_51_45;
              MR_Word mercury__multi_map__V_52_46;
              MR_Word mercury__multi_map__V_53_47;
              MR_Word mercury__multi_map__V_54_48;
              MR_Word mercury__multi_map__V_55_49;
              MR_Word mercury__multi_map__KeyValues_67;
              MR_Word mercury__multi_map__V_73_73;
              MR_Word mercury__multi_map__KeyValues_82;
              MR_Word mercury__multi_map__V_88_88;
              MR_Word mercury__multi_map__conv0_V_73_73;
              MR_Word mercury__multi_map__conv1_V_51_45;
              MR_Word mercury__multi_map__conv2_V_88_88;
              MR_Word mercury__multi_map__conv3_V_53_47;

              {
                mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__tree234_0(mercury__multi_map__V_60_60, mercury__multi_map__V_61_61, mercury__multi_map__V_43_38, mercury__multi_map__HeadVar__3_3, &mercury__multi_map__V_50_44);
              }
              mercury__multi_map__TypeCtorInfo_20_75 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
              {
                mercury__multi_map__TypeInfo_21_91 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_21_91, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_20_75));
                MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_21_91, 1) = ((MR_Box) (mercury__multi_map__V_60_60));
                MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_21_91, 2) = ((MR_Box) (mercury__multi_map__V_61_61));
              }
              {
                mercury__multi_map__KeyValues_67 = mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_2_f_in__list_0(mercury__multi_map__V_37_32, mercury__multi_map__V_38_33);
              }
              {
                mercury__multi_map__conv0_V_73_73 = mercury__cord__from_list_1_f_0(mercury__multi_map__TypeInfo_21_91, (MR_Word) mercury__multi_map__KeyValues_67);
              }
              mercury__multi_map__V_73_73 = (MR_Word) mercury__multi_map__conv0_V_73_73;
              {
                mercury__multi_map__conv1_V_51_45 = mercury__cord__f_43_43_2_f_0(mercury__multi_map__TypeInfo_21_91, (MR_Word) mercury__multi_map__V_50_44, (MR_Word) mercury__multi_map__V_73_73);
              }
              mercury__multi_map__V_51_45 = (MR_Word) mercury__multi_map__conv1_V_51_45;
              {
                mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__tree234_0(mercury__multi_map__V_60_60, mercury__multi_map__V_61_61, mercury__multi_map__V_44_39, mercury__multi_map__V_51_45, &mercury__multi_map__V_52_46);
              }
              {
                mercury__multi_map__KeyValues_82 = mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_2_f_in__list_0(mercury__multi_map__V_39_34, mercury__multi_map__V_40_35);
              }
              {
                mercury__multi_map__conv2_V_88_88 = mercury__cord__from_list_1_f_0(mercury__multi_map__TypeInfo_21_91, (MR_Word) mercury__multi_map__KeyValues_82);
              }
              mercury__multi_map__V_88_88 = (MR_Word) mercury__multi_map__conv2_V_88_88;
              {
                mercury__multi_map__conv3_V_53_47 = mercury__cord__f_43_43_2_f_0(mercury__multi_map__TypeInfo_21_91, (MR_Word) mercury__multi_map__V_52_46, (MR_Word) mercury__multi_map__V_88_88);
              }
              mercury__multi_map__V_53_47 = (MR_Word) mercury__multi_map__conv3_V_53_47;
              {
                mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__tree234_0(mercury__multi_map__V_60_60, mercury__multi_map__V_61_61, mercury__multi_map__V_45_40, mercury__multi_map__V_53_47, &mercury__multi_map__V_54_48);
              }
              {
                mercury__multi_map__to_flat_assoc_list_acc_4_p_0(mercury__multi_map__V_60_60, mercury__multi_map__V_61_61, mercury__multi_map__V_41_36, mercury__multi_map__V_42_37, mercury__multi_map__V_54_48, &mercury__multi_map__V_55_49);
              }
              /* direct tailcall eliminated */
              {
                MR_Word mercury__multi_map__HeadVar__2__tmp_copy_2 = mercury__multi_map__V_46_41;
                MR_Word mercury__multi_map__HeadVar__3__tmp_copy_3 = mercury__multi_map__V_55_49;

                mercury__multi_map__HeadVar__3_3 = mercury__multi_map__HeadVar__3__tmp_copy_3;
                mercury__multi_map__HeadVar__2_2 = mercury__multi_map__HeadVar__2__tmp_copy_2;
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
mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__list_0(
  MR_Word mercury__multi_map__V_24_24,
  MR_Word mercury__multi_map__V_25_25,
  MR_Word mercury__multi_map__HeadVar__2_2,
  MR_Word mercury__multi_map__HeadVar__3_3,
  MR_Word * mercury__multi_map__HeadVar__4_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__multi_map__succeeded;

        if ((mercury__multi_map__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__multi_map__HeadVar__4_4 = mercury__multi_map__HeadVar__3_3;
        else
          {
            MR_Word mercury__multi_map__V_10_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__2_2, (MR_Integer) 0)));
            MR_Word mercury__multi_map__V_11_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mercury__multi_map__V_15_13;
            MR_Box mercury__multi_map__K_28 = (MR_hl_field(MR_mktag(0), mercury__multi_map__V_10_9, (MR_Integer) 0));
            MR_Box mercury__multi_map__V_29 = (MR_hl_field(MR_mktag(0), mercury__multi_map__V_10_9, (MR_Integer) 1));

            {
              mercury__multi_map__set_4_p_0(mercury__multi_map__V_24_24, mercury__multi_map__V_25_25, mercury__multi_map__K_28, mercury__multi_map__V_29, mercury__multi_map__HeadVar__3_3, &mercury__multi_map__V_15_13);
            }
            /* direct tailcall eliminated */
            {
              MR_Word mercury__multi_map__HeadVar__2__tmp_copy_2 = mercury__multi_map__V_11_10;
              MR_Word mercury__multi_map__HeadVar__3__tmp_copy_3 = mercury__multi_map__V_15_13;

              mercury__multi_map__HeadVar__3_3 = mercury__multi_map__HeadVar__3__tmp_copy_3;
              mercury__multi_map__HeadVar__2_2 = mercury__multi_map__HeadVar__2__tmp_copy_2;
            }
            continue;
          }
      }
      break;
    }
}

static MR_Word MR_CALL 
mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_2_f_in__list_0(
  MR_Box mercury__multi_map__V_17_17,
  MR_Word mercury__multi_map__HeadVar__2_2)
{
  {
    MR_bool mercury__multi_map__succeeded;
    MR_Word mercury__multi_map__HeadVar__3_3;

    if ((mercury__multi_map__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__multi_map__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Box mercury__multi_map__V_6_6 = (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__2_2, (MR_Integer) 0));
        MR_Word mercury__multi_map__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__multi_map__V_8_8;
        MR_Word mercury__multi_map__V_9_9;

        {
          mercury__multi_map__V_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__multi_map__V_8_8, 0) = mercury__multi_map__V_17_17;
          MR_hl_field(MR_mktag(0), mercury__multi_map__V_8_8, 1) = mercury__multi_map__V_6_6;
        }
        {
          mercury__multi_map__V_9_9 = mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_2_f_in__list_0(mercury__multi_map__V_17_17, mercury__multi_map__V_7_7);
        }
        {
          mercury__multi_map__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__3_3, 0) = ((MR_Box) (mercury__multi_map__V_8_8));
          MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__3_3, 1) = ((MR_Box) (mercury__multi_map__V_9_9));
        }
      }
    return mercury__multi_map__HeadVar__3_3;
  }
}

static MR_Integer MR_CALL 
mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    MR_bool mercury__multi_map__succeeded;

    return (MR_Integer) 1200;
  }
}

void MR_CALL 
mercury__multi_map____Compare____multi_map_2_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_6,
  MR_Word mercury__multi_map__TypeInfo_for_V_7,
  MR_Word * mercury__multi_map__HeadVar__1_1,
  MR_Word mercury__multi_map__HeadVar__2_2,
  MR_Word mercury__multi_map__HeadVar__3_3)
{
  {
    MR_bool mercury__multi_map__succeeded;
    MR_Word mercury__multi_map__TypeCtorInfo_8_8 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    MR_Word mercury__multi_map__TypeInfo_9_9;
    MR_Word mercury__multi_map__Cast_HeadVar1_4 = mercury__multi_map__HeadVar__2_2;
    MR_Word mercury__multi_map__Cast_HeadVar2_5 = mercury__multi_map__HeadVar__3_3;

    {
      mercury__multi_map__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_9_9, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_8_8));
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_9_9, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_7));
    }
    {
      mercury__tree234____Compare____tree234_2_0(mercury__multi_map__TypeInfo_for_K_6, mercury__multi_map__TypeInfo_9_9, mercury__multi_map__HeadVar__1_1, (MR_Word) mercury__multi_map__Cast_HeadVar1_4, (MR_Word) mercury__multi_map__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mercury__multi_map____Unify____multi_map_2_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_5,
  MR_Word mercury__multi_map__TypeInfo_for_V_6,
  MR_Word mercury__multi_map__HeadVar__1_1,
  MR_Word mercury__multi_map__HeadVar__2_2)
{
  {
    MR_bool mercury__multi_map__succeeded;
    MR_Word mercury__multi_map__TypeCtorInfo_7_7 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    MR_Word mercury__multi_map__TypeInfo_8_8;
    MR_Word mercury__multi_map__Cast_HeadVar1_3 = mercury__multi_map__HeadVar__1_1;
    MR_Word mercury__multi_map__Cast_HeadVar2_4 = mercury__multi_map__HeadVar__2_2;

    {
      mercury__multi_map__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_8, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_7_7));
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_8, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_6));
    }
    {
      mercury__multi_map__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__multi_map__TypeInfo_for_K_5, mercury__multi_map__TypeInfo_8_8, (MR_Word) mercury__multi_map__Cast_HeadVar1_3, (MR_Word) mercury__multi_map__Cast_HeadVar2_4);
    }
    return mercury__multi_map__succeeded;
  }
}

void MR_CALL 
mercury__multi_map__accumulate_length_3_p_0(
  MR_Word mercury__multi_map__TypeInfo_for_V_10,
  MR_Word mercury__multi_map__Vs_4,
  MR_Integer mercury__multi_map__STATE_VARIABLE_Count_0_7,
  MR_Integer * mercury__multi_map__STATE_VARIABLE_Count_8)
{
  {
    MR_bool mercury__multi_map__succeeded;
    MR_Integer mercury__multi_map__NVs_6;

    {
      mercury__list__length_acc_3_p_0(mercury__multi_map__TypeInfo_for_V_10, mercury__multi_map__Vs_4, (MR_Integer) 0, &mercury__multi_map__NVs_6);
    }
    *mercury__multi_map__STATE_VARIABLE_Count_8 = (mercury__multi_map__STATE_VARIABLE_Count_0_7 + mercury__multi_map__NVs_6);
  }
}

void MR_CALL 
mercury__multi_map__from_corresponding_lists_2_4_p_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_33,
  MR_Word mercury__multi_map__TypeInfo_for_V_34,
  MR_Word mercury__multi_map__HeadVar__1_1,
  MR_Word mercury__multi_map__HeadVar__2_2,
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_3,
  MR_Word * mercury__multi_map__STATE_VARIABLE_MultiMap_4)
{
  while (MR_TRUE)
    {
      /* tailcall optimized into a loop */
      {
        MR_bool mercury__multi_map__succeeded;

        if ((mercury__multi_map__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          if ((mercury__multi_map__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            *mercury__multi_map__STATE_VARIABLE_MultiMap_4 = mercury__multi_map__STATE_VARIABLE_MultiMap_0_3;
          else
            {
              {
                mercury__require__unexpected_3_p_0((MR_String) "multi_map", (MR_String) "from_corresponding_lists", (MR_String) "list length mismatch");
                return;
              }
            }
        else
          {
            MR_Word mercury__multi_map__V_35_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__1_1, (MR_Integer) 1)));
            MR_Box mercury__multi_map__V_36_36 = (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__1_1, (MR_Integer) 0));

            if ((mercury__multi_map__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__unexpected_3_p_0((MR_String) "multi_map", (MR_String) "from_corresponding_lists", (MR_String) "list length mismatch");
                  return;
                }
              }
            else
              {
                MR_Box mercury__multi_map__Value_26 = (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__2_2, (MR_Integer) 0));
                MR_Word mercury__multi_map__Values_27 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__multi_map__HeadVar__2_2, (MR_Integer) 1)));
                MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_31_31;

                {
                  mercury__multi_map__set_4_p_0(mercury__multi_map__TypeInfo_for_K_33, mercury__multi_map__TypeInfo_for_V_34, mercury__multi_map__V_36_36, mercury__multi_map__Value_26, mercury__multi_map__STATE_VARIABLE_MultiMap_0_3, &mercury__multi_map__STATE_VARIABLE_MultiMap_31_31);
                }
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__multi_map__HeadVar__1__tmp_copy_1 = mercury__multi_map__V_35_35;
                  MR_Word mercury__multi_map__HeadVar__2__tmp_copy_2 = mercury__multi_map__Values_27;
                  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0__tmp_copy_3 = mercury__multi_map__STATE_VARIABLE_MultiMap_31_31;

                  mercury__multi_map__STATE_VARIABLE_MultiMap_0_3 = mercury__multi_map__STATE_VARIABLE_MultiMap_0__tmp_copy_3;
                  mercury__multi_map__HeadVar__2_2 = mercury__multi_map__HeadVar__2__tmp_copy_2;
                  mercury__multi_map__HeadVar__1_1 = mercury__multi_map__HeadVar__1__tmp_copy_1;
                }
                continue;
              }
          }
      }
      break;
    }
}

void MR_CALL 
mercury__multi_map__add_from_pair_3_p_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_10,
  MR_Word mercury__multi_map__TypeInfo_for_V_11,
  MR_Word mercury__multi_map__HeadVar__1_1,
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_7,
  MR_Word * mercury__multi_map__STATE_VARIABLE_MultiMap_8)
{
  {
    MR_bool mercury__multi_map__succeeded;
    MR_Box mercury__multi_map__K_4 = (MR_hl_field(MR_mktag(0), mercury__multi_map__HeadVar__1_1, (MR_Integer) 0));
    MR_Box mercury__multi_map__V_5 = (MR_hl_field(MR_mktag(0), mercury__multi_map__HeadVar__1_1, (MR_Integer) 1));

    {
      mercury__multi_map__set_4_p_0(mercury__multi_map__TypeInfo_for_K_10, mercury__multi_map__TypeInfo_for_V_11, mercury__multi_map__K_4, mercury__multi_map__V_5, mercury__multi_map__STATE_VARIABLE_MultiMap_0_7, mercury__multi_map__STATE_VARIABLE_MultiMap_8);
    }
  }
}

void MR_CALL 
mercury__multi_map__to_flat_assoc_list_acc_4_p_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_18,
  MR_Word mercury__multi_map__TypeInfo_for_V_19,
  MR_Box mercury__multi_map__Key_5,
  MR_Word mercury__multi_map__Values_6,
  MR_Word mercury__multi_map__STATE_VARIABLE_Cord_0_10,
  MR_Word * mercury__multi_map__STATE_VARIABLE_Cord_11)
{
  {
    MR_bool mercury__multi_map__succeeded;
    MR_Word mercury__multi_map__TypeCtorInfo_20_20 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
    MR_Word mercury__multi_map__TypeInfo_21_21;
    MR_Word mercury__multi_map__KeyValues_8;
    MR_Word mercury__multi_map__V_16_16;
    MR_Word mercury__multi_map__conv0_V_16_16;
    MR_Word mercury__multi_map__conv1_STATE_VARIABLE_Cord_11;

    {
      mercury__multi_map__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_21_21, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_20_20));
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_21_21, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_K_18));
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_21_21, 2) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_19));
    }
    {
      mercury__multi_map__KeyValues_8 = mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_52_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_54_44_32_55_44_32_56_93_95_48_2_f_in__list_0(mercury__multi_map__Key_5, mercury__multi_map__Values_6);
    }
    {
      mercury__multi_map__conv0_V_16_16 = mercury__cord__from_list_1_f_0(mercury__multi_map__TypeInfo_21_21, (MR_Word) mercury__multi_map__KeyValues_8);
    }
    mercury__multi_map__V_16_16 = (MR_Word) mercury__multi_map__conv0_V_16_16;
    {
      mercury__multi_map__conv1_STATE_VARIABLE_Cord_11 = mercury__cord__f_43_43_2_f_0(mercury__multi_map__TypeInfo_21_21, (MR_Word) mercury__multi_map__STATE_VARIABLE_Cord_0_10, (MR_Word) mercury__multi_map__V_16_16);
    }
    *mercury__multi_map__STATE_VARIABLE_Cord_11 = (MR_Word) mercury__multi_map__conv1_STATE_VARIABLE_Cord_11;
  }
}

void MR_CALL 
mercury__multi_map__assoc_list_merge_3_p_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_20,
  MR_Word mercury__multi_map__TypeInfo_for_V_21,
  MR_Word mercury__multi_map__ListA_4,
  MR_Word mercury__multi_map__ListB_5,
  MR_Word * mercury__multi_map__List_6)
{
  {
    MR_bool mercury__multi_map__succeeded;

    if ((mercury__multi_map__ListA_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__multi_map__List_6 = mercury__multi_map__ListB_5;
    else
      {
        MR_Word mercury__multi_map__HeadA_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__multi_map__ListA_4, (MR_Integer) 0)));
        MR_Word mercury__multi_map__TailA_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__multi_map__ListA_4, (MR_Integer) 1)));

        if ((mercury__multi_map__ListB_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          *mercury__multi_map__List_6 = mercury__multi_map__ListA_4;
        else
          {
            MR_Word mercury__multi_map__HeadB_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__multi_map__ListB_5, (MR_Integer) 0)));
            MR_Word mercury__multi_map__TailB_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__multi_map__ListB_5, (MR_Integer) 1)));
            MR_Box mercury__multi_map__KeyA_11 = (MR_hl_field(MR_mktag(0), mercury__multi_map__HeadA_7, (MR_Integer) 0));
            MR_Word mercury__multi_map__ValuesA_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__multi_map__HeadA_7, (MR_Integer) 1)));
            MR_Box mercury__multi_map__KeyB_13 = (MR_hl_field(MR_mktag(0), mercury__multi_map__HeadB_9, (MR_Integer) 0));
            MR_Word mercury__multi_map__ValuesB_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__multi_map__HeadB_9, (MR_Integer) 1)));
            MR_Word mercury__multi_map__Res_15;
            MR_Box mercury__multi_map__Key_16;
            MR_Word mercury__multi_map__Values_17;
            MR_Word mercury__multi_map__Tail_18;
            MR_Word mercury__multi_map__V_19_19;

            {
              mercury__builtin__compare_3_p_0(mercury__multi_map__TypeInfo_for_K_20, &mercury__multi_map__Res_15, mercury__multi_map__KeyA_11, mercury__multi_map__KeyB_13);
            }
            switch (mercury__multi_map__Res_15) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 1:
                {
                  mercury__multi_map__Key_16 = mercury__multi_map__KeyA_11;
                  mercury__multi_map__Values_17 = mercury__multi_map__ValuesA_12;
                  {
                    mercury__multi_map__assoc_list_merge_3_p_0(mercury__multi_map__TypeInfo_for_K_20, mercury__multi_map__TypeInfo_for_V_21, mercury__multi_map__TailA_8, mercury__multi_map__ListB_5, &mercury__multi_map__Tail_18);
                  }
                }
                break;
              case (MR_Integer) 0:
                {
                  mercury__multi_map__Key_16 = mercury__multi_map__KeyA_11;
                  {
                    mercury__list__append_3_p_1(mercury__multi_map__TypeInfo_for_V_21, mercury__multi_map__ValuesA_12, mercury__multi_map__ValuesB_14, &mercury__multi_map__Values_17);
                  }
                  {
                    mercury__multi_map__assoc_list_merge_3_p_0(mercury__multi_map__TypeInfo_for_K_20, mercury__multi_map__TypeInfo_for_V_21, mercury__multi_map__TailA_8, mercury__multi_map__TailB_10, &mercury__multi_map__Tail_18);
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  mercury__multi_map__Key_16 = mercury__multi_map__KeyB_13;
                  mercury__multi_map__Values_17 = mercury__multi_map__ValuesB_14;
                  {
                    mercury__multi_map__assoc_list_merge_3_p_0(mercury__multi_map__TypeInfo_for_K_20, mercury__multi_map__TypeInfo_for_V_21, mercury__multi_map__ListA_4, mercury__multi_map__TailB_10, &mercury__multi_map__Tail_18);
                  }
                }
                break;
            }
            {
              mercury__multi_map__V_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__multi_map__V_19_19, 0) = mercury__multi_map__Key_16;
              MR_hl_field(MR_mktag(0), mercury__multi_map__V_19_19, 1) = ((MR_Box) (mercury__multi_map__Values_17));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              *mercury__multi_map__List_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__multi_map__V_19_19));
              MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__multi_map__Tail_18));
            }
          }
      }
  }
}

void MR_CALL 
mercury__multi_map__all_count_2_p_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_7,
  MR_Word mercury__multi_map__TypeInfo_for_V_8,
  MR_Word mercury__multi_map__MultiMap_3,
  MR_Integer * mercury__multi_map__Count_4)
{
  {
    MR_bool mercury__multi_map__succeeded;

    {
      mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_118_97_108_117_101_115_95_95_104_111_57_95_95_91_49_44_32_51_44_32_52_44_32_53_93_95_48_4_p_in__tree234_0(mercury__multi_map__TypeInfo_for_V_8, mercury__multi_map__MultiMap_3, (MR_Integer) 0, mercury__multi_map__Count_4);
    }
  }
}

MR_Integer MR_CALL 
mercury__multi_map__all_count_1_f_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_5,
  MR_Word mercury__multi_map__TypeInfo_for_V_6,
  MR_Word mercury__multi_map__MultiMap0_3)
{
  {
    MR_bool mercury__multi_map__succeeded;
    MR_Integer mercury__multi_map__Count_4;

    {
      mercury__multi_map__all_count_2_p_0(mercury__multi_map__TypeInfo_for_K_5, mercury__multi_map__TypeInfo_for_V_6, mercury__multi_map__MultiMap0_3, &mercury__multi_map__Count_4);
    }
    return mercury__multi_map__Count_4;
  }
}

void MR_CALL 
mercury__multi_map__count_2_p_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_5,
  MR_Word mercury__multi_map__TypeInfo_for_V_6,
  MR_Word mercury__multi_map__MultiMap_3,
  MR_Integer * mercury__multi_map__Count_4)
{
  {
    MR_bool mercury__multi_map__succeeded;
    MR_Word mercury__multi_map__TypeCtorInfo_7_7 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    MR_Word mercury__multi_map__TypeInfo_8_8;

    {
      mercury__multi_map__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_8, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_7_7));
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_8, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_6));
    }
    {
      mercury__tree234__count_2_p_0(mercury__multi_map__TypeInfo_for_K_5, mercury__multi_map__TypeInfo_8_8, (MR_Word) mercury__multi_map__MultiMap_3, mercury__multi_map__Count_4);
    }
  }
}

MR_Integer MR_CALL 
mercury__multi_map__count_1_f_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_5,
  MR_Word mercury__multi_map__TypeInfo_for_V_6,
  MR_Word mercury__multi_map__MultiMap0_3)
{
  {
    MR_bool mercury__multi_map__succeeded;
    MR_Integer mercury__multi_map__Count_4;
    MR_Word mercury__multi_map__TypeCtorInfo_7_9 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    MR_Word mercury__multi_map__TypeInfo_8_10;

    {
      mercury__multi_map__TypeInfo_8_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_10, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_7_9));
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_10, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_6));
    }
    {
      mercury__tree234__count_2_p_0(mercury__multi_map__TypeInfo_for_K_5, mercury__multi_map__TypeInfo_8_10, (MR_Word) mercury__multi_map__MultiMap0_3, &mercury__multi_map__Count_4);
    }
    return mercury__multi_map__Count_4;
  }
}

void MR_CALL 
mercury__multi_map__values_2_p_0(
  MR_Word mercury__multi_map__TypeInfo_for__K_6,
  MR_Word mercury__multi_map__TypeInfo_for_V_7,
  MR_Word mercury__multi_map__MultiMap_3,
  MR_Word * mercury__multi_map__Values_4)
{
  {
    MR_bool mercury__multi_map__succeeded;
    MR_Word mercury__multi_map__TypeCtorInfo_8_8 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    MR_Word mercury__multi_map__TypeInfo_10_22;
    MR_Word mercury__multi_map__ValueLists_5;
    MR_Word mercury__multi_map__V_5_14;
    MR_Word mercury__multi_map__V_5_18;
    MR_Word mercury__multi_map__V_6_19;
    MR_Word mercury__multi_map__conv0_ValueLists_5;

    {
      mercury__multi_map__TypeInfo_10_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_22, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_8_8));
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_22, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_7));
    }
    mercury__multi_map__V_5_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__tree234__values_acc_3_p_0(mercury__multi_map__TypeInfo_for__K_6, mercury__multi_map__TypeInfo_10_22, (MR_Word) mercury__multi_map__MultiMap_3, (MR_Word) mercury__multi_map__V_5_14, &mercury__multi_map__conv0_ValueLists_5);
    }
    mercury__multi_map__ValueLists_5 = (MR_Word) mercury__multi_map__conv0_ValueLists_5;
    {
      mercury__list__reverse_2_p_0(mercury__multi_map__TypeInfo_10_22, mercury__multi_map__ValueLists_5, &mercury__multi_map__V_5_18);
    }
    mercury__multi_map__V_6_19 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__list__condense_acc_3_p_0(mercury__multi_map__TypeInfo_for_V_7, mercury__multi_map__V_5_18, mercury__multi_map__V_6_19, mercury__multi_map__Values_4);
    }
  }
}

MR_Word MR_CALL 
mercury__multi_map__values_1_f_0(
  MR_Word mercury__multi_map__TypeInfo_for__K_5,
  MR_Word mercury__multi_map__TypeInfo_for_V_6,
  MR_Word mercury__multi_map__MultiMap_3)
{
  {
    MR_bool mercury__multi_map__succeeded;
    MR_Word mercury__multi_map__Values_4;

    {
      mercury__multi_map__values_2_p_0(mercury__multi_map__TypeInfo_for__K_5, mercury__multi_map__TypeInfo_for_V_6, mercury__multi_map__MultiMap_3, &mercury__multi_map__Values_4);
    }
    return mercury__multi_map__Values_4;
  }
}

void MR_CALL 
mercury__multi_map__keys_2_p_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_5,
  MR_Word mercury__multi_map__TypeInfo_for__V_6,
  MR_Word mercury__multi_map__MultiMap_3,
  MR_Word * mercury__multi_map__Keys_4)
{
  {
    MR_bool mercury__multi_map__succeeded;
    MR_Word mercury__multi_map__TypeCtorInfo_7_7 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    MR_Word mercury__multi_map__TypeInfo_8_8;
    MR_Word mercury__multi_map__V_5_13;

    {
      mercury__multi_map__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_8, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_7_7));
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_8, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for__V_6));
    }
    mercury__multi_map__V_5_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__tree234__keys_acc_3_p_0(mercury__multi_map__TypeInfo_for_K_5, mercury__multi_map__TypeInfo_8_8, (MR_Word) mercury__multi_map__MultiMap_3, mercury__multi_map__V_5_13, mercury__multi_map__Keys_4);
    }
  }
}

MR_Word MR_CALL 
mercury__multi_map__keys_1_f_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_5,
  MR_Word mercury__multi_map__TypeInfo_for__V_6,
  MR_Word mercury__multi_map__MultiMap_3)
{
  {
    MR_bool mercury__multi_map__succeeded;
    MR_Word mercury__multi_map__Keys_4;
    MR_Word mercury__multi_map__TypeCtorInfo_7_9 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    MR_Word mercury__multi_map__TypeInfo_8_10;
    MR_Word mercury__multi_map__V_5_15;

    {
      mercury__multi_map__TypeInfo_8_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_10, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_7_9));
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_10, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for__V_6));
    }
    mercury__multi_map__V_5_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__tree234__keys_acc_3_p_0(mercury__multi_map__TypeInfo_for_K_5, mercury__multi_map__TypeInfo_8_10, (MR_Word) mercury__multi_map__MultiMap_3, mercury__multi_map__V_5_15, &mercury__multi_map__Keys_4);
    }
    return mercury__multi_map__Keys_4;
  }
}

void MR_CALL 
mercury__multi_map__apply_to_list_3_p_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_11,
  MR_Word mercury__multi_map__TypeInfo_for_V_12,
  MR_Word mercury__multi_map__HeadVar__1_1,
  MR_Word mercury__multi_map__MultiMap_2,
  MR_Word * mercury__multi_map__HeadVar__3_3)
{
  {
    MR_bool mercury__multi_map__succeeded;

    if ((mercury__multi_map__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      *mercury__multi_map__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
      {
        MR_Word mercury__multi_map__TypeCtorInfo_13_13 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
        MR_Word mercury__multi_map__TypeInfo_10_21;
        MR_Word mercury__multi_map__ValueLists_10;
        MR_Word mercury__multi_map__V_5_17;
        MR_Word mercury__multi_map__V_6_18;
        MR_Word mercury__multi_map__conv0_ValueLists_10;

        {
          mercury__multi_map__TypeInfo_10_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_21, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_13_13));
          MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_21, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_12));
        }
        {
          mercury__map__apply_to_list_3_p_0(mercury__multi_map__TypeInfo_for_K_11, mercury__multi_map__TypeInfo_10_21, mercury__multi_map__HeadVar__1_1, (MR_Word) mercury__multi_map__MultiMap_2, &mercury__multi_map__conv0_ValueLists_10);
        }
        mercury__multi_map__ValueLists_10 = (MR_Word) mercury__multi_map__conv0_ValueLists_10;
        {
          mercury__list__reverse_2_p_0(mercury__multi_map__TypeInfo_10_21, mercury__multi_map__ValueLists_10, &mercury__multi_map__V_5_17);
        }
        mercury__multi_map__V_6_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        {
          mercury__list__condense_acc_3_p_0(mercury__multi_map__TypeInfo_for_V_12, mercury__multi_map__V_5_17, mercury__multi_map__V_6_18, mercury__multi_map__HeadVar__3_3);
        }
      }
  }
}

MR_Word MR_CALL 
mercury__multi_map__apply_to_list_2_f_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_7,
  MR_Word mercury__multi_map__TypeInfo_for_V_8,
  MR_Word mercury__multi_map__Keys_4,
  MR_Word mercury__multi_map__MultiMap_5)
{
  {
    MR_bool mercury__multi_map__succeeded;
    MR_Word mercury__multi_map__Values_6;

    {
      mercury__multi_map__apply_to_list_3_p_0(mercury__multi_map__TypeInfo_for_K_7, mercury__multi_map__TypeInfo_for_V_8, mercury__multi_map__Keys_4, mercury__multi_map__MultiMap_5, &mercury__multi_map__Values_6);
    }
    return mercury__multi_map__Values_6;
  }
}

void MR_CALL 
mercury__multi_map__from_corresponding_list_lists_3_p_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_7,
  MR_Word mercury__multi_map__TypeInfo_for_V_8,
  MR_Word mercury__multi_map__Keys_4,
  MR_Word mercury__multi_map__Values_5,
  MR_Word * mercury__multi_map__MultiMap_6)
{
  {
    MR_bool mercury__multi_map__succeeded;
    MR_Word mercury__multi_map__TypeCtorInfo_9_9 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    MR_Word mercury__multi_map__TypeInfo_10_10;
    MR_Word mercury__multi_map__V_7_14;
    MR_Word mercury__multi_map__V_5_17;
    MR_Word mercury__multi_map__conv0_V_7_14;
    MR_Word mercury__multi_map__conv1_MultiMap_6;

    {
      mercury__multi_map__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_10, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_9_9));
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_10, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_8));
    }
    {
      mercury__assoc_list__from_corresponding_lists_3_p_0(mercury__multi_map__TypeInfo_for_K_7, mercury__multi_map__TypeInfo_10_10, mercury__multi_map__Keys_4, (MR_Word) mercury__multi_map__Values_5, &mercury__multi_map__conv0_V_7_14);
    }
    mercury__multi_map__V_7_14 = (MR_Word) mercury__multi_map__conv0_V_7_14;
    mercury__multi_map__V_5_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__tree234__assoc_list_to_tree234_acc_3_p_0(mercury__multi_map__TypeInfo_for_K_7, mercury__multi_map__TypeInfo_10_10, (MR_Word) mercury__multi_map__V_7_14, (MR_Word) mercury__multi_map__V_5_17, &mercury__multi_map__conv1_MultiMap_6);
    }
    *mercury__multi_map__MultiMap_6 = (MR_Word) mercury__multi_map__conv1_MultiMap_6;
  }
}

MR_Word MR_CALL 
mercury__multi_map__from_corresponding_list_lists_2_f_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_7,
  MR_Word mercury__multi_map__TypeInfo_for_V_8,
  MR_Word mercury__multi_map__Keys_4,
  MR_Word mercury__multi_map__Values_5)
{
  {
    MR_bool mercury__multi_map__succeeded;
    MR_Word mercury__multi_map__MultiMap_6;
    MR_Word mercury__multi_map__TypeCtorInfo_9_12 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    MR_Word mercury__multi_map__TypeInfo_10_13;
    MR_Word mercury__multi_map__V_7_17;
    MR_Word mercury__multi_map__V_5_20;
    MR_Word mercury__multi_map__conv0_V_7_17;
    MR_Word mercury__multi_map__conv1_MultiMap_6;

    {
      mercury__multi_map__TypeInfo_10_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_13, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_9_12));
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_13, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_8));
    }
    {
      mercury__assoc_list__from_corresponding_lists_3_p_0(mercury__multi_map__TypeInfo_for_K_7, mercury__multi_map__TypeInfo_10_13, mercury__multi_map__Keys_4, (MR_Word) mercury__multi_map__Values_5, &mercury__multi_map__conv0_V_7_17);
    }
    mercury__multi_map__V_7_17 = (MR_Word) mercury__multi_map__conv0_V_7_17;
    mercury__multi_map__V_5_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__tree234__assoc_list_to_tree234_acc_3_p_0(mercury__multi_map__TypeInfo_for_K_7, mercury__multi_map__TypeInfo_10_13, (MR_Word) mercury__multi_map__V_7_17, (MR_Word) mercury__multi_map__V_5_20, &mercury__multi_map__conv1_MultiMap_6);
    }
    mercury__multi_map__MultiMap_6 = (MR_Word) mercury__multi_map__conv1_MultiMap_6;
    return mercury__multi_map__MultiMap_6;
  }
}

void MR_CALL 
mercury__multi_map__from_corresponding_lists_3_p_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_8,
  MR_Word mercury__multi_map__TypeInfo_for_V_9,
  MR_Word mercury__multi_map__Keys_4,
  MR_Word mercury__multi_map__Values_5,
  MR_Word * mercury__multi_map__MultiMap_6)
{
  {
    MR_bool mercury__multi_map__succeeded;
    MR_Word mercury__multi_map__MultiMap0_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__multi_map__from_corresponding_lists_2_4_p_0(mercury__multi_map__TypeInfo_for_K_8, mercury__multi_map__TypeInfo_for_V_9, mercury__multi_map__Keys_4, mercury__multi_map__Values_5, mercury__multi_map__MultiMap0_7, mercury__multi_map__MultiMap_6);
    }
  }
}

MR_Word MR_CALL 
mercury__multi_map__from_corresponding_lists_2_f_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_7,
  MR_Word mercury__multi_map__TypeInfo_for_V_8,
  MR_Word mercury__multi_map__Keys_4,
  MR_Word mercury__multi_map__Values_5)
{
  {
    MR_bool mercury__multi_map__succeeded;
    MR_Word mercury__multi_map__MultiMap_6;
    MR_Word mercury__multi_map__MultiMap0_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__multi_map__from_corresponding_lists_2_4_p_0(mercury__multi_map__TypeInfo_for_K_7, mercury__multi_map__TypeInfo_for_V_8, mercury__multi_map__Keys_4, mercury__multi_map__Values_5, mercury__multi_map__MultiMap0_12, &mercury__multi_map__MultiMap_6);
    }
    return mercury__multi_map__MultiMap_6;
  }
}

void MR_CALL 
mercury__multi_map__from_sorted_assoc_list_2_p_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_5,
  MR_Word mercury__multi_map__TypeInfo_for_V_6,
  MR_Word mercury__multi_map__AssocList_3,
  MR_Word * mercury__multi_map__MultiMap_4)
{
  {
    MR_bool mercury__multi_map__succeeded;
    MR_Word mercury__multi_map__TypeCtorInfo_7_7 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    MR_Word mercury__multi_map__TypeInfo_8_8;
    MR_Word mercury__multi_map__conv0_MultiMap_4;

    {
      mercury__multi_map__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_8, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_7_7));
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_8, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_6));
    }
    {
      mercury__tree234__from_sorted_assoc_list_2_p_0(mercury__multi_map__TypeInfo_for_K_5, mercury__multi_map__TypeInfo_8_8, (MR_Word) mercury__multi_map__AssocList_3, &mercury__multi_map__conv0_MultiMap_4);
    }
    *mercury__multi_map__MultiMap_4 = (MR_Word) mercury__multi_map__conv0_MultiMap_4;
  }
}

MR_Word MR_CALL 
mercury__multi_map__from_sorted_assoc_list_1_f_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_5,
  MR_Word mercury__multi_map__TypeInfo_for_V_6,
  MR_Word mercury__multi_map__AssocList_3)
{
  {
    MR_bool mercury__multi_map__succeeded;
    MR_Word mercury__multi_map__MultiMap_4;
    MR_Word mercury__multi_map__TypeCtorInfo_7_9 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    MR_Word mercury__multi_map__TypeInfo_8_10;
    MR_Word mercury__multi_map__conv0_MultiMap_4;

    {
      mercury__multi_map__TypeInfo_8_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_10, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_7_9));
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_10, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_6));
    }
    {
      mercury__tree234__from_sorted_assoc_list_2_p_0(mercury__multi_map__TypeInfo_for_K_5, mercury__multi_map__TypeInfo_8_10, (MR_Word) mercury__multi_map__AssocList_3, &mercury__multi_map__conv0_MultiMap_4);
    }
    mercury__multi_map__MultiMap_4 = (MR_Word) mercury__multi_map__conv0_MultiMap_4;
    return mercury__multi_map__MultiMap_4;
  }
}

void MR_CALL 
mercury__multi_map__from_assoc_list_2_p_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_5,
  MR_Word mercury__multi_map__TypeInfo_for_V_6,
  MR_Word mercury__multi_map__AssocList_3,
  MR_Word * mercury__multi_map__MultiMap_4)
{
  {
    MR_bool mercury__multi_map__succeeded;
    MR_Word mercury__multi_map__TypeCtorInfo_7_7 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    MR_Word mercury__multi_map__TypeInfo_8_8;
    MR_Word mercury__multi_map__V_5_13;
    MR_Word mercury__multi_map__conv0_MultiMap_4;

    {
      mercury__multi_map__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_8, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_7_7));
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_8, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_6));
    }
    mercury__multi_map__V_5_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__tree234__assoc_list_to_tree234_acc_3_p_0(mercury__multi_map__TypeInfo_for_K_5, mercury__multi_map__TypeInfo_8_8, (MR_Word) mercury__multi_map__AssocList_3, (MR_Word) mercury__multi_map__V_5_13, &mercury__multi_map__conv0_MultiMap_4);
    }
    *mercury__multi_map__MultiMap_4 = (MR_Word) mercury__multi_map__conv0_MultiMap_4;
  }
}

MR_Word MR_CALL 
mercury__multi_map__from_assoc_list_1_f_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_5,
  MR_Word mercury__multi_map__TypeInfo_for_V_6,
  MR_Word mercury__multi_map__AssocList_3)
{
  {
    MR_bool mercury__multi_map__succeeded;
    MR_Word mercury__multi_map__MultiMap_4;
    MR_Word mercury__multi_map__TypeCtorInfo_7_9 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    MR_Word mercury__multi_map__TypeInfo_8_10;
    MR_Word mercury__multi_map__V_5_15;
    MR_Word mercury__multi_map__conv0_MultiMap_4;

    {
      mercury__multi_map__TypeInfo_8_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_10, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_7_9));
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_10, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_6));
    }
    mercury__multi_map__V_5_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__tree234__assoc_list_to_tree234_acc_3_p_0(mercury__multi_map__TypeInfo_for_K_5, mercury__multi_map__TypeInfo_8_10, (MR_Word) mercury__multi_map__AssocList_3, (MR_Word) mercury__multi_map__V_5_15, &mercury__multi_map__conv0_MultiMap_4);
    }
    mercury__multi_map__MultiMap_4 = (MR_Word) mercury__multi_map__conv0_MultiMap_4;
    return mercury__multi_map__MultiMap_4;
  }
}

void MR_CALL 
mercury__multi_map__to_assoc_list_2_p_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_5,
  MR_Word mercury__multi_map__TypeInfo_for_V_6,
  MR_Word mercury__multi_map__MultiMap_3,
  MR_Word * mercury__multi_map__AssocList_4)
{
  {
    MR_bool mercury__multi_map__succeeded;
    MR_Word mercury__multi_map__TypeCtorInfo_7_7 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    MR_Word mercury__multi_map__TypeInfo_8_8;
    MR_Word mercury__multi_map__V_5_13;
    MR_Word mercury__multi_map__conv0_AssocList_4;

    {
      mercury__multi_map__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_8, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_7_7));
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_8, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_6));
    }
    mercury__multi_map__V_5_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__multi_map__TypeInfo_for_K_5, mercury__multi_map__TypeInfo_8_8, (MR_Word) mercury__multi_map__MultiMap_3, (MR_Word) mercury__multi_map__V_5_13, &mercury__multi_map__conv0_AssocList_4);
    }
    *mercury__multi_map__AssocList_4 = (MR_Word) mercury__multi_map__conv0_AssocList_4;
  }
}

MR_Word MR_CALL 
mercury__multi_map__to_assoc_list_1_f_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_5,
  MR_Word mercury__multi_map__TypeInfo_for_V_6,
  MR_Word mercury__multi_map__MultiMap_3)
{
  {
    MR_bool mercury__multi_map__succeeded;
    MR_Word mercury__multi_map__AssocList_4;
    MR_Word mercury__multi_map__TypeCtorInfo_7_9 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    MR_Word mercury__multi_map__TypeInfo_8_10;
    MR_Word mercury__multi_map__V_5_15;
    MR_Word mercury__multi_map__conv0_AssocList_4;

    {
      mercury__multi_map__TypeInfo_8_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_10, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_7_9));
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_10, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_6));
    }
    mercury__multi_map__V_5_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__multi_map__TypeInfo_for_K_5, mercury__multi_map__TypeInfo_8_10, (MR_Word) mercury__multi_map__MultiMap_3, (MR_Word) mercury__multi_map__V_5_15, &mercury__multi_map__conv0_AssocList_4);
    }
    mercury__multi_map__AssocList_4 = (MR_Word) mercury__multi_map__conv0_AssocList_4;
    return mercury__multi_map__AssocList_4;
  }
}

void MR_CALL 
mercury__multi_map__from_flat_assoc_list_2_p_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_7,
  MR_Word mercury__multi_map__TypeInfo_for_V_8,
  MR_Word mercury__multi_map__AssocList_3,
  MR_Word * mercury__multi_map__MultiMap_4)
{
  {
    MR_bool mercury__multi_map__succeeded;
    MR_Word mercury__multi_map__V_6_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    {
      mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_54_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_53_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__list_0(mercury__multi_map__TypeInfo_for_K_7, mercury__multi_map__TypeInfo_for_V_8, mercury__multi_map__AssocList_3, mercury__multi_map__V_6_6, mercury__multi_map__MultiMap_4);
    }
  }
}

MR_Word MR_CALL 
mercury__multi_map__from_flat_assoc_list_1_f_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_5,
  MR_Word mercury__multi_map__TypeInfo_for_V_6,
  MR_Word mercury__multi_map__AssocList_3)
{
  {
    MR_bool mercury__multi_map__succeeded;
    MR_Word mercury__multi_map__MultiMap_4;

    {
      mercury__multi_map__from_flat_assoc_list_2_p_0(mercury__multi_map__TypeInfo_for_K_5, mercury__multi_map__TypeInfo_for_V_6, mercury__multi_map__AssocList_3, &mercury__multi_map__MultiMap_4);
    }
    return mercury__multi_map__MultiMap_4;
  }
}

void MR_CALL 
mercury__multi_map__to_flat_assoc_list_2_p_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_8,
  MR_Word mercury__multi_map__TypeInfo_for_V_9,
  MR_Word mercury__multi_map__MultiMap_3,
  MR_Word * mercury__multi_map__AssocList_4)
{
  {
    MR_bool mercury__multi_map__succeeded;
    MR_Word mercury__multi_map__TypeCtorInfo_14_14 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
    MR_Word mercury__multi_map__TypeInfo_15_15;
    MR_Word mercury__multi_map__Cord_5;
    MR_Word mercury__multi_map__V_7_7;
    MR_Word mercury__multi_map__conv0_AssocList_4;

    {
      mercury__multi_map__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_15_15, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_14_14));
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_15_15, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_K_8));
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_15_15, 2) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_9));
    }
    mercury__multi_map__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__multi_map__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_111_108_100_108_95_95_104_111_56_95_95_91_49_44_32_50_44_32_51_44_32_52_44_32_55_44_32_56_44_32_57_44_32_49_48_93_95_48_4_p_in__tree234_0(mercury__multi_map__TypeInfo_for_K_8, mercury__multi_map__TypeInfo_for_V_9, mercury__multi_map__MultiMap_3, mercury__multi_map__V_7_7, &mercury__multi_map__Cord_5);
    }
    {
      mercury__multi_map__conv0_AssocList_4 = mercury__cord__list_1_f_0(mercury__multi_map__TypeInfo_15_15, (MR_Word) mercury__multi_map__Cord_5);
    }
    *mercury__multi_map__AssocList_4 = (MR_Word) mercury__multi_map__conv0_AssocList_4;
  }
}

MR_Word MR_CALL 
mercury__multi_map__to_flat_assoc_list_1_f_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_5,
  MR_Word mercury__multi_map__TypeInfo_for_V_6,
  MR_Word mercury__multi_map__MultiMap_3)
{
  {
    MR_bool mercury__multi_map__succeeded;
    MR_Word mercury__multi_map__AssocList_4;

    {
      mercury__multi_map__to_flat_assoc_list_2_p_0(mercury__multi_map__TypeInfo_for_K_5, mercury__multi_map__TypeInfo_for_V_6, mercury__multi_map__MultiMap_3, &mercury__multi_map__AssocList_4);
    }
    return mercury__multi_map__AssocList_4;
  }
}

void MR_CALL 
mercury__multi_map__optimize_2_p_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_5,
  MR_Word mercury__multi_map__TypeInfo_for_V_6,
  MR_Word mercury__multi_map__MultiMap0_3,
  MR_Word * mercury__multi_map__MultiMap_4)
{
  {
    MR_bool mercury__multi_map__succeeded;

    *mercury__multi_map__MultiMap_4 = mercury__multi_map__MultiMap0_3;
  }
}

MR_Word MR_CALL 
mercury__multi_map__optimize_1_f_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_5,
  MR_Word mercury__multi_map__TypeInfo_for_V_6,
  MR_Word mercury__multi_map__MultiMap0_3)
{
  {
    MR_bool mercury__multi_map__succeeded;
    MR_Word mercury__multi_map__MultiMap_4 = mercury__multi_map__MultiMap0_3;

    return mercury__multi_map__MultiMap_4;
  }
}

void MR_CALL 
mercury__multi_map__merge_3_p_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_10,
  MR_Word mercury__multi_map__TypeInfo_for_V_11,
  MR_Word mercury__multi_map__M0_4,
  MR_Word mercury__multi_map__M1_5,
  MR_Word * mercury__multi_map__M_6)
{
  {
    MR_bool mercury__multi_map__succeeded;
    MR_Word mercury__multi_map__TypeCtorInfo_7_14 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    MR_Word mercury__multi_map__TypeInfo_8_37;
    MR_Word mercury__multi_map__ML0_7;
    MR_Word mercury__multi_map__ML1_8;
    MR_Word mercury__multi_map__ML_9;
    MR_Word mercury__multi_map__V_5_20;
    MR_Word mercury__multi_map__V_5_31;
    MR_Word mercury__multi_map__conv0_ML0_7;
    MR_Word mercury__multi_map__conv1_ML1_8;
    MR_Word mercury__multi_map__conv2_M_6;

    {
      mercury__multi_map__TypeInfo_8_37 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_37, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_7_14));
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_8_37, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_11));
    }
    mercury__multi_map__V_5_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__multi_map__TypeInfo_for_K_10, mercury__multi_map__TypeInfo_8_37, (MR_Word) mercury__multi_map__M0_4, (MR_Word) mercury__multi_map__V_5_20, &mercury__multi_map__conv0_ML0_7);
    }
    mercury__multi_map__ML0_7 = (MR_Word) mercury__multi_map__conv0_ML0_7;
    mercury__multi_map__V_5_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__tree234__tree234_to_assoc_list_acc_3_p_0(mercury__multi_map__TypeInfo_for_K_10, mercury__multi_map__TypeInfo_8_37, (MR_Word) mercury__multi_map__M1_5, (MR_Word) mercury__multi_map__V_5_31, &mercury__multi_map__conv1_ML1_8);
    }
    mercury__multi_map__ML1_8 = (MR_Word) mercury__multi_map__conv1_ML1_8;
    {
      mercury__multi_map__assoc_list_merge_3_p_0(mercury__multi_map__TypeInfo_for_K_10, mercury__multi_map__TypeInfo_for_V_11, mercury__multi_map__ML0_7, mercury__multi_map__ML1_8, &mercury__multi_map__ML_9);
    }
    {
      mercury__tree234__from_sorted_assoc_list_2_p_0(mercury__multi_map__TypeInfo_for_K_10, mercury__multi_map__TypeInfo_8_37, (MR_Word) mercury__multi_map__ML_9, &mercury__multi_map__conv2_M_6);
    }
    *mercury__multi_map__M_6 = (MR_Word) mercury__multi_map__conv2_M_6;
  }
}

MR_Word MR_CALL 
mercury__multi_map__merge_2_f_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_7,
  MR_Word mercury__multi_map__TypeInfo_for_V_8,
  MR_Word mercury__multi_map__MultiMapA_4,
  MR_Word mercury__multi_map__MultiMapB_5)
{
  {
    MR_bool mercury__multi_map__succeeded;
    MR_Word mercury__multi_map__MultiMap_6;

    {
      mercury__multi_map__merge_3_p_0(mercury__multi_map__TypeInfo_for_K_7, mercury__multi_map__TypeInfo_for_V_8, mercury__multi_map__MultiMapA_4, mercury__multi_map__MultiMapB_5, &mercury__multi_map__MultiMap_6);
    }
    return mercury__multi_map__MultiMap_6;
  }
}

void MR_CALL 
mercury__multi_map__select_3_p_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_7,
  MR_Word mercury__multi_map__TypeInfo_for_V_8,
  MR_Word mercury__multi_map__MultiMap0_4,
  MR_Word mercury__multi_map__KeySet_5,
  MR_Word * mercury__multi_map__MultiMap_6)
{
  {
    MR_bool mercury__multi_map__succeeded;
    MR_Word mercury__multi_map__TypeCtorInfo_9_9 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    MR_Word mercury__multi_map__TypeInfo_10_10;
    MR_Word mercury__multi_map__V_7_14;
    MR_Word mercury__multi_map__V_8_15;
    MR_Word mercury__multi_map__conv0_MultiMap_6;

    {
      mercury__multi_map__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_10, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_9_9));
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_10, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_8));
    }
    mercury__multi_map__V_7_14 = (MR_Word) mercury__multi_map__KeySet_5;
    mercury__multi_map__V_8_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__map__select_loop_4_p_0(mercury__multi_map__TypeInfo_for_K_7, mercury__multi_map__TypeInfo_10_10, mercury__multi_map__V_7_14, (MR_Word) mercury__multi_map__MultiMap0_4, (MR_Word) mercury__multi_map__V_8_15, &mercury__multi_map__conv0_MultiMap_6);
    }
    *mercury__multi_map__MultiMap_6 = (MR_Word) mercury__multi_map__conv0_MultiMap_6;
  }
}

MR_Word MR_CALL 
mercury__multi_map__select_2_f_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_7,
  MR_Word mercury__multi_map__TypeInfo_for_V_8,
  MR_Word mercury__multi_map__MultiMap0_4,
  MR_Word mercury__multi_map__KeySet_5)
{
  {
    MR_bool mercury__multi_map__succeeded;
    MR_Word mercury__multi_map__MultiMap_6;
    MR_Word mercury__multi_map__TypeCtorInfo_9_12 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    MR_Word mercury__multi_map__TypeInfo_10_13;
    MR_Word mercury__multi_map__V_7_17;
    MR_Word mercury__multi_map__V_8_18;
    MR_Word mercury__multi_map__conv0_MultiMap_6;

    {
      mercury__multi_map__TypeInfo_10_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_13, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_9_12));
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_13, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_8));
    }
    mercury__multi_map__V_7_17 = (MR_Word) mercury__multi_map__KeySet_5;
    mercury__multi_map__V_8_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__map__select_loop_4_p_0(mercury__multi_map__TypeInfo_for_K_7, mercury__multi_map__TypeInfo_10_13, mercury__multi_map__V_7_17, (MR_Word) mercury__multi_map__MultiMap0_4, (MR_Word) mercury__multi_map__V_8_18, &mercury__multi_map__conv0_MultiMap_6);
    }
    mercury__multi_map__MultiMap_6 = (MR_Word) mercury__multi_map__conv0_MultiMap_6;
    return mercury__multi_map__MultiMap_6;
  }
}

MR_bool MR_CALL 
mercury__multi_map__remove_smallest_4_p_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_9,
  MR_Word mercury__multi_map__TypeInfo_for_V_10,
  MR_Box * mercury__multi_map__MultiMap0_5,
  MR_Word * mercury__multi_map__Key_6,
  MR_Word mercury__multi_map__Values_7,
  MR_Word * mercury__multi_map__MultiMap_8)
{
  {
    MR_bool mercury__multi_map__succeeded;
    MR_Word mercury__multi_map__TypeCtorInfo_11_11 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    MR_Word mercury__multi_map__TypeInfo_12_12;
    MR_Word mercury__multi_map__V_9_21;
    MR_Box mercury__multi_map__conv1_Key_6;
    MR_Word mercury__multi_map__conv0_MultiMap_8;

    {
      mercury__multi_map__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_12_12, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_11_11));
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_12_12, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_10));
    }
    {
      mercury__multi_map__succeeded = mercury__tree234__remove_smallest_2_5_p_0(mercury__multi_map__TypeInfo_for_K_9, mercury__multi_map__TypeInfo_12_12, (MR_Word) mercury__multi_map__Values_7, mercury__multi_map__MultiMap0_5, &mercury__multi_map__conv1_Key_6, &mercury__multi_map__conv0_MultiMap_8, &mercury__multi_map__V_9_21);
    }
    if (mercury__multi_map__succeeded)
      {
        *mercury__multi_map__Key_6 = ((MR_Word) mercury__multi_map__conv1_Key_6);
        *mercury__multi_map__MultiMap_8 = (MR_Word) mercury__multi_map__conv0_MultiMap_8;
        mercury__multi_map__succeeded = MR_TRUE;
      }
    return mercury__multi_map__succeeded;
  }
}

void MR_CALL 
mercury__multi_map__det_remove_4_p_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_9,
  MR_Word mercury__multi_map__TypeInfo_for_V_10,
  MR_Box mercury__multi_map__MultiMap0_5,
  MR_Word * mercury__multi_map__Key_6,
  MR_Word mercury__multi_map__Values_7,
  MR_Word * mercury__multi_map__MultiMap_8)
{
  {
    MR_bool mercury__multi_map__succeeded;
    MR_Word mercury__multi_map__TypeCtorInfo_11_11 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    MR_Word mercury__multi_map__TypeInfo_12_12;
    MR_Box mercury__multi_map__conv1_Key_6;
    MR_Word mercury__multi_map__conv0_MultiMap_8;

    {
      mercury__multi_map__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_12_12, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_11_11));
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_12_12, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_10));
    }
    {
      mercury__map__det_remove_4_p_0(mercury__multi_map__TypeInfo_for_K_9, mercury__multi_map__TypeInfo_12_12, mercury__multi_map__MultiMap0_5, &mercury__multi_map__conv1_Key_6, (MR_Word) mercury__multi_map__Values_7, &mercury__multi_map__conv0_MultiMap_8);
    }
    *mercury__multi_map__Key_6 = ((MR_Word) mercury__multi_map__conv1_Key_6);
    *mercury__multi_map__MultiMap_8 = (MR_Word) mercury__multi_map__conv0_MultiMap_8;
  }
}

MR_bool MR_CALL 
mercury__multi_map__remove_4_p_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_9,
  MR_Word mercury__multi_map__TypeInfo_for_V_10,
  MR_Box mercury__multi_map__MultiMap0_5,
  MR_Word * mercury__multi_map__Key_6,
  MR_Word mercury__multi_map__Values_7,
  MR_Word * mercury__multi_map__MultiMap_8)
{
  {
    MR_bool mercury__multi_map__succeeded;
    MR_Word mercury__multi_map__TypeCtorInfo_11_11 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    MR_Word mercury__multi_map__TypeInfo_12_12;
    MR_Word mercury__multi_map__V_9_21;
    MR_Box mercury__multi_map__conv1_Key_6;
    MR_Word mercury__multi_map__conv0_MultiMap_8;

    {
      mercury__multi_map__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_12_12, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_11_11));
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_12_12, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_10));
    }
    {
      mercury__multi_map__succeeded = mercury__tree234__remove_2_5_p_0(mercury__multi_map__TypeInfo_for_K_9, mercury__multi_map__TypeInfo_12_12, (MR_Word) mercury__multi_map__Values_7, mercury__multi_map__MultiMap0_5, &mercury__multi_map__conv1_Key_6, &mercury__multi_map__conv0_MultiMap_8, &mercury__multi_map__V_9_21);
    }
    if (mercury__multi_map__succeeded)
      {
        *mercury__multi_map__Key_6 = ((MR_Word) mercury__multi_map__conv1_Key_6);
        *mercury__multi_map__MultiMap_8 = (MR_Word) mercury__multi_map__conv0_MultiMap_8;
        mercury__multi_map__succeeded = MR_TRUE;
      }
    return mercury__multi_map__succeeded;
  }
}

void MR_CALL 
mercury__multi_map__delete_4_p_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_16,
  MR_Word mercury__multi_map__TypeInfo_for_V_17,
  MR_Box mercury__multi_map__Key_5,
  MR_Box mercury__multi_map__Value_6,
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_12,
  MR_Word * mercury__multi_map__STATE_VARIABLE_MultiMap_13)
{
  {
    MR_bool mercury__multi_map__succeeded;
    MR_Word mercury__multi_map__TypeInfo_19_19;
    MR_Word mercury__multi_map__Values_9;
    MR_Word mercury__multi_map__TypeCtorInfo_18_18 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    MR_Word mercury__multi_map__Values0_8;
    MR_Box mercury__multi_map__conv0_Values0_8;

    {
      mercury__multi_map__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_19_19, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_18_18));
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_19_19, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_17));
    }
    {
      mercury__multi_map__succeeded = mercury__tree234__search_3_p_0(mercury__multi_map__TypeInfo_for_K_16, mercury__multi_map__TypeInfo_19_19, (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_12, mercury__multi_map__Key_5, &mercury__multi_map__conv0_Values0_8);
    }
    if (mercury__multi_map__succeeded)
      {
        mercury__multi_map__Values0_8 = ((MR_Word) mercury__multi_map__conv0_Values0_8);
        mercury__multi_map__succeeded = MR_TRUE;
      }
    if (mercury__multi_map__succeeded)
      {
        {
          mercury__list__delete_all_3_p_1(mercury__multi_map__TypeInfo_for_V_17, mercury__multi_map__Values0_8, mercury__multi_map__Value_6, &mercury__multi_map__Values_9);
        }
        mercury__multi_map__succeeded = MR_TRUE;
      }
    if (mercury__multi_map__succeeded)
      if ((mercury__multi_map__Values_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MR_Word mercury__multi_map__V_7_33;
          MR_Word mercury__multi_map__conv1_STATE_VARIABLE_MultiMap_13;

          {
            mercury__tree234__delete_2_4_p_0(mercury__multi_map__TypeInfo_for_K_16, mercury__multi_map__TypeInfo_19_19, (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_12, mercury__multi_map__Key_5, &mercury__multi_map__conv1_STATE_VARIABLE_MultiMap_13, &mercury__multi_map__V_7_33);
          }
          *mercury__multi_map__STATE_VARIABLE_MultiMap_13 = (MR_Word) mercury__multi_map__conv1_STATE_VARIABLE_MultiMap_13;
        }
      else
        {
          MR_Word mercury__multi_map__conv2_STATE_VARIABLE_MultiMap_13;

          {
            mercury__tree234__set_4_p_0(mercury__multi_map__TypeInfo_for_K_16, mercury__multi_map__TypeInfo_19_19, mercury__multi_map__Key_5, ((MR_Box) (mercury__multi_map__Values_9)), (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_12, &mercury__multi_map__conv2_STATE_VARIABLE_MultiMap_13);
          }
          *mercury__multi_map__STATE_VARIABLE_MultiMap_13 = (MR_Word) mercury__multi_map__conv2_STATE_VARIABLE_MultiMap_13;
        }
    else
      *mercury__multi_map__STATE_VARIABLE_MultiMap_13 = mercury__multi_map__STATE_VARIABLE_MultiMap_0_12;
  }
}

MR_Word MR_CALL 
mercury__multi_map__delete_3_f_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_11,
  MR_Word mercury__multi_map__TypeInfo_for_V_12,
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_8,
  MR_Box mercury__multi_map__Key_6,
  MR_Box mercury__multi_map__Value_7)
{
  {
    MR_bool mercury__multi_map__succeeded;
    MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_9;

    {
      mercury__multi_map__delete_4_p_0(mercury__multi_map__TypeInfo_for_K_11, mercury__multi_map__TypeInfo_for_V_12, mercury__multi_map__Key_6, mercury__multi_map__Value_7, mercury__multi_map__STATE_VARIABLE_MultiMap_0_8, &mercury__multi_map__STATE_VARIABLE_MultiMap_9);
    }
    return mercury__multi_map__STATE_VARIABLE_MultiMap_9;
  }
}

void MR_CALL 
mercury__multi_map__delete_3_p_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_9,
  MR_Word mercury__multi_map__TypeInfo_for_V_10,
  MR_Box mercury__multi_map__Key_4,
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_6,
  MR_Word * mercury__multi_map__STATE_VARIABLE_MultiMap_7)
{
  {
    MR_bool mercury__multi_map__succeeded;
    MR_Word mercury__multi_map__TypeCtorInfo_11_11 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    MR_Word mercury__multi_map__TypeInfo_12_12;
    MR_Word mercury__multi_map__V_7_19;
    MR_Word mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_7;

    {
      mercury__multi_map__TypeInfo_12_12 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_12_12, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_11_11));
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_12_12, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_10));
    }
    {
      mercury__tree234__delete_2_4_p_0(mercury__multi_map__TypeInfo_for_K_9, mercury__multi_map__TypeInfo_12_12, (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_6, mercury__multi_map__Key_4, &mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_7, &mercury__multi_map__V_7_19);
    }
    *mercury__multi_map__STATE_VARIABLE_MultiMap_7 = (MR_Word) mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_7;
  }
}

MR_Word MR_CALL 
mercury__multi_map__delete_2_f_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_9,
  MR_Word mercury__multi_map__TypeInfo_for_V_10,
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_6,
  MR_Box mercury__multi_map__Key_5)
{
  {
    MR_bool mercury__multi_map__succeeded;
    MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_7;
    MR_Word mercury__multi_map__TypeCtorInfo_11_16 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    MR_Word mercury__multi_map__TypeInfo_12_17;
    MR_Word mercury__multi_map__V_7_24;
    MR_Word mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_7;

    {
      mercury__multi_map__TypeInfo_12_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_12_17, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_11_16));
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_12_17, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_10));
    }
    {
      mercury__tree234__delete_2_4_p_0(mercury__multi_map__TypeInfo_for_K_9, mercury__multi_map__TypeInfo_12_17, (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_6, mercury__multi_map__Key_5, &mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_7, &mercury__multi_map__V_7_24);
    }
    mercury__multi_map__STATE_VARIABLE_MultiMap_7 = (MR_Word) mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_7;
    return mercury__multi_map__STATE_VARIABLE_MultiMap_7;
  }
}

void MR_CALL 
mercury__multi_map__reverse_set_4_p_0(
  MR_Word mercury__multi_map__TypeInfo_for_V_11,
  MR_Word mercury__multi_map__TypeInfo_for_K_12,
  MR_Box mercury__multi_map__Value_5,
  MR_Box mercury__multi_map__Key_6,
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_8,
  MR_Word * mercury__multi_map__STATE_VARIABLE_MultiMap_9)
{
  {
    MR_bool mercury__multi_map__succeeded;

    {
      mercury__multi_map__set_4_p_0(mercury__multi_map__TypeInfo_for_K_12, mercury__multi_map__TypeInfo_for_V_11, mercury__multi_map__Key_6, mercury__multi_map__Value_5, mercury__multi_map__STATE_VARIABLE_MultiMap_0_8, mercury__multi_map__STATE_VARIABLE_MultiMap_9);
    }
  }
}

MR_Word MR_CALL 
mercury__multi_map__reverse_set_3_f_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_11,
  MR_Word mercury__multi_map__TypeInfo_for_V_12,
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_8,
  MR_Box mercury__multi_map__Value_6,
  MR_Box mercury__multi_map__Key_7)
{
  {
    MR_bool mercury__multi_map__succeeded;
    MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_9;

    {
      mercury__multi_map__set_4_p_0(mercury__multi_map__TypeInfo_for_K_11, mercury__multi_map__TypeInfo_for_V_12, mercury__multi_map__Key_7, mercury__multi_map__Value_6, mercury__multi_map__STATE_VARIABLE_MultiMap_0_8, &mercury__multi_map__STATE_VARIABLE_MultiMap_9);
    }
    return mercury__multi_map__STATE_VARIABLE_MultiMap_9;
  }
}

void MR_CALL 
mercury__multi_map__add_4_p_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_11,
  MR_Word mercury__multi_map__TypeInfo_for_V_12,
  MR_Box mercury__multi_map__Key_5,
  MR_Box mercury__multi_map__Value_6,
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_8,
  MR_Word * mercury__multi_map__STATE_VARIABLE_MultiMap_9)
{
  {
    MR_bool mercury__multi_map__succeeded;

    {
      mercury__multi_map__set_4_p_0(mercury__multi_map__TypeInfo_for_K_11, mercury__multi_map__TypeInfo_for_V_12, mercury__multi_map__Key_5, mercury__multi_map__Value_6, mercury__multi_map__STATE_VARIABLE_MultiMap_0_8, mercury__multi_map__STATE_VARIABLE_MultiMap_9);
    }
  }
}

MR_Word MR_CALL 
mercury__multi_map__add_3_f_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_11,
  MR_Word mercury__multi_map__TypeInfo_for_V_12,
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_8,
  MR_Box mercury__multi_map__Key_6,
  MR_Box mercury__multi_map__Value_7)
{
  {
    MR_bool mercury__multi_map__succeeded;
    MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_9;

    {
      mercury__multi_map__set_4_p_0(mercury__multi_map__TypeInfo_for_K_11, mercury__multi_map__TypeInfo_for_V_12, mercury__multi_map__Key_6, mercury__multi_map__Value_7, mercury__multi_map__STATE_VARIABLE_MultiMap_0_8, &mercury__multi_map__STATE_VARIABLE_MultiMap_9);
    }
    return mercury__multi_map__STATE_VARIABLE_MultiMap_9;
  }
}

void MR_CALL 
mercury__multi_map__set_4_p_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_16,
  MR_Word mercury__multi_map__TypeInfo_for_V_17,
  MR_Box mercury__multi_map__Key_5,
  MR_Box mercury__multi_map__Value_6,
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_10,
  MR_Word * mercury__multi_map__STATE_VARIABLE_MultiMap_11)
{
  {
    MR_bool mercury__multi_map__succeeded;
    MR_Word mercury__multi_map__TypeInfo_19_19;
    MR_Word mercury__multi_map__Values0_8;
    MR_Word mercury__multi_map__TypeCtorInfo_18_18 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    MR_Box mercury__multi_map__conv0_Values0_8;

    {
      mercury__multi_map__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_19_19, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_18_18));
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_19_19, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_17));
    }
    {
      mercury__multi_map__succeeded = mercury__tree234__search_3_p_0(mercury__multi_map__TypeInfo_for_K_16, mercury__multi_map__TypeInfo_19_19, (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_10, mercury__multi_map__Key_5, &mercury__multi_map__conv0_Values0_8);
    }
    if (mercury__multi_map__succeeded)
      {
        mercury__multi_map__Values0_8 = ((MR_Word) mercury__multi_map__conv0_Values0_8);
        mercury__multi_map__succeeded = MR_TRUE;
      }
    if (mercury__multi_map__succeeded)
      {
        MR_Word mercury__multi_map__Values_9;
        MR_Word mercury__multi_map__conv1_STATE_VARIABLE_MultiMap_11;

        {
          mercury__multi_map__Values_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__multi_map__Values_9, 0) = mercury__multi_map__Value_6;
          MR_hl_field(MR_mktag(1), mercury__multi_map__Values_9, 1) = ((MR_Box) (mercury__multi_map__Values0_8));
        }
        {
          mercury__tree234__set_4_p_0(mercury__multi_map__TypeInfo_for_K_16, mercury__multi_map__TypeInfo_19_19, mercury__multi_map__Key_5, ((MR_Box) (mercury__multi_map__Values_9)), (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_10, &mercury__multi_map__conv1_STATE_VARIABLE_MultiMap_11);
        }
        *mercury__multi_map__STATE_VARIABLE_MultiMap_11 = (MR_Word) mercury__multi_map__conv1_STATE_VARIABLE_MultiMap_11;
      }
    else
      {
        MR_Word mercury__multi_map__TypeCtorInfo_22_22;
        MR_Word mercury__multi_map__TypeInfo_23_23;
        MR_Word mercury__multi_map__V_13_13;
        MR_Word mercury__multi_map__V_15_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        MR_Word mercury__multi_map__conv2_STATE_VARIABLE_MultiMap_11;

        {
          mercury__multi_map__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__multi_map__V_13_13, 0) = mercury__multi_map__Value_6;
          MR_hl_field(MR_mktag(1), mercury__multi_map__V_13_13, 1) = ((MR_Box) (mercury__multi_map__V_15_15));
        }
        mercury__multi_map__TypeCtorInfo_22_22 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
        {
          mercury__multi_map__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_23_23, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_22_22));
          MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_23_23, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_17));
        }
        {
          mercury__map__det_insert_4_p_0(mercury__multi_map__TypeInfo_for_K_16, mercury__multi_map__TypeInfo_23_23, mercury__multi_map__Key_5, ((MR_Box) (mercury__multi_map__V_13_13)), (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_10, &mercury__multi_map__conv2_STATE_VARIABLE_MultiMap_11);
        }
        *mercury__multi_map__STATE_VARIABLE_MultiMap_11 = (MR_Word) mercury__multi_map__conv2_STATE_VARIABLE_MultiMap_11;
      }
  }
}

MR_Word MR_CALL 
mercury__multi_map__set_3_f_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_11,
  MR_Word mercury__multi_map__TypeInfo_for_V_12,
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_8,
  MR_Box mercury__multi_map__Key_6,
  MR_Box mercury__multi_map__Value_7)
{
  {
    MR_bool mercury__multi_map__succeeded;
    MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_9;

    {
      mercury__multi_map__set_4_p_0(mercury__multi_map__TypeInfo_for_K_11, mercury__multi_map__TypeInfo_for_V_12, mercury__multi_map__Key_6, mercury__multi_map__Value_7, mercury__multi_map__STATE_VARIABLE_MultiMap_0_8, &mercury__multi_map__STATE_VARIABLE_MultiMap_9);
    }
    return mercury__multi_map__STATE_VARIABLE_MultiMap_9;
  }
}

void MR_CALL 
mercury__multi_map__det_replace_4_p_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_11,
  MR_Word mercury__multi_map__TypeInfo_for_V_12,
  MR_Box mercury__multi_map__Key_5,
  MR_Word mercury__multi_map__Values_6,
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_8,
  MR_Word * mercury__multi_map__STATE_VARIABLE_MultiMap_9)
{
  {
    MR_bool mercury__multi_map__succeeded;
    MR_Word mercury__multi_map__TypeCtorInfo_13_13 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    MR_Word mercury__multi_map__TypeInfo_14_14;
    MR_Word mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9;

    {
      mercury__multi_map__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_14_14, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_13_13));
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_14_14, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_12));
    }
    {
      mercury__map__det_update_4_p_0(mercury__multi_map__TypeInfo_for_K_11, mercury__multi_map__TypeInfo_14_14, mercury__multi_map__Key_5, ((MR_Box) (mercury__multi_map__Values_6)), (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_8, &mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9);
    }
    *mercury__multi_map__STATE_VARIABLE_MultiMap_9 = (MR_Word) mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9;
  }
}

MR_Word MR_CALL 
mercury__multi_map__det_replace_3_f_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_11,
  MR_Word mercury__multi_map__TypeInfo_for_V_12,
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_8,
  MR_Box mercury__multi_map__Key_6,
  MR_Word mercury__multi_map__Values_7)
{
  {
    MR_bool mercury__multi_map__succeeded;
    MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_9;
    MR_Word mercury__multi_map__TypeCtorInfo_13_19 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    MR_Word mercury__multi_map__TypeInfo_14_20;
    MR_Word mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9;

    {
      mercury__multi_map__TypeInfo_14_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_14_20, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_13_19));
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_14_20, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_12));
    }
    {
      mercury__map__det_update_4_p_0(mercury__multi_map__TypeInfo_for_K_11, mercury__multi_map__TypeInfo_14_20, mercury__multi_map__Key_6, ((MR_Box) (mercury__multi_map__Values_7)), (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_8, &mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9);
    }
    mercury__multi_map__STATE_VARIABLE_MultiMap_9 = (MR_Word) mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9;
    return mercury__multi_map__STATE_VARIABLE_MultiMap_9;
  }
}

MR_bool MR_CALL 
mercury__multi_map__replace_4_p_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_11,
  MR_Word mercury__multi_map__TypeInfo_for_V_12,
  MR_Box mercury__multi_map__Key_5,
  MR_Word mercury__multi_map__Value_6,
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_8,
  MR_Word * mercury__multi_map__STATE_VARIABLE_MultiMap_9)
{
  {
    MR_bool mercury__multi_map__succeeded;
    MR_Word mercury__multi_map__TypeCtorInfo_13_13 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    MR_Word mercury__multi_map__TypeInfo_14_14;
    MR_Word mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9;

    {
      mercury__multi_map__TypeInfo_14_14 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_14_14, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_13_13));
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_14_14, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_12));
    }
    {
      mercury__multi_map__succeeded = mercury__tree234__update_4_p_0(mercury__multi_map__TypeInfo_for_K_11, mercury__multi_map__TypeInfo_14_14, mercury__multi_map__Key_5, ((MR_Box) (mercury__multi_map__Value_6)), (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_8, &mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9);
    }
    if (mercury__multi_map__succeeded)
      {
        *mercury__multi_map__STATE_VARIABLE_MultiMap_9 = (MR_Word) mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9;
        mercury__multi_map__succeeded = MR_TRUE;
      }
    return mercury__multi_map__succeeded;
  }
}

void MR_CALL 
mercury__multi_map__det_update_4_p_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_13,
  MR_Word mercury__multi_map__TypeInfo_for_V_14,
  MR_Box mercury__multi_map__Key_5,
  MR_Box mercury__multi_map__Value_6,
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_8,
  MR_Word * mercury__multi_map__STATE_VARIABLE_MultiMap_9)
{
  {
    MR_bool mercury__multi_map__succeeded;
    MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_10_10;
    MR_Word mercury__multi_map__TypeCtorInfo_15_23 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    MR_Word mercury__multi_map__TypeInfo_16_24;
    MR_Word mercury__multi_map__Values0_20;
    MR_Word mercury__multi_map__Values_21;
    MR_Box mercury__multi_map__conv0_Values0_20;
    MR_Word mercury__multi_map__conv1_STATE_VARIABLE_MultiMap_10_10;

    {
      mercury__multi_map__TypeInfo_16_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_16_24, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_15_23));
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_16_24, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_14));
    }
    {
      mercury__multi_map__succeeded = mercury__tree234__search_3_p_0(mercury__multi_map__TypeInfo_for_K_13, mercury__multi_map__TypeInfo_16_24, (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_8, mercury__multi_map__Key_5, &mercury__multi_map__conv0_Values0_20);
    }
    if (mercury__multi_map__succeeded)
      {
        mercury__multi_map__Values0_20 = ((MR_Word) mercury__multi_map__conv0_Values0_20);
        mercury__multi_map__succeeded = MR_TRUE;
      }
    if (mercury__multi_map__succeeded)
      {
        {
          mercury__multi_map__Values_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__multi_map__Values_21, 0) = mercury__multi_map__Value_6;
          MR_hl_field(MR_mktag(1), mercury__multi_map__Values_21, 1) = ((MR_Box) (mercury__multi_map__Values0_20));
        }
        {
          mercury__multi_map__succeeded = mercury__tree234__update_4_p_0(mercury__multi_map__TypeInfo_for_K_13, mercury__multi_map__TypeInfo_16_24, mercury__multi_map__Key_5, ((MR_Box) (mercury__multi_map__Values_21)), (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_8, &mercury__multi_map__conv1_STATE_VARIABLE_MultiMap_10_10);
        }
        if (mercury__multi_map__succeeded)
          {
            mercury__multi_map__STATE_VARIABLE_MultiMap_10_10 = (MR_Word) mercury__multi_map__conv1_STATE_VARIABLE_MultiMap_10_10;
            mercury__multi_map__succeeded = MR_TRUE;
          }
      }
    if (mercury__multi_map__succeeded)
      *mercury__multi_map__STATE_VARIABLE_MultiMap_9 = mercury__multi_map__STATE_VARIABLE_MultiMap_10_10;
    else
      {
        {
          mercury__require__report_lookup_error_2_p_0(mercury__multi_map__TypeInfo_for_K_13, (MR_String) "multi_map.det_update: key not found", mercury__multi_map__Key_5);
          return;
        }
      }
  }
}

MR_Word MR_CALL 
mercury__multi_map__det_update_3_f_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_11,
  MR_Word mercury__multi_map__TypeInfo_for_V_12,
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_8,
  MR_Box mercury__multi_map__Key_6,
  MR_Box mercury__multi_map__Value_7)
{
  {
    MR_bool mercury__multi_map__succeeded;
    MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_9;

    {
      mercury__multi_map__det_update_4_p_0(mercury__multi_map__TypeInfo_for_K_11, mercury__multi_map__TypeInfo_for_V_12, mercury__multi_map__Key_6, mercury__multi_map__Value_7, mercury__multi_map__STATE_VARIABLE_MultiMap_0_8, &mercury__multi_map__STATE_VARIABLE_MultiMap_9);
    }
    return mercury__multi_map__STATE_VARIABLE_MultiMap_9;
  }
}

MR_bool MR_CALL 
mercury__multi_map__update_4_p_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_13,
  MR_Word mercury__multi_map__TypeInfo_for_V_14,
  MR_Box mercury__multi_map__Key_5,
  MR_Box mercury__multi_map__Value_6,
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_10,
  MR_Word * mercury__multi_map__STATE_VARIABLE_MultiMap_11)
{
  {
    MR_bool mercury__multi_map__succeeded;
    MR_Word mercury__multi_map__TypeCtorInfo_15_15 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    MR_Word mercury__multi_map__TypeInfo_16_16;
    MR_Word mercury__multi_map__Values0_8;
    MR_Word mercury__multi_map__Values_9;
    MR_Box mercury__multi_map__conv0_Values0_8;
    MR_Word mercury__multi_map__conv1_STATE_VARIABLE_MultiMap_11;

    {
      mercury__multi_map__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_16_16, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_15_15));
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_16_16, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_14));
    }
    {
      mercury__multi_map__succeeded = mercury__tree234__search_3_p_0(mercury__multi_map__TypeInfo_for_K_13, mercury__multi_map__TypeInfo_16_16, (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_10, mercury__multi_map__Key_5, &mercury__multi_map__conv0_Values0_8);
    }
    if (mercury__multi_map__succeeded)
      {
        mercury__multi_map__Values0_8 = ((MR_Word) mercury__multi_map__conv0_Values0_8);
        mercury__multi_map__succeeded = MR_TRUE;
      }
    if (mercury__multi_map__succeeded)
      {
        {
          mercury__multi_map__Values_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__multi_map__Values_9, 0) = mercury__multi_map__Value_6;
          MR_hl_field(MR_mktag(1), mercury__multi_map__Values_9, 1) = ((MR_Box) (mercury__multi_map__Values0_8));
        }
        {
          mercury__multi_map__succeeded = mercury__tree234__update_4_p_0(mercury__multi_map__TypeInfo_for_K_13, mercury__multi_map__TypeInfo_16_16, mercury__multi_map__Key_5, ((MR_Box) (mercury__multi_map__Values_9)), (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_10, &mercury__multi_map__conv1_STATE_VARIABLE_MultiMap_11);
        }
        if (mercury__multi_map__succeeded)
          {
            *mercury__multi_map__STATE_VARIABLE_MultiMap_11 = (MR_Word) mercury__multi_map__conv1_STATE_VARIABLE_MultiMap_11;
            mercury__multi_map__succeeded = MR_TRUE;
          }
      }
    return mercury__multi_map__succeeded;
  }
}

void MR_CALL 
mercury__multi_map__det_insert_4_p_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_13,
  MR_Word mercury__multi_map__TypeInfo_for_V_14,
  MR_Box mercury__multi_map__Key_5,
  MR_Box mercury__multi_map__Value_6,
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_8,
  MR_Word * mercury__multi_map__STATE_VARIABLE_MultiMap_9)
{
  {
    MR_bool mercury__multi_map__succeeded;
    MR_Word mercury__multi_map__TypeCtorInfo_15_15;
    MR_Word mercury__multi_map__TypeInfo_16_16;
    MR_Word mercury__multi_map__V_10_10;
    MR_Word mercury__multi_map__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9;

    {
      mercury__multi_map__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__multi_map__V_10_10, 0) = mercury__multi_map__Value_6;
      MR_hl_field(MR_mktag(1), mercury__multi_map__V_10_10, 1) = ((MR_Box) (mercury__multi_map__V_12_12));
    }
    mercury__multi_map__TypeCtorInfo_15_15 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    {
      mercury__multi_map__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_16_16, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_15_15));
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_16_16, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_14));
    }
    {
      mercury__map__det_insert_4_p_0(mercury__multi_map__TypeInfo_for_K_13, mercury__multi_map__TypeInfo_16_16, mercury__multi_map__Key_5, ((MR_Box) (mercury__multi_map__V_10_10)), (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_8, &mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9);
    }
    *mercury__multi_map__STATE_VARIABLE_MultiMap_9 = (MR_Word) mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9;
  }
}

MR_Word MR_CALL 
mercury__multi_map__det_insert_3_f_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_11,
  MR_Word mercury__multi_map__TypeInfo_for_V_12,
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_8,
  MR_Box mercury__multi_map__Key_6,
  MR_Box mercury__multi_map__Value_7)
{
  {
    MR_bool mercury__multi_map__succeeded;
    MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_9;
    MR_Word mercury__multi_map__TypeCtorInfo_15_21;
    MR_Word mercury__multi_map__TypeInfo_16_22;
    MR_Word mercury__multi_map__V_18_18;
    MR_Word mercury__multi_map__V_20_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9;

    {
      mercury__multi_map__V_18_18 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__multi_map__V_18_18, 0) = mercury__multi_map__Value_7;
      MR_hl_field(MR_mktag(1), mercury__multi_map__V_18_18, 1) = ((MR_Box) (mercury__multi_map__V_20_20));
    }
    mercury__multi_map__TypeCtorInfo_15_21 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    {
      mercury__multi_map__TypeInfo_16_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_16_22, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_15_21));
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_16_22, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_12));
    }
    {
      mercury__map__det_insert_4_p_0(mercury__multi_map__TypeInfo_for_K_11, mercury__multi_map__TypeInfo_16_22, mercury__multi_map__Key_6, ((MR_Box) (mercury__multi_map__V_18_18)), (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_8, &mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9);
    }
    mercury__multi_map__STATE_VARIABLE_MultiMap_9 = (MR_Word) mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9;
    return mercury__multi_map__STATE_VARIABLE_MultiMap_9;
  }
}

MR_bool MR_CALL 
mercury__multi_map__insert_4_p_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_13,
  MR_Word mercury__multi_map__TypeInfo_for_V_14,
  MR_Box mercury__multi_map__Key_5,
  MR_Box mercury__multi_map__Value_6,
  MR_Word mercury__multi_map__STATE_VARIABLE_MultiMap_0_8,
  MR_Word * mercury__multi_map__STATE_VARIABLE_MultiMap_9)
{
  {
    MR_bool mercury__multi_map__succeeded;
    MR_Word mercury__multi_map__TypeCtorInfo_15_15 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    MR_Word mercury__multi_map__TypeInfo_16_16;
    MR_Word mercury__multi_map__V_10_10;
    MR_Word mercury__multi_map__V_12_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9;

    {
      mercury__multi_map__V_10_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__multi_map__V_10_10, 0) = mercury__multi_map__Value_6;
      MR_hl_field(MR_mktag(1), mercury__multi_map__V_10_10, 1) = ((MR_Box) (mercury__multi_map__V_12_12));
    }
    {
      mercury__multi_map__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_16_16, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_15_15));
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_16_16, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_14));
    }
    {
      mercury__multi_map__succeeded = mercury__tree234__insert_4_p_0(mercury__multi_map__TypeInfo_for_K_13, mercury__multi_map__TypeInfo_16_16, mercury__multi_map__Key_5, ((MR_Box) (mercury__multi_map__V_10_10)), (MR_Word) mercury__multi_map__STATE_VARIABLE_MultiMap_0_8, &mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9);
    }
    if (mercury__multi_map__succeeded)
      {
        *mercury__multi_map__STATE_VARIABLE_MultiMap_9 = (MR_Word) mercury__multi_map__conv0_STATE_VARIABLE_MultiMap_9;
        mercury__multi_map__succeeded = MR_TRUE;
      }
    return mercury__multi_map__succeeded;
  }
}

static void MR_CALL 
mercury__multi_map__inverse_search_3_p_0_2(
  void * mercury__multi_map__env_ptr_arg)
{
  {
    struct mercury__multi_map__inverse_search_3_p_0_env_0_s * mercury__multi_map__env_ptr = (struct mercury__multi_map__inverse_search_3_p_0_env_0_s *) mercury__multi_map__env_ptr_arg;

    (mercury__multi_map__env_ptr)->mercury__multi_map__inverse_search_3_p_0_env_0__ValueList_7 = ((MR_Word) (mercury__multi_map__env_ptr)->mercury__multi_map__inverse_search_3_p_0_env_0__conv0_ValueList_7);
    {
      mercury__multi_map__inverse_search_3_p_0_1(mercury__multi_map__env_ptr);
    }
  }
}

static void MR_CALL 
mercury__multi_map__inverse_search_3_p_0_1(
  void * mercury__multi_map__env_ptr_arg)
{
  {
    struct mercury__multi_map__inverse_search_3_p_0_env_0_s * mercury__multi_map__env_ptr = (struct mercury__multi_map__inverse_search_3_p_0_env_0_s *) mercury__multi_map__env_ptr_arg;

    {
      (mercury__multi_map__env_ptr)->mercury__multi_map__inverse_search_3_p_0_env_0__succeeded = mercury__list__member_2_p_0((mercury__multi_map__env_ptr)->mercury__multi_map__inverse_search_3_p_0_env_0__TypeInfo_for_V_9, (mercury__multi_map__env_ptr)->mercury__multi_map__inverse_search_3_p_0_env_0__Value_5, (mercury__multi_map__env_ptr)->mercury__multi_map__inverse_search_3_p_0_env_0__ValueList_7);
    }
    if ((mercury__multi_map__env_ptr)->mercury__multi_map__inverse_search_3_p_0_env_0__succeeded)
      {
        ((mercury__multi_map__env_ptr)->mercury__multi_map__inverse_search_3_p_0_env_0__cont)((mercury__multi_map__env_ptr)->mercury__multi_map__inverse_search_3_p_0_env_0__cont_env_ptr);
      }
  }
}

void MR_CALL 
mercury__multi_map__inverse_search_3_p_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_8,
  MR_Word mercury__multi_map__TypeInfo_for_V_9,
  MR_Word mercury__multi_map__MultiMap_4,
  MR_Box mercury__multi_map__Value_5,
  MR_Box * mercury__multi_map__Key_6,
  MR_Cont mercury__multi_map__cont,
  void * mercury__multi_map__cont_env_ptr)
{
  {
    struct mercury__multi_map__inverse_search_3_p_0_env_0_s mercury__multi_map__env;

    (mercury__multi_map__env).mercury__multi_map__inverse_search_3_p_0_env_0__TypeInfo_for_V_9 = mercury__multi_map__TypeInfo_for_V_9;
    (mercury__multi_map__env).mercury__multi_map__inverse_search_3_p_0_env_0__Value_5 = mercury__multi_map__Value_5;
    (mercury__multi_map__env).mercury__multi_map__inverse_search_3_p_0_env_0__cont = mercury__multi_map__cont;
    (mercury__multi_map__env).mercury__multi_map__inverse_search_3_p_0_env_0__cont_env_ptr = mercury__multi_map__cont_env_ptr;
    {
      MR_Word mercury__multi_map__TypeCtorInfo_10_10 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
      MR_Word mercury__multi_map__TypeInfo_11_11;

      {
        mercury__multi_map__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_11_11, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_10_10));
        MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_11_11, 1) = ((MR_Box) ((mercury__multi_map__env).mercury__multi_map__inverse_search_3_p_0_env_0__TypeInfo_for_V_9));
      }
      {
        mercury__tree234__member_3_p_0(mercury__multi_map__TypeInfo_for_K_8, mercury__multi_map__TypeInfo_11_11, (MR_Word) mercury__multi_map__MultiMap_4, mercury__multi_map__Key_6, &(mercury__multi_map__env).mercury__multi_map__inverse_search_3_p_0_env_0__conv0_ValueList_7, mercury__multi_map__inverse_search_3_p_0_2, &mercury__multi_map__env);
      }
    }
  }
}

void MR_CALL 
mercury__multi_map__nondet_lookup_3_p_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_8,
  MR_Word mercury__multi_map__TypeInfo_for_V_9,
  MR_Word mercury__multi_map__MultiMap_4,
  MR_Box mercury__multi_map__Key_5,
  MR_Box * mercury__multi_map__Value_6,
  MR_Cont mercury__multi_map__cont,
  void * mercury__multi_map__cont_env_ptr)
{
  {
    MR_bool mercury__multi_map__succeeded;
    MR_Word mercury__multi_map__TypeCtorInfo_10_10 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    MR_Word mercury__multi_map__TypeInfo_11_11;
    MR_Word mercury__multi_map__Values_7;
    MR_Box mercury__multi_map__conv0_Values_7;

    {
      mercury__multi_map__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_11_11, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_10_10));
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_11_11, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_9));
    }
    {
      mercury__multi_map__succeeded = mercury__tree234__search_3_p_0(mercury__multi_map__TypeInfo_for_K_8, mercury__multi_map__TypeInfo_11_11, (MR_Word) mercury__multi_map__MultiMap_4, mercury__multi_map__Key_5, &mercury__multi_map__conv0_Values_7);
    }
    if (mercury__multi_map__succeeded)
      {
        mercury__multi_map__Values_7 = ((MR_Word) mercury__multi_map__conv0_Values_7);
        mercury__multi_map__succeeded = MR_TRUE;
      }
    if (mercury__multi_map__succeeded)
      {
        mercury__list__member_2_p_1(mercury__multi_map__TypeInfo_for_V_9, mercury__multi_map__Value_6, mercury__multi_map__Values_7, mercury__multi_map__cont, mercury__multi_map__cont_env_ptr);
      }
  }
}

void MR_CALL 
mercury__multi_map__lookup_3_p_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_7,
  MR_Word mercury__multi_map__TypeInfo_for_V_8,
  MR_Word mercury__multi_map__MultiMap_4,
  MR_Box mercury__multi_map__Key_5,
  MR_Word * mercury__multi_map__Values_6)
{
  {
    MR_bool mercury__multi_map__succeeded;
    MR_Word mercury__multi_map__TypeCtorInfo_9_9 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    MR_Word mercury__multi_map__TypeInfo_10_10;
    MR_Box mercury__multi_map__conv0_Values_6;

    {
      mercury__multi_map__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_10, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_9_9));
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_10, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_8));
    }
    {
      mercury__map__lookup_3_p_0(mercury__multi_map__TypeInfo_for_K_7, mercury__multi_map__TypeInfo_10_10, (MR_Word) mercury__multi_map__MultiMap_4, mercury__multi_map__Key_5, &mercury__multi_map__conv0_Values_6);
    }
    *mercury__multi_map__Values_6 = ((MR_Word) mercury__multi_map__conv0_Values_6);
  }
}

MR_Word MR_CALL 
mercury__multi_map__lookup_2_f_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_7,
  MR_Word mercury__multi_map__TypeInfo_for_V_8,
  MR_Word mercury__multi_map__MultiMap_4,
  MR_Box mercury__multi_map__Key_5)
{
  {
    MR_bool mercury__multi_map__succeeded;
    MR_Word mercury__multi_map__Value_6;
    MR_Word mercury__multi_map__TypeCtorInfo_9_12 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    MR_Word mercury__multi_map__TypeInfo_10_13;
    MR_Box mercury__multi_map__conv0_Value_6;

    {
      mercury__multi_map__TypeInfo_10_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_13, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_9_12));
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_13, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_8));
    }
    {
      mercury__map__lookup_3_p_0(mercury__multi_map__TypeInfo_for_K_7, mercury__multi_map__TypeInfo_10_13, (MR_Word) mercury__multi_map__MultiMap_4, mercury__multi_map__Key_5, &mercury__multi_map__conv0_Value_6);
    }
    mercury__multi_map__Value_6 = ((MR_Word) mercury__multi_map__conv0_Value_6);
    return mercury__multi_map__Value_6;
  }
}

void MR_CALL 
mercury__multi_map__nondet_search_3_p_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_8,
  MR_Word mercury__multi_map__TypeInfo_for_V_9,
  MR_Word mercury__multi_map__MultiMap_4,
  MR_Box mercury__multi_map__Key_5,
  MR_Box * mercury__multi_map__Value_6,
  MR_Cont mercury__multi_map__cont,
  void * mercury__multi_map__cont_env_ptr)
{
  {
    MR_bool mercury__multi_map__succeeded;
    MR_Word mercury__multi_map__TypeCtorInfo_10_10 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    MR_Word mercury__multi_map__TypeInfo_11_11;
    MR_Word mercury__multi_map__Values_7;
    MR_Box mercury__multi_map__conv0_Values_7;

    {
      mercury__multi_map__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_11_11, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_10_10));
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_11_11, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_9));
    }
    {
      mercury__multi_map__succeeded = mercury__tree234__search_3_p_0(mercury__multi_map__TypeInfo_for_K_8, mercury__multi_map__TypeInfo_11_11, (MR_Word) mercury__multi_map__MultiMap_4, mercury__multi_map__Key_5, &mercury__multi_map__conv0_Values_7);
    }
    if (mercury__multi_map__succeeded)
      {
        mercury__multi_map__Values_7 = ((MR_Word) mercury__multi_map__conv0_Values_7);
        mercury__multi_map__succeeded = MR_TRUE;
      }
    if (mercury__multi_map__succeeded)
      {
        mercury__list__member_2_p_1(mercury__multi_map__TypeInfo_for_V_9, mercury__multi_map__Value_6, mercury__multi_map__Values_7, mercury__multi_map__cont, mercury__multi_map__cont_env_ptr);
      }
  }
}

MR_bool MR_CALL 
mercury__multi_map__search_3_p_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_7,
  MR_Word mercury__multi_map__TypeInfo_for_V_8,
  MR_Word mercury__multi_map__MultiMap_4,
  MR_Box mercury__multi_map__Key_5,
  MR_Word * mercury__multi_map__Values_6)
{
  {
    MR_bool mercury__multi_map__succeeded;
    MR_Word mercury__multi_map__TypeCtorInfo_9_9 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    MR_Word mercury__multi_map__TypeInfo_10_10;
    MR_Box mercury__multi_map__conv0_Values_6;

    {
      mercury__multi_map__TypeInfo_10_10 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_10, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_9_9));
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_10_10, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for_V_8));
    }
    {
      mercury__multi_map__succeeded = mercury__tree234__search_3_p_0(mercury__multi_map__TypeInfo_for_K_7, mercury__multi_map__TypeInfo_10_10, (MR_Word) mercury__multi_map__MultiMap_4, mercury__multi_map__Key_5, &mercury__multi_map__conv0_Values_6);
    }
    if (mercury__multi_map__succeeded)
      {
        *mercury__multi_map__Values_6 = ((MR_Word) mercury__multi_map__conv0_Values_6);
        mercury__multi_map__succeeded = MR_TRUE;
      }
    return mercury__multi_map__succeeded;
  }
}

static void MR_CALL 
mercury__multi_map__member_3_p_0_2(
  void * mercury__multi_map__env_ptr_arg)
{
  {
    struct mercury__multi_map__member_3_p_0_env_0_s * mercury__multi_map__env_ptr = (struct mercury__multi_map__member_3_p_0_env_0_s *) mercury__multi_map__env_ptr_arg;

    (mercury__multi_map__env_ptr)->mercury__multi_map__member_3_p_0_env_0__ValueList_7 = ((MR_Word) (mercury__multi_map__env_ptr)->mercury__multi_map__member_3_p_0_env_0__conv0_ValueList_7);
    {
      mercury__multi_map__member_3_p_0_1(mercury__multi_map__env_ptr);
    }
  }
}

static void MR_CALL 
mercury__multi_map__member_3_p_0_1(
  void * mercury__multi_map__env_ptr_arg)
{
  {
    struct mercury__multi_map__member_3_p_0_env_0_s * mercury__multi_map__env_ptr = (struct mercury__multi_map__member_3_p_0_env_0_s *) mercury__multi_map__env_ptr_arg;

    {
      mercury__list__member_2_p_1((mercury__multi_map__env_ptr)->mercury__multi_map__member_3_p_0_env_0__TypeInfo_for_V_9, (mercury__multi_map__env_ptr)->mercury__multi_map__member_3_p_0_env_0__Value_6, (mercury__multi_map__env_ptr)->mercury__multi_map__member_3_p_0_env_0__ValueList_7, (mercury__multi_map__env_ptr)->mercury__multi_map__member_3_p_0_env_0__cont, (mercury__multi_map__env_ptr)->mercury__multi_map__member_3_p_0_env_0__cont_env_ptr);
    }
  }
}

void MR_CALL 
mercury__multi_map__member_3_p_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_8,
  MR_Word mercury__multi_map__TypeInfo_for_V_9,
  MR_Word mercury__multi_map__MultiMap_4,
  MR_Box * mercury__multi_map__Key_5,
  MR_Box * mercury__multi_map__Value_6,
  MR_Cont mercury__multi_map__cont,
  void * mercury__multi_map__cont_env_ptr)
{
  {
    struct mercury__multi_map__member_3_p_0_env_0_s mercury__multi_map__env;

    (mercury__multi_map__env).mercury__multi_map__member_3_p_0_env_0__TypeInfo_for_V_9 = mercury__multi_map__TypeInfo_for_V_9;
    (mercury__multi_map__env).mercury__multi_map__member_3_p_0_env_0__Value_6 = mercury__multi_map__Value_6;
    (mercury__multi_map__env).mercury__multi_map__member_3_p_0_env_0__cont = mercury__multi_map__cont;
    (mercury__multi_map__env).mercury__multi_map__member_3_p_0_env_0__cont_env_ptr = mercury__multi_map__cont_env_ptr;
    {
      MR_bool mercury__multi_map__succeeded;
      MR_Word mercury__multi_map__TypeCtorInfo_10_10 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
      MR_Word mercury__multi_map__TypeInfo_11_11;

      {
        mercury__multi_map__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_11_11, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_10_10));
        MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_11_11, 1) = ((MR_Box) ((mercury__multi_map__env).mercury__multi_map__member_3_p_0_env_0__TypeInfo_for_V_9));
      }
      {
        mercury__tree234__member_3_p_0(mercury__multi_map__TypeInfo_for_K_8, mercury__multi_map__TypeInfo_11_11, (MR_Word) mercury__multi_map__MultiMap_4, mercury__multi_map__Key_5, &(mercury__multi_map__env).mercury__multi_map__member_3_p_0_env_0__conv0_ValueList_7, mercury__multi_map__member_3_p_0_2, &mercury__multi_map__env);
      }
    }
  }
}

MR_bool MR_CALL 
mercury__multi_map__contains_2_p_0(
  MR_Word mercury__multi_map__TypeInfo_for_K_6,
  MR_Word mercury__multi_map__TypeInfo_for__V_7,
  MR_Word mercury__multi_map__MultiMap_3,
  MR_Box mercury__multi_map__Key_4)
{
  {
    MR_bool mercury__multi_map__succeeded;
    MR_Word mercury__multi_map__TypeCtorInfo_8_8 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    MR_Word mercury__multi_map__TypeInfo_9_9;
    MR_Word mercury__multi_map__V_5_5;
    MR_Box mercury__multi_map__conv0_V_5_5;

    {
      mercury__multi_map__TypeInfo_9_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_9_9, 0) = ((MR_Box) (mercury__multi_map__TypeCtorInfo_8_8));
      MR_hl_field(MR_mktag(0), mercury__multi_map__TypeInfo_9_9, 1) = ((MR_Box) (mercury__multi_map__TypeInfo_for__V_7));
    }
    {
      mercury__multi_map__succeeded = mercury__tree234__search_3_p_0(mercury__multi_map__TypeInfo_for_K_6, mercury__multi_map__TypeInfo_9_9, (MR_Word) mercury__multi_map__MultiMap_3, mercury__multi_map__Key_4, &mercury__multi_map__conv0_V_5_5);
    }
    if (mercury__multi_map__succeeded)
      {
        mercury__multi_map__V_5_5 = ((MR_Word) mercury__multi_map__conv0_V_5_5);
        mercury__multi_map__succeeded = MR_TRUE;
      }
    return mercury__multi_map__succeeded;
  }
}

MR_bool MR_CALL 
mercury__multi_map__is_empty_1_p_0(
  MR_Word mercury__multi_map__TypeInfo_for__K_3,
  MR_Word mercury__multi_map__TypeInfo_for__V_4,
  MR_Word mercury__multi_map__MultiMap_2)
{
  {
    MR_bool mercury__multi_map__succeeded = (mercury__multi_map__MultiMap_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));

    return mercury__multi_map__succeeded;
  }
}

void MR_CALL 
mercury__multi_map__init_1_p_0(
  MR_Word mercury__multi_map__TypeInfo_for__K_3,
  MR_Word mercury__multi_map__TypeInfo_for__V_4,
  MR_Word * mercury__multi_map__MultiMap_2)
{
  {
    MR_bool mercury__multi_map__succeeded;

    *mercury__multi_map__MultiMap_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

MR_Word MR_CALL 
mercury__multi_map__init_0_f_0(
  MR_Word mercury__multi_map__TypeInfo_for__K_3,
  MR_Word mercury__multi_map__TypeInfo_for__V_4)
{
  {
    MR_bool mercury__multi_map__succeeded;
    MR_Word mercury__multi_map__MultiMap_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    return mercury__multi_map__MultiMap_2;
  }
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
