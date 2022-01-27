/*
** Automatically generated from `region_builtin.m'
** by the Mercury compiler,
** version rotd-2014-09-01
** configured for x86_64-apple-darwin13.3.0.
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


/* :- module region_builtin. */
/* :- implementation. */

/*
INIT mercury__region_builtin__init
ENDINIT
*/

#include "region_builtin.mih"


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




#line 87 "region_builtin.c"
static MR_bool MR_CALL 
mercury__region_builtin____Unify____region_0_0_10001(
#line 90 "region_builtin.c"
  MR_Box mercury__region_builtin__wrapper_arg_1,
#line 92 "region_builtin.c"
  MR_Box mercury__region_builtin__wrapper_arg_2);

#line 95 "region_builtin.c"
static void MR_CALL 
mercury__region_builtin____Compare____region_0_0_10001(
#line 98 "region_builtin.c"
  MR_Box * mercury__region_builtin__wrapper_arg_1,
#line 100 "region_builtin.c"
  MR_Box mercury__region_builtin__wrapper_arg_2,
#line 102 "region_builtin.c"
  MR_Box mercury__region_builtin__wrapper_arg_3);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__region_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);


static /* final */ const MR_Box mercury__region_builtin_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__region_builtin_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__region_builtin_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__region_builtin_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__region_builtin_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__region_builtin_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__region_builtin_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__region_builtin_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__region_builtin_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "region_builtin.mh"
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



#line 468 "region_builtin.c"
const MR_TypeCtorInfo_Struct mercury__region_builtin__region_builtin__type_ctor_info_region_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__region_builtin____Unify____region_0_0_10001)),
  ((MR_Box) (mercury__region_builtin____Compare____region_0_0_10001)),
  (MR_String) "region_builtin",
  (MR_String) "region",
  {
    NULL
  },
  {
    NULL
  },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

#line 489 "region_builtin.c"
static MR_bool MR_CALL 
mercury__region_builtin____Unify____region_0_0_10001(
#line 492 "region_builtin.c"
  MR_Box mercury__region_builtin__wrapper_arg_1,
#line 494 "region_builtin.c"
  MR_Box mercury__region_builtin__wrapper_arg_2)
#line 496 "region_builtin.c"
{
#line 498 "region_builtin.c"
  {
#line 500 "region_builtin.c"
    MR_bool mercury__region_builtin__succeeded;

#line 503 "region_builtin.c"
    {
#line 505 "region_builtin.c"
      mercury__region_builtin__succeeded = mercury__region_builtin____Unify____region_0_0(((MR_Box) mercury__region_builtin__wrapper_arg_1), ((MR_Box) mercury__region_builtin__wrapper_arg_2));
    }
#line 508 "region_builtin.c"
    return mercury__region_builtin__succeeded;
#line 510 "region_builtin.c"
  }
#line 512 "region_builtin.c"
}

#line 515 "region_builtin.c"
static void MR_CALL 
mercury__region_builtin____Compare____region_0_0_10001(
#line 518 "region_builtin.c"
  MR_Box * mercury__region_builtin__wrapper_arg_1,
#line 520 "region_builtin.c"
  MR_Box mercury__region_builtin__wrapper_arg_2,
#line 522 "region_builtin.c"
  MR_Box mercury__region_builtin__wrapper_arg_3)
#line 524 "region_builtin.c"
{
#line 526 "region_builtin.c"
  {
#line 528 "region_builtin.c"
    MR_Word mercury__region_builtin__conv0_HeadVar__1_1;

#line 531 "region_builtin.c"
    {
#line 533 "region_builtin.c"
      mercury__region_builtin____Compare____region_0_0(&mercury__region_builtin__conv0_HeadVar__1_1, ((MR_Box) mercury__region_builtin__wrapper_arg_2), ((MR_Box) mercury__region_builtin__wrapper_arg_3));
    }
#line 536 "region_builtin.c"
    *mercury__region_builtin__wrapper_arg_1 = ((MR_Box) (mercury__region_builtin__conv0_HeadVar__1_1));
#line 538 "region_builtin.c"
  }
#line 540 "region_builtin.c"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__region_builtin__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__region_builtin__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 59 "region_builtin.m"
void MR_CALL 
mercury__region_builtin____Compare____region_0_0(
#line 59 "region_builtin.m"
  MR_Word * mercury__region_builtin__HeadVar__1_1,
#line 59 "region_builtin.m"
  MR_Box mercury__region_builtin__HeadVar__2_2,
#line 59 "region_builtin.m"
  MR_Box mercury__region_builtin__HeadVar__3_3)
#line 59 "region_builtin.m"
{
#line 59 "region_builtin.m"
  {
#line 59 "region_builtin.m"
    MR_bool mercury__region_builtin__succeeded;
#line 59 "region_builtin.m"
    MR_Word mercury__region_builtin__Cast_HeadVar1_4 = (MR_Word) mercury__region_builtin__HeadVar__2_2;
#line 59 "region_builtin.m"
    MR_Word mercury__region_builtin__Cast_HeadVar2_5 = (MR_Word) mercury__region_builtin__HeadVar__3_3;

#line 59 "region_builtin.m"
    {
#line 59 "region_builtin.m"
      mercury__builtin____Compare____c_pointer_0_0(mercury__region_builtin__HeadVar__1_1, mercury__region_builtin__Cast_HeadVar1_4, mercury__region_builtin__Cast_HeadVar2_5);
#line 59 "region_builtin.m"
      return;
    }
#line 59 "region_builtin.m"
  }
#line 59 "region_builtin.m"
}

#line 59 "region_builtin.m"
MR_bool MR_CALL 
mercury__region_builtin____Unify____region_0_0(
#line 59 "region_builtin.m"
  MR_Box mercury__region_builtin__HeadVar__1_1,
#line 59 "region_builtin.m"
  MR_Box mercury__region_builtin__HeadVar__2_2)
#line 59 "region_builtin.m"
{
#line 59 "region_builtin.m"
  {
#line 59 "region_builtin.m"
    MR_bool mercury__region_builtin__succeeded;
#line 59 "region_builtin.m"
    MR_Word mercury__region_builtin__Cast_HeadVar1_3 = (MR_Word) mercury__region_builtin__HeadVar__1_1;
#line 59 "region_builtin.m"
    MR_Word mercury__region_builtin__Cast_HeadVar2_4 = (MR_Word) mercury__region_builtin__HeadVar__2_2;

#line 59 "region_builtin.m"
    {
#line 59 "region_builtin.m"
      return mercury__region_builtin__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__region_builtin__Cast_HeadVar1_3, mercury__region_builtin__Cast_HeadVar2_4);
    }
#line 59 "region_builtin.m"
    return mercury__region_builtin__succeeded;
#line 59 "region_builtin.m"
  }
#line 59 "region_builtin.m"
}

#line 43 "region_builtin.m"
void MR_CALL 
mercury__region_builtin__print_rbmm_profiling_info_2_p_0(void)
#line 43 "region_builtin.m"
{
#line 83 "region_builtin.m"
  {
#line 83 "region_builtin.m"
    MR_bool mercury__region_builtin__succeeded;

#line 86 "region_builtin.m"
{
#define MR_PROC_LABEL mercury__region_builtin__print_rbmm_profiling_info_2_p_0


		{
#line 86 "region_builtin.m"

#ifdef MR_USE_REGIONS
    MR_region_print_profiling_info();
#else
    printf(
        "There is no rbmm profiling info to print in a non-rbmm grade.\n");
#endif

#line 647 "region_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 86 "region_builtin.m"
}
#line 83 "region_builtin.m"
  }
#line 43 "region_builtin.m"
}

#line 41 "region_builtin.m"
void MR_CALL 
mercury__region_builtin__remove_region_1_p_0(
#line 41 "region_builtin.m"
  MR_Box mercury__region_builtin__Region_1)
#line 41 "region_builtin.m"
{
#line 72 "region_builtin.m"
  {
#line 72 "region_builtin.m"
    MR_bool mercury__region_builtin__succeeded;

#line 75 "region_builtin.m"
{
#define MR_PROC_LABEL mercury__region_builtin__remove_region_1_p_0

	MR_RegionHeader * Region;

	Region = (MR_RegionHeader *) mercury__region_builtin__Region_1 ;
		{
#line 75 "region_builtin.m"

#ifdef MR_USE_REGIONS
    MR_region_remove_region(Region);
#else
    MR_fatal_error("remove_region: non-rbmm grade");
#endif

#line 686 "region_builtin.c"

		;}
#undef MR_PROC_LABEL
#line 75 "region_builtin.m"
}
#line 72 "region_builtin.m"
  }
#line 41 "region_builtin.m"
}

#line 37 "region_builtin.m"
void MR_CALL 
mercury__region_builtin__create_region_1_p_0(
#line 37 "region_builtin.m"
  MR_Box * mercury__region_builtin__Region_1)
#line 37 "region_builtin.m"
{
#line 61 "region_builtin.m"
  {
#line 61 "region_builtin.m"
    MR_bool mercury__region_builtin__succeeded;

#line 64 "region_builtin.m"
{
#define MR_PROC_LABEL mercury__region_builtin__create_region_1_p_0

	MR_RegionHeader * Region;

		{
#line 64 "region_builtin.m"

#ifdef MR_USE_REGIONS
    Region = MR_region_create_region();
#else
    MR_fatal_error("create_region: non-rbmm grade");
#endif

#line 724 "region_builtin.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__region_builtin__Region_1  = (MR_Box) Region;
#line 64 "region_builtin.m"
}
#line 61 "region_builtin.m"
  }
#line 37 "region_builtin.m"
}

void mercury__region_builtin__init(void)
{
}

void mercury__region_builtin__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__region_builtin__region_builtin__type_ctor_info_region_0);
}

void mercury__region_builtin__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module region_builtin. */
