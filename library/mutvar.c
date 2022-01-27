/*
** Automatically generated from `mutvar.m'
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




static const MR_Integer mercury__mutvar__mutvar__functor_number_map_mutvar_1[1];

static const MR_FA_PseudoTypeInfo_Struct1 mercury__mutvar__private_builtin__pti_ref_1__pseudo_1;

static const MR_NotagFunctorDesc mercury__mutvar__mutvar__notag_functor_desc_mutvar_1;

static MR_bool MR_CALL 
mercury__mutvar____Unify____mutvar_1_0_10001(
  MR_Box mercury__mutvar__wrapper_arg_1,
  MR_Box mercury__mutvar__wrapper_arg_2,
  MR_Box mercury__mutvar__wrapper_arg_3);

static void MR_CALL 
mercury__mutvar____Compare____mutvar_1_0_10001(
  MR_Box mercury__mutvar__wrapper_arg_1,
  MR_Box * mercury__mutvar__wrapper_arg_2,
  MR_Box mercury__mutvar__wrapper_arg_3,
  MR_Box mercury__mutvar__wrapper_arg_4);

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



static const MR_Integer mercury__mutvar__mutvar__functor_number_map_mutvar_1[1] = {
  (MR_Integer) 0
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__mutvar__private_builtin__pti_ref_1__pseudo_1 = {
  &mercury__private_builtin__private_builtin__type_ctor_info_ref_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_NotagFunctorDesc mercury__mutvar__mutvar__notag_functor_desc_mutvar_1 = {
  (MR_String) "mutvar",
  (MR_PseudoTypeInfo) &mercury__mutvar__private_builtin__pti_ref_1__pseudo_1,
  NULL
};

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

static MR_bool MR_CALL 
mercury__mutvar____Unify____mutvar_1_0_10001(
  MR_Box mercury__mutvar__wrapper_arg_1,
  MR_Box mercury__mutvar__wrapper_arg_2,
  MR_Box mercury__mutvar__wrapper_arg_3)
{
  {
    MR_bool mercury__mutvar__succeeded;

    {
      mercury__mutvar__succeeded = mercury__mutvar____Unify____mutvar_1_0(((MR_Word) mercury__mutvar__wrapper_arg_1), ((MR_Word) mercury__mutvar__wrapper_arg_2), ((MR_Word) mercury__mutvar__wrapper_arg_3));
    }
    return mercury__mutvar__succeeded;
  }
}

static void MR_CALL 
mercury__mutvar____Compare____mutvar_1_0_10001(
  MR_Box mercury__mutvar__wrapper_arg_1,
  MR_Box * mercury__mutvar__wrapper_arg_2,
  MR_Box mercury__mutvar__wrapper_arg_3,
  MR_Box mercury__mutvar__wrapper_arg_4)
{
  {
    MR_Word mercury__mutvar__conv0_HeadVar__1_1;

    {
      mercury__mutvar____Compare____mutvar_1_0(((MR_Word) mercury__mutvar__wrapper_arg_1), &mercury__mutvar__conv0_HeadVar__1_1, ((MR_Word) mercury__mutvar__wrapper_arg_3), ((MR_Word) mercury__mutvar__wrapper_arg_4));
    }
    *mercury__mutvar__wrapper_arg_2 = ((MR_Box) (mercury__mutvar__conv0_HeadVar__1_1));
  }
}

static MR_Integer MR_CALL 
mercury__mutvar__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    MR_bool mercury__mutvar__succeeded;

    return (MR_Integer) 1200;
  }
}

void MR_CALL 
mercury__mutvar____Compare____mutvar_1_0(
  MR_Word mercury__mutvar__TypeInfo_for_T_8,
  MR_Word * mercury__mutvar__HeadVar__1_1,
  MR_Word mercury__mutvar__HeadVar__2_2,
  MR_Word mercury__mutvar__HeadVar__3_3)
{
  {
    MR_bool mercury__mutvar__succeeded;
    MR_Integer mercury__mutvar__CastX_6 = (MR_Integer) mercury__mutvar__HeadVar__2_2;
    MR_Integer mercury__mutvar__CastY_7 = (MR_Integer) mercury__mutvar__HeadVar__3_3;

    mercury__mutvar__succeeded = (mercury__mutvar__CastX_6 == mercury__mutvar__CastY_7);
    if (mercury__mutvar__succeeded)
      *mercury__mutvar__HeadVar__1_1 = (MR_Integer) 0;
    else
      {
        MR_Word mercury__mutvar__V_4_4 = (MR_Word) mercury__mutvar__HeadVar__2_2;
        MR_Word mercury__mutvar__V_5_5 = (MR_Word) mercury__mutvar__HeadVar__3_3;

        {
          mercury__private_builtin____Compare____ref_1_0(mercury__mutvar__TypeInfo_for_T_8, mercury__mutvar__HeadVar__1_1, mercury__mutvar__V_4_4, mercury__mutvar__V_5_5);
        }
      }
  }
}

MR_bool MR_CALL 
mercury__mutvar____Unify____mutvar_1_0(
  MR_Word mercury__mutvar__TypeInfo_for_T_7,
  MR_Word mercury__mutvar__HeadVar__1_1,
  MR_Word mercury__mutvar__HeadVar__2_2)
{
  {
    MR_bool mercury__mutvar__succeeded;
    MR_Integer mercury__mutvar__CastX_5 = (MR_Integer) mercury__mutvar__HeadVar__1_1;
    MR_Integer mercury__mutvar__CastY_6 = (MR_Integer) mercury__mutvar__HeadVar__2_2;

    mercury__mutvar__succeeded = (mercury__mutvar__CastX_5 == mercury__mutvar__CastY_6);
    if (mercury__mutvar__succeeded)
      mercury__mutvar__succeeded = MR_TRUE;
    else
      {
        MR_Word mercury__mutvar__V_3_3 = (MR_Word) mercury__mutvar__HeadVar__1_1;
        MR_Word mercury__mutvar__V_4_4 = (MR_Word) mercury__mutvar__HeadVar__2_2;

        {
          mercury__mutvar__succeeded = mercury__private_builtin____Unify____ref_1_0(mercury__mutvar__TypeInfo_for_T_7, mercury__mutvar__V_3_3, mercury__mutvar__V_4_4);
        }
      }
    return mercury__mutvar__succeeded;
  }
}

void MR_CALL 
mercury__mutvar__clear_mutvar_1_p_0(
  MR_Word mercury__mutvar__TypeInfo_for_T_2,
  MR_Word mercury__mutvar__HeadVar__1_1)
{
  {
    MR_bool mercury__mutvar__succeeded;
    MR_Word mercury__mutvar__TypeInfo_for_T_3;

{
#define MR_PROC_LABEL mercury__mutvar__clear_mutvar_1_p_0

	MR_Word Ref;

	Ref =  mercury__mutvar__HeadVar__1_1 ;
		{

    *(MR_Word *) Ref = 0;


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__mutvar__set_mutvar_2_p_0(
  MR_Word mercury__mutvar__TypeInfo_for_T_3,
  MR_Word mercury__mutvar__HeadVar__1_1,
  MR_Box mercury__mutvar__HeadVar__2_2)
{
  {
    MR_bool mercury__mutvar__succeeded;
    MR_Word mercury__mutvar__TypeInfo_for_T_4;

{
#define MR_PROC_LABEL mercury__mutvar__set_mutvar_2_p_0

	MR_Word Ref;
	MR_Word X;

	Ref =  mercury__mutvar__HeadVar__1_1 ;
	X = (MR_Word) mercury__mutvar__HeadVar__2_2 ;
		{

    *(MR_Word *) Ref = X;


		;}
#undef MR_PROC_LABEL
}
  }
}

void MR_CALL 
mercury__mutvar__get_mutvar_2_p_0(
  MR_Word mercury__mutvar__TypeInfo_for_T_3,
  MR_Word mercury__mutvar__HeadVar__1_1,
  MR_Box * mercury__mutvar__HeadVar__2_2)
{
  {
    MR_bool mercury__mutvar__succeeded;
    MR_Word mercury__mutvar__TypeInfo_for_T_4;

{
#define MR_PROC_LABEL mercury__mutvar__get_mutvar_2_p_0

	MR_Word Ref;
	MR_Word X;

	Ref =  mercury__mutvar__HeadVar__1_1 ;
		{

    X = * (MR_Word *) Ref;


		;}
#undef MR_PROC_LABEL
	 *mercury__mutvar__HeadVar__2_2  = (MR_Box) X;
}
  }
}

void MR_CALL 
mercury__mutvar__new_mutvar0_1_p_0(
  MR_Word mercury__mutvar__TypeInfo_for_T_2,
  MR_Word * mercury__mutvar__HeadVar__1_1)
{
  {
    MR_bool mercury__mutvar__succeeded;
    MR_Word mercury__mutvar__TypeInfo_for_T_3;

{
#define MR_PROC_LABEL mercury__mutvar__new_mutvar0_1_p_0

	MR_Word Ref;

		{

    MR_offset_incr_hp_msg(Ref, MR_SIZE_SLOT_SIZE, MR_SIZE_SLOT_SIZE + 1,
        MR_ALLOC_ID, "mutvar.mutvar/1");
    MR_define_size_slot(0, Ref, 1);


		;}
#undef MR_PROC_LABEL
	 *mercury__mutvar__HeadVar__1_1  = Ref;
}
  }
}

void MR_CALL 
mercury__mutvar__new_mutvar_2_p_1(
  MR_Word mercury__mutvar__TypeInfo_for_T_6,
  MR_Box mercury__mutvar__X_3,
  MR_Word * mercury__mutvar__Ref_4)
{
  {
    MR_bool mercury__mutvar__succeeded;
    MR_Word mercury__mutvar__Ref0_5;
    MR_Word mercury__mutvar__TypeInfo_for_T_7;
    MR_Word mercury__mutvar__TypeInfo_for_T_8;

{
#define MR_PROC_LABEL mercury__mutvar__new_mutvar_2_p_1

	MR_Word Ref;

		{

    MR_offset_incr_hp_msg(Ref, MR_SIZE_SLOT_SIZE, MR_SIZE_SLOT_SIZE + 1,
        MR_ALLOC_ID, "mutvar.mutvar/1");
    MR_define_size_slot(0, Ref, 1);


		;}
#undef MR_PROC_LABEL
	 mercury__mutvar__Ref0_5  = Ref;
}
{
#define MR_PROC_LABEL mercury__mutvar__new_mutvar_2_p_1

	MR_Word Ref;
	MR_Word X;

	Ref =  mercury__mutvar__Ref0_5 ;
	X = (MR_Word) mercury__mutvar__X_3 ;
		{

    *(MR_Word *) Ref = X;


		;}
#undef MR_PROC_LABEL
}
    *mercury__mutvar__Ref_4 = mercury__mutvar__Ref0_5;
  }
}

void MR_CALL 
mercury__mutvar__new_mutvar_2_p_0(
  MR_Word mercury__mutvar__TypeInfo_for_T_6,
  MR_Box mercury__mutvar__X_3,
  MR_Word * mercury__mutvar__Ref_4)
{
  {
    MR_bool mercury__mutvar__succeeded;
    MR_Word mercury__mutvar__Ref0_5;
    MR_Word mercury__mutvar__TypeInfo_for_T_7;
    MR_Word mercury__mutvar__TypeInfo_for_T_8;

{
#define MR_PROC_LABEL mercury__mutvar__new_mutvar_2_p_0

	MR_Word Ref;

		{

    MR_offset_incr_hp_msg(Ref, MR_SIZE_SLOT_SIZE, MR_SIZE_SLOT_SIZE + 1,
        MR_ALLOC_ID, "mutvar.mutvar/1");
    MR_define_size_slot(0, Ref, 1);


		;}
#undef MR_PROC_LABEL
	 mercury__mutvar__Ref0_5  = Ref;
}
{
#define MR_PROC_LABEL mercury__mutvar__new_mutvar_2_p_0

	MR_Word Ref;
	MR_Word X;

	Ref =  mercury__mutvar__Ref0_5 ;
	X = (MR_Word) mercury__mutvar__X_3 ;
		{

    *(MR_Word *) Ref = X;


		;}
#undef MR_PROC_LABEL
}
    *mercury__mutvar__Ref_4 = mercury__mutvar__Ref0_5;
  }
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
