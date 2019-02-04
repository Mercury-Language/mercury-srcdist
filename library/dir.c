/*
** Automatically generated from `dir.m'
** by the Mercury compiler,
** version rotd-2018-09-10
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


// :- module dir.
// :- implementation.

/*
INIT mercury__dir__init
ENDINIT
*/

#include "dir.mih"


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
#include "enum.mih"
#include "erlang_rtti_implementation.mih"
#include "exception.mih"
#include "float.mih"
#include "int.mih"
#include "int16.mih"
#include "int32.mih"
#include "int64.mih"
#include "int8.mih"
#include "integer.mih"
#include "io.mih"
#include "lexer.mih"
#include "list.mih"
#include "map.mih"
#include "math.mih"
#include "maybe.mih"
#include "mutvar.mih"
#include "ops.mih"
#include "pair.mih"
#include "parser.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "random.mih"
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
#include "stream.string_writer.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"

#line 1516 "dir.m"


#include "mercury_string.h"
#include "mercury_types.h"

#if defined(MR_WIN32) && defined(MR_HAVE_WINDOWS_H)
  #include "mercury_windows.h"
  #include <direct.h>   // for _wgetcwd
#endif

#ifdef HAVE_UNISTD_H
  #include <unistd.h>
#endif

#ifdef MR_HAVE_SYS_TYPES_H
  #include <sys/types.h>
#endif

#ifdef MR_HAVE_DIRENT_H
  #include <dirent.h>
#endif

#if defined(MR_WIN32)
    struct ML_DIR_STREAM {
        HANDLE      handle;         // may be INVALID_HANDLE_VALUE
        MR_String   pending_entry;  // initially populated, then NULL
    };
    typedef struct ML_DIR_STREAM *ML_DIR_STREAM;
#elif defined(MR_HAVE_READDIR)
    typedef DIR *ML_DIR_STREAM;
#else
    typedef MR_Integer ML_DIR_STREAM;
#endif




static const MR_VA_PseudoTypeInfo_Struct8 mercury__dir____vpti_pred_8__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0__plain_io__type_ctor_info_file_type_0__plain_bool__type_ctor_info_bool_0__pseudo_1__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__dir__list__pti_list_1__plain_io__type_ctor_info_file_id_0;

static const MR_VA_PseudoTypeInfo_Struct3 mercury__dir____vpti_tuple_3__plain_bool__type_ctor_info_bool_0__plain_io__type_ctor_info_res_0__pseudo_1;

static const MR_VA_PseudoTypeInfo_Struct3 mercury__dir____vpti_pred_3__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_VA_PseudoTypeInfo_Struct2 mercury__dir____vpti_tuple_2__pseudo_1__plain_io__type_ctor_info_state_0;

static const MR_EnumFunctorDesc mercury__dir__dir__enum_functor_desc_make_single_directory_status_0_0;

static const MR_EnumFunctorDesc mercury__dir__dir__enum_functor_desc_make_single_directory_status_0_1;

static const MR_EnumFunctorDesc mercury__dir__dir__enum_functor_desc_make_single_directory_status_0_2;

static const MR_EnumFunctorDesc mercury__dir__dir__enum_functor_desc_make_single_directory_status_0_3;

static const MR_EnumFunctorDescPtr mercury__dir__dir__enum_value_ordered_make_single_directory_status_0[4];

static const MR_EnumFunctorDescPtr mercury__dir__dir__enum_name_ordered_make_single_directory_status_0[4];

static const MR_Integer mercury__dir__dir__functor_number_map_make_single_directory_status_0[4];

static MR_Integer MR_CALL 
mercury__dir__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__dir__read_entry_4_p_0(
  MR_Box Dir_5,
  MR_Word * Res_6);

static void MR_CALL 
mercury__dir__read_entry_2_6_p_0(
  MR_Box Dir_1,
  MR_Box * Error_2,
  MR_Word * HaveFileName_3,
  MR_String * FileName_4);

static void MR_CALL 
mercury__dir__make_directory_including_parents_2_5_p_0(
  MR_String _DirName_1,
  MR_Box * Error_2,
  MR_Word * CheckAccess_3);

static MR_Word MR_CALL 
mercury__dir__map__ho12_2_f_in__list_0(
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
mercury__dir__map__ho7_2_f_in__list_0(
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
mercury__dir__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_95_95_91_50_93_95_48_2_f_in__list_0(
  MR_Word Var_12,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
mercury__dir__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_52_95_95_91_50_93_95_48_2_f_in__list_0(
  MR_Word Var_12,
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
mercury__dir__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_53_95_95_91_50_93_95_48_2_f_in__list_0(
  MR_Char Var_12,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mercury__dir__find_matching_brace_or_comma_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Alternatives0_2,
  MR_Word CurAlternative_3,
  MR_Integer BraceLevel_4,
  MR_Word * Alternatives_5,
  MR_Word * Left_6);

static void MR_CALL 
mercury__dir__foldl2_process_dir_12_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1);

static void MR_CALL 
mercury__dir__foldl2_process_dir_12_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mercury__dir__open_3_6_p_0(
  MR_String DirName_1,
  MR_String DirPattern_2,
  MR_Box * Dir_3,
  MR_Box * Error_4);

static void MR_CALL 
mercury__dir__make_directory_or_check_exists_4_p_0(
  MR_String DirName_5,
  MR_Word * Res_6);

static void MR_CALL 
mercury__dir__make_single_directory_2_5_p_0(
  MR_String DirName_1,
  MR_Word * Status_2,
  MR_Box * Error_3);

static void MR_CALL 
mercury__dir__take_while__ho10_4_p_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__dir__take_while__ho9_4_p_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static MR_Word MR_CALL 
mercury__dir__canonicalize_path_chars_2_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mercury__dir__take_while__ho11_4_p_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static MR_bool MR_CALL 
mercury__dir____Unify____foldl_pred_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__dir____Compare____foldl_pred_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__dir____Unify____make_single_directory_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__dir____Compare____make_single_directory_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__dir____Unify____stream_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__dir____Compare____stream_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mercury__dir_scalar_common_1[8][2];

static /* final */ const MR_Box mercury__dir_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__dir_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__dir_scalar_common_4[2][5];

static /* final */ const MR_Box mercury__dir_scalar_common_5[2][1];

static /* final */ const MR_Integer mercury__dir_scalar_common_6[1][2];

static /* final */ const MR_Box mercury__dir_scalar_common_7[1][15];

static /* final */ const MR_Box mercury__dir_scalar_common_8[1][7];




static /* final */ const MR_Box mercury__dir_scalar_common_1[8][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 2 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__dir_scalar_common_1[1])))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__dir_scalar_common_1[2])))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__dir_scalar_common_1[1])))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 58)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 7 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__dir_scalar_common_1[0]))
  },
};

static /* final */ const MR_Box mercury__dir_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__dir_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__dir_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__dir_scalar_common_4[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__dir_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__dir_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__dir_scalar_common_5[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) (((MR_Box) ((MR_String) "dir.foldl2: pathname is not a directory"))))
  },
};

static /* final */ const MR_Integer mercury__dir_scalar_common_6[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box mercury__dir_scalar_common_7[1][15] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mercury__dir_scalar_common_6[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 12)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__dir__dir__type_ctor_info_stream_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__dir____vpti_pred_8__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0__plain_io__type_ctor_info_file_type_0__plain_bool__type_ctor_info_bool_0__pseudo_1__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__dir__list__pti_list_1__plain_io__type_ctor_info_file_id_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__dir____vpti_tuple_3__plain_bool__type_ctor_info_bool_0__plain_io__type_ctor_info_res_0__pseudo_1)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__dir_scalar_common_8[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mercury__dir_scalar_common_6[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__dir____vpti_pred_3__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__dir____vpti_tuple_2__pseudo_1__plain_io__type_ctor_info_state_0))
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
#include "math.mh"
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



static const MR_VA_PseudoTypeInfo_Struct8 mercury__dir____vpti_pred_8__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0__plain_io__type_ctor_info_file_type_0__plain_bool__type_ctor_info_bool_0__pseudo_1__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 8,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_file_type_0),
    (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__dir__list__pti_list_1__plain_io__type_ctor_info_file_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_file_id_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct3 mercury__dir____vpti_tuple_3__plain_bool__type_ctor_info_bool_0__plain_io__type_ctor_info_res_0__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_res_0),
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_VA_PseudoTypeInfo_Struct3 mercury__dir____vpti_pred_3__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 mercury__dir____vpti_tuple_2__pseudo_1__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_state_0)
  }
};

const MR_TypeCtorInfo_Struct mercury__dir__dir__type_ctor_info_foldl_pred_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__dir____Unify____foldl_pred_1_0_10001)),
  ((MR_Box) (mercury__dir____Compare____foldl_pred_1_0_10001)),
  (MR_String) "dir",
  (MR_String) "foldl_pred",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__dir____vpti_pred_8__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0__plain_io__type_ctor_info_file_type_0__plain_bool__type_ctor_info_bool_0__pseudo_1__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0) },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_EnumFunctorDesc mercury__dir__dir__enum_functor_desc_make_single_directory_status_0_0 = {
  (MR_String) "ok",
  (MR_Integer) 0
};

static const MR_EnumFunctorDesc mercury__dir__dir__enum_functor_desc_make_single_directory_status_0_1 = {
  (MR_String) "name_exists",
  (MR_Integer) 1
};

static const MR_EnumFunctorDesc mercury__dir__dir__enum_functor_desc_make_single_directory_status_0_2 = {
  (MR_String) "dir_exists",
  (MR_Integer) 2
};

static const MR_EnumFunctorDesc mercury__dir__dir__enum_functor_desc_make_single_directory_status_0_3 = {
  (MR_String) "error",
  (MR_Integer) 3
};

static const MR_EnumFunctorDescPtr mercury__dir__dir__enum_value_ordered_make_single_directory_status_0[4] = {
  &mercury__dir__dir__enum_functor_desc_make_single_directory_status_0_0,
  &mercury__dir__dir__enum_functor_desc_make_single_directory_status_0_1,
  &mercury__dir__dir__enum_functor_desc_make_single_directory_status_0_2,
  &mercury__dir__dir__enum_functor_desc_make_single_directory_status_0_3
};

static const MR_EnumFunctorDescPtr mercury__dir__dir__enum_name_ordered_make_single_directory_status_0[4] = {
  &mercury__dir__dir__enum_functor_desc_make_single_directory_status_0_2,
  &mercury__dir__dir__enum_functor_desc_make_single_directory_status_0_3,
  &mercury__dir__dir__enum_functor_desc_make_single_directory_status_0_1,
  &mercury__dir__dir__enum_functor_desc_make_single_directory_status_0_0
};

static const MR_Integer mercury__dir__dir__functor_number_map_make_single_directory_status_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__dir__dir__type_ctor_info_make_single_directory_status_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__dir____Unify____make_single_directory_status_0_0_10001)),
  ((MR_Box) (mercury__dir____Compare____make_single_directory_status_0_0_10001)),
  (MR_String) "dir",
  (MR_String) "make_single_directory_status",
  {     mercury__dir__dir__enum_name_ordered_make_single_directory_status_0 },
  {     mercury__dir__dir__enum_value_ordered_make_single_directory_status_0 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  mercury__dir__dir__functor_number_map_make_single_directory_status_0
};

const MR_TypeCtorInfo_Struct mercury__dir__dir__type_ctor_info_stream_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__dir____Unify____stream_0_0_10001)),
  ((MR_Box) (mercury__dir____Compare____stream_0_0_10001)),
  (MR_String) "dir",
  (MR_String) "stream",
  {     NULL },
  {     NULL },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static MR_Integer MR_CALL 
mercury__dir__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    return (MR_Integer) 1200;
  }
}

void MR_CALL 
mercury__dir____Compare____stream_0_0(
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
mercury__dir____Unify____stream_0_0(
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

void MR_CALL 
mercury__dir____Compare____make_single_directory_status_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer Cast_HeadVar1_4 = (MR_Integer) (HeadVar__2_2);
    MR_Integer Cast_HeadVar2_5 = (MR_Integer) (HeadVar__3_3);

    succeeded = (Cast_HeadVar1_4 < Cast_HeadVar2_5);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Cast_HeadVar1_4 == Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__dir____Unify____make_single_directory_status_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
mercury__dir____Compare____foldl_pred_1_0(
  MR_Word TypeInfo_for_T_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (Cast_HeadVar1_4), (MR_Word) (Cast_HeadVar2_5));
  }
}

MR_bool MR_CALL 
mercury__dir____Unify____foldl_pred_1_0(
  MR_Word TypeInfo_for_T_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (Cast_HeadVar1_3), (MR_Word) (Cast_HeadVar2_4));
    return succeeded;
  }
}

MR_Word MR_CALL 
mercury__dir__expand_1_f_0(
  MR_Word Chars_3)
{
  {
    MR_Word HeadVar__2_2;

    HeadVar__2_2 = mercury__dir__expand_acc_2_f_0(Chars_3, (MR_Word) (MR_mkword(MR_mktag(1), &mercury__dir_scalar_common_1[6])));
    return HeadVar__2_2;
  }
}

void MR_CALL 
mercury__dir__foldl2_process_dir_aux_11_p_0(
  MR_Word TypeInfo_for_T_29,
  MR_Box Dir_12,
  MR_Word SymLinkParent_13,
  MR_Word P_14,
  MR_String DirName_15,
  MR_Word ParentIds_16,
  MR_Word Recursive_17,
  MR_Word FollowLinks_18,
  MR_Box STATE_VARIABLE_Data_0_23,
  MR_Tuple * HeadVar__9_9)
{
  {
    MR_Word Continue_20;
    MR_Word Res_21;
    MR_Box STATE_VARIABLE_Data_24;

    mercury__dir__foldl2_process_dir_entries_13_p_0(TypeInfo_for_T_29, Dir_12, SymLinkParent_13, P_14, DirName_15, ParentIds_16, Recursive_17, FollowLinks_18, &Continue_20, &Res_21, STATE_VARIABLE_Data_0_23, &STATE_VARIABLE_Data_24);
    {
      MR_Tuple base;
      base = (MR_Tuple) MR_new_object(MR_Tuple, (3 * sizeof(MR_Word)), NULL, NULL);
      *HeadVar__9_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Continue_20));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Res_21));
      MR_hl_field(MR_mktag(0), base, 2) = STATE_VARIABLE_Data_24;
    }
  }
}

void MR_CALL 
mercury__dir__foldl2_process_dir_entries_13_p_0(
  MR_Word TypeInfo_for_T_56,
  MR_Box Dir_14,
  MR_Word SymLinkParent_15,
  MR_Word P_16,
  MR_String DirName_17,
  MR_Word ParentIds_18,
  MR_Word Recursive_19,
  MR_Word FollowLinks_20,
  MR_Word * Continue_21,
  MR_Word * Res_22,
  MR_Box STATE_VARIABLE_Data_0_37,
  MR_Box * STATE_VARIABLE_Data_38)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word ReadRes_25;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__dir__read_entry_4_p_0(Dir_14, &ReadRes_25);
    switch (MR_tag((MR_Word) ReadRes_25)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          *Continue_21 = (MR_Integer) 1;
          *Res_22 = (MR_Word) ((MR_Unsigned) 0U);
          *STATE_VARIABLE_Data_38 = STATE_VARIABLE_Data_0_37;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String FileName_26 = ((MR_String) ((MR_hl_field(MR_mktag(1), ReadRes_25, (MR_Integer) 0))));
          MR_String PathName_27;
          MR_Word FileTypeRes_28;

          PathName_27 = mercury__dir__f_slash_2_f_0(DirName_17, FileName_26);
          mercury__io__file_type_5_p_0((MR_Integer) 0, PathName_27, &FileTypeRes_28);
          if (((MR_tag((MR_Word) FileTypeRes_28)) == (MR_Integer) 1))
          {
            MR_Word Error_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FileTypeRes_28, (MR_Integer) 0))));

            *Continue_21 = (MR_Integer) 0;
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *Res_22 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_36));
            }
            *STATE_VARIABLE_Data_38 = STATE_VARIABLE_Data_0_37;
          }
          else
          {
            MR_Word FileType_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FileTypeRes_28, (MR_Integer) 0))));
            MR_Word Continue0_30;
            MR_Box STATE_VARIABLE_Data_44_44;
            void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), P_16, (MR_Integer) 1))));
            MR_Box conv2_Continue0_30;
            MR_Box conv1_STATE_VARIABLE_IO_45_45;

            func_0(((MR_Box) (P_16)), ((MR_Box) (DirName_17)), ((MR_Box) (FileName_26)), ((MR_Box) (FileType_29)), &conv2_Continue0_30, STATE_VARIABLE_Data_0_37, &STATE_VARIABLE_Data_44_44, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_45_45);
            Continue0_30 = ((MR_Word) (conv2_Continue0_30));
            switch (Continue0_30) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *Continue_21 = (MR_Integer) 0;
                  *Res_22 = (MR_Word) ((MR_Unsigned) 0U);
                  *STATE_VARIABLE_Data_38 = STATE_VARIABLE_Data_44_44;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word Continue1_31;
                  MR_Word Res1_32;
                  MR_Box STATE_VARIABLE_Data_46_46;

                  succeeded = (Recursive_19 == (MR_Integer) 1);
                  if (succeeded)
                    succeeded = (FileType_29 == (MR_Integer) 1);
                  if (succeeded)
                    mercury__dir__foldl2_process_dir_12_p_0(TypeInfo_for_T_56, SymLinkParent_15, P_16, PathName_27, ParentIds_18, Recursive_19, FollowLinks_20, &Continue1_31, &Res1_32, STATE_VARIABLE_Data_44_44, &STATE_VARIABLE_Data_46_46);
                  else
                  {
                    succeeded = (Recursive_19 == (MR_Integer) 1);
                    if (succeeded)
                    {
                      succeeded = (FileType_29 == (MR_Integer) 2);
                      if (succeeded)
                        succeeded = (FollowLinks_20 == (MR_Integer) 1);
                    }
                    if (succeeded)
                    {
                      MR_Word TargetTypeRes_33;

                      mercury__io__file_type_5_p_0((MR_Integer) 1, PathName_27, &TargetTypeRes_33);
                      if (((MR_tag((MR_Word) TargetTypeRes_33)) == (MR_Integer) 1))
                      {
                        MR_Word TargetTypeError_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), TargetTypeRes_33, (MR_Integer) 0))));

                        Continue1_31 = (MR_Integer) 0;
                        {
                          Res1_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Res1_32, 0) = ((MR_Box) (TargetTypeError_35));
                        }
                        STATE_VARIABLE_Data_46_46 = STATE_VARIABLE_Data_44_44;
                      }
                      else
                      {
                        MR_Word TargetType_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TargetTypeRes_33, (MR_Integer) 0))));

                        switch (TargetType_34) {
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
                              Continue1_31 = (MR_Integer) 1;
                              Res1_32 = (MR_Word) ((MR_Unsigned) 0U);
                              STATE_VARIABLE_Data_46_46 = STATE_VARIABLE_Data_44_44;
                            }
                            break;
                          case (MR_Integer) 1:
                            {
                              mercury__dir__foldl2_process_dir_12_p_0(TypeInfo_for_T_56, (MR_Integer) 1, P_16, PathName_27, ParentIds_18, Recursive_19, FollowLinks_20, &Continue1_31, &Res1_32, STATE_VARIABLE_Data_44_44, &STATE_VARIABLE_Data_46_46);
                            }
                            break;
                        }
                      }
                    }
                    else
                    {
                      Continue1_31 = (MR_Integer) 1;
                      Res1_32 = (MR_Word) ((MR_Unsigned) 0U);
                      STATE_VARIABLE_Data_46_46 = STATE_VARIABLE_Data_44_44;
                    }
                  }
                  succeeded = (Continue1_31 == (MR_Integer) 1);
                  if (succeeded)
                    succeeded = (Res1_32 == (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    MR_Box next_value_of_STATE_VARIABLE_Data_0_37 = STATE_VARIABLE_Data_46_46;

                    // direct tailcall eliminated
                    ;
                    STATE_VARIABLE_Data_0_37 = next_value_of_STATE_VARIABLE_Data_0_37;
                    continue;
                  }
                  else
                  {
                    *Continue_21 = (MR_Integer) 0;
                    *Res_22 = Res1_32;
                    *STATE_VARIABLE_Data_38 = STATE_VARIABLE_Data_46_46;
                  }
                }
                break;
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Error_55 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ReadRes_25, (MR_Integer) 0))));

          *Continue_21 = (MR_Integer) 0;
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Res_22 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_55));
          }
          *STATE_VARIABLE_Data_38 = STATE_VARIABLE_Data_0_37;
        }
        break;
    }
    break;
  }
}

static void MR_CALL 
mercury__dir__read_entry_4_p_0(
  MR_Box Dir_5,
  MR_Word * Res_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Box MaybeWin32Error_8;
    MR_Word HaveFileName_9;
    MR_String FileName_10;
    MR_Word IOError_11;
    MR_String V_6_21;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__dir__read_entry_2_6_p_0(Dir_5, &MaybeWin32Error_8, &HaveFileName_9, &FileName_10);
{
#define MR_PROC_LABEL mercury__dir__read_entry_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MaybeWin32Error_8 , Error);
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      succeeded = MR_FALSE;
    else
    {
{
#define MR_PROC_LABEL mercury__dir__read_entry_4_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
      {
{
#define MR_PROC_LABEL mercury__dir__read_entry_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MaybeWin32Error_8 , Error);
	Msg0 =  (MR_String) "dir.foldl2: reading directory entry failed: " ;
		{

#ifdef MR_WIN32
    ML_make_win32_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);
#else
    MR_fatal_error("io.make_win32_err_msg called on non-Windows platform");
#endif


		;}
#undef MR_PROC_LABEL
	 V_6_21  = Msg;
}
      }
      else
      {
{
#define MR_PROC_LABEL mercury__dir__read_entry_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MaybeWin32Error_8 , Error);
	Msg0 =  (MR_String) "dir.foldl2: reading directory entry failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 V_6_21  = Msg;
}
      }
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      IOError_11 = (MR_Word) (V_6_21);
      succeeded = MR_TRUE;
    }
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Res_6 = base;
        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (IOError_11));
      }
    else
      switch (HaveFileName_9) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *Res_6 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          {
            succeeded = (strcmp(FileName_10, (MR_String) ".") == 0);
            if (!(succeeded))
            {
              succeeded = (strcmp(FileName_10, (MR_String) "..") == 0);
            }
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              continue;
            }
            else
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *Res_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (FileName_10));
              }
          }
          break;
      }
    break;
  }
}

static void MR_CALL 
mercury__dir__read_entry_2_6_p_0(
  MR_Box Dir_1,
  MR_Box * Error_2,
  MR_Word * HaveFileName_3,
  MR_String * FileName_4)
{
  {
{
#define MR_PROC_LABEL mercury__dir__read_entry_2_6_p_0

	ML_DIR_STREAM Dir;
	MR_Integer Error;
	MR_Word HaveFileName;
	MR_String FileName;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(ML_DIR_STREAM, Dir_1 , Dir);
		{

#if defined(MR_WIN32)
    WIN32_FIND_DATAW file_data;

    if (Dir->handle == INVALID_HANDLE_VALUE) {
        // Directory was empty when opened.
        Error = 0;
        HaveFileName = MR_NO;
        FileName = MR_make_string_const("");
    } else if (Dir->pending_entry != NULL) {
        // FindFirstFileW already returned the first entry.
        Error = 0;
        HaveFileName = MR_YES;
        FileName = Dir->pending_entry;
        Dir->pending_entry = NULL;
    } else if (FindNextFileW(Dir->handle, &file_data)) {
        Error = 0;
        HaveFileName = MR_YES;
        FileName = ML_wide_to_utf8(file_data.cFileName, MR_ALLOC_ID);
    } else {
        Error = GetLastError();
        if (Error == ERROR_NO_MORE_FILES) {
            Error = 0;
        }
        HaveFileName = MR_NO;
        FileName = MR_make_string_const("");
    }

#elif defined(MR_HAVE_READDIR) && defined(MR_HAVE_CLOSEDIR)
    struct dirent *dir_entry;

    errno = 0;          // to detect end-of-stream
    dir_entry = readdir(Dir);
    if (dir_entry == NULL) {
        Error = errno;  // remains zero at end-of-stream
        HaveFileName = MR_NO;
        FileName = MR_make_string_const("");
    } else {
        Error = 0;
        HaveFileName = MR_YES;
        MR_make_aligned_string_copy_msg(FileName, dir_entry->d_name,
            MR_ALLOC_ID);
    }

#else // !MR_WIN32 && !(MR_HAVE_READDIR etc.)
    Error = ENOSYS;
    HaveFileName = MR_NO;
    FileName = MR_make_string_const("");
#endif


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *Error_2 );
	 *HaveFileName_3  = HaveFileName;
	 *FileName_4  = FileName;
}
  }
}

static void MR_CALL 
mercury__dir__make_directory_including_parents_2_5_p_0(
  MR_String _DirName_1,
  MR_Box * Error_2,
  MR_Word * CheckAccess_3)
{
  {
{
#define MR_PROC_LABEL mercury__dir__make_directory_including_parents_2_5_p_0

	MR_Integer Error;
	MR_Word CheckAccess;

		{

    Error = ENOSYS;
    CheckAccess = MR_NO;


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *Error_2 );
	 *CheckAccess_3  = CheckAccess;
}
  }
}

MR_Char MR_CALL 
mercury__dir__alt_directory_separator_0_f_0(void)
{
  {
    MR_bool succeeded;
    MR_Char HeadVar__1_1;

{
#define MR_PROC_LABEL mercury__dir__alt_directory_separator_0_f_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_CYGWIN)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      HeadVar__1_1 = (MR_Char) 92;
    else
      HeadVar__1_1 = (MR_Char) 47;
    return HeadVar__1_1;
  }
}

MR_bool MR_CALL 
mercury__dir__use_windows_paths_0_p_0(void)
{
  {
    MR_bool succeeded;
    MR_Char Var_1;

{
#define MR_PROC_LABEL mercury__dir__use_windows_paths_0_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      Var_1 = (MR_Char) 92;
    else
      Var_1 = (MR_Char) 47;
    succeeded = (Var_1 == (MR_Char) 92);
    return succeeded;
  }
}

MR_Word MR_CALL 
mercury__dir__expand_braces_1_f_0(
  MR_String ArgStr_3)
{
  {
    MR_Word ExpandStrs_4;
    MR_Word ArgChar_5;
    MR_Word ExpandChars_6;

    mercury__string__to_char_list_2_p_0(ArgStr_3, &ArgChar_5);
    ExpandChars_6 = mercury__dir__expand_acc_2_f_0(ArgChar_5, (MR_Word) (MR_mkword(MR_mktag(1), &mercury__dir_scalar_common_1[6])));
    ExpandStrs_4 = mercury__dir__map__ho12_2_f_in__list_0(ExpandChars_6);
    return ExpandStrs_4;
  }
}

static MR_Word MR_CALL 
mercury__dir__map__ho12_2_f_in__list_0(
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word V_6_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word V_7_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_String V_8_8;
      MR_Word V_9_9;

      mercury__string__from_char_list_2_p_0(V_6_6, &V_8_8);
      V_9_9 = mercury__dir__map__ho12_2_f_in__list_0(V_7_7);
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (V_8_8));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (V_9_9));
      }
    }
    return HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__dir__expand_acc_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word HeadVar__3_3;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = HeadVar__2_2;
    else
    {
      MR_Char Char_5 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Chars_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));

      succeeded = (Char_5 == (MR_Char) 123);
      if (succeeded)
      {
        MR_Word Alternatives0_9;
        MR_Word Left_10;
        MR_Word AlternativeLists_11;
        MR_Word Alternatives_12;
        MR_Word PrefixLists_13;
        MR_Word Prefixes1_14;
        MR_Word V_5_38;
        MR_Word V_5_47;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_HeadVar__2_2;

        mercury__dir__find_matching_brace_or_comma_6_p_0(Chars_6, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, &Alternatives0_9, &Left_10);
        AlternativeLists_11 = mercury__dir__map__ho7_2_f_in__list_0(Alternatives0_9);
        mercury__list__reverse_2_p_0((MR_Word) (&mercury__dir_scalar_common_1[7]), AlternativeLists_11, &V_5_38);
        mercury__list__condense_acc_3_p_0((MR_Word) (&mercury__dir_scalar_common_1[0]), V_5_38, (MR_Word) ((MR_Unsigned) 0U), &Alternatives_12);
        PrefixLists_13 = mercury__dir__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_95_95_91_50_93_95_48_2_f_in__list_0(Alternatives_12, HeadVar__2_2);
        mercury__list__reverse_2_p_0((MR_Word) (&mercury__dir_scalar_common_1[7]), PrefixLists_13, &V_5_47);
        mercury__list__condense_acc_3_p_0((MR_Word) (&mercury__dir_scalar_common_1[0]), V_5_47, (MR_Word) ((MR_Unsigned) 0U), &Prefixes1_14);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Left_10;
        next_value_of_HeadVar__2_2 = Prefixes1_14;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
      else
      {
        MR_Word Prefixes1_18;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_HeadVar__2_2;

        Prefixes1_18 = mercury__dir__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_53_95_95_91_50_93_95_48_2_f_in__list_0(Char_5, HeadVar__2_2);
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__1_1 = Chars_6;
        next_value_of_HeadVar__2_2 = Prefixes1_18;
        HeadVar__1_1 = next_value_of_HeadVar__1_1;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        continue;
      }
    }
    return HeadVar__3_3;
    break;
  }
}

static MR_Word MR_CALL 
mercury__dir__map__ho7_2_f_in__list_0(
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word V_6_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word V_7_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word V_8_8;
      MR_Word V_9_9;

      V_8_8 = mercury__dir__expand_acc_2_f_0(V_6_6, (MR_Word) (MR_mkword(MR_mktag(1), &mercury__dir_scalar_common_1[6])));
      V_9_9 = mercury__dir__map__ho7_2_f_in__list_0(V_7_7);
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (V_8_8));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (V_9_9));
      }
    }
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__dir__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_95_95_91_50_93_95_48_2_f_in__list_0(
  MR_Word Var_12,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word V_6_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word V_7_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word V_8_8;
      MR_Word V_9_9;

      V_8_8 = mercury__dir__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_52_95_95_91_50_93_95_48_2_f_in__list_0(V_6_6, Var_12);
      V_9_9 = mercury__dir__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_95_95_91_50_93_95_48_2_f_in__list_0(Var_12, V_7_7);
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (V_8_8));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (V_9_9));
      }
    }
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__dir__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_52_95_95_91_50_93_95_48_2_f_in__list_0(
  MR_Word Var_12,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word V_6_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word V_7_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word V_8_8;
      MR_Word V_9_9;

      mercury__list__append_3_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), Var_12, V_6_6, &V_8_8);
      V_9_9 = mercury__dir__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_52_95_95_91_50_93_95_48_2_f_in__list_0(Var_12, V_7_7);
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (V_8_8));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (V_9_9));
      }
    }
    return HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__dir__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_53_95_95_91_50_93_95_48_2_f_in__list_0(
  MR_Char Var_12,
  MR_Word HeadVar__2_2)
{
  {
    MR_Word HeadVar__3_3;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word V_6_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word V_7_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word V_8_8;
      MR_Word V_9_9;
      MR_Word Var_15;

      {
        Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Var_15, 0) = ((MR_Box) (MR_Word) (Var_12));
        MR_hl_field(MR_mktag(1), Var_15, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__list__append_3_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), V_6_6, Var_15, &V_8_8);
      V_9_9 = mercury__dir__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_53_95_95_91_50_93_95_48_2_f_in__list_0(Var_12, V_7_7);
      {
        HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (V_8_8));
        MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (V_9_9));
      }
    }
    return HeadVar__3_3;
  }
}

static void MR_CALL 
mercury__dir__find_matching_brace_or_comma_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Alternatives0_2,
  MR_Word CurAlternative_3,
  MR_Integer BraceLevel_4,
  MR_Word * Alternatives_5,
  MR_Word * Left_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      {
        mercury__exception__throw_1_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), ((MR_Box) ((MR_String) "no matching brace")));
        return;
      }
    }
    else
    {
      MR_Char Char_13 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Chars_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));

      succeeded = (Char_13 == (MR_Char) 125);
      if (succeeded)
      {
        succeeded = (BraceLevel_4 == (MR_Integer) 0);
        if (succeeded)
        {
          MR_Word Var_21;

          {
            Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_21, 0) = ((MR_Box) (CurAlternative_3));
            MR_hl_field(MR_mktag(1), Var_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__list__append_3_p_1((MR_Word) (&mercury__dir_scalar_common_1[0]), Alternatives0_2, Var_21, Alternatives_5);
          *Left_6 = Chars_14;
        }
        else
        {
          MR_Word Var_23;
          MR_Integer Var_24;
          MR_Word Var_25;
          MR_Word next_value_of_HeadVar__1_1;
          MR_Word next_value_of_CurAlternative_3;
          MR_Integer next_value_of_BraceLevel_4;

          {
            Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_25, 0) = ((MR_Box) (MR_Word) (Char_13));
            MR_hl_field(MR_mktag(1), Var_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__list__append_3_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), CurAlternative_3, Var_25, &Var_23);
          Var_24 = (MR_Integer) ((MR_Unsigned) BraceLevel_4 - (MR_Unsigned) (MR_Integer) 1);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = Chars_14;
          next_value_of_CurAlternative_3 = Var_23;
          next_value_of_BraceLevel_4 = Var_24;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          CurAlternative_3 = next_value_of_CurAlternative_3;
          BraceLevel_4 = next_value_of_BraceLevel_4;
          continue;
        }
      }
      else
      {
        succeeded = (Char_13 == (MR_Char) 123);
        if (succeeded)
        {
          MR_Word Var_28;
          MR_Integer Var_29;
          MR_Word Var_30;
          MR_Word next_value_of_HeadVar__1_1;
          MR_Word next_value_of_CurAlternative_3;
          MR_Integer next_value_of_BraceLevel_4;

          {
            Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_30, 0) = ((MR_Box) (MR_Word) (Char_13));
            MR_hl_field(MR_mktag(1), Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__list__append_3_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), CurAlternative_3, Var_30, &Var_28);
          Var_29 = (MR_Integer) ((MR_Unsigned) BraceLevel_4 + (MR_Unsigned) (MR_Integer) 1);
          // direct tailcall eliminated
          ;
          next_value_of_HeadVar__1_1 = Chars_14;
          next_value_of_CurAlternative_3 = Var_28;
          next_value_of_BraceLevel_4 = Var_29;
          HeadVar__1_1 = next_value_of_HeadVar__1_1;
          CurAlternative_3 = next_value_of_CurAlternative_3;
          BraceLevel_4 = next_value_of_BraceLevel_4;
          continue;
        }
        else
        {
          succeeded = (Char_13 == (MR_Char) 44);
          if (succeeded)
          {
            succeeded = (BraceLevel_4 == (MR_Integer) 0);
            if (succeeded)
            {
              MR_Word Alternatives1_20;
              MR_Word Var_33;
              MR_Word next_value_of_HeadVar__1_1;
              MR_Word next_value_of_Alternatives0_2;

              {
                Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (CurAlternative_3));
                MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__list__append_3_p_1((MR_Word) (&mercury__dir_scalar_common_1[0]), Alternatives0_2, Var_33, &Alternatives1_20);
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__1_1 = Chars_14;
              next_value_of_Alternatives0_2 = Alternatives1_20;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              Alternatives0_2 = next_value_of_Alternatives0_2;
              CurAlternative_3 = (MR_Word) ((MR_Unsigned) 0U);
              continue;
            }
            else
            {
              MR_Word Var_36;
              MR_Word Var_37;
              MR_Word next_value_of_HeadVar__1_1;
              MR_Word next_value_of_CurAlternative_3;

              {
                Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (MR_Word) (Char_13));
                MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              mercury__list__append_3_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), CurAlternative_3, Var_37, &Var_36);
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__1_1 = Chars_14;
              next_value_of_CurAlternative_3 = Var_36;
              HeadVar__1_1 = next_value_of_HeadVar__1_1;
              CurAlternative_3 = next_value_of_CurAlternative_3;
              continue;
            }
          }
          else
          {
            MR_Word Var_39;
            MR_Word Var_40;
            MR_Word next_value_of_HeadVar__1_1;
            MR_Word next_value_of_CurAlternative_3;

            {
              Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (MR_Word) (Char_13));
              MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
            }
            mercury__list__append_3_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), CurAlternative_3, Var_40, &Var_39);
            // direct tailcall eliminated
            ;
            next_value_of_HeadVar__1_1 = Chars_14;
            next_value_of_CurAlternative_3 = Var_39;
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            CurAlternative_3 = next_value_of_CurAlternative_3;
            continue;
          }
        }
      }
    }
    break;
  }
}

void MR_CALL 
mercury__dir__recursive_foldl2_7_p_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word P_8,
  MR_String DirName_9,
  MR_Word FollowLinks_10,
  MR_Box Data0_11,
  MR_Word * Res_12)
{
  {
    MR_Word Res0_15;
    MR_Box Data_16;
    MR_String Var_21;
    MR_Word Var_14;

    Var_21 = mercury__dir__fixup_dirname_1_f_0(DirName_9);
    mercury__dir__foldl2_process_dir_12_p_0(TypeInfo_for_T_25, (MR_Integer) 0, P_8, Var_21, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 1, FollowLinks_10, &Var_14, &Res0_15, Data0_11, &Data_16);
    if ((Res0_15 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *Res_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = Data_16;
      }
    else
    {
      MR_Word Error_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Res0_15, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Res_12 = base;
        MR_hl_field(MR_mktag(1), base, 0) = Data_16;
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Error_17));
      }
    }
  }
}

void MR_CALL 
mercury__dir__foldl2_6_p_0(
  MR_Word TypeInfo_for_T_24,
  MR_Word P_7,
  MR_String DirName_8,
  MR_Box Data0_9,
  MR_Word * Res_10)
{
  {
    MR_Word Res0_13;
    MR_Box Data_14;
    MR_String Var_19;
    MR_Word Var_12;

    Var_19 = mercury__dir__fixup_dirname_1_f_0(DirName_8);
    mercury__dir__foldl2_process_dir_12_p_0(TypeInfo_for_T_24, (MR_Integer) 0, P_7, Var_19, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, (MR_Integer) 0, &Var_12, &Res0_13, Data0_9, &Data_14);
    if ((Res0_13 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *Res_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = Data_14;
      }
    else
    {
      MR_Word Error_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Res0_13, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *Res_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = Data_14;
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (Error_15));
      }
    }
  }
}

static void MR_CALL 
mercury__dir__foldl2_process_dir_12_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1)
{
  {
    MR_Box closure = closure_arg;
    MR_Tuple conv1_V_3_6;

    mercury__exception__unsafe_call_io_goal_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), &conv1_V_3_6);
    *wrapper_arg_1 = ((MR_Box) (conv1_V_3_6));
  }
}

static void MR_CALL 
mercury__dir__foldl2_process_dir_12_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Tuple conv0_HeadVar__9_9;

    mercury__dir__foldl2_process_dir_aux_11_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Box) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 5)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 6)))), ((MR_String) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 7)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 8)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 9)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 10)))), (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 11)), &conv0_HeadVar__9_9);
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__9_9));
  }
}

void MR_CALL 
mercury__dir__foldl2_process_dir_12_p_0(
  MR_Word TypeInfo_for_T_48,
  MR_Word SymLinkParent_13,
  MR_Word P_14,
  MR_String DirName_15,
  MR_Word ParentIds0_16,
  MR_Word Recursive_17,
  MR_Word FollowLinks_18,
  MR_Word * Continue_19,
  MR_Word * Result_20,
  MR_Box STATE_VARIABLE_Data_0_32,
  MR_Box * STATE_VARIABLE_Data_33)
{
  {
    MR_bool succeeded = (Recursive_17 == (MR_Integer) 1);
    MR_Word LoopRes_23;
    MR_Word ParentIds_24;

    if (succeeded)
      succeeded = (FollowLinks_18 == (MR_Integer) 1);
    if (succeeded)
      mercury__dir__check_for_symlink_loop_7_p_0(SymLinkParent_13, DirName_15, &LoopRes_23, ParentIds0_16, &ParentIds_24);
    else
    {
      ParentIds_24 = ParentIds0_16;
      LoopRes_23 = (MR_Word) (&mercury__dir_scalar_common_5[0]);
    }
    if (((MR_tag((MR_Word) LoopRes_23)) == (MR_Integer) 1))
    {
      MR_Word Error_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), LoopRes_23, (MR_Integer) 0))));

      *Continue_19 = (MR_Integer) 0;
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_20 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_47));
      }
      *STATE_VARIABLE_Data_33 = STATE_VARIABLE_Data_0_32;
    }
    else
    {
      MR_Word Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), LoopRes_23, (MR_Integer) 0))));

      switch (Var_62) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word OpenResult_25;

            mercury__dir__open_4_p_0(DirName_15, &OpenResult_25);
            switch (MR_tag((MR_Word) OpenResult_25)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *Continue_19 = (MR_Integer) 1;
                  *Result_20 = (MR_Word) ((MR_Unsigned) 0U);
                  *STATE_VARIABLE_Data_33 = STATE_VARIABLE_Data_0_32;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Box Dir_26 = ((MR_Box) ((MR_hl_field(MR_mktag(1), OpenResult_25, (MR_Integer) 0))));
                  MR_Word TryResult_27;
                  MR_Word CloseRes_28;
                  MR_Word TypeInfo_56_56;
                  MR_Word TypeInfo_21_78;
                  MR_Word Var_41;
                  MR_Word V_13_67;
                  MR_Word V_9_69;
                  MR_Word conv2_V_9_69;

                  {
                    Var_41 = (MR_Word) MR_new_object(MR_Word, (12 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Var_41, 0) = ((MR_Box) (&mercury__dir_scalar_common_7[0]));
                    MR_hl_field(MR_mktag(0), Var_41, 1) = ((MR_Box) (mercury__dir__foldl2_process_dir_12_p_0_1));
                    MR_hl_field(MR_mktag(0), Var_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                    MR_hl_field(MR_mktag(0), Var_41, 3) = ((MR_Box) (TypeInfo_for_T_48));
                    MR_hl_field(MR_mktag(0), Var_41, 4) = ((MR_Box) (Dir_26));
                    MR_hl_field(MR_mktag(0), Var_41, 5) = ((MR_Box) (SymLinkParent_13));
                    MR_hl_field(MR_mktag(0), Var_41, 6) = ((MR_Box) (P_14));
                    MR_hl_field(MR_mktag(0), Var_41, 7) = ((MR_Box) (DirName_15));
                    MR_hl_field(MR_mktag(0), Var_41, 8) = ((MR_Box) (ParentIds_24));
                    MR_hl_field(MR_mktag(0), Var_41, 9) = ((MR_Box) (Recursive_17));
                    MR_hl_field(MR_mktag(0), Var_41, 10) = ((MR_Box) (FollowLinks_18));
                    MR_hl_field(MR_mktag(0), Var_41, 11) = STATE_VARIABLE_Data_0_32;
                  }
                  {
                    TypeInfo_56_56 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), TypeInfo_56_56, 0) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0));
                    MR_hl_field(MR_mktag(0), TypeInfo_56_56, 1) = ((MR_Box) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(0), TypeInfo_56_56, 2) = ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0));
                    MR_hl_field(MR_mktag(0), TypeInfo_56_56, 3) = ((MR_Box) (&mercury__io__io__type_ctor_info_res_0));
                    MR_hl_field(MR_mktag(0), TypeInfo_56_56, 4) = ((MR_Box) (TypeInfo_for_T_48));
                  }
                  {
                    V_13_67 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), V_13_67, 0) = ((MR_Box) (&mercury__dir_scalar_common_8[0]));
                    MR_hl_field(MR_mktag(0), V_13_67, 1) = ((MR_Box) (mercury__dir__foldl2_process_dir_12_p_0_2));
                    MR_hl_field(MR_mktag(0), V_13_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(0), V_13_67, 3) = ((MR_Box) (TypeInfo_56_56));
                    MR_hl_field(MR_mktag(0), V_13_67, 4) = ((MR_Box) (Var_41));
                    MR_hl_field(MR_mktag(0), V_13_67, 5) = NULL;
                  }
                  {
                    TypeInfo_21_78 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), TypeInfo_21_78, 0) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0));
                    MR_hl_field(MR_mktag(0), TypeInfo_21_78, 1) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), TypeInfo_21_78, 2) = ((MR_Box) (TypeInfo_56_56));
                    MR_hl_field(MR_mktag(0), TypeInfo_21_78, 3) = ((MR_Box) (&mercury__io__io__type_ctor_info_state_0));
                  }
                  mercury__exception__try_2_p_0(TypeInfo_21_78, (MR_Word) (V_13_67), &conv2_V_9_69);
                  V_9_69 = (MR_Word) (conv2_V_9_69);
                  if (((MR_tag((MR_Word) V_9_69)) == (MR_Integer) 2))
                  {
                    TryResult_27 = (MR_Word) (V_9_69);
                  }
                  else
                  {
                    MR_Tuple V_14_70 = ((MR_Tuple) ((MR_hl_field(MR_mktag(1), V_9_69, (MR_Integer) 0))));
                    MR_Tuple V_10_71 = ((MR_Tuple) ((MR_hl_field(MR_mktag(0), V_14_70, (MR_Integer) 0))));

                    {
                      TryResult_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), TryResult_27, 0) = ((MR_Box) (V_10_71));
                    }
                  }
                  mercury__dir__close_4_p_0(Dir_26, &CloseRes_28);
                  if (((MR_tag((MR_Word) TryResult_27)) == (MR_Integer) 2))
                  {
                    MR_Word TypeInfo_61_61;

                    {
                      TypeInfo_61_61 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), TypeInfo_61_61, 0) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0));
                      MR_hl_field(MR_mktag(0), TypeInfo_61_61, 1) = ((MR_Box) ((MR_Integer) 3));
                      MR_hl_field(MR_mktag(0), TypeInfo_61_61, 2) = ((MR_Box) (&mercury__bool__bool__type_ctor_info_bool_0));
                      MR_hl_field(MR_mktag(0), TypeInfo_61_61, 3) = ((MR_Box) (&mercury__io__io__type_ctor_info_res_0));
                      MR_hl_field(MR_mktag(0), TypeInfo_61_61, 4) = ((MR_Box) (TypeInfo_for_T_48));
                    }
                    {
                      mercury__exception__rethrow_1_p_0(TypeInfo_61_61, (MR_Word) (TryResult_27));
                      return;
                    }
                  }
                  else
                  {
                    MR_Word Result1_29;
                    MR_Tuple Var_44 = ((MR_Tuple) ((MR_hl_field(MR_mktag(1), TryResult_27, (MR_Integer) 0))));

                    *Continue_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_44, (MR_Integer) 0))));
                    Result1_29 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Var_44, (MR_Integer) 1))));
                    *STATE_VARIABLE_Data_33 = (MR_hl_field(MR_mktag(0), Var_44, (MR_Integer) 2));
                    if ((Result1_29 == (MR_Word) ((MR_Unsigned) 0U)))
                      *Result_20 = CloseRes_28;
                    else
                      *Result_20 = Result1_29;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word Error_46 = ((MR_Word) ((MR_hl_field(MR_mktag(2), OpenResult_25, (MR_Integer) 0))));

                  *Continue_19 = (MR_Integer) 0;
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *Result_20 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_46));
                  }
                  *STATE_VARIABLE_Data_33 = STATE_VARIABLE_Data_0_32;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            *Continue_19 = (MR_Integer) 1;
            *Result_20 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_Data_33 = STATE_VARIABLE_Data_0_32;
          }
          break;
      }
    }
  }
}

void MR_CALL 
mercury__dir__close_4_p_0(
  MR_Box Dir_5,
  MR_Word * Res_6)
{
  {
    MR_bool succeeded;
    MR_Box MaybeWin32Error_8;
    MR_Word IOError_9;
    MR_String V_6_16;

    mercury__dir__close_2_4_p_0(Dir_5, &MaybeWin32Error_8);
{
#define MR_PROC_LABEL mercury__dir__close_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MaybeWin32Error_8 , Error);
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      succeeded = MR_FALSE;
    else
    {
{
#define MR_PROC_LABEL mercury__dir__close_4_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
      {
{
#define MR_PROC_LABEL mercury__dir__close_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MaybeWin32Error_8 , Error);
	Msg0 =  (MR_String) "dir.foldl2: closing directory failed: " ;
		{

#ifdef MR_WIN32
    ML_make_win32_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);
#else
    MR_fatal_error("io.make_win32_err_msg called on non-Windows platform");
#endif


		;}
#undef MR_PROC_LABEL
	 V_6_16  = Msg;
}
      }
      else
      {
{
#define MR_PROC_LABEL mercury__dir__close_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MaybeWin32Error_8 , Error);
	Msg0 =  (MR_String) "dir.foldl2: closing directory failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 V_6_16  = Msg;
}
      }
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      IOError_9 = (MR_Word) (V_6_16);
      succeeded = MR_TRUE;
    }
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Res_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOError_9));
      }
    else
      *Res_6 = (MR_Word) ((MR_Unsigned) 0U);
  }
}

void MR_CALL 
mercury__dir__close_2_4_p_0(
  MR_Box Dir_1,
  MR_Box * Error_2)
{
  {
{
#define MR_PROC_LABEL mercury__dir__close_2_4_p_0

	ML_DIR_STREAM Dir;
	MR_Integer Error;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(ML_DIR_STREAM, Dir_1 , Dir);
		{

#if defined(MR_WIN32)
    if (Dir->handle == INVALID_HANDLE_VALUE) {
        Error = 0;
    } else if (FindClose(Dir->handle)) {
        Dir->handle = INVALID_HANDLE_VALUE;
        Error = 0;
    } else {
        Error = GetLastError();
    }
#elif defined(MR_HAVE_CLOSEDIR)
    if (closedir(Dir) == 0) {
        Error = 0;
    } else {
        Error = errno;
    }
#else
    Error = ENOSYS;
#endif


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *Error_2 );
}
  }
}

void MR_CALL 
mercury__dir__open_4_p_0(
  MR_String DirName_5,
  MR_Word * Res_6)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__dir__open_4_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      MR_Word Res0_8;
      MR_Word FileTypeRes_23;

      mercury__io__file_type_5_p_0((MR_Integer) 1, DirName_5, &FileTypeRes_23);
      if (((MR_tag((MR_Word) FileTypeRes_23)) == (MR_Integer) 1))
      {
        MR_Word Error_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FileTypeRes_23, (MR_Integer) 0))));

        {
          Res0_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Res0_8, 0) = ((MR_Box) (Error_25));
        }
      }
      else
      {
        MR_Word FileType_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), FileTypeRes_23, (MR_Integer) 0))));

        switch (FileType_24) {
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
            Res0_8 = (MR_Word) (MR_mkword(MR_mktag(1), &mercury__dir_scalar_common_5[1]));
            break;
          case (MR_Integer) 1:
            {
              mercury__io__check_file_accessibility_5_p_0(DirName_5, (MR_Word) (MR_mkword(MR_mktag(1), &mercury__dir_scalar_common_1[4])), &Res0_8);
            }
            break;
        }
      }
      if ((Res0_8 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_String DirPattern_9;
        MR_Box Dir_45;
        MR_Box MaybeWin32Error_46;
        MR_Word IOError_47;
        MR_String V_6_52;

        DirPattern_9 = mercury__dir__f_slash_2_f_0(DirName_5, (MR_String) "*");
        mercury__dir__open_3_6_p_0(DirName_5, DirPattern_9, &Dir_45, &MaybeWin32Error_46);
{
#define MR_PROC_LABEL mercury__dir__open_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MaybeWin32Error_46 , Error);
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
        if (succeeded)
          succeeded = MR_FALSE;
        else
        {
{
#define MR_PROC_LABEL mercury__dir__open_4_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
          if (succeeded)
          {
{
#define MR_PROC_LABEL mercury__dir__open_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MaybeWin32Error_46 , Error);
	Msg0 =  (MR_String) "cannot open directory: " ;
		{

#ifdef MR_WIN32
    ML_make_win32_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);
#else
    MR_fatal_error("io.make_win32_err_msg called on non-Windows platform");
#endif


		;}
#undef MR_PROC_LABEL
	 V_6_52  = Msg;
}
          }
          else
          {
{
#define MR_PROC_LABEL mercury__dir__open_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MaybeWin32Error_46 , Error);
	Msg0 =  (MR_String) "cannot open directory: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 V_6_52  = Msg;
}
          }
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          IOError_47 = (MR_Word) (V_6_52);
          succeeded = MR_TRUE;
        }
        if (succeeded)
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Res_6 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (IOError_47));
          }
        else
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Res_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Dir_45));
          }
      }
      else
      {
        MR_Word Error_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Res0_8, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Res_6 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (Error_10));
        }
      }
    }
    else
    {
      MR_Box Dir_62;
      MR_Box MaybeWin32Error_63;
      MR_Word IOError_64;
      MR_String V_6_69;

      mercury__dir__open_3_6_p_0(DirName_5, (MR_String) "", &Dir_62, &MaybeWin32Error_63);
{
#define MR_PROC_LABEL mercury__dir__open_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MaybeWin32Error_63 , Error);
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = MR_FALSE;
      else
      {
{
#define MR_PROC_LABEL mercury__dir__open_4_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
        if (succeeded)
        {
{
#define MR_PROC_LABEL mercury__dir__open_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MaybeWin32Error_63 , Error);
	Msg0 =  (MR_String) "cannot open directory: " ;
		{

#ifdef MR_WIN32
    ML_make_win32_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);
#else
    MR_fatal_error("io.make_win32_err_msg called on non-Windows platform");
#endif


		;}
#undef MR_PROC_LABEL
	 V_6_69  = Msg;
}
        }
        else
        {
{
#define MR_PROC_LABEL mercury__dir__open_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MaybeWin32Error_63 , Error);
	Msg0 =  (MR_String) "cannot open directory: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 V_6_69  = Msg;
}
        }
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        IOError_64 = (MR_Word) (V_6_69);
        succeeded = MR_TRUE;
      }
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Res_6 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (IOError_64));
        }
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Res_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Dir_62));
        }
    }
  }
}

static void MR_CALL 
mercury__dir__open_3_6_p_0(
  MR_String DirName_1,
  MR_String DirPattern_2,
  MR_Box * Dir_3,
  MR_Box * Error_4)
{
  {
{
#define MR_PROC_LABEL mercury__dir__open_3_6_p_0

	MR_String DirName;
	MR_String DirPattern;
	ML_DIR_STREAM Dir;
	MR_Integer Error;

	DirName =  DirName_1 ;
	DirPattern =  DirPattern_2 ;
		{

#if defined(MR_WIN32)
    WIN32_FIND_DATAW    file_data;

    Dir = MR_GC_NEW_ATTRIB(struct ML_DIR_STREAM, MR_ALLOC_ID);

    Dir->handle = FindFirstFileW(ML_utf8_to_wide(DirPattern), &file_data);
    if (Dir->handle == INVALID_HANDLE_VALUE) {
        Error = GetLastError();
        if (Error == ERROR_NO_MORE_FILES) {
            Error = 0;
        }
        Dir->pending_entry = NULL;
    } else {
        Error = 0;
        Dir->pending_entry = ML_wide_to_utf8(file_data.cFileName, MR_ALLOC_ID);
    }

#elif defined(MR_HAVE_OPENDIR) && defined(MR_HAVE_READDIR) && \
        defined(MR_HAVE_CLOSEDIR)

    Dir = opendir(DirName);
    if (Dir == NULL) {
        Error = errno;
    } else {
        Error = 0;
    }

#else // !MR_WIN32 && !(MR_HAVE_OPENDIR etc.)
    Dir = NULL;
    Error = ENOSYS;
#endif


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(ML_DIR_STREAM, Dir, *Dir_3 );
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *Error_4 );
}
  }
}

void MR_CALL 
mercury__dir__check_for_symlink_loop_7_p_0(
  MR_Word SymLinkParent_8,
  MR_String DirName_9,
  MR_Word * LoopRes_10,
  MR_Word STATE_VARIABLE_ParentIds_0_17,
  MR_Word * STATE_VARIABLE_ParentIds_18)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__dir__check_for_symlink_loop_7_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_HAVE_SYMLINK) && defined(MR_HAVE_READLINK)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      MR_Word IdRes_13;

      mercury__io__file_id_4_p_0(DirName_9, &IdRes_13);
      if (((MR_tag((MR_Word) IdRes_13)) == (MR_Integer) 1))
      {
        *LoopRes_10 = (MR_Word) (IdRes_13);
        *STATE_VARIABLE_ParentIds_18 = STATE_VARIABLE_ParentIds_0_17;
      }
      else
      {
        MR_Box Id_14 = ((MR_Box) ((MR_hl_field(MR_mktag(0), IdRes_13, (MR_Integer) 0))));
        MR_Word Loop_15;
        MR_Word TypeCtorInfo_24_24;

        succeeded = (SymLinkParent_8 == (MR_Integer) 1);
        if (succeeded)
        {
          TypeCtorInfo_24_24 = (MR_Word) (&mercury__io__io__type_ctor_info_file_id_0);
          succeeded = mercury__list__member_2_p_0(TypeCtorInfo_24_24, ((MR_Box) (Id_14)), STATE_VARIABLE_ParentIds_0_17);
        }
        if (succeeded)
        {
          Loop_15 = (MR_Integer) 1;
          *STATE_VARIABLE_ParentIds_18 = STATE_VARIABLE_ParentIds_0_17;
        }
        else
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_ParentIds_18 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Id_14));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_ParentIds_0_17));
          }
          Loop_15 = (MR_Integer) 0;
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          *LoopRes_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Loop_15));
        }
      }
    }
    else
    {
      *LoopRes_10 = (MR_Word) (&mercury__dir_scalar_common_5[0]);
      *STATE_VARIABLE_ParentIds_18 = STATE_VARIABLE_ParentIds_0_17;
    }
  }
}

MR_String MR_CALL 
mercury__dir__fixup_dirname_1_f_0(
  MR_String Dir0_3)
{
  {
    MR_bool succeeded;
    MR_String Dir_4;
    MR_Word DirChars_5;
    MR_Word Var_6;

    mercury__string__to_char_list_2_p_0(Dir0_3, &Var_6);
    DirChars_5 = mercury__dir__canonicalize_path_chars_1_f_0(Var_6);
    succeeded = mercury__dir__is_root_directory_1_p_0(DirChars_5);
    if (succeeded)
      Dir_4 = Dir0_3;
    else
    {
      MR_Word Var_7;
      MR_Word Chars1_11;
      MR_Char Sep_12;
      MR_Box conv0_Sep_12;

      succeeded = mercury__list__split_last_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), DirChars_5, &Chars1_11, &conv0_Sep_12);
      if (succeeded)
      {
        Sep_12 = ((MR_Char) (MR_Word) conv0_Sep_12);
        succeeded = MR_TRUE;
      }
      if (succeeded)
        succeeded = mercury__dir__is_directory_separator_1_p_0(Sep_12);
      if (succeeded)
        Var_7 = Chars1_11;
      else
        Var_7 = DirChars_5;
      mercury__string__from_char_list_2_p_0(Var_7, &Dir_4);
    }
    return Dir_4;
  }
}

void MR_CALL 
mercury__dir__make_single_directory_4_p_0(
  MR_String DirName_5,
  MR_Word * Result_6)
{
  {
    MR_bool succeeded;
    MR_Word Status_8;
    MR_Box MaybeWin32Error_9;

    mercury__dir__make_single_directory_2_5_p_0(DirName_5, &Status_8, &MaybeWin32Error_9);
    switch (Status_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
      case (MR_Integer) 3:
      case (MR_Integer) 1:
        {
          MR_String Message_10;
          MR_Word Var_15;

{
#define MR_PROC_LABEL mercury__dir__make_single_directory_4_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
          if (succeeded)
          {
{
#define MR_PROC_LABEL mercury__dir__make_single_directory_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MaybeWin32Error_9 , Error);
	Msg0 =  (MR_String) "cannot create directory: " ;
		{

#ifdef MR_WIN32
    ML_make_win32_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);
#else
    MR_fatal_error("io.make_win32_err_msg called on non-Windows platform");
#endif


		;}
#undef MR_PROC_LABEL
	 Message_10  = Msg;
}
          }
          else
          {
{
#define MR_PROC_LABEL mercury__dir__make_single_directory_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MaybeWin32Error_9 , Error);
	Msg0 =  (MR_String) "cannot create directory: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Message_10  = Msg;
}
          }
          Var_15 = (MR_Word) (Message_10);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Result_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_15));
          }
        }
        break;
      case (MR_Integer) 0:
        *Result_6 = (MR_Word) ((MR_Unsigned) 0U);
        break;
    }
  }
}

void MR_CALL 
mercury__dir__make_directory_4_p_0(
  MR_String PathName_5,
  MR_Word * Result_6)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__dir__make_directory_4_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      MR_Box Error_29;
      MR_Word CheckAccess_30;
      MR_Word IOError_31;
      MR_String V_6_37;

{
#define MR_PROC_LABEL mercury__dir__make_directory_4_p_0

	MR_Integer Error;
	MR_Word CheckAccess;

		{

    Error = ENOSYS;
    CheckAccess = MR_NO;


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Error_29 );
	 CheckAccess_30  = CheckAccess;
}
{
#define MR_PROC_LABEL mercury__dir__make_directory_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_29 , Error);
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        succeeded = MR_FALSE;
      else
      {
{
#define MR_PROC_LABEL mercury__dir__make_directory_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_29 , Error);
	Msg0 =  (MR_String) "cannot make directory: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 V_6_37  = Msg;
}
        succeeded = MR_TRUE;
      }
      if (succeeded)
      {
        IOError_31 = (MR_Word) (V_6_37);
        succeeded = MR_TRUE;
      }
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOError_31));
        }
      else
        switch (CheckAccess_30) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *Result_6 = (MR_Word) ((MR_Unsigned) 0U);
            break;
          case (MR_Integer) 1:
            {
              mercury__io__check_file_accessibility_5_p_0(PathName_5, (MR_Word) (MR_mkword(MR_mktag(1), &mercury__dir_scalar_common_1[3])), Result_6);
            }
            break;
        }
    }
    else
    {
      MR_String DirName_8;

      DirName_8 = mercury__dir__dirname_1_f_0(PathName_5);
      succeeded = (strcmp(PathName_5, DirName_8) == 0);
      if (succeeded)
        mercury__dir__make_directory_or_check_exists_4_p_0(PathName_5, Result_6);
      else
      {
        succeeded = (strcmp(DirName_8, (MR_String) ".") == 0);
        if (succeeded)
          mercury__dir__make_directory_or_check_exists_4_p_0(PathName_5, Result_6);
        else
        {
          MR_Word ParentAccessResult_9;

          mercury__io__check_file_accessibility_5_p_0(DirName_8, (MR_Word) ((MR_Unsigned) 0U), &ParentAccessResult_9);
          if ((ParentAccessResult_9 == (MR_Word) ((MR_Unsigned) 0U)))
            mercury__dir__make_directory_or_check_exists_4_p_0(PathName_5, Result_6);
          else
          {
            MR_Word ParentResult_11;

            mercury__dir__make_directory_4_p_0(DirName_8, &ParentResult_11);
            if ((ParentResult_11 == (MR_Word) ((MR_Unsigned) 0U)))
              mercury__dir__make_directory_or_check_exists_4_p_0(PathName_5, Result_6);
            else
              *Result_6 = ParentResult_11;
          }
        }
      }
    }
  }
}

static void MR_CALL 
mercury__dir__make_directory_or_check_exists_4_p_0(
  MR_String DirName_5,
  MR_Word * Res_6)
{
  {
    MR_bool succeeded;
    MR_Word Res0_8;
    MR_Box MaybeWin32Error_9;

    mercury__dir__make_single_directory_2_5_p_0(DirName_5, &Res0_8, &MaybeWin32Error_9);
    switch (Res0_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          mercury__io__check_file_accessibility_5_p_0(DirName_5, (MR_Word) (MR_mkword(MR_mktag(1), &mercury__dir_scalar_common_1[3])), Res_6);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word Var_16;
          MR_String Message_24;

{
#define MR_PROC_LABEL mercury__dir__make_directory_or_check_exists_4_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
          if (succeeded)
          {
{
#define MR_PROC_LABEL mercury__dir__make_directory_or_check_exists_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MaybeWin32Error_9 , Error);
	Msg0 =  (MR_String) "cannot create directory: " ;
		{

#ifdef MR_WIN32
    ML_make_win32_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);
#else
    MR_fatal_error("io.make_win32_err_msg called on non-Windows platform");
#endif


		;}
#undef MR_PROC_LABEL
	 Message_24  = Msg;
}
          }
          else
          {
{
#define MR_PROC_LABEL mercury__dir__make_directory_or_check_exists_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MaybeWin32Error_9 , Error);
	Msg0 =  (MR_String) "cannot create directory: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Message_24  = Msg;
}
          }
          Var_16 = (MR_Word) (Message_24);
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *Res_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_16));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word TypeRes_10;
          MR_Word Var_20;

          mercury__io__file_type_5_p_0((MR_Integer) 1, DirName_5, &TypeRes_10);
          succeeded = ((MR_tag((MR_Word) TypeRes_10)) == (MR_Integer) 0);
          if (succeeded)
          {
            Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), TypeRes_10, (MR_Integer) 0))));
            succeeded = (Var_20 == (MR_Integer) 1);
          }
          if (succeeded)
          {
            mercury__io__check_file_accessibility_5_p_0(DirName_5, (MR_Word) (MR_mkword(MR_mktag(1), &mercury__dir_scalar_common_1[3])), Res_6);
          }
          else
          {
            MR_String Message_11;
            MR_Word Var_23;

{
#define MR_PROC_LABEL mercury__dir__make_directory_or_check_exists_4_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
            if (succeeded)
            {
{
#define MR_PROC_LABEL mercury__dir__make_directory_or_check_exists_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MaybeWin32Error_9 , Error);
	Msg0 =  (MR_String) "cannot create directory: " ;
		{

#ifdef MR_WIN32
    ML_make_win32_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);
#else
    MR_fatal_error("io.make_win32_err_msg called on non-Windows platform");
#endif


		;}
#undef MR_PROC_LABEL
	 Message_11  = Msg;
}
            }
            else
            {
{
#define MR_PROC_LABEL mercury__dir__make_directory_or_check_exists_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, MaybeWin32Error_9 , Error);
	Msg0 =  (MR_String) "cannot create directory: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 Message_11  = Msg;
}
            }
            Var_23 = (MR_Word) (Message_11);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *Res_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_23));
            }
          }
        }
        break;
      case (MR_Integer) 0:
        *Res_6 = (MR_Word) ((MR_Unsigned) 0U);
        break;
    }
  }
}

static void MR_CALL 
mercury__dir__make_single_directory_2_5_p_0(
  MR_String DirName_1,
  MR_Word * Status_2,
  MR_Box * Error_3)
{
  {
{
#define MR_PROC_LABEL mercury__dir__make_single_directory_2_5_p_0

	MR_String DirName;
	MR_Word Status;
	MR_Integer Error;

	DirName =  DirName_1 ;
		{

#if defined(MR_WIN32)
    if (CreateDirectoryW(ML_utf8_to_wide(DirName), NULL)) {
        Status = ML_MAKE_SINGLE_DIRECTORY_OK;
        Error = 0;
    } else {
        Error = GetLastError();
        if (Error == ERROR_ALREADY_EXISTS) {
            Status = ML_MAKE_SINGLE_DIRECTORY_NAME_EXISTS;
        } else {
            Status = ML_MAKE_SINGLE_DIRECTORY_ERROR;
        }
    }
#elif defined(MR_HAVE_MKDIR)
    if (mkdir(DirName, 0777) == 0) {
        Status = ML_MAKE_SINGLE_DIRECTORY_OK;
        Error = 0;
    } else {
        Status = ML_MAKE_SINGLE_DIRECTORY_ERROR;
        Error = errno;
      #ifdef EEXIST
        if (Error == EEXIST) {
            Status = ML_MAKE_SINGLE_DIRECTORY_NAME_EXISTS;
        }
      #endif // EEXIST
    }
#else // !MR_WIN32 && !MR_HAVE_MKDIR
    Status = ML_MAKE_SINGLE_DIRECTORY_ERROR;
    Error = ENOSYS;
#endif


		;}
#undef MR_PROC_LABEL
	 *Status_2  = Status;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *Error_3 );
}
  }
}

void MR_CALL 
mercury__dir__current_directory_3_p_0(
  MR_Word * Res_4)
{
  {
    MR_bool succeeded;
    MR_String CurDir_6;
    MR_Box Error_7;
    MR_Word IOError_8;
    MR_String V_6_15;

    mercury__dir__current_directory_2_4_p_0(&CurDir_6, &Error_7);
{
#define MR_PROC_LABEL mercury__dir__current_directory_3_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_7 , Error);
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      succeeded = MR_FALSE;
    else
    {
{
#define MR_PROC_LABEL mercury__dir__current_directory_3_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, Error_7 , Error);
	Msg0 =  (MR_String) "dir.current_directory failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 V_6_15  = Msg;
}
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      IOError_8 = (MR_Word) (V_6_15);
      succeeded = MR_TRUE;
    }
    if (succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Res_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (IOError_8));
      }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *Res_4 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (CurDir_6));
      }
  }
}

void MR_CALL 
mercury__dir__current_directory_2_4_p_0(
  MR_String * CurDir_1,
  MR_Box * Error_2)
{
  {
{
#define MR_PROC_LABEL mercury__dir__current_directory_2_4_p_0

	MR_String CurDir;
	MR_Integer Error;

		{

#ifdef MR_WIN32
    wchar_t     *wbuf;
    MR_String   str;

    wbuf = _wgetcwd(NULL, 1);
    if (wbuf != NULL) {
        CurDir = ML_wide_to_utf8(wbuf, MR_ALLOC_ID);
        Error = 0;
        free(wbuf);
    } else {
        CurDir = MR_make_string_const("");
        Error = errno;
    }
#else
    size_t      size = 256;

    while (1) {
        // `size' includes the NUL terminator.
        MR_allocate_aligned_string_msg(CurDir, size - 1, MR_ALLOC_ID);
        if (getcwd(CurDir, size)) {
            Error = 0;
            break;
        }
        if (errno != ERANGE) {
            CurDir = MR_make_string_const("");
            Error = errno;
            break;
        }
        // Buffer too small. Resize and try again.
        size *= 1.5;
    }
#endif


		;}
#undef MR_PROC_LABEL
	 *CurDir_1  = CurDir;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *Error_2 );
}
  }
}

MR_String MR_CALL 
mercury__dir__relative_path_name_from_components_1_f_0(
  MR_Word Components_3)
{
  {
    MR_bool succeeded;
    MR_String PathName_4;
    MR_String Sep_5;
    MR_Char Var_6;
    MR_Word V_5_13;

{
#define MR_PROC_LABEL mercury__dir__relative_path_name_from_components_1_f_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      Var_6 = (MR_Char) 92;
    else
      Var_6 = (MR_Char) 47;
    {
      V_5_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), V_5_13, 0) = ((MR_Box) (MR_Word) (Var_6));
      MR_hl_field(MR_mktag(1), V_5_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__string__to_char_list_2_p_1(&Sep_5, V_5_13);
    PathName_4 = mercury__string__join_list_2_f_0(Sep_5, Components_3);
    return PathName_4;
  }
}

MR_String MR_CALL 
mercury__dir__make_path_name_2_f_0(
  MR_String DirName_4,
  MR_String FileName_5)
{
  {
    MR_String HeadVar__3_3;

    HeadVar__3_3 = mercury__dir__f_slash_2_f_0(DirName_4, FileName_5);
    return HeadVar__3_3;
  }
}

MR_String MR_CALL 
mercury__dir__f_slash_2_f_0(
  MR_String DirName0_4,
  MR_String FileName0_5)
{
  {
    MR_bool succeeded;
    MR_String PathName_6;
    MR_String DirName_7;
    MR_String FileName_8;
    MR_Word Var_12;
    MR_Word Var_13;
    MR_Word Var_14;
    MR_Word Var_15;

    mercury__string__to_char_list_2_p_0(DirName0_4, &Var_13);
    Var_12 = mercury__dir__canonicalize_path_chars_1_f_0(Var_13);
    mercury__string__from_char_list_2_p_0(Var_12, &DirName_7);
    mercury__string__to_char_list_2_p_0(FileName0_5, &Var_15);
    Var_14 = mercury__dir__canonicalize_path_chars_1_f_0(Var_15);
    mercury__string__from_char_list_2_p_0(Var_14, &FileName_8);
    succeeded = mercury__dir__path_name_is_absolute_1_p_0(FileName_8);
    if (succeeded)
    {
      mercury__require__unexpected_2_p_0((MR_String) "function \140dir./\'/2", (MR_String) "second argument is absolute");
    }
    else
    {
      MR_Integer Length_9;
      MR_Integer Var_18;
      MR_Char Var_19;
      MR_Integer Var_20;
      MR_Char Var_21;
      MR_Integer Var_22;
      MR_Char Var_47;
      MR_Integer Var_23;

{
#define MR_PROC_LABEL mercury__dir__f_slash_2_f_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        Var_47 = (MR_Char) 92;
      else
        Var_47 = (MR_Char) 47;
      succeeded = (Var_47 == (MR_Char) 92);
      if (succeeded)
      {
{
#define MR_PROC_LABEL mercury__dir__f_slash_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  FileName_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 Length_9  = Length;
}
        Var_18 = (MR_Integer) 2;
        succeeded = (Length_9 >= Var_18);
        if (succeeded)
        {
          Var_20 = (MR_Integer) 0;
          mercury__string__unsafe_index_3_p_0(FileName_8, Var_20, &Var_19);
          succeeded = mercury__char__is_alpha_1_p_0(Var_19);
          if (succeeded)
          {
            Var_22 = (MR_Integer) 1;
            mercury__string__unsafe_index_3_p_0(FileName_8, Var_22, &Var_21);
            succeeded = (Var_21 == (MR_Char) 58);
            if (succeeded)
            {
              Var_23 = (MR_Integer) 2;
              succeeded = (Length_9 > Var_23);
              if (succeeded)
              {
                MR_Char Var_24;

                mercury__string__unsafe_index_3_p_0(FileName_8, (MR_Integer) 2, &Var_24);
                succeeded = mercury__dir__is_directory_separator_1_p_0(Var_24);
                succeeded = !(succeeded);
              }
              else
                succeeded = MR_TRUE;
            }
          }
        }
      }
      if (succeeded)
      {
        mercury__require__unexpected_2_p_0((MR_String) "function \140dir./\'/2", (MR_String) "second argument is a current drive relative path");
      }
      else
      {
        MR_Integer DirNameLength_10;

{
#define MR_PROC_LABEL mercury__dir__f_slash_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  DirName_7 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 DirNameLength_10  = Length;
}
        {
          MR_Char Var_29;
          MR_Integer Var_30;
          MR_Char Var_31;
          MR_Integer Var_32;
          MR_Char Var_61;

{
#define MR_PROC_LABEL mercury__dir__f_slash_2_f_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
          if (succeeded)
            Var_61 = (MR_Char) 92;
          else
            Var_61 = (MR_Char) 47;
          succeeded = (Var_61 == (MR_Char) 92);
          if (succeeded)
          {
            succeeded = (DirNameLength_10 == (MR_Integer) 2);
            if (succeeded)
            {
              Var_30 = (MR_Integer) 0;
              mercury__string__unsafe_index_3_p_0(DirName_7, Var_30, &Var_29);
              succeeded = mercury__char__is_alpha_1_p_0(Var_29);
              if (succeeded)
              {
                Var_32 = (MR_Integer) 1;
                mercury__string__unsafe_index_3_p_0(DirName_7, Var_32, &Var_31);
                succeeded = (Var_31 == (MR_Char) 58);
              }
            }
          }
        }
        if (!(succeeded))
        {
          MR_Char Char_71;
          MR_Integer Var_11;

          succeeded = (DirNameLength_10 > (MR_Integer) 0);
          if (succeeded)
          {
{
#define MR_PROC_LABEL mercury__dir__f_slash_2_f_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  DirName_7 ;
	Index =  DirNameLength_10 ;
		{

    if (Index > 0) {
        PrevIndex = Index - 1;
        Ch = Str[PrevIndex];
        if (MR_is_ascii(Ch)) {
            SUCCESS_INDICATOR = (Ch != 0);
        } else {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            SUCCESS_INDICATOR = (Ch > 0);
        }
    } else {
        SUCCESS_INDICATOR = MR_FALSE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 Var_11  = PrevIndex;
	 Char_71  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
            if (succeeded)
              succeeded = mercury__dir__is_directory_separator_1_p_0(Char_71);
          }
        }
        if (succeeded)
          mercury__string__append_3_p_2(DirName_7, FileName_8, &PathName_6);
        else
        {
          MR_Word Var_33;
          MR_Word Var_34;
          MR_String Var_35;
          MR_Char Var_36;
          MR_Word Var_37;
          MR_Word V_5_82;

{
#define MR_PROC_LABEL mercury__dir__f_slash_2_f_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
          if (succeeded)
            Var_36 = (MR_Char) 92;
          else
            Var_36 = (MR_Char) 47;
          {
            V_5_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), V_5_82, 0) = ((MR_Box) (MR_Word) (Var_36));
            MR_hl_field(MR_mktag(1), V_5_82, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__string__to_char_list_2_p_1(&Var_35, V_5_82);
          {
            Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_37, 0) = ((MR_Box) (FileName_8));
            MR_hl_field(MR_mktag(1), Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Var_35));
            MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_37));
          }
          {
            Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_33, 0) = ((MR_Box) (DirName_7));
            MR_hl_field(MR_mktag(1), Var_33, 1) = ((MR_Box) (Var_34));
          }
          PathName_6 = mercury__string__append_list_1_f_0(Var_33);
        }
      }
    }
    return PathName_6;
  }
}

MR_bool MR_CALL 
mercury__dir__path_name_is_root_directory_1_p_0(
  MR_String PathName_2)
{
  {
    MR_bool succeeded;
    MR_Word Var_3;
    MR_Word Var_4;

    mercury__string__to_char_list_2_p_0(PathName_2, &Var_4);
    Var_3 = mercury__dir__canonicalize_path_chars_1_f_0(Var_4);
    succeeded = mercury__dir__is_root_directory_1_p_0(Var_3);
    return succeeded;
  }
}

void MR_CALL 
mercury__dir__dirname_2_p_0(
  MR_String S_3,
  MR_String * HeadVar__2_2)
{
  *HeadVar__2_2 = mercury__dir__dirname_1_f_0(S_3);
}

MR_String MR_CALL 
mercury__dir__dirname_1_f_0(
  MR_String FileName_3)
{
  {
    MR_bool succeeded;
    MR_String DirName_4;
    MR_Word FileNameChars_5;
    MR_Word Var_9;

    mercury__string__to_char_list_2_p_0(FileName_3, &Var_9);
    FileNameChars_5 = mercury__dir__canonicalize_path_chars_1_f_0(Var_9);
    succeeded = mercury__dir__is_root_directory_1_p_0(FileNameChars_5);
    if (succeeded)
      mercury__string__from_char_list_2_p_0(FileNameChars_5, &DirName_4);
    else
    {
      MR_Char Drive_6;
      MR_Word Var_10;
      MR_Char Var_11;
      MR_Word Var_12;
      MR_Char Var_22;

{
#define MR_PROC_LABEL mercury__dir__dirname_1_f_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        Var_22 = (MR_Char) 92;
      else
        Var_22 = (MR_Char) 47;
      succeeded = (Var_22 == (MR_Char) 92);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) FileNameChars_5)) == (MR_Integer) 1);
        if (succeeded)
        {
          Drive_6 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), FileNameChars_5, (MR_Integer) 0)));
          Var_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FileNameChars_5, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_10)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_11 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Var_10, (MR_Integer) 0)));
            Var_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_10, (MR_Integer) 1))));
            succeeded = (Var_11 == (MR_Char) 58);
            if (succeeded)
            {
              succeeded = (Var_12 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
                succeeded = mercury__char__is_alpha_1_p_0(Drive_6);
            }
          }
        }
      }
      if (succeeded)
        mercury__string__from_char_list_2_p_0(FileNameChars_5, &DirName_4);
      else
      {
        MR_String DirName0_7;
        MR_String Var_8;

        succeeded = mercury__dir__split_name_2_3_p_0(FileNameChars_5, &DirName0_7, &Var_8);
        if (succeeded)
          DirName_4 = DirName0_7;
        else
        {
          MR_Word Var_13;
          MR_Word Var_16;
          MR_Word Chars1_26;
          MR_Char Sep_27;
          MR_Box conv0_Sep_27;

          succeeded = mercury__list__split_last_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), FileNameChars_5, &Chars1_26, &conv0_Sep_27);
          if (succeeded)
          {
            Sep_27 = ((MR_Char) (MR_Word) conv0_Sep_27);
            succeeded = MR_TRUE;
          }
          if (succeeded)
            succeeded = mercury__dir__is_directory_separator_1_p_0(Sep_27);
          if (succeeded)
            Var_13 = Chars1_26;
          else
            Var_13 = FileNameChars_5;
          mercury__string__to_char_list_2_p_0((MR_String) "..", &Var_16);
          succeeded = mercury__builtin__unify_2_p_0((MR_Word) (&mercury__dir_scalar_common_1[0]), ((MR_Box) (Var_13)), ((MR_Box) (Var_16)));
          if (succeeded)
            DirName_4 = (MR_String) "..";
          else
            DirName_4 = (MR_String) ".";
        }
      }
    }
    return DirName_4;
  }
}

MR_String MR_CALL 
mercury__dir__det_basename_1_f_0(
  MR_String FileName_3)
{
  {
    MR_bool succeeded;
    MR_String HeadVar__2_2;
    MR_String BaseName_4;

    succeeded = mercury__dir__basename_1_f_0(FileName_3, &BaseName_4);
    if (succeeded)
      HeadVar__2_2 = BaseName_4;
    else
    {
      mercury__require__unexpected_2_p_0((MR_String) "function \140dir.det_basename\'/1", (MR_String) "given directory is root directory");
    }
    return HeadVar__2_2;
  }
}

MR_bool MR_CALL 
mercury__dir__basename_2_p_0(
  MR_String S_3,
  MR_String * HeadVar__2_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__dir__basename_1_f_0(S_3, HeadVar__2_2);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__dir__basename_1_f_0(
  MR_String FileName_3,
  MR_String * BaseName_4)
{
  {
    MR_bool succeeded;
    MR_Word FileNameChars_5;
    MR_Word FileNameWithoutSlash_7;
    MR_Word Var_10;
    MR_Char Drive_6;
    MR_Word Var_11;
    MR_Char Var_12;
    MR_Word Var_13;
    MR_Char Var_24;
    MR_Word Chars1_26;
    MR_Word TypeCtorInfo_6_28;
    MR_Char Sep_27;
    MR_Box conv0_Sep_27;
    MR_Word TypeInfo_20_20;
    MR_String Var_14;
    MR_Word Var_17;
    MR_Word TypeInfo_21_21;
    MR_String Var_15;
    MR_Word Var_19;
    MR_String BaseName0_9;
    MR_String Var_8;

    mercury__string__to_char_list_2_p_0(FileName_3, &Var_10);
    FileNameChars_5 = mercury__dir__canonicalize_path_chars_1_f_0(Var_10);
    succeeded = mercury__dir__is_root_directory_1_p_0(FileNameChars_5);
    succeeded = !(succeeded);
    if (succeeded)
    {
{
#define MR_PROC_LABEL mercury__dir__basename_1_f_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        Var_24 = (MR_Char) 92;
      else
        Var_24 = (MR_Char) 47;
      succeeded = (Var_24 == (MR_Char) 92);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) FileNameChars_5)) == (MR_Integer) 1);
        if (succeeded)
        {
          Drive_6 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), FileNameChars_5, (MR_Integer) 0)));
          Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FileNameChars_5, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_11)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_12 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Var_11, (MR_Integer) 0)));
            Var_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_11, (MR_Integer) 1))));
            succeeded = (Var_12 == (MR_Char) 58);
            if (succeeded)
            {
              succeeded = (Var_13 == (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
                succeeded = mercury__char__is_alpha_1_p_0(Drive_6);
            }
          }
        }
      }
      succeeded = !(succeeded);
      if (succeeded)
      {
        TypeCtorInfo_6_28 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0);
        succeeded = mercury__list__split_last_3_p_0(TypeCtorInfo_6_28, FileNameChars_5, &Chars1_26, &conv0_Sep_27);
        if (succeeded)
        {
          Sep_27 = ((MR_Char) (MR_Word) conv0_Sep_27);
          succeeded = MR_TRUE;
        }
        if (succeeded)
          succeeded = mercury__dir__is_directory_separator_1_p_0(Sep_27);
        if (succeeded)
          FileNameWithoutSlash_7 = Chars1_26;
        else
          FileNameWithoutSlash_7 = FileNameChars_5;
        Var_14 = (MR_String) ".";
        mercury__string__to_char_list_2_p_0(Var_14, &Var_17);
        TypeInfo_20_20 = (MR_Word) (&mercury__dir_scalar_common_1[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (FileNameWithoutSlash_7)), ((MR_Box) (Var_17)));
        succeeded = !(succeeded);
        if (succeeded)
        {
          Var_15 = (MR_String) "..";
          mercury__string__to_char_list_2_p_0(Var_15, &Var_19);
          TypeInfo_21_21 = (MR_Word) (&mercury__dir_scalar_common_1[0]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_21_21, ((MR_Box) (FileNameWithoutSlash_7)), ((MR_Box) (Var_19)));
          succeeded = !(succeeded);
          if (succeeded)
          {
            succeeded = mercury__dir__split_name_2_3_p_0(FileNameChars_5, &Var_8, &BaseName0_9);
            if (succeeded)
              *BaseName_4 = BaseName0_9;
            else
              *BaseName_4 = FileName_3;
            succeeded = MR_TRUE;
          }
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__dir__split_name_3_p_0(
  MR_String FileName_4,
  MR_String * DirName_5,
  MR_String * BaseName_6)
{
  {
    MR_bool succeeded;
    MR_Word FileNameChars_7;
    MR_Word Var_8;

    mercury__string__to_char_list_2_p_0(FileName_4, &Var_8);
    FileNameChars_7 = mercury__dir__canonicalize_path_chars_1_f_0(Var_8);
    succeeded = mercury__dir__is_root_directory_1_p_0(FileNameChars_7);
    succeeded = !(succeeded);
    if (succeeded)
      succeeded = mercury__dir__split_name_2_3_p_0(FileNameChars_7, DirName_5, BaseName_6);
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__dir__is_root_directory_1_p_0(
  MR_Word FileName_2)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__dir__is_root_directory_1_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      MR_String Var_4;

      mercury__string__from_char_list_2_p_0(FileName_2, &Var_4);
      succeeded = mercury__dir__path_name_is_absolute_1_p_0(Var_4);
      if (succeeded)
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140dir.is_dotnet_root_directory_2\'/1", (MR_String) "called for non-.NET CLI backend");
        succeeded = MR_TRUE;
      }
    }
    else
    {
      {
        MR_Char Var_29;

{
#define MR_PROC_LABEL mercury__dir__is_root_directory_1_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
        if (succeeded)
          Var_29 = (MR_Char) 92;
        else
          Var_29 = (MR_Char) 47;
        succeeded = (Var_29 == (MR_Char) 92);
      }
      if (!(succeeded))
      {
{
#define MR_PROC_LABEL mercury__dir__is_root_directory_1_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_CYGWIN)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
      }
      if (succeeded)
      {
        MR_Word TypeInfo_8_8;
        MR_Word Var_7;
        MR_Word STATE_VARIABLE_FileName_6_33;
        MR_Char Letter_37;
        MR_Char Sep_38;
        MR_Word Var_41;
        MR_Char Var_42;
        MR_Word Var_43;

        succeeded = ((MR_tag((MR_Word) FileName_2)) == (MR_Integer) 1);
        if (succeeded)
        {
          Letter_37 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), FileName_2, (MR_Integer) 0)));
          Var_41 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FileName_2, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_41)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_42 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Var_41, (MR_Integer) 0)));
            Var_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_41, (MR_Integer) 1))));
            succeeded = (Var_42 == (MR_Char) 58);
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) Var_43)) == (MR_Integer) 1);
              if (succeeded)
              {
                Sep_38 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Var_43, (MR_Integer) 0)));
                STATE_VARIABLE_FileName_6_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_43, (MR_Integer) 1))));
                succeeded = mercury__char__is_alpha_1_p_0(Letter_37);
                if (succeeded)
                  succeeded = mercury__dir__is_directory_separator_1_p_0(Sep_38);
              }
            }
          }
        }
        if (succeeded)
        {
          Var_7 = STATE_VARIABLE_FileName_6_33;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Word STATE_VARIABLE_FileName_7_34;
          MR_Char Sep_45;
          MR_Word Server_47;
          MR_Word STATE_VARIABLE_FileName_0_55;
          MR_Word Var_56;
          MR_Word STATE_VARIABLE_FileName_17_58;
          MR_Char Var_72;

          succeeded = ((MR_tag((MR_Word) FileName_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            Sep_45 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), FileName_2, (MR_Integer) 0)));
            Var_56 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FileName_2, (MR_Integer) 1))));
            succeeded = ((MR_tag((MR_Word) Var_56)) == (MR_Integer) 1);
            if (succeeded)
            {
              Var_72 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Var_56, (MR_Integer) 0)));
              STATE_VARIABLE_FileName_0_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_56, (MR_Integer) 1))));
              succeeded = (Sep_45 == Var_72);
              if (succeeded)
              {
                succeeded = mercury__dir__is_directory_separator_1_p_0(Sep_45);
                if (succeeded)
                {
                  mercury__dir__take_while__ho10_4_p_in__list_0(STATE_VARIABLE_FileName_0_55, &Server_47, &STATE_VARIABLE_FileName_17_58);
                  succeeded = ((MR_tag((MR_Word) Server_47)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    if ((STATE_VARIABLE_FileName_17_58 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      STATE_VARIABLE_FileName_7_34 = STATE_VARIABLE_FileName_17_58;
                      succeeded = MR_TRUE;
                    }
                    else
                    {
                      MR_Word STATE_VARIABLE_FileName_19_60 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_FileName_17_58, (MR_Integer) 1))));
                      MR_Char Var_73 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_FileName_17_58, (MR_Integer) 0)));

                      succeeded = (Sep_45 == Var_73);
                      if (succeeded)
                      {
                        if ((STATE_VARIABLE_FileName_19_60 == (MR_Word) ((MR_Unsigned) 0U)))
                        {
                          STATE_VARIABLE_FileName_7_34 = STATE_VARIABLE_FileName_19_60;
                          succeeded = MR_TRUE;
                        }
                        else
                        {
                          MR_Word Share_52;
                          MR_Word STATE_VARIABLE_FileName_21_62;

                          mercury__dir__take_while__ho9_4_p_in__list_0(STATE_VARIABLE_FileName_19_60, &Share_52, &STATE_VARIABLE_FileName_21_62);
                          succeeded = ((MR_tag((MR_Word) Share_52)) == (MR_Integer) 1);
                          if (succeeded)
                          {
                            if ((STATE_VARIABLE_FileName_21_62 == (MR_Word) ((MR_Unsigned) 0U)))
                            {
                              STATE_VARIABLE_FileName_7_34 = STATE_VARIABLE_FileName_21_62;
                              succeeded = MR_TRUE;
                            }
                            else
                            {
                              MR_Char Var_74 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_FileName_21_62, (MR_Integer) 0)));

                              STATE_VARIABLE_FileName_7_34 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_FileName_21_62, (MR_Integer) 1))));
                              succeeded = (Sep_45 == Var_74);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          if (succeeded)
          {
            Var_7 = STATE_VARIABLE_FileName_7_34;
            succeeded = MR_TRUE;
          }
          else
          {
            MR_Char Char1_76;
            MR_Word STATE_VARIABLE_FileName_0_79;

            succeeded = ((MR_tag((MR_Word) FileName_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              Char1_76 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), FileName_2, (MR_Integer) 0)));
              STATE_VARIABLE_FileName_0_79 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FileName_2, (MR_Integer) 1))));
              succeeded = mercury__dir__is_directory_separator_1_p_0(Char1_76);
              if (succeeded)
              {
                if ((STATE_VARIABLE_FileName_0_79 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  Var_7 = STATE_VARIABLE_FileName_0_79;
                  succeeded = MR_TRUE;
                }
                else
                {
                  MR_Char Char2_78 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_FileName_0_79, (MR_Integer) 0)));

                  Var_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_FileName_0_79, (MR_Integer) 1))));
                  succeeded = mercury__dir__is_directory_separator_1_p_0(Char2_78);
                  succeeded = !(succeeded);
                }
              }
            }
          }
        }
        if (succeeded)
        {
          TypeInfo_8_8 = (MR_Word) (&mercury__dir_scalar_common_1[0]);
          succeeded = mercury__builtin__unify_2_p_0(TypeInfo_8_8, ((MR_Box) ((MR_Unsigned) 0U)), ((MR_Box) (Var_7)));
        }
      }
      else
      {
        MR_Char Char_3;
        MR_Word Var_6;

        succeeded = ((MR_tag((MR_Word) FileName_2)) == (MR_Integer) 1);
        if (succeeded)
        {
          Char_3 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), FileName_2, (MR_Integer) 0)));
          Var_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FileName_2, (MR_Integer) 1))));
          succeeded = (Var_6 == (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            succeeded = mercury__dir__is_directory_separator_1_p_0(Char_3);
        }
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__dir__path_name_is_absolute_1_p_0(
  MR_String FileName_2)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__dir__path_name_is_absolute_1_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140dir.dotnet_path_name_is_absolute_2\'/1", (MR_String) "called on non-.NET CLI backend");
      succeeded = MR_TRUE;
    }
    else
    {
      {
        MR_Char Var_33;

{
#define MR_PROC_LABEL mercury__dir__path_name_is_absolute_1_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
        if (succeeded)
          Var_33 = (MR_Char) 92;
        else
          Var_33 = (MR_Char) 47;
        succeeded = (Var_33 == (MR_Char) 92);
      }
      if (!(succeeded))
      {
{
#define MR_PROC_LABEL mercury__dir__path_name_is_absolute_1_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_CYGWIN)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
      }
      if (succeeded)
      {
        MR_Word Var_5;
        MR_Word Var_6;
        MR_Char Letter_43;
        MR_Char Sep_44;
        MR_Word Var_47;
        MR_Char Var_48;
        MR_Word Var_49;

        mercury__string__to_char_list_2_p_0(FileName_2, &Var_6);
        Var_5 = mercury__dir__canonicalize_path_chars_1_f_0(Var_6);
        succeeded = ((MR_tag((MR_Word) Var_5)) == (MR_Integer) 1);
        if (succeeded)
        {
          Letter_43 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Var_5, (MR_Integer) 0)));
          Var_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_5, (MR_Integer) 1))));
          succeeded = ((MR_tag((MR_Word) Var_47)) == (MR_Integer) 1);
          if (succeeded)
          {
            Var_48 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Var_47, (MR_Integer) 0)));
            Var_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_47, (MR_Integer) 1))));
            succeeded = (Var_48 == (MR_Char) 58);
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) Var_49)) == (MR_Integer) 1);
              if (succeeded)
              {
                Sep_44 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Var_49, (MR_Integer) 0)));
                succeeded = mercury__char__is_alpha_1_p_0(Letter_43);
                if (succeeded)
                  succeeded = mercury__dir__is_directory_separator_1_p_0(Sep_44);
              }
            }
          }
        }
        if (succeeded)
          succeeded = MR_TRUE;
        else
        {
          MR_Char Sep_51;
          MR_Word Server_53;
          MR_Word STATE_VARIABLE_FileName_0_61;
          MR_Word Var_62;
          MR_Word STATE_VARIABLE_FileName_17_64;
          MR_Char Var_78;

          succeeded = ((MR_tag((MR_Word) Var_5)) == (MR_Integer) 1);
          if (succeeded)
          {
            Sep_51 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Var_5, (MR_Integer) 0)));
            Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_5, (MR_Integer) 1))));
            succeeded = ((MR_tag((MR_Word) Var_62)) == (MR_Integer) 1);
            if (succeeded)
            {
              Var_78 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Var_62, (MR_Integer) 0)));
              STATE_VARIABLE_FileName_0_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_62, (MR_Integer) 1))));
              succeeded = (Sep_51 == Var_78);
              if (succeeded)
              {
                succeeded = mercury__dir__is_directory_separator_1_p_0(Sep_51);
                if (succeeded)
                {
                  mercury__dir__take_while__ho10_4_p_in__list_0(STATE_VARIABLE_FileName_0_61, &Server_53, &STATE_VARIABLE_FileName_17_64);
                  succeeded = ((MR_tag((MR_Word) Server_53)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    if ((STATE_VARIABLE_FileName_17_64 == (MR_Word) ((MR_Unsigned) 0U)))
                      succeeded = MR_TRUE;
                    else
                    {
                      MR_Word STATE_VARIABLE_FileName_19_66 = ((MR_Word) ((MR_hl_field(MR_mktag(1), STATE_VARIABLE_FileName_17_64, (MR_Integer) 1))));
                      MR_Char Var_79 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_FileName_17_64, (MR_Integer) 0)));

                      succeeded = (Sep_51 == Var_79);
                      if (succeeded)
                      {
                        if ((STATE_VARIABLE_FileName_19_66 == (MR_Word) ((MR_Unsigned) 0U)))
                          succeeded = MR_TRUE;
                        else
                        {
                          MR_Word Share_58;
                          MR_Word STATE_VARIABLE_FileName_21_68;

                          mercury__dir__take_while__ho9_4_p_in__list_0(STATE_VARIABLE_FileName_19_66, &Share_58, &STATE_VARIABLE_FileName_21_68);
                          succeeded = ((MR_tag((MR_Word) Share_58)) == (MR_Integer) 1);
                          if (succeeded)
                          {
                            if ((STATE_VARIABLE_FileName_21_68 == (MR_Word) ((MR_Unsigned) 0U)))
                              succeeded = MR_TRUE;
                            else
                            {
                              MR_Char Var_80 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_FileName_21_68, (MR_Integer) 0)));

                              succeeded = (Sep_51 == Var_80);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          if (succeeded)
            succeeded = MR_TRUE;
          else
          {
            MR_Char Char1_82;
            MR_Word STATE_VARIABLE_FileName_0_85;

            succeeded = ((MR_tag((MR_Word) Var_5)) == (MR_Integer) 1);
            if (succeeded)
            {
              Char1_82 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Var_5, (MR_Integer) 0)));
              STATE_VARIABLE_FileName_0_85 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_5, (MR_Integer) 1))));
              succeeded = mercury__dir__is_directory_separator_1_p_0(Char1_82);
              if (succeeded)
              {
                if ((STATE_VARIABLE_FileName_0_85 == (MR_Word) ((MR_Unsigned) 0U)))
                  succeeded = MR_TRUE;
                else
                {
                  MR_Char Char2_84 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), STATE_VARIABLE_FileName_0_85, (MR_Integer) 0)));

                  succeeded = mercury__dir__is_directory_separator_1_p_0(Char2_84);
                  succeeded = !(succeeded);
                }
              }
            }
          }
        }
      }
      else
      {
        MR_Char FirstChar_4;
        MR_Integer V_7_90;

{
#define MR_PROC_LABEL mercury__dir__path_name_is_absolute_1_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  FileName_2 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 V_7_90  = Length;
}
{
#define MR_PROC_LABEL mercury__dir__path_name_is_absolute_1_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  (MR_Integer) 0 ;
	Length =  V_7_90 ;
		{

    // We do not test for negative values of Index because (a) MR_Unsigned
    // is unsigned and hence a negative argument will appear as a very large
    // positive one after the cast and (b) anybody dealing with the case
    // where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    // an integer overflow error in this case).
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
        if (succeeded)
        {
          mercury__string__unsafe_index_3_p_0(FileName_2, (MR_Integer) 0, &FirstChar_4);
          succeeded = mercury__dir__is_directory_separator_1_p_0(FirstChar_4);
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
mercury__dir__take_while__ho10_4_p_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Char V_7_7 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word V_8_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = mercury__dir__is_directory_separator_1_p_0(V_7_7);
      succeeded = !(succeeded);
      if (succeeded)
      {
        MR_Word V_11_11;

        mercury__dir__take_while__ho10_4_p_in__list_0(V_8_8, &V_11_11, HeadVar__4_4);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (V_7_7));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (V_11_11));
        }
      }
      else
      {
        *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
        *HeadVar__4_4 = HeadVar__2_2;
      }
    }
  }
}

static void MR_CALL 
mercury__dir__take_while__ho9_4_p_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Char V_7_7 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word V_8_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = mercury__dir__is_directory_separator_1_p_0(V_7_7);
      succeeded = !(succeeded);
      if (succeeded)
      {
        MR_Word V_11_11;

        mercury__dir__take_while__ho9_4_p_in__list_0(V_8_8, &V_11_11, HeadVar__4_4);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (V_7_7));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (V_11_11));
        }
      }
      else
      {
        *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
        *HeadVar__4_4 = HeadVar__2_2;
      }
    }
  }
}

MR_Word MR_CALL 
mercury__dir__canonicalize_path_chars_1_f_0(
  MR_Word FileName0_3)
{
  {
    MR_bool succeeded;
    MR_Word FileName_4;
    MR_Char Char1_5;
    MR_Word FileName1_6;

    {
      MR_Char Var_14;

{
#define MR_PROC_LABEL mercury__dir__canonicalize_path_chars_1_f_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        Var_14 = (MR_Char) 92;
      else
        Var_14 = (MR_Char) 47;
      succeeded = (Var_14 == (MR_Char) 92);
    }
    if (!(succeeded))
    {
{
#define MR_PROC_LABEL mercury__dir__canonicalize_path_chars_1_f_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_CYGWIN)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    }
    if (succeeded)
    {
      succeeded = ((MR_tag((MR_Word) FileName0_3)) == (MR_Integer) 1);
      if (succeeded)
      {
        Char1_5 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), FileName0_3, (MR_Integer) 0)));
        FileName1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FileName0_3, (MR_Integer) 1))));
        succeeded = mercury__dir__is_directory_separator_1_p_0(Char1_5);
      }
    }
    if (succeeded)
    {
      MR_Char CanonicalChar1_7;
      MR_Word FileName2_8;
      MR_Char Char2_9;
      MR_Word Var_11;

{
#define MR_PROC_LABEL mercury__dir__canonicalize_path_chars_1_f_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_CYGWIN)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        CanonicalChar1_7 = Char1_5;
      else
      {
{
#define MR_PROC_LABEL mercury__dir__canonicalize_path_chars_1_f_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
        if (succeeded)
          CanonicalChar1_7 = (MR_Char) 92;
        else
          CanonicalChar1_7 = (MR_Char) 47;
      }
      FileName2_8 = mercury__dir__canonicalize_path_chars_2_2_f_0(FileName1_6, (MR_Word) ((MR_Unsigned) 0U));
      succeeded = ((MR_tag((MR_Word) FileName2_8)) == (MR_Integer) 1);
      if (succeeded)
      {
        Char2_9 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), FileName2_8, (MR_Integer) 0)));
        Var_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FileName2_8, (MR_Integer) 1))));
        succeeded = (Var_11 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          succeeded = mercury__dir__is_directory_separator_1_p_0(Char2_9);
      }
      if (succeeded)
      {
        {
          FileName_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), FileName_4, 0) = ((MR_Box) (MR_Word) (CanonicalChar1_7));
          MR_hl_field(MR_mktag(1), FileName_4, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      }
      else
        {
          FileName_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), FileName_4, 0) = ((MR_Box) (MR_Word) (CanonicalChar1_7));
          MR_hl_field(MR_mktag(1), FileName_4, 1) = ((MR_Box) (FileName2_8));
        }
    }
    else
    {
      FileName_4 = mercury__dir__canonicalize_path_chars_2_2_f_0(FileName0_3, (MR_Word) ((MR_Unsigned) 0U));
    }
    return FileName_4;
  }
}

static MR_Word MR_CALL 
mercury__dir__canonicalize_path_chars_2_2_f_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Word HeadVar__3_3;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), HeadVar__2_2, &HeadVar__3_3);
    }
    else
    {
      MR_Char C0_5 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word FileName0_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word RevFileName_8;
      MR_Char C_9;
      MR_Char C2_10;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_HeadVar__2_2;

{
#define MR_PROC_LABEL mercury__dir__canonicalize_path_chars_2_2_f_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_CYGWIN)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
      succeeded = !(succeeded);
      if (succeeded)
        succeeded = mercury__dir__is_directory_separator_1_p_0(C0_5);
      if (succeeded)
      {
{
#define MR_PROC_LABEL mercury__dir__canonicalize_path_chars_2_2_f_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
        if (succeeded)
          C_9 = (MR_Char) 92;
        else
          C_9 = (MR_Char) 47;
      }
      else
        C_9 = C0_5;
      succeeded = mercury__dir__is_directory_separator_1_p_0(C_9);
      if (succeeded)
      {
        succeeded = ((MR_tag((MR_Word) FileName0_6)) == (MR_Integer) 1);
        if (succeeded)
        {
          C2_10 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), FileName0_6, (MR_Integer) 0)));
          succeeded = mercury__dir__is_directory_separator_1_p_0(C2_10);
        }
      }
      if (succeeded)
        RevFileName_8 = HeadVar__2_2;
      else
        {
          RevFileName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), RevFileName_8, 0) = ((MR_Box) (MR_Word) (C_9));
          MR_hl_field(MR_mktag(1), RevFileName_8, 1) = ((MR_Box) (HeadVar__2_2));
        }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = FileName0_6;
      next_value_of_HeadVar__2_2 = RevFileName_8;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      continue;
    }
    return HeadVar__3_3;
    break;
  }
}

MR_bool MR_CALL 
mercury__dir__split_name_2_3_p_0(
  MR_Word FileNameChars0_4,
  MR_String * DirName_5,
  MR_String * BaseName_6)
{
  {
    MR_bool succeeded = ((MR_tag((MR_Word) FileNameChars0_4)) == (MR_Integer) 1);
    MR_Word FileNameWithoutSlash_9;
    MR_Word Chars1_20;
    MR_Word TypeCtorInfo_6_22;
    MR_Char Sep_21;
    MR_Box conv0_Sep_21;
    MR_Word TypeInfo_17_17;
    MR_String Var_10;
    MR_Word Var_14;
    MR_Word TypeInfo_18_18;
    MR_String Var_11;
    MR_Word Var_16;

    if (succeeded)
    {
      TypeCtorInfo_6_22 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0);
      succeeded = mercury__list__split_last_3_p_0(TypeCtorInfo_6_22, FileNameChars0_4, &Chars1_20, &conv0_Sep_21);
      if (succeeded)
      {
        Sep_21 = ((MR_Char) (MR_Word) conv0_Sep_21);
        succeeded = MR_TRUE;
      }
      if (succeeded)
        succeeded = mercury__dir__is_directory_separator_1_p_0(Sep_21);
      if (succeeded)
        FileNameWithoutSlash_9 = Chars1_20;
      else
        FileNameWithoutSlash_9 = FileNameChars0_4;
      Var_10 = (MR_String) ".";
      mercury__string__to_char_list_2_p_0(Var_10, &Var_14);
      TypeInfo_17_17 = (MR_Word) (&mercury__dir_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (FileNameWithoutSlash_9)), ((MR_Box) (Var_14)));
      succeeded = !(succeeded);
      if (succeeded)
      {
        Var_11 = (MR_String) "..";
        mercury__string__to_char_list_2_p_0(Var_11, &Var_16);
        TypeInfo_18_18 = (MR_Word) (&mercury__dir_scalar_common_1[0]);
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_18_18, ((MR_Box) (FileNameWithoutSlash_9)), ((MR_Box) (Var_16)));
        succeeded = !(succeeded);
        if (succeeded)
        {
{
#define MR_PROC_LABEL mercury__dir__split_name_2_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
          if (succeeded)
          {
            MR_String Var_12;

            mercury__string__from_char_list_2_p_0(FileNameWithoutSlash_9, &Var_12);
            *DirName_5 = (MR_String) "";
            *BaseName_6 = (MR_String) "";
{
#define MR_PROC_LABEL mercury__dir__split_name_2_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
          }
          else
          {
            MR_Word RevFileNameChars0_33;
            MR_Word RevFileNameChars_36;
            MR_Word RevFileNameChars1_35;
            MR_Char LastChar_34;
            MR_Word RevBaseName_37;
            MR_Word RevDirName0_38;

            mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), FileNameChars0_4, &RevFileNameChars0_33);
            succeeded = ((MR_tag((MR_Word) RevFileNameChars0_33)) == (MR_Integer) 1);
            if (succeeded)
            {
              LastChar_34 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), RevFileNameChars0_33, (MR_Integer) 0)));
              RevFileNameChars1_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RevFileNameChars0_33, (MR_Integer) 1))));
              succeeded = mercury__dir__is_directory_separator_1_p_0(LastChar_34);
            }
            if (succeeded)
              RevFileNameChars_36 = RevFileNameChars1_35;
            else
              RevFileNameChars_36 = RevFileNameChars0_33;
            mercury__dir__take_while__ho11_4_p_in__list_0(RevFileNameChars_36, &RevBaseName_37, &RevDirName0_38);
            succeeded = ((MR_tag((MR_Word) RevBaseName_37)) == (MR_Integer) 1);
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) RevDirName0_38)) == (MR_Integer) 1);
              if (succeeded)
              {
              }
            }
            if (succeeded)
            {
              MR_Word RevDirName_46;
              MR_Word RevDirName1_44 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RevDirName0_38, (MR_Integer) 1))));
              MR_Char Sep_43 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), RevDirName0_38, (MR_Integer) 0)));

              succeeded = mercury__dir__is_directory_separator_1_p_0(Sep_43);
              if (succeeded)
              {
                {
                  MR_Char Drive_45;
                  MR_Char Var_52;
                  MR_Word Var_53;
                  MR_Word Var_54;

                  {
                    MR_Char Var_68;

{
#define MR_PROC_LABEL mercury__dir__split_name_2_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
                    if (succeeded)
                      Var_68 = (MR_Char) 92;
                    else
                      Var_68 = (MR_Char) 47;
                    succeeded = (Var_68 == (MR_Char) 92);
                  }
                  if (!(succeeded))
                  {
{
#define MR_PROC_LABEL mercury__dir__split_name_2_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_CYGWIN)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
                  }
                  if (succeeded)
                  {
                    succeeded = ((MR_tag((MR_Word) RevDirName1_44)) == (MR_Integer) 1);
                    if (succeeded)
                    {
                      Var_52 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), RevDirName1_44, (MR_Integer) 0)));
                      Var_53 = ((MR_Word) ((MR_hl_field(MR_mktag(1), RevDirName1_44, (MR_Integer) 1))));
                      succeeded = (Var_52 == (MR_Char) 58);
                      if (succeeded)
                      {
                        succeeded = ((MR_tag((MR_Word) Var_53)) == (MR_Integer) 1);
                        if (succeeded)
                        {
                          Drive_45 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Var_53, (MR_Integer) 0)));
                          Var_54 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_53, (MR_Integer) 1))));
                          succeeded = (Var_54 == (MR_Word) ((MR_Unsigned) 0U));
                          if (succeeded)
                            succeeded = mercury__char__is_alpha_1_p_0(Drive_45);
                        }
                      }
                    }
                  }
                }
                if (!(succeeded))
                  succeeded = (RevDirName1_44 == (MR_Word) ((MR_Unsigned) 0U));
              }
              succeeded = !(succeeded);
              if (succeeded)
                RevDirName_46 = RevDirName1_44;
              else
                RevDirName_46 = RevDirName0_38;
              mercury__string__from_rev_char_list_2_p_0(RevBaseName_37, BaseName_6);
              mercury__string__from_rev_char_list_2_p_0(RevDirName_46, DirName_5);
              succeeded = MR_TRUE;
            }
            else
            {
              MR_Word BaseNameChars_47;
              MR_Char BaseNameFirst_48;
              MR_Word Var_55;
              MR_Char Var_56;
              MR_Word Var_57;
              MR_Word Var_58;
              MR_Char Drive_61;
              MR_Char Var_73;

{
#define MR_PROC_LABEL mercury__dir__split_name_2_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
              if (succeeded)
                Var_73 = (MR_Char) 92;
              else
                Var_73 = (MR_Char) 47;
              succeeded = (Var_73 == (MR_Char) 92);
              if (succeeded)
              {
                succeeded = ((MR_tag((MR_Word) FileNameChars0_4)) == (MR_Integer) 1);
                if (succeeded)
                {
                  Drive_61 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), FileNameChars0_4, (MR_Integer) 0)));
                  Var_55 = ((MR_Word) ((MR_hl_field(MR_mktag(1), FileNameChars0_4, (MR_Integer) 1))));
                  succeeded = ((MR_tag((MR_Word) Var_55)) == (MR_Integer) 1);
                  if (succeeded)
                  {
                    Var_56 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Var_55, (MR_Integer) 0)));
                    BaseNameChars_47 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_55, (MR_Integer) 1))));
                    succeeded = (Var_56 == (MR_Char) 58);
                    if (succeeded)
                    {
                      succeeded = mercury__char__is_alpha_1_p_0(Drive_61);
                      if (succeeded)
                      {
                        succeeded = ((MR_tag((MR_Word) BaseNameChars_47)) == (MR_Integer) 1);
                        if (succeeded)
                        {
                          BaseNameFirst_48 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), BaseNameChars_47, (MR_Integer) 0)));
                          succeeded = mercury__dir__is_directory_separator_1_p_0(BaseNameFirst_48);
                          succeeded = !(succeeded);
                          if (succeeded)
                          {
                            mercury__string__from_char_list_2_p_0(BaseNameChars_47, BaseName_6);
                            Var_58 = (MR_Word) (MR_mkword(MR_mktag(1), &mercury__dir_scalar_common_1[5]));
                            {
                              Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), Var_57, 0) = ((MR_Box) (MR_Word) (Drive_61));
                              MR_hl_field(MR_mktag(1), Var_57, 1) = ((MR_Box) (Var_58));
                            }
                            mercury__string__from_char_list_2_p_0(Var_57, DirName_5);
                            succeeded = MR_TRUE;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
mercury__dir__take_while__ho11_4_p_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  {
    MR_bool succeeded;

    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Char V_7_7 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word V_8_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = mercury__dir__is_directory_separator_1_p_0(V_7_7);
      succeeded = !(succeeded);
      if (succeeded)
      {
        MR_Word V_11_11;

        mercury__dir__take_while__ho11_4_p_in__list_0(V_8_8, &V_11_11, HeadVar__4_4);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (V_7_7));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (V_11_11));
        }
      }
      else
      {
        *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
        *HeadVar__4_4 = HeadVar__2_2;
      }
    }
  }
}

void MR_CALL 
mercury__dir__parent_directory_1_p_0(
  MR_String * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_String) "..";
}

MR_String MR_CALL 
mercury__dir__parent_directory_0_f_0(void)
{
  {
    return (MR_String) "..";
  }
}

void MR_CALL 
mercury__dir__this_directory_1_p_0(
  MR_String * HeadVar__1_1)
{
  *HeadVar__1_1 = (MR_String) ".";
}

MR_String MR_CALL 
mercury__dir__this_directory_0_f_0(void)
{
  {
    return (MR_String) ".";
  }
}

void MR_CALL 
mercury__dir__is_directory_separator_1_p_1(
  MR_Char * Char_2,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    MR_bool succeeded;

    {
      MR_Char Var_3;

{
#define MR_PROC_LABEL mercury__dir__is_directory_separator_1_p_1

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        *Char_2 = (MR_Char) 92;
      else
        *Char_2 = (MR_Char) 47;
{
#define MR_PROC_LABEL mercury__dir__is_directory_separator_1_p_1

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_CYGWIN)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        Var_3 = (MR_Char) 92;
      else
        Var_3 = (MR_Char) 47;
      succeeded = (*Char_2 == Var_3);
      succeeded = !(succeeded);
      if (succeeded)
        cont(cont_env_ptr);
    }
{
#define MR_PROC_LABEL mercury__dir__is_directory_separator_1_p_1

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_CYGWIN)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      *Char_2 = (MR_Char) 92;
    else
      *Char_2 = (MR_Char) 47;
    cont(cont_env_ptr);
  }
}

MR_bool MR_CALL 
mercury__dir__is_directory_separator_1_p_0(
  MR_Char Char_2)
{
  {
    MR_bool succeeded;

    {
      MR_Char Var_3;
      MR_Char Var_4;

{
#define MR_PROC_LABEL mercury__dir__is_directory_separator_1_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        Var_3 = (MR_Char) 92;
      else
        Var_3 = (MR_Char) 47;
      succeeded = (Char_2 == Var_3);
      if (succeeded)
      {
{
#define MR_PROC_LABEL mercury__dir__is_directory_separator_1_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_CYGWIN)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
        if (succeeded)
          Var_4 = (MR_Char) 92;
        else
          Var_4 = (MR_Char) 47;
        succeeded = (Char_2 == Var_4);
        succeeded = !(succeeded);
      }
    }
    if (!(succeeded))
    {
      MR_Char Var_5;

{
#define MR_PROC_LABEL mercury__dir__is_directory_separator_1_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_CYGWIN)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        Var_5 = (MR_Char) 92;
      else
        Var_5 = (MR_Char) 47;
      succeeded = (Char_2 == Var_5);
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__dir__directory_separator_1_p_0(
  MR_Char * HeadVar__1_1)
{
  {
    MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__dir__directory_separator_1_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      *HeadVar__1_1 = (MR_Char) 92;
    else
      *HeadVar__1_1 = (MR_Char) 47;
  }
}

MR_Char MR_CALL 
mercury__dir__directory_separator_0_f_0(void)
{
  {
    MR_bool succeeded;
    MR_Char HeadVar__1_1;

{
#define MR_PROC_LABEL mercury__dir__directory_separator_0_f_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_WIN32)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      HeadVar__1_1 = (MR_Char) 92;
    else
      HeadVar__1_1 = (MR_Char) 47;
    return HeadVar__1_1;
  }
}

static MR_bool MR_CALL 
mercury__dir____Unify____foldl_pred_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__dir____Unify____foldl_pred_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__dir____Compare____foldl_pred_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__dir____Compare____foldl_pred_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__dir____Unify____make_single_directory_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__dir____Unify____make_single_directory_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__dir____Compare____make_single_directory_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__dir____Compare____make_single_directory_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__dir____Unify____stream_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__dir____Unify____stream_0_0(((MR_Box) (wrapper_arg_1)), ((MR_Box) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__dir____Compare____stream_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__dir____Compare____stream_0_0(&conv0_HeadVar__1_1, ((MR_Box) (wrapper_arg_2)), ((MR_Box) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__dir__init(void)
{
}

void mercury__dir__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__dir__dir__type_ctor_info_foldl_pred_1);
	MR_register_type_ctor_info(&mercury__dir__dir__type_ctor_info_make_single_directory_status_0);
	MR_register_type_ctor_info(&mercury__dir__dir__type_ctor_info_stream_0);
}

void mercury__dir__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__dir__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module dir.
