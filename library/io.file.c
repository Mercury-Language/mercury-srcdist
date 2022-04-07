/*
** Automatically generated from `io.file.m'
** by the Mercury compiler,
** version rotd-2022-04-07
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


// :- module io.file.
// :- implementation.

/*
INIT mercury__io__file__init
ENDINIT
*/

#include "io.file.mih"


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
#include "std_util.mih"
#include "stm_builtin.mih"
#include "store.mih"
#include "stream.mih"
#include "string.mih"
#include "table_builtin.mih"
#include "term.mih"
#include "term_conversion.mih"
#include "term_io.mih"
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




static void MR_CALL 
mercury__io__file__file_type_2_6_p_0(
  MR_Integer FollowSymLinks_1,
  MR_String FileName_2,
  MR_Word * FileType_3,
  MR_Box * Error_4);

static void MR_CALL 
mercury__io__file__read_symlink_2_5_p_0(
  MR_String FileName_1,
  MR_String * TargetFileName_2,
  MR_Box * Error_3);

static void MR_CALL 
mercury__io__file__make_symlink_2_5_p_0(
  MR_String FileName_1,
  MR_String LinkFileName_2,
  MR_Box * Error_3);

static void MR_CALL 
mercury__io__file__remove_directory_entry_8_p_0(
  MR_String DirName_9,
  MR_String FileName_10,
  MR_Word _FileType_11,
  MR_Word * Continue_12,
  MR_Word HeadVar__5_13,
  MR_Word * Res_14);

static void MR_CALL 
mercury__io__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_100_105_114_101_99_116_111_114_121_95_101_110_116_114_121_95_95_91_51_44_32_53_93_95_48_8_p_0(
  MR_String DirName_9,
  MR_String FileName_10,
  MR_Word * Continue_12,
  MR_Word * Res_14);

static MR_Word MR_CALL 
mercury__io__file__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_100_95_116_111_95_98_111_111_108_95_95_104_111_52_95_95_91_51_93_95_48_1_f_in__bool_0(
  MR_Word Var_5,
  MR_Word Var_6);

static void MR_CALL 
mercury__io__file__check_file_accessibility_dotnet_5_p_0(
  MR_String FileName_6,
  MR_Word AccessTypes_7,
  MR_Word * Result_8);

static MR_Word MR_CALL 
mercury__io__file__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_100_95_116_111_95_98_111_111_108_95_95_104_111_51_95_95_91_51_93_95_48_1_f_in__bool_0(
  MR_Word Var_5,
  MR_Word Var_6);

static MR_Word MR_CALL 
mercury__io__file__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_100_95_116_111_95_98_111_111_108_95_95_104_111_50_95_95_91_51_93_95_48_1_f_in__bool_0(
  MR_Word Var_5,
  MR_Word Var_6);

static MR_Word MR_CALL 
mercury__io__file__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_100_95_116_111_95_98_111_111_108_95_95_104_111_49_95_95_91_51_93_95_48_1_f_in__bool_0(
  MR_Word Var_5,
  MR_Word Var_6);

static void MR_CALL 
mercury__io__file__have_dotnet_exec_permission_3_p_0(
  MR_Box * Error_4);

static void MR_CALL 
mercury__io__file__check_file_accessibility_2_7_p_0(
  MR_String FileName_1,
  MR_Word CheckRead_2,
  MR_Word CheckWrite_3,
  MR_Word CheckExecute_4,
  MR_Box * Error_5);

static void MR_CALL 
mercury__io__file__remove_file_recursively_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8);


static /* final */ const MR_Box mercury__io__file_scalar_common_1[2][3];

static /* final */ const MR_Box mercury__io__file_scalar_common_2[1][4];

static /* final */ const MR_Box mercury__io__file_scalar_common_3[2][5];

static /* final */ const MR_Box mercury__io__file_scalar_common_4[1][2];

static /* final */ const MR_Box mercury__io__file_scalar_common_5[1][11];

static /* final */ const MR_Box mercury__io__file_scalar_common_6[2][1];




static /* final */ const MR_Box mercury__io__file_scalar_common_1[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__io__file_scalar_common_5[0])),
    ((MR_Box) (mercury__io__file__remove_file_recursively_4_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box mercury__io__file_scalar_common_2[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__file_scalar_common_1[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__io__file_scalar_common_3[2][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__file_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row   1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__file_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__io__file_scalar_common_4[1][2] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
};

static /* final */ const MR_Box mercury__io__file_scalar_common_5[1][11] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 8)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_file_type_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_res_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_res_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__io__file_scalar_common_6[2][1] = {
  /* row   0 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) "io.make_symlink not supported on this platform"))))
  },
  /* row   1 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) "io.read_symlink not supported on this platform"))))
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
#include "io.file.mh"
#include "io.primitives_read.mh"
#include "io.primitives_write.mh"
#include "io.stream_db.mh"
#include "io.stream_ops.mh"
#include "io.text_read.mh"
#line 1503 "io.file.m"

    long    ML_io_tempnam_counter = 0;




void MR_CALL 
mercury__io__file__do_make_temp_directory_8_p_0(
  MR_String Dir_1,
  MR_String Prefix_2,
  MR_String Suffix_3,
  MR_String Sep_4,
  MR_String * DirName_5,
  MR_Box * Error_6)
{
{
#define MR_PROC_LABEL mercury__io__file__do_make_temp_directory_8_p_0

	MR_String Dir;
	MR_String Prefix;
	MR_String Suffix;
	MR_String Sep;
	MR_String DirName;
	MR_Integer Error;

	Dir = Dir_1 ;
	Prefix = Prefix_2 ;
	Suffix = Suffix_3 ;
	Sep = Sep_4 ;
		{

#ifdef MR_HAVE_MKDTEMP
    int err;

    // We cannot append Suffix because the last six chars in the argument
    // to mkdtemp() must be XXXXXX.

    DirName = MR_make_string(MR_ALLOC_ID, "%s%s%.5sXXXXXX",
        Dir, Sep, Prefix);
    DirName = mkdtemp(DirName);
    if (DirName == NULL) {
        Error = errno;
    } else {
        Error = 0;
    }
#else
    Error = ENOSYS;
    DirName = MR_make_string_const("");
#endif // HAVE_MKDTEMP


		;}
#undef MR_PROC_LABEL
	*DirName_5  = DirName;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *Error_6 );
}
}

void MR_CALL 
mercury__io__file__do_make_temp_8_p_0(
  MR_String Dir_1,
  MR_String Prefix_2,
  MR_String Suffix_3,
  MR_String Sep_4,
  MR_String * FileName_5,
  MR_Box * Error_6)
{
{
#define MR_PROC_LABEL mercury__io__file__do_make_temp_8_p_0

	MR_String Dir;
	MR_String Prefix;
	MR_String Suffix;
	MR_String Sep;
	MR_String FileName;
	MR_Integer Error;

	Dir = Dir_1 ;
	Prefix = Prefix_2 ;
	Suffix = Suffix_3 ;
	Sep = Sep_4 ;
		{

#ifdef MR_HAVE_MKSTEMP
    int err, fd;

    // We cannot append Suffix because the last six chars in the argument
    // to mkstemp() must be XXXXXX.
    FileName = MR_make_string(MR_ALLOC_ID, "%s%s%.5sXXXXXX",
        Dir, Sep, Prefix);
    fd = mkstemp(FileName);
    if (fd == -1) {
        Error = errno;
    } else {
        do {
            err = close(fd);
        } while (err == -1 && MR_is_eintr(errno));
        if (err == 0) {
            Error = 0;
        } else {
            Error = errno;
        }
    }
#else
    // Constructs a temporary name by concatenating Dir, `/', the first 5 chars
    // of Prefix, six hex digits, and Suffix. The six digit hex number is
    // generated by starting with the pid of this process. Uses
    // `open(..., O_CREATE | O_EXCL, ...)' to create the file, checking that
    // there was no existing file with that name.

    int     err, fd, num_tries;
    int     flags;

    if (ML_io_tempnam_counter == 0) {
        ML_io_tempnam_counter = getpid();
    }
    num_tries = 0;
    do {
        FileName = MR_make_string(MR_ALLOC_ID, "%s%s%.5s%06lX%s",
            Dir, Sep, Prefix, ML_io_tempnam_counter & 0xffffffL, Suffix);
        flags = O_WRONLY | O_CREAT | O_EXCL;
        do {
            #ifdef MR_WIN32
                fd = _wopen(ML_utf8_to_wide(FileName), flags, 0600);
            #else
                fd = open(FileName, flags, 0600);
            #endif
        } while (fd == -1 && MR_is_eintr(errno));
        num_tries++;
        ML_io_tempnam_counter += (1 << num_tries);
    } while (fd == -1 && errno == EEXIST &&
        num_tries < ML_MAX_TEMPNAME_TRIES);
    if (fd == -1) {
        Error = errno;
    }  else {
        do {
            err = close(fd);
        } while (err == -1 && MR_is_eintr(errno));
        if (err == 0) {
            Error = 0;
        } else {
            Error = errno;
        }
    }
#endif


		;}
#undef MR_PROC_LABEL
	*FileName_5  = FileName;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *Error_6 );
}
}

void MR_CALL 
mercury__io__file__file_modification_time_2_5_p_0(
  MR_String FileName_1,
  MR_Word * Time_2,
  MR_Box * Error_3)
{
{
#define MR_PROC_LABEL mercury__io__file__file_modification_time_2_5_p_0

	MR_String FileName;
	MR_Word Time;
	MR_Integer Error;

	FileName = FileName_1 ;
		{

#ifdef MR_HAVE_STAT
  #ifdef MR_WIN32
    struct _stat s;
    int stat_result = _wstat(ML_utf8_to_wide(FileName), &s);
  #else
    struct stat s;
    int stat_result = stat(FileName, &s);
  #endif

    if (stat_result == 0) {
        // XXX avoid ML_construct_time_t by returning time_t_rep?
        Time = ML_construct_time_t(s.st_mtime);
        Error = 0;
    } else {
        Error = errno;
        Time = 0;
    }
#else
    Error = ENOSYS;
    Time = 0;
#endif


		;}
#undef MR_PROC_LABEL
	*Time_2  = Time;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *Error_3 );
}
}

static void MR_CALL 
mercury__io__file__file_type_2_6_p_0(
  MR_Integer FollowSymLinks_1,
  MR_String FileName_2,
  MR_Word * FileType_3,
  MR_Box * Error_4)
{
{
#define MR_PROC_LABEL mercury__io__file__file_type_2_6_p_0

	MR_Integer FollowSymLinks;
	MR_String FileName;
	MR_Word FileType;
	MR_Integer Error;

	FollowSymLinks = FollowSymLinks_1 ;
	FileName = FileName_2 ;
		{

#ifdef MR_HAVE_STAT
  #ifdef MR_WIN32
    struct _stat s;
    int stat_result = _wstat(ML_utf8_to_wide(FileName), &s);
  #else
    struct stat s;
    int stat_result;

    if (FollowSymLinks == 1) {
        stat_result = stat(FileName, &s);
    } else {
        #ifdef MR_HAVE_LSTAT
            stat_result = lstat(FileName, &s);
        #else
            stat_result = stat(FileName, &s);
        #endif
    }
  #endif

    if (stat_result == 0) {
        // Do we still need the non-POSIX S_IFMT style?
        if
            #if defined(S_ISREG)
                (S_ISREG(s.st_mode))
            #elif defined(S_IFMT) && defined(S_IFREG)
                ((s.st_mode & S_IFMT) == S_IFREG)
            #else
                (0)
            #endif
        {
            FileType = ML_FILE_TYPE_REGULAR_FILE;
        }
        else if
            #if defined(S_ISDIR)
                (S_ISDIR(s.st_mode))
            #elif defined(S_IFMT) && defined(S_IFDIR)
                ((s.st_mode & S_IFMT) == S_IFDIR)
            #else
                (0)
            #endif
        {
            FileType = ML_FILE_TYPE_DIRECTORY;
        }
        else if
            #if defined(S_ISBLK)
                (S_ISBLK(s.st_mode))
            #elif defined(S_IFMT) && defined(S_IFBLK)
                ((s.st_mode & S_IFMT) == S_IFBLK)
            #else
                (0)
            #endif
        {
            FileType = ML_FILE_TYPE_BLOCK_DEVICE;
        }
        else if
            #if defined(S_ISCHR)
                (S_ISCHR(s.st_mode))
            #elif defined(S_IFMT) && defined(S_IFCHR)
                ((s.st_mode & S_IFMT) == S_IFCHR)
            #else
                (0)
            #endif
        {
            FileType = ML_FILE_TYPE_CHARACTER_DEVICE;
        }
        else if
            #if defined(S_ISFIFO)
                (S_ISFIFO(s.st_mode))
            #elif defined(S_IFMT) && defined(S_IFIFO)
                ((s.st_mode & S_IFMT) == S_IFIFO)
            #else
                (0)
            #endif
        {
            FileType = ML_FILE_TYPE_NAMED_PIPE;
        }
        else if
            #if defined(S_ISLNK)
                (S_ISLNK(s.st_mode))
            #elif defined(S_IFMT) && defined(S_IFLNK)
                ((s.st_mode & S_IFMT) == S_IFLNK)
            #else
                (0)
            #endif
        {
            FileType = ML_FILE_TYPE_SYMBOLIC_LINK;
        }
        else if
            #if defined(S_ISSOCK)
                (S_ISSOCK(s.st_mode))
            #elif defined(S_IFMT) && defined(S_IFSOCK)
                ((s.st_mode & S_IFMT) == S_IFSOCK)
            #else
                (0)
            #endif
        {
            FileType = ML_FILE_TYPE_SOCKET;
        } else {

        #ifdef S_TYPEISMQ
            if (S_TYPEISMQ(&s)) {
                FileType = ML_FILE_TYPE_MESSAGE_QUEUE;
            } else
        #endif

        #ifdef S_TYPEISSEM
            if (S_TYPEISSEM(&s)) {
                FileType = ML_FILE_TYPE_SEMAPHORE;
            } else
        #endif

        #ifdef S_TYPEISSHM
            if (S_TYPEISSHM(&s)) {
                FileType = ML_FILE_TYPE_SHARED_MEMORY;
            } else
        #endif

            {
                FileType = ML_FILE_TYPE_UNKNOWN;
            }
        }
        Error = 0;
    } else {
        FileType = ML_FILE_TYPE_UNKNOWN;
        Error = errno;
    }
#else
    FileType = ML_FILE_TYPE_UNKNOWN;
    Error = ENOSYS;
#endif


		;}
#undef MR_PROC_LABEL
	*FileType_3  = FileType;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *Error_4 );
}
}

static void MR_CALL 
mercury__io__file__read_symlink_2_5_p_0(
  MR_String FileName_1,
  MR_String * TargetFileName_2,
  MR_Box * Error_3)
{
{
#define MR_PROC_LABEL mercury__io__file__read_symlink_2_5_p_0

	MR_String FileName;
	MR_String TargetFileName;
	MR_Integer Error;

	FileName = FileName_1 ;
		{

#ifdef MR_HAVE_READLINK
  #ifndef PATH_MAX
    #define PATH_MAX 256
  #endif
    int     num_chars;
    char    *buffer2 = NULL;
    int     buffer_size2 = PATH_MAX;
    char    buffer[PATH_MAX + 1];

    // readlink() does not null-terminate the buffer.
    num_chars = readlink(FileName, buffer, PATH_MAX);

    if (num_chars == PATH_MAX) {
        do {
            buffer_size2 *= 2;
            buffer2 = MR_RESIZE_ARRAY(buffer2, char, buffer_size2);
            num_chars = readlink(FileName, buffer2, buffer_size2);
        } while (num_chars == buffer_size2);

        // Invariant: num_chars < buffer_size2.

        if (num_chars == -1) {
            TargetFileName = MR_make_string_const("");
            Error = errno;
        } else {
            buffer2[num_chars] = '\0';
            MR_make_aligned_string_copy_msg(TargetFileName, buffer2,
                MR_ALLOC_ID);
            Error = 0;
        }
        MR_free(buffer2);
    } else if (num_chars == -1) {
        TargetFileName = MR_make_string_const("");
        Error = errno;
    } else {
        buffer[num_chars] = '\0';
        MR_make_aligned_string_copy_msg(TargetFileName, buffer, MR_ALLOC_ID);
        Error = 0;
    }
#else // !MR_HAVE_READLINK
    TargetFileName = MR_make_string_const("");
    Error = ENOSYS;
#endif


		;}
#undef MR_PROC_LABEL
	*TargetFileName_2  = TargetFileName;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *Error_3 );
}
}

static void MR_CALL 
mercury__io__file__make_symlink_2_5_p_0(
  MR_String FileName_1,
  MR_String LinkFileName_2,
  MR_Box * Error_3)
{
{
#define MR_PROC_LABEL mercury__io__file__make_symlink_2_5_p_0

	MR_String FileName;
	MR_String LinkFileName;
	MR_Integer Error;

	FileName = FileName_1 ;
	LinkFileName = LinkFileName_2 ;
		{

#ifdef MR_HAVE_SYMLINK
    if (symlink(FileName, LinkFileName) == 0) {
        Error = 0;
    } else {
        Error = errno;
    }
#else
    Error = ENOSYS;
#endif


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *Error_3 );
}
}

void MR_CALL 
mercury__io__file__rename_file_2_5_p_0(
  MR_String OldFileName_1,
  MR_String NewFileName_2,
  MR_Box * Error_3)
{
{
#define MR_PROC_LABEL mercury__io__file__rename_file_2_5_p_0

	MR_String OldFileName;
	MR_String NewFileName;
	MR_Integer Error;

	OldFileName = OldFileName_1 ;
	NewFileName = NewFileName_2 ;
		{

    int rc;
#ifdef MR_WIN32
    rc = _wrename(ML_utf8_to_wide(OldFileName),
        ML_utf8_to_wide(NewFileName));
#else
    rc = rename(OldFileName, NewFileName);
#endif
    if (rc == 0) {
        Error = 0;
    } else {
        Error = errno;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *Error_3 );
}
}

static void MR_CALL 
mercury__io__file__remove_directory_entry_8_p_0(
  MR_String DirName_9,
  MR_String FileName_10,
  MR_Word _FileType_11,
  MR_Word * Continue_12,
  MR_Word HeadVar__5_13,
  MR_Word * Res_14)
{
  mercury__io__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_100_105_114_101_99_116_111_114_121_95_101_110_116_114_121_95_95_91_51_44_32_53_93_95_48_8_p_0(DirName_9, FileName_10, Continue_12, Res_14);
}

static void MR_CALL 
mercury__io__file__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_109_111_118_101_95_100_105_114_101_99_116_111_114_121_95_101_110_116_114_121_95_95_91_51_44_32_53_93_95_48_8_p_0(
  MR_String DirName_9,
  MR_String FileName_10,
  MR_Word * Continue_12,
  MR_Word * Res_14)
{
  MR_Word Res0_16;
  MR_String Var_20;

  Var_20 = mercury__dir__f_slash_2_f_0(DirName_9, FileName_10);
  mercury__io__file__remove_file_recursively_4_p_0(Var_20, &Res0_16);
  if ((Res0_16 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *Res_14 = (MR_Word) ((MR_Unsigned) 0U);
    *Continue_12 = (MR_Integer) 1;
  }
  else
  {
    *Res_14 = Res0_16;
    *Continue_12 = (MR_Integer) 0;
  }
}

void MR_CALL 
mercury__io__file__remove_file_2_4_p_0(
  MR_String FileName_1,
  MR_Box * Error_2)
{
{
#define MR_PROC_LABEL mercury__io__file__remove_file_2_4_p_0

	MR_String FileName;
	MR_Integer Error;

	FileName = FileName_1 ;
		{

    int rc;
#ifdef MR_WIN32
    rc = _wremove(ML_utf8_to_wide(FileName));
#else
    rc = remove(FileName);
#endif
    if (rc == 0) {
        Error = 0;
    } else {
        Error = errno;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *Error_2 );
}
}

MR_bool MR_CALL 
mercury__io__file__have_make_temp_directory_0_p_0(void)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__io__file__have_make_temp_directory_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#ifdef MR_HAVE_MKDTEMP
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

void MR_CALL 
mercury__io__file__make_temp_directory_3_p_0(
  MR_Word * Result_4)
{
  MR_String Dir_6;

  mercury__io__file__get_temp_directory_3_p_0(&Dir_6);
  mercury__io__file__make_temp_directory_6_p_0(Dir_6, (MR_String) "mtmp", (MR_String) "", Result_4);
}

void MR_CALL 
mercury__io__file__make_temp_directory_6_p_0(
  MR_String Dir_7,
  MR_String Prefix_8,
  MR_String Suffix_9,
  MR_Word * Result_10)
{
  MR_bool succeeded;
  MR_String DirName_12;
  MR_Box Error_13;
  MR_Word MaybeIOError_14;
  MR_String Var_18;
  MR_Char Var_20;

{
#define MR_PROC_LABEL mercury__io__file__make_temp_directory_6_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    Var_20 = (MR_Char) 92;
  else
    Var_20 = (MR_Char) 47;
  mercury__string__char_to_string_2_p_0(Var_20, &Var_18);
{
#define MR_PROC_LABEL mercury__io__file__make_temp_directory_6_p_0

	MR_String Dir;
	MR_String Prefix;
	MR_String Suffix;
	MR_String Sep;
	MR_String DirName;
	MR_Integer Error;

	Dir = Dir_7 ;
	Prefix = Prefix_8 ;
	Suffix = Suffix_9 ;
	Sep = Var_18 ;
		{

#ifdef MR_HAVE_MKDTEMP
    int err;

    // We cannot append Suffix because the last six chars in the argument
    // to mkdtemp() must be XXXXXX.

    DirName = MR_make_string(MR_ALLOC_ID, "%s%s%.5sXXXXXX",
        Dir, Sep, Prefix);
    DirName = mkdtemp(DirName);
    if (DirName == NULL) {
        Error = errno;
    } else {
        Error = 0;
    }
#else
    Error = ENOSYS;
    DirName = MR_make_string_const("");
#endif // HAVE_MKDTEMP


		;}
#undef MR_PROC_LABEL
	DirName_12  = DirName;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_13 );
}
  mercury__io__is_error_5_p_0(Error_13, (MR_String) "error creating temporary directory: ", &MaybeIOError_14);
  if ((MaybeIOError_14 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Result_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (DirName_12));
    }
  else
  {
    MR_Word IOError_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIOError_14, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_10 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOError_15));
    }
  }
}

void MR_CALL 
mercury__io__file__make_temp_file_3_p_0(
  MR_Word * Result_4)
{
  MR_String Dir_6;

  mercury__io__file__get_temp_directory_3_p_0(&Dir_6);
  mercury__io__file__make_temp_file_6_p_0(Dir_6, (MR_String) "mtmp", (MR_String) "", Result_4);
}

void MR_CALL 
mercury__io__file__get_temp_directory_3_p_0(
  MR_String * Dir_4)
{
  MR_bool succeeded;
  MR_String Var_8;
  MR_Word Result_9;
  MR_Char Var_17;

{
#define MR_PROC_LABEL mercury__io__file__get_temp_directory_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    Var_17 = (MR_Char) 92;
  else
    Var_17 = (MR_Char) 47;
  succeeded = (Var_17 == (MR_Char) 92);
  if (succeeded)
    Var_8 = (MR_String) "TMP";
  else
    Var_8 = (MR_String) "TMPDIR";
  mercury__io__environment__get_environment_var_4_p_0(Var_8, &Result_9);
  if ((Result_9 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Char Var_19;

{
#define MR_PROC_LABEL mercury__io__file__get_temp_directory_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      Var_19 = (MR_Char) 92;
    else
      Var_19 = (MR_Char) 47;
    succeeded = (Var_19 == (MR_Char) 92);
    if (succeeded)
      *Dir_4 = (MR_String) ".";
    else
      *Dir_4 = (MR_String) "/tmp";
  }
  else
    *Dir_4 = ((MR_String) ((MR_hl_field(MR_mktag(1), Result_9, (MR_Integer) 0))));
}

void MR_CALL 
mercury__io__file__make_temp_file_6_p_0(
  MR_String Dir_7,
  MR_String Prefix_8,
  MR_String Suffix_9,
  MR_Word * Result_10)
{
  MR_bool succeeded;
  MR_String Name_12;
  MR_Box Error_13;
  MR_Word MaybeIOError_14;
  MR_String Var_18;
  MR_Char Var_20;

{
#define MR_PROC_LABEL mercury__io__file__make_temp_file_6_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    Var_20 = (MR_Char) 92;
  else
    Var_20 = (MR_Char) 47;
  mercury__string__char_to_string_2_p_0(Var_20, &Var_18);
{
#define MR_PROC_LABEL mercury__io__file__make_temp_file_6_p_0

	MR_String Dir;
	MR_String Prefix;
	MR_String Suffix;
	MR_String Sep;
	MR_String FileName;
	MR_Integer Error;

	Dir = Dir_7 ;
	Prefix = Prefix_8 ;
	Suffix = Suffix_9 ;
	Sep = Var_18 ;
		{

#ifdef MR_HAVE_MKSTEMP
    int err, fd;

    // We cannot append Suffix because the last six chars in the argument
    // to mkstemp() must be XXXXXX.
    FileName = MR_make_string(MR_ALLOC_ID, "%s%s%.5sXXXXXX",
        Dir, Sep, Prefix);
    fd = mkstemp(FileName);
    if (fd == -1) {
        Error = errno;
    } else {
        do {
            err = close(fd);
        } while (err == -1 && MR_is_eintr(errno));
        if (err == 0) {
            Error = 0;
        } else {
            Error = errno;
        }
    }
#else
    // Constructs a temporary name by concatenating Dir, `/', the first 5 chars
    // of Prefix, six hex digits, and Suffix. The six digit hex number is
    // generated by starting with the pid of this process. Uses
    // `open(..., O_CREATE | O_EXCL, ...)' to create the file, checking that
    // there was no existing file with that name.

    int     err, fd, num_tries;
    int     flags;

    if (ML_io_tempnam_counter == 0) {
        ML_io_tempnam_counter = getpid();
    }
    num_tries = 0;
    do {
        FileName = MR_make_string(MR_ALLOC_ID, "%s%s%.5s%06lX%s",
            Dir, Sep, Prefix, ML_io_tempnam_counter & 0xffffffL, Suffix);
        flags = O_WRONLY | O_CREAT | O_EXCL;
        do {
            #ifdef MR_WIN32
                fd = _wopen(ML_utf8_to_wide(FileName), flags, 0600);
            #else
                fd = open(FileName, flags, 0600);
            #endif
        } while (fd == -1 && MR_is_eintr(errno));
        num_tries++;
        ML_io_tempnam_counter += (1 << num_tries);
    } while (fd == -1 && errno == EEXIST &&
        num_tries < ML_MAX_TEMPNAME_TRIES);
    if (fd == -1) {
        Error = errno;
    }  else {
        do {
            err = close(fd);
        } while (err == -1 && MR_is_eintr(errno));
        if (err == 0) {
            Error = 0;
        } else {
            Error = errno;
        }
    }
#endif


		;}
#undef MR_PROC_LABEL
	Name_12  = FileName;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_13 );
}
  mercury__io__is_error_5_p_0(Error_13, (MR_String) "error creating temporary file: ", &MaybeIOError_14);
  if ((MaybeIOError_14 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Result_10 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Name_12));
    }
  else
  {
    MR_Word IOError_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIOError_14, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_10 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOError_15));
    }
  }
}

void MR_CALL 
mercury__io__file__file_modification_time_4_p_0(
  MR_String File_5,
  MR_Word * Result_6)
{
  MR_Word Time_8;
  MR_Box Error_9;
  MR_Word MaybeIOError_10;

{
#define MR_PROC_LABEL mercury__io__file__file_modification_time_4_p_0

	MR_String FileName;
	MR_Word Time;
	MR_Integer Error;

	FileName = File_5 ;
		{

#ifdef MR_HAVE_STAT
  #ifdef MR_WIN32
    struct _stat s;
    int stat_result = _wstat(ML_utf8_to_wide(FileName), &s);
  #else
    struct stat s;
    int stat_result = stat(FileName, &s);
  #endif

    if (stat_result == 0) {
        // XXX avoid ML_construct_time_t by returning time_t_rep?
        Time = ML_construct_time_t(s.st_mtime);
        Error = 0;
    } else {
        Error = errno;
        Time = 0;
    }
#else
    Error = ENOSYS;
    Time = 0;
#endif


		;}
#undef MR_PROC_LABEL
	Time_8  = Time;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_9 );
}
  mercury__io__is_error_5_p_0(Error_9, (MR_String) "can\'t get file modification time: ", &MaybeIOError_10);
  if ((MaybeIOError_10 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Result_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Time_8));
    }
  else
  {
    MR_Word IOError_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIOError_10, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOError_11));
    }
  }
}

void MR_CALL 
mercury__io__file__check_file_accessibility_5_p_0(
  MR_String FileName_6,
  MR_Word AccessTypes_7,
  MR_Word * Result_8)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__io__file__check_file_accessibility_5_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    mercury__io__file__check_file_accessibility_dotnet_5_p_0(FileName_6, AccessTypes_7, Result_8);
  else
  {
    MR_Word CheckRead_10;
    MR_Word CheckWrite_11;
    MR_Word CheckExecute_12;
    MR_Box Error_13;
    MR_Word MaybeIOError_14;

    succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__io__io__type_ctor_info_access_type_0), ((MR_Box) ((MR_Integer) 0)), AccessTypes_7);
    if (succeeded)
      CheckRead_10 = (MR_Integer) 1;
    else
      CheckRead_10 = (MR_Integer) 0;
    succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__io__io__type_ctor_info_access_type_0), ((MR_Box) ((MR_Integer) 1)), AccessTypes_7);
    if (succeeded)
      CheckWrite_11 = (MR_Integer) 1;
    else
      CheckWrite_11 = (MR_Integer) 0;
    CheckExecute_12 = mercury__io__file__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_100_95_116_111_95_98_111_111_108_95_95_104_111_52_95_95_91_51_93_95_48_1_f_in__bool_0(AccessTypes_7, (MR_Integer) 2);
    mercury__io__file__check_file_accessibility_2_7_p_0(FileName_6, CheckRead_10, CheckWrite_11, CheckExecute_12, &Error_13);
    mercury__io__is_error_5_p_0(Error_13, (MR_String) "file not accessible: ", &MaybeIOError_14);
    if ((MaybeIOError_14 == (MR_Word) ((MR_Unsigned) 0U)))
      *Result_8 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word IOError_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIOError_14, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOError_15));
      }
    }
  }
}

static MR_Word MR_CALL 
mercury__io__file__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_100_95_116_111_95_98_111_111_108_95_95_104_111_52_95_95_91_51_93_95_48_1_f_in__bool_0(
  MR_Word Var_5,
  MR_Word Var_6)
{
  MR_bool succeeded;
  MR_Word HeadVar__2_4;

  succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__io__io__type_ctor_info_access_type_0), ((MR_Box) (Var_6)), Var_5);
  if (succeeded)
    HeadVar__2_4 = (MR_Integer) 1;
  else
    HeadVar__2_4 = (MR_Integer) 0;
  return HeadVar__2_4;
}

static void MR_CALL 
mercury__io__file__check_file_accessibility_dotnet_5_p_0(
  MR_String FileName_6,
  MR_Word AccessTypes_7,
  MR_Word * Result_8)
{
  MR_bool succeeded;
  MR_Word CheckRead0_10;
  MR_Word CheckWrite_11;
  MR_Word CheckExec_12;
  MR_Word CheckRead_13;
  MR_Word FileTypeRes_14;

  CheckRead0_10 = mercury__io__file__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_100_95_116_111_95_98_111_111_108_95_95_104_111_51_95_95_91_51_93_95_48_1_f_in__bool_0(AccessTypes_7, (MR_Integer) 0);
  CheckWrite_11 = mercury__io__file__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_100_95_116_111_95_98_111_111_108_95_95_104_111_50_95_95_91_51_93_95_48_1_f_in__bool_0(AccessTypes_7, (MR_Integer) 1);
  CheckExec_12 = mercury__io__file__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_100_95_116_111_95_98_111_111_108_95_95_104_111_49_95_95_91_51_93_95_48_1_f_in__bool_0(AccessTypes_7, (MR_Integer) 2);
  switch (CheckRead0_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      CheckRead_13 = CheckExec_12;
      break;
    case (MR_Integer) 1:
      CheckRead_13 = (MR_Integer) 1;
      break;
  }
  mercury__io__file__file_type_5_p_0((MR_Integer) 1, FileName_6, &FileTypeRes_14);
  if (((MR_tag((MR_Word) FileTypeRes_14)) == (MR_Integer) 1))
  {
    MR_Word FileTypeError_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FileTypeRes_14, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FileTypeError_27));
    }
  }
  else
  {
    MR_Word FileType_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FileTypeRes_14, (MR_Integer) 0))));

    succeeded = (FileType_15 == (MR_Integer) 1);
    if (succeeded)
    {
      MR_Box Error_16;
      MR_Word MaybeIOError_17;

{
#define MR_PROC_LABEL mercury__io__file__check_file_accessibility_dotnet_5_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
      {
        MR_String Var_74;

        mercury__string__append_3_p_2((MR_String) "io.check_directory_accessibility_dotnet called ", (MR_String) "for non-.NET CLI backend", &Var_74);
        {
          mercury__require__error_1_p_0(Var_74);
          return;
        }
      }
      else
      {
{
#define MR_PROC_LABEL mercury__io__file__check_file_accessibility_dotnet_5_p_0

	MR_Integer Error;

		{

    Error = 0;


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_16 );
}
      }
      mercury__io__is_error_5_p_0(Error_16, (MR_String) "file not accessible: ", &MaybeIOError_17);
      if ((MaybeIOError_17 == (MR_Word) ((MR_Unsigned) 0U)))
        *Result_8 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word IOError_18 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIOError_17, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOError_18));
        }
      }
    }
    else
    {
      MR_Word CheckReadRes_21;
      MR_Word CheckWriteRes_25;

      switch (CheckRead_13) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          CheckReadRes_21 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          {
            MR_Word InputRes_19;

            mercury__io__open_input_4_p_0(FileName_6, &InputRes_19);
            if (((MR_tag((MR_Word) InputRes_19)) == (MR_Integer) 1))
            {
              MR_Word InputError_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), InputRes_19, (MR_Integer) 0))));

              {
                CheckReadRes_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), CheckReadRes_21, 0) = ((MR_Box) (InputError_22));
              }
            }
            else
            {
              MR_Word InputStream_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), InputRes_19, (MR_Integer) 0))));
              MR_Box Var_85 = (MR_Box) (InputStream_20);
              MR_Box Var_87;

              mercury__io__stream_db__maybe_delete_stream_info_3_p_0(Var_85);
{
#define MR_PROC_LABEL mercury__io__file__check_file_accessibility_dotnet_5_p_0

	MercuryFilePtr Stream;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Var_85 ;
		{

    if (mercury_close(Stream) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Var_87 );
}
              mercury__io__throw_on_error_4_p_0(Var_87, (MR_String) "error closing file: ");
              CheckReadRes_21 = (MR_Word) ((MR_Unsigned) 0U);
            }
          }
          break;
      }
      succeeded = (CheckReadRes_21 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = (CheckWrite_11 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Word OutputRes_23;

        mercury__io__open_append_4_p_0(FileName_6, &OutputRes_23);
        if (((MR_tag((MR_Word) OutputRes_23)) == (MR_Integer) 1))
        {
          MR_Word OutputError_26 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OutputRes_23, (MR_Integer) 0))));

          {
            CheckWriteRes_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), CheckWriteRes_25, 0) = ((MR_Box) (OutputError_26));
          }
        }
        else
        {
          MR_Word OutputStream_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OutputRes_23, (MR_Integer) 0))));

          mercury__io__close_output_3_p_0(OutputStream_24);
          CheckWriteRes_25 = (MR_Word) ((MR_Unsigned) 0U);
        }
      }
      else
        CheckWriteRes_25 = CheckReadRes_21;
      succeeded = (CheckWriteRes_25 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = (CheckExec_12 == (MR_Integer) 1);
      if (succeeded)
      {
        MR_Box Error_50;
        MR_Word MaybeIOError_51;

        mercury__io__file__have_dotnet_exec_permission_3_p_0(&Error_50);
        mercury__io__is_error_5_p_0(Error_50, (MR_String) "file not accessible: ", &MaybeIOError_51);
        if ((MaybeIOError_51 == (MR_Word) ((MR_Unsigned) 0U)))
          *Result_8 = (MR_Word) ((MR_Unsigned) 0U);
        else
        {
          MR_Word IOError_48 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIOError_51, (MR_Integer) 0))));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Result_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOError_48));
          }
        }
      }
      else
        *Result_8 = CheckWriteRes_25;
    }
  }
}

static MR_Word MR_CALL 
mercury__io__file__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_100_95_116_111_95_98_111_111_108_95_95_104_111_51_95_95_91_51_93_95_48_1_f_in__bool_0(
  MR_Word Var_5,
  MR_Word Var_6)
{
  MR_bool succeeded;
  MR_Word HeadVar__2_4;

  succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__io__io__type_ctor_info_access_type_0), ((MR_Box) (Var_6)), Var_5);
  if (succeeded)
    HeadVar__2_4 = (MR_Integer) 1;
  else
    HeadVar__2_4 = (MR_Integer) 0;
  return HeadVar__2_4;
}

static MR_Word MR_CALL 
mercury__io__file__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_100_95_116_111_95_98_111_111_108_95_95_104_111_50_95_95_91_51_93_95_48_1_f_in__bool_0(
  MR_Word Var_5,
  MR_Word Var_6)
{
  MR_bool succeeded;
  MR_Word HeadVar__2_4;

  succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__io__io__type_ctor_info_access_type_0), ((MR_Box) (Var_6)), Var_5);
  if (succeeded)
    HeadVar__2_4 = (MR_Integer) 1;
  else
    HeadVar__2_4 = (MR_Integer) 0;
  return HeadVar__2_4;
}

static MR_Word MR_CALL 
mercury__io__file__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_112_114_101_100_95_116_111_95_98_111_111_108_95_95_104_111_49_95_95_91_51_93_95_48_1_f_in__bool_0(
  MR_Word Var_5,
  MR_Word Var_6)
{
  MR_bool succeeded;
  MR_Word HeadVar__2_4;

  succeeded = mercury__list__member_2_p_0((MR_Word) (&mercury__io__io__type_ctor_info_access_type_0), ((MR_Box) (Var_6)), Var_5);
  if (succeeded)
    HeadVar__2_4 = (MR_Integer) 1;
  else
    HeadVar__2_4 = (MR_Integer) 0;
  return HeadVar__2_4;
}

static void MR_CALL 
mercury__io__file__have_dotnet_exec_permission_3_p_0(
  MR_Box * Error_4)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__io__file__have_dotnet_exec_permission_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_TRUE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
  {
    MR_String Var_8;

    mercury__string__append_3_p_2((MR_String) "io.have_dotnet_exec_permission invoked ", (MR_String) "for non-.NET CLI backend", &Var_8);
    {
      mercury__require__error_1_p_0(Var_8);
      return;
    }
  }
  else
  {
{
#define MR_PROC_LABEL mercury__io__file__have_dotnet_exec_permission_3_p_0

	MR_Integer Error;

		{

    Error = 0;


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *Error_4 );
}
  }
}

static void MR_CALL 
mercury__io__file__check_file_accessibility_2_7_p_0(
  MR_String FileName_1,
  MR_Word CheckRead_2,
  MR_Word CheckWrite_3,
  MR_Word CheckExecute_4,
  MR_Box * Error_5)
{
{
#define MR_PROC_LABEL mercury__io__file__check_file_accessibility_2_7_p_0

	MR_String FileName;
	MR_Word CheckRead;
	MR_Word CheckWrite;
	MR_Word CheckExecute;
	MR_Integer Error;

	FileName = FileName_1 ;
	CheckRead = CheckRead_2 ;
	CheckWrite = CheckWrite_3 ;
	CheckExecute = CheckExecute_4 ;
		{

#if defined(MR_HAVE_ACCESS)
  #ifdef F_OK
    const int MODE_EXISTS = F_OK;
  #else
    const int MODE_EXISTS = 0;
  #endif
  #ifdef X_OK
    const int MODE_EXECUTE = X_OK;
  #else
    const int MODE_EXECUTE = 1;
  #endif
  #ifdef W_OK
    const int MODE_WRITE = W_OK;
  #else
    const int MODE_WRITE = 2;
  #endif
  #ifdef R_OK
    const int MODE_READ = R_OK;
  #else
    const int MODE_READ = 4;
  #endif

    int mode = MODE_EXISTS;
    int access_result;

  #if !defined(MR_WIN32) || defined(MR_CYGWIN)
    // Earlier versions of MSVCRT ignored flags it does not support,
    // later versions return an error (e.g. on Vista).
    if (CheckExecute) {
        mode |= MODE_EXECUTE;
    }
  #endif
    if (CheckWrite) {
        mode |= MODE_WRITE;
    }
    if (CheckRead) {
        mode |= MODE_READ;
    }

  #ifdef MR_WIN32
    access_result = _waccess(ML_utf8_to_wide(FileName), mode);
  #else
    access_result = access(FileName, mode);
  #endif

    if (access_result == 0) {
        Error = 0;
    } else {
        Error = errno;
    }
#else // !MR_HAVE_ACCESS
    Error = ENOSYS;
#endif


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *Error_5 );
}
}

void MR_CALL 
mercury__io__file__read_symlink_4_p_0(
  MR_String FileName_5,
  MR_Word * Result_6)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__io__file__read_symlink_4_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_HAVE_SYMLINK) && defined(MR_HAVE_READLINK)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
  {
    MR_String TargetFileName_8;
    MR_Box Error_9;
    MR_Word MaybeIOError_10;

{
#define MR_PROC_LABEL mercury__io__file__read_symlink_4_p_0

	MR_String FileName;
	MR_String TargetFileName;
	MR_Integer Error;

	FileName = FileName_5 ;
		{

#ifdef MR_HAVE_READLINK
  #ifndef PATH_MAX
    #define PATH_MAX 256
  #endif
    int     num_chars;
    char    *buffer2 = NULL;
    int     buffer_size2 = PATH_MAX;
    char    buffer[PATH_MAX + 1];

    // readlink() does not null-terminate the buffer.
    num_chars = readlink(FileName, buffer, PATH_MAX);

    if (num_chars == PATH_MAX) {
        do {
            buffer_size2 *= 2;
            buffer2 = MR_RESIZE_ARRAY(buffer2, char, buffer_size2);
            num_chars = readlink(FileName, buffer2, buffer_size2);
        } while (num_chars == buffer_size2);

        // Invariant: num_chars < buffer_size2.

        if (num_chars == -1) {
            TargetFileName = MR_make_string_const("");
            Error = errno;
        } else {
            buffer2[num_chars] = '\0';
            MR_make_aligned_string_copy_msg(TargetFileName, buffer2,
                MR_ALLOC_ID);
            Error = 0;
        }
        MR_free(buffer2);
    } else if (num_chars == -1) {
        TargetFileName = MR_make_string_const("");
        Error = errno;
    } else {
        buffer[num_chars] = '\0';
        MR_make_aligned_string_copy_msg(TargetFileName, buffer, MR_ALLOC_ID);
        Error = 0;
    }
#else // !MR_HAVE_READLINK
    TargetFileName = MR_make_string_const("");
    Error = ENOSYS;
#endif


		;}
#undef MR_PROC_LABEL
	TargetFileName_8  = TargetFileName;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_9 );
}
    mercury__io__is_error_5_p_0(Error_9, (MR_String) "io.read_symlink failed: ", &MaybeIOError_10);
    if ((MaybeIOError_10 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *Result_6 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (TargetFileName_8));
      }
    else
    {
      MR_Word IOError_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIOError_10, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOError_11));
      }
    }
  }
  else
    *Result_6 = (MR_Word) (MR_mkword(MR_mktag(1), &mercury__io__file_scalar_common_6[1]));
}

void MR_CALL 
mercury__io__file__make_symlink_5_p_0(
  MR_String FileName_6,
  MR_String LinkFileName_7,
  MR_Word * Result_8)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__io__file__make_symlink_5_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_HAVE_SYMLINK) && defined(MR_HAVE_READLINK)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
  {
    MR_Box Error_10;
    MR_Word MaybeIOError_11;

{
#define MR_PROC_LABEL mercury__io__file__make_symlink_5_p_0

	MR_String FileName;
	MR_String LinkFileName;
	MR_Integer Error;

	FileName = FileName_6 ;
	LinkFileName = LinkFileName_7 ;
		{

#ifdef MR_HAVE_SYMLINK
    if (symlink(FileName, LinkFileName) == 0) {
        Error = 0;
    } else {
        Error = errno;
    }
#else
    Error = ENOSYS;
#endif


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_10 );
}
    mercury__io__is_error_5_p_0(Error_10, (MR_String) "io.make_symlink failed: ", &MaybeIOError_11);
    if ((MaybeIOError_11 == (MR_Word) ((MR_Unsigned) 0U)))
      *Result_8 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word IOError_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIOError_11, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOError_12));
      }
    }
  }
  else
    *Result_8 = (MR_Word) (MR_mkword(MR_mktag(1), &mercury__io__file_scalar_common_6[0]));
}

MR_bool MR_CALL 
mercury__io__file__have_symlinks_0_p_0(void)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__io__file__have_symlinks_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_HAVE_SYMLINK) && defined(MR_HAVE_READLINK)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  return succeeded;
}

void MR_CALL 
mercury__io__file__rename_file_5_p_0(
  MR_String OldFileName_6,
  MR_String NewFileName_7,
  MR_Word * Result_8)
{
  MR_Box Error_10;
  MR_Word MaybeIOError_11;

{
#define MR_PROC_LABEL mercury__io__file__rename_file_5_p_0

	MR_String OldFileName;
	MR_String NewFileName;
	MR_Integer Error;

	OldFileName = OldFileName_6 ;
	NewFileName = NewFileName_7 ;
		{

    int rc;
#ifdef MR_WIN32
    rc = _wrename(ML_utf8_to_wide(OldFileName),
        ML_utf8_to_wide(NewFileName));
#else
    rc = rename(OldFileName, NewFileName);
#endif
    if (rc == 0) {
        Error = 0;
    } else {
        Error = errno;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_10 );
}
  mercury__io__is_error_5_p_0(Error_10, (MR_String) "rename failed: ", &MaybeIOError_11);
  if ((MaybeIOError_11 == (MR_Word) ((MR_Unsigned) 0U)))
    *Result_8 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word IOError_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIOError_11, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOError_12));
    }
  }
}

static void MR_CALL 
mercury__io__file__remove_file_recursively_4_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8)
{
  MR_Box closure = closure_arg;
  MR_Word conv1_Continue_12;
  MR_Word conv0_Res_14;

  mercury__io__file__remove_directory_entry_8_p_0(((MR_String) (wrapper_arg_1)), ((MR_String) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), &conv1_Continue_12, ((MR_Word) (wrapper_arg_5)), &conv0_Res_14);
  *wrapper_arg_4 = ((MR_Box) (conv1_Continue_12));
  *wrapper_arg_6 = ((MR_Box) (conv0_Res_14));
}

void MR_CALL 
mercury__io__file__remove_file_recursively_4_p_0(
  MR_String FileName_5,
  MR_Word * Res_6)
{
  MR_Word ResFileType_9;

  mercury__io__file__file_type_5_p_0((MR_Integer) 0, FileName_5, &ResFileType_9);
  if (((MR_tag((MR_Word) ResFileType_9)) == (MR_Integer) 1))
  {
    MR_Word Error_24 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ResFileType_9, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Res_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_24));
    }
  }
  else
  {
    MR_Word FileType_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), ResFileType_9, (MR_Integer) 0))));

    switch (FileType_10) {
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
          MR_Box Error_39;
          MR_Word MaybeIOError_40;

{
#define MR_PROC_LABEL mercury__io__file__remove_file_recursively_4_p_0

	MR_String FileName;
	MR_Integer Error;

	FileName = FileName_5 ;
		{

    int rc;
#ifdef MR_WIN32
    rc = _wremove(ML_utf8_to_wide(FileName));
#else
    rc = remove(FileName);
#endif
    if (rc == 0) {
        Error = 0;
    } else {
        Error = errno;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_39 );
}
          mercury__io__is_error_5_p_0(Error_39, (MR_String) "remove failed: ", &MaybeIOError_40);
          if ((MaybeIOError_40 == (MR_Word) ((MR_Unsigned) 0U)))
            *Res_6 = (MR_Word) ((MR_Unsigned) 0U);
          else
          {
            MR_Word IOError_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIOError_40, (MR_Integer) 0))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *Res_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOError_41));
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Res0_11;
          MR_String Var_55;
          MR_Word Var_61;
          MR_Word Var_62;
          MR_Word Var_63;
          MR_Word Var_60;
          MR_Box conv2_Var_62;

          Var_55 = mercury__dir__make_dirname_ok_for_windows_1_f_0(FileName_5);
          mercury__dir__foldl2_process_dir_13_p_0((MR_Word) (&mercury__io__io__type_ctor_info_res_0), (MR_Word) (&mercury__io__file_scalar_common_4[0]), (MR_Word) (&mercury__io__file_scalar_common_1[1]), Var_55, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, &Var_60, (MR_Word) ((MR_Unsigned) 0U), &Var_61, ((MR_Box) ((MR_Unsigned) 0U)), &conv2_Var_62);
          Var_62 = ((MR_Word) (conv2_Var_62));
          mercury__list__reverse_2_p_0((MR_Word) (&mercury__dir__dir__type_ctor_info_file_error_0), Var_61, &Var_63);
          if ((Var_63 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              Res0_11 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Res0_11, 0) = ((MR_Box) (Var_62));
            }
          else
          {
            MR_Word Var_65 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_63, (MR_Integer) 0))));
            MR_Word Var_69 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_65, (MR_Integer) 2))));

            {
              Res0_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Res0_11, 0) = ((MR_Box) (Var_62));
              MR_hl_field(MR_mktag(1), Res0_11, 1) = ((MR_Box) (Var_69));
            }
          }
          if (((MR_tag((MR_Word) Res0_11)) == (MR_Integer) 1))
          {
            MR_Word Error_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Res0_11, (MR_Integer) 1))));

            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *Res_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_23));
            }
          }
          else
          {
            MR_Word MaybeError_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Res0_11, (MR_Integer) 0))));

            if ((MaybeError_12 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Box Error_77;
              MR_Word MaybeIOError_78;

{
#define MR_PROC_LABEL mercury__io__file__remove_file_recursively_4_p_0

	MR_String FileName;
	MR_Integer Error;

	FileName = FileName_5 ;
		{

    int rc;
#ifdef MR_WIN32
    rc = _wremove(ML_utf8_to_wide(FileName));
#else
    rc = remove(FileName);
#endif
    if (rc == 0) {
        Error = 0;
    } else {
        Error = errno;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_77 );
}
              mercury__io__is_error_5_p_0(Error_77, (MR_String) "remove failed: ", &MaybeIOError_78);
              if ((MaybeIOError_78 == (MR_Word) ((MR_Unsigned) 0U)))
                *Res_6 = (MR_Word) ((MR_Unsigned) 0U);
              else
              {
                MR_Word IOError_79 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIOError_78, (MR_Integer) 0))));

                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *Res_6 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOError_79));
                }
              }
            }
            else
              *Res_6 = MaybeError_12;
          }
        }
        break;
    }
  }
}

void MR_CALL 
mercury__io__file__file_type_5_p_0(
  MR_Word FollowSymLinks_6,
  MR_String FileName_7,
  MR_Word * Result_8)
{
  MR_Integer FollowSymLinksInt_10;
  MR_Word FileType_11;
  MR_Box Error_12;
  MR_Word MaybeIOError_13;

  switch (FollowSymLinks_6) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      FollowSymLinksInt_10 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      FollowSymLinksInt_10 = (MR_Integer) 1;
      break;
  }
{
#define MR_PROC_LABEL mercury__io__file__file_type_5_p_0

	MR_Integer FollowSymLinks;
	MR_String FileName;
	MR_Word FileType;
	MR_Integer Error;

	FollowSymLinks = FollowSymLinksInt_10 ;
	FileName = FileName_7 ;
		{

#ifdef MR_HAVE_STAT
  #ifdef MR_WIN32
    struct _stat s;
    int stat_result = _wstat(ML_utf8_to_wide(FileName), &s);
  #else
    struct stat s;
    int stat_result;

    if (FollowSymLinks == 1) {
        stat_result = stat(FileName, &s);
    } else {
        #ifdef MR_HAVE_LSTAT
            stat_result = lstat(FileName, &s);
        #else
            stat_result = stat(FileName, &s);
        #endif
    }
  #endif

    if (stat_result == 0) {
        // Do we still need the non-POSIX S_IFMT style?
        if
            #if defined(S_ISREG)
                (S_ISREG(s.st_mode))
            #elif defined(S_IFMT) && defined(S_IFREG)
                ((s.st_mode & S_IFMT) == S_IFREG)
            #else
                (0)
            #endif
        {
            FileType = ML_FILE_TYPE_REGULAR_FILE;
        }
        else if
            #if defined(S_ISDIR)
                (S_ISDIR(s.st_mode))
            #elif defined(S_IFMT) && defined(S_IFDIR)
                ((s.st_mode & S_IFMT) == S_IFDIR)
            #else
                (0)
            #endif
        {
            FileType = ML_FILE_TYPE_DIRECTORY;
        }
        else if
            #if defined(S_ISBLK)
                (S_ISBLK(s.st_mode))
            #elif defined(S_IFMT) && defined(S_IFBLK)
                ((s.st_mode & S_IFMT) == S_IFBLK)
            #else
                (0)
            #endif
        {
            FileType = ML_FILE_TYPE_BLOCK_DEVICE;
        }
        else if
            #if defined(S_ISCHR)
                (S_ISCHR(s.st_mode))
            #elif defined(S_IFMT) && defined(S_IFCHR)
                ((s.st_mode & S_IFMT) == S_IFCHR)
            #else
                (0)
            #endif
        {
            FileType = ML_FILE_TYPE_CHARACTER_DEVICE;
        }
        else if
            #if defined(S_ISFIFO)
                (S_ISFIFO(s.st_mode))
            #elif defined(S_IFMT) && defined(S_IFIFO)
                ((s.st_mode & S_IFMT) == S_IFIFO)
            #else
                (0)
            #endif
        {
            FileType = ML_FILE_TYPE_NAMED_PIPE;
        }
        else if
            #if defined(S_ISLNK)
                (S_ISLNK(s.st_mode))
            #elif defined(S_IFMT) && defined(S_IFLNK)
                ((s.st_mode & S_IFMT) == S_IFLNK)
            #else
                (0)
            #endif
        {
            FileType = ML_FILE_TYPE_SYMBOLIC_LINK;
        }
        else if
            #if defined(S_ISSOCK)
                (S_ISSOCK(s.st_mode))
            #elif defined(S_IFMT) && defined(S_IFSOCK)
                ((s.st_mode & S_IFMT) == S_IFSOCK)
            #else
                (0)
            #endif
        {
            FileType = ML_FILE_TYPE_SOCKET;
        } else {

        #ifdef S_TYPEISMQ
            if (S_TYPEISMQ(&s)) {
                FileType = ML_FILE_TYPE_MESSAGE_QUEUE;
            } else
        #endif

        #ifdef S_TYPEISSEM
            if (S_TYPEISSEM(&s)) {
                FileType = ML_FILE_TYPE_SEMAPHORE;
            } else
        #endif

        #ifdef S_TYPEISSHM
            if (S_TYPEISSHM(&s)) {
                FileType = ML_FILE_TYPE_SHARED_MEMORY;
            } else
        #endif

            {
                FileType = ML_FILE_TYPE_UNKNOWN;
            }
        }
        Error = 0;
    } else {
        FileType = ML_FILE_TYPE_UNKNOWN;
        Error = errno;
    }
#else
    FileType = ML_FILE_TYPE_UNKNOWN;
    Error = ENOSYS;
#endif


		;}
#undef MR_PROC_LABEL
	FileType_11  = FileType;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_12 );
}
  mercury__io__is_error_5_p_0(Error_12, (MR_String) "can\'t find file type: ", &MaybeIOError_13);
  if ((MaybeIOError_13 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Result_8 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (FileType_11));
    }
  else
  {
    MR_Word IOError_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIOError_13, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOError_14));
    }
  }
}

void MR_CALL 
mercury__io__file__remove_file_4_p_0(
  MR_String FileName_5,
  MR_Word * Result_6)
{
  MR_Box Error_8;
  MR_Word MaybeIOError_9;

{
#define MR_PROC_LABEL mercury__io__file__remove_file_4_p_0

	MR_String FileName;
	MR_Integer Error;

	FileName = FileName_5 ;
		{

    int rc;
#ifdef MR_WIN32
    rc = _wremove(ML_utf8_to_wide(FileName));
#else
    rc = remove(FileName);
#endif
    if (rc == 0) {
        Error = 0;
    } else {
        Error = errno;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_8 );
}
  mercury__io__is_error_5_p_0(Error_8, (MR_String) "remove failed: ", &MaybeIOError_9);
  if ((MaybeIOError_9 == (MR_Word) ((MR_Unsigned) 0U)))
    *Result_6 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word IOError_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeIOError_9, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOError_10));
    }
  }
}

void mercury__io__file__init(void)
{
}

void mercury__io__file__init_type_tables(void)
{
}

void mercury__io__file__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__io__file__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module io.file.
