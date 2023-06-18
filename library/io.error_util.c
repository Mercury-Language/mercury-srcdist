/*
** Automatically generated from `io.error_util.m'
** by the Mercury compiler,
** version rotd-2023-06-18
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


// :- module io.error_util.
// :- implementation.

/*
INIT mercury__io__error_util__init
ENDINIT
*/

#include "io.error_util.mih"


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
#include "io.file.mih"
#include "io.primitives_read.mih"
#include "io.primitives_write.mih"
#include "io.stream_db.mih"
#include "io.stream_ops.mih"
#include "io.text_read.mih"
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"




static const MR_EnumFunctorDesc mercury__io__error_util__io__error_util__enum_functor_desc_system_error_style_0_0;

static const MR_EnumFunctorDesc mercury__io__error_util__io__error_util__enum_functor_desc_system_error_style_0_1;

static const MR_EnumFunctorDesc mercury__io__error_util__io__error_util__enum_functor_desc_system_error_style_0_2;

static const MR_EnumFunctorDescPtr mercury__io__error_util__io__error_util__enum_ordinal_ordered_system_error_style_0[3];

static const MR_EnumFunctorDescPtr mercury__io__error_util__io__error_util__enum_name_ordered_system_error_style_0[3];

static const MR_Integer mercury__io__error_util__io__error_util__functor_number_map_system_error_style_0[3];

static void MR_CALL 
mercury__io__error_util__make_win32_error_message_5_p_0(
  MR_Box ErrorCode_1,
  MR_String Prefix_2,
  MR_String * Msg_3);

static void MR_CALL 
mercury__io__error_util__make_errno_message_5_p_0(
  MR_Box Errno_1,
  MR_String Prefix_2,
  MR_String * Msg_3);

static MR_Word MR_CALL 
mercury__io__error_util__native_system_error_style_0_f_0(void);

static MR_bool MR_CALL 
mercury__io__error_util____Unify____system_error_style_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__io__error_util____Compare____system_error_style_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mercury__io__error_util_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__io__error_util_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__io__error_util_scalar_common_3[2][5];




static /* final */ const MR_Box mercury__io__error_util_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__io__error_util_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__error_util_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__io__error_util_scalar_common_3[2][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__error_util_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__error_util_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
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


static const MR_EnumFunctorDesc mercury__io__error_util__io__error_util__enum_functor_desc_system_error_style_0_0 = {
  (MR_String) "syserr_errno",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mercury__io__error_util__io__error_util__enum_functor_desc_system_error_style_0_1 = {
  (MR_String) "syserr_errno_or_win32",
  INT32_C(1)
};

static const MR_EnumFunctorDesc mercury__io__error_util__io__error_util__enum_functor_desc_system_error_style_0_2 = {
  (MR_String) "syserr_exception_object",
  INT32_C(2)
};

static const MR_EnumFunctorDescPtr mercury__io__error_util__io__error_util__enum_ordinal_ordered_system_error_style_0[3] = {
  &mercury__io__error_util__io__error_util__enum_functor_desc_system_error_style_0_0,
  &mercury__io__error_util__io__error_util__enum_functor_desc_system_error_style_0_1,
  &mercury__io__error_util__io__error_util__enum_functor_desc_system_error_style_0_2
};

static const MR_EnumFunctorDescPtr mercury__io__error_util__io__error_util__enum_name_ordered_system_error_style_0[3] = {
  &mercury__io__error_util__io__error_util__enum_functor_desc_system_error_style_0_0,
  &mercury__io__error_util__io__error_util__enum_functor_desc_system_error_style_0_1,
  &mercury__io__error_util__io__error_util__enum_functor_desc_system_error_style_0_2
};

static const MR_Integer mercury__io__error_util__io__error_util__functor_number_map_system_error_style_0[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct mercury__io__error_util__io__error_util__type_ctor_info_system_error_style_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__io__error_util____Unify____system_error_style_0_0_10001)),
  ((MR_Box) (mercury__io__error_util____Compare____system_error_style_0_0_10001)),
  (MR_String) "io.error_util",
  (MR_String) "system_error_style",
  { mercury__io__error_util__io__error_util__enum_name_ordered_system_error_style_0 },
  { mercury__io__error_util__io__error_util__enum_ordinal_ordered_system_error_style_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  mercury__io__error_util__io__error_util__functor_number_map_system_error_style_0,

};

void MR_CALL 
mercury__io__error_util____Compare____system_error_style_0_0(
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
mercury__io__error_util____Unify____system_error_style_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

static void MR_CALL 
mercury__io__error_util__make_win32_error_message_5_p_0(
  MR_Box ErrorCode_1,
  MR_String Prefix_2,
  MR_String * Msg_3)
{
{
#define MR_PROC_LABEL mercury__io__error_util__make_win32_error_message_5_p_0

	MR_Integer ErrorCode;
	MR_String Prefix;
	MR_String Msg;

	ErrorCode = (MR_Integer)ErrorCode_1 ;
	Prefix = Prefix_2 ;
		{

#ifdef MR_WIN32
    char    *errmsg;
    size_t  errmsg_len;
    size_t  prefix_len;

    if (FormatMessage(
            FORMAT_MESSAGE_ALLOCATE_BUFFER
            | FORMAT_MESSAGE_FROM_SYSTEM
            | FORMAT_MESSAGE_IGNORE_INSERTS,
            NULL,
            ErrorCode,
            MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT),
            (LPTSTR) &errmsg,
            0,
            NULL) > 0)
    {
        // Remove trailing CR LF sequence.
        char *cr = strchr(errmsg, '\r');
        if (cr != NULL) {
            *cr = '\0';
            errmsg_len = (size_t) (cr - errmsg);
        } else {
            errmsg_len = strlen(errmsg);
        }
        prefix_len = strlen(Prefix);
        MR_allocate_aligned_string_msg(Msg, prefix_len + errmsg_len,
            MR_ALLOC_ID);
        MR_memcpy(Msg, Prefix, prefix_len);
        MR_memcpy(Msg + prefix_len, errmsg, errmsg_len + 1); // include NUL
        LocalFree(errmsg);
    } else {
        Msg = MR_make_string(MR_ALLOC_ID, "%sSystem error 0x%X",
            Prefix, ErrorCode);
    }
#else
    MR_fatal_error("io.error_util.make_win32_error_message: not on Windows");
#endif


		;}
#undef MR_PROC_LABEL
	*Msg_3  = Msg;
}
}

static void MR_CALL 
mercury__io__error_util__make_errno_message_5_p_0(
  MR_Box Errno_1,
  MR_String Prefix_2,
  MR_String * Msg_3)
{
{
#define MR_PROC_LABEL mercury__io__error_util__make_errno_message_5_p_0

	MR_Integer Errno;
	MR_String Prefix;
	MR_String Msg;

	Errno = (MR_Integer)Errno_1 ;
	Prefix = Prefix_2 ;
		{

    char        errbuf[MR_STRERROR_BUF_SIZE];
    const char  *errmsg;
    size_t      errmsg_len;
    size_t      prefix_len;

    prefix_len = strlen(Prefix);
    errmsg = MR_strerror(Errno, errbuf, sizeof(errbuf));
    errmsg_len = strlen(errmsg);
    MR_allocate_aligned_string_msg(Msg, prefix_len + errmsg_len, MR_ALLOC_ID);
    MR_memcpy(Msg, Prefix, prefix_len);
    MR_memcpy(Msg + prefix_len, errmsg, errmsg_len + 1); // include NUL


		;}
#undef MR_PROC_LABEL
	*Msg_3  = Msg;
}
}

static MR_Word MR_CALL 
mercury__io__error_util__native_system_error_style_0_f_0(void)
{
  MR_Word SysErrStyle_1;

{
#define MR_PROC_LABEL mercury__io__error_util__native_system_error_style_0_f_0

	MR_Word SysErrStyle;

		{

#ifdef MR_WIN32
    SysErrStyle = ML_SYSERR_ERRNO_OR_WIN32;
#else
    SysErrStyle = ML_SYSERR_ERRNO;
#endif


		;}
#undef MR_PROC_LABEL
	SysErrStyle_1  = SysErrStyle;
}
  return SysErrStyle_1;
}

void MR_CALL 
mercury__io__error_util__throw_on_error_4_p_0(
  MR_Box Error_5,
  MR_String Prefix_6)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__io__error_util__throw_on_error_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Error_5 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (!(succeeded))
  {
    MR_Word IOError_8;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_5, Prefix_6, &IOError_8);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (IOError_8)));
      return;
    }
  }
}

void MR_CALL 
mercury__io__error_util__throw_on_close_error_3_p_0(
  MR_Box Error_4)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__io__error_util__throw_on_close_error_3_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Error_4 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (!(succeeded))
  {
    MR_Word IOError_9;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_4, (MR_String) "error closing file: ", &IOError_9);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (IOError_9)));
      return;
    }
  }
}

void MR_CALL 
mercury__io__error_util__throw_on_output_error_3_p_0(
  MR_Box Error_4)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__io__error_util__throw_on_output_error_3_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Error_4 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (!(succeeded))
  {
    MR_Word IOError_9;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_4, (MR_String) "error writing to output file: ", &IOError_9);
    {
      mercury__exception__throw_1_p_0((MR_Word) (&mercury__io__io__type_ctor_info_error_0), ((MR_Box) (IOError_9)));
      return;
    }
  }
}

void MR_CALL 
mercury__io__error_util__make_io_error_from_maybe_win32_error_6_p_0(
  MR_Box Error_7,
  MR_Word IsWin32Error_8,
  MR_String Prefix_9,
  MR_Word * IOError_10)
{
  switch (IsWin32Error_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_7, Prefix_9, IOError_10);
      break;
    case (MR_Integer) 1:
      mercury__io__error_util__make_io_error_from_windows_error_impl_5_p_0(Error_7, Prefix_9, IOError_10);
      break;
  }
}

void MR_CALL 
mercury__io__error_util__is_error_maybe_win32_6_p_0(
  MR_Box Error_7,
  MR_Word IsWin32Error_8,
  MR_String Prefix_9,
  MR_Word * MaybeError_10)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__io__error_util__is_error_maybe_win32_6_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Error_7 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    *MaybeError_10 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word IOError_12;

    switch (IsWin32Error_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_7, Prefix_9, &IOError_12);
        break;
      case (MR_Integer) 1:
        mercury__io__error_util__make_io_error_from_windows_error_impl_5_p_0(Error_7, Prefix_9, &IOError_12);
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeError_10 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (IOError_12));
    }
  }
}

void MR_CALL 
mercury__io__error_util__make_io_error_from_windows_error_impl_5_p_0(
  MR_Box Error_6,
  MR_String Prefix_7,
  MR_Word * IOError_8)
{
  MR_Word SysErrStyle_10;

{
#define MR_PROC_LABEL mercury__io__error_util__make_io_error_from_windows_error_impl_5_p_0

	MR_Word SysErrStyle;

		{

#ifdef MR_WIN32
    SysErrStyle = ML_SYSERR_ERRNO_OR_WIN32;
#else
    SysErrStyle = ML_SYSERR_ERRNO;
#endif


		;}
#undef MR_PROC_LABEL
	SysErrStyle_10  = SysErrStyle;
}
  switch (SysErrStyle_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 2:
      {
        MR_String Var_15;

        mercury__string__append_3_p_2((MR_String) "io.error_util.make_io_error_from_windows_error: ", (MR_String) "inapplicable platform", &Var_15);
        {
          mercury__require__error_1_p_0(Var_15);
          return;
        }
      }
      break;
    case (MR_Integer) 1:
      {
        MR_String Msg_11;

{
#define MR_PROC_LABEL mercury__io__error_util__make_io_error_from_windows_error_impl_5_p_0

	MR_Integer ErrorCode;
	MR_String Prefix;
	MR_String Msg;

	ErrorCode = (MR_Integer)Error_6 ;
	Prefix = Prefix_7 ;
		{

#ifdef MR_WIN32
    char    *errmsg;
    size_t  errmsg_len;
    size_t  prefix_len;

    if (FormatMessage(
            FORMAT_MESSAGE_ALLOCATE_BUFFER
            | FORMAT_MESSAGE_FROM_SYSTEM
            | FORMAT_MESSAGE_IGNORE_INSERTS,
            NULL,
            ErrorCode,
            MAKELANGID(LANG_NEUTRAL, SUBLANG_DEFAULT),
            (LPTSTR) &errmsg,
            0,
            NULL) > 0)
    {
        // Remove trailing CR LF sequence.
        char *cr = strchr(errmsg, '\r');
        if (cr != NULL) {
            *cr = '\0';
            errmsg_len = (size_t) (cr - errmsg);
        } else {
            errmsg_len = strlen(errmsg);
        }
        prefix_len = strlen(Prefix);
        MR_allocate_aligned_string_msg(Msg, prefix_len + errmsg_len,
            MR_ALLOC_ID);
        MR_memcpy(Msg, Prefix, prefix_len);
        MR_memcpy(Msg + prefix_len, errmsg, errmsg_len + 1); // include NUL
        LocalFree(errmsg);
    } else {
        Msg = MR_make_string(MR_ALLOC_ID, "%sSystem error 0x%X",
            Prefix, ErrorCode);
    }
#else
    MR_fatal_error("io.error_util.make_win32_error_message: not on Windows");
#endif


		;}
#undef MR_PROC_LABEL
	Msg_11  = Msg;
}
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *IOError_8 = base;
          MR_hl_field(2, base, 0) = ((MR_Box) (Msg_11));
          MR_hl_field(2, base, 1) = ((MR_Box) (Error_6));
        }
      }
      break;
  }
}

void MR_CALL 
mercury__io__error_util__is_error_5_p_0(
  MR_Box Error_6,
  MR_String Prefix_7,
  MR_Word * MaybeError_8)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__io__error_util__is_error_5_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Error_6 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    *MaybeError_8 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word IOError_10;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_6, Prefix_7, &IOError_10);
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeError_8 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (IOError_10));
    }
  }
}

void MR_CALL 
mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(
  MR_Box Error_6,
  MR_String Prefix_7,
  MR_Word * IOError_8)
{
  MR_Word SysErrStyle_10;

{
#define MR_PROC_LABEL mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0

	MR_Word SysErrStyle;

		{

#ifdef MR_WIN32
    SysErrStyle = ML_SYSERR_ERRNO_OR_WIN32;
#else
    SysErrStyle = ML_SYSERR_ERRNO;
#endif


		;}
#undef MR_PROC_LABEL
	SysErrStyle_10  = SysErrStyle;
}
  switch (SysErrStyle_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
    case (MR_Integer) 1:
      {
        MR_String Msg_11;

{
#define MR_PROC_LABEL mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0

	MR_Integer Errno;
	MR_String Prefix;
	MR_String Msg;

	Errno = (MR_Integer)Error_6 ;
	Prefix = Prefix_7 ;
		{

    char        errbuf[MR_STRERROR_BUF_SIZE];
    const char  *errmsg;
    size_t      errmsg_len;
    size_t      prefix_len;

    prefix_len = strlen(Prefix);
    errmsg = MR_strerror(Errno, errbuf, sizeof(errbuf));
    errmsg_len = strlen(errmsg);
    MR_allocate_aligned_string_msg(Msg, prefix_len + errmsg_len, MR_ALLOC_ID);
    MR_memcpy(Msg, Prefix, prefix_len);
    MR_memcpy(Msg + prefix_len, errmsg, errmsg_len + 1); // include NUL


		;}
#undef MR_PROC_LABEL
	Msg_11  = Msg;
}
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *IOError_8 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Msg_11));
          MR_hl_field(1, base, 1) = ((MR_Box) (Error_6));
        }
      }
      break;
    case (MR_Integer) 2:
      {
        mercury__require__error_1_p_0((MR_String) "io.error_util.get_exception_object_message: inapplicable back-end");
        return;
      }
      break;
  }
}

MR_Box MR_CALL 
mercury__io__error_util__no_error_0_f_0(void)
{
  MR_Box Error_1;

{
#define MR_PROC_LABEL mercury__io__error_util__no_error_0_f_0

	MR_Integer Error;

		{

    Error = 0;


		;}
#undef MR_PROC_LABEL
	Error_1  = (MR_Box) Error;
}
  return Error_1;
}

static MR_bool MR_CALL 
mercury__io__error_util____Unify____system_error_style_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__io__error_util____Unify____system_error_style_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__io__error_util____Compare____system_error_style_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__io__error_util____Compare____system_error_style_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__io__error_util__init(void)
{
}

void mercury__io__error_util__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__io__error_util__io__error_util__type_ctor_info_system_error_style_0);
}

void mercury__io__error_util__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__io__error_util__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module io.error_util.
