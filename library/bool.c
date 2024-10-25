/*
** Automatically generated from `bool.m'
** by the Mercury compiler,
** version rotd-2024-10-25
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


// :- module bool.
// :- implementation.

/*
INIT mercury__bool__init
ENDINIT
*/

#include "bool.mih"


#include "array.mih"
#include "assoc_list.mih"
#include "benchmarking.mih"
#include "bitmap.mih"
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




static const MR_EnumFunctorDesc mercury__bool__bool__enum_functor_desc_bool_0_0;

static const MR_EnumFunctorDesc mercury__bool__bool__enum_functor_desc_bool_0_1;

static const MR_EnumFunctorDescPtr mercury__bool__bool__enum_ordinal_ordered_bool_0[2];

static const MR_EnumFunctorDescPtr mercury__bool__bool__enum_name_ordered_bool_0[2];

static const MR_Integer mercury__bool__bool__functor_number_map_bool_0[2];

static MR_bool MR_CALL 
mercury__bool____Unify____bool_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__bool____Compare____bool_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_Box MR_CALL 
mercury__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__to_int_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1);

static MR_bool MR_CALL 
mercury__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__from_int_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2);


static /* final */ const MR_Box mercury__bool_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__bool_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__bool_scalar_common_3[1][5];




static /* final */ const MR_Box mercury__bool_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__bool_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__bool_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__bool_scalar_common_3[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__bool_scalar_common_2[0])),
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


static const MR_EnumFunctorDesc mercury__bool__bool__enum_functor_desc_bool_0_0 = {
  (MR_String) "no",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mercury__bool__bool__enum_functor_desc_bool_0_1 = {
  (MR_String) "yes",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr mercury__bool__bool__enum_ordinal_ordered_bool_0[2] = {
  &mercury__bool__bool__enum_functor_desc_bool_0_0,
  &mercury__bool__bool__enum_functor_desc_bool_0_1
};

static const MR_EnumFunctorDescPtr mercury__bool__bool__enum_name_ordered_bool_0[2] = {
  &mercury__bool__bool__enum_functor_desc_bool_0_0,
  &mercury__bool__bool__enum_functor_desc_bool_0_1
};

static const MR_Integer mercury__bool__bool__functor_number_map_bool_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__bool__bool__type_ctor_info_bool_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__bool____Unify____bool_0_0_10001)),
  ((MR_Box) (mercury__bool____Compare____bool_0_0_10001)),
  (MR_String) "bool",
  (MR_String) "bool",
  { mercury__bool__bool__enum_name_ordered_bool_0 },
  { mercury__bool__bool__enum_ordinal_ordered_bool_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__bool__bool__functor_number_map_bool_0,

};

const MR_BaseTypeclassInfo base_typeclass_info_enum__enum__arity1__bool__bool__arity0__[7] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 2)),
  ((MR_Box) (mercury__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__to_int_1_1_f_0_10001)),
  ((MR_Box) (mercury__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__from_int_2_2_p_0_10001))
};

MR_bool MR_CALL 
mercury__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__from_int_2_2_p_0(
  MR_Integer Int_4,
  MR_Word * Bool_3)
{
  MR_bool succeeded;

  switch (Int_4) {
    default:
      succeeded = MR_FALSE;
      break;
    case (MR_Integer) 0:
      {
        *Bool_3 = (MR_Integer) 0;
        succeeded = MR_TRUE;
      }
      break;
    case (MR_Integer) 1:
      {
        *Bool_3 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      break;
  }
  return succeeded;
}

MR_Integer MR_CALL 
mercury__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__to_int_1_1_f_0(
  MR_Word Bool_3)
{
  MR_Integer Int_4;

  switch (Bool_3) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Int_4 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      Int_4 = (MR_Integer) 1;
      break;
  }
  return Int_4;
}

void MR_CALL 
mercury__bool____Compare____bool_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
  MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

  succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 2;
    else
      *HeadVar__1_1 = (MR_Integer) 0;
  }
}

MR_bool MR_CALL 
mercury__bool____Unify____bool_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

MR_Word MR_CALL 
mercury__bool__pred_to_bool_1_f_0(
  MR_Word P_3)
{
  MR_bool succeeded;
  MR_Word HeadVar__2_2;
  MR_bool MR_CALL (* func_0)(MR_Box) = ((MR_bool MR_CALL (*)(MR_Box)) ((MR_hl_field(0, P_3, (MR_Integer) 1))));

  succeeded = func_0(((MR_Box) (P_3)));
  if (succeeded)
    HeadVar__2_2 = (MR_Integer) 1;
  else
    HeadVar__2_2 = (MR_Integer) 0;
  return HeadVar__2_2;
}

MR_Word MR_CALL 
mercury__bool__and_list_1_f_0(
  MR_Word List_3)
{
  MR_Word Result_4;

  mercury__bool__and_list_2_p_0(List_3, &Result_4);
  return Result_4;
}

void MR_CALL 
mercury__bool__and_list_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__2_2 = (MR_Integer) 1;
    else
    {
      MR_Word Bool_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Bools_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));

      switch (Bool_3) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          {
            MR_Word next_value_of_HeadVar__1_1 = Bools_4;

            // direct tailcall eliminated
            ;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
          break;
      }
    }
    break;
  }
}

MR_Word MR_CALL 
mercury__bool__or_list_1_f_0(
  MR_Word List_3)
{
  MR_Word Result_4;

  mercury__bool__or_list_2_p_0(List_3, &Result_4);
  return Result_4;
}

void MR_CALL 
mercury__bool__or_list_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__2_2 = (MR_Integer) 0;
    else
    {
      MR_Word Bool_3 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Bools_4 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 1))));

      switch (Bool_3) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word next_value_of_HeadVar__1_1 = Bools_4;

            // direct tailcall eliminated
            ;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            continue;
          }
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Integer) 1;
          break;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__bool__and_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Bool_2,
  MR_Word * HeadVar__3_3)
{
  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *HeadVar__3_3 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      *HeadVar__3_3 = Bool_2;
      break;
  }
}

MR_Word MR_CALL 
mercury__bool__and_2_f_0(
  MR_Word X_4,
  MR_Word Y_5)
{
  MR_Word Result_6;

  switch (X_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Result_6 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      Result_6 = Y_5;
      break;
  }
  return Result_6;
}

MR_Word MR_CALL 
mercury__bool__xor_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (HeadVar__2_2) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          HeadVar__3_3 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          HeadVar__3_3 = (MR_Integer) 1;
          break;
      }
      break;
    case (MR_Integer) 1:
      switch (HeadVar__2_2) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          HeadVar__3_3 = (MR_Integer) 1;
          break;
        case (MR_Integer) 1:
          HeadVar__3_3 = (MR_Integer) 0;
          break;
      }
      break;
  }
  return HeadVar__3_3;
}

void MR_CALL 
mercury__bool__or_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Bool_2,
  MR_Word * HeadVar__3_3)
{
  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *HeadVar__3_3 = Bool_2;
      break;
    case (MR_Integer) 1:
      *HeadVar__3_3 = (MR_Integer) 1;
      break;
  }
}

MR_Word MR_CALL 
mercury__bool__or_2_f_0(
  MR_Word X_4,
  MR_Word Y_5)
{
  MR_Word Result_6;

  switch (X_4) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Result_6 = Y_5;
      break;
    case (MR_Integer) 1:
      Result_6 = (MR_Integer) 1;
      break;
  }
  return Result_6;
}

void MR_CALL 
mercury__bool__not_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      *HeadVar__2_2 = (MR_Integer) 1;
      break;
    case (MR_Integer) 1:
      *HeadVar__2_2 = (MR_Integer) 0;
      break;
  }
}

MR_Word MR_CALL 
mercury__bool__not_1_f_0(
  MR_Word X_3)
{
  MR_Word Result_4;

  switch (X_3) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      Result_4 = (MR_Integer) 1;
      break;
    case (MR_Integer) 1:
      Result_4 = (MR_Integer) 0;
      break;
  }
  return Result_4;
}

static MR_bool MR_CALL 
mercury__bool____Unify____bool_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__bool____Unify____bool_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__bool____Compare____bool_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__bool____Compare____bool_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_Box MR_CALL 
mercury__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__to_int_1_1_f_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1)
{
  MR_Box wrapper_arg_2;
  MR_Box closure = closure_arg;
  MR_Integer conv0_Int_4;

  conv0_Int_4 = mercury__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__to_int_1_1_f_0(((MR_Word) (wrapper_arg_1)));
  wrapper_arg_2 = ((MR_Box) (conv0_Int_4));
  return wrapper_arg_2;
}

static MR_bool MR_CALL 
mercury__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__from_int_2_2_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;
  MR_Word conv0_Bool_3;

  succeeded = mercury__bool__ClassMethod_for_enum__enum____bool__bool__arity0______enum__from_int_2_2_p_0(((MR_Integer) (wrapper_arg_1)), &conv0_Bool_3);
  if (succeeded)
  {
    *wrapper_arg_2 = ((MR_Box) (conv0_Bool_3));
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void mercury__bool__init(void)
{
}

void mercury__bool__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__bool__bool__type_ctor_info_bool_0);
}

void mercury__bool__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__bool__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module bool.
