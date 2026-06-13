/*
** Automatically generated from `listing.m'
** by the Mercury compiler,
** version 22.01.9-beta-2026-06-13
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


// :- module mdb.listing.
// :- implementation.

/*
INIT mercury__mdb__listing__init
ENDINIT
*/

#include "mdb.listing.mih"
#include "mdb.listing.mh"


#include "array.mih"
#include "assoc_list.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "int.mih"
#include "io.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdb.mih"
#include "ops.mih"
#include "pair.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "rtti_implementation.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "string.format.mih"
#include "string.parse_util.mih"

#line 467 "listing.m"

// See library/io.m regarding declaration of the environ global variable.
#if defined(MR_HAVE_SPAWN_H) && defined(MR_HAVE_ENVIRON)
    #include <spawn.h>

    #if defined(MR_MAC_OSX)
        #include <crt_externs.h>
    #else
        extern char **environ;
    #endif
#endif

static int do_posix_spawnp(MR_String prog, int num_args, MR_Word args,
    const int outfd, const int errfd, int *ret_errno);




static const MR_FA_TypeInfo_Struct1 mdb__listing__list__ti_list_1builtin__type_ctor_info_string_0;

static void MR_CALL 
mdb__listing__print_lines_in_range_c_8_p_0(
  MR_Box InStrm_1,
  MR_Box OutStrm_2,
  MR_Integer ThisLine_3,
  MR_Integer FirstLine_4,
  MR_Integer LastLine_5,
  MR_Integer MarkLine_6);

static void MR_CALL 
mdb__listing__write_to_c_file_4_p_0(
  MR_Box ErrStrm_1,
  MR_String Str_2);

static MR_Box MR_CALL 
mdb__listing__mercury_stream_to_c_file_ptr_1_f_0(
  MR_Word InStream_1);

static MR_Word MR_CALL 
mdb__listing__listing_type_0_f_0(void);

static void MR_CALL 
mdb__listing__do_posix_spawnp_9_p_0(
  MR_String Prog_1,
  MR_Integer NumArgs_2,
  MR_Word Args_3,
  MR_Box OutStrm_4,
  MR_Box ErrStrm_5,
  MR_Integer * Status_6,
  MR_Box * Error_7);

static void MR_CALL 
mdb__listing__find_file_5_p_0(
  MR_Word HeadVar__1_1,
  MR_String FileName0_2,
  MR_Word * HeadVar__3_3);

static void MR_CALL 
mdb__listing__print_lines_in_range_m_8_p_0(
  MR_Word InStrm_9,
  MR_Word OutStrm_10,
  MR_Integer ThisLine_11,
  MR_Integer FirstLine_12,
  MR_Integer LastLine_13,
  MR_Integer MarkLine_14);

static void MR_CALL 
mdb__listing__find_and_open_file_5_p_0(
  MR_Word HeadVar__1_1,
  MR_String FileName_2,
  MR_Word * HeadVar__3_3);

static MR_bool MR_CALL 
mdb__listing____Unify____c_file_ptr_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__listing____Compare____c_file_ptr_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__listing____Unify____file_name_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__listing____Compare____file_name_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__listing____Unify____line_no_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__listing____Compare____line_no_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__listing____Unify____path_name_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__listing____Compare____path_name_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mdb__listing____Unify____search_path_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mdb__listing____Compare____search_path_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mdb__listing_scalar_common_1[1][2];

static /* final */ const MR_Box mdb__listing_scalar_common_2[1][1];




static /* final */ const MR_Box mdb__listing_scalar_common_1[1][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
};

static /* final */ const MR_Box mdb__listing_scalar_common_2[1][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "posix_spawn not supported on this platform"))
  },
};



#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "mdb.mh"
#include "string.mh"
#include "time.mh"
#include "mdb.listing.mh"
#line 483 "listing.m"

static int
do_posix_spawnp(MR_String prog, int num_args, MR_Word args,
    const int outfd, const int errfd, int *ret_errno)
{
#if defined(MR_HAVE_POSIX_SPAWN) && defined(MR_HAVE_ENVIRON)

    pid_t   pid;
    char    **argv;
    posix_spawn_file_actions_t file_actions;
    posix_spawnattr_t attr;
    int     rc;
    int     status;
    int     i;

    argv = MR_GC_NEW_ARRAY(char *, 1 + num_args + 1);
    argv[0] = prog;
    for (i = 1; i <= num_args; i++) {
        argv[i] = (MR_String) MR_list_head(args);
        args = MR_list_tail(args);
    }
    argv[i] = NULL;

    rc = posix_spawnattr_init(&attr);
    if (rc == -1) {
        *ret_errno = errno;
        return -1;
    }

    rc = posix_spawn_file_actions_init(&file_actions);
    if (rc == -1) {
        *ret_errno = errno;
        goto error_cleanup_attr;
    }

    if (outfd != STDOUT_FILENO) {
        // Redirect standard output in child process.
        rc = posix_spawn_file_actions_adddup2(&file_actions,
            outfd, STDOUT_FILENO);
        if (rc == -1) {
            *ret_errno = errno;
            goto error_cleanup_fa_attr;
        }
        // Close outfd in child process.
        rc = posix_spawn_file_actions_addclose(&file_actions, outfd);
        if (rc == -1) {
            *ret_errno = errno;
            goto error_cleanup_fa_attr;
        }
    }

    if (errfd != STDERR_FILENO) {
        // Redirect standard error in child process.
        rc = posix_spawn_file_actions_adddup2(&file_actions,
            errfd, STDERR_FILENO);
        if (rc == -1) {
            *ret_errno = errno;
            goto error_cleanup_fa_attr;
        }
        // Close errfd in child process.
        rc = posix_spawn_file_actions_addclose(&file_actions, errfd);
        if (rc == -1) {
            *ret_errno = errno;
            goto error_cleanup_fa_attr;
        }
    }

    #ifdef MR_MAC_OSX
        rc = posix_spawnp(&pid, prog, &file_actions, &attr, argv,
            *_NSGetEnviron());
    #else
        rc = posix_spawnp(&pid, prog, &file_actions, &attr, argv,
            environ);
    #endif

    if (rc == -1) {
        // Spawn failed.
        *ret_errno = errno;
        goto error_cleanup_fa_attr;
    }

    posix_spawnattr_destroy(&attr);
    posix_spawn_file_actions_destroy(&file_actions);

    // Wait for the spawned process to exit.
    do {
        rc = waitpid(pid, &status, 0);
    } while (rc == -1 && MR_is_eintr(errno));
    if (rc == -1) {
        *ret_errno = errno;
        return -1;
    }
    *ret_errno = 0;
    return status;

error_cleanup_fa_attr:
    posix_spawn_file_actions_destroy(&file_actions);
error_cleanup_attr:
    posix_spawnattr_destroy(&attr);
    return -1;

#else   // not (defined(MR_HAVE_POSIX_SPAWN) && defined(MR_HAVE_ENVIRON))

    *ret_errno = ENOEXEC;
    return -2;

#endif  // not (defined(MR_HAVE_POSIX_SPAWN) && defined(MR_HAVE_ENVIRON))
}


#line 128 "listing.m"
MR_Word 
ML_LISTING_new_list_path(void)
#line 128 "listing.m"
{
#line 128 "listing.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__listing__new_list_path_0_f_0();
	return ret_value;
}

#line 130 "listing.m"
MR_Word 
ML_LISTING_get_list_path(
  MR_Word Path_3)
#line 130 "listing.m"
{
#line 130 "listing.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__listing__get_list_path_1_f_0((MR_Word) Path_3);
	return ret_value;
}

#line 132 "listing.m"
void 
ML_LISTING_set_list_path(
  MR_Word Dirs_4,
  MR_Word HeadVar__2_5,
  MR_Word * Dirs_3)
#line 132 "listing.m"
{
#line 132 "listing.m"
	mdb__listing__set_list_path_3_p_0((MR_Word) Dirs_4, (MR_Word) HeadVar__2_5, (MR_Word *) Dirs_3);
}

#line 134 "listing.m"
void 
ML_LISTING_clear_list_path(
  MR_Word HeadVar__1_3,
  MR_Word * HeadVar__2_2)
#line 134 "listing.m"
{
#line 134 "listing.m"
	mdb__listing__clear_list_path_2_p_0((MR_Word) HeadVar__1_3, (MR_Word *) HeadVar__2_2);
}

#line 136 "listing.m"
void 
ML_LISTING_push_list_path(
  MR_String Dir_4,
  MR_Word Path_5,
  MR_Word * HeadVar__3_3)
#line 136 "listing.m"
{
#line 136 "listing.m"
	mdb__listing__push_list_path_3_p_0((MR_String) Dir_4, (MR_Word) Path_5, (MR_Word *) HeadVar__3_3);
}

#line 138 "listing.m"
void 
ML_LISTING_pop_list_path(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
#line 138 "listing.m"
{
#line 138 "listing.m"
	mdb__listing__pop_list_path_2_p_0((MR_Word) HeadVar__1_1, (MR_Word *) HeadVar__2_2);
}

#line 140 "listing.m"
void 
ML_LISTING_list_file(
  FILE * OutStrm_10,
  FILE * ErrStrm_11,
  MR_String FileName_12,
  MR_Integer FirstLine_13,
  MR_Integer LastLine_14,
  MR_Integer MarkLine_15,
  MR_Word Path_16)
#line 140 "listing.m"
{
#line 140 "listing.m"
	MR_Box boxed_OutStrm_10;
	MR_Box boxed_ErrStrm_11;
	MR_MAYBE_BOX_FOREIGN_TYPE(FILE *, OutStrm_10, boxed_OutStrm_10);
	MR_MAYBE_BOX_FOREIGN_TYPE(FILE *, ErrStrm_11, boxed_ErrStrm_11);
	mdb__listing__list_file_9_p_0(boxed_OutStrm_10, boxed_ErrStrm_11, (MR_String) FileName_12, (MR_Integer) FirstLine_13, (MR_Integer) LastLine_14, (MR_Integer) MarkLine_15, (MR_Word) Path_16);
}

#line 142 "listing.m"
void 
ML_LISTING_list_file_with_command(
  FILE * OutStrm_11,
  FILE * ErrStrm_12,
  MR_String Command_13,
  MR_String FileName_14,
  MR_Integer FirstLine_15,
  MR_Integer LastLine_16,
  MR_Integer MarkLine_17,
  MR_Word Path_18)
#line 142 "listing.m"
{
#line 142 "listing.m"
	MR_Box boxed_OutStrm_11;
	MR_Box boxed_ErrStrm_12;
	MR_MAYBE_BOX_FOREIGN_TYPE(FILE *, OutStrm_11, boxed_OutStrm_11);
	MR_MAYBE_BOX_FOREIGN_TYPE(FILE *, ErrStrm_12, boxed_ErrStrm_12);
	mdb__listing__list_file_with_command_10_p_0(boxed_OutStrm_11, boxed_ErrStrm_12, (MR_String) Command_13, (MR_String) FileName_14, (MR_Integer) FirstLine_15, (MR_Integer) LastLine_16, (MR_Integer) MarkLine_17, (MR_Word) Path_18);
}

#line 146 "listing.m"
MR_Word 
ML_LISTING_listing_type(void)
#line 146 "listing.m"
{
#line 146 "listing.m"
	MR_Word ret_value;
	ret_value = (MR_Word)mdb__listing__listing_type_0_f_0();
	return ret_value;
}


const MR_TypeCtorInfo_Struct mdb__listing__mdb__listing__type_ctor_info_c_file_ptr_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mdb__listing____Unify____c_file_ptr_0_0_10001)),
  ((MR_Box) (mdb__listing____Compare____c_file_ptr_0_0_10001)),
  (MR_String) "mdb.listing",
  (MR_String) "c_file_ptr",
  {     NULL },
  {     NULL },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct mdb__listing__mdb__listing__type_ctor_info_file_name_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__listing____Unify____file_name_0_0_10001)),
  ((MR_Box) (mdb__listing____Compare____file_name_0_0_10001)),
  (MR_String) "mdb.listing",
  (MR_String) "file_name",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct mdb__listing__mdb__listing__type_ctor_info_line_no_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__listing____Unify____line_no_0_0_10001)),
  ((MR_Box) (mdb__listing____Compare____line_no_0_0_10001)),
  (MR_String) "mdb.listing",
  (MR_String) "line_no",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

const MR_TypeCtorInfo_Struct mdb__listing__mdb__listing__type_ctor_info_path_name_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__listing____Unify____path_name_0_0_10001)),
  ((MR_Box) (mdb__listing____Compare____path_name_0_0_10001)),
  (MR_String) "mdb.listing",
  (MR_String) "path_name",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 mdb__listing__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

const MR_TypeCtorInfo_Struct mdb__listing__mdb__listing__type_ctor_info_search_path_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mdb__listing____Unify____search_path_0_0_10001)),
  ((MR_Box) (mdb__listing____Compare____search_path_0_0_10001)),
  (MR_String) "mdb.listing",
  (MR_String) "search_path",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mdb__listing__list__ti_list_1builtin__type_ctor_info_string_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

void MR_CALL 
mdb__listing____Compare____search_path_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__builtin__compare_3_p_0((MR_Word) (&mdb__listing_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
  }
}

MR_bool MR_CALL 
mdb__listing____Unify____search_path_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mdb__listing_scalar_common_1[0]), ((MR_Box) (Cast_HeadVar1_3)), ((MR_Box) (Cast_HeadVar2_4)));
    return succeeded;
  }
}

void MR_CALL 
mdb__listing____Compare____path_name_0_0(
  MR_Word * HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String HeadVar__3_3)
{
  {
    MR_String Cast_HeadVar1_4 = HeadVar__2_2;
    MR_String Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
mdb__listing____Unify____path_name_0_0(
  MR_String HeadVar__1_1,
  MR_String HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_String Cast_HeadVar1_3 = HeadVar__1_1;
    MR_String Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (strcmp(Cast_HeadVar1_3, Cast_HeadVar2_4) == 0);
    return succeeded;
  }
}

void MR_CALL 
mdb__listing____Compare____line_no_0_0(
  MR_Word * HeadVar__1_1,
  MR_Integer HeadVar__2_2,
  MR_Integer HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Integer Cast_HeadVar2_5 = HeadVar__3_3;

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
}

MR_bool MR_CALL 
mdb__listing____Unify____line_no_0_0(
  MR_Integer HeadVar__1_1,
  MR_Integer HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Integer Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (Cast_HeadVar1_3 == Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
mdb__listing____Compare____file_name_0_0(
  MR_Word * HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_String HeadVar__3_3)
{
  {
    MR_String Cast_HeadVar1_4 = HeadVar__2_2;
    MR_String Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
mdb__listing____Unify____file_name_0_0(
  MR_String HeadVar__1_1,
  MR_String HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_String Cast_HeadVar1_3 = HeadVar__1_1;
    MR_String Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = (strcmp(Cast_HeadVar1_3, Cast_HeadVar2_4) == 0);
    return succeeded;
  }
}

void MR_CALL 
mdb__listing____Compare____c_file_ptr_0_0(
  MR_Word * HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = (MR_Word) (HeadVar__2_2);
    MR_Word Cast_HeadVar2_5 = (MR_Word) (HeadVar__3_3);

    mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
mdb__listing____Unify____c_file_ptr_0_0(
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = (MR_Word) (HeadVar__1_1);
    MR_Word Cast_HeadVar2_4 = (MR_Word) (HeadVar__2_2);

    succeeded = mercury__builtin____Unify____c_pointer_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

static void MR_CALL 
mdb__listing__print_lines_in_range_c_8_p_0(
  MR_Box InStrm_1,
  MR_Box OutStrm_2,
  MR_Integer ThisLine_3,
  MR_Integer FirstLine_4,
  MR_Integer LastLine_5,
  MR_Integer MarkLine_6)
{
  {
{
#define MR_PROC_LABEL mdb__listing__print_lines_in_range_c_8_p_0

	FILE * InStrm;
	FILE * OutStrm;
	MR_Integer ThisLine;
	MR_Integer FirstLine;
	MR_Integer LastLine;
	MR_Integer MarkLine;

	InStrm = (FILE *)InStrm_1 ;
	OutStrm = (FILE *)OutStrm_2 ;
	ThisLine = ThisLine_3 ;
	FirstLine = FirstLine_4 ;
	LastLine = LastLine_5 ;
	MarkLine = MarkLine_6 ;
		{

    if (FirstLine <= ThisLine && ThisLine <= LastLine) {
        const char *s = (ThisLine == MarkLine) ? "> " : "  ";
        fputs(s, (FILE *)OutStrm);
    }
    while(ThisLine <= LastLine) {
        int c = fgetc((FILE *)InStrm);
        if (c == EOF) {
            fputc('\n', (FILE *)OutStrm);
            break;
        }
        if (FirstLine <= ThisLine) {
            fputc(c, (FILE *)OutStrm);
        }
        if (c == '\n') {
            ThisLine++;
            if (FirstLine <= ThisLine && ThisLine <= LastLine)  {
                const char *s = (ThisLine == MarkLine) ? "> " : "  ";
                fputs(s, (FILE *)OutStrm);
            }
        }
    }


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
mdb__listing__write_to_c_file_4_p_0(
  MR_Box ErrStrm_1,
  MR_String Str_2)
{
  {
{
#define MR_PROC_LABEL mdb__listing__write_to_c_file_4_p_0

	FILE * ErrStrm;
	MR_String Str;

	ErrStrm = (FILE *)ErrStrm_1 ;
	Str = Str_2 ;
		{

    fputs(Str, (FILE *)ErrStrm);


		;}
#undef MR_PROC_LABEL
}
  }
}

static MR_Box MR_CALL 
mdb__listing__mercury_stream_to_c_file_ptr_1_f_0(
  MR_Word InStream_1)
{
  {
    MR_Box InStrm_2;

{
#define MR_PROC_LABEL mdb__listing__mercury_stream_to_c_file_ptr_1_f_0

	MR_Word InStream;
	FILE * InStrm;

	InStream = InStream_1 ;
		{

    InStrm = MR_file(*(MR_unwrap_input_stream(InStream)));


		;}
#undef MR_PROC_LABEL
	 InStrm_2  = (MR_Box) InStrm;
}
    return InStrm_2;
  }
}

static MR_Word MR_CALL 
mdb__listing__listing_type_0_f_0(void)
{
  {
    MR_Word HeadVar__1_1;

    HeadVar__1_1 = mercury__type_desc__type_of_1_f_0((MR_Word) (&mdb__listing_scalar_common_1[0]));
    return HeadVar__1_1;
  }
}

void MR_CALL 
mdb__listing__list_file_with_command_10_p_0(
  MR_Box OutStrm_11,
  MR_Box ErrStrm_12,
  MR_String Command_13,
  MR_String FileName_14,
  MR_Integer FirstLine_15,
  MR_Integer LastLine_16,
  MR_Integer MarkLine_17,
  MR_Word Path_18)
{
  {
    MR_bool succeeded;
    MR_Word LineArgs_20;
    MR_Word FindResult_21;
    MR_String Var_27;
    MR_Word Var_28;
    MR_String Var_29;
    MR_Word Var_30;
    MR_String Var_31;

    Var_27 = mercury__string__from_int_1_f_0(FirstLine_15);
    Var_29 = mercury__string__from_int_1_f_0(LastLine_16);
    Var_31 = mercury__string__from_int_1_f_0(MarkLine_17);
    {
      Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (Var_31));
      MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Var_28, 0) = ((MR_Box) (Var_29));
      MR_hl_field(MR_mktag(1), Var_28, 1) = ((MR_Box) (Var_30));
    }
    {
      LineArgs_20 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), LineArgs_20, 0) = ((MR_Box) (Var_27));
      MR_hl_field(MR_mktag(1), LineArgs_20, 1) = ((MR_Box) (Var_28));
    }
    succeeded = mercury__dir__path_name_is_absolute_1_p_0(FileName_14);
    if (succeeded)
      {
        FindResult_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), FindResult_21, 0) = ((MR_Box) (FileName_14));
      }
    else
    {
      MR_String Dir_96;
      MR_String FileName_101;
      MR_Word FileTypeRes_103;

      Dir_96 = mercury__dir__this_directory_0_f_0();
      FileName_101 = mercury__dir__f_slash_2_f_0(Dir_96, FileName_14);
      mercury__io__file_type_5_p_0((MR_Integer) 1, FileName_101, &FileTypeRes_103);
      if (((MR_tag((MR_Word) FileTypeRes_103)) == (MR_Integer) 1))
        mdb__listing__find_file_5_p_0(Path_18, FileName_14, &FindResult_21);
      else
      {
        MR_Word FileType_104 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FileTypeRes_103, (MR_Integer) 0))));

        switch (FileType_104) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 6:
          case (MR_Integer) 5:
          case (MR_Integer) 7:
          case (MR_Integer) 3:
          case (MR_Integer) 0:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
          case (MR_Integer) 4:
          case (MR_Integer) 2:
          case (MR_Integer) 10:
            {
              FindResult_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), FindResult_21, 0) = ((MR_Box) (FileName_101));
            }
            break;
          case (MR_Integer) 1:
            mdb__listing__find_file_5_p_0(Path_18, FileName_14, &FindResult_21);
            break;
        }
      }
    }
    if ((FindResult_21 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String Var_36;
      MR_String Var_59;

      Var_59 = mercury__string__f_43_43_2_f_0(FileName_14, (MR_String) "\n");
      Var_36 = mercury__string__f_43_43_2_f_0((MR_String) "mdb: cannot find file ", Var_59);
{
#define MR_PROC_LABEL mdb__listing__list_file_with_command_10_p_0

	FILE * ErrStrm;
	MR_String Str;

	ErrStrm = (FILE *)ErrStrm_12 ;
	Str = Var_36 ;
		{

    fputs(Str, (FILE *)ErrStrm);


		;}
#undef MR_PROC_LABEL
}
    }
    else
    {
      MR_String FoundFileName_22 = ((MR_String) ((MR_hl_field(MR_mktag(1), FindResult_21, (MR_Integer) 0))));
      MR_Word CallResult_23;
      MR_Word Var_42;
      MR_Integer Status_69;
      MR_Box Error0_70;
      MR_Integer Var_76;

      {
        Var_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_42, 0) = ((MR_Box) (FoundFileName_22));
        MR_hl_field(MR_mktag(1), Var_42, 1) = ((MR_Box) (LineArgs_20));
      }
      Var_76 = mercury__list__length_1_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), Var_42);
      mdb__listing__do_posix_spawnp_9_p_0(Command_13, Var_76, Var_42, OutStrm_11, ErrStrm_12, &Status_69, &Error0_70);
      succeeded = (Status_69 == (MR_Integer) -1);
      if (succeeded)
      {
        MR_String Message_71;

        mercury__io__make_err_msg_5_p_0(Error0_70, (MR_String) "error invoking system command: ", &Message_71);
        {
          CallResult_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), CallResult_23, 0) = ((MR_Box) (Message_71));
        }
      }
      else
      {
        succeeded = (Status_69 == (MR_Integer) -2);
        if (succeeded)
          CallResult_23 = (MR_Word) (MR_mkword(MR_mktag(1), &mdb__listing_scalar_common_2[0]));
        else
        {
          MR_Word Result0_72;

          Result0_72 = mercury__io__decode_system_command_exit_code_1_f_0(Status_69);
          if (((MR_tag((MR_Word) Result0_72)) == (MR_Integer) 1))
          {
            MR_Word Error_75 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Result0_72, (MR_Integer) 0))));
            MR_String Var_81;

            Var_81 = mercury__io__error_message_1_f_0(Error_75);
            {
              CallResult_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), CallResult_23, 0) = ((MR_Box) (Var_81));
            }
          }
          else
          {
            MR_Word Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Result0_72, (MR_Integer) 0))));

            if (((MR_tag((MR_Word) Var_91)) == (MR_Integer) 0))
            {
              MR_Integer ExitStatus_73 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Var_91, (MR_Integer) 0))));

              succeeded = (ExitStatus_73 == (MR_Integer) 0);
              if (succeeded)
                CallResult_23 = (MR_Word) ((MR_Unsigned) 0U);
              else
              {
                MR_String Var_87;
                MR_String Var_89;

                Var_89 = mercury__string__from_int_1_f_0(ExitStatus_73);
                Var_87 = mercury__string__f_43_43_2_f_0((MR_String) "exit status ", Var_89);
                {
                  CallResult_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), CallResult_23, 0) = ((MR_Box) (Var_87));
                }
              }
            }
            else
            {
              MR_Integer Signal_74 = ((MR_Integer) ((MR_hl_field(MR_mktag(1), Var_91, (MR_Integer) 0))));
              MR_String Var_83;
              MR_String Var_85;

              Var_85 = mercury__string__from_int_1_f_0(Signal_74);
              Var_83 = mercury__string__f_43_43_2_f_0((MR_String) "received signal ", Var_85);
              {
                CallResult_23 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), CallResult_23, 0) = ((MR_Box) (Var_83));
              }
            }
          }
        }
      }
      if (!((CallResult_23 == (MR_Word) ((MR_Unsigned) 0U))))
      {
        MR_String Error_24 = ((MR_String) ((MR_hl_field(MR_mktag(1), CallResult_23, (MR_Integer) 0))));
        MR_String Var_44;
        MR_String Var_53;
        MR_String Var_55;
        MR_String Var_56;

        Var_53 = mercury__string__f_43_43_2_f_0(Error_24, (MR_String) "\n");
        Var_55 = mercury__string__f_43_43_2_f_0((MR_String) ": ", Var_53);
        Var_56 = mercury__string__f_43_43_2_f_0(Command_13, Var_55);
        Var_44 = mercury__string__f_43_43_2_f_0((MR_String) "mdb: ", Var_56);
{
#define MR_PROC_LABEL mdb__listing__list_file_with_command_10_p_0

	FILE * ErrStrm;
	MR_String Str;

	ErrStrm = (FILE *)ErrStrm_12 ;
	Str = Var_44 ;
		{

    fputs(Str, (FILE *)ErrStrm);


		;}
#undef MR_PROC_LABEL
}
      }
    }
  }
}

static void MR_CALL 
mdb__listing__do_posix_spawnp_9_p_0(
  MR_String Prog_1,
  MR_Integer NumArgs_2,
  MR_Word Args_3,
  MR_Box OutStrm_4,
  MR_Box ErrStrm_5,
  MR_Integer * Status_6,
  MR_Box * Error_7)
{
  {
{
#define MR_PROC_LABEL mdb__listing__do_posix_spawnp_9_p_0

	MR_String Prog;
	MR_Integer NumArgs;
	MR_Word Args;
	FILE * OutStrm;
	FILE * ErrStrm;
	MR_Integer Status;
	MR_Integer Error;

	Prog = Prog_1 ;
	NumArgs = NumArgs_2 ;
	Args = Args_3 ;
	OutStrm = (FILE *)OutStrm_4 ;
	ErrStrm = (FILE *)ErrStrm_5 ;
		{

    int error;

    Status = do_posix_spawnp(Prog, NumArgs, Args,
        fileno(OutStrm), fileno(ErrStrm), &error);
    if (Status == -1) {
        Error = error;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	 *Status_6  = Status;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *Error_7 );
}
  }
}

static void MR_CALL 
mdb__listing__find_file_5_p_0(
  MR_Word HeadVar__1_1,
  MR_String FileName0_2,
  MR_Word * HeadVar__3_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String Dir_10 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Path_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_String FileName_15;
      MR_Word FileTypeRes_17;

      FileName_15 = mercury__dir__f_slash_2_f_0(Dir_10, FileName0_2);
      mercury__io__file_type_5_p_0((MR_Integer) 1, FileName_15, &FileTypeRes_17);
      if (((MR_tag((MR_Word) FileTypeRes_17)) == (MR_Integer) 1))
      {
        MR_Word next_value_of_HeadVar__1_1 = Path_11;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
      else
      {
        MR_Word FileType_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FileTypeRes_17, (MR_Integer) 0))));

        switch (FileType_18) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 6:
          case (MR_Integer) 5:
          case (MR_Integer) 7:
          case (MR_Integer) 3:
          case (MR_Integer) 0:
          case (MR_Integer) 8:
          case (MR_Integer) 9:
          case (MR_Integer) 4:
          case (MR_Integer) 2:
          case (MR_Integer) 10:
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__3_3 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FileName_15));
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word next_value_of_HeadVar__1_1 = Path_11;

              // direct tailcall eliminated
              ;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              continue;
            }
            break;
        }
      }
    }
    break;
  }
}

void MR_CALL 
mdb__listing__list_file_portable_9_p_0(
  MR_Word OutStrm_10,
  MR_Word ErrStrm_11,
  MR_String FileName_12,
  MR_Integer FirstLine_13,
  MR_Integer LastLine_14,
  MR_Integer MarkLine_15,
  MR_Word Path_16)
{
  {
    MR_bool succeeded;

    succeeded = mercury__dir__path_name_is_absolute_1_p_0(FileName_12);
    if (succeeded)
    {
      MR_Word Result0_18;

      mercury__io__open_input_4_p_0(FileName_12, &Result0_18);
      if (((MR_tag((MR_Word) Result0_18)) == (MR_Integer) 1))
      {
        MR_Word Error_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Result0_18, (MR_Integer) 0))));
        MR_String ErrorMsg_21;

        ErrorMsg_21 = mercury__io__error_message_1_f_0(Error_20);
        mercury__io__write_string_4_p_0(ErrStrm_11, (MR_String) "mdb: cannot open file ");
        mercury__io__write_string_4_p_0(ErrStrm_11, FileName_12);
        mercury__io__write_string_4_p_0(ErrStrm_11, (MR_String) ": ");
        mercury__io__write_string_4_p_0(ErrStrm_11, ErrorMsg_21);
        mercury__io__write_string_4_p_0(ErrStrm_11, (MR_String) "\n");
      }
      else
      {
        MR_Word InStrm_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Result0_18, (MR_Integer) 0))));

        mdb__listing__print_lines_in_range_m_8_p_0(InStrm_19, OutStrm_10, (MR_Integer) 1, FirstLine_13, LastLine_14, MarkLine_15);
        mercury__io__close_input_3_p_0(InStrm_19);
      }
    }
    else
    {
      MR_String Dir_55;
      MR_Word Result0_60;
      MR_String Var_65;

      Dir_55 = mercury__dir__this_directory_0_f_0();
      Var_65 = mercury__dir__f_slash_2_f_0(Dir_55, FileName_12);
      mercury__io__open_input_4_p_0(Var_65, &Result0_60);
      if (((MR_tag((MR_Word) Result0_60)) == (MR_Integer) 1))
      {
        MR_Word Result_22;

        mdb__listing__find_and_open_file_5_p_0(Path_16, FileName_12, &Result_22);
        if ((Result_22 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          mercury__io__write_string_4_p_0(ErrStrm_11, (MR_String) "mdb: cannot find file ");
          mercury__io__write_string_4_p_0(ErrStrm_11, FileName_12);
          mercury__io__write_string_4_p_0(ErrStrm_11, (MR_String) "\n");
        }
        else
        {
          MR_Word InStrm_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Result_22, (MR_Integer) 0))));

          mdb__listing__print_lines_in_range_m_8_p_0(InStrm_48, OutStrm_10, (MR_Integer) 1, FirstLine_13, LastLine_14, MarkLine_15);
          mercury__io__close_input_3_p_0(InStrm_48);
        }
      }
      else
      {
        MR_Word InStrm_73 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Result0_60, (MR_Integer) 0))));

        mdb__listing__print_lines_in_range_m_8_p_0(InStrm_73, OutStrm_10, (MR_Integer) 1, FirstLine_13, LastLine_14, MarkLine_15);
        mercury__io__close_input_3_p_0(InStrm_73);
      }
    }
  }
}

static void MR_CALL 
mdb__listing__print_lines_in_range_m_8_p_0(
  MR_Word InStrm_9,
  MR_Word OutStrm_10,
  MR_Integer ThisLine_11,
  MR_Integer FirstLine_12,
  MR_Integer LastLine_13,
  MR_Integer MarkLine_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word Res_16;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__io__read_line_as_string_4_p_0(InStrm_9, &Res_16);
    switch (MR_tag((MR_Word) Res_16)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Line_17 = ((MR_String) ((MR_hl_field(MR_mktag(1), Res_16, (MR_Integer) 0))));
          MR_Integer Var_33;
          MR_Integer next_value_of_ThisLine_11;

          succeeded = (FirstLine_12 <= ThisLine_11);
          if (succeeded)
            succeeded = (ThisLine_11 <= LastLine_13);
          if (succeeded)
          {
            succeeded = (ThisLine_11 == MarkLine_14);
            if (succeeded)
              mercury__io__write_string_4_p_0(OutStrm_10, (MR_String) "> ");
            else
              mercury__io__write_string_4_p_0(OutStrm_10, (MR_String) "  ");
            mercury__io__write_string_4_p_0(OutStrm_10, Line_17);
          }
          Var_33 = (MR_Integer) ((MR_Unsigned) ThisLine_11 + (MR_Unsigned) 1);
          // direct tailcall eliminated
          ;
          next_value_of_ThisLine_11 = Var_33;
          ThisLine_11 = next_value_of_ThisLine_11;
          continue;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), Res_16, (MR_Integer) 0))));
          MR_String Var_24;

          mercury__io__write_string_4_p_0(OutStrm_10, (MR_String) "Error: ");
          Var_24 = mercury__io__error_message_1_f_0(Error_18);
          mercury__io__write_string_4_p_0(OutStrm_10, Var_24);
          mercury__io__write_string_4_p_0(OutStrm_10, (MR_String) "\n");
        }
        break;
    }
    break;
  }
}

void MR_CALL 
mdb__listing__list_file_9_p_0(
  MR_Box OutStrm_10,
  MR_Box ErrStrm_11,
  MR_String FileName_12,
  MR_Integer FirstLine_13,
  MR_Integer LastLine_14,
  MR_Integer MarkLine_15,
  MR_Word Path_16)
{
  {
    MR_bool succeeded;

    succeeded = mercury__dir__path_name_is_absolute_1_p_0(FileName_12);
    if (succeeded)
    {
      MR_Word Result0_18;

      mercury__io__open_input_4_p_0(FileName_12, &Result0_18);
      if (((MR_tag((MR_Word) Result0_18)) == (MR_Integer) 1))
      {
        MR_Word Error_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Result0_18, (MR_Integer) 0))));
        MR_String ErrorMsg_22;
        MR_String Var_27;
        MR_String Var_57;
        MR_String Var_59;
        MR_String Var_60;

        ErrorMsg_22 = mercury__io__error_message_1_f_0(Error_21);
        Var_57 = mercury__string__f_43_43_2_f_0(ErrorMsg_22, (MR_String) "\n");
        Var_59 = mercury__string__f_43_43_2_f_0((MR_String) ": ", Var_57);
        Var_60 = mercury__string__f_43_43_2_f_0(FileName_12, Var_59);
        Var_27 = mercury__string__f_43_43_2_f_0((MR_String) "mdb: cannot open file ", Var_60);
{
#define MR_PROC_LABEL mdb__listing__list_file_9_p_0

	FILE * ErrStrm;
	MR_String Str;

	ErrStrm = (FILE *)ErrStrm_11 ;
	Str = Var_27 ;
		{

    fputs(Str, (FILE *)ErrStrm);


		;}
#undef MR_PROC_LABEL
}
      }
      else
      {
        MR_Word InStream_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Result0_18, (MR_Integer) 0))));
        MR_Box InStrm_20;

{
#define MR_PROC_LABEL mdb__listing__list_file_9_p_0

	MR_Word InStream;
	FILE * InStrm;

	InStream = InStream_19 ;
		{

    InStrm = MR_file(*(MR_unwrap_input_stream(InStream)));


		;}
#undef MR_PROC_LABEL
	 InStrm_20  = (MR_Box) InStrm;
}
{
#define MR_PROC_LABEL mdb__listing__list_file_9_p_0

	FILE * InStrm;
	FILE * OutStrm;
	MR_Integer ThisLine;
	MR_Integer FirstLine;
	MR_Integer LastLine;
	MR_Integer MarkLine;

	InStrm = (FILE *)InStrm_20 ;
	OutStrm = (FILE *)OutStrm_10 ;
	ThisLine = (MR_Integer) 1 ;
	FirstLine = FirstLine_13 ;
	LastLine = LastLine_14 ;
	MarkLine = MarkLine_15 ;
		{

    if (FirstLine <= ThisLine && ThisLine <= LastLine) {
        const char *s = (ThisLine == MarkLine) ? "> " : "  ";
        fputs(s, (FILE *)OutStrm);
    }
    while(ThisLine <= LastLine) {
        int c = fgetc((FILE *)InStrm);
        if (c == EOF) {
            fputc('\n', (FILE *)OutStrm);
            break;
        }
        if (FirstLine <= ThisLine) {
            fputc(c, (FILE *)OutStrm);
        }
        if (c == '\n') {
            ThisLine++;
            if (FirstLine <= ThisLine && ThisLine <= LastLine)  {
                const char *s = (ThisLine == MarkLine) ? "> " : "  ";
                fputs(s, (FILE *)OutStrm);
            }
        }
    }


		;}
#undef MR_PROC_LABEL
}
        mercury__io__close_input_3_p_0(InStream_19);
      }
    }
    else
    {
      MR_String Dir_69;
      MR_Word Result0_74;
      MR_String Var_79;

      Dir_69 = mercury__dir__this_directory_0_f_0();
      Var_79 = mercury__dir__f_slash_2_f_0(Dir_69, FileName_12);
      mercury__io__open_input_4_p_0(Var_79, &Result0_74);
      if (((MR_tag((MR_Word) Result0_74)) == (MR_Integer) 1))
      {
        MR_Word Result_23;

        mdb__listing__find_and_open_file_5_p_0(Path_16, FileName_12, &Result_23);
        if ((Result_23 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_String Var_41;
          MR_String Var_63;

          Var_63 = mercury__string__f_43_43_2_f_0(FileName_12, (MR_String) "\n");
          Var_41 = mercury__string__f_43_43_2_f_0((MR_String) "mdb: cannot find file ", Var_63);
{
#define MR_PROC_LABEL mdb__listing__list_file_9_p_0

	FILE * ErrStrm;
	MR_String Str;

	ErrStrm = (FILE *)ErrStrm_11 ;
	Str = Var_41 ;
		{

    fputs(Str, (FILE *)ErrStrm);


		;}
#undef MR_PROC_LABEL
}
        }
        else
        {
          MR_Word InStream_50 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Result_23, (MR_Integer) 0))));
          MR_Box InStrm_51;

{
#define MR_PROC_LABEL mdb__listing__list_file_9_p_0

	MR_Word InStream;
	FILE * InStrm;

	InStream = InStream_50 ;
		{

    InStrm = MR_file(*(MR_unwrap_input_stream(InStream)));


		;}
#undef MR_PROC_LABEL
	 InStrm_51  = (MR_Box) InStrm;
}
{
#define MR_PROC_LABEL mdb__listing__list_file_9_p_0

	FILE * InStrm;
	FILE * OutStrm;
	MR_Integer ThisLine;
	MR_Integer FirstLine;
	MR_Integer LastLine;
	MR_Integer MarkLine;

	InStrm = (FILE *)InStrm_51 ;
	OutStrm = (FILE *)OutStrm_10 ;
	ThisLine = (MR_Integer) 1 ;
	FirstLine = FirstLine_13 ;
	LastLine = LastLine_14 ;
	MarkLine = MarkLine_15 ;
		{

    if (FirstLine <= ThisLine && ThisLine <= LastLine) {
        const char *s = (ThisLine == MarkLine) ? "> " : "  ";
        fputs(s, (FILE *)OutStrm);
    }
    while(ThisLine <= LastLine) {
        int c = fgetc((FILE *)InStrm);
        if (c == EOF) {
            fputc('\n', (FILE *)OutStrm);
            break;
        }
        if (FirstLine <= ThisLine) {
            fputc(c, (FILE *)OutStrm);
        }
        if (c == '\n') {
            ThisLine++;
            if (FirstLine <= ThisLine && ThisLine <= LastLine)  {
                const char *s = (ThisLine == MarkLine) ? "> " : "  ";
                fputs(s, (FILE *)OutStrm);
            }
        }
    }


		;}
#undef MR_PROC_LABEL
}
          mercury__io__close_input_3_p_0(InStream_50);
        }
      }
      else
      {
        MR_Word InStream_87 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Result0_74, (MR_Integer) 0))));
        MR_Box InStrm_88;

{
#define MR_PROC_LABEL mdb__listing__list_file_9_p_0

	MR_Word InStream;
	FILE * InStrm;

	InStream = InStream_87 ;
		{

    InStrm = MR_file(*(MR_unwrap_input_stream(InStream)));


		;}
#undef MR_PROC_LABEL
	 InStrm_88  = (MR_Box) InStrm;
}
{
#define MR_PROC_LABEL mdb__listing__list_file_9_p_0

	FILE * InStrm;
	FILE * OutStrm;
	MR_Integer ThisLine;
	MR_Integer FirstLine;
	MR_Integer LastLine;
	MR_Integer MarkLine;

	InStrm = (FILE *)InStrm_88 ;
	OutStrm = (FILE *)OutStrm_10 ;
	ThisLine = (MR_Integer) 1 ;
	FirstLine = FirstLine_13 ;
	LastLine = LastLine_14 ;
	MarkLine = MarkLine_15 ;
		{

    if (FirstLine <= ThisLine && ThisLine <= LastLine) {
        const char *s = (ThisLine == MarkLine) ? "> " : "  ";
        fputs(s, (FILE *)OutStrm);
    }
    while(ThisLine <= LastLine) {
        int c = fgetc((FILE *)InStrm);
        if (c == EOF) {
            fputc('\n', (FILE *)OutStrm);
            break;
        }
        if (FirstLine <= ThisLine) {
            fputc(c, (FILE *)OutStrm);
        }
        if (c == '\n') {
            ThisLine++;
            if (FirstLine <= ThisLine && ThisLine <= LastLine)  {
                const char *s = (ThisLine == MarkLine) ? "> " : "  ";
                fputs(s, (FILE *)OutStrm);
            }
        }
    }


		;}
#undef MR_PROC_LABEL
}
        mercury__io__close_input_3_p_0(InStream_87);
      }
    }
  }
}

static void MR_CALL 
mdb__listing__find_and_open_file_5_p_0(
  MR_Word HeadVar__1_1,
  MR_String FileName_2,
  MR_Word * HeadVar__3_3)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String Dir_10 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word Path_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word Result0_15;
      MR_String Var_20;

      Var_20 = mercury__dir__f_slash_2_f_0(Dir_10, FileName_2);
      mercury__io__open_input_4_p_0(Var_20, &Result0_15);
      if (((MR_tag((MR_Word) Result0_15)) == (MR_Integer) 1))
      {
        MR_Word next_value_of_HeadVar__1_1 = Path_11;

        // direct tailcall eliminated
        ;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        continue;
      }
      else
      {
        MR_Word InStream_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Result0_15, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (InStream_16));
        }
      }
    }
    break;
  }
}

void MR_CALL 
mdb__listing__pop_list_path_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
  else
    *HeadVar__2_2 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
}

void MR_CALL 
mdb__listing__push_list_path_3_p_0(
  MR_String Dir_4,
  MR_Word Path_5,
  MR_Word * HeadVar__3_3)
{
  {
    MR_Word base;
    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
    *HeadVar__3_3 = base;
    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Dir_4));
    MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Path_5));
  }
}

void MR_CALL 
mdb__listing__clear_list_path_2_p_0(
  MR_Word HeadVar__1_3,
  MR_Word * HeadVar__2_2)
{
  mdb__listing__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_101_97_114_95_108_105_115_116_95_112_97_116_104_95_95_91_49_93_95_48_2_p_0(HeadVar__2_2);
}

void MR_CALL 
mdb__listing__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_108_101_97_114_95_108_105_115_116_95_112_97_116_104_95_95_91_49_93_95_48_2_p_0(
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
}

void MR_CALL 
mdb__listing__set_list_path_3_p_0(
  MR_Word Dirs_4,
  MR_Word HeadVar__2_5,
  MR_Word * Dirs_3)
{
  mdb__listing__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_108_105_115_116_95_112_97_116_104_95_95_91_50_93_95_48_3_p_0(Dirs_4, Dirs_3);
}

void MR_CALL 
mdb__listing__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_115_101_116_95_108_105_115_116_95_112_97_116_104_95_95_91_50_93_95_48_3_p_0(
  MR_Word Dirs_4,
  MR_Word * Dirs_3)
{
  *Dirs_3 = Dirs_4;
}

MR_Word MR_CALL 
mdb__listing__get_list_path_1_f_0(
  MR_Word Path_3)
{
  {
    MR_Word Path_2 = Path_3;

    return Path_2;
  }
}

MR_Word MR_CALL 
mdb__listing__new_list_path_0_f_0(void)
{
  return (MR_Word) ((MR_Unsigned) 0U);
}

static MR_bool MR_CALL 
mdb__listing____Unify____c_file_ptr_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__listing____Unify____c_file_ptr_0_0(((MR_Box) (wrapper_arg_1)), ((MR_Box) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__listing____Compare____c_file_ptr_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__listing____Compare____c_file_ptr_0_0(&conv0_HeadVar__1_1, ((MR_Box) (wrapper_arg_2)), ((MR_Box) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__listing____Unify____file_name_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__listing____Unify____file_name_0_0(((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__listing____Compare____file_name_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__listing____Compare____file_name_0_0(&conv0_HeadVar__1_1, ((MR_String) (wrapper_arg_2)), ((MR_String) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__listing____Unify____line_no_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__listing____Unify____line_no_0_0(((MR_Integer) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__listing____Compare____line_no_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__listing____Compare____line_no_0_0(&conv0_HeadVar__1_1, ((MR_Integer) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__listing____Unify____path_name_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__listing____Unify____path_name_0_0(((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__listing____Compare____path_name_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__listing____Compare____path_name_0_0(&conv0_HeadVar__1_1, ((MR_String) (wrapper_arg_2)), ((MR_String) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mdb__listing____Unify____search_path_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mdb__listing____Unify____search_path_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mdb__listing____Compare____search_path_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mdb__listing____Compare____search_path_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__mdb__listing__init(void)
{
}

void mercury__mdb__listing__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mdb__listing__mdb__listing__type_ctor_info_c_file_ptr_0);
	MR_register_type_ctor_info(&mdb__listing__mdb__listing__type_ctor_info_file_name_0);
	MR_register_type_ctor_info(&mdb__listing__mdb__listing__type_ctor_info_line_no_0);
	MR_register_type_ctor_info(&mdb__listing__mdb__listing__type_ctor_info_path_name_0);
	MR_register_type_ctor_info(&mdb__listing__mdb__listing__type_ctor_info_search_path_0);
}

void mercury__mdb__listing__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__mdb__listing__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module mdb.listing.
