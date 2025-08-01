/*
** Automatically generated from `version_bitmap.m'
** by the Mercury compiler,
** version rotd-2025-08-01
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


// :- module version_bitmap.
// :- implementation.

/*
INIT mercury__version_bitmap__init
ENDINIT
*/

#include "version_bitmap.mih"


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
#include "maybe.mih"
#include "mercury_term_lexer.mih"
#include "mercury_term_parser.mih"
#include "mutvar.mih"
#include "one_or_more.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "set_tree234.mih"
#include "solutions.mih"
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




static const MR_FA_TypeInfo_Struct1 mercury__version_bitmap__version_array__ti_version_array_1builtin__type_ctor_info_int_0;

static MR_Box MR_CALL 
mercury__version_bitmap__zip__ho1_4_f_0(
  MR_Integer I_6,
  MR_Box BMa_8,
  MR_Box BMb_9);

static MR_Box MR_CALL 
mercury__version_bitmap__zip__ho2_4_f_0(
  MR_Integer I_6,
  MR_Box BMa_8,
  MR_Box BMb_9);

static MR_Box MR_CALL 
mercury__version_bitmap__zip__ho3_4_f_0(
  MR_Integer I_6,
  MR_Box BMa_8,
  MR_Box BMb_9);

static MR_Box MR_CALL 
mercury__version_bitmap__zip__ho4_4_f_0(
  MR_Integer I_6,
  MR_Box BMa_8,
  MR_Box BMb_9);

static MR_bool MR_CALL 
mercury__version_bitmap____Unify____version_bitmap_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__version_bitmap____Compare____version_bitmap_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mercury__version_bitmap_scalar_common_1[1][2];

static /* final */ const MR_Box mercury__version_bitmap_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__version_bitmap_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__version_bitmap_scalar_common_4[1][5];




static /* final */ const MR_Box mercury__version_bitmap_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__version_array__version_array__type_ctor_info_version_array_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
};

static /* final */ const MR_Box mercury__version_bitmap_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__version_bitmap_scalar_common_3[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__version_bitmap_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__version_bitmap_scalar_common_4[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__version_bitmap_scalar_common_3[0])),
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


static const MR_FA_TypeInfo_Struct1 mercury__version_bitmap__version_array__ti_version_array_1builtin__type_ctor_info_int_0 = {
  &mercury__version_array__version_array__type_ctor_info_version_array_1,
  { (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) }
};

const MR_TypeCtorInfo_Struct mercury__version_bitmap__version_bitmap__type_ctor_info_version_bitmap_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__version_bitmap____Unify____version_bitmap_0_0_10001)),
  ((MR_Box) (mercury__version_bitmap____Compare____version_bitmap_0_0_10001)),
  (MR_String) "version_bitmap",
  (MR_String) "version_bitmap",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__version_bitmap__version_array__ti_version_array_1builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
mercury__version_bitmap____Compare____version_bitmap_0_0(
  MR_Word * HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  MR_Box Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Box Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&mercury__version_bitmap_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
mercury__version_bitmap____Unify____version_bitmap_0_0(
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Box Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Box Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__version_array____Unify____version_array_1_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mercury__version_bitmap__unsafe_rewind_2_p_0(
  MR_Box BM_3,
  MR_Box * HeadVar__2_2)
{
{
#define MR_PROC_LABEL mercury__version_bitmap__unsafe_rewind_2_p_0

	struct ML_va * VA0;
	struct ML_va * VA;

	VA0 = (struct ML_va *) BM_3 ;
		{

    VA = ML_va_rewind_dolock(VA0, MR_ALLOC_ID);


		;}
#undef MR_PROC_LABEL
	*HeadVar__2_2  = (MR_Box) VA;
}
}

MR_Box MR_CALL 
mercury__version_bitmap__unsafe_rewind_1_f_0(
  MR_Box BM_3)
{
  MR_Box HeadVar__2_2;

{
#define MR_PROC_LABEL mercury__version_bitmap__unsafe_rewind_1_f_0

	struct ML_va * VA0;
	struct ML_va * VA;

	VA0 = (struct ML_va *) BM_3 ;
		{

    VA = ML_va_rewind_dolock(VA0, MR_ALLOC_ID);


		;}
#undef MR_PROC_LABEL
	HeadVar__2_2  = (MR_Box) VA;
}
  return HeadVar__2_2;
}

MR_Box MR_CALL 
mercury__version_bitmap__xor_2_f_0(
  MR_Box BMa_4,
  MR_Box BMb_5)
{
  MR_bool succeeded;
  MR_Box HeadVar__3_3;
  MR_Integer Var_8;
  MR_Integer Var_22;

  Var_8 = mercury__version_bitmap__num_bits_1_f_0(BMa_4);
  Var_22 = mercury__version_bitmap__num_bits_1_f_0(BMb_5);
  succeeded = (Var_8 == Var_22);
  if (succeeded)
  {
    MR_Integer Var_9;
    MR_Integer Var_10;
    MR_Integer Var_11;
    MR_Integer Var_24;

    Var_11 = mercury__version_bitmap__num_bits_1_f_0(BMb_5);
    Var_10 = (MR_Integer) ((MR_Unsigned) Var_11 - (MR_Unsigned) 1);
{
#define MR_PROC_LABEL mercury__version_bitmap__xor_2_f_0

	MR_Integer Int;
	MR_Integer Div;

	Int = Var_10 ;
		{

    Div = Int / ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	Var_24  = Div;
}
    Var_9 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_24);
    HeadVar__3_3 = mercury__version_bitmap__zip__ho1_4_f_0(Var_9, BMa_4, BMb_5);
  }
  else
  {
    MR_Box conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = mercury__require__func_error_2_f_0((MR_Word) (&mercury__version_bitmap_scalar_common_1[0]), (MR_String) "function \140version_bitmap.xor\'/2", (MR_String) "version_bitmaps not the same size");
    HeadVar__3_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
  return HeadVar__3_3;
}

static MR_Box MR_CALL 
mercury__version_bitmap__zip__ho1_4_f_0(
  MR_Integer I_6,
  MR_Box BMa_8,
  MR_Box BMb_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_6 > (MR_Integer) 0);
    MR_Box HeadVar__5_5;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Integer Var_11 = (MR_Integer) ((MR_Unsigned) I_6 - (MR_Unsigned) 1);
      MR_Box Var_13;
      MR_Integer Var_14;
      MR_Integer Var_15;
      MR_Integer Var_16;
      MR_Integer Var_18;
      MR_Box conv0_X;
      MR_Integer Var_23;
      MR_Box conv1_X;
      MR_Box Var_28;
      MR_Integer next_value_of_I_6;
      MR_Box next_value_of_BMb_9;

{
#define MR_PROC_LABEL mercury__version_bitmap__zip__ho1_4_f_0

	struct ML_va * VA;
	MR_Integer I;
	MR_Word X;
	MR_bool SUCCESS_INDICATOR;

	VA = (struct ML_va *) BMb_9 ;
	I = I_6 ;
		{

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	conv0_X  = (MR_Box) X;
      Var_18 = ((MR_Integer) (conv0_X));
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        Var_15 = Var_18;
      else
      {
        MR_Integer Var_19;
        MR_Integer Var_21;

{
#define MR_PROC_LABEL mercury__version_bitmap__zip__ho1_4_f_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *) BMb_9 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_21  = N;
}
        Var_19 = (MR_Integer) ((MR_Unsigned) Var_21 - (MR_Unsigned) 1);
        mercury__version_array__out_of_bounds_error_3_p_0(I_6, Var_19, (MR_String) "version_array.lookup");
      }
{
#define MR_PROC_LABEL mercury__version_bitmap__zip__ho1_4_f_0

	struct ML_va * VA;
	MR_Integer I;
	MR_Word X;
	MR_bool SUCCESS_INDICATOR;

	VA = (struct ML_va *) BMa_8 ;
	I = I_6 ;
		{

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	conv1_X  = (MR_Box) X;
      Var_23 = ((MR_Integer) (conv1_X));
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        Var_16 = Var_23;
      else
      {
        MR_Integer Var_24;
        MR_Integer Var_26;

{
#define MR_PROC_LABEL mercury__version_bitmap__zip__ho1_4_f_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *) BMa_8 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_26  = N;
}
        Var_24 = (MR_Integer) ((MR_Unsigned) Var_26 - (MR_Unsigned) 1);
        mercury__version_array__out_of_bounds_error_3_p_0(I_6, Var_24, (MR_String) "version_array.lookup");
      }
      Var_14 = (Var_15 ^ Var_16);
{
#define MR_PROC_LABEL mercury__version_bitmap__zip__ho1_4_f_0

	MR_Integer I;
	MR_Word X;
	struct ML_va * VA0;
	struct ML_va * VA;
	MR_bool SUCCESS_INDICATOR;

	I = I_6 ;
	X = (MR_Word) ((MR_Box) (Var_14)) ;
	VA0 = (struct ML_va *) BMb_9 ;
		{

    SUCCESS_INDICATOR = ML_va_set_dolock(VA0, I, X, &VA, MR_ALLOC_ID);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	Var_28  = (MR_Box) VA;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        Var_13 = Var_28;
      else
      {
        MR_Integer Var_29;
        MR_Integer Var_31;

{
#define MR_PROC_LABEL mercury__version_bitmap__zip__ho1_4_f_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *) BMb_9 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_31  = N;
}
        Var_29 = (MR_Integer) ((MR_Unsigned) Var_31 - (MR_Unsigned) 1);
        mercury__version_array__out_of_bounds_error_3_p_0(I_6, Var_29, (MR_String) "version_array.set");
      }
      // direct tailcall eliminated
      ;
      next_value_of_I_6 = Var_11;
      next_value_of_BMb_9 = Var_13;
      I_6 = next_value_of_I_6;
      BMb_9 = next_value_of_BMb_9;
      continue;
    }
    else
      HeadVar__5_5 = BMb_9;
    return HeadVar__5_5;
    break;
  }
}

MR_Box MR_CALL 
mercury__version_bitmap__difference_2_f_0(
  MR_Box BMa_4,
  MR_Box BMb_5)
{
  MR_bool succeeded;
  MR_Box HeadVar__3_3;
  MR_Integer Var_8;
  MR_Integer Var_23;

  Var_8 = mercury__version_bitmap__num_bits_1_f_0(BMa_4);
  Var_23 = mercury__version_bitmap__num_bits_1_f_0(BMb_5);
  succeeded = (Var_8 == Var_23);
  if (succeeded)
  {
    MR_Integer Var_9;
    MR_Integer Var_10;
    MR_Integer Var_11;
    MR_Integer Var_25;

    Var_11 = mercury__version_bitmap__num_bits_1_f_0(BMb_5);
    Var_10 = (MR_Integer) ((MR_Unsigned) Var_11 - (MR_Unsigned) 1);
{
#define MR_PROC_LABEL mercury__version_bitmap__difference_2_f_0

	MR_Integer Int;
	MR_Integer Div;

	Int = Var_10 ;
		{

    Div = Int / ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	Var_25  = Div;
}
    Var_9 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_25);
    HeadVar__3_3 = mercury__version_bitmap__zip__ho2_4_f_0(Var_9, BMa_4, BMb_5);
  }
  else
  {
    MR_Box conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = mercury__require__func_error_2_f_0((MR_Word) (&mercury__version_bitmap_scalar_common_1[0]), (MR_String) "function \140version_bitmap.difference\'/2", (MR_String) "version_bitmaps not the same size");
    HeadVar__3_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
  return HeadVar__3_3;
}

static MR_Box MR_CALL 
mercury__version_bitmap__zip__ho2_4_f_0(
  MR_Integer I_6,
  MR_Box BMa_8,
  MR_Box BMb_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_6 > (MR_Integer) 0);
    MR_Box HeadVar__5_5;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Integer Var_11 = (MR_Integer) ((MR_Unsigned) I_6 - (MR_Unsigned) 1);
      MR_Box Var_13;
      MR_Integer Var_14;
      MR_Integer Var_15;
      MR_Integer Var_16;
      MR_Integer Var_28;
      MR_Integer Var_18;
      MR_Box conv0_X;
      MR_Integer Var_23;
      MR_Box conv1_X;
      MR_Box Var_29;
      MR_Integer next_value_of_I_6;
      MR_Box next_value_of_BMb_9;

{
#define MR_PROC_LABEL mercury__version_bitmap__zip__ho2_4_f_0

	struct ML_va * VA;
	MR_Integer I;
	MR_Word X;
	MR_bool SUCCESS_INDICATOR;

	VA = (struct ML_va *) BMb_9 ;
	I = I_6 ;
		{

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	conv0_X  = (MR_Box) X;
      Var_18 = ((MR_Integer) (conv0_X));
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        Var_15 = Var_18;
      else
      {
        MR_Integer Var_19;
        MR_Integer Var_21;

{
#define MR_PROC_LABEL mercury__version_bitmap__zip__ho2_4_f_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *) BMb_9 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_21  = N;
}
        Var_19 = (MR_Integer) ((MR_Unsigned) Var_21 - (MR_Unsigned) 1);
        mercury__version_array__out_of_bounds_error_3_p_0(I_6, Var_19, (MR_String) "version_array.lookup");
      }
{
#define MR_PROC_LABEL mercury__version_bitmap__zip__ho2_4_f_0

	struct ML_va * VA;
	MR_Integer I;
	MR_Word X;
	MR_bool SUCCESS_INDICATOR;

	VA = (struct ML_va *) BMa_8 ;
	I = I_6 ;
		{

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	conv1_X  = (MR_Box) X;
      Var_23 = ((MR_Integer) (conv1_X));
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        Var_16 = Var_23;
      else
      {
        MR_Integer Var_24;
        MR_Integer Var_26;

{
#define MR_PROC_LABEL mercury__version_bitmap__zip__ho2_4_f_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *) BMa_8 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_26  = N;
}
        Var_24 = (MR_Integer) ((MR_Unsigned) Var_26 - (MR_Unsigned) 1);
        mercury__version_array__out_of_bounds_error_3_p_0(I_6, Var_24, (MR_String) "version_array.lookup");
      }
      Var_28 = ~(Var_16);
      Var_14 = (Var_15 & Var_28);
{
#define MR_PROC_LABEL mercury__version_bitmap__zip__ho2_4_f_0

	MR_Integer I;
	MR_Word X;
	struct ML_va * VA0;
	struct ML_va * VA;
	MR_bool SUCCESS_INDICATOR;

	I = I_6 ;
	X = (MR_Word) ((MR_Box) (Var_14)) ;
	VA0 = (struct ML_va *) BMb_9 ;
		{

    SUCCESS_INDICATOR = ML_va_set_dolock(VA0, I, X, &VA, MR_ALLOC_ID);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	Var_29  = (MR_Box) VA;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        Var_13 = Var_29;
      else
      {
        MR_Integer Var_30;
        MR_Integer Var_32;

{
#define MR_PROC_LABEL mercury__version_bitmap__zip__ho2_4_f_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *) BMb_9 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_32  = N;
}
        Var_30 = (MR_Integer) ((MR_Unsigned) Var_32 - (MR_Unsigned) 1);
        mercury__version_array__out_of_bounds_error_3_p_0(I_6, Var_30, (MR_String) "version_array.set");
      }
      // direct tailcall eliminated
      ;
      next_value_of_I_6 = Var_11;
      next_value_of_BMb_9 = Var_13;
      I_6 = next_value_of_I_6;
      BMb_9 = next_value_of_BMb_9;
      continue;
    }
    else
      HeadVar__5_5 = BMb_9;
    return HeadVar__5_5;
    break;
  }
}

MR_Box MR_CALL 
mercury__version_bitmap__intersect_2_f_0(
  MR_Box BMa_4,
  MR_Box BMb_5)
{
  MR_bool succeeded;
  MR_Box HeadVar__3_3;
  MR_Integer Var_6;
  MR_Integer Var_18;

  Var_6 = mercury__version_bitmap__num_bits_1_f_0(BMa_4);
  Var_18 = mercury__version_bitmap__num_bits_1_f_0(BMb_5);
  succeeded = (Var_6 == Var_18);
  if (succeeded)
  {
    MR_Integer Var_7;
    MR_Integer Var_8;
    MR_Integer Var_9;
    MR_Integer Var_20;

    Var_9 = mercury__version_bitmap__num_bits_1_f_0(BMb_5);
    Var_8 = (MR_Integer) ((MR_Unsigned) Var_9 - (MR_Unsigned) 1);
{
#define MR_PROC_LABEL mercury__version_bitmap__intersect_2_f_0

	MR_Integer Int;
	MR_Integer Div;

	Int = Var_8 ;
		{

    Div = Int / ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	Var_20  = Div;
}
    Var_7 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_20);
    HeadVar__3_3 = mercury__version_bitmap__zip__ho3_4_f_0(Var_7, BMa_4, BMb_5);
  }
  else
  {
    MR_Box conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = mercury__require__func_error_2_f_0((MR_Word) (&mercury__version_bitmap_scalar_common_1[0]), (MR_String) "function \140version_bitmap.intersect\'/2", (MR_String) "version_bitmaps not the same size");
    HeadVar__3_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
  return HeadVar__3_3;
}

static MR_Box MR_CALL 
mercury__version_bitmap__zip__ho3_4_f_0(
  MR_Integer I_6,
  MR_Box BMa_8,
  MR_Box BMb_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_6 > (MR_Integer) 0);
    MR_Box HeadVar__5_5;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Integer Var_11 = (MR_Integer) ((MR_Unsigned) I_6 - (MR_Unsigned) 1);
      MR_Box Var_13;
      MR_Integer Var_14;
      MR_Integer Var_15;
      MR_Integer Var_16;
      MR_Integer Var_18;
      MR_Box conv0_X;
      MR_Integer Var_23;
      MR_Box conv1_X;
      MR_Box Var_28;
      MR_Integer next_value_of_I_6;
      MR_Box next_value_of_BMb_9;

{
#define MR_PROC_LABEL mercury__version_bitmap__zip__ho3_4_f_0

	struct ML_va * VA;
	MR_Integer I;
	MR_Word X;
	MR_bool SUCCESS_INDICATOR;

	VA = (struct ML_va *) BMb_9 ;
	I = I_6 ;
		{

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	conv0_X  = (MR_Box) X;
      Var_18 = ((MR_Integer) (conv0_X));
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        Var_15 = Var_18;
      else
      {
        MR_Integer Var_19;
        MR_Integer Var_21;

{
#define MR_PROC_LABEL mercury__version_bitmap__zip__ho3_4_f_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *) BMb_9 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_21  = N;
}
        Var_19 = (MR_Integer) ((MR_Unsigned) Var_21 - (MR_Unsigned) 1);
        mercury__version_array__out_of_bounds_error_3_p_0(I_6, Var_19, (MR_String) "version_array.lookup");
      }
{
#define MR_PROC_LABEL mercury__version_bitmap__zip__ho3_4_f_0

	struct ML_va * VA;
	MR_Integer I;
	MR_Word X;
	MR_bool SUCCESS_INDICATOR;

	VA = (struct ML_va *) BMa_8 ;
	I = I_6 ;
		{

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	conv1_X  = (MR_Box) X;
      Var_23 = ((MR_Integer) (conv1_X));
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        Var_16 = Var_23;
      else
      {
        MR_Integer Var_24;
        MR_Integer Var_26;

{
#define MR_PROC_LABEL mercury__version_bitmap__zip__ho3_4_f_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *) BMa_8 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_26  = N;
}
        Var_24 = (MR_Integer) ((MR_Unsigned) Var_26 - (MR_Unsigned) 1);
        mercury__version_array__out_of_bounds_error_3_p_0(I_6, Var_24, (MR_String) "version_array.lookup");
      }
      Var_14 = (Var_15 & Var_16);
{
#define MR_PROC_LABEL mercury__version_bitmap__zip__ho3_4_f_0

	MR_Integer I;
	MR_Word X;
	struct ML_va * VA0;
	struct ML_va * VA;
	MR_bool SUCCESS_INDICATOR;

	I = I_6 ;
	X = (MR_Word) ((MR_Box) (Var_14)) ;
	VA0 = (struct ML_va *) BMb_9 ;
		{

    SUCCESS_INDICATOR = ML_va_set_dolock(VA0, I, X, &VA, MR_ALLOC_ID);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	Var_28  = (MR_Box) VA;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        Var_13 = Var_28;
      else
      {
        MR_Integer Var_29;
        MR_Integer Var_31;

{
#define MR_PROC_LABEL mercury__version_bitmap__zip__ho3_4_f_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *) BMb_9 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_31  = N;
}
        Var_29 = (MR_Integer) ((MR_Unsigned) Var_31 - (MR_Unsigned) 1);
        mercury__version_array__out_of_bounds_error_3_p_0(I_6, Var_29, (MR_String) "version_array.set");
      }
      // direct tailcall eliminated
      ;
      next_value_of_I_6 = Var_11;
      next_value_of_BMb_9 = Var_13;
      I_6 = next_value_of_I_6;
      BMb_9 = next_value_of_BMb_9;
      continue;
    }
    else
      HeadVar__5_5 = BMb_9;
    return HeadVar__5_5;
    break;
  }
}

MR_Box MR_CALL 
mercury__version_bitmap__union_2_f_0(
  MR_Box BMa_4,
  MR_Box BMb_5)
{
  MR_bool succeeded;
  MR_Box HeadVar__3_3;
  MR_Integer Var_6;
  MR_Integer Var_18;

  Var_6 = mercury__version_bitmap__num_bits_1_f_0(BMa_4);
  Var_18 = mercury__version_bitmap__num_bits_1_f_0(BMb_5);
  succeeded = (Var_6 == Var_18);
  if (succeeded)
  {
    MR_Integer Var_7;
    MR_Integer Var_8;
    MR_Integer Var_9;
    MR_Integer Var_20;

    Var_9 = mercury__version_bitmap__num_bits_1_f_0(BMb_5);
    Var_8 = (MR_Integer) ((MR_Unsigned) Var_9 - (MR_Unsigned) 1);
{
#define MR_PROC_LABEL mercury__version_bitmap__union_2_f_0

	MR_Integer Int;
	MR_Integer Div;

	Int = Var_8 ;
		{

    Div = Int / ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	Var_20  = Div;
}
    Var_7 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_20);
    HeadVar__3_3 = mercury__version_bitmap__zip__ho4_4_f_0(Var_7, BMa_4, BMb_5);
  }
  else
  {
    MR_Box conv0_HeadVar__3_3;

    conv0_HeadVar__3_3 = mercury__require__func_error_2_f_0((MR_Word) (&mercury__version_bitmap_scalar_common_1[0]), (MR_String) "function \140version_bitmap.union\'/2", (MR_String) "version_bitmaps not the same size");
    HeadVar__3_3 = ((MR_Box) (conv0_HeadVar__3_3));
  }
  return HeadVar__3_3;
}

static MR_Box MR_CALL 
mercury__version_bitmap__zip__ho4_4_f_0(
  MR_Integer I_6,
  MR_Box BMa_8,
  MR_Box BMb_9)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (I_6 > (MR_Integer) 0);
    MR_Box HeadVar__5_5;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
    {
      MR_Integer Var_11 = (MR_Integer) ((MR_Unsigned) I_6 - (MR_Unsigned) 1);
      MR_Box Var_13;
      MR_Integer Var_14;
      MR_Integer Var_15;
      MR_Integer Var_16;
      MR_Integer Var_18;
      MR_Box conv0_X;
      MR_Integer Var_23;
      MR_Box conv1_X;
      MR_Box Var_28;
      MR_Integer next_value_of_I_6;
      MR_Box next_value_of_BMb_9;

{
#define MR_PROC_LABEL mercury__version_bitmap__zip__ho4_4_f_0

	struct ML_va * VA;
	MR_Integer I;
	MR_Word X;
	MR_bool SUCCESS_INDICATOR;

	VA = (struct ML_va *) BMb_9 ;
	I = I_6 ;
		{

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	conv0_X  = (MR_Box) X;
      Var_18 = ((MR_Integer) (conv0_X));
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        Var_15 = Var_18;
      else
      {
        MR_Integer Var_19;
        MR_Integer Var_21;

{
#define MR_PROC_LABEL mercury__version_bitmap__zip__ho4_4_f_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *) BMb_9 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_21  = N;
}
        Var_19 = (MR_Integer) ((MR_Unsigned) Var_21 - (MR_Unsigned) 1);
        mercury__version_array__out_of_bounds_error_3_p_0(I_6, Var_19, (MR_String) "version_array.lookup");
      }
{
#define MR_PROC_LABEL mercury__version_bitmap__zip__ho4_4_f_0

	struct ML_va * VA;
	MR_Integer I;
	MR_Word X;
	MR_bool SUCCESS_INDICATOR;

	VA = (struct ML_va *) BMa_8 ;
	I = I_6 ;
		{

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	conv1_X  = (MR_Box) X;
      Var_23 = ((MR_Integer) (conv1_X));
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        Var_16 = Var_23;
      else
      {
        MR_Integer Var_24;
        MR_Integer Var_26;

{
#define MR_PROC_LABEL mercury__version_bitmap__zip__ho4_4_f_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *) BMa_8 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_26  = N;
}
        Var_24 = (MR_Integer) ((MR_Unsigned) Var_26 - (MR_Unsigned) 1);
        mercury__version_array__out_of_bounds_error_3_p_0(I_6, Var_24, (MR_String) "version_array.lookup");
      }
      Var_14 = (Var_15 | Var_16);
{
#define MR_PROC_LABEL mercury__version_bitmap__zip__ho4_4_f_0

	MR_Integer I;
	MR_Word X;
	struct ML_va * VA0;
	struct ML_va * VA;
	MR_bool SUCCESS_INDICATOR;

	I = I_6 ;
	X = (MR_Word) ((MR_Box) (Var_14)) ;
	VA0 = (struct ML_va *) BMb_9 ;
		{

    SUCCESS_INDICATOR = ML_va_set_dolock(VA0, I, X, &VA, MR_ALLOC_ID);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	Var_28  = (MR_Box) VA;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        Var_13 = Var_28;
      else
      {
        MR_Integer Var_29;
        MR_Integer Var_31;

{
#define MR_PROC_LABEL mercury__version_bitmap__zip__ho4_4_f_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *) BMb_9 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_31  = N;
}
        Var_29 = (MR_Integer) ((MR_Unsigned) Var_31 - (MR_Unsigned) 1);
        mercury__version_array__out_of_bounds_error_3_p_0(I_6, Var_29, (MR_String) "version_array.set");
      }
      // direct tailcall eliminated
      ;
      next_value_of_I_6 = Var_11;
      next_value_of_BMb_9 = Var_13;
      I_6 = next_value_of_I_6;
      BMb_9 = next_value_of_BMb_9;
      continue;
    }
    else
      HeadVar__5_5 = BMb_9;
    return HeadVar__5_5;
    break;
  }
}

MR_Box MR_CALL 
mercury__version_bitmap__complement_1_f_0(
  MR_Box BM_3)
{
  MR_bool succeeded;
  MR_Box HeadVar__2_2;
  MR_Box Var_4;
  MR_Integer Var_5;
  MR_Integer Var_6;
  MR_Integer Var_10;
  MR_Box conv0_X;

{
#define MR_PROC_LABEL mercury__version_bitmap__complement_1_f_0

	struct ML_va * VA;
	MR_Integer I;
	MR_Word X;
	MR_bool SUCCESS_INDICATOR;

	VA = (struct ML_va *) BM_3 ;
	I = (MR_Integer) 0 ;
		{

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	conv0_X  = (MR_Box) X;
  Var_10 = ((MR_Integer) (conv0_X));
	}
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    Var_6 = Var_10;
  else
  {
    MR_Integer Var_11;
    MR_Integer Var_13;

{
#define MR_PROC_LABEL mercury__version_bitmap__complement_1_f_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *) BM_3 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_13  = N;
}
    Var_11 = (MR_Integer) ((MR_Unsigned) Var_13 - (MR_Unsigned) 1);
    mercury__version_array__out_of_bounds_error_3_p_0((MR_Integer) 0, Var_11, (MR_String) "version_array.lookup");
  }
  Var_5 = (MR_Integer) ((MR_Unsigned) Var_6 - (MR_Unsigned) 1);
  Var_4 = mercury__version_bitmap__complement_2_2_f_0(Var_5, BM_3);
  HeadVar__2_2 = mercury__version_bitmap__clear_filler_bits_1_f_0(Var_4);
  return HeadVar__2_2;
}

MR_Box MR_CALL 
mercury__version_bitmap__complement_2_2_f_0(
  MR_Integer WordI_4,
  MR_Box BM_5)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (WordI_4 <= (MR_Integer) 0);
    MR_Box HeadVar__3_3;

    // setup for model_det tailcalls optimized into a loop
    ;
    if (succeeded)
      HeadVar__3_3 = BM_5;
    else
    {
      MR_Integer Var_7 = (MR_Integer) ((MR_Unsigned) WordI_4 - (MR_Unsigned) 1);
      MR_Box Var_9;
      MR_Integer Var_10;
      MR_Integer Var_11;
      MR_Integer Var_13;
      MR_Box conv0_X;
      MR_Box Var_18;
      MR_Integer next_value_of_WordI_4;
      MR_Box next_value_of_BM_5;

{
#define MR_PROC_LABEL mercury__version_bitmap__complement_2_2_f_0

	struct ML_va * VA;
	MR_Integer I;
	MR_Word X;
	MR_bool SUCCESS_INDICATOR;

	VA = (struct ML_va *) BM_5 ;
	I = WordI_4 ;
		{

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	conv0_X  = (MR_Box) X;
      Var_13 = ((MR_Integer) (conv0_X));
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        Var_11 = Var_13;
      else
      {
        MR_Integer Var_14;
        MR_Integer Var_16;

{
#define MR_PROC_LABEL mercury__version_bitmap__complement_2_2_f_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *) BM_5 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_16  = N;
}
        Var_14 = (MR_Integer) ((MR_Unsigned) Var_16 - (MR_Unsigned) 1);
        mercury__version_array__out_of_bounds_error_3_p_0(WordI_4, Var_14, (MR_String) "version_array.lookup");
      }
      Var_10 = ~(Var_11);
{
#define MR_PROC_LABEL mercury__version_bitmap__complement_2_2_f_0

	MR_Integer I;
	MR_Word X;
	struct ML_va * VA0;
	struct ML_va * VA;
	MR_bool SUCCESS_INDICATOR;

	I = WordI_4 ;
	X = (MR_Word) ((MR_Box) (Var_10)) ;
	VA0 = (struct ML_va *) BM_5 ;
		{

    SUCCESS_INDICATOR = ML_va_set_dolock(VA0, I, X, &VA, MR_ALLOC_ID);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	Var_18  = (MR_Box) VA;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        Var_9 = Var_18;
      else
      {
        MR_Integer Var_19;
        MR_Integer Var_21;

{
#define MR_PROC_LABEL mercury__version_bitmap__complement_2_2_f_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *) BM_5 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_21  = N;
}
        Var_19 = (MR_Integer) ((MR_Unsigned) Var_21 - (MR_Unsigned) 1);
        mercury__version_array__out_of_bounds_error_3_p_0(WordI_4, Var_19, (MR_String) "version_array.set");
      }
      // direct tailcall eliminated
      ;
      next_value_of_WordI_4 = Var_7;
      next_value_of_BM_5 = Var_9;
      WordI_4 = next_value_of_WordI_4;
      BM_5 = next_value_of_BM_5;
      continue;
    }
    return HeadVar__3_3;
    break;
  }
}

MR_Box MR_CALL 
mercury__version_bitmap__copy_1_f_0(
  MR_Box BM_3)
{
  MR_Box HeadVar__2_2;

  HeadVar__2_2 = mercury__version_array__copy_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), BM_3);
  return HeadVar__2_2;
}

MR_bool MR_CALL 
mercury__version_bitmap__is_clear_2_p_0(
  MR_Box BM_3,
  MR_Integer I_4)
{
  MR_bool succeeded = ((MR_Integer) 0 <= I_4);
  MR_Integer Var_13;

  if (succeeded)
  {
    Var_13 = mercury__version_bitmap__num_bits_1_f_0(BM_3);
    succeeded = (I_4 < Var_13);
  }
  if (succeeded)
  {
    MR_Integer Var_5;
    MR_Integer Var_6;
    MR_Integer Var_7;
    MR_Integer Var_8;
    MR_Integer Var_15;
    MR_Integer Var_22;
    MR_Integer Var_16;
    MR_Box conv0_X;

{
#define MR_PROC_LABEL mercury__version_bitmap__is_clear_2_p_0

	MR_Integer Int;
	MR_Integer Div;

	Int = I_4 ;
		{

    Div = Int / ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	Var_15  = Div;
}
    Var_7 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_15);
{
#define MR_PROC_LABEL mercury__version_bitmap__is_clear_2_p_0

	struct ML_va * VA;
	MR_Integer I;
	MR_Word X;
	MR_bool SUCCESS_INDICATOR;

	VA = (struct ML_va *) BM_3 ;
	I = Var_7 ;
		{

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	conv0_X  = (MR_Box) X;
    Var_16 = ((MR_Integer) (conv0_X));
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      Var_6 = Var_16;
    else
    {
      MR_Integer Var_17;
      MR_Integer Var_19;

{
#define MR_PROC_LABEL mercury__version_bitmap__is_clear_2_p_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *) BM_3 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_19  = N;
}
      Var_17 = (MR_Integer) ((MR_Unsigned) Var_19 - (MR_Unsigned) 1);
      mercury__version_array__out_of_bounds_error_3_p_0(Var_7, Var_17, (MR_String) "version_array.lookup");
    }
{
#define MR_PROC_LABEL mercury__version_bitmap__is_clear_2_p_0

	MR_Integer Int;
	MR_Integer Rem;

	Int = I_4 ;
		{

    Rem = Int % ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	Var_22  = Rem;
}
    Var_8 = ((MR_Integer) 1 << Var_22);
    Var_5 = (Var_6 & Var_8);
    succeeded = (Var_5 == (MR_Integer) 0);
  }
  else
  {
    mercury__require__error_2_p_0((MR_String) "predicate \140version_bitmap.is_clear\'/2", (MR_String) "out of range");
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_Box MR_CALL 
mercury__version_bitmap__flip_2_f_0(
  MR_Box BM0_4,
  MR_Integer I_5)
{
  MR_Box BM_6;

  mercury__version_bitmap__flip_3_p_0(I_5, BM0_4, &BM_6);
  return BM_6;
}

void MR_CALL 
mercury__version_bitmap__flip_3_p_0(
  MR_Integer I_4,
  MR_Box BM0_5,
  MR_Box * BM_6)
{
  MR_bool succeeded = ((MR_Integer) 0 <= I_4);
  MR_Integer Var_16;

  if (succeeded)
  {
    Var_16 = mercury__version_bitmap__num_bits_1_f_0(BM0_5);
    succeeded = (I_4 < Var_16);
  }
  if (succeeded)
  {
    MR_Integer Var_7;
    MR_Integer Var_8;
    MR_Integer Var_9;
    MR_Integer Var_10;
    MR_Integer Var_11;
    MR_Integer Var_18;
    MR_Integer Var_25;
    MR_Integer Var_27;
    MR_Integer Var_19;
    MR_Box conv0_X;
    MR_Box Var_28;

{
#define MR_PROC_LABEL mercury__version_bitmap__flip_3_p_0

	MR_Integer Int;
	MR_Integer Div;

	Int = I_4 ;
		{

    Div = Int / ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	Var_18  = Div;
}
    Var_10 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_18);
{
#define MR_PROC_LABEL mercury__version_bitmap__flip_3_p_0

	struct ML_va * VA;
	MR_Integer I;
	MR_Word X;
	MR_bool SUCCESS_INDICATOR;

	VA = (struct ML_va *) BM0_5 ;
	I = Var_10 ;
		{

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	conv0_X  = (MR_Box) X;
    Var_19 = ((MR_Integer) (conv0_X));
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      Var_9 = Var_19;
    else
    {
      MR_Integer Var_20;
      MR_Integer Var_22;

{
#define MR_PROC_LABEL mercury__version_bitmap__flip_3_p_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *) BM0_5 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_22  = N;
}
      Var_20 = (MR_Integer) ((MR_Unsigned) Var_22 - (MR_Unsigned) 1);
      {
        mercury__version_array__out_of_bounds_error_3_p_0(Var_10, Var_20, (MR_String) "version_array.lookup");
        return;
      }
    }
{
#define MR_PROC_LABEL mercury__version_bitmap__flip_3_p_0

	MR_Integer Int;
	MR_Integer Rem;

	Int = I_4 ;
		{

    Rem = Int % ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	Var_25  = Rem;
}
    Var_11 = ((MR_Integer) 1 << Var_25);
    Var_7 = (Var_9 ^ Var_11);
{
#define MR_PROC_LABEL mercury__version_bitmap__flip_3_p_0

	MR_Integer Int;
	MR_Integer Div;

	Int = I_4 ;
		{

    Div = Int / ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	Var_27  = Div;
}
    Var_8 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_27);
{
#define MR_PROC_LABEL mercury__version_bitmap__flip_3_p_0

	MR_Integer I;
	MR_Word X;
	struct ML_va * VA0;
	struct ML_va * VA;
	MR_bool SUCCESS_INDICATOR;

	I = Var_8 ;
	X = (MR_Word) ((MR_Box) (Var_7)) ;
	VA0 = (struct ML_va *) BM0_5 ;
		{

    SUCCESS_INDICATOR = ML_va_set_dolock(VA0, I, X, &VA, MR_ALLOC_ID);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	Var_28  = (MR_Box) VA;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      *BM_6 = Var_28;
    else
    {
      MR_Integer Var_29;
      MR_Integer Var_31;

{
#define MR_PROC_LABEL mercury__version_bitmap__flip_3_p_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *) BM0_5 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_31  = N;
}
      Var_29 = (MR_Integer) ((MR_Unsigned) Var_31 - (MR_Unsigned) 1);
      {
        mercury__version_array__out_of_bounds_error_3_p_0(Var_8, Var_29, (MR_String) "version_array.set");
        return;
      }
    }
  }
  else
    {
      mercury__require__error_2_p_0((MR_String) "predicate \140version_bitmap.flip\'/3", (MR_String) "out of range");
      return;
    }
}

MR_Box MR_CALL 
mercury__version_bitmap__clear_2_f_0(
  MR_Box BM0_4,
  MR_Integer I_5)
{
  MR_Box BM_6;

  mercury__version_bitmap__clear_3_p_0(I_5, BM0_4, &BM_6);
  return BM_6;
}

MR_Box MR_CALL 
mercury__version_bitmap__set_2_f_0(
  MR_Box BM0_4,
  MR_Integer I_5)
{
  MR_Box BM_6;

  mercury__version_bitmap__set_3_p_0(I_5, BM0_4, &BM_6);
  return BM_6;
}

MR_Box MR_CALL 
mercury__version_bitmap__f_98_105_116_32_58_61_3_f_0(
  MR_Integer I_5,
  MR_Box BM0_6,
  MR_Word NewBit_7)
{
  MR_Box BM_8;

  switch (NewBit_7) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      mercury__version_bitmap__clear_3_p_0(I_5, BM0_6, &BM_8);
      break;
    case (MR_Integer) 1:
      mercury__version_bitmap__set_3_p_0(I_5, BM0_6, &BM_8);
      break;
  }
  return BM_8;
}

void MR_CALL 
mercury__version_bitmap__set_bit_4_p_0(
  MR_Integer I_1,
  MR_Word HeadVar__2_2,
  MR_Box BM0_3,
  MR_Box * BM_4)
{
  switch (HeadVar__2_2) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      mercury__version_bitmap__clear_3_p_0(I_1, BM0_3, BM_4);
      break;
    case (MR_Integer) 1:
      mercury__version_bitmap__set_3_p_0(I_1, BM0_3, BM_4);
      break;
  }
}

void MR_CALL 
mercury__version_bitmap__clear_3_p_0(
  MR_Integer I_4,
  MR_Box BM0_5,
  MR_Box * BM_6)
{
  MR_bool succeeded = ((MR_Integer) 0 <= I_4);
  MR_Integer Var_17;

  if (succeeded)
  {
    Var_17 = mercury__version_bitmap__num_bits_1_f_0(BM0_5);
    succeeded = (I_4 < Var_17);
  }
  if (succeeded)
  {
    MR_Integer Var_7;
    MR_Integer Var_8;
    MR_Integer Var_9;
    MR_Integer Var_10;
    MR_Integer Var_11;
    MR_Integer Var_12;
    MR_Integer Var_19;
    MR_Integer Var_26;
    MR_Integer Var_28;
    MR_Integer Var_20;
    MR_Box conv0_X;
    MR_Box Var_29;

{
#define MR_PROC_LABEL mercury__version_bitmap__clear_3_p_0

	MR_Integer Int;
	MR_Integer Div;

	Int = I_4 ;
		{

    Div = Int / ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	Var_19  = Div;
}
    Var_10 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_19);
{
#define MR_PROC_LABEL mercury__version_bitmap__clear_3_p_0

	struct ML_va * VA;
	MR_Integer I;
	MR_Word X;
	MR_bool SUCCESS_INDICATOR;

	VA = (struct ML_va *) BM0_5 ;
	I = Var_10 ;
		{

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	conv0_X  = (MR_Box) X;
    Var_20 = ((MR_Integer) (conv0_X));
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      Var_9 = Var_20;
    else
    {
      MR_Integer Var_21;
      MR_Integer Var_23;

{
#define MR_PROC_LABEL mercury__version_bitmap__clear_3_p_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *) BM0_5 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_23  = N;
}
      Var_21 = (MR_Integer) ((MR_Unsigned) Var_23 - (MR_Unsigned) 1);
      {
        mercury__version_array__out_of_bounds_error_3_p_0(Var_10, Var_21, (MR_String) "version_array.lookup");
        return;
      }
    }
{
#define MR_PROC_LABEL mercury__version_bitmap__clear_3_p_0

	MR_Integer Int;
	MR_Integer Rem;

	Int = I_4 ;
		{

    Rem = Int % ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	Var_26  = Rem;
}
    Var_12 = ((MR_Integer) 1 << Var_26);
    Var_11 = ~(Var_12);
    Var_7 = (Var_9 & Var_11);
{
#define MR_PROC_LABEL mercury__version_bitmap__clear_3_p_0

	MR_Integer Int;
	MR_Integer Div;

	Int = I_4 ;
		{

    Div = Int / ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	Var_28  = Div;
}
    Var_8 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_28);
{
#define MR_PROC_LABEL mercury__version_bitmap__clear_3_p_0

	MR_Integer I;
	MR_Word X;
	struct ML_va * VA0;
	struct ML_va * VA;
	MR_bool SUCCESS_INDICATOR;

	I = Var_8 ;
	X = (MR_Word) ((MR_Box) (Var_7)) ;
	VA0 = (struct ML_va *) BM0_5 ;
		{

    SUCCESS_INDICATOR = ML_va_set_dolock(VA0, I, X, &VA, MR_ALLOC_ID);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	Var_29  = (MR_Box) VA;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      *BM_6 = Var_29;
    else
    {
      MR_Integer Var_30;
      MR_Integer Var_32;

{
#define MR_PROC_LABEL mercury__version_bitmap__clear_3_p_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *) BM0_5 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_32  = N;
}
      Var_30 = (MR_Integer) ((MR_Unsigned) Var_32 - (MR_Unsigned) 1);
      {
        mercury__version_array__out_of_bounds_error_3_p_0(Var_8, Var_30, (MR_String) "version_array.set");
        return;
      }
    }
  }
  else
    {
      mercury__require__error_2_p_0((MR_String) "predicate \140version_bitmap.clear\'/3", (MR_String) "out of range");
      return;
    }
}

void MR_CALL 
mercury__version_bitmap__set_3_p_0(
  MR_Integer I_4,
  MR_Box BM0_5,
  MR_Box * BM_6)
{
  MR_bool succeeded = ((MR_Integer) 0 <= I_4);
  MR_Integer Var_16;

  if (succeeded)
  {
    Var_16 = mercury__version_bitmap__num_bits_1_f_0(BM0_5);
    succeeded = (I_4 < Var_16);
  }
  if (succeeded)
  {
    MR_Integer Var_7;
    MR_Integer Var_8;
    MR_Integer Var_9;
    MR_Integer Var_10;
    MR_Integer Var_11;
    MR_Integer Var_18;
    MR_Integer Var_25;
    MR_Integer Var_27;
    MR_Integer Var_19;
    MR_Box conv0_X;
    MR_Box Var_28;

{
#define MR_PROC_LABEL mercury__version_bitmap__set_3_p_0

	MR_Integer Int;
	MR_Integer Div;

	Int = I_4 ;
		{

    Div = Int / ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	Var_18  = Div;
}
    Var_10 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_18);
{
#define MR_PROC_LABEL mercury__version_bitmap__set_3_p_0

	struct ML_va * VA;
	MR_Integer I;
	MR_Word X;
	MR_bool SUCCESS_INDICATOR;

	VA = (struct ML_va *) BM0_5 ;
	I = Var_10 ;
		{

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	conv0_X  = (MR_Box) X;
    Var_19 = ((MR_Integer) (conv0_X));
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      Var_9 = Var_19;
    else
    {
      MR_Integer Var_20;
      MR_Integer Var_22;

{
#define MR_PROC_LABEL mercury__version_bitmap__set_3_p_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *) BM0_5 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_22  = N;
}
      Var_20 = (MR_Integer) ((MR_Unsigned) Var_22 - (MR_Unsigned) 1);
      {
        mercury__version_array__out_of_bounds_error_3_p_0(Var_10, Var_20, (MR_String) "version_array.lookup");
        return;
      }
    }
{
#define MR_PROC_LABEL mercury__version_bitmap__set_3_p_0

	MR_Integer Int;
	MR_Integer Rem;

	Int = I_4 ;
		{

    Rem = Int % ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	Var_25  = Rem;
}
    Var_11 = ((MR_Integer) 1 << Var_25);
    Var_7 = (Var_9 | Var_11);
{
#define MR_PROC_LABEL mercury__version_bitmap__set_3_p_0

	MR_Integer Int;
	MR_Integer Div;

	Int = I_4 ;
		{

    Div = Int / ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	Var_27  = Div;
}
    Var_8 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_27);
{
#define MR_PROC_LABEL mercury__version_bitmap__set_3_p_0

	MR_Integer I;
	MR_Word X;
	struct ML_va * VA0;
	struct ML_va * VA;
	MR_bool SUCCESS_INDICATOR;

	I = Var_8 ;
	X = (MR_Word) ((MR_Box) (Var_7)) ;
	VA0 = (struct ML_va *) BM0_5 ;
		{

    SUCCESS_INDICATOR = ML_va_set_dolock(VA0, I, X, &VA, MR_ALLOC_ID);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	Var_28  = (MR_Box) VA;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      *BM_6 = Var_28;
    else
    {
      MR_Integer Var_29;
      MR_Integer Var_31;

{
#define MR_PROC_LABEL mercury__version_bitmap__set_3_p_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *) BM0_5 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_31  = N;
}
      Var_29 = (MR_Integer) ((MR_Unsigned) Var_31 - (MR_Unsigned) 1);
      {
        mercury__version_array__out_of_bounds_error_3_p_0(Var_8, Var_29, (MR_String) "version_array.set");
        return;
      }
    }
  }
  else
    {
      mercury__require__error_2_p_0((MR_String) "predicate \140version_bitmap.set\'/3", (MR_String) "out of range");
      return;
    }
}

MR_Word MR_CALL 
mercury__version_bitmap__bit_2_f_0(
  MR_Integer I_4,
  MR_Box BM_5)
{
  MR_bool succeeded;
  MR_Word Bit_6;

  succeeded = mercury__version_bitmap__is_set_2_p_0(BM_5, I_4);
  if (succeeded)
    Bit_6 = (MR_Integer) 1;
  else
    Bit_6 = (MR_Integer) 0;
  return Bit_6;
}

void MR_CALL 
mercury__version_bitmap__get_bit_3_p_0(
  MR_Box BM_4,
  MR_Integer I_5,
  MR_Word * Bit_6)
{
  MR_bool succeeded;

  succeeded = mercury__version_bitmap__is_set_2_p_0(BM_4, I_5);
  if (succeeded)
    *Bit_6 = (MR_Integer) 1;
  else
    *Bit_6 = (MR_Integer) 0;
}

MR_bool MR_CALL 
mercury__version_bitmap__is_set_2_p_0(
  MR_Box BM_3,
  MR_Integer I_4)
{
  MR_bool succeeded = ((MR_Integer) 0 <= I_4);
  MR_Integer Var_13;

  if (succeeded)
  {
    Var_13 = mercury__version_bitmap__num_bits_1_f_0(BM_3);
    succeeded = (I_4 < Var_13);
  }
  if (succeeded)
  {
    MR_Integer Var_5;
    MR_Integer Var_6;
    MR_Integer Var_7;
    MR_Integer Var_8;
    MR_Integer Var_15;
    MR_Integer Var_22;
    MR_Integer Var_16;
    MR_Box conv0_X;

{
#define MR_PROC_LABEL mercury__version_bitmap__is_set_2_p_0

	MR_Integer Int;
	MR_Integer Div;

	Int = I_4 ;
		{

    Div = Int / ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	Var_15  = Div;
}
    Var_7 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_15);
{
#define MR_PROC_LABEL mercury__version_bitmap__is_set_2_p_0

	struct ML_va * VA;
	MR_Integer I;
	MR_Word X;
	MR_bool SUCCESS_INDICATOR;

	VA = (struct ML_va *) BM_3 ;
	I = Var_7 ;
		{

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	conv0_X  = (MR_Box) X;
    Var_16 = ((MR_Integer) (conv0_X));
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      Var_6 = Var_16;
    else
    {
      MR_Integer Var_17;
      MR_Integer Var_19;

{
#define MR_PROC_LABEL mercury__version_bitmap__is_set_2_p_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *) BM_3 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_19  = N;
}
      Var_17 = (MR_Integer) ((MR_Unsigned) Var_19 - (MR_Unsigned) 1);
      mercury__version_array__out_of_bounds_error_3_p_0(Var_7, Var_17, (MR_String) "version_array.lookup");
    }
{
#define MR_PROC_LABEL mercury__version_bitmap__is_set_2_p_0

	MR_Integer Int;
	MR_Integer Rem;

	Int = I_4 ;
		{

    Rem = Int % ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	Var_22  = Rem;
}
    Var_8 = ((MR_Integer) 1 << Var_22);
    Var_5 = (Var_6 & Var_8);
    succeeded = (Var_5 != (MR_Integer) 0);
  }
  else
  {
    mercury__require__error_2_p_0((MR_String) "predicate \140version_bitmap.is_set\'/2", (MR_String) "out of range");
    succeeded = MR_TRUE;
  }
  return succeeded;
}

MR_Box MR_CALL 
mercury__version_bitmap__resize_3_f_0(
  MR_Box BM0_5,
  MR_Integer N_6,
  MR_Word B_7)
{
  MR_Box BM_8;

  mercury__version_bitmap__resize_4_p_0(N_6, B_7, BM0_5, &BM_8);
  return BM_8;
}

void MR_CALL 
mercury__version_bitmap__resize_4_p_0(
  MR_Integer N_5,
  MR_Word B_6,
  MR_Box BM0_7,
  MR_Box * BM_8)
{
  MR_bool succeeded = (N_5 <= (MR_Integer) 0);

  if (succeeded)
    *BM_8 = mercury__version_bitmap__init_2_f_0(N_5, B_6);
  else
  {
    MR_Integer X_9;
    MR_Integer NumInts_10;
    MR_Box BM1_11;
    MR_Integer M_12;
    MR_Integer Offset_13;
    MR_Integer Mask_14;
    MR_Integer Bits_15;
    MR_Box BM2_16;
    MR_Integer Var_18;
    MR_Integer Var_19;
    MR_Integer Var_21;
    MR_Integer Var_23;
    MR_Box Var_24;
    MR_Integer Var_25;
    MR_Integer Var_27;
    MR_Integer Var_28;
    MR_Integer Var_32;
    MR_Integer Var_37;
    MR_Integer BitMask_38;
    MR_Integer Var_39;
    MR_Integer Var_42;
    MR_Box Var_43;
    MR_Integer Var_48;
    MR_Box conv0_X;
    MR_Box Var_53;

    switch (B_6) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        X_9 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        X_9 = ~((MR_Integer) 0);
        break;
    }
    succeeded = (N_5 > (MR_Integer) 0);
    if (succeeded)
    {
      MR_Integer Var_35;

{
#define MR_PROC_LABEL mercury__version_bitmap__resize_4_p_0

	MR_Integer Int;
	MR_Integer Div;

	Int = N_5 ;
		{

    Div = Int / ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	Var_35  = Div;
}
      Var_32 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_35);
    }
    else
      Var_32 = (MR_Integer) 0;
    NumInts_10 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_32);
{
#define MR_PROC_LABEL mercury__version_bitmap__resize_4_p_0

	struct ML_va * VA0;
	MR_Integer N;
	MR_Word X;
	struct ML_va * VA;

	VA0 = (struct ML_va *) BM0_7 ;
	N = NumInts_10 ;
	X = (MR_Word) ((MR_Box) (X_9)) ;
		{

    VA = ML_va_resize_dolock(VA0, N, X, MR_ALLOC_ID);


		;}
#undef MR_PROC_LABEL
	BM1_11  = (MR_Box) VA;
}
    Var_18 = mercury__version_bitmap__num_bits_1_f_0(BM0_7);
    succeeded = (Var_18 < N_5);
    if (succeeded)
      M_12 = Var_18;
    else
      M_12 = N_5;
    Var_19 = (MR_Integer) ((MR_Unsigned) M_12 - (MR_Unsigned) 1);
{
#define MR_PROC_LABEL mercury__version_bitmap__resize_4_p_0

	MR_Integer Int;
	MR_Integer Div;

	Int = Var_19 ;
		{

    Div = Int / ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	Var_37  = Div;
}
    Offset_13 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_37);
    Var_21 = (MR_Integer) ((MR_Unsigned) M_12 - (MR_Unsigned) 1);
{
#define MR_PROC_LABEL mercury__version_bitmap__resize_4_p_0

	MR_Integer Int;
	MR_Integer Rem;

	Int = Var_21 ;
		{

    Rem = Int % ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	Var_42  = Rem;
}
    BitMask_38 = ((MR_Integer) 1 << Var_42);
    Var_39 = (MR_Integer) ((MR_Unsigned) BitMask_38 - (MR_Unsigned) 1);
    Mask_14 = (BitMask_38 | Var_39);
    Var_23 = ~(Mask_14);
    Bits_15 = (Var_23 & X_9);
{
#define MR_PROC_LABEL mercury__version_bitmap__resize_4_p_0

	MR_Integer I;
	MR_Word X;
	struct ML_va * VA0;
	struct ML_va * VA;
	MR_bool SUCCESS_INDICATOR;

	I = (MR_Integer) 0 ;
	X = (MR_Word) ((MR_Box) (N_5)) ;
	VA0 = (struct ML_va *) BM1_11 ;
		{

    SUCCESS_INDICATOR = ML_va_set_dolock(VA0, I, X, &VA, MR_ALLOC_ID);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	Var_43  = (MR_Box) VA;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      Var_24 = Var_43;
    else
    {
      MR_Integer Var_44;
      MR_Integer Var_46;

{
#define MR_PROC_LABEL mercury__version_bitmap__resize_4_p_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *) BM1_11 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_46  = N;
}
      Var_44 = (MR_Integer) ((MR_Unsigned) Var_46 - (MR_Unsigned) 1);
      {
        mercury__version_array__out_of_bounds_error_3_p_0((MR_Integer) 0, Var_44, (MR_String) "version_array.set");
        return;
      }
    }
{
#define MR_PROC_LABEL mercury__version_bitmap__resize_4_p_0

	struct ML_va * VA;
	MR_Integer I;
	MR_Word X;
	MR_bool SUCCESS_INDICATOR;

	VA = (struct ML_va *) BM1_11 ;
	I = Offset_13 ;
		{

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	conv0_X  = (MR_Box) X;
    Var_48 = ((MR_Integer) (conv0_X));
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      Var_28 = Var_48;
    else
    {
      MR_Integer Var_49;
      MR_Integer Var_51;

{
#define MR_PROC_LABEL mercury__version_bitmap__resize_4_p_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *) BM1_11 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_51  = N;
}
      Var_49 = (MR_Integer) ((MR_Unsigned) Var_51 - (MR_Unsigned) 1);
      {
        mercury__version_array__out_of_bounds_error_3_p_0(Offset_13, Var_49, (MR_String) "version_array.lookup");
        return;
      }
    }
    Var_27 = (Var_28 & Mask_14);
    Var_25 = (Var_27 | Bits_15);
{
#define MR_PROC_LABEL mercury__version_bitmap__resize_4_p_0

	MR_Integer I;
	MR_Word X;
	struct ML_va * VA0;
	struct ML_va * VA;
	MR_bool SUCCESS_INDICATOR;

	I = Offset_13 ;
	X = (MR_Word) ((MR_Box) (Var_25)) ;
	VA0 = (struct ML_va *) Var_24 ;
		{

    SUCCESS_INDICATOR = ML_va_set_dolock(VA0, I, X, &VA, MR_ALLOC_ID);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	Var_53  = (MR_Box) VA;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      BM2_16 = Var_53;
    else
    {
      MR_Integer Var_54;
      MR_Integer Var_56;

{
#define MR_PROC_LABEL mercury__version_bitmap__resize_4_p_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *) Var_24 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_56  = N;
}
      Var_54 = (MR_Integer) ((MR_Unsigned) Var_56 - (MR_Unsigned) 1);
      {
        mercury__version_array__out_of_bounds_error_3_p_0(Offset_13, Var_54, (MR_String) "version_array.set");
        return;
      }
    }
    *BM_8 = mercury__version_bitmap__clear_filler_bits_1_f_0(BM2_16);
  }
}

MR_Box MR_CALL 
mercury__version_bitmap__init_2_f_0(
  MR_Integer N_4,
  MR_Word B_5)
{
  MR_bool succeeded = (N_4 < (MR_Integer) 0);
  MR_Box BM_6;

  if (succeeded)
    mercury__require__error_2_p_0((MR_String) "function \140version_bitmap.init\'/2", (MR_String) "negative size");
  else
  {
    MR_Integer X_7;
    MR_Box BM0_8;
    MR_Box Var_12;
    MR_Integer Var_14;
    MR_Integer Var_18;
    MR_Box Var_22;

    switch (B_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        X_7 = (MR_Integer) 0;
        break;
      case (MR_Integer) 1:
        X_7 = ~((MR_Integer) 0);
        break;
    }
    succeeded = (N_4 > (MR_Integer) 0);
    if (succeeded)
    {
      MR_Integer Var_21;

{
#define MR_PROC_LABEL mercury__version_bitmap__init_2_f_0

	MR_Integer Int;
	MR_Integer Div;

	Int = N_4 ;
		{

    Div = Int / ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	Var_21  = Div;
}
      Var_18 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_21);
    }
    else
      Var_18 = (MR_Integer) 0;
    Var_14 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_18);
    Var_12 = mercury__version_array__init_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), Var_14, ((MR_Box) (X_7)));
{
#define MR_PROC_LABEL mercury__version_bitmap__init_2_f_0

	MR_Integer I;
	MR_Word X;
	struct ML_va * VA0;
	struct ML_va * VA;
	MR_bool SUCCESS_INDICATOR;

	I = (MR_Integer) 0 ;
	X = (MR_Word) ((MR_Box) (N_4)) ;
	VA0 = (struct ML_va *) Var_12 ;
		{

    SUCCESS_INDICATOR = ML_va_set_dolock(VA0, I, X, &VA, MR_ALLOC_ID);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	Var_22  = (MR_Box) VA;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      BM0_8 = Var_22;
    else
    {
      MR_Integer Var_23;
      MR_Integer Var_25;

{
#define MR_PROC_LABEL mercury__version_bitmap__init_2_f_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *) Var_12 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_25  = N;
}
      Var_23 = (MR_Integer) ((MR_Unsigned) Var_25 - (MR_Unsigned) 1);
      mercury__version_array__out_of_bounds_error_3_p_0((MR_Integer) 0, Var_23, (MR_String) "version_array.set");
    }
    BM_6 = mercury__version_bitmap__clear_filler_bits_1_f_0(BM0_8);
  }
  return BM_6;
}

MR_Box MR_CALL 
mercury__version_bitmap__clear_filler_bits_1_f_0(
  MR_Box BM0_3)
{
  MR_bool succeeded;
  MR_Box BM_4;
  MR_Integer N_5;

  N_5 = mercury__version_bitmap__num_bits_1_f_0(BM0_3);
  succeeded = (N_5 > (MR_Integer) 0);
  if (succeeded)
  {
    MR_Integer Last_6;
    MR_Integer Ksam_7;
    MR_Integer Var_9 = (MR_Integer) ((MR_Unsigned) N_5 - (MR_Unsigned) 1);
    MR_Integer Var_11;
    MR_Integer Var_13;
    MR_Integer Var_14;
    MR_Integer Var_17;
    MR_Integer BitMask_18;
    MR_Integer Var_19;
    MR_Integer Var_22;
    MR_Integer Var_23;
    MR_Box conv0_X;
    MR_Box Var_28;

{
#define MR_PROC_LABEL mercury__version_bitmap__clear_filler_bits_1_f_0

	MR_Integer Int;
	MR_Integer Div;

	Int = Var_9 ;
		{

    Div = Int / ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	Var_17  = Div;
}
    Last_6 = (MR_Integer) ((MR_Unsigned) 1 + (MR_Unsigned) Var_17);
    Var_11 = (MR_Integer) ((MR_Unsigned) N_5 - (MR_Unsigned) 1);
{
#define MR_PROC_LABEL mercury__version_bitmap__clear_filler_bits_1_f_0

	MR_Integer Int;
	MR_Integer Rem;

	Int = Var_11 ;
		{

    Rem = Int % ML_BITS_PER_INT;


		;}
#undef MR_PROC_LABEL
	Var_22  = Rem;
}
    BitMask_18 = ((MR_Integer) 1 << Var_22);
    Var_19 = (MR_Integer) ((MR_Unsigned) BitMask_18 - (MR_Unsigned) 1);
    Ksam_7 = (BitMask_18 | Var_19);
{
#define MR_PROC_LABEL mercury__version_bitmap__clear_filler_bits_1_f_0

	struct ML_va * VA;
	MR_Integer I;
	MR_Word X;
	MR_bool SUCCESS_INDICATOR;

	VA = (struct ML_va *) BM0_3 ;
	I = Last_6 ;
		{

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	conv0_X  = (MR_Box) X;
    Var_23 = ((MR_Integer) (conv0_X));
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      Var_14 = Var_23;
    else
    {
      MR_Integer Var_24;
      MR_Integer Var_26;

{
#define MR_PROC_LABEL mercury__version_bitmap__clear_filler_bits_1_f_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *) BM0_3 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_26  = N;
}
      Var_24 = (MR_Integer) ((MR_Unsigned) Var_26 - (MR_Unsigned) 1);
      mercury__version_array__out_of_bounds_error_3_p_0(Last_6, Var_24, (MR_String) "version_array.lookup");
    }
    Var_13 = (Var_14 & Ksam_7);
{
#define MR_PROC_LABEL mercury__version_bitmap__clear_filler_bits_1_f_0

	MR_Integer I;
	MR_Word X;
	struct ML_va * VA0;
	struct ML_va * VA;
	MR_bool SUCCESS_INDICATOR;

	I = Last_6 ;
	X = (MR_Word) ((MR_Box) (Var_13)) ;
	VA0 = (struct ML_va *) BM0_3 ;
		{

    SUCCESS_INDICATOR = ML_va_set_dolock(VA0, I, X, &VA, MR_ALLOC_ID);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	Var_28  = (MR_Box) VA;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      BM_4 = Var_28;
    else
    {
      MR_Integer Var_29;
      MR_Integer Var_31;

{
#define MR_PROC_LABEL mercury__version_bitmap__clear_filler_bits_1_f_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *) BM0_3 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_31  = N;
}
      Var_29 = (MR_Integer) ((MR_Unsigned) Var_31 - (MR_Unsigned) 1);
      mercury__version_array__out_of_bounds_error_3_p_0(Last_6, Var_29, (MR_String) "version_array.set");
    }
  }
  else
    BM_4 = BM0_3;
  return BM_4;
}

MR_Integer MR_CALL 
mercury__version_bitmap__num_bits_1_f_0(
  MR_Box BM_3)
{
  MR_bool succeeded;
  MR_Integer NumBits_4;
  MR_Integer Var_7;
  MR_Box conv0_X;

{
#define MR_PROC_LABEL mercury__version_bitmap__num_bits_1_f_0

	struct ML_va * VA;
	MR_Integer I;
	MR_Word X;
	MR_bool SUCCESS_INDICATOR;

	VA = (struct ML_va *) BM_3 ;
	I = (MR_Integer) 0 ;
		{

    SUCCESS_INDICATOR = ML_va_get_dolock(VA, I, &X);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	conv0_X  = (MR_Box) X;
  Var_7 = ((MR_Integer) (conv0_X));
	}
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    NumBits_4 = Var_7;
  else
  {
    MR_Integer Var_8;
    MR_Integer Var_10;

{
#define MR_PROC_LABEL mercury__version_bitmap__num_bits_1_f_0

	struct ML_va * VA;
	MR_Integer N;

	VA = (struct ML_va *) BM_3 ;
		{

    N = ML_va_size_dolock(VA);


		;}
#undef MR_PROC_LABEL
	Var_10  = N;
}
    Var_8 = (MR_Integer) ((MR_Unsigned) Var_10 - (MR_Unsigned) 1);
    mercury__version_array__out_of_bounds_error_3_p_0((MR_Integer) 0, Var_8, (MR_String) "version_array.lookup");
  }
  return NumBits_4;
}

static MR_bool MR_CALL 
mercury__version_bitmap____Unify____version_bitmap_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__version_bitmap____Unify____version_bitmap_0_0(((MR_Box) (wrapper_arg_1)), ((MR_Box) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__version_bitmap____Compare____version_bitmap_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__version_bitmap____Compare____version_bitmap_0_0(&conv0_HeadVar__1_1, ((MR_Box) (wrapper_arg_2)), ((MR_Box) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__version_bitmap__init(void)
{
}

void mercury__version_bitmap__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&mercury__version_bitmap__version_bitmap__type_ctor_info_version_bitmap_0);
}

void mercury__version_bitmap__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__version_bitmap__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module version_bitmap.
