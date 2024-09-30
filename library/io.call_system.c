/*
** Automatically generated from `io.call_system.m'
** by the Mercury compiler,
** version rotd-2024-09-30
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


// :- module io.call_system.
// :- implementation.

/*
INIT mercury__io__call_system__init
ENDINIT
*/

#include "io.call_system.mih"


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




static void MR_CALL 
mercury__io__call_system__do_decode_system_command_exit_code_5_p_0(
  MR_Integer Status0_1,
  MR_Word * Exited_2,
  MR_Integer * Status_3,
  MR_Word * Signalled_4,
  MR_Integer * Signal_5);


static /* final */ const MR_Box mercury__io__call_system_scalar_common_1[1][3];

static /* final */ const MR_Box mercury__io__call_system_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__io__call_system_scalar_common_3[1][5];

static /* final */ const MR_Box mercury__io__call_system_scalar_common_4[2][1];




static /* final */ const MR_Box mercury__io__call_system_scalar_common_1[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__io__call_system_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__call_system_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__io__call_system_scalar_common_3[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__call_system_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__io__call_system_scalar_common_4[2][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_String) "unknown result code from system command")) },
  /* row   1 */
  { ((MR_Box) (&mercury__io__call_system_scalar_common_4[0])) },
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
#include "io.call_system.mh"
#include "io.environment.mh"
#include "io.error_util.mh"
#include "io.file.mh"
#include "io.primitives_read.mh"
#include "io.primitives_write.mh"
#include "io.stream_db.mh"
#include "io.stream_ops.mh"
#include "io.text_read.mh"


static void MR_CALL 
mercury__io__call_system__do_decode_system_command_exit_code_5_p_0(
  MR_Integer Status0_1,
  MR_Word * Exited_2,
  MR_Integer * Status_3,
  MR_Word * Signalled_4,
  MR_Integer * Signal_5)
{
{
#define MR_PROC_LABEL mercury__io__call_system__do_decode_system_command_exit_code_5_p_0

	MR_Integer Status0;
	MR_Word Exited;
	MR_Integer Status;
	MR_Word Signalled;
	MR_Integer Signal;

	Status0 = Status0_1 ;
		{

    Exited = MR_NO;
    Status = 0;
    Signalled = MR_NO;
    Signal = 0;

    #if defined (WIFEXITED) && defined (WEXITSTATUS) &&             defined (WIFSIGNALED) && defined (WTERMSIG)
        if (WIFEXITED(Status0)) {
            Exited = MR_YES;
            Status = WEXITSTATUS(Status0);
        } else if (WIFSIGNALED(Status0)) {
            Signalled = MR_YES;
            Signal = WTERMSIG(Status0);
        }
    #else
        Exited = MR_YES;
        Status = Status0;
    #endif


		;}
#undef MR_PROC_LABEL
	*Exited_2  = Exited;
	*Status_3  = Status;
	*Signalled_4  = Signalled;
	*Signal_5  = Signal;
}
}

void MR_CALL 
mercury__io__call_system__call_system_code_5_p_0(
  MR_String Command_1,
  MR_Integer * Status_2,
  MR_Box * Error_3)
{
{
#define MR_PROC_LABEL mercury__io__call_system__call_system_code_5_p_0

	MR_String Command;
	MR_Integer Status;
	MR_Integer Error;

	Command = Command_1 ;
		{

    // In multithreaded grades, try to use posix_spawn() instead of system().
    // There were problems with threads and system() on Linux/glibc, probably
    // because system() uses fork().
#if defined(MR_THREAD_SAFE) && defined(MR_HAVE_POSIX_SPAWN) &&         defined(MR_HAVE_ENVIRON)

    char    *argv[4];
    pid_t   pid;
    int     err;
    int     st;

    argv[0] = (char *) "sh";
    argv[1] = (char *) "-c";
    argv[2] = Command;
    argv[3] = NULL;

    // Protect `environ' from concurrent modifications.
    MR_OBTAIN_GLOBAL_LOCK("io.call_system_code/5");

    // See the comment at the head of the body of preceding foreign_decl
    // for details of why Mac OS X is different here.
    #if defined(MR_MAC_OSX)
        err = posix_spawn(&pid, "/bin/sh", NULL, NULL, argv,
            *_NSGetEnviron());
    #else
        err = posix_spawn(&pid, "/bin/sh", NULL, NULL, argv, environ);
    #endif

    MR_RELEASE_GLOBAL_LOCK("io.call_system_code/5");

    if (err != 0) {
        // Spawn failed.
        Error = errno;
    } else {
        // Wait for the spawned process to exit.
        do {
            err = waitpid(pid, &st, 0);
        } while (err == -1 && MR_is_eintr(errno));
        if (err == -1) {
            Error = errno;
        } else {
            Status = st;
            Error = 0;
        }
    }

#else   // !MR_THREAD_SAFE || !MR_HAVE_POSIX_SPAWN || !MR_HAVE_ENVIRON

  #ifdef MR_WIN32
    Status = _wsystem(MR_utf8_to_wide(Command));
  #else
    Status = system(Command);
  #endif

    if (Status == -1) {
        Error = errno;
    } else {
        Error = 0;
    }

#endif  // !MR_THREAD_SAFE || !MR_HAVE_POSIX_SPAWN || !MR_HAVE_ENVIRON


		;}
#undef MR_PROC_LABEL
	*Status_2  = Status;
	*Error_3  = (MR_Box) Error;
}
}

void MR_CALL 
mercury__io__call_system__call_system_4_p_0(
  MR_String Command_5,
  MR_Word * Result_6)
{
  MR_Word Result0_8;

  mercury__io__call_system__call_system_return_signal_4_p_0(Command_5, &Result0_8);
  if (((MR_tag((MR_Word) Result0_8)) == (MR_Integer) 1))
    *Result_6 = (MR_Word) (Result0_8);
  else
  {
    MR_Word Var_21 = ((MR_Word) ((MR_hl_field(0, Result0_8, (MR_Integer) 0))));

    if (((MR_tag((MR_Word) Var_21)) == (MR_Integer) 0))
    {
      MR_Integer Code_9 = ((MR_Integer) ((MR_hl_field(0, Var_21, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *Result_6 = base;
        MR_hl_field(0, base, 0) = ((MR_Box) (Code_9));
      }
    }
    else
    {
      MR_Integer Signal_10 = ((MR_Integer) ((MR_hl_field(1, Var_21, (MR_Integer) 0))));
      MR_String SignalStr_11;
      MR_String ErrMsg_12;
      MR_Word Var_20;

{
#define MR_PROC_LABEL mercury__io__call_system__call_system_4_p_0

	MR_Integer I;
	MR_String S;

	I = Signal_10 ;
		{

    char buffer[21]; // 1 for sign, 19 for digits, 1 for nul.
    sprintf(buffer, "%" MR_INTEGER_LENGTH_MODIFIER "d", I);
    MR_allocate_aligned_string_msg(S, strlen(buffer), MR_ALLOC_ID);
    strcpy(S, buffer);


		;}
#undef MR_PROC_LABEL
	SignalStr_11  = S;
}
      mercury__string__append_3_p_2((MR_String) "system command killed by signal number ", SignalStr_11, &ErrMsg_12);
      {
        Var_20 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_20, 0) = ((MR_Box) (ErrMsg_12));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (Var_20));
      }
    }
  }
}

void MR_CALL 
mercury__io__call_system__call_system_return_signal_4_p_0(
  MR_String Command_5,
  MR_Word * Result_6)
{
  MR_bool succeeded;
  MR_Integer Status_8;
  MR_Box Error_9;
  MR_Word MaybeIOError_10;

{
#define MR_PROC_LABEL mercury__io__call_system__call_system_return_signal_4_p_0

	MR_String Command;
	MR_Integer Status;
	MR_Integer Error;

	Command = Command_5 ;
		{

    // In multithreaded grades, try to use posix_spawn() instead of system().
    // There were problems with threads and system() on Linux/glibc, probably
    // because system() uses fork().
#if defined(MR_THREAD_SAFE) && defined(MR_HAVE_POSIX_SPAWN) &&         defined(MR_HAVE_ENVIRON)

    char    *argv[4];
    pid_t   pid;
    int     err;
    int     st;

    argv[0] = (char *) "sh";
    argv[1] = (char *) "-c";
    argv[2] = Command;
    argv[3] = NULL;

    // Protect `environ' from concurrent modifications.
    MR_OBTAIN_GLOBAL_LOCK("io.call_system_code/5");

    // See the comment at the head of the body of preceding foreign_decl
    // for details of why Mac OS X is different here.
    #if defined(MR_MAC_OSX)
        err = posix_spawn(&pid, "/bin/sh", NULL, NULL, argv,
            *_NSGetEnviron());
    #else
        err = posix_spawn(&pid, "/bin/sh", NULL, NULL, argv, environ);
    #endif

    MR_RELEASE_GLOBAL_LOCK("io.call_system_code/5");

    if (err != 0) {
        // Spawn failed.
        Error = errno;
    } else {
        // Wait for the spawned process to exit.
        do {
            err = waitpid(pid, &st, 0);
        } while (err == -1 && MR_is_eintr(errno));
        if (err == -1) {
            Error = errno;
        } else {
            Status = st;
            Error = 0;
        }
    }

#else   // !MR_THREAD_SAFE || !MR_HAVE_POSIX_SPAWN || !MR_HAVE_ENVIRON

  #ifdef MR_WIN32
    Status = _wsystem(MR_utf8_to_wide(Command));
  #else
    Status = system(Command);
  #endif

    if (Status == -1) {
        Error = errno;
    } else {
        Error = 0;
    }

#endif  // !MR_THREAD_SAFE || !MR_HAVE_POSIX_SPAWN || !MR_HAVE_ENVIRON


		;}
#undef MR_PROC_LABEL
	Status_8  = Status;
	Error_9  = (MR_Box) Error;
}
{
#define MR_PROC_LABEL mercury__io__call_system__call_system_return_signal_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer)Error_9 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    MaybeIOError_10 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_16;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_9, (MR_String) "error invoking system command: ", &Var_16);
    {
      MaybeIOError_10 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeIOError_10, 0) = ((MR_Box) (Var_16));
    }
  }
  if ((MaybeIOError_10 == (MR_Word) ((MR_Unsigned) 0U)))
    *Result_6 = mercury__io__call_system__decode_system_command_exit_code_1_f_0(Status_8);
  else
  {
    MR_Word IOError_11 = ((MR_Word) ((MR_hl_field(1, MaybeIOError_10, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_6 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (IOError_11));
    }
  }
}

MR_Word MR_CALL 
mercury__io__call_system__decode_system_command_exit_code_1_f_0(
  MR_Integer Code0_3)
{
  MR_Word Status_4;
  MR_Word Exited_5;
  MR_Integer ExitCode_6;
  MR_Word Signalled_7;
  MR_Integer Signal_8;

{
#define MR_PROC_LABEL mercury__io__call_system__decode_system_command_exit_code_1_f_0

	MR_Integer Status0;
	MR_Word Exited;
	MR_Integer Status;
	MR_Word Signalled;
	MR_Integer Signal;

	Status0 = Code0_3 ;
		{

    Exited = MR_NO;
    Status = 0;
    Signalled = MR_NO;
    Signal = 0;

    #if defined (WIFEXITED) && defined (WEXITSTATUS) &&             defined (WIFSIGNALED) && defined (WTERMSIG)
        if (WIFEXITED(Status0)) {
            Exited = MR_YES;
            Status = WEXITSTATUS(Status0);
        } else if (WIFSIGNALED(Status0)) {
            Signalled = MR_YES;
            Signal = WTERMSIG(Status0);
        }
    #else
        Exited = MR_YES;
        Status = Status0;
    #endif


		;}
#undef MR_PROC_LABEL
	Exited_5  = Exited;
	ExitCode_6  = Status;
	Signalled_7  = Signalled;
	Signal_8  = Signal;
}
  switch (Exited_5) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (Signalled_7) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          Status_4 = (MR_Word) (MR_mkword(1, &mercury__io__call_system_scalar_common_4[1]));
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_11;

            {
              Var_11 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_11, 0) = ((MR_Box) (Signal_8));
            }
            {
              Status_4 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Status_4, 0) = ((MR_Box) (Var_11));
            }
          }
          break;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Var_10;

        {
          Var_10 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_10, 0) = ((MR_Box) (ExitCode_6));
        }
        {
          Status_4 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Status_4, 0) = ((MR_Box) (Var_10));
        }
      }
      break;
  }
  return Status_4;
}

void mercury__io__call_system__init(void)
{
}

void mercury__io__call_system__init_type_tables(void)
{
}

void mercury__io__call_system__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__io__call_system__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module io.call_system.
