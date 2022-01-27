/*
** Automatically generated from `counter.m'
** by the Mercury compiler,
** version rotd-2015-07-28
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


/* :- module counter. */
/* :- implementation. */

/*
INIT mercury__counter__init
ENDINIT
*/

#include "counter.mih"


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




#line 94 "counter.c"
static const MR_Integer mercury__counter__counter__functor_number_map_counter_0[1];

#line 97 "counter.c"
static const MR_NotagFunctorDesc mercury__counter__counter__notag_functor_desc_counter_0;

#line 100 "counter.c"
static MR_bool MR_CALL 
mercury__counter____Unify____counter_0_0_10001(
#line 103 "counter.c"
  MR_Box mercury__counter__wrapper_arg_1,
#line 105 "counter.c"
  MR_Box mercury__counter__wrapper_arg_2);

#line 108 "counter.c"
static void MR_CALL 
mercury__counter____Compare____counter_0_0_10001(
#line 111 "counter.c"
  MR_Box * mercury__counter__wrapper_arg_1,
#line 113 "counter.c"
  MR_Box mercury__counter__wrapper_arg_2,
#line 115 "counter.c"
  MR_Box mercury__counter__wrapper_arg_3);

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__counter__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);


static /* final */ const MR_Box mercury__counter_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__counter_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__counter_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__counter_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__counter_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__counter_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__counter_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__counter_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__counter_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};



#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "int.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
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
#include "benchmarking.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "char.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "construct.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "dir.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "float.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "rtti_implementation.mh"
#include "array.mh"
#include "array.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "table_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "version_array.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "time.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "type_desc.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "exception.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "stm_builtin.mh"
#include "stm_builtin.mh"
#include "store.mh"
#include "store.mh"
#include "stm_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "store.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "math.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "pretty_printer.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "array.mh"
#include "array.mh"
#include "version_array.mh"
#include "version_array.mh"
#include "string.mh"
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
#include "private_builtin.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
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



#line 343 "counter.c"
static const MR_Integer mercury__counter__counter__functor_number_map_counter_0[1] = {
  (MR_Integer) 0
};

#line 348 "counter.c"
static const MR_NotagFunctorDesc mercury__counter__counter__notag_functor_desc_counter_0 = {
  (MR_String) "counter",
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0,
  NULL
};

#line 355 "counter.c"
const MR_TypeCtorInfo_Struct mercury__counter__counter__type_ctor_info_counter_0 = {
  (MR_Integer) 0,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__counter____Unify____counter_0_0_10001)),
  ((MR_Box) (mercury__counter____Compare____counter_0_0_10001)),
  (MR_String) "counter",
  (MR_String) "counter",
  {     &mercury__counter__counter__notag_functor_desc_counter_0 },
  {     &mercury__counter__counter__notag_functor_desc_counter_0 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__counter__counter__functor_number_map_counter_0
};

#line 372 "counter.c"
static MR_bool MR_CALL 
mercury__counter____Unify____counter_0_0_10001(
#line 375 "counter.c"
  MR_Box mercury__counter__wrapper_arg_1,
#line 377 "counter.c"
  MR_Box mercury__counter__wrapper_arg_2)
#line 379 "counter.c"
{
#line 381 "counter.c"
  {
#line 383 "counter.c"
    MR_bool mercury__counter__succeeded;

#line 386 "counter.c"
    {
#line 388 "counter.c"
      mercury__counter__succeeded = mercury__counter____Unify____counter_0_0(((MR_Word) mercury__counter__wrapper_arg_1), ((MR_Word) mercury__counter__wrapper_arg_2));
    }
#line 391 "counter.c"
    return mercury__counter__succeeded;
#line 393 "counter.c"
  }
#line 395 "counter.c"
}

#line 398 "counter.c"
static void MR_CALL 
mercury__counter____Compare____counter_0_0_10001(
#line 401 "counter.c"
  MR_Box * mercury__counter__wrapper_arg_1,
#line 403 "counter.c"
  MR_Box mercury__counter__wrapper_arg_2,
#line 405 "counter.c"
  MR_Box mercury__counter__wrapper_arg_3)
#line 407 "counter.c"
{
#line 409 "counter.c"
  {
#line 411 "counter.c"
    MR_Word mercury__counter__conv0_HeadVar__1_1;

#line 414 "counter.c"
    {
#line 416 "counter.c"
      mercury__counter____Compare____counter_0_0(&mercury__counter__conv0_HeadVar__1_1, ((MR_Word) mercury__counter__wrapper_arg_2), ((MR_Word) mercury__counter__wrapper_arg_3));
    }
#line 419 "counter.c"
    *mercury__counter__wrapper_arg_1 = ((MR_Box) (mercury__counter__conv0_HeadVar__1_1));
#line 421 "counter.c"
  }
#line 423 "counter.c"
}

#line 13 "ops.opt"
static MR_Integer MR_CALL 
mercury__counter__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 13 "ops.opt"
{
#line 38 "ops.opt"
  {
#line 38 "ops.opt"
    MR_bool mercury__counter__succeeded;

#line 38 "ops.opt"
    return (MR_Integer) 1200;
#line 38 "ops.opt"
  }
#line 13 "ops.opt"
}

#line 50 "counter.m"
void MR_CALL 
mercury__counter____Compare____counter_0_0(
#line 50 "counter.m"
  MR_Word * mercury__counter__HeadVar__1_1,
#line 50 "counter.m"
  MR_Word mercury__counter__HeadVar__2_2,
#line 50 "counter.m"
  MR_Word mercury__counter__HeadVar__3_3)
#line 50 "counter.m"
{
#line 50 "counter.m"
  {
#line 50 "counter.m"
    MR_bool mercury__counter__succeeded;
#line 50 "counter.m"
    MR_Integer mercury__counter__CastX_6 = (MR_Integer) mercury__counter__HeadVar__2_2;
#line 50 "counter.m"
    MR_Integer mercury__counter__CastY_7 = (MR_Integer) mercury__counter__HeadVar__3_3;

#line 50 "counter.m"
    mercury__counter__succeeded = (mercury__counter__CastX_6 == mercury__counter__CastY_7);
#line 50 "counter.m"
    if (mercury__counter__succeeded)
#line 467 "counter.c"
      *mercury__counter__HeadVar__1_1 = (MR_Integer) 0;
#line 50 "counter.m"
    else
#line 50 "counter.m"
      {
#line 50 "counter.m"
        MR_Integer mercury__counter__V_4_4 = (MR_Integer) mercury__counter__HeadVar__2_2;
#line 50 "counter.m"
        MR_Integer mercury__counter__V_5_5 = (MR_Integer) mercury__counter__HeadVar__3_3;

#line 32 "private_builtin.opt"
        mercury__counter__succeeded = (mercury__counter__V_4_4 < mercury__counter__V_5_5);
#line 35 "private_builtin.opt"
        if (mercury__counter__succeeded)
#line 34 "private_builtin.opt"
          *mercury__counter__HeadVar__1_1 = (MR_Integer) 1;
#line 35 "private_builtin.opt"
        else
#line 40 "private_builtin.opt"
          {
#line 37 "private_builtin.opt"
            mercury__counter__succeeded = (mercury__counter__V_4_4 == mercury__counter__V_5_5);
#line 40 "private_builtin.opt"
            if (mercury__counter__succeeded)
#line 39 "private_builtin.opt"
              *mercury__counter__HeadVar__1_1 = (MR_Integer) 0;
#line 40 "private_builtin.opt"
            else
#line 41 "private_builtin.opt"
              *mercury__counter__HeadVar__1_1 = (MR_Integer) 2;
#line 40 "private_builtin.opt"
          }
#line 50 "counter.m"
      }
#line 50 "counter.m"
  }
#line 50 "counter.m"
}

#line 50 "counter.m"
MR_bool MR_CALL 
mercury__counter____Unify____counter_0_0(
#line 50 "counter.m"
  MR_Word mercury__counter__HeadVar__1_1,
#line 50 "counter.m"
  MR_Word mercury__counter__HeadVar__2_2)
#line 50 "counter.m"
{
#line 50 "counter.m"
  {
#line 50 "counter.m"
    MR_bool mercury__counter__succeeded;
#line 50 "counter.m"
    MR_Integer mercury__counter__CastX_5 = (MR_Integer) mercury__counter__HeadVar__1_1;
#line 50 "counter.m"
    MR_Integer mercury__counter__CastY_6 = (MR_Integer) mercury__counter__HeadVar__2_2;

#line 50 "counter.m"
    mercury__counter__succeeded = (mercury__counter__CastX_5 == mercury__counter__CastY_6);
#line 50 "counter.m"
    if (mercury__counter__succeeded)
#line 50 "counter.m"
      mercury__counter__succeeded = MR_TRUE;
#line 50 "counter.m"
    else
#line 50 "counter.m"
      {
#line 50 "counter.m"
        MR_Integer mercury__counter__V_3_3 = (MR_Integer) mercury__counter__HeadVar__1_1;
#line 50 "counter.m"
        MR_Integer mercury__counter__V_4_4 = (MR_Integer) mercury__counter__HeadVar__2_2;

#line 540 "counter.c"
        mercury__counter__succeeded = (mercury__counter__V_3_3 == mercury__counter__V_4_4);
#line 50 "counter.m"
      }
#line 50 "counter.m"
    return mercury__counter__succeeded;
#line 50 "counter.m"
  }
#line 50 "counter.m"
}

#line 41 "counter.m"
void MR_CALL 
mercury__counter__allocate_3_p_0(
#line 41 "counter.m"
  MR_Integer * mercury__counter__N_4,
#line 41 "counter.m"
  MR_Word mercury__counter__HeadVar__2_2,
#line 41 "counter.m"
  MR_Word * mercury__counter__HeadVar__3_3)
#line 41 "counter.m"
{
#line 57 "counter.m"
  {
#line 57 "counter.m"
    MR_bool mercury__counter__succeeded;
#line 57 "counter.m"
    MR_Integer mercury__counter__V_5_5;

#line 57 "counter.m"
    *mercury__counter__N_4 = (MR_Integer) mercury__counter__HeadVar__2_2;
#line 57 "counter.m"
    mercury__counter__V_5_5 = (*mercury__counter__N_4 + (MR_Integer) 1);
#line 57 "counter.m"
    *mercury__counter__HeadVar__3_3 = (MR_Word) mercury__counter__V_5_5;
#line 57 "counter.m"
  }
#line 41 "counter.m"
}

#line 35 "counter.m"
MR_Word MR_CALL 
mercury__counter__init_1_f_0(
#line 35 "counter.m"
  MR_Integer mercury__counter__N_3)
#line 35 "counter.m"
{
#line 53 "counter.m"
  {
#line 53 "counter.m"
    MR_bool mercury__counter__succeeded;
#line 53 "counter.m"
    MR_Word mercury__counter__HeadVar__2_2 = (MR_Word) mercury__counter__N_3;

#line 53 "counter.m"
    return mercury__counter__HeadVar__2_2;
#line 53 "counter.m"
  }
#line 35 "counter.m"
}

#line 31 "counter.m"
void MR_CALL 
mercury__counter__init_2_p_0(
#line 31 "counter.m"
  MR_Integer mercury__counter__N_3,
#line 31 "counter.m"
  MR_Word * mercury__counter__HeadVar__2_2)
#line 31 "counter.m"
{
#line 53 "counter.m"
  {
#line 53 "counter.m"
    MR_bool mercury__counter__succeeded;

#line 53 "counter.m"
    *mercury__counter__HeadVar__2_2 = (MR_Word) mercury__counter__N_3;
#line 53 "counter.m"
  }
#line 31 "counter.m"
}

void mercury__counter__init(void)
{
}

void mercury__counter__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__counter__counter__type_ctor_info_counter_0);
}

void mercury__counter__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module counter. */
