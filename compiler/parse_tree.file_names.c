/*
** Automatically generated from `file_names.m'
** by the Mercury compiler,
** version rotd-2020-08-10
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


// :- module parse_tree.file_names.
// :- implementation.

/*
INIT mercury__parse_tree__file_names__init
REQUIRED_INIT mercury__parse_tree__file_names__required_init
ENDINIT
*/

#include "parse_tree.file_names.mih"
#include "parse_tree.file_names.mh"


#include "array.mih"
#include "assoc_list.mih"
#include "bimap.mih"
#include "bitmap.mih"
#include "bool.mih"
#include "builtin.mih"
#include "char.mih"
#include "construct.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "getopt_io.mih"
#include "int.mih"
#include "io.mih"
#include "library.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "ops.mih"
#include "pair.mih"
#include "parse_tree.mih"
#include "pretty_printer.mih"
#include "private_builtin.mih"
#include "require.mih"
#include "set.mih"
#include "set_ordlist.mih"
#include "stream.mih"
#include "string.mih"
#include "term.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "univ.mih"
#include "libs.compute_grade.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.op_mode.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_util.mih"
#include "parse_tree.java_names.mih"
#include "parse_tree.source_file_map.mih"
#include "string.format.mih"
#include "string.parse_util.mih"



struct parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s {
  MR_Word parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Globals_11;
  MR_bool parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded;
  MR_String parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57;
  jmp_buf parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__commit_5;
  MR_String parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__ObjExt_66;
};

struct parse_tree__file_names__make_file_name_9_p_0_env_0_s {
  MR_Word parse_tree__file_names__make_file_name_9_p_0_env_0__Globals_10;
  MR_bool parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded;
  MR_String parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47;
  jmp_buf parse_tree__file_names__make_file_name_9_p_0_env_0__commit_1;
  MR_String parse_tree__file_names__make_file_name_9_p_0_env_0__ObjExt_56;
};


static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__file_names__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_parse_tree__file_names__type_ctor_info_count_sum_0;

static const MR_PseudoTypeInfo parse_tree__file_names__parse_tree__file_names__field_types_count_sum_0_0[2];

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_count_sum_0_0;

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_stag_ordered_count_sum_0_0[1];

static const MR_DuPtagLayout parse_tree__file_names__parse_tree__file_names__du_ptag_ordered_count_sum_0[1];

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_name_ordered_count_sum_0[1];

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_count_sum_0[1];

static const MR_PseudoTypeInfo parse_tree__file_names__parse_tree__file_names__field_types_ext_search_mkdir_0_0[3];

static const MR_DuArgLocn parse_tree__file_names__parse_tree__file_names__field_locns_ext_search_mkdir_0_0[3];

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_search_mkdir_0_0;

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_stag_ordered_ext_search_mkdir_0_0[1];

static const MR_DuPtagLayout parse_tree__file_names__parse_tree__file_names__du_ptag_ordered_ext_search_mkdir_0[1];

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_name_ordered_ext_search_mkdir_0[1];

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_ext_search_mkdir_0[1];

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_create_dirs_0_0;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_create_dirs_0_1;

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_value_ordered_maybe_create_dirs_0[2];

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_name_ordered_maybe_create_dirs_0[2];

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_maybe_create_dirs_0[2];

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_search_0_0;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_search_0_1;

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_value_ordered_maybe_search_0[2];

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_name_ordered_maybe_search_0[2];

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_maybe_search_0[2];

static const MR_PseudoTypeInfo parse_tree__file_names__parse_tree__file_names__field_types_record_key_0_0[4];

static const MR_DuArgLocn parse_tree__file_names__parse_tree__file_names__field_locns_record_key_0_0[4];

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_record_key_0_0;

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_stag_ordered_record_key_0_0[1];

static const MR_DuPtagLayout parse_tree__file_names__parse_tree__file_names__du_ptag_ordered_record_key_0[1];

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_name_ordered_record_key_0[1];

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_record_key_0[1];

static const MR_PseudoTypeInfo parse_tree__file_names__parse_tree__file_names__field_types_record_value_0_0[2];

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_record_value_0_0;

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_stag_ordered_record_value_0_0[1];

static const MR_DuPtagLayout parse_tree__file_names__parse_tree__file_names__du_ptag_ordered_record_value_0[1];

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_name_ordered_record_value_0[1];

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_record_value_0[1];

static void MR_CALL 
parse_tree__file_names____Compare____record_value_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__file_names____Unify____record_value_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__file_names____Compare____record_key_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__file_names____Unify____record_key_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__file_names____Compare____ext_search_mkdir_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__file_names____Unify____ext_search_mkdir_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__file_names____Compare____count_sum_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__file_names____Unify____count_sum_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__file_names__unlock_translations_0_p_0(void);

static void MR_CALL 
parse_tree__file_names__lock_translations_0_p_0(void);

static void MR_CALL 
parse_tree__file_names__unsafe_set_translations_1_p_0(
  MR_Word X_1);

static void MR_CALL 
parse_tree__file_names__unsafe_get_translations_1_p_0(
  MR_Word * X_1);

static void MR_CALL 
parse_tree__file_names__pre_initialise_mutable_translations_0_p_0(void);

static void MR_CALL 
parse_tree__file_names__initialise_mutable_translations_0_p_0(void);

static void MR_CALL 
parse_tree__file_names__write_out_ext_sch_dir_entry_5_p_0(
  MR_Word Stream_6,
  MR_String ExtSchDir_7,
  MR_Word HeadVar__3_3);

static void MR_CALL 
parse_tree__file_names__write_out_ext_entry_5_p_0(
  MR_Word Stream_6,
  MR_String Ext_7,
  MR_Word HeadVar__3_3);

static void MR_CALL 
parse_tree__file_names__gather_translation_stats_10_p_0(
  MR_Word Key_11,
  MR_Word Value_12,
  MR_Integer STATE_VARIABLE_NumKeys_0_27,
  MR_Integer * STATE_VARIABLE_NumKeys_28,
  MR_Integer STATE_VARIABLE_NumLookups_0_29,
  MR_Integer * STATE_VARIABLE_NumLookups_30,
  MR_Word STATE_VARIABLE_ExtMap_0_31,
  MR_Word * STATE_VARIABLE_ExtMap_32,
  MR_Word STATE_VARIABLE_ExtSchDirMap_0_33,
  MR_Word * STATE_VARIABLE_ExtSchDirMap_34);

static void MR_CALL 
parse_tree__file_names__write_translations_record_if_any_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__file_names__write_translations_record_if_any_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
parse_tree__file_names__write_translations_record_if_any_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box * wrapper_arg_10);

static void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0(
  MR_Word Globals_11,
  MR_Word BaseParentDirs_13,
  MR_String BaseNameNoExt_14,
  MR_String Ext_15,
  MR_Word Search_16,
  MR_Word MkDir_17,
  MR_String * FileName_18);

static void MR_CALL 
parse_tree__file_names__make_file_name_9_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__file_names__make_file_name_9_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__file_names__make_file_name_9_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__file_names__make_file_name_9_p_0(
  MR_Word Globals_10,
  MR_Word SubDirNames_11,
  MR_Word Search_12,
  MR_Word MkDir_13,
  MR_String BaseNameNoExt_14,
  MR_String Ext_15,
  MR_String * FileName_16);

static MR_bool MR_CALL 
parse_tree__file_names____Unify____count_sum_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__file_names____Compare____count_sum_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__file_names____Unify____ext_search_mkdir_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__file_names____Compare____ext_search_mkdir_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__file_names____Unify____maybe_create_dirs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__file_names____Compare____maybe_create_dirs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__file_names____Unify____maybe_search_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__file_names____Compare____maybe_search_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__file_names____Unify____record_key_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__file_names____Compare____record_key_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
parse_tree__file_names____Unify____record_value_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__file_names____Compare____record_value_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box parse_tree__file_names_scalar_common_1[2][3];

static /* final */ const MR_Box parse_tree__file_names_scalar_common_3[1][2];

static /* final */ const MR_Box parse_tree__file_names_scalar_common_4[1][13];

static /* final */ const MR_Box parse_tree__file_names_scalar_common_5[1][1];

static /* final */ const MR_Box parse_tree__file_names_scalar_common_6[1][8];


/* sealed */ struct parse_tree__file_names__vector_common_type_2_0_s {
  const MR_String parse_tree__file_names__vector_common_type_2_0__vct_2_f_0;
};

static /* final */ const struct parse_tree__file_names__vector_common_type_2_0_s parse_tree__file_names_vector_common_2[41];



static /* final */ const MR_Box parse_tree__file_names_scalar_common_1[2][3] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_count_sum_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&parse_tree__file_names_scalar_common_4[0])),
    ((MR_Box) (parse_tree__file_names__write_translations_record_if_any_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__file_names_scalar_common_3[1][2] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_String) "jmercury")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box parse_tree__file_names_scalar_common_4[1][13] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 10)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_record_key_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_record_value_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&parse_tree__file_names__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_parse_tree__file_names__type_ctor_info_count_sum_0)),
    ((MR_Box) (&parse_tree__file_names__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_parse_tree__file_names__type_ctor_info_count_sum_0)),
    ((MR_Box) (&parse_tree__file_names__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_parse_tree__file_names__type_ctor_info_count_sum_0)),
    ((MR_Box) (&parse_tree__file_names__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_parse_tree__file_names__type_ctor_info_count_sum_0))
  },
};

static /* final */ const MR_Box parse_tree__file_names_scalar_common_5[1][1] = {
  /* row 0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};

static /* final */ const MR_Box parse_tree__file_names_scalar_common_6[1][8] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_count_sum_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};


static /* final */ const struct parse_tree__file_names__vector_common_type_2_0_s parse_tree__file_names_vector_common_2[41] = {
  /* row 0 */   {     (MR_String) ".analysis" },
  /* row 1 */   {     (MR_String) ".imdg" },
  /* row 2 */   {     (MR_String) ".opt" },
  /* row 3 */   {     (MR_String) ".request" },
  /* row 4 */   {     (MR_String) ".trans_opt" },
  /* row 5 */   {     (MR_String) ".hrl" },
  /* row 6 */   {     (MR_String) ".hrl.tmp" },
  /* row 7 */   {     (MR_String) ".mih" },
  /* row 8 */   {     (MR_String) ".mih.tmp" },
  /* row 9 */   {     (MR_String) "_init.pic_o" },
  /* row 10 */   {     NULL },
  /* row 11 */   {     (MR_String) ".\044O" },
  /* row 12 */   {     (MR_String) ".lpic_o" },
  /* row 13 */   {     NULL },
  /* row 14 */   {     NULL },
  /* row 15 */   {     NULL },
  /* row 16 */   {     NULL },
  /* row 17 */   {     NULL },
  /* row 18 */   {     NULL },
  /* row 19 */   {     NULL },
  /* row 20 */   {     (MR_String) "_init.lpic_o" },
  /* row 21 */   {     (MR_String) "_init.\044O" },
  /* row 22 */   {     (MR_String) "_init.\044(EXT_FOR_PIC_OBJECTS)" },
  /* row 23 */   {     NULL },
  /* row 24 */   {     NULL },
  /* row 25 */   {     NULL },
  /* row 26 */   {     NULL },
  /* row 27 */   {     NULL },
  /* row 28 */   {     NULL },
  /* row 29 */   {     NULL },
  /* row 30 */   {     NULL },
  /* row 31 */   {     (MR_String) "\044(EXT_FOR_PIC_OBJECTS)" },
  /* row 32 */   {     (MR_String) "_init.o" },
  /* row 33 */   {     NULL },
  /* row 34 */   {     NULL },
  /* row 35 */   {     NULL },
  /* row 36 */   {     NULL },
  /* row 37 */   {     NULL },
  /* row 38 */   {     NULL },
  /* row 39 */   {     (MR_String) ".pic_o" },
  /* row 40 */   {     (MR_String) ".o" },
};


#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "parse_tree.file_names.mh"
#line 750 "file_names.m"
MR_Word parse_tree__file_names__mutable_variable_translations;
#ifdef MR_THREAD_SAFE
    MercuryLock parse_tree__file_names__mutable_variable_translations_lock;
#endif


#line 750 "file_names.m"
void 
parse_tree__file_names__user_init_pred_0(void)
#line 750 "file_names.m"
{
#line 750 "file_names.m"
	parse_tree__file_names__initialise_mutable_translations_0_p_0();
}


static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__file_names__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_parse_tree__file_names__type_ctor_info_count_sum_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_count_sum_0)
  }
};

static const MR_PseudoTypeInfo parse_tree__file_names__parse_tree__file_names__field_types_count_sum_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_count_sum_0_0 = {
  (MR_String) "count_sum",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__file_names__parse_tree__file_names__field_types_count_sum_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_stag_ordered_count_sum_0_0[1] = {
  &parse_tree__file_names__parse_tree__file_names__du_functor_desc_count_sum_0_0
};

static const MR_DuPtagLayout parse_tree__file_names__parse_tree__file_names__du_ptag_ordered_count_sum_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__file_names__parse_tree__file_names__du_stag_ordered_count_sum_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_name_ordered_count_sum_0[1] = {
  &parse_tree__file_names__parse_tree__file_names__du_functor_desc_count_sum_0_0
};

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_count_sum_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__file_names__parse_tree__file_names__type_ctor_info_count_sum_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__file_names____Unify____count_sum_0_0_10001)),
  ((MR_Box) (parse_tree__file_names____Compare____count_sum_0_0_10001)),
  (MR_String) "parse_tree.file_names",
  (MR_String) "count_sum",
  {     parse_tree__file_names__parse_tree__file_names__du_name_ordered_count_sum_0 },
  {     parse_tree__file_names__parse_tree__file_names__du_ptag_ordered_count_sum_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  parse_tree__file_names__parse_tree__file_names__functor_number_map_count_sum_0
};

static const MR_PseudoTypeInfo parse_tree__file_names__parse_tree__file_names__field_types_ext_search_mkdir_0_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_maybe_search_0),
  (MR_PseudoTypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_maybe_create_dirs_0)
};

static const MR_DuArgLocn parse_tree__file_names__parse_tree__file_names__field_locns_ext_search_mkdir_0_0[3] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_search_mkdir_0_0 = {
  (MR_String) "ext_search_mkdir",
  INT16_C(3),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__file_names__parse_tree__file_names__field_types_ext_search_mkdir_0_0,
  NULL,
  parse_tree__file_names__parse_tree__file_names__field_locns_ext_search_mkdir_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_stag_ordered_ext_search_mkdir_0_0[1] = {
  &parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_search_mkdir_0_0
};

static const MR_DuPtagLayout parse_tree__file_names__parse_tree__file_names__du_ptag_ordered_ext_search_mkdir_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__file_names__parse_tree__file_names__du_stag_ordered_ext_search_mkdir_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_name_ordered_ext_search_mkdir_0[1] = {
  &parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_search_mkdir_0_0
};

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_ext_search_mkdir_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_search_mkdir_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__file_names____Unify____ext_search_mkdir_0_0_10001)),
  ((MR_Box) (parse_tree__file_names____Compare____ext_search_mkdir_0_0_10001)),
  (MR_String) "parse_tree.file_names",
  (MR_String) "ext_search_mkdir",
  {     parse_tree__file_names__parse_tree__file_names__du_name_ordered_ext_search_mkdir_0 },
  {     parse_tree__file_names__parse_tree__file_names__du_ptag_ordered_ext_search_mkdir_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  parse_tree__file_names__parse_tree__file_names__functor_number_map_ext_search_mkdir_0
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_create_dirs_0_0 = {
  (MR_String) "do_create_dirs",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_create_dirs_0_1 = {
  (MR_String) "do_not_create_dirs",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_value_ordered_maybe_create_dirs_0[2] = {
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_create_dirs_0_0,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_create_dirs_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_name_ordered_maybe_create_dirs_0[2] = {
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_create_dirs_0_0,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_create_dirs_0_1
};

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_maybe_create_dirs_0[2] = {
  (MR_Integer) 0,
  (MR_Integer) 1
};

const MR_TypeCtorInfo_Struct parse_tree__file_names__parse_tree__file_names__type_ctor_info_maybe_create_dirs_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__file_names____Unify____maybe_create_dirs_0_0_10001)),
  ((MR_Box) (parse_tree__file_names____Compare____maybe_create_dirs_0_0_10001)),
  (MR_String) "parse_tree.file_names",
  (MR_String) "maybe_create_dirs",
  {     parse_tree__file_names__parse_tree__file_names__enum_name_ordered_maybe_create_dirs_0 },
  {     parse_tree__file_names__parse_tree__file_names__enum_value_ordered_maybe_create_dirs_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__file_names__parse_tree__file_names__functor_number_map_maybe_create_dirs_0
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_search_0_0 = {
  (MR_String) "do_search",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_search_0_1 = {
  (MR_String) "do_not_search",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_value_ordered_maybe_search_0[2] = {
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_search_0_0,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_search_0_1
};

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_name_ordered_maybe_search_0[2] = {
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_search_0_1,
  &parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_search_0_0
};

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_maybe_search_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__file_names__parse_tree__file_names__type_ctor_info_maybe_search_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__file_names____Unify____maybe_search_0_0_10001)),
  ((MR_Box) (parse_tree__file_names____Compare____maybe_search_0_0_10001)),
  (MR_String) "parse_tree.file_names",
  (MR_String) "maybe_search",
  {     parse_tree__file_names__parse_tree__file_names__enum_name_ordered_maybe_search_0 },
  {     parse_tree__file_names__parse_tree__file_names__enum_value_ordered_maybe_search_0 },
  (MR_Integer) 2,
  UINT16_C(4),
  parse_tree__file_names__parse_tree__file_names__functor_number_map_maybe_search_0
};

static const MR_PseudoTypeInfo parse_tree__file_names__parse_tree__file_names__field_types_record_key_0_0[4] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_maybe_search_0),
  (MR_PseudoTypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_maybe_create_dirs_0)
};

static const MR_DuArgLocn parse_tree__file_names__parse_tree__file_names__field_locns_record_key_0_0[4] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 1,
    (MR_Integer) 0,
    (MR_Integer) 0
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 1,
    (MR_Integer) 1
  },
  {
    (MR_Integer) 2,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_record_key_0_0 = {
  (MR_String) "record_key",
  INT16_C(4),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__file_names__parse_tree__file_names__field_types_record_key_0_0,
  NULL,
  parse_tree__file_names__parse_tree__file_names__field_locns_record_key_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_stag_ordered_record_key_0_0[1] = {
  &parse_tree__file_names__parse_tree__file_names__du_functor_desc_record_key_0_0
};

static const MR_DuPtagLayout parse_tree__file_names__parse_tree__file_names__du_ptag_ordered_record_key_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__file_names__parse_tree__file_names__du_stag_ordered_record_key_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_name_ordered_record_key_0[1] = {
  &parse_tree__file_names__parse_tree__file_names__du_functor_desc_record_key_0_0
};

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_record_key_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__file_names__parse_tree__file_names__type_ctor_info_record_key_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__file_names____Unify____record_key_0_0_10001)),
  ((MR_Box) (parse_tree__file_names____Compare____record_key_0_0_10001)),
  (MR_String) "parse_tree.file_names",
  (MR_String) "record_key",
  {     parse_tree__file_names__parse_tree__file_names__du_name_ordered_record_key_0 },
  {     parse_tree__file_names__parse_tree__file_names__du_ptag_ordered_record_key_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  parse_tree__file_names__parse_tree__file_names__functor_number_map_record_key_0
};

static const MR_PseudoTypeInfo parse_tree__file_names__parse_tree__file_names__field_types_record_value_0_0[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_record_value_0_0 = {
  (MR_String) "record_value",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  parse_tree__file_names__parse_tree__file_names__field_types_record_value_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_stag_ordered_record_value_0_0[1] = {
  &parse_tree__file_names__parse_tree__file_names__du_functor_desc_record_value_0_0
};

static const MR_DuPtagLayout parse_tree__file_names__parse_tree__file_names__du_ptag_ordered_record_value_0[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__file_names__parse_tree__file_names__du_stag_ordered_record_value_0_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_name_ordered_record_value_0[1] = {
  &parse_tree__file_names__parse_tree__file_names__du_functor_desc_record_value_0_0
};

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_record_value_0[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__file_names__parse_tree__file_names__type_ctor_info_record_value_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__file_names____Unify____record_value_0_0_10001)),
  ((MR_Box) (parse_tree__file_names____Compare____record_value_0_0_10001)),
  (MR_String) "parse_tree.file_names",
  (MR_String) "record_value",
  {     parse_tree__file_names__parse_tree__file_names__du_name_ordered_record_value_0 },
  {     parse_tree__file_names__parse_tree__file_names__du_ptag_ordered_record_value_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  parse_tree__file_names__parse_tree__file_names__functor_number_map_record_value_0
};

static void MR_CALL 
parse_tree__file_names____Compare____record_value_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        succeeded = (ArgX2_7 < ArgY2_8);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (ArgX2_7 > ArgY2_8);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 2;
          else
            *HeadVar__1_1 = (MR_Integer) 0;
        }
      }
    }
  }
}

static MR_bool MR_CALL 
parse_tree__file_names____Unify____record_value_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
        succeeded = (ArgX2_5 == ArgY2_6);
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__file_names____Compare____record_key_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_15 == CastY_16);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_String ArgY2_8 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY3_11 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX4_13 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word ArgY4_14 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word SubResult1_6;

      mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult2_9, ArgX2_7, ArgY2_8);
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Word SubResult3_12;
          MR_Integer Var_21 = (MR_Integer) (ArgX3_10);
          MR_Integer Var_22 = (MR_Integer) (ArgY3_11);

          succeeded = (Var_21 < Var_22);
          if (succeeded)
          {
            SubResult3_12 = (MR_Integer) 1;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = (Var_21 > Var_22);
            if (succeeded)
            {
              SubResult3_12 = (MR_Integer) 2;
              succeeded = MR_TRUE;
            }
            else
            {
              succeeded = MR_TRUE;
              succeeded = !(succeeded);
              if (succeeded)
              {
                SubResult3_12 = (MR_Integer) 0;
                succeeded = MR_TRUE;
              }
            }
          }
          if (succeeded)
            *HeadVar__1_1 = SubResult3_12;
          else
          {
            MR_Integer Var_23 = (MR_Integer) (ArgX4_13);
            MR_Integer Var_24 = (MR_Integer) (ArgY4_14);

            succeeded = (Var_23 < Var_24);
            if (succeeded)
              *HeadVar__1_1 = (MR_Integer) 1;
            else
            {
              succeeded = (Var_23 > Var_24);
              if (succeeded)
                *HeadVar__1_1 = (MR_Integer) 2;
              else
                *HeadVar__1_1 = (MR_Integer) 0;
            }
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
parse_tree__file_names____Unify____record_key_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_String ArgX2_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_String ArgY2_6 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY3_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX4_9 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 1);
      MR_Word ArgY4_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);

      succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
      if (succeeded)
      {
        succeeded = (strcmp(ArgX2_5, ArgY2_6) == 0);
        if (succeeded)
        {
          succeeded = (ArgX3_7 == ArgY3_8);
          if (succeeded)
            succeeded = (ArgX4_9 == ArgY4_10);
        }
      }
    }
    return succeeded;
  }
}

void MR_CALL 
parse_tree__file_names____Compare____maybe_search_0_0(
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
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

MR_bool MR_CALL 
parse_tree__file_names____Unify____maybe_search_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

void MR_CALL 
parse_tree__file_names____Compare____maybe_create_dirs_0_0(
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
      succeeded = (Cast_HeadVar1_4 > Cast_HeadVar2_5);
      if (succeeded)
        *HeadVar__1_1 = (MR_Integer) 2;
      else
        *HeadVar__1_1 = (MR_Integer) 0;
    }
  }
}

MR_bool MR_CALL 
parse_tree__file_names____Unify____maybe_create_dirs_0_0(
  MR_Word HeadVar__2_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded = (HeadVar__2_1 == HeadVar__2_2);

    return succeeded;
  }
}

static void MR_CALL 
parse_tree__file_names____Compare____ext_search_mkdir_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_13 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY2_8 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX3_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgY3_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word SubResult1_6;

      mercury__private_builtin__builtin_compare_string_3_p_0(&SubResult1_6, ArgX1_4, ArgY1_5);
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
        {
          SubResult2_9 = (MR_Integer) 1;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = (Var_17 > Var_18);
          if (succeeded)
          {
            SubResult2_9 = (MR_Integer) 2;
            succeeded = MR_TRUE;
          }
          else
          {
            succeeded = MR_TRUE;
            succeeded = !(succeeded);
            if (succeeded)
            {
              SubResult2_9 = (MR_Integer) 0;
              succeeded = MR_TRUE;
            }
          }
        }
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
        {
          MR_Integer Var_19 = (MR_Integer) (ArgX3_10);
          MR_Integer Var_20 = (MR_Integer) (ArgY3_11);

          succeeded = (Var_19 < Var_20);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 1;
          else
          {
            succeeded = (Var_19 > Var_20);
            if (succeeded)
              *HeadVar__1_1 = (MR_Integer) 2;
            else
              *HeadVar__1_1 = (MR_Integer) 0;
          }
        }
      }
    }
  }
}

static MR_bool MR_CALL 
parse_tree__file_names____Unify____ext_search_mkdir_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgY2_6 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) >> 1)) & (MR_Integer) 1);
      MR_Word ArgX3_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))) & (MR_Integer) 1);
      MR_Word ArgY3_8 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))) & (MR_Integer) 1);

      succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      if (succeeded)
      {
        succeeded = (ArgX2_5 == ArgY2_6);
        if (succeeded)
          succeeded = (ArgX3_7 == ArgY3_8);
      }
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__file_names____Compare____count_sum_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_10 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word SubResult1_6;

      succeeded = (ArgX1_4 < ArgY1_5);
      if (succeeded)
      {
        SubResult1_6 = (MR_Integer) 1;
        succeeded = MR_TRUE;
      }
      else
      {
        succeeded = (ArgX1_4 > ArgY1_5);
        if (succeeded)
        {
          SubResult1_6 = (MR_Integer) 2;
          succeeded = MR_TRUE;
        }
        else
        {
          succeeded = MR_TRUE;
          succeeded = !(succeeded);
          if (succeeded)
          {
            SubResult1_6 = (MR_Integer) 0;
            succeeded = MR_TRUE;
          }
        }
      }
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        succeeded = (ArgX2_7 < ArgY2_8);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (ArgX2_7 > ArgY2_8);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 2;
          else
            *HeadVar__1_1 = (MR_Integer) 0;
        }
      }
    }
  }
}

static MR_bool MR_CALL 
parse_tree__file_names____Unify____count_sum_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_8 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = (ArgX1_3 == ArgY1_4);
      if (succeeded)
        succeeded = (ArgX2_5 == ArgY2_6);
    }
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__file_names__unlock_translations_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL parse_tree__file_names__unlock_translations_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&parse_tree__file_names__mutable_variable_translations_lock,
                    "parse_tree__file_names__mutable_variable_translations_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
parse_tree__file_names__lock_translations_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL parse_tree__file_names__lock_translations_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&parse_tree__file_names__mutable_variable_translations_lock,
                    "parse_tree__file_names__mutable_variable_translations_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
parse_tree__file_names__unsafe_set_translations_1_p_0(
  MR_Word X_1)
{
  {
{
#define MR_PROC_LABEL parse_tree__file_names__unsafe_set_translations_1_p_0

	MR_Word X;

	X = X_1 ;
		{
parse_tree__file_names__mutable_variable_translations = X;


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
parse_tree__file_names__unsafe_get_translations_1_p_0(
  MR_Word * X_1)
{
  {
{
#define MR_PROC_LABEL parse_tree__file_names__unsafe_get_translations_1_p_0

	MR_Word X;

		{
X = parse_tree__file_names__mutable_variable_translations;


		;}
#undef MR_PROC_LABEL
	 *X_1  = X;
}
  }
}

static void MR_CALL 
parse_tree__file_names__pre_initialise_mutable_translations_0_p_0(void)
{
  {
{
#define MR_PROC_LABEL parse_tree__file_names__pre_initialise_mutable_translations_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&parse_tree__file_names__mutable_variable_translations_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
parse_tree__file_names__initialise_mutable_translations_0_p_0(void)
{
  {
    MR_Word X_1;

{
#define MR_PROC_LABEL parse_tree__file_names__initialise_mutable_translations_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&parse_tree__file_names__mutable_variable_translations_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
    X_1 = mercury__map__init_0_f_0((MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_record_key_0), (MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_record_value_0));
{
#define MR_PROC_LABEL parse_tree__file_names__initialise_mutable_translations_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&parse_tree__file_names__mutable_variable_translations_lock,
                    "parse_tree__file_names__mutable_variable_translations_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__file_names__initialise_mutable_translations_0_p_0

	MR_Word X;

	X = X_1 ;
		{
parse_tree__file_names__mutable_variable_translations = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__file_names__initialise_mutable_translations_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&parse_tree__file_names__mutable_variable_translations_lock,
                    "parse_tree__file_names__mutable_variable_translations_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  }
}

static void MR_CALL 
parse_tree__file_names__write_out_ext_sch_dir_entry_5_p_0(
  MR_Word Stream_6,
  MR_String ExtSchDir_7,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cnt_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer Sum_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_String Var_25;
    MR_String Var_35;

    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "ext_sch_dir ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__file_names_scalar_common_5[0]), Cnt_8, &Var_25);
    mercury__io__write_string_4_p_0(Stream_6, Var_25);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) " ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__file_names_scalar_common_5[0]), Sum_9, &Var_35);
    mercury__io__write_string_4_p_0(Stream_6, Var_35);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) " ");
    mercury__io__write_string_4_p_0(Stream_6, ExtSchDir_7);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n");
  }
}

static void MR_CALL 
parse_tree__file_names__write_out_ext_entry_5_p_0(
  MR_Word Stream_6,
  MR_String Ext_7,
  MR_Word HeadVar__3_3)
{
  {
    MR_Integer Cnt_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer Sum_9 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
    MR_String Var_25;
    MR_String Var_35;

    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "ext ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__file_names_scalar_common_5[0]), Cnt_8, &Var_25);
    mercury__io__write_string_4_p_0(Stream_6, Var_25);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) " ");
    mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__file_names_scalar_common_5[0]), Sum_9, &Var_35);
    mercury__io__write_string_4_p_0(Stream_6, Var_35);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) " ");
    mercury__io__write_string_4_p_0(Stream_6, Ext_7);
    mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n");
  }
}

static void MR_CALL 
parse_tree__file_names__gather_translation_stats_10_p_0(
  MR_Word Key_11,
  MR_Word Value_12,
  MR_Integer STATE_VARIABLE_NumKeys_0_27,
  MR_Integer * STATE_VARIABLE_NumKeys_28,
  MR_Integer STATE_VARIABLE_NumLookups_0_29,
  MR_Integer * STATE_VARIABLE_NumLookups_30,
  MR_Word STATE_VARIABLE_ExtMap_0_31,
  MR_Word * STATE_VARIABLE_ExtMap_32,
  MR_Word STATE_VARIABLE_ExtSchDirMap_0_33,
  MR_Word * STATE_VARIABLE_ExtSchDirMap_34)
{
  {
    MR_bool succeeded;
    MR_Integer Count_18;
    MR_String Ext0_20;
    MR_Word Search_21;
    MR_Word MkDir_22;
    MR_String Ext_23;
    MR_String SearchStr_24;
    MR_String MkDirStr_25;
    MR_String ExtSchDir_26;
    MR_String Var_38;
    MR_Word Entry0_47;
    MR_Box conv0_Entry0_47;
    MR_Word Entry0_66;
    MR_Box conv1_Entry0_66;

    *STATE_VARIABLE_NumKeys_28 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumKeys_0_27 + (MR_Unsigned) 1);
    Count_18 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Value_12, (MR_Integer) 1))));
    *STATE_VARIABLE_NumLookups_30 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumLookups_0_29 + (MR_Unsigned) Count_18);
    Ext0_20 = ((MR_String) ((MR_hl_field(MR_mktag(0), Key_11, (MR_Integer) 1))));
    Search_21 = ((((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Key_11, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
    MkDir_22 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(0), Key_11, (MR_Integer) 2))) & (MR_Integer) 1);
    succeeded = (strcmp(Ext0_20, (MR_String) "") == 0);
    if (succeeded)
      Ext_23 = (MR_String) "no_suffix";
    else
      Ext_23 = Ext0_20;
    switch (Search_21) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 1:
        SearchStr_24 = (MR_String) "_nosearch";
        break;
      case (MR_Integer) 0:
        SearchStr_24 = (MR_String) "_search";
        break;
    }
    switch (MkDir_22) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        MkDirStr_25 = (MR_String) "_mkdir";
        break;
      case (MR_Integer) 1:
        MkDirStr_25 = (MR_String) "_nomkdir";
        break;
    }
    Var_38 = mercury__string__f_43_43_2_f_0(SearchStr_24, MkDirStr_25);
    ExtSchDir_26 = mercury__string__f_43_43_2_f_0(Ext_23, Var_38);
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_count_sum_0), STATE_VARIABLE_ExtMap_0_31, ((MR_Box) (Ext_23)), &conv0_Entry0_47);
    if (succeeded)
    {
      Entry0_47 = ((MR_Word) (conv0_Entry0_47));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Integer Cnt0_48 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Entry0_47, (MR_Integer) 0))));
      MR_Integer Sum0_49 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Entry0_47, (MR_Integer) 1))));
      MR_Word Entry_50;
      MR_Integer Var_51 = (MR_Integer) ((MR_Unsigned) Cnt0_48 + (MR_Unsigned) 1);
      MR_Integer Var_53 = (MR_Integer) ((MR_Unsigned) Sum0_49 + (MR_Unsigned) Count_18);

      {
        Entry_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Entry_50, 0) = ((MR_Box) (Var_51));
        MR_hl_field(MR_mktag(0), Entry_50, 1) = ((MR_Box) (Var_53));
      }
      mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_count_sum_0), ((MR_Box) (Ext_23)), ((MR_Box) (Entry_50)), STATE_VARIABLE_ExtMap_0_31, STATE_VARIABLE_ExtMap_32);
    }
    else
    {
      MR_Word Entry_57;

      {
        Entry_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Entry_57, 0) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Entry_57, 1) = ((MR_Box) (Count_18));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_count_sum_0), ((MR_Box) (Ext_23)), ((MR_Box) (Entry_57)), STATE_VARIABLE_ExtMap_0_31, STATE_VARIABLE_ExtMap_32);
    }
    succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_count_sum_0), STATE_VARIABLE_ExtSchDirMap_0_33, ((MR_Box) (ExtSchDir_26)), &conv1_Entry0_66);
    if (succeeded)
    {
      Entry0_66 = ((MR_Word) (conv1_Entry0_66));
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      MR_Integer Cnt0_67 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Entry0_66, (MR_Integer) 0))));
      MR_Integer Sum0_68 = ((MR_Integer) ((MR_hl_field(MR_mktag(0), Entry0_66, (MR_Integer) 1))));
      MR_Word Entry_69;
      MR_Integer Var_70 = (MR_Integer) ((MR_Unsigned) Cnt0_67 + (MR_Unsigned) 1);
      MR_Integer Var_72 = (MR_Integer) ((MR_Unsigned) Sum0_68 + (MR_Unsigned) Count_18);

      {
        Entry_69 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Entry_69, 0) = ((MR_Box) (Var_70));
        MR_hl_field(MR_mktag(0), Entry_69, 1) = ((MR_Box) (Var_72));
      }
      mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_count_sum_0), ((MR_Box) (ExtSchDir_26)), ((MR_Box) (Entry_69)), STATE_VARIABLE_ExtSchDirMap_0_33, STATE_VARIABLE_ExtSchDirMap_34);
    }
    else
    {
      MR_Word Entry_76;

      {
        Entry_76 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), Entry_76, 0) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(MR_mktag(0), Entry_76, 1) = ((MR_Box) (Count_18));
      }
      mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_count_sum_0), ((MR_Box) (ExtSchDir_26)), ((MR_Box) (Entry_76)), STATE_VARIABLE_ExtSchDirMap_0_33, STATE_VARIABLE_ExtSchDirMap_34);
    }
  }
}

static void MR_CALL 
parse_tree__file_names__write_translations_record_if_any_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__file_names__write_out_ext_sch_dir_entry_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
parse_tree__file_names__write_translations_record_if_any_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;

    parse_tree__file_names__write_out_ext_entry_5_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  }
}

static void MR_CALL 
parse_tree__file_names__write_translations_record_if_any_2_p_0_1(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4,
  MR_Box wrapper_arg_5,
  MR_Box * wrapper_arg_6,
  MR_Box wrapper_arg_7,
  MR_Box * wrapper_arg_8,
  MR_Box wrapper_arg_9,
  MR_Box * wrapper_arg_10)
{
  {
    MR_Box closure = closure_arg;
    MR_Integer conv3_STATE_VARIABLE_NumKeys_28;
    MR_Integer conv2_STATE_VARIABLE_NumLookups_30;
    MR_Word conv1_STATE_VARIABLE_ExtMap_32;
    MR_Word conv0_STATE_VARIABLE_ExtSchDirMap_34;

    parse_tree__file_names__gather_translation_stats_10_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), &conv3_STATE_VARIABLE_NumKeys_28, ((MR_Integer) (wrapper_arg_5)), &conv2_STATE_VARIABLE_NumLookups_30, ((MR_Word) (wrapper_arg_7)), &conv1_STATE_VARIABLE_ExtMap_32, ((MR_Word) (wrapper_arg_9)), &conv0_STATE_VARIABLE_ExtSchDirMap_34);
    *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_NumKeys_28));
    *wrapper_arg_6 = ((MR_Box) (conv2_STATE_VARIABLE_NumLookups_30));
    *wrapper_arg_8 = ((MR_Box) (conv1_STATE_VARIABLE_ExtMap_32));
    *wrapper_arg_10 = ((MR_Box) (conv0_STATE_VARIABLE_ExtSchDirMap_34));
  }
}

void MR_CALL 
parse_tree__file_names__write_translations_record_if_any_2_p_0(void)
{
  {
    MR_bool succeeded;
    MR_Word Translations_4;

{
#define MR_PROC_LABEL parse_tree__file_names__write_translations_record_if_any_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&parse_tree__file_names__mutable_variable_translations_lock,
                    "parse_tree__file_names__mutable_variable_translations_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__file_names__write_translations_record_if_any_2_p_0

	MR_Word X;

		{
X = parse_tree__file_names__mutable_variable_translations;


		;}
#undef MR_PROC_LABEL
	 Translations_4  = X;
}
{
#define MR_PROC_LABEL parse_tree__file_names__write_translations_record_if_any_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&parse_tree__file_names__mutable_variable_translations_lock,
                    "parse_tree__file_names__mutable_variable_translations_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
    succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_record_key_0), (MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_record_value_0), Translations_4);
    if (!(succeeded))
    {
      MR_Integer NumKeys_5;
      MR_Integer NumLookups_6;
      MR_Word ExtMap_7;
      MR_Word ExtSchDirMap_8;
      MR_Word Result_9;
      MR_Word Var_18;
      MR_Word Var_19;
      MR_Box conv7_NumKeys_5;
      MR_Box conv6_NumLookups_6;
      MR_Box conv5_ExtMap_7;
      MR_Box conv4_ExtSchDirMap_8;

      Var_18 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_count_sum_0));
      Var_19 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_count_sum_0));
      mercury__map__foldl4_10_p_0((MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_record_key_0), (MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_record_value_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&parse_tree__file_names_scalar_common_1[0]), (MR_Word) (&parse_tree__file_names_scalar_common_1[0]), (MR_Word) (&parse_tree__file_names_scalar_common_1[1]), Translations_4, ((MR_Box) ((MR_Integer) 0)), &conv7_NumKeys_5, ((MR_Box) ((MR_Integer) 0)), &conv6_NumLookups_6, ((MR_Box) (Var_18)), &conv5_ExtMap_7, ((MR_Box) (Var_19)), &conv4_ExtSchDirMap_8);
      NumKeys_5 = ((MR_Integer) (conv7_NumKeys_5));
      NumLookups_6 = ((MR_Integer) (conv6_NumLookups_6));
      ExtMap_7 = ((MR_Word) (conv5_ExtMap_7));
      ExtSchDirMap_8 = ((MR_Word) (conv4_ExtSchDirMap_8));
      mercury__io__open_append_4_p_0((MR_String) "/tmp/TRANSLATIONS_RECORD", &Result_9);
      if (!(((MR_tag((MR_Word) Result_9)) == (MR_Integer) 1)))
      {
        MR_Word Stream_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Result_9, (MR_Integer) 0))));
        MR_Word Var_29;
        MR_Word Var_31;
        MR_String Var_64;
        MR_String Var_74;
        MR_Box conv8_STATE_VARIABLE_IO_30_30;
        MR_Box conv9_STATE_VARIABLE_IO_32_32;

        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "overall_stats ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__file_names_scalar_common_5[0]), NumKeys_5, &Var_64);
        mercury__io__write_string_4_p_0(Stream_10, Var_64);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) " ");
        mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__file_names_scalar_common_5[0]), NumLookups_6, &Var_74);
        mercury__io__write_string_4_p_0(Stream_10, Var_74);
        mercury__io__write_string_4_p_0(Stream_10, (MR_String) "\n");
        {
          Var_29 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_29, 0) = ((MR_Box) (&parse_tree__file_names_scalar_common_6[0]));
          MR_hl_field(MR_mktag(0), Var_29, 1) = ((MR_Box) (parse_tree__file_names__write_translations_record_if_any_2_p_0_2));
          MR_hl_field(MR_mktag(0), Var_29, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_29, 3) = ((MR_Box) (Stream_10));
        }
        mercury__map__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_count_sum_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_29, ExtMap_7, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_30_30);
        {
          Var_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Var_31, 0) = ((MR_Box) (&parse_tree__file_names_scalar_common_6[0]));
          MR_hl_field(MR_mktag(0), Var_31, 1) = ((MR_Box) (parse_tree__file_names__write_translations_record_if_any_2_p_0_3));
          MR_hl_field(MR_mktag(0), Var_31, 2) = ((MR_Box) ((MR_Integer) 1));
          MR_hl_field(MR_mktag(0), Var_31, 3) = ((MR_Box) (Stream_10));
        }
        mercury__map__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_count_sum_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_31, ExtSchDirMap_8, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_32_32);
        mercury__io__close_output_3_p_0(Stream_10);
      }
    }
  }
}

void MR_CALL 
parse_tree__file_names__make_include_file_path_3_p_0(
  MR_String ModuleSourceFileName_4,
  MR_String OrigFileName_5,
  MR_String * Path_6)
{
  {
    MR_bool succeeded;

    succeeded = mercury__dir__path_name_is_absolute_1_p_0(OrigFileName_5);
    if (succeeded)
      *Path_6 = OrigFileName_5;
    else
    {
      MR_String Var_7;

      Var_7 = mercury__dir__dirname_1_f_0(ModuleSourceFileName_4);
      *Path_6 = mercury__dir__f_slash_2_f_0(Var_7, OrigFileName_5);
    }
  }
}

void MR_CALL 
parse_tree__file_names__get_class_dir_name_2_p_0(
  MR_Word Globals_3,
  MR_String * ClassDirName_4)
{
  {
    MR_Word UseGradeSubdirs_5;
    MR_Word UseSubdirs_6;

    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 677, &UseGradeSubdirs_5);
    libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 676, &UseSubdirs_6);
    switch (UseGradeSubdirs_5) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (UseSubdirs_6) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            *ClassDirName_4 = (MR_String) ".";
            break;
          case (MR_Integer) 1:
            *ClassDirName_4 = mercury__dir__f_slash_2_f_0((MR_String) "Mercury", (MR_String) "classs");
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_String Grade_7;
          MR_String TargetArch_8;
          MR_String Var_14;
          MR_String Var_15;
          MR_String Var_16;

          libs__compute_grade__grade_directory_component_2_p_0(Globals_3, &Grade_7);
          libs__globals__lookup_string_option_3_p_0(Globals_3, (MR_Integer) 695, &TargetArch_8);
          Var_16 = mercury__dir__f_slash_2_f_0((MR_String) "Mercury", Grade_7);
          Var_15 = mercury__dir__f_slash_2_f_0(Var_16, TargetArch_8);
          Var_14 = mercury__dir__f_slash_2_f_0(Var_15, (MR_String) "Mercury");
          *ClassDirName_4 = mercury__dir__f_slash_2_f_0(Var_14, (MR_String) "classs");
        }
        break;
    }
  }
}

void MR_CALL 
parse_tree__file_names__module_name_to_make_var_name_2_p_0(
  MR_Word ModuleName_3,
  MR_String * MakeVarName_4)
{
  *MakeVarName_4 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_3);
}

void MR_CALL 
parse_tree__file_names__module_name_to_file_name_stem_2_p_0(
  MR_Word ModuleName_3,
  MR_String * FileName_4)
{
  *FileName_4 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_3);
}

void MR_CALL 
parse_tree__file_names__file_name_to_module_name_2_p_0(
  MR_String FileName_3,
  MR_Word * ModuleName_4)
{
  *ModuleName_4 = mdbcomp__sym_name__string_to_sym_name_1_f_0(FileName_3);
}

void MR_CALL 
parse_tree__file_names__extra_link_obj_file_name_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_String ExtraLinkObjName_11,
  MR_String Ext_12,
  MR_Word MkDir_13,
  MR_String * FileName_14)
{
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_8_p_0(Globals_9, ExtraLinkObjName_11, Ext_12, MkDir_13, FileName_14);
}

void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_101_120_116_114_97_95_108_105_110_107_95_111_98_106_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_8_p_0(
  MR_Word Globals_9,
  MR_String ExtraLinkObjName_11,
  MR_String Ext_12,
  MR_Word MkDir_13,
  MR_String * FileName_14)
{
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0(Globals_9, (MR_Word) ((MR_Unsigned) 0U), ExtraLinkObjName_11, Ext_12, (MR_Integer) 1, MkDir_13, FileName_14);
}

void MR_CALL 
parse_tree__file_names__fact_table_file_name_8_p_0(
  MR_Word Globals_9,
  MR_Word ModuleName_10,
  MR_String FactTableFileName_11,
  MR_String Ext_12,
  MR_Word MkDir_13,
  MR_String * FileName_14)
{
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_97_99_116_95_116_97_98_108_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_8_p_0(Globals_9, FactTableFileName_11, Ext_12, MkDir_13, FileName_14);
}

void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_97_99_116_95_116_97_98_108_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_8_p_0(
  MR_Word Globals_9,
  MR_String FactTableFileName_11,
  MR_String Ext_12,
  MR_Word MkDir_13,
  MR_String * FileName_14)
{
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0(Globals_9, (MR_Word) ((MR_Unsigned) 0U), FactTableFileName_11, Ext_12, (MR_Integer) 1, MkDir_13, FileName_14);
}

void MR_CALL 
parse_tree__file_names__module_name_to_lib_file_name_8_p_0(
  MR_Word Globals_9,
  MR_String Prefix_10,
  MR_Word ModuleName_11,
  MR_String Ext_12,
  MR_Word MkDir_13,
  MR_String * FileName_14)
{
  {
    MR_String BaseFileName_16;
    MR_String BaseNameNoExt_17;

    BaseFileName_16 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_11);
    BaseNameNoExt_17 = mercury__string__f_43_43_2_f_0(Prefix_10, BaseFileName_16);
    parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0(Globals_9, (MR_Word) ((MR_Unsigned) 0U), BaseNameNoExt_17, Ext_12, (MR_Integer) 1, MkDir_13, FileName_14);
  }
}

void MR_CALL 
parse_tree__file_names__module_name_to_search_file_name_6_p_0(
  MR_Word Globals_7,
  MR_String Ext_8,
  MR_Word ModuleName_9,
  MR_String * FileName_10)
{
  {
    MR_bool succeeded = (strcmp(Ext_8, (MR_String) ".m") == 0);

    if (succeeded)
    {
      MR_Word MaybeFileName_26;

      parse_tree__source_file_map__lookup_module_source_file_4_p_0(ModuleName_9, &MaybeFileName_26);
      if ((MaybeFileName_26 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_String Var_40;

        Var_40 = parse_tree__source_file_map__default_source_file_1_f_0(ModuleName_9);
        *FileName_10 = mercury__string__f_43_43_2_f_0((MR_String) "Mercury/.missing.", Var_40);
      }
      else
        *FileName_10 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeFileName_26, (MR_Integer) 0))));
    }
    else
    {
      MR_Word BaseParentDirs_28;
      MR_String BaseNameNoExt_29;

      succeeded = mercury__string__suffix_2_p_0(Ext_8, (MR_String) ".java");
      if (!(succeeded))
        succeeded = mercury__string__suffix_2_p_0(Ext_8, (MR_String) ".class");
      if (succeeded)
      {
        BaseParentDirs_28 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__file_names_scalar_common_3[0]));
        parse_tree__java_names__mangle_sym_name_for_java_4_p_0(ModuleName_9, (MR_Integer) 0, (MR_String) "__", &BaseNameNoExt_29);
      }
      else
      {
        succeeded = mercury__string__suffix_2_p_0(Ext_8, (MR_String) ".erl");
        if (!(succeeded))
        {
          succeeded = mercury__string__suffix_2_p_0(Ext_8, (MR_String) ".hrl");
          if (!(succeeded))
            succeeded = mercury__string__suffix_2_p_0(Ext_8, (MR_String) ".beam");
        }
        if (succeeded)
        {
          MR_Word EffectiveModuleName_73;

          succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(ModuleName_9);
          if (succeeded)
            EffectiveModuleName_73 = mdbcomp__sym_name__add_outermost_qualifier_2_f_0((MR_String) "mercury", ModuleName_9);
          else
            EffectiveModuleName_73 = ModuleName_9;
          BaseParentDirs_28 = (MR_Word) ((MR_Unsigned) 0U);
          BaseNameNoExt_29 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(EffectiveModuleName_73, (MR_String) "__");
        }
        else
        {
          BaseParentDirs_28 = (MR_Word) ((MR_Unsigned) 0U);
          BaseNameNoExt_29 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(ModuleName_9, (MR_String) ".");
        }
      }
      parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0(Globals_7, BaseParentDirs_28, BaseNameNoExt_29, Ext_8, (MR_Integer) 0, (MR_Integer) 1, FileName_10);
    }
  }
}

void MR_CALL 
parse_tree__file_names__module_source_filename_5_p_0(
  MR_Word Globals_6,
  MR_Word ModuleName_7,
  MR_String * SourceFileName_8)
{
  parse_tree__file_names__module_name_to_file_name_7_p_0(Globals_6, (MR_Integer) 1, (MR_String) ".m", ModuleName_7, SourceFileName_8);
}

void MR_CALL 
parse_tree__file_names__module_name_to_file_name_7_p_0(
  MR_Word Globals_8,
  MR_Word MkDir_9,
  MR_String Ext_10,
  MR_Word ModuleName_11,
  MR_String * FileName_12)
{
  {
    MR_bool succeeded = (strcmp(Ext_10, (MR_String) ".m") == 0);

    if (succeeded)
    {
      MR_Word MaybeFileName_27;

      parse_tree__source_file_map__lookup_module_source_file_4_p_0(ModuleName_11, &MaybeFileName_27);
      if ((MaybeFileName_27 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_String Var_41;

        Var_41 = parse_tree__source_file_map__default_source_file_1_f_0(ModuleName_11);
        *FileName_12 = mercury__string__f_43_43_2_f_0((MR_String) "Mercury/.missing.", Var_41);
      }
      else
        *FileName_12 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeFileName_27, (MR_Integer) 0))));
    }
    else
    {
      MR_Word BaseParentDirs_29;
      MR_String BaseNameNoExt_30;

      succeeded = mercury__string__suffix_2_p_0(Ext_10, (MR_String) ".java");
      if (!(succeeded))
        succeeded = mercury__string__suffix_2_p_0(Ext_10, (MR_String) ".class");
      if (succeeded)
      {
        BaseParentDirs_29 = (MR_Word) (MR_mkword(MR_mktag(1), &parse_tree__file_names_scalar_common_3[0]));
        parse_tree__java_names__mangle_sym_name_for_java_4_p_0(ModuleName_11, (MR_Integer) 0, (MR_String) "__", &BaseNameNoExt_30);
      }
      else
      {
        succeeded = mercury__string__suffix_2_p_0(Ext_10, (MR_String) ".erl");
        if (!(succeeded))
        {
          succeeded = mercury__string__suffix_2_p_0(Ext_10, (MR_String) ".hrl");
          if (!(succeeded))
            succeeded = mercury__string__suffix_2_p_0(Ext_10, (MR_String) ".beam");
        }
        if (succeeded)
        {
          MR_Word EffectiveModuleName_74;

          succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(ModuleName_11);
          if (succeeded)
            EffectiveModuleName_74 = mdbcomp__sym_name__add_outermost_qualifier_2_f_0((MR_String) "mercury", ModuleName_11);
          else
            EffectiveModuleName_74 = ModuleName_11;
          BaseParentDirs_29 = (MR_Word) ((MR_Unsigned) 0U);
          BaseNameNoExt_30 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(EffectiveModuleName_74, (MR_String) "__");
        }
        else
        {
          BaseParentDirs_29 = (MR_Word) ((MR_Unsigned) 0U);
          BaseNameNoExt_30 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(ModuleName_11, (MR_String) ".");
        }
      }
      parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0(Globals_8, BaseParentDirs_29, BaseNameNoExt_30, Ext_10, (MR_Integer) 1, MkDir_9, FileName_12);
    }
  }
}

static void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0_1(
  void * env_ptr_arg)
{
  {
    struct parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__commit_5, 1);
  }
}

static void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0_2(
  void * env_ptr_arg)
{
  {
    struct parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s *) (env_ptr_arg);

    (env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = (strcmp((env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57, (env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__ObjExt_66) == 0);
    if (!((env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded))
    {
      MR_String Var_71;

      Var_71 = mercury__string__f_43_43_2_f_0((MR_String) "_init", (env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__ObjExt_66);
      (env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = (strcmp((env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57, Var_71) == 0);
    }
    if ((env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
      parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0_1(env_ptr);
  }
}

static void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0_3(
  void * env_ptr_arg)
{
  {
    struct parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__commit_5) == 0)
      {
        {
          libs__globals__lookup_string_option_3_p_0((env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Globals_11, (MR_Integer) 544, &(env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__ObjExt_66);
          parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0_2(env_ptr);
        }
        {
          libs__globals__lookup_string_option_3_p_0((env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Globals_11, (MR_Integer) 545, &(env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__ObjExt_66);
          parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0_2(env_ptr);
        }
        (env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0(
  MR_Word Globals_11,
  MR_Word BaseParentDirs_13,
  MR_String BaseNameNoExt_14,
  MR_String Ext_15,
  MR_Word Search_16,
  MR_Word MkDir_17,
  MR_String * FileName_18)
{
  {
    struct parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_0_s env;

    (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Globals_11 = Globals_11;
    {
      MR_Word UseSubdirs_20;
      MR_Word UseGradeSubdirs_21;
      MR_String LibExt_22;
      MR_String SharedLibExt_23;
      MR_Integer lo_0;
      MR_Integer hi_1;
      MR_Integer mid_2;
      MR_Integer result_3;

      libs__globals__lookup_bool_option_3_p_0((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Globals_11, (MR_Integer) 676, &UseSubdirs_20);
      libs__globals__lookup_bool_option_3_p_0((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Globals_11, (MR_Integer) 677, &UseGradeSubdirs_21);
      libs__globals__lookup_string_option_3_p_0((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Globals_11, (MR_Integer) 603, &LibExt_22);
      libs__globals__lookup_string_option_3_p_0((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Globals_11, (MR_Integer) 602, &SharedLibExt_23);
      (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = (Search_16 == (MR_Integer) 0);
      if ((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
      {
        // binary string simple lookup switch
        ;
        lo_0 = (MR_Integer) 0;
        hi_1 = (MR_Integer) 3;
        do
        {
          mid_2 = (((MR_Integer) ((MR_Unsigned) lo_0 + (MR_Unsigned) hi_1)) / (MR_Integer) 2);
          result_3 = MR_strcmp(Ext_15, ((&parse_tree__file_names_vector_common_2[5 + mid_2]))->parse_tree__file_names__vector_common_type_2_0__vct_2_f_0);
          if ((result_3 == (MR_Integer) 0))
          {
            (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
            // jump out of search loop
            ;
            goto label_0;
          }
          else
          if ((result_3 < (MR_Integer) 0))
            hi_1 = (MR_Integer) ((MR_Unsigned) mid_2 - (MR_Unsigned) 1);
          else
            lo_0 = (MR_Integer) ((MR_Unsigned) mid_2 + (MR_Unsigned) 1);
        }
        while ((lo_0 <= hi_1));
        (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
      label_0:;
      }
      if ((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
        *FileName_18 = mercury__string__f_43_43_2_f_0(BaseNameNoExt_14, Ext_15);
      else
      {
        (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = (UseSubdirs_20 == (MR_Integer) 0);
        if ((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
          parse_tree__file_names__make_file_name_9_p_0((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Globals_11, BaseParentDirs_13, Search_16, MkDir_17, BaseNameNoExt_14, Ext_15, FileName_18);
        else
        {
          MR_String BaseExt_56;
          MR_String Var_59;

          (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = (UseGradeSubdirs_21 == (MR_Integer) 1);
          if ((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
          {
            Var_59 = (MR_String) ".tmp";
            (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = mercury__string__remove_suffix_3_p_0(Ext_15, Var_59, &BaseExt_56);
            if ((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
              (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57 = BaseExt_56;
            else
              (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57 = Ext_15;
            {
              MR_Integer case_num_4 = (MR_Integer) -1;

              switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57), 0)) {
                case (MR_Integer) 0:
                  case_num_4 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 46:
                  switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57), 1)) {
                    case (MR_Integer) 36:
                      if (MR_offset_streq(2, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57, (MR_String) ".\044A"))
                        case_num_4 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 97:
                      switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57), 2)) {
                        case (MR_Integer) 0:
                          case_num_4 = (MR_Integer) 2;
                          break;
                        case (MR_Integer) 110:
                          if (((((((((((((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57), 3)) == (MR_Integer) 97)) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57), 4)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57), 5)) == (MR_Integer) 121)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57), 6)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57), 7)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57), 8)) == (MR_Integer) 115))))
                            switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57), 9)) {
                              case (MR_Integer) 0:
                                case_num_4 = (MR_Integer) 3;
                                break;
                              case (MR_Integer) 95:
                                switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57), 10)) {
                                  case (MR_Integer) 100:
                                    if (MR_offset_streq(11, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57, (MR_String) ".analysis_date"))
                                      case_num_4 = (MR_Integer) 4;
                                    break;
                                  case (MR_Integer) 115:
                                    if (MR_offset_streq(11, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57, (MR_String) ".analysis_status"))
                                      case_num_4 = (MR_Integer) 5;
                                    break;
                                }
                                break;
                            }
                          break;
                      }
                      break;
                    case (MR_Integer) 98:
                      switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57), 2)) {
                        case (MR_Integer) 97:
                          if (MR_offset_streq(3, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57, (MR_String) ".bat"))
                            case_num_4 = (MR_Integer) 6;
                          break;
                        case (MR_Integer) 101:
                          if (((((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57), 3)) == (MR_Integer) 97)) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57), 4)) == (MR_Integer) 109))))
                            switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57), 5)) {
                              case (MR_Integer) 0:
                                case_num_4 = (MR_Integer) 7;
                                break;
                              case (MR_Integer) 115:
                                if (MR_offset_streq(6, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57, (MR_String) ".beams"))
                                  case_num_4 = (MR_Integer) 8;
                                break;
                            }
                          break;
                      }
                      break;
                    case (MR_Integer) 99:
                      switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57), 2)) {
                        case (MR_Integer) 0:
                          case_num_4 = (MR_Integer) 9;
                          break;
                        case (MR_Integer) 95:
                          if (MR_offset_streq(3, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57, (MR_String) ".c_date"))
                            case_num_4 = (MR_Integer) 10;
                          break;
                        case (MR_Integer) 108:
                          if (MR_offset_streq(3, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57, (MR_String) ".class"))
                            case_num_4 = (MR_Integer) 11;
                          break;
                        case (MR_Integer) 115:
                          switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57), 3)) {
                            case (MR_Integer) 0:
                              case_num_4 = (MR_Integer) 12;
                              break;
                            case (MR_Integer) 95:
                              if (MR_offset_streq(4, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57, (MR_String) ".cs_date"))
                                case_num_4 = (MR_Integer) 13;
                              break;
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 100:
                      switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57), 2)) {
                        case (MR_Integer) 105:
                          if (MR_offset_streq(3, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57, (MR_String) ".dir"))
                            case_num_4 = (MR_Integer) 14;
                          break;
                        case (MR_Integer) 108:
                          if (MR_offset_streq(3, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57, (MR_String) ".dll"))
                            case_num_4 = (MR_Integer) 15;
                          break;
                      }
                      break;
                    case (MR_Integer) 101:
                      if (((((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57), 2)) == (MR_Integer) 114)) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57), 3)) == (MR_Integer) 108))))
                        switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57), 4)) {
                          case (MR_Integer) 0:
                            case_num_4 = (MR_Integer) 16;
                            break;
                          case (MR_Integer) 95:
                            if (MR_offset_streq(5, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57, (MR_String) ".erl_date"))
                              case_num_4 = (MR_Integer) 17;
                            break;
                        }
                      break;
                    case (MR_Integer) 104:
                      if (MR_offset_streq(2, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57, (MR_String) ".hrl"))
                        case_num_4 = (MR_Integer) 18;
                      break;
                    case (MR_Integer) 105:
                      switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57), 2)) {
                        case (MR_Integer) 108:
                          switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57), 3)) {
                            case (MR_Integer) 0:
                              case_num_4 = (MR_Integer) 19;
                              break;
                            case (MR_Integer) 95:
                              if (MR_offset_streq(4, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57, (MR_String) ".il_date"))
                                case_num_4 = (MR_Integer) 20;
                              break;
                          }
                          break;
                        case (MR_Integer) 109:
                          if (MR_offset_streq(3, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57, (MR_String) ".imdg"))
                            case_num_4 = (MR_Integer) 21;
                          break;
                        case (MR_Integer) 110:
                          if (MR_offset_streq(3, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57, (MR_String) ".init"))
                            case_num_4 = (MR_Integer) 22;
                          break;
                      }
                      break;
                    case (MR_Integer) 106:
                      if (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57), 2)) == (MR_Integer) 97))
                        switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57), 3)) {
                          case (MR_Integer) 114:
                            if (MR_offset_streq(4, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57, (MR_String) ".jar"))
                              case_num_4 = (MR_Integer) 23;
                            break;
                          case (MR_Integer) 118:
                            if (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57), 4)) == (MR_Integer) 97))
                              switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57), 5)) {
                                case (MR_Integer) 0:
                                  case_num_4 = (MR_Integer) 24;
                                  break;
                                case (MR_Integer) 95:
                                  if (MR_offset_streq(6, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57, (MR_String) ".java_date"))
                                    case_num_4 = (MR_Integer) 25;
                                  break;
                              }
                            break;
                        }
                      break;
                    case (MR_Integer) 109:
                      if (MR_offset_streq(2, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57, (MR_String) ".mih"))
                        case_num_4 = (MR_Integer) 26;
                      break;
                    case (MR_Integer) 111:
                      if (((((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57), 2)) == (MR_Integer) 112)) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57), 3)) == (MR_Integer) 116))))
                        switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57), 4)) {
                          case (MR_Integer) 0:
                            case_num_4 = (MR_Integer) 27;
                            break;
                          case (MR_Integer) 100:
                            if (MR_offset_streq(5, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57, (MR_String) ".optdate"))
                              case_num_4 = (MR_Integer) 28;
                            break;
                        }
                      break;
                    case (MR_Integer) 112:
                      if (((((((((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57), 2)) == (MR_Integer) 105)) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57), 3)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57), 4)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57), 5)) == (MR_Integer) 115))))
                        switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57), 6)) {
                          case (MR_Integer) 0:
                            case_num_4 = (MR_Integer) 29;
                            break;
                          case (MR_Integer) 95:
                            if (MR_offset_streq(7, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57, (MR_String) ".pic_s_date"))
                              case_num_4 = (MR_Integer) 30;
                            break;
                        }
                      break;
                    case (MR_Integer) 114:
                      if (MR_offset_streq(2, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57, (MR_String) ".request"))
                        case_num_4 = (MR_Integer) 31;
                      break;
                    case (MR_Integer) 115:
                      switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57), 2)) {
                        case (MR_Integer) 0:
                          case_num_4 = (MR_Integer) 32;
                          break;
                        case (MR_Integer) 95:
                          if (MR_offset_streq(3, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57, (MR_String) ".s_date"))
                            case_num_4 = (MR_Integer) 33;
                          break;
                      }
                      break;
                    case (MR_Integer) 116:
                      if (((((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57), 2)) == (MR_Integer) 114)) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57), 3)) == (MR_Integer) 97))))
                        switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57), 4)) {
                          case (MR_Integer) 99:
                            if (MR_offset_streq(5, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57, (MR_String) ".track_flags"))
                              case_num_4 = (MR_Integer) 34;
                            break;
                          case (MR_Integer) 110:
                            if (((((((((((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57), 5)) == (MR_Integer) 115)) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57), 6)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57), 7)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57), 8)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57), 9)) == (MR_Integer) 116))))
                              switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57), 10)) {
                                case (MR_Integer) 0:
                                  case_num_4 = (MR_Integer) 35;
                                  break;
                                case (MR_Integer) 95:
                                  if (MR_offset_streq(11, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57, (MR_String) ".trans_opt_date"))
                                    case_num_4 = (MR_Integer) 36;
                                  break;
                              }
                            break;
                        }
                      break;
                    case (MR_Integer) 117:
                      if (MR_offset_streq(2, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57, (MR_String) ".used"))
                        case_num_4 = (MR_Integer) 37;
                      break;
                  }
                  break;
                case (MR_Integer) 95:
                  if (((((((((((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57), 1)) == (MR_Integer) 105)) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57), 2)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57), 3)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57), 4)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57), 5)) == (MR_Integer) 46))))
                    switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57), 6)) {
                      case (MR_Integer) 36:
                        if (MR_offset_streq(7, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57, (MR_String) "_init.\044O"))
                          case_num_4 = (MR_Integer) 38;
                        break;
                      case (MR_Integer) 98:
                        if (MR_offset_streq(7, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57, (MR_String) "_init.beam"))
                          case_num_4 = (MR_Integer) 39;
                        break;
                      case (MR_Integer) 99:
                        if (MR_offset_streq(7, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57, (MR_String) "_init.c"))
                          case_num_4 = (MR_Integer) 40;
                        break;
                      case (MR_Integer) 101:
                        if (MR_offset_streq(7, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57, (MR_String) "_init.erl"))
                          case_num_4 = (MR_Integer) 41;
                        break;
                    }
                  break;
              }
              if ((case_num_4 < (MR_Integer) 0))
                (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
              else
              {
                // we found a match; look up the results
                ;
                (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
              }
            }
            if (!((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded))
            {
              {
                MR_String Var_67;

                libs__globals__lookup_string_option_3_p_0((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Globals_11, (MR_Integer) 604, &Var_67);
                (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = (strcmp((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57, Var_67) == 0);
              }
              if (!((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded))
              {
                {
                  MR_String Var_68;

                  libs__globals__lookup_string_option_3_p_0((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Globals_11, (MR_Integer) 603, &Var_68);
                  (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = (strcmp((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57, Var_68) == 0);
                }
                if (!((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded))
                {
                  {
                    MR_String Var_69;

                    libs__globals__lookup_string_option_3_p_0((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Globals_11, (MR_Integer) 602, &Var_69);
                    (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = (strcmp((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Ext_57, Var_69) == 0);
                  }
                  if (!((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded))
                    parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_10_p_0_3(&env);
                }
              }
            }
          }
          (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = !((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded);
          if ((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
          {
            {
              MR_Integer case_num_6 = (MR_Integer) -1;

              switch (MR_nth_code_unit(Ext_15, 0)) {
                case (MR_Integer) 0:
                  case_num_6 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 46:
                  switch (MR_nth_code_unit(Ext_15, 1)) {
                    case (MR_Integer) 36:
                      switch (MR_nth_code_unit(Ext_15, 2)) {
                        case (MR_Integer) 40:
                          if (MR_offset_streq(3, Ext_15, (MR_String) ".\044(EXT_FOR_SHARED_LIB)"))
                            case_num_6 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 65:
                          if (MR_offset_streq(3, Ext_15, (MR_String) ".\044A"))
                            case_num_6 = (MR_Integer) 2;
                          break;
                      }
                      break;
                    case (MR_Integer) 97:
                      switch (MR_nth_code_unit(Ext_15, 2)) {
                        case (MR_Integer) 0:
                          case_num_6 = (MR_Integer) 3;
                          break;
                        case (MR_Integer) 108:
                          if (((((MR_nth_code_unit(Ext_15, 3)) == (MR_Integer) 108)) && (((MR_nth_code_unit(Ext_15, 4)) == (MR_Integer) 95))))
                            switch (MR_nth_code_unit(Ext_15, 5)) {
                              case (MR_Integer) 105:
                                if (((((MR_nth_code_unit(Ext_15, 6)) == (MR_Integer) 110)) && (((MR_nth_code_unit(Ext_15, 7)) == (MR_Integer) 116))))
                                  switch (MR_nth_code_unit(Ext_15, 8)) {
                                    case (MR_Integer) 51:
                                      if (MR_offset_streq(9, Ext_15, (MR_String) ".all_int3s"))
                                        case_num_6 = (MR_Integer) 4;
                                      break;
                                    case (MR_Integer) 115:
                                      if (MR_offset_streq(9, Ext_15, (MR_String) ".all_ints"))
                                        case_num_6 = (MR_Integer) 5;
                                      break;
                                  }
                                break;
                              case (MR_Integer) 111:
                                if (MR_offset_streq(6, Ext_15, (MR_String) ".all_opts"))
                                  case_num_6 = (MR_Integer) 6;
                                break;
                              case (MR_Integer) 116:
                                if (MR_offset_streq(6, Ext_15, (MR_String) ".all_trans_opts"))
                                  case_num_6 = (MR_Integer) 7;
                                break;
                            }
                          break;
                      }
                      break;
                    case (MR_Integer) 98:
                      switch (MR_nth_code_unit(Ext_15, 2)) {
                        case (MR_Integer) 97:
                          if (MR_offset_streq(3, Ext_15, (MR_String) ".bat"))
                            case_num_6 = (MR_Integer) 8;
                          break;
                        case (MR_Integer) 101:
                          if (MR_offset_streq(3, Ext_15, (MR_String) ".beams"))
                            case_num_6 = (MR_Integer) 9;
                          break;
                      }
                      break;
                    case (MR_Integer) 99:
                      switch (MR_nth_code_unit(Ext_15, 2)) {
                        case (MR_Integer) 104:
                          if (MR_offset_streq(3, Ext_15, (MR_String) ".check"))
                            case_num_6 = (MR_Integer) 10;
                          break;
                        case (MR_Integer) 108:
                          switch (MR_nth_code_unit(Ext_15, 3)) {
                            case (MR_Integer) 97:
                              if (MR_offset_streq(4, Ext_15, (MR_String) ".classes"))
                                case_num_6 = (MR_Integer) 11;
                              break;
                            case (MR_Integer) 101:
                              if (MR_offset_streq(4, Ext_15, (MR_String) ".clean"))
                                case_num_6 = (MR_Integer) 12;
                              break;
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 100:
                      switch (MR_nth_code_unit(Ext_15, 2)) {
                        case (MR_Integer) 101:
                          if (((((((((MR_nth_code_unit(Ext_15, 3)) == (MR_Integer) 112)) && (((MR_nth_code_unit(Ext_15, 4)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(Ext_15, 5)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(Ext_15, 6)) == (MR_Integer) 100))))
                            switch (MR_nth_code_unit(Ext_15, 7)) {
                              case (MR_Integer) 0:
                                case_num_6 = (MR_Integer) 13;
                                break;
                              case (MR_Integer) 101:
                                if (MR_offset_streq(8, Ext_15, (MR_String) ".dependency_graph"))
                                  case_num_6 = (MR_Integer) 14;
                                break;
                            }
                          break;
                        case (MR_Integer) 108:
                          if (MR_offset_streq(3, Ext_15, (MR_String) ".dll"))
                            case_num_6 = (MR_Integer) 15;
                          break;
                        case (MR_Integer) 121:
                          if (MR_offset_streq(3, Ext_15, (MR_String) ".dylib"))
                            case_num_6 = (MR_Integer) 16;
                          break;
                      }
                      break;
                    case (MR_Integer) 101:
                      switch (MR_nth_code_unit(Ext_15, 2)) {
                        case (MR_Integer) 114:
                          switch (MR_nth_code_unit(Ext_15, 3)) {
                            case (MR_Integer) 108:
                              if (MR_offset_streq(4, Ext_15, (MR_String) ".erls"))
                                case_num_6 = (MR_Integer) 17;
                              break;
                            case (MR_Integer) 114:
                              if (MR_offset_streq(4, Ext_15, (MR_String) ".err"))
                                case_num_6 = (MR_Integer) 18;
                              break;
                          }
                          break;
                        case (MR_Integer) 120:
                          if (MR_offset_streq(3, Ext_15, (MR_String) ".exe"))
                            case_num_6 = (MR_Integer) 19;
                          break;
                      }
                      break;
                    case (MR_Integer) 104:
                      if (MR_offset_streq(2, Ext_15, (MR_String) ".hlds_dump"))
                        case_num_6 = (MR_Integer) 20;
                      break;
                    case (MR_Integer) 105:
                      switch (MR_nth_code_unit(Ext_15, 2)) {
                        case (MR_Integer) 108:
                          if (MR_offset_streq(3, Ext_15, (MR_String) ".ils"))
                            case_num_6 = (MR_Integer) 21;
                          break;
                        case (MR_Integer) 110:
                          switch (MR_nth_code_unit(Ext_15, 3)) {
                            case (MR_Integer) 105:
                              if (((MR_nth_code_unit(Ext_15, 4)) == (MR_Integer) 116))
                                switch (MR_nth_code_unit(Ext_15, 5)) {
                                  case (MR_Integer) 0:
                                    case_num_6 = (MR_Integer) 22;
                                    break;
                                  case (MR_Integer) 46:
                                    if (MR_offset_streq(6, Ext_15, (MR_String) ".init.tmp"))
                                      case_num_6 = (MR_Integer) 23;
                                    break;
                                }
                              break;
                            case (MR_Integer) 115:
                              if (((((((((((MR_nth_code_unit(Ext_15, 4)) == (MR_Integer) 116)) && (((MR_nth_code_unit(Ext_15, 5)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(Ext_15, 6)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(Ext_15, 7)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(Ext_15, 8)) == (MR_Integer) 95))))
                                switch (MR_nth_code_unit(Ext_15, 9)) {
                                  case (MR_Integer) 103:
                                    if (MR_offset_streq(10, Ext_15, (MR_String) ".install_grade_hdrs"))
                                      case_num_6 = (MR_Integer) 24;
                                    break;
                                  case (MR_Integer) 104:
                                    if (MR_offset_streq(10, Ext_15, (MR_String) ".install_hdrs"))
                                      case_num_6 = (MR_Integer) 25;
                                    break;
                                  case (MR_Integer) 105:
                                    if (MR_offset_streq(10, Ext_15, (MR_String) ".install_ints"))
                                      case_num_6 = (MR_Integer) 26;
                                    break;
                                  case (MR_Integer) 111:
                                    if (MR_offset_streq(10, Ext_15, (MR_String) ".install_opts"))
                                      case_num_6 = (MR_Integer) 27;
                                    break;
                                }
                              break;
                            case (MR_Integer) 116:
                              switch (MR_nth_code_unit(Ext_15, 4)) {
                                case (MR_Integer) 51:
                                  if (MR_offset_streq(5, Ext_15, (MR_String) ".int3s"))
                                    case_num_6 = (MR_Integer) 28;
                                  break;
                                case (MR_Integer) 115:
                                  if (MR_offset_streq(5, Ext_15, (MR_String) ".ints"))
                                    case_num_6 = (MR_Integer) 29;
                                  break;
                              }
                              break;
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 106:
                      if (((MR_nth_code_unit(Ext_15, 2)) == (MR_Integer) 97))
                        switch (MR_nth_code_unit(Ext_15, 3)) {
                          case (MR_Integer) 114:
                            if (MR_offset_streq(4, Ext_15, (MR_String) ".jar"))
                              case_num_6 = (MR_Integer) 30;
                            break;
                          case (MR_Integer) 118:
                            if (MR_offset_streq(4, Ext_15, (MR_String) ".javas"))
                              case_num_6 = (MR_Integer) 31;
                            break;
                        }
                      break;
                    case (MR_Integer) 108:
                      if (MR_offset_streq(2, Ext_15, (MR_String) ".lib"))
                        case_num_6 = (MR_Integer) 32;
                      break;
                    case (MR_Integer) 109:
                      switch (MR_nth_code_unit(Ext_15, 2)) {
                        case (MR_Integer) 104:
                          switch (MR_nth_code_unit(Ext_15, 3)) {
                            case (MR_Integer) 0:
                              case_num_6 = (MR_Integer) 33;
                              break;
                            case (MR_Integer) 46:
                              if (MR_offset_streq(4, Ext_15, (MR_String) ".mh.tmp"))
                                case_num_6 = (MR_Integer) 34;
                              break;
                          }
                          break;
                        case (MR_Integer) 108:
                          if (MR_offset_streq(3, Ext_15, (MR_String) ".mlds_dump"))
                            case_num_6 = (MR_Integer) 35;
                          break;
                      }
                      break;
                    case (MR_Integer) 111:
                      switch (MR_nth_code_unit(Ext_15, 2)) {
                        case (MR_Integer) 112:
                          if (MR_offset_streq(3, Ext_15, (MR_String) ".opts"))
                            case_num_6 = (MR_Integer) 36;
                          break;
                        case (MR_Integer) 114:
                          if (MR_offset_streq(3, Ext_15, (MR_String) ".order"))
                            case_num_6 = (MR_Integer) 37;
                          break;
                      }
                      break;
                    case (MR_Integer) 114:
                      if (MR_offset_streq(2, Ext_15, (MR_String) ".realclean"))
                        case_num_6 = (MR_Integer) 38;
                      break;
                    case (MR_Integer) 115:
                      if (MR_offset_streq(2, Ext_15, (MR_String) ".so"))
                        case_num_6 = (MR_Integer) 39;
                      break;
                    case (MR_Integer) 116:
                      if (MR_offset_streq(2, Ext_15, (MR_String) ".trans_opts"))
                        case_num_6 = (MR_Integer) 40;
                      break;
                    case (MR_Integer) 117:
                      if (MR_offset_streq(2, Ext_15, (MR_String) ".ugly"))
                        case_num_6 = (MR_Integer) 41;
                      break;
                  }
                  break;
              }
              if ((case_num_6 < (MR_Integer) 0))
                (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
              else
              {
                // we found a match; look up the results
                ;
                (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
              }
            }
            if (!((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded))
            {
              (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = mercury__string__prefix_2_p_0(Ext_15, (MR_String) ".mih_dump");
              if (!((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded))
                (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = mercury__string__prefix_2_p_0(Ext_15, (MR_String) ".c_dump");
            }
          }
          if ((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
            *FileName_18 = mercury__string__f_43_43_2_f_0(BaseNameNoExt_14, Ext_15);
          else
          {
            MR_String SubDirName_24;
            MR_Word Var_48;

            if ((strcmp(Ext_15, (MR_String) ".dir/*.o") == 0))
              (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
            else
            if ((strcmp(Ext_15, (MR_String) ".dir/*.\044O") == 0))
              (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
            else
              (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
            if ((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
              SubDirName_24 = (MR_String) "dirs";
            else
            {
              MR_Integer slot_7 = ((MR_hash_string6(Ext_15)) & (MR_Integer) 31);
              MR_String str_8 = ((&parse_tree__file_names_vector_common_2[9 + slot_7]))->parse_tree__file_names__vector_common_type_2_0__vct_2_f_0;

              // hashed string simple lookup switch
              ;
              // compute the hash value of the input string
              ;
              // no collisions; no hash chain loop
              ;
              // lookup the string for this hash slot
              ;
              // did we find a match?
              ;
              if ((((str_8 != NULL)) && ((strcmp(str_8, Ext_15) == 0))))
              {
                // we found a match; look up the results
                ;
                (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
                // jump out of search loop
                ;
                goto label_1;
              }
              (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
            label_1:;
              if ((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
                SubDirName_24 = (MR_String) "os";
              else
              {
                MR_String ExtName_25;

                (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = mercury__string__append_3_p_1((MR_String) "_init.", &ExtName_25, Ext_15);
                if ((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
                  mercury__string__append_3_p_2(ExtName_25, (MR_String) "s", &SubDirName_24);
                else
                {
                  MR_String ExtName_53;
                  MR_String ExtName0_26;
                  MR_String Var_39;

                  (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = mercury__string__append_3_p_1((MR_String) ".", &ExtName0_26, Ext_15);
                  if ((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
                  {
                    Var_39 = (MR_String) ".tmp";
                    (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = mercury__string__remove_suffix_3_p_0(ExtName0_26, Var_39, &ExtName_53);
                  }
                  if ((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
                    mercury__string__append_3_p_2(ExtName_53, (MR_String) "s", &SubDirName_24);
                  else
                  {
                    (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = (strcmp(Ext_15, (MR_String) ".dv") == 0);
                    if ((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
                      SubDirName_24 = (MR_String) "deps";
                    else
                    {
                      (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = (strcmp(Ext_15, LibExt_22) == 0);
                      if (!((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded))
                        (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = (strcmp(Ext_15, SharedLibExt_23) == 0);
                      if ((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
                        SubDirName_24 = (MR_String) "lib";
                      else
                      {
                        MR_String ExtName_50;

                        (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = mercury__string__append_3_p_1((MR_String) ".", &ExtName_50, Ext_15);
                        if ((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
                          mercury__string__append_3_p_2(ExtName_50, (MR_String) "s", &SubDirName_24);
                        else
                        {
                          (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded = (strcmp(Ext_15, (MR_String) "") == 0);
                          if ((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__succeeded)
                            SubDirName_24 = (MR_String) "bin";
                          else
                          {
                            MR_String Var_44;
                            MR_String Var_46;

                            Var_46 = mercury__string__f_43_43_2_f_0(Ext_15, (MR_String) "\'");
                            Var_44 = mercury__string__f_43_43_2_f_0((MR_String) "unknown extension \140", Var_46);
                            {
                              mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.file_names.choose_file_name\'/10", Var_44);
                              return;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            {
              Var_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Var_48, 0) = ((MR_Box) (SubDirName_24));
              MR_hl_field(MR_mktag(1), Var_48, 1) = ((MR_Box) (BaseParentDirs_13));
            }
            parse_tree__file_names__make_file_name_9_p_0((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_49_48_95_112_95_48_95_101_110_118_95_48__Globals_11, Var_48, Search_16, MkDir_17, BaseNameNoExt_14, Ext_15, FileName_18);
          }
        }
      }
    }
  }
}

static void MR_CALL 
parse_tree__file_names__make_file_name_9_p_0_1(
  void * env_ptr_arg)
{
  {
    struct parse_tree__file_names__make_file_name_9_p_0_env_0_s * env_ptr = (struct parse_tree__file_names__make_file_name_9_p_0_env_0_s *) (env_ptr_arg);

    MR_builtin_longjmp((env_ptr)->parse_tree__file_names__make_file_name_9_p_0_env_0__commit_1, 1);
  }
}

static void MR_CALL 
parse_tree__file_names__make_file_name_9_p_0_2(
  void * env_ptr_arg)
{
  {
    struct parse_tree__file_names__make_file_name_9_p_0_env_0_s * env_ptr = (struct parse_tree__file_names__make_file_name_9_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded = (strcmp((env_ptr)->parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47, (env_ptr)->parse_tree__file_names__make_file_name_9_p_0_env_0__ObjExt_56) == 0);
    if (!((env_ptr)->parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded))
    {
      MR_String Var_61;

      Var_61 = mercury__string__f_43_43_2_f_0((MR_String) "_init", (env_ptr)->parse_tree__file_names__make_file_name_9_p_0_env_0__ObjExt_56);
      (env_ptr)->parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded = (strcmp((env_ptr)->parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47, Var_61) == 0);
    }
    if ((env_ptr)->parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded)
      parse_tree__file_names__make_file_name_9_p_0_1(env_ptr);
  }
}

static void MR_CALL 
parse_tree__file_names__make_file_name_9_p_0_3(
  void * env_ptr_arg)
{
  {
    struct parse_tree__file_names__make_file_name_9_p_0_env_0_s * env_ptr = (struct parse_tree__file_names__make_file_name_9_p_0_env_0_s *) (env_ptr_arg);

    if (MR_builtin_setjmp((env_ptr)->parse_tree__file_names__make_file_name_9_p_0_env_0__commit_1) == 0)
      {
        {
          libs__globals__lookup_string_option_3_p_0((env_ptr)->parse_tree__file_names__make_file_name_9_p_0_env_0__Globals_10, (MR_Integer) 544, &(env_ptr)->parse_tree__file_names__make_file_name_9_p_0_env_0__ObjExt_56);
          parse_tree__file_names__make_file_name_9_p_0_2(env_ptr);
        }
        {
          libs__globals__lookup_string_option_3_p_0((env_ptr)->parse_tree__file_names__make_file_name_9_p_0_env_0__Globals_10, (MR_Integer) 545, &(env_ptr)->parse_tree__file_names__make_file_name_9_p_0_env_0__ObjExt_56);
          parse_tree__file_names__make_file_name_9_p_0_2(env_ptr);
        }
        (env_ptr)->parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded = MR_FALSE;
      }
    else
      (env_ptr)->parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded = MR_TRUE;
  }
}

static void MR_CALL 
parse_tree__file_names__make_file_name_9_p_0(
  MR_Word Globals_10,
  MR_Word SubDirNames_11,
  MR_Word Search_12,
  MR_Word MkDir_13,
  MR_String BaseNameNoExt_14,
  MR_String Ext_15,
  MR_String * FileName_16)
{
  {
    struct parse_tree__file_names__make_file_name_9_p_0_env_0_s env;

    (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Globals_10 = Globals_10;
    {
      MR_Word UseGradeSubdirs_18;
      MR_Word UseSubdirs_19;
      MR_Word DirComponents_22;
      MR_String BaseExt_46;
      MR_String Var_49;
      MR_Integer lo_2;
      MR_Integer hi_3;
      MR_Integer mid_4;
      MR_Integer result_5;

      libs__globals__lookup_bool_option_3_p_0((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Globals_10, (MR_Integer) 677, &UseGradeSubdirs_18);
      libs__globals__lookup_bool_option_3_p_0((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Globals_10, (MR_Integer) 676, &UseSubdirs_19);
      (env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded = (UseGradeSubdirs_18 == (MR_Integer) 1);
      if ((env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded)
      {
        Var_49 = (MR_String) ".tmp";
        (env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded = mercury__string__remove_suffix_3_p_0(Ext_15, Var_49, &BaseExt_46);
        if ((env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded)
          (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47 = BaseExt_46;
        else
          (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47 = Ext_15;
        {
          MR_Integer case_num_0 = (MR_Integer) -1;

          switch (MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47), 0)) {
            case (MR_Integer) 0:
              case_num_0 = (MR_Integer) 0;
              break;
            case (MR_Integer) 46:
              switch (MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47), 1)) {
                case (MR_Integer) 36:
                  if (MR_offset_streq(2, (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47, (MR_String) ".\044A"))
                    case_num_0 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 97:
                  switch (MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47), 2)) {
                    case (MR_Integer) 0:
                      case_num_0 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 110:
                      if (((((((((((((MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47), 3)) == (MR_Integer) 97)) && (((MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47), 4)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47), 5)) == (MR_Integer) 121)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47), 6)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47), 7)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47), 8)) == (MR_Integer) 115))))
                        switch (MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47), 9)) {
                          case (MR_Integer) 0:
                            case_num_0 = (MR_Integer) 3;
                            break;
                          case (MR_Integer) 95:
                            switch (MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47), 10)) {
                              case (MR_Integer) 100:
                                if (MR_offset_streq(11, (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47, (MR_String) ".analysis_date"))
                                  case_num_0 = (MR_Integer) 4;
                                break;
                              case (MR_Integer) 115:
                                if (MR_offset_streq(11, (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47, (MR_String) ".analysis_status"))
                                  case_num_0 = (MR_Integer) 5;
                                break;
                            }
                            break;
                        }
                      break;
                  }
                  break;
                case (MR_Integer) 98:
                  switch (MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47), 2)) {
                    case (MR_Integer) 97:
                      if (MR_offset_streq(3, (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47, (MR_String) ".bat"))
                        case_num_0 = (MR_Integer) 6;
                      break;
                    case (MR_Integer) 101:
                      if (((((MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47), 3)) == (MR_Integer) 97)) && (((MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47), 4)) == (MR_Integer) 109))))
                        switch (MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47), 5)) {
                          case (MR_Integer) 0:
                            case_num_0 = (MR_Integer) 7;
                            break;
                          case (MR_Integer) 115:
                            if (MR_offset_streq(6, (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47, (MR_String) ".beams"))
                              case_num_0 = (MR_Integer) 8;
                            break;
                        }
                      break;
                  }
                  break;
                case (MR_Integer) 99:
                  switch (MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47), 2)) {
                    case (MR_Integer) 0:
                      case_num_0 = (MR_Integer) 9;
                      break;
                    case (MR_Integer) 95:
                      if (MR_offset_streq(3, (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47, (MR_String) ".c_date"))
                        case_num_0 = (MR_Integer) 10;
                      break;
                    case (MR_Integer) 108:
                      if (MR_offset_streq(3, (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47, (MR_String) ".class"))
                        case_num_0 = (MR_Integer) 11;
                      break;
                    case (MR_Integer) 115:
                      switch (MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47), 3)) {
                        case (MR_Integer) 0:
                          case_num_0 = (MR_Integer) 12;
                          break;
                        case (MR_Integer) 95:
                          if (MR_offset_streq(4, (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47, (MR_String) ".cs_date"))
                            case_num_0 = (MR_Integer) 13;
                          break;
                      }
                      break;
                  }
                  break;
                case (MR_Integer) 100:
                  switch (MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47), 2)) {
                    case (MR_Integer) 105:
                      if (MR_offset_streq(3, (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47, (MR_String) ".dir"))
                        case_num_0 = (MR_Integer) 14;
                      break;
                    case (MR_Integer) 108:
                      if (MR_offset_streq(3, (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47, (MR_String) ".dll"))
                        case_num_0 = (MR_Integer) 15;
                      break;
                  }
                  break;
                case (MR_Integer) 101:
                  if (((((MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47), 2)) == (MR_Integer) 114)) && (((MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47), 3)) == (MR_Integer) 108))))
                    switch (MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47), 4)) {
                      case (MR_Integer) 0:
                        case_num_0 = (MR_Integer) 16;
                        break;
                      case (MR_Integer) 95:
                        if (MR_offset_streq(5, (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47, (MR_String) ".erl_date"))
                          case_num_0 = (MR_Integer) 17;
                        break;
                    }
                  break;
                case (MR_Integer) 104:
                  if (MR_offset_streq(2, (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47, (MR_String) ".hrl"))
                    case_num_0 = (MR_Integer) 18;
                  break;
                case (MR_Integer) 105:
                  switch (MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47), 2)) {
                    case (MR_Integer) 108:
                      switch (MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47), 3)) {
                        case (MR_Integer) 0:
                          case_num_0 = (MR_Integer) 19;
                          break;
                        case (MR_Integer) 95:
                          if (MR_offset_streq(4, (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47, (MR_String) ".il_date"))
                            case_num_0 = (MR_Integer) 20;
                          break;
                      }
                      break;
                    case (MR_Integer) 109:
                      if (MR_offset_streq(3, (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47, (MR_String) ".imdg"))
                        case_num_0 = (MR_Integer) 21;
                      break;
                    case (MR_Integer) 110:
                      if (MR_offset_streq(3, (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47, (MR_String) ".init"))
                        case_num_0 = (MR_Integer) 22;
                      break;
                  }
                  break;
                case (MR_Integer) 106:
                  if (((MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47), 2)) == (MR_Integer) 97))
                    switch (MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47), 3)) {
                      case (MR_Integer) 114:
                        if (MR_offset_streq(4, (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47, (MR_String) ".jar"))
                          case_num_0 = (MR_Integer) 23;
                        break;
                      case (MR_Integer) 118:
                        if (((MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47), 4)) == (MR_Integer) 97))
                          switch (MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47), 5)) {
                            case (MR_Integer) 0:
                              case_num_0 = (MR_Integer) 24;
                              break;
                            case (MR_Integer) 95:
                              if (MR_offset_streq(6, (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47, (MR_String) ".java_date"))
                                case_num_0 = (MR_Integer) 25;
                              break;
                          }
                        break;
                    }
                  break;
                case (MR_Integer) 109:
                  if (MR_offset_streq(2, (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47, (MR_String) ".mih"))
                    case_num_0 = (MR_Integer) 26;
                  break;
                case (MR_Integer) 111:
                  if (((((MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47), 2)) == (MR_Integer) 112)) && (((MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47), 3)) == (MR_Integer) 116))))
                    switch (MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47), 4)) {
                      case (MR_Integer) 0:
                        case_num_0 = (MR_Integer) 27;
                        break;
                      case (MR_Integer) 100:
                        if (MR_offset_streq(5, (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47, (MR_String) ".optdate"))
                          case_num_0 = (MR_Integer) 28;
                        break;
                    }
                  break;
                case (MR_Integer) 112:
                  if (((((((((MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47), 2)) == (MR_Integer) 105)) && (((MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47), 3)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47), 4)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47), 5)) == (MR_Integer) 115))))
                    switch (MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47), 6)) {
                      case (MR_Integer) 0:
                        case_num_0 = (MR_Integer) 29;
                        break;
                      case (MR_Integer) 95:
                        if (MR_offset_streq(7, (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47, (MR_String) ".pic_s_date"))
                          case_num_0 = (MR_Integer) 30;
                        break;
                    }
                  break;
                case (MR_Integer) 114:
                  if (MR_offset_streq(2, (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47, (MR_String) ".request"))
                    case_num_0 = (MR_Integer) 31;
                  break;
                case (MR_Integer) 115:
                  switch (MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47), 2)) {
                    case (MR_Integer) 0:
                      case_num_0 = (MR_Integer) 32;
                      break;
                    case (MR_Integer) 95:
                      if (MR_offset_streq(3, (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47, (MR_String) ".s_date"))
                        case_num_0 = (MR_Integer) 33;
                      break;
                  }
                  break;
                case (MR_Integer) 116:
                  if (((((MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47), 2)) == (MR_Integer) 114)) && (((MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47), 3)) == (MR_Integer) 97))))
                    switch (MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47), 4)) {
                      case (MR_Integer) 99:
                        if (MR_offset_streq(5, (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47, (MR_String) ".track_flags"))
                          case_num_0 = (MR_Integer) 34;
                        break;
                      case (MR_Integer) 110:
                        if (((((((((((MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47), 5)) == (MR_Integer) 115)) && (((MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47), 6)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47), 7)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47), 8)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47), 9)) == (MR_Integer) 116))))
                          switch (MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47), 10)) {
                            case (MR_Integer) 0:
                              case_num_0 = (MR_Integer) 35;
                              break;
                            case (MR_Integer) 95:
                              if (MR_offset_streq(11, (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47, (MR_String) ".trans_opt_date"))
                                case_num_0 = (MR_Integer) 36;
                              break;
                          }
                        break;
                    }
                  break;
                case (MR_Integer) 117:
                  if (MR_offset_streq(2, (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47, (MR_String) ".used"))
                    case_num_0 = (MR_Integer) 37;
                  break;
              }
              break;
            case (MR_Integer) 95:
              if (((((((((((MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47), 1)) == (MR_Integer) 105)) && (((MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47), 2)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47), 3)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47), 4)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47), 5)) == (MR_Integer) 46))))
                switch (MR_nth_code_unit(((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47), 6)) {
                  case (MR_Integer) 36:
                    if (MR_offset_streq(7, (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47, (MR_String) "_init.\044O"))
                      case_num_0 = (MR_Integer) 38;
                    break;
                  case (MR_Integer) 98:
                    if (MR_offset_streq(7, (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47, (MR_String) "_init.beam"))
                      case_num_0 = (MR_Integer) 39;
                    break;
                  case (MR_Integer) 99:
                    if (MR_offset_streq(7, (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47, (MR_String) "_init.c"))
                      case_num_0 = (MR_Integer) 40;
                    break;
                  case (MR_Integer) 101:
                    if (MR_offset_streq(7, (env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47, (MR_String) "_init.erl"))
                      case_num_0 = (MR_Integer) 41;
                    break;
                }
              break;
          }
          if ((case_num_0 < (MR_Integer) 0))
            (env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded = MR_FALSE;
          else
          {
            // we found a match; look up the results
            ;
            (env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded = MR_TRUE;
          }
        }
        if (!((env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded))
        {
          {
            MR_String Var_57;

            libs__globals__lookup_string_option_3_p_0((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Globals_10, (MR_Integer) 604, &Var_57);
            (env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded = (strcmp((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47, Var_57) == 0);
          }
          if (!((env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded))
          {
            {
              MR_String Var_58;

              libs__globals__lookup_string_option_3_p_0((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Globals_10, (MR_Integer) 603, &Var_58);
              (env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded = (strcmp((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47, Var_58) == 0);
            }
            if (!((env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded))
            {
              {
                MR_String Var_59;

                libs__globals__lookup_string_option_3_p_0((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Globals_10, (MR_Integer) 602, &Var_59);
                (env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded = (strcmp((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Ext_47, Var_59) == 0);
              }
              if (!((env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded))
                parse_tree__file_names__make_file_name_9_p_0_3(&env);
            }
          }
        }
        if ((env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded)
        {
          (env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded = (Search_12 == (MR_Integer) 0);
          if ((env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded)
          {
            // binary string simple lookup switch
            ;
            lo_2 = (MR_Integer) 0;
            hi_3 = (MR_Integer) 4;
            do
            {
              mid_4 = (((MR_Integer) ((MR_Unsigned) lo_2 + (MR_Unsigned) hi_3)) / (MR_Integer) 2);
              result_5 = MR_strcmp(Ext_15, ((&parse_tree__file_names_vector_common_2[0 + mid_4]))->parse_tree__file_names__vector_common_type_2_0__vct_2_f_0);
              if ((result_5 == (MR_Integer) 0))
              {
                (env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded = MR_TRUE;
                // jump out of search loop
                ;
                goto label_0;
              }
              else
              if ((result_5 < (MR_Integer) 0))
                hi_3 = (MR_Integer) ((MR_Unsigned) mid_4 - (MR_Unsigned) 1);
              else
                lo_2 = (MR_Integer) ((MR_Unsigned) mid_4 + (MR_Unsigned) 1);
            }
            while ((lo_2 <= hi_3));
            (env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded = MR_FALSE;
          label_0:;
          }
          (env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded = !((env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded);
        }
      }
      if ((env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded)
      {
        MR_String Grade_20;
        MR_String TargetArch_21;
        MR_Word Var_34;
        MR_Word Var_35;
        MR_Word Var_36;

        libs__compute_grade__grade_directory_component_2_p_0((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Globals_10, &Grade_20);
        libs__globals__lookup_string_option_3_p_0((env).parse_tree__file_names__make_file_name_9_p_0_env_0__Globals_10, (MR_Integer) 695, &TargetArch_21);
        {
          Var_36 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_36, 0) = ((MR_Box) ((MR_String) "Mercury"));
          MR_hl_field(MR_mktag(1), Var_36, 1) = ((MR_Box) (SubDirNames_11));
        }
        {
          Var_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_35, 0) = ((MR_Box) (TargetArch_21));
          MR_hl_field(MR_mktag(1), Var_35, 1) = ((MR_Box) (Var_36));
        }
        {
          Var_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_34, 0) = ((MR_Box) (Grade_20));
          MR_hl_field(MR_mktag(1), Var_34, 1) = ((MR_Box) (Var_35));
        }
        {
          DirComponents_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), DirComponents_22, 0) = ((MR_Box) ((MR_String) "Mercury"));
          MR_hl_field(MR_mktag(1), DirComponents_22, 1) = ((MR_Box) (Var_34));
        }
      }
      else
      {
        (env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded = (UseSubdirs_19 == (MR_Integer) 1);
        if ((env).parse_tree__file_names__make_file_name_9_p_0_env_0__succeeded)
          {
            DirComponents_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), DirComponents_22, 0) = ((MR_Box) ((MR_String) "Mercury"));
            MR_hl_field(MR_mktag(1), DirComponents_22, 1) = ((MR_Box) (SubDirNames_11));
          }
        else
          DirComponents_22 = SubDirNames_11;
      }
      if ((DirComponents_22 == (MR_Word) ((MR_Unsigned) 0U)))
        *FileName_16 = mercury__string__f_43_43_2_f_0(BaseNameNoExt_14, Ext_15);
      else
      {
        MR_Word Components_27;
        MR_Word Var_40;
        MR_String Var_41;

        switch (MkDir_13) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_String DirName_25;
              MR_Word Var_26;

              DirName_25 = mercury__dir__relative_path_name_from_components_1_f_0(DirComponents_22);
              mercury__dir__make_directory_4_p_0(DirName_25, &Var_26);
            }
            break;
          case (MR_Integer) 1:
            {
            }
            break;
        }
        Var_41 = mercury__string__f_43_43_2_f_0(BaseNameNoExt_14, Ext_15);
        {
          Var_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_40, 0) = ((MR_Box) (Var_41));
          MR_hl_field(MR_mktag(1), Var_40, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        Components_27 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), DirComponents_22, Var_40);
        *FileName_16 = mercury__dir__relative_path_name_from_components_1_f_0(Components_27);
      }
    }
  }
}

MR_Word MR_CALL 
parse_tree__file_names__qualify_mercury_std_library_module_name_1_f_0(
  MR_Word ModuleName_3)
{
  {
    MR_bool succeeded;
    MR_Word QualModuleName_4;

    succeeded = parse_tree__file_names__mercury_std_library_module_name_1_p_0(ModuleName_3);
    if (succeeded)
      QualModuleName_4 = mdbcomp__sym_name__add_outermost_qualifier_2_f_0((MR_String) "mercury", ModuleName_3);
    else
      QualModuleName_4 = ModuleName_3;
    return QualModuleName_4;
  }
}

MR_bool MR_CALL 
parse_tree__file_names__mercury_std_library_module_name_1_p_0(
  MR_Word ModuleName_2)
{
  {
    MR_bool succeeded;

    if (((MR_tag((MR_Word) ModuleName_2)) == (MR_Integer) 1))
    {
      {
        MR_String ModuleNameStr_6;

        ModuleNameStr_6 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_2);
        succeeded = mercury__library__mercury_std_library_module_1_p_0(ModuleNameStr_6);
      }
      if (!(succeeded))
      {
        MR_Word StrippedModuleName_7;
        MR_String StrippedModuleNameStr_8;
        MR_String Var_10;

        succeeded = mdbcomp__sym_name__strip_outermost_qualifier_3_p_0(ModuleName_2, &Var_10, &StrippedModuleName_7);
        if (succeeded)
        {
          succeeded = (strcmp((MR_String) "mercury", Var_10) == 0);
          if (succeeded)
          {
            StrippedModuleNameStr_8 = mdbcomp__sym_name__sym_name_to_string_1_f_0(StrippedModuleName_7);
            succeeded = mercury__library__mercury_std_library_module_1_p_0(StrippedModuleNameStr_8);
          }
        }
      }
    }
    else
    {
      MR_String Name_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), ModuleName_2, (MR_Integer) 0))));

      succeeded = mercury__library__mercury_std_library_module_1_p_0(Name_3);
    }
    return succeeded;
  }
}

static MR_bool MR_CALL 
parse_tree__file_names____Unify____count_sum_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__file_names____Unify____count_sum_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__file_names____Compare____count_sum_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__file_names____Compare____count_sum_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__file_names____Unify____ext_search_mkdir_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__file_names____Unify____ext_search_mkdir_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__file_names____Compare____ext_search_mkdir_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__file_names____Compare____ext_search_mkdir_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__file_names____Unify____maybe_create_dirs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__file_names____Unify____maybe_create_dirs_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__file_names____Compare____maybe_create_dirs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__file_names____Compare____maybe_create_dirs_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__file_names____Unify____maybe_search_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__file_names____Unify____maybe_search_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__file_names____Compare____maybe_search_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__file_names____Compare____maybe_search_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__file_names____Unify____record_key_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__file_names____Unify____record_key_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__file_names____Compare____record_key_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__file_names____Compare____record_key_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
parse_tree__file_names____Unify____record_value_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = parse_tree__file_names____Unify____record_value_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
parse_tree__file_names____Compare____record_value_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    parse_tree__file_names____Compare____record_value_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__parse_tree__file_names__init(void)
{
}

void mercury__parse_tree__file_names__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&parse_tree__file_names__parse_tree__file_names__type_ctor_info_count_sum_0);
	MR_register_type_ctor_info(&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_search_mkdir_0);
	MR_register_type_ctor_info(&parse_tree__file_names__parse_tree__file_names__type_ctor_info_maybe_create_dirs_0);
	MR_register_type_ctor_info(&parse_tree__file_names__parse_tree__file_names__type_ctor_info_maybe_search_0);
	MR_register_type_ctor_info(&parse_tree__file_names__parse_tree__file_names__type_ctor_info_record_key_0);
	MR_register_type_ctor_info(&parse_tree__file_names__parse_tree__file_names__type_ctor_info_record_value_0);
}

void mercury__parse_tree__file_names__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

void mercury__parse_tree__file_names__required_init(void)
{
	parse_tree__file_names__user_init_pred_0();
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__file_names__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.file_names.
