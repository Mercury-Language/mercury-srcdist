/*
** Automatically generated from `dir.m'
** by the Mercury compiler,
** version rotd-2026-07-12
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
#include "counter.mih"
#include "deconstruct.mih"
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
#include "io.stream_ops.mih"
#include "io.text_read.mih"
#include "stream.string_writer.mih"
#include "string.builder.mih"
#include "string.format.mih"
#include "string.parse_runtime.mih"
#include "string.parse_util.mih"
#include "string.to_string.mih"

#line 1678 "dir.m"

#include "mercury_string.h"
#include "mercury_types.h"

#if defined(MR_WIN32) && defined(MR_HAVE_WINDOWS_H)
  #include "mercury_windows.h"
  #include <direct.h>   // for _wgetcwd
#endif

#ifdef MR_HAVE_UNISTD_H
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

static const MR_FA_PseudoTypeInfo_Struct1 mercury__dir__list__pti_list_1__plain_dir__type_ctor_info_file_error_0;

static const MR_FA_TypeInfo_Struct1 mercury__dir__list__ti_list_1dir__type_ctor_info_file_error_0;

static const MR_VA_PseudoTypeInfo_Struct3 mercury__dir____vpti_tuple_3__plain_dir__type_ctor_info_maybe_user_stop_0__plain_list__ti_list_1dir__type_ctor_info_file_error_0__pseudo_1;

static const MR_VA_PseudoTypeInfo_Struct3 mercury__dir____vpti_pred_3__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0;

static const MR_VA_PseudoTypeInfo_Struct2 mercury__dir____vpti_tuple_2__pseudo_1__plain_io__type_ctor_info_state_0;

static const MR_EnumFunctorDesc mercury__dir__dir__enum_functor_desc_canon_prev_char_0_0;

static const MR_EnumFunctorDesc mercury__dir__dir__enum_functor_desc_canon_prev_char_0_1;

static const MR_EnumFunctorDescPtr mercury__dir__dir__enum_ordinal_ordered_canon_prev_char_0[2];

static const MR_EnumFunctorDescPtr mercury__dir__dir__enum_name_ordered_canon_prev_char_0[2];

static const MR_Integer mercury__dir__dir__functor_number_map_canon_prev_char_0[2];

static const MR_PseudoTypeInfo mercury__dir__dir__field_types_file_error_0_0[3];

static const MR_DuArgLocn mercury__dir__dir__field_locns_file_error_0_0[3];

static const MR_DuFunctorDesc mercury__dir__dir__du_functor_desc_file_error_0_0;

static const MR_DuFunctorDescPtr mercury__dir__dir__du_stag_ordered_file_error_0_0[1];

static const MR_DuPtagLayout mercury__dir__dir__du_ptag_ordered_file_error_0[1];

static const MR_DuFunctorDescPtr mercury__dir__dir__du_name_ordered_file_error_0[1];

static const MR_Integer mercury__dir__dir__functor_number_map_file_error_0[1];

static const MR_EnumFunctorDesc mercury__dir__dir__enum_functor_desc_file_operation_0_0;

static const MR_EnumFunctorDesc mercury__dir__dir__enum_functor_desc_file_operation_0_1;

static const MR_EnumFunctorDesc mercury__dir__dir__enum_functor_desc_file_operation_0_2;

static const MR_EnumFunctorDesc mercury__dir__dir__enum_functor_desc_file_operation_0_3;

static const MR_EnumFunctorDesc mercury__dir__dir__enum_functor_desc_file_operation_0_4;

static const MR_EnumFunctorDesc mercury__dir__dir__enum_functor_desc_file_operation_0_5;

static const MR_EnumFunctorDescPtr mercury__dir__dir__enum_ordinal_ordered_file_operation_0[6];

static const MR_EnumFunctorDescPtr mercury__dir__dir__enum_name_ordered_file_operation_0[6];

static const MR_Integer mercury__dir__dir__functor_number_map_file_operation_0[6];

static const MR_PseudoTypeInfo mercury__dir__dir__field_types_fold_params_0_0[2];

static const MR_ConstString mercury__dir__dir__field_names_fold_params_0_0[2];

static const MR_DuArgLocn mercury__dir__dir__field_locns_fold_params_0_0[2];

static const MR_DuFunctorDesc mercury__dir__dir__du_functor_desc_fold_params_0_0;

static const MR_DuFunctorDescPtr mercury__dir__dir__du_stag_ordered_fold_params_0_0[1];

static const MR_DuPtagLayout mercury__dir__dir__du_ptag_ordered_fold_params_0[1];

static const MR_DuFunctorDescPtr mercury__dir__dir__du_name_ordered_fold_params_0[1];

static const MR_Integer mercury__dir__dir__functor_number_map_fold_params_0[1];

static const MR_EnumFunctorDesc mercury__dir__dir__enum_functor_desc_is_parent_symlink_0_0;

static const MR_EnumFunctorDesc mercury__dir__dir__enum_functor_desc_is_parent_symlink_0_1;

static const MR_EnumFunctorDescPtr mercury__dir__dir__enum_ordinal_ordered_is_parent_symlink_0[2];

static const MR_EnumFunctorDescPtr mercury__dir__dir__enum_name_ordered_is_parent_symlink_0[2];

static const MR_Integer mercury__dir__dir__functor_number_map_is_parent_symlink_0[2];

static const MR_EnumFunctorDesc mercury__dir__dir__enum_functor_desc_make_single_directory_status_0_0;

static const MR_EnumFunctorDesc mercury__dir__dir__enum_functor_desc_make_single_directory_status_0_1;

static const MR_EnumFunctorDesc mercury__dir__dir__enum_functor_desc_make_single_directory_status_0_2;

static const MR_EnumFunctorDesc mercury__dir__dir__enum_functor_desc_make_single_directory_status_0_3;

static const MR_EnumFunctorDescPtr mercury__dir__dir__enum_ordinal_ordered_make_single_directory_status_0[4];

static const MR_EnumFunctorDescPtr mercury__dir__dir__enum_name_ordered_make_single_directory_status_0[4];

static const MR_Integer mercury__dir__dir__functor_number_map_make_single_directory_status_0[4];

static const MR_PseudoTypeInfo mercury__dir__dir__field_types_maybe_file_error_1_0[1];

static const MR_DuFunctorDesc mercury__dir__dir__du_functor_desc_maybe_file_error_1_0;

static const MR_PseudoTypeInfo mercury__dir__dir__field_types_maybe_file_error_1_1[1];

static const MR_DuFunctorDesc mercury__dir__dir__du_functor_desc_maybe_file_error_1_1;

static const MR_DuFunctorDescPtr mercury__dir__dir__du_stag_ordered_maybe_file_error_1_0[1];

static const MR_DuFunctorDescPtr mercury__dir__dir__du_stag_ordered_maybe_file_error_1_1[1];

static const MR_DuPtagLayout mercury__dir__dir__du_ptag_ordered_maybe_file_error_1[2];

static const MR_DuFunctorDescPtr mercury__dir__dir__du_name_ordered_maybe_file_error_1[2];

static const MR_Integer mercury__dir__dir__functor_number_map_maybe_file_error_1[2];

static const MR_FA_TypeInfo_Struct1 mercury__dir__dir__ti_maybe_file_error_1unit__type_ctor_info_unit_0;

static const MR_EnumFunctorDesc mercury__dir__dir__enum_functor_desc_maybe_follow_symlinks_0_0;

static const MR_EnumFunctorDesc mercury__dir__dir__enum_functor_desc_maybe_follow_symlinks_0_1;

static const MR_EnumFunctorDescPtr mercury__dir__dir__enum_ordinal_ordered_maybe_follow_symlinks_0[2];

static const MR_EnumFunctorDescPtr mercury__dir__dir__enum_name_ordered_maybe_follow_symlinks_0[2];

static const MR_Integer mercury__dir__dir__functor_number_map_maybe_follow_symlinks_0[2];

static const MR_DuFunctorDesc mercury__dir__dir__du_functor_desc_maybe_subdirs_0_0;

static const MR_PseudoTypeInfo mercury__dir__dir__field_types_maybe_subdirs_0_1[1];

static const MR_DuArgLocn mercury__dir__dir__field_locns_maybe_subdirs_0_1[1];

static const MR_DuFunctorDesc mercury__dir__dir__du_functor_desc_maybe_subdirs_0_1;

static const MR_DuFunctorDescPtr mercury__dir__dir__du_stag_ordered_maybe_subdirs_0_0[1];

static const MR_DuFunctorDescPtr mercury__dir__dir__du_stag_ordered_maybe_subdirs_0_1[1];

static const MR_DuPtagLayout mercury__dir__dir__du_ptag_ordered_maybe_subdirs_0[2];

static const MR_DuFunctorDescPtr mercury__dir__dir__du_name_ordered_maybe_subdirs_0[2];

static const MR_Integer mercury__dir__dir__functor_number_map_maybe_subdirs_0[2];

static const MR_EnumFunctorDesc mercury__dir__dir__enum_functor_desc_maybe_user_stop_0_0;

static const MR_EnumFunctorDesc mercury__dir__dir__enum_functor_desc_maybe_user_stop_0_1;

static const MR_EnumFunctorDescPtr mercury__dir__dir__enum_ordinal_ordered_maybe_user_stop_0[2];

static const MR_EnumFunctorDescPtr mercury__dir__dir__enum_name_ordered_maybe_user_stop_0[2];

static const MR_Integer mercury__dir__dir__functor_number_map_maybe_user_stop_0[2];

static const MR_EnumFunctorDesc mercury__dir__dir__enum_functor_desc_on_error_0_0;

static const MR_EnumFunctorDesc mercury__dir__dir__enum_functor_desc_on_error_0_1;

static const MR_EnumFunctorDescPtr mercury__dir__dir__enum_ordinal_ordered_on_error_0[2];

static const MR_EnumFunctorDescPtr mercury__dir__dir__enum_name_ordered_on_error_0[2];

static const MR_Integer mercury__dir__dir__functor_number_map_on_error_0[2];

static const MR_FA_TypeInfo_Struct1 mercury__dir__list__ti_list_1io__type_ctor_info_file_id_0;

static const MR_PseudoTypeInfo mercury__dir__dir__field_types_symlink_check_result_0_0[1];

static const MR_DuFunctorDesc mercury__dir__dir__du_functor_desc_symlink_check_result_0_0;

static const MR_DuFunctorDesc mercury__dir__dir__du_functor_desc_symlink_check_result_0_1;

static const MR_PseudoTypeInfo mercury__dir__dir__field_types_symlink_check_result_0_2[1];

static const MR_DuFunctorDesc mercury__dir__dir__du_functor_desc_symlink_check_result_0_2;

static const MR_DuFunctorDescPtr mercury__dir__dir__du_stag_ordered_symlink_check_result_0_0[1];

static const MR_DuFunctorDescPtr mercury__dir__dir__du_stag_ordered_symlink_check_result_0_1[1];

static const MR_DuFunctorDescPtr mercury__dir__dir__du_stag_ordered_symlink_check_result_0_2[1];

static const MR_DuPtagLayout mercury__dir__dir__du_ptag_ordered_symlink_check_result_0[3];

static const MR_DuFunctorDescPtr mercury__dir__dir__du_name_ordered_symlink_check_result_0[3];

static const MR_Integer mercury__dir__dir__functor_number_map_symlink_check_result_0[3];

static void MR_CALL 
mercury__dir__read_entry_4_p_0(
  MR_Box DirStream_5,
  MR_Word * Result_6);

static void MR_CALL 
mercury__dir__read_entry_2_7_p_0(
  MR_Box DirStream_1,
  MR_Box * Error_2,
  MR_Word * IsWin32Error_3,
  MR_Word * HaveFileName_4,
  MR_String * FileName_5);

static void MR_CALL 
mercury__dir__make_directory_including_parents_2_5_p_0(
  MR_String _DirName_1,
  MR_Box * Error_2,
  MR_Word * CheckAccess_3);

static MR_Word MR_CALL 
mercury__dir__map__ho8_2_f_in__list_0(
  MR_Word HeadVar__2_2);

static void MR_CALL 
mercury__dir__LCMC__func__map__ho8__1_3_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_13);

static void MR_CALL 
mercury__dir__LCMC__func__map__ho5__1_3_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_16);

static MR_Word MR_CALL 
mercury__dir__map__ho5_2_f_in__list_0(
  MR_Word HeadVar__2_2);

static MR_Word MR_CALL 
mercury__dir__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_52_95_95_91_50_93_95_48_2_f_in__list_0(
  MR_Word Var_12,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mercury__dir__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_52_95_95_91_50_93_95_48_95_95_49_3_p_0(
  MR_Word Var_12,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_16);

static MR_Word MR_CALL 
mercury__dir__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_50_95_95_91_50_93_95_48_2_f_in__list_0(
  MR_Word Var_12,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mercury__dir__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_50_95_95_91_50_93_95_48_95_95_49_3_p_0(
  MR_Word Var_12,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_16);

static MR_Word MR_CALL 
mercury__dir__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_95_95_91_50_93_95_48_2_f_in__list_0(
  MR_Char Var_12,
  MR_Word HeadVar__2_2);

static void MR_CALL 
mercury__dir__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_95_95_91_50_93_95_48_95_95_49_3_p_0(
  MR_Char Var_12,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_17);

static void MR_CALL 
mercury__dir__find_matching_brace_or_comma_6_p_0(
  MR_Word HeadVar__1_1,
  MR_Word Alternatives0_2,
  MR_Word CurAlternative_3,
  MR_Integer BraceLevel_4,
  MR_Word * Alternatives_5,
  MR_Word * Left_6);

static void MR_CALL 
mercury__dir__foldl2_process_dir_13_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1);

static void MR_CALL 
mercury__dir__foldl2_process_dir_13_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mercury__dir__close_2_5_p_0(
  MR_Box DirStream_1,
  MR_Box * Error_2,
  MR_Word * IsWin32Error_3);

static void MR_CALL 
mercury__dir__open_3_7_p_0(
  MR_String DirName_1,
  MR_String DirPattern_2,
  MR_Box * DirStream_3,
  MR_Box * Error_4,
  MR_Word * IsWin32Error_5);

static void MR_CALL 
mercury__dir__make_single_directory_2_6_p_0(
  MR_String DirName_1,
  MR_Word * Status_2,
  MR_Box * Error_3,
  MR_Word * IsWin32Error_4);

static void MR_CALL 
mercury__dir__current_directory_2_4_p_0(
  MR_String * CurDir_1,
  MR_Box * Error_2);

static MR_bool MR_CALL 
mercury__dir__is_path_string_canonical_loop_3_p_0(
  MR_String Path_4,
  MR_Integer CurIndex_5,
  MR_Word PrevChar_6);

static void MR_CALL 
mercury__dir__canonicalize_later_path_chars_acc_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevFileNameChars_0_2,
  MR_Word * STATE_VARIABLE_RevFileNameChars_3);

static void MR_CALL 
mercury__dir__take_while_not__ho7_4_p_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4);

static void MR_CALL 
mercury__dir__LCMC__pred__take_while_not__ho7__1_4_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_20,
  MR_Word * HeadVar__4_4);

static MR_bool MR_CALL 
mercury__dir____Unify____canon_prev_char_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__dir____Compare____canon_prev_char_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__dir____Unify____file_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__dir____Compare____file_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__dir____Unify____file_operation_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__dir____Compare____file_operation_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__dir____Unify____fold_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__dir____Compare____fold_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

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
mercury__dir____Unify____is_parent_symlink_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__dir____Compare____is_parent_symlink_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

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
mercury__dir____Unify____maybe_file_error_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__dir____Compare____maybe_file_error_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__dir____Unify____maybe_file_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__dir____Compare____maybe_file_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__dir____Unify____maybe_follow_symlinks_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__dir____Compare____maybe_follow_symlinks_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__dir____Unify____maybe_subdirs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__dir____Compare____maybe_subdirs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__dir____Unify____maybe_user_stop_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__dir____Compare____maybe_user_stop_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__dir____Unify____on_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__dir____Compare____on_error_0_0_10001(
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

static MR_bool MR_CALL 
mercury__dir____Unify____symlink_check_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__dir____Compare____symlink_check_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mercury__dir_scalar_common_1[12][2];

static /* final */ const MR_Box mercury__dir_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__dir_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__dir_scalar_common_4[1][5];

static /* final */ const MR_Box mercury__dir_scalar_common_5[2][1];

static /* final */ const MR_Integer mercury__dir_scalar_common_6[1][2];

static /* final */ const MR_Box mercury__dir_scalar_common_7[1][16];

static /* final */ const MR_Box mercury__dir_scalar_common_8[1][7];




static /* final */ const MR_Box mercury__dir_scalar_common_1[12][2] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__dir__dir__type_ctor_info_file_error_0))
  },
  /* row   2 */
  {
    ((MR_Box) (&mercury__dir__dir__type_ctor_info_maybe_file_error_1)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
  /* row   3 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_file_id_0))
  },
  /* row   4 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row   5 */
  {
    ((MR_Box) (MR_Word) ((MR_Char) 58)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   6 */
  {
    ((MR_Box) ((MR_Integer) 2)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row   7 */
  {
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(1, &mercury__dir_scalar_common_1[6])))
  },
  /* row   8 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(1, &mercury__dir_scalar_common_1[7])))
  },
  /* row   9 */
  {
    ((MR_Box) ((MR_Integer) 0)),
    ((MR_Box) (MR_mkword(1, &mercury__dir_scalar_common_1[6])))
  },
  /* row  10 */
  {
    ((MR_Box) ((MR_Unsigned) 0U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row  11 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__dir_scalar_common_1[0]))
  },
};

static /* final */ const MR_Box mercury__dir_scalar_common_2[1][3] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__dir_scalar_common_3[1][4] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__text_output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__dir_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__dir_scalar_common_4[1][5] = {
  /* row   0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__text_output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__dir_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_text_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__dir_scalar_common_5[2][1] = {
  /* row   0 */
  { ((MR_Box) ((MR_Integer) 0)) },
  /* row   1 */
  { ((MR_Box) ((MR_String) "pathname is not a directory")) },
};

static /* final */ const MR_Integer mercury__dir_scalar_common_6[1][2] = {
  /* row   0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box mercury__dir_scalar_common_7[1][16] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&mercury__dir_scalar_common_6[0])),
    ((MR_Box) ((MR_Integer) 13)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__dir__dir__type_ctor_info_fold_params_0)),
    ((MR_Box) (&mercury__dir____vpti_pred_8__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0__plain_io__type_ctor_info_file_type_0__plain_bool__type_ctor_info_bool_0__pseudo_1__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__dir__dir__type_ctor_info_stream_0)),
    ((MR_Box) (&mercury__dir__dir__type_ctor_info_is_parent_symlink_0)),
    ((MR_Box) (&mercury__dir__list__pti_list_1__plain_io__type_ctor_info_file_id_0)),
    ((MR_Box) (&mercury__dir__dir__type_ctor_info_maybe_user_stop_0)),
    ((MR_Box) (&mercury__dir__list__pti_list_1__plain_dir__type_ctor_info_file_error_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__dir____vpti_tuple_3__plain_dir__type_ctor_info_maybe_user_stop_0__plain_list__ti_list_1dir__type_ctor_info_file_error_0__pseudo_1)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__dir_scalar_common_8[1][7] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (&mercury__dir_scalar_common_6[0])),
    ((MR_Box) ((MR_Integer) 4)),
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
  { (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_file_id_0) }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__dir__list__pti_list_1__plain_dir__type_ctor_info_file_error_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_PseudoTypeInfo) (&mercury__dir__dir__type_ctor_info_file_error_0) }
};

static const MR_FA_TypeInfo_Struct1 mercury__dir__list__ti_list_1dir__type_ctor_info_file_error_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__dir__dir__type_ctor_info_file_error_0) }
};

static const MR_VA_PseudoTypeInfo_Struct3 mercury__dir____vpti_tuple_3__plain_dir__type_ctor_info_maybe_user_stop_0__plain_list__ti_list_1dir__type_ctor_info_file_error_0__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_tuple_0,
  (MR_Integer) 3,
  {
    (MR_PseudoTypeInfo) (&mercury__dir__dir__type_ctor_info_maybe_user_stop_0),
    (MR_PseudoTypeInfo) (&mercury__dir__list__ti_list_1dir__type_ctor_info_file_error_0),
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

static const MR_EnumFunctorDesc mercury__dir__dir__enum_functor_desc_canon_prev_char_0_0 = {
  (MR_String) "prev_char_is_not_separator",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mercury__dir__dir__enum_functor_desc_canon_prev_char_0_1 = {
  (MR_String) "prev_char_is_separator",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr mercury__dir__dir__enum_ordinal_ordered_canon_prev_char_0[2] = {
  &mercury__dir__dir__enum_functor_desc_canon_prev_char_0_0,
  &mercury__dir__dir__enum_functor_desc_canon_prev_char_0_1
};

static const MR_EnumFunctorDescPtr mercury__dir__dir__enum_name_ordered_canon_prev_char_0[2] = {
  &mercury__dir__dir__enum_functor_desc_canon_prev_char_0_0,
  &mercury__dir__dir__enum_functor_desc_canon_prev_char_0_1
};

static const MR_Integer mercury__dir__dir__functor_number_map_canon_prev_char_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__dir__dir__type_ctor_info_canon_prev_char_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__dir____Unify____canon_prev_char_0_0_10001)),
  ((MR_Box) (mercury__dir____Compare____canon_prev_char_0_0_10001)),
  (MR_String) "dir",
  (MR_String) "canon_prev_char",
  { mercury__dir__dir__enum_name_ordered_canon_prev_char_0 },
  { mercury__dir__dir__enum_ordinal_ordered_canon_prev_char_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__dir__dir__functor_number_map_canon_prev_char_0,

};

static const MR_PseudoTypeInfo mercury__dir__dir__field_types_file_error_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__dir__dir__type_ctor_info_file_operation_0),
  (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_error_0)
};

static const MR_DuArgLocn mercury__dir__dir__field_locns_file_error_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 3
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 0
  }
};

static const MR_DuFunctorDesc mercury__dir__dir__du_functor_desc_file_error_0_0 = {
  (MR_String) "file_error",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__dir__dir__field_types_file_error_0_0,
  NULL,
  mercury__dir__dir__field_locns_file_error_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__dir__dir__du_stag_ordered_file_error_0_0[1] = { &mercury__dir__dir__du_functor_desc_file_error_0_0 };

static const MR_DuPtagLayout mercury__dir__dir__du_ptag_ordered_file_error_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__dir__dir__du_stag_ordered_file_error_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__dir__dir__du_name_ordered_file_error_0[1] = { &mercury__dir__dir__du_functor_desc_file_error_0_0 };

static const MR_Integer mercury__dir__dir__functor_number_map_file_error_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mercury__dir__dir__type_ctor_info_file_error_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__dir____Unify____file_error_0_0_10001)),
  ((MR_Box) (mercury__dir____Compare____file_error_0_0_10001)),
  (MR_String) "dir",
  (MR_String) "file_error",
  { mercury__dir__dir__du_name_ordered_file_error_0 },
  { mercury__dir__dir__du_ptag_ordered_file_error_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__dir__dir__functor_number_map_file_error_0,

};

static const MR_EnumFunctorDesc mercury__dir__dir__enum_functor_desc_file_operation_0_0 = {
  (MR_String) "file_open",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mercury__dir__dir__enum_functor_desc_file_operation_0_1 = {
  (MR_String) "file_close",
  INT32_C(1)
};

static const MR_EnumFunctorDesc mercury__dir__dir__enum_functor_desc_file_operation_0_2 = {
  (MR_String) "file_get_id",
  INT32_C(2)
};

static const MR_EnumFunctorDesc mercury__dir__dir__enum_functor_desc_file_operation_0_3 = {
  (MR_String) "file_get_type",
  INT32_C(3)
};

static const MR_EnumFunctorDesc mercury__dir__dir__enum_functor_desc_file_operation_0_4 = {
  (MR_String) "file_check_accessibility",
  INT32_C(4)
};

static const MR_EnumFunctorDesc mercury__dir__dir__enum_functor_desc_file_operation_0_5 = {
  (MR_String) "file_read_dir_entry",
  INT32_C(5)
};

static const MR_EnumFunctorDescPtr mercury__dir__dir__enum_ordinal_ordered_file_operation_0[6] = {
  &mercury__dir__dir__enum_functor_desc_file_operation_0_0,
  &mercury__dir__dir__enum_functor_desc_file_operation_0_1,
  &mercury__dir__dir__enum_functor_desc_file_operation_0_2,
  &mercury__dir__dir__enum_functor_desc_file_operation_0_3,
  &mercury__dir__dir__enum_functor_desc_file_operation_0_4,
  &mercury__dir__dir__enum_functor_desc_file_operation_0_5
};

static const MR_EnumFunctorDescPtr mercury__dir__dir__enum_name_ordered_file_operation_0[6] = {
  &mercury__dir__dir__enum_functor_desc_file_operation_0_4,
  &mercury__dir__dir__enum_functor_desc_file_operation_0_1,
  &mercury__dir__dir__enum_functor_desc_file_operation_0_2,
  &mercury__dir__dir__enum_functor_desc_file_operation_0_3,
  &mercury__dir__dir__enum_functor_desc_file_operation_0_0,
  &mercury__dir__dir__enum_functor_desc_file_operation_0_5
};

static const MR_Integer mercury__dir__dir__functor_number_map_file_operation_0[6] = {
  (MR_Integer) 4,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 5
};

const MR_TypeCtorInfo_Struct mercury__dir__dir__type_ctor_info_file_operation_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__dir____Unify____file_operation_0_0_10001)),
  ((MR_Box) (mercury__dir____Compare____file_operation_0_0_10001)),
  (MR_String) "dir",
  (MR_String) "file_operation",
  { mercury__dir__dir__enum_name_ordered_file_operation_0 },
  { mercury__dir__dir__enum_ordinal_ordered_file_operation_0 },
  (MR_Integer) 6,
  UINT16_C(12),
  mercury__dir__dir__functor_number_map_file_operation_0,

};

static const MR_PseudoTypeInfo mercury__dir__dir__field_types_fold_params_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__dir__dir__type_ctor_info_maybe_subdirs_0),
  (MR_PseudoTypeInfo) (&mercury__dir__dir__type_ctor_info_on_error_0)
};

static const MR_ConstString mercury__dir__dir__field_names_fold_params_0_0[2] = {
  (MR_String) "fp_subdirs",
  (MR_String) "fp_on_error"
};

static const MR_DuArgLocn mercury__dir__dir__field_locns_fold_params_0_0[2] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc mercury__dir__dir__du_functor_desc_fold_params_0_0 = {
  (MR_String) "fold_params",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__dir__dir__field_types_fold_params_0_0,
  mercury__dir__dir__field_names_fold_params_0_0,
  mercury__dir__dir__field_locns_fold_params_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__dir__dir__du_stag_ordered_fold_params_0_0[1] = { &mercury__dir__dir__du_functor_desc_fold_params_0_0 };

static const MR_DuPtagLayout mercury__dir__dir__du_ptag_ordered_fold_params_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__dir__dir__du_stag_ordered_fold_params_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__dir__dir__du_name_ordered_fold_params_0[1] = { &mercury__dir__dir__du_functor_desc_fold_params_0_0 };

static const MR_Integer mercury__dir__dir__functor_number_map_fold_params_0[1] = { (MR_Integer) 0 };

const MR_TypeCtorInfo_Struct mercury__dir__dir__type_ctor_info_fold_params_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__dir____Unify____fold_params_0_0_10001)),
  ((MR_Box) (mercury__dir____Compare____fold_params_0_0_10001)),
  (MR_String) "dir",
  (MR_String) "fold_params",
  { mercury__dir__dir__du_name_ordered_fold_params_0 },
  { mercury__dir__dir__du_ptag_ordered_fold_params_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  mercury__dir__dir__functor_number_map_fold_params_0,

};

const MR_TypeCtorInfo_Struct mercury__dir__dir__type_ctor_info_foldl_pred_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__dir____Unify____foldl_pred_1_0_10001)),
  ((MR_Box) (mercury__dir____Compare____foldl_pred_1_0_10001)),
  (MR_String) "dir",
  (MR_String) "foldl_pred",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__dir____vpti_pred_8__plain_builtin__type_ctor_info_string_0__plain_builtin__type_ctor_info_string_0__plain_io__type_ctor_info_file_type_0__plain_bool__type_ctor_info_bool_0__pseudo_1__pseudo_1__plain_io__type_ctor_info_state_0__plain_io__type_ctor_info_state_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc mercury__dir__dir__enum_functor_desc_is_parent_symlink_0_0 = {
  (MR_String) "parent_is_not_symlink",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mercury__dir__dir__enum_functor_desc_is_parent_symlink_0_1 = {
  (MR_String) "parent_is_symlink",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr mercury__dir__dir__enum_ordinal_ordered_is_parent_symlink_0[2] = {
  &mercury__dir__dir__enum_functor_desc_is_parent_symlink_0_0,
  &mercury__dir__dir__enum_functor_desc_is_parent_symlink_0_1
};

static const MR_EnumFunctorDescPtr mercury__dir__dir__enum_name_ordered_is_parent_symlink_0[2] = {
  &mercury__dir__dir__enum_functor_desc_is_parent_symlink_0_0,
  &mercury__dir__dir__enum_functor_desc_is_parent_symlink_0_1
};

static const MR_Integer mercury__dir__dir__functor_number_map_is_parent_symlink_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__dir__dir__type_ctor_info_is_parent_symlink_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__dir____Unify____is_parent_symlink_0_0_10001)),
  ((MR_Box) (mercury__dir____Compare____is_parent_symlink_0_0_10001)),
  (MR_String) "dir",
  (MR_String) "is_parent_symlink",
  { mercury__dir__dir__enum_name_ordered_is_parent_symlink_0 },
  { mercury__dir__dir__enum_ordinal_ordered_is_parent_symlink_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__dir__dir__functor_number_map_is_parent_symlink_0,

};

static const MR_EnumFunctorDesc mercury__dir__dir__enum_functor_desc_make_single_directory_status_0_0 = {
  (MR_String) "ok",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mercury__dir__dir__enum_functor_desc_make_single_directory_status_0_1 = {
  (MR_String) "name_exists",
  INT32_C(1)
};

static const MR_EnumFunctorDesc mercury__dir__dir__enum_functor_desc_make_single_directory_status_0_2 = {
  (MR_String) "dir_exists",
  INT32_C(2)
};

static const MR_EnumFunctorDesc mercury__dir__dir__enum_functor_desc_make_single_directory_status_0_3 = {
  (MR_String) "error",
  INT32_C(3)
};

static const MR_EnumFunctorDescPtr mercury__dir__dir__enum_ordinal_ordered_make_single_directory_status_0[4] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__dir____Unify____make_single_directory_status_0_0_10001)),
  ((MR_Box) (mercury__dir____Compare____make_single_directory_status_0_0_10001)),
  (MR_String) "dir",
  (MR_String) "make_single_directory_status",
  { mercury__dir__dir__enum_name_ordered_make_single_directory_status_0 },
  { mercury__dir__dir__enum_ordinal_ordered_make_single_directory_status_0 },
  (MR_Integer) 4,
  UINT16_C(12),
  mercury__dir__dir__functor_number_map_make_single_directory_status_0,

};

static const MR_PseudoTypeInfo mercury__dir__dir__field_types_maybe_file_error_1_0[1] = { (MR_PseudoTypeInfo) ((MR_Integer) 1) };

static const MR_DuFunctorDesc mercury__dir__dir__du_functor_desc_maybe_file_error_1_0 = {
  (MR_String) "mfe_ok",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__dir__dir__field_types_maybe_file_error_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__dir__dir__field_types_maybe_file_error_1_1[1] = { (MR_PseudoTypeInfo) (&mercury__dir__dir__type_ctor_info_file_error_0) };

static const MR_DuFunctorDesc mercury__dir__dir__du_functor_desc_maybe_file_error_1_1 = {
  (MR_String) "mfe_error",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__dir__dir__field_types_maybe_file_error_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__dir__dir__du_stag_ordered_maybe_file_error_1_0[1] = { &mercury__dir__dir__du_functor_desc_maybe_file_error_1_1 };

static const MR_DuFunctorDescPtr mercury__dir__dir__du_stag_ordered_maybe_file_error_1_1[1] = { &mercury__dir__dir__du_functor_desc_maybe_file_error_1_0 };

static const MR_DuPtagLayout mercury__dir__dir__du_ptag_ordered_maybe_file_error_1[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    mercury__dir__dir__du_stag_ordered_maybe_file_error_1_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__dir__dir__du_stag_ordered_maybe_file_error_1_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__dir__dir__du_name_ordered_maybe_file_error_1[2] = {
  &mercury__dir__dir__du_functor_desc_maybe_file_error_1_1,
  &mercury__dir__dir__du_functor_desc_maybe_file_error_1_0
};

static const MR_Integer mercury__dir__dir__functor_number_map_maybe_file_error_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__dir__dir__type_ctor_info_maybe_file_error_1 = {
  (MR_Integer) 1,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__dir____Unify____maybe_file_error_1_0_10001)),
  ((MR_Box) (mercury__dir____Compare____maybe_file_error_1_0_10001)),
  (MR_String) "dir",
  (MR_String) "maybe_file_error",
  { mercury__dir__dir__du_name_ordered_maybe_file_error_1 },
  { mercury__dir__dir__du_ptag_ordered_maybe_file_error_1 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__dir__dir__functor_number_map_maybe_file_error_1,

};

static const MR_FA_TypeInfo_Struct1 mercury__dir__dir__ti_maybe_file_error_1unit__type_ctor_info_unit_0 = {
  &mercury__dir__dir__type_ctor_info_maybe_file_error_1,
  { (MR_TypeInfo) (&mercury__unit__unit__type_ctor_info_unit_0) }
};

const MR_TypeCtorInfo_Struct mercury__dir__dir__type_ctor_info_maybe_file_error_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV_GROUND,
  ((MR_Box) (mercury__dir____Unify____maybe_file_error_0_0_10001)),
  ((MR_Box) (mercury__dir____Compare____maybe_file_error_0_0_10001)),
  (MR_String) "dir",
  (MR_String) "maybe_file_error",
  { NULL },
  { (MR_PseudoTypeInfo) (&mercury__dir__dir__ti_maybe_file_error_1unit__type_ctor_info_unit_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_EnumFunctorDesc mercury__dir__dir__enum_functor_desc_maybe_follow_symlinks_0_0 = {
  (MR_String) "do_not_follow_symlinks",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mercury__dir__dir__enum_functor_desc_maybe_follow_symlinks_0_1 = {
  (MR_String) "follow_symlinks",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr mercury__dir__dir__enum_ordinal_ordered_maybe_follow_symlinks_0[2] = {
  &mercury__dir__dir__enum_functor_desc_maybe_follow_symlinks_0_0,
  &mercury__dir__dir__enum_functor_desc_maybe_follow_symlinks_0_1
};

static const MR_EnumFunctorDescPtr mercury__dir__dir__enum_name_ordered_maybe_follow_symlinks_0[2] = {
  &mercury__dir__dir__enum_functor_desc_maybe_follow_symlinks_0_0,
  &mercury__dir__dir__enum_functor_desc_maybe_follow_symlinks_0_1
};

static const MR_Integer mercury__dir__dir__functor_number_map_maybe_follow_symlinks_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__dir__dir__type_ctor_info_maybe_follow_symlinks_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__dir____Unify____maybe_follow_symlinks_0_0_10001)),
  ((MR_Box) (mercury__dir____Compare____maybe_follow_symlinks_0_0_10001)),
  (MR_String) "dir",
  (MR_String) "maybe_follow_symlinks",
  { mercury__dir__dir__enum_name_ordered_maybe_follow_symlinks_0 },
  { mercury__dir__dir__enum_ordinal_ordered_maybe_follow_symlinks_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__dir__dir__functor_number_map_maybe_follow_symlinks_0,

};

static const MR_DuFunctorDesc mercury__dir__dir__du_functor_desc_maybe_subdirs_0_0 = {
  (MR_String) "do_not_enter_subdirs",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(0),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__dir__dir__field_types_maybe_subdirs_0_1[1] = { (MR_PseudoTypeInfo) (&mercury__dir__dir__type_ctor_info_maybe_follow_symlinks_0) };

static const MR_DuArgLocn mercury__dir__dir__field_locns_maybe_subdirs_0_1[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc mercury__dir__dir__du_functor_desc_maybe_subdirs_0_1 = {
  (MR_String) "enter_subdirs",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__dir__dir__field_types_maybe_subdirs_0_1,
  NULL,
  mercury__dir__dir__field_locns_maybe_subdirs_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__dir__dir__du_stag_ordered_maybe_subdirs_0_0[1] = { &mercury__dir__dir__du_functor_desc_maybe_subdirs_0_0 };

static const MR_DuFunctorDescPtr mercury__dir__dir__du_stag_ordered_maybe_subdirs_0_1[1] = { &mercury__dir__dir__du_functor_desc_maybe_subdirs_0_1 };

static const MR_DuPtagLayout mercury__dir__dir__du_ptag_ordered_maybe_subdirs_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__dir__dir__du_stag_ordered_maybe_subdirs_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__dir__dir__du_stag_ordered_maybe_subdirs_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__dir__dir__du_name_ordered_maybe_subdirs_0[2] = {
  &mercury__dir__dir__du_functor_desc_maybe_subdirs_0_0,
  &mercury__dir__dir__du_functor_desc_maybe_subdirs_0_1
};

static const MR_Integer mercury__dir__dir__functor_number_map_maybe_subdirs_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__dir__dir__type_ctor_info_maybe_subdirs_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__dir____Unify____maybe_subdirs_0_0_10001)),
  ((MR_Box) (mercury__dir____Compare____maybe_subdirs_0_0_10001)),
  (MR_String) "dir",
  (MR_String) "maybe_subdirs",
  { mercury__dir__dir__du_name_ordered_maybe_subdirs_0 },
  { mercury__dir__dir__du_ptag_ordered_maybe_subdirs_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__dir__dir__functor_number_map_maybe_subdirs_0,

};

static const MR_EnumFunctorDesc mercury__dir__dir__enum_functor_desc_maybe_user_stop_0_0 = {
  (MR_String) "user_continue",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mercury__dir__dir__enum_functor_desc_maybe_user_stop_0_1 = {
  (MR_String) "user_stop",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr mercury__dir__dir__enum_ordinal_ordered_maybe_user_stop_0[2] = {
  &mercury__dir__dir__enum_functor_desc_maybe_user_stop_0_0,
  &mercury__dir__dir__enum_functor_desc_maybe_user_stop_0_1
};

static const MR_EnumFunctorDescPtr mercury__dir__dir__enum_name_ordered_maybe_user_stop_0[2] = {
  &mercury__dir__dir__enum_functor_desc_maybe_user_stop_0_0,
  &mercury__dir__dir__enum_functor_desc_maybe_user_stop_0_1
};

static const MR_Integer mercury__dir__dir__functor_number_map_maybe_user_stop_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct mercury__dir__dir__type_ctor_info_maybe_user_stop_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__dir____Unify____maybe_user_stop_0_0_10001)),
  ((MR_Box) (mercury__dir____Compare____maybe_user_stop_0_0_10001)),
  (MR_String) "dir",
  (MR_String) "maybe_user_stop",
  { mercury__dir__dir__enum_name_ordered_maybe_user_stop_0 },
  { mercury__dir__dir__enum_ordinal_ordered_maybe_user_stop_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__dir__dir__functor_number_map_maybe_user_stop_0,

};

static const MR_EnumFunctorDesc mercury__dir__dir__enum_functor_desc_on_error_0_0 = {
  (MR_String) "on_error_stop",
  INT32_C(0)
};

static const MR_EnumFunctorDesc mercury__dir__dir__enum_functor_desc_on_error_0_1 = {
  (MR_String) "on_error_keep_going",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr mercury__dir__dir__enum_ordinal_ordered_on_error_0[2] = {
  &mercury__dir__dir__enum_functor_desc_on_error_0_0,
  &mercury__dir__dir__enum_functor_desc_on_error_0_1
};

static const MR_EnumFunctorDescPtr mercury__dir__dir__enum_name_ordered_on_error_0[2] = {
  &mercury__dir__dir__enum_functor_desc_on_error_0_1,
  &mercury__dir__dir__enum_functor_desc_on_error_0_0
};

static const MR_Integer mercury__dir__dir__functor_number_map_on_error_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__dir__dir__type_ctor_info_on_error_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (mercury__dir____Unify____on_error_0_0_10001)),
  ((MR_Box) (mercury__dir____Compare____on_error_0_0_10001)),
  (MR_String) "dir",
  (MR_String) "on_error",
  { mercury__dir__dir__enum_name_ordered_on_error_0 },
  { mercury__dir__dir__enum_ordinal_ordered_on_error_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  mercury__dir__dir__functor_number_map_on_error_0,

};

const MR_TypeCtorInfo_Struct mercury__dir__dir__type_ctor_info_stream_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_FOREIGN,
  ((MR_Box) (mercury__dir____Unify____stream_0_0_10001)),
  ((MR_Box) (mercury__dir____Compare____stream_0_0_10001)),
  (MR_String) "dir",
  (MR_String) "stream",
  { NULL },
  { NULL },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL,

};

static const MR_FA_TypeInfo_Struct1 mercury__dir__list__ti_list_1io__type_ctor_info_file_id_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  { (MR_TypeInfo) (&mercury__io__io__type_ctor_info_file_id_0) }
};

static const MR_PseudoTypeInfo mercury__dir__dir__field_types_symlink_check_result_0_0[1] = { (MR_PseudoTypeInfo) (&mercury__dir__list__ti_list_1io__type_ctor_info_file_id_0) };

static const MR_DuFunctorDesc mercury__dir__dir__du_functor_desc_symlink_check_result_0_0 = {
  (MR_String) "scr_ok",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__dir__dir__field_types_symlink_check_result_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mercury__dir__dir__du_functor_desc_symlink_check_result_0_1 = {
  (MR_String) "scr_loop",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__dir__dir__field_types_symlink_check_result_0_2[1] = { (MR_PseudoTypeInfo) (&mercury__dir__dir__type_ctor_info_file_error_0) };

static const MR_DuFunctorDesc mercury__dir__dir__du_functor_desc_symlink_check_result_0_2 = {
  (MR_String) "scr_error",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE_DIRECT_ARG,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(2),
  mercury__dir__dir__field_types_symlink_check_result_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__dir__dir__du_stag_ordered_symlink_check_result_0_0[1] = { &mercury__dir__dir__du_functor_desc_symlink_check_result_0_1 };

static const MR_DuFunctorDescPtr mercury__dir__dir__du_stag_ordered_symlink_check_result_0_1[1] = { &mercury__dir__dir__du_functor_desc_symlink_check_result_0_2 };

static const MR_DuFunctorDescPtr mercury__dir__dir__du_stag_ordered_symlink_check_result_0_2[1] = { &mercury__dir__dir__du_functor_desc_symlink_check_result_0_0 };

static const MR_DuPtagLayout mercury__dir__dir__du_ptag_ordered_symlink_check_result_0[3] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__dir__dir__du_stag_ordered_symlink_check_result_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE_DIRECT_ARG,
    mercury__dir__dir__du_stag_ordered_symlink_check_result_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__dir__dir__du_stag_ordered_symlink_check_result_0_2,
    INT8_C(-1),
    UINT8_C(2),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr mercury__dir__dir__du_name_ordered_symlink_check_result_0[3] = {
  &mercury__dir__dir__du_functor_desc_symlink_check_result_0_2,
  &mercury__dir__dir__du_functor_desc_symlink_check_result_0_1,
  &mercury__dir__dir__du_functor_desc_symlink_check_result_0_0
};

static const MR_Integer mercury__dir__dir__functor_number_map_symlink_check_result_0[3] = {
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__dir__dir__type_ctor_info_symlink_check_result_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(3),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__dir____Unify____symlink_check_result_0_0_10001)),
  ((MR_Box) (mercury__dir____Compare____symlink_check_result_0_0_10001)),
  (MR_String) "dir",
  (MR_String) "symlink_check_result",
  { mercury__dir__dir__du_name_ordered_symlink_check_result_0 },
  { mercury__dir__dir__du_ptag_ordered_symlink_check_result_0 },
  (MR_Integer) 3,
  UINT16_C(12),
  mercury__dir__dir__functor_number_map_symlink_check_result_0,

};

void MR_CALL 
mercury__dir____Compare____symlink_check_result_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
    switch (MR_tag((MR_Word) HeadVar__2_2)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *HeadVar__1_1 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
        }
        break;
      case (MR_Integer) 1:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 2:
            *HeadVar__1_1 = (MR_Integer) 2;
            break;
          case (MR_Integer) 1:
            {
              MR_Word ArgX1_6 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));
              MR_Word ArgY1_7 = (MR_Word) (MR_body((MR_Word) (HeadVar__3_3), (MR_Integer) 1));

              mercury__dir____Compare____file_error_0_0(HeadVar__1_1, ArgX1_6, ArgY1_7);
            }
            break;
        }
        break;
      case (MR_Integer) 2:
        switch (MR_tag((MR_Word) HeadVar__3_3)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
          case (MR_Integer) 1:
            *HeadVar__1_1 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            {
              MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
              MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(2, HeadVar__3_3, 0))));

              mercury__builtin__compare_3_p_0((MR_Word) (&mercury__dir_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (ArgX1_4)), ((MR_Box) (ArgY1_5)));
            }
            break;
        }
        break;
    }
}

MR_bool MR_CALL 
mercury__dir____Unify____symlink_check_result_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
          MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

          succeeded = (CastY_8 == CastX_7);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word ArgX1_5 = (MR_Word) (MR_body((MR_Word) (HeadVar__1_1), (MR_Integer) 1));
          MR_Word ArgY1_6;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
          if (succeeded)
          {
            ArgY1_6 = (MR_Word) (MR_body((MR_Word) (HeadVar__2_2), (MR_Integer) 1));
            succeeded = mercury__dir____Unify____file_error_0_0(ArgX1_5, ArgY1_6);
          }
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TypeInfo_11_11;
          MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(2, HeadVar__1_1, 0))));
          MR_Word ArgY1_4;

          succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
          if (succeeded)
          {
            ArgY1_4 = ((MR_Word) ((MR_hl_field(2, HeadVar__2_2, 0))));
            TypeInfo_11_11 = (MR_Word) (&mercury__dir_scalar_common_1[3]);
            succeeded = mercury__builtin__unify_2_p_0(TypeInfo_11_11, ((MR_Box) (ArgX1_3)), ((MR_Box) (ArgY1_4)));
          }
        }
        break;
    }
  return succeeded;
}

void MR_CALL 
mercury__dir____Compare____stream_0_0(
  MR_Word * HeadVar__1_1,
  MR_Box HeadVar__2_2,
  MR_Box HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = (MR_Word) (HeadVar__2_2);
  MR_Word Cast_HeadVar2_5 = (MR_Word) (HeadVar__3_3);

  mercury__builtin____Compare____c_pointer_0_0(HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
}

MR_bool MR_CALL 
mercury__dir____Unify____stream_0_0(
  MR_Box HeadVar__1_1,
  MR_Box HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = (MR_Word) (HeadVar__1_1);
  MR_Word Cast_HeadVar2_4 = (MR_Word) (HeadVar__2_2);

  succeeded = mercury__builtin____Unify____c_pointer_0_0(Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mercury__dir____Compare____on_error_0_0(
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
mercury__dir____Unify____on_error_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
mercury__dir____Compare____maybe_user_stop_0_0(
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
mercury__dir____Unify____maybe_user_stop_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
mercury__dir____Compare____maybe_follow_symlinks_0_0(
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
mercury__dir____Unify____maybe_follow_symlinks_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
mercury__dir____Compare____maybe_file_error_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
  MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

  mercury__builtin__compare_3_p_0((MR_Word) (&mercury__dir_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Cast_HeadVar1_4)), ((MR_Box) (Cast_HeadVar2_5)));
}

MR_bool MR_CALL 
mercury__dir____Unify____maybe_file_error_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
  MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

  succeeded = mercury__dir____Unify____maybe_file_error_1_0((MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), Cast_HeadVar1_3, Cast_HeadVar2_4);
  return succeeded;
}

void MR_CALL 
mercury__dir____Compare____maybe_file_error_1_0(
  MR_Word TypeInfo_for_T_10,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_8 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_9 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_8 == CastY_9);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0))
    if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    {
      MR_Word ArgX1_6 = (MR_Word) ((MR_Word) (HeadVar__2_2));
      MR_Word ArgY1_7 = (MR_Word) ((MR_Word) (HeadVar__3_3));

      mercury__dir____Compare____file_error_0_0(HeadVar__1_1, ArgX1_6, ArgY1_7);
    }
    else
      *HeadVar__1_1 = (MR_Integer) 2;
  else
  if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 0))
    *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Box ArgX1_4 = (MR_hl_field(1, HeadVar__2_2, 0));
    MR_Box ArgY1_5 = (MR_hl_field(1, HeadVar__3_3, 0));

    mercury__builtin__compare_3_p_0(TypeInfo_for_T_10, HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
mercury__dir____Unify____maybe_file_error_1_0(
  MR_Word TypeInfo_for_T_9,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 0))
  {
    MR_Word ArgX1_5 = (MR_Word) ((MR_Word) (HeadVar__1_1));
    MR_Word ArgY1_6;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
    if (succeeded)
    {
      ArgY1_6 = (MR_Word) ((MR_Word) (HeadVar__2_2));
      succeeded = mercury__dir____Unify____file_error_0_0(ArgX1_5, ArgY1_6);
    }
  }
  else
  {
    MR_Box ArgX1_3 = (MR_hl_field(1, HeadVar__1_1, 0));
    MR_Box ArgY1_4;

    succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
    if (succeeded)
    {
      ArgY1_4 = (MR_hl_field(1, HeadVar__2_2, 0));
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_T_9, ArgX1_3, ArgY1_4);
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__dir____Compare____make_single_directory_status_0_0(
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
mercury__dir____Unify____make_single_directory_status_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
mercury__dir____Compare____is_parent_symlink_0_0(
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
mercury__dir____Unify____is_parent_symlink_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
mercury__dir____Compare____foldl_pred_1_0(
  MR_Word TypeInfo_for_T_4,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (HeadVar__2_2), (MR_Word) (HeadVar__3_3));
}

MR_bool MR_CALL 
mercury__dir____Unify____foldl_pred_1_0(
  MR_Word TypeInfo_for_T_3,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;

  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (HeadVar__1_1), (MR_Word) (HeadVar__2_2));
  return succeeded;
}

void MR_CALL 
mercury__dir____Compare____fold_params_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 1);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 1))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    mercury__dir____Compare____maybe_subdirs_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Integer Var_13 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_14 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_13 < Var_14);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_13 == Var_14);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 0;
        else
          *HeadVar__1_1 = (MR_Integer) 2;
      }
    }
  }
}

void MR_CALL 
mercury__dir____Compare____maybe_subdirs_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_6 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_7 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_6 == CastY_7);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
    *HeadVar__1_1 = (MR_Integer) 2;
  else
  {
    MR_Word ArgX1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 1);
    MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__3_3, 0))) & (MR_Integer) 1);
    MR_Integer Var_9 = (MR_Integer) (ArgX1_4);
    MR_Integer Var_10 = (MR_Integer) (ArgY1_5);

    succeeded = (Var_9 < Var_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 1;
    else
    {
      succeeded = (Var_9 == Var_10);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 0;
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
  }
}

MR_bool MR_CALL 
mercury__dir____Unify____fold_params_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))) & (MR_Integer) 1);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 1);

    succeeded = mercury__dir____Unify____maybe_subdirs_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
      succeeded = (ArgX2_5 == ArgY2_6);
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__dir____Unify____maybe_subdirs_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_7 == CastY_8);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_6 == CastX_5);
  }
  else
  {
    MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__1_1, 0))) & (MR_Integer) 1);
    MR_Word ArgY1_4;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(1, HeadVar__2_2, 0))) & (MR_Integer) 1);
      succeeded = (ArgX1_3 == ArgY1_4);
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__dir____Compare____file_operation_0_0(
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
mercury__dir____Unify____file_operation_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
mercury__dir____Compare____file_error_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_12 == CastY_13);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, 0))));
    MR_Word ArgX2_7 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 7);
    MR_Word ArgY2_8 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, 1))) & (MR_Integer) 7);
    MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));
    MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, 2))));
    MR_Word SubResult1_6;
    MR_Integer Var_19;

{
#define MR_PROC_LABEL mercury__dir____Compare____file_error_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = ArgX1_4 ;
	S2 = ArgY1_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	Var_19  = Res;
}
    succeeded = (Var_19 < (MR_Integer) 0);
    if (succeeded)
      SubResult1_6 = (MR_Integer) 1;
    else
    {
      succeeded = (Var_19 == (MR_Integer) 0);
      if (succeeded)
        SubResult1_6 = (MR_Integer) 0;
      else
        SubResult1_6 = (MR_Integer) 2;
    }
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;
      MR_Integer Var_17 = (MR_Integer) (ArgX2_7);
      MR_Integer Var_18 = (MR_Integer) (ArgY2_8);

      succeeded = (Var_17 < Var_18);
      if (succeeded)
        SubResult2_9 = (MR_Integer) 1;
      else
      {
        succeeded = (Var_17 == Var_18);
        if (succeeded)
          SubResult2_9 = (MR_Integer) 0;
        else
          SubResult2_9 = (MR_Integer) 2;
      }
      succeeded = (SubResult2_9 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult2_9;
      else
        mercury__io____Compare____error_0_0(HeadVar__1_1, ArgX3_10, ArgY3_11);
    }
  }
}

MR_bool MR_CALL 
mercury__dir____Unify____file_error_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_9 == CastY_10);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, 0))));
    MR_Word ArgX2_5 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, 1))) & (MR_Integer) 7);
    MR_Word ArgY2_6 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, 1))) & (MR_Integer) 7);
    MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, 2))));
    MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, 2))));

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    if (succeeded)
    {
      succeeded = (ArgX2_5 == ArgY2_6);
      if (succeeded)
        succeeded = mercury__io____Unify____error_0_0(ArgX3_7, ArgY3_8);
    }
  }
  return succeeded;
}

void MR_CALL 
mercury__dir____Compare____canon_prev_char_0_0(
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
mercury__dir____Unify____canon_prev_char_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

MR_Word MR_CALL 
mercury__dir__expand_1_f_0(
  MR_Word Chars_3)
{
  MR_Word HeadVar__2_2;

  HeadVar__2_2 = mercury__dir__expand_acc_2_f_0(Chars_3, (MR_Word) (MR_mkword(1, &mercury__dir_scalar_common_1[10])));
  return HeadVar__2_2;
}

void MR_CALL 
mercury__dir__foldl2_process_dir_entries_for_try_12_p_0(
  MR_Word TypeInfo_for_T_31,
  MR_Word Params_13,
  MR_Word Pred_14,
  MR_String DirName_15,
  MR_Box DirStream_16,
  MR_Word SymLinkParent_17,
  MR_Word ParentIds_18,
  MR_Word STATE_VARIABLE_MaybeUserStop_0_23,
  MR_Word STATE_VARIABLE_RevErrors_0_24,
  MR_Box STATE_VARIABLE_Data_0_25,
  MR_Tuple * HeadVar__10_10)
{
  MR_Word STATE_VARIABLE_MaybeUserStop_26;
  MR_Word STATE_VARIABLE_RevErrors_27;
  MR_Box STATE_VARIABLE_Data_28;

  mercury__dir__foldl2_process_dir_entries_14_p_0(TypeInfo_for_T_31, Params_13, Pred_14, DirName_15, DirStream_16, SymLinkParent_17, ParentIds_18, STATE_VARIABLE_MaybeUserStop_0_23, &STATE_VARIABLE_MaybeUserStop_26, STATE_VARIABLE_RevErrors_0_24, &STATE_VARIABLE_RevErrors_27, STATE_VARIABLE_Data_0_25, &STATE_VARIABLE_Data_28);
  {
    MR_Tuple base;
    base = (MR_Tuple) MR_new_object(MR_Tuple, (3 * sizeof(MR_Word)), NULL, NULL);
    *HeadVar__10_10 = base;
    MR_hl_field(0, base, 0) = ((MR_Box) (STATE_VARIABLE_MaybeUserStop_26));
    MR_hl_field(0, base, 1) = ((MR_Box) (STATE_VARIABLE_RevErrors_27));
    MR_hl_field(0, base, 2) = STATE_VARIABLE_Data_28;
  }
}

void MR_CALL 
mercury__dir__foldl2_process_dir_entries_14_p_0(
  MR_Word TypeInfo_for_T_84,
  MR_Word Params_15,
  MR_Word Pred_16,
  MR_String DirName_17,
  MR_Box DirStream_18,
  MR_Word SymLinkParent_19,
  MR_Word ParentIds_20,
  MR_Word STATE_VARIABLE_MaybeUserStop_0_39,
  MR_Word * STATE_VARIABLE_MaybeUserStop_40,
  MR_Word STATE_VARIABLE_RevErrors_0_41,
  MR_Word * STATE_VARIABLE_RevErrors_42,
  MR_Box STATE_VARIABLE_Data_0_43,
  MR_Box * STATE_VARIABLE_Data_44)
{
  while (MR_TRUE)
  {
    MR_bool succeeded = (STATE_VARIABLE_MaybeUserStop_0_39 == (MR_Integer) 1);

    // setup for model_det tailcalls optimized into a loop
    ;
    if (!(succeeded))
    {
      MR_Word Var_47;

      succeeded = (STATE_VARIABLE_RevErrors_0_41 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Var_47 = ((MR_Unsigned) ((MR_hl_field(0, Params_15, 1))) & (MR_Integer) 1);
        succeeded = (Var_47 == (MR_Integer) 0);
      }
    }
    if (succeeded)
    {
      *STATE_VARIABLE_Data_44 = STATE_VARIABLE_Data_0_43;
      *STATE_VARIABLE_RevErrors_42 = STATE_VARIABLE_RevErrors_0_41;
      *STATE_VARIABLE_MaybeUserStop_40 = STATE_VARIABLE_MaybeUserStop_0_39;
    }
    else
    {
      MR_Word ReadResult_27;

      mercury__dir__read_entry_4_p_0(DirStream_18, &ReadResult_27);
      switch (MR_tag((MR_Word) ReadResult_27)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            *STATE_VARIABLE_MaybeUserStop_40 = STATE_VARIABLE_MaybeUserStop_0_39;
            *STATE_VARIABLE_RevErrors_42 = STATE_VARIABLE_RevErrors_0_41;
            *STATE_VARIABLE_Data_44 = STATE_VARIABLE_Data_0_43;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String FileName_28 = ((MR_String) ((MR_hl_field(1, ReadResult_27, 0))));
            MR_String PathName_29;
            MR_Word FileTypeResult_30;

            PathName_29 = mercury__dir__f_slash_2_f_0(DirName_17, FileName_28);
            mercury__io__file__file_type_5_p_0((MR_Integer) 0, PathName_29, &FileTypeResult_30);
            if (((MR_tag((MR_Word) FileTypeResult_30)) == (MR_Integer) 1))
            {
              MR_Word IOError_38 = ((MR_Word) ((MR_hl_field(1, FileTypeResult_30, 0))));
              MR_Word Error_78;

              {
                Error_78 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Error_78, 0) = ((MR_Box) (PathName_29));
                MR_hl_field(0, Error_78, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
                MR_hl_field(0, Error_78, 2) = ((MR_Box) (IOError_38));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_RevErrors_42 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Error_78));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_RevErrors_0_41));
              }
              *STATE_VARIABLE_MaybeUserStop_40 = STATE_VARIABLE_MaybeUserStop_0_39;
              *STATE_VARIABLE_Data_44 = STATE_VARIABLE_Data_0_43;
            }
            else
            {
              MR_Word FileType_31 = ((MR_Word) ((MR_hl_field(0, FileTypeResult_30, 0))));
              MR_Word PredSaysContinue_32;
              MR_Box STATE_VARIABLE_Data_1_51;
              void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(0, Pred_16, 1))));
              MR_Box conv2_PredSaysContinue_32;
              MR_Box conv1_STATE_VARIABLE_IO_3_52;

              func_0(((MR_Box) (Pred_16)), ((MR_Box) (DirName_17)), ((MR_Box) (FileName_28)), ((MR_Box) (FileType_31)), &conv2_PredSaysContinue_32, STATE_VARIABLE_Data_0_43, &STATE_VARIABLE_Data_1_51, ((MR_Box) ((MR_Integer) 0)), &conv1_STATE_VARIABLE_IO_3_52);
              PredSaysContinue_32 = ((MR_Word) (conv2_PredSaysContinue_32));
              switch (PredSaysContinue_32) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    *STATE_VARIABLE_MaybeUserStop_40 = (MR_Integer) 1;
                    *STATE_VARIABLE_RevErrors_42 = STATE_VARIABLE_RevErrors_0_41;
                    *STATE_VARIABLE_Data_44 = STATE_VARIABLE_Data_1_51;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_Word STATE_VARIABLE_MaybeUserStop_1_54;
                    MR_Word STATE_VARIABLE_RevErrors_1_55;
                    MR_Box STATE_VARIABLE_Data_2_56;
                    MR_Word Var_53;
                    MR_Word next_value_of_STATE_VARIABLE_MaybeUserStop_0_39;
                    MR_Word next_value_of_STATE_VARIABLE_RevErrors_0_41;
                    MR_Box next_value_of_STATE_VARIABLE_Data_0_43;

                    succeeded = (FileType_31 == (MR_Integer) 1);
                    if (succeeded)
                    {
                      Var_53 = ((MR_Word) ((MR_hl_field(0, Params_15, 0))));
                      succeeded = (Var_53 != (MR_Word) ((MR_Unsigned) 0U));
                    }
                    if (succeeded)
                      mercury__dir__foldl2_process_dir_13_p_0(TypeInfo_for_T_84, Params_15, Pred_16, PathName_29, SymLinkParent_19, ParentIds_20, STATE_VARIABLE_MaybeUserStop_0_39, &STATE_VARIABLE_MaybeUserStop_1_54, STATE_VARIABLE_RevErrors_0_41, &STATE_VARIABLE_RevErrors_1_55, STATE_VARIABLE_Data_1_51, &STATE_VARIABLE_Data_2_56);
                    else
                    {
                      MR_Word Var_58;
                      MR_Word Var_59;

                      succeeded = (FileType_31 == (MR_Integer) 2);
                      if (succeeded)
                      {
                        Var_58 = ((MR_Word) ((MR_hl_field(0, Params_15, 0))));
                        succeeded = (Var_58 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          Var_59 = ((MR_Unsigned) ((MR_hl_field(1, Var_58, 0))) & (MR_Integer) 1);
                          succeeded = (Var_59 == (MR_Integer) 1);
                        }
                      }
                      if (succeeded)
                      {
                        MR_Word TargetTypeResult_34;

                        mercury__io__file__file_type_5_p_0((MR_Integer) 1, PathName_29, &TargetTypeResult_34);
                        if (((MR_tag((MR_Word) TargetTypeResult_34)) == (MR_Integer) 1))
                        {
                          MR_Word TargetTypeError_36 = ((MR_Word) ((MR_hl_field(1, TargetTypeResult_34, 0))));
                          MR_Word Error_37;

                          {
                            Error_37 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                            MR_hl_field(0, Error_37, 0) = ((MR_Box) (PathName_29));
                            MR_hl_field(0, Error_37, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
                            MR_hl_field(0, Error_37, 2) = ((MR_Box) (TargetTypeError_36));
                          }
                          {
                            STATE_VARIABLE_RevErrors_1_55 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, STATE_VARIABLE_RevErrors_1_55, 0) = ((MR_Box) (Error_37));
                            MR_hl_field(1, STATE_VARIABLE_RevErrors_1_55, 1) = ((MR_Box) (STATE_VARIABLE_RevErrors_0_41));
                          }
                          STATE_VARIABLE_MaybeUserStop_1_54 = STATE_VARIABLE_MaybeUserStop_0_39;
                          STATE_VARIABLE_Data_2_56 = STATE_VARIABLE_Data_1_51;
                        }
                        else
                        {
                          MR_Word TargetType_35 = ((MR_Word) ((MR_hl_field(0, TargetTypeResult_34, 0))));

                          switch (TargetType_35) {
                            default: /*NOTREACHED*/ MR_assert(0);
                            case (MR_Integer) 6:
                              {
                                STATE_VARIABLE_MaybeUserStop_1_54 = STATE_VARIABLE_MaybeUserStop_0_39;
                                STATE_VARIABLE_RevErrors_1_55 = STATE_VARIABLE_RevErrors_0_41;
                                STATE_VARIABLE_Data_2_56 = STATE_VARIABLE_Data_1_51;
                              }
                              break;
                            case (MR_Integer) 5:
                              {
                                STATE_VARIABLE_MaybeUserStop_1_54 = STATE_VARIABLE_MaybeUserStop_0_39;
                                STATE_VARIABLE_RevErrors_1_55 = STATE_VARIABLE_RevErrors_0_41;
                                STATE_VARIABLE_Data_2_56 = STATE_VARIABLE_Data_1_51;
                              }
                              break;
                            case (MR_Integer) 1:
                              mercury__dir__foldl2_process_dir_13_p_0(TypeInfo_for_T_84, Params_15, Pred_16, PathName_29, (MR_Integer) 1, ParentIds_20, STATE_VARIABLE_MaybeUserStop_0_39, &STATE_VARIABLE_MaybeUserStop_1_54, STATE_VARIABLE_RevErrors_0_41, &STATE_VARIABLE_RevErrors_1_55, STATE_VARIABLE_Data_1_51, &STATE_VARIABLE_Data_2_56);
                              break;
                            case (MR_Integer) 7:
                              {
                                STATE_VARIABLE_MaybeUserStop_1_54 = STATE_VARIABLE_MaybeUserStop_0_39;
                                STATE_VARIABLE_RevErrors_1_55 = STATE_VARIABLE_RevErrors_0_41;
                                STATE_VARIABLE_Data_2_56 = STATE_VARIABLE_Data_1_51;
                              }
                              break;
                            case (MR_Integer) 3:
                              {
                                STATE_VARIABLE_MaybeUserStop_1_54 = STATE_VARIABLE_MaybeUserStop_0_39;
                                STATE_VARIABLE_RevErrors_1_55 = STATE_VARIABLE_RevErrors_0_41;
                                STATE_VARIABLE_Data_2_56 = STATE_VARIABLE_Data_1_51;
                              }
                              break;
                            case (MR_Integer) 0:
                              {
                                STATE_VARIABLE_MaybeUserStop_1_54 = STATE_VARIABLE_MaybeUserStop_0_39;
                                STATE_VARIABLE_RevErrors_1_55 = STATE_VARIABLE_RevErrors_0_41;
                                STATE_VARIABLE_Data_2_56 = STATE_VARIABLE_Data_1_51;
                              }
                              break;
                            case (MR_Integer) 8:
                              {
                                STATE_VARIABLE_MaybeUserStop_1_54 = STATE_VARIABLE_MaybeUserStop_0_39;
                                STATE_VARIABLE_RevErrors_1_55 = STATE_VARIABLE_RevErrors_0_41;
                                STATE_VARIABLE_Data_2_56 = STATE_VARIABLE_Data_1_51;
                              }
                              break;
                            case (MR_Integer) 9:
                              {
                                STATE_VARIABLE_MaybeUserStop_1_54 = STATE_VARIABLE_MaybeUserStop_0_39;
                                STATE_VARIABLE_RevErrors_1_55 = STATE_VARIABLE_RevErrors_0_41;
                                STATE_VARIABLE_Data_2_56 = STATE_VARIABLE_Data_1_51;
                              }
                              break;
                            case (MR_Integer) 4:
                              {
                                STATE_VARIABLE_MaybeUserStop_1_54 = STATE_VARIABLE_MaybeUserStop_0_39;
                                STATE_VARIABLE_RevErrors_1_55 = STATE_VARIABLE_RevErrors_0_41;
                                STATE_VARIABLE_Data_2_56 = STATE_VARIABLE_Data_1_51;
                              }
                              break;
                            case (MR_Integer) 2:
                              {
                                STATE_VARIABLE_MaybeUserStop_1_54 = STATE_VARIABLE_MaybeUserStop_0_39;
                                STATE_VARIABLE_RevErrors_1_55 = STATE_VARIABLE_RevErrors_0_41;
                                STATE_VARIABLE_Data_2_56 = STATE_VARIABLE_Data_1_51;
                              }
                              break;
                            case (MR_Integer) 10:
                              {
                                STATE_VARIABLE_MaybeUserStop_1_54 = STATE_VARIABLE_MaybeUserStop_0_39;
                                STATE_VARIABLE_RevErrors_1_55 = STATE_VARIABLE_RevErrors_0_41;
                                STATE_VARIABLE_Data_2_56 = STATE_VARIABLE_Data_1_51;
                              }
                              break;
                          }
                        }
                      }
                      else
                      {
                        STATE_VARIABLE_Data_2_56 = STATE_VARIABLE_Data_1_51;
                        STATE_VARIABLE_RevErrors_1_55 = STATE_VARIABLE_RevErrors_0_41;
                        STATE_VARIABLE_MaybeUserStop_1_54 = STATE_VARIABLE_MaybeUserStop_0_39;
                      }
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_STATE_VARIABLE_MaybeUserStop_0_39 = STATE_VARIABLE_MaybeUserStop_1_54;
                    next_value_of_STATE_VARIABLE_RevErrors_0_41 = STATE_VARIABLE_RevErrors_1_55;
                    next_value_of_STATE_VARIABLE_Data_0_43 = STATE_VARIABLE_Data_2_56;
                    STATE_VARIABLE_MaybeUserStop_0_39 = next_value_of_STATE_VARIABLE_MaybeUserStop_0_39;
                    STATE_VARIABLE_RevErrors_0_41 = next_value_of_STATE_VARIABLE_RevErrors_0_41;
                    STATE_VARIABLE_Data_0_43 = next_value_of_STATE_VARIABLE_Data_0_43;
                    continue;
                  }
                  break;
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Error_79;
            MR_Word IOError_80 = ((MR_Word) ((MR_hl_field(2, ReadResult_27, 0))));

            {
              Error_79 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Error_79, 0) = ((MR_Box) (DirName_17));
              MR_hl_field(0, Error_79, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 5));
              MR_hl_field(0, Error_79, 2) = ((MR_Box) (IOError_80));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              *STATE_VARIABLE_RevErrors_42 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (Error_79));
              MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_RevErrors_0_41));
            }
            *STATE_VARIABLE_MaybeUserStop_40 = STATE_VARIABLE_MaybeUserStop_0_39;
            *STATE_VARIABLE_Data_44 = STATE_VARIABLE_Data_0_43;
          }
          break;
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__dir__read_entry_4_p_0(
  MR_Box DirStream_5,
  MR_Word * Result_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Box Error_8;
    MR_Word IsWin32Error_9;
    MR_Word HaveFileName_10;
    MR_String FileName_11;
    MR_Word MaybeIOError_12;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__dir__read_entry_2_7_p_0(DirStream_5, &Error_8, &IsWin32Error_9, &HaveFileName_10, &FileName_11);
    mercury__io__error_util__is_error_maybe_win32_6_p_0(Error_8, IsWin32Error_9, (MR_String) "reading directory entry failed: ", &MaybeIOError_12);
    if ((MaybeIOError_12 == (MR_Word) ((MR_Unsigned) 0U)))
      switch (HaveFileName_10) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *Result_6 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          {
            succeeded = (strcmp(FileName_11, (MR_String) ".") == 0);
            if (!(succeeded))
              succeeded = (strcmp(FileName_11, (MR_String) "..") == 0);
            if (succeeded)
            {
              // direct tailcall eliminated
              ;
              continue;
            }
            else
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *Result_6 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (FileName_11));
              }
          }
          break;
      }
    else
    {
      MR_Word IOError_13 = ((MR_Word) ((MR_hl_field(1, MaybeIOError_12, 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(2, base, 0) = ((MR_Box) (IOError_13));
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__dir__read_entry_2_7_p_0(
  MR_Box DirStream_1,
  MR_Box * Error_2,
  MR_Word * IsWin32Error_3,
  MR_Word * HaveFileName_4,
  MR_String * FileName_5)
{
{
#define MR_PROC_LABEL mercury__dir__read_entry_2_7_p_0

	ML_DIR_STREAM DirStream;
	MR_Integer Error;
	MR_Word IsWin32Error;
	MR_Word HaveFileName;
	MR_String FileName;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(ML_DIR_STREAM, DirStream_1 , DirStream);
		{

#if defined(MR_WIN32)
    WIN32_FIND_DATAW file_data;

    if (DirStream->handle == INVALID_HANDLE_VALUE) {
        // Directory was empty when opened.
        Error = 0;
        IsWin32Error = MR_YES;
        HaveFileName = MR_NO;
        FileName = MR_make_string_const("");
    } else if (DirStream->pending_entry != NULL) {
        // FindFirstFileW already returned the first entry.
        Error = 0;
        IsWin32Error = MR_YES;
        HaveFileName = MR_YES;
        FileName = DirStream->pending_entry;
        DirStream->pending_entry = NULL;
    } else if (FindNextFileW(DirStream->handle, &file_data)) {
        Error = 0;
        IsWin32Error = MR_YES;
        HaveFileName = MR_YES;
        FileName = MR_wide_to_utf8(file_data.cFileName, MR_ALLOC_ID);
    } else {
        Error = GetLastError();
        IsWin32Error = MR_YES;
        if (Error == ERROR_NO_MORE_FILES) {
            Error = 0;
        }
        HaveFileName = MR_NO;
        FileName = MR_make_string_const("");
    }

#elif defined(MR_HAVE_READDIR) && defined(MR_HAVE_CLOSEDIR)
    struct dirent *dir_entry;

    errno = 0;          // to detect end-of-stream
    dir_entry = readdir(DirStream);
    if (dir_entry == NULL) {
        Error = errno;  // remains zero at end-of-stream
        IsWin32Error = MR_NO;
        HaveFileName = MR_NO;
        FileName = MR_make_string_const("");
    } else {
        Error = 0;
        IsWin32Error = MR_NO;
        HaveFileName = MR_YES;
        MR_make_aligned_string_copy_msg(FileName, dir_entry->d_name,
            MR_ALLOC_ID);
    }

#else // !MR_WIN32 && !(MR_HAVE_READDIR etc.)
    Error = ENOSYS;
    IsWin32Error = MR_NO;
    HaveFileName = MR_NO;
    FileName = MR_make_string_const("");
#endif


		;}
#undef MR_PROC_LABEL
	*Error_2  = (MR_Box) Error;
	*IsWin32Error_3  = IsWin32Error;
	*HaveFileName_4  = HaveFileName;
	*FileName_5  = FileName;
}
}

static void MR_CALL 
mercury__dir__make_directory_including_parents_2_5_p_0(
  MR_String _DirName_1,
  MR_Box * Error_2,
  MR_Word * CheckAccess_3)
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
	*Error_2  = (MR_Box) Error;
	*CheckAccess_3  = CheckAccess;
}
}

MR_Char MR_CALL 
mercury__dir__alt_directory_separator_0_f_0(void)
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
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    HeadVar__1_1 = (MR_Char) 92;
  else
    HeadVar__1_1 = (MR_Char) 47;
  return HeadVar__1_1;
}

MR_bool MR_CALL 
mercury__dir__use_windows_paths_0_p_0(void)
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
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    Var_1 = (MR_Char) 92;
  else
    Var_1 = (MR_Char) 47;
  succeeded = (Var_1 == (MR_Char) 92);
  return succeeded;
}

MR_Word MR_CALL 
mercury__dir__expand_braces_1_f_0(
  MR_String ArgStr_3)
{
  MR_Word ExpandStrs_4;
  MR_Word ArgChar_5;
  MR_Word ExpandChars_6;
  MR_Integer Var_10;

{
#define MR_PROC_LABEL mercury__dir__expand_braces_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str = ArgStr_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_10  = Length;
}
  mercury__string__do_to_char_list_loop_4_p_0(ArgStr_3, Var_10, (MR_Word) ((MR_Unsigned) 0U), &ArgChar_5);
  ExpandChars_6 = mercury__dir__expand_acc_2_f_0(ArgChar_5, (MR_Word) (MR_mkword(1, &mercury__dir_scalar_common_1[10])));
  ExpandStrs_4 = mercury__dir__map__ho8_2_f_in__list_0(ExpandChars_6);
  return ExpandStrs_4;
}

static MR_Word MR_CALL 
mercury__dir__map__ho8_2_f_in__list_0(
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_String Var_8;
    MR_Word * AddrSCCcallarg_9_12;

    mercury__string__from_char_list_2_p_0(Var_6, &Var_8);
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_8));
      MR_hl_field(1, HeadVar__3_3, 1) = NULL;
    }
    AddrSCCcallarg_9_12 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, 1)));
    mercury__dir__LCMC__func__map__ho8__1_3_p_0(Var_7, AddrSCCcallarg_9_12);
  }
  return HeadVar__3_3;
}

static void MR_CALL 
mercury__dir__LCMC__func__map__ho8__1_3_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_13)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_13 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_String Var_8;
      MR_Word * AddrSCCcallarg_9_12;
      MR_Word HeadVar__3_14;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_13;

      mercury__string__from_char_list_2_p_0(Var_6, &Var_8);
      {
        HeadVar__3_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_14, 0) = ((MR_Box) (Var_8));
        MR_hl_field(1, HeadVar__3_14, 1) = NULL;
      }
      AddrSCCcallarg_9_12 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_14, 1)));
      *AddrOfHeadVar__3_13 = HeadVar__3_14;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_7;
      next_value_of_AddrOfHeadVar__3_13 = AddrSCCcallarg_9_12;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_13 = next_value_of_AddrOfHeadVar__3_13;
      continue;
    }
    break;
  }
}

static void MR_CALL 
mercury__dir__LCMC__func__map__ho5__1_3_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_16)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_16 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Var_8;
      MR_Word * AddrSCCcallarg_9_15;
      MR_Word HeadVar__3_17;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_16;

      Var_8 = mercury__dir__expand_acc_2_f_0(Var_6, (MR_Word) (MR_mkword(1, &mercury__dir_scalar_common_1[10])));
      {
        HeadVar__3_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_17, 0) = ((MR_Box) (Var_8));
        MR_hl_field(1, HeadVar__3_17, 1) = NULL;
      }
      AddrSCCcallarg_9_15 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_17, 1)));
      *AddrOfHeadVar__3_16 = HeadVar__3_17;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_7;
      next_value_of_AddrOfHeadVar__3_16 = AddrSCCcallarg_9_15;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_16 = next_value_of_AddrOfHeadVar__3_16;
      continue;
    }
    break;
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
      MR_Char Char_5 = ((MR_Char) (MR_Word) (MR_hl_field(1, HeadVar__1_1, 0)));
      MR_Word Chars_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));

      succeeded = (Char_5 == (MR_Char) 123);
      if (succeeded)
      {
        MR_Word Alternatives0_9;
        MR_Word Left_10;
        MR_Word AlternativeLists_11;
        MR_Word Alternatives_12;
        MR_Word PrefixLists_13;
        MR_Word Prefixes1_14;
        MR_Word Var_29;
        MR_Word Var_33;
        MR_Word next_value_of_HeadVar__1_1;
        MR_Word next_value_of_HeadVar__2_2;

        mercury__dir__find_matching_brace_or_comma_6_p_0(Chars_6, (MR_Word) ((MR_Unsigned) 0U), (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, &Alternatives0_9, &Left_10);
        AlternativeLists_11 = mercury__dir__map__ho5_2_f_in__list_0(Alternatives0_9);
        mercury__list__reverse_2_p_0((MR_Word) (&mercury__dir_scalar_common_1[11]), AlternativeLists_11, &Var_29);
        mercury__list__condense_acc_3_p_0((MR_Word) (&mercury__dir_scalar_common_1[0]), Var_29, (MR_Word) ((MR_Unsigned) 0U), &Alternatives_12);
        PrefixLists_13 = mercury__dir__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_52_95_95_91_50_93_95_48_2_f_in__list_0(Alternatives_12, HeadVar__2_2);
        mercury__list__reverse_2_p_0((MR_Word) (&mercury__dir_scalar_common_1[11]), PrefixLists_13, &Var_33);
        mercury__list__condense_acc_3_p_0((MR_Word) (&mercury__dir_scalar_common_1[0]), Var_33, (MR_Word) ((MR_Unsigned) 0U), &Prefixes1_14);
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

        Prefixes1_18 = mercury__dir__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_95_95_91_50_93_95_48_2_f_in__list_0(Char_5, HeadVar__2_2);
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
mercury__dir__map__ho5_2_f_in__list_0(
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Var_8;
    MR_Word * AddrSCCcallarg_9_15;

    Var_8 = mercury__dir__expand_acc_2_f_0(Var_6, (MR_Word) (MR_mkword(1, &mercury__dir_scalar_common_1[10])));
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_8));
      MR_hl_field(1, HeadVar__3_3, 1) = NULL;
    }
    AddrSCCcallarg_9_15 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, 1)));
    mercury__dir__LCMC__func__map__ho5__1_3_p_0(Var_7, AddrSCCcallarg_9_15);
  }
  return HeadVar__3_3;
}

static MR_Word MR_CALL 
mercury__dir__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_52_95_95_91_50_93_95_48_2_f_in__list_0(
  MR_Word Var_12,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Var_8;
    MR_Word * AddrSCCcallarg_9_15;

    Var_8 = mercury__dir__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_50_95_95_91_50_93_95_48_2_f_in__list_0(Var_6, Var_12);
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_8));
      MR_hl_field(1, HeadVar__3_3, 1) = NULL;
    }
    AddrSCCcallarg_9_15 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, 1)));
    mercury__dir__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_52_95_95_91_50_93_95_48_95_95_49_3_p_0(Var_12, Var_7, AddrSCCcallarg_9_15);
  }
  return HeadVar__3_3;
}

static void MR_CALL 
mercury__dir__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_52_95_95_91_50_93_95_48_95_95_49_3_p_0(
  MR_Word Var_12,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_16)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_16 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Var_8;
      MR_Word * AddrSCCcallarg_9_15;
      MR_Word HeadVar__3_17;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_16;

      Var_8 = mercury__dir__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_50_95_95_91_50_93_95_48_2_f_in__list_0(Var_6, Var_12);
      {
        HeadVar__3_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_17, 0) = ((MR_Box) (Var_8));
        MR_hl_field(1, HeadVar__3_17, 1) = NULL;
      }
      AddrSCCcallarg_9_15 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_17, 1)));
      *AddrOfHeadVar__3_16 = HeadVar__3_17;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_7;
      next_value_of_AddrOfHeadVar__3_16 = AddrSCCcallarg_9_15;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_16 = next_value_of_AddrOfHeadVar__3_16;
      continue;
    }
    break;
  }
}

static MR_Word MR_CALL 
mercury__dir__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_50_95_95_91_50_93_95_48_2_f_in__list_0(
  MR_Word Var_12,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Var_8;
    MR_Word * AddrSCCcallarg_9_15;

    mercury__list__append_3_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), Var_12, Var_6, &Var_8);
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_8));
      MR_hl_field(1, HeadVar__3_3, 1) = NULL;
    }
    AddrSCCcallarg_9_15 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, 1)));
    mercury__dir__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_50_95_95_91_50_93_95_48_95_95_49_3_p_0(Var_12, Var_7, AddrSCCcallarg_9_15);
  }
  return HeadVar__3_3;
}

static void MR_CALL 
mercury__dir__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_50_95_95_91_50_93_95_48_95_95_49_3_p_0(
  MR_Word Var_12,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_16)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_16 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Var_8;
      MR_Word * AddrSCCcallarg_9_15;
      MR_Word HeadVar__3_17;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_16;

      mercury__list__append_3_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), Var_12, Var_6, &Var_8);
      {
        HeadVar__3_17 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_17, 0) = ((MR_Box) (Var_8));
        MR_hl_field(1, HeadVar__3_17, 1) = NULL;
      }
      AddrSCCcallarg_9_15 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_17, 1)));
      *AddrOfHeadVar__3_16 = HeadVar__3_17;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_7;
      next_value_of_AddrOfHeadVar__3_16 = AddrSCCcallarg_9_15;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_16 = next_value_of_AddrOfHeadVar__3_16;
      continue;
    }
    break;
  }
}

static MR_Word MR_CALL 
mercury__dir__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_95_95_91_50_93_95_48_2_f_in__list_0(
  MR_Char Var_12,
  MR_Word HeadVar__2_2)
{
  MR_Word HeadVar__3_3;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
    MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
    MR_Word Var_8;
    MR_Word Var_13;
    MR_Word * AddrSCCcallarg_9_16;

    {
      Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, Var_13, 0) = ((MR_Box) (MR_Word) (Var_12));
      MR_hl_field(1, Var_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
    }
    mercury__list__append_3_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), Var_6, Var_13, &Var_8);
    {
      HeadVar__3_3 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, HeadVar__3_3, 0) = ((MR_Box) (Var_8));
      MR_hl_field(1, HeadVar__3_3, 1) = NULL;
    }
    AddrSCCcallarg_9_16 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_3, 1)));
    mercury__dir__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_95_95_91_50_93_95_48_95_95_49_3_p_0(Var_12, Var_7, AddrSCCcallarg_9_16);
  }
  return HeadVar__3_3;
}

static void MR_CALL 
mercury__dir__f_76_67_77_67_95_95_102_117_110_99_95_95_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_109_97_112_95_95_104_111_51_95_95_91_50_93_95_48_95_95_49_3_p_0(
  MR_Char Var_12,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_17)
{
  while (MR_TRUE)
  {
    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      *AddrOfHeadVar__3_17 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 0))));
      MR_Word Var_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));
      MR_Word Var_8;
      MR_Word Var_13;
      MR_Word * AddrSCCcallarg_9_16;
      MR_Word HeadVar__3_18;
      MR_Word next_value_of_HeadVar__2_2;
      MR_Word * next_value_of_AddrOfHeadVar__3_17;

      {
        Var_13 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, Var_13, 0) = ((MR_Box) (MR_Word) (Var_12));
        MR_hl_field(1, Var_13, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      mercury__list__append_3_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), Var_6, Var_13, &Var_8);
      {
        HeadVar__3_18 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, HeadVar__3_18, 0) = ((MR_Box) (Var_8));
        MR_hl_field(1, HeadVar__3_18, 1) = NULL;
      }
      AddrSCCcallarg_9_16 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_18, 1)));
      *AddrOfHeadVar__3_17 = HeadVar__3_18;
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__2_2 = Var_7;
      next_value_of_AddrOfHeadVar__3_17 = AddrSCCcallarg_9_16;
      HeadVar__2_2 = next_value_of_HeadVar__2_2;
      AddrOfHeadVar__3_17 = next_value_of_AddrOfHeadVar__3_17;
      continue;
    }
    break;
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
        mercury__require__error_1_p_0((MR_String) "dir.expand_braces: mismatched braces");
        return;
      }
    else
    {
      MR_Char Char_13 = ((MR_Char) (MR_Word) (MR_hl_field(1, HeadVar__1_1, 0)));
      MR_Word Chars_14 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));

      succeeded = (Char_13 == (MR_Char) 125);
      if (succeeded)
      {
        succeeded = (BraceLevel_4 == (MR_Integer) 0);
        if (succeeded)
        {
          MR_Word Var_21;

          {
            Var_21 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_21, 0) = ((MR_Box) (CurAlternative_3));
            MR_hl_field(1, Var_21, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
            Var_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_25, 0) = ((MR_Box) (MR_Word) (Char_13));
            MR_hl_field(1, Var_25, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__list__append_3_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), CurAlternative_3, Var_25, &Var_23);
          Var_24 = (MR_Integer) ((MR_Unsigned) BraceLevel_4 - (MR_Unsigned) 1);
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
            Var_30 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, Var_30, 0) = ((MR_Box) (MR_Word) (Char_13));
            MR_hl_field(1, Var_30, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          mercury__list__append_3_p_1((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), CurAlternative_3, Var_30, &Var_28);
          Var_29 = (MR_Integer) ((MR_Unsigned) BraceLevel_4 + (MR_Unsigned) 1);
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
                Var_33 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_33, 0) = ((MR_Box) (CurAlternative_3));
                MR_hl_field(1, Var_33, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
                Var_37 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_37, 0) = ((MR_Box) (MR_Word) (Char_13));
                MR_hl_field(1, Var_37, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
              Var_40 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, Var_40, 0) = ((MR_Box) (MR_Word) (Char_13));
              MR_hl_field(1, Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
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
mercury__dir__general_foldl2_8_p_0(
  MR_Word TypeInfo_for_T_25,
  MR_Word Params_9,
  MR_Word Pred_10,
  MR_String DirName_11,
  MR_Box Data0_12,
  MR_Box * Data_13,
  MR_Word * Errors_14)
{
  MR_Word RevErrors_17;
  MR_String Var_20;
  MR_Word _MaybeUserStop_16;

  Var_20 = mercury__dir__make_dirname_ok_for_windows_1_f_0(DirName_11);
  mercury__dir__foldl2_process_dir_13_p_0(TypeInfo_for_T_25, Params_9, Pred_10, Var_20, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, &_MaybeUserStop_16, (MR_Word) ((MR_Unsigned) 0U), &RevErrors_17, Data0_12, Data_13);
  mercury__list__reverse_2_p_0((MR_Word) (&mercury__dir__dir__type_ctor_info_file_error_0), RevErrors_17, Errors_14);
}

void MR_CALL 
mercury__dir__recursive_foldl2_7_p_0(
  MR_Word TypeInfo_for_T_34,
  MR_Word Pred_8,
  MR_String DirName_9,
  MR_Word FollowLinks0_10,
  MR_Box Data0_11,
  MR_Word * Result_12)
{
  MR_Word FollowLinks_14;
  MR_Word SubDirs_15;
  MR_Word Params_16;
  MR_Word RevErrors_18;
  MR_Box Data_19;
  MR_Word Errors_20;
  MR_String Var_29;
  MR_Word _MaybeUserStop_17;

  switch (FollowLinks0_10) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      FollowLinks_14 = (MR_Integer) 0;
      break;
    case (MR_Integer) 1:
      FollowLinks_14 = (MR_Integer) 1;
      break;
  }
  {
    SubDirs_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
    MR_hl_field(1, SubDirs_15, 0) = (MR_Box) ((MR_Unsigned) (FollowLinks_14));
  }
  {
    Params_16 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
    MR_hl_field(0, Params_16, 0) = ((MR_Box) (SubDirs_15));
    MR_hl_field(0, Params_16, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
  }
  Var_29 = mercury__dir__make_dirname_ok_for_windows_1_f_0(DirName_9);
  mercury__dir__foldl2_process_dir_13_p_0(TypeInfo_for_T_34, Params_16, Pred_8, Var_29, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, &_MaybeUserStop_17, (MR_Word) ((MR_Unsigned) 0U), &RevErrors_18, Data0_11, &Data_19);
  mercury__list__reverse_2_p_0((MR_Word) (&mercury__dir__dir__type_ctor_info_file_error_0), RevErrors_18, &Errors_20);
  if ((Errors_20 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Result_12 = base;
      MR_hl_field(0, base, 0) = Data_19;
    }
  else
  {
    MR_Word HeadError_21 = ((MR_Word) ((MR_hl_field(1, Errors_20, 0))));
    MR_Word Error_25 = ((MR_Word) ((MR_hl_field(0, HeadError_21, 2))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Result_12 = base;
      MR_hl_field(1, base, 0) = Data_19;
      MR_hl_field(1, base, 1) = ((MR_Box) (Error_25));
    }
  }
}

void MR_CALL 
mercury__dir__foldl2_6_p_0(
  MR_Word TypeInfo_for_T_31,
  MR_Word Pred_7,
  MR_String DirName_8,
  MR_Box Data0_9,
  MR_Word * Result_10)
{
  MR_Word RevErrors_15;
  MR_Box Data_16;
  MR_Word Errors_17;
  MR_String Var_26;
  MR_Word _MaybeUserStop_14;

  Var_26 = mercury__dir__make_dirname_ok_for_windows_1_f_0(DirName_8);
  mercury__dir__foldl2_process_dir_13_p_0(TypeInfo_for_T_31, (MR_Word) (&mercury__dir_scalar_common_1[4]), Pred_7, Var_26, (MR_Integer) 0, (MR_Word) ((MR_Unsigned) 0U), (MR_Integer) 0, &_MaybeUserStop_14, (MR_Word) ((MR_Unsigned) 0U), &RevErrors_15, Data0_9, &Data_16);
  mercury__list__reverse_2_p_0((MR_Word) (&mercury__dir__dir__type_ctor_info_file_error_0), RevErrors_15, &Errors_17);
  if ((Errors_17 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Result_10 = base;
      MR_hl_field(0, base, 0) = Data_16;
    }
  else
  {
    MR_Word HeadError_18 = ((MR_Word) ((MR_hl_field(1, Errors_17, 0))));
    MR_Word Error_22 = ((MR_Word) ((MR_hl_field(0, HeadError_18, 2))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      *Result_10 = base;
      MR_hl_field(1, base, 0) = Data_16;
      MR_hl_field(1, base, 1) = ((MR_Box) (Error_22));
    }
  }
}

static void MR_CALL 
mercury__dir__foldl2_process_dir_13_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1)
{
  MR_Box closure = closure_arg;
  MR_Tuple conv1_HeadVar__3_6;

  mercury__exception__unsafe_call_io_goal_3_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), &conv1_HeadVar__3_6);
  *wrapper_arg_1 = ((MR_Box) (conv1_HeadVar__3_6));
}

static void MR_CALL 
mercury__dir__foldl2_process_dir_13_p_0_1(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  MR_Box closure = closure_arg;
  MR_Tuple conv0_HeadVar__10_10;

  mercury__dir__foldl2_process_dir_entries_for_try_12_p_0(((MR_Word) ((MR_hl_field(0, closure, 3)))), ((MR_Word) ((MR_hl_field(0, closure, 4)))), ((MR_Word) ((MR_hl_field(0, closure, 5)))), ((MR_String) ((MR_hl_field(0, closure, 6)))), ((MR_Box) ((MR_hl_field(0, closure, 7)))), ((MR_Word) ((MR_hl_field(0, closure, 8)))), ((MR_Word) ((MR_hl_field(0, closure, 9)))), ((MR_Word) ((MR_hl_field(0, closure, 10)))), ((MR_Word) ((MR_hl_field(0, closure, 11)))), (MR_hl_field(0, closure, 12)), &conv0_HeadVar__10_10);
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__10_10));
}

void MR_CALL 
mercury__dir__foldl2_process_dir_13_p_0(
  MR_Word TypeInfo_for_T_57,
  MR_Word Params_14,
  MR_Word Pred_15,
  MR_String DirName_16,
  MR_Word SymLinkParent_17,
  MR_Word ParentIds0_18,
  MR_Word STATE_VARIABLE_MaybeUserStop_0_31,
  MR_Word * STATE_VARIABLE_MaybeUserStop_32,
  MR_Word STATE_VARIABLE_RevErrors_0_33,
  MR_Word * STATE_VARIABLE_RevErrors_34,
  MR_Box STATE_VARIABLE_Data_0_35,
  MR_Box * STATE_VARIABLE_Data_36)
{
  MR_bool succeeded;
  MR_Word MaybeLoop_23;
  MR_Word Var_39 = ((MR_Word) ((MR_hl_field(0, Params_14, 0))));
  MR_Word Var_40;

  succeeded = (Var_39 != (MR_Word) ((MR_Unsigned) 0U));
  if (succeeded)
  {
    Var_40 = ((MR_Unsigned) ((MR_hl_field(1, Var_39, 0))) & (MR_Integer) 1);
    succeeded = (Var_40 == (MR_Integer) 1);
  }
  if (succeeded)
    mercury__dir__check_for_symlink_loop_6_p_0(DirName_16, SymLinkParent_17, ParentIds0_18, &MaybeLoop_23);
  else
    {
      MaybeLoop_23 = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(2, MaybeLoop_23, 0) = ((MR_Box) (ParentIds0_18));
    }
  switch (MR_tag((MR_Word) MaybeLoop_23)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      {
        *STATE_VARIABLE_MaybeUserStop_32 = STATE_VARIABLE_MaybeUserStop_0_31;
        *STATE_VARIABLE_RevErrors_34 = STATE_VARIABLE_RevErrors_0_33;
        *STATE_VARIABLE_Data_36 = STATE_VARIABLE_Data_0_35;
      }
      break;
    case (MR_Integer) 1:
      {
        MR_Word Error_55 = (MR_Word) (MR_body((MR_Word) (MaybeLoop_23), (MR_Integer) 1));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_RevErrors_34 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (Error_55));
          MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_RevErrors_0_33));
        }
        *STATE_VARIABLE_MaybeUserStop_32 = STATE_VARIABLE_MaybeUserStop_0_31;
        *STATE_VARIABLE_Data_36 = STATE_VARIABLE_Data_0_35;
      }
      break;
    case (MR_Integer) 2:
      {
        MR_Word ParentIds_24 = ((MR_Word) ((MR_hl_field(2, MaybeLoop_23, 0))));
        MR_Word OpenResult_25;

        mercury__dir__open_4_p_0(DirName_16, &OpenResult_25);
        if (((MR_tag((MR_Word) OpenResult_25)) == (MR_Integer) 0))
        {
          MR_Word Error_54 = (MR_Word) ((MR_Word) (OpenResult_25));

          {
            MR_Word base;
            base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            *STATE_VARIABLE_RevErrors_34 = base;
            MR_hl_field(1, base, 0) = ((MR_Box) (Error_54));
            MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_RevErrors_0_33));
          }
          *STATE_VARIABLE_MaybeUserStop_32 = STATE_VARIABLE_MaybeUserStop_0_31;
          *STATE_VARIABLE_Data_36 = STATE_VARIABLE_Data_0_35;
        }
        else
        {
          MR_Box DirStream_26 = ((MR_Box) ((MR_hl_field(1, OpenResult_25, 0))));
          MR_Word TryResult_27;
          MR_Word CloseResult_28;
          MR_Word TypeInfo_64_64;
          MR_Word TypeInfo_20_78;
          MR_Word Var_43;
          MR_Word Var_71;
          MR_Word Var_72;
          MR_Word conv2_Var_72;

          {
            Var_43 = (MR_Word) MR_new_object(MR_Word, (13 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_43, 0) = ((MR_Box) (&mercury__dir_scalar_common_7[0]));
            MR_hl_field(0, Var_43, 1) = ((MR_Box) (mercury__dir__foldl2_process_dir_13_p_0_1));
            MR_hl_field(0, Var_43, 2) = ((MR_Box) ((MR_Integer) 10));
            MR_hl_field(0, Var_43, 3) = ((MR_Box) (TypeInfo_for_T_57));
            MR_hl_field(0, Var_43, 4) = ((MR_Box) (Params_14));
            MR_hl_field(0, Var_43, 5) = ((MR_Box) (Pred_15));
            MR_hl_field(0, Var_43, 6) = ((MR_Box) (DirName_16));
            MR_hl_field(0, Var_43, 7) = ((MR_Box) (DirStream_26));
            MR_hl_field(0, Var_43, 8) = ((MR_Box) (SymLinkParent_17));
            MR_hl_field(0, Var_43, 9) = ((MR_Box) (ParentIds_24));
            MR_hl_field(0, Var_43, 10) = ((MR_Box) (STATE_VARIABLE_MaybeUserStop_0_31));
            MR_hl_field(0, Var_43, 11) = ((MR_Box) (STATE_VARIABLE_RevErrors_0_33));
            MR_hl_field(0, Var_43, 12) = STATE_VARIABLE_Data_0_35;
          }
          {
            TypeInfo_64_64 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeInfo_64_64, 0) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0));
            MR_hl_field(0, TypeInfo_64_64, 1) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(0, TypeInfo_64_64, 2) = ((MR_Box) (&mercury__dir__dir__type_ctor_info_maybe_user_stop_0));
            MR_hl_field(0, TypeInfo_64_64, 3) = ((MR_Box) (&mercury__dir_scalar_common_1[1]));
            MR_hl_field(0, TypeInfo_64_64, 4) = ((MR_Box) (TypeInfo_for_T_57));
          }
          {
            Var_71 = (MR_Word) MR_new_object(MR_Word, (6 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, Var_71, 0) = ((MR_Box) (&mercury__dir_scalar_common_8[0]));
            MR_hl_field(0, Var_71, 1) = ((MR_Box) (mercury__dir__foldl2_process_dir_13_p_0_2));
            MR_hl_field(0, Var_71, 2) = ((MR_Box) ((MR_Integer) 3));
            MR_hl_field(0, Var_71, 3) = ((MR_Box) (TypeInfo_64_64));
            MR_hl_field(0, Var_71, 4) = ((MR_Box) (Var_43));
            MR_hl_field(0, Var_71, 5) = NULL;
          }
          {
            TypeInfo_20_78 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(0, TypeInfo_20_78, 0) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0));
            MR_hl_field(0, TypeInfo_20_78, 1) = ((MR_Box) ((MR_Integer) 2));
            MR_hl_field(0, TypeInfo_20_78, 2) = ((MR_Box) (TypeInfo_64_64));
            MR_hl_field(0, TypeInfo_20_78, 3) = ((MR_Box) (&mercury__io__io__type_ctor_info_state_0));
          }
          mercury__exception__try_2_p_0(TypeInfo_20_78, (MR_Word) (Var_71), &conv2_Var_72);
          Var_72 = (MR_Word) (conv2_Var_72);
          if (((MR_tag((MR_Word) Var_72)) == (MR_Integer) 2))
            TryResult_27 = (MR_Word) (Var_72);
          else
          {
            MR_Tuple Var_73 = ((MR_Tuple) ((MR_hl_field(1, Var_72, 0))));
            MR_Tuple Var_74 = ((MR_Tuple) ((MR_hl_field(0, Var_73, 0))));

            {
              TryResult_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(1, TryResult_27, 0) = ((MR_Box) (Var_74));
            }
          }
          mercury__dir__close_5_p_0(DirName_16, DirStream_26, &CloseResult_28);
          if (((MR_tag((MR_Word) TryResult_27)) == (MR_Integer) 2))
          {
            MR_Word TypeInfo_69_69;

            {
              TypeInfo_69_69 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, TypeInfo_69_69, 0) = ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_tuple_0));
              MR_hl_field(0, TypeInfo_69_69, 1) = ((MR_Box) ((MR_Integer) 3));
              MR_hl_field(0, TypeInfo_69_69, 2) = ((MR_Box) (&mercury__dir__dir__type_ctor_info_maybe_user_stop_0));
              MR_hl_field(0, TypeInfo_69_69, 3) = ((MR_Box) (&mercury__dir_scalar_common_1[1]));
              MR_hl_field(0, TypeInfo_69_69, 4) = ((MR_Box) (TypeInfo_for_T_57));
            }
            {
              mercury__exception__rethrow_1_p_0(TypeInfo_69_69, (MR_Word) (TryResult_27));
              return;
            }
          }
          else
          {
            MR_Tuple Var_46 = ((MR_Tuple) ((MR_hl_field(1, TryResult_27, 0))));
            MR_Word STATE_VARIABLE_RevErrors_1_48;

            *STATE_VARIABLE_MaybeUserStop_32 = ((MR_Word) ((MR_hl_field(0, Var_46, 0))));
            STATE_VARIABLE_RevErrors_1_48 = ((MR_Word) ((MR_hl_field(0, Var_46, 1))));
            *STATE_VARIABLE_Data_36 = (MR_hl_field(0, Var_46, 2));
            if (((MR_tag((MR_Word) CloseResult_28)) == (MR_Integer) 0))
            {
              MR_Word Error_29 = (MR_Word) ((MR_Word) (CloseResult_28));

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *STATE_VARIABLE_RevErrors_34 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (Error_29));
                MR_hl_field(1, base, 1) = ((MR_Box) (STATE_VARIABLE_RevErrors_1_48));
              }
            }
            else
              *STATE_VARIABLE_RevErrors_34 = STATE_VARIABLE_RevErrors_1_48;
          }
        }
      }
      break;
  }
}

void MR_CALL 
mercury__dir__close_5_p_0(
  MR_String DirName_6,
  MR_Box DirStream_7,
  MR_Word * Result_8)
{
  MR_Box Error_10;
  MR_Word IsWin32Error_11;
  MR_Word MaybeIOError_12;

  mercury__dir__close_2_5_p_0(DirStream_7, &Error_10, &IsWin32Error_11);
  mercury__io__error_util__is_error_maybe_win32_6_p_0(Error_10, IsWin32Error_11, (MR_String) "closing directory failed: ", &MaybeIOError_12);
  if ((MaybeIOError_12 == (MR_Word) ((MR_Unsigned) 0U)))
    *Result_8 = (MR_Word) (MR_mkword(1, &mercury__dir_scalar_common_5[0]));
  else
  {
    MR_Word IOError_13 = ((MR_Word) ((MR_hl_field(1, MaybeIOError_12, 0))));
    MR_Word Var_19;

    {
      Var_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_19, 0) = ((MR_Box) (DirName_6));
      MR_hl_field(0, Var_19, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 1));
      MR_hl_field(0, Var_19, 2) = ((MR_Box) (IOError_13));
    }
    *Result_8 = (MR_Word) ((MR_Word) (Var_19));
  }
}

static void MR_CALL 
mercury__dir__close_2_5_p_0(
  MR_Box DirStream_1,
  MR_Box * Error_2,
  MR_Word * IsWin32Error_3)
{
{
#define MR_PROC_LABEL mercury__dir__close_2_5_p_0

	ML_DIR_STREAM DirStream;
	MR_Integer Error;
	MR_Word IsWin32Error;

	MR_MAYBE_UNBOX_FOREIGN_TYPE(ML_DIR_STREAM, DirStream_1 , DirStream);
		{

#if defined(MR_WIN32)
    if (DirStream->handle == INVALID_HANDLE_VALUE) {
        Error = 0;
    } else if (FindClose(DirStream->handle)) {
        DirStream->handle = INVALID_HANDLE_VALUE;
        Error = 0;
    } else {
        Error = GetLastError();
    }
    IsWin32Error = MR_YES;
#elif defined(MR_HAVE_CLOSEDIR)
    if (closedir(DirStream) == 0) {
        Error = 0;
    } else {
        Error = errno;
    }
    IsWin32Error = MR_NO;
#else
    Error = ENOSYS;
    IsWin32Error = MR_NO;
#endif


		;}
#undef MR_PROC_LABEL
	*Error_2  = (MR_Box) Error;
	*IsWin32Error_3  = IsWin32Error;
}
}

void MR_CALL 
mercury__dir__open_4_p_0(
  MR_String DirName_5,
  MR_Word * Result_6)
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
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
  {
    MR_Word ReadabilityResult_8;
    MR_Word FileTypeResult_19;

    mercury__io__file__file_type_5_p_0((MR_Integer) 1, DirName_5, &FileTypeResult_19);
    if (((MR_tag((MR_Word) FileTypeResult_19)) == (MR_Integer) 1))
    {
      MR_Word Var_31;
      MR_Word IOError_35 = ((MR_Word) ((MR_hl_field(1, FileTypeResult_19, 0))));

      {
        Var_31 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_31, 0) = ((MR_Box) (DirName_5));
        MR_hl_field(0, Var_31, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 3));
        MR_hl_field(0, Var_31, 2) = ((MR_Box) (IOError_35));
      }
      ReadabilityResult_8 = (MR_Word) ((MR_Word) (Var_31));
    }
    else
    {
      MR_Word FileType_20 = ((MR_Word) ((MR_hl_field(0, FileTypeResult_19, 0))));

      switch (FileType_20) {
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
            MR_Word Error_34;

            {
              Error_34 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(0, Error_34, 0) = ((MR_Box) (DirName_5));
              MR_hl_field(0, Error_34, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
              MR_hl_field(0, Error_34, 2) = ((MR_Box) (&mercury__dir_scalar_common_5[1]));
            }
            ReadabilityResult_8 = (MR_Word) ((MR_Word) (Error_34));
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word CheckResult_21;

            mercury__io__file__check_file_accessibility_5_p_0(DirName_5, (MR_Word) (MR_mkword(1, &mercury__dir_scalar_common_1[9])), &CheckResult_21);
            if ((CheckResult_21 == (MR_Word) ((MR_Unsigned) 0U)))
              ReadabilityResult_8 = (MR_Word) (MR_mkword(1, &mercury__dir_scalar_common_5[0]));
            else
            {
              MR_Word IOError_22 = ((MR_Word) ((MR_hl_field(1, CheckResult_21, 0))));
              MR_Word Error_23;

              {
                Error_23 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(0, Error_23, 0) = ((MR_Box) (DirName_5));
                MR_hl_field(0, Error_23, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 4));
                MR_hl_field(0, Error_23, 2) = ((MR_Box) (IOError_22));
              }
              ReadabilityResult_8 = (MR_Word) ((MR_Word) (Error_23));
            }
          }
          break;
      }
    }
    if (((MR_tag((MR_Word) ReadabilityResult_8)) == (MR_Integer) 0))
      *Result_6 = (MR_Word) (ReadabilityResult_8);
    else
    {
      MR_String DirPattern_10;
      MR_Box DirStream_36;
      MR_Box Error_37;
      MR_Word IsWin32Error_38;
      MR_Word MaybeIOError_39;

      DirPattern_10 = mercury__dir__f_slash_2_f_0(DirName_5, (MR_String) "*");
      mercury__dir__open_3_7_p_0(DirName_5, DirPattern_10, &DirStream_36, &Error_37, &IsWin32Error_38);
      mercury__io__error_util__is_error_maybe_win32_6_p_0(Error_37, IsWin32Error_38, (MR_String) "cannot open directory: ", &MaybeIOError_39);
      if ((MaybeIOError_39 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (DirStream_36));
        }
      else
      {
        MR_Word IOError_40 = ((MR_Word) ((MR_hl_field(1, MaybeIOError_39, 0))));
        MR_Word Var_43;

        {
          Var_43 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(0, Var_43, 0) = ((MR_Box) (DirName_5));
          MR_hl_field(0, Var_43, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
          MR_hl_field(0, Var_43, 2) = ((MR_Box) (IOError_40));
        }
        *Result_6 = (MR_Word) ((MR_Word) (Var_43));
      }
    }
  }
  else
  {
    MR_Box DirStream_45;
    MR_Box Error_46;
    MR_Word IsWin32Error_47;
    MR_Word MaybeIOError_48;

    mercury__dir__open_3_7_p_0(DirName_5, (MR_String) "", &DirStream_45, &Error_46, &IsWin32Error_47);
    mercury__io__error_util__is_error_maybe_win32_6_p_0(Error_46, IsWin32Error_47, (MR_String) "cannot open directory: ", &MaybeIOError_48);
    if ((MaybeIOError_48 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (DirStream_45));
      }
    else
    {
      MR_Word IOError_49 = ((MR_Word) ((MR_hl_field(1, MaybeIOError_48, 0))));
      MR_Word Var_52;

      {
        Var_52 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_52, 0) = ((MR_Box) (DirName_5));
        MR_hl_field(0, Var_52, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 0));
        MR_hl_field(0, Var_52, 2) = ((MR_Box) (IOError_49));
      }
      *Result_6 = (MR_Word) ((MR_Word) (Var_52));
    }
  }
}

static void MR_CALL 
mercury__dir__open_3_7_p_0(
  MR_String DirName_1,
  MR_String DirPattern_2,
  MR_Box * DirStream_3,
  MR_Box * Error_4,
  MR_Word * IsWin32Error_5)
{
{
#define MR_PROC_LABEL mercury__dir__open_3_7_p_0

	MR_String DirName;
	MR_String DirPattern;
	ML_DIR_STREAM DirStream;
	MR_Integer Error;
	MR_Word IsWin32Error;

	DirName = DirName_1 ;
	DirPattern = DirPattern_2 ;
		{

#if defined(MR_WIN32)
    WIN32_FIND_DATAW    file_data;

    DirStream = MR_GC_NEW_ATTRIB(struct ML_DIR_STREAM, MR_ALLOC_ID);

    DirStream->handle = FindFirstFileW(MR_utf8_to_wide(DirPattern), &file_data);
    if (DirStream->handle == INVALID_HANDLE_VALUE) {
        Error = GetLastError();
        if (Error == ERROR_NO_MORE_FILES) {
            Error = 0;
        }
        DirStream->pending_entry = NULL;
    } else {
        Error = 0;
        DirStream->pending_entry = MR_wide_to_utf8(file_data.cFileName, MR_ALLOC_ID);
    }
    IsWin32Error = MR_YES;

#elif defined(MR_HAVE_OPENDIR) && defined(MR_HAVE_READDIR) && \
        defined(MR_HAVE_CLOSEDIR)

    DirStream = opendir(DirName);
    if (DirStream == NULL) {
        Error = errno;
    } else {
        Error = 0;
    }
    IsWin32Error = MR_NO;

#else // !MR_WIN32 && !(MR_HAVE_OPENDIR etc.)
    DirStream = NULL;
    Error = ENOSYS;
    IsWin32Error = MR_NO;
#endif


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(ML_DIR_STREAM, DirStream, *DirStream_3 );
	*Error_4  = (MR_Box) Error;
	*IsWin32Error_5  = IsWin32Error;
}
}

void MR_CALL 
mercury__dir__check_for_symlink_loop_6_p_0(
  MR_String DirName_7,
  MR_Word SymLinkParent_8,
  MR_Word ParentIds0_9,
  MR_Word * MaybeLoop_10)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__dir__check_for_symlink_loop_6_p_0

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
    MR_Word IdResult_12;

    mercury__io__file_id_4_p_0(DirName_7, &IdResult_12);
    if (((MR_tag((MR_Word) IdResult_12)) == (MR_Integer) 1))
    {
      MR_Word Error_15 = ((MR_Word) ((MR_hl_field(1, IdResult_12, 0))));
      MR_Word Var_19;

      {
        Var_19 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_19, 0) = ((MR_Box) (DirName_7));
        MR_hl_field(0, Var_19, 1) = (MR_Box) ((MR_Unsigned) ((MR_Integer) 2));
        MR_hl_field(0, Var_19, 2) = ((MR_Box) (Error_15));
      }
      *MaybeLoop_10 = (MR_Word) (MR_mkword(1, (MR_Word) (Var_19)));
    }
    else
    {
      MR_Box Id_13 = ((MR_Box) ((MR_hl_field(0, IdResult_12, 0))));
      MR_Word TypeCtorInfo_21_21;

      succeeded = (SymLinkParent_8 == (MR_Integer) 1);
      if (succeeded)
      {
        TypeCtorInfo_21_21 = (MR_Word) (&mercury__io__io__type_ctor_info_file_id_0);
        succeeded = mercury__list__member_2_p_0(TypeCtorInfo_21_21, ((MR_Box) (Id_13)), ParentIds0_9);
      }
      if (succeeded)
        *MaybeLoop_10 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        MR_Word ParentIds_14;

        {
          ParentIds_14 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, ParentIds_14, 0) = ((MR_Box) (Id_13));
          MR_hl_field(1, ParentIds_14, 1) = ((MR_Box) (ParentIds0_9));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *MaybeLoop_10 = base;
          MR_hl_field(2, base, 0) = ((MR_Box) (ParentIds_14));
        }
      }
    }
  }
  else
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(2, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeLoop_10 = base;
      MR_hl_field(2, base, 0) = ((MR_Box) (ParentIds0_9));
    }
}

MR_String MR_CALL 
mercury__dir__make_dirname_ok_for_windows_1_f_0(
  MR_String Dir0_3)
{
  MR_bool succeeded;
  MR_String Dir_4;
  MR_Word DirChars_5;
  MR_Word Var_6;
  MR_Integer Var_8;

{
#define MR_PROC_LABEL mercury__dir__make_dirname_ok_for_windows_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str = Dir0_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_8  = Length;
}
  mercury__string__do_to_char_list_loop_4_p_0(Dir0_3, Var_8, (MR_Word) ((MR_Unsigned) 0U), &Var_6);
  DirChars_5 = mercury__dir__canonicalize_path_chars_1_f_0(Var_6);
  succeeded = mercury__dir__is_root_directory_1_p_0(DirChars_5);
  if (succeeded)
    Dir_4 = Dir0_3;
  else
  {
    MR_Word Var_7;
    MR_Word Chars1_10;
    MR_Char Sep_11;
    MR_Box conv0_Sep_11;

    succeeded = mercury__list__split_last_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), DirChars_5, &Chars1_10, &conv0_Sep_11);
    if (succeeded)
    {
      Sep_11 = ((MR_Char) (MR_Word) conv0_Sep_11);
      succeeded = MR_TRUE;
    }
    if (succeeded)
      succeeded = mercury__dir__is_directory_separator_1_p_0(Sep_11);
    if (succeeded)
      Var_7 = Chars1_10;
    else
      Var_7 = DirChars_5;
    mercury__string__from_char_list_2_p_0(Var_7, &Dir_4);
  }
  return Dir_4;
}

void MR_CALL 
mercury__dir__make_single_directory_4_p_0(
  MR_String DirName_5,
  MR_Word * Result_6)
{
  MR_Word Status_8;
  MR_Box Error_9;
  MR_Word IsWin32Error_10;

  mercury__dir__make_single_directory_2_6_p_0(DirName_5, &Status_8, &Error_9, &IsWin32Error_10);
  switch (Status_8) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 2:
    case (MR_Integer) 3:
    case (MR_Integer) 1:
      {
        MR_Word IOError_11;

        mercury__io__error_util__make_io_error_from_maybe_win32_error_6_p_0(Error_9, IsWin32Error_10, (MR_String) "cannot create directory: ", &IOError_11);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(1, base, 0) = ((MR_Box) (IOError_11));
        }
      }
      break;
    case (MR_Integer) 0:
      *Result_6 = (MR_Word) ((MR_Unsigned) 0U);
      break;
  }
}

void MR_CALL 
mercury__dir__make_directory_4_p_0(
  MR_String PathName_5,
  MR_Word * Result_6)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__dir__make_directory_4_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
  {
    MR_Box SystemError_23;
    MR_Word CheckAccess_24;
    MR_Word MaybeIOError_25;

{
#define MR_PROC_LABEL mercury__dir__make_directory_4_p_0

	MR_Integer Error;
	MR_Word CheckAccess;

		{

    Error = ENOSYS;
    CheckAccess = MR_NO;


		;}
#undef MR_PROC_LABEL
	SystemError_23  = (MR_Box) Error;
	CheckAccess_24  = CheckAccess;
}
{
#define MR_PROC_LABEL mercury__dir__make_directory_4_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer) SystemError_23 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      MaybeIOError_25 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Var_30;

      mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(SystemError_23, (MR_String) "cannot make directory: ", &Var_30);
      {
        MaybeIOError_25 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, MaybeIOError_25, 0) = ((MR_Box) (Var_30));
      }
    }
    if ((MaybeIOError_25 == (MR_Word) ((MR_Unsigned) 0U)))
      switch (CheckAccess_24) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *Result_6 = (MR_Word) ((MR_Unsigned) 0U);
          break;
        case (MR_Integer) 1:
          mercury__io__file__check_file_accessibility_5_p_0(PathName_5, (MR_Word) (MR_mkword(1, &mercury__dir_scalar_common_1[8])), Result_6);
          break;
      }
    else
    {
      MR_Word IOError_26 = ((MR_Word) ((MR_hl_field(1, MaybeIOError_25, 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (IOError_26));
      }
    }
  }
  else
  {
    MR_String DirName_8;

    DirName_8 = mercury__dir__dirname_1_f_0(PathName_5);
    succeeded = (strcmp(PathName_5, DirName_8) == 0);
    if (succeeded)
    {
      MR_Word MakeDirStatus_32;
      MR_Box Error_33;
      MR_Word IsWin32Error_34;

      mercury__dir__make_single_directory_2_6_p_0(PathName_5, &MakeDirStatus_32, &Error_33, &IsWin32Error_34);
      switch (MakeDirStatus_32) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 2:
          mercury__io__file__check_file_accessibility_5_p_0(PathName_5, (MR_Word) (MR_mkword(1, &mercury__dir_scalar_common_1[8])), Result_6);
          break;
        case (MR_Integer) 3:
          {
            MR_Word IOError_43;

            mercury__io__error_util__make_io_error_from_maybe_win32_error_6_p_0(Error_33, IsWin32Error_34, (MR_String) "cannot create directory: ", &IOError_43);
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *Result_6 = base;
              MR_hl_field(1, base, 0) = ((MR_Box) (IOError_43));
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeResult_35;
            MR_Word Var_40;

            mercury__io__file__file_type_5_p_0((MR_Integer) 1, PathName_5, &TypeResult_35);
            succeeded = ((MR_tag((MR_Word) TypeResult_35)) == (MR_Integer) 0);
            if (succeeded)
            {
              Var_40 = ((MR_Word) ((MR_hl_field(0, TypeResult_35, 0))));
              succeeded = (Var_40 == (MR_Integer) 1);
            }
            if (succeeded)
              mercury__io__file__check_file_accessibility_5_p_0(PathName_5, (MR_Word) (MR_mkword(1, &mercury__dir_scalar_common_1[8])), Result_6);
            else
            {
              MR_Word IOError_36;

              mercury__io__error_util__make_io_error_from_maybe_win32_error_6_p_0(Error_33, IsWin32Error_34, (MR_String) "cannot create directory: ", &IOError_36);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *Result_6 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (IOError_36));
              }
            }
          }
          break;
        case (MR_Integer) 0:
          *Result_6 = (MR_Word) ((MR_Unsigned) 0U);
          break;
      }
    }
    else
    {
      succeeded = (strcmp(DirName_8, (MR_String) ".") == 0);
      if (succeeded)
      {
        MR_Word MakeDirStatus_46;
        MR_Box Error_47;
        MR_Word IsWin32Error_48;

        mercury__dir__make_single_directory_2_6_p_0(PathName_5, &MakeDirStatus_46, &Error_47, &IsWin32Error_48);
        switch (MakeDirStatus_46) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 2:
            mercury__io__file__check_file_accessibility_5_p_0(PathName_5, (MR_Word) (MR_mkword(1, &mercury__dir_scalar_common_1[8])), Result_6);
            break;
          case (MR_Integer) 3:
            {
              MR_Word IOError_57;

              mercury__io__error_util__make_io_error_from_maybe_win32_error_6_p_0(Error_47, IsWin32Error_48, (MR_String) "cannot create directory: ", &IOError_57);
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *Result_6 = base;
                MR_hl_field(1, base, 0) = ((MR_Box) (IOError_57));
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word TypeResult_49;
              MR_Word Var_54;

              mercury__io__file__file_type_5_p_0((MR_Integer) 1, PathName_5, &TypeResult_49);
              succeeded = ((MR_tag((MR_Word) TypeResult_49)) == (MR_Integer) 0);
              if (succeeded)
              {
                Var_54 = ((MR_Word) ((MR_hl_field(0, TypeResult_49, 0))));
                succeeded = (Var_54 == (MR_Integer) 1);
              }
              if (succeeded)
                mercury__io__file__check_file_accessibility_5_p_0(PathName_5, (MR_Word) (MR_mkword(1, &mercury__dir_scalar_common_1[8])), Result_6);
              else
              {
                MR_Word IOError_50;

                mercury__io__error_util__make_io_error_from_maybe_win32_error_6_p_0(Error_47, IsWin32Error_48, (MR_String) "cannot create directory: ", &IOError_50);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *Result_6 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (IOError_50));
                }
              }
            }
            break;
          case (MR_Integer) 0:
            *Result_6 = (MR_Word) ((MR_Unsigned) 0U);
            break;
        }
      }
      else
      {
        MR_Word ParentAccessResult_9;

        mercury__io__file__check_file_accessibility_5_p_0(DirName_8, (MR_Word) ((MR_Unsigned) 0U), &ParentAccessResult_9);
        if ((ParentAccessResult_9 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MR_Word MakeDirStatus_74;
          MR_Box Error_75;
          MR_Word IsWin32Error_76;

          mercury__dir__make_single_directory_2_6_p_0(PathName_5, &MakeDirStatus_74, &Error_75, &IsWin32Error_76);
          switch (MakeDirStatus_74) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 2:
              mercury__io__file__check_file_accessibility_5_p_0(PathName_5, (MR_Word) (MR_mkword(1, &mercury__dir_scalar_common_1[8])), Result_6);
              break;
            case (MR_Integer) 3:
              {
                MR_Word IOError_85;

                mercury__io__error_util__make_io_error_from_maybe_win32_error_6_p_0(Error_75, IsWin32Error_76, (MR_String) "cannot create directory: ", &IOError_85);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *Result_6 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) (IOError_85));
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word TypeResult_77;
                MR_Word Var_82;

                mercury__io__file__file_type_5_p_0((MR_Integer) 1, PathName_5, &TypeResult_77);
                succeeded = ((MR_tag((MR_Word) TypeResult_77)) == (MR_Integer) 0);
                if (succeeded)
                {
                  Var_82 = ((MR_Word) ((MR_hl_field(0, TypeResult_77, 0))));
                  succeeded = (Var_82 == (MR_Integer) 1);
                }
                if (succeeded)
                  mercury__io__file__check_file_accessibility_5_p_0(PathName_5, (MR_Word) (MR_mkword(1, &mercury__dir_scalar_common_1[8])), Result_6);
                else
                {
                  MR_Word IOError_78;

                  mercury__io__error_util__make_io_error_from_maybe_win32_error_6_p_0(Error_75, IsWin32Error_76, (MR_String) "cannot create directory: ", &IOError_78);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *Result_6 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (IOError_78));
                  }
                }
              }
              break;
            case (MR_Integer) 0:
              *Result_6 = (MR_Word) ((MR_Unsigned) 0U);
              break;
          }
        }
        else
        {
          MR_Word ParentResult_11;

          mercury__dir__make_directory_4_p_0(DirName_8, &ParentResult_11);
          if ((ParentResult_11 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word MakeDirStatus_60;
            MR_Box Error_61;
            MR_Word IsWin32Error_62;

            mercury__dir__make_single_directory_2_6_p_0(PathName_5, &MakeDirStatus_60, &Error_61, &IsWin32Error_62);
            switch (MakeDirStatus_60) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 2:
                mercury__io__file__check_file_accessibility_5_p_0(PathName_5, (MR_Word) (MR_mkword(1, &mercury__dir_scalar_common_1[8])), Result_6);
                break;
              case (MR_Integer) 3:
                {
                  MR_Word IOError_71;

                  mercury__io__error_util__make_io_error_from_maybe_win32_error_6_p_0(Error_61, IsWin32Error_62, (MR_String) "cannot create directory: ", &IOError_71);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *Result_6 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) (IOError_71));
                  }
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word TypeResult_63;
                  MR_Word Var_68;

                  mercury__io__file__file_type_5_p_0((MR_Integer) 1, PathName_5, &TypeResult_63);
                  succeeded = ((MR_tag((MR_Word) TypeResult_63)) == (MR_Integer) 0);
                  if (succeeded)
                  {
                    Var_68 = ((MR_Word) ((MR_hl_field(0, TypeResult_63, 0))));
                    succeeded = (Var_68 == (MR_Integer) 1);
                  }
                  if (succeeded)
                    mercury__io__file__check_file_accessibility_5_p_0(PathName_5, (MR_Word) (MR_mkword(1, &mercury__dir_scalar_common_1[8])), Result_6);
                  else
                  {
                    MR_Word IOError_64;

                    mercury__io__error_util__make_io_error_from_maybe_win32_error_6_p_0(Error_61, IsWin32Error_62, (MR_String) "cannot create directory: ", &IOError_64);
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *Result_6 = base;
                      MR_hl_field(1, base, 0) = ((MR_Box) (IOError_64));
                    }
                  }
                }
                break;
              case (MR_Integer) 0:
                *Result_6 = (MR_Word) ((MR_Unsigned) 0U);
                break;
            }
          }
          else
            *Result_6 = ParentResult_11;
        }
      }
    }
  }
}

static void MR_CALL 
mercury__dir__make_single_directory_2_6_p_0(
  MR_String DirName_1,
  MR_Word * Status_2,
  MR_Box * Error_3,
  MR_Word * IsWin32Error_4)
{
{
#define MR_PROC_LABEL mercury__dir__make_single_directory_2_6_p_0

	MR_String DirName;
	MR_Word Status;
	MR_Integer Error;
	MR_Word IsWin32Error;

	DirName = DirName_1 ;
		{

#if defined(MR_WIN32)
    if (CreateDirectoryW(MR_utf8_to_wide(DirName), NULL)) {
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
    IsWin32Error = MR_YES;
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
    IsWin32Error = MR_NO;
#else // !MR_WIN32 && !MR_HAVE_MKDIR
    Status = ML_MAKE_SINGLE_DIRECTORY_ERROR;
    Error = ENOSYS;
    IsWin32Error = MR_NO;
#endif


		;}
#undef MR_PROC_LABEL
	*Status_2  = Status;
	*Error_3  = (MR_Box) Error;
	*IsWin32Error_4  = IsWin32Error;
}
}

void MR_CALL 
mercury__dir__current_directory_3_p_0(
  MR_Word * Result_4)
{
  MR_bool succeeded;
  MR_String CurDir_6;
  MR_Box Error_7;
  MR_Word MaybeIOError_8;

  mercury__dir__current_directory_2_4_p_0(&CurDir_6, &Error_7);
{
#define MR_PROC_LABEL mercury__dir__current_directory_3_p_0

	MR_Integer Error;
	MR_bool SUCCESS_INDICATOR;

	Error = (MR_Integer) Error_7 ;
		{

    // This works for errno and Win32 error values (ERROR_SUCCESS == 0).
    SUCCESS_INDICATOR = (Error == 0) ? MR_TRUE : MR_FALSE;


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    MaybeIOError_8 = (MR_Word) ((MR_Unsigned) 0U);
  else
  {
    MR_Word Var_14;

    mercury__io__error_util__make_io_error_from_system_error_impl_5_p_0(Error_7, (MR_String) "dir.current_directory failed: ", &Var_14);
    {
      MaybeIOError_8 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(1, MaybeIOError_8, 0) = ((MR_Box) (Var_14));
    }
  }
  if ((MaybeIOError_8 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Result_4 = base;
      MR_hl_field(0, base, 0) = ((MR_Box) (CurDir_6));
    }
  else
  {
    MR_Word IOError_9 = ((MR_Word) ((MR_hl_field(1, MaybeIOError_8, 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_4 = base;
      MR_hl_field(1, base, 0) = ((MR_Box) (IOError_9));
    }
  }
}

static void MR_CALL 
mercury__dir__current_directory_2_4_p_0(
  MR_String * CurDir_1,
  MR_Box * Error_2)
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
        CurDir = MR_wide_to_utf8(wbuf, MR_ALLOC_ID);
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
	*Error_2  = (MR_Box) Error;
}
}

MR_String MR_CALL 
mercury__dir__relative_path_name_from_components_1_f_0(
  MR_Word Components_3)
{
  MR_bool succeeded;
  MR_String PathName_4;
  MR_String Sep_5;
  MR_Char Var_6;

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
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    Var_6 = (MR_Char) 92;
  else
    Var_6 = (MR_Char) 47;
  mercury__string__char_to_string_2_p_0(Var_6, &Sep_5);
  PathName_4 = mercury__string__join_list_2_f_0(Sep_5, Components_3);
  return PathName_4;
}

MR_String MR_CALL 
mercury__dir__make_path_name_2_f_0(
  MR_String DirName_4,
  MR_String FileName_5)
{
  MR_String HeadVar__3_3;

  HeadVar__3_3 = mercury__dir__f_slash_2_f_0(DirName_4, FileName_5);
  return HeadVar__3_3;
}

MR_String MR_CALL 
mercury__dir__f_slash_2_f_0(
  MR_String DirName0_4,
  MR_String FileName0_5)
{
  MR_bool succeeded;
  MR_String PathName_6;
  MR_String DirName_7;
  MR_String FileName_8;

  succeeded = mercury__dir__is_path_string_canonical_loop_3_p_0(DirName0_4, (MR_Integer) 0, (MR_Integer) 0);
  if (succeeded)
    DirName_7 = DirName0_4;
  else
  {
    MR_Word Var_14;
    MR_Word Var_15;
    MR_Integer Var_31;

{
#define MR_PROC_LABEL mercury__dir__f_slash_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str = DirName0_4 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_31  = Length;
}
    mercury__string__do_to_char_list_loop_4_p_0(DirName0_4, Var_31, (MR_Word) ((MR_Unsigned) 0U), &Var_15);
    Var_14 = mercury__dir__canonicalize_path_chars_1_f_0(Var_15);
    mercury__string__from_char_list_2_p_0(Var_14, &DirName_7);
  }
  succeeded = mercury__dir__is_path_string_canonical_loop_3_p_0(FileName0_5, (MR_Integer) 0, (MR_Integer) 0);
  if (succeeded)
    FileName_8 = FileName0_5;
  else
  {
    MR_Word Var_16;
    MR_Word Var_17;
    MR_Integer Var_35;

{
#define MR_PROC_LABEL mercury__dir__f_slash_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str = FileName0_5 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_35  = Length;
}
    mercury__string__do_to_char_list_loop_4_p_0(FileName0_5, Var_35, (MR_Word) ((MR_Unsigned) 0U), &Var_17);
    Var_16 = mercury__dir__canonicalize_path_chars_1_f_0(Var_17);
    mercury__string__from_char_list_2_p_0(Var_16, &FileName_8);
  }
  succeeded = mercury__dir__path_name_is_absolute_1_p_0(FileName_8);
  if (succeeded)
    mercury__require__unexpected_2_p_0((MR_String) "function \140dir./\'/2", (MR_String) "second argument is absolute");
  else
  {
    MR_Integer ThirdCharIndex_37;
    MR_Integer SecondCharIndex_40;
    MR_Char FirstChar_41;
    MR_Char SecondChar_42;
    MR_Integer Var_43;
    MR_Char Var_44;
    MR_Integer Var_45;
    MR_Integer Var_46;
    MR_Char ThirdChar_39;
    MR_Integer Var_38;
    MR_Integer Var_47;

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
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      Var_44 = (MR_Char) 92;
    else
      Var_44 = (MR_Char) 47;
    succeeded = (Var_44 == (MR_Char) 92);
    if (succeeded)
    {
      Var_43 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__dir__f_slash_2_f_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = FileName_8 ;
	Index = Var_43 ;
		{

    Ch = (unsigned char) Str[Index];
    ReplacedCodeUnit = -1;
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        if (Ch < 0) {
            Ch = 0xfffd;
            ReplacedCodeUnit = (unsigned char) Str[Index];
            NextIndex = Index + 1;
        }
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	SecondCharIndex_40  = NextIndex;
	FirstChar_41  = Ch;
	Var_45  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
      {
{
#define MR_PROC_LABEL mercury__dir__f_slash_2_f_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = FileName_8 ;
	Index = SecondCharIndex_40 ;
		{

    Ch = (unsigned char) Str[Index];
    ReplacedCodeUnit = -1;
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        if (Ch < 0) {
            Ch = 0xfffd;
            ReplacedCodeUnit = (unsigned char) Str[Index];
            NextIndex = Index + 1;
        }
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	ThirdCharIndex_37  = NextIndex;
	SecondChar_42  = Ch;
	Var_46  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
        if (succeeded)
        {
          succeeded = (SecondChar_42 == (MR_Char) 58);
          if (succeeded)
          {
            succeeded = mercury__char__is_alpha_1_p_0(FirstChar_41);
            if (succeeded)
            {
{
#define MR_PROC_LABEL mercury__dir__f_slash_2_f_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = FileName_8 ;
	Index = ThirdCharIndex_37 ;
		{

    Ch = (unsigned char) Str[Index];
    ReplacedCodeUnit = -1;
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        if (Ch < 0) {
            Ch = 0xfffd;
            ReplacedCodeUnit = (unsigned char) Str[Index];
            NextIndex = Index + 1;
        }
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	Var_38  = NextIndex;
	ThirdChar_39  = Ch;
	Var_47  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
              if (succeeded)
              {
                succeeded = mercury__dir__is_directory_separator_1_p_0(ThirdChar_39);
                if (succeeded)
                  succeeded = MR_FALSE;
                else
                  succeeded = MR_TRUE;
              }
              else
                succeeded = MR_TRUE;
            }
          }
        }
      }
    }
    if (succeeded)
      mercury__require__unexpected_2_p_0((MR_String) "function \140dir./\'/2", (MR_String) "second argument is a drive-letter relative path");
    else
    {
      {
        MR_Integer ThirdCharIndex_9;
        MR_Integer SecondCharIndex_48;
        MR_Char FirstChar_49;
        MR_Char SecondChar_50;
        MR_Integer Var_51;
        MR_Char Var_52;
        MR_Integer Var_53;
        MR_Integer Var_54;
        MR_Integer Var_10;
        MR_Char Var_11;
        MR_Integer Var_55;

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
succeeded  = SUCCESS_INDICATOR;
}
        if (succeeded)
          Var_52 = (MR_Char) 92;
        else
          Var_52 = (MR_Char) 47;
        succeeded = (Var_52 == (MR_Char) 92);
        if (succeeded)
        {
          Var_51 = (MR_Integer) 0;
{
#define MR_PROC_LABEL mercury__dir__f_slash_2_f_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = DirName_7 ;
	Index = Var_51 ;
		{

    Ch = (unsigned char) Str[Index];
    ReplacedCodeUnit = -1;
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        if (Ch < 0) {
            Ch = 0xfffd;
            ReplacedCodeUnit = (unsigned char) Str[Index];
            NextIndex = Index + 1;
        }
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	SecondCharIndex_48  = NextIndex;
	FirstChar_49  = Ch;
	Var_53  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
          if (succeeded)
          {
{
#define MR_PROC_LABEL mercury__dir__f_slash_2_f_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = DirName_7 ;
	Index = SecondCharIndex_48 ;
		{

    Ch = (unsigned char) Str[Index];
    ReplacedCodeUnit = -1;
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        if (Ch < 0) {
            Ch = 0xfffd;
            ReplacedCodeUnit = (unsigned char) Str[Index];
            NextIndex = Index + 1;
        }
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	ThirdCharIndex_9  = NextIndex;
	SecondChar_50  = Ch;
	Var_54  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
            if (succeeded)
            {
              succeeded = (SecondChar_50 == (MR_Char) 58);
              if (succeeded)
              {
                succeeded = mercury__char__is_alpha_1_p_0(FirstChar_49);
                if (succeeded)
                {
{
#define MR_PROC_LABEL mercury__dir__f_slash_2_f_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = DirName_7 ;
	Index = ThirdCharIndex_9 ;
		{

    Ch = (unsigned char) Str[Index];
    ReplacedCodeUnit = -1;
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        if (Ch < 0) {
            Ch = 0xfffd;
            ReplacedCodeUnit = (unsigned char) Str[Index];
            NextIndex = Index + 1;
        }
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	Var_10  = NextIndex;
	Var_11  = Ch;
	Var_55  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
                  succeeded = !(succeeded);
                }
              }
            }
          }
        }
      }
      if (!(succeeded))
      {
        MR_Integer DirNameLength_12;
        MR_Char Char_56;
        MR_Integer Var_13;
        MR_Integer Var_57;

{
#define MR_PROC_LABEL mercury__dir__f_slash_2_f_0

	MR_String Str;
	MR_Integer Length;

	Str = DirName_7 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	DirNameLength_12  = Length;
}
        succeeded = (DirNameLength_12 > (MR_Integer) 0);
        if (succeeded)
        {
{
#define MR_PROC_LABEL mercury__dir__f_slash_2_f_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer PrevIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = DirName_7 ;
	Index = DirNameLength_12 ;
		{

    ReplacedCodeUnit = -1;
    if (Index <= 0) {
        PrevIndex = Index;
        Ch = 0;
        SUCCESS_INDICATOR = MR_FALSE;
    } else {
        PrevIndex = Index - 1;
        Ch = (unsigned char) Str[PrevIndex];
        if (! MR_is_ascii(Ch)) {
            Ch = MR_utf8_prev_get(Str, &PrevIndex);
            // XXX MR_utf8_prev_get currently just scans backwards to find a
            // lead byte, so we need a separate check to ensure no bytes are
            // unaccounted for.
            if (Ch < 0 || PrevIndex + MR_utf8_width(Ch) != Index) {
                Ch = 0xfffd;
                ReplacedCodeUnit = (unsigned char) Str[Index - 1];
                PrevIndex = Index - 1;
            }
        }
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	Var_13  = PrevIndex;
	Char_56  = Ch;
	Var_57  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
          if (succeeded)
            succeeded = mercury__dir__is_directory_separator_1_p_0(Char_56);
        }
      }
      if (succeeded)
        mercury__string__append_3_p_2(DirName_7, FileName_8, &PathName_6);
      else
      {
        MR_Word Var_23;
        MR_Word Var_24;
        MR_String Var_25;
        MR_Char Var_26;
        MR_Word Var_27;

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
succeeded  = SUCCESS_INDICATOR;
}
        if (succeeded)
          Var_26 = (MR_Char) 92;
        else
          Var_26 = (MR_Char) 47;
        mercury__string__char_to_string_2_p_0(Var_26, &Var_25);
        {
          Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_27, 0) = ((MR_Box) (FileName_8));
          MR_hl_field(1, Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        {
          Var_24 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_24, 0) = ((MR_Box) (Var_25));
          MR_hl_field(1, Var_24, 1) = ((MR_Box) (Var_27));
        }
        {
          Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, Var_23, 0) = ((MR_Box) (DirName_7));
          MR_hl_field(1, Var_23, 1) = ((MR_Box) (Var_24));
        }
        PathName_6 = mercury__string__append_list_1_f_0(Var_23);
      }
    }
  }
  return PathName_6;
}

static MR_bool MR_CALL 
mercury__dir__is_path_string_canonical_loop_3_p_0(
  MR_String Path_4,
  MR_Integer CurIndex_5,
  MR_Word PrevChar_6)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer NextIndex_7;
    MR_Char Char_8;
    MR_Integer Var_12;

    // setup for model_semi tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__dir__is_path_string_canonical_loop_3_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = Path_4 ;
	Index = CurIndex_5 ;
		{

    Ch = (unsigned char) Str[Index];
    ReplacedCodeUnit = -1;
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        if (Ch < 0) {
            Ch = 0xfffd;
            ReplacedCodeUnit = (unsigned char) Str[Index];
            NextIndex = Index + 1;
        }
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	NextIndex_7  = NextIndex;
	Char_8  = Ch;
	Var_12  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      MR_Char CanonChar_9;
      MR_Char Var_13;

{
#define MR_PROC_LABEL mercury__dir__is_path_string_canonical_loop_3_p_0

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
        Var_13 = (MR_Char) 92;
      else
        Var_13 = (MR_Char) 47;
      succeeded = (Char_8 == Var_13);
      if (succeeded)
      {
        CanonChar_9 = Char_8;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Char Var_14;

{
#define MR_PROC_LABEL mercury__dir__is_path_string_canonical_loop_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_CYGWIN)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
        if (succeeded)
          Var_14 = (MR_Char) 92;
        else
          Var_14 = (MR_Char) 47;
        succeeded = (Char_8 == Var_14);
        if (succeeded)
        {
{
#define MR_PROC_LABEL mercury__dir__is_path_string_canonical_loop_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_CYGWIN)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
          if (succeeded)
            CanonChar_9 = Char_8;
          else
          {
{
#define MR_PROC_LABEL mercury__dir__is_path_string_canonical_loop_3_p_0

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
              CanonChar_9 = (MR_Char) 92;
            else
              CanonChar_9 = (MR_Char) 47;
          }
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
      {
        MR_Word Var_10;
        MR_Integer next_value_of_CurIndex_5;
        MR_Word next_value_of_PrevChar_6;

        succeeded = (PrevChar_6 == (MR_Integer) 0);
        if (succeeded)
        {
          succeeded = (Char_8 == CanonChar_9);
          if (succeeded)
          {
            Var_10 = (MR_Integer) 1;
            // direct tailcall eliminated
            ;
            next_value_of_CurIndex_5 = NextIndex_7;
            next_value_of_PrevChar_6 = Var_10;
            CurIndex_5 = next_value_of_CurIndex_5;
            PrevChar_6 = next_value_of_PrevChar_6;
            continue;
          }
        }
      }
      else
      {
        MR_Integer next_value_of_CurIndex_5 = NextIndex_7;

        // direct tailcall eliminated
        ;
        CurIndex_5 = next_value_of_CurIndex_5;
        PrevChar_6 = (MR_Integer) 0;
        continue;
      }
    }
    else
      succeeded = MR_TRUE;
    return succeeded;
    break;
  }
}

MR_bool MR_CALL 
mercury__dir__path_name_is_root_directory_1_p_0(
  MR_String PathName_2)
{
  MR_bool succeeded;
  MR_Word Var_3;
  MR_Word Var_4;
  MR_Integer Var_5;

{
#define MR_PROC_LABEL mercury__dir__path_name_is_root_directory_1_p_0

	MR_String Str;
	MR_Integer Length;

	Str = PathName_2 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_5  = Length;
}
  mercury__string__do_to_char_list_loop_4_p_0(PathName_2, Var_5, (MR_Word) ((MR_Unsigned) 0U), &Var_4);
  Var_3 = mercury__dir__canonicalize_path_chars_1_f_0(Var_4);
  succeeded = mercury__dir__is_root_directory_1_p_0(Var_3);
  return succeeded;
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
  MR_bool succeeded;
  MR_String DirName_4;
  MR_Word FileNameChars_5;
  MR_Word Var_9;
  MR_Integer Var_18;

{
#define MR_PROC_LABEL mercury__dir__dirname_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str = FileName_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_18  = Length;
}
  mercury__string__do_to_char_list_loop_4_p_0(FileName_3, Var_18, (MR_Word) ((MR_Unsigned) 0U), &Var_9);
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
    MR_Char Var_20;

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
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      Var_20 = (MR_Char) 92;
    else
      Var_20 = (MR_Char) 47;
    succeeded = (Var_20 == (MR_Char) 92);
    if (succeeded)
    {
      succeeded = (FileNameChars_5 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Drive_6 = ((MR_Char) (MR_Word) (MR_hl_field(1, FileNameChars_5, 0)));
        Var_10 = ((MR_Word) ((MR_hl_field(1, FileNameChars_5, 1))));
        succeeded = (Var_10 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_11 = ((MR_Char) (MR_Word) (MR_hl_field(1, Var_10, 0)));
          Var_12 = ((MR_Word) ((MR_hl_field(1, Var_10, 1))));
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
        MR_Integer Var_24;
        MR_Word Chars1_21;
        MR_Char Sep_22;
        MR_Box conv0_Sep_22;

        succeeded = mercury__list__split_last_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), FileNameChars_5, &Chars1_21, &conv0_Sep_22);
        if (succeeded)
        {
          Sep_22 = ((MR_Char) (MR_Word) conv0_Sep_22);
          succeeded = MR_TRUE;
        }
        if (succeeded)
          succeeded = mercury__dir__is_directory_separator_1_p_0(Sep_22);
        if (succeeded)
          Var_13 = Chars1_21;
        else
          Var_13 = FileNameChars_5;
{
#define MR_PROC_LABEL mercury__dir__dirname_1_f_0

	MR_String Str;
	MR_Integer Length;

	Str = (MR_String) ".." ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_24  = Length;
}
        mercury__string__do_to_char_list_loop_4_p_0((MR_String) "..", Var_24, (MR_Word) ((MR_Unsigned) 0U), &Var_16);
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

MR_String MR_CALL 
mercury__dir__det_basename_1_f_0(
  MR_String FileName_3)
{
  MR_bool succeeded;
  MR_String HeadVar__2_2;
  MR_String BaseName_4;

  succeeded = mercury__dir__basename_2_p_0(FileName_3, &BaseName_4);
  if (succeeded)
    HeadVar__2_2 = BaseName_4;
  else
    mercury__require__unexpected_2_p_0((MR_String) "function \140dir.det_basename\'/1", (MR_String) "given directory is root directory");
  return HeadVar__2_2;
}

MR_bool MR_CALL 
mercury__dir__basename_1_f_0(
  MR_String FileName_3,
  MR_String * BaseName_4)
{
  MR_bool succeeded;

  succeeded = mercury__dir__basename_2_p_0(FileName_3, BaseName_4);
  return succeeded;
}

MR_bool MR_CALL 
mercury__dir__basename_2_p_0(
  MR_String FileName_3,
  MR_String * BaseName_4)
{
  MR_bool succeeded;
  MR_Word FileNameChars_5;
  MR_Word FileNameWithoutSlash_7;
  MR_Word Var_10;
  MR_Integer Var_22;
  MR_Char Drive_6;
  MR_Word Var_11;
  MR_Char Var_12;
  MR_Word Var_13;
  MR_Char Var_24;
  MR_Word Chars1_25;
  MR_Word TypeCtorInfo_6_27;
  MR_Char Sep_26;
  MR_Box conv0_Sep_26;
  MR_Word TypeInfo_20_20;
  MR_String Var_14;
  MR_Word Var_17;
  MR_Integer Var_28;
  MR_Word Var_29;
  MR_Word TypeInfo_21_21;
  MR_String Var_15;
  MR_Word Var_19;
  MR_Integer Var_30;
  MR_Word Var_31;
  MR_String BaseName0_9;
  MR_String Var_8;

{
#define MR_PROC_LABEL mercury__dir__basename_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str = FileName_3 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_22  = Length;
}
  mercury__string__do_to_char_list_loop_4_p_0(FileName_3, Var_22, (MR_Word) ((MR_Unsigned) 0U), &Var_10);
  FileNameChars_5 = mercury__dir__canonicalize_path_chars_1_f_0(Var_10);
  succeeded = mercury__dir__is_root_directory_1_p_0(FileNameChars_5);
  succeeded = !(succeeded);
  if (succeeded)
  {
{
#define MR_PROC_LABEL mercury__dir__basename_2_p_0

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
      Var_24 = (MR_Char) 92;
    else
      Var_24 = (MR_Char) 47;
    succeeded = (Var_24 == (MR_Char) 92);
    if (succeeded)
    {
      succeeded = (FileNameChars_5 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Drive_6 = ((MR_Char) (MR_Word) (MR_hl_field(1, FileNameChars_5, 0)));
        Var_11 = ((MR_Word) ((MR_hl_field(1, FileNameChars_5, 1))));
        succeeded = (Var_11 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_12 = ((MR_Char) (MR_Word) (MR_hl_field(1, Var_11, 0)));
          Var_13 = ((MR_Word) ((MR_hl_field(1, Var_11, 1))));
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
      TypeCtorInfo_6_27 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0);
      succeeded = mercury__list__split_last_3_p_0(TypeCtorInfo_6_27, FileNameChars_5, &Chars1_25, &conv0_Sep_26);
      if (succeeded)
      {
        Sep_26 = ((MR_Char) (MR_Word) conv0_Sep_26);
        succeeded = MR_TRUE;
      }
      if (succeeded)
        succeeded = mercury__dir__is_directory_separator_1_p_0(Sep_26);
      if (succeeded)
        FileNameWithoutSlash_7 = Chars1_25;
      else
        FileNameWithoutSlash_7 = FileNameChars_5;
      Var_14 = (MR_String) ".";
{
#define MR_PROC_LABEL mercury__dir__basename_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Var_14 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_28  = Length;
}
      Var_29 = (MR_Word) ((MR_Unsigned) 0U);
      mercury__string__do_to_char_list_loop_4_p_0(Var_14, Var_28, Var_29, &Var_17);
      TypeInfo_20_20 = (MR_Word) (&mercury__dir_scalar_common_1[0]);
      succeeded = mercury__builtin__unify_2_p_0(TypeInfo_20_20, ((MR_Box) (FileNameWithoutSlash_7)), ((MR_Box) (Var_17)));
      succeeded = !(succeeded);
      if (succeeded)
      {
        Var_15 = (MR_String) "..";
{
#define MR_PROC_LABEL mercury__dir__basename_2_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Var_15 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_30  = Length;
}
        Var_31 = (MR_Word) ((MR_Unsigned) 0U);
        mercury__string__do_to_char_list_loop_4_p_0(Var_15, Var_30, Var_31, &Var_19);
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

MR_bool MR_CALL 
mercury__dir__split_name_3_p_0(
  MR_String FileName_4,
  MR_String * DirName_5,
  MR_String * BaseName_6)
{
  MR_bool succeeded;
  MR_Word FileNameChars_7;
  MR_Word Var_8;
  MR_Integer Var_9;

{
#define MR_PROC_LABEL mercury__dir__split_name_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str = FileName_4 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_9  = Length;
}
  mercury__string__do_to_char_list_loop_4_p_0(FileName_4, Var_9, (MR_Word) ((MR_Unsigned) 0U), &Var_8);
  FileNameChars_7 = mercury__dir__canonicalize_path_chars_1_f_0(Var_8);
  succeeded = mercury__dir__is_root_directory_1_p_0(FileNameChars_7);
  succeeded = !(succeeded);
  if (succeeded)
    succeeded = mercury__dir__split_name_2_3_p_0(FileNameChars_7, DirName_5, BaseName_6);
  return succeeded;
}

MR_bool MR_CALL 
mercury__dir__is_root_directory_1_p_0(
  MR_Word FileName_2)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__dir__is_root_directory_1_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_FALSE;


		;}
#undef MR_PROC_LABEL
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
      MR_Char Var_20;

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
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        Var_20 = (MR_Char) 92;
      else
        Var_20 = (MR_Char) 47;
      succeeded = (Var_20 == (MR_Char) 92);
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
succeeded  = SUCCESS_INDICATOR;
}
    }
    if (succeeded)
    {
      MR_Word TypeInfo_8_8;
      MR_Word Var_7;
      MR_Word STATE_VARIABLE_FileName_1_21;
      MR_Char Letter_23;
      MR_Char Sep_24;
      MR_Word Var_26;
      MR_Char Var_27;
      MR_Word Var_28;

      succeeded = (FileName_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Letter_23 = ((MR_Char) (MR_Word) (MR_hl_field(1, FileName_2, 0)));
        Var_26 = ((MR_Word) ((MR_hl_field(1, FileName_2, 1))));
        succeeded = (Var_26 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_27 = ((MR_Char) (MR_Word) (MR_hl_field(1, Var_26, 0)));
          Var_28 = ((MR_Word) ((MR_hl_field(1, Var_26, 1))));
          succeeded = (Var_27 == (MR_Char) 58);
          if (succeeded)
          {
            succeeded = (Var_28 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Sep_24 = ((MR_Char) (MR_Word) (MR_hl_field(1, Var_28, 0)));
              STATE_VARIABLE_FileName_1_21 = ((MR_Word) ((MR_hl_field(1, Var_28, 1))));
              succeeded = mercury__char__is_alpha_1_p_0(Letter_23);
              if (succeeded)
                succeeded = mercury__dir__is_directory_separator_1_p_0(Sep_24);
            }
          }
        }
      }
      if (succeeded)
      {
        Var_7 = STATE_VARIABLE_FileName_1_21;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Word STATE_VARIABLE_FileName_2_22;
        MR_Char Sep_29;
        MR_Word Server_30;
        MR_Word STATE_VARIABLE_FileName_0_36;
        MR_Word Var_37;
        MR_Word STATE_VARIABLE_FileName_1_39;
        MR_Char Var_44;

        succeeded = (FileName_2 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Sep_29 = ((MR_Char) (MR_Word) (MR_hl_field(1, FileName_2, 0)));
          Var_37 = ((MR_Word) ((MR_hl_field(1, FileName_2, 1))));
          succeeded = (Var_37 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_44 = ((MR_Char) (MR_Word) (MR_hl_field(1, Var_37, 0)));
            STATE_VARIABLE_FileName_0_36 = ((MR_Word) ((MR_hl_field(1, Var_37, 1))));
            succeeded = (Sep_29 == Var_44);
            if (succeeded)
            {
              succeeded = mercury__dir__is_directory_separator_1_p_0(Sep_29);
              if (succeeded)
              {
                mercury__dir__take_while_not__ho7_4_p_in__list_0(STATE_VARIABLE_FileName_0_36, &Server_30, &STATE_VARIABLE_FileName_1_39);
                succeeded = (Server_30 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  if ((STATE_VARIABLE_FileName_1_39 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    STATE_VARIABLE_FileName_2_22 = STATE_VARIABLE_FileName_1_39;
                    succeeded = MR_TRUE;
                  }
                  else
                  {
                    MR_Word STATE_VARIABLE_FileName_2_40 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_FileName_1_39, 1))));
                    MR_Char Var_45 = ((MR_Char) (MR_Word) (MR_hl_field(1, STATE_VARIABLE_FileName_1_39, 0)));

                    succeeded = (Sep_29 == Var_45);
                    if (succeeded)
                    {
                      if ((STATE_VARIABLE_FileName_2_40 == (MR_Word) ((MR_Unsigned) 0U)))
                      {
                        STATE_VARIABLE_FileName_2_22 = STATE_VARIABLE_FileName_2_40;
                        succeeded = MR_TRUE;
                      }
                      else
                      {
                        MR_Word Share_33;
                        MR_Word STATE_VARIABLE_FileName_3_42;

                        mercury__dir__take_while_not__ho7_4_p_in__list_0(STATE_VARIABLE_FileName_2_40, &Share_33, &STATE_VARIABLE_FileName_3_42);
                        succeeded = (Share_33 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          if ((STATE_VARIABLE_FileName_3_42 == (MR_Word) ((MR_Unsigned) 0U)))
                          {
                            STATE_VARIABLE_FileName_2_22 = STATE_VARIABLE_FileName_3_42;
                            succeeded = MR_TRUE;
                          }
                          else
                          {
                            MR_Char Var_46 = ((MR_Char) (MR_Word) (MR_hl_field(1, STATE_VARIABLE_FileName_3_42, 0)));

                            STATE_VARIABLE_FileName_2_22 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_FileName_3_42, 1))));
                            succeeded = (Sep_29 == Var_46);
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
          Var_7 = STATE_VARIABLE_FileName_2_22;
          succeeded = MR_TRUE;
        }
        else
        {
          MR_Char Char1_47;
          MR_Word STATE_VARIABLE_FileName_0_49;

          succeeded = (FileName_2 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Char1_47 = ((MR_Char) (MR_Word) (MR_hl_field(1, FileName_2, 0)));
            STATE_VARIABLE_FileName_0_49 = ((MR_Word) ((MR_hl_field(1, FileName_2, 1))));
            succeeded = mercury__dir__is_directory_separator_1_p_0(Char1_47);
            if (succeeded)
            {
              if ((STATE_VARIABLE_FileName_0_49 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                Var_7 = STATE_VARIABLE_FileName_0_49;
                succeeded = MR_TRUE;
              }
              else
              {
                MR_Char Char2_48 = ((MR_Char) (MR_Word) (MR_hl_field(1, STATE_VARIABLE_FileName_0_49, 0)));

                Var_7 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_FileName_0_49, 1))));
                succeeded = mercury__dir__is_directory_separator_1_p_0(Char2_48);
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

      succeeded = (FileName_2 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Char_3 = ((MR_Char) (MR_Word) (MR_hl_field(1, FileName_2, 0)));
        Var_6 = ((MR_Word) ((MR_hl_field(1, FileName_2, 1))));
        succeeded = (Var_6 == (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
          succeeded = mercury__dir__is_directory_separator_1_p_0(Char_3);
      }
    }
  }
  return succeeded;
}

MR_bool MR_CALL 
mercury__dir__path_name_is_absolute_1_p_0(
  MR_String FileName_2)
{
  MR_bool succeeded;

{
#define MR_PROC_LABEL mercury__dir__path_name_is_absolute_1_p_0

	MR_bool SUCCESS_INDICATOR;

		{

    SUCCESS_INDICATOR = MR_FALSE;


		;}
#undef MR_PROC_LABEL
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
      MR_Char Var_20;

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
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        Var_20 = (MR_Char) 92;
      else
        Var_20 = (MR_Char) 47;
      succeeded = (Var_20 == (MR_Char) 92);
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
succeeded  = SUCCESS_INDICATOR;
}
    }
    if (succeeded)
    {
      MR_Word Var_5;
      MR_Word Var_6;
      MR_Integer Var_21;
      MR_Char Letter_25;
      MR_Char Sep_26;
      MR_Word Var_28;
      MR_Char Var_29;
      MR_Word Var_30;

{
#define MR_PROC_LABEL mercury__dir__path_name_is_absolute_1_p_0

	MR_String Str;
	MR_Integer Length;

	Str = FileName_2 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_21  = Length;
}
      mercury__string__do_to_char_list_loop_4_p_0(FileName_2, Var_21, (MR_Word) ((MR_Unsigned) 0U), &Var_6);
      Var_5 = mercury__dir__canonicalize_path_chars_1_f_0(Var_6);
      succeeded = (Var_5 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        Letter_25 = ((MR_Char) (MR_Word) (MR_hl_field(1, Var_5, 0)));
        Var_28 = ((MR_Word) ((MR_hl_field(1, Var_5, 1))));
        succeeded = (Var_28 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Var_29 = ((MR_Char) (MR_Word) (MR_hl_field(1, Var_28, 0)));
          Var_30 = ((MR_Word) ((MR_hl_field(1, Var_28, 1))));
          succeeded = (Var_29 == (MR_Char) 58);
          if (succeeded)
          {
            succeeded = (Var_30 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
            {
              Sep_26 = ((MR_Char) (MR_Word) (MR_hl_field(1, Var_30, 0)));
              succeeded = mercury__char__is_alpha_1_p_0(Letter_25);
              if (succeeded)
                succeeded = mercury__dir__is_directory_separator_1_p_0(Sep_26);
            }
          }
        }
      }
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_Char Sep_31;
        MR_Word Server_32;
        MR_Word STATE_VARIABLE_FileName_0_38;
        MR_Word Var_39;
        MR_Word STATE_VARIABLE_FileName_1_41;
        MR_Char Var_46;

        succeeded = (Var_5 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          Sep_31 = ((MR_Char) (MR_Word) (MR_hl_field(1, Var_5, 0)));
          Var_39 = ((MR_Word) ((MR_hl_field(1, Var_5, 1))));
          succeeded = (Var_39 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Var_46 = ((MR_Char) (MR_Word) (MR_hl_field(1, Var_39, 0)));
            STATE_VARIABLE_FileName_0_38 = ((MR_Word) ((MR_hl_field(1, Var_39, 1))));
            succeeded = (Sep_31 == Var_46);
            if (succeeded)
            {
              succeeded = mercury__dir__is_directory_separator_1_p_0(Sep_31);
              if (succeeded)
              {
                mercury__dir__take_while_not__ho7_4_p_in__list_0(STATE_VARIABLE_FileName_0_38, &Server_32, &STATE_VARIABLE_FileName_1_41);
                succeeded = (Server_32 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  if ((STATE_VARIABLE_FileName_1_41 == (MR_Word) ((MR_Unsigned) 0U)))
                    succeeded = MR_TRUE;
                  else
                  {
                    MR_Word STATE_VARIABLE_FileName_2_42 = ((MR_Word) ((MR_hl_field(1, STATE_VARIABLE_FileName_1_41, 1))));
                    MR_Char Var_47 = ((MR_Char) (MR_Word) (MR_hl_field(1, STATE_VARIABLE_FileName_1_41, 0)));

                    succeeded = (Sep_31 == Var_47);
                    if (succeeded)
                    {
                      if ((STATE_VARIABLE_FileName_2_42 == (MR_Word) ((MR_Unsigned) 0U)))
                        succeeded = MR_TRUE;
                      else
                      {
                        MR_Word Share_35;
                        MR_Word STATE_VARIABLE_FileName_3_44;

                        mercury__dir__take_while_not__ho7_4_p_in__list_0(STATE_VARIABLE_FileName_2_42, &Share_35, &STATE_VARIABLE_FileName_3_44);
                        succeeded = (Share_35 != (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                        {
                          if ((STATE_VARIABLE_FileName_3_44 == (MR_Word) ((MR_Unsigned) 0U)))
                            succeeded = MR_TRUE;
                          else
                          {
                            MR_Char Var_48 = ((MR_Char) (MR_Word) (MR_hl_field(1, STATE_VARIABLE_FileName_3_44, 0)));

                            succeeded = (Sep_31 == Var_48);
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
          MR_Char Char1_49;
          MR_Word STATE_VARIABLE_FileName_0_51;

          succeeded = (Var_5 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            Char1_49 = ((MR_Char) (MR_Word) (MR_hl_field(1, Var_5, 0)));
            STATE_VARIABLE_FileName_0_51 = ((MR_Word) ((MR_hl_field(1, Var_5, 1))));
            succeeded = mercury__dir__is_directory_separator_1_p_0(Char1_49);
            if (succeeded)
            {
              if ((STATE_VARIABLE_FileName_0_51 == (MR_Word) ((MR_Unsigned) 0U)))
                succeeded = MR_TRUE;
              else
              {
                MR_Char Char2_50 = ((MR_Char) (MR_Word) (MR_hl_field(1, STATE_VARIABLE_FileName_0_51, 0)));

                succeeded = mercury__dir__is_directory_separator_1_p_0(Char2_50);
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
      MR_Integer Var_52;

{
#define MR_PROC_LABEL mercury__dir__path_name_is_absolute_1_p_0

	MR_String Str;
	MR_Integer Length;

	Str = FileName_2 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_52  = Length;
}
      succeeded = (((MR_Unsigned) 0) < ((MR_Unsigned) Var_52));
      if (succeeded)
      {
{
#define MR_PROC_LABEL mercury__dir__path_name_is_absolute_1_p_0

	MR_String Str;
	MR_Integer Index;
	MR_Char Ch;

	Str = FileName_2 ;
	Index = (MR_Integer) 0 ;
		{

    Ch = (unsigned char) Str[Index];
    if (!MR_is_ascii(Ch)) {
        int width;
        Ch = MR_utf8_get_mb(Str, Index, &width);
        if (Ch < 0) {
            Ch = 0xFFFD;
        }
    }


		;}
#undef MR_PROC_LABEL
	FirstChar_4  = Ch;
}
        succeeded = mercury__dir__is_directory_separator_1_p_0(FirstChar_4);
      }
    }
  }
  return succeeded;
}

MR_Word MR_CALL 
mercury__dir__canonicalize_path_chars_1_f_0(
  MR_Word FileNameChars0_3)
{
  MR_bool succeeded;
  MR_Word FileNameChars_4;
  MR_Word TailChars_6;
  MR_Char CanonHeadChar_7;
  MR_Char HeadChar_5;
  MR_Char Var_13;

  {
    MR_Char Var_12;

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
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      Var_12 = (MR_Char) 92;
    else
      Var_12 = (MR_Char) 47;
    succeeded = (Var_12 == (MR_Char) 92);
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
succeeded  = SUCCESS_INDICATOR;
}
  }
  if (succeeded)
  {
    succeeded = (FileNameChars0_3 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      HeadChar_5 = ((MR_Char) (MR_Word) (MR_hl_field(1, FileNameChars0_3, 0)));
      TailChars_6 = ((MR_Word) ((MR_hl_field(1, FileNameChars0_3, 1))));
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
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        Var_13 = (MR_Char) 92;
      else
        Var_13 = (MR_Char) 47;
      succeeded = (HeadChar_5 == Var_13);
      if (succeeded)
      {
        CanonHeadChar_7 = HeadChar_5;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Char Var_14;

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
succeeded  = SUCCESS_INDICATOR;
}
        if (succeeded)
          Var_14 = (MR_Char) 92;
        else
          Var_14 = (MR_Char) 47;
        succeeded = (HeadChar_5 == Var_14);
        if (succeeded)
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
succeeded  = SUCCESS_INDICATOR;
}
          if (succeeded)
            CanonHeadChar_7 = HeadChar_5;
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
succeeded  = SUCCESS_INDICATOR;
}
            if (succeeded)
              CanonHeadChar_7 = (MR_Char) 92;
            else
              CanonHeadChar_7 = (MR_Char) 47;
          }
          succeeded = MR_TRUE;
        }
      }
    }
  }
  if (succeeded)
  {
    MR_Word CanonTailChars_8;
    MR_Word RevFileNameChars_16;
    MR_Char OnlyCanonTailChar_9;
    MR_Word Var_10;

    mercury__dir__canonicalize_later_path_chars_acc_3_p_0(TailChars_6, (MR_Word) ((MR_Unsigned) 0U), &RevFileNameChars_16);
    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), RevFileNameChars_16, &CanonTailChars_8);
    succeeded = (CanonTailChars_8 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      OnlyCanonTailChar_9 = ((MR_Char) (MR_Word) (MR_hl_field(1, CanonTailChars_8, 0)));
      Var_10 = ((MR_Word) ((MR_hl_field(1, CanonTailChars_8, 1))));
      succeeded = (Var_10 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = mercury__dir__is_directory_separator_1_p_0(OnlyCanonTailChar_9);
    }
    if (succeeded)
      {
        FileNameChars_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, FileNameChars_4, 0) = ((MR_Box) (MR_Word) (CanonHeadChar_7));
        MR_hl_field(1, FileNameChars_4, 1) = ((MR_Box) ((MR_Unsigned) 0U));
      }
    else
      {
        FileNameChars_4 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(1, FileNameChars_4, 0) = ((MR_Box) (MR_Word) (CanonHeadChar_7));
        MR_hl_field(1, FileNameChars_4, 1) = ((MR_Box) (CanonTailChars_8));
      }
  }
  else
  {
    MR_Word RevFileNameChars_19;

    mercury__dir__canonicalize_later_path_chars_acc_3_p_0(FileNameChars0_3, (MR_Word) ((MR_Unsigned) 0U), &RevFileNameChars_19);
    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), RevFileNameChars_19, &FileNameChars_4);
  }
  return FileNameChars_4;
}

static void MR_CALL 
mercury__dir__canonicalize_later_path_chars_acc_3_p_0(
  MR_Word HeadVar__1_1,
  MR_Word STATE_VARIABLE_RevFileNameChars_0_2,
  MR_Word * STATE_VARIABLE_RevFileNameChars_3)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__1_1 == (MR_Word) ((MR_Unsigned) 0U)))
      *STATE_VARIABLE_RevFileNameChars_3 = STATE_VARIABLE_RevFileNameChars_0_2;
    else
    {
      MR_Char HeadChar_7 = ((MR_Char) (MR_Word) (MR_hl_field(1, HeadVar__1_1, 0)));
      MR_Word TailChars_8 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, 1))));
      MR_Word STATE_VARIABLE_RevFileNameChars_1_15;
      MR_Char CanonHeadChar_10;
      MR_Char Var_16;
      MR_Word next_value_of_HeadVar__1_1;
      MR_Word next_value_of_STATE_VARIABLE_RevFileNameChars_0_2;

{
#define MR_PROC_LABEL mercury__dir__canonicalize_later_path_chars_acc_3_p_0

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
        Var_16 = (MR_Char) 92;
      else
        Var_16 = (MR_Char) 47;
      succeeded = (HeadChar_7 == Var_16);
      if (succeeded)
      {
        CanonHeadChar_10 = HeadChar_7;
        succeeded = MR_TRUE;
      }
      else
      {
        MR_Char Var_17;

{
#define MR_PROC_LABEL mercury__dir__canonicalize_later_path_chars_acc_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_CYGWIN)
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
        succeeded = (HeadChar_7 == Var_17);
        if (succeeded)
        {
{
#define MR_PROC_LABEL mercury__dir__canonicalize_later_path_chars_acc_3_p_0

	MR_bool SUCCESS_INDICATOR;

		{

#if defined(MR_CYGWIN)
    SUCCESS_INDICATOR = MR_TRUE;
#else
    SUCCESS_INDICATOR = MR_FALSE;
#endif


		;}
#undef MR_PROC_LABEL
succeeded  = SUCCESS_INDICATOR;
}
          if (succeeded)
            CanonHeadChar_10 = HeadChar_7;
          else
          {
{
#define MR_PROC_LABEL mercury__dir__canonicalize_later_path_chars_acc_3_p_0

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
              CanonHeadChar_10 = (MR_Char) 92;
            else
              CanonHeadChar_10 = (MR_Char) 47;
          }
          succeeded = MR_TRUE;
        }
      }
      if (succeeded)
      {
        MR_Char FirstTailChar_11;

        succeeded = (TailChars_8 != (MR_Word) ((MR_Unsigned) 0U));
        if (succeeded)
        {
          FirstTailChar_11 = ((MR_Char) (MR_Word) (MR_hl_field(1, TailChars_8, 0)));
          succeeded = mercury__dir__is_directory_separator_1_p_0(FirstTailChar_11);
        }
        if (succeeded)
          STATE_VARIABLE_RevFileNameChars_1_15 = STATE_VARIABLE_RevFileNameChars_0_2;
        else
          {
            STATE_VARIABLE_RevFileNameChars_1_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(1, STATE_VARIABLE_RevFileNameChars_1_15, 0) = ((MR_Box) (MR_Word) (CanonHeadChar_10));
            MR_hl_field(1, STATE_VARIABLE_RevFileNameChars_1_15, 1) = ((MR_Box) (STATE_VARIABLE_RevFileNameChars_0_2));
          }
      }
      else
        {
          STATE_VARIABLE_RevFileNameChars_1_15 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, STATE_VARIABLE_RevFileNameChars_1_15, 0) = ((MR_Box) (MR_Word) (HeadChar_7));
          MR_hl_field(1, STATE_VARIABLE_RevFileNameChars_1_15, 1) = ((MR_Box) (STATE_VARIABLE_RevFileNameChars_0_2));
        }
      // direct tailcall eliminated
      ;
      next_value_of_HeadVar__1_1 = TailChars_8;
      next_value_of_STATE_VARIABLE_RevFileNameChars_0_2 = STATE_VARIABLE_RevFileNameChars_1_15;
      HeadVar__1_1 = next_value_of_HeadVar__1_1;
      STATE_VARIABLE_RevFileNameChars_0_2 = next_value_of_STATE_VARIABLE_RevFileNameChars_0_2;
      continue;
    }
    break;
  }
}

MR_bool MR_CALL 
mercury__dir__split_name_2_3_p_0(
  MR_Word FileNameChars0_4,
  MR_String * DirName_5,
  MR_String * BaseName_6)
{
  MR_bool succeeded = (FileNameChars0_4 != (MR_Word) ((MR_Unsigned) 0U));
  MR_Word FileNameWithoutSlash_9;
  MR_Word Chars1_19;
  MR_Word TypeCtorInfo_6_21;
  MR_Char Sep_20;
  MR_Box conv0_Sep_20;
  MR_Word TypeInfo_17_17;
  MR_String Var_10;
  MR_Word Var_14;
  MR_Integer Var_22;
  MR_Word Var_23;
  MR_Word TypeInfo_18_18;
  MR_String Var_11;
  MR_Word Var_16;
  MR_Integer Var_24;
  MR_Word Var_25;

  if (succeeded)
  {
    TypeCtorInfo_6_21 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0);
    succeeded = mercury__list__split_last_3_p_0(TypeCtorInfo_6_21, FileNameChars0_4, &Chars1_19, &conv0_Sep_20);
    if (succeeded)
    {
      Sep_20 = ((MR_Char) (MR_Word) conv0_Sep_20);
      succeeded = MR_TRUE;
    }
    if (succeeded)
      succeeded = mercury__dir__is_directory_separator_1_p_0(Sep_20);
    if (succeeded)
      FileNameWithoutSlash_9 = Chars1_19;
    else
      FileNameWithoutSlash_9 = FileNameChars0_4;
    Var_10 = (MR_String) ".";
{
#define MR_PROC_LABEL mercury__dir__split_name_2_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Var_10 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_22  = Length;
}
    Var_23 = (MR_Word) ((MR_Unsigned) 0U);
    mercury__string__do_to_char_list_loop_4_p_0(Var_10, Var_22, Var_23, &Var_14);
    TypeInfo_17_17 = (MR_Word) (&mercury__dir_scalar_common_1[0]);
    succeeded = mercury__builtin__unify_2_p_0(TypeInfo_17_17, ((MR_Box) (FileNameWithoutSlash_9)), ((MR_Box) (Var_14)));
    succeeded = !(succeeded);
    if (succeeded)
    {
      Var_11 = (MR_String) "..";
{
#define MR_PROC_LABEL mercury__dir__split_name_2_3_p_0

	MR_String Str;
	MR_Integer Length;

	Str = Var_11 ;
		{

    Length = strlen(Str);


		;}
#undef MR_PROC_LABEL
	Var_24  = Length;
}
      Var_25 = (MR_Word) ((MR_Unsigned) 0U);
      mercury__string__do_to_char_list_loop_4_p_0(Var_11, Var_24, Var_25, &Var_16);
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
succeeded  = SUCCESS_INDICATOR;
}
        }
        else
        {
          MR_Word RevFileNameChars0_26;
          MR_Word RevFileNameChars_29;
          MR_Word RevFileNameChars1_28;
          MR_Char LastChar_27;
          MR_Word RevBaseName_30;
          MR_Word RevDirName0_31;

          mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_character_0), FileNameChars0_4, &RevFileNameChars0_26);
          succeeded = (RevFileNameChars0_26 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            LastChar_27 = ((MR_Char) (MR_Word) (MR_hl_field(1, RevFileNameChars0_26, 0)));
            RevFileNameChars1_28 = ((MR_Word) ((MR_hl_field(1, RevFileNameChars0_26, 1))));
            succeeded = mercury__dir__is_directory_separator_1_p_0(LastChar_27);
          }
          if (succeeded)
            RevFileNameChars_29 = RevFileNameChars1_28;
          else
            RevFileNameChars_29 = RevFileNameChars0_26;
          mercury__dir__take_while_not__ho7_4_p_in__list_0(RevFileNameChars_29, &RevBaseName_30, &RevDirName0_31);
          succeeded = (RevBaseName_30 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
            succeeded = (RevDirName0_31 != (MR_Word) ((MR_Unsigned) 0U));
          if (succeeded)
          {
            MR_Word RevDirName_39;
            MR_Word RevDirName1_37 = ((MR_Word) ((MR_hl_field(1, RevDirName0_31, 1))));
            MR_Char Sep_36 = ((MR_Char) (MR_Word) (MR_hl_field(1, RevDirName0_31, 0)));

            succeeded = mercury__dir__is_directory_separator_1_p_0(Sep_36);
            if (succeeded)
            {
              {
                MR_Char Drive_38;
                MR_Char Var_44;
                MR_Word Var_45;
                MR_Word Var_46;

                {
                  MR_Char Var_53;

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
succeeded  = SUCCESS_INDICATOR;
}
                  if (succeeded)
                    Var_53 = (MR_Char) 92;
                  else
                    Var_53 = (MR_Char) 47;
                  succeeded = (Var_53 == (MR_Char) 92);
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
succeeded  = SUCCESS_INDICATOR;
}
                }
                if (succeeded)
                {
                  succeeded = (RevDirName1_37 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_44 = ((MR_Char) (MR_Word) (MR_hl_field(1, RevDirName1_37, 0)));
                    Var_45 = ((MR_Word) ((MR_hl_field(1, RevDirName1_37, 1))));
                    succeeded = (Var_44 == (MR_Char) 58);
                    if (succeeded)
                    {
                      succeeded = (Var_45 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        Drive_38 = ((MR_Char) (MR_Word) (MR_hl_field(1, Var_45, 0)));
                        Var_46 = ((MR_Word) ((MR_hl_field(1, Var_45, 1))));
                        succeeded = (Var_46 == (MR_Word) ((MR_Unsigned) 0U));
                        if (succeeded)
                          succeeded = mercury__char__is_alpha_1_p_0(Drive_38);
                      }
                    }
                  }
                }
              }
              if (!(succeeded))
                succeeded = (RevDirName1_37 == (MR_Word) ((MR_Unsigned) 0U));
            }
            succeeded = !(succeeded);
            if (succeeded)
              RevDirName_39 = RevDirName1_37;
            else
              RevDirName_39 = RevDirName0_31;
            mercury__string__from_rev_char_list_2_p_0(RevBaseName_30, BaseName_6);
            mercury__string__from_rev_char_list_2_p_0(RevDirName_39, DirName_5);
            succeeded = MR_TRUE;
          }
          else
          {
            MR_Word BaseNameChars_40;
            MR_Char BaseNameFirst_41;
            MR_Word Var_47;
            MR_Char Var_48;
            MR_Word Var_49;
            MR_Word Var_50;
            MR_Char Drive_51;
            MR_Char Var_54;

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
succeeded  = SUCCESS_INDICATOR;
}
            if (succeeded)
              Var_54 = (MR_Char) 92;
            else
              Var_54 = (MR_Char) 47;
            succeeded = (Var_54 == (MR_Char) 92);
            if (succeeded)
            {
              succeeded = (FileNameChars0_4 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                Drive_51 = ((MR_Char) (MR_Word) (MR_hl_field(1, FileNameChars0_4, 0)));
                Var_47 = ((MR_Word) ((MR_hl_field(1, FileNameChars0_4, 1))));
                succeeded = (Var_47 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_48 = ((MR_Char) (MR_Word) (MR_hl_field(1, Var_47, 0)));
                  BaseNameChars_40 = ((MR_Word) ((MR_hl_field(1, Var_47, 1))));
                  succeeded = (Var_48 == (MR_Char) 58);
                  if (succeeded)
                  {
                    succeeded = mercury__char__is_alpha_1_p_0(Drive_51);
                    if (succeeded)
                    {
                      succeeded = (BaseNameChars_40 != (MR_Word) ((MR_Unsigned) 0U));
                      if (succeeded)
                      {
                        BaseNameFirst_41 = ((MR_Char) (MR_Word) (MR_hl_field(1, BaseNameChars_40, 0)));
                        succeeded = mercury__dir__is_directory_separator_1_p_0(BaseNameFirst_41);
                        succeeded = !(succeeded);
                        if (succeeded)
                        {
                          mercury__string__from_char_list_2_p_0(BaseNameChars_40, BaseName_6);
                          Var_50 = (MR_Word) (MR_mkword(1, &mercury__dir_scalar_common_1[5]));
                          {
                            Var_49 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                            MR_hl_field(1, Var_49, 0) = ((MR_Box) (MR_Word) (Drive_51));
                            MR_hl_field(1, Var_49, 1) = ((MR_Box) (Var_50));
                          }
                          mercury__string__from_char_list_2_p_0(Var_49, DirName_5);
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

static void MR_CALL 
mercury__dir__take_while_not__ho7_4_p_in__list_0(
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word * HeadVar__4_4)
{
  MR_bool succeeded;

  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
    *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
  }
  else
  {
    MR_Char Var_12 = ((MR_Char) (MR_Word) (MR_hl_field(1, HeadVar__2_2, 0)));
    MR_Word Var_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));

    succeeded = mercury__dir__is_directory_separator_1_p_0(Var_12);
    if (succeeded)
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__4_4 = HeadVar__2_2;
    }
    else
    {
      MR_Word * AddrSCCcallarg_17_19;

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *HeadVar__3_3 = base;
        MR_hl_field(1, base, 0) = ((MR_Box) (MR_Word) (Var_12));
        MR_hl_field(1, base, 1) = NULL;
      }
      AddrSCCcallarg_17_19 = (MR_Word *) (&(MR_hl_field(1, *HeadVar__3_3, 1)));
      mercury__dir__LCMC__pred__take_while_not__ho7__1_4_p_0(Var_13, AddrSCCcallarg_17_19, HeadVar__4_4);
    }
  }
}

static void MR_CALL 
mercury__dir__LCMC__pred__take_while_not__ho7__1_4_p_0(
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_20,
  MR_Word * HeadVar__4_4)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__3_20 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__4_4 = (MR_Word) ((MR_Unsigned) 0U);
    }
    else
    {
      MR_Char Var_12 = ((MR_Char) (MR_Word) (MR_hl_field(1, HeadVar__2_2, 0)));
      MR_Word Var_13 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, 1))));

      succeeded = mercury__dir__is_directory_separator_1_p_0(Var_12);
      if (succeeded)
      {
        *AddrOfHeadVar__3_20 = (MR_Word) ((MR_Unsigned) 0U);
        *HeadVar__4_4 = HeadVar__2_2;
      }
      else
      {
        MR_Word * AddrSCCcallarg_17_19;
        MR_Word HeadVar__3_22;
        MR_Word next_value_of_HeadVar__2_2;
        MR_Word * next_value_of_AddrOfHeadVar__3_20;

        {
          HeadVar__3_22 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(1, HeadVar__3_22, 0) = ((MR_Box) (MR_Word) (Var_12));
          MR_hl_field(1, HeadVar__3_22, 1) = NULL;
        }
        AddrSCCcallarg_17_19 = (MR_Word *) (&(MR_hl_field(1, HeadVar__3_22, 1)));
        *AddrOfHeadVar__3_20 = HeadVar__3_22;
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__2_2 = Var_13;
        next_value_of_AddrOfHeadVar__3_20 = AddrSCCcallarg_17_19;
        HeadVar__2_2 = next_value_of_HeadVar__2_2;
        AddrOfHeadVar__3_20 = next_value_of_AddrOfHeadVar__3_20;
        continue;
      }
    }
    break;
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
  return (MR_String) "..";
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
  return (MR_String) ".";
}

void MR_CALL 
mercury__dir__is_directory_separator_1_p_1(
  MR_Char * Char_2,
  MR_Cont cont,
  void * cont_env_ptr)
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
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      Var_3 = (MR_Char) 92;
    else
      Var_3 = (MR_Char) 47;
    succeeded = (*Char_2 != Var_3);
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
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    *Char_2 = (MR_Char) 92;
  else
    *Char_2 = (MR_Char) 47;
  cont(cont_env_ptr);
}

MR_bool MR_CALL 
mercury__dir__is_directory_separator_1_p_0(
  MR_Char Char_2)
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
succeeded  = SUCCESS_INDICATOR;
}
      if (succeeded)
        Var_4 = (MR_Char) 92;
      else
        Var_4 = (MR_Char) 47;
      succeeded = (Char_2 != Var_4);
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

void MR_CALL 
mercury__dir__directory_separator_1_p_0(
  MR_Char * HeadVar__1_1)
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
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    *HeadVar__1_1 = (MR_Char) 92;
  else
    *HeadVar__1_1 = (MR_Char) 47;
}

MR_Char MR_CALL 
mercury__dir__directory_separator_0_f_0(void)
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
succeeded  = SUCCESS_INDICATOR;
}
  if (succeeded)
    HeadVar__1_1 = (MR_Char) 92;
  else
    HeadVar__1_1 = (MR_Char) 47;
  return HeadVar__1_1;
}

static MR_bool MR_CALL 
mercury__dir____Unify____canon_prev_char_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__dir____Unify____canon_prev_char_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__dir____Compare____canon_prev_char_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__dir____Compare____canon_prev_char_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__dir____Unify____file_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__dir____Unify____file_error_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__dir____Compare____file_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__dir____Compare____file_error_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__dir____Unify____file_operation_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__dir____Unify____file_operation_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__dir____Compare____file_operation_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__dir____Compare____file_operation_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__dir____Unify____fold_params_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__dir____Unify____fold_params_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__dir____Compare____fold_params_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__dir____Compare____fold_params_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__dir____Unify____foldl_pred_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__dir____Unify____foldl_pred_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__dir____Compare____foldl_pred_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__dir____Compare____foldl_pred_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__dir____Unify____is_parent_symlink_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__dir____Unify____is_parent_symlink_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__dir____Compare____is_parent_symlink_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__dir____Compare____is_parent_symlink_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__dir____Unify____make_single_directory_status_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__dir____Unify____make_single_directory_status_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__dir____Compare____make_single_directory_status_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__dir____Compare____make_single_directory_status_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__dir____Unify____maybe_file_error_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_bool succeeded;

  succeeded = mercury__dir____Unify____maybe_file_error_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  return succeeded;
}

static void MR_CALL 
mercury__dir____Compare____maybe_file_error_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__dir____Compare____maybe_file_error_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
  *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__dir____Unify____maybe_file_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__dir____Unify____maybe_file_error_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__dir____Compare____maybe_file_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__dir____Compare____maybe_file_error_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__dir____Unify____maybe_follow_symlinks_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__dir____Unify____maybe_follow_symlinks_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__dir____Compare____maybe_follow_symlinks_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__dir____Compare____maybe_follow_symlinks_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__dir____Unify____maybe_subdirs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__dir____Unify____maybe_subdirs_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__dir____Compare____maybe_subdirs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__dir____Compare____maybe_subdirs_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__dir____Unify____maybe_user_stop_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__dir____Unify____maybe_user_stop_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__dir____Compare____maybe_user_stop_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__dir____Compare____maybe_user_stop_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__dir____Unify____on_error_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__dir____Unify____on_error_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__dir____Compare____on_error_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__dir____Compare____on_error_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__dir____Unify____stream_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__dir____Unify____stream_0_0(((MR_Box) (wrapper_arg_1)), ((MR_Box) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__dir____Compare____stream_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__dir____Compare____stream_0_0(&conv0_HeadVar__1_1, ((MR_Box) (wrapper_arg_2)), ((MR_Box) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
mercury__dir____Unify____symlink_check_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = mercury__dir____Unify____symlink_check_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
mercury__dir____Compare____symlink_check_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  mercury__dir____Compare____symlink_check_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

void mercury__dir__init(void)
{
}

void mercury__dir__init_type_tables(void)
{
  static MR_bool initialised = MR_FALSE;
  if (initialised) return;
  initialised = MR_TRUE;

  MR_register_type_ctor_info(&mercury__dir__dir__type_ctor_info_canon_prev_char_0);
  MR_register_type_ctor_info(&mercury__dir__dir__type_ctor_info_file_error_0);
  MR_register_type_ctor_info(&mercury__dir__dir__type_ctor_info_file_operation_0);
  MR_register_type_ctor_info(&mercury__dir__dir__type_ctor_info_fold_params_0);
  MR_register_type_ctor_info(&mercury__dir__dir__type_ctor_info_foldl_pred_1);
  MR_register_type_ctor_info(&mercury__dir__dir__type_ctor_info_is_parent_symlink_0);
  MR_register_type_ctor_info(&mercury__dir__dir__type_ctor_info_make_single_directory_status_0);
  MR_register_type_ctor_info(&mercury__dir__dir__type_ctor_info_maybe_file_error_1);
  MR_register_type_ctor_info(&mercury__dir__dir__type_ctor_info_maybe_file_error_0);
  MR_register_type_ctor_info(&mercury__dir__dir__type_ctor_info_maybe_follow_symlinks_0);
  MR_register_type_ctor_info(&mercury__dir__dir__type_ctor_info_maybe_subdirs_0);
  MR_register_type_ctor_info(&mercury__dir__dir__type_ctor_info_maybe_user_stop_0);
  MR_register_type_ctor_info(&mercury__dir__dir__type_ctor_info_on_error_0);
  MR_register_type_ctor_info(&mercury__dir__dir__type_ctor_info_stream_0);
  MR_register_type_ctor_info(&mercury__dir__dir__type_ctor_info_symlink_check_result_0);
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
