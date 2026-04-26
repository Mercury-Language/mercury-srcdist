/*
** Automatically generated from `random.sfc32.m'
** by the Mercury compiler,
** version rotd-2026-04-26
** configured for x86_64-pc-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** UNBOXED_INT64S=no
** PREGENERATED_DIST=yes
** HIGHLEVEL_CODE=yes
**
** END_OF_C_GRADE_INFO
*/


// :- module random.sfc32.
// :- implementation.

/*
INIT mercury__random__sfc32__init
ENDINIT
*/

#include "random.sfc32.mih"


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
#include "counter.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "exception.mih"
#include "fat_sparse_bitset.mih"
#include "fatter_sparse_bitset.mih"
#include "float.mih"
#include "int.mih"
#include "int16.mih"
#include "int32.mih"
#include "int64.mih"
#include "int8.mih"
#include "integer.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "math.mih"
#include "maybe.mih"
#include "mercury_term_lexer.mih"
#include "mercury_term_parser.mih"
#include "mutvar.mih"
#include "one_or_more.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
#include "sparse_bitset.mih"
#include "stack.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
#include "term_context.mih"
#include "term_conversion.mih"
#include "term_int.mih"
#include "term_io.mih"
#include "term_subst.mih"
#include "term_unify.mih"
#include "term_vars.mih"
#include "time.mih"
#include "tree234.mih"
#include "tree_bitset.mih"
#include "type_desc.mih"
#include "uint.mih"
#include "uint16.mih"
#include "uint32.mih"
#include "uint64.mih"
#include "uint8.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "version_array.mih"
#include "io.call_system.mih"
#include "io.environment.mih"
#include "io.error_util.mih"
#include "io.file.mih"
#include "io.primitives_read.mih"
#include "io.primitives_write.mih"
#include "io.stream_db.mih"
#include "io.stream_ops.mih"
#include "io.text_read.mih"
#include "stream.string_writer.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static const MR_EnumFunctorDesc mercury__random__sfc32__random__sfc32__enum_functor_desc_params_0_0;

static const MR_EnumFunctorDescPtr mercury__random__sfc32__random__sfc32__enum_ordinal_ordered_params_0[1];

static const MR_EnumFunctorDescPtr mercury__random__sfc32__random__sfc32__enum_name_ordered_params_0[1];

static const MR_Integer mercury__random__sfc32__random__sfc32__functor_number_map_params_0[1];

static const MR_Integer mercury__random__sfc32__random__sfc32__functor_number_map_ustate_0[1];

static const MR_FA_TypeInfo_Struct1 mercury__random__sfc32__array__ti_array_1builtin__type_ctor_info_uint32_0;

static const MR_NotagFunctorDesc mercury__random__sfc32__random__sfc32__notag_functor_desc_ustate_0;

static void MR_CALL 
mercury__random__sfc32__skip_3_p_0(
  MR_Integer N_4,
  MR_Word STATE_VARIABLE_S_0_7,
  MR_Word * STATE_VARIABLE_S_8);

static MR_bool MR_CALL 
mercury__random__sfc32____Unify____params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__random__sfc32____Compare____params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__random__sfc32____Unify____ustate_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__random__sfc32____Compare____ustate_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__random__sfc32__ClassMethod_for_random__urandom_dup____random__sfc32__ustate__arity0______random__urandom_dup_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mercury__random__sfc32__ClassMethod_for_random__urandom____random__sfc32__params__arity0__random__sfc32__ustate__arity0______random__generate_uint8_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__random__sfc32__ClassMethod_for_random__urandom____random__sfc32__params__arity0__random__sfc32__ustate__arity0______random__generate_uint16_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__random__sfc32__ClassMethod_for_random__urandom____random__sfc32__params__arity0__random__sfc32__ustate__arity0______random__generate_uint32_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__random__sfc32__ClassMethod_for_random__urandom____random__sfc32__params__arity0__random__sfc32__ustate__arity0______random__generate_uint64_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);


static /* final */ const MR_Box mercury__random__sfc32_scalar_common_1[2][2];

static /* final */ const MR_Box mercury__random__sfc32_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__random__sfc32_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__random__sfc32_scalar_common_4[1][5];




static /* final */ const MR_Box mercury__random__sfc32_scalar_common_1[2][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__array__array__type_ctor_info_array_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_uint32_0))
  },
  /* row   1 */
  {
    ((MR_Box) (MR_Word) (UINT32_C(1))),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box mercury__random__sfc32_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__random__sfc32_scalar_common_3[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__random__sfc32_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__random__sfc32_scalar_common_4[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__random__sfc32_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
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
#include "int16.mh"
#include "int32.mh"
#include "int64.mh"
#include "int8.mh"
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
#include "uint.mh"
#include "uint16.mh"
#include "uint32.mh"
#include "uint64.mh"
#include "uint8.mh"
#include "version_array.mh"
#include "io.environment.mh"
#include "io.error_util.mh"
#include "io.file.mh"
#include "io.primitives_read.mh"
#include "io.primitives_write.mh"
#include "io.stream_db.mh"
#include "io.stream_ops.mh"
#include "io.text_read.mh"


static const MR_EnumFunctorDesc mercury__random__sfc32__random__sfc32__enum_functor_desc_params_0_0 = {
  (MR_String) "params",
  INT32_C(0)
};

static const MR_EnumFunctorDescPtr mercury__random__sfc32__random__sfc32__enum_ordinal_ordered_params_0[1] = { &mercury__random__sfc32__random__sfc32__enum_functor_desc_params_0_0 };

static const MR_EnumFunctorDescPtr mercury__random__sfc32__random__sfc32__enum_name_ordered_params_0[1] = { &mercury__random__sfc32__random__sfc32__enum_functor_desc_params_0_0 };

static const MR_Integer mercury__random__sfc32__random__sfc32__functor_number_map_params_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mercury__random__sfc32__random__sfc32__type_ctor_info_params_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_DUMMY,
  ((MR_Box) (mercury__random__sfc32____Unify____params_0_0_10001)),
  ((MR_Box) (mercury__random__sfc32____Compare____params_0_0_10001)),
  (MR_String) "random.sfc32",
  (MR_String) "params",
  { mercury__random__sfc32__random__sfc32__enum_name_ordered_params_0 },
  { mercury__random__sfc32__random__sfc32__enum_ordinal_ordered_params_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__random__sfc32__random__sfc32__functor_number_map_params_0,

};

static const MR_Integer mercury__random__sfc32__random__sfc32__functor_number_map_ustate_0[1] = { (MR_Integer) 0 };

static const MR_FA_TypeInfo_Struct1 mercury__random__sfc32__array__ti_array_1builtin__type_ctor_info_uint32_0 = {
  &mercury__array__array__type_ctor_info_array_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint32_0) }
};

static const MR_NotagFunctorDesc mercury__random__sfc32__random__sfc32__notag_functor_desc_ustate_0 = {
  (MR_String) "ustate",
  (MR_PseudoTypeInfo) (&mercury__random__sfc32__array__ti_array_1builtin__type_ctor_info_uint32_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__random__sfc32__random__sfc32__type_ctor_info_ustate_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__random__sfc32____Unify____ustate_0_0_10001)),
  ((MR_Box) (mercury__random__sfc32____Compare____ustate_0_0_10001)),
  (MR_String) "random.sfc32",
  (MR_String) "ustate",
  { &mercury__random__sfc32__random__sfc32__notag_functor_desc_ustate_0 },
  { &mercury__random__sfc32__random__sfc32__notag_functor_desc_ustate_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__random__sfc32__random__sfc32__functor_number_map_ustate_0,

};

const MR_BaseTypeclassInfo base_typeclass_info_random__urandom_dup__arity1__random__sfc32__ustate__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__random__sfc32__ClassMethod_for_random__urandom_dup____random__sfc32__ustate__arity0______random__urandom_dup_3_3_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_random__urandom__arity2__random__sfc32__params__arity0__random__sfc32__ustate__arity0__[9] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) ((MR_Integer) 4)),
  ((MR_Box) (mercury__random__sfc32__ClassMethod_for_random__urandom____random__sfc32__params__arity0__random__sfc32__ustate__arity0______random__generate_uint8_4_4_p_0_10001)),
  ((MR_Box) (mercury__random__sfc32__ClassMethod_for_random__urandom____random__sfc32__params__arity0__random__sfc32__ustate__arity0______random__generate_uint16_4_4_p_0_10001)),
  ((MR_Box) (mercury__random__sfc32__ClassMethod_for_random__urandom____random__sfc32__params__arity0__random__sfc32__ustate__arity0______random__generate_uint32_4_4_p_0_10001)),
  ((MR_Box) (mercury__random__sfc32__ClassMethod_for_random__urandom____random__sfc32__params__arity0__random__sfc32__ustate__arity0______random__generate_uint64_4_4_p_0_10001))
};

void MR_CALL 
mercury__random__sfc32__ClassMethod_for_random__urandom_dup____random__sfc32__ustate__arity0______random__urandom_dup_3_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  MR_ArrayPtr A_4 = (MR_ArrayPtr) (HeadVar__1_1);
  MR_Word Sc_5;
  MR_ArrayPtr Var_6;
  MR_ArrayPtr conv0_Array;

{
#define MR_PROC_LABEL mercury__random__sfc32__ClassMethod_for_random__urandom_dup____random__sfc32__ustate__arity0______random__urandom_dup_3_3_p_0

	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Array0 = (MR_ArrayPtr) (MR_ArrayPtr) (A_4) ;
		{

    ML_alloc_array(Array, Array0->size + 1, MR_ALLOC_ID);
    ML_copy_array(Array, (MR_ConstArrayPtr) Array0);


		;}
#undef MR_PROC_LABEL
	conv0_Array  = (MR_Box) Array;
  Var_6 = (MR_ArrayPtr) (conv0_Array);
}
  Sc_5 = (MR_Word) (Var_6);
  *HeadVar__2_2 = HeadVar__1_1;
  *HeadVar__3_3 = Sc_5;
}

void MR_CALL 
mercury__random__sfc32__ClassMethod_for_random__urandom____random__sfc32__params__arity0__random__sfc32__ustate__arity0______random__generate_uint64_4_4_p_0(
  uint64_t * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  uint32_t A0_5;
  uint32_t B0_6;
  uint64_t A_7;
  uint64_t B_8;
  MR_Word STATE_VARIABLE_S_1_9;
  uint64_t Var_10;

  mercury__random__sfc32__generate_uint32_3_p_0(&A0_5, HeadVar__3_3, &STATE_VARIABLE_S_1_9);
  mercury__random__sfc32__generate_uint32_3_p_0(&B0_6, STATE_VARIABLE_S_1_9, HeadVar__4_4);
{
#define MR_PROC_LABEL mercury__random__sfc32__ClassMethod_for_random__urandom____random__sfc32__params__arity0__random__sfc32__ustate__arity0______random__generate_uint64_4_4_p_0

	uint32_t U32;
	uint64_t U64;

	U32 = A0_5 ;
		{

    U64 = (uint64_t) U32;


		;}
#undef MR_PROC_LABEL
	A_7  = U64;
}
{
#define MR_PROC_LABEL mercury__random__sfc32__ClassMethod_for_random__urandom____random__sfc32__params__arity0__random__sfc32__ustate__arity0______random__generate_uint64_4_4_p_0

	uint32_t U32;
	uint64_t U64;

	U32 = B0_6 ;
		{

    U64 = (uint64_t) U32;


		;}
#undef MR_PROC_LABEL
	B_8  = U64;
}
  Var_10 = mercury__uint64__f_60_60_2_f_0(B_8, (MR_Integer) 32);
  *HeadVar__2_2 = (A_7 + Var_10);
}

void MR_CALL 
mercury__random__sfc32__ClassMethod_for_random__urandom____random__sfc32__params__arity0__random__sfc32__ustate__arity0______random__generate_uint32_4_4_p_0(
  uint32_t * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  mercury__random__sfc32__generate_uint32_3_p_0(HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
}

void MR_CALL 
mercury__random__sfc32__ClassMethod_for_random__urandom____random__sfc32__params__arity0__random__sfc32__ustate__arity0______random__generate_uint16_4_4_p_0(
  uint16_t * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  uint32_t N0_5;
  MR_Integer N1_6;
  uint32_t Var_7;

  mercury__random__sfc32__generate_uint32_3_p_0(&N0_5, HeadVar__3_3, HeadVar__4_4);
  Var_7 = mercury__uint32__f_62_62_2_f_0(N0_5, (MR_Integer) 16);
{
#define MR_PROC_LABEL mercury__random__sfc32__ClassMethod_for_random__urandom____random__sfc32__params__arity0__random__sfc32__ustate__arity0______random__generate_uint16_4_4_p_0

	uint32_t U32;
	MR_Integer I;

	U32 = Var_7 ;
		{

    I = (MR_Integer) U32;


		;}
#undef MR_PROC_LABEL
	N1_6  = I;
}
{
#define MR_PROC_LABEL mercury__random__sfc32__ClassMethod_for_random__urandom____random__sfc32__params__arity0__random__sfc32__ustate__arity0______random__generate_uint16_4_4_p_0

	MR_Integer I;
	uint16_t U16;

	I = N1_6 ;
		{

    U16 = (uint16_t) I;


		;}
#undef MR_PROC_LABEL
	*HeadVar__2_2  = U16;
}
}

void MR_CALL 
mercury__random__sfc32__ClassMethod_for_random__urandom____random__sfc32__params__arity0__random__sfc32__ustate__arity0______random__generate_uint8_4_4_p_0(
  uint8_t * HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  uint32_t N0_5;
  uint32_t Var_6;

  mercury__random__sfc32__generate_uint32_3_p_0(&N0_5, HeadVar__3_3, HeadVar__4_4);
  Var_6 = mercury__uint32__f_62_62_2_f_0(N0_5, (MR_Integer) 24);
{
#define MR_PROC_LABEL mercury__random__sfc32__ClassMethod_for_random__urandom____random__sfc32__params__arity0__random__sfc32__ustate__arity0______random__generate_uint8_4_4_p_0

	uint32_t U32;
	uint8_t U8;

	U32 = Var_6 ;
		{

    U8 = (uint8_t) U32;


		;}
#undef MR_PROC_LABEL
	*HeadVar__2_2  = U8;
}
}

void MR_CALL 
mercury__random__sfc32____Compare____ustate_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_ArrayPtr ArgX1_4 = (MR_ArrayPtr) (HeadVar__2_2);
    MR_ArrayPtr ArgY1_5 = (MR_ArrayPtr) (HeadVar__3_3);

    mercury__builtin__compare_3_p_0((MR_Word) (&mercury__random__sfc32_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
  }
}

MR_bool MR_CALL 
mercury__random__sfc32____Unify____ustate_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_ArrayPtr ArgX1_3 = (MR_ArrayPtr) (HeadVar__1_1);
    MR_ArrayPtr ArgY1_4 = (MR_ArrayPtr) (HeadVar__2_2);

    succeeded = mercury__array____Unify____array_1_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), (MR_ArrayPtr) (ArgX1_3), (MR_ArrayPtr) (ArgY1_4));
  }
  return succeeded;
}

void MR_CALL 
mercury__random__sfc32____Compare____params_0_0(
  MR_Word * HeadVar__1_1)
{
  mercury__random__sfc32__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_114_97_110_100_111_109_95_95_115_102_99_51_50_95_95_112_97_114_97_109_115_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(HeadVar__1_1);
}

void MR_CALL 
mercury__random__sfc32__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_95_95_67_111_109_112_97_114_101_95_95_95_114_97_110_100_111_109_95_95_115_102_99_51_50_95_95_112_97_114_97_109_115_95_48_95_95_91_50_44_32_51_93_95_48_3_p_0(
  MR_Word * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_Integer) 0;
}

MR_bool MR_CALL 
mercury__random__sfc32____Unify____params_0_0(void)
{
  return MR_TRUE;
}

void MR_CALL 
mercury__random__sfc32__generate_uint64_3_p_0(
  uint64_t * N_4,
  MR_Word STATE_VARIABLE_S_0_10,
  MR_Word * STATE_VARIABLE_S_11)
{
  uint32_t A0_6;
  uint32_t B0_7;
  uint64_t A_8;
  uint64_t B_9;
  MR_Word STATE_VARIABLE_S_1_12;
  uint64_t Var_14;

  mercury__random__sfc32__generate_uint32_3_p_0(&A0_6, STATE_VARIABLE_S_0_10, &STATE_VARIABLE_S_1_12);
  mercury__random__sfc32__generate_uint32_3_p_0(&B0_7, STATE_VARIABLE_S_1_12, STATE_VARIABLE_S_11);
{
#define MR_PROC_LABEL mercury__random__sfc32__generate_uint64_3_p_0

	uint32_t U32;
	uint64_t U64;

	U32 = A0_6 ;
		{

    U64 = (uint64_t) U32;


		;}
#undef MR_PROC_LABEL
	A_8  = U64;
}
{
#define MR_PROC_LABEL mercury__random__sfc32__generate_uint64_3_p_0

	uint32_t U32;
	uint64_t U64;

	U32 = B0_7 ;
		{

    U64 = (uint64_t) U32;


		;}
#undef MR_PROC_LABEL
	B_9  = U64;
}
  Var_14 = mercury__uint64__f_60_60_2_f_0(B_9, (MR_Integer) 32);
  *N_4 = (A_8 + Var_14);
}

void MR_CALL 
mercury__random__sfc32__generate_uint16_3_p_0(
  uint16_t * N_4,
  MR_Word STATE_VARIABLE_S_0_8,
  MR_Word * STATE_VARIABLE_S_9)
{
  uint32_t N0_6;
  MR_Integer N1_7;
  uint32_t Var_11;

  mercury__random__sfc32__generate_uint32_3_p_0(&N0_6, STATE_VARIABLE_S_0_8, STATE_VARIABLE_S_9);
  Var_11 = mercury__uint32__f_62_62_2_f_0(N0_6, (MR_Integer) 16);
{
#define MR_PROC_LABEL mercury__random__sfc32__generate_uint16_3_p_0

	uint32_t U32;
	MR_Integer I;

	U32 = Var_11 ;
		{

    I = (MR_Integer) U32;


		;}
#undef MR_PROC_LABEL
	N1_7  = I;
}
{
#define MR_PROC_LABEL mercury__random__sfc32__generate_uint16_3_p_0

	MR_Integer I;
	uint16_t U16;

	I = N1_7 ;
		{

    U16 = (uint16_t) I;


		;}
#undef MR_PROC_LABEL
	*N_4  = U16;
}
}

void MR_CALL 
mercury__random__sfc32__generate_uint8_3_p_0(
  uint8_t * N_4,
  MR_Word STATE_VARIABLE_S_0_7,
  MR_Word * STATE_VARIABLE_S_8)
{
  uint32_t N0_6;
  uint32_t Var_10;

  mercury__random__sfc32__generate_uint32_3_p_0(&N0_6, STATE_VARIABLE_S_0_7, STATE_VARIABLE_S_8);
  Var_10 = mercury__uint32__f_62_62_2_f_0(N0_6, (MR_Integer) 24);
{
#define MR_PROC_LABEL mercury__random__sfc32__generate_uint8_3_p_0

	uint32_t U32;
	uint8_t U8;

	U32 = Var_10 ;
		{

    U8 = (uint8_t) U32;


		;}
#undef MR_PROC_LABEL
	*N_4  = U8;
}
}

void MR_CALL 
mercury__random__sfc32__urandom_dup_3_p_0(
  MR_Word S_4,
  MR_Word * S1_5,
  MR_Word * S2_6)
{
  MR_ArrayPtr A_7 = (MR_ArrayPtr) (S_4);
  MR_Word Sc_8;
  MR_ArrayPtr Var_9;
  MR_ArrayPtr conv0_Array;

{
#define MR_PROC_LABEL mercury__random__sfc32__urandom_dup_3_p_0

	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Array0 = (MR_ArrayPtr) (MR_ArrayPtr) (A_7) ;
		{

    ML_alloc_array(Array, Array0->size + 1, MR_ALLOC_ID);
    ML_copy_array(Array, (MR_ConstArrayPtr) Array0);


		;}
#undef MR_PROC_LABEL
	conv0_Array  = (MR_Box) Array;
  Var_9 = (MR_ArrayPtr) (conv0_Array);
}
  Sc_8 = (MR_Word) (Var_9);
  *S1_5 = S_4;
  *S2_6 = Sc_8;
}

void MR_CALL 
mercury__random__sfc32__generate_uint64_4_p_0(
  uint64_t * N_6,
  MR_Word STATE_VARIABLE_S_0_8,
  MR_Word * STATE_VARIABLE_S_9)
{
  mercury__random__sfc32__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_117_105_110_116_54_52_95_95_91_49_93_95_48_4_p_0(N_6, STATE_VARIABLE_S_0_8, STATE_VARIABLE_S_9);
}

void MR_CALL 
mercury__random__sfc32__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_117_105_110_116_54_52_95_95_91_49_93_95_48_4_p_0(
  uint64_t * N_6,
  MR_Word STATE_VARIABLE_S_0_8,
  MR_Word * STATE_VARIABLE_S_9)
{
  uint32_t A0_10;
  uint32_t B0_11;
  uint64_t A_12;
  uint64_t B_13;
  MR_Word STATE_VARIABLE_S_1_14;
  uint64_t Var_15;

  mercury__random__sfc32__generate_uint32_3_p_0(&A0_10, STATE_VARIABLE_S_0_8, &STATE_VARIABLE_S_1_14);
  mercury__random__sfc32__generate_uint32_3_p_0(&B0_11, STATE_VARIABLE_S_1_14, STATE_VARIABLE_S_9);
{
#define MR_PROC_LABEL mercury__random__sfc32__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_117_105_110_116_54_52_95_95_91_49_93_95_48_4_p_0

	uint32_t U32;
	uint64_t U64;

	U32 = A0_10 ;
		{

    U64 = (uint64_t) U32;


		;}
#undef MR_PROC_LABEL
	A_12  = U64;
}
{
#define MR_PROC_LABEL mercury__random__sfc32__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_117_105_110_116_54_52_95_95_91_49_93_95_48_4_p_0

	uint32_t U32;
	uint64_t U64;

	U32 = B0_11 ;
		{

    U64 = (uint64_t) U32;


		;}
#undef MR_PROC_LABEL
	B_13  = U64;
}
  Var_15 = mercury__uint64__f_60_60_2_f_0(B_13, (MR_Integer) 32);
  *N_6 = (A_12 + Var_15);
}

void MR_CALL 
mercury__random__sfc32__generate_uint32_4_p_0(
  uint32_t * N_6,
  MR_Word STATE_VARIABLE_S_0_8,
  MR_Word * STATE_VARIABLE_S_9)
{
  mercury__random__sfc32__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_117_105_110_116_51_50_95_95_91_49_93_95_48_4_p_0(N_6, STATE_VARIABLE_S_0_8, STATE_VARIABLE_S_9);
}

void MR_CALL 
mercury__random__sfc32__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_117_105_110_116_51_50_95_95_91_49_93_95_48_4_p_0(
  uint32_t * N_6,
  MR_Word STATE_VARIABLE_S_0_8,
  MR_Word * STATE_VARIABLE_S_9)
{
  mercury__random__sfc32__generate_uint32_3_p_0(N_6, STATE_VARIABLE_S_0_8, STATE_VARIABLE_S_9);
}

void MR_CALL 
mercury__random__sfc32__generate_uint16_4_p_0(
  uint16_t * N_6,
  MR_Word STATE_VARIABLE_S_0_8,
  MR_Word * STATE_VARIABLE_S_9)
{
  mercury__random__sfc32__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_117_105_110_116_49_54_95_95_91_49_93_95_48_4_p_0(N_6, STATE_VARIABLE_S_0_8, STATE_VARIABLE_S_9);
}

void MR_CALL 
mercury__random__sfc32__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_117_105_110_116_49_54_95_95_91_49_93_95_48_4_p_0(
  uint16_t * N_6,
  MR_Word STATE_VARIABLE_S_0_8,
  MR_Word * STATE_VARIABLE_S_9)
{
  uint32_t N0_10;
  MR_Integer N1_11;
  uint32_t Var_12;

  mercury__random__sfc32__generate_uint32_3_p_0(&N0_10, STATE_VARIABLE_S_0_8, STATE_VARIABLE_S_9);
  Var_12 = mercury__uint32__f_62_62_2_f_0(N0_10, (MR_Integer) 16);
{
#define MR_PROC_LABEL mercury__random__sfc32__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_117_105_110_116_49_54_95_95_91_49_93_95_48_4_p_0

	uint32_t U32;
	MR_Integer I;

	U32 = Var_12 ;
		{

    I = (MR_Integer) U32;


		;}
#undef MR_PROC_LABEL
	N1_11  = I;
}
{
#define MR_PROC_LABEL mercury__random__sfc32__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_117_105_110_116_49_54_95_95_91_49_93_95_48_4_p_0

	MR_Integer I;
	uint16_t U16;

	I = N1_11 ;
		{

    U16 = (uint16_t) I;


		;}
#undef MR_PROC_LABEL
	*N_6  = U16;
}
}

void MR_CALL 
mercury__random__sfc32__generate_uint8_4_p_0(
  uint8_t * N_6,
  MR_Word STATE_VARIABLE_S_0_8,
  MR_Word * STATE_VARIABLE_S_9)
{
  mercury__random__sfc32__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_117_105_110_116_56_95_95_91_49_93_95_48_4_p_0(N_6, STATE_VARIABLE_S_0_8, STATE_VARIABLE_S_9);
}

void MR_CALL 
mercury__random__sfc32__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_117_105_110_116_56_95_95_91_49_93_95_48_4_p_0(
  uint8_t * N_6,
  MR_Word STATE_VARIABLE_S_0_8,
  MR_Word * STATE_VARIABLE_S_9)
{
  uint32_t N0_10;
  uint32_t Var_11;

  mercury__random__sfc32__generate_uint32_3_p_0(&N0_10, STATE_VARIABLE_S_0_8, STATE_VARIABLE_S_9);
  Var_11 = mercury__uint32__f_62_62_2_f_0(N0_10, (MR_Integer) 24);
{
#define MR_PROC_LABEL mercury__random__sfc32__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_103_101_110_101_114_97_116_101_95_117_105_110_116_56_95_95_91_49_93_95_48_4_p_0

	uint32_t U32;
	uint8_t U8;

	U32 = Var_11 ;
		{

    U8 = (uint8_t) U32;


		;}
#undef MR_PROC_LABEL
	*N_6  = U8;
}
}

void MR_CALL 
mercury__random__sfc32__init_2_p_0(
  MR_Word * S_4)
{
  mercury__random__sfc32__seed_5_p_0(UINT32_C(0), UINT32_C(4050430139), UINT32_C(547581741), S_4);
}

void MR_CALL 
mercury__random__sfc32__seed_5_p_0(
  uint32_t A_6,
  uint32_t B_7,
  uint32_t C_8,
  MR_Word * S_9)
{
  MR_ArrayPtr Seed0_11;
  MR_Word S0_12;
  MR_Word Var_13;
  MR_Word Var_14;
  MR_Word Var_15;
  MR_Word Var_18;
  MR_ArrayPtr conv0_Seed0_11;

  {
    Var_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_15, 0) = ((MR_Box) (MR_Word) (C_8));
    MR_hl_field(1, Var_15, 1) = ((MR_Box) (MR_mkword(1, &mercury__random__sfc32_scalar_common_1[1])));
  }
  {
    Var_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_14, 0) = ((MR_Box) (MR_Word) (B_7));
    MR_hl_field(1, Var_14, 1) = ((MR_Box) (Var_15));
  }
  {
    Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, Var_13, 0) = ((MR_Box) (MR_Word) (A_6));
    MR_hl_field(1, Var_13, 1) = ((MR_Box) (Var_14));
  }
  mercury__array__from_list_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_uint32_0), Var_13, &conv0_Seed0_11);
  Seed0_11 = (MR_ArrayPtr) (conv0_Seed0_11);
  Var_18 = (MR_Word) (Seed0_11);
  S0_12 = Var_18;
  mercury__random__sfc32__skip_3_p_0((MR_Integer) 15, S0_12, S_9);
}

static void MR_CALL 
mercury__random__sfc32__skip_3_p_0(
  MR_Integer N_4,
  MR_Word STATE_VARIABLE_S_0_7,
  MR_Word * STATE_VARIABLE_S_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (N_4 > (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_S_1_10;
      MR_Integer Var_11;
      uint32_t Var_6;
      MR_Integer next_value_of_N_4;
      MR_Word next_value_of_STATE_VARIABLE_S_0_7;

      mercury__random__sfc32__generate_uint32_3_p_0(&Var_6, STATE_VARIABLE_S_0_7, &STATE_VARIABLE_S_1_10);
      Var_11 = (MR_Integer) ((MR_Unsigned) N_4 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_N_4 = Var_11;
      next_value_of_STATE_VARIABLE_S_0_7 = STATE_VARIABLE_S_1_10;
      N_4 = next_value_of_N_4;
      STATE_VARIABLE_S_0_7 = next_value_of_STATE_VARIABLE_S_0_7;
      continue;
    }
    else
      *STATE_VARIABLE_S_8 = STATE_VARIABLE_S_0_7;
    break;
  }
}

void MR_CALL 
mercury__random__sfc32__generate_uint32_3_p_0(
  uint32_t * N_4,
  MR_Word RS0_5,
  MR_Word * RS_6)
{
  MR_ArrayPtr S0_7 = (MR_ArrayPtr) (RS0_5);
  uint32_t A0_8;
  uint32_t B0_9;
  uint32_t C0_10;
  uint32_t Counter0_11;
  uint32_t A_12;
  uint32_t B_13;
  uint32_t C_14;
  uint32_t Counter_15;
  MR_ArrayPtr S1_16;
  MR_ArrayPtr S2_17;
  MR_ArrayPtr S3_18;
  MR_ArrayPtr S_19;
  uint32_t Var_24;
  uint32_t Var_25;
  uint32_t Var_27;
  uint32_t Var_29;
  uint32_t Var_30;
  uint32_t Var_32;
  MR_Word Var_39;
  MR_Box conv0_Item;
  MR_Box conv1_Item;
  MR_Box conv2_Item;
  MR_Box conv3_Item;
  MR_ArrayPtr conv4_Array;
  MR_ArrayPtr conv5_Array;
  MR_ArrayPtr conv6_Array;
  MR_ArrayPtr conv7_Array;

{
#define MR_PROC_LABEL mercury__random__sfc32__generate_uint32_3_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr) (MR_ArrayPtr) (S0_7) ;
	Index = (MR_Integer) 0 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	conv0_Item  = (MR_Box) Item;
  A0_8 = ((uint32_t) (MR_Word) conv0_Item);
}
{
#define MR_PROC_LABEL mercury__random__sfc32__generate_uint32_3_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr) (MR_ArrayPtr) (S0_7) ;
	Index = (MR_Integer) 1 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	conv1_Item  = (MR_Box) Item;
  B0_9 = ((uint32_t) (MR_Word) conv1_Item);
}
{
#define MR_PROC_LABEL mercury__random__sfc32__generate_uint32_3_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr) (MR_ArrayPtr) (S0_7) ;
	Index = (MR_Integer) 2 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	conv2_Item  = (MR_Box) Item;
  C0_10 = ((uint32_t) (MR_Word) conv2_Item);
}
{
#define MR_PROC_LABEL mercury__random__sfc32__generate_uint32_3_p_0

	MR_ArrayPtr Array;
	MR_Integer Index;
	MR_Word Item;

	Array = (MR_ArrayPtr) (MR_ArrayPtr) (S0_7) ;
	Index = (MR_Integer) 3 ;
		{

    Item = Array->elements[Index];


		;}
#undef MR_PROC_LABEL
	conv3_Item  = (MR_Box) Item;
  Counter0_11 = ((uint32_t) (MR_Word) conv3_Item);
}
  Var_24 = (A0_8 + B0_9);
  *N_4 = (Var_24 + Counter0_11);
  Var_25 = mercury__uint32__f_62_62_2_f_0(B0_9, (MR_Integer) 9);
  A_12 = (B0_9 ^ Var_25);
  Var_27 = mercury__uint32__f_60_60_2_f_0(C0_10, (MR_Integer) 3);
  B_13 = (C0_10 + Var_27);
  Var_30 = mercury__uint32__f_60_60_2_f_0(C0_10, (MR_Integer) 21);
  Var_32 = mercury__uint32__f_62_62_2_f_0(C0_10, (MR_Integer) 11);
  Var_29 = (Var_30 | Var_32);
  C_14 = (Var_29 + *N_4);
  Counter_15 = (Counter0_11 + UINT32_C(1));
{
#define MR_PROC_LABEL mercury__random__sfc32__generate_uint32_3_p_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index = (MR_Integer) 0 ;
	Item = (MR_Word) ((MR_Box) (MR_Word) (A_12)) ;
	Array0 = (MR_ArrayPtr) (MR_ArrayPtr) (S0_7) ;
		{

    Array0->elements[Index] = Item; // destructive update!
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	conv4_Array  = (MR_Box) Array;
  S1_16 = (MR_ArrayPtr) (conv4_Array);
}
{
#define MR_PROC_LABEL mercury__random__sfc32__generate_uint32_3_p_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index = (MR_Integer) 1 ;
	Item = (MR_Word) ((MR_Box) (MR_Word) (B_13)) ;
	Array0 = (MR_ArrayPtr) (MR_ArrayPtr) (S1_16) ;
		{

    Array0->elements[Index] = Item; // destructive update!
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	conv5_Array  = (MR_Box) Array;
  S2_17 = (MR_ArrayPtr) (conv5_Array);
}
{
#define MR_PROC_LABEL mercury__random__sfc32__generate_uint32_3_p_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index = (MR_Integer) 2 ;
	Item = (MR_Word) ((MR_Box) (MR_Word) (C_14)) ;
	Array0 = (MR_ArrayPtr) (MR_ArrayPtr) (S2_17) ;
		{

    Array0->elements[Index] = Item; // destructive update!
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	conv6_Array  = (MR_Box) Array;
  S3_18 = (MR_ArrayPtr) (conv6_Array);
}
{
#define MR_PROC_LABEL mercury__random__sfc32__generate_uint32_3_p_0

	MR_Integer Index;
	MR_Word Item;
	MR_ArrayPtr Array0;
	MR_ArrayPtr Array;

	Index = (MR_Integer) 3 ;
	Item = (MR_Word) ((MR_Box) (MR_Word) (Counter_15)) ;
	Array0 = (MR_ArrayPtr) (MR_ArrayPtr) (S3_18) ;
		{

    Array0->elements[Index] = Item; // destructive update!
    Array = Array0;


		;}
#undef MR_PROC_LABEL
	conv7_Array  = (MR_Box) Array;
  S_19 = (MR_ArrayPtr) (conv7_Array);
}
  Var_39 = (MR_Word) (S_19);
  *RS_6 = Var_39;
}

static MR_bool MR_CALL 
mercury__random__sfc32____Unify____params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__random__sfc32____Unify____params_0_0();
  return succeeded;
}

static void MR_CALL 
mercury__random__sfc32____Compare____params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__random__sfc32____Compare____params_0_0(&conv0_HeadVar__1_1);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__random__sfc32____Unify____ustate_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__random__sfc32____Unify____ustate_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__random__sfc32____Compare____ustate_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__random__sfc32____Compare____ustate_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static void MR_CALL 
mercury__random__sfc32__ClassMethod_for_random__urandom_dup____random__sfc32__ustate__arity0______random__urandom_dup_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_HeadVar__2_2;
  MR_Word conv0_HeadVar__3_3;

  mercury__random__sfc32__ClassMethod_for_random__urandom_dup____random__sfc32__ustate__arity0______random__urandom_dup_3_3_p_0(((MR_Word) (wrapper_arg_1)), &conv1_HeadVar__2_2, &conv0_HeadVar__3_3);
  *wrapper_arg_2 = ((MR_Box) (conv1_HeadVar__2_2));
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

static void MR_CALL 
mercury__random__sfc32__ClassMethod_for_random__urandom____random__sfc32__params__arity0__random__sfc32__ustate__arity0______random__generate_uint8_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  uint8_t conv1_HeadVar__2_2;
  MR_Word conv0_HeadVar__4_4;

  mercury__random__sfc32__ClassMethod_for_random__urandom____random__sfc32__params__arity0__random__sfc32__ustate__arity0______random__generate_uint8_4_4_p_0(&conv1_HeadVar__2_2, ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_2 = ((MR_Box) (MR_Word) (conv1_HeadVar__2_2));
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
mercury__random__sfc32__ClassMethod_for_random__urandom____random__sfc32__params__arity0__random__sfc32__ustate__arity0______random__generate_uint16_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  uint16_t conv1_HeadVar__2_2;
  MR_Word conv0_HeadVar__4_4;

  mercury__random__sfc32__ClassMethod_for_random__urandom____random__sfc32__params__arity0__random__sfc32__ustate__arity0______random__generate_uint16_4_4_p_0(&conv1_HeadVar__2_2, ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_2 = ((MR_Box) (MR_Word) (conv1_HeadVar__2_2));
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
mercury__random__sfc32__ClassMethod_for_random__urandom____random__sfc32__params__arity0__random__sfc32__ustate__arity0______random__generate_uint32_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  uint32_t conv1_HeadVar__2_2;
  MR_Word conv0_HeadVar__4_4;

  mercury__random__sfc32__ClassMethod_for_random__urandom____random__sfc32__params__arity0__random__sfc32__ustate__arity0______random__generate_uint32_4_4_p_0(&conv1_HeadVar__2_2, ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_2 = ((MR_Box) (MR_Word) (conv1_HeadVar__2_2));
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

static void MR_CALL 
mercury__random__sfc32__ClassMethod_for_random__urandom____random__sfc32__params__arity0__random__sfc32__ustate__arity0______random__generate_uint64_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;
  uint64_t conv1_HeadVar__2_2;
  MR_Word conv0_HeadVar__4_4;

  mercury__random__sfc32__ClassMethod_for_random__urandom____random__sfc32__params__arity0__random__sfc32__ustate__arity0______random__generate_uint64_4_4_p_0(&conv1_HeadVar__2_2, ((MR_Word) (wrapper_arg_3)), &conv0_HeadVar__4_4);
  *wrapper_arg_2 = MR_box_uint64(conv1_HeadVar__2_2);
  *wrapper_arg_4 = ((MR_Box) (conv0_HeadVar__4_4));
}

void mercury__random__sfc32__init(void)
{
}

void mercury__random__sfc32__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&mercury__random__sfc32__random__sfc32__type_ctor_info_params_0);
  MR_register_type_ctor_info(&mercury__random__sfc32__random__sfc32__type_ctor_info_ustate_0);
}

void mercury__random__sfc32__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__random__sfc32__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module random.sfc32.
