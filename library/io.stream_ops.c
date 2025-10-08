/*
** Automatically generated from `io.stream_ops.m'
** by the Mercury compiler,
** version rotd-2025-10-08
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


// :- module io.stream_ops.
// :- implementation.

/*
INIT mercury__io__stream_ops__init
ENDINIT
*/

#include "io.stream_ops.mih"
#include "io.stream_ops.mh"


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
#include "io.text_read.mih"
#include "stream.string_writer.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"





static /* final */ const MR_Box mercury__io__stream_ops_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__io__stream_ops_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__io__stream_ops_scalar_common_3[1][5];




static /* final */ const MR_Box mercury__io__stream_ops_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__io__stream_ops_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__stream_ops_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__io__stream_ops_scalar_common_3[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__stream_ops_scalar_common_2[0])),
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
#line 913 "io.stream_ops.m"

MercuryFile     mercury_stdin;
MercuryFile     mercury_stdout;
MercuryFile     mercury_stderr;
MercuryFile     mercury_stdin_binary;
MercuryFile     mercury_stdout_binary;

MR_Unsigned     mercury_current_text_input_index;
MR_Unsigned     mercury_current_text_output_index;
MR_Unsigned     mercury_current_binary_input_index;
MR_Unsigned     mercury_current_binary_output_index;

int             ML_next_stream_id;

#ifdef MR_THREAD_SAFE
    MercuryLock ML_io_next_stream_id_lock;
#endif
MercuryFilePtr
mercury_current_text_input(void)
{
    MercuryFilePtr stream;
    MR_get_thread_local_mutable(MercuryFilePtr, stream,
        mercury_current_text_input_index);
    return stream;
}

MercuryFilePtr
mercury_current_text_output(void)
{
    MercuryFilePtr stream;
    MR_get_thread_local_mutable(MercuryFilePtr, stream,
        mercury_current_text_output_index);
    return stream;
}

MercuryFilePtr
mercury_current_binary_input(void)
{
    MercuryFilePtr stream;
    MR_get_thread_local_mutable(MercuryFilePtr, stream,
        mercury_current_binary_input_index);
    return stream;
}

MercuryFilePtr
mercury_current_binary_output(void)
{
    MercuryFilePtr stream;
    MR_get_thread_local_mutable(MercuryFilePtr, stream,
        mercury_current_binary_output_index);
    return stream;
}

int
mercury_next_stream_id(void)
{
    int id;
    // XXX We don't know whether the new stream is text or binary.
    MR_LOCK(&ML_io_next_stream_id_lock, "io.do_open_text");
    id = ML_next_stream_id++;
    MR_UNLOCK(&ML_io_next_stream_id_lock, "io.do_open_text");
    return id;
}

MercuryFilePtr
mercury_open(const char *filename, const char *openmode,
    MR_AllocSiteInfoPtr alloc_id)
{
    MercuryFilePtr  mf;
    FILE            *f;

#ifdef MR_WIN32
    f = _wfopen(MR_utf8_to_wide(filename), MR_utf8_to_wide(openmode));
#else
    f = fopen(filename, openmode);
#endif

    if (f == NULL) {
        return NULL;
    }

    // Check if the opened file is actually a directory.
    // If fileno or fstat are not available then we assume the OS would not
    // let us open a directory as a file anyway.
#if defined(MR_HAVE_FSTAT) &&         (defined(MR_HAVE_FILENO) || defined(fileno)) && defined(S_ISDIR)
    {
        struct stat stat_info;
        int         stat_errno;

        if (0 != fstat(fileno(f), &stat_info)) {
            stat_errno = errno;
            fclose(f);
            errno = stat_errno;
            return NULL;
        }
        if (S_ISDIR(stat_info.st_mode)) {
            fclose(f);
            errno = EISDIR;
            return NULL;
        }
    }
#endif

    mf = MR_GC_NEW_ATTRIB(MercuryFile, alloc_id);
    MR_mercuryfile_init(f, 1, mf);
    return mf;
}

#ifdef EBADF
  #define MR_CLOSED_FILE_ERROR  EBADF
#else
  // ANSI/ISO C guarantees that EDOM will exist.
  #define MR_CLOSED_FILE_ERROR  EDOM
#endif

#ifdef MR_NEW_MERCURYFILE_STRUCT

static int
ME_closed_stream_close(MR_StreamInfo *info)
{
    errno = MR_CLOSED_FILE_ERROR;
    return EOF;
}

static int
ME_closed_stream_read(MR_StreamInfo *info, void *buffer, size_t size)
{
    errno = MR_CLOSED_FILE_ERROR;
    return -1;  // XXX should this be 0?
}

static int
ME_closed_stream_write(MR_StreamInfo *info, const void *buffer, size_t size)
{
    errno = MR_CLOSED_FILE_ERROR;
    return -1;  // XXX should this be 0?
}

static int
ME_closed_stream_flush(MR_StreamInfo *info)
{
    errno = MR_CLOSED_FILE_ERROR;
    return EOF;
}

static int
ME_closed_stream_ungetch(MR_StreamInfo *info, int ch)
{
    errno = MR_CLOSED_FILE_ERROR;
    return EOF;
}

static int
ME_closed_stream_getch(MR_StreamInfo *info)
{
    errno = MR_CLOSED_FILE_ERROR;
    return EOF;
}

static int
ME_closed_stream_vfprintf(MR_StreamInfo *info, const char *format, va_list ap)
{
    errno = MR_CLOSED_FILE_ERROR;
    return EOF;
}

static int
ME_closed_stream_putch(MR_StreamInfo *info, int ch)
{
    errno = MR_CLOSED_FILE_ERROR;
    return EOF;
}

static int
ME_closed_stream_ferror(MR_StreamInfo *info)
{
    return 0;
}

static const MercuryFile MR_closed_stream = {
    /* stream_type  = */    MR_USER_STREAM,
    /* stream_info  = */    { NULL },
    /* line_number  = */    0,

    /* close    = */    ME_closed_stream_close,
    /* read     = */    ME_closed_stream_read,
    /* write    = */    ME_closed_stream_write,

    /* flush    = */    ME_closed_stream_flush,
    /* ungetc   = */    ME_closed_stream_ungetch,
    /* getc     = */    ME_closed_stream_getch,
    /* vprintf  = */    ME_closed_stream_vfprintf,
    /* putc     = */    ME_closed_stream_putch,
    /* ferror   = */    ME_closed_stream_ferror
};

#endif // MR_NEW_MERCURYFILE_STRUCT

int
mercury_close(MercuryFilePtr mf)
{
    // On some systems, attempting to close a file stream that has been
    // previously closed will lead to a segmentation fault. We check that
    // we have not previously closed the file stream here, so we can give
    // the user some idea about what has happened.
    if (MR_file(*mf) == NULL) {
        errno = MR_CLOSED_FILE_ERROR;
        return EOF;
    }

    if (MR_CLOSE(*mf) < 0) {
        return EOF;
    }

#ifdef MR_NEW_MERCURYFILE_STRUCT

    // MR_closed_stream is a dummy stream object containing pointers to
    // functions that always return an error indication. Doing this ensures
    // that future accesses to the file will fail nicely.

    // gcc 2.95.2 barfs on `*mf = MR_closed_stream;'
    // so we use MR_memcpy() instead.
    MR_memcpy(mf, &MR_closed_stream, sizeof(*mf));

    // XXX It would be nice to have an autoconf check for the GNU libc function
    // fopencookie(); we could use that to do a similar thing to what we do
    // in the MR_NEW_MERCURYFILE_STRUCT case.

/****
#elif defined(HAVE_FOPENCOOKIE)
    MR_file(*mf) = MR_closed_file;
****/

#else

    // We want future accesses to the file to fail nicely. Ideally they would
    // throw an exception, but that would require a check at every I/O
    // operation, and for simple operations like putchar() or getchar(),
    // that would be too expensive. Instead we just set the file pointer
    // to NULL; on systems which trap null pointer dereferences, or if
    // library/io.m is compiled with MR_assert assertions enabled
    // (i.e. -DMR_LOWLEVEL_DEBUG), this will ensure that accessing closed files
    // traps immediately rather than causing problems at some later point.
    MR_mercuryfile_init(NULL, 0, mf);

#endif // ! MR_NEW_MERCURYFILE_STRUCT

#ifndef MR_CONSERVATIVE_GC
    if (mf == &mercury_stdin ||
        mf == &mercury_stdout ||
        mf == &mercury_stderr ||
        mf == &mercury_stdin_binary ||
        mf == &mercury_stdout_binary)
    {
        // The memory for these streams is allocated statically,
        // so there is nothing to free.
    } else {
        // For the accurate GC or no GC cases, we need to explicitly deallocate
        // the memory here, to avoid a memory leak. Note that the accurate
        // collector will not reclaim io_streams, since the io.stream type
        // is defined as a foreign_type.
        MR_GC_free(mf);
    }
#endif // !MR_CONSERVATIVE_GC

    return 0;
}


#line 517 "io.stream_ops.m"
void 
ML_io_stdin_stream(
  MercuryFilePtr * Stream_4)
#line 517 "io.stream_ops.m"
{
#line 517 "io.stream_ops.m"
	MR_Box boxed_Stream_4;
	mercury__io__stream_ops__stdin_stream_2_3_p_0(&boxed_Stream_4);
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MercuryFilePtr, boxed_Stream_4, *Stream_4);
}

#line 519 "io.stream_ops.m"
void 
ML_io_stdout_stream(
  MercuryFilePtr * Stream_4)
#line 519 "io.stream_ops.m"
{
#line 519 "io.stream_ops.m"
	MR_Box boxed_Stream_4;
	mercury__io__stream_ops__stdout_stream_2_3_p_0(&boxed_Stream_4);
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MercuryFilePtr, boxed_Stream_4, *Stream_4);
}

#line 521 "io.stream_ops.m"
void 
ML_io_stderr_stream(
  MercuryFilePtr * Stream_4)
#line 521 "io.stream_ops.m"
{
#line 521 "io.stream_ops.m"
	MR_Box boxed_Stream_4;
	mercury__io__stream_ops__stderr_stream_2_3_p_0(&boxed_Stream_4);
	MR_MAYBE_UNBOX_FOREIGN_TYPE(MercuryFilePtr, boxed_Stream_4, *Stream_4);
}


void MR_CALL 
mercury__io__stream_ops__set_binary_output_stream_2_4_p_0(
  MR_Box NewStream_1,
  MR_Box * OutStream_2)
{
{
#define MR_PROC_LABEL mercury__io__stream_ops__set_binary_output_stream_2_4_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) NewStream_1 ;
		{

    OutStream = mercury_current_binary_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_binary_output_index);


		;}
#undef MR_PROC_LABEL
	*OutStream_2  = (MR_Box) OutStream;
}
}

void MR_CALL 
mercury__io__stream_ops__set_output_stream_2_4_p_0(
  MR_Box NewStream_1,
  MR_Box * OutStream_2)
{
{
#define MR_PROC_LABEL mercury__io__stream_ops__set_output_stream_2_4_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) NewStream_1 ;
		{

    OutStream = mercury_current_text_output();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_output_index);


		;}
#undef MR_PROC_LABEL
	*OutStream_2  = (MR_Box) OutStream;
}
}

void MR_CALL 
mercury__io__stream_ops__set_binary_input_stream_2_4_p_0(
  MR_Box NewStream_1,
  MR_Box * OutStream_2)
{
{
#define MR_PROC_LABEL mercury__io__stream_ops__set_binary_input_stream_2_4_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) NewStream_1 ;
		{

    OutStream = mercury_current_binary_input();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_binary_input_index);


		;}
#undef MR_PROC_LABEL
	*OutStream_2  = (MR_Box) OutStream;
}
}

void MR_CALL 
mercury__io__stream_ops__set_input_stream_2_4_p_0(
  MR_Box NewStream_1,
  MR_Box * OutStream_2)
{
{
#define MR_PROC_LABEL mercury__io__stream_ops__set_input_stream_2_4_p_0

	MercuryFilePtr NewStream;
	MercuryFilePtr OutStream;

	NewStream = (MercuryFilePtr) NewStream_1 ;
		{

    OutStream = mercury_current_text_input();
    MR_set_thread_local_mutable(MercuryFilePtr, NewStream,
        mercury_current_text_input_index);


		;}
#undef MR_PROC_LABEL
	*OutStream_2  = (MR_Box) OutStream;
}
}

void MR_CALL 
mercury__io__stream_ops__binary_output_stream_2_3_p_0(
  MR_Box * Stream_1)
{
{
#define MR_PROC_LABEL mercury__io__stream_ops__binary_output_stream_2_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_output();


		;}
#undef MR_PROC_LABEL
	*Stream_1  = (MR_Box) Stream;
}
}

void MR_CALL 
mercury__io__stream_ops__output_stream_2_3_p_0(
  MR_Box * Stream_1)
{
{
#define MR_PROC_LABEL mercury__io__stream_ops__output_stream_2_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_output();


		;}
#undef MR_PROC_LABEL
	*Stream_1  = (MR_Box) Stream;
}
}

void MR_CALL 
mercury__io__stream_ops__binary_input_stream_2_3_p_0(
  MR_Box * Stream_1)
{
{
#define MR_PROC_LABEL mercury__io__stream_ops__binary_input_stream_2_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_binary_input();


		;}
#undef MR_PROC_LABEL
	*Stream_1  = (MR_Box) Stream;
}
}

void MR_CALL 
mercury__io__stream_ops__input_stream_2_3_p_0(
  MR_Box * Stream_1)
{
{
#define MR_PROC_LABEL mercury__io__stream_ops__input_stream_2_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = mercury_current_text_input();


		;}
#undef MR_PROC_LABEL
	*Stream_1  = (MR_Box) Stream;
}
}

void MR_CALL 
mercury__io__stream_ops__stderr_stream_2_3_p_0(
  MR_Box * Stream_4)
{
{
#define MR_PROC_LABEL mercury__io__stream_ops__stderr_stream_2_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stderr;


		;}
#undef MR_PROC_LABEL
	*Stream_4  = (MR_Box) Stream;
}
}

MR_Box MR_CALL 
mercury__io__stream_ops__stderr_stream_2_0_f_0(void)
{
  MR_Box Stream_1;

{
#define MR_PROC_LABEL mercury__io__stream_ops__stderr_stream_2_0_f_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stderr;


		;}
#undef MR_PROC_LABEL
	Stream_1  = (MR_Box) Stream;
}
  return Stream_1;
}

void MR_CALL 
mercury__io__stream_ops__stdout_binary_stream_2_3_p_0(
  MR_Box * Stream_1)
{
{
#define MR_PROC_LABEL mercury__io__stream_ops__stdout_binary_stream_2_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdout_binary;


		;}
#undef MR_PROC_LABEL
	*Stream_1  = (MR_Box) Stream;
}
}

void MR_CALL 
mercury__io__stream_ops__stdout_stream_2_3_p_0(
  MR_Box * Stream_4)
{
{
#define MR_PROC_LABEL mercury__io__stream_ops__stdout_stream_2_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdout;


		;}
#undef MR_PROC_LABEL
	*Stream_4  = (MR_Box) Stream;
}
}

MR_Box MR_CALL 
mercury__io__stream_ops__stdout_stream_2_0_f_0(void)
{
  MR_Box Stream_1;

{
#define MR_PROC_LABEL mercury__io__stream_ops__stdout_stream_2_0_f_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdout;


		;}
#undef MR_PROC_LABEL
	Stream_1  = (MR_Box) Stream;
}
  return Stream_1;
}

void MR_CALL 
mercury__io__stream_ops__stdin_binary_stream_2_3_p_0(
  MR_Box * Stream_1)
{
{
#define MR_PROC_LABEL mercury__io__stream_ops__stdin_binary_stream_2_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdin_binary;


		;}
#undef MR_PROC_LABEL
	*Stream_1  = (MR_Box) Stream;
}
}

void MR_CALL 
mercury__io__stream_ops__stdin_stream_2_3_p_0(
  MR_Box * Stream_4)
{
{
#define MR_PROC_LABEL mercury__io__stream_ops__stdin_stream_2_3_p_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdin;


		;}
#undef MR_PROC_LABEL
	*Stream_4  = (MR_Box) Stream;
}
}

MR_Box MR_CALL 
mercury__io__stream_ops__stdin_stream_2_0_f_0(void)
{
  MR_Box Stream_1;

{
#define MR_PROC_LABEL mercury__io__stream_ops__stdin_stream_2_0_f_0

	MercuryFilePtr Stream;

		{

    Stream = &mercury_stdin;


		;}
#undef MR_PROC_LABEL
	Stream_1  = (MR_Box) Stream;
}
  return Stream_1;
}

void MR_CALL 
mercury__io__stream_ops__set_output_line_number_2_4_p_0(
  MR_Box Stream_1,
  MR_Integer LineNum_2)
{
{
#define MR_PROC_LABEL mercury__io__stream_ops__set_output_line_number_2_4_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) Stream_1 ;
	LineNum = LineNum_2 ;
		{

    MR_line_number(*Stream) = LineNum;


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__io__stream_ops__get_output_line_number_2_4_p_0(
  MR_Box Stream_1,
  MR_Integer * LineNum_2)
{
{
#define MR_PROC_LABEL mercury__io__stream_ops__get_output_line_number_2_4_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) Stream_1 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	*LineNum_2  = LineNum;
}
}

void MR_CALL 
mercury__io__stream_ops__set_input_line_number_2_4_p_0(
  MR_Box Stream_1,
  MR_Integer LineNum_2)
{
{
#define MR_PROC_LABEL mercury__io__stream_ops__set_input_line_number_2_4_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) Stream_1 ;
	LineNum = LineNum_2 ;
		{

    MR_line_number(*Stream) = LineNum;


		;}
#undef MR_PROC_LABEL
}
}

void MR_CALL 
mercury__io__stream_ops__get_input_line_number_2_4_p_0(
  MR_Box Stream_1,
  MR_Integer * LineNum_2)
{
{
#define MR_PROC_LABEL mercury__io__stream_ops__get_input_line_number_2_4_p_0

	MercuryFilePtr Stream;
	MR_Integer LineNum;

	Stream = (MercuryFilePtr) Stream_1 ;
		{

    LineNum = MR_line_number(*Stream);


		;}
#undef MR_PROC_LABEL
	*LineNum_2  = LineNum;
}
}

void MR_CALL 
mercury__io__stream_ops__flush_binary_output_2_4_p_0(
  MR_Box Stream_1,
  MR_Box * Error_2)
{
{
#define MR_PROC_LABEL mercury__io__stream_ops__flush_binary_output_2_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_1 ;
		{

    if (MR_FLUSH(*Stream) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	*Error_2  = (MR_Box) Error;
}
}

void MR_CALL 
mercury__io__stream_ops__flush_text_output_2_4_p_0(
  MR_Box Stream_1,
  MR_Box * Error_2)
{
{
#define MR_PROC_LABEL mercury__io__stream_ops__flush_text_output_2_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_1 ;
		{

    if (MR_FLUSH(*Stream) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	*Error_2  = (MR_Box) Error;
}
}

void MR_CALL 
mercury__io__stream_ops__binary_stream_offset_2_5_p_0(
  MR_Box Stream_1,
  int64_t * Offset_2,
  MR_Box * Error_3)
{
{
#define MR_PROC_LABEL mercury__io__stream_ops__binary_stream_offset_2_5_p_0

	MercuryFilePtr Stream;
	int64_t Offset;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_1 ;
		{

    // XXX should check if the stream is tellable
    if (MR_IS_FILE_STREAM(*Stream)) {
        Offset = MR_ftell(MR_file(*Stream));
        if (Offset < 0) {
            Error = errno;
        } else {
            Error = 0;
        }
    } else {
        Error = EINVAL;
    }


		;}
#undef MR_PROC_LABEL
	*Offset_2  = Offset;
	*Error_3  = (MR_Box) Error;
}
}

void MR_CALL 
mercury__io__stream_ops__seek_binary_2_6_p_0(
  MR_Box Stream_1,
  MR_Integer Flag_2,
  int64_t Off_3,
  MR_Box * Error_4)
{
{
#define MR_PROC_LABEL mercury__io__stream_ops__seek_binary_2_6_p_0

	MercuryFilePtr Stream;
	MR_Integer Flag;
	int64_t Off;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_1 ;
	Flag = Flag_2 ;
	Off = Off_3 ;
		{

    static const int seek_flags[] = { SEEK_SET, SEEK_CUR, SEEK_END };

    // XXX check if the stream is seekable.
    if (MR_IS_FILE_STREAM(*Stream)) {
        if (MR_fseek(MR_file(*Stream), Off, seek_flags[Flag]) < 0) {
            Error = errno;
        } else {
            Error = 0;
        }
    } else {
        Error = EINVAL;
    }


		;}
#undef MR_PROC_LABEL
	*Error_4  = (MR_Box) Error;
}
}

void MR_CALL 
mercury__io__stream_ops__whence_to_int_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Integer * HeadVar__2_2)
{
  switch (HeadVar__1_1) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      *HeadVar__2_2 = (MR_Integer) 1;
      break;
    case (MR_Integer) 2:
      *HeadVar__2_2 = (MR_Integer) 2;
      break;
    case (MR_Integer) 0:
      *HeadVar__2_2 = (MR_Integer) 0;
      break;
  }
}

void MR_CALL 
mercury__io__stream_ops__close_stream_4_p_0(
  MR_Box Stream_1,
  MR_Box * Error_2)
{
{
#define MR_PROC_LABEL mercury__io__stream_ops__close_stream_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Error;

	Stream = (MercuryFilePtr) Stream_1 ;
		{

    if (mercury_close(Stream) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	*Error_2  = (MR_Box) Error;
}
}

void MR_CALL 
mercury__io__stream_ops__do_open_binary_7_p_0(
  MR_String FileName_1,
  MR_String Mode_2,
  MR_Integer * StreamId_3,
  MR_Box * Stream_4,
  MR_Box * Error_5)
{
{
#define MR_PROC_LABEL mercury__io__stream_ops__do_open_binary_7_p_0

	MR_String FileName;
	MR_String Mode;
	MR_Integer StreamId;
	MercuryFilePtr Stream;
	MR_Integer Error;

	FileName = FileName_1 ;
	Mode = Mode_2 ;
		{

    Stream = mercury_open(FileName, Mode, MR_ALLOC_ID);
    if (Stream != NULL) {
        StreamId = mercury_next_stream_id();
        Error = 0;
    } else {
        StreamId = -1;
        Error = errno;
    }


		;}
#undef MR_PROC_LABEL
	*StreamId_3  = StreamId;
	*Stream_4  = (MR_Box) Stream;
	*Error_5  = (MR_Box) Error;
}
}

void MR_CALL 
mercury__io__stream_ops__do_open_text_7_p_0(
  MR_String FileName_1,
  MR_String Mode_2,
  MR_Integer * StreamId_3,
  MR_Box * Stream_4,
  MR_Box * Error_5)
{
{
#define MR_PROC_LABEL mercury__io__stream_ops__do_open_text_7_p_0

	MR_String FileName;
	MR_String Mode;
	MR_Integer StreamId;
	MercuryFilePtr Stream;
	MR_Integer Error;

	FileName = FileName_1 ;
	Mode = Mode_2 ;
		{

    Stream = mercury_open(FileName, Mode, MR_ALLOC_ID);
    if (Stream != NULL) {
        StreamId = mercury_next_stream_id();
        Error = 0;
    } else {
        StreamId = -1;
        Error = errno;
    }


		;}
#undef MR_PROC_LABEL
	*StreamId_3  = StreamId;
	*Stream_4  = (MR_Box) Stream;
	*Error_5  = (MR_Box) Error;
}
}

void mercury__io__stream_ops__init(void)
{
}

void mercury__io__stream_ops__init_type_tables(void)
{
}

void mercury__io__stream_ops__init_debugger(void)
{
  MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__io__stream_ops__grade_check(void)
{
  return &MR_GRADE_VAR;
}

// :- end_module io.stream_ops.
