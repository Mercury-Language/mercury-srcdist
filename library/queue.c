/*
** Automatically generated from `queue.m'
** by the Mercury compiler,
** version rotd-2015-03-10
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


/* :- module queue. */
/* :- implementation. */

/*
INIT mercury__queue__init
ENDINIT
*/

#include "queue.mih"


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




#line 94 "queue.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__queue__list__pti_list_1__pseudo_1;

#line 97 "queue.c"
static const MR_PseudoTypeInfo mercury__queue__queue__field_types_queue_1_0[2];

#line 100 "queue.c"
static const MR_ConstString mercury__queue__queue__field_names_queue_1_0[2];

#line 103 "queue.c"
static const MR_DuFunctorDesc mercury__queue__queue__du_functor_desc_queue_1_0;

#line 106 "queue.c"
static const MR_DuFunctorDescPtr mercury__queue__queue__du_stag_ordered_queue_1_0[1];

#line 109 "queue.c"
static const MR_DuPtagLayout mercury__queue__queue__du_ptag_ordered_queue_1[1];

#line 112 "queue.c"
static const MR_DuFunctorDescPtr mercury__queue__queue__du_name_ordered_queue_1[1];

#line 115 "queue.c"
static const MR_Integer mercury__queue__queue__functor_number_map_queue_1[1];

#line 118 "queue.c"
static MR_bool MR_CALL 
mercury__queue____Unify____queue_1_0_10001(
#line 121 "queue.c"
  MR_Box mercury__queue__wrapper_arg_1,
#line 123 "queue.c"
  MR_Box mercury__queue__wrapper_arg_2,
#line 125 "queue.c"
  MR_Box mercury__queue__wrapper_arg_3);

#line 128 "queue.c"
static void MR_CALL 
mercury__queue____Compare____queue_1_0_10001(
#line 131 "queue.c"
  MR_Box mercury__queue__wrapper_arg_1,
#line 133 "queue.c"
  MR_Box * mercury__queue__wrapper_arg_2,
#line 135 "queue.c"
  MR_Box mercury__queue__wrapper_arg_3,
#line 137 "queue.c"
  MR_Box mercury__queue__wrapper_arg_4);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__queue__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

#line 188 "queue.m"
static void MR_CALL 
mercury__queue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_117_116_95_108_105_115_116_95_50_95_95_91_49_93_95_48_3_p_0(
#line 188 "queue.m"
  MR_Word mercury__queue__HeadVar__1_1,
#line 188 "queue.m"
  MR_Word mercury__queue__HeadVar__2_2,
#line 188 "queue.m"
  MR_Word * mercury__queue__On_3);


static /* final */ const MR_Box mercury__queue_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__queue_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__queue_scalar_common_3[2][5];

static /* final */ const MR_Box mercury__queue_scalar_common_4[1][2];




static /* final */ const MR_Box mercury__queue_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__queue_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__queue_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__queue_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__queue_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__queue_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__queue_scalar_common_4[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
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



#line 528 "queue.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__queue__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 536 "queue.c"
static const MR_PseudoTypeInfo mercury__queue__queue__field_types_queue_1_0[2] = {
  (MR_PseudoTypeInfo) &mercury__queue__list__pti_list_1__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__queue__list__pti_list_1__pseudo_1
};

#line 542 "queue.c"
static const MR_ConstString mercury__queue__queue__field_names_queue_1_0[2] = {
  (MR_String) "on_list",
  (MR_String) "off_list"
};

#line 548 "queue.c"
static const MR_DuFunctorDesc mercury__queue__queue__du_functor_desc_queue_1_0 = {
  (MR_String) "queue",
  (MR_Integer) 2,
  (MR_Integer) 3,
  mercury__private_builtin__MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__queue__queue__field_types_queue_1_0,
  mercury__queue__queue__field_names_queue_1_0,
  NULL,
  NULL
};

#line 563 "queue.c"
static const MR_DuFunctorDescPtr mercury__queue__queue__du_stag_ordered_queue_1_0[1] = {
  &mercury__queue__queue__du_functor_desc_queue_1_0
};

#line 568 "queue.c"
static const MR_DuPtagLayout mercury__queue__queue__du_ptag_ordered_queue_1[1] = {
  {
    (MR_Integer) 1,
    mercury__private_builtin__MR_SECTAG_NONE,
    mercury__queue__queue__du_stag_ordered_queue_1_0
  }
};

#line 577 "queue.c"
static const MR_DuFunctorDescPtr mercury__queue__queue__du_name_ordered_queue_1[1] = {
  &mercury__queue__queue__du_functor_desc_queue_1_0
};

#line 582 "queue.c"
static const MR_Integer mercury__queue__queue__functor_number_map_queue_1[1] = {
  (MR_Integer) 0
};

#line 587 "queue.c"
const MR_TypeCtorInfo_Struct mercury__queue__queue__type_ctor_info_queue_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) 1,
  mercury__private_builtin__MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__queue____Unify____queue_1_0_10001)),
  ((MR_Box) (mercury__queue____Compare____queue_1_0_10001)),
  (MR_String) "queue",
  (MR_String) "queue",
  {     mercury__queue__queue__du_name_ordered_queue_1 },
  {     mercury__queue__queue__du_ptag_ordered_queue_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__queue__queue__functor_number_map_queue_1
};

#line 604 "queue.c"
static MR_bool MR_CALL 
mercury__queue____Unify____queue_1_0_10001(
#line 607 "queue.c"
  MR_Box mercury__queue__wrapper_arg_1,
#line 609 "queue.c"
  MR_Box mercury__queue__wrapper_arg_2,
#line 611 "queue.c"
  MR_Box mercury__queue__wrapper_arg_3)
#line 613 "queue.c"
{
#line 615 "queue.c"
  {
#line 617 "queue.c"
    MR_bool mercury__queue__succeeded;

#line 620 "queue.c"
    {
#line 622 "queue.c"
      mercury__queue__succeeded = mercury__queue____Unify____queue_1_0(((MR_Word) mercury__queue__wrapper_arg_1), ((MR_Word) mercury__queue__wrapper_arg_2), ((MR_Word) mercury__queue__wrapper_arg_3));
    }
#line 625 "queue.c"
    return mercury__queue__succeeded;
#line 627 "queue.c"
  }
#line 629 "queue.c"
}

#line 632 "queue.c"
static void MR_CALL 
mercury__queue____Compare____queue_1_0_10001(
#line 635 "queue.c"
  MR_Box mercury__queue__wrapper_arg_1,
#line 637 "queue.c"
  MR_Box * mercury__queue__wrapper_arg_2,
#line 639 "queue.c"
  MR_Box mercury__queue__wrapper_arg_3,
#line 641 "queue.c"
  MR_Box mercury__queue__wrapper_arg_4)
#line 643 "queue.c"
{
#line 645 "queue.c"
  {
#line 647 "queue.c"
    MR_Word mercury__queue__conv0_HeadVar__1_1;

#line 650 "queue.c"
    {
#line 652 "queue.c"
      mercury__queue____Compare____queue_1_0(((MR_Word) mercury__queue__wrapper_arg_1), &mercury__queue__conv0_HeadVar__1_1, ((MR_Word) mercury__queue__wrapper_arg_3), ((MR_Word) mercury__queue__wrapper_arg_4));
    }
#line 655 "queue.c"
    *mercury__queue__wrapper_arg_2 = ((MR_Box) (mercury__queue__conv0_HeadVar__1_1));
#line 657 "queue.c"
  }
#line 659 "queue.c"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__queue__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__queue__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 188 "queue.m"
static void MR_CALL 
mercury__queue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_117_116_95_108_105_115_116_95_50_95_95_91_49_93_95_48_3_p_0(
#line 188 "queue.m"
  MR_Word mercury__queue__HeadVar__1_1,
#line 188 "queue.m"
  MR_Word mercury__queue__HeadVar__2_2,
#line 188 "queue.m"
  MR_Word * mercury__queue__On_3)
#line 188 "queue.m"
{
#line 190 "queue.m"
  while (MR_TRUE)
#line 190 "queue.m"
    {
#line 190 "queue.m"
      /* tailcall optimized into a loop */
#line 190 "queue.m"
      {
#line 190 "queue.m"
        MR_bool mercury__queue__succeeded;

#line 190 "queue.m"
        if ((mercury__queue__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 190 "queue.m"
          *mercury__queue__On_3 = mercury__queue__HeadVar__2_2;
#line 190 "queue.m"
        else
#line 191 "queue.m"
          {
#line 191 "queue.m"
            MR_Box mercury__queue__X_5 = (MR_hl_field(MR_mktag(1), mercury__queue__HeadVar__1_1, (MR_Integer) 0));
#line 191 "queue.m"
            MR_Word mercury__queue__Xs_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__queue__HeadVar__1_1, (MR_Integer) 1)));
#line 191 "queue.m"
            MR_Word mercury__queue__V_9_9;

#line 192 "queue.m"
            {
#line 192 "queue.m"
              mercury__queue__V_9_9 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 192 "queue.m"
              MR_hl_field(MR_mktag(1), mercury__queue__V_9_9, 0) = mercury__queue__X_5;
#line 192 "queue.m"
              MR_hl_field(MR_mktag(1), mercury__queue__V_9_9, 1) = ((MR_Box) (mercury__queue__HeadVar__2_2));
#line 192 "queue.m"
            }
#line 192 "queue.m"
            /* direct tailcall eliminated */
#line 192 "queue.m"
            {
#line 192 "queue.m"
              MR_Word mercury__queue__HeadVar__1__tmp_copy_1 = mercury__queue__Xs_6;
#line 192 "queue.m"
              MR_Word mercury__queue__HeadVar__2__tmp_copy_2 = mercury__queue__V_9_9;

#line 192 "queue.m"
              mercury__queue__HeadVar__2_2 = mercury__queue__HeadVar__2__tmp_copy_2;
#line 192 "queue.m"
              mercury__queue__HeadVar__1_1 = mercury__queue__HeadVar__1__tmp_copy_1;
#line 192 "queue.m"
            }
#line 192 "queue.m"
            continue;
#line 191 "queue.m"
          }
#line 190 "queue.m"
      }
#line 190 "queue.m"
      break;
#line 190 "queue.m"
    }
#line 188 "queue.m"
}

#line 51 "queue.m"
MR_bool MR_CALL 
mercury__queue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_102_117_108_108_95_95_91_49_44_32_50_93_95_48_1_p_0(void)
#line 51 "queue.m"
{
#line 90 "builtin.opt"
  {
#line 90 "builtin.opt"
    MR_bool mercury__queue__succeeded;

#line 90 "builtin.opt"
{
#define MR_PROC_LABEL mercury__queue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_102_117_108_108_95_95_91_49_44_32_50_93_95_48_1_p_0

	MR_bool SUCCESS_INDICATOR;

		{
#line 90 "builtin.opt"

    SUCCESS_INDICATOR = MR_FALSE;

#line 775 "queue.c"

		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
#line 90 "builtin.opt"
	}
mercury__queue__succeeded  = SUCCESS_INDICATOR;
}
#line 90 "builtin.opt"
    return mercury__queue__succeeded;
#line 90 "builtin.opt"
  }
#line 51 "queue.m"
}

#line 137 "queue.m"
void MR_CALL 
mercury__queue____Compare____queue_1_0(
#line 137 "queue.m"
  MR_Word mercury__queue__TypeInfo_for_T_11,
#line 137 "queue.m"
  MR_Word * mercury__queue__HeadVar__1_1,
#line 137 "queue.m"
  MR_Word mercury__queue__HeadVar__2_2,
#line 137 "queue.m"
  MR_Word mercury__queue__HeadVar__3_3)
#line 137 "queue.m"
{
#line 137 "queue.m"
  {
#line 137 "queue.m"
    MR_bool mercury__queue__succeeded;
#line 137 "queue.m"
    MR_Integer mercury__queue__CastX_9 = (MR_Integer) mercury__queue__HeadVar__2_2;
#line 137 "queue.m"
    MR_Integer mercury__queue__CastY_10 = (MR_Integer) mercury__queue__HeadVar__3_3;

#line 137 "queue.m"
    mercury__queue__succeeded = (mercury__queue__CastX_9 == mercury__queue__CastY_10);
#line 137 "queue.m"
    if (mercury__queue__succeeded)
#line 817 "queue.c"
      *mercury__queue__HeadVar__1_1 = (MR_Integer) 0;
#line 137 "queue.m"
    else
#line 137 "queue.m"
      {
#line 137 "queue.m"
        MR_Word mercury__queue__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__2_2, (MR_Integer) 0)));
#line 137 "queue.m"
        MR_Word mercury__queue__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__2_2, (MR_Integer) 1)));
#line 137 "queue.m"
        MR_Word mercury__queue__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__3_3, (MR_Integer) 0)));
#line 137 "queue.m"
        MR_Word mercury__queue__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__3_3, (MR_Integer) 1)));
#line 137 "queue.m"
        MR_Word mercury__queue__V_8_8;

#line 137 "queue.m"
        {
#line 137 "queue.m"
          mercury__list____Compare____list_1_0(mercury__queue__TypeInfo_for_T_11, &mercury__queue__V_8_8, mercury__queue__V_4_4, mercury__queue__V_6_6);
        }
#line 839 "queue.c"
        mercury__queue__succeeded = (mercury__queue__V_8_8 == (MR_Integer) 0);
#line 137 "queue.m"
        mercury__queue__succeeded = !(mercury__queue__succeeded);
#line 137 "queue.m"
        if (mercury__queue__succeeded)
#line 137 "queue.m"
          *mercury__queue__HeadVar__1_1 = mercury__queue__V_8_8;
#line 137 "queue.m"
        else
#line 137 "queue.m"
          {
#line 137 "queue.m"
            mercury__list____Compare____list_1_0(mercury__queue__TypeInfo_for_T_11, mercury__queue__HeadVar__1_1, mercury__queue__V_5_5, mercury__queue__V_7_7);
#line 137 "queue.m"
            return;
          }
#line 137 "queue.m"
      }
#line 137 "queue.m"
  }
#line 137 "queue.m"
}

#line 137 "queue.m"
MR_bool MR_CALL 
mercury__queue____Unify____queue_1_0(
#line 137 "queue.m"
  MR_Word mercury__queue__TypeInfo_for_T_9,
#line 137 "queue.m"
  MR_Word mercury__queue__HeadVar__1_1,
#line 137 "queue.m"
  MR_Word mercury__queue__HeadVar__2_2)
#line 137 "queue.m"
{
#line 137 "queue.m"
  {
#line 137 "queue.m"
    MR_bool mercury__queue__succeeded;
#line 137 "queue.m"
    MR_Integer mercury__queue__CastX_7 = (MR_Integer) mercury__queue__HeadVar__1_1;
#line 137 "queue.m"
    MR_Integer mercury__queue__CastY_8 = (MR_Integer) mercury__queue__HeadVar__2_2;

#line 137 "queue.m"
    mercury__queue__succeeded = (mercury__queue__CastX_7 == mercury__queue__CastY_8);
#line 137 "queue.m"
    if (mercury__queue__succeeded)
#line 137 "queue.m"
      mercury__queue__succeeded = MR_TRUE;
#line 137 "queue.m"
    else
#line 137 "queue.m"
      {
#line 137 "queue.m"
        MR_Word mercury__queue__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__1_1, (MR_Integer) 0)));
#line 137 "queue.m"
        MR_Word mercury__queue__V_4_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__1_1, (MR_Integer) 1)));
#line 137 "queue.m"
        MR_Word mercury__queue__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__2_2, (MR_Integer) 0)));
#line 137 "queue.m"
        MR_Word mercury__queue__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__2_2, (MR_Integer) 1)));

#line 902 "queue.c"
        {
#line 904 "queue.c"
          mercury__queue__succeeded = mercury__list____Unify____list_1_0(mercury__queue__TypeInfo_for_T_9, mercury__queue__V_3_3, mercury__queue__V_5_5);
        }
#line 137 "queue.m"
        if (mercury__queue__succeeded)
#line 909 "queue.c"
          {
#line 911 "queue.c"
            return mercury__queue__succeeded = mercury__list____Unify____list_1_0(mercury__queue__TypeInfo_for_T_9, mercury__queue__V_4_4, mercury__queue__V_6_6);
          }
#line 137 "queue.m"
      }
#line 137 "queue.m"
    return mercury__queue__succeeded;
#line 137 "queue.m"
  }
#line 137 "queue.m"
}

#line 120 "queue.m"
MR_bool MR_CALL 
mercury__queue__get_from_back_3_p_0(
#line 120 "queue.m"
  MR_Word mercury__queue__TypeInfo_for_T_19,
#line 120 "queue.m"
  MR_Box * mercury__queue__Elem_4,
#line 120 "queue.m"
  MR_Word mercury__queue__HeadVar__2_2,
#line 120 "queue.m"
  MR_Word * mercury__queue__HeadVar__3_3)
#line 120 "queue.m"
{
#line 250 "queue.m"
  {
#line 250 "queue.m"
    MR_bool mercury__queue__succeeded;
#line 250 "queue.m"
    MR_Word mercury__queue__On0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__2_2, (MR_Integer) 0)));
#line 250 "queue.m"
    MR_Word mercury__queue__Off0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__2_2, (MR_Integer) 1)));
#line 250 "queue.m"
    MR_Word mercury__queue__On_7;
#line 250 "queue.m"
    MR_Word mercury__queue__Off_8;

#line 256 "queue.m"
    if ((mercury__queue__On0_5 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 258 "queue.m"
      {
#line 258 "queue.m"
        MR_Word mercury__queue__V_20_20;
#line 258 "queue.m"
        MR_Box mercury__queue__V_21_21;

#line 261 "queue.m"
        mercury__queue__succeeded = ((MR_tag((MR_Word) mercury__queue__Off0_6)) == (MR_mktag((MR_Integer) 1)));
#line 261 "queue.m"
        if (mercury__queue__succeeded)
#line 261 "queue.m"
          {
#line 261 "queue.m"
            mercury__queue__V_21_21 = (MR_hl_field(MR_mktag(1), mercury__queue__Off0_6, (MR_Integer) 0));
#line 261 "queue.m"
            mercury__queue__V_20_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__queue__Off0_6, (MR_Integer) 1)));
#line 264 "queue.m"
            if ((mercury__queue__V_20_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 261 "queue.m"
              {
#line 261 "queue.m"
                *mercury__queue__Elem_4 = mercury__queue__V_21_21;
#line 262 "queue.m"
                mercury__queue__On_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 263 "queue.m"
                mercury__queue__Off_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 261 "queue.m"
                mercury__queue__succeeded = MR_TRUE;
#line 261 "queue.m"
              }
#line 264 "queue.m"
            else
#line 267 "queue.m"
              {
#line 267 "queue.m"
                MR_Integer mercury__queue__N_12;
#line 267 "queue.m"
                MR_Word mercury__queue__RevOn_13;
#line 267 "queue.m"
                MR_Integer mercury__queue__V_15_15;
#line 267 "queue.m"
                MR_Word mercury__queue__V_17_17;

#line 78 "list.opt"
                {
#line 78 "list.opt"
                  mercury__list__length_2_3_p_0(mercury__queue__TypeInfo_for_T_19, mercury__queue__Off0_6, (MR_Integer) 0, &mercury__queue__N_12);
                }
#line 105 "int.opt"
                mercury__queue__V_15_15 = (mercury__queue__N_12 / (MR_Integer) 2);
#line 269 "queue.m"
                {
#line 269 "queue.m"
                  mercury__queue__succeeded = mercury__list__split_list_4_p_0(mercury__queue__TypeInfo_for_T_19, mercury__queue__V_15_15, mercury__queue__Off0_6, &mercury__queue__Off_8, &mercury__queue__RevOn_13);
                }
#line 267 "queue.m"
                if (mercury__queue__succeeded)
#line 267 "queue.m"
                  {
#line 118 "list.opt"
                    {
#line 118 "list.opt"
                      mercury__list__reverse_2_p_0(mercury__queue__TypeInfo_for_T_19, mercury__queue__RevOn_13, &mercury__queue__V_17_17);
                    }
#line 270 "queue.m"
                    mercury__queue__succeeded = ((MR_tag((MR_Word) mercury__queue__V_17_17)) == (MR_mktag((MR_Integer) 1)));
#line 270 "queue.m"
                    if (mercury__queue__succeeded)
#line 270 "queue.m"
                      {
#line 270 "queue.m"
                        *mercury__queue__Elem_4 = (MR_hl_field(MR_mktag(1), mercury__queue__V_17_17, (MR_Integer) 0));
#line 270 "queue.m"
                        mercury__queue__On_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__queue__V_17_17, (MR_Integer) 1)));
#line 270 "queue.m"
                      }
#line 267 "queue.m"
                  }
#line 267 "queue.m"
              }
#line 261 "queue.m"
          }
#line 258 "queue.m"
      }
#line 256 "queue.m"
    else
#line 254 "queue.m"
      {
#line 254 "queue.m"
        *mercury__queue__Elem_4 = (MR_hl_field(MR_mktag(1), mercury__queue__On0_5, (MR_Integer) 0));
#line 254 "queue.m"
        mercury__queue__On_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__queue__On0_5, (MR_Integer) 1)));
#line 255 "queue.m"
        mercury__queue__Off_8 = mercury__queue__Off0_6;
#line 254 "queue.m"
        mercury__queue__succeeded = MR_TRUE;
#line 254 "queue.m"
      }
#line 250 "queue.m"
    if (mercury__queue__succeeded)
#line 250 "queue.m"
      {
#line 250 "queue.m"
        {
#line 250 "queue.m"
          MR_Word base;
#line 250 "queue.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 250 "queue.m"
          *mercury__queue__HeadVar__3_3 = base;
#line 250 "queue.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__queue__On_7));
#line 250 "queue.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__queue__Off_8));
#line 250 "queue.m"
        }
#line 250 "queue.m"
        mercury__queue__succeeded = MR_TRUE;
#line 250 "queue.m"
      }
#line 250 "queue.m"
    return mercury__queue__succeeded;
#line 250 "queue.m"
  }
#line 120 "queue.m"
}

#line 114 "queue.m"
void MR_CALL 
mercury__queue__put_list_on_front_3_p_0(
#line 114 "queue.m"
  MR_Word mercury__queue__TypeInfo_for_T_8,
#line 114 "queue.m"
  MR_Word mercury__queue__Elems_4,
#line 114 "queue.m"
  MR_Word mercury__queue__HeadVar__2_2,
#line 114 "queue.m"
  MR_Word * mercury__queue__HeadVar__3_3)
#line 114 "queue.m"
{
#line 245 "queue.m"
  {
#line 245 "queue.m"
    MR_bool mercury__queue__succeeded;
#line 245 "queue.m"
    MR_Word mercury__queue__On_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__2_2, (MR_Integer) 0)));
#line 245 "queue.m"
    MR_Word mercury__queue__Off_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__2_2, (MR_Integer) 1)));
#line 245 "queue.m"
    MR_Word mercury__queue__V_7_7;

#line 46 "list.opt"
    {
#line 46 "list.opt"
      mercury__list__append_3_p_1(mercury__queue__TypeInfo_for_T_8, mercury__queue__Elems_4, mercury__queue__Off_6, &mercury__queue__V_7_7);
    }
#line 245 "queue.m"
    {
#line 245 "queue.m"
      MR_Word base;
#line 245 "queue.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 245 "queue.m"
      *mercury__queue__HeadVar__3_3 = base;
#line 245 "queue.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__queue__On_5));
#line 245 "queue.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__queue__V_7_7));
#line 245 "queue.m"
    }
#line 245 "queue.m"
  }
#line 114 "queue.m"
}

#line 113 "queue.m"
MR_Word MR_CALL 
mercury__queue__put_list_on_front_2_f_0(
#line 113 "queue.m"
  MR_Word mercury__queue__TypeInfo_for_T_9,
#line 113 "queue.m"
  MR_Word mercury__queue__STATE_VARIABLE_Queue_0_6,
#line 113 "queue.m"
  MR_Word mercury__queue__Elems_5)
#line 113 "queue.m"
{
#line 245 "queue.m"
  {
#line 245 "queue.m"
    MR_bool mercury__queue__succeeded;
#line 245 "queue.m"
    MR_Word mercury__queue__STATE_VARIABLE_Queue_7;
#line 245 "queue.m"
    MR_Word mercury__queue__On_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__STATE_VARIABLE_Queue_0_6, (MR_Integer) 0)));
#line 245 "queue.m"
    MR_Word mercury__queue__Off_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__STATE_VARIABLE_Queue_0_6, (MR_Integer) 1)));
#line 245 "queue.m"
    MR_Word mercury__queue__V_13_13;

#line 46 "list.opt"
    {
#line 46 "list.opt"
      mercury__list__append_3_p_1(mercury__queue__TypeInfo_for_T_9, mercury__queue__Elems_5, mercury__queue__Off_12, &mercury__queue__V_13_13);
    }
#line 245 "queue.m"
    {
#line 245 "queue.m"
      mercury__queue__STATE_VARIABLE_Queue_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 245 "queue.m"
      MR_hl_field(MR_mktag(0), mercury__queue__STATE_VARIABLE_Queue_7, 0) = ((MR_Box) (mercury__queue__On_11));
#line 245 "queue.m"
      MR_hl_field(MR_mktag(0), mercury__queue__STATE_VARIABLE_Queue_7, 1) = ((MR_Box) (mercury__queue__V_13_13));
#line 245 "queue.m"
    }
#line 245 "queue.m"
    return mercury__queue__STATE_VARIABLE_Queue_7;
#line 245 "queue.m"
  }
#line 113 "queue.m"
}

#line 107 "queue.m"
void MR_CALL 
mercury__queue__put_on_front_3_p_0(
#line 107 "queue.m"
  MR_Word mercury__queue__TypeInfo_for_T_8,
#line 107 "queue.m"
  MR_Box mercury__queue__Elem_4,
#line 107 "queue.m"
  MR_Word mercury__queue__HeadVar__2_2,
#line 107 "queue.m"
  MR_Word * mercury__queue__HeadVar__3_3)
#line 107 "queue.m"
{
#line 240 "queue.m"
  {
#line 240 "queue.m"
    MR_bool mercury__queue__succeeded;
#line 240 "queue.m"
    MR_Word mercury__queue__On_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__2_2, (MR_Integer) 0)));
#line 240 "queue.m"
    MR_Word mercury__queue__Off_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__2_2, (MR_Integer) 1)));
#line 240 "queue.m"
    MR_Word mercury__queue__V_7_7;

#line 240 "queue.m"
    {
#line 240 "queue.m"
      mercury__queue__V_7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 240 "queue.m"
      MR_hl_field(MR_mktag(1), mercury__queue__V_7_7, 0) = mercury__queue__Elem_4;
#line 240 "queue.m"
      MR_hl_field(MR_mktag(1), mercury__queue__V_7_7, 1) = ((MR_Box) (mercury__queue__Off_6));
#line 240 "queue.m"
    }
#line 240 "queue.m"
    {
#line 240 "queue.m"
      MR_Word base;
#line 240 "queue.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 240 "queue.m"
      *mercury__queue__HeadVar__3_3 = base;
#line 240 "queue.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__queue__On_5));
#line 240 "queue.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__queue__V_7_7));
#line 240 "queue.m"
    }
#line 240 "queue.m"
  }
#line 107 "queue.m"
}

#line 106 "queue.m"
MR_Word MR_CALL 
mercury__queue__put_on_front_2_f_0(
#line 106 "queue.m"
  MR_Word mercury__queue__TypeInfo_for_T_9,
#line 106 "queue.m"
  MR_Word mercury__queue__STATE_VARIABLE_Queue_0_6,
#line 106 "queue.m"
  MR_Box mercury__queue__Elem_5)
#line 106 "queue.m"
{
#line 240 "queue.m"
  {
#line 240 "queue.m"
    MR_bool mercury__queue__succeeded;
#line 240 "queue.m"
    MR_Word mercury__queue__STATE_VARIABLE_Queue_7;
#line 240 "queue.m"
    MR_Word mercury__queue__On_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__STATE_VARIABLE_Queue_0_6, (MR_Integer) 0)));
#line 240 "queue.m"
    MR_Word mercury__queue__Off_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__STATE_VARIABLE_Queue_0_6, (MR_Integer) 1)));
#line 240 "queue.m"
    MR_Word mercury__queue__V_13_13;

#line 240 "queue.m"
    {
#line 240 "queue.m"
      mercury__queue__V_13_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 240 "queue.m"
      MR_hl_field(MR_mktag(1), mercury__queue__V_13_13, 0) = mercury__queue__Elem_5;
#line 240 "queue.m"
      MR_hl_field(MR_mktag(1), mercury__queue__V_13_13, 1) = ((MR_Box) (mercury__queue__Off_12));
#line 240 "queue.m"
    }
#line 240 "queue.m"
    {
#line 240 "queue.m"
      mercury__queue__STATE_VARIABLE_Queue_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 240 "queue.m"
      MR_hl_field(MR_mktag(0), mercury__queue__STATE_VARIABLE_Queue_7, 0) = ((MR_Box) (mercury__queue__On_11));
#line 240 "queue.m"
      MR_hl_field(MR_mktag(0), mercury__queue__STATE_VARIABLE_Queue_7, 1) = ((MR_Box) (mercury__queue__V_13_13));
#line 240 "queue.m"
    }
#line 240 "queue.m"
    return mercury__queue__STATE_VARIABLE_Queue_7;
#line 240 "queue.m"
  }
#line 106 "queue.m"
}

#line 101 "queue.m"
void MR_CALL 
mercury__queue__delete_all_3_p_0(
#line 101 "queue.m"
  MR_Word mercury__queue__TypeInfo_for_T_13,
#line 101 "queue.m"
  MR_Box mercury__queue__Elem_4,
#line 101 "queue.m"
  MR_Word mercury__queue__HeadVar__2_2,
#line 101 "queue.m"
  MR_Word * mercury__queue__HeadVar__3_3)
#line 101 "queue.m"
{
#line 227 "queue.m"
  {
#line 227 "queue.m"
    MR_bool mercury__queue__succeeded;
#line 227 "queue.m"
    MR_Word mercury__queue__On0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__2_2, (MR_Integer) 0)));
#line 227 "queue.m"
    MR_Word mercury__queue__Off0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__2_2, (MR_Integer) 1)));
#line 227 "queue.m"
    MR_Word mercury__queue__On_7;
#line 227 "queue.m"
    MR_Word mercury__queue__Off_8;
#line 227 "queue.m"
    MR_Word mercury__queue__On1_9;
#line 227 "queue.m"
    MR_Word mercury__queue__Off1_10;

#line 228 "queue.m"
    {
#line 228 "queue.m"
      mercury__list__delete_all_3_p_1(mercury__queue__TypeInfo_for_T_13, mercury__queue__On0_5, mercury__queue__Elem_4, &mercury__queue__On1_9);
    }
#line 229 "queue.m"
    {
#line 229 "queue.m"
      mercury__list__delete_all_3_p_1(mercury__queue__TypeInfo_for_T_13, mercury__queue__Off0_6, mercury__queue__Elem_4, &mercury__queue__Off1_10);
    }
#line 234 "queue.m"
    if ((mercury__queue__Off1_10 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 231 "queue.m"
      {
#line 232 "queue.m"
        {
#line 232 "queue.m"
          mercury__list__reverse_2_p_0(mercury__queue__TypeInfo_for_T_13, mercury__queue__On1_9, &mercury__queue__Off_8);
        }
#line 233 "queue.m"
        mercury__queue__On_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 231 "queue.m"
      }
#line 234 "queue.m"
    else
#line 235 "queue.m"
      {
#line 236 "queue.m"
        mercury__queue__On_7 = mercury__queue__On1_9;
#line 237 "queue.m"
        mercury__queue__Off_8 = mercury__queue__Off1_10;
#line 235 "queue.m"
      }
#line 227 "queue.m"
    {
#line 227 "queue.m"
      MR_Word base;
#line 227 "queue.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 227 "queue.m"
      *mercury__queue__HeadVar__3_3 = base;
#line 227 "queue.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__queue__On_7));
#line 227 "queue.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__queue__Off_8));
#line 227 "queue.m"
    }
#line 227 "queue.m"
  }
#line 101 "queue.m"
}

#line 100 "queue.m"
MR_Word MR_CALL 
mercury__queue__delete_all_2_f_0(
#line 100 "queue.m"
  MR_Word mercury__queue__TypeInfo_for_T_9,
#line 100 "queue.m"
  MR_Word mercury__queue__STATE_VARIABLE_Q_0_6,
#line 100 "queue.m"
  MR_Box mercury__queue__T_5)
#line 100 "queue.m"
{
#line 225 "queue.m"
  {
#line 225 "queue.m"
    MR_bool mercury__queue__succeeded;
#line 225 "queue.m"
    MR_Word mercury__queue__STATE_VARIABLE_Q_7;

#line 225 "queue.m"
    {
#line 225 "queue.m"
      mercury__queue__delete_all_3_p_0(mercury__queue__TypeInfo_for_T_9, mercury__queue__T_5, mercury__queue__STATE_VARIABLE_Q_0_6, &mercury__queue__STATE_VARIABLE_Q_7);
    }
#line 225 "queue.m"
    return mercury__queue__STATE_VARIABLE_Q_7;
#line 225 "queue.m"
  }
#line 100 "queue.m"
}

#line 95 "queue.m"
MR_Word MR_CALL 
mercury__queue__to_list_1_f_0(
#line 95 "queue.m"
  MR_Word mercury__queue__TypeInfo_for_T_6,
#line 95 "queue.m"
  MR_Word mercury__queue__HeadVar__1_1)
#line 95 "queue.m"
{
#line 222 "queue.m"
  {
#line 222 "queue.m"
    MR_bool mercury__queue__succeeded;
#line 222 "queue.m"
    MR_Word mercury__queue__HeadVar__2_2;
#line 222 "queue.m"
    MR_Word mercury__queue__On_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__1_1, (MR_Integer) 0)));
#line 222 "queue.m"
    MR_Word mercury__queue__Off_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__1_1, (MR_Integer) 1)));
#line 222 "queue.m"
    MR_Word mercury__queue__V_5_5;

#line 118 "list.opt"
    {
#line 118 "list.opt"
      mercury__list__reverse_2_p_0(mercury__queue__TypeInfo_for_T_6, mercury__queue__On_3, &mercury__queue__V_5_5);
    }
#line 46 "list.opt"
    {
#line 46 "list.opt"
      mercury__list__append_3_p_1(mercury__queue__TypeInfo_for_T_6, mercury__queue__Off_4, mercury__queue__V_5_5, &mercury__queue__HeadVar__2_2);
    }
#line 222 "queue.m"
    return mercury__queue__HeadVar__2_2;
#line 222 "queue.m"
  }
#line 95 "queue.m"
}

#line 91 "queue.m"
MR_Word MR_CALL 
mercury__queue__from_list_1_f_0(
#line 91 "queue.m"
  MR_Word mercury__queue__TypeInfo_for_T_5,
#line 91 "queue.m"
  MR_Word mercury__queue__List_3)
#line 91 "queue.m"
{
#line 220 "queue.m"
  {
#line 220 "queue.m"
    MR_bool mercury__queue__succeeded;
#line 220 "queue.m"
    MR_Word mercury__queue__HeadVar__2_2;
#line 220 "queue.m"
    MR_Word mercury__queue__V_4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 220 "queue.m"
    {
#line 220 "queue.m"
      mercury__queue__HeadVar__2_2 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 220 "queue.m"
      MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__2_2, 0) = ((MR_Box) (mercury__queue__V_4_4));
#line 220 "queue.m"
      MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__2_2, 1) = ((MR_Box) (mercury__queue__List_3));
#line 220 "queue.m"
    }
#line 220 "queue.m"
    return mercury__queue__HeadVar__2_2;
#line 220 "queue.m"
  }
#line 91 "queue.m"
}

#line 87 "queue.m"
void MR_CALL 
mercury__queue__list_to_queue_2_p_0(
#line 87 "queue.m"
  MR_Word mercury__queue__TypeInfo_for_T_5,
#line 87 "queue.m"
  MR_Word mercury__queue__List_3,
#line 87 "queue.m"
  MR_Word * mercury__queue__HeadVar__2_2)
#line 87 "queue.m"
{
#line 218 "queue.m"
  {
#line 218 "queue.m"
    MR_bool mercury__queue__succeeded;
#line 218 "queue.m"
    MR_Word mercury__queue__V_4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 218 "queue.m"
    {
#line 218 "queue.m"
      MR_Word base;
#line 218 "queue.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 218 "queue.m"
      *mercury__queue__HeadVar__2_2 = base;
#line 218 "queue.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__queue__V_4_4));
#line 218 "queue.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__queue__List_3));
#line 218 "queue.m"
    }
#line 218 "queue.m"
  }
#line 87 "queue.m"
}

#line 86 "queue.m"
MR_Word MR_CALL 
mercury__queue__list_to_queue_1_f_0(
#line 86 "queue.m"
  MR_Word mercury__queue__TypeInfo_for_T_5,
#line 86 "queue.m"
  MR_Word mercury__queue__Xs_3)
#line 86 "queue.m"
{
#line 218 "queue.m"
  {
#line 218 "queue.m"
    MR_bool mercury__queue__succeeded;
#line 218 "queue.m"
    MR_Word mercury__queue__Q_4;
#line 218 "queue.m"
    MR_Word mercury__queue__V_7_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 218 "queue.m"
    {
#line 218 "queue.m"
      mercury__queue__Q_4 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 218 "queue.m"
      MR_hl_field(MR_mktag(0), mercury__queue__Q_4, 0) = ((MR_Box) (mercury__queue__V_7_7));
#line 218 "queue.m"
      MR_hl_field(MR_mktag(0), mercury__queue__Q_4, 1) = ((MR_Box) (mercury__queue__Xs_3));
#line 218 "queue.m"
    }
#line 218 "queue.m"
    return mercury__queue__Q_4;
#line 218 "queue.m"
  }
#line 86 "queue.m"
}

#line 80 "queue.m"
void MR_CALL 
mercury__queue__length_2_p_0(
#line 80 "queue.m"
  MR_Word mercury__queue__TypeInfo_for_T_8,
#line 80 "queue.m"
  MR_Word mercury__queue__HeadVar__1_1,
#line 80 "queue.m"
  MR_Integer * mercury__queue__Length_5)
#line 80 "queue.m"
{
#line 210 "queue.m"
  {
#line 210 "queue.m"
    MR_bool mercury__queue__succeeded;
#line 210 "queue.m"
    MR_Word mercury__queue__On_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__1_1, (MR_Integer) 0)));
#line 210 "queue.m"
    MR_Word mercury__queue__Off_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__1_1, (MR_Integer) 1)));
#line 210 "queue.m"
    MR_Integer mercury__queue__LengthOn_6;
#line 210 "queue.m"
    MR_Integer mercury__queue__LengthOff_7;

#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__queue__TypeInfo_for_T_8, mercury__queue__On_3, (MR_Integer) 0, &mercury__queue__LengthOn_6);
    }
#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__queue__TypeInfo_for_T_8, mercury__queue__Off_4, (MR_Integer) 0, &mercury__queue__LengthOff_7);
    }
#line 213 "queue.m"
    *mercury__queue__Length_5 = (mercury__queue__LengthOn_6 + mercury__queue__LengthOff_7);
#line 210 "queue.m"
  }
#line 80 "queue.m"
}

#line 79 "queue.m"
MR_Integer MR_CALL 
mercury__queue__length_1_f_0(
#line 79 "queue.m"
  MR_Word mercury__queue__TypeInfo_for_T_5,
#line 79 "queue.m"
  MR_Word mercury__queue__Q_3)
#line 79 "queue.m"
{
#line 210 "queue.m"
  {
#line 210 "queue.m"
    MR_bool mercury__queue__succeeded;
#line 210 "queue.m"
    MR_Integer mercury__queue__N_4;
#line 210 "queue.m"
    MR_Word mercury__queue__On_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__Q_3, (MR_Integer) 0)));
#line 210 "queue.m"
    MR_Word mercury__queue__Off_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__Q_3, (MR_Integer) 1)));
#line 210 "queue.m"
    MR_Integer mercury__queue__LengthOn_9;
#line 210 "queue.m"
    MR_Integer mercury__queue__LengthOff_10;

#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__queue__TypeInfo_for_T_5, mercury__queue__On_7, (MR_Integer) 0, &mercury__queue__LengthOn_9);
    }
#line 78 "list.opt"
    {
#line 78 "list.opt"
      mercury__list__length_2_3_p_0(mercury__queue__TypeInfo_for_T_5, mercury__queue__Off_8, (MR_Integer) 0, &mercury__queue__LengthOff_10);
    }
#line 213 "queue.m"
    mercury__queue__N_4 = (mercury__queue__LengthOn_9 + mercury__queue__LengthOff_10);
#line 210 "queue.m"
    return mercury__queue__N_4;
#line 210 "queue.m"
  }
#line 79 "queue.m"
}

#line 74 "queue.m"
MR_bool MR_CALL 
mercury__queue__get_3_p_0(
#line 74 "queue.m"
  MR_Word mercury__queue__TypeInfo_for_T_12,
#line 74 "queue.m"
  MR_Box * mercury__queue__Elem_4,
#line 74 "queue.m"
  MR_Word mercury__queue__HeadVar__2_2,
#line 74 "queue.m"
  MR_Word * mercury__queue__HeadVar__3_3)
#line 74 "queue.m"
{
#line 196 "queue.m"
  {
#line 196 "queue.m"
    MR_bool mercury__queue__succeeded;
#line 196 "queue.m"
    MR_Word mercury__queue__On0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__2_2, (MR_Integer) 0)));
#line 196 "queue.m"
    MR_Word mercury__queue__Off0_6;
#line 196 "queue.m"
    MR_Word mercury__queue__On_7;
#line 196 "queue.m"
    MR_Word mercury__queue__Off_8;
#line 196 "queue.m"
    MR_Word mercury__queue__V_11_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__2_2, (MR_Integer) 1)));

#line 196 "queue.m"
    mercury__queue__succeeded = ((MR_tag((MR_Word) mercury__queue__V_11_11)) == (MR_mktag((MR_Integer) 1)));
#line 196 "queue.m"
    if (mercury__queue__succeeded)
#line 196 "queue.m"
      {
#line 196 "queue.m"
        *mercury__queue__Elem_4 = (MR_hl_field(MR_mktag(1), mercury__queue__V_11_11, (MR_Integer) 0));
#line 196 "queue.m"
        mercury__queue__Off0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__queue__V_11_11, (MR_Integer) 1)));
#line 201 "queue.m"
        if ((mercury__queue__Off0_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 198 "queue.m"
          {
#line 199 "queue.m"
            {
#line 199 "queue.m"
              mercury__list__reverse_2_p_0(mercury__queue__TypeInfo_for_T_12, mercury__queue__On0_5, &mercury__queue__Off_8);
            }
#line 200 "queue.m"
            mercury__queue__On_7 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 198 "queue.m"
          }
#line 201 "queue.m"
        else
#line 202 "queue.m"
          {
#line 203 "queue.m"
            mercury__queue__On_7 = mercury__queue__On0_5;
#line 204 "queue.m"
            mercury__queue__Off_8 = mercury__queue__Off0_6;
#line 202 "queue.m"
          }
#line 196 "queue.m"
        {
#line 196 "queue.m"
          MR_Word base;
#line 196 "queue.m"
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 196 "queue.m"
          *mercury__queue__HeadVar__3_3 = base;
#line 196 "queue.m"
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__queue__On_7));
#line 196 "queue.m"
          MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__queue__Off_8));
#line 196 "queue.m"
        }
#line 196 "queue.m"
        mercury__queue__succeeded = MR_TRUE;
#line 196 "queue.m"
      }
#line 196 "queue.m"
    return mercury__queue__succeeded;
#line 196 "queue.m"
  }
#line 74 "queue.m"
}

#line 68 "queue.m"
MR_bool MR_CALL 
mercury__queue__first_2_p_0(
#line 68 "queue.m"
  MR_Word mercury__queue__TypeInfo_for_T_7,
#line 68 "queue.m"
  MR_Word mercury__queue__HeadVar__1_1,
#line 68 "queue.m"
  MR_Box * mercury__queue__Elem_4)
#line 68 "queue.m"
{
#line 194 "queue.m"
  {
#line 194 "queue.m"
    MR_bool mercury__queue__succeeded;
#line 194 "queue.m"
    MR_Word mercury__queue__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__1_1, (MR_Integer) 1)));
#line 194 "queue.m"
    MR_Word mercury__queue__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__1_1, (MR_Integer) 0)));
#line 194 "queue.m"
    MR_Word mercury__queue__V_5_5;

#line 194 "queue.m"
    mercury__queue__succeeded = ((MR_tag((MR_Word) mercury__queue__V_6_6)) == (MR_mktag((MR_Integer) 1)));
#line 194 "queue.m"
    if (mercury__queue__succeeded)
#line 194 "queue.m"
      {
#line 194 "queue.m"
        *mercury__queue__Elem_4 = (MR_hl_field(MR_mktag(1), mercury__queue__V_6_6, (MR_Integer) 0));
#line 194 "queue.m"
        mercury__queue__V_5_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__queue__V_6_6, (MR_Integer) 1)));
#line 194 "queue.m"
      }
#line 194 "queue.m"
    return mercury__queue__succeeded;
#line 194 "queue.m"
  }
#line 68 "queue.m"
}

#line 63 "queue.m"
void MR_CALL 
mercury__queue__put_list_3_p_0(
#line 63 "queue.m"
  MR_Word mercury__queue__TypeInfo_for_T_11,
#line 63 "queue.m"
  MR_Word mercury__queue__Xs_4,
#line 63 "queue.m"
  MR_Word mercury__queue__HeadVar__2_2,
#line 63 "queue.m"
  MR_Word * mercury__queue__HeadVar__3_3)
#line 63 "queue.m"
{
#line 177 "queue.m"
  {
#line 177 "queue.m"
    MR_bool mercury__queue__succeeded;
#line 177 "queue.m"
    MR_Word mercury__queue__On0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__2_2, (MR_Integer) 0)));
#line 177 "queue.m"
    MR_Word mercury__queue__Off0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__2_2, (MR_Integer) 1)));
#line 177 "queue.m"
    MR_Word mercury__queue__On_7;
#line 177 "queue.m"
    MR_Word mercury__queue__Off_8;

#line 182 "queue.m"
    if ((mercury__queue__Off0_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 179 "queue.m"
      {
#line 180 "queue.m"
        mercury__queue__On_7 = mercury__queue__On0_5;
#line 181 "queue.m"
        mercury__queue__Off_8 = mercury__queue__Xs_4;
#line 179 "queue.m"
      }
#line 182 "queue.m"
    else
#line 183 "queue.m"
      {
#line 184 "queue.m"
        mercury__queue__Off_8 = mercury__queue__Off0_6;
#line 185 "queue.m"
        {
#line 185 "queue.m"
          mercury__queue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_117_116_95_108_105_115_116_95_50_95_95_91_49_93_95_48_3_p_0(mercury__queue__Xs_4, mercury__queue__On0_5, &mercury__queue__On_7);
        }
#line 183 "queue.m"
      }
#line 177 "queue.m"
    {
#line 177 "queue.m"
      MR_Word base;
#line 177 "queue.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 177 "queue.m"
      *mercury__queue__HeadVar__3_3 = base;
#line 177 "queue.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__queue__On_7));
#line 177 "queue.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__queue__Off_8));
#line 177 "queue.m"
    }
#line 177 "queue.m"
  }
#line 63 "queue.m"
}

#line 62 "queue.m"
MR_Word MR_CALL 
mercury__queue__put_list_2_f_0(
#line 62 "queue.m"
  MR_Word mercury__queue__TypeInfo_for_T_9,
#line 62 "queue.m"
  MR_Word mercury__queue__STATE_VARIABLE_Q_0_6,
#line 62 "queue.m"
  MR_Word mercury__queue__Xs_5)
#line 62 "queue.m"
{
#line 177 "queue.m"
  {
#line 177 "queue.m"
    MR_bool mercury__queue__succeeded;
#line 177 "queue.m"
    MR_Word mercury__queue__STATE_VARIABLE_Q_7;
#line 177 "queue.m"
    MR_Word mercury__queue__On0_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__STATE_VARIABLE_Q_0_6, (MR_Integer) 0)));
#line 177 "queue.m"
    MR_Word mercury__queue__Off0_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__STATE_VARIABLE_Q_0_6, (MR_Integer) 1)));
#line 177 "queue.m"
    MR_Word mercury__queue__On_13;
#line 177 "queue.m"
    MR_Word mercury__queue__Off_14;

#line 182 "queue.m"
    if ((mercury__queue__Off0_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 179 "queue.m"
      {
#line 180 "queue.m"
        mercury__queue__On_13 = mercury__queue__On0_11;
#line 181 "queue.m"
        mercury__queue__Off_14 = mercury__queue__Xs_5;
#line 179 "queue.m"
      }
#line 182 "queue.m"
    else
#line 183 "queue.m"
      {
#line 184 "queue.m"
        mercury__queue__Off_14 = mercury__queue__Off0_12;
#line 185 "queue.m"
        {
#line 185 "queue.m"
          mercury__queue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_117_116_95_108_105_115_116_95_50_95_95_91_49_93_95_48_3_p_0(mercury__queue__Xs_5, mercury__queue__On0_11, &mercury__queue__On_13);
        }
#line 183 "queue.m"
      }
#line 177 "queue.m"
    {
#line 177 "queue.m"
      mercury__queue__STATE_VARIABLE_Q_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 177 "queue.m"
      MR_hl_field(MR_mktag(0), mercury__queue__STATE_VARIABLE_Q_7, 0) = ((MR_Box) (mercury__queue__On_13));
#line 177 "queue.m"
      MR_hl_field(MR_mktag(0), mercury__queue__STATE_VARIABLE_Q_7, 1) = ((MR_Box) (mercury__queue__Off_14));
#line 177 "queue.m"
    }
#line 177 "queue.m"
    return mercury__queue__STATE_VARIABLE_Q_7;
#line 177 "queue.m"
  }
#line 62 "queue.m"
}

#line 57 "queue.m"
void MR_CALL 
mercury__queue__put_3_p_0(
#line 57 "queue.m"
  MR_Word mercury__queue__TypeInfo_for_T_12,
#line 57 "queue.m"
  MR_Box mercury__queue__Elem_4,
#line 57 "queue.m"
  MR_Word mercury__queue__HeadVar__2_2,
#line 57 "queue.m"
  MR_Word * mercury__queue__HeadVar__3_3)
#line 57 "queue.m"
{
#line 163 "queue.m"
  {
#line 163 "queue.m"
    MR_bool mercury__queue__succeeded;
#line 163 "queue.m"
    MR_Word mercury__queue__On0_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__2_2, (MR_Integer) 0)));
#line 163 "queue.m"
    MR_Word mercury__queue__Off0_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__2_2, (MR_Integer) 1)));
#line 163 "queue.m"
    MR_Word mercury__queue__On_7;
#line 163 "queue.m"
    MR_Word mercury__queue__Off_8;

#line 168 "queue.m"
    if ((mercury__queue__Off0_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
#line 165 "queue.m"
      {
#line 165 "queue.m"
        MR_Word mercury__queue__V_11_11;

#line 166 "queue.m"
        mercury__queue__On_7 = mercury__queue__On0_5;
#line 167 "queue.m"
        mercury__queue__V_11_11 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 167 "queue.m"
        {
#line 167 "queue.m"
          mercury__queue__Off_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 167 "queue.m"
          MR_hl_field(MR_mktag(1), mercury__queue__Off_8, 0) = mercury__queue__Elem_4;
#line 167 "queue.m"
          MR_hl_field(MR_mktag(1), mercury__queue__Off_8, 1) = ((MR_Box) (mercury__queue__V_11_11));
#line 167 "queue.m"
        }
#line 165 "queue.m"
      }
#line 168 "queue.m"
    else
#line 169 "queue.m"
      {
#line 170 "queue.m"
        {
#line 170 "queue.m"
          mercury__queue__On_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
#line 170 "queue.m"
          MR_hl_field(MR_mktag(1), mercury__queue__On_7, 0) = mercury__queue__Elem_4;
#line 170 "queue.m"
          MR_hl_field(MR_mktag(1), mercury__queue__On_7, 1) = ((MR_Box) (mercury__queue__On0_5));
#line 170 "queue.m"
        }
#line 171 "queue.m"
        mercury__queue__Off_8 = mercury__queue__Off0_6;
#line 169 "queue.m"
      }
#line 163 "queue.m"
    {
#line 163 "queue.m"
      MR_Word base;
#line 163 "queue.m"
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
#line 163 "queue.m"
      *mercury__queue__HeadVar__3_3 = base;
#line 163 "queue.m"
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__queue__On_7));
#line 163 "queue.m"
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__queue__Off_8));
#line 163 "queue.m"
    }
#line 163 "queue.m"
  }
#line 57 "queue.m"
}

#line 56 "queue.m"
MR_Word MR_CALL 
mercury__queue__put_2_f_0(
#line 56 "queue.m"
  MR_Word mercury__queue__TypeInfo_for_T_9,
#line 56 "queue.m"
  MR_Word mercury__queue__STATE_VARIABLE_Q_0_6,
#line 56 "queue.m"
  MR_Box mercury__queue__T_5)
#line 56 "queue.m"
{
#line 161 "queue.m"
  {
#line 161 "queue.m"
    MR_bool mercury__queue__succeeded;
#line 161 "queue.m"
    MR_Word mercury__queue__STATE_VARIABLE_Q_7;

#line 161 "queue.m"
    {
#line 161 "queue.m"
      mercury__queue__put_3_p_0(mercury__queue__TypeInfo_for_T_9, mercury__queue__T_5, mercury__queue__STATE_VARIABLE_Q_0_6, &mercury__queue__STATE_VARIABLE_Q_7);
    }
#line 161 "queue.m"
    return mercury__queue__STATE_VARIABLE_Q_7;
#line 161 "queue.m"
  }
#line 56 "queue.m"
}

#line 51 "queue.m"
MR_bool MR_CALL 
mercury__queue__is_full_1_p_0(
#line 51 "queue.m"
  MR_Word mercury__queue__TypeInfo_for_T_3,
#line 51 "queue.m"
  MR_Word mercury__queue__HeadVar__1_2)
#line 51 "queue.m"
{
#line 90 "builtin.opt"
  {
#line 90 "builtin.opt"
    MR_bool mercury__queue__succeeded;

#line 90 "builtin.opt"
    {
#line 90 "builtin.opt"
      return mercury__queue__succeeded = mercury__queue__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_105_115_95_102_117_108_108_95_95_91_49_44_32_50_93_95_48_1_p_0();
    }
#line 90 "builtin.opt"
    return mercury__queue__succeeded;
#line 90 "builtin.opt"
  }
#line 51 "queue.m"
}

#line 45 "queue.m"
MR_bool MR_CALL 
mercury__queue__is_empty_1_p_0(
#line 45 "queue.m"
  MR_Word mercury__queue__TypeInfo_for_T_4,
#line 45 "queue.m"
  MR_Word mercury__queue__HeadVar__1_1)
#line 45 "queue.m"
{
#line 155 "queue.m"
  {
#line 155 "queue.m"
    MR_bool mercury__queue__succeeded;
#line 155 "queue.m"
    MR_Word mercury__queue__V_3_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__1_1, (MR_Integer) 1)));
#line 155 "queue.m"
    MR_Word mercury__queue__V_2_2 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__1_1, (MR_Integer) 0)));

#line 155 "queue.m"
    mercury__queue__succeeded = (mercury__queue__V_3_3 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
#line 155 "queue.m"
    return mercury__queue__succeeded;
#line 155 "queue.m"
  }
#line 45 "queue.m"
}

#line 41 "queue.m"
MR_bool MR_CALL 
mercury__queue__equal_2_p_0(
#line 41 "queue.m"
  MR_Word mercury__queue__TypeInfo_for_T_11,
#line 41 "queue.m"
  MR_Word mercury__queue__HeadVar__1_1,
#line 41 "queue.m"
  MR_Word mercury__queue__HeadVar__2_2)
#line 41 "queue.m"
{
#line 150 "queue.m"
  {
#line 150 "queue.m"
    MR_bool mercury__queue__succeeded;
#line 150 "queue.m"
    MR_Word mercury__queue__OnA_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__1_1, (MR_Integer) 0)));
#line 150 "queue.m"
    MR_Word mercury__queue__OffA_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__1_1, (MR_Integer) 1)));
#line 150 "queue.m"
    MR_Word mercury__queue__OnB_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__2_2, (MR_Integer) 0)));
#line 150 "queue.m"
    MR_Word mercury__queue__OffB_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__queue__HeadVar__2_2, (MR_Integer) 1)));
#line 150 "queue.m"
    MR_Word mercury__queue__QA_7;
#line 150 "queue.m"
    MR_Word mercury__queue__QB_8;
#line 150 "queue.m"
    MR_Word mercury__queue__V_9_9;
#line 150 "queue.m"
    MR_Word mercury__queue__V_10_10;

#line 118 "list.opt"
    {
#line 118 "list.opt"
      mercury__list__reverse_2_p_0(mercury__queue__TypeInfo_for_T_11, mercury__queue__OnA_3, &mercury__queue__V_9_9);
    }
#line 46 "list.opt"
    {
#line 46 "list.opt"
      mercury__list__append_3_p_1(mercury__queue__TypeInfo_for_T_11, mercury__queue__OffA_4, mercury__queue__V_9_9, &mercury__queue__QA_7);
    }
#line 118 "list.opt"
    {
#line 118 "list.opt"
      mercury__list__reverse_2_p_0(mercury__queue__TypeInfo_for_T_11, mercury__queue__OnB_5, &mercury__queue__V_10_10);
    }
#line 46 "list.opt"
    {
#line 46 "list.opt"
      mercury__list__append_3_p_1(mercury__queue__TypeInfo_for_T_11, mercury__queue__OffB_6, mercury__queue__V_10_10, &mercury__queue__QB_8);
    }
#line 153 "queue.m"
    {
#line 153 "queue.m"
      return mercury__queue__succeeded = mercury__list____Unify____list_1_0(mercury__queue__TypeInfo_for_T_11, mercury__queue__QA_7, mercury__queue__QB_8);
    }
#line 150 "queue.m"
    return mercury__queue__succeeded;
#line 150 "queue.m"
  }
#line 41 "queue.m"
}

#line 36 "queue.m"
void MR_CALL 
mercury__queue__init_1_p_0(
#line 36 "queue.m"
  MR_Word mercury__queue__TypeInfo_for_T_4,
#line 36 "queue.m"
  MR_Word * mercury__queue__HeadVar__1_1)
#line 36 "queue.m"
{
#line 148 "queue.m"
  {
#line 148 "queue.m"
    MR_bool mercury__queue__succeeded;
#line 148 "queue.m"
    MR_Word mercury__queue__V_2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 148 "queue.m"
    MR_Word mercury__queue__V_3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 148 "queue.m"
    *mercury__queue__HeadVar__1_1 = (MR_Word) &mercury__queue_scalar_common_4[0];
#line 148 "queue.m"
  }
#line 36 "queue.m"
}

#line 35 "queue.m"
MR_Word MR_CALL 
mercury__queue__init_0_f_0(
#line 35 "queue.m"
  MR_Word mercury__queue__TypeInfo_for_T_3)
#line 35 "queue.m"
{
#line 148 "queue.m"
  {
#line 148 "queue.m"
    MR_bool mercury__queue__succeeded;
#line 148 "queue.m"
    MR_Word mercury__queue__Q_2 = (MR_Word) &mercury__queue_scalar_common_4[0];
#line 148 "queue.m"
    MR_Word mercury__queue__V_4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
#line 148 "queue.m"
    MR_Word mercury__queue__V_5_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

#line 148 "queue.m"
    return mercury__queue__Q_2;
#line 148 "queue.m"
  }
#line 35 "queue.m"
}

void mercury__queue__init(void)
{
}

void mercury__queue__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__queue__queue__type_ctor_info_queue_1);
}

void mercury__queue__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module queue. */
