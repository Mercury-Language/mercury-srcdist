/*
** Automatically generated from `thread.channel.m'
** by the Mercury compiler,
** version rotd-2016-02-18
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


/* :- module thread.channel. */
/* :- implementation. */

/*
INIT mercury__thread__channel__init
ENDINIT
*/

#include "thread.channel.mih"


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
#include "thread.mih"
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
#include "thread.mvar.mih"
#include "thread.semaphore.mih"




static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__channel__thread__channel__pti_item_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__channel__thread__mvar__pti_mvar_1__pseudo_thread__channel__pti_item_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__channel__thread__mvar__pti_mvar_1__pseudo_thread__mvar__pti_mvar_1__pseudo_thread__channel__pti_item_1__pseudo_1;

static const MR_PseudoTypeInfo mercury__thread__channel__thread__channel__field_types_channel_1_0[2];

static const MR_DuFunctorDesc mercury__thread__channel__thread__channel__du_functor_desc_channel_1_0;

static const MR_DuFunctorDescPtr mercury__thread__channel__thread__channel__du_stag_ordered_channel_1_0[1];

static const MR_DuPtagLayout mercury__thread__channel__thread__channel__du_ptag_ordered_channel_1[1];

static const MR_DuFunctorDescPtr mercury__thread__channel__thread__channel__du_name_ordered_channel_1[1];

static const MR_Integer mercury__thread__channel__thread__channel__functor_number_map_channel_1[1];

static const MR_PseudoTypeInfo mercury__thread__channel__thread__channel__field_types_item_1_0[2];

static const MR_DuFunctorDesc mercury__thread__channel__thread__channel__du_functor_desc_item_1_0;

static const MR_DuFunctorDescPtr mercury__thread__channel__thread__channel__du_stag_ordered_item_1_0[1];

static const MR_DuPtagLayout mercury__thread__channel__thread__channel__du_ptag_ordered_item_1[1];

static const MR_DuFunctorDescPtr mercury__thread__channel__thread__channel__du_name_ordered_item_1[1];

static const MR_Integer mercury__thread__channel__thread__channel__functor_number_map_item_1[1];

static MR_bool MR_CALL 
mercury__thread__channel____Unify____channel_1_0_10001(
  MR_Box mercury__thread__channel__wrapper_arg_1,
  MR_Box mercury__thread__channel__wrapper_arg_2,
  MR_Box mercury__thread__channel__wrapper_arg_3);

static void MR_CALL 
mercury__thread__channel____Compare____channel_1_0_10001(
  MR_Box mercury__thread__channel__wrapper_arg_1,
  MR_Box * mercury__thread__channel__wrapper_arg_2,
  MR_Box mercury__thread__channel__wrapper_arg_3,
  MR_Box mercury__thread__channel__wrapper_arg_4);

static MR_bool MR_CALL 
mercury__thread__channel____Unify____item_1_0_10001(
  MR_Box mercury__thread__channel__wrapper_arg_1,
  MR_Box mercury__thread__channel__wrapper_arg_2,
  MR_Box mercury__thread__channel__wrapper_arg_3);

static void MR_CALL 
mercury__thread__channel____Compare____item_1_0_10001(
  MR_Box mercury__thread__channel__wrapper_arg_1,
  MR_Box * mercury__thread__channel__wrapper_arg_2,
  MR_Box mercury__thread__channel__wrapper_arg_3,
  MR_Box mercury__thread__channel__wrapper_arg_4);

static MR_bool MR_CALL 
mercury__thread__channel____Unify____stream_1_0_10001(
  MR_Box mercury__thread__channel__wrapper_arg_1,
  MR_Box mercury__thread__channel__wrapper_arg_2,
  MR_Box mercury__thread__channel__wrapper_arg_3);

static void MR_CALL 
mercury__thread__channel____Compare____stream_1_0_10001(
  MR_Box mercury__thread__channel__wrapper_arg_1,
  MR_Box * mercury__thread__channel__wrapper_arg_2,
  MR_Box mercury__thread__channel__wrapper_arg_3,
  MR_Box mercury__thread__channel__wrapper_arg_4);

static MR_Integer MR_CALL 
mercury__thread__channel__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);


static /* final */ const MR_Box mercury__thread__channel_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__thread__channel_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__thread__channel_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__thread__channel_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__thread__channel_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__thread__channel_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__thread__channel_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__thread__channel_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__thread__channel_scalar_common_2[0])),
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
#include "thread.mh"
#include "time.mh"
#include "type_desc.mh"
#include "version_array.mh"
#include "thread.semaphore.mh"



static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__channel__thread__channel__pti_item_1__pseudo_1 = {
  &mercury__thread__channel__thread__channel__type_ctor_info_item_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__channel__thread__mvar__pti_mvar_1__pseudo_thread__channel__pti_item_1__pseudo_1 = {
  &mercury__thread__mvar__thread__mvar__type_ctor_info_mvar_1,
  {
    (MR_PseudoTypeInfo) &mercury__thread__channel__thread__channel__pti_item_1__pseudo_1
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__thread__channel__thread__mvar__pti_mvar_1__pseudo_thread__mvar__pti_mvar_1__pseudo_thread__channel__pti_item_1__pseudo_1 = {
  &mercury__thread__mvar__thread__mvar__type_ctor_info_mvar_1,
  {
    (MR_PseudoTypeInfo) &mercury__thread__channel__thread__mvar__pti_mvar_1__pseudo_thread__channel__pti_item_1__pseudo_1
  }
};

static const MR_PseudoTypeInfo mercury__thread__channel__thread__channel__field_types_channel_1_0[2] = {
  (MR_PseudoTypeInfo) &mercury__thread__channel__thread__mvar__pti_mvar_1__pseudo_thread__mvar__pti_mvar_1__pseudo_thread__channel__pti_item_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__thread__channel__thread__mvar__pti_mvar_1__pseudo_thread__mvar__pti_mvar_1__pseudo_thread__channel__pti_item_1__pseudo_1
};

static const MR_DuFunctorDesc mercury__thread__channel__thread__channel__du_functor_desc_channel_1_0 = {
  (MR_String) "channel",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__thread__channel__thread__channel__field_types_channel_1_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__thread__channel__thread__channel__du_stag_ordered_channel_1_0[1] = {
  &mercury__thread__channel__thread__channel__du_functor_desc_channel_1_0
};

static const MR_DuPtagLayout mercury__thread__channel__thread__channel__du_ptag_ordered_channel_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__thread__channel__thread__channel__du_stag_ordered_channel_1_0
  }
};

static const MR_DuFunctorDescPtr mercury__thread__channel__thread__channel__du_name_ordered_channel_1[1] = {
  &mercury__thread__channel__thread__channel__du_functor_desc_channel_1_0
};

static const MR_Integer mercury__thread__channel__thread__channel__functor_number_map_channel_1[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__thread__channel__thread__channel__type_ctor_info_channel_1 = {
  (MR_Integer) 1,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__thread__channel____Unify____channel_1_0_10001)),
  ((MR_Box) (mercury__thread__channel____Compare____channel_1_0_10001)),
  (MR_String) "thread.channel",
  (MR_String) "channel",
  {     mercury__thread__channel__thread__channel__du_name_ordered_channel_1 },
  {     mercury__thread__channel__thread__channel__du_ptag_ordered_channel_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__thread__channel__thread__channel__functor_number_map_channel_1
};

static const MR_PseudoTypeInfo mercury__thread__channel__thread__channel__field_types_item_1_0[2] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__thread__channel__thread__mvar__pti_mvar_1__pseudo_thread__channel__pti_item_1__pseudo_1
};

static const MR_DuFunctorDesc mercury__thread__channel__thread__channel__du_functor_desc_item_1_0 = {
  (MR_String) "item",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__thread__channel__thread__channel__field_types_item_1_0,
  NULL,
  NULL,
  NULL,
  mercury__private_builtin__MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__thread__channel__thread__channel__du_stag_ordered_item_1_0[1] = {
  &mercury__thread__channel__thread__channel__du_functor_desc_item_1_0
};

static const MR_DuPtagLayout mercury__thread__channel__thread__channel__du_ptag_ordered_item_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__thread__channel__thread__channel__du_stag_ordered_item_1_0
  }
};

static const MR_DuFunctorDescPtr mercury__thread__channel__thread__channel__du_name_ordered_item_1[1] = {
  &mercury__thread__channel__thread__channel__du_functor_desc_item_1_0
};

static const MR_Integer mercury__thread__channel__thread__channel__functor_number_map_item_1[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__thread__channel__thread__channel__type_ctor_info_item_1 = {
  (MR_Integer) 1,
  (MR_Integer) 16,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__thread__channel____Unify____item_1_0_10001)),
  ((MR_Box) (mercury__thread__channel____Compare____item_1_0_10001)),
  (MR_String) "thread.channel",
  (MR_String) "item",
  {     mercury__thread__channel__thread__channel__du_name_ordered_item_1 },
  {     mercury__thread__channel__thread__channel__du_ptag_ordered_item_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__thread__channel__thread__channel__functor_number_map_item_1
};

const MR_TypeCtorInfo_Struct mercury__thread__channel__thread__channel__type_ctor_info_stream_1 = {
  (MR_Integer) 1,
  (MR_Integer) 16,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__thread__channel____Unify____stream_1_0_10001)),
  ((MR_Box) (mercury__thread__channel____Compare____stream_1_0_10001)),
  (MR_String) "thread.channel",
  (MR_String) "stream",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__thread__channel__thread__mvar__pti_mvar_1__pseudo_thread__channel__pti_item_1__pseudo_1 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_bool MR_CALL 
mercury__thread__channel____Unify____channel_1_0_10001(
  MR_Box mercury__thread__channel__wrapper_arg_1,
  MR_Box mercury__thread__channel__wrapper_arg_2,
  MR_Box mercury__thread__channel__wrapper_arg_3)
{
  {
    MR_bool mercury__thread__channel__succeeded;

    {
      mercury__thread__channel__succeeded = mercury__thread__channel____Unify____channel_1_0(((MR_Word) mercury__thread__channel__wrapper_arg_1), ((MR_Word) mercury__thread__channel__wrapper_arg_2), ((MR_Word) mercury__thread__channel__wrapper_arg_3));
    }
    return mercury__thread__channel__succeeded;
  }
}

static void MR_CALL 
mercury__thread__channel____Compare____channel_1_0_10001(
  MR_Box mercury__thread__channel__wrapper_arg_1,
  MR_Box * mercury__thread__channel__wrapper_arg_2,
  MR_Box mercury__thread__channel__wrapper_arg_3,
  MR_Box mercury__thread__channel__wrapper_arg_4)
{
  {
    MR_Word mercury__thread__channel__conv0_HeadVar__1_1;

    {
      mercury__thread__channel____Compare____channel_1_0(((MR_Word) mercury__thread__channel__wrapper_arg_1), &mercury__thread__channel__conv0_HeadVar__1_1, ((MR_Word) mercury__thread__channel__wrapper_arg_3), ((MR_Word) mercury__thread__channel__wrapper_arg_4));
    }
    *mercury__thread__channel__wrapper_arg_2 = ((MR_Box) (mercury__thread__channel__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__thread__channel____Unify____item_1_0_10001(
  MR_Box mercury__thread__channel__wrapper_arg_1,
  MR_Box mercury__thread__channel__wrapper_arg_2,
  MR_Box mercury__thread__channel__wrapper_arg_3)
{
  {
    MR_bool mercury__thread__channel__succeeded;

    {
      mercury__thread__channel__succeeded = mercury__thread__channel____Unify____item_1_0(((MR_Word) mercury__thread__channel__wrapper_arg_1), ((MR_Word) mercury__thread__channel__wrapper_arg_2), ((MR_Word) mercury__thread__channel__wrapper_arg_3));
    }
    return mercury__thread__channel__succeeded;
  }
}

static void MR_CALL 
mercury__thread__channel____Compare____item_1_0_10001(
  MR_Box mercury__thread__channel__wrapper_arg_1,
  MR_Box * mercury__thread__channel__wrapper_arg_2,
  MR_Box mercury__thread__channel__wrapper_arg_3,
  MR_Box mercury__thread__channel__wrapper_arg_4)
{
  {
    MR_Word mercury__thread__channel__conv0_HeadVar__1_1;

    {
      mercury__thread__channel____Compare____item_1_0(((MR_Word) mercury__thread__channel__wrapper_arg_1), &mercury__thread__channel__conv0_HeadVar__1_1, ((MR_Word) mercury__thread__channel__wrapper_arg_3), ((MR_Word) mercury__thread__channel__wrapper_arg_4));
    }
    *mercury__thread__channel__wrapper_arg_2 = ((MR_Box) (mercury__thread__channel__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__thread__channel____Unify____stream_1_0_10001(
  MR_Box mercury__thread__channel__wrapper_arg_1,
  MR_Box mercury__thread__channel__wrapper_arg_2,
  MR_Box mercury__thread__channel__wrapper_arg_3)
{
  {
    MR_bool mercury__thread__channel__succeeded;

    {
      mercury__thread__channel__succeeded = mercury__thread__channel____Unify____stream_1_0(((MR_Word) mercury__thread__channel__wrapper_arg_1), ((MR_Word) mercury__thread__channel__wrapper_arg_2), ((MR_Word) mercury__thread__channel__wrapper_arg_3));
    }
    return mercury__thread__channel__succeeded;
  }
}

static void MR_CALL 
mercury__thread__channel____Compare____stream_1_0_10001(
  MR_Box mercury__thread__channel__wrapper_arg_1,
  MR_Box * mercury__thread__channel__wrapper_arg_2,
  MR_Box mercury__thread__channel__wrapper_arg_3,
  MR_Box mercury__thread__channel__wrapper_arg_4)
{
  {
    MR_Word mercury__thread__channel__conv0_HeadVar__1_1;

    {
      mercury__thread__channel____Compare____stream_1_0(((MR_Word) mercury__thread__channel__wrapper_arg_1), &mercury__thread__channel__conv0_HeadVar__1_1, ((MR_Word) mercury__thread__channel__wrapper_arg_3), ((MR_Word) mercury__thread__channel__wrapper_arg_4));
    }
    *mercury__thread__channel__wrapper_arg_2 = ((MR_Box) (mercury__thread__channel__conv0_HeadVar__1_1));
  }
}

static MR_Integer MR_CALL 
mercury__thread__channel__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    MR_bool mercury__thread__channel__succeeded;

    return (MR_Integer) 1200;
  }
}

void MR_CALL 
mercury__thread__channel____Compare____stream_1_0(
  MR_Word mercury__thread__channel__TypeInfo_for_T_6,
  MR_Word * mercury__thread__channel__HeadVar__1_1,
  MR_Word mercury__thread__channel__HeadVar__2_2,
  MR_Word mercury__thread__channel__HeadVar__3_3)
{
  {
    MR_bool mercury__thread__channel__succeeded;
    MR_Word mercury__thread__channel__TypeCtorInfo_7_7 = (MR_Word) &mercury__thread__channel__thread__channel__type_ctor_info_item_1;
    MR_Word mercury__thread__channel__TypeInfo_8_8;
    MR_Word mercury__thread__channel__Cast_HeadVar1_4 = mercury__thread__channel__HeadVar__2_2;
    MR_Word mercury__thread__channel__Cast_HeadVar2_5 = mercury__thread__channel__HeadVar__3_3;

    {
      mercury__thread__channel__TypeInfo_8_8 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_8_8, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_7_7));
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_8_8, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_for_T_6));
    }
    {
      mercury__thread__mvar____Compare____mvar_1_0(mercury__thread__channel__TypeInfo_8_8, mercury__thread__channel__HeadVar__1_1, (MR_Word) mercury__thread__channel__Cast_HeadVar1_4, (MR_Word) mercury__thread__channel__Cast_HeadVar2_5);
    }
  }
}

MR_bool MR_CALL 
mercury__thread__channel____Unify____stream_1_0(
  MR_Word mercury__thread__channel__TypeInfo_for_T_5,
  MR_Word mercury__thread__channel__HeadVar__1_1,
  MR_Word mercury__thread__channel__HeadVar__2_2)
{
  {
    MR_bool mercury__thread__channel__succeeded;
    MR_Word mercury__thread__channel__TypeCtorInfo_6_6 = (MR_Word) &mercury__thread__channel__thread__channel__type_ctor_info_item_1;
    MR_Word mercury__thread__channel__TypeInfo_7_7;
    MR_Word mercury__thread__channel__Cast_HeadVar1_3 = mercury__thread__channel__HeadVar__1_1;
    MR_Word mercury__thread__channel__Cast_HeadVar2_4 = mercury__thread__channel__HeadVar__2_2;

    {
      mercury__thread__channel__TypeInfo_7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_7_7, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_6_6));
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_7_7, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_for_T_5));
    }
    {
      mercury__thread__channel__succeeded = mercury__thread__mvar____Unify____mvar_1_0(mercury__thread__channel__TypeInfo_7_7, (MR_Word) mercury__thread__channel__Cast_HeadVar1_3, (MR_Word) mercury__thread__channel__Cast_HeadVar2_4);
    }
    return mercury__thread__channel__succeeded;
  }
}

void MR_CALL 
mercury__thread__channel____Compare____item_1_0(
  MR_Word mercury__thread__channel__TypeInfo_for_T_11,
  MR_Word * mercury__thread__channel__HeadVar__1_1,
  MR_Word mercury__thread__channel__HeadVar__2_2,
  MR_Word mercury__thread__channel__HeadVar__3_3)
{
  {
    MR_bool mercury__thread__channel__succeeded;
    MR_Integer mercury__thread__channel__CastX_9 = (MR_Integer) mercury__thread__channel__HeadVar__2_2;
    MR_Integer mercury__thread__channel__CastY_10 = (MR_Integer) mercury__thread__channel__HeadVar__3_3;

    mercury__thread__channel__succeeded = (mercury__thread__channel__CastX_9 == mercury__thread__channel__CastY_10);
    if (mercury__thread__channel__succeeded)
      *mercury__thread__channel__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Box mercury__thread__channel__V_4_4 = (MR_hl_field(MR_mktag(0), mercury__thread__channel__HeadVar__2_2, (MR_Integer) 0));
        MR_Word mercury__thread__channel__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__channel__HeadVar__2_2, (MR_Integer) 1)));
        MR_Box mercury__thread__channel__V_6_6 = (MR_hl_field(MR_mktag(0), mercury__thread__channel__HeadVar__3_3, (MR_Integer) 0));
        MR_Word mercury__thread__channel__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__channel__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mercury__thread__channel__V_8_8;

        {
          mercury__builtin__compare_3_p_0(mercury__thread__channel__TypeInfo_for_T_11, &mercury__thread__channel__V_8_8, mercury__thread__channel__V_4_4, mercury__thread__channel__V_6_6);
        }
        mercury__thread__channel__succeeded = (mercury__thread__channel__V_8_8 == (MR_Integer) 0);
        mercury__thread__channel__succeeded = !(mercury__thread__channel__succeeded);
        if (mercury__thread__channel__succeeded)
          *mercury__thread__channel__HeadVar__1_1 = mercury__thread__channel__V_8_8;
        else
          {
            MR_Word mercury__thread__channel__TypeCtorInfo_12_12 = (MR_Word) &mercury__thread__channel__thread__channel__type_ctor_info_item_1;
            MR_Word mercury__thread__channel__TypeInfo_13_13;

            {
              mercury__thread__channel__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_13_13, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_12_12));
              MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_13_13, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_for_T_11));
            }
            {
              mercury__thread__mvar____Compare____mvar_1_0(mercury__thread__channel__TypeInfo_13_13, mercury__thread__channel__HeadVar__1_1, (MR_Word) mercury__thread__channel__V_5_5, (MR_Word) mercury__thread__channel__V_7_7);
            }
          }
      }
  }
}

MR_bool MR_CALL 
mercury__thread__channel____Unify____item_1_0(
  MR_Word mercury__thread__channel__TypeInfo_for_T_9,
  MR_Word mercury__thread__channel__HeadVar__1_1,
  MR_Word mercury__thread__channel__HeadVar__2_2)
{
  {
    MR_bool mercury__thread__channel__succeeded;
    MR_Integer mercury__thread__channel__CastX_7 = (MR_Integer) mercury__thread__channel__HeadVar__1_1;
    MR_Integer mercury__thread__channel__CastY_8 = (MR_Integer) mercury__thread__channel__HeadVar__2_2;

    mercury__thread__channel__succeeded = (mercury__thread__channel__CastX_7 == mercury__thread__channel__CastY_8);
    if (mercury__thread__channel__succeeded)
      mercury__thread__channel__succeeded = MR_TRUE;
    else
      {
        MR_Word mercury__thread__channel__TypeCtorInfo_10_10;
        MR_Word mercury__thread__channel__TypeInfo_11_11;
        MR_Box mercury__thread__channel__V_3_3 = (MR_hl_field(MR_mktag(0), mercury__thread__channel__HeadVar__1_1, (MR_Integer) 0));
        MR_Word mercury__thread__channel__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__channel__HeadVar__1_1, (MR_Integer) 1)));
        MR_Box mercury__thread__channel__V_5_5 = (MR_hl_field(MR_mktag(0), mercury__thread__channel__HeadVar__2_2, (MR_Integer) 0));
        MR_Word mercury__thread__channel__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__channel__HeadVar__2_2, (MR_Integer) 1)));

        {
          mercury__thread__channel__succeeded = mercury__builtin__unify_2_p_0(mercury__thread__channel__TypeInfo_for_T_9, mercury__thread__channel__V_3_3, mercury__thread__channel__V_5_5);
        }
        if (mercury__thread__channel__succeeded)
          {
            mercury__thread__channel__TypeCtorInfo_10_10 = (MR_Word) &mercury__thread__channel__thread__channel__type_ctor_info_item_1;
            {
              mercury__thread__channel__TypeInfo_11_11 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_11_11, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_10_10));
              MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_11_11, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_for_T_9));
            }
            {
              mercury__thread__channel__succeeded = mercury__thread__mvar____Unify____mvar_1_0(mercury__thread__channel__TypeInfo_11_11, (MR_Word) mercury__thread__channel__V_4_4, (MR_Word) mercury__thread__channel__V_6_6);
            }
          }
      }
    return mercury__thread__channel__succeeded;
  }
}

void MR_CALL 
mercury__thread__channel____Compare____channel_1_0(
  MR_Word mercury__thread__channel__TypeInfo_for_T_11,
  MR_Word * mercury__thread__channel__HeadVar__1_1,
  MR_Word mercury__thread__channel__HeadVar__2_2,
  MR_Word mercury__thread__channel__HeadVar__3_3)
{
  {
    MR_bool mercury__thread__channel__succeeded;
    MR_Integer mercury__thread__channel__CastX_9 = (MR_Integer) mercury__thread__channel__HeadVar__2_2;
    MR_Integer mercury__thread__channel__CastY_10 = (MR_Integer) mercury__thread__channel__HeadVar__3_3;

    mercury__thread__channel__succeeded = (mercury__thread__channel__CastX_9 == mercury__thread__channel__CastY_10);
    if (mercury__thread__channel__succeeded)
      *mercury__thread__channel__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word mercury__thread__channel__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__channel__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__thread__channel__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__channel__HeadVar__2_2, (MR_Integer) 1)));
        MR_Word mercury__thread__channel__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__channel__HeadVar__3_3, (MR_Integer) 0)));
        MR_Word mercury__thread__channel__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__channel__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mercury__thread__channel__V_8_8;
        MR_Word mercury__thread__channel__TypeCtorInfo_12_12 = (MR_Word) &mercury__thread__channel__thread__channel__type_ctor_info_item_1;
        MR_Word mercury__thread__channel__TypeInfo_13_13;
        MR_Word mercury__thread__channel__TypeCtorInfo_14_14 = (MR_Word) &mercury__thread__mvar__thread__mvar__type_ctor_info_mvar_1;
        MR_Word mercury__thread__channel__TypeInfo_15_15;

        {
          mercury__thread__channel__TypeInfo_13_13 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_13_13, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_12_12));
          MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_13_13, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_for_T_11));
        }
        {
          mercury__thread__channel__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_15_15, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_14_14));
          MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_15_15, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_13_13));
        }
        {
          mercury__thread__mvar____Compare____mvar_1_0(mercury__thread__channel__TypeInfo_15_15, &mercury__thread__channel__V_8_8, (MR_Word) mercury__thread__channel__V_4_4, (MR_Word) mercury__thread__channel__V_6_6);
        }
        mercury__thread__channel__succeeded = (mercury__thread__channel__V_8_8 == (MR_Integer) 0);
        mercury__thread__channel__succeeded = !(mercury__thread__channel__succeeded);
        if (mercury__thread__channel__succeeded)
          *mercury__thread__channel__HeadVar__1_1 = mercury__thread__channel__V_8_8;
        else
          {
            MR_Word mercury__thread__channel__TypeCtorInfo_17_17 = (MR_Word) &mercury__thread__channel__thread__channel__type_ctor_info_item_1;
            MR_Word mercury__thread__channel__TypeInfo_18_18;
            MR_Word mercury__thread__channel__TypeCtorInfo_19_19 = (MR_Word) &mercury__thread__mvar__thread__mvar__type_ctor_info_mvar_1;
            MR_Word mercury__thread__channel__TypeInfo_20_20;

            {
              mercury__thread__channel__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_18_18, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_17_17));
              MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_18_18, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_for_T_11));
            }
            {
              mercury__thread__channel__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_20_20, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_19_19));
              MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_20_20, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_18_18));
            }
            {
              mercury__thread__mvar____Compare____mvar_1_0(mercury__thread__channel__TypeInfo_20_20, mercury__thread__channel__HeadVar__1_1, (MR_Word) mercury__thread__channel__V_5_5, (MR_Word) mercury__thread__channel__V_7_7);
            }
          }
      }
  }
}

MR_bool MR_CALL 
mercury__thread__channel____Unify____channel_1_0(
  MR_Word mercury__thread__channel__TypeInfo_for_T_9,
  MR_Word mercury__thread__channel__HeadVar__1_1,
  MR_Word mercury__thread__channel__HeadVar__2_2)
{
  {
    MR_bool mercury__thread__channel__succeeded;
    MR_Integer mercury__thread__channel__CastX_7 = (MR_Integer) mercury__thread__channel__HeadVar__1_1;
    MR_Integer mercury__thread__channel__CastY_8 = (MR_Integer) mercury__thread__channel__HeadVar__2_2;

    mercury__thread__channel__succeeded = (mercury__thread__channel__CastX_7 == mercury__thread__channel__CastY_8);
    if (mercury__thread__channel__succeeded)
      mercury__thread__channel__succeeded = MR_TRUE;
    else
      {
        MR_Word mercury__thread__channel__TypeCtorInfo_10_10 = (MR_Word) &mercury__thread__channel__thread__channel__type_ctor_info_item_1;
        MR_Word mercury__thread__channel__TypeCtorInfo_12_12 = (MR_Word) &mercury__thread__mvar__thread__mvar__type_ctor_info_mvar_1;
        MR_Word mercury__thread__channel__TypeInfo_16_16;
        MR_Word mercury__thread__channel__TypeInfo_18_18;
        MR_Word mercury__thread__channel__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__channel__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__thread__channel__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__channel__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__thread__channel__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__channel__HeadVar__2_2, (MR_Integer) 0)));
        MR_Word mercury__thread__channel__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__channel__HeadVar__2_2, (MR_Integer) 1)));

        {
          mercury__thread__channel__TypeInfo_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_16_16, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_10_10));
          MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_16_16, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_for_T_9));
        }
        {
          mercury__thread__channel__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_18_18, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_12_12));
          MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_18_18, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_16_16));
        }
        {
          mercury__thread__channel__succeeded = mercury__thread__mvar____Unify____mvar_1_0(mercury__thread__channel__TypeInfo_18_18, (MR_Word) mercury__thread__channel__V_3_3, (MR_Word) mercury__thread__channel__V_5_5);
        }
        if (mercury__thread__channel__succeeded)
          {
            mercury__thread__channel__succeeded = mercury__thread__mvar____Unify____mvar_1_0(mercury__thread__channel__TypeInfo_18_18, (MR_Word) mercury__thread__channel__V_4_4, (MR_Word) mercury__thread__channel__V_6_6);
          }
      }
    return mercury__thread__channel__succeeded;
  }
}

void MR_CALL 
mercury__thread__channel__untake_4_p_0(
  MR_Word mercury__thread__channel__TypeInfo_for_T_18,
  MR_Word mercury__thread__channel__HeadVar__1_1,
  MR_Box mercury__thread__channel__Val_7)
{
  {
    MR_bool mercury__thread__channel__succeeded;
    MR_Word mercury__thread__channel__TypeCtorInfo_19_19 = (MR_Word) &mercury__thread__channel__thread__channel__type_ctor_info_item_1;
    MR_Word mercury__thread__channel__TypeInfo_20_20;
    MR_Word mercury__thread__channel__TypeCtorInfo_21_21;
    MR_Word mercury__thread__channel__TypeInfo_22_22;
    MR_Word mercury__thread__channel__Read_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__channel__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mercury__thread__channel__NewHead_9;
    MR_Word mercury__thread__channel__Head_10;
    MR_Word mercury__thread__channel__V_15_15;
    MR_Word mercury__thread__channel___Write_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__channel__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word mercury__thread__channel__conv0_NewHead_9;
    MR_Box mercury__thread__channel__conv1_Head_10;

    {
      mercury__thread__channel__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_20_20, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_19_19));
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_20_20, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_for_T_18));
    }
    {
      mercury__thread__mvar__init_3_p_0(mercury__thread__channel__TypeInfo_20_20, &mercury__thread__channel__conv0_NewHead_9);
    }
    mercury__thread__channel__NewHead_9 = (MR_Word) mercury__thread__channel__conv0_NewHead_9;
    mercury__thread__channel__TypeCtorInfo_21_21 = (MR_Word) &mercury__thread__mvar__thread__mvar__type_ctor_info_mvar_1;
    {
      mercury__thread__channel__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_22_22, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_21_21));
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_22_22, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_20_20));
    }
    {
      mercury__thread__mvar__take_4_p_0(mercury__thread__channel__TypeInfo_22_22, (MR_Word) mercury__thread__channel__Read_5, &mercury__thread__channel__conv1_Head_10);
    }
    mercury__thread__channel__Head_10 = ((MR_Word) mercury__thread__channel__conv1_Head_10);
    {
      mercury__thread__channel__V_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__thread__channel__V_15_15, 0) = mercury__thread__channel__Val_7;
      MR_hl_field(MR_mktag(0), mercury__thread__channel__V_15_15, 1) = ((MR_Box) (mercury__thread__channel__Head_10));
    }
    {
      mercury__thread__mvar__put_4_p_0(mercury__thread__channel__TypeInfo_20_20, (MR_Word) mercury__thread__channel__NewHead_9, ((MR_Box) (mercury__thread__channel__V_15_15)));
    }
    {
      mercury__thread__mvar__put_4_p_0(mercury__thread__channel__TypeInfo_22_22, (MR_Word) mercury__thread__channel__Read_5, ((MR_Box) (mercury__thread__channel__NewHead_9)));
    }
  }
}

void MR_CALL 
mercury__thread__channel__duplicate_4_p_0(
  MR_Word mercury__thread__channel__TypeInfo_for_T_16,
  MR_Word mercury__thread__channel__HeadVar__1_1,
  MR_Word * mercury__thread__channel__HeadVar__2_2)
{
  {
    MR_bool mercury__thread__channel__succeeded;
    MR_Word mercury__thread__channel__TypeCtorInfo_17_17 = (MR_Word) &mercury__thread__channel__thread__channel__type_ctor_info_item_1;
    MR_Word mercury__thread__channel__TypeInfo_18_18;
    MR_Word mercury__thread__channel__TypeCtorInfo_19_19 = (MR_Word) &mercury__thread__mvar__thread__mvar__type_ctor_info_mvar_1;
    MR_Word mercury__thread__channel__TypeInfo_20_20;
    MR_Word mercury__thread__channel__Write_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__channel__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word mercury__thread__channel__NewRead_7;
    MR_Word mercury__thread__channel__Hole_9;
    MR_Word mercury__thread__channel___Read_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__channel__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mercury__thread__channel__conv0_NewRead_7;
    MR_Box mercury__thread__channel__conv1_Hole_9;

    {
      mercury__thread__channel__TypeInfo_18_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_18_18, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_17_17));
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_18_18, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_for_T_16));
    }
    {
      mercury__thread__channel__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_20_20, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_19_19));
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_20_20, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_18_18));
    }
    {
      mercury__thread__mvar__init_3_p_0(mercury__thread__channel__TypeInfo_20_20, &mercury__thread__channel__conv0_NewRead_7);
    }
    mercury__thread__channel__NewRead_7 = (MR_Word) mercury__thread__channel__conv0_NewRead_7;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *mercury__thread__channel__HeadVar__2_2 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__thread__channel__NewRead_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__thread__channel__Write_6));
    }
    {
      mercury__thread__mvar__take_4_p_0(mercury__thread__channel__TypeInfo_20_20, (MR_Word) mercury__thread__channel__Write_6, &mercury__thread__channel__conv1_Hole_9);
    }
    mercury__thread__channel__Hole_9 = ((MR_Word) mercury__thread__channel__conv1_Hole_9);
    {
      mercury__thread__mvar__put_4_p_0(mercury__thread__channel__TypeInfo_20_20, (MR_Word) mercury__thread__channel__Write_6, ((MR_Box) (mercury__thread__channel__Hole_9)));
    }
    {
      mercury__thread__mvar__put_4_p_0(mercury__thread__channel__TypeInfo_20_20, (MR_Word) mercury__thread__channel__NewRead_7, ((MR_Box) (mercury__thread__channel__Hole_9)));
    }
  }
}

void MR_CALL 
mercury__thread__channel__try_take_4_p_0(
  MR_Word mercury__thread__channel__TypeInfo_for_T_19,
  MR_Word mercury__thread__channel__HeadVar__1_1,
  MR_Word * mercury__thread__channel__MaybeVal_7)
{
  {
    MR_bool mercury__thread__channel__succeeded;
    MR_Word mercury__thread__channel__TypeCtorInfo_20_20 = (MR_Word) &mercury__thread__channel__thread__channel__type_ctor_info_item_1;
    MR_Word mercury__thread__channel__TypeInfo_21_21;
    MR_Word mercury__thread__channel__TypeCtorInfo_22_22 = (MR_Word) &mercury__thread__mvar__thread__mvar__type_ctor_info_mvar_1;
    MR_Word mercury__thread__channel__TypeInfo_23_23;
    MR_Word mercury__thread__channel__Read_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__channel__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mercury__thread__channel__Head_9;
    MR_Word mercury__thread__channel__MaybeItem_10;
    MR_Word mercury__thread__channel__NewHead_12;
    MR_Word mercury__thread__channel___Write_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__channel__HeadVar__1_1, (MR_Integer) 1)));
    MR_Box mercury__thread__channel__conv0_Head_9;
    MR_Word mercury__thread__channel__conv1_MaybeItem_10;

    {
      mercury__thread__channel__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_21_21, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_20_20));
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_21_21, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_for_T_19));
    }
    {
      mercury__thread__channel__TypeInfo_23_23 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_23_23, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_22_22));
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_23_23, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_21_21));
    }
    {
      mercury__thread__mvar__take_4_p_0(mercury__thread__channel__TypeInfo_23_23, (MR_Word) mercury__thread__channel__Read_5, &mercury__thread__channel__conv0_Head_9);
    }
    mercury__thread__channel__Head_9 = ((MR_Word) mercury__thread__channel__conv0_Head_9);
    {
      mercury__thread__mvar__try_take_4_p_0(mercury__thread__channel__TypeInfo_21_21, (MR_Word) mercury__thread__channel__Head_9, &mercury__thread__channel__conv1_MaybeItem_10);
    }
    mercury__thread__channel__MaybeItem_10 = (MR_Word) mercury__thread__channel__conv1_MaybeItem_10;
    if ((mercury__thread__channel__MaybeItem_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__thread__channel__MaybeVal_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        mercury__thread__channel__NewHead_12 = mercury__thread__channel__Head_9;
      }
    else
      {
        MR_Box mercury__thread__channel__Val_11;
        MR_Word mercury__thread__channel__V_17_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__thread__channel__MaybeItem_10, (MR_Integer) 0)));

        mercury__thread__channel__Val_11 = (MR_hl_field(MR_mktag(0), mercury__thread__channel__V_17_17, (MR_Integer) 0));
        mercury__thread__channel__NewHead_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__channel__V_17_17, (MR_Integer) 1)));
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mercury__thread__channel__MaybeVal_7 = base;
          MR_hl_field(MR_mktag(1), base, 0) = mercury__thread__channel__Val_11;
        }
      }
    {
      mercury__thread__mvar__put_4_p_0(mercury__thread__channel__TypeInfo_23_23, (MR_Word) mercury__thread__channel__Read_5, ((MR_Box) (mercury__thread__channel__NewHead_12)));
    }
  }
}

void MR_CALL 
mercury__thread__channel__take_4_p_0(
  MR_Word mercury__thread__channel__TypeInfo_for_T_17,
  MR_Word mercury__thread__channel__HeadVar__1_1,
  MR_Box * mercury__thread__channel__Val_7)
{
  {
    MR_bool mercury__thread__channel__succeeded;
    MR_Word mercury__thread__channel__TypeCtorInfo_18_18 = (MR_Word) &mercury__thread__channel__thread__channel__type_ctor_info_item_1;
    MR_Word mercury__thread__channel__TypeInfo_19_19;
    MR_Word mercury__thread__channel__TypeCtorInfo_20_20 = (MR_Word) &mercury__thread__mvar__thread__mvar__type_ctor_info_mvar_1;
    MR_Word mercury__thread__channel__TypeInfo_21_21;
    MR_Word mercury__thread__channel__Read_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__channel__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mercury__thread__channel__Head_9;
    MR_Word mercury__thread__channel__NewHead_10;
    MR_Word mercury__thread__channel__V_14_14;
    MR_Word mercury__thread__channel___Write_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__channel__HeadVar__1_1, (MR_Integer) 1)));
    MR_Box mercury__thread__channel__conv0_Head_9;
    MR_Box mercury__thread__channel__conv1_V_14_14;

    {
      mercury__thread__channel__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_19_19, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_18_18));
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_19_19, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_for_T_17));
    }
    {
      mercury__thread__channel__TypeInfo_21_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_21_21, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_20_20));
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_21_21, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_19_19));
    }
    {
      mercury__thread__mvar__take_4_p_0(mercury__thread__channel__TypeInfo_21_21, (MR_Word) mercury__thread__channel__Read_5, &mercury__thread__channel__conv0_Head_9);
    }
    mercury__thread__channel__Head_9 = ((MR_Word) mercury__thread__channel__conv0_Head_9);
    {
      mercury__thread__mvar__take_4_p_0(mercury__thread__channel__TypeInfo_19_19, (MR_Word) mercury__thread__channel__Head_9, &mercury__thread__channel__conv1_V_14_14);
    }
    mercury__thread__channel__V_14_14 = ((MR_Word) mercury__thread__channel__conv1_V_14_14);
    *mercury__thread__channel__Val_7 = (MR_hl_field(MR_mktag(0), mercury__thread__channel__V_14_14, (MR_Integer) 0));
    mercury__thread__channel__NewHead_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__channel__V_14_14, (MR_Integer) 1)));
    {
      mercury__thread__mvar__put_4_p_0(mercury__thread__channel__TypeInfo_21_21, (MR_Word) mercury__thread__channel__Read_5, ((MR_Box) (mercury__thread__channel__NewHead_10)));
    }
  }
}

void MR_CALL 
mercury__thread__channel__put_4_p_0(
  MR_Word mercury__thread__channel__TypeInfo_for_T_18,
  MR_Word mercury__thread__channel__HeadVar__1_1,
  MR_Box mercury__thread__channel__Val_7)
{
  {
    MR_bool mercury__thread__channel__succeeded;
    MR_Word mercury__thread__channel__TypeCtorInfo_19_19 = (MR_Word) &mercury__thread__channel__thread__channel__type_ctor_info_item_1;
    MR_Word mercury__thread__channel__TypeInfo_20_20;
    MR_Word mercury__thread__channel__TypeCtorInfo_21_21;
    MR_Word mercury__thread__channel__TypeInfo_22_22;
    MR_Word mercury__thread__channel__Write_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__channel__HeadVar__1_1, (MR_Integer) 1)));
    MR_Word mercury__thread__channel__NewHole_9;
    MR_Word mercury__thread__channel__OldHole_10;
    MR_Word mercury__thread__channel__V_16_16;
    MR_Word mercury__thread__channel___Read_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__thread__channel__HeadVar__1_1, (MR_Integer) 0)));
    MR_Word mercury__thread__channel__conv0_NewHole_9;
    MR_Box mercury__thread__channel__conv1_OldHole_10;

    {
      mercury__thread__channel__TypeInfo_20_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_20_20, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_19_19));
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_20_20, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_for_T_18));
    }
    {
      mercury__thread__mvar__init_3_p_0(mercury__thread__channel__TypeInfo_20_20, &mercury__thread__channel__conv0_NewHole_9);
    }
    mercury__thread__channel__NewHole_9 = (MR_Word) mercury__thread__channel__conv0_NewHole_9;
    mercury__thread__channel__TypeCtorInfo_21_21 = (MR_Word) &mercury__thread__mvar__thread__mvar__type_ctor_info_mvar_1;
    {
      mercury__thread__channel__TypeInfo_22_22 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_22_22, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_21_21));
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_22_22, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_20_20));
    }
    {
      mercury__thread__mvar__take_4_p_0(mercury__thread__channel__TypeInfo_22_22, (MR_Word) mercury__thread__channel__Write_6, &mercury__thread__channel__conv1_OldHole_10);
    }
    mercury__thread__channel__OldHole_10 = ((MR_Word) mercury__thread__channel__conv1_OldHole_10);
    {
      mercury__thread__mvar__put_4_p_0(mercury__thread__channel__TypeInfo_22_22, (MR_Word) mercury__thread__channel__Write_6, ((MR_Box) (mercury__thread__channel__NewHole_9)));
    }
    {
      mercury__thread__channel__V_16_16 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__thread__channel__V_16_16, 0) = mercury__thread__channel__Val_7;
      MR_hl_field(MR_mktag(0), mercury__thread__channel__V_16_16, 1) = ((MR_Box) (mercury__thread__channel__NewHole_9));
    }
    {
      mercury__thread__mvar__put_4_p_0(mercury__thread__channel__TypeInfo_20_20, (MR_Word) mercury__thread__channel__OldHole_10, ((MR_Box) (mercury__thread__channel__V_16_16)));
    }
  }
}

void MR_CALL 
mercury__thread__channel__init_3_p_0(
  MR_Word mercury__thread__channel__TypeInfo_for_T_15,
  MR_Word * mercury__thread__channel__HeadVar__1_1)
{
  {
    MR_bool mercury__thread__channel__succeeded;
    MR_Word mercury__thread__channel__TypeCtorInfo_16_16 = (MR_Word) &mercury__thread__channel__thread__channel__type_ctor_info_item_1;
    MR_Word mercury__thread__channel__TypeInfo_17_17;
    MR_Word mercury__thread__channel__TypeCtorInfo_18_18 = (MR_Word) &mercury__thread__mvar__thread__mvar__type_ctor_info_mvar_1;
    MR_Word mercury__thread__channel__TypeInfo_19_19;
    MR_Word mercury__thread__channel__Read_4;
    MR_Word mercury__thread__channel__Write_5;
    MR_Word mercury__thread__channel__Hole_7;
    MR_Word mercury__thread__channel__conv0_Read_4;
    MR_Word mercury__thread__channel__conv1_Write_5;
    MR_Word mercury__thread__channel__conv2_Hole_7;

    {
      mercury__thread__channel__TypeInfo_17_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_17_17, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_16_16));
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_17_17, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_for_T_15));
    }
    {
      mercury__thread__channel__TypeInfo_19_19 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_19_19, 0) = ((MR_Box) (mercury__thread__channel__TypeCtorInfo_18_18));
      MR_hl_field(MR_mktag(0), mercury__thread__channel__TypeInfo_19_19, 1) = ((MR_Box) (mercury__thread__channel__TypeInfo_17_17));
    }
    {
      mercury__thread__mvar__init_3_p_0(mercury__thread__channel__TypeInfo_19_19, &mercury__thread__channel__conv0_Read_4);
    }
    mercury__thread__channel__Read_4 = (MR_Word) mercury__thread__channel__conv0_Read_4;
    {
      mercury__thread__mvar__init_3_p_0(mercury__thread__channel__TypeInfo_19_19, &mercury__thread__channel__conv1_Write_5);
    }
    mercury__thread__channel__Write_5 = (MR_Word) mercury__thread__channel__conv1_Write_5;
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *mercury__thread__channel__HeadVar__1_1 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__thread__channel__Read_4));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__thread__channel__Write_5));
    }
    {
      mercury__thread__mvar__init_3_p_0(mercury__thread__channel__TypeInfo_17_17, &mercury__thread__channel__conv2_Hole_7);
    }
    mercury__thread__channel__Hole_7 = (MR_Word) mercury__thread__channel__conv2_Hole_7;
    {
      mercury__thread__mvar__put_4_p_0(mercury__thread__channel__TypeInfo_19_19, (MR_Word) mercury__thread__channel__Read_4, ((MR_Box) (mercury__thread__channel__Hole_7)));
    }
    {
      mercury__thread__mvar__put_4_p_0(mercury__thread__channel__TypeInfo_19_19, (MR_Word) mercury__thread__channel__Write_5, ((MR_Box) (mercury__thread__channel__Hole_7)));
    }
  }
}

void mercury__thread__channel__init(void)
{
}

void mercury__thread__channel__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__thread__channel__thread__channel__type_ctor_info_channel_1);
	MR_register_type_ctor_info(&mercury__thread__channel__thread__channel__type_ctor_info_item_1);
	MR_register_type_ctor_info(&mercury__thread__channel__thread__channel__type_ctor_info_stream_1);
}

void mercury__thread__channel__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module thread.channel. */
