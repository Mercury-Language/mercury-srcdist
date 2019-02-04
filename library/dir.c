/*
** Automatically generated from `dir.m'
** by the Mercury compiler,
** version rotd-2017-08-02
** configured for x86_64-apple-darwin13.4.0.
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


/* :- module dir. */
/* :- implementation. */

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
  #include <direct.h>   /* for _wgetcwd */
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
        HANDLE      handle;         /* may be INVALID_HANDLE_VALUE */
        MR_String   pending_entry;  /* initially populated, then NULL */
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
  MR_Box mercury__dir__Dir_5,
  MR_Word * mercury__dir__Res_6);

static void MR_CALL 
mercury__dir__read_entry_2_6_p_0(
  MR_Box mercury__dir__Dir_1,
  MR_Box * mercury__dir__Error_2,
  MR_Word * mercury__dir__HaveFileName_3,
  MR_String * mercury__dir__FileName_4);

static void MR_CALL 
mercury__dir__make_directory_including_parents_2_5_p_0(
  MR_String mercury__dir___DirName_1,
  MR_Box * mercury__dir__Error_2,
  MR_Word * mercury__dir__CheckAccess_3);

static MR_Word MR_CALL 
mercury__dir__map__ho12_2_f_in__list_0(
  MR_Word mercury__dir__HeadVar__2_2);

static MR_Word MR_CALL 
mercury__dir__map__ho7_2_f_in__list_0(
  MR_Word mercury__dir__HeadVar__2_2);

static MR_Word MR_CALL 
mercury__dir__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_95_95_91_50_93_95_48_2_f_in__list_0(
  MR_Word mercury__dir__Var_12,
  MR_Word mercury__dir__HeadVar__2_2);

static MR_Word MR_CALL 
mercury__dir__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_52_95_95_91_50_93_95_48_2_f_in__list_0(
  MR_Word mercury__dir__Var_12,
  MR_Word mercury__dir__HeadVar__2_2);

static MR_Word MR_CALL 
mercury__dir__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_53_95_95_91_50_93_95_48_2_f_in__list_0(
  MR_Char mercury__dir__Var_12,
  MR_Word mercury__dir__HeadVar__2_2);

static void MR_CALL 
mercury__dir__find_matching_brace_or_comma_6_p_0(
  MR_Word mercury__dir__HeadVar__1_1,
  MR_Word mercury__dir__Alternatives0_2,
  MR_Word mercury__dir__CurAlternative_3,
  MR_Integer mercury__dir__BraceLevel_4,
  MR_Word * mercury__dir__Alternatives_5,
  MR_Word * mercury__dir__Left_6);

static void MR_CALL 
mercury__dir__foldl2_process_dir_12_p_0_2(
  MR_Box mercury__dir__closure_arg,
  MR_Box * mercury__dir__wrapper_arg_1);

static void MR_CALL 
mercury__dir__foldl2_process_dir_12_p_0_1(
  MR_Box mercury__dir__closure_arg,
  MR_Box * mercury__dir__wrapper_arg_1,
  MR_Box mercury__dir__wrapper_arg_2,
  MR_Box * mercury__dir__wrapper_arg_3);

static void MR_CALL 
mercury__dir__open_3_6_p_0(
  MR_String mercury__dir__DirName_1,
  MR_String mercury__dir__DirPattern_2,
  MR_Box * mercury__dir__Dir_3,
  MR_Box * mercury__dir__Error_4);

static void MR_CALL 
mercury__dir__make_directory_or_check_exists_4_p_0(
  MR_String mercury__dir__DirName_5,
  MR_Word * mercury__dir__Res_6);

static void MR_CALL 
mercury__dir__make_single_directory_2_5_p_0(
  MR_String mercury__dir__DirName_1,
  MR_Word * mercury__dir__Status_2,
  MR_Box * mercury__dir__Error_3);

static void MR_CALL 
mercury__dir__take_while__ho10_4_p_in__list_0(
  MR_Word mercury__dir__HeadVar__2_2,
  MR_Word * mercury__dir__HeadVar__3_3,
  MR_Word * mercury__dir__HeadVar__4_4);

static void MR_CALL 
mercury__dir__take_while__ho9_4_p_in__list_0(
  MR_Word mercury__dir__HeadVar__2_2,
  MR_Word * mercury__dir__HeadVar__3_3,
  MR_Word * mercury__dir__HeadVar__4_4);

static MR_Word MR_CALL 
mercury__dir__canonicalize_path_chars_2_2_f_0(
  MR_Word mercury__dir__HeadVar__1_1,
  MR_Word mercury__dir__HeadVar__2_2);

static void MR_CALL 
mercury__dir__take_while__ho11_4_p_in__list_0(
  MR_Word mercury__dir__HeadVar__2_2,
  MR_Word * mercury__dir__HeadVar__3_3,
  MR_Word * mercury__dir__HeadVar__4_4);

static MR_bool MR_CALL 
mercury__dir____Unify____foldl_pred_1_0_10001(
  MR_Box mercury__dir__wrapper_arg_1,
  MR_Box mercury__dir__wrapper_arg_2,
  MR_Box mercury__dir__wrapper_arg_3);

static void MR_CALL 
mercury__dir____Compare____foldl_pred_1_0_10001(
  MR_Box mercury__dir__wrapper_arg_1,
  MR_Box * mercury__dir__wrapper_arg_2,
  MR_Box mercury__dir__wrapper_arg_3,
  MR_Box mercury__dir__wrapper_arg_4);

static MR_bool MR_CALL 
mercury__dir____Unify____make_single_directory_status_0_0_10001(
  MR_Box mercury__dir__wrapper_arg_1,
  MR_Box mercury__dir__wrapper_arg_2);

static void MR_CALL 
mercury__dir____Compare____make_single_directory_status_0_0_10001(
  MR_Box * mercury__dir__wrapper_arg_1,
  MR_Box mercury__dir__wrapper_arg_2,
  MR_Box mercury__dir__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__dir____Unify____stream_0_0_10001(
  MR_Box mercury__dir__wrapper_arg_1,
  MR_Box mercury__dir__wrapper_arg_2);

static void MR_CALL 
mercury__dir____Compare____stream_0_0_10001(
  MR_Box * mercury__dir__wrapper_arg_1,
  MR_Box mercury__dir__wrapper_arg_2,
  MR_Box mercury__dir__wrapper_arg_3);


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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__dir_scalar_common_1[0]))
  },
  /* row 7 */
  {
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
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
#include "version_array.mh"



static const MR_VA_PseudoTypeInfo_Struct8 mercury__dir____vpti_pred_8__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0__plain_io__type_ctor_info_file_type_0__plain_bool__type_ctor_info_bool_0__pseudo_1__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 8,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_file_type_0,
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__dir__list__pti_list_1__plain_io__type_ctor_info_file_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_file_id_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct3 mercury__dir____vpti_tuple_3__plain_bool__type_ctor_info_bool_0__plain_io__type_ctor_info_res_0__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_res_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_VA_PseudoTypeInfo_Struct3 mercury__dir____vpti_pred_3__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 mercury__dir____vpti_tuple_2__pseudo_1__plain_io__type_ctor_info_state_0 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_state_0
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
  {     (MR_PseudoTypeInfo) &mercury__dir____vpti_pred_8__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0__plain_io__type_ctor_info_file_type_0__plain_bool__type_ctor_info_bool_0__pseudo_1__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0 },
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
  MR_Word * mercury__dir__HeadVar__1_1,
  MR_Box mercury__dir__HeadVar__2_2,
  MR_Box mercury__dir__HeadVar__3_3)
{
  {
    MR_Word mercury__dir__Cast_HeadVar1_4 = (MR_Word) mercury__dir__HeadVar__2_2;
    MR_Word mercury__dir__Cast_HeadVar2_5 = (MR_Word) mercury__dir__HeadVar__3_3;

    mercury__builtin____Compare____c_pointer_0_0(mercury__dir__HeadVar__1_1, mercury__dir__Cast_HeadVar1_4, mercury__dir__Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
mercury__dir____Unify____stream_0_0(
  MR_Box mercury__dir__HeadVar__1_1,
  MR_Box mercury__dir__HeadVar__2_2)
{
  {
    MR_bool mercury__dir__succeeded;
    MR_Word mercury__dir__Cast_HeadVar1_3 = (MR_Word) mercury__dir__HeadVar__1_1;
    MR_Word mercury__dir__Cast_HeadVar2_4 = (MR_Word) mercury__dir__HeadVar__2_2;

    mercury__dir__succeeded = mercury__builtin____Unify____c_pointer_0_0(mercury__dir__Cast_HeadVar1_3, mercury__dir__Cast_HeadVar2_4);
    return mercury__dir__succeeded;
  }
}

void MR_CALL 
mercury__dir____Compare____make_single_directory_status_0_0(
  MR_Word * mercury__dir__HeadVar__1_1,
  MR_Word mercury__dir__HeadVar__2_2,
  MR_Word mercury__dir__HeadVar__3_3)
{
  {
    MR_bool mercury__dir__succeeded;
    MR_Integer mercury__dir__Cast_HeadVar1_4 = (MR_Integer) mercury__dir__HeadVar__2_2;
    MR_Integer mercury__dir__Cast_HeadVar2_5 = (MR_Integer) mercury__dir__HeadVar__3_3;

    mercury__dir__succeeded = (mercury__dir__Cast_HeadVar1_4 < mercury__dir__Cast_HeadVar2_5);
    if (mercury__dir__succeeded)
      *mercury__dir__HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      mercury__dir__succeeded = (mercury__dir__Cast_HeadVar1_4 == mercury__dir__Cast_HeadVar2_5);
      if (mercury__dir__succeeded)
        *mercury__dir__HeadVar__1_1 = (MR_Integer) 0;
      else
        *mercury__dir__HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__dir____Unify____make_single_directory_status_0_0(
  MR_Word mercury__dir__HeadVar__2_1,
  MR_Word mercury__dir__HeadVar__2_2)
{
  {
    MR_bool mercury__dir__succeeded = (mercury__dir__HeadVar__2_1 == mercury__dir__HeadVar__2_2);

    return mercury__dir__succeeded;
  }
}

void MR_CALL 
mercury__dir____Compare____foldl_pred_1_0(
  MR_Word mercury__dir__TypeInfo_for_T_6,
  MR_Word * mercury__dir__HeadVar__1_1,
  MR_Word mercury__dir__HeadVar__2_2,
  MR_Word mercury__dir__HeadVar__3_3)
{
  {
    MR_Word mercury__dir__Cast_HeadVar1_4 = mercury__dir__HeadVar__2_2;
    MR_Word mercury__dir__Cast_HeadVar2_5 = mercury__dir__HeadVar__3_3;

    mercury__private_builtin__builtin_compare_pred_3_p_0(mercury__dir__HeadVar__1_1, (MR_Word) mercury__dir__Cast_HeadVar1_4, (MR_Word) mercury__dir__Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
mercury__dir____Unify____foldl_pred_1_0(
  MR_Word mercury__dir__TypeInfo_for_T_5,
  MR_Word mercury__dir__HeadVar__1_1,
  MR_Word mercury__dir__HeadVar__2_2)
{
  {
    MR_bool mercury__dir__succeeded;
    MR_Word mercury__dir__Cast_HeadVar1_3 = mercury__dir__HeadVar__1_1;
    MR_Word mercury__dir__Cast_HeadVar2_4 = mercury__dir__HeadVar__2_2;

    mercury__dir__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__dir__Cast_HeadVar1_3, (MR_Word) mercury__dir__Cast_HeadVar2_4);
    return mercury__dir__succeeded;
  }
}

MR_Word MR_CALL 
mercury__dir__expand_1_f_0(
  MR_Word mercury__dir__Chars_3)
{
  {
    MR_Word mercury__dir__HeadVar__2_2;
    MR_Word mercury__dir__Var_4 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__dir_scalar_common_1[7]);
    MR_Word mercury__dir__Var_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    MR_Word mercury__dir__Var_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

    mercury__dir__HeadVar__2_2 = mercury__dir__expand_acc_2_f_0(mercury__dir__Chars_3, mercury__dir__Var_4);
    return mercury__dir__HeadVar__2_2;
  }
}

void MR_CALL 
mercury__dir__foldl2_process_dir_aux_11_p_0(
  MR_Word mercury__dir__TypeInfo_for_T_29,
  MR_Box mercury__dir__Dir_12,
  MR_Word mercury__dir__SymLinkParent_13,
  MR_Word mercury__dir__P_14,
  MR_String mercury__dir__DirName_15,
  MR_Word mercury__dir__ParentIds_16,
  MR_Word mercury__dir__Recursive_17,
  MR_Word mercury__dir__FollowLinks_18,
  MR_Box mercury__dir__STATE_VARIABLE_Data_0_23,
  MR_Tuple * mercury__dir__HeadVar__9_9)
{
  {
    MR_Word mercury__dir__Continue_20;
    MR_Word mercury__dir__Res_21;
    MR_Box mercury__dir__STATE_VARIABLE_Data_24;

    mercury__dir__foldl2_process_dir_entries_13_p_0(mercury__dir__TypeInfo_for_T_29, mercury__dir__Dir_12, mercury__dir__SymLinkParent_13, mercury__dir__P_14, mercury__dir__DirName_15, mercury__dir__ParentIds_16, mercury__dir__Recursive_17, mercury__dir__FollowLinks_18, &mercury__dir__Continue_20, &mercury__dir__Res_21, mercury__dir__STATE_VARIABLE_Data_0_23, &mercury__dir__STATE_VARIABLE_Data_24);
    {
      MR_Tuple base;
      base = (MR_Tuple) MR_new_object(MR_Tuple, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      *mercury__dir__HeadVar__9_9 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__dir__Continue_20));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (mercury__dir__Res_21));
      MR_hl_field(MR_mktag(0), base, 2) = mercury__dir__STATE_VARIABLE_Data_24;
    }
  }
}

void MR_CALL 
mercury__dir__foldl2_process_dir_entries_13_p_0(
  MR_Word mercury__dir__TypeInfo_for_T_56,
  MR_Box mercury__dir__Dir_14,
  MR_Word mercury__dir__SymLinkParent_15,
  MR_Word mercury__dir__P_16,
  MR_String mercury__dir__DirName_17,
  MR_Word mercury__dir__ParentIds_18,
  MR_Word mercury__dir__Recursive_19,
  MR_Word mercury__dir__FollowLinks_20,
  MR_Word * mercury__dir__Continue_21,
  MR_Word * mercury__dir__Res_22,
  MR_Box mercury__dir__STATE_VARIABLE_Data_0_37,
  MR_Box * mercury__dir__STATE_VARIABLE_Data_38)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__dir__succeeded;
      MR_Word mercury__dir__ReadRes_25;

      mercury__dir__read_entry_4_p_0(mercury__dir__Dir_14, &mercury__dir__ReadRes_25);
      switch (MR_tag((MR_Word) mercury__dir__ReadRes_25)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *mercury__dir__Continue_21 = (MR_Integer) 1;
            *mercury__dir__Res_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *mercury__dir__STATE_VARIABLE_Data_38 = mercury__dir__STATE_VARIABLE_Data_0_37;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String mercury__dir__FileName_26 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__dir__ReadRes_25, (MR_Integer) 0)));
            MR_String mercury__dir__PathName_27;
            MR_Word mercury__dir__FileTypeRes_28;

            mercury__dir__PathName_27 = mercury__dir__f_slash_2_f_0(mercury__dir__DirName_17, mercury__dir__FileName_26);
            mercury__io__file_type_5_p_0((MR_Integer) 0, mercury__dir__PathName_27, &mercury__dir__FileTypeRes_28);
            if (((MR_tag((MR_Word) mercury__dir__FileTypeRes_28)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_Word mercury__dir__Error_36 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__FileTypeRes_28, (MR_Integer) 0)));

              *mercury__dir__Continue_21 = (MR_Integer) 0;
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *mercury__dir__Res_22 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__dir__Error_36));
              }
              *mercury__dir__STATE_VARIABLE_Data_38 = mercury__dir__STATE_VARIABLE_Data_0_37;
            }
            else
            {
              MR_Word mercury__dir__FileType_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__dir__FileTypeRes_28, (MR_Integer) 0)));
              MR_Word mercury__dir__Continue0_30;
              MR_Box mercury__dir__STATE_VARIABLE_Data_44_44;
              void MR_CALL (* mercury__dir__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__dir__P_16, (MR_Integer) 1)));
              MR_Box mercury__dir__conv2_Continue0_30;
              MR_Box mercury__dir__conv1_STATE_VARIABLE_IO_45_45;

              mercury__dir__func_0(((MR_Box) mercury__dir__P_16), ((MR_Box) (mercury__dir__DirName_17)), ((MR_Box) (mercury__dir__FileName_26)), ((MR_Box) (mercury__dir__FileType_29)), &mercury__dir__conv2_Continue0_30, mercury__dir__STATE_VARIABLE_Data_0_37, &mercury__dir__STATE_VARIABLE_Data_44_44, ((MR_Box) ((MR_Integer) 0)), &mercury__dir__conv1_STATE_VARIABLE_IO_45_45);
              mercury__dir__Continue0_30 = ((MR_Word) mercury__dir__conv2_Continue0_30);
              switch (mercury__dir__Continue0_30) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    *mercury__dir__Continue_21 = (MR_Integer) 0;
                    *mercury__dir__Res_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    *mercury__dir__STATE_VARIABLE_Data_38 = mercury__dir__STATE_VARIABLE_Data_44_44;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word mercury__dir__Continue1_31;
                    MR_Word mercury__dir__Res1_32;
                    MR_Box mercury__dir__STATE_VARIABLE_Data_46_46;

                    mercury__dir__succeeded = (mercury__dir__Recursive_19 == (MR_Integer) 1);
                    if (mercury__dir__succeeded)
                      mercury__dir__succeeded = (mercury__dir__FileType_29 == (MR_Integer) 1);
                    if (mercury__dir__succeeded)
                      mercury__dir__foldl2_process_dir_12_p_0(mercury__dir__TypeInfo_for_T_56, mercury__dir__SymLinkParent_15, mercury__dir__P_16, mercury__dir__PathName_27, mercury__dir__ParentIds_18, mercury__dir__Recursive_19, mercury__dir__FollowLinks_20, &mercury__dir__Continue1_31, &mercury__dir__Res1_32, mercury__dir__STATE_VARIABLE_Data_44_44, &mercury__dir__STATE_VARIABLE_Data_46_46);
                    else
                    {
                      mercury__dir__succeeded = (mercury__dir__Recursive_19 == (MR_Integer) 1);
                      if (mercury__dir__succeeded)
                      {
                        mercury__dir__succeeded = (mercury__dir__FileType_29 == (MR_Integer) 2);
                        if (mercury__dir__succeeded)
                          mercury__dir__succeeded = (mercury__dir__FollowLinks_20 == (MR_Integer) 1);
                      }
                      if (mercury__dir__succeeded)
                      {
                        MR_Word mercury__dir__TargetTypeRes_33;

                        mercury__io__file_type_5_p_0((MR_Integer) 1, mercury__dir__PathName_27, &mercury__dir__TargetTypeRes_33);
                        if (((MR_tag((MR_Word) mercury__dir__TargetTypeRes_33)) == (MR_mktag((MR_Integer) 1))))
                        {
                          MR_Word mercury__dir__TargetTypeError_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__TargetTypeRes_33, (MR_Integer) 0)));

                          mercury__dir__Continue1_31 = (MR_Integer) 0;
                          {
                            mercury__dir__Res1_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(MR_mktag(1), mercury__dir__Res1_32, 0) = ((MR_Box) (mercury__dir__TargetTypeError_35));
                          }
                          mercury__dir__STATE_VARIABLE_Data_46_46 = mercury__dir__STATE_VARIABLE_Data_44_44;
                        }
                        else
                        {
                          MR_Word mercury__dir__TargetType_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__dir__TargetTypeRes_33, (MR_Integer) 0)));

                          switch (mercury__dir__TargetType_34) {
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
                                mercury__dir__Continue1_31 = (MR_Integer) 1;
                                mercury__dir__Res1_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                                mercury__dir__STATE_VARIABLE_Data_46_46 = mercury__dir__STATE_VARIABLE_Data_44_44;
                              }
                              break;
                            case (MR_Integer) 1:
                              {
                                mercury__dir__foldl2_process_dir_12_p_0(mercury__dir__TypeInfo_for_T_56, (MR_Integer) 1, mercury__dir__P_16, mercury__dir__PathName_27, mercury__dir__ParentIds_18, mercury__dir__Recursive_19, mercury__dir__FollowLinks_20, &mercury__dir__Continue1_31, &mercury__dir__Res1_32, mercury__dir__STATE_VARIABLE_Data_44_44, &mercury__dir__STATE_VARIABLE_Data_46_46);
                              }
                              break;
                          }
                        }
                      }
                      else
                      {
                        mercury__dir__Continue1_31 = (MR_Integer) 1;
                        mercury__dir__Res1_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                        mercury__dir__STATE_VARIABLE_Data_46_46 = mercury__dir__STATE_VARIABLE_Data_44_44;
                      }
                    }
                    mercury__dir__succeeded = (mercury__dir__Continue1_31 == (MR_Integer) 1);
                    if (mercury__dir__succeeded)
                      mercury__dir__succeeded = (mercury__dir__Res1_32 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                    if (mercury__dir__succeeded)
                    {
                      /* direct tailcall eliminated */
                      {
                        MR_Box mercury__dir__next_value_of_STATE_VARIABLE_Data_0_37 = mercury__dir__STATE_VARIABLE_Data_46_46;

                        mercury__dir__STATE_VARIABLE_Data_0_37 = mercury__dir__next_value_of_STATE_VARIABLE_Data_0_37;
                      }
                      continue;
                    }
                    else
                    {
                      *mercury__dir__Continue_21 = (MR_Integer) 0;
                      *mercury__dir__Res_22 = mercury__dir__Res1_32;
                      *mercury__dir__STATE_VARIABLE_Data_38 = mercury__dir__STATE_VARIABLE_Data_46_46;
                    }
                  }
                  break;
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mercury__dir__Error_55 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__dir__ReadRes_25, (MR_Integer) 0)));

            *mercury__dir__Continue_21 = (MR_Integer) 0;
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mercury__dir__Res_22 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__dir__Error_55));
            }
            *mercury__dir__STATE_VARIABLE_Data_38 = mercury__dir__STATE_VARIABLE_Data_0_37;
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__dir__read_entry_4_p_0(
  MR_Box mercury__dir__Dir_5,
  MR_Word * mercury__dir__Res_6)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__dir__succeeded;
      MR_Box mercury__dir__MaybeWin32Error_8;
      MR_Word mercury__dir__HaveFileName_9;
      MR_String mercury__dir__FileName_10;
      MR_Word mercury__dir__IOError_11;
      MR_String mercury__dir__V_6_21;

      mercury__dir__read_entry_2_6_p_0(mercury__dir__Dir_5, &mercury__dir__MaybeWin32Error_8, &mercury__dir__HaveFileName_9, &mercury__dir__FileName_10);
{
#define MR_PROC_LABEL mercury__dir__read_entry_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__dir__MaybeWin32Error_8 , Error);
		{

    /* This works for errno and Win32 error values (ERROR_SUCCESS == 0). */
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__dir__succeeded  = SUCCESS_INDICATOR;
}
      if (mercury__dir__succeeded)
        mercury__dir__succeeded = MR_FALSE;
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
mercury__dir__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__dir__succeeded)
        {
{
#define MR_PROC_LABEL mercury__dir__read_entry_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__dir__MaybeWin32Error_8 , Error);
	Msg0 =  (MR_String) "dir.foldl2: reading directory entry failed: " ;
		{

#ifdef MR_WIN32
    ML_make_win32_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);
#else
    MR_fatal_error("io.make_win32_err_msg called on non-Windows platform");
#endif


		;}
#undef MR_PROC_LABEL
	 mercury__dir__V_6_21  = Msg;
}
        }
        else
        {
{
#define MR_PROC_LABEL mercury__dir__read_entry_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__dir__MaybeWin32Error_8 , Error);
	Msg0 =  (MR_String) "dir.foldl2: reading directory entry failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__dir__V_6_21  = Msg;
}
        }
        mercury__dir__succeeded = MR_TRUE;
      }
      if (mercury__dir__succeeded)
      {
        mercury__dir__IOError_11 = (MR_Word) mercury__dir__V_6_21;
        mercury__dir__succeeded = MR_TRUE;
      }
      if (mercury__dir__succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mercury__dir__Res_6 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__dir__IOError_11));
        }
      else
        switch (mercury__dir__HaveFileName_9) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *mercury__dir__Res_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 1:
            {
              mercury__dir__succeeded = (strcmp(mercury__dir__FileName_10, (MR_String) ".") == 0);
              if (!(mercury__dir__succeeded))
              {
                mercury__dir__succeeded = (strcmp(mercury__dir__FileName_10, (MR_String) "..") == 0);
              }
              if (mercury__dir__succeeded)
              {
                /* direct tailcall eliminated */
                continue;
              }
              else
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__dir__Res_6 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__dir__FileName_10));
                }
            }
            break;
        }
    }
    break;
  }
}

static void MR_CALL 
mercury__dir__read_entry_2_6_p_0(
  MR_Box mercury__dir__Dir_1,
  MR_Box * mercury__dir__Error_2,
  MR_Word * mercury__dir__HaveFileName_3,
  MR_String * mercury__dir__FileName_4)
{
  {
{
#define MR_PROC_LABEL mercury__dir__read_entry_2_6_p_0

	ML_DIR_STREAM Dir;
	MR_Integer Error;
	MR_Word HaveFileName;
	MR_String FileName;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(ML_DIR_STREAM, mercury__dir__Dir_1 , Dir);
		{

#if defined(MR_WIN32)
    WIN32_FIND_DATAW file_data;

    if (Dir->handle == INVALID_HANDLE_VALUE) {
        /* Directory was empty when opened. */
        Error = 0;
        HaveFileName = MR_NO;
        FileName = MR_make_string_const("");
    } else if (Dir->pending_entry != NULL) {
        /* FindFirstFileW already returned the first entry. */
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

    errno = 0;          /* to detect end-of-stream */
    dir_entry = readdir(Dir);
    if (dir_entry == NULL) {
        Error = errno;  /* remains zero at end-of-stream */
        HaveFileName = MR_NO;
        FileName = MR_make_string_const("");
    } else {
        Error = 0;
        HaveFileName = MR_YES;
        MR_make_aligned_string_copy_msg(FileName, dir_entry->d_name,
            MR_ALLOC_ID);
    }

#else /* !MR_WIN32 && !(MR_HAVE_READDIR etc.) */
    Error = ENOSYS;
    HaveFileName = MR_NO;
    FileName = MR_make_string_const("");
#endif


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *mercury__dir__Error_2 );
	 *mercury__dir__HaveFileName_3  = HaveFileName;
	 *mercury__dir__FileName_4  = FileName;
}
  }
}

static void MR_CALL 
mercury__dir__make_directory_including_parents_2_5_p_0(
  MR_String mercury__dir___DirName_1,
  MR_Box * mercury__dir__Error_2,
  MR_Word * mercury__dir__CheckAccess_3)
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *mercury__dir__Error_2 );
	 *mercury__dir__CheckAccess_3  = CheckAccess;
}
  }
}

MR_Char MR_CALL 
mercury__dir__alt_directory_separator_0_f_0(void)
{
  {
    MR_bool mercury__dir__succeeded;
    MR_Char mercury__dir__HeadVar__1_1;

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
mercury__dir__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__dir__succeeded)
      mercury__dir__HeadVar__1_1 = (MR_Char) 92;
    else
      mercury__dir__HeadVar__1_1 = (MR_Char) 47;
    return mercury__dir__HeadVar__1_1;
  }
}

MR_bool MR_CALL 
mercury__dir__use_windows_paths_0_p_0(void)
{
  {
    MR_bool mercury__dir__succeeded;
    MR_Char mercury__dir__Var_1;

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
mercury__dir__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__dir__succeeded)
      mercury__dir__Var_1 = (MR_Char) 92;
    else
      mercury__dir__Var_1 = (MR_Char) 47;
    mercury__dir__succeeded = (mercury__dir__Var_1 == (MR_Char) 92);
    return mercury__dir__succeeded;
  }
}

MR_Word MR_CALL 
mercury__dir__expand_braces_1_f_0(
  MR_String mercury__dir__ArgStr_3)
{
  {
    MR_Word mercury__dir__ExpandStrs_4;
    MR_Word mercury__dir__ArgChar_5;
    MR_Word mercury__dir__ExpandChars_6;
    MR_Word mercury__dir__Var_15;
    MR_Word mercury__dir__Var_16;
    MR_Word mercury__dir__Var_17;

    mercury__string__to_char_list_2_p_0(mercury__dir__ArgStr_3, &mercury__dir__ArgChar_5);
    mercury__dir__Var_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__dir__Var_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__dir__Var_15 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__dir_scalar_common_1[7]);
    mercury__dir__ExpandChars_6 = mercury__dir__expand_acc_2_f_0(mercury__dir__ArgChar_5, mercury__dir__Var_15);
    mercury__dir__ExpandStrs_4 = mercury__dir__map__ho12_2_f_in__list_0(mercury__dir__ExpandChars_6);
    return mercury__dir__ExpandStrs_4;
  }
}

static MR_Word MR_CALL 
mercury__dir__map__ho12_2_f_in__list_0(
  MR_Word mercury__dir__HeadVar__2_2)
{
  {
    MR_Word mercury__dir__HeadVar__3_3;

    if ((mercury__dir__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__dir__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word mercury__dir__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word mercury__dir__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__HeadVar__2_2, (MR_Integer) 1)));
      MR_String mercury__dir__V_8_8;
      MR_Word mercury__dir__V_9_9;

      mercury__string__from_char_list_2_p_0(mercury__dir__V_6_6, &mercury__dir__V_8_8);
      mercury__dir__V_9_9 = mercury__dir__map__ho12_2_f_in__list_0(mercury__dir__V_7_7);
      {
        mercury__dir__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__dir__HeadVar__3_3, 0) = ((MR_Box) (mercury__dir__V_8_8));
        MR_hl_field(MR_mktag(1), mercury__dir__HeadVar__3_3, 1) = ((MR_Box) (mercury__dir__V_9_9));
      }
    }
    return mercury__dir__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__dir__map__ho7_2_f_in__list_0(
  MR_Word mercury__dir__HeadVar__2_2)
{
  {
    MR_Word mercury__dir__HeadVar__3_3;

    if ((mercury__dir__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__dir__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word mercury__dir__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word mercury__dir__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word mercury__dir__V_8_8;
      MR_Word mercury__dir__V_9_9;
      MR_Word mercury__dir__Var_13 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__dir_scalar_common_1[7]);
      MR_Word mercury__dir__Var_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      MR_Word mercury__dir__Var_15 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

      mercury__dir__V_8_8 = mercury__dir__expand_acc_2_f_0(mercury__dir__V_6_6, mercury__dir__Var_13);
      mercury__dir__V_9_9 = mercury__dir__map__ho7_2_f_in__list_0(mercury__dir__V_7_7);
      {
        mercury__dir__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__dir__HeadVar__3_3, 0) = ((MR_Box) (mercury__dir__V_8_8));
        MR_hl_field(MR_mktag(1), mercury__dir__HeadVar__3_3, 1) = ((MR_Box) (mercury__dir__V_9_9));
      }
    }
    return mercury__dir__HeadVar__3_3;
  }
}

MR_Word MR_CALL 
mercury__dir__expand_acc_2_f_0(
  MR_Word mercury__dir__HeadVar__1_1,
  MR_Word mercury__dir__HeadVar__2_2)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__dir__succeeded;
      MR_Word mercury__dir__HeadVar__3_3;

      if ((mercury__dir__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        mercury__dir__HeadVar__3_3 = mercury__dir__HeadVar__2_2;
      else
      {
        MR_Char mercury__dir__Char_5 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__dir__Chars_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__HeadVar__1_1, (MR_Integer) 1)));

        mercury__dir__succeeded = (mercury__dir__Char_5 == (MR_Char) 123);
        if (mercury__dir__succeeded)
        {
          MR_Word mercury__dir__TypeInfo_19_19;
          MR_Word mercury__dir__TypeCtorInfo_9_41;
          MR_Word mercury__dir__TypeInfo_10_51;
          MR_Word mercury__dir__Alternatives0_9;
          MR_Word mercury__dir__Left_10;
          MR_Word mercury__dir__AlternativeLists_11;
          MR_Word mercury__dir__Alternatives_12;
          MR_Word mercury__dir__PrefixLists_13;
          MR_Word mercury__dir__Prefixes1_14;
          MR_Word mercury__dir__Var_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          MR_Word mercury__dir__Var_32 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          MR_Word mercury__dir__V_5_38;
          MR_Word mercury__dir__V_6_39;
          MR_Word mercury__dir__V_5_47;
          MR_Word mercury__dir__V_6_48;

          mercury__dir__find_matching_brace_or_comma_6_p_0(mercury__dir__Chars_6, mercury__dir__Var_31, mercury__dir__Var_32, (MR_Integer) 0, &mercury__dir__Alternatives0_9, &mercury__dir__Left_10);
          mercury__dir__TypeInfo_19_19 = (MR_Word) &mercury__dir_scalar_common_1[0];
          mercury__dir__AlternativeLists_11 = mercury__dir__map__ho7_2_f_in__list_0(mercury__dir__Alternatives0_9);
          mercury__dir__TypeCtorInfo_9_41 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
          mercury__dir__TypeInfo_10_51 = (MR_Word) &mercury__dir_scalar_common_1[6];
          mercury__list__reverse_2_p_0(mercury__dir__TypeInfo_10_51, mercury__dir__AlternativeLists_11, &mercury__dir__V_5_38);
          mercury__dir__V_6_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          mercury__list__condense_acc_3_p_0(mercury__dir__TypeInfo_19_19, mercury__dir__V_5_38, mercury__dir__V_6_39, &mercury__dir__Alternatives_12);
          mercury__dir__PrefixLists_13 = mercury__dir__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_95_95_91_50_93_95_48_2_f_in__list_0(mercury__dir__Alternatives_12, mercury__dir__HeadVar__2_2);
          mercury__list__reverse_2_p_0(mercury__dir__TypeInfo_10_51, mercury__dir__PrefixLists_13, &mercury__dir__V_5_47);
          mercury__dir__V_6_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          mercury__list__condense_acc_3_p_0(mercury__dir__TypeInfo_19_19, mercury__dir__V_5_47, mercury__dir__V_6_48, &mercury__dir__Prefixes1_14);
          /* direct tailcall eliminated */
          {
            MR_Word mercury__dir__next_value_of_HeadVar__1_1 = mercury__dir__Left_10;
            MR_Word mercury__dir__next_value_of_HeadVar__2_2 = mercury__dir__Prefixes1_14;

            mercury__dir__HeadVar__2_2 = mercury__dir__next_value_of_HeadVar__2_2;
            mercury__dir__HeadVar__1_1 = mercury__dir__next_value_of_HeadVar__1_1;
          }
          continue;
        }
        else
        {
          MR_Word mercury__dir__Prefixes1_18;

          mercury__dir__Prefixes1_18 = mercury__dir__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_53_95_95_91_50_93_95_48_2_f_in__list_0(mercury__dir__Char_5, mercury__dir__HeadVar__2_2);
          /* direct tailcall eliminated */
          {
            MR_Word mercury__dir__next_value_of_HeadVar__1_1 = mercury__dir__Chars_6;
            MR_Word mercury__dir__next_value_of_HeadVar__2_2 = mercury__dir__Prefixes1_18;

            mercury__dir__HeadVar__2_2 = mercury__dir__next_value_of_HeadVar__2_2;
            mercury__dir__HeadVar__1_1 = mercury__dir__next_value_of_HeadVar__1_1;
          }
          continue;
        }
      }
      return mercury__dir__HeadVar__3_3;
    }
    break;
  }
}

static MR_Word MR_CALL 
mercury__dir__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_95_95_91_50_93_95_48_2_f_in__list_0(
  MR_Word mercury__dir__Var_12,
  MR_Word mercury__dir__HeadVar__2_2)
{
  {
    MR_Word mercury__dir__HeadVar__3_3;

    if ((mercury__dir__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__dir__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word mercury__dir__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word mercury__dir__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word mercury__dir__V_8_8;
      MR_Word mercury__dir__V_9_9;

      mercury__dir__V_8_8 = mercury__dir__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_52_95_95_91_50_93_95_48_2_f_in__list_0(mercury__dir__V_6_6, mercury__dir__Var_12);
      mercury__dir__V_9_9 = mercury__dir__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_54_95_95_91_50_93_95_48_2_f_in__list_0(mercury__dir__Var_12, mercury__dir__V_7_7);
      {
        mercury__dir__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__dir__HeadVar__3_3, 0) = ((MR_Box) (mercury__dir__V_8_8));
        MR_hl_field(MR_mktag(1), mercury__dir__HeadVar__3_3, 1) = ((MR_Box) (mercury__dir__V_9_9));
      }
    }
    return mercury__dir__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__dir__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_52_95_95_91_50_93_95_48_2_f_in__list_0(
  MR_Word mercury__dir__Var_12,
  MR_Word mercury__dir__HeadVar__2_2)
{
  {
    MR_Word mercury__dir__HeadVar__3_3;

    if ((mercury__dir__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__dir__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word mercury__dir__TypeCtorInfo_10_19 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
      MR_Word mercury__dir__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word mercury__dir__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word mercury__dir__V_8_8;
      MR_Word mercury__dir__V_9_9;

      mercury__list__append_3_p_1(mercury__dir__TypeCtorInfo_10_19, mercury__dir__Var_12, mercury__dir__V_6_6, &mercury__dir__V_8_8);
      mercury__dir__V_9_9 = mercury__dir__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_52_95_95_91_50_93_95_48_2_f_in__list_0(mercury__dir__Var_12, mercury__dir__V_7_7);
      {
        mercury__dir__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__dir__HeadVar__3_3, 0) = ((MR_Box) (mercury__dir__V_8_8));
        MR_hl_field(MR_mktag(1), mercury__dir__HeadVar__3_3, 1) = ((MR_Box) (mercury__dir__V_9_9));
      }
    }
    return mercury__dir__HeadVar__3_3;
  }
}

static MR_Word MR_CALL 
mercury__dir__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_53_95_95_91_50_93_95_48_2_f_in__list_0(
  MR_Char mercury__dir__Var_12,
  MR_Word mercury__dir__HeadVar__2_2)
{
  {
    MR_Word mercury__dir__HeadVar__3_3;

    if ((mercury__dir__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      mercury__dir__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_Word mercury__dir__TypeCtorInfo_8_17 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
      MR_Word mercury__dir__V_6_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word mercury__dir__V_7_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word mercury__dir__V_8_8;
      MR_Word mercury__dir__V_9_9;
      MR_Word mercury__dir__Var_15;
      MR_Word mercury__dir__Var_16 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

      {
        mercury__dir__Var_15 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__dir__Var_15, 0) = ((MR_Box) (MR_Word) (mercury__dir__Var_12));
        MR_hl_field(MR_mktag(1), mercury__dir__Var_15, 1) = ((MR_Box) (mercury__dir__Var_16));
      }
      mercury__list__append_3_p_1(mercury__dir__TypeCtorInfo_8_17, mercury__dir__V_6_6, mercury__dir__Var_15, &mercury__dir__V_8_8);
      mercury__dir__V_9_9 = mercury__dir__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_53_95_95_91_50_93_95_48_2_f_in__list_0(mercury__dir__Var_12, mercury__dir__V_7_7);
      {
        mercury__dir__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__dir__HeadVar__3_3, 0) = ((MR_Box) (mercury__dir__V_8_8));
        MR_hl_field(MR_mktag(1), mercury__dir__HeadVar__3_3, 1) = ((MR_Box) (mercury__dir__V_9_9));
      }
    }
    return mercury__dir__HeadVar__3_3;
  }
}

static void MR_CALL 
mercury__dir__find_matching_brace_or_comma_6_p_0(
  MR_Word mercury__dir__HeadVar__1_1,
  MR_Word mercury__dir__Alternatives0_2,
  MR_Word mercury__dir__CurAlternative_3,
  MR_Integer mercury__dir__BraceLevel_4,
  MR_Word * mercury__dir__Alternatives_5,
  MR_Word * mercury__dir__Left_6)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__dir__succeeded;

      if ((mercury__dir__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word mercury__dir__TypeCtorInfo_42_42 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;

        {
          mercury__exception__throw_1_p_0(mercury__dir__TypeCtorInfo_42_42, ((MR_Box) ((MR_String) "no matching brace")));
          return;
        }
      }
      else
      {
        MR_Char mercury__dir__Char_13 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__dir__Chars_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__HeadVar__1_1, (MR_Integer) 1)));

        mercury__dir__succeeded = (mercury__dir__Char_13 == (MR_Char) 125);
        if (mercury__dir__succeeded)
        {
          mercury__dir__succeeded = (mercury__dir__BraceLevel_4 == (MR_Integer) 0);
          if (mercury__dir__succeeded)
          {
            MR_Word mercury__dir__TypeInfo_43_43;
            MR_Word mercury__dir__Var_21;
            MR_Word mercury__dir__Var_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

            {
              mercury__dir__Var_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__dir__Var_21, 0) = ((MR_Box) (mercury__dir__CurAlternative_3));
              MR_hl_field(MR_mktag(1), mercury__dir__Var_21, 1) = ((MR_Box) (mercury__dir__Var_22));
            }
            mercury__dir__TypeInfo_43_43 = (MR_Word) &mercury__dir_scalar_common_1[0];
            mercury__list__append_3_p_1(mercury__dir__TypeInfo_43_43, mercury__dir__Alternatives0_2, mercury__dir__Var_21, mercury__dir__Alternatives_5);
            *mercury__dir__Left_6 = mercury__dir__Chars_14;
          }
          else
          {
            MR_Word mercury__dir__TypeCtorInfo_44_44 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
            MR_Word mercury__dir__Var_23;
            MR_Integer mercury__dir__Var_24;
            MR_Word mercury__dir__Var_25;
            MR_Word mercury__dir__Var_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

            {
              mercury__dir__Var_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__dir__Var_25, 0) = ((MR_Box) (MR_Word) (mercury__dir__Char_13));
              MR_hl_field(MR_mktag(1), mercury__dir__Var_25, 1) = ((MR_Box) (mercury__dir__Var_26));
            }
            mercury__list__append_3_p_1(mercury__dir__TypeCtorInfo_44_44, mercury__dir__CurAlternative_3, mercury__dir__Var_25, &mercury__dir__Var_23);
            mercury__dir__Var_24 = (mercury__dir__BraceLevel_4 - (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Word mercury__dir__next_value_of_HeadVar__1_1 = mercury__dir__Chars_14;
              MR_Word mercury__dir__next_value_of_CurAlternative_3 = mercury__dir__Var_23;
              MR_Integer mercury__dir__next_value_of_BraceLevel_4 = mercury__dir__Var_24;

              mercury__dir__BraceLevel_4 = mercury__dir__next_value_of_BraceLevel_4;
              mercury__dir__CurAlternative_3 = mercury__dir__next_value_of_CurAlternative_3;
              mercury__dir__HeadVar__1_1 = mercury__dir__next_value_of_HeadVar__1_1;
            }
            continue;
          }
        }
        else
        {
          mercury__dir__succeeded = (mercury__dir__Char_13 == (MR_Char) 123);
          if (mercury__dir__succeeded)
          {
            MR_Word mercury__dir__TypeCtorInfo_45_45 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
            MR_Word mercury__dir__Var_28;
            MR_Integer mercury__dir__Var_29;
            MR_Word mercury__dir__Var_30;
            MR_Word mercury__dir__Var_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

            {
              mercury__dir__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__dir__Var_30, 0) = ((MR_Box) (MR_Word) (mercury__dir__Char_13));
              MR_hl_field(MR_mktag(1), mercury__dir__Var_30, 1) = ((MR_Box) (mercury__dir__Var_31));
            }
            mercury__list__append_3_p_1(mercury__dir__TypeCtorInfo_45_45, mercury__dir__CurAlternative_3, mercury__dir__Var_30, &mercury__dir__Var_28);
            mercury__dir__Var_29 = (mercury__dir__BraceLevel_4 + (MR_Integer) 1);
            /* direct tailcall eliminated */
            {
              MR_Word mercury__dir__next_value_of_HeadVar__1_1 = mercury__dir__Chars_14;
              MR_Word mercury__dir__next_value_of_CurAlternative_3 = mercury__dir__Var_28;
              MR_Integer mercury__dir__next_value_of_BraceLevel_4 = mercury__dir__Var_29;

              mercury__dir__BraceLevel_4 = mercury__dir__next_value_of_BraceLevel_4;
              mercury__dir__CurAlternative_3 = mercury__dir__next_value_of_CurAlternative_3;
              mercury__dir__HeadVar__1_1 = mercury__dir__next_value_of_HeadVar__1_1;
            }
            continue;
          }
          else
          {
            mercury__dir__succeeded = (mercury__dir__Char_13 == (MR_Char) 44);
            if (mercury__dir__succeeded)
            {
              mercury__dir__succeeded = (mercury__dir__BraceLevel_4 == (MR_Integer) 0);
              if (mercury__dir__succeeded)
              {
                MR_Word mercury__dir__TypeInfo_46_46;
                MR_Word mercury__dir__Alternatives1_20;
                MR_Word mercury__dir__Var_33;
                MR_Word mercury__dir__Var_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                MR_Word mercury__dir__Var_35;

                {
                  mercury__dir__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__dir__Var_33, 0) = ((MR_Box) (mercury__dir__CurAlternative_3));
                  MR_hl_field(MR_mktag(1), mercury__dir__Var_33, 1) = ((MR_Box) (mercury__dir__Var_34));
                }
                mercury__dir__TypeInfo_46_46 = (MR_Word) &mercury__dir_scalar_common_1[0];
                mercury__list__append_3_p_1(mercury__dir__TypeInfo_46_46, mercury__dir__Alternatives0_2, mercury__dir__Var_33, &mercury__dir__Alternatives1_20);
                mercury__dir__Var_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__dir__next_value_of_HeadVar__1_1 = mercury__dir__Chars_14;
                  MR_Word mercury__dir__next_value_of_Alternatives0_2 = mercury__dir__Alternatives1_20;
                  MR_Word mercury__dir__next_value_of_CurAlternative_3 = mercury__dir__Var_35;

                  mercury__dir__CurAlternative_3 = mercury__dir__next_value_of_CurAlternative_3;
                  mercury__dir__Alternatives0_2 = mercury__dir__next_value_of_Alternatives0_2;
                  mercury__dir__HeadVar__1_1 = mercury__dir__next_value_of_HeadVar__1_1;
                }
                continue;
              }
              else
              {
                MR_Word mercury__dir__TypeCtorInfo_47_47 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
                MR_Word mercury__dir__Var_36;
                MR_Word mercury__dir__Var_37;
                MR_Word mercury__dir__Var_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                {
                  mercury__dir__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__dir__Var_37, 0) = ((MR_Box) (MR_Word) (mercury__dir__Char_13));
                  MR_hl_field(MR_mktag(1), mercury__dir__Var_37, 1) = ((MR_Box) (mercury__dir__Var_38));
                }
                mercury__list__append_3_p_1(mercury__dir__TypeCtorInfo_47_47, mercury__dir__CurAlternative_3, mercury__dir__Var_37, &mercury__dir__Var_36);
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__dir__next_value_of_HeadVar__1_1 = mercury__dir__Chars_14;
                  MR_Word mercury__dir__next_value_of_CurAlternative_3 = mercury__dir__Var_36;

                  mercury__dir__CurAlternative_3 = mercury__dir__next_value_of_CurAlternative_3;
                  mercury__dir__HeadVar__1_1 = mercury__dir__next_value_of_HeadVar__1_1;
                }
                continue;
              }
            }
            else
            {
              MR_Word mercury__dir__TypeCtorInfo_48_48 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
              MR_Word mercury__dir__Var_39;
              MR_Word mercury__dir__Var_40;
              MR_Word mercury__dir__Var_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

              {
                mercury__dir__Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__dir__Var_40, 0) = ((MR_Box) (MR_Word) (mercury__dir__Char_13));
                MR_hl_field(MR_mktag(1), mercury__dir__Var_40, 1) = ((MR_Box) (mercury__dir__Var_41));
              }
              mercury__list__append_3_p_1(mercury__dir__TypeCtorInfo_48_48, mercury__dir__CurAlternative_3, mercury__dir__Var_40, &mercury__dir__Var_39);
              /* direct tailcall eliminated */
              {
                MR_Word mercury__dir__next_value_of_HeadVar__1_1 = mercury__dir__Chars_14;
                MR_Word mercury__dir__next_value_of_CurAlternative_3 = mercury__dir__Var_39;

                mercury__dir__CurAlternative_3 = mercury__dir__next_value_of_CurAlternative_3;
                mercury__dir__HeadVar__1_1 = mercury__dir__next_value_of_HeadVar__1_1;
              }
              continue;
            }
          }
        }
      }
    }
    break;
  }
}

void MR_CALL 
mercury__dir__recursive_foldl2_7_p_0(
  MR_Word mercury__dir__TypeInfo_for_T_25,
  MR_Word mercury__dir__P_8,
  MR_String mercury__dir__DirName_9,
  MR_Word mercury__dir__FollowLinks_10,
  MR_Box mercury__dir__Data0_11,
  MR_Word * mercury__dir__Res_12)
{
  {
    MR_Word mercury__dir__Res0_15;
    MR_Box mercury__dir__Data_16;
    MR_String mercury__dir__Var_21;
    MR_Word mercury__dir__Var_22;
    MR_Word mercury__dir__Var_14;

    mercury__dir__Var_21 = mercury__dir__fixup_dirname_1_f_0(mercury__dir__DirName_9);
    mercury__dir__Var_22 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__dir__foldl2_process_dir_12_p_0(mercury__dir__TypeInfo_for_T_25, (MR_Integer) 0, mercury__dir__P_8, mercury__dir__Var_21, mercury__dir__Var_22, (MR_Integer) 1, mercury__dir__FollowLinks_10, &mercury__dir__Var_14, &mercury__dir__Res0_15, mercury__dir__Data0_11, &mercury__dir__Data_16);
    if ((mercury__dir__Res0_15 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *mercury__dir__Res_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = mercury__dir__Data_16;
      }
    else
    {
      MR_Word mercury__dir__Error_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__Res0_15, (MR_Integer) 0)));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *mercury__dir__Res_12 = base;
        MR_hl_field(MR_mktag(1), base, 0) = mercury__dir__Data_16;
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__dir__Error_17));
      }
    }
  }
}

void MR_CALL 
mercury__dir__foldl2_6_p_0(
  MR_Word mercury__dir__TypeInfo_for_T_24,
  MR_Word mercury__dir__P_7,
  MR_String mercury__dir__DirName_8,
  MR_Box mercury__dir__Data0_9,
  MR_Word * mercury__dir__Res_10)
{
  {
    MR_Word mercury__dir__Res0_13;
    MR_Box mercury__dir__Data_14;
    MR_String mercury__dir__Var_19;
    MR_Word mercury__dir__Var_20;
    MR_Word mercury__dir__Var_12;

    mercury__dir__Var_19 = mercury__dir__fixup_dirname_1_f_0(mercury__dir__DirName_8);
    mercury__dir__Var_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__dir__foldl2_process_dir_12_p_0(mercury__dir__TypeInfo_for_T_24, (MR_Integer) 0, mercury__dir__P_7, mercury__dir__Var_19, mercury__dir__Var_20, (MR_Integer) 0, (MR_Integer) 0, &mercury__dir__Var_12, &mercury__dir__Res0_13, mercury__dir__Data0_9, &mercury__dir__Data_14);
    if ((mercury__dir__Res0_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *mercury__dir__Res_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = mercury__dir__Data_14;
      }
    else
    {
      MR_Word mercury__dir__Error_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__Res0_13, (MR_Integer) 0)));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
        *mercury__dir__Res_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = mercury__dir__Data_14;
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__dir__Error_15));
      }
    }
  }
}

static void MR_CALL 
mercury__dir__foldl2_process_dir_12_p_0_2(
  MR_Box mercury__dir__closure_arg,
  MR_Box * mercury__dir__wrapper_arg_1)
{
  {
    MR_Box mercury__dir__closure = mercury__dir__closure_arg;
    MR_Tuple mercury__dir__conv1_V_3_6;

    mercury__exception__unsafe_call_io_goal_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__dir__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__dir__closure, (MR_Integer) 4))), &mercury__dir__conv1_V_3_6);
    *mercury__dir__wrapper_arg_1 = ((MR_Box) (mercury__dir__conv1_V_3_6));
  }
}

static void MR_CALL 
mercury__dir__foldl2_process_dir_12_p_0_1(
  MR_Box mercury__dir__closure_arg,
  MR_Box * mercury__dir__wrapper_arg_1,
  MR_Box mercury__dir__wrapper_arg_2,
  MR_Box * mercury__dir__wrapper_arg_3)
{
  {
    MR_Box mercury__dir__closure = mercury__dir__closure_arg;
    MR_Tuple mercury__dir__conv0_HeadVar__9_9;

    mercury__dir__foldl2_process_dir_aux_11_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__dir__closure, (MR_Integer) 3))), ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__dir__closure, (MR_Integer) 4))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__dir__closure, (MR_Integer) 5))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__dir__closure, (MR_Integer) 6))), ((MR_String) (MR_hl_field(MR_mktag(0), mercury__dir__closure, (MR_Integer) 7))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__dir__closure, (MR_Integer) 8))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__dir__closure, (MR_Integer) 9))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__dir__closure, (MR_Integer) 10))), (MR_hl_field(MR_mktag(0), mercury__dir__closure, (MR_Integer) 11)), &mercury__dir__conv0_HeadVar__9_9);
    *mercury__dir__wrapper_arg_1 = ((MR_Box) (mercury__dir__conv0_HeadVar__9_9));
  }
}

void MR_CALL 
mercury__dir__foldl2_process_dir_12_p_0(
  MR_Word mercury__dir__TypeInfo_for_T_48,
  MR_Word mercury__dir__SymLinkParent_13,
  MR_Word mercury__dir__P_14,
  MR_String mercury__dir__DirName_15,
  MR_Word mercury__dir__ParentIds0_16,
  MR_Word mercury__dir__Recursive_17,
  MR_Word mercury__dir__FollowLinks_18,
  MR_Word * mercury__dir__Continue_19,
  MR_Word * mercury__dir__Result_20,
  MR_Box mercury__dir__STATE_VARIABLE_Data_0_32,
  MR_Box * mercury__dir__STATE_VARIABLE_Data_33)
{
  {
    MR_bool mercury__dir__succeeded = (mercury__dir__Recursive_17 == (MR_Integer) 1);
    MR_Word mercury__dir__LoopRes_23;
    MR_Word mercury__dir__ParentIds_24;

    if (mercury__dir__succeeded)
      mercury__dir__succeeded = (mercury__dir__FollowLinks_18 == (MR_Integer) 1);
    if (mercury__dir__succeeded)
      mercury__dir__check_for_symlink_loop_7_p_0(mercury__dir__SymLinkParent_13, mercury__dir__DirName_15, &mercury__dir__LoopRes_23, mercury__dir__ParentIds0_16, &mercury__dir__ParentIds_24);
    else
    {
      mercury__dir__ParentIds_24 = mercury__dir__ParentIds0_16;
      mercury__dir__LoopRes_23 = (MR_Word) &mercury__dir_scalar_common_5[0];
    }
    if (((MR_tag((MR_Word) mercury__dir__LoopRes_23)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word mercury__dir__Error_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__LoopRes_23, (MR_Integer) 0)));

      *mercury__dir__Continue_19 = (MR_Integer) 0;
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *mercury__dir__Result_20 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__dir__Error_47));
      }
      *mercury__dir__STATE_VARIABLE_Data_33 = mercury__dir__STATE_VARIABLE_Data_0_32;
    }
    else
    {
      MR_Word mercury__dir__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__dir__LoopRes_23, (MR_Integer) 0)));

      switch (mercury__dir__Var_62) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word mercury__dir__OpenResult_25;

            mercury__dir__open_4_p_0(mercury__dir__DirName_15, &mercury__dir__OpenResult_25);
            switch (MR_tag((MR_Word) mercury__dir__OpenResult_25)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  *mercury__dir__Continue_19 = (MR_Integer) 1;
                  *mercury__dir__Result_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  *mercury__dir__STATE_VARIABLE_Data_33 = mercury__dir__STATE_VARIABLE_Data_0_32;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Box mercury__dir__Dir_26 = ((MR_Box) (MR_hl_field(MR_mktag(1), mercury__dir__OpenResult_25, (MR_Integer) 0)));
                  MR_Word mercury__dir__TryResult_27;
                  MR_Word mercury__dir__CloseRes_28;
                  MR_Word mercury__dir__TypeCtorInfo_52_52;
                  MR_Word mercury__dir__TypeCtorInfo_53_53;
                  MR_Word mercury__dir__TypeCtorInfo_54_54;
                  MR_Word mercury__dir__TypeInfo_56_56;
                  MR_Word mercury__dir__TypeCtorInfo_18_75;
                  MR_Word mercury__dir__TypeCtorInfo_19_76;
                  MR_Word mercury__dir__TypeInfo_21_78;
                  MR_Word mercury__dir__Var_41;
                  MR_Word mercury__dir__V_13_67;
                  MR_Word mercury__dir__V_9_69;
                  MR_Word mercury__dir__conv2_V_9_69;

                  {
                    mercury__dir__Var_41 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 12 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), mercury__dir__Var_41, 0) = ((MR_Box) (&mercury__dir_scalar_common_7[0]));
                    MR_hl_field(MR_mktag(0), mercury__dir__Var_41, 1) = ((MR_Box) (mercury__dir__foldl2_process_dir_12_p_0_1));
                    MR_hl_field(MR_mktag(0), mercury__dir__Var_41, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 9));
                    MR_hl_field(MR_mktag(0), mercury__dir__Var_41, 3) = ((MR_Box) (mercury__dir__TypeInfo_for_T_48));
                    MR_hl_field(MR_mktag(0), mercury__dir__Var_41, 4) = ((MR_Box) (mercury__dir__Dir_26));
                    MR_hl_field(MR_mktag(0), mercury__dir__Var_41, 5) = ((MR_Box) (mercury__dir__SymLinkParent_13));
                    MR_hl_field(MR_mktag(0), mercury__dir__Var_41, 6) = ((MR_Box) (mercury__dir__P_14));
                    MR_hl_field(MR_mktag(0), mercury__dir__Var_41, 7) = ((MR_Box) (mercury__dir__DirName_15));
                    MR_hl_field(MR_mktag(0), mercury__dir__Var_41, 8) = ((MR_Box) (mercury__dir__ParentIds_24));
                    MR_hl_field(MR_mktag(0), mercury__dir__Var_41, 9) = ((MR_Box) (mercury__dir__Recursive_17));
                    MR_hl_field(MR_mktag(0), mercury__dir__Var_41, 10) = ((MR_Box) (mercury__dir__FollowLinks_18));
                    MR_hl_field(MR_mktag(0), mercury__dir__Var_41, 11) = mercury__dir__STATE_VARIABLE_Data_0_32;
                  }
                  mercury__dir__TypeCtorInfo_54_54 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
                  mercury__dir__TypeCtorInfo_52_52 = (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0;
                  mercury__dir__TypeCtorInfo_53_53 = (MR_Word) &mercury__io__io__type_ctor_info_res_0;
                  {
                    mercury__dir__TypeInfo_56_56 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), mercury__dir__TypeInfo_56_56, 0) = ((MR_Box) (mercury__dir__TypeCtorInfo_54_54));
                    MR_hl_field(MR_mktag(0), mercury__dir__TypeInfo_56_56, 1) = ((MR_Box) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(0), mercury__dir__TypeInfo_56_56, 2) = ((MR_Box) (mercury__dir__TypeCtorInfo_52_52));
                    MR_hl_field(MR_mktag(0), mercury__dir__TypeInfo_56_56, 3) = ((MR_Box) (mercury__dir__TypeCtorInfo_53_53));
                    MR_hl_field(MR_mktag(0), mercury__dir__TypeInfo_56_56, 4) = ((MR_Box) (mercury__dir__TypeInfo_for_T_48));
                  }
                  {
                    mercury__dir__V_13_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 6 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), mercury__dir__V_13_67, 0) = ((MR_Box) (&mercury__dir_scalar_common_8[0]));
                    MR_hl_field(MR_mktag(0), mercury__dir__V_13_67, 1) = ((MR_Box) (mercury__dir__foldl2_process_dir_12_p_0_2));
                    MR_hl_field(MR_mktag(0), mercury__dir__V_13_67, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                    MR_hl_field(MR_mktag(0), mercury__dir__V_13_67, 3) = ((MR_Box) (mercury__dir__TypeInfo_56_56));
                    MR_hl_field(MR_mktag(0), mercury__dir__V_13_67, 4) = ((MR_Box) (mercury__dir__Var_41));
                    MR_hl_field(MR_mktag(0), mercury__dir__V_13_67, 5) = NULL;
                  }
                  mercury__dir__TypeCtorInfo_19_76 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
                  mercury__dir__TypeCtorInfo_18_75 = (MR_Word) &mercury__io__io__type_ctor_info_state_0;
                  {
                    mercury__dir__TypeInfo_21_78 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), mercury__dir__TypeInfo_21_78, 0) = ((MR_Box) (mercury__dir__TypeCtorInfo_19_76));
                    MR_hl_field(MR_mktag(0), mercury__dir__TypeInfo_21_78, 1) = ((MR_Box) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(0), mercury__dir__TypeInfo_21_78, 2) = ((MR_Box) (mercury__dir__TypeInfo_56_56));
                    MR_hl_field(MR_mktag(0), mercury__dir__TypeInfo_21_78, 3) = ((MR_Box) (mercury__dir__TypeCtorInfo_18_75));
                  }
                  mercury__exception__try_2_p_0(mercury__dir__TypeInfo_21_78, (MR_Word) mercury__dir__V_13_67, &mercury__dir__conv2_V_9_69);
                  mercury__dir__V_9_69 = (MR_Word) mercury__dir__conv2_V_9_69;
                  if (((MR_tag((MR_Word) mercury__dir__V_9_69)) == (MR_mktag((MR_Integer) 2))))
                  {
                    mercury__dir__TryResult_27 = (MR_Word) mercury__dir__V_9_69;
                    mercury__private_builtin__dummy_var = mercury__private_builtin__dummy_var;
                  }
                  else
                  {
                    MR_Tuple mercury__dir__V_14_70 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__dir__V_9_69, (MR_Integer) 0)));
                    MR_Tuple mercury__dir__V_10_71 = ((MR_Tuple) (MR_hl_field(MR_mktag(0), mercury__dir__V_14_70, (MR_Integer) 0)));

                    {
                      mercury__dir__TryResult_27 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__dir__TryResult_27, 0) = ((MR_Box) (mercury__dir__V_10_71));
                    }
                    mercury__private_builtin__dummy_var = mercury__private_builtin__dummy_var;
                  }
                  mercury__dir__close_4_p_0(mercury__dir__Dir_26, &mercury__dir__CloseRes_28);
                  if (((MR_tag((MR_Word) mercury__dir__TryResult_27)) == (MR_mktag((MR_Integer) 2))))
                  {
                    MR_Word mercury__dir__TypeCtorInfo_57_57 = (MR_Word) &mercury__bool__bool__type_ctor_info_bool_0;
                    MR_Word mercury__dir__TypeCtorInfo_58_58 = (MR_Word) &mercury__io__io__type_ctor_info_res_0;
                    MR_Word mercury__dir__TypeCtorInfo_59_59 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_tuple_0;
                    MR_Word mercury__dir__TypeInfo_61_61;

                    {
                      mercury__dir__TypeInfo_61_61 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mercury__dir__TypeInfo_61_61, 0) = ((MR_Box) (mercury__dir__TypeCtorInfo_59_59));
                      MR_hl_field(MR_mktag(0), mercury__dir__TypeInfo_61_61, 1) = ((MR_Box) ((MR_Integer) 3));
                      MR_hl_field(MR_mktag(0), mercury__dir__TypeInfo_61_61, 2) = ((MR_Box) (mercury__dir__TypeCtorInfo_57_57));
                      MR_hl_field(MR_mktag(0), mercury__dir__TypeInfo_61_61, 3) = ((MR_Box) (mercury__dir__TypeCtorInfo_58_58));
                      MR_hl_field(MR_mktag(0), mercury__dir__TypeInfo_61_61, 4) = ((MR_Box) (mercury__dir__TypeInfo_for_T_48));
                    }
                    {
                      mercury__exception__rethrow_1_p_0(mercury__dir__TypeInfo_61_61, (MR_Word) mercury__dir__TryResult_27);
                      return;
                    }
                  }
                  else
                  {
                    MR_Word mercury__dir__Result1_29;
                    MR_Tuple mercury__dir__Var_44 = ((MR_Tuple) (MR_hl_field(MR_mktag(1), mercury__dir__TryResult_27, (MR_Integer) 0)));

                    *mercury__dir__Continue_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__dir__Var_44, (MR_Integer) 0)));
                    mercury__dir__Result1_29 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__dir__Var_44, (MR_Integer) 1)));
                    *mercury__dir__STATE_VARIABLE_Data_33 = (MR_hl_field(MR_mktag(0), mercury__dir__Var_44, (MR_Integer) 2));
                    if ((mercury__dir__Result1_29 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      *mercury__dir__Result_20 = mercury__dir__CloseRes_28;
                    else
                      *mercury__dir__Result_20 = mercury__dir__Result1_29;
                  }
                }
                break;
              case (MR_Integer) 2:
                {
                  MR_Word mercury__dir__Error_46 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__dir__OpenResult_25, (MR_Integer) 0)));

                  *mercury__dir__Continue_19 = (MR_Integer) 0;
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *mercury__dir__Result_20 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__dir__Error_46));
                  }
                  *mercury__dir__STATE_VARIABLE_Data_33 = mercury__dir__STATE_VARIABLE_Data_0_32;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            *mercury__dir__Continue_19 = (MR_Integer) 1;
            *mercury__dir__Result_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            *mercury__dir__STATE_VARIABLE_Data_33 = mercury__dir__STATE_VARIABLE_Data_0_32;
          }
          break;
      }
    }
  }
}

void MR_CALL 
mercury__dir__close_4_p_0(
  MR_Box mercury__dir__Dir_5,
  MR_Word * mercury__dir__Res_6)
{
  {
    MR_bool mercury__dir__succeeded;
    MR_Box mercury__dir__MaybeWin32Error_8;
    MR_Word mercury__dir__IOError_9;
    MR_String mercury__dir__V_6_16;

    mercury__dir__close_2_4_p_0(mercury__dir__Dir_5, &mercury__dir__MaybeWin32Error_8);
{
#define MR_PROC_LABEL mercury__dir__close_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__dir__MaybeWin32Error_8 , Error);
		{

    /* This works for errno and Win32 error values (ERROR_SUCCESS == 0). */
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__dir__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__dir__succeeded)
      mercury__dir__succeeded = MR_FALSE;
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
mercury__dir__succeeded  = SUCCESS_INDICATOR;
}
      if (mercury__dir__succeeded)
      {
{
#define MR_PROC_LABEL mercury__dir__close_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__dir__MaybeWin32Error_8 , Error);
	Msg0 =  (MR_String) "dir.foldl2: closing directory failed: " ;
		{

#ifdef MR_WIN32
    ML_make_win32_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);
#else
    MR_fatal_error("io.make_win32_err_msg called on non-Windows platform");
#endif


		;}
#undef MR_PROC_LABEL
	 mercury__dir__V_6_16  = Msg;
}
      }
      else
      {
{
#define MR_PROC_LABEL mercury__dir__close_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__dir__MaybeWin32Error_8 , Error);
	Msg0 =  (MR_String) "dir.foldl2: closing directory failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__dir__V_6_16  = Msg;
}
      }
      mercury__dir__succeeded = MR_TRUE;
    }
    if (mercury__dir__succeeded)
    {
      mercury__dir__IOError_9 = (MR_Word) mercury__dir__V_6_16;
      mercury__dir__succeeded = MR_TRUE;
    }
    if (mercury__dir__succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *mercury__dir__Res_6 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__dir__IOError_9));
      }
    else
      *mercury__dir__Res_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
  }
}

void MR_CALL 
mercury__dir__close_2_4_p_0(
  MR_Box mercury__dir__Dir_1,
  MR_Box * mercury__dir__Error_2)
{
  {
{
#define MR_PROC_LABEL mercury__dir__close_2_4_p_0

	ML_DIR_STREAM Dir;
	MR_Integer Error;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(ML_DIR_STREAM, mercury__dir__Dir_1 , Dir);
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
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *mercury__dir__Error_2 );
}
  }
}

void MR_CALL 
mercury__dir__open_4_p_0(
  MR_String mercury__dir__DirName_5,
  MR_Word * mercury__dir__Res_6)
{
  {
    MR_bool mercury__dir__succeeded;

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
mercury__dir__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__dir__succeeded)
    {
      MR_Word mercury__dir__Res0_8;
      MR_Word mercury__dir__FileTypeRes_23;

      mercury__io__file_type_5_p_0((MR_Integer) 1, mercury__dir__DirName_5, &mercury__dir__FileTypeRes_23);
      if (((MR_tag((MR_Word) mercury__dir__FileTypeRes_23)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word mercury__dir__Error_25 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__FileTypeRes_23, (MR_Integer) 0)));

        {
          mercury__dir__Res0_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__dir__Res0_8, 0) = ((MR_Box) (mercury__dir__Error_25));
        }
      }
      else
      {
        MR_Word mercury__dir__FileType_24 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__dir__FileTypeRes_23, (MR_Integer) 0)));

        switch (mercury__dir__FileType_24) {
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
              MR_Word mercury__dir__Var_28 = (MR_Word) ((MR_Box) ((MR_String) "dir.foldl2: pathname is not a directory"));

              mercury__dir__Res0_8 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__dir_scalar_common_5[1]);
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word mercury__dir__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__dir_scalar_common_1[4]);

              mercury__io__check_file_accessibility_5_p_0(mercury__dir__DirName_5, mercury__dir__Var_30, &mercury__dir__Res0_8);
            }
            break;
        }
      }
      if ((mercury__dir__Res0_8 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_String mercury__dir__DirPattern_9;
        MR_Box mercury__dir__Dir_45;
        MR_Box mercury__dir__MaybeWin32Error_46;
        MR_Word mercury__dir__IOError_47;
        MR_String mercury__dir__V_6_52;

        mercury__dir__DirPattern_9 = mercury__dir__f_slash_2_f_0(mercury__dir__DirName_5, (MR_String) "*");
        mercury__dir__open_3_6_p_0(mercury__dir__DirName_5, mercury__dir__DirPattern_9, &mercury__dir__Dir_45, &mercury__dir__MaybeWin32Error_46);
{
#define MR_PROC_LABEL mercury__dir__open_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__dir__MaybeWin32Error_46 , Error);
		{

    /* This works for errno and Win32 error values (ERROR_SUCCESS == 0). */
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__dir__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__dir__succeeded)
          mercury__dir__succeeded = MR_FALSE;
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
mercury__dir__succeeded  = SUCCESS_INDICATOR;
}
          if (mercury__dir__succeeded)
          {
{
#define MR_PROC_LABEL mercury__dir__open_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__dir__MaybeWin32Error_46 , Error);
	Msg0 =  (MR_String) "cannot open directory: " ;
		{

#ifdef MR_WIN32
    ML_make_win32_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);
#else
    MR_fatal_error("io.make_win32_err_msg called on non-Windows platform");
#endif


		;}
#undef MR_PROC_LABEL
	 mercury__dir__V_6_52  = Msg;
}
          }
          else
          {
{
#define MR_PROC_LABEL mercury__dir__open_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__dir__MaybeWin32Error_46 , Error);
	Msg0 =  (MR_String) "cannot open directory: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__dir__V_6_52  = Msg;
}
          }
          mercury__dir__succeeded = MR_TRUE;
        }
        if (mercury__dir__succeeded)
        {
          mercury__dir__IOError_47 = (MR_Word) mercury__dir__V_6_52;
          mercury__dir__succeeded = MR_TRUE;
        }
        if (mercury__dir__succeeded)
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *mercury__dir__Res_6 = base;
            MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__dir__IOError_47));
          }
        else
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *mercury__dir__Res_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__dir__Dir_45));
          }
      }
      else
      {
        MR_Word mercury__dir__Error_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__Res0_8, (MR_Integer) 0)));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mercury__dir__Res_6 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__dir__Error_10));
        }
      }
    }
    else
    {
      MR_Box mercury__dir__Dir_62;
      MR_Box mercury__dir__MaybeWin32Error_63;
      MR_Word mercury__dir__IOError_64;
      MR_String mercury__dir__V_6_69;

      mercury__dir__open_3_6_p_0(mercury__dir__DirName_5, (MR_String) "", &mercury__dir__Dir_62, &mercury__dir__MaybeWin32Error_63);
{
#define MR_PROC_LABEL mercury__dir__open_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__dir__MaybeWin32Error_63 , Error);
		{

    /* This works for errno and Win32 error values (ERROR_SUCCESS == 0). */
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__dir__succeeded  = SUCCESS_INDICATOR;
}
      if (mercury__dir__succeeded)
        mercury__dir__succeeded = MR_FALSE;
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
mercury__dir__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__dir__succeeded)
        {
{
#define MR_PROC_LABEL mercury__dir__open_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__dir__MaybeWin32Error_63 , Error);
	Msg0 =  (MR_String) "cannot open directory: " ;
		{

#ifdef MR_WIN32
    ML_make_win32_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);
#else
    MR_fatal_error("io.make_win32_err_msg called on non-Windows platform");
#endif


		;}
#undef MR_PROC_LABEL
	 mercury__dir__V_6_69  = Msg;
}
        }
        else
        {
{
#define MR_PROC_LABEL mercury__dir__open_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__dir__MaybeWin32Error_63 , Error);
	Msg0 =  (MR_String) "cannot open directory: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__dir__V_6_69  = Msg;
}
        }
        mercury__dir__succeeded = MR_TRUE;
      }
      if (mercury__dir__succeeded)
      {
        mercury__dir__IOError_64 = (MR_Word) mercury__dir__V_6_69;
        mercury__dir__succeeded = MR_TRUE;
      }
      if (mercury__dir__succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mercury__dir__Res_6 = base;
          MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (mercury__dir__IOError_64));
        }
      else
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mercury__dir__Res_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__dir__Dir_62));
        }
    }
  }
}

static void MR_CALL 
mercury__dir__open_3_6_p_0(
  MR_String mercury__dir__DirName_1,
  MR_String mercury__dir__DirPattern_2,
  MR_Box * mercury__dir__Dir_3,
  MR_Box * mercury__dir__Error_4)
{
  {
{
#define MR_PROC_LABEL mercury__dir__open_3_6_p_0

	MR_String DirName;
	MR_String DirPattern;
	ML_DIR_STREAM Dir;
	MR_Integer Error;

	DirName =  mercury__dir__DirName_1 ;
	DirPattern =  mercury__dir__DirPattern_2 ;
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

#else /* !MR_WIN32 && !(MR_HAVE_OPENDIR etc.) */
    Dir = NULL;
    Error = ENOSYS;
#endif


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(ML_DIR_STREAM, Dir, *mercury__dir__Dir_3 );
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *mercury__dir__Error_4 );
}
  }
}

void MR_CALL 
mercury__dir__check_for_symlink_loop_7_p_0(
  MR_Word mercury__dir__SymLinkParent_8,
  MR_String mercury__dir__DirName_9,
  MR_Word * mercury__dir__LoopRes_10,
  MR_Word mercury__dir__STATE_VARIABLE_ParentIds_0_17,
  MR_Word * mercury__dir__STATE_VARIABLE_ParentIds_18)
{
  {
    MR_bool mercury__dir__succeeded;

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
mercury__dir__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__dir__succeeded)
    {
      MR_Word mercury__dir__IdRes_13;

      mercury__io__file_id_4_p_0(mercury__dir__DirName_9, &mercury__dir__IdRes_13);
      if (((MR_tag((MR_Word) mercury__dir__IdRes_13)) == (MR_mktag((MR_Integer) 1))))
      {
        *mercury__dir__LoopRes_10 = (MR_Word) mercury__dir__IdRes_13;
        *mercury__dir__STATE_VARIABLE_ParentIds_18 = mercury__dir__STATE_VARIABLE_ParentIds_0_17;
      }
      else
      {
        MR_Box mercury__dir__Id_14 = ((MR_Box) (MR_hl_field(MR_mktag(0), mercury__dir__IdRes_13, (MR_Integer) 0)));
        MR_Word mercury__dir__Loop_15;
        MR_Word mercury__dir__TypeCtorInfo_24_24;

        mercury__dir__succeeded = (mercury__dir__SymLinkParent_8 == (MR_Integer) 1);
        if (mercury__dir__succeeded)
        {
          mercury__dir__TypeCtorInfo_24_24 = (MR_Word) &mercury__io__io__type_ctor_info_file_id_0;
          mercury__dir__succeeded = mercury__list__member_2_p_0(mercury__dir__TypeCtorInfo_24_24, ((MR_Box) (mercury__dir__Id_14)), mercury__dir__STATE_VARIABLE_ParentIds_0_17);
        }
        if (mercury__dir__succeeded)
        {
          mercury__dir__Loop_15 = (MR_Integer) 1;
          *mercury__dir__STATE_VARIABLE_ParentIds_18 = mercury__dir__STATE_VARIABLE_ParentIds_0_17;
        }
        else
        {
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            *mercury__dir__STATE_VARIABLE_ParentIds_18 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__dir__Id_14));
            MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__dir__STATE_VARIABLE_ParentIds_0_17));
          }
          mercury__dir__Loop_15 = (MR_Integer) 0;
        }
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *mercury__dir__LoopRes_10 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__dir__Loop_15));
        }
      }
    }
    else
    {
      *mercury__dir__LoopRes_10 = (MR_Word) &mercury__dir_scalar_common_5[0];
      *mercury__dir__STATE_VARIABLE_ParentIds_18 = mercury__dir__STATE_VARIABLE_ParentIds_0_17;
    }
  }
}

MR_String MR_CALL 
mercury__dir__fixup_dirname_1_f_0(
  MR_String mercury__dir__Dir0_3)
{
  {
    MR_bool mercury__dir__succeeded;
    MR_String mercury__dir__Dir_4;
    MR_Word mercury__dir__DirChars_5;
    MR_Word mercury__dir__Var_6;

    mercury__string__to_char_list_2_p_0(mercury__dir__Dir0_3, &mercury__dir__Var_6);
    mercury__dir__DirChars_5 = mercury__dir__canonicalize_path_chars_1_f_0(mercury__dir__Var_6);
    mercury__dir__succeeded = mercury__dir__is_root_directory_1_p_0(mercury__dir__DirChars_5);
    if (mercury__dir__succeeded)
      mercury__dir__Dir_4 = mercury__dir__Dir0_3;
    else
    {
      MR_Word mercury__dir__Var_7;
      MR_Word mercury__dir__Chars1_11;
      MR_Word mercury__dir__TypeCtorInfo_6_13 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
      MR_Char mercury__dir__Sep_12;
      MR_Box mercury__dir__conv0_Sep_12;

      mercury__dir__succeeded = mercury__list__split_last_3_p_0(mercury__dir__TypeCtorInfo_6_13, mercury__dir__DirChars_5, &mercury__dir__Chars1_11, &mercury__dir__conv0_Sep_12);
      if (mercury__dir__succeeded)
      {
        mercury__dir__Sep_12 = ((MR_Char) (MR_Word) mercury__dir__conv0_Sep_12);
        mercury__dir__succeeded = MR_TRUE;
      }
      if (mercury__dir__succeeded)
        mercury__dir__succeeded = mercury__dir__is_directory_separator_1_p_0(mercury__dir__Sep_12);
      if (mercury__dir__succeeded)
        mercury__dir__Var_7 = mercury__dir__Chars1_11;
      else
        mercury__dir__Var_7 = mercury__dir__DirChars_5;
      mercury__string__from_char_list_2_p_0(mercury__dir__Var_7, &mercury__dir__Dir_4);
    }
    return mercury__dir__Dir_4;
  }
}

void MR_CALL 
mercury__dir__make_single_directory_4_p_0(
  MR_String mercury__dir__DirName_5,
  MR_Word * mercury__dir__Result_6)
{
  {
    MR_bool mercury__dir__succeeded;
    MR_Word mercury__dir__Status_8;
    MR_Box mercury__dir__MaybeWin32Error_9;

    mercury__dir__make_single_directory_2_5_p_0(mercury__dir__DirName_5, &mercury__dir__Status_8, &mercury__dir__MaybeWin32Error_9);
    switch (mercury__dir__Status_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
      case (MR_Integer) 3:
      case (MR_Integer) 1:
        {
          MR_String mercury__dir__Message_10;
          MR_Word mercury__dir__Var_15;

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
mercury__dir__succeeded  = SUCCESS_INDICATOR;
}
          if (mercury__dir__succeeded)
          {
{
#define MR_PROC_LABEL mercury__dir__make_single_directory_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__dir__MaybeWin32Error_9 , Error);
	Msg0 =  (MR_String) "cannot create directory: " ;
		{

#ifdef MR_WIN32
    ML_make_win32_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);
#else
    MR_fatal_error("io.make_win32_err_msg called on non-Windows platform");
#endif


		;}
#undef MR_PROC_LABEL
	 mercury__dir__Message_10  = Msg;
}
          }
          else
          {
{
#define MR_PROC_LABEL mercury__dir__make_single_directory_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__dir__MaybeWin32Error_9 , Error);
	Msg0 =  (MR_String) "cannot create directory: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__dir__Message_10  = Msg;
}
          }
          mercury__dir__Var_15 = (MR_Word) mercury__dir__Message_10;
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *mercury__dir__Result_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__dir__Var_15));
          }
        }
        break;
      case (MR_Integer) 0:
        *mercury__dir__Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
    }
  }
}

void MR_CALL 
mercury__dir__make_directory_4_p_0(
  MR_String mercury__dir__PathName_5,
  MR_Word * mercury__dir__Result_6)
{
  {
    MR_bool mercury__dir__succeeded;

{
#define MR_PROC_LABEL mercury__dir__make_directory_4_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__dir__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__dir__succeeded)
    {
      MR_Box mercury__dir__Error_29;
      MR_Word mercury__dir__CheckAccess_30;
      MR_Word mercury__dir__IOError_31;
      MR_String mercury__dir__V_6_37;

{
#define MR_PROC_LABEL mercury__dir__make_directory_4_p_0

	MR_Integer Error;
	MR_Word CheckAccess;

		{

    Error = ENOSYS;
    CheckAccess = MR_NO;


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, mercury__dir__Error_29 );
	 mercury__dir__CheckAccess_30  = CheckAccess;
}
{
#define MR_PROC_LABEL mercury__dir__make_directory_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__dir__Error_29 , Error);
		{

    /* This works for errno and Win32 error values (ERROR_SUCCESS == 0). */
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__dir__succeeded  = SUCCESS_INDICATOR;
}
      if (mercury__dir__succeeded)
        mercury__dir__succeeded = MR_FALSE;
      else
      {
{
#define MR_PROC_LABEL mercury__dir__make_directory_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__dir__Error_29 , Error);
	Msg0 =  (MR_String) "cannot make directory: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__dir__V_6_37  = Msg;
}
        mercury__dir__succeeded = MR_TRUE;
      }
      if (mercury__dir__succeeded)
      {
        mercury__dir__IOError_31 = (MR_Word) mercury__dir__V_6_37;
        mercury__dir__succeeded = MR_TRUE;
      }
      if (mercury__dir__succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *mercury__dir__Result_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__dir__IOError_31));
        }
      else
        switch (mercury__dir__CheckAccess_30) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *mercury__dir__Result_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            break;
          case (MR_Integer) 1:
            {
              MR_Word mercury__dir__Var_43 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__dir_scalar_common_1[3]);

              mercury__io__check_file_accessibility_5_p_0(mercury__dir__PathName_5, mercury__dir__Var_43, mercury__dir__Result_6);
            }
            break;
        }
    }
    else
    {
      MR_String mercury__dir__DirName_8;

      mercury__dir__DirName_8 = mercury__dir__dirname_1_f_0(mercury__dir__PathName_5);
      mercury__dir__succeeded = (strcmp(mercury__dir__PathName_5, mercury__dir__DirName_8) == 0);
      if (mercury__dir__succeeded)
        mercury__dir__make_directory_or_check_exists_4_p_0(mercury__dir__PathName_5, mercury__dir__Result_6);
      else
      {
        mercury__dir__succeeded = (strcmp(mercury__dir__DirName_8, (MR_String) ".") == 0);
        if (mercury__dir__succeeded)
          mercury__dir__make_directory_or_check_exists_4_p_0(mercury__dir__PathName_5, mercury__dir__Result_6);
        else
        {
          MR_Word mercury__dir__ParentAccessResult_9;
          MR_Word mercury__dir__Var_18 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

          mercury__io__check_file_accessibility_5_p_0(mercury__dir__DirName_8, mercury__dir__Var_18, &mercury__dir__ParentAccessResult_9);
          if ((mercury__dir__ParentAccessResult_9 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            mercury__dir__make_directory_or_check_exists_4_p_0(mercury__dir__PathName_5, mercury__dir__Result_6);
          else
          {
            MR_Word mercury__dir__ParentResult_11;

            mercury__dir__make_directory_4_p_0(mercury__dir__DirName_8, &mercury__dir__ParentResult_11);
            if ((mercury__dir__ParentResult_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              mercury__dir__make_directory_or_check_exists_4_p_0(mercury__dir__PathName_5, mercury__dir__Result_6);
            else
              *mercury__dir__Result_6 = mercury__dir__ParentResult_11;
          }
        }
      }
    }
  }
}

static void MR_CALL 
mercury__dir__make_directory_or_check_exists_4_p_0(
  MR_String mercury__dir__DirName_5,
  MR_Word * mercury__dir__Res_6)
{
  {
    MR_bool mercury__dir__succeeded;
    MR_Word mercury__dir__Res0_8;
    MR_Box mercury__dir__MaybeWin32Error_9;

    mercury__dir__make_single_directory_2_5_p_0(mercury__dir__DirName_5, &mercury__dir__Res0_8, &mercury__dir__MaybeWin32Error_9);
    switch (mercury__dir__Res0_8) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 2:
        {
          MR_Word mercury__dir__Var_30 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__dir_scalar_common_1[3]);

          mercury__io__check_file_accessibility_5_p_0(mercury__dir__DirName_5, mercury__dir__Var_30, mercury__dir__Res_6);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word mercury__dir__Var_16;
          MR_String mercury__dir__Message_24;

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
mercury__dir__succeeded  = SUCCESS_INDICATOR;
}
          if (mercury__dir__succeeded)
          {
{
#define MR_PROC_LABEL mercury__dir__make_directory_or_check_exists_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__dir__MaybeWin32Error_9 , Error);
	Msg0 =  (MR_String) "cannot create directory: " ;
		{

#ifdef MR_WIN32
    ML_make_win32_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);
#else
    MR_fatal_error("io.make_win32_err_msg called on non-Windows platform");
#endif


		;}
#undef MR_PROC_LABEL
	 mercury__dir__Message_24  = Msg;
}
          }
          else
          {
{
#define MR_PROC_LABEL mercury__dir__make_directory_or_check_exists_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__dir__MaybeWin32Error_9 , Error);
	Msg0 =  (MR_String) "cannot create directory: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__dir__Message_24  = Msg;
}
          }
          mercury__dir__Var_16 = (MR_Word) mercury__dir__Message_24;
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *mercury__dir__Res_6 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__dir__Var_16));
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mercury__dir__TypeRes_10;
          MR_Word mercury__dir__Var_20;

          mercury__io__file_type_5_p_0((MR_Integer) 1, mercury__dir__DirName_5, &mercury__dir__TypeRes_10);
          mercury__dir__succeeded = ((MR_tag((MR_Word) mercury__dir__TypeRes_10)) == (MR_mktag((MR_Integer) 0)));
          if (mercury__dir__succeeded)
          {
            mercury__dir__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__dir__TypeRes_10, (MR_Integer) 0)));
            mercury__dir__succeeded = (mercury__dir__Var_20 == (MR_Integer) 1);
          }
          if (mercury__dir__succeeded)
          {
            MR_Word mercury__dir__Var_47 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__dir_scalar_common_1[3]);

            mercury__io__check_file_accessibility_5_p_0(mercury__dir__DirName_5, mercury__dir__Var_47, mercury__dir__Res_6);
          }
          else
          {
            MR_String mercury__dir__Message_11;
            MR_Word mercury__dir__Var_23;

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
mercury__dir__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__dir__succeeded)
            {
{
#define MR_PROC_LABEL mercury__dir__make_directory_or_check_exists_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__dir__MaybeWin32Error_9 , Error);
	Msg0 =  (MR_String) "cannot create directory: " ;
		{

#ifdef MR_WIN32
    ML_make_win32_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);
#else
    MR_fatal_error("io.make_win32_err_msg called on non-Windows platform");
#endif


		;}
#undef MR_PROC_LABEL
	 mercury__dir__Message_11  = Msg;
}
            }
            else
            {
{
#define MR_PROC_LABEL mercury__dir__make_directory_or_check_exists_4_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__dir__MaybeWin32Error_9 , Error);
	Msg0 =  (MR_String) "cannot create directory: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__dir__Message_11  = Msg;
}
            }
            mercury__dir__Var_23 = (MR_Word) mercury__dir__Message_11;
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mercury__dir__Res_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__dir__Var_23));
            }
          }
        }
        break;
      case (MR_Integer) 0:
        *mercury__dir__Res_6 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        break;
    }
  }
}

static void MR_CALL 
mercury__dir__make_single_directory_2_5_p_0(
  MR_String mercury__dir__DirName_1,
  MR_Word * mercury__dir__Status_2,
  MR_Box * mercury__dir__Error_3)
{
  {
{
#define MR_PROC_LABEL mercury__dir__make_single_directory_2_5_p_0

	MR_String DirName;
	MR_Word Status;
	MR_Integer Error;

	DirName =  mercury__dir__DirName_1 ;
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
      #endif /* EEXIST */
    }
#else /* !MR_WIN32 && !MR_HAVE_MKDIR */
    Status = ML_MAKE_SINGLE_DIRECTORY_ERROR;
    Error = ENOSYS;
#endif


		;}
#undef MR_PROC_LABEL
	 *mercury__dir__Status_2  = Status;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *mercury__dir__Error_3 );
}
  }
}

void MR_CALL 
mercury__dir__current_directory_3_p_0(
  MR_Word * mercury__dir__Res_4)
{
  {
    MR_bool mercury__dir__succeeded;
    MR_String mercury__dir__CurDir_6;
    MR_Box mercury__dir__Error_7;
    MR_Word mercury__dir__IOError_8;
    MR_String mercury__dir__V_6_15;

    mercury__dir__current_directory_2_4_p_0(&mercury__dir__CurDir_6, &mercury__dir__Error_7);
{
#define MR_PROC_LABEL mercury__dir__current_directory_3_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__dir__Error_7 , Error);
		{

    /* This works for errno and Win32 error values (ERROR_SUCCESS == 0). */
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__dir__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__dir__succeeded)
      mercury__dir__succeeded = MR_FALSE;
    else
    {
{
#define MR_PROC_LABEL mercury__dir__current_directory_3_p_0

	MR_Integer Error;
	MR_String Msg0;
	MR_String Msg;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(MR_Integer, mercury__dir__Error_7 , Error);
	Msg0 =  (MR_String) "dir.current_directory failed: " ;
		{

    ML_make_err_msg(Error, Msg0, MR_ALLOC_ID, Msg);


		;}
#undef MR_PROC_LABEL
	 mercury__dir__V_6_15  = Msg;
}
      mercury__dir__succeeded = MR_TRUE;
    }
    if (mercury__dir__succeeded)
    {
      mercury__dir__IOError_8 = (MR_Word) mercury__dir__V_6_15;
      mercury__dir__succeeded = MR_TRUE;
    }
    if (mercury__dir__succeeded)
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *mercury__dir__Res_4 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__dir__IOError_8));
      }
    else
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *mercury__dir__Res_4 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__dir__CurDir_6));
      }
  }
}

void MR_CALL 
mercury__dir__current_directory_2_4_p_0(
  MR_String * mercury__dir__CurDir_1,
  MR_Box * mercury__dir__Error_2)
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
        /* `size' includes the NUL terminator. */
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
        /* Buffer too small. Resize and try again. */
        size *= 1.5;
    }
#endif


		;}
#undef MR_PROC_LABEL
	 *mercury__dir__CurDir_1  = CurDir;
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, *mercury__dir__Error_2 );
}
  }
}

MR_String MR_CALL 
mercury__dir__relative_path_name_from_components_1_f_0(
  MR_Word mercury__dir__Components_3)
{
  {
    MR_bool mercury__dir__succeeded;
    MR_String mercury__dir__PathName_4;
    MR_String mercury__dir__Sep_5;
    MR_Char mercury__dir__Var_6;
    MR_Word mercury__dir__V_5_13;
    MR_Word mercury__dir__V_6_14;

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
mercury__dir__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__dir__succeeded)
      mercury__dir__Var_6 = (MR_Char) 92;
    else
      mercury__dir__Var_6 = (MR_Char) 47;
    mercury__dir__V_6_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    {
      mercury__dir__V_5_13 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__dir__V_5_13, 0) = ((MR_Box) (MR_Word) (mercury__dir__Var_6));
      MR_hl_field(MR_mktag(1), mercury__dir__V_5_13, 1) = ((MR_Box) (mercury__dir__V_6_14));
    }
    mercury__string__to_char_list_2_p_1(&mercury__dir__Sep_5, mercury__dir__V_5_13);
    mercury__dir__PathName_4 = mercury__string__join_list_2_f_0(mercury__dir__Sep_5, mercury__dir__Components_3);
    return mercury__dir__PathName_4;
  }
}

MR_String MR_CALL 
mercury__dir__make_path_name_2_f_0(
  MR_String mercury__dir__DirName_4,
  MR_String mercury__dir__FileName_5)
{
  {
    MR_String mercury__dir__HeadVar__3_3;

    mercury__dir__HeadVar__3_3 = mercury__dir__f_slash_2_f_0(mercury__dir__DirName_4, mercury__dir__FileName_5);
    return mercury__dir__HeadVar__3_3;
  }
}

MR_String MR_CALL 
mercury__dir__f_slash_2_f_0(
  MR_String mercury__dir__DirName0_4,
  MR_String mercury__dir__FileName0_5)
{
  {
    MR_bool mercury__dir__succeeded;
    MR_String mercury__dir__PathName_6;
    MR_String mercury__dir__DirName_7;
    MR_String mercury__dir__FileName_8;
    MR_Word mercury__dir__Var_12;
    MR_Word mercury__dir__Var_13;
    MR_Word mercury__dir__Var_14;
    MR_Word mercury__dir__Var_15;

    mercury__string__to_char_list_2_p_0(mercury__dir__DirName0_4, &mercury__dir__Var_13);
    mercury__dir__Var_12 = mercury__dir__canonicalize_path_chars_1_f_0(mercury__dir__Var_13);
    mercury__string__from_char_list_2_p_0(mercury__dir__Var_12, &mercury__dir__DirName_7);
    mercury__string__to_char_list_2_p_0(mercury__dir__FileName0_5, &mercury__dir__Var_15);
    mercury__dir__Var_14 = mercury__dir__canonicalize_path_chars_1_f_0(mercury__dir__Var_15);
    mercury__string__from_char_list_2_p_0(mercury__dir__Var_14, &mercury__dir__FileName_8);
    mercury__dir__succeeded = mercury__dir__path_name_is_absolute_1_p_0(mercury__dir__FileName_8);
    if (mercury__dir__succeeded)
    {
      mercury__require__unexpected_2_p_0((MR_String) "function \140dir./\'/2", (MR_String) "second argument is absolute");
    }
    else
    {
      MR_Integer mercury__dir__Length_9;
      MR_Integer mercury__dir__Var_18;
      MR_Char mercury__dir__Var_19;
      MR_Integer mercury__dir__Var_20;
      MR_Char mercury__dir__Var_21;
      MR_Integer mercury__dir__Var_22;
      MR_Char mercury__dir__Var_47;
      MR_Integer mercury__dir__Var_23;

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
mercury__dir__succeeded  = SUCCESS_INDICATOR;
}
      if (mercury__dir__succeeded)
        mercury__dir__Var_47 = (MR_Char) 92;
      else
        mercury__dir__Var_47 = (MR_Char) 47;
      mercury__dir__succeeded = (mercury__dir__Var_47 == (MR_Char) 92);
      if (mercury__dir__succeeded)
      {
{
#define MR_PROC_LABEL mercury__dir__f_slash_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__dir__FileName_8 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__dir__Length_9  = Length;
}
        mercury__dir__Var_18 = (MR_Integer) 2;
        mercury__dir__succeeded = (mercury__dir__Length_9 >= mercury__dir__Var_18);
        if (mercury__dir__succeeded)
        {
          mercury__dir__Var_20 = (MR_Integer) 0;
          mercury__string__unsafe_index_3_p_0(mercury__dir__FileName_8, mercury__dir__Var_20, &mercury__dir__Var_19);
          mercury__dir__succeeded = mercury__char__is_alpha_1_p_0(mercury__dir__Var_19);
          if (mercury__dir__succeeded)
          {
            mercury__dir__Var_22 = (MR_Integer) 1;
            mercury__string__unsafe_index_3_p_0(mercury__dir__FileName_8, mercury__dir__Var_22, &mercury__dir__Var_21);
            mercury__dir__succeeded = (mercury__dir__Var_21 == (MR_Char) 58);
            if (mercury__dir__succeeded)
            {
              mercury__dir__Var_23 = (MR_Integer) 2;
              mercury__dir__succeeded = (mercury__dir__Length_9 > mercury__dir__Var_23);
              if (mercury__dir__succeeded)
              {
                MR_Char mercury__dir__Var_24;

                mercury__string__unsafe_index_3_p_0(mercury__dir__FileName_8, (MR_Integer) 2, &mercury__dir__Var_24);
                mercury__dir__succeeded = mercury__dir__is_directory_separator_1_p_0(mercury__dir__Var_24);
                mercury__dir__succeeded = !(mercury__dir__succeeded);
              }
              else
                mercury__dir__succeeded = MR_TRUE;
            }
          }
        }
      }
      if (mercury__dir__succeeded)
      {
        mercury__require__unexpected_2_p_0((MR_String) "function \140dir./\'/2", (MR_String) "second argument is a current drive relative path");
      }
      else
      {
        MR_Integer mercury__dir__DirNameLength_10;

{
#define MR_PROC_LABEL mercury__dir__f_slash_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__dir__DirName_7 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__dir__DirNameLength_10  = Length;
}
        {
          MR_Char mercury__dir__Var_29;
          MR_Integer mercury__dir__Var_30;
          MR_Char mercury__dir__Var_31;
          MR_Integer mercury__dir__Var_32;
          MR_Char mercury__dir__Var_61;

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
mercury__dir__succeeded  = SUCCESS_INDICATOR;
}
          if (mercury__dir__succeeded)
            mercury__dir__Var_61 = (MR_Char) 92;
          else
            mercury__dir__Var_61 = (MR_Char) 47;
          mercury__dir__succeeded = (mercury__dir__Var_61 == (MR_Char) 92);
          if (mercury__dir__succeeded)
          {
            mercury__dir__succeeded = (mercury__dir__DirNameLength_10 == (MR_Integer) 2);
            if (mercury__dir__succeeded)
            {
              mercury__dir__Var_30 = (MR_Integer) 0;
              mercury__string__unsafe_index_3_p_0(mercury__dir__DirName_7, mercury__dir__Var_30, &mercury__dir__Var_29);
              mercury__dir__succeeded = mercury__char__is_alpha_1_p_0(mercury__dir__Var_29);
              if (mercury__dir__succeeded)
              {
                mercury__dir__Var_32 = (MR_Integer) 1;
                mercury__string__unsafe_index_3_p_0(mercury__dir__DirName_7, mercury__dir__Var_32, &mercury__dir__Var_31);
                mercury__dir__succeeded = (mercury__dir__Var_31 == (MR_Char) 58);
              }
            }
          }
        }
        if (!(mercury__dir__succeeded))
        {
          MR_Char mercury__dir__Char_71;
          MR_Integer mercury__dir__Var_11;

          mercury__dir__succeeded = (mercury__dir__DirNameLength_10 > (MR_Integer) 0);
          if (mercury__dir__succeeded)
          {
{
#define MR_PROC_LABEL mercury__dir__f_slash_2_f_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  mercury__dir__DirName_7 ;
	Index =  mercury__dir__DirNameLength_10 ;
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
	 mercury__dir__Var_11  = PrevIndex;
	 mercury__dir__Char_71  = Ch;
	}
mercury__dir__succeeded  = SUCCESS_INDICATOR;
}
            if (mercury__dir__succeeded)
              mercury__dir__succeeded = mercury__dir__is_directory_separator_1_p_0(mercury__dir__Char_71);
          }
        }
        if (mercury__dir__succeeded)
          mercury__string__append_3_p_2(mercury__dir__DirName_7, mercury__dir__FileName_8, &mercury__dir__PathName_6);
        else
        {
          MR_Word mercury__dir__Var_33;
          MR_Word mercury__dir__Var_34;
          MR_String mercury__dir__Var_35;
          MR_Char mercury__dir__Var_36;
          MR_Word mercury__dir__Var_37;
          MR_Word mercury__dir__Var_38;
          MR_Word mercury__dir__V_5_82;
          MR_Word mercury__dir__V_6_83;

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
mercury__dir__succeeded  = SUCCESS_INDICATOR;
}
          if (mercury__dir__succeeded)
            mercury__dir__Var_36 = (MR_Char) 92;
          else
            mercury__dir__Var_36 = (MR_Char) 47;
          mercury__dir__V_6_83 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          {
            mercury__dir__V_5_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__dir__V_5_82, 0) = ((MR_Box) (MR_Word) (mercury__dir__Var_36));
            MR_hl_field(MR_mktag(1), mercury__dir__V_5_82, 1) = ((MR_Box) (mercury__dir__V_6_83));
          }
          mercury__string__to_char_list_2_p_1(&mercury__dir__Var_35, mercury__dir__V_5_82);
          mercury__dir__Var_38 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          {
            mercury__dir__Var_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__dir__Var_37, 0) = ((MR_Box) (mercury__dir__FileName_8));
            MR_hl_field(MR_mktag(1), mercury__dir__Var_37, 1) = ((MR_Box) (mercury__dir__Var_38));
          }
          {
            mercury__dir__Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__dir__Var_34, 0) = ((MR_Box) (mercury__dir__Var_35));
            MR_hl_field(MR_mktag(1), mercury__dir__Var_34, 1) = ((MR_Box) (mercury__dir__Var_37));
          }
          {
            mercury__dir__Var_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__dir__Var_33, 0) = ((MR_Box) (mercury__dir__DirName_7));
            MR_hl_field(MR_mktag(1), mercury__dir__Var_33, 1) = ((MR_Box) (mercury__dir__Var_34));
          }
          mercury__dir__PathName_6 = mercury__string__append_list_1_f_0(mercury__dir__Var_33);
        }
      }
    }
    return mercury__dir__PathName_6;
  }
}

MR_bool MR_CALL 
mercury__dir__path_name_is_root_directory_1_p_0(
  MR_String mercury__dir__PathName_2)
{
  {
    MR_bool mercury__dir__succeeded;
    MR_Word mercury__dir__Var_3;
    MR_Word mercury__dir__Var_4;

    mercury__string__to_char_list_2_p_0(mercury__dir__PathName_2, &mercury__dir__Var_4);
    mercury__dir__Var_3 = mercury__dir__canonicalize_path_chars_1_f_0(mercury__dir__Var_4);
    mercury__dir__succeeded = mercury__dir__is_root_directory_1_p_0(mercury__dir__Var_3);
    return mercury__dir__succeeded;
  }
}

void MR_CALL 
mercury__dir__dirname_2_p_0(
  MR_String mercury__dir__S_3,
  MR_String * mercury__dir__HeadVar__2_2)
{
  *mercury__dir__HeadVar__2_2 = mercury__dir__dirname_1_f_0(mercury__dir__S_3);
}

MR_String MR_CALL 
mercury__dir__dirname_1_f_0(
  MR_String mercury__dir__FileName_3)
{
  {
    MR_bool mercury__dir__succeeded;
    MR_String mercury__dir__DirName_4;
    MR_Word mercury__dir__FileNameChars_5;
    MR_Word mercury__dir__Var_9;

    mercury__string__to_char_list_2_p_0(mercury__dir__FileName_3, &mercury__dir__Var_9);
    mercury__dir__FileNameChars_5 = mercury__dir__canonicalize_path_chars_1_f_0(mercury__dir__Var_9);
    mercury__dir__succeeded = mercury__dir__is_root_directory_1_p_0(mercury__dir__FileNameChars_5);
    if (mercury__dir__succeeded)
      mercury__string__from_char_list_2_p_0(mercury__dir__FileNameChars_5, &mercury__dir__DirName_4);
    else
    {
      MR_Char mercury__dir__Drive_6;
      MR_Word mercury__dir__Var_10;
      MR_Char mercury__dir__Var_11;
      MR_Word mercury__dir__Var_12;
      MR_Char mercury__dir__Var_22;

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
mercury__dir__succeeded  = SUCCESS_INDICATOR;
}
      if (mercury__dir__succeeded)
        mercury__dir__Var_22 = (MR_Char) 92;
      else
        mercury__dir__Var_22 = (MR_Char) 47;
      mercury__dir__succeeded = (mercury__dir__Var_22 == (MR_Char) 92);
      if (mercury__dir__succeeded)
      {
        mercury__dir__succeeded = ((MR_tag((MR_Word) mercury__dir__FileNameChars_5)) == (MR_mktag((MR_Integer) 1)));
        if (mercury__dir__succeeded)
        {
          mercury__dir__Drive_6 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__FileNameChars_5, (MR_Integer) 0)));
          mercury__dir__Var_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__FileNameChars_5, (MR_Integer) 1)));
          mercury__dir__succeeded = ((MR_tag((MR_Word) mercury__dir__Var_10)) == (MR_mktag((MR_Integer) 1)));
          if (mercury__dir__succeeded)
          {
            mercury__dir__Var_11 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__Var_10, (MR_Integer) 0)));
            mercury__dir__Var_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__Var_10, (MR_Integer) 1)));
            mercury__dir__succeeded = (mercury__dir__Var_11 == (MR_Char) 58);
            if (mercury__dir__succeeded)
            {
              mercury__dir__succeeded = (mercury__dir__Var_12 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (mercury__dir__succeeded)
                mercury__dir__succeeded = mercury__char__is_alpha_1_p_0(mercury__dir__Drive_6);
            }
          }
        }
      }
      if (mercury__dir__succeeded)
        mercury__string__from_char_list_2_p_0(mercury__dir__FileNameChars_5, &mercury__dir__DirName_4);
      else
      {
        MR_String mercury__dir__DirName0_7;
        MR_String mercury__dir__Var_8;

        mercury__dir__succeeded = mercury__dir__split_name_2_3_p_0(mercury__dir__FileNameChars_5, &mercury__dir__DirName0_7, &mercury__dir__Var_8);
        if (mercury__dir__succeeded)
          mercury__dir__DirName_4 = mercury__dir__DirName0_7;
        else
        {
          MR_Word mercury__dir__TypeInfo_17_17;
          MR_Word mercury__dir__Var_13;
          MR_Word mercury__dir__Var_16;
          MR_Word mercury__dir__Chars1_26;
          MR_Word mercury__dir__TypeCtorInfo_6_28 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
          MR_Char mercury__dir__Sep_27;
          MR_Box mercury__dir__conv0_Sep_27;

          mercury__dir__succeeded = mercury__list__split_last_3_p_0(mercury__dir__TypeCtorInfo_6_28, mercury__dir__FileNameChars_5, &mercury__dir__Chars1_26, &mercury__dir__conv0_Sep_27);
          if (mercury__dir__succeeded)
          {
            mercury__dir__Sep_27 = ((MR_Char) (MR_Word) mercury__dir__conv0_Sep_27);
            mercury__dir__succeeded = MR_TRUE;
          }
          if (mercury__dir__succeeded)
            mercury__dir__succeeded = mercury__dir__is_directory_separator_1_p_0(mercury__dir__Sep_27);
          if (mercury__dir__succeeded)
            mercury__dir__Var_13 = mercury__dir__Chars1_26;
          else
            mercury__dir__Var_13 = mercury__dir__FileNameChars_5;
          mercury__string__to_char_list_2_p_0((MR_String) "..", &mercury__dir__Var_16);
          mercury__dir__TypeInfo_17_17 = (MR_Word) &mercury__dir_scalar_common_1[0];
          mercury__dir__succeeded = mercury__builtin__unify_2_p_0(mercury__dir__TypeInfo_17_17, ((MR_Box) (mercury__dir__Var_13)), ((MR_Box) (mercury__dir__Var_16)));
          if (mercury__dir__succeeded)
            mercury__dir__DirName_4 = (MR_String) "..";
          else
            mercury__dir__DirName_4 = (MR_String) ".";
        }
      }
    }
    return mercury__dir__DirName_4;
  }
}

MR_String MR_CALL 
mercury__dir__det_basename_1_f_0(
  MR_String mercury__dir__FileName_3)
{
  {
    MR_bool mercury__dir__succeeded;
    MR_String mercury__dir__HeadVar__2_2;
    MR_String mercury__dir__BaseName_4;

    mercury__dir__succeeded = mercury__dir__basename_1_f_0(mercury__dir__FileName_3, &mercury__dir__BaseName_4);
    if (mercury__dir__succeeded)
      mercury__dir__HeadVar__2_2 = mercury__dir__BaseName_4;
    else
    {
      mercury__require__unexpected_2_p_0((MR_String) "function \140dir.det_basename\'/1", (MR_String) "given directory is root directory");
    }
    return mercury__dir__HeadVar__2_2;
  }
}

MR_bool MR_CALL 
mercury__dir__basename_2_p_0(
  MR_String mercury__dir__S_3,
  MR_String * mercury__dir__HeadVar__2_2)
{
  {
    MR_bool mercury__dir__succeeded;

    mercury__dir__succeeded = mercury__dir__basename_1_f_0(mercury__dir__S_3, mercury__dir__HeadVar__2_2);
    return mercury__dir__succeeded;
  }
}

MR_bool MR_CALL 
mercury__dir__basename_1_f_0(
  MR_String mercury__dir__FileName_3,
  MR_String * mercury__dir__BaseName_4)
{
  {
    MR_bool mercury__dir__succeeded;
    MR_Word mercury__dir__FileNameChars_5;
    MR_Word mercury__dir__FileNameWithoutSlash_7;
    MR_Word mercury__dir__Var_10;
    MR_Char mercury__dir__Drive_6;
    MR_Word mercury__dir__Var_11;
    MR_Char mercury__dir__Var_12;
    MR_Word mercury__dir__Var_13;
    MR_Char mercury__dir__Var_24;
    MR_Word mercury__dir__Chars1_26;
    MR_Word mercury__dir__TypeCtorInfo_6_28;
    MR_Char mercury__dir__Sep_27;
    MR_Box mercury__dir__conv0_Sep_27;
    MR_Word mercury__dir__TypeInfo_20_20;
    MR_String mercury__dir__Var_14;
    MR_Word mercury__dir__Var_17;
    MR_Word mercury__dir__TypeInfo_21_21;
    MR_String mercury__dir__Var_15;
    MR_Word mercury__dir__Var_19;
    MR_String mercury__dir__BaseName0_9;
    MR_String mercury__dir__Var_8;

    mercury__string__to_char_list_2_p_0(mercury__dir__FileName_3, &mercury__dir__Var_10);
    mercury__dir__FileNameChars_5 = mercury__dir__canonicalize_path_chars_1_f_0(mercury__dir__Var_10);
    mercury__dir__succeeded = mercury__dir__is_root_directory_1_p_0(mercury__dir__FileNameChars_5);
    mercury__dir__succeeded = !(mercury__dir__succeeded);
    if (mercury__dir__succeeded)
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
mercury__dir__succeeded  = SUCCESS_INDICATOR;
}
      if (mercury__dir__succeeded)
        mercury__dir__Var_24 = (MR_Char) 92;
      else
        mercury__dir__Var_24 = (MR_Char) 47;
      mercury__dir__succeeded = (mercury__dir__Var_24 == (MR_Char) 92);
      if (mercury__dir__succeeded)
      {
        mercury__dir__succeeded = ((MR_tag((MR_Word) mercury__dir__FileNameChars_5)) == (MR_mktag((MR_Integer) 1)));
        if (mercury__dir__succeeded)
        {
          mercury__dir__Drive_6 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__FileNameChars_5, (MR_Integer) 0)));
          mercury__dir__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__FileNameChars_5, (MR_Integer) 1)));
          mercury__dir__succeeded = ((MR_tag((MR_Word) mercury__dir__Var_11)) == (MR_mktag((MR_Integer) 1)));
          if (mercury__dir__succeeded)
          {
            mercury__dir__Var_12 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__Var_11, (MR_Integer) 0)));
            mercury__dir__Var_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__Var_11, (MR_Integer) 1)));
            mercury__dir__succeeded = (mercury__dir__Var_12 == (MR_Char) 58);
            if (mercury__dir__succeeded)
            {
              mercury__dir__succeeded = (mercury__dir__Var_13 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (mercury__dir__succeeded)
                mercury__dir__succeeded = mercury__char__is_alpha_1_p_0(mercury__dir__Drive_6);
            }
          }
        }
      }
      mercury__dir__succeeded = !(mercury__dir__succeeded);
      if (mercury__dir__succeeded)
      {
        mercury__dir__TypeCtorInfo_6_28 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
        mercury__dir__succeeded = mercury__list__split_last_3_p_0(mercury__dir__TypeCtorInfo_6_28, mercury__dir__FileNameChars_5, &mercury__dir__Chars1_26, &mercury__dir__conv0_Sep_27);
        if (mercury__dir__succeeded)
        {
          mercury__dir__Sep_27 = ((MR_Char) (MR_Word) mercury__dir__conv0_Sep_27);
          mercury__dir__succeeded = MR_TRUE;
        }
        if (mercury__dir__succeeded)
          mercury__dir__succeeded = mercury__dir__is_directory_separator_1_p_0(mercury__dir__Sep_27);
        if (mercury__dir__succeeded)
          mercury__dir__FileNameWithoutSlash_7 = mercury__dir__Chars1_26;
        else
          mercury__dir__FileNameWithoutSlash_7 = mercury__dir__FileNameChars_5;
        mercury__dir__Var_14 = (MR_String) ".";
        mercury__string__to_char_list_2_p_0(mercury__dir__Var_14, &mercury__dir__Var_17);
        mercury__dir__TypeInfo_20_20 = (MR_Word) &mercury__dir_scalar_common_1[0];
        mercury__dir__succeeded = mercury__builtin__unify_2_p_0(mercury__dir__TypeInfo_20_20, ((MR_Box) (mercury__dir__FileNameWithoutSlash_7)), ((MR_Box) (mercury__dir__Var_17)));
        mercury__dir__succeeded = !(mercury__dir__succeeded);
        if (mercury__dir__succeeded)
        {
          mercury__dir__Var_15 = (MR_String) "..";
          mercury__string__to_char_list_2_p_0(mercury__dir__Var_15, &mercury__dir__Var_19);
          mercury__dir__TypeInfo_21_21 = (MR_Word) &mercury__dir_scalar_common_1[0];
          mercury__dir__succeeded = mercury__builtin__unify_2_p_0(mercury__dir__TypeInfo_21_21, ((MR_Box) (mercury__dir__FileNameWithoutSlash_7)), ((MR_Box) (mercury__dir__Var_19)));
          mercury__dir__succeeded = !(mercury__dir__succeeded);
          if (mercury__dir__succeeded)
          {
            mercury__dir__succeeded = mercury__dir__split_name_2_3_p_0(mercury__dir__FileNameChars_5, &mercury__dir__Var_8, &mercury__dir__BaseName0_9);
            if (mercury__dir__succeeded)
              *mercury__dir__BaseName_4 = mercury__dir__BaseName0_9;
            else
              *mercury__dir__BaseName_4 = mercury__dir__FileName_3;
            mercury__dir__succeeded = MR_TRUE;
          }
        }
      }
    }
    return mercury__dir__succeeded;
  }
}

MR_bool MR_CALL 
mercury__dir__split_name_3_p_0(
  MR_String mercury__dir__FileName_4,
  MR_String * mercury__dir__DirName_5,
  MR_String * mercury__dir__BaseName_6)
{
  {
    MR_bool mercury__dir__succeeded;
    MR_Word mercury__dir__FileNameChars_7;
    MR_Word mercury__dir__Var_8;

    mercury__string__to_char_list_2_p_0(mercury__dir__FileName_4, &mercury__dir__Var_8);
    mercury__dir__FileNameChars_7 = mercury__dir__canonicalize_path_chars_1_f_0(mercury__dir__Var_8);
    mercury__dir__succeeded = mercury__dir__is_root_directory_1_p_0(mercury__dir__FileNameChars_7);
    mercury__dir__succeeded = !(mercury__dir__succeeded);
    if (mercury__dir__succeeded)
      mercury__dir__succeeded = mercury__dir__split_name_2_3_p_0(mercury__dir__FileNameChars_7, mercury__dir__DirName_5, mercury__dir__BaseName_6);
    return mercury__dir__succeeded;
  }
}

MR_bool MR_CALL 
mercury__dir__is_root_directory_1_p_0(
  MR_Word mercury__dir__FileName_2)
{
  {
    MR_bool mercury__dir__succeeded;

{
#define MR_PROC_LABEL mercury__dir__is_root_directory_1_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__dir__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__dir__succeeded)
    {
      MR_String mercury__dir__Var_4;

      mercury__string__from_char_list_2_p_0(mercury__dir__FileName_2, &mercury__dir__Var_4);
      mercury__dir__succeeded = mercury__dir__path_name_is_absolute_1_p_0(mercury__dir__Var_4);
      if (mercury__dir__succeeded)
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140dir.is_dotnet_root_directory_2\'/1", (MR_String) "called for non-.NET CLI backend");
        mercury__dir__succeeded = MR_TRUE;
      }
    }
    else
    {
      {
        MR_Char mercury__dir__Var_29;

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
mercury__dir__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__dir__succeeded)
          mercury__dir__Var_29 = (MR_Char) 92;
        else
          mercury__dir__Var_29 = (MR_Char) 47;
        mercury__dir__succeeded = (mercury__dir__Var_29 == (MR_Char) 92);
      }
      if (!(mercury__dir__succeeded))
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
mercury__dir__succeeded  = SUCCESS_INDICATOR;
}
      }
      if (mercury__dir__succeeded)
      {
        MR_Word mercury__dir__TypeInfo_8_8;
        MR_Word mercury__dir__Var_5 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        MR_Word mercury__dir__Var_7;
        MR_Word mercury__dir__STATE_VARIABLE_FileName_6_33;
        MR_Char mercury__dir__Letter_37;
        MR_Char mercury__dir__Sep_38;
        MR_Word mercury__dir__Var_41;
        MR_Char mercury__dir__Var_42;
        MR_Word mercury__dir__Var_43;

        mercury__dir__succeeded = ((MR_tag((MR_Word) mercury__dir__FileName_2)) == (MR_mktag((MR_Integer) 1)));
        if (mercury__dir__succeeded)
        {
          mercury__dir__Letter_37 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__FileName_2, (MR_Integer) 0)));
          mercury__dir__Var_41 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__FileName_2, (MR_Integer) 1)));
          mercury__dir__succeeded = ((MR_tag((MR_Word) mercury__dir__Var_41)) == (MR_mktag((MR_Integer) 1)));
          if (mercury__dir__succeeded)
          {
            mercury__dir__Var_42 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__Var_41, (MR_Integer) 0)));
            mercury__dir__Var_43 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__Var_41, (MR_Integer) 1)));
            mercury__dir__succeeded = (mercury__dir__Var_42 == (MR_Char) 58);
            if (mercury__dir__succeeded)
            {
              mercury__dir__succeeded = ((MR_tag((MR_Word) mercury__dir__Var_43)) == (MR_mktag((MR_Integer) 1)));
              if (mercury__dir__succeeded)
              {
                mercury__dir__Sep_38 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__Var_43, (MR_Integer) 0)));
                mercury__dir__STATE_VARIABLE_FileName_6_33 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__Var_43, (MR_Integer) 1)));
                mercury__dir__succeeded = mercury__char__is_alpha_1_p_0(mercury__dir__Letter_37);
                if (mercury__dir__succeeded)
                  mercury__dir__succeeded = mercury__dir__is_directory_separator_1_p_0(mercury__dir__Sep_38);
              }
            }
          }
        }
        if (mercury__dir__succeeded)
        {
          mercury__dir__Var_7 = mercury__dir__STATE_VARIABLE_FileName_6_33;
          mercury__dir__succeeded = MR_TRUE;
        }
        else
        {
          MR_Word mercury__dir__STATE_VARIABLE_FileName_7_34;
          MR_Char mercury__dir__Sep_45;
          MR_Word mercury__dir__Server_47;
          MR_Word mercury__dir__STATE_VARIABLE_FileName_0_55;
          MR_Word mercury__dir__Var_56;
          MR_Word mercury__dir__STATE_VARIABLE_FileName_17_58;
          MR_Char mercury__dir__Var_72;
          MR_Char mercury__dir__Var_48;
          MR_Word mercury__dir__Var_49;

          mercury__dir__succeeded = ((MR_tag((MR_Word) mercury__dir__FileName_2)) == (MR_mktag((MR_Integer) 1)));
          if (mercury__dir__succeeded)
          {
            mercury__dir__Sep_45 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__FileName_2, (MR_Integer) 0)));
            mercury__dir__Var_56 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__FileName_2, (MR_Integer) 1)));
            mercury__dir__succeeded = ((MR_tag((MR_Word) mercury__dir__Var_56)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__dir__succeeded)
            {
              mercury__dir__Var_72 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__Var_56, (MR_Integer) 0)));
              mercury__dir__STATE_VARIABLE_FileName_0_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__Var_56, (MR_Integer) 1)));
              mercury__dir__succeeded = (mercury__dir__Sep_45 == mercury__dir__Var_72);
              if (mercury__dir__succeeded)
              {
                mercury__dir__succeeded = mercury__dir__is_directory_separator_1_p_0(mercury__dir__Sep_45);
                if (mercury__dir__succeeded)
                {
                  mercury__dir__take_while__ho10_4_p_in__list_0(mercury__dir__STATE_VARIABLE_FileName_0_55, &mercury__dir__Server_47, &mercury__dir__STATE_VARIABLE_FileName_17_58);
                  mercury__dir__succeeded = ((MR_tag((MR_Word) mercury__dir__Server_47)) == (MR_mktag((MR_Integer) 1)));
                  if (mercury__dir__succeeded)
                  {
                    mercury__dir__Var_48 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__Server_47, (MR_Integer) 0)));
                    mercury__dir__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__Server_47, (MR_Integer) 1)));
                    if ((mercury__dir__STATE_VARIABLE_FileName_17_58 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    {
                      mercury__dir__STATE_VARIABLE_FileName_7_34 = mercury__dir__STATE_VARIABLE_FileName_17_58;
                      mercury__dir__succeeded = MR_TRUE;
                    }
                    else
                    {
                      MR_Word mercury__dir__STATE_VARIABLE_FileName_19_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__STATE_VARIABLE_FileName_17_58, (MR_Integer) 1)));
                      MR_Char mercury__dir__Var_73 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__STATE_VARIABLE_FileName_17_58, (MR_Integer) 0)));

                      mercury__dir__succeeded = (mercury__dir__Sep_45 == mercury__dir__Var_73);
                      if (mercury__dir__succeeded)
                      {
                        if ((mercury__dir__STATE_VARIABLE_FileName_19_60 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                        {
                          mercury__dir__STATE_VARIABLE_FileName_7_34 = mercury__dir__STATE_VARIABLE_FileName_19_60;
                          mercury__dir__succeeded = MR_TRUE;
                        }
                        else
                        {
                          MR_Word mercury__dir__Share_52;
                          MR_Word mercury__dir__STATE_VARIABLE_FileName_21_62;
                          MR_Char mercury__dir__Var_53;
                          MR_Word mercury__dir__Var_54;

                          mercury__dir__take_while__ho9_4_p_in__list_0(mercury__dir__STATE_VARIABLE_FileName_19_60, &mercury__dir__Share_52, &mercury__dir__STATE_VARIABLE_FileName_21_62);
                          mercury__dir__succeeded = ((MR_tag((MR_Word) mercury__dir__Share_52)) == (MR_mktag((MR_Integer) 1)));
                          if (mercury__dir__succeeded)
                          {
                            mercury__dir__Var_53 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__Share_52, (MR_Integer) 0)));
                            mercury__dir__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__Share_52, (MR_Integer) 1)));
                            if ((mercury__dir__STATE_VARIABLE_FileName_21_62 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                            {
                              mercury__dir__STATE_VARIABLE_FileName_7_34 = mercury__dir__STATE_VARIABLE_FileName_21_62;
                              mercury__dir__succeeded = MR_TRUE;
                            }
                            else
                            {
                              MR_Char mercury__dir__Var_74 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__STATE_VARIABLE_FileName_21_62, (MR_Integer) 0)));

                              mercury__dir__STATE_VARIABLE_FileName_7_34 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__STATE_VARIABLE_FileName_21_62, (MR_Integer) 1)));
                              mercury__dir__succeeded = (mercury__dir__Sep_45 == mercury__dir__Var_74);
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
          if (mercury__dir__succeeded)
          {
            mercury__dir__Var_7 = mercury__dir__STATE_VARIABLE_FileName_7_34;
            mercury__dir__succeeded = MR_TRUE;
          }
          else
          {
            MR_Char mercury__dir__Char1_76;
            MR_Word mercury__dir__STATE_VARIABLE_FileName_0_79;

            mercury__dir__succeeded = ((MR_tag((MR_Word) mercury__dir__FileName_2)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__dir__succeeded)
            {
              mercury__dir__Char1_76 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__FileName_2, (MR_Integer) 0)));
              mercury__dir__STATE_VARIABLE_FileName_0_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__FileName_2, (MR_Integer) 1)));
              mercury__dir__succeeded = mercury__dir__is_directory_separator_1_p_0(mercury__dir__Char1_76);
              if (mercury__dir__succeeded)
              {
                if ((mercury__dir__STATE_VARIABLE_FileName_0_79 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                {
                  mercury__dir__Var_7 = mercury__dir__STATE_VARIABLE_FileName_0_79;
                  mercury__dir__succeeded = MR_TRUE;
                }
                else
                {
                  MR_Char mercury__dir__Char2_78 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__STATE_VARIABLE_FileName_0_79, (MR_Integer) 0)));

                  mercury__dir__Var_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__STATE_VARIABLE_FileName_0_79, (MR_Integer) 1)));
                  mercury__dir__succeeded = mercury__dir__is_directory_separator_1_p_0(mercury__dir__Char2_78);
                  mercury__dir__succeeded = !(mercury__dir__succeeded);
                }
              }
            }
          }
        }
        if (mercury__dir__succeeded)
        {
          mercury__dir__TypeInfo_8_8 = (MR_Word) &mercury__dir_scalar_common_1[0];
          mercury__dir__succeeded = mercury__builtin__unify_2_p_0(mercury__dir__TypeInfo_8_8, ((MR_Box) (mercury__dir__Var_5)), ((MR_Box) (mercury__dir__Var_7)));
        }
      }
      else
      {
        MR_Char mercury__dir__Char_3;
        MR_Word mercury__dir__Var_6;

        mercury__dir__succeeded = ((MR_tag((MR_Word) mercury__dir__FileName_2)) == (MR_mktag((MR_Integer) 1)));
        if (mercury__dir__succeeded)
        {
          mercury__dir__Char_3 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__FileName_2, (MR_Integer) 0)));
          mercury__dir__Var_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__FileName_2, (MR_Integer) 1)));
          mercury__dir__succeeded = (mercury__dir__Var_6 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
          if (mercury__dir__succeeded)
            mercury__dir__succeeded = mercury__dir__is_directory_separator_1_p_0(mercury__dir__Char_3);
        }
      }
    }
    return mercury__dir__succeeded;
  }
}

MR_bool MR_CALL 
mercury__dir__path_name_is_absolute_1_p_0(
  MR_String mercury__dir__FileName_2)
{
  {
    MR_bool mercury__dir__succeeded;

{
#define MR_PROC_LABEL mercury__dir__path_name_is_absolute_1_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__dir__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__dir__succeeded)
    {
      mercury__require__unexpected_2_p_0((MR_String) "predicate \140dir.dotnet_path_name_is_absolute_2\'/1", (MR_String) "called on non-.NET CLI backend");
      mercury__dir__succeeded = MR_TRUE;
    }
    else
    {
      {
        MR_Char mercury__dir__Var_33;

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
mercury__dir__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__dir__succeeded)
          mercury__dir__Var_33 = (MR_Char) 92;
        else
          mercury__dir__Var_33 = (MR_Char) 47;
        mercury__dir__succeeded = (mercury__dir__Var_33 == (MR_Char) 92);
      }
      if (!(mercury__dir__succeeded))
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
mercury__dir__succeeded  = SUCCESS_INDICATOR;
}
      }
      if (mercury__dir__succeeded)
      {
        MR_Word mercury__dir__Var_5;
        MR_Word mercury__dir__Var_6;
        MR_Char mercury__dir__Letter_43;
        MR_Char mercury__dir__Sep_44;
        MR_Word mercury__dir__Var_47;
        MR_Char mercury__dir__Var_48;
        MR_Word mercury__dir__Var_49;
        MR_Word mercury__dir__STATE_VARIABLE_FileName_6_39;

        mercury__string__to_char_list_2_p_0(mercury__dir__FileName_2, &mercury__dir__Var_6);
        mercury__dir__Var_5 = mercury__dir__canonicalize_path_chars_1_f_0(mercury__dir__Var_6);
        mercury__dir__succeeded = ((MR_tag((MR_Word) mercury__dir__Var_5)) == (MR_mktag((MR_Integer) 1)));
        if (mercury__dir__succeeded)
        {
          mercury__dir__Letter_43 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__Var_5, (MR_Integer) 0)));
          mercury__dir__Var_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__Var_5, (MR_Integer) 1)));
          mercury__dir__succeeded = ((MR_tag((MR_Word) mercury__dir__Var_47)) == (MR_mktag((MR_Integer) 1)));
          if (mercury__dir__succeeded)
          {
            mercury__dir__Var_48 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__Var_47, (MR_Integer) 0)));
            mercury__dir__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__Var_47, (MR_Integer) 1)));
            mercury__dir__succeeded = (mercury__dir__Var_48 == (MR_Char) 58);
            if (mercury__dir__succeeded)
            {
              mercury__dir__succeeded = ((MR_tag((MR_Word) mercury__dir__Var_49)) == (MR_mktag((MR_Integer) 1)));
              if (mercury__dir__succeeded)
              {
                mercury__dir__Sep_44 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__Var_49, (MR_Integer) 0)));
                mercury__dir__STATE_VARIABLE_FileName_6_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__Var_49, (MR_Integer) 1)));
                mercury__dir__succeeded = mercury__char__is_alpha_1_p_0(mercury__dir__Letter_43);
                if (mercury__dir__succeeded)
                  mercury__dir__succeeded = mercury__dir__is_directory_separator_1_p_0(mercury__dir__Sep_44);
              }
            }
          }
        }
        if (mercury__dir__succeeded)
          mercury__dir__succeeded = MR_TRUE;
        else
        {
          MR_Char mercury__dir__Sep_51;
          MR_Word mercury__dir__Server_53;
          MR_Word mercury__dir__STATE_VARIABLE_FileName_0_61;
          MR_Word mercury__dir__Var_62;
          MR_Word mercury__dir__STATE_VARIABLE_FileName_17_64;
          MR_Char mercury__dir__Var_78;
          MR_Char mercury__dir__Var_54;
          MR_Word mercury__dir__Var_55;

          mercury__dir__succeeded = ((MR_tag((MR_Word) mercury__dir__Var_5)) == (MR_mktag((MR_Integer) 1)));
          if (mercury__dir__succeeded)
          {
            mercury__dir__Sep_51 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__Var_5, (MR_Integer) 0)));
            mercury__dir__Var_62 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__Var_5, (MR_Integer) 1)));
            mercury__dir__succeeded = ((MR_tag((MR_Word) mercury__dir__Var_62)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__dir__succeeded)
            {
              mercury__dir__Var_78 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__Var_62, (MR_Integer) 0)));
              mercury__dir__STATE_VARIABLE_FileName_0_61 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__Var_62, (MR_Integer) 1)));
              mercury__dir__succeeded = (mercury__dir__Sep_51 == mercury__dir__Var_78);
              if (mercury__dir__succeeded)
              {
                mercury__dir__succeeded = mercury__dir__is_directory_separator_1_p_0(mercury__dir__Sep_51);
                if (mercury__dir__succeeded)
                {
                  mercury__dir__take_while__ho10_4_p_in__list_0(mercury__dir__STATE_VARIABLE_FileName_0_61, &mercury__dir__Server_53, &mercury__dir__STATE_VARIABLE_FileName_17_64);
                  mercury__dir__succeeded = ((MR_tag((MR_Word) mercury__dir__Server_53)) == (MR_mktag((MR_Integer) 1)));
                  if (mercury__dir__succeeded)
                  {
                    mercury__dir__Var_54 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__Server_53, (MR_Integer) 0)));
                    mercury__dir__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__Server_53, (MR_Integer) 1)));
                    if ((mercury__dir__STATE_VARIABLE_FileName_17_64 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                      mercury__dir__succeeded = MR_TRUE;
                    else
                    {
                      MR_Word mercury__dir__STATE_VARIABLE_FileName_19_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__STATE_VARIABLE_FileName_17_64, (MR_Integer) 1)));
                      MR_Char mercury__dir__Var_79 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__STATE_VARIABLE_FileName_17_64, (MR_Integer) 0)));

                      mercury__dir__succeeded = (mercury__dir__Sep_51 == mercury__dir__Var_79);
                      if (mercury__dir__succeeded)
                      {
                        if ((mercury__dir__STATE_VARIABLE_FileName_19_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                          mercury__dir__succeeded = MR_TRUE;
                        else
                        {
                          MR_Word mercury__dir__Share_58;
                          MR_Word mercury__dir__STATE_VARIABLE_FileName_21_68;
                          MR_Char mercury__dir__Var_59;
                          MR_Word mercury__dir__Var_60;

                          mercury__dir__take_while__ho9_4_p_in__list_0(mercury__dir__STATE_VARIABLE_FileName_19_66, &mercury__dir__Share_58, &mercury__dir__STATE_VARIABLE_FileName_21_68);
                          mercury__dir__succeeded = ((MR_tag((MR_Word) mercury__dir__Share_58)) == (MR_mktag((MR_Integer) 1)));
                          if (mercury__dir__succeeded)
                          {
                            mercury__dir__Var_59 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__Share_58, (MR_Integer) 0)));
                            mercury__dir__Var_60 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__Share_58, (MR_Integer) 1)));
                            if ((mercury__dir__STATE_VARIABLE_FileName_21_68 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                              mercury__dir__succeeded = MR_TRUE;
                            else
                            {
                              MR_Char mercury__dir__Var_80 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__STATE_VARIABLE_FileName_21_68, (MR_Integer) 0)));
                              MR_Word mercury__dir__STATE_VARIABLE_FileName_7_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__STATE_VARIABLE_FileName_21_68, (MR_Integer) 1)));

                              mercury__dir__succeeded = (mercury__dir__Sep_51 == mercury__dir__Var_80);
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
          if (mercury__dir__succeeded)
            mercury__dir__succeeded = MR_TRUE;
          else
          {
            MR_Char mercury__dir__Char1_82;
            MR_Word mercury__dir__STATE_VARIABLE_FileName_0_85;

            mercury__dir__succeeded = ((MR_tag((MR_Word) mercury__dir__Var_5)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__dir__succeeded)
            {
              mercury__dir__Char1_82 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__Var_5, (MR_Integer) 0)));
              mercury__dir__STATE_VARIABLE_FileName_0_85 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__Var_5, (MR_Integer) 1)));
              mercury__dir__succeeded = mercury__dir__is_directory_separator_1_p_0(mercury__dir__Char1_82);
              if (mercury__dir__succeeded)
              {
                if ((mercury__dir__STATE_VARIABLE_FileName_0_85 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                  mercury__dir__succeeded = MR_TRUE;
                else
                {
                  MR_Char mercury__dir__Char2_84 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__STATE_VARIABLE_FileName_0_85, (MR_Integer) 0)));
                  MR_Word mercury__dir__Var_95 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__STATE_VARIABLE_FileName_0_85, (MR_Integer) 1)));

                  mercury__dir__succeeded = mercury__dir__is_directory_separator_1_p_0(mercury__dir__Char2_84);
                  mercury__dir__succeeded = !(mercury__dir__succeeded);
                }
              }
            }
          }
        }
      }
      else
      {
        MR_Char mercury__dir__FirstChar_4;
        MR_Integer mercury__dir__V_7_90;

{
#define MR_PROC_LABEL mercury__dir__path_name_is_absolute_1_p_0

	MR_String Str;
	MR_Integer Length;

	Str =  mercury__dir__FileName_2 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	 mercury__dir__V_7_90  = Length;
}
{
#define MR_PROC_LABEL mercury__dir__path_name_is_absolute_1_p_0

	MR_Integer Index;
	MR_Integer Length;
	MR_bool SUCCESS_INDICATOR;

	Index =  (MR_Integer) 0 ;
	Length =  mercury__dir__V_7_90 ;
		{

    /*
    ** We do not test for negative values of Index because (a) MR_Unsigned
    ** is unsigned and hence a negative argument will appear as a very large
    ** positive one after the cast and (b) anybody dealing with the case
    ** where strlen(Str) > MAXINT is clearly barking mad (and one may well get
    ** an integer overflow error in this case).
    */
    SUCCESS_INDICATOR = ((MR_Unsigned) Index < (MR_Unsigned) Length);


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__dir__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__dir__succeeded)
        {
          mercury__string__unsafe_index_3_p_0(mercury__dir__FileName_2, (MR_Integer) 0, &mercury__dir__FirstChar_4);
          mercury__dir__succeeded = mercury__dir__is_directory_separator_1_p_0(mercury__dir__FirstChar_4);
        }
      }
    }
    return mercury__dir__succeeded;
  }
}

static void MR_CALL 
mercury__dir__take_while__ho10_4_p_in__list_0(
  MR_Word mercury__dir__HeadVar__2_2,
  MR_Word * mercury__dir__HeadVar__3_3,
  MR_Word * mercury__dir__HeadVar__4_4)
{
  {
    MR_bool mercury__dir__succeeded;

    if ((mercury__dir__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *mercury__dir__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *mercury__dir__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    else
    {
      MR_Char mercury__dir__V_7_7 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word mercury__dir__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__HeadVar__2_2, (MR_Integer) 1)));

      mercury__dir__succeeded = mercury__dir__is_directory_separator_1_p_0(mercury__dir__V_7_7);
      mercury__dir__succeeded = !(mercury__dir__succeeded);
      if (mercury__dir__succeeded)
      {
        MR_Word mercury__dir__V_11_11;

        mercury__dir__take_while__ho10_4_p_in__list_0(mercury__dir__V_8_8, &mercury__dir__V_11_11, mercury__dir__HeadVar__4_4);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__dir__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (mercury__dir__V_7_7));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__dir__V_11_11));
        }
      }
      else
      {
        *mercury__dir__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *mercury__dir__HeadVar__4_4 = mercury__dir__HeadVar__2_2;
      }
    }
  }
}

static void MR_CALL 
mercury__dir__take_while__ho9_4_p_in__list_0(
  MR_Word mercury__dir__HeadVar__2_2,
  MR_Word * mercury__dir__HeadVar__3_3,
  MR_Word * mercury__dir__HeadVar__4_4)
{
  {
    MR_bool mercury__dir__succeeded;

    if ((mercury__dir__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *mercury__dir__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *mercury__dir__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    else
    {
      MR_Char mercury__dir__V_7_7 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word mercury__dir__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__HeadVar__2_2, (MR_Integer) 1)));

      mercury__dir__succeeded = mercury__dir__is_directory_separator_1_p_0(mercury__dir__V_7_7);
      mercury__dir__succeeded = !(mercury__dir__succeeded);
      if (mercury__dir__succeeded)
      {
        MR_Word mercury__dir__V_11_11;

        mercury__dir__take_while__ho9_4_p_in__list_0(mercury__dir__V_8_8, &mercury__dir__V_11_11, mercury__dir__HeadVar__4_4);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__dir__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (mercury__dir__V_7_7));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__dir__V_11_11));
        }
      }
      else
      {
        *mercury__dir__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *mercury__dir__HeadVar__4_4 = mercury__dir__HeadVar__2_2;
      }
    }
  }
}

MR_Word MR_CALL 
mercury__dir__canonicalize_path_chars_1_f_0(
  MR_Word mercury__dir__FileName0_3)
{
  {
    MR_bool mercury__dir__succeeded;
    MR_Word mercury__dir__FileName_4;
    MR_Char mercury__dir__Char1_5;
    MR_Word mercury__dir__FileName1_6;

    {
      MR_Char mercury__dir__Var_14;

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
mercury__dir__succeeded  = SUCCESS_INDICATOR;
}
      if (mercury__dir__succeeded)
        mercury__dir__Var_14 = (MR_Char) 92;
      else
        mercury__dir__Var_14 = (MR_Char) 47;
      mercury__dir__succeeded = (mercury__dir__Var_14 == (MR_Char) 92);
    }
    if (!(mercury__dir__succeeded))
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
mercury__dir__succeeded  = SUCCESS_INDICATOR;
}
    }
    if (mercury__dir__succeeded)
    {
      mercury__dir__succeeded = ((MR_tag((MR_Word) mercury__dir__FileName0_3)) == (MR_mktag((MR_Integer) 1)));
      if (mercury__dir__succeeded)
      {
        mercury__dir__Char1_5 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__FileName0_3, (MR_Integer) 0)));
        mercury__dir__FileName1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__FileName0_3, (MR_Integer) 1)));
        mercury__dir__succeeded = mercury__dir__is_directory_separator_1_p_0(mercury__dir__Char1_5);
      }
    }
    if (mercury__dir__succeeded)
    {
      MR_Char mercury__dir__CanonicalChar1_7;
      MR_Word mercury__dir__FileName2_8;
      MR_Word mercury__dir__Var_10;
      MR_Char mercury__dir__Char2_9;
      MR_Word mercury__dir__Var_11;

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
mercury__dir__succeeded  = SUCCESS_INDICATOR;
}
      if (mercury__dir__succeeded)
        mercury__dir__CanonicalChar1_7 = mercury__dir__Char1_5;
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
mercury__dir__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__dir__succeeded)
          mercury__dir__CanonicalChar1_7 = (MR_Char) 92;
        else
          mercury__dir__CanonicalChar1_7 = (MR_Char) 47;
      }
      mercury__dir__Var_10 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      mercury__dir__FileName2_8 = mercury__dir__canonicalize_path_chars_2_2_f_0(mercury__dir__FileName1_6, mercury__dir__Var_10);
      mercury__dir__succeeded = ((MR_tag((MR_Word) mercury__dir__FileName2_8)) == (MR_mktag((MR_Integer) 1)));
      if (mercury__dir__succeeded)
      {
        mercury__dir__Char2_9 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__FileName2_8, (MR_Integer) 0)));
        mercury__dir__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__FileName2_8, (MR_Integer) 1)));
        mercury__dir__succeeded = (mercury__dir__Var_11 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
        if (mercury__dir__succeeded)
          mercury__dir__succeeded = mercury__dir__is_directory_separator_1_p_0(mercury__dir__Char2_9);
      }
      if (mercury__dir__succeeded)
      {
        MR_Word mercury__dir__Var_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        {
          mercury__dir__FileName_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__dir__FileName_4, 0) = ((MR_Box) (MR_Word) (mercury__dir__CanonicalChar1_7));
          MR_hl_field(MR_mktag(1), mercury__dir__FileName_4, 1) = ((MR_Box) (mercury__dir__Var_12));
        }
      }
      else
        {
          mercury__dir__FileName_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__dir__FileName_4, 0) = ((MR_Box) (MR_Word) (mercury__dir__CanonicalChar1_7));
          MR_hl_field(MR_mktag(1), mercury__dir__FileName_4, 1) = ((MR_Box) (mercury__dir__FileName2_8));
        }
    }
    else
    {
      MR_Word mercury__dir__Var_13 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

      mercury__dir__FileName_4 = mercury__dir__canonicalize_path_chars_2_2_f_0(mercury__dir__FileName0_3, mercury__dir__Var_13);
    }
    return mercury__dir__FileName_4;
  }
}

static MR_Word MR_CALL 
mercury__dir__canonicalize_path_chars_2_2_f_0(
  MR_Word mercury__dir__HeadVar__1_1,
  MR_Word mercury__dir__HeadVar__2_2)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__dir__succeeded;
      MR_Word mercury__dir__HeadVar__3_3;

      if ((mercury__dir__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        MR_Word mercury__dir__TypeCtorInfo_12_12 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;

        mercury__list__reverse_2_p_0(mercury__dir__TypeCtorInfo_12_12, mercury__dir__HeadVar__2_2, &mercury__dir__HeadVar__3_3);
      }
      else
      {
        MR_Char mercury__dir__C0_5 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__dir__FileName0_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__dir__RevFileName_8;
        MR_Char mercury__dir__C_9;
        MR_Char mercury__dir__C2_10;
        MR_Word mercury__dir__Var_11;

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
mercury__dir__succeeded  = SUCCESS_INDICATOR;
}
        mercury__dir__succeeded = !(mercury__dir__succeeded);
        if (mercury__dir__succeeded)
          mercury__dir__succeeded = mercury__dir__is_directory_separator_1_p_0(mercury__dir__C0_5);
        if (mercury__dir__succeeded)
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
mercury__dir__succeeded  = SUCCESS_INDICATOR;
}
          if (mercury__dir__succeeded)
            mercury__dir__C_9 = (MR_Char) 92;
          else
            mercury__dir__C_9 = (MR_Char) 47;
        }
        else
          mercury__dir__C_9 = mercury__dir__C0_5;
        mercury__dir__succeeded = mercury__dir__is_directory_separator_1_p_0(mercury__dir__C_9);
        if (mercury__dir__succeeded)
        {
          mercury__dir__succeeded = ((MR_tag((MR_Word) mercury__dir__FileName0_6)) == (MR_mktag((MR_Integer) 1)));
          if (mercury__dir__succeeded)
          {
            mercury__dir__C2_10 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__FileName0_6, (MR_Integer) 0)));
            mercury__dir__Var_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__FileName0_6, (MR_Integer) 1)));
            mercury__dir__succeeded = mercury__dir__is_directory_separator_1_p_0(mercury__dir__C2_10);
          }
        }
        if (mercury__dir__succeeded)
          mercury__dir__RevFileName_8 = mercury__dir__HeadVar__2_2;
        else
          {
            mercury__dir__RevFileName_8 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__dir__RevFileName_8, 0) = ((MR_Box) (MR_Word) (mercury__dir__C_9));
            MR_hl_field(MR_mktag(1), mercury__dir__RevFileName_8, 1) = ((MR_Box) (mercury__dir__HeadVar__2_2));
          }
        /* direct tailcall eliminated */
        {
          MR_Word mercury__dir__next_value_of_HeadVar__1_1 = mercury__dir__FileName0_6;
          MR_Word mercury__dir__next_value_of_HeadVar__2_2 = mercury__dir__RevFileName_8;

          mercury__dir__HeadVar__2_2 = mercury__dir__next_value_of_HeadVar__2_2;
          mercury__dir__HeadVar__1_1 = mercury__dir__next_value_of_HeadVar__1_1;
        }
        continue;
      }
      return mercury__dir__HeadVar__3_3;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__dir__split_name_2_3_p_0(
  MR_Word mercury__dir__FileNameChars0_4,
  MR_String * mercury__dir__DirName_5,
  MR_String * mercury__dir__BaseName_6)
{
  {
    MR_bool mercury__dir__succeeded = ((MR_tag((MR_Word) mercury__dir__FileNameChars0_4)) == (MR_mktag((MR_Integer) 1)));
    MR_Word mercury__dir__FileNameWithoutSlash_9;
    MR_Char mercury__dir__Var_7;
    MR_Word mercury__dir__Var_8;
    MR_Word mercury__dir__Chars1_20;
    MR_Word mercury__dir__TypeCtorInfo_6_22;
    MR_Char mercury__dir__Sep_21;
    MR_Box mercury__dir__conv0_Sep_21;
    MR_Word mercury__dir__TypeInfo_17_17;
    MR_String mercury__dir__Var_10;
    MR_Word mercury__dir__Var_14;
    MR_Word mercury__dir__TypeInfo_18_18;
    MR_String mercury__dir__Var_11;
    MR_Word mercury__dir__Var_16;

    if (mercury__dir__succeeded)
    {
      mercury__dir__Var_7 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__FileNameChars0_4, (MR_Integer) 0)));
      mercury__dir__Var_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__FileNameChars0_4, (MR_Integer) 1)));
      mercury__dir__TypeCtorInfo_6_22 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
      mercury__dir__succeeded = mercury__list__split_last_3_p_0(mercury__dir__TypeCtorInfo_6_22, mercury__dir__FileNameChars0_4, &mercury__dir__Chars1_20, &mercury__dir__conv0_Sep_21);
      if (mercury__dir__succeeded)
      {
        mercury__dir__Sep_21 = ((MR_Char) (MR_Word) mercury__dir__conv0_Sep_21);
        mercury__dir__succeeded = MR_TRUE;
      }
      if (mercury__dir__succeeded)
        mercury__dir__succeeded = mercury__dir__is_directory_separator_1_p_0(mercury__dir__Sep_21);
      if (mercury__dir__succeeded)
        mercury__dir__FileNameWithoutSlash_9 = mercury__dir__Chars1_20;
      else
        mercury__dir__FileNameWithoutSlash_9 = mercury__dir__FileNameChars0_4;
      mercury__dir__Var_10 = (MR_String) ".";
      mercury__string__to_char_list_2_p_0(mercury__dir__Var_10, &mercury__dir__Var_14);
      mercury__dir__TypeInfo_17_17 = (MR_Word) &mercury__dir_scalar_common_1[0];
      mercury__dir__succeeded = mercury__builtin__unify_2_p_0(mercury__dir__TypeInfo_17_17, ((MR_Box) (mercury__dir__FileNameWithoutSlash_9)), ((MR_Box) (mercury__dir__Var_14)));
      mercury__dir__succeeded = !(mercury__dir__succeeded);
      if (mercury__dir__succeeded)
      {
        mercury__dir__Var_11 = (MR_String) "..";
        mercury__string__to_char_list_2_p_0(mercury__dir__Var_11, &mercury__dir__Var_16);
        mercury__dir__TypeInfo_18_18 = (MR_Word) &mercury__dir_scalar_common_1[0];
        mercury__dir__succeeded = mercury__builtin__unify_2_p_0(mercury__dir__TypeInfo_18_18, ((MR_Box) (mercury__dir__FileNameWithoutSlash_9)), ((MR_Box) (mercury__dir__Var_16)));
        mercury__dir__succeeded = !(mercury__dir__succeeded);
        if (mercury__dir__succeeded)
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
mercury__dir__succeeded  = SUCCESS_INDICATOR;
}
          if (mercury__dir__succeeded)
          {
            MR_String mercury__dir__Var_12;

            mercury__string__from_char_list_2_p_0(mercury__dir__FileNameWithoutSlash_9, &mercury__dir__Var_12);
            *mercury__dir__DirName_5 = (MR_String) "";
            *mercury__dir__BaseName_6 = (MR_String) "";
{
#define MR_PROC_LABEL mercury__dir__split_name_2_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_FALSE;


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	}
mercury__dir__succeeded  = SUCCESS_INDICATOR;
}
          }
          else
          {
            MR_Word mercury__dir__TypeCtorInfo_36_62 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_character_0;
            MR_Word mercury__dir__RevFileNameChars0_33;
            MR_Word mercury__dir__RevFileNameChars_36;
            MR_Word mercury__dir__RevFileNameChars1_35;
            MR_Char mercury__dir__LastChar_34;
            MR_Word mercury__dir__RevBaseName_37;
            MR_Word mercury__dir__RevDirName0_38;
            MR_Char mercury__dir__Var_39;
            MR_Word mercury__dir__Var_40;
            MR_Char mercury__dir__Var_41;
            MR_Word mercury__dir__Var_42;

            mercury__list__reverse_2_p_0(mercury__dir__TypeCtorInfo_36_62, mercury__dir__FileNameChars0_4, &mercury__dir__RevFileNameChars0_33);
            mercury__dir__succeeded = ((MR_tag((MR_Word) mercury__dir__RevFileNameChars0_33)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__dir__succeeded)
            {
              mercury__dir__LastChar_34 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__RevFileNameChars0_33, (MR_Integer) 0)));
              mercury__dir__RevFileNameChars1_35 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__RevFileNameChars0_33, (MR_Integer) 1)));
              mercury__dir__succeeded = mercury__dir__is_directory_separator_1_p_0(mercury__dir__LastChar_34);
            }
            if (mercury__dir__succeeded)
              mercury__dir__RevFileNameChars_36 = mercury__dir__RevFileNameChars1_35;
            else
              mercury__dir__RevFileNameChars_36 = mercury__dir__RevFileNameChars0_33;
            mercury__dir__take_while__ho11_4_p_in__list_0(mercury__dir__RevFileNameChars_36, &mercury__dir__RevBaseName_37, &mercury__dir__RevDirName0_38);
            mercury__dir__succeeded = ((MR_tag((MR_Word) mercury__dir__RevBaseName_37)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__dir__succeeded)
            {
              mercury__dir__Var_39 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__RevBaseName_37, (MR_Integer) 0)));
              mercury__dir__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__RevBaseName_37, (MR_Integer) 1)));
              mercury__dir__succeeded = ((MR_tag((MR_Word) mercury__dir__RevDirName0_38)) == (MR_mktag((MR_Integer) 1)));
              if (mercury__dir__succeeded)
              {
                mercury__dir__Var_41 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__RevDirName0_38, (MR_Integer) 0)));
                mercury__dir__Var_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__RevDirName0_38, (MR_Integer) 1)));
              }
            }
            if (mercury__dir__succeeded)
            {
              MR_Word mercury__dir__RevDirName_46;
              MR_Word mercury__dir__RevDirName1_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__RevDirName0_38, (MR_Integer) 1)));
              MR_Char mercury__dir__Sep_43 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__RevDirName0_38, (MR_Integer) 0)));

              mercury__dir__succeeded = mercury__dir__is_directory_separator_1_p_0(mercury__dir__Sep_43);
              if (mercury__dir__succeeded)
              {
                {
                  MR_Char mercury__dir__Drive_45;
                  MR_Char mercury__dir__Var_52;
                  MR_Word mercury__dir__Var_53;
                  MR_Word mercury__dir__Var_54;

                  {
                    MR_Char mercury__dir__Var_68;

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
mercury__dir__succeeded  = SUCCESS_INDICATOR;
}
                    if (mercury__dir__succeeded)
                      mercury__dir__Var_68 = (MR_Char) 92;
                    else
                      mercury__dir__Var_68 = (MR_Char) 47;
                    mercury__dir__succeeded = (mercury__dir__Var_68 == (MR_Char) 92);
                  }
                  if (!(mercury__dir__succeeded))
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
mercury__dir__succeeded  = SUCCESS_INDICATOR;
}
                  }
                  if (mercury__dir__succeeded)
                  {
                    mercury__dir__succeeded = ((MR_tag((MR_Word) mercury__dir__RevDirName1_44)) == (MR_mktag((MR_Integer) 1)));
                    if (mercury__dir__succeeded)
                    {
                      mercury__dir__Var_52 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__RevDirName1_44, (MR_Integer) 0)));
                      mercury__dir__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__RevDirName1_44, (MR_Integer) 1)));
                      mercury__dir__succeeded = (mercury__dir__Var_52 == (MR_Char) 58);
                      if (mercury__dir__succeeded)
                      {
                        mercury__dir__succeeded = ((MR_tag((MR_Word) mercury__dir__Var_53)) == (MR_mktag((MR_Integer) 1)));
                        if (mercury__dir__succeeded)
                        {
                          mercury__dir__Drive_45 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__Var_53, (MR_Integer) 0)));
                          mercury__dir__Var_54 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__Var_53, (MR_Integer) 1)));
                          mercury__dir__succeeded = (mercury__dir__Var_54 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                          if (mercury__dir__succeeded)
                            mercury__dir__succeeded = mercury__char__is_alpha_1_p_0(mercury__dir__Drive_45);
                        }
                      }
                    }
                  }
                }
                if (!(mercury__dir__succeeded))
                  mercury__dir__succeeded = (mercury__dir__RevDirName1_44 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              }
              mercury__dir__succeeded = !(mercury__dir__succeeded);
              if (mercury__dir__succeeded)
                mercury__dir__RevDirName_46 = mercury__dir__RevDirName1_44;
              else
                mercury__dir__RevDirName_46 = mercury__dir__RevDirName0_38;
              mercury__string__from_rev_char_list_2_p_0(mercury__dir__RevBaseName_37, mercury__dir__BaseName_6);
              mercury__string__from_rev_char_list_2_p_0(mercury__dir__RevDirName_46, mercury__dir__DirName_5);
              mercury__dir__succeeded = MR_TRUE;
            }
            else
            {
              MR_Word mercury__dir__BaseNameChars_47;
              MR_Char mercury__dir__BaseNameFirst_48;
              MR_Word mercury__dir__Var_55;
              MR_Char mercury__dir__Var_56;
              MR_Word mercury__dir__Var_57;
              MR_Word mercury__dir__Var_58;
              MR_Char mercury__dir__Var_59;
              MR_Word mercury__dir__Var_60;
              MR_Char mercury__dir__Drive_61;
              MR_Char mercury__dir__Var_73;
              MR_Word mercury__dir__Var_49;

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
mercury__dir__succeeded  = SUCCESS_INDICATOR;
}
              if (mercury__dir__succeeded)
                mercury__dir__Var_73 = (MR_Char) 92;
              else
                mercury__dir__Var_73 = (MR_Char) 47;
              mercury__dir__succeeded = (mercury__dir__Var_73 == (MR_Char) 92);
              if (mercury__dir__succeeded)
              {
                mercury__dir__succeeded = ((MR_tag((MR_Word) mercury__dir__FileNameChars0_4)) == (MR_mktag((MR_Integer) 1)));
                if (mercury__dir__succeeded)
                {
                  mercury__dir__Drive_61 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__FileNameChars0_4, (MR_Integer) 0)));
                  mercury__dir__Var_55 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__FileNameChars0_4, (MR_Integer) 1)));
                  mercury__dir__succeeded = ((MR_tag((MR_Word) mercury__dir__Var_55)) == (MR_mktag((MR_Integer) 1)));
                  if (mercury__dir__succeeded)
                  {
                    mercury__dir__Var_56 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__Var_55, (MR_Integer) 0)));
                    mercury__dir__BaseNameChars_47 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__Var_55, (MR_Integer) 1)));
                    mercury__dir__succeeded = (mercury__dir__Var_56 == (MR_Char) 58);
                    if (mercury__dir__succeeded)
                    {
                      mercury__dir__succeeded = mercury__char__is_alpha_1_p_0(mercury__dir__Drive_61);
                      if (mercury__dir__succeeded)
                      {
                        mercury__dir__succeeded = ((MR_tag((MR_Word) mercury__dir__BaseNameChars_47)) == (MR_mktag((MR_Integer) 1)));
                        if (mercury__dir__succeeded)
                        {
                          mercury__dir__BaseNameFirst_48 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__BaseNameChars_47, (MR_Integer) 0)));
                          mercury__dir__Var_49 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__BaseNameChars_47, (MR_Integer) 1)));
                          mercury__dir__succeeded = mercury__dir__is_directory_separator_1_p_0(mercury__dir__BaseNameFirst_48);
                          mercury__dir__succeeded = !(mercury__dir__succeeded);
                          if (mercury__dir__succeeded)
                          {
                            mercury__string__from_char_list_2_p_0(mercury__dir__BaseNameChars_47, mercury__dir__BaseName_6);
                            mercury__dir__Var_59 = (MR_Char) 58;
                            mercury__dir__Var_60 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                            mercury__dir__Var_58 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__dir_scalar_common_1[5]);
                            {
                              mercury__dir__Var_57 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                              MR_hl_field(MR_mktag(1), mercury__dir__Var_57, 0) = ((MR_Box) (MR_Word) (mercury__dir__Drive_61));
                              MR_hl_field(MR_mktag(1), mercury__dir__Var_57, 1) = ((MR_Box) (mercury__dir__Var_58));
                            }
                            mercury__string__from_char_list_2_p_0(mercury__dir__Var_57, mercury__dir__DirName_5);
                            mercury__dir__succeeded = MR_TRUE;
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
    return mercury__dir__succeeded;
  }
}

static void MR_CALL 
mercury__dir__take_while__ho11_4_p_in__list_0(
  MR_Word mercury__dir__HeadVar__2_2,
  MR_Word * mercury__dir__HeadVar__3_3,
  MR_Word * mercury__dir__HeadVar__4_4)
{
  {
    MR_bool mercury__dir__succeeded;

    if ((mercury__dir__HeadVar__2_2 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *mercury__dir__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      *mercury__dir__HeadVar__4_4 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    }
    else
    {
      MR_Char mercury__dir__V_7_7 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word mercury__dir__V_8_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__dir__HeadVar__2_2, (MR_Integer) 1)));

      mercury__dir__succeeded = mercury__dir__is_directory_separator_1_p_0(mercury__dir__V_7_7);
      mercury__dir__succeeded = !(mercury__dir__succeeded);
      if (mercury__dir__succeeded)
      {
        MR_Word mercury__dir__V_11_11;

        mercury__dir__take_while__ho11_4_p_in__list_0(mercury__dir__V_8_8, &mercury__dir__V_11_11, mercury__dir__HeadVar__4_4);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *mercury__dir__HeadVar__3_3 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (MR_Word) (mercury__dir__V_7_7));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__dir__V_11_11));
        }
      }
      else
      {
        *mercury__dir__HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *mercury__dir__HeadVar__4_4 = mercury__dir__HeadVar__2_2;
      }
    }
  }
}

void MR_CALL 
mercury__dir__parent_directory_1_p_0(
  MR_String * mercury__dir__HeadVar__1_1)
{
  *mercury__dir__HeadVar__1_1 = (MR_String) "..";
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
  MR_String * mercury__dir__HeadVar__1_1)
{
  *mercury__dir__HeadVar__1_1 = (MR_String) ".";
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
  MR_Char * mercury__dir__Char_2,
  MR_Cont mercury__dir__cont,
  void * mercury__dir__cont_env_ptr)
{
  {
    MR_bool mercury__dir__succeeded;

    {
      MR_Char mercury__dir__Var_3;

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
mercury__dir__succeeded  = SUCCESS_INDICATOR;
}
      if (mercury__dir__succeeded)
        *mercury__dir__Char_2 = (MR_Char) 92;
      else
        *mercury__dir__Char_2 = (MR_Char) 47;
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
mercury__dir__succeeded  = SUCCESS_INDICATOR;
}
      if (mercury__dir__succeeded)
        mercury__dir__Var_3 = (MR_Char) 92;
      else
        mercury__dir__Var_3 = (MR_Char) 47;
      mercury__dir__succeeded = (*mercury__dir__Char_2 == mercury__dir__Var_3);
      mercury__dir__succeeded = !(mercury__dir__succeeded);
      if (mercury__dir__succeeded)
        mercury__dir__cont(mercury__dir__cont_env_ptr);
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
mercury__dir__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__dir__succeeded)
      *mercury__dir__Char_2 = (MR_Char) 92;
    else
      *mercury__dir__Char_2 = (MR_Char) 47;
    mercury__dir__cont(mercury__dir__cont_env_ptr);
  }
}

MR_bool MR_CALL 
mercury__dir__is_directory_separator_1_p_0(
  MR_Char mercury__dir__Char_2)
{
  {
    MR_bool mercury__dir__succeeded;

    {
      MR_Char mercury__dir__Var_3;
      MR_Char mercury__dir__Var_4;

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
mercury__dir__succeeded  = SUCCESS_INDICATOR;
}
      if (mercury__dir__succeeded)
        mercury__dir__Var_3 = (MR_Char) 92;
      else
        mercury__dir__Var_3 = (MR_Char) 47;
      mercury__dir__succeeded = (mercury__dir__Char_2 == mercury__dir__Var_3);
      if (mercury__dir__succeeded)
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
mercury__dir__succeeded  = SUCCESS_INDICATOR;
}
        if (mercury__dir__succeeded)
          mercury__dir__Var_4 = (MR_Char) 92;
        else
          mercury__dir__Var_4 = (MR_Char) 47;
        mercury__dir__succeeded = (mercury__dir__Char_2 == mercury__dir__Var_4);
        mercury__dir__succeeded = !(mercury__dir__succeeded);
      }
    }
    if (!(mercury__dir__succeeded))
    {
      MR_Char mercury__dir__Var_5;

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
mercury__dir__succeeded  = SUCCESS_INDICATOR;
}
      if (mercury__dir__succeeded)
        mercury__dir__Var_5 = (MR_Char) 92;
      else
        mercury__dir__Var_5 = (MR_Char) 47;
      mercury__dir__succeeded = (mercury__dir__Char_2 == mercury__dir__Var_5);
    }
    return mercury__dir__succeeded;
  }
}

void MR_CALL 
mercury__dir__directory_separator_1_p_0(
  MR_Char * mercury__dir__HeadVar__1_1)
{
  {
    MR_bool mercury__dir__succeeded;

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
mercury__dir__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__dir__succeeded)
      *mercury__dir__HeadVar__1_1 = (MR_Char) 92;
    else
      *mercury__dir__HeadVar__1_1 = (MR_Char) 47;
  }
}

MR_Char MR_CALL 
mercury__dir__directory_separator_0_f_0(void)
{
  {
    MR_bool mercury__dir__succeeded;
    MR_Char mercury__dir__HeadVar__1_1;

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
mercury__dir__succeeded  = SUCCESS_INDICATOR;
}
    if (mercury__dir__succeeded)
      mercury__dir__HeadVar__1_1 = (MR_Char) 92;
    else
      mercury__dir__HeadVar__1_1 = (MR_Char) 47;
    return mercury__dir__HeadVar__1_1;
  }
}

static MR_bool MR_CALL 
mercury__dir____Unify____foldl_pred_1_0_10001(
  MR_Box mercury__dir__wrapper_arg_1,
  MR_Box mercury__dir__wrapper_arg_2,
  MR_Box mercury__dir__wrapper_arg_3)
{
  {
    MR_bool mercury__dir__succeeded;

    mercury__dir__succeeded = mercury__dir____Unify____foldl_pred_1_0(((MR_Word) mercury__dir__wrapper_arg_1), ((MR_Word) mercury__dir__wrapper_arg_2), ((MR_Word) mercury__dir__wrapper_arg_3));
    return mercury__dir__succeeded;
  }
}

static void MR_CALL 
mercury__dir____Compare____foldl_pred_1_0_10001(
  MR_Box mercury__dir__wrapper_arg_1,
  MR_Box * mercury__dir__wrapper_arg_2,
  MR_Box mercury__dir__wrapper_arg_3,
  MR_Box mercury__dir__wrapper_arg_4)
{
  {
    MR_Word mercury__dir__conv0_HeadVar__1_1;

    mercury__dir____Compare____foldl_pred_1_0(((MR_Word) mercury__dir__wrapper_arg_1), &mercury__dir__conv0_HeadVar__1_1, ((MR_Word) mercury__dir__wrapper_arg_3), ((MR_Word) mercury__dir__wrapper_arg_4));
    *mercury__dir__wrapper_arg_2 = ((MR_Box) (mercury__dir__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__dir____Unify____make_single_directory_status_0_0_10001(
  MR_Box mercury__dir__wrapper_arg_1,
  MR_Box mercury__dir__wrapper_arg_2)
{
  {
    MR_bool mercury__dir__succeeded;

    mercury__dir__succeeded = mercury__dir____Unify____make_single_directory_status_0_0(((MR_Word) mercury__dir__wrapper_arg_1), ((MR_Word) mercury__dir__wrapper_arg_2));
    return mercury__dir__succeeded;
  }
}

static void MR_CALL 
mercury__dir____Compare____make_single_directory_status_0_0_10001(
  MR_Box * mercury__dir__wrapper_arg_1,
  MR_Box mercury__dir__wrapper_arg_2,
  MR_Box mercury__dir__wrapper_arg_3)
{
  {
    MR_Word mercury__dir__conv0_HeadVar__1_1;

    mercury__dir____Compare____make_single_directory_status_0_0(&mercury__dir__conv0_HeadVar__1_1, ((MR_Word) mercury__dir__wrapper_arg_2), ((MR_Word) mercury__dir__wrapper_arg_3));
    *mercury__dir__wrapper_arg_1 = ((MR_Box) (mercury__dir__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__dir____Unify____stream_0_0_10001(
  MR_Box mercury__dir__wrapper_arg_1,
  MR_Box mercury__dir__wrapper_arg_2)
{
  {
    MR_bool mercury__dir__succeeded;

    mercury__dir__succeeded = mercury__dir____Unify____stream_0_0(((MR_Box) mercury__dir__wrapper_arg_1), ((MR_Box) mercury__dir__wrapper_arg_2));
    return mercury__dir__succeeded;
  }
}

static void MR_CALL 
mercury__dir____Compare____stream_0_0_10001(
  MR_Box * mercury__dir__wrapper_arg_1,
  MR_Box mercury__dir__wrapper_arg_2,
  MR_Box mercury__dir__wrapper_arg_3)
{
  {
    MR_Word mercury__dir__conv0_HeadVar__1_1;

    mercury__dir____Compare____stream_0_0(&mercury__dir__conv0_HeadVar__1_1, ((MR_Box) mercury__dir__wrapper_arg_2), ((MR_Box) mercury__dir__wrapper_arg_3));
    *mercury__dir__wrapper_arg_1 = ((MR_Box) (mercury__dir__conv0_HeadVar__1_1));
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

/* :- end_module dir. */
