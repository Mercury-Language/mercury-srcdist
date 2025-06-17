/*
** Automatically generated from `random.sfc16.m'
** by the Mercury compiler,
** version rotd-2025-06-17
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


// :- module random.sfc16.
// :- implementation.

/*
INIT mercury__random__sfc16__init
ENDINIT
*/

#include "random.sfc16.mih"


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




static const MR_Integer mercury__random__sfc16__random__sfc16__functor_number_map_random_0[1];

static const MR_NotagFunctorDesc mercury__random__sfc16__random__sfc16__notag_functor_desc_random_0;

static MR_bool MR_CALL 
mercury__random__sfc16____Unify____random_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__random__sfc16____Compare____random_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__random__sfc16__ClassMethod_for_random__random____random__sfc16__random__arity0______random__generate_uint8_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mercury__random__sfc16__ClassMethod_for_random__random____random__sfc16__random__arity0______random__generate_uint16_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mercury__random__sfc16__ClassMethod_for_random__random____random__sfc16__random__arity0______random__generate_uint32_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mercury__random__sfc16__ClassMethod_for_random__random____random__sfc16__random__arity0______random__generate_uint64_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);


static /* final */ const MR_Box mercury__random__sfc16_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__random__sfc16_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__random__sfc16_scalar_common_3[1][5];

static /* final */ const uint64_t mercury__random__sfc16_scalar_common_4[1];




static /* final */ const MR_Box mercury__random__sfc16_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__random__sfc16_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__random__sfc16_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__random__sfc16_scalar_common_3[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__random__sfc16_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const uint64_t mercury__random__sfc16_scalar_common_4[1] = {
  /* row   0 */
  UINT64_C(6937889935873095454),
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


static const MR_Integer mercury__random__sfc16__random__sfc16__functor_number_map_random_0[1] = { (MR_Integer) 0 };

static const MR_NotagFunctorDesc mercury__random__sfc16__random__sfc16__notag_functor_desc_random_0 = {
  (MR_String) "random",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_uint64_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct mercury__random__sfc16__random__sfc16__type_ctor_info_random_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (mercury__random__sfc16____Unify____random_0_0_10001)),
  ((MR_Box) (mercury__random__sfc16____Compare____random_0_0_10001)),
  (MR_String) "random.sfc16",
  (MR_String) "random",
  { &mercury__random__sfc16__random__sfc16__notag_functor_desc_random_0 },
  { &mercury__random__sfc16__random__sfc16__notag_functor_desc_random_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__random__sfc16__random__sfc16__functor_number_map_random_0,

};

const MR_BaseTypeclassInfo base_typeclass_info_random__random__arity1__random__sfc16__random__arity0__[9] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 4)),
  ((MR_Box) (mercury__random__sfc16__ClassMethod_for_random__random____random__sfc16__random__arity0______random__generate_uint8_3_3_p_0_10001)),
  ((MR_Box) (mercury__random__sfc16__ClassMethod_for_random__random____random__sfc16__random__arity0______random__generate_uint16_3_3_p_0_10001)),
  ((MR_Box) (mercury__random__sfc16__ClassMethod_for_random__random____random__sfc16__random__arity0______random__generate_uint32_3_3_p_0_10001)),
  ((MR_Box) (mercury__random__sfc16__ClassMethod_for_random__random____random__sfc16__random__arity0______random__generate_uint64_3_3_p_0_10001))
};

void MR_CALL 
mercury__random__sfc16__ClassMethod_for_random__random____random__sfc16__random__arity0______random__generate_uint64_3_3_p_0(
  uint64_t * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  uint16_t A_4;
  uint16_t B_5;
  uint16_t C_6;
  uint16_t D_7;
  MR_Word STATE_VARIABLE_R_1_8;
  MR_Word STATE_VARIABLE_R_2_9;
  MR_Word STATE_VARIABLE_R_3_10;

  mercury__random__sfc16__generate_uint16_3_p_0(&A_4, HeadVar__2_2, &STATE_VARIABLE_R_1_8);
  mercury__random__sfc16__generate_uint16_3_p_0(&B_5, STATE_VARIABLE_R_1_8, &STATE_VARIABLE_R_2_9);
  mercury__random__sfc16__generate_uint16_3_p_0(&C_6, STATE_VARIABLE_R_2_9, &STATE_VARIABLE_R_3_10);
  mercury__random__sfc16__generate_uint16_3_p_0(&D_7, STATE_VARIABLE_R_3_10, HeadVar__3_3);
  *HeadVar__1_1 = mercury__random__sfc16__pack_uint64_4_f_0(A_4, B_5, C_6, D_7);
}

void MR_CALL 
mercury__random__sfc16__ClassMethod_for_random__random____random__sfc16__random__arity0______random__generate_uint32_3_3_p_0(
  uint32_t * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  mercury__random__sfc16__generate_uint32_3_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3);
}

void MR_CALL 
mercury__random__sfc16__ClassMethod_for_random__random____random__sfc16__random__arity0______random__generate_uint16_3_3_p_0(
  uint16_t * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  mercury__random__sfc16__generate_uint16_3_p_0(HeadVar__1_1, HeadVar__2_2, HeadVar__3_3);
}

void MR_CALL 
mercury__random__sfc16__ClassMethod_for_random__random____random__sfc16__random__arity0______random__generate_uint8_3_3_p_0(
  uint8_t * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  uint16_t N0_4;
  MR_Integer N1_5;
  uint16_t Var_6;

  mercury__random__sfc16__generate_uint16_3_p_0(&N0_4, HeadVar__2_2, HeadVar__3_3);
  Var_6 = mercury__uint16__f_62_62_2_f_0(N0_4, (MR_Integer) 8);
{
#define MR_PROC_LABEL mercury__random__sfc16__ClassMethod_for_random__random____random__sfc16__random__arity0______random__generate_uint8_3_3_p_0

	uint16_t U16;
	MR_Integer I;

	U16 = Var_6 ;
		{

    I = U16;


		;}
#undef MR_PROC_LABEL
	N1_5  = I;
}
{
#define MR_PROC_LABEL mercury__random__sfc16__ClassMethod_for_random__random____random__sfc16__random__arity0______random__generate_uint8_3_3_p_0

	MR_Integer I;
	uint8_t U8;

	I = N1_5 ;
		{

    U8 = (uint8_t) I;


		;}
#undef MR_PROC_LABEL
	*HeadVar__1_1  = U8;
}
}

void MR_CALL 
mercury__random__sfc16____Compare____random_0_0(
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
    uint64_t ArgX1_4 = MR_unbox_uint64((MR_Box) (HeadVar__2_2));
    uint64_t ArgY1_5 = MR_unbox_uint64((MR_Box) (HeadVar__3_3));

    succeeded = (ArgX1_4 < ArgY1_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (ArgX1_4 == ArgY1_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__random__sfc16____Unify____random_0_0(
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
    uint64_t ArgX1_3 = MR_unbox_uint64((MR_Box) (HeadVar__1_1));
    uint64_t ArgY1_4 = MR_unbox_uint64((MR_Box) (HeadVar__2_2));

    succeeded = (ArgX1_3 == ArgY1_4);
  }
  return succeeded;
}

void MR_CALL 
mercury__random__sfc16__generate_uint64_3_p_0(
  uint64_t * N_4,
  MR_Word STATE_VARIABLE_R_0_10,
  MR_Word * STATE_VARIABLE_R_11)
{
  uint16_t A_6;
  uint16_t B_7;
  uint16_t C_8;
  uint16_t D_9;
  MR_Word STATE_VARIABLE_R_1_12;
  MR_Word STATE_VARIABLE_R_2_13;
  MR_Word STATE_VARIABLE_R_3_14;

  mercury__random__sfc16__generate_uint16_3_p_0(&A_6, STATE_VARIABLE_R_0_10, &STATE_VARIABLE_R_1_12);
  mercury__random__sfc16__generate_uint16_3_p_0(&B_7, STATE_VARIABLE_R_1_12, &STATE_VARIABLE_R_2_13);
  mercury__random__sfc16__generate_uint16_3_p_0(&C_8, STATE_VARIABLE_R_2_13, &STATE_VARIABLE_R_3_14);
  mercury__random__sfc16__generate_uint16_3_p_0(&D_9, STATE_VARIABLE_R_3_14, STATE_VARIABLE_R_11);
  *N_4 = mercury__random__sfc16__pack_uint64_4_f_0(A_6, B_7, C_8, D_9);
}

void MR_CALL 
mercury__random__sfc16__generate_uint32_3_p_0(
  uint32_t * N_4,
  MR_Word STATE_VARIABLE_R_0_10,
  MR_Word * STATE_VARIABLE_R_11)
{
  uint16_t A0_6;
  uint16_t B0_7;
  MR_Unsigned A_8;
  MR_Unsigned B_9;
  MR_Word STATE_VARIABLE_R_1_12;
  MR_Unsigned Var_14;
  MR_Unsigned Var_15;

  mercury__random__sfc16__generate_uint16_3_p_0(&A0_6, STATE_VARIABLE_R_0_10, &STATE_VARIABLE_R_1_12);
  mercury__random__sfc16__generate_uint16_3_p_0(&B0_7, STATE_VARIABLE_R_1_12, STATE_VARIABLE_R_11);
{
#define MR_PROC_LABEL mercury__random__sfc16__generate_uint32_3_p_0

	uint16_t U16;
	MR_Unsigned U;

	U16 = A0_6 ;
		{

    U = (MR_Unsigned) U16;


		;}
#undef MR_PROC_LABEL
	A_8  = U;
}
{
#define MR_PROC_LABEL mercury__random__sfc16__generate_uint32_3_p_0

	uint16_t U16;
	MR_Unsigned U;

	U16 = B0_7 ;
		{

    U = (MR_Unsigned) U16;


		;}
#undef MR_PROC_LABEL
	B_9  = U;
}
  Var_15 = mercury__uint__f_60_60_2_f_0(B_9, (MR_Integer) 16);
  Var_14 = (A_8 + Var_15);
{
#define MR_PROC_LABEL mercury__random__sfc16__generate_uint32_3_p_0

	MR_Unsigned U;
	uint32_t U32;

	U = Var_14 ;
		{

    U32 = (uint32_t) U;


		;}
#undef MR_PROC_LABEL
	*N_4  = U32;
}
}

void MR_CALL 
mercury__random__sfc16__generate_uint8_3_p_0(
  uint8_t * N_4,
  MR_Word STATE_VARIABLE_R_0_8,
  MR_Word * STATE_VARIABLE_R_9)
{
  uint16_t N0_6;
  MR_Integer N1_7;
  uint16_t Var_11;

  mercury__random__sfc16__generate_uint16_3_p_0(&N0_6, STATE_VARIABLE_R_0_8, STATE_VARIABLE_R_9);
  Var_11 = mercury__uint16__f_62_62_2_f_0(N0_6, (MR_Integer) 8);
{
#define MR_PROC_LABEL mercury__random__sfc16__generate_uint8_3_p_0

	uint16_t U16;
	MR_Integer I;

	U16 = Var_11 ;
		{

    I = U16;


		;}
#undef MR_PROC_LABEL
	N1_7  = I;
}
{
#define MR_PROC_LABEL mercury__random__sfc16__generate_uint8_3_p_0

	MR_Integer I;
	uint8_t U8;

	I = N1_7 ;
		{

    U8 = (uint8_t) I;


		;}
#undef MR_PROC_LABEL
	*N_4  = U8;
}
}

MR_Word MR_CALL 
mercury__random__sfc16__seed_1_f_0(
  uint64_t Seed_3)
{
  MR_Word R_4;
  MR_Word Var_6 = (MR_Word) (MR_box_uint64(Seed_3));

  mercury__random__sfc16__skip_3_p_0((MR_Integer) 10, Var_6, &R_4);
  return R_4;
}

MR_Word MR_CALL 
mercury__random__sfc16__init_0_f_0(void)
{
  MR_Word HeadVar__1_1;

  mercury__random__sfc16__skip_3_p_0((MR_Integer) 10, (MR_Word) ((MR_Box) (&mercury__random__sfc16_scalar_common_4[0])), &HeadVar__1_1);
  return HeadVar__1_1;
}

void MR_CALL 
mercury__random__sfc16__skip_3_p_0(
  MR_Integer N_4,
  MR_Word STATE_VARIABLE_R_0_7,
  MR_Word * STATE_VARIABLE_R_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (N_4 > (MR_Integer) 0);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Word STATE_VARIABLE_R_1_10;
      MR_Integer Var_11;
      uint16_t Var_6;
      MR_Integer next_value_of_N_4;
      MR_Word next_value_of_STATE_VARIABLE_R_0_7;

      mercury__random__sfc16__generate_uint16_3_p_0(&Var_6, STATE_VARIABLE_R_0_7, &STATE_VARIABLE_R_1_10);
      Var_11 = (MR_Integer) ((MR_Unsigned) N_4 - (MR_Unsigned) 1);
      // direct tailcall eliminated
      ;
      next_value_of_N_4 = Var_11;
      next_value_of_STATE_VARIABLE_R_0_7 = STATE_VARIABLE_R_1_10;
      N_4 = next_value_of_N_4;
      STATE_VARIABLE_R_0_7 = next_value_of_STATE_VARIABLE_R_0_7;
      continue;
    }
    else
      *STATE_VARIABLE_R_8 = STATE_VARIABLE_R_0_7;
    break;
  }
}

void MR_CALL 
mercury__random__sfc16__generate_uint16_3_p_0(
  uint16_t * N_4,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3)
{
  uint64_t S0_5 = MR_unbox_uint64((MR_Box) (HeadVar__2_2));
  uint64_t S_6;
  uint16_t A0_7;
  uint16_t B0_8;
  uint16_t C0_9;
  uint16_t Counter0_10;
  uint16_t A_11;
  uint16_t B_12;
  uint16_t C_13;
  uint16_t Counter_14;
  uint16_t Var_15;
  uint16_t Var_16;
  uint16_t Var_18;
  uint16_t Var_20;
  uint16_t Var_21;
  uint16_t Var_23;
  uint64_t Var_27 = (S0_5 & UINT64_C(65535));
  uint64_t Var_28;
  uint64_t Var_29;
  uint64_t Var_31;
  uint64_t Var_32;
  uint64_t Var_34;

{
#define MR_PROC_LABEL mercury__random__sfc16__generate_uint16_3_p_0

	uint64_t U64;
	uint16_t U16;

	U64 = Var_27 ;
		{

    U16 = (uint16_t) U64;


		;}
#undef MR_PROC_LABEL
	A0_7  = U16;
}
  Var_29 = mercury__uint64__f_62_62_2_f_0(S0_5, (MR_Integer) 16);
  Var_28 = (Var_29 & UINT64_C(65535));
{
#define MR_PROC_LABEL mercury__random__sfc16__generate_uint16_3_p_0

	uint64_t U64;
	uint16_t U16;

	U64 = Var_28 ;
		{

    U16 = (uint16_t) U64;


		;}
#undef MR_PROC_LABEL
	B0_8  = U16;
}
  Var_32 = mercury__uint64__f_62_62_2_f_0(S0_5, (MR_Integer) 32);
  Var_31 = (Var_32 & UINT64_C(65535));
{
#define MR_PROC_LABEL mercury__random__sfc16__generate_uint16_3_p_0

	uint64_t U64;
	uint16_t U16;

	U64 = Var_31 ;
		{

    U16 = (uint16_t) U64;


		;}
#undef MR_PROC_LABEL
	C0_9  = U16;
}
  Var_34 = mercury__uint64__f_62_62_2_f_0(S0_5, (MR_Integer) 48);
{
#define MR_PROC_LABEL mercury__random__sfc16__generate_uint16_3_p_0

	uint64_t U64;
	uint16_t U16;

	U64 = Var_34 ;
		{

    U16 = (uint16_t) U64;


		;}
#undef MR_PROC_LABEL
	Counter0_10  = U16;
}
  Var_15 = (A0_7 + B0_8);
  *N_4 = (Var_15 + Counter0_10);
  Var_16 = mercury__uint16__f_62_62_2_f_0(B0_8, (MR_Integer) 5);
  A_11 = (B0_8 ^ Var_16);
  Var_18 = mercury__uint16__f_60_60_2_f_0(C0_9, (MR_Integer) 3);
  B_12 = (C0_9 + Var_18);
  Var_21 = mercury__uint16__f_60_60_2_f_0(C0_9, (MR_Integer) 6);
  Var_23 = mercury__uint16__f_62_62_2_f_0(C0_9, (MR_Integer) 10);
  Var_20 = (Var_21 | Var_23);
  C_13 = (Var_20 + *N_4);
  Counter_14 = (Counter0_10 + UINT16_C(1));
  S_6 = mercury__random__sfc16__pack_uint64_4_f_0(A_11, B_12, C_13, Counter_14);
  *HeadVar__3_3 = (MR_Word) (MR_box_uint64(S_6));
}

uint64_t MR_CALL 
mercury__random__sfc16__pack_uint64_4_f_0(
  uint16_t P1_6,
  uint16_t P2_7,
  uint16_t P3_8,
  uint16_t P4_9)
{
  uint64_t HeadVar__5_5;
  uint64_t Var_10;
  uint64_t Var_11;
  uint64_t Var_12;
  uint64_t Var_13;
  uint64_t Var_14;
  uint64_t Var_16;
  uint64_t Var_17;
  uint64_t Var_19;
  uint64_t Var_20;

{
#define MR_PROC_LABEL mercury__random__sfc16__pack_uint64_4_f_0

	uint16_t U16;
	uint64_t U64;

	U16 = P1_6 ;
		{

    U64 = (uint64_t) U16;


		;}
#undef MR_PROC_LABEL
	Var_12  = U64;
}
{
#define MR_PROC_LABEL mercury__random__sfc16__pack_uint64_4_f_0

	uint16_t U16;
	uint64_t U64;

	U16 = P2_7 ;
		{

    U64 = (uint64_t) U16;


		;}
#undef MR_PROC_LABEL
	Var_14  = U64;
}
  Var_13 = mercury__uint64__f_60_60_2_f_0(Var_14, (MR_Integer) 16);
  Var_11 = (Var_12 + Var_13);
{
#define MR_PROC_LABEL mercury__random__sfc16__pack_uint64_4_f_0

	uint16_t U16;
	uint64_t U64;

	U16 = P3_8 ;
		{

    U64 = (uint64_t) U16;


		;}
#undef MR_PROC_LABEL
	Var_17  = U64;
}
  Var_16 = mercury__uint64__f_60_60_2_f_0(Var_17, (MR_Integer) 32);
  Var_10 = (Var_11 + Var_16);
{
#define MR_PROC_LABEL mercury__random__sfc16__pack_uint64_4_f_0

	uint16_t U16;
	uint64_t U64;

	U16 = P4_9 ;
		{

    U64 = (uint64_t) U16;


		;}
#undef MR_PROC_LABEL
	Var_20  = U64;
}
  Var_19 = mercury__uint64__f_60_60_2_f_0(Var_20, (MR_Integer) 48);
  HeadVar__5_5 = (Var_10 + Var_19);
  return HeadVar__5_5;
}

static MR_bool MR_CALL 
mercury__random__sfc16____Unify____random_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__random__sfc16____Unify____random_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__random__sfc16____Compare____random_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__random__sfc16____Compare____random_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static void MR_CALL 
mercury__random__sfc16__ClassMethod_for_random__random____random__sfc16__random__arity0______random__generate_uint8_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  uint8_t conv1_HeadVar__1_1;
  MR_Word conv0_HeadVar__3_3;

  mercury__random__sfc16__ClassMethod_for_random__random____random__sfc16__random__arity0______random__generate_uint8_3_3_p_0(&conv1_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_1 = ((MR_Box) (MR_Word) (conv1_HeadVar__1_1));
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

static void MR_CALL 
mercury__random__sfc16__ClassMethod_for_random__random____random__sfc16__random__arity0______random__generate_uint16_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  uint16_t conv1_HeadVar__1_1;
  MR_Word conv0_HeadVar__3_3;

  mercury__random__sfc16__ClassMethod_for_random__random____random__sfc16__random__arity0______random__generate_uint16_3_3_p_0(&conv1_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_1 = ((MR_Box) (MR_Word) (conv1_HeadVar__1_1));
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

static void MR_CALL 
mercury__random__sfc16__ClassMethod_for_random__random____random__sfc16__random__arity0______random__generate_uint32_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  uint32_t conv1_HeadVar__1_1;
  MR_Word conv0_HeadVar__3_3;

  mercury__random__sfc16__ClassMethod_for_random__random____random__sfc16__random__arity0______random__generate_uint32_3_3_p_0(&conv1_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_1 = ((MR_Box) (MR_Word) (conv1_HeadVar__1_1));
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

static void MR_CALL 
mercury__random__sfc16__ClassMethod_for_random__random____random__sfc16__random__arity0______random__generate_uint64_3_3_p_0_10001(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  uint64_t conv1_HeadVar__1_1;
  MR_Word conv0_HeadVar__3_3;

  mercury__random__sfc16__ClassMethod_for_random__random____random__sfc16__random__arity0______random__generate_uint64_3_3_p_0(&conv1_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__3_3);
  *wrapper_arg_1 = MR_box_uint64(conv1_HeadVar__1_1);
  *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__3_3));
}

void mercury__random__sfc16__init(void)
{
}

void mercury__random__sfc16__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&mercury__random__sfc16__random__sfc16__type_ctor_info_random_0);
}

void mercury__random__sfc16__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__random__sfc16__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module random.sfc16.
