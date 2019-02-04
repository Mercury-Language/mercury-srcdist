/*
** Automatically generated from `timeout.m'
** by the Mercury compiler,
** version rotd-2010-01-31, configured for x86_64-unknown-linux-gnu.
** Do not edit.
**
** The autoconfigured grade settings governing
** the generation of this C file were
**
** TAG_BITS=2
** UNBOXED_FLOAT=no
** HIGHLEVEL_CODE=no
**
** END_OF_C_GRADE_INFO
*/

/*
INIT mercury__timeout__init
ENDINIT
*/

#define MR_ALLOW_RESET
#include "mercury_imp.h"
#line 25 "timeout.c"
#include "timeout.mh"

#line 28 "timeout.c"
#line 534 "../library/io.int"
#include "io.mh"

#line 32 "timeout.c"
#line 542 "../library/io.int"
#include "string.mh"

#line 36 "timeout.c"
#line 29 "../library/bitmap.int2"
#include "bitmap.mh"

#line 40 "timeout.c"
#line 28 "../library/time.int2"
#include "time.mh"

#line 44 "timeout.c"
#line 45 "timeout.c"
#ifndef TIMEOUT_DECL_GUARD
#define TIMEOUT_DECL_GUARD

#line 49 "timeout.c"
#line 93 "timeout.m"

#ifdef  MR_DEEP_PROFILER_ENABLED

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>  /* for O_CREAT, O_EXCL */
#include <signal.h> /* for signal numbers */
#include <unistd.h> /* for alarm() */
#include <stdio.h>
#include <errno.h>  /* for EEXIST etc */
#include    <dirent.h>
#include "mercury_signal.h"

#define MP_MAX_CLEANUP_FILES    20  /* this should be plenty */

extern  const char  *MP_cleanup_files[MP_MAX_CLEANUP_FILES];
extern  int     MP_cleanup_file_next;

extern  void        MP_maybe_print_cleanup_files(const char *msg);
extern  void        MP_register_cleanup_file(const char *filename);
extern  void        MP_unregister_cleanup_file(const char *filename);
extern  void        MP_handle_fatal_exception(void *data);
extern  void        MP_delete_cleanup_files(void);
extern  void        MP_delete_cleanup_files_and_exit_failure(
                        const char *signal_name);

extern  int         MP_timeout_seconds;
extern  const char  *MP_timeout_mutex_file;
extern  const char  *MP_timeout_want_dir;
extern  const char  *MP_timeout_want_prefix;

typedef struct
{
    int             MP_signum;
    void            (*MP_handler)(void);
} MP_sig_handler;

extern  const MP_sig_handler    MP_signal_structs[];

extern  void    MP_handle_timeout(void);

extern  void    MP_handle_sig_term(void);
extern  void    MP_handle_sig_hup(void);
extern  void    MP_handle_sig_int(void);
extern  void    MP_handle_sig_quit(void);
extern  void    MP_handle_sig_ill(void);
extern  void    MP_handle_sig_abrt(void);
extern  void    MP_handle_sig_bus(void);
extern  void    MP_handle_sig_fpe(void);
extern  void    MP_handle_sig_segv(void);
extern  void    MP_handle_sig_pipe(void);

extern  MR_bool MP_do_try_get_lock(const char *mutex_file);
extern  void    MP_do_get_lock(const char *mutex_file);
extern  void    MP_do_release_lock(const char *mutex_file);

#endif

#line 109 "timeout.c"
#line 110 "timeout.c"

#endif
#line 113 "timeout.c"

#ifdef _MSC_VER
#define MR_STATIC_LINKAGE extern
#else
#define MR_STATIC_LINKAGE static
#endif
MR_decl_label1(timeout__get_lock_4_0, 2)
MR_decl_label1(timeout__release_lock_4_0, 2)
MR_def_extern_entry(timeout__register_file_for_cleanup_3_0)
MR_def_extern_entry(timeout__unregister_file_for_cleanup_3_0)
MR_def_extern_entry(timeout__unregister_all_files_for_cleanup_2_0)
MR_def_extern_entry(timeout__delete_cleanup_files_2_0)
MR_def_extern_entry(timeout__setup_signals_5_0)
MR_def_extern_entry(timeout__setup_timeout_3_0)
MR_decl_static(timeout__do_get_lock_3_0)
MR_def_extern_entry(timeout__get_lock_4_0)
MR_decl_static(timeout__do_release_lock_3_0)
MR_def_extern_entry(timeout__release_lock_4_0)
MR_def_extern_entry(timeout__make_want_file_3_0)
MR_def_extern_entry(timeout__remove_want_file_3_0)




MR_BEGIN_MODULE(timeout_module0)
	MR_init_entry1(timeout__register_file_for_cleanup_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__timeout__register_file_for_cleanup_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'register_file_for_cleanup'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__timeout__register_file_for_cleanup_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_String	File;
	MR_Word	S0;
	MR_Word	S;
#define	MR_PROC_LABEL	mercury__timeout__register_file_for_cleanup_3_0
	File = (MR_String) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("register_file_for_cleanup");
{
#line 613 "timeout.m"

#ifdef  MR_DEEP_PROFILER_ENABLED
    MP_register_cleanup_file(File);
    S = S0;
#else
    MR_fatal_error("deep profiler not enabled");
#endif
;}
#line 168 "timeout.c"
	MR_RELEASE_GLOBAL_LOCK("register_file_for_cleanup");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(timeout_module1)
	MR_init_entry1(timeout__unregister_file_for_cleanup_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__timeout__unregister_file_for_cleanup_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unregister_file_for_cleanup'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__timeout__unregister_file_for_cleanup_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_String	File;
	MR_Word	S0;
	MR_Word	S;
#define	MR_PROC_LABEL	mercury__timeout__unregister_file_for_cleanup_3_0
	File = (MR_String) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("unregister_file_for_cleanup");
{
#line 625 "timeout.m"

#ifdef  MR_DEEP_PROFILER_ENABLED
    MP_unregister_cleanup_file(File);
    S = S0;
#else
    MR_fatal_error("deep profiler not enabled");
#endif
;}
#line 210 "timeout.c"
	MR_RELEASE_GLOBAL_LOCK("unregister_file_for_cleanup");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(timeout_module2)
	MR_init_entry1(timeout__unregister_all_files_for_cleanup_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__timeout__unregister_all_files_for_cleanup_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'unregister_all_files_for_cleanup'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__timeout__unregister_all_files_for_cleanup_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	S0;
	MR_Word	S;
#define	MR_PROC_LABEL	mercury__timeout__unregister_all_files_for_cleanup_2_0
	MR_OBTAIN_GLOBAL_LOCK("unregister_all_files_for_cleanup");
{
#line 637 "timeout.m"

#ifdef  MR_DEEP_PROFILER_ENABLED
    MP_cleanup_file_next = 0;
    S = S0;
#else
    MR_fatal_error("deep profiler not enabled");
#endif
;}
#line 250 "timeout.c"
	MR_RELEASE_GLOBAL_LOCK("unregister_all_files_for_cleanup");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(timeout_module3)
	MR_init_entry1(timeout__delete_cleanup_files_2_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__timeout__delete_cleanup_files_2_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'delete_cleanup_files'/2 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__timeout__delete_cleanup_files_2_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Word	S0;
	MR_Word	S;
#define	MR_PROC_LABEL	mercury__timeout__delete_cleanup_files_2_0
	MR_OBTAIN_GLOBAL_LOCK("delete_cleanup_files");
{
#line 649 "timeout.m"

#ifdef  MR_DEEP_PROFILER_ENABLED
    MP_delete_cleanup_files();
    S = S0;
#else
    MR_fatal_error("deep profiler not enabled");
#endif
;}
#line 290 "timeout.c"
	MR_RELEASE_GLOBAL_LOCK("delete_cleanup_files");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(timeout_module4)
	MR_init_entry1(timeout__setup_signals_5_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__timeout__setup_signals_5_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'setup_signals'/5 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__timeout__setup_signals_5_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_String	MutexFile;
	MR_String	WantDir;
	MR_String	WantPrefix;
	MR_Word	S0;
	MR_Word	S;
#define	MR_PROC_LABEL	mercury__timeout__setup_signals_5_0
	MutexFile = (MR_String) MR_r1;
	WantDir = (MR_String) MR_r2;
	WantPrefix = (MR_String) MR_r3;
	MR_OBTAIN_GLOBAL_LOCK("setup_signals");
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
;}
#line 371 "timeout.c"
	MR_RELEASE_GLOBAL_LOCK("setup_signals");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(timeout_module5)
	MR_init_entry1(timeout__setup_timeout_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__timeout__setup_timeout_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'setup_timeout'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__timeout__setup_timeout_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_Integer	Minutes;
	MR_Word	S0;
	MR_Word	S;
#define	MR_PROC_LABEL	mercury__timeout__setup_timeout_3_0
	Minutes = MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("setup_timeout");
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
;}
#line 428 "timeout.c"
	MR_RELEASE_GLOBAL_LOCK("setup_timeout");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(timeout_module6)
	MR_init_entry1(timeout__do_get_lock_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__timeout__do_get_lock_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_get_lock'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(timeout__do_get_lock_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_String	MutexFile;
	MR_Word	S0;
	MR_Word	S;
#define	MR_PROC_LABEL	mercury__timeout__do_get_lock_3_0
	MutexFile = (MR_String) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("do_get_lock");
{
#line 755 "timeout.m"

#ifdef  MR_DEEP_PROFILER_ENABLED
    MP_do_get_lock(MutexFile);
    S = S0;
#else
    MR_fatal_error("deep profiler not enabled");
#endif
;}
#line 470 "timeout.c"
	MR_RELEASE_GLOBAL_LOCK("do_get_lock");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(timeout_module7)
	MR_init_entry1(timeout__get_lock_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__timeout__get_lock_4_0);
	MR_init_label1(timeout__get_lock_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'get_lock'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__timeout__get_lock_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(timeout__get_lock_4_0_i2);
	}
	{
	MR_String	MutexFile;
	MR_Word	S0;
	MR_Word	S;
#define	MR_PROC_LABEL	mercury__timeout__get_lock_4_0
	MutexFile = (MR_String) MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("do_get_lock");
{
#line 755 "timeout.m"

#ifdef  MR_DEEP_PROFILER_ENABLED
    MP_do_get_lock(MutexFile);
    S = S0;
#else
    MR_fatal_error("deep profiler not enabled");
#endif
;}
#line 516 "timeout.c"
	MR_RELEASE_GLOBAL_LOCK("do_get_lock");
#undef	MR_PROC_LABEL
	}
MR_def_label(timeout__get_lock_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(timeout_module8)
	MR_init_entry1(timeout__do_release_lock_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__timeout__do_release_lock_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'do_release_lock'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_def_static(timeout__do_release_lock_3_0)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_String	MutexFile;
	MR_Word	S0;
	MR_Word	S;
#define	MR_PROC_LABEL	mercury__timeout__do_release_lock_3_0
	MutexFile = (MR_String) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("do_release_lock");
{
#line 769 "timeout.m"

#ifdef  MR_DEEP_PROFILER_ENABLED
    MP_do_release_lock(MutexFile);
    S = S0;
#else
    MR_fatal_error("deep profiler not enabled");
#endif
;}
#line 560 "timeout.c"
	MR_RELEASE_GLOBAL_LOCK("do_release_lock");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(timeout_module9)
	MR_init_entry1(timeout__release_lock_4_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__timeout__release_lock_4_0);
	MR_init_label1(timeout__release_lock_4_0,2)
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'release_lock'/4 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__timeout__release_lock_4_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	if (MR_INT_NE(MR_r1,0)) {
		MR_GOTO_LAB(timeout__release_lock_4_0_i2);
	}
	{
	MR_String	MutexFile;
	MR_Word	S0;
	MR_Word	S;
#define	MR_PROC_LABEL	mercury__timeout__release_lock_4_0
	MutexFile = (MR_String) MR_r2;
	MR_OBTAIN_GLOBAL_LOCK("do_release_lock");
{
#line 769 "timeout.m"

#ifdef  MR_DEEP_PROFILER_ENABLED
    MP_do_release_lock(MutexFile);
    S = S0;
#else
    MR_fatal_error("deep profiler not enabled");
#endif
;}
#line 606 "timeout.c"
	MR_RELEASE_GLOBAL_LOCK("do_release_lock");
#undef	MR_PROC_LABEL
	}
MR_def_label(timeout__release_lock_4_0,2)
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(timeout_module10)
	MR_init_entry1(timeout__make_want_file_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__timeout__make_want_file_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'make_want_file'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__timeout__make_want_file_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_String	WantFileName;
	MR_Word	S0;
	MR_Word	S;
#define	MR_PROC_LABEL	mercury__timeout__make_want_file_3_0
	WantFileName = (MR_String) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("make_want_file");
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
;}
#line 657 "timeout.c"
	MR_RELEASE_GLOBAL_LOCK("make_want_file");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE


MR_BEGIN_MODULE(timeout_module11)
	MR_init_entry1(timeout__remove_want_file_3_0);
	MR_INIT_PROC_LAYOUT_ADDR(mercury__timeout__remove_want_file_3_0);
MR_BEGIN_CODE

/*-------------------------------------------------------------------------*/
/* code for 'remove_want_file'/3 mode 0 */
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_local_thread_engine_base
#endif
MR_define_entry(mercury__timeout__remove_want_file_3_0);
	MR_MAYBE_INIT_LOCAL_THREAD_ENGINE_BASE
	{
	MR_String	WantFileName;
	MR_Word	S0;
	MR_Word	S;
#define	MR_PROC_LABEL	mercury__timeout__remove_want_file_3_0
	WantFileName = (MR_String) MR_r1;
	MR_OBTAIN_GLOBAL_LOCK("remove_want_file");
{
#line 800 "timeout.m"

#ifdef  MR_DEEP_PROFILER_ENABLED
    MP_unregister_cleanup_file(WantFileName);
    (void) unlink(WantFileName);
    S = S0;
#else
    MR_fatal_error("deep profiler not enabled");
#endif
;}
#line 700 "timeout.c"
	MR_RELEASE_GLOBAL_LOCK("remove_want_file");
#undef	MR_PROC_LABEL
	}
	MR_proceed();
#ifdef MR_maybe_local_thread_engine_base
	#undef MR_maybe_local_thread_engine_base
	#define MR_maybe_local_thread_engine_base MR_thread_engine_base
#endif
MR_END_MODULE
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

#line 1166 "timeout.c"

static void mercury__timeout_maybe_bunch_0(void)
{
	timeout_module0();
	timeout_module1();
	timeout_module2();
	timeout_module3();
	timeout_module4();
	timeout_module5();
	timeout_module6();
	timeout_module7();
	timeout_module8();
	timeout_module9();
	timeout_module10();
	timeout_module11();
}

/* suppress gcc -Wmissing-decls warnings */
void mercury__timeout__init(void);
void mercury__timeout__init_type_tables(void);
void mercury__timeout__init_debugger(void);
#ifdef MR_DEEP_PROFILING
void mercury__timeout__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp);
#endif
#ifdef MR_RECORD_TERM_SIZES
void mercury__timeout__init_complexity_procs(void);
#endif

void mercury__timeout__init(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
	mercury__timeout_maybe_bunch_0();
	mercury__timeout__init_debugger();
}

void mercury__timeout__init_type_tables(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}


void mercury__timeout__init_debugger(void)
{
	static MR_bool done = MR_FALSE;
	if (done) {
		return;
	}
	done = MR_TRUE;
}

#ifdef MR_DEEP_PROFILING

void mercury__timeout__write_out_proc_statics(FILE *deep_fp, FILE *procrep_fp)
{
	MR_write_out_module_proc_reps_start(procrep_fp, &mercury_data__module_common_layout__timeout);
	MR_write_out_module_proc_reps_end(procrep_fp);
}

#endif

#ifdef MR_RECORD_TERM_SIZES

void mercury__timeout__init_complexity_procs(void)
{
}

#endif

/* ensure everything is compiled with the same grade */
static const void *const MR_grade = &MR_GRADE_VAR;
