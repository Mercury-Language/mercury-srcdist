/*
** Automatically generated from `prolog.m'
** by the Mercury compiler,
** version rotd-2024-10-02
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


// :- module prolog.
// :- implementation.

/*
INIT mercury__prolog__init
ENDINIT
*/

#include "prolog.mih"


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




static const MR_FA_TypeInfo_Struct1 mercury__prolog__list__ti_list_1univ__type_ctor_info_univ_0;

static const MR_FA_TypeInfo_Struct2 mercury__prolog__pair__ti_pair_2builtin__type_ctor_info_string_0list__ti_list_1univ__type_ctor_info_univ_0;

static MR_bool MR_CALL 
mercury__prolog____Unify____univ_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__prolog____Compare____univ_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mercury__prolog_scalar_common_1[1][2];

static /* final */ const MR_Box mercury__prolog_scalar_common_2[2][3];

static /* final */ const MR_Box mercury__prolog_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__prolog_scalar_common_4[1][5];




static /* final */ const MR_Box mercury__prolog_scalar_common_1[1][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__univ__univ__type_ctor_info_univ_0))
  },
};

static /* final */ const MR_Box mercury__prolog_scalar_common_2[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__prolog_scalar_common_1[0]))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__prolog_scalar_common_3[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__prolog_scalar_common_2[1])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__prolog_scalar_common_4[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__prolog_scalar_common_3[0])),
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


static const MR_FA_TypeInfo_Struct1 mercury__prolog__list__ti_list_1univ__type_ctor_info_univ_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__univ__univ__type_ctor_info_univ_0) }
};

static const MR_FA_TypeInfo_Struct2 mercury__prolog__pair__ti_pair_2builtin__type_ctor_info_string_0list__ti_list_1univ__type_ctor_info_univ_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_TypeInfo) (&mercury__prolog__list__ti_list_1univ__type_ctor_info_univ_0)
  }
};

const MR_TypeCtorInfo_Struct mercury__prolog__prolog__type_ctor_info_univ_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__prolog____Unify____univ_result_0_0_10001)),
  ((MR_Box) (mercury__prolog____Compare____univ_result_0_0_10001)),
  (MR_String) "prolog",
  (MR_String) "univ_result",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__prolog__pair__ti_pair_2builtin__type_ctor_info_string_0list__ti_list_1univ__type_ctor_info_univ_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
mercury__prolog____Compare____univ_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&mercury__prolog_scalar_common_2[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
mercury__prolog____Unify____univ_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mercury__prolog_scalar_common_2[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
  return succeeded;
}

void MR_CALL 
mercury__prolog__told_binary_2_p_0(void)
{
  MR_bool succeeded;
  MR_Box Var_10;
  MR_Box Var_12;
  MR_Box Var_15;

{
#define MR_PROC_LABEL mercury__prolog__told_binary_2_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdout_binary;


		;}
#undef MR_PROC_LABEL
	Var_10  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__prolog__told_binary_2_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr)Var_10 ;
		{

    OutStream = mercury_current_binary_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_binary_output_index);


		;}
#undef MR_PROC_LABEL
	Var_12  = (MR_Box) OutStream;
}
  mercury__io__stream_db__maybe_delete_stream_info_3_p_0(Var_12);
{
#define MR_PROC_LABEL mercury__prolog__told_binary_2_p_0

	MercuryFilePtr Stream;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Var_12 ;
		{

    if (mercury_close(Stream) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	Var_15  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__prolog__told_binary_2_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Var_15 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (!(succeeded))
  {
    MR_Word Var_18;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Var_15, (MR_String) "error closing file: ", &Var_18);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Var_18)));
      return;
    }
  }
}

void MR_CALL 
mercury__prolog__told_2_p_0(void)
{
  MR_bool succeeded;
  MR_Box Var_10;
  MR_Box Var_12;
  MR_Box Var_15;

{
#define MR_PROC_LABEL mercury__prolog__told_2_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdout;


		;}
#undef MR_PROC_LABEL
	Var_10  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__prolog__told_2_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr)Var_10 ;
		{

    OutStream = mercury_current_text_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_output_index);


		;}
#undef MR_PROC_LABEL
	Var_12  = (MR_Box) OutStream;
}
  mercury__io__stream_db__maybe_delete_stream_info_3_p_0(Var_12);
{
#define MR_PROC_LABEL mercury__prolog__told_2_p_0

	MercuryFilePtr Stream;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Var_12 ;
		{

    if (mercury_close(Stream) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	Var_15  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__prolog__told_2_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Var_15 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (!(succeeded))
  {
    MR_Word Var_18;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Var_15, (MR_String) "error closing file: ", &Var_18);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Var_18)));
      return;
    }
  }
}

void MR_CALL 
mercury__prolog__tell_binary_4_p_0(
  MR_String File_5,
  MR_Word * Result_6)
{
  MR_Word Result0_8;

  mercury__io__open_binary_output_4_p_0(File_5, &Result0_8);
  if (((MR_tag((MR_Word) Result0_8)) == (MR_Integer) 1))
  {
    MR_Word Msg_11 = ((MR_Word) ((MR_hl_field(1, Result0_8, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Msg_11));
    }
  }
  else
  {
    MR_Word Stream_9 = ((MR_Word) ((MR_hl_field(0, Result0_8, (MR_Integer) 0))));
    MR_Box Var_15 = (MR_Box) (Stream_9);
    MR_Box Var_16;

{
#define MR_PROC_LABEL mercury__prolog__tell_binary_4_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr)Var_15 ;
		{

    OutStream = mercury_current_binary_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_binary_output_index);


		;}
#undef MR_PROC_LABEL
	Var_16  = (MR_Box) OutStream;
}
    *Result_6 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

void MR_CALL 
mercury__prolog__tell_4_p_0(
  MR_String File_5,
  MR_Word * Result_6)
{
  MR_Word Result0_8;

  mercury__io__open_output_4_p_0(File_5, &Result0_8);
  if (((MR_tag((MR_Word) Result0_8)) == (MR_Integer) 1))
  {
    MR_Word Msg_11 = ((MR_Word) ((MR_hl_field(1, Result0_8, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Msg_11));
    }
  }
  else
  {
    MR_Word Stream_9 = ((MR_Word) ((MR_hl_field(0, Result0_8, (MR_Integer) 0))));
    MR_Box Var_15 = (MR_Box) (Stream_9);
    MR_Box Var_16;

{
#define MR_PROC_LABEL mercury__prolog__tell_4_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr)Var_15 ;
		{

    OutStream = mercury_current_text_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_output_index);


		;}
#undef MR_PROC_LABEL
	Var_16  = (MR_Box) OutStream;
}
    *Result_6 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

void MR_CALL 
mercury__prolog__seen_binary_2_p_0(void)
{
  MR_bool succeeded;
  MR_Box Var_10;
  MR_Box Var_12;
  MR_Box Var_15;

{
#define MR_PROC_LABEL mercury__prolog__seen_binary_2_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdin_binary;


		;}
#undef MR_PROC_LABEL
	Var_10  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__prolog__seen_binary_2_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr)Var_10 ;
		{

    OutStream = mercury_current_binary_input();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_binary_input_index);


		;}
#undef MR_PROC_LABEL
	Var_12  = (MR_Box) OutStream;
}
  mercury__io__stream_db__maybe_delete_stream_info_3_p_0(Var_12);
{
#define MR_PROC_LABEL mercury__prolog__seen_binary_2_p_0

	MercuryFilePtr Stream;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Var_12 ;
		{

    if (mercury_close(Stream) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	Var_15  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__prolog__seen_binary_2_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Var_15 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (!(succeeded))
  {
    MR_Word Var_18;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Var_15, (MR_String) "error closing file: ", &Var_18);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Var_18)));
      return;
    }
  }
}

void MR_CALL 
mercury__prolog__seen_2_p_0(void)
{
  MR_bool succeeded;
  MR_Box Var_10;
  MR_Box Var_12;
  MR_Box Var_15;

{
#define MR_PROC_LABEL mercury__prolog__seen_2_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdin;


		;}
#undef MR_PROC_LABEL
	Var_10  = (MR_Box) Stream;
}
{
#define MR_PROC_LABEL mercury__prolog__seen_2_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr)Var_10 ;
		{

    OutStream = mercury_current_text_input();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_input_index);


		;}
#undef MR_PROC_LABEL
	Var_12  = (MR_Box) OutStream;
}
  mercury__io__stream_db__maybe_delete_stream_info_3_p_0(Var_12);
{
#define MR_PROC_LABEL mercury__prolog__seen_2_p_0

	MercuryFilePtr Stream;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Var_12 ;
		{

    if (mercury_close(Stream) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	Var_15  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__prolog__seen_2_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Var_15 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (!(succeeded))
  {
    MR_Word Var_18;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Var_15, (MR_String) "error closing file: ", &Var_18);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (Var_18)));
      return;
    }
  }
}

void MR_CALL 
mercury__prolog__see_binary_4_p_0(
  MR_String File_5,
  MR_Word * Result_6)
{
  MR_Word Result0_8;

  mercury__io__open_binary_input_4_p_0(File_5, &Result0_8);
  if (((MR_tag((MR_Word) Result0_8)) == (MR_Integer) 1))
  {
    MR_Word Error_11 = ((MR_Word) ((MR_hl_field(1, Result0_8, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Error_11));
    }
  }
  else
  {
    MR_Word Stream_9 = ((MR_Word) ((MR_hl_field(0, Result0_8, (MR_Integer) 0))));
    MR_Box Var_15 = (MR_Box) (Stream_9);
    MR_Box Var_16;

{
#define MR_PROC_LABEL mercury__prolog__see_binary_4_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr)Var_15 ;
		{

    OutStream = mercury_current_binary_input();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_binary_input_index);


		;}
#undef MR_PROC_LABEL
	Var_16  = (MR_Box) OutStream;
}
    *Result_6 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

void MR_CALL 
mercury__prolog__see_4_p_0(
  MR_String File_5,
  MR_Word * Result_6)
{
  MR_Word Result0_8;

  mercury__io__open_input_4_p_0(File_5, &Result0_8);
  if (((MR_tag((MR_Word) Result0_8)) == (MR_Integer) 1))
  {
    MR_Word Error_11 = ((MR_Word) ((MR_hl_field(1, Result0_8, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (Error_11));
    }
  }
  else
  {
    MR_Word Stream_9 = ((MR_Word) ((MR_hl_field(0, Result0_8, (MR_Integer) 0))));
    MR_Box Var_15 = (MR_Box) (Stream_9);
    MR_Box Var_16;

{
#define MR_PROC_LABEL mercury__prolog__see_4_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr)Var_15 ;
		{

    OutStream = mercury_current_text_input();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_input_index);


		;}
#undef MR_PROC_LABEL
	Var_16  = (MR_Box) OutStream;
}
    *Result_6 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

void MR_CALL 
mercury__prolog__det_arg_3_p_0(
  MR_Word TypeInfo_for_T_9,
  MR_Integer ArgumentIndex_4,
  MR_Box Type_5,
  MR_Word * Argument_6)
{
  MR_bool succeeded;
  MR_Word Arg_7;
  MR_Word TypeInfo_12_14;
  MR_Box Arg_10;
  MR_Integer Var_12 = (MR_Integer) ((MR_Unsigned) ArgumentIndex_4 - (MR_Unsigned) 1);

  succeeded = mercury__deconstruct__arg_4_p_1(TypeInfo_for_T_9, &TypeInfo_12_14, Type_5, (MR_Integer) 1, Var_12, &Arg_10);
  if (succeeded)
  {
    mercury__univ__type_to_univ_2_p_1(TypeInfo_12_14, Arg_10, &Arg_7);
    succeeded = MR_TRUE;
  }
  if (succeeded)
    *Argument_6 = Arg_7;
  else
    {
      mercury__require__error_1_p_0((MR_String) "det_arg: arg failed");
      return;
    }
}

MR_bool MR_CALL 
mercury__prolog__arg_3_p_0(
  MR_Word TypeInfo_for_T_11,
  MR_Integer ArgumentIndex_4,
  MR_Box Type_5,
  MR_Word * Univ_6)
{
  MR_bool succeeded;
  MR_Word TypeInfo_12_12;
  MR_Box Arg_7;
  MR_Integer Var_9 = (MR_Integer) ((MR_Unsigned) ArgumentIndex_4 - (MR_Unsigned) 1);

  succeeded = mercury__deconstruct__arg_4_p_1(TypeInfo_for_T_11, &TypeInfo_12_12, Type_5, (MR_Integer) 1, Var_9, &Arg_7);
  if (succeeded)
  {
    mercury__univ__type_to_univ_2_p_1(TypeInfo_12_12, Arg_7, Univ_6);
    succeeded = MR_TRUE;
  }
  return succeeded;
}

void MR_CALL 
mercury__prolog__f_61_46_46_2_p_0(
  MR_Word TypeInfo_for_T_8,
  MR_Box Term_3,
  MR_Word * HeadVar__2_2)
{
  MR_String Functor_4;
  MR_Word Args_5;
  MR_Integer _Arity_6;

  mercury__deconstruct__deconstruct_5_p_1(TypeInfo_for_T_8, Term_3, (MR_Integer) 1, &Functor_4, &_Arity_6, &Args_5);
  {
    MR_Word base;
    base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__2_2 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (Functor_4));
    MR_hl_field(0, base, 1) = ((MR_Box) (Args_5));
  }
}

MR_bool MR_CALL 
mercury__prolog__f_92_61_61_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Box X_3,
  MR_Box Y_4)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_5, X_3, Y_4);
  succeeded = !(succeeded);
  return succeeded;
}

MR_bool MR_CALL 
mercury__prolog__f_61_61_2_p_0(
  MR_Word TypeInfo_for_T_4,
  MR_Box X_3,
  MR_Box X_2)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_4, X_2, X_3);
  return succeeded;
}

void MR_CALL 
mercury__prolog__is_2_p_1(
  MR_Word TypeInfo_for_T_4,
  MR_Box * X_3,
  MR_Box X_2)
{
  *X_3 = X_2;
}

void MR_CALL 
mercury__prolog__is_2_p_0(
  MR_Word TypeInfo_for_T_4,
  MR_Box * X_3,
  MR_Box X_2)
{
  *X_3 = X_2;
}

MR_bool MR_CALL 
mercury__prolog__f_61_92_61_2_p_0(
  MR_Word TypeInfo_for_T_5,
  MR_Box X_3,
  MR_Box Y_4)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_5, X_3, Y_4);
  succeeded = !(succeeded);
  return succeeded;
}

MR_bool MR_CALL 
mercury__prolog__f_61_58_61_2_p_0(
  MR_Word TypeInfo_for_T_4,
  MR_Box X_3,
  MR_Box X_2)
{
  MR_bool succeeded;

  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_4, X_2, X_3);
  return succeeded;
}

static MR_bool MR_CALL 
mercury__prolog____Unify____univ_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__prolog____Unify____univ_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__prolog____Compare____univ_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__prolog____Compare____univ_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__prolog__init(void)
{
}

void mercury__prolog__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__prolog__prolog__type_ctor_info_univ_result_0);
}

void mercury__prolog__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__prolog__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module prolog.
