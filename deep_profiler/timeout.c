/*
** Automatically generated from `timeout.m'
** by the Mercury compiler,
** version rotd-2013-03-26, configured for x86_64-apple-darwin12.2.1.
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


/* :- module timeout. */
/* :- implementation. */

/*
INIT mercury__timeout__init
ENDINIT
*/

#include "timeout.mih"


#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "enum.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "rtti_implementation.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"




#line 764 "timeout.m"
static void MR_CALL 
timeout__do_release_lock_3_p_0(
#line 764 "timeout.m"
  MR_String timeout__MutexFile_1);

#line 750 "timeout.m"
static void MR_CALL 
timeout__do_get_lock_3_p_0(
#line 750 "timeout.m"
  MR_String timeout__MutexFile_1);







#include "timeout.mh"
#include "io.mh"
#include "io.mh"
#include "time.mh"
#include "string.mh"
#include "bitmap.mh"
#include "bitmap.mh"
#include "time.mh"
#include "time.mh"
#line 153 "timeout.m"

#ifdef  MR_DEEP_PROFILER_ENABLED

#include    <sys/types.h>

const char  *MP_cleanup_files[MP_MAX_CLEANUP_FILES];
int         MP_cleanup_file_next = 0;

int         MP_timeout_seconds = 30 * 60;
const char  *MP_timeout_mutex_file = NULL;
const char  *MP_timeout_want_dir = NULL;
const char  *MP_timeout_want_prefix = NULL;

/* set this variable to MR_TRUE to debug the code cleanup array */
MR_bool     MP_print_cleanup_files = MR_FALSE;

void
MP_maybe_print_cleanup_files(const char *msg)
{
    int i;

    if (MP_print_cleanup_files) {
        fprintf(stderr, "\n%s cleanup files:\n", msg);
        for (i = 0; i < MP_cleanup_file_next; i++) {
            fprintf(stderr, "%i %s\n", i, MP_cleanup_files[i]);
        }
    }
}

void
MP_register_cleanup_file(const char *filename)
{
    int i;

    if (MP_cleanup_file_next >= MP_MAX_CLEANUP_FILES - 1) {
        MR_fatal_error("MP_register_cleanup_file: too many entries");
    }

    for (i = 0; i < MP_cleanup_file_next; i++) {
        if (MR_streq(filename, MP_cleanup_files[i])) {
            MR_fatal_error("MP_register_cleanup_file: duplicate");
        }
    }

    MP_cleanup_files[MP_cleanup_file_next] = filename;
    MP_cleanup_file_next++;
    MP_maybe_print_cleanup_files("register");
}

void
MP_unregister_cleanup_file(const char *filename)
{
    int i;
    int j;

    for (i = 0; i < MP_cleanup_file_next; i++) {
        if (MR_streq(filename, MP_cleanup_files[i])) {
            /* shift the array entries above index i down one */
            for (j = i + 1; j < MP_cleanup_file_next; j++) {
                MP_cleanup_files[j - 1] = MP_cleanup_files[j];
            }

            MP_cleanup_file_next--;
            MP_maybe_print_cleanup_files("unregister");
            return;
        }
    }

    MR_fatal_error("MP_unregister_cleanup_file: not found");
}

void
MP_handle_fatal_exception(void *data)
{
    /* we ignore data */
    MP_delete_cleanup_files();
}

void
MP_delete_cleanup_files(void)
{
    int     i;
    MR_bool delayed_mutex_file;

    /*
    ** We want to remove the mutex file only after we have removed the
    ** files manipulated by the critical section it was protecting.
    */

    MP_maybe_print_cleanup_files("delete");

    delayed_mutex_file = MR_FALSE;
    for (i = 0; i < MP_cleanup_file_next; i++) {
        if (MR_streq(MP_timeout_mutex_file, MP_cleanup_files[i])) {
            delayed_mutex_file = MR_TRUE;
        } else {
            if (remove(MP_cleanup_files[i]) != 0) {
                perror(MP_cleanup_files[i]);
            }
        }
    }

    if (delayed_mutex_file) {
        if (remove(MP_timeout_mutex_file) != 0) {
            perror(MP_timeout_mutex_file);
        }
    }

    MP_cleanup_file_next = 0;
}

void
MP_delete_cleanup_files_and_exit_failure(const char *signal_name)
{
    FILE    *fp;
    char    buf[1024];  /* that should be big enough */

#ifdef  MP_DEBUG_MDPROF_SIGNAL
    fp = fopen("/tmp/mdprof_signal", "w");
    if (fp != NULL) {
        fprintf(fp, "%s\n", signal_name);
        (void) fclose(fp);
    }
#endif

    MP_delete_cleanup_files();

#ifdef  MP_DEBUG_MDPROF_SIGNAL
    sprintf(buf, "Mercury deep profiler: received unexpected signal %s",
        signal_name);
    MR_fatal_error(buf);
#else
    exit(EXIT_FAILURE);
#endif
}

/*
** SIGALRM alarm signal indicates a timeout. SIGTERM usually indicates the
** machine is being shut down. The others are there to catch forceful shutdowns
** during development, both intentional ones where the programmer sends the
** signal and those caused by bugs in the server code. We would like to include
** all catchable, fatal signals in this list, but that set is somewhat OS
** dependent. The set whose existence we test for here includes all the
** signals that are at all likely to be sent to server process.
**
** We don't test for the existence of SIGALRM, because we want compilation to
** fail if it does not exist. Without alarm signals, server processes will
** never be timed out, and thus constitute a resource leak (mostly of virtual
** memory/swap space).
**
** We could avoid this problem if we had a version of atexit that executed
** its actions even when the program exits after a signal.
*/

const MP_sig_handler MP_signal_structs[] =
{
    { SIGALRM,  MP_handle_timeout },
#ifdef SIGTERM
    { SIGTERM,  MP_handle_sig_term },
#endif
#ifdef SIGHUP
    { SIGHUP,   MP_handle_sig_hup },
#endif
#ifdef SIGINT
    { SIGINT,   MP_handle_sig_int },
#endif
#ifdef SIGQUIT
    { SIGQUIT,  MP_handle_sig_quit },
#endif
#ifdef SIGILL
    { SIGILL,   MP_handle_sig_ill },
#endif
#ifdef SIGABRT
    { SIGABRT,  MP_handle_sig_abrt },
#endif
#ifdef SIGBUS
    { SIGBUS,   MP_handle_sig_bus },
#endif
#ifdef SIGFPE
    { SIGFPE,   MP_handle_sig_fpe },
#endif
#ifdef SIGSEGV
    { SIGSEGV,  MP_handle_sig_segv },
#endif
#ifdef SIGPIPE
    { SIGPIPE,  MP_handle_sig_pipe },
#endif
    { -1,       NULL }
};

void
MP_handle_timeout(void)
{
    DIR             *dir;
    struct  dirent  *dirent;
    int             matchlen;
    MR_bool         success;

#ifdef  MP_DEBUG_LOCKS
    {
        FILE    *debug_fp;

        debug_fp = fopen("/tmp/deep_locks", "a");
        if (debug_fp != NULL) {
            fprintf(debug_fp, "pid %d MP_handle_timeout at %d\n",
                getpid(), (int) time(NULL));
            fclose(debug_fp);
        }
    }
#endif

    if (MP_timeout_want_dir == NULL || MP_timeout_want_prefix == NULL) {
        MR_fatal_error("MP_handle_timeout: null dir or prefix");
    }

    matchlen = strlen(MP_timeout_want_prefix);

    success = MP_do_try_get_lock(MP_timeout_mutex_file);
    if (! success) {
        /*
        ** We could not get the lock, so some other process holds it.
        ** We therefore abort the timeout, but schedule the next one.
        */

#ifdef  MP_DEBUG_LOCKS
        {
            FILE    *debug_fp;

            debug_fp = fopen("/tmp/deep_locks", "a");
            if (debug_fp != NULL) {
                fprintf(debug_fp, "pid %d aborting timeout: lock\n",
                    getpid());
                fclose(debug_fp);
            }
        }
#endif

        (void) alarm(MP_timeout_seconds);
        return;
    }

    dir = opendir(MP_timeout_want_dir);
    if (dir == NULL) {
        MR_fatal_error("MP_handle_timeout: opendir failed");
    }

    while ((dirent = readdir(dir)) != NULL) {
        if (MR_strneq(dirent->d_name, MP_timeout_want_prefix, matchlen)) {

#ifdef  MP_DEBUG_LOCKS
            {
                FILE    *debug_fp;

                debug_fp = fopen("/tmp/deep_locks", "a");
                if (debug_fp != NULL) {
                    fprintf(debug_fp,
                        "pid %d aborting timeout: want file\n", getpid());
                    fclose(debug_fp);
                }
            }
#endif
            /* abort the timeout */
            (void) closedir(dir);
            (void) alarm(MP_timeout_seconds);
            return;
        }
    }

    (void) closedir(dir);

    /*
    ** This call will delete the mutex file last, releasing the mutex.
    */

    MP_delete_cleanup_files();

#ifdef  MP_DEBUG_LOCKS
    {
        FILE    *debug_fp;

        debug_fp = fopen("/tmp/deep_locks", "a");
        if (debug_fp != NULL) {
            fprintf(debug_fp, "pid %d timeout exit\n", getpid());
            fclose(debug_fp);
        }
    }
#endif

    exit(EXIT_SUCCESS);
}

void
MP_handle_sig_term(void)
{
    MP_delete_cleanup_files_and_exit_failure("SIGTERM");
}

void
MP_handle_sig_hup(void)
{
    MP_delete_cleanup_files_and_exit_failure("SIGHUP");
}

void
MP_handle_sig_int(void)
{
    MP_delete_cleanup_files_and_exit_failure("SIGINT");
}

void
MP_handle_sig_quit(void)
{
    MP_delete_cleanup_files_and_exit_failure("SIGQUIT");
}

void
MP_handle_sig_ill(void)
{
    MP_delete_cleanup_files_and_exit_failure("SIGILL");
}

void
MP_handle_sig_abrt(void)
{
    MP_delete_cleanup_files_and_exit_failure("SIGABRT");
}

void
MP_handle_sig_bus(void)
{
    MP_delete_cleanup_files_and_exit_failure("SIGBUS");
}

void
MP_handle_sig_fpe(void)
{
    MP_delete_cleanup_files_and_exit_failure("SIGFPE");
}

void
MP_handle_sig_segv(void)
{
    MP_delete_cleanup_files_and_exit_failure("SIGSEGV");
}

void
MP_handle_sig_pipe(void)
{
    MP_delete_cleanup_files_and_exit_failure("SIGPIPE");
}

MR_bool
MP_do_try_get_lock(const char *mutex_file)
{
    int     res;
    MR_bool success;

    res = open(mutex_file, O_CREAT | O_EXCL, 0);
    if (res >= 0) {
#ifdef  MP_DEBUG_LOCKS
        FILE    *debug_fp;

        debug_fp = fopen("/tmp/deep_locks", "a");
        if (debug_fp != NULL) {
            fprintf(debug_fp, "pid %d try: lock %s\n",
                getpid(), mutex_file);
            fclose(debug_fp);
        }
#endif

        (void) close(res);
        MP_register_cleanup_file(mutex_file);
        success = MR_TRUE;
    } else if (res < 0 && errno == EEXIST) {
#ifdef  MP_DEBUG_LOCKS
        FILE    *debug_fp;

        debug_fp = fopen("/tmp/deep_locks", "a");
        if (debug_fp != NULL) {
            fprintf(debug_fp, "pid %d try: no lock %s\n",
                getpid(), mutex_file);
            fclose(debug_fp);
        }
#endif

        success = MR_FALSE;
    } else {
        MR_fatal_error("MP_do_try_get_lock failed");
    }

    return success;
}

void
MP_do_get_lock(const char *mutex_file)
{
    int res;

    for (;;) {
        res = open(mutex_file, O_CREAT | O_EXCL, 0);
        if (res >= 0) {
#ifdef  MP_DEBUG_LOCKS
            FILE    *debug_fp;

            debug_fp = fopen("/tmp/deep_locks", "a");
            if (debug_fp != NULL) {
                fprintf(debug_fp, "pid %d got lock %s\n",
                    getpid(), mutex_file);
                fclose(debug_fp);
            }
#endif

            (void) close(res);
            MP_register_cleanup_file(mutex_file);
            return;
        } else if (res < 0 && errno == EEXIST) {
#ifdef  MP_DEBUG_LOCKS
            FILE    *debug_fp;

            debug_fp = fopen("/tmp/deep_locks", "a");
            if (debug_fp != NULL) {
                fprintf(debug_fp, "pid %d trying to lock %s ...\n",
                    getpid(), mutex_file);
                fclose(debug_fp);
            }
#endif

            sleep(5);
            continue;
        } else {
            MR_fatal_error("MP_do_get_lock failed");
        }
    }
}

void
MP_do_release_lock(const char *mutex_file)
{
#ifdef  MP_DEBUG_LOCKS
    FILE    *debug_fp;

    debug_fp = fopen("/tmp/deep_locks", "a");
    if (debug_fp != NULL) {
        fprintf(debug_fp, "pid %d releasing lock %s\n",
            getpid(), mutex_file);
        fclose(debug_fp);
    }
#endif

    MP_unregister_cleanup_file(mutex_file);
    (void) unlink(mutex_file);
}

#endif  /* MR_DEEP_PROFILER_ENABLED */



#line 764 "timeout.m"
static void MR_CALL 
timeout__do_release_lock_3_p_0(
#line 764 "timeout.m"
  MR_String timeout__MutexFile_1)
#line 764 "timeout.m"
{
#line 766 "timeout.m"
  {
#line 766 "timeout.m"
    MR_bool timeout__succeeded;

#line 769 "timeout.m"
{
#define MR_PROC_LABEL timeout__do_release_lock_3_p_0

	MR_String MutexFile;
	MR_Word S0;
	MR_Word S;

	MutexFile =  timeout__MutexFile_1 ;
	S0 = (MR_Word) (MR_Integer) 0 ;
		{
#line 769 "timeout.m"

#ifdef  MR_DEEP_PROFILER_ENABLED
    MP_do_release_lock(MutexFile);
    S = S0;
#else
    MR_fatal_error("deep profiler not enabled");
#endif

#line 578 "timeout.c"

		;}
#undef MR_PROC_LABEL
#line 769 "timeout.m"
}
#line 766 "timeout.m"
  }
#line 764 "timeout.m"
}

#line 750 "timeout.m"
static void MR_CALL 
timeout__do_get_lock_3_p_0(
#line 750 "timeout.m"
  MR_String timeout__MutexFile_1)
#line 750 "timeout.m"
{
#line 752 "timeout.m"
  {
#line 752 "timeout.m"
    MR_bool timeout__succeeded;

#line 755 "timeout.m"
{
#define MR_PROC_LABEL timeout__do_get_lock_3_p_0

	MR_String MutexFile;
	MR_Word S0;
	MR_Word S;

	MutexFile =  timeout__MutexFile_1 ;
	S0 = (MR_Word) (MR_Integer) 0 ;
		{
#line 755 "timeout.m"

#ifdef  MR_DEEP_PROFILER_ENABLED
    MP_do_get_lock(MutexFile);
    S = S0;
#else
    MR_fatal_error("deep profiler not enabled");
#endif

#line 621 "timeout.c"

		;}
#undef MR_PROC_LABEL
#line 755 "timeout.m"
}
#line 752 "timeout.m"
  }
#line 750 "timeout.m"
}

#line 84 "timeout.m"
void MR_CALL 
timeout__remove_want_file_3_p_0(
#line 84 "timeout.m"
  MR_String timeout__WantFileName_1)
#line 84 "timeout.m"
{
#line 797 "timeout.m"
  {
#line 797 "timeout.m"
    MR_bool timeout__succeeded;

#line 800 "timeout.m"
{
#define MR_PROC_LABEL timeout__remove_want_file_3_p_0

	MR_String WantFileName;
	MR_Word S0;
	MR_Word S;

	WantFileName =  timeout__WantFileName_1 ;
	S0 = (MR_Word) (MR_Integer) 0 ;
		{
#line 800 "timeout.m"

#ifdef  MR_DEEP_PROFILER_ENABLED
    MP_unregister_cleanup_file(WantFileName);
    (void) unlink(WantFileName);
    S = S0;
#else
    MR_fatal_error("deep profiler not enabled");
#endif

#line 665 "timeout.c"

		;}
#undef MR_PROC_LABEL
#line 800 "timeout.m"
}
#line 797 "timeout.m"
  }
#line 84 "timeout.m"
}

#line 80 "timeout.m"
void MR_CALL 
timeout__make_want_file_3_p_0(
#line 80 "timeout.m"
  MR_String timeout__WantFileName_1)
#line 80 "timeout.m"
{
#line 778 "timeout.m"
  {
#line 778 "timeout.m"
    MR_bool timeout__succeeded;

#line 781 "timeout.m"
{
#define MR_PROC_LABEL timeout__make_want_file_3_p_0

	MR_String WantFileName;
	MR_Word S0;
	MR_Word S;

	WantFileName =  timeout__WantFileName_1 ;
	S0 = (MR_Word) (MR_Integer) 0 ;
		{
#line 781 "timeout.m"

#ifdef  MR_DEEP_PROFILER_ENABLED
    int fd;

    fd = open(WantFileName, O_CREAT, 0);
    if (fd < 0) {
        MR_fatal_error("make_want_file: open failed");
    }
    (void) close(fd);
    MP_register_cleanup_file(WantFileName);
    S = S0;
#else
    MR_fatal_error("deep profiler not enabled");
#endif

#line 715 "timeout.c"

		;}
#undef MR_PROC_LABEL
#line 781 "timeout.m"
}
#line 778 "timeout.m"
  }
#line 80 "timeout.m"
}

#line 75 "timeout.m"
void MR_CALL 
timeout__release_lock_4_p_0(
#line 75 "timeout.m"
  MR_Word timeout__Debug_5,
#line 75 "timeout.m"
  MR_String timeout__MutexFile_6)
#line 75 "timeout.m"
{
#line 744 "timeout.m"
  {
#line 744 "timeout.m"
    MR_bool timeout__succeeded;

#line 744 "timeout.m"
    if ((timeout__Debug_5 == (MR_Integer) 0))
#line 766 "timeout.m"
      {
#line 769 "timeout.m"
{
#define MR_PROC_LABEL timeout__release_lock_4_p_0

	MR_String MutexFile;
	MR_Word S0;
	MR_Word S;

	MutexFile =  timeout__MutexFile_6 ;
	S0 = (MR_Word) (MR_Integer) 0 ;
		{
#line 769 "timeout.m"

#ifdef  MR_DEEP_PROFILER_ENABLED
    MP_do_release_lock(MutexFile);
    S = S0;
#else
    MR_fatal_error("deep profiler not enabled");
#endif

#line 764 "timeout.c"

		;}
#undef MR_PROC_LABEL
#line 769 "timeout.m"
}
#line 766 "timeout.m"
      }
#line 744 "timeout.m"
    else
#line 744 "timeout.m"
      {
#line 744 "timeout.m"
      }
#line 744 "timeout.m"
  }
#line 75 "timeout.m"
}

#line 69 "timeout.m"
void MR_CALL 
timeout__get_lock_4_p_0(
#line 69 "timeout.m"
  MR_Word timeout__Debug_5,
#line 69 "timeout.m"
  MR_String timeout__MutexFile_6)
#line 69 "timeout.m"
{
#line 736 "timeout.m"
  {
#line 736 "timeout.m"
    MR_bool timeout__succeeded;

#line 736 "timeout.m"
    if ((timeout__Debug_5 == (MR_Integer) 0))
#line 752 "timeout.m"
      {
#line 755 "timeout.m"
{
#define MR_PROC_LABEL timeout__get_lock_4_p_0

	MR_String MutexFile;
	MR_Word S0;
	MR_Word S;

	MutexFile =  timeout__MutexFile_6 ;
	S0 = (MR_Word) (MR_Integer) 0 ;
		{
#line 755 "timeout.m"

#ifdef  MR_DEEP_PROFILER_ENABLED
    MP_do_get_lock(MutexFile);
    S = S0;
#else
    MR_fatal_error("deep profiler not enabled");
#endif

#line 821 "timeout.c"

		;}
#undef MR_PROC_LABEL
#line 755 "timeout.m"
}
#line 752 "timeout.m"
      }
#line 736 "timeout.m"
    else
#line 736 "timeout.m"
      {
#line 736 "timeout.m"
      }
#line 736 "timeout.m"
  }
#line 69 "timeout.m"
}

#line 63 "timeout.m"
void MR_CALL 
timeout__setup_timeout_3_p_0(
#line 63 "timeout.m"
  MR_Integer timeout__Minutes_1)
#line 63 "timeout.m"
{
#line 705 "timeout.m"
  {
#line 705 "timeout.m"
    MR_bool timeout__succeeded;

#line 708 "timeout.m"
{
#define MR_PROC_LABEL timeout__setup_timeout_3_p_0

	MR_Integer Minutes;
	MR_Word S0;
	MR_Word S;

	Minutes =  timeout__Minutes_1 ;
	S0 = (MR_Word) (MR_Integer) 0 ;
		{
#line 708 "timeout.m"

#ifdef  MR_DEEP_PROFILER_ENABLED
    MP_timeout_seconds = Minutes * 60;
    (void) alarm(MP_timeout_seconds);
    S = S0;

#ifdef  MP_DEBUG_LOCKS
    {
        FILE    *debug_fp;

        debug_fp = fopen("/tmp/deep_locks", "a");
        if (debug_fp != NULL) {
            fprintf(debug_fp, "pid %d setup timeout at %d for %d\n",
                getpid(), (int) time(NULL),
                (int) time(NULL) + MP_timeout_seconds);
            fclose(debug_fp);
        }
    }
#endif
#else
    MR_fatal_error("deep profiler not enabled");
#endif

#line 887 "timeout.c"

		;}
#undef MR_PROC_LABEL
#line 708 "timeout.m"
}
#line 705 "timeout.m"
  }
#line 63 "timeout.m"
}

#line 58 "timeout.m"
void MR_CALL 
timeout__setup_signals_5_p_0(
#line 58 "timeout.m"
  MR_String timeout__MutexFile_1,
#line 58 "timeout.m"
  MR_String timeout__WantDir_2,
#line 58 "timeout.m"
  MR_String timeout__WantPrefix_3)
#line 58 "timeout.m"
{
#line 658 "timeout.m"
  {
#line 658 "timeout.m"
    MR_bool timeout__succeeded;

#line 661 "timeout.m"
{
#define MR_PROC_LABEL timeout__setup_signals_5_p_0

	MR_String MutexFile;
	MR_String WantDir;
	MR_String WantPrefix;
	MR_Word S0;
	MR_Word S;

	MutexFile =  timeout__MutexFile_1 ;
	WantDir =  timeout__WantDir_2 ;
	WantPrefix =  timeout__WantPrefix_3 ;
	S0 = (MR_Word) (MR_Integer) 0 ;
		{
#line 661 "timeout.m"

#ifdef  MR_DEEP_PROFILER_ENABLED
    int i;

#ifdef  MP_DEBUG_LOCKS
    {
        FILE    *debug_fp;

        debug_fp = fopen("/tmp/deep_locks", "a");
        if (debug_fp != NULL) {
            fprintf(debug_fp, "pid %d setup signals ...\n", getpid());
            fprintf(debug_fp, "mutexfile %s, wantdir %s, wantprefix %s\n",
                MutexFile, WantDir, WantPrefix);
            fclose(debug_fp);
        }
    }
#endif

    MP_timeout_mutex_file = MutexFile;
    MP_timeout_want_dir = WantDir;
    MP_timeout_want_prefix = WantPrefix;

    for (i = 0; MP_signal_structs[i].MP_signum >= 0; i++) {
        MR_setup_signal(MP_signal_structs[i].MP_signum,
            MP_signal_structs[i].MP_handler, MR_FALSE,
            "Mercury deep profiler: cannot setup signal exit");
    }

    /*
    ** Mercury exceptions do not cause signals. The default exception
    ** handler prints and error message and exits. To ensure that
    ** we delete the files we need to clean up, we get the exit
    ** library function to invoke MP_delete_cleanup_files through
    ** MP_handle_fatal_exception.
    */

    MR_register_exception_cleanup(MP_handle_fatal_exception, NULL);

    S = S0;
#else
    MR_fatal_error("deep profiler not enabled");
#endif

#line 973 "timeout.c"

		;}
#undef MR_PROC_LABEL
#line 661 "timeout.m"
}
#line 658 "timeout.m"
  }
#line 58 "timeout.m"
}

#line 51 "timeout.m"
void MR_CALL 
timeout__delete_cleanup_files_2_p_0(void)
#line 51 "timeout.m"
{
#line 646 "timeout.m"
  {
#line 646 "timeout.m"
    MR_bool timeout__succeeded;

#line 649 "timeout.m"
{
#define MR_PROC_LABEL timeout__delete_cleanup_files_2_p_0

	MR_Word S0;
	MR_Word S;

	S0 = (MR_Word) (MR_Integer) 0 ;
		{
#line 649 "timeout.m"

#ifdef  MR_DEEP_PROFILER_ENABLED
    MP_delete_cleanup_files();
    S = S0;
#else
    MR_fatal_error("deep profiler not enabled");
#endif

#line 1012 "timeout.c"

		;}
#undef MR_PROC_LABEL
#line 649 "timeout.m"
}
#line 646 "timeout.m"
  }
#line 51 "timeout.m"
}

#line 47 "timeout.m"
void MR_CALL 
timeout__unregister_all_files_for_cleanup_2_p_0(void)
#line 47 "timeout.m"
{
#line 634 "timeout.m"
  {
#line 634 "timeout.m"
    MR_bool timeout__succeeded;

#line 637 "timeout.m"
{
#define MR_PROC_LABEL timeout__unregister_all_files_for_cleanup_2_p_0

	MR_Word S0;
	MR_Word S;

	S0 = (MR_Word) (MR_Integer) 0 ;
		{
#line 637 "timeout.m"

#ifdef  MR_DEEP_PROFILER_ENABLED
    MP_cleanup_file_next = 0;
    S = S0;
#else
    MR_fatal_error("deep profiler not enabled");
#endif

#line 1051 "timeout.c"

		;}
#undef MR_PROC_LABEL
#line 637 "timeout.m"
}
#line 634 "timeout.m"
  }
#line 47 "timeout.m"
}

#line 43 "timeout.m"
void MR_CALL 
timeout__unregister_file_for_cleanup_3_p_0(
#line 43 "timeout.m"
  MR_String timeout__File_1)
#line 43 "timeout.m"
{
#line 622 "timeout.m"
  {
#line 622 "timeout.m"
    MR_bool timeout__succeeded;

#line 625 "timeout.m"
{
#define MR_PROC_LABEL timeout__unregister_file_for_cleanup_3_p_0

	MR_String File;
	MR_Word S0;
	MR_Word S;

	File =  timeout__File_1 ;
	S0 = (MR_Word) (MR_Integer) 0 ;
		{
#line 625 "timeout.m"

#ifdef  MR_DEEP_PROFILER_ENABLED
    MP_unregister_cleanup_file(File);
    S = S0;
#else
    MR_fatal_error("deep profiler not enabled");
#endif

#line 1094 "timeout.c"

		;}
#undef MR_PROC_LABEL
#line 625 "timeout.m"
}
#line 622 "timeout.m"
  }
#line 43 "timeout.m"
}

#line 39 "timeout.m"
void MR_CALL 
timeout__register_file_for_cleanup_3_p_0(
#line 39 "timeout.m"
  MR_String timeout__File_1)
#line 39 "timeout.m"
{
#line 610 "timeout.m"
  {
#line 610 "timeout.m"
    MR_bool timeout__succeeded;

#line 613 "timeout.m"
{
#define MR_PROC_LABEL timeout__register_file_for_cleanup_3_p_0

	MR_String File;
	MR_Word S0;
	MR_Word S;

	File =  timeout__File_1 ;
	S0 = (MR_Word) (MR_Integer) 0 ;
		{
#line 613 "timeout.m"

#ifdef  MR_DEEP_PROFILER_ENABLED
    MP_register_cleanup_file(File);
    S = S0;
#else
    MR_fatal_error("deep profiler not enabled");
#endif

#line 1137 "timeout.c"

		;}
#undef MR_PROC_LABEL
#line 613 "timeout.m"
}
#line 610 "timeout.m"
  }
#line 39 "timeout.m"
}

void mercury__timeout__init(void)
{
}

void mercury__timeout__init_type_tables(void)
{
}

void mercury__timeout__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;

/* :- end_module timeout. */
