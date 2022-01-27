/*
** Automatically generated from `mutvar.m'
** by the Mercury compiler,
** version rotd-2015-09-18
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


/* :- module mutvar. */
/* :- implementation. */

/*
INIT mercury__mutvar__init
ENDINIT
*/

#include "mutvar.mih"


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




#line 93 "mutvar.c"
static const MR_Integer mercury__mutvar__mutvar__functor_number_map_mutvar_1[1];

#line 96 "mutvar.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__mutvar__private_builtin__pti_ref_1__pseudo_1;

#line 99 "mutvar.c"
static const MR_NotagFunctorDesc mercury__mutvar__mutvar__notag_functor_desc_mutvar_1;

#line 102 "mutvar.c"
static MR_bool MR_CALL 
mercury__mutvar____Unify____mutvar_1_0_10001(
#line 105 "mutvar.c"
  MR_Box mercury__mutvar__wrapper_arg_1,
#line 107 "mutvar.c"
  MR_Box mercury__mutvar__wrapper_arg_2,
#line 109 "mutvar.c"
  MR_Box mercury__mutvar__wrapper_arg_3);

#line 112 "mutvar.c"
static void MR_CALL 
mercury__mutvar____Compare____mutvar_1_0_10001(
#line 115 "mutvar.c"
  MR_Box mercury__mutvar__wrapper_arg_1,
#line 117 "mutvar.c"
  MR_Box * mercury__mutvar__wrapper_arg_2,
#line 119 "mutvar.c"
  MR_Box mercury__mutvar__wrapper_arg_3,
#line 121 "mutvar.c"
  MR_Box mercury__mutvar__wrapper_arg_4);

#line 18 "ops.opt"
static MR_Integer MR_CALL 
mercury__mutvar__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);


static /* final */ const MR_Box mercury__mutvar_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__mutvar_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__mutvar_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__mutvar_scalar_common_1[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__mutvar_scalar_common_2[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__mutvar_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__mutvar_scalar_common_3[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__mutvar_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__mutvar_scalar_common_2[0])),
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
#include "mutvar.mh"
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



#line 204 "mutvar.c"
static const MR_Integer mercury__mutvar__mutvar__functor_number_map_mutvar_1[1] = {
  (MR_Integer) 0
};

#line 209 "mutvar.c"
static const MR_FA_PseudoTypeInfo_Struct1 mercury__mutvar__private_builtin__pti_ref_1__pseudo_1 = {
  &mercury__private_builtin__private_builtin__type_ctor_info_ref_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

#line 217 "mutvar.c"
static const MR_NotagFunctorDesc mercury__mutvar__mutvar__notag_functor_desc_mutvar_1 = {
  (MR_String) "mutvar",
  (MR_PseudoTypeInfo) &mercury__mutvar__private_builtin__pti_ref_1__pseudo_1,
  NULL
};

#line 224 "mutvar.c"
const MR_TypeCtorInfo_Struct mercury__mutvar__mutvar__type_ctor_info_mutvar_1 = {
  (MR_Integer) 1,
  (MR_Integer) 15,
  (MR_Integer) -1,
  mercury__private_builtin__MR_TYPECTOR_REP_NOTAG,
  ((MR_Box) (mercury__mutvar____Unify____mutvar_1_0_10001)),
  ((MR_Box) (mercury__mutvar____Compare____mutvar_1_0_10001)),
  (MR_String) "mutvar",
  (MR_String) "mutvar",
  {     &mercury__mutvar__mutvar__notag_functor_desc_mutvar_1 },
  {     &mercury__mutvar__mutvar__notag_functor_desc_mutvar_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__mutvar__mutvar__functor_number_map_mutvar_1
};

#line 241 "mutvar.c"
static MR_bool MR_CALL 
mercury__mutvar____Unify____mutvar_1_0_10001(
#line 244 "mutvar.c"
  MR_Box mercury__mutvar__wrapper_arg_1,
#line 246 "mutvar.c"
  MR_Box mercury__mutvar__wrapper_arg_2,
#line 248 "mutvar.c"
  MR_Box mercury__mutvar__wrapper_arg_3)
#line 250 "mutvar.c"
{
#line 252 "mutvar.c"
  {
#line 254 "mutvar.c"
    MR_bool mercury__mutvar__succeeded;

#line 257 "mutvar.c"
    {
#line 259 "mutvar.c"
      mercury__mutvar__succeeded = mercury__mutvar____Unify____mutvar_1_0(((MR_Word) mercury__mutvar__wrapper_arg_1), ((MR_Word) mercury__mutvar__wrapper_arg_2), ((MR_Word) mercury__mutvar__wrapper_arg_3));
    }
#line 262 "mutvar.c"
    return mercury__mutvar__succeeded;
#line 264 "mutvar.c"
  }
#line 266 "mutvar.c"
}

#line 269 "mutvar.c"
static void MR_CALL 
mercury__mutvar____Compare____mutvar_1_0_10001(
#line 272 "mutvar.c"
  MR_Box mercury__mutvar__wrapper_arg_1,
#line 274 "mutvar.c"
  MR_Box * mercury__mutvar__wrapper_arg_2,
#line 276 "mutvar.c"
  MR_Box mercury__mutvar__wrapper_arg_3,
#line 278 "mutvar.c"
  MR_Box mercury__mutvar__wrapper_arg_4)
#line 280 "mutvar.c"
{
#line 282 "mutvar.c"
  {
#line 284 "mutvar.c"
    MR_Word mercury__mutvar__conv0_HeadVar__1_1;

#line 287 "mutvar.c"
    {
#line 289 "mutvar.c"
      mercury__mutvar____Compare____mutvar_1_0(((MR_Word) mercury__mutvar__wrapper_arg_1), &mercury__mutvar__conv0_HeadVar__1_1, ((MR_Word) mercury__mutvar__wrapper_arg_3), ((MR_Word) mercury__mutvar__wrapper_arg_4));
    }
#line 292 "mutvar.c"
    *mercury__mutvar__wrapper_arg_2 = ((MR_Box) (mercury__mutvar__conv0_HeadVar__1_1));
#line 294 "mutvar.c"
  }
#line 296 "mutvar.c"
}

#line 18 "ops.opt"
static MR_Integer MR_CALL 
mercury__mutvar__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
#line 18 "ops.opt"
{
#line 47 "ops.opt"
  {
#line 47 "ops.opt"
    MR_bool mercury__mutvar__succeeded;

#line 47 "ops.opt"
    return (MR_Integer) 1200;
#line 47 "ops.opt"
  }
#line 18 "ops.opt"
}

#line 218 "mutvar.m"
void MR_CALL 
mercury__mutvar____Compare____mutvar_1_0(
#line 218 "mutvar.m"
  MR_Word mercury__mutvar__TypeInfo_for_T_8,
#line 218 "mutvar.m"
  MR_Word * mercury__mutvar__HeadVar__1_1,
#line 218 "mutvar.m"
  MR_Word mercury__mutvar__HeadVar__2_2,
#line 218 "mutvar.m"
  MR_Word mercury__mutvar__HeadVar__3_3)
#line 218 "mutvar.m"
{
#line 218 "mutvar.m"
  {
#line 218 "mutvar.m"
    MR_bool mercury__mutvar__succeeded;
#line 218 "mutvar.m"
    MR_Integer mercury__mutvar__CastX_6 = (MR_Integer) mercury__mutvar__HeadVar__2_2;
#line 218 "mutvar.m"
    MR_Integer mercury__mutvar__CastY_7 = (MR_Integer) mercury__mutvar__HeadVar__3_3;

#line 218 "mutvar.m"
    mercury__mutvar__succeeded = (mercury__mutvar__CastX_6 == mercury__mutvar__CastY_7);
#line 218 "mutvar.m"
    if (mercury__mutvar__succeeded)
#line 342 "mutvar.c"
      *mercury__mutvar__HeadVar__1_1 = (MR_Integer) 0;
#line 218 "mutvar.m"
    else
#line 218 "mutvar.m"
      {
#line 218 "mutvar.m"
        MR_Word mercury__mutvar__V_4_4 = (MR_Word) mercury__mutvar__HeadVar__2_2;
#line 218 "mutvar.m"
        MR_Word mercury__mutvar__V_5_5 = (MR_Word) mercury__mutvar__HeadVar__3_3;

#line 218 "mutvar.m"
        {
#line 218 "mutvar.m"
          mercury__private_builtin____Compare____ref_1_0(mercury__mutvar__TypeInfo_for_T_8, mercury__mutvar__HeadVar__1_1, mercury__mutvar__V_4_4, mercury__mutvar__V_5_5);
#line 218 "mutvar.m"
          return;
        }
#line 218 "mutvar.m"
      }
#line 218 "mutvar.m"
  }
#line 218 "mutvar.m"
}

#line 218 "mutvar.m"
MR_bool MR_CALL 
mercury__mutvar____Unify____mutvar_1_0(
#line 218 "mutvar.m"
  MR_Word mercury__mutvar__TypeInfo_for_T_7,
#line 218 "mutvar.m"
  MR_Word mercury__mutvar__HeadVar__1_1,
#line 218 "mutvar.m"
  MR_Word mercury__mutvar__HeadVar__2_2)
#line 218 "mutvar.m"
{
#line 218 "mutvar.m"
  {
#line 218 "mutvar.m"
    MR_bool mercury__mutvar__succeeded;
#line 218 "mutvar.m"
    MR_Integer mercury__mutvar__CastX_5 = (MR_Integer) mercury__mutvar__HeadVar__1_1;
#line 218 "mutvar.m"
    MR_Integer mercury__mutvar__CastY_6 = (MR_Integer) mercury__mutvar__HeadVar__2_2;

#line 218 "mutvar.m"
    mercury__mutvar__succeeded = (mercury__mutvar__CastX_5 == mercury__mutvar__CastY_6);
#line 218 "mutvar.m"
    if (mercury__mutvar__succeeded)
#line 218 "mutvar.m"
      mercury__mutvar__succeeded = MR_TRUE;
#line 218 "mutvar.m"
    else
#line 218 "mutvar.m"
      {
#line 218 "mutvar.m"
        MR_Word mercury__mutvar__V_3_3 = (MR_Word) mercury__mutvar__HeadVar__1_1;
#line 218 "mutvar.m"
        MR_Word mercury__mutvar__V_4_4 = (MR_Word) mercury__mutvar__HeadVar__2_2;

#line 402 "mutvar.c"
        {
#line 404 "mutvar.c"
          return mercury__mutvar__succeeded = mercury__private_builtin____Unify____ref_1_0(mercury__mutvar__TypeInfo_for_T_7, mercury__mutvar__V_3_3, mercury__mutvar__V_4_4);
        }
#line 218 "mutvar.m"
      }
#line 218 "mutvar.m"
    return mercury__mutvar__succeeded;
#line 218 "mutvar.m"
  }
#line 218 "mutvar.m"
}

#line 63 "mutvar.m"
void MR_CALL 
mercury__mutvar__clear_mutvar_1_p_0(
#line 63 "mutvar.m"
  MR_Word mercury__mutvar__TypeInfo_for_T_2,
#line 63 "mutvar.m"
  MR_Word mercury__mutvar__HeadVar__1_1)
#line 63 "mutvar.m"
{
#line 120 "mutvar.m"
  {
#line 120 "mutvar.m"
    MR_bool mercury__mutvar__succeeded;
#line 120 "mutvar.m"
    MR_Word mercury__mutvar__TypeInfo_for_T_3;

#line 123 "mutvar.m"
{
#define MR_PROC_LABEL mercury__mutvar__clear_mutvar_1_p_0

	MR_Word Ref;

	Ref =  mercury__mutvar__HeadVar__1_1 ;
		{
#line 123 "mutvar.m"

    *(MR_Word *) Ref = 0;

#line 444 "mutvar.c"

		;}
#undef MR_PROC_LABEL
#line 123 "mutvar.m"
}
#line 120 "mutvar.m"
  }
#line 63 "mutvar.m"
}

#line 54 "mutvar.m"
void MR_CALL 
mercury__mutvar__set_mutvar_2_p_0(
#line 54 "mutvar.m"
  MR_Word mercury__mutvar__TypeInfo_for_T_3,
#line 54 "mutvar.m"
  MR_Word mercury__mutvar__HeadVar__1_1,
#line 54 "mutvar.m"
  MR_Box mercury__mutvar__HeadVar__2_2)
#line 54 "mutvar.m"
{
#line 113 "mutvar.m"
  {
#line 113 "mutvar.m"
    MR_bool mercury__mutvar__succeeded;
#line 113 "mutvar.m"
    MR_Word mercury__mutvar__TypeInfo_for_T_4;

#line 116 "mutvar.m"
{
#define MR_PROC_LABEL mercury__mutvar__set_mutvar_2_p_0

	MR_Word Ref;
	MR_Word X;

	Ref =  mercury__mutvar__HeadVar__1_1 ;
	X = (MR_Word) mercury__mutvar__HeadVar__2_2 ;
		{
#line 116 "mutvar.m"

    *(MR_Word *) Ref = X;

#line 487 "mutvar.c"

		;}
#undef MR_PROC_LABEL
#line 116 "mutvar.m"
}
#line 113 "mutvar.m"
  }
#line 54 "mutvar.m"
}

#line 44 "mutvar.m"
void MR_CALL 
mercury__mutvar__get_mutvar_2_p_0(
#line 44 "mutvar.m"
  MR_Word mercury__mutvar__TypeInfo_for_T_3,
#line 44 "mutvar.m"
  MR_Word mercury__mutvar__HeadVar__1_1,
#line 44 "mutvar.m"
  MR_Box * mercury__mutvar__HeadVar__2_2)
#line 44 "mutvar.m"
{
#line 106 "mutvar.m"
  {
#line 106 "mutvar.m"
    MR_bool mercury__mutvar__succeeded;
#line 106 "mutvar.m"
    MR_Word mercury__mutvar__TypeInfo_for_T_4;

#line 109 "mutvar.m"
{
#define MR_PROC_LABEL mercury__mutvar__get_mutvar_2_p_0

	MR_Word Ref;
	MR_Word X;

	Ref =  mercury__mutvar__HeadVar__1_1 ;
		{
#line 109 "mutvar.m"

    X = * (MR_Word *) Ref;

#line 529 "mutvar.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__mutvar__HeadVar__2_2  = (MR_Box) X;
#line 109 "mutvar.m"
}
#line 106 "mutvar.m"
  }
#line 44 "mutvar.m"
}

#line 39 "mutvar.m"
void MR_CALL 
mercury__mutvar__new_mutvar0_1_p_0(
#line 39 "mutvar.m"
  MR_Word mercury__mutvar__TypeInfo_for_T_2,
#line 39 "mutvar.m"
  MR_Word * mercury__mutvar__HeadVar__1_1)
#line 39 "mutvar.m"
{
#line 97 "mutvar.m"
  {
#line 97 "mutvar.m"
    MR_bool mercury__mutvar__succeeded;
#line 97 "mutvar.m"
    MR_Word mercury__mutvar__TypeInfo_for_T_3;

#line 100 "mutvar.m"
{
#define MR_PROC_LABEL mercury__mutvar__new_mutvar0_1_p_0

	MR_Word Ref;

		{
#line 100 "mutvar.m"

    MR_offset_incr_hp_msg(Ref, MR_SIZE_SLOT_SIZE, MR_SIZE_SLOT_SIZE + 1,
        MR_ALLOC_ID, "mutvar.mutvar/1");
    MR_define_size_slot(0, Ref, 1);

#line 570 "mutvar.c"

		;}
#undef MR_PROC_LABEL
	 *mercury__mutvar__HeadVar__1_1  = Ref;
#line 100 "mutvar.m"
}
#line 97 "mutvar.m"
  }
#line 39 "mutvar.m"
}

#line 34 "mutvar.m"
void MR_CALL 
mercury__mutvar__new_mutvar_2_p_1(
#line 34 "mutvar.m"
  MR_Word mercury__mutvar__TypeInfo_for_T_6,
#line 34 "mutvar.m"
  MR_Box mercury__mutvar__X_3,
#line 34 "mutvar.m"
  MR_Word * mercury__mutvar__Ref_4)
#line 34 "mutvar.m"
{
#line 82 "mutvar.m"
  {
#line 82 "mutvar.m"
    MR_bool mercury__mutvar__succeeded;
#line 82 "mutvar.m"
    MR_Word mercury__mutvar__Ref0_5;
#line 97 "mutvar.m"
    MR_Word mercury__mutvar__TypeInfo_for_T_7;
#line 113 "mutvar.m"
    MR_Word mercury__mutvar__TypeInfo_for_T_8;

#line 100 "mutvar.m"
{
#define MR_PROC_LABEL mercury__mutvar__new_mutvar_2_p_1

	MR_Word Ref;

		{
#line 100 "mutvar.m"

    MR_offset_incr_hp_msg(Ref, MR_SIZE_SLOT_SIZE, MR_SIZE_SLOT_SIZE + 1,
        MR_ALLOC_ID, "mutvar.mutvar/1");
    MR_define_size_slot(0, Ref, 1);

#line 617 "mutvar.c"

		;}
#undef MR_PROC_LABEL
	 mercury__mutvar__Ref0_5  = Ref;
#line 100 "mutvar.m"
}
#line 116 "mutvar.m"
{
#define MR_PROC_LABEL mercury__mutvar__new_mutvar_2_p_1

	MR_Word Ref;
	MR_Word X;

	Ref =  mercury__mutvar__Ref0_5 ;
	X = (MR_Word) mercury__mutvar__X_3 ;
		{
#line 116 "mutvar.m"

    *(MR_Word *) Ref = X;

#line 638 "mutvar.c"

		;}
#undef MR_PROC_LABEL
#line 116 "mutvar.m"
}
#line 85 "mutvar.m"
    *mercury__mutvar__Ref_4 = mercury__mutvar__Ref0_5;
#line 82 "mutvar.m"
  }
#line 34 "mutvar.m"
}

#line 33 "mutvar.m"
void MR_CALL 
mercury__mutvar__new_mutvar_2_p_0(
#line 33 "mutvar.m"
  MR_Word mercury__mutvar__TypeInfo_for_T_6,
#line 33 "mutvar.m"
  MR_Box mercury__mutvar__X_3,
#line 33 "mutvar.m"
  MR_Word * mercury__mutvar__Ref_4)
#line 33 "mutvar.m"
{
#line 82 "mutvar.m"
  {
#line 82 "mutvar.m"
    MR_bool mercury__mutvar__succeeded;
#line 82 "mutvar.m"
    MR_Word mercury__mutvar__Ref0_5;
#line 97 "mutvar.m"
    MR_Word mercury__mutvar__TypeInfo_for_T_7;
#line 113 "mutvar.m"
    MR_Word mercury__mutvar__TypeInfo_for_T_8;

#line 100 "mutvar.m"
{
#define MR_PROC_LABEL mercury__mutvar__new_mutvar_2_p_0

	MR_Word Ref;

		{
#line 100 "mutvar.m"

    MR_offset_incr_hp_msg(Ref, MR_SIZE_SLOT_SIZE, MR_SIZE_SLOT_SIZE + 1,
        MR_ALLOC_ID, "mutvar.mutvar/1");
    MR_define_size_slot(0, Ref, 1);

#line 686 "mutvar.c"

		;}
#undef MR_PROC_LABEL
	 mercury__mutvar__Ref0_5  = Ref;
#line 100 "mutvar.m"
}
#line 116 "mutvar.m"
{
#define MR_PROC_LABEL mercury__mutvar__new_mutvar_2_p_0

	MR_Word Ref;
	MR_Word X;

	Ref =  mercury__mutvar__Ref0_5 ;
	X = (MR_Word) mercury__mutvar__X_3 ;
		{
#line 116 "mutvar.m"

    *(MR_Word *) Ref = X;

#line 707 "mutvar.c"

		;}
#undef MR_PROC_LABEL
#line 116 "mutvar.m"
}
#line 85 "mutvar.m"
    *mercury__mutvar__Ref_4 = mercury__mutvar__Ref0_5;
#line 82 "mutvar.m"
  }
#line 33 "mutvar.m"
}

void mercury__mutvar__init(void)
{
}

void mercury__mutvar__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__mutvar__mutvar__type_ctor_info_mutvar_1);
}

void mercury__mutvar__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module mutvar. */
