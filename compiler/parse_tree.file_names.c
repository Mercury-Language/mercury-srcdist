/*
** Automatically generated from `file_names.m'
** by the Mercury compiler,
** version rotd-2023-01-07
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
#include "cord.mih"
#include "deconstruct.mih"
#include "dir.mih"
#include "enum.mih"
#include "getopt.mih"
#include "int.mih"
#include "io.mih"
#include "library.mih"
#include "libs.mih"
#include "list.mih"
#include "map.mih"
#include "maybe.mih"
#include "mdbcomp.mih"
#include "one_or_more.mih"
#include "one_or_more_map.mih"
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
#include "term_context.mih"
#include "time.mih"
#include "tree234.mih"
#include "type_desc.mih"
#include "unit.mih"
#include "univ.mih"
#include "varset.mih"
#include "libs.compute_grade.mih"
#include "libs.file_util.mih"
#include "libs.globals.mih"
#include "libs.maybe_succeeded.mih"
#include "libs.op_mode.mih"
#include "libs.optimization_options.mih"
#include "libs.options.mih"
#include "libs.trace_params.mih"
#include "mdbcomp.feedback.mih"
#include "mdbcomp.prim_data.mih"
#include "mdbcomp.sym_name.mih"
#include "parse_tree.error_spec.mih"
#include "parse_tree.java_names.mih"
#include "parse_tree.prog_data.mih"
#include "parse_tree.prog_data_pragma.mih"
#include "parse_tree.prog_item.mih"
#include "parse_tree.set_of_var.mih"
#include "parse_tree.source_file_map.mih"
#include "string.format.mih"
#include "string.parse_util.mih"



struct parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s {
  MR_Word parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Globals_9;
  MR_bool parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded;
  MR_String parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31;
  jmp_buf parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_1;
  MR_String parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ObjExtStr_38;
  MR_String parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74;
  jmp_buf parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_6;
  MR_String parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ObjExtStr_81;
};


static const MR_FA_PseudoTypeInfo_Struct2 parse_tree__file_names__tree234__pti_tree234_2__plain_builtin__type_ctor_info_string_0__plain_parse_tree__file_names__type_ctor_info_count_sum_0;

static const MR_PseudoTypeInfo parse_tree__file_names__parse_tree__file_names__field_types_count_sum_0_0[2];

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_count_sum_0_0;

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_stag_ordered_count_sum_0_0[1];

static const MR_DuPtagLayout parse_tree__file_names__parse_tree__file_names__du_ptag_ordered_count_sum_0[1];

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_name_ordered_count_sum_0[1];

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_count_sum_0[1];

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_0;

static const MR_PseudoTypeInfo parse_tree__file_names__parse_tree__file_names__field_types_ext_0_1[1];

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_1;

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_stag_ordered_ext_0_0[1];

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_stag_ordered_ext_0_1[1];

static const MR_DuPtagLayout parse_tree__file_names__parse_tree__file_names__du_ptag_ordered_ext_0[2];

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_name_ordered_ext_0[2];

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_ext_0[2];

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_create_dirs_0_0;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_create_dirs_0_1;

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_ordinal_ordered_maybe_create_dirs_0[2];

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_name_ordered_maybe_create_dirs_0[2];

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_maybe_create_dirs_0[2];

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_search_0_0;

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_search_0_1;

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_ordinal_ordered_maybe_search_0[2];

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_name_ordered_maybe_search_0[2];

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_maybe_search_0[2];

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_other_ext_0[1];

static const MR_NotagFunctorDesc parse_tree__file_names__parse_tree__file_names__notag_functor_desc_other_ext_0;

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
parse_tree__file_names____Compare____count_sum_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3);

static MR_bool MR_CALL 
parse_tree__file_names____Unify____count_sum_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2);

static void MR_CALL 
parse_tree__file_names__unsafe_set_mkdirs_1_p_0(
  MR_Word X_1);

static void MR_CALL 
parse_tree__file_names__unsafe_get_mkdirs_1_p_0(
  MR_Word * X_1);

static void MR_CALL 
parse_tree__file_names__unlock_mkdirs_0_p_0(void);

static void MR_CALL 
parse_tree__file_names__lock_mkdirs_0_p_0(void);

static void MR_CALL 
parse_tree__file_names__pre_initialise_mutable_mkdirs_0_p_0(void);

static void MR_CALL 
parse_tree__file_names__initialise_mutable_mkdirs_0_p_0(void);

static void MR_CALL 
parse_tree__file_names__unsafe_set_translations_1_p_0(
  MR_Word X_1);

static void MR_CALL 
parse_tree__file_names__unsafe_get_translations_1_p_0(
  MR_Word * X_1);

static void MR_CALL 
parse_tree__file_names__unlock_translations_0_p_0(void);

static void MR_CALL 
parse_tree__file_names__lock_translations_0_p_0(void);

static void MR_CALL 
parse_tree__file_names__pre_initialise_mutable_translations_0_p_0(void);

static void MR_CALL 
parse_tree__file_names__initialise_mutable_translations_0_p_0(void);

static void MR_CALL 
parse_tree__file_names__write_out_mkdirs_entry_5_p_0(
  MR_Word Stream_6,
  MR_String DirName_7,
  MR_Integer Cnt_8);

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
  MR_Integer STATE_VARIABLE_NumKeys_0_28,
  MR_Integer * STATE_VARIABLE_NumKeys_29,
  MR_Integer STATE_VARIABLE_NumLookups_0_30,
  MR_Integer * STATE_VARIABLE_NumLookups_31,
  MR_Word STATE_VARIABLE_ExtMap_0_32,
  MR_Word * STATE_VARIABLE_ExtMap_33,
  MR_Word STATE_VARIABLE_ExtSchDirMap_0_34,
  MR_Word * STATE_VARIABLE_ExtSchDirMap_35);

static MR_bool MR_CALL 
parse_tree__file_names__valid_other_ext_1_p_0(
  MR_Word HeadVar__1_1);

static void MR_CALL 
parse_tree__file_names__write_translations_record_if_any_2_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

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

static MR_bool MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_115_101_97_114_99_104_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_7_p_0_1(
  MR_Box closure_arg);

static MR_bool MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_8_p_0_1(
  MR_Box closure_arg);

static void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_8_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_8_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_8_p_0_3(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_8_p_0_4(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_8_p_0_5(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_8_p_0_6(
  void * env_ptr_arg);

static void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_8_p_0(
  MR_Word Globals_9,
  MR_Word Search_11,
  MR_Word OtherExt_12,
  MR_Word BaseParentDirs_13,
  MR_String BaseNameNoExt_14,
  MR_Word * DirComponents_15,
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
parse_tree__file_names____Unify____ext_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__file_names____Compare____ext_0_0_10001(
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
parse_tree__file_names____Unify____other_ext_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
parse_tree__file_names____Compare____other_ext_0_0_10001(
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

static /* final */ const MR_Box parse_tree__file_names_scalar_common_2[1][1];

static /* final */ const MR_Box parse_tree__file_names_scalar_common_3[1][2];

static /* final */ const MR_Box parse_tree__file_names_scalar_common_6[1][4];

static /* final */ const MR_Box parse_tree__file_names_scalar_common_7[1][13];

static /* final */ const MR_Box parse_tree__file_names_scalar_common_8[2][8];


struct parse_tree__file_names__vector_common_type_4_0_s {
  const MR_String parse_tree__file_names__vector_common_type_4_0__vct_4_f_0;
  const MR_Integer parse_tree__file_names__vector_common_type_4_0__vct_4_f_1;
  const MR_String parse_tree__file_names__vector_common_type_4_0__vct_4_f_2;
};

static /* final */ const struct parse_tree__file_names__vector_common_type_4_0_s parse_tree__file_names_vector_common_4[32];

struct parse_tree__file_names__vector_common_type_5_0_s {
  const MR_String parse_tree__file_names__vector_common_type_5_0__vct_5_f_0;
};

static /* final */ const struct parse_tree__file_names__vector_common_type_5_0_s parse_tree__file_names_vector_common_5[5];



static /* final */ const MR_Box parse_tree__file_names_scalar_common_1[2][3] = {
  /* row   0 */
  {
    ((MR_Box) (&mercury__tree234__tree234__type_ctor_info_tree234_2)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_count_sum_0))
  },
  /* row   1 */
  {
    ((MR_Box) (&parse_tree__file_names_scalar_common_7[0])),
    ((MR_Box) (parse_tree__file_names__write_translations_record_if_any_2_p_0_1)),
    ((MR_Box) ((MR_Integer) 0))
  },
};

static /* final */ const MR_Box parse_tree__file_names_scalar_common_2[1][1] = {
  /* row   0 */
  {
    (MR_Box) (((((MR_Unsigned) 0U << 4)) | (((((MR_Unsigned) 0U << 3)) | (((((MR_Unsigned) 0U << 2)) | (((MR_Unsigned) 0U << 1))))))))
  },
};

static /* final */ const MR_Box parse_tree__file_names_scalar_common_3[1][2] = {
  /* row   0 */
  {
    ((MR_Box) ((MR_String) "jmercury")),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box parse_tree__file_names_scalar_common_6[1][4] = {
  /* row   0 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_other_ext_0))
  },
};

static /* final */ const MR_Box parse_tree__file_names_scalar_common_7[1][13] = {
  /* row   0 */
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

static /* final */ const MR_Box parse_tree__file_names_scalar_common_8[2][8] = {
  /* row   0 */
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
  /* row   1 */
  {
    NULL,
    ((MR_Box) (NULL)),
    ((MR_Box) ((MR_Integer) 5)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};


static /* final */ const struct parse_tree__file_names__vector_common_type_4_0_s parse_tree__file_names_vector_common_4[32] = {
  /* row   0 */
  {
    (MR_String) "",
    (MR_Integer) -1,
    (MR_String) "bin"
  },
  /* row   1 */
  {
    (MR_String) "_init.lpic_o",
    (MR_Integer) -1,
    (MR_String) "os"
  },
  /* row   2 */
  {
    (MR_String) "\044(EXT_FOR_PIC_OBJECTS)",
    (MR_Integer) 4,
    (MR_String) "os"
  },
  /* row   3 */
  {
    (MR_String) ".o",
    (MR_Integer) 5,
    (MR_String) "os"
  },
  /* row   4 */
  {
    (MR_String) ".pic_o",
    (MR_Integer) -1,
    (MR_String) "os"
  },
  /* row   5 */
  {
    (MR_String) "_init.\044(EXT_FOR_PIC_OBJECTS)",
    (MR_Integer) 7,
    (MR_String) "os"
  },
  /* row   6 */
  {
    (MR_String) ".\044O",
    (MR_Integer) -1,
    (MR_String) "os"
  },
  /* row   7 */
  {
    (MR_String) "_init.o",
    (MR_Integer) -1,
    (MR_String) "os"
  },
  /* row   8 */
  {
    (MR_String) "_init.\044O",
    (MR_Integer) -1,
    (MR_String) "os"
  },
  /* row   9 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  10 */
  {
    (MR_String) "_init.pic_o",
    (MR_Integer) -1,
    (MR_String) "os"
  },
  /* row  11 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  12 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  13 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  14 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  15 */
  {
    (MR_String) ".lpic_o",
    (MR_Integer) -1,
    (MR_String) "os"
  },
  /* row  16 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  17 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  18 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  19 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  20 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  21 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  22 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  23 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  24 */
  {
    (MR_String) ".dir/*.\044O",
    (MR_Integer) -1,
    (MR_String) "dirs"
  },
  /* row  25 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  26 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  27 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  28 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  29 */
  {
    (MR_String) ".dir/*.o",
    (MR_Integer) -1,
    (MR_String) "dirs"
  },
  /* row  30 */
  {
    NULL,
    (MR_Integer) -2,
    (MR_String) ((MR_Integer) 0)
  },
  /* row  31 */
  {
    (MR_String) ".dv",
    (MR_Integer) -1,
    (MR_String) "deps"
  },
};

static /* final */ const struct parse_tree__file_names__vector_common_type_5_0_s parse_tree__file_names_vector_common_5[5] = {
  /* row   0 */   { (MR_String) ".analysis" },
  /* row   1 */   { (MR_String) ".imdg" },
  /* row   2 */   { (MR_String) ".opt" },
  /* row   3 */   { (MR_String) ".request" },
  /* row   4 */   { (MR_String) ".trans_opt" },
};


#include "array.mh"
#include "bitmap.mh"
#include "dir.mh"
#include "io.mh"
#include "string.mh"
#include "time.mh"
#include "io.stream_ops.mh"
#include "parse_tree.file_names.mh"
#line 905 "file_names.m"
MR_Word parse_tree__file_names__mutable_variable_translations;
#ifdef MR_THREAD_SAFE
    MercuryLock parse_tree__file_names__mutable_variable_translations_lock;
#endif

#line 928 "file_names.m"
MR_Word parse_tree__file_names__mutable_variable_mkdirs;
#ifdef MR_THREAD_SAFE
    MercuryLock parse_tree__file_names__mutable_variable_mkdirs_lock;
#endif


#line 928 "file_names.m"
void 
parse_tree__file_names__user_init_pred_119_0(void)
#line 928 "file_names.m"
{
#line 928 "file_names.m"
	parse_tree__file_names__initialise_mutable_mkdirs_0_p_0();
}

#line 905 "file_names.m"
void 
parse_tree__file_names__user_init_pred_116_0(void)
#line 905 "file_names.m"
{
#line 905 "file_names.m"
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
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__file_names____Unify____count_sum_0_0_10001)),
  ((MR_Box) (parse_tree__file_names____Compare____count_sum_0_0_10001)),
  (MR_String) "parse_tree.file_names",
  (MR_String) "count_sum",
  { parse_tree__file_names__parse_tree__file_names__du_name_ordered_count_sum_0 },
  { parse_tree__file_names__parse_tree__file_names__du_ptag_ordered_count_sum_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__file_names__parse_tree__file_names__functor_number_map_count_sum_0,

};

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_0 = {
  (MR_String) "ext_src",
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

static const MR_PseudoTypeInfo parse_tree__file_names__parse_tree__file_names__field_types_ext_0_1[1] = {
  (MR_PseudoTypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_other_ext_0)
};

static const MR_DuFunctorDesc parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_1 = {
  (MR_String) "ext_other",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  parse_tree__file_names__parse_tree__file_names__field_types_ext_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_stag_ordered_ext_0_0[1] = {
  &parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_0
};

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_stag_ordered_ext_0_1[1] = {
  &parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_1
};

static const MR_DuPtagLayout parse_tree__file_names__parse_tree__file_names__du_ptag_ordered_ext_0[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    parse_tree__file_names__parse_tree__file_names__du_stag_ordered_ext_0_0,
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    parse_tree__file_names__parse_tree__file_names__du_stag_ordered_ext_0_1,
    INT8_C(-1),
    UINT8_C(1),
    UINT8_C(1)
  }
};

static const MR_DuFunctorDescPtr parse_tree__file_names__parse_tree__file_names__du_name_ordered_ext_0[2] = {
  &parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_1,
  &parse_tree__file_names__parse_tree__file_names__du_functor_desc_ext_0_0
};

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_ext_0[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__file_names____Unify____ext_0_0_10001)),
  ((MR_Box) (parse_tree__file_names____Compare____ext_0_0_10001)),
  (MR_String) "parse_tree.file_names",
  (MR_String) "ext",
  { parse_tree__file_names__parse_tree__file_names__du_name_ordered_ext_0 },
  { parse_tree__file_names__parse_tree__file_names__du_ptag_ordered_ext_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__file_names__parse_tree__file_names__functor_number_map_ext_0,

};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_create_dirs_0_0 = {
  (MR_String) "do_create_dirs",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_create_dirs_0_1 = {
  (MR_String) "do_not_create_dirs",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_ordinal_ordered_maybe_create_dirs_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__file_names____Unify____maybe_create_dirs_0_0_10001)),
  ((MR_Box) (parse_tree__file_names____Compare____maybe_create_dirs_0_0_10001)),
  (MR_String) "parse_tree.file_names",
  (MR_String) "maybe_create_dirs",
  { parse_tree__file_names__parse_tree__file_names__enum_name_ordered_maybe_create_dirs_0 },
  { parse_tree__file_names__parse_tree__file_names__enum_ordinal_ordered_maybe_create_dirs_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__file_names__parse_tree__file_names__functor_number_map_maybe_create_dirs_0,

};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_search_0_0 = {
  (MR_String) "do_search",
  INT32_C(0)
};

static const MR_EnumFunctorDesc parse_tree__file_names__parse_tree__file_names__enum_functor_desc_maybe_search_0_1 = {
  (MR_String) "do_not_search",
  INT32_C(1)
};

static const MR_EnumFunctorDescPtr parse_tree__file_names__parse_tree__file_names__enum_ordinal_ordered_maybe_search_0[2] = {
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
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_ENUM,
  ((MR_Box) (parse_tree__file_names____Unify____maybe_search_0_0_10001)),
  ((MR_Box) (parse_tree__file_names____Compare____maybe_search_0_0_10001)),
  (MR_String) "parse_tree.file_names",
  (MR_String) "maybe_search",
  { parse_tree__file_names__parse_tree__file_names__enum_name_ordered_maybe_search_0 },
  { parse_tree__file_names__parse_tree__file_names__enum_ordinal_ordered_maybe_search_0 },
  (MR_Integer) 2,
  UINT16_C(12),
  parse_tree__file_names__parse_tree__file_names__functor_number_map_maybe_search_0,

};

static const MR_Integer parse_tree__file_names__parse_tree__file_names__functor_number_map_other_ext_0[1] = {
  (MR_Integer) 0
};

static const MR_NotagFunctorDesc parse_tree__file_names__parse_tree__file_names__notag_functor_desc_other_ext_0 = {
  (MR_String) "other_ext",
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

const MR_TypeCtorInfo_Struct parse_tree__file_names__parse_tree__file_names__type_ctor_info_other_ext_0 = {
  (MR_Integer) 0,
  UINT8_C(18),
  INT8_C(-1),
  MR_TYPECTOR_REP_NOTAG_GROUND,
  ((MR_Box) (parse_tree__file_names____Unify____other_ext_0_0_10001)),
  ((MR_Box) (parse_tree__file_names____Compare____other_ext_0_0_10001)),
  (MR_String) "parse_tree.file_names",
  (MR_String) "other_ext",
  { &parse_tree__file_names__parse_tree__file_names__notag_functor_desc_other_ext_0 },
  { &parse_tree__file_names__parse_tree__file_names__notag_functor_desc_other_ext_0 },
  (MR_Integer) 1,
  UINT16_C(4),
  parse_tree__file_names__parse_tree__file_names__functor_number_map_other_ext_0,

};

static const MR_PseudoTypeInfo parse_tree__file_names__parse_tree__file_names__field_types_record_key_0_0[4] = {
  (MR_PseudoTypeInfo) (&mdbcomp__sym_name__mdbcomp__sym_name__type_ctor_info_sym_name_0),
  (MR_PseudoTypeInfo) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0),
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
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__file_names____Unify____record_key_0_0_10001)),
  ((MR_Box) (parse_tree__file_names____Compare____record_key_0_0_10001)),
  (MR_String) "parse_tree.file_names",
  (MR_String) "record_key",
  { parse_tree__file_names__parse_tree__file_names__du_name_ordered_record_key_0 },
  { parse_tree__file_names__parse_tree__file_names__du_ptag_ordered_record_key_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__file_names__parse_tree__file_names__functor_number_map_record_key_0,

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
    INT8_C(-1),
    UINT8_C(0),
    UINT8_C(1)
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
  UINT8_C(18),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (parse_tree__file_names____Unify____record_value_0_0_10001)),
  ((MR_Box) (parse_tree__file_names____Compare____record_value_0_0_10001)),
  (MR_String) "parse_tree.file_names",
  (MR_String) "record_value",
  { parse_tree__file_names__parse_tree__file_names__du_name_ordered_record_value_0 },
  { parse_tree__file_names__parse_tree__file_names__du_ptag_ordered_record_value_0 },
  (MR_Integer) 1,
  UINT16_C(12),
  parse_tree__file_names__parse_tree__file_names__functor_number_map_record_value_0,

};

static void MR_CALL 
parse_tree__file_names____Compare____record_value_0_0(
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
    MR_String ArgX1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
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

static MR_bool MR_CALL 
parse_tree__file_names____Unify____record_value_0_0(
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
    MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_String ArgY1_4 = ((MR_String) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
    if (succeeded)
      succeeded = (ArgX2_5 == ArgY2_6);
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__file_names____Compare____record_key_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  MR_bool succeeded;
  MR_Integer CastX_15 = (MR_Integer) (HeadVar__2_2);
  MR_Integer CastY_16 = (MR_Integer) (HeadVar__3_3);

  succeeded = (CastX_15 == CastY_16);
  if (succeeded)
    *HeadVar__1_1 = (MR_Integer) 0;
  else
  {
    MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
    MR_Word ArgX3_10 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY3_11 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX4_13 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word ArgY4_14 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word SubResult1_6;

    mdbcomp__sym_name____Compare____sym_name_0_0(&SubResult1_6, ArgX1_4, ArgY1_5);
    succeeded = (SubResult1_6 != (MR_Integer) 0);
    if (succeeded)
      *HeadVar__1_1 = SubResult1_6;
    else
    {
      MR_Word SubResult2_9;

      parse_tree__file_names____Compare____ext_0_0(&SubResult2_9, ArgX2_7, ArgY2_8);
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

static MR_bool MR_CALL 
parse_tree__file_names____Unify____record_key_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_11 == CastY_12);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Word ArgX3_7 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgY3_8 = ((((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
    MR_Word ArgX4_9 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 2))) & (MR_Integer) 1);
    MR_Word ArgY4_10 = ((MR_Unsigned) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 2))) & (MR_Integer) 1);

    succeeded = mdbcomp__sym_name____Unify____sym_name_0_0(ArgX1_3, ArgY1_4);
    if (succeeded)
    {
      succeeded = parse_tree__file_names____Unify____ext_0_0(ArgX2_5, ArgY2_6);
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

void MR_CALL 
parse_tree__file_names____Compare____other_ext_0_0(
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
  {
    MR_String ArgX1_4 = (MR_String) (HeadVar__2_2);
    MR_String ArgY1_5 = (MR_String) (HeadVar__3_3);

    mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, ArgX1_4, ArgY1_5);
  }
}

MR_bool MR_CALL 
parse_tree__file_names____Unify____other_ext_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded;
  MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
  MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

  succeeded = (CastX_5 == CastY_6);
  if (succeeded)
    succeeded = MR_TRUE;
  else
  {
    MR_String ArgX1_3 = (MR_String) (HeadVar__1_1);
    MR_String ArgY1_4 = (MR_String) (HeadVar__2_2);

    succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
  }
  return succeeded;
}

void MR_CALL 
parse_tree__file_names____Compare____maybe_search_0_0(
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
parse_tree__file_names____Unify____maybe_search_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__file_names____Compare____maybe_create_dirs_0_0(
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
parse_tree__file_names____Unify____maybe_create_dirs_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  MR_bool succeeded = (HeadVar__1_1 == HeadVar__2_2);

  return succeeded;
}

void MR_CALL 
parse_tree__file_names____Compare____ext_0_0(
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
  if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      *HeadVar__1_1 = (MR_Integer) 1;
  else
  {
    MR_Word Var_11 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));

    if ((HeadVar__3_3 == (MR_Word) ((MR_Unsigned) 0U)))
      *HeadVar__1_1 = (MR_Integer) 2;
    else
    {
      MR_Word ArgY1_7 = ((MR_Word) ((MR_hl_field(1, HeadVar__3_3, (MR_Integer) 0))));
      MR_String Var_12 = (MR_String) (Var_11);
      MR_String Var_13 = (MR_String) (ArgY1_7);

      mercury__private_builtin__builtin_compare_string_3_p_0(HeadVar__1_1, Var_12, Var_13);
    }
  }
}

MR_bool MR_CALL 
parse_tree__file_names____Unify____ext_0_0(
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
    MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastY_4 == CastX_3);
  }
  else
  {
    MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(1, HeadVar__1_1, (MR_Integer) 0))));
    MR_Word ArgY1_6;
    MR_Integer CastX_11;
    MR_Integer CastY_12;

    succeeded = (HeadVar__2_2 != (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
    {
      ArgY1_6 = ((MR_Word) ((MR_hl_field(1, HeadVar__2_2, (MR_Integer) 0))));
      CastX_11 = (MR_Integer) (ArgX1_5);
      CastY_12 = (MR_Integer) (ArgY1_6);
      succeeded = (CastX_11 == CastY_12);
      if (succeeded)
        succeeded = MR_TRUE;
      else
      {
        MR_String ArgX1_9 = (MR_String) (ArgX1_5);
        MR_String ArgY1_10 = (MR_String) (ArgY1_6);

        succeeded = (strcmp(ArgX1_9, ArgY1_10) == 0);
      }
    }
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__file_names____Compare____count_sum_0_0(
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
    MR_Integer ArgX1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgY1_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
    MR_Integer ArgX2_7 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));
    MR_Integer ArgY2_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
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

static MR_bool MR_CALL 
parse_tree__file_names____Unify____count_sum_0_0(
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
    MR_Integer ArgX1_3 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 0))));
    MR_Integer ArgY1_4 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 0))));
    MR_Integer ArgX2_5 = ((MR_Integer) ((MR_hl_field(0, HeadVar__1_1, (MR_Integer) 1))));
    MR_Integer ArgY2_6 = ((MR_Integer) ((MR_hl_field(0, HeadVar__2_2, (MR_Integer) 1))));

    succeeded = (ArgX1_3 == ArgY1_4);
    if (succeeded)
      succeeded = (ArgX2_5 == ArgY2_6);
  }
  return succeeded;
}

static void MR_CALL 
parse_tree__file_names__unsafe_set_mkdirs_1_p_0(
  MR_Word X_1)
{
{
#define MR_PROC_LABEL parse_tree__file_names__unsafe_set_mkdirs_1_p_0

	MR_Word X;

	X = X_1 ;
		{
parse_tree__file_names__mutable_variable_mkdirs = X;


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
parse_tree__file_names__unsafe_get_mkdirs_1_p_0(
  MR_Word * X_1)
{
{
#define MR_PROC_LABEL parse_tree__file_names__unsafe_get_mkdirs_1_p_0

	MR_Word X;

		{
X = parse_tree__file_names__mutable_variable_mkdirs;


		;}
#undef MR_PROC_LABEL
	*X_1  = X;
}
}

static void MR_CALL 
parse_tree__file_names__unlock_mkdirs_0_p_0(void)
{
{
#define MR_PROC_LABEL parse_tree__file_names__unlock_mkdirs_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&parse_tree__file_names__mutable_variable_mkdirs_lock, "parse_tree__file_names__mutable_variable_mkdirs_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
parse_tree__file_names__lock_mkdirs_0_p_0(void)
{
{
#define MR_PROC_LABEL parse_tree__file_names__lock_mkdirs_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&parse_tree__file_names__mutable_variable_mkdirs_lock, "parse_tree__file_names__mutable_variable_mkdirs_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
parse_tree__file_names__pre_initialise_mutable_mkdirs_0_p_0(void)
{
{
#define MR_PROC_LABEL parse_tree__file_names__pre_initialise_mutable_mkdirs_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&parse_tree__file_names__mutable_variable_mkdirs_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
parse_tree__file_names__initialise_mutable_mkdirs_0_p_0(void)
{
  MR_Word X_1;

{
#define MR_PROC_LABEL parse_tree__file_names__initialise_mutable_mkdirs_0_p_0


		{
#ifdef MR_THREAD_SAFE
   pthread_mutex_init(&parse_tree__file_names__mutable_variable_mkdirs_lock, MR_MUTEX_ATTR);
#endif


		;}
#undef MR_PROC_LABEL
}
  X_1 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0));
{
#define MR_PROC_LABEL parse_tree__file_names__initialise_mutable_mkdirs_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&parse_tree__file_names__mutable_variable_mkdirs_lock, "parse_tree__file_names__mutable_variable_mkdirs_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__file_names__initialise_mutable_mkdirs_0_p_0

	MR_Word X;

	X = X_1 ;
		{
parse_tree__file_names__mutable_variable_mkdirs = X;


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__file_names__initialise_mutable_mkdirs_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&parse_tree__file_names__mutable_variable_mkdirs_lock, "parse_tree__file_names__mutable_variable_mkdirs_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
parse_tree__file_names__unsafe_set_translations_1_p_0(
  MR_Word X_1)
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

static void MR_CALL 
parse_tree__file_names__unsafe_get_translations_1_p_0(
  MR_Word * X_1)
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

static void MR_CALL 
parse_tree__file_names__unlock_translations_0_p_0(void)
{
{
#define MR_PROC_LABEL parse_tree__file_names__unlock_translations_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&parse_tree__file_names__mutable_variable_translations_lock, "parse_tree__file_names__mutable_variable_translations_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
parse_tree__file_names__lock_translations_0_p_0(void)
{
{
#define MR_PROC_LABEL parse_tree__file_names__lock_translations_0_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&parse_tree__file_names__mutable_variable_translations_lock, "parse_tree__file_names__mutable_variable_translations_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
parse_tree__file_names__pre_initialise_mutable_translations_0_p_0(void)
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

static void MR_CALL 
parse_tree__file_names__initialise_mutable_translations_0_p_0(void)
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
  MR_LOCK(&parse_tree__file_names__mutable_variable_translations_lock, "parse_tree__file_names__mutable_variable_translations_lock");
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
  MR_UNLOCK(&parse_tree__file_names__mutable_variable_translations_lock, "parse_tree__file_names__mutable_variable_translations_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
}

static void MR_CALL 
parse_tree__file_names__write_out_mkdirs_entry_5_p_0(
  MR_Word Stream_6,
  MR_String DirName_7,
  MR_Integer Cnt_8)
{
  MR_String Var_22;

  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "dir_name ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__file_names_scalar_common_2[0]), Cnt_8, &Var_22);
  mercury__io__write_string_4_p_0(Stream_6, Var_22);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) " ");
  mercury__io__write_string_4_p_0(Stream_6, DirName_7);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n");
}

static void MR_CALL 
parse_tree__file_names__write_out_ext_sch_dir_entry_5_p_0(
  MR_Word Stream_6,
  MR_String ExtSchDir_7,
  MR_Word HeadVar__3_3)
{
  MR_Integer Cnt_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
  MR_Integer Sum_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
  MR_String Var_25;
  MR_String Var_35;

  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "ext_sch_dir ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__file_names_scalar_common_2[0]), Cnt_8, &Var_25);
  mercury__io__write_string_4_p_0(Stream_6, Var_25);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) " ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__file_names_scalar_common_2[0]), Sum_9, &Var_35);
  mercury__io__write_string_4_p_0(Stream_6, Var_35);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) " ");
  mercury__io__write_string_4_p_0(Stream_6, ExtSchDir_7);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n");
}

static void MR_CALL 
parse_tree__file_names__write_out_ext_entry_5_p_0(
  MR_Word Stream_6,
  MR_String Ext_7,
  MR_Word HeadVar__3_3)
{
  MR_Integer Cnt_8 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 0))));
  MR_Integer Sum_9 = ((MR_Integer) ((MR_hl_field(0, HeadVar__3_3, (MR_Integer) 1))));
  MR_String Var_25;
  MR_String Var_35;

  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "ext ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__file_names_scalar_common_2[0]), Cnt_8, &Var_25);
  mercury__io__write_string_4_p_0(Stream_6, Var_25);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) " ");
  mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__file_names_scalar_common_2[0]), Sum_9, &Var_35);
  mercury__io__write_string_4_p_0(Stream_6, Var_35);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) " ");
  mercury__io__write_string_4_p_0(Stream_6, Ext_7);
  mercury__io__write_string_4_p_0(Stream_6, (MR_String) "\n");
}

static void MR_CALL 
parse_tree__file_names__gather_translation_stats_10_p_0(
  MR_Word Key_11,
  MR_Word Value_12,
  MR_Integer STATE_VARIABLE_NumKeys_0_28,
  MR_Integer * STATE_VARIABLE_NumKeys_29,
  MR_Integer STATE_VARIABLE_NumLookups_0_30,
  MR_Integer * STATE_VARIABLE_NumLookups_31,
  MR_Word STATE_VARIABLE_ExtMap_0_32,
  MR_Word * STATE_VARIABLE_ExtMap_33,
  MR_Word STATE_VARIABLE_ExtSchDirMap_0_34,
  MR_Word * STATE_VARIABLE_ExtSchDirMap_35)
{
  MR_bool succeeded;
  MR_Integer Count_18;
  MR_Word Ext0_20;
  MR_Word Search_21;
  MR_Word MkDir_22;
  MR_String ExtStr_23;
  MR_String SearchStr_25;
  MR_String MkDirStr_26;
  MR_String ExtSchDir_27;
  MR_String Var_40;
  MR_Word Entry0_42;
  MR_Box conv0_Entry0_42;
  MR_Word Entry0_54;
  MR_Box conv1_Entry0_54;

  *STATE_VARIABLE_NumKeys_29 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumKeys_0_28 + (MR_Unsigned) 1);
  Count_18 = ((MR_Integer) ((MR_hl_field(0, Value_12, (MR_Integer) 1))));
  *STATE_VARIABLE_NumLookups_31 = (MR_Integer) ((MR_Unsigned) STATE_VARIABLE_NumLookups_0_30 + (MR_Unsigned) Count_18);
  Ext0_20 = ((MR_Word) ((MR_hl_field(0, Key_11, (MR_Integer) 1))));
  Search_21 = ((((MR_Unsigned) ((MR_hl_field(0, Key_11, (MR_Integer) 2))) >> 1)) & (MR_Integer) 1);
  MkDir_22 = ((MR_Unsigned) ((MR_hl_field(0, Key_11, (MR_Integer) 2))) & (MR_Integer) 1);
  if ((Ext0_20 == (MR_Word) ((MR_Unsigned) 0U)))
    ExtStr_23 = (MR_String) ".m";
  else
  {
    MR_String ExtStr0_24;
    MR_Word Var_39 = ((MR_Word) ((MR_hl_field(1, Ext0_20, (MR_Integer) 0))));

    ExtStr0_24 = (MR_String) (Var_39);
    succeeded = (strcmp(ExtStr0_24, (MR_String) "") == 0);
    if (succeeded)
      ExtStr_23 = (MR_String) "no_suffix";
    else
      ExtStr_23 = ExtStr0_24;
  }
  switch (Search_21) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 1:
      SearchStr_25 = (MR_String) "_nosearch";
      break;
    case (MR_Integer) 0:
      SearchStr_25 = (MR_String) "_search";
      break;
  }
  switch (MkDir_22) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      MkDirStr_26 = (MR_String) "_mkdir";
      break;
    case (MR_Integer) 1:
      MkDirStr_26 = (MR_String) "_nomkdir";
      break;
  }
  Var_40 = mercury__string__f_43_43_2_f_0(SearchStr_25, MkDirStr_26);
  ExtSchDir_27 = mercury__string__f_43_43_2_f_0(ExtStr_23, Var_40);
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_count_sum_0), STATE_VARIABLE_ExtMap_0_32, ((MR_Box) (ExtStr_23)), &conv0_Entry0_42);
  if (succeeded)
  {
    Entry0_42 = ((MR_Word) (conv0_Entry0_42));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Integer Cnt0_43 = ((MR_Integer) ((MR_hl_field(0, Entry0_42, (MR_Integer) 0))));
    MR_Integer Sum0_44 = ((MR_Integer) ((MR_hl_field(0, Entry0_42, (MR_Integer) 1))));
    MR_Word Entry_45;
    MR_Integer Var_46 = (MR_Integer) ((MR_Unsigned) Cnt0_43 + (MR_Unsigned) 1);
    MR_Integer Var_48 = (MR_Integer) ((MR_Unsigned) Sum0_44 + (MR_Unsigned) Count_18);

    {
      Entry_45 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Entry_45, 0) = ((MR_Box) (Var_46));
      MR_hl_field(0, Entry_45, 1) = ((MR_Box) (Var_48));
    }
    mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_count_sum_0), ((MR_Box) (ExtStr_23)), ((MR_Box) (Entry_45)), STATE_VARIABLE_ExtMap_0_32, STATE_VARIABLE_ExtMap_33);
  }
  else
  {
    MR_Word Entry_50;

    {
      Entry_50 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Entry_50, 0) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Entry_50, 1) = ((MR_Box) (Count_18));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_count_sum_0), ((MR_Box) (ExtStr_23)), ((MR_Box) (Entry_50)), STATE_VARIABLE_ExtMap_0_32, STATE_VARIABLE_ExtMap_33);
  }
  succeeded = mercury__map__search_3_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_count_sum_0), STATE_VARIABLE_ExtSchDirMap_0_34, ((MR_Box) (ExtSchDir_27)), &conv1_Entry0_54);
  if (succeeded)
  {
    Entry0_54 = ((MR_Word) (conv1_Entry0_54));
    succeeded = MR_TRUE;
  }
  if (succeeded)
  {
    MR_Integer Cnt0_55 = ((MR_Integer) ((MR_hl_field(0, Entry0_54, (MR_Integer) 0))));
    MR_Integer Sum0_56 = ((MR_Integer) ((MR_hl_field(0, Entry0_54, (MR_Integer) 1))));
    MR_Word Entry_57;
    MR_Integer Var_58 = (MR_Integer) ((MR_Unsigned) Cnt0_55 + (MR_Unsigned) 1);
    MR_Integer Var_60 = (MR_Integer) ((MR_Unsigned) Sum0_56 + (MR_Unsigned) Count_18);

    {
      Entry_57 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Entry_57, 0) = ((MR_Box) (Var_58));
      MR_hl_field(0, Entry_57, 1) = ((MR_Box) (Var_60));
    }
    mercury__map__det_update_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_count_sum_0), ((MR_Box) (ExtSchDir_27)), ((MR_Box) (Entry_57)), STATE_VARIABLE_ExtSchDirMap_0_34, STATE_VARIABLE_ExtSchDirMap_35);
  }
  else
  {
    MR_Word Entry_62;

    {
      Entry_62 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Entry_62, 0) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Entry_62, 1) = ((MR_Box) (Count_18));
    }
    mercury__map__det_insert_4_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_count_sum_0), ((MR_Box) (ExtSchDir_27)), ((MR_Box) (Entry_62)), STATE_VARIABLE_ExtSchDirMap_0_34, STATE_VARIABLE_ExtSchDirMap_35);
  }
}

static MR_bool MR_CALL 
parse_tree__file_names__valid_other_ext_1_p_0(
  MR_Word HeadVar__1_1)
{
  MR_bool succeeded;
  MR_String ExtStr_2 = (MR_String) (HeadVar__1_1);

  succeeded = (strcmp(ExtStr_2, (MR_String) ".m") == 0);
  succeeded = !(succeeded);
  return succeeded;
}

static void MR_CALL 
parse_tree__file_names__write_translations_record_if_any_2_p_0_4(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__file_names__write_out_mkdirs_entry_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), ((MR_Integer) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__file_names__write_translations_record_if_any_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__file_names__write_out_ext_sch_dir_entry_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
}

static void MR_CALL 
parse_tree__file_names__write_translations_record_if_any_2_p_0_2(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  MR_Box closure = closure_arg;

  parse_tree__file_names__write_out_ext_entry_5_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))), ((MR_String) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
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
  MR_Box closure = closure_arg;
  MR_Integer conv3_STATE_VARIABLE_NumKeys_29;
  MR_Integer conv2_STATE_VARIABLE_NumLookups_31;
  MR_Word conv1_STATE_VARIABLE_ExtMap_33;
  MR_Word conv0_STATE_VARIABLE_ExtSchDirMap_35;

  parse_tree__file_names__gather_translation_stats_10_p_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Integer) (wrapper_arg_3)), &conv3_STATE_VARIABLE_NumKeys_29, ((MR_Integer) (wrapper_arg_5)), &conv2_STATE_VARIABLE_NumLookups_31, ((MR_Word) (wrapper_arg_7)), &conv1_STATE_VARIABLE_ExtMap_33, ((MR_Word) (wrapper_arg_9)), &conv0_STATE_VARIABLE_ExtSchDirMap_35);
  *wrapper_arg_4 = ((MR_Box) (conv3_STATE_VARIABLE_NumKeys_29));
  *wrapper_arg_6 = ((MR_Box) (conv2_STATE_VARIABLE_NumLookups_31));
  *wrapper_arg_8 = ((MR_Box) (conv1_STATE_VARIABLE_ExtMap_33));
  *wrapper_arg_10 = ((MR_Box) (conv0_STATE_VARIABLE_ExtSchDirMap_35));
}

void MR_CALL 
parse_tree__file_names__write_translations_record_if_any_2_p_0(void)
{
  MR_bool succeeded;
  MR_Word Translations_4;
  MR_Word MkDirs_5;
  MR_Word TypeCtorInfo_39_39;
  MR_Word TypeCtorInfo_40_40;

{
#define MR_PROC_LABEL parse_tree__file_names__write_translations_record_if_any_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&parse_tree__file_names__mutable_variable_translations_lock, "parse_tree__file_names__mutable_variable_translations_lock");
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
  MR_UNLOCK(&parse_tree__file_names__mutable_variable_translations_lock, "parse_tree__file_names__mutable_variable_translations_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__file_names__write_translations_record_if_any_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_LOCK(&parse_tree__file_names__mutable_variable_mkdirs_lock, "parse_tree__file_names__mutable_variable_mkdirs_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
{
#define MR_PROC_LABEL parse_tree__file_names__write_translations_record_if_any_2_p_0

	MR_Word X;

		{
X = parse_tree__file_names__mutable_variable_mkdirs;


		;}
#undef MR_PROC_LABEL
	MkDirs_5  = X;
}
{
#define MR_PROC_LABEL parse_tree__file_names__write_translations_record_if_any_2_p_0


		{
#ifdef MR_THREAD_SAFE
  MR_UNLOCK(&parse_tree__file_names__mutable_variable_mkdirs_lock, "parse_tree__file_names__mutable_variable_mkdirs_lock");
#endif


		;}
#undef MR_PROC_LABEL
}
  succeeded = mercury__map__is_empty_1_p_0((MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_record_key_0), (MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_record_value_0), Translations_4);
  if (succeeded)
  {
    TypeCtorInfo_39_39 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0);
    TypeCtorInfo_40_40 = (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0);
    succeeded = mercury__map__is_empty_1_p_0(TypeCtorInfo_39_39, TypeCtorInfo_40_40, MkDirs_5);
  }
  if (!(succeeded))
  {
    MR_Integer NumKeys_6;
    MR_Integer NumLookups_7;
    MR_Word ExtMap_8;
    MR_Word ExtSchDirMap_9;
    MR_Word Result_10;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Box conv7_NumKeys_6;
    MR_Box conv6_NumLookups_7;
    MR_Box conv5_ExtMap_8;
    MR_Box conv4_ExtSchDirMap_9;

    Var_20 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_count_sum_0));
    Var_21 = mercury__map__init_0_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_count_sum_0));
    mercury__map__foldl4_10_p_0((MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_record_key_0), (MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_record_value_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&parse_tree__file_names_scalar_common_1[0]), (MR_Word) (&parse_tree__file_names_scalar_common_1[0]), (MR_Word) (&parse_tree__file_names_scalar_common_1[1]), Translations_4, ((MR_Box) ((MR_Integer) 0)), &conv7_NumKeys_6, ((MR_Box) ((MR_Integer) 0)), &conv6_NumLookups_7, ((MR_Box) (Var_20)), &conv5_ExtMap_8, ((MR_Box) (Var_21)), &conv4_ExtSchDirMap_9);
    NumKeys_6 = ((MR_Integer) (conv7_NumKeys_6));
    NumLookups_7 = ((MR_Integer) (conv6_NumLookups_7));
    ExtMap_8 = ((MR_Word) (conv5_ExtMap_8));
    ExtSchDirMap_9 = ((MR_Word) (conv4_ExtSchDirMap_9));
    mercury__io__open_append_4_p_0((MR_String) "/tmp/TRANSLATIONS_RECORD", &Result_10);
    if (!(((MR_tag((MR_Word) Result_10)) == (MR_Integer) 1)))
    {
      MR_Word Stream_11 = ((MR_Word) ((MR_hl_field(0, Result_10, (MR_Integer) 0))));
      MR_Word Var_31;
      MR_Word Var_33;
      MR_Word Var_35;
      MR_String Var_73;
      MR_String Var_83;
      MR_Box conv8_STATE_VARIABLE_IO_32_32;
      MR_Box conv9_STATE_VARIABLE_IO_34_34;
      MR_Box conv10_STATE_VARIABLE_IO_36_36;

      mercury__io__write_string_4_p_0(Stream_11, (MR_String) "overall_stats ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__file_names_scalar_common_2[0]), NumKeys_6, &Var_73);
      mercury__io__write_string_4_p_0(Stream_11, Var_73);
      mercury__io__write_string_4_p_0(Stream_11, (MR_String) " ");
      mercury__string__format__format_signed_int_component_nowidth_noprec_3_p_0((MR_Word) (&parse_tree__file_names_scalar_common_2[0]), NumLookups_7, &Var_83);
      mercury__io__write_string_4_p_0(Stream_11, Var_83);
      mercury__io__write_string_4_p_0(Stream_11, (MR_String) "\n");
      {
        Var_31 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_31, 0) = ((MR_Box) (&parse_tree__file_names_scalar_common_8[0]));
        MR_hl_field(0, Var_31, 1) = ((MR_Box) (parse_tree__file_names__write_translations_record_if_any_2_p_0_2));
        MR_hl_field(0, Var_31, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_31, 3) = ((MR_Box) (Stream_11));
      }
      mercury__map__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_count_sum_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_31, ExtMap_8, ((MR_Box) ((MR_Integer) 0)), &conv8_STATE_VARIABLE_IO_32_32);
      {
        Var_33 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_33, 0) = ((MR_Box) (&parse_tree__file_names_scalar_common_8[0]));
        MR_hl_field(0, Var_33, 1) = ((MR_Box) (parse_tree__file_names__write_translations_record_if_any_2_p_0_3));
        MR_hl_field(0, Var_33, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_33, 3) = ((MR_Box) (Stream_11));
      }
      mercury__map__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&parse_tree__file_names__parse_tree__file_names__type_ctor_info_count_sum_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_33, ExtSchDirMap_9, ((MR_Box) ((MR_Integer) 0)), &conv9_STATE_VARIABLE_IO_34_34);
      {
        Var_35 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(0, Var_35, 0) = ((MR_Box) (&parse_tree__file_names_scalar_common_8[1]));
        MR_hl_field(0, Var_35, 1) = ((MR_Box) (parse_tree__file_names__write_translations_record_if_any_2_p_0_4));
        MR_hl_field(0, Var_35, 2) = ((MR_Box) ((MR_Integer) 1));
        MR_hl_field(0, Var_35, 3) = ((MR_Box) (Stream_11));
      }
      mercury__map__foldl_4_p_2((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), (MR_Word) (&mercury__builtin__builtin__type_ctor_info_int_0), (MR_Word) (&mercury__io__io__type_ctor_info_state_0), Var_35, MkDirs_5, ((MR_Box) ((MR_Integer) 0)), &conv10_STATE_VARIABLE_IO_36_36);
      mercury__io__close_output_3_p_0(Stream_11);
    }
  }
}

void MR_CALL 
parse_tree__file_names__make_include_file_path_3_p_0(
  MR_String ModuleSourceFileName_4,
  MR_String OrigFileName_5,
  MR_String * Path_6)
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

void MR_CALL 
parse_tree__file_names__get_class_dir_name_2_p_0(
  MR_Word Globals_3,
  MR_String * ClassDirName_4)
{
  MR_Word UseGradeSubdirs_5;
  MR_Word UseSubdirs_6;

  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 684, &UseGradeSubdirs_5);
  libs__globals__lookup_bool_option_3_p_0(Globals_3, (MR_Integer) 683, &UseSubdirs_6);
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
        MR_String Var_12;
        MR_String Var_13;
        MR_String Var_14;

        libs__compute_grade__grade_directory_component_2_p_0(Globals_3, &Grade_7);
        libs__globals__lookup_string_option_3_p_0(Globals_3, (MR_Integer) 702, &TargetArch_8);
        Var_14 = mercury__dir__f_slash_2_f_0((MR_String) "Mercury", Grade_7);
        Var_13 = mercury__dir__f_slash_2_f_0(Var_14, TargetArch_8);
        Var_12 = mercury__dir__f_slash_2_f_0(Var_13, (MR_String) "Mercury");
        *ClassDirName_4 = mercury__dir__f_slash_2_f_0(Var_12, (MR_String) "classs");
      }
      break;
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

MR_Word MR_CALL 
parse_tree__file_names__qualify_mercury_std_library_module_name_1_f_0(
  MR_Word ModuleName_3)
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

MR_bool MR_CALL 
parse_tree__file_names__mercury_std_library_module_name_1_p_0(
  MR_Word ModuleName_2)
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
    MR_String Name_3 = ((MR_String) ((MR_hl_field(0, ModuleName_2, (MR_Integer) 0))));

    succeeded = mercury__library__mercury_std_library_module_1_p_0(Name_3);
  }
  return succeeded;
}

void MR_CALL 
parse_tree__file_names__fact_table_file_name_8_p_0(
  MR_Word Globals_9,
  MR_String From_10,
  MR_Word MkDir_11,
  MR_Word Ext_12,
  MR_String FactTableFileName_13,
  MR_String * FileName_14)
{
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_97_99_116_95_116_97_98_108_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_8_p_0(Globals_9, MkDir_11, Ext_12, FactTableFileName_13, FileName_14);
}

void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_102_97_99_116_95_116_97_98_108_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_8_p_0(
  MR_Word Globals_9,
  MR_Word MkDir_11,
  MR_Word Ext_12,
  MR_String FactTableFileName_13,
  MR_String * FileName_14)
{
  MR_Word DirComponents_16;

  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_8_p_0(Globals_9, (MR_Integer) 1, Ext_12, (MR_Word) ((MR_Unsigned) 0U), FactTableFileName_13, &DirComponents_16, FileName_14);
  if (!((DirComponents_16 == (MR_Word) ((MR_Unsigned) 0U))))
    switch (MkDir_11) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String DirName_23;
          MR_Word Var_24;

          DirName_23 = mercury__dir__relative_path_name_from_components_1_f_0(DirComponents_16);
          mercury__dir__make_directory_4_p_0(DirName_23, &Var_24);
        }
        break;
      case (MR_Integer) 1:
        {
        }
        break;
    }
}

void MR_CALL 
parse_tree__file_names__module_name_to_lib_file_name_9_p_0(
  MR_Word Globals_10,
  MR_String From_11,
  MR_Word MkDir_12,
  MR_String Prefix_13,
  MR_Word Ext_14,
  MR_Word ModuleName_15,
  MR_String * FileName_16)
{
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_108_105_98_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_9_p_0(Globals_10, MkDir_12, Prefix_13, Ext_14, ModuleName_15, FileName_16);
}

void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_108_105_98_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_9_p_0(
  MR_Word Globals_10,
  MR_Word MkDir_12,
  MR_String Prefix_13,
  MR_Word Ext_14,
  MR_Word ModuleName_15,
  MR_String * FileName_16)
{
  MR_String BaseFileName_18;
  MR_String BaseNameNoExt_19;
  MR_Word DirComponents_20;

  BaseFileName_18 = mdbcomp__sym_name__sym_name_to_string_1_f_0(ModuleName_15);
  BaseNameNoExt_19 = mercury__string__f_43_43_2_f_0(Prefix_13, BaseFileName_18);
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_8_p_0(Globals_10, (MR_Integer) 1, Ext_14, (MR_Word) ((MR_Unsigned) 0U), BaseNameNoExt_19, &DirComponents_20, FileName_16);
  if (!((DirComponents_20 == (MR_Word) ((MR_Unsigned) 0U))))
    switch (MkDir_12) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String DirName_27;
          MR_Word Var_28;

          DirName_27 = mercury__dir__relative_path_name_from_components_1_f_0(DirComponents_20);
          mercury__dir__make_directory_4_p_0(DirName_27, &Var_28);
        }
        break;
      case (MR_Integer) 1:
        {
        }
        break;
    }
}

void MR_CALL 
parse_tree__file_names__module_name_to_search_file_name_7_p_0(
  MR_Word Globals_8,
  MR_String From_9,
  MR_Word Ext_10,
  MR_Word ModuleName_11,
  MR_String * FileName_12)
{
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_115_101_97_114_99_104_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_7_p_0(Globals_8, Ext_10, ModuleName_11, FileName_12);
}

static MR_bool MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_115_101_97_114_99_104_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_7_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__file_names__valid_other_ext_1_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))));
  return succeeded;
}

void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_115_101_97_114_99_104_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_7_p_0(
  MR_Word Globals_8,
  MR_Word Ext_10,
  MR_Word ModuleName_11,
  MR_String * FileName_12)
{
  MR_bool succeeded;

  if ((Ext_10 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word MaybeFileName_42;

    parse_tree__source_file_map__lookup_module_source_file_4_p_0(ModuleName_11, &MaybeFileName_42);
    if ((MaybeFileName_42 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String Var_44;

      Var_44 = parse_tree__source_file_map__default_source_file_name_1_f_0(ModuleName_11);
      *FileName_12 = mercury__string__f_43_43_2_f_0((MR_String) "Mercury/.missing.", Var_44);
    }
    else
      *FileName_12 = ((MR_String) ((MR_hl_field(1, MaybeFileName_42, (MR_Integer) 0))));
  }
  else
  {
    MR_Word OtherExt_18 = ((MR_Word) ((MR_hl_field(1, Ext_10, (MR_Integer) 0))));
    MR_Word BaseParentDirs_19;
    MR_String BaseNameNoExt_20;
    MR_Word DirComponents_21;
    MR_String ExtStr_24 = (MR_String) (OtherExt_18);
    MR_Word Var_25;
    MR_String Var_27;

    {
      Var_25 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_25, 0) = ((MR_Box) (&parse_tree__file_names_scalar_common_6[0]));
      MR_hl_field(0, Var_25, 1) = ((MR_Box) (parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_115_101_97_114_99_104_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_7_p_0_1));
      MR_hl_field(0, Var_25, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_25, 3) = ((MR_Box) (OtherExt_18));
    }
    Var_27 = mercury__string__f_43_43_2_f_0(ExtStr_24, (MR_String) " is a not valid argument of ext/1");
    mercury__require__expect_3_p_0(Var_25, (MR_String) "predicate \140parse_tree.file_names.decide_base_name_parent_dirs_other\'/4", Var_27);
    succeeded = mercury__string__suffix_2_p_0(ExtStr_24, (MR_String) ".java");
    if (!(succeeded))
      succeeded = mercury__string__suffix_2_p_0(ExtStr_24, (MR_String) ".class");
    if (succeeded)
    {
      BaseParentDirs_19 = (MR_Word) (MR_mkword(1, &parse_tree__file_names_scalar_common_3[0]));
      parse_tree__java_names__mangle_sym_name_for_java_4_p_0(ModuleName_11, (MR_Integer) 0, (MR_String) "__", &BaseNameNoExt_20);
    }
    else
    {
      BaseParentDirs_19 = (MR_Word) ((MR_Unsigned) 0U);
      BaseNameNoExt_20 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(ModuleName_11, (MR_String) ".");
    }
    parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_8_p_0(Globals_8, (MR_Integer) 0, OtherExt_18, BaseParentDirs_19, BaseNameNoExt_20, &DirComponents_21, FileName_12);
    if ((DirComponents_21 == (MR_Word) ((MR_Unsigned) 0U)))
    {
    }
  }
}

void MR_CALL 
parse_tree__file_names__module_name_to_file_name_8_p_0(
  MR_Word Globals_9,
  MR_String From_10,
  MR_Word MkDir_11,
  MR_Word Ext_12,
  MR_Word ModuleName_13,
  MR_String * FileName_14)
{
  parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_8_p_0(Globals_9, MkDir_11, Ext_12, ModuleName_13, FileName_14);
}

static MR_bool MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_8_p_0_1(
  MR_Box closure_arg)
{
  MR_bool succeeded;
  MR_Box closure = closure_arg;

  succeeded = parse_tree__file_names__valid_other_ext_1_p_0(((MR_Word) ((MR_hl_field(0, closure, (MR_Integer) 3)))));
  return succeeded;
}

void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_8_p_0(
  MR_Word Globals_9,
  MR_Word MkDir_11,
  MR_Word Ext_12,
  MR_Word ModuleName_13,
  MR_String * FileName_14)
{
  MR_bool succeeded;

  if ((Ext_12 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_Word MaybeFileName_43;

    parse_tree__source_file_map__lookup_module_source_file_4_p_0(ModuleName_13, &MaybeFileName_43);
    if ((MaybeFileName_43 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_String Var_45;

      Var_45 = parse_tree__source_file_map__default_source_file_name_1_f_0(ModuleName_13);
      *FileName_14 = mercury__string__f_43_43_2_f_0((MR_String) "Mercury/.missing.", Var_45);
    }
    else
      *FileName_14 = ((MR_String) ((MR_hl_field(1, MaybeFileName_43, (MR_Integer) 0))));
  }
  else
  {
    MR_Word OtherExt_19 = ((MR_Word) ((MR_hl_field(1, Ext_12, (MR_Integer) 0))));
    MR_Word BaseParentDirs_20;
    MR_String BaseNameNoExt_21;
    MR_Word DirComponents_22;
    MR_String ExtStr_25 = (MR_String) (OtherExt_19);
    MR_Word Var_26;
    MR_String Var_28;

    {
      Var_26 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(0, Var_26, 0) = ((MR_Box) (&parse_tree__file_names_scalar_common_6[0]));
      MR_hl_field(0, Var_26, 1) = ((MR_Box) (parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_109_111_100_117_108_101_95_110_97_109_101_95_116_111_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_8_p_0_1));
      MR_hl_field(0, Var_26, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(0, Var_26, 3) = ((MR_Box) (OtherExt_19));
    }
    Var_28 = mercury__string__f_43_43_2_f_0(ExtStr_25, (MR_String) " is a not valid argument of ext/1");
    mercury__require__expect_3_p_0(Var_26, (MR_String) "predicate \140parse_tree.file_names.decide_base_name_parent_dirs_other\'/4", Var_28);
    succeeded = mercury__string__suffix_2_p_0(ExtStr_25, (MR_String) ".java");
    if (!(succeeded))
      succeeded = mercury__string__suffix_2_p_0(ExtStr_25, (MR_String) ".class");
    if (succeeded)
    {
      BaseParentDirs_20 = (MR_Word) (MR_mkword(1, &parse_tree__file_names_scalar_common_3[0]));
      parse_tree__java_names__mangle_sym_name_for_java_4_p_0(ModuleName_13, (MR_Integer) 0, (MR_String) "__", &BaseNameNoExt_21);
    }
    else
    {
      BaseParentDirs_20 = (MR_Word) ((MR_Unsigned) 0U);
      BaseNameNoExt_21 = mdbcomp__sym_name__sym_name_to_string_sep_2_f_0(ModuleName_13, (MR_String) ".");
    }
    parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_8_p_0(Globals_9, (MR_Integer) 1, OtherExt_19, BaseParentDirs_20, BaseNameNoExt_21, &DirComponents_22, FileName_14);
    if (!((DirComponents_22 == (MR_Word) ((MR_Unsigned) 0U))))
      switch (MkDir_11) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String DirName_39;
            MR_Word Var_40;

            DirName_39 = mercury__dir__relative_path_name_from_components_1_f_0(DirComponents_22);
            mercury__dir__make_directory_4_p_0(DirName_39, &Var_40);
          }
          break;
        case (MR_Integer) 1:
          {
          }
          break;
      }
  }
}

static void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_8_p_0_1(
  void * env_ptr_arg)
{
  struct parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_1, 1);
}

static void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_8_p_0_2(
  void * env_ptr_arg)
{
  struct parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) (env_ptr_arg);

  (env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = (strcmp((env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31, (env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ObjExtStr_38) == 0);
  if (!((env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded))
  {
    MR_String Var_43;

    Var_43 = mercury__string__f_43_43_2_f_0((MR_String) "_init", (env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ObjExtStr_38);
    (env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = (strcmp((env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31, Var_43) == 0);
  }
  if ((env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
    parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_8_p_0_1(env_ptr);
}

static void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_8_p_0_3(
  void * env_ptr_arg)
{
  struct parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_1) == 0)
    {
      {
        libs__globals__lookup_string_option_3_p_0((env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Globals_9, (MR_Integer) 557, &(env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ObjExtStr_38);
        parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_8_p_0_2(env_ptr);
      }
      {
        libs__globals__lookup_string_option_3_p_0((env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Globals_9, (MR_Integer) 558, &(env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ObjExtStr_38);
        parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_8_p_0_2(env_ptr);
      }
      (env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
}

static void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_8_p_0_4(
  void * env_ptr_arg)
{
  struct parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) (env_ptr_arg);

  MR_builtin_longjmp((env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_6, 1);
}

static void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_8_p_0_5(
  void * env_ptr_arg)
{
  struct parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) (env_ptr_arg);

  (env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = (strcmp((env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74, (env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ObjExtStr_81) == 0);
  if (!((env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded))
  {
    MR_String Var_86;

    Var_86 = mercury__string__f_43_43_2_f_0((MR_String) "_init", (env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ObjExtStr_81);
    (env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = (strcmp((env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74, Var_86) == 0);
  }
  if ((env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
    parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_8_p_0_4(env_ptr);
}

static void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_8_p_0_6(
  void * env_ptr_arg)
{
  struct parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s * env_ptr = (struct parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s *) (env_ptr_arg);

  if (MR_builtin_setjmp((env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__commit_6) == 0)
    {
      {
        libs__globals__lookup_string_option_3_p_0((env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Globals_9, (MR_Integer) 557, &(env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ObjExtStr_81);
        parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_8_p_0_5(env_ptr);
      }
      {
        libs__globals__lookup_string_option_3_p_0((env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Globals_9, (MR_Integer) 558, &(env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ObjExtStr_81);
        parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_8_p_0_5(env_ptr);
      }
      (env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
    }
  else
    (env_ptr)->parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
}

static void MR_CALL 
parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_8_p_0(
  MR_Word Globals_9,
  MR_Word Search_11,
  MR_Word OtherExt_12,
  MR_Word BaseParentDirs_13,
  MR_String BaseNameNoExt_14,
  MR_Word * DirComponents_15,
  MR_String * FileName_16)
{
  struct parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_0_s env;

  (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Globals_9 = Globals_9;
  {
    MR_Word UseSubdirs_17;
    MR_String ExtStr_18;

    libs__globals__lookup_bool_option_3_p_0((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Globals_9, (MR_Integer) 683, &UseSubdirs_17);
    ExtStr_18 = (MR_String) (OtherExt_12);
    (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = (Search_11 == (MR_Integer) 0);
    if ((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
      (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = (strcmp(ExtStr_18, (MR_String) ".mih") == 0);
    if ((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
    {
      *DirComponents_15 = (MR_Word) ((MR_Unsigned) 0U);
      *FileName_16 = mercury__string__f_43_43_2_f_0(BaseNameNoExt_14, ExtStr_18);
    }
    else
      switch (UseSubdirs_17) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            if ((BaseParentDirs_13 == (MR_Word) ((MR_Unsigned) 0U)))
              *FileName_16 = mercury__string__f_43_43_2_f_0(BaseNameNoExt_14, ExtStr_18);
            else
            {
              MR_Word Components_26;
              MR_Word Var_27;
              MR_String Var_28;

              Var_28 = mercury__string__f_43_43_2_f_0(BaseNameNoExt_14, ExtStr_18);
              {
                Var_27 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_27, 0) = ((MR_Box) (Var_28));
                MR_hl_field(1, Var_27, 1) = ((MR_Box) ((MR_Unsigned) 0U));
              }
              Components_26 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), BaseParentDirs_13, Var_27);
              *FileName_16 = mercury__dir__relative_path_name_from_components_1_f_0(Components_26);
            }
            *DirComponents_15 = BaseParentDirs_13;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word UseGradeSubdirs_19;

            libs__globals__lookup_bool_option_3_p_0((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Globals_9, (MR_Integer) 684, &UseGradeSubdirs_19);
            (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = (UseGradeSubdirs_19 == (MR_Integer) 1);
            if ((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
            {
              (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31 = (MR_String) (OtherExt_12);
              {
                MR_Integer case_num_0 = (MR_Integer) -1;

                switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31), 0)) {
                  case (MR_Integer) 0:
                    case_num_0 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 46:
                    switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31), 1)) {
                      case (MR_Integer) 36:
                        if (MR_offset_streq(2, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31, (MR_String) ".\044A"))
                          case_num_0 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 97:
                        switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31), 2)) {
                          case (MR_Integer) 0:
                            case_num_0 = (MR_Integer) 2;
                            break;
                          case (MR_Integer) 110:
                            if (((((((((((((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31), 3)) == (MR_Integer) 97)) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31), 4)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31), 5)) == (MR_Integer) 121)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31), 6)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31), 7)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31), 8)) == (MR_Integer) 115))))
                              switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31), 9)) {
                                case (MR_Integer) 0:
                                  case_num_0 = (MR_Integer) 3;
                                  break;
                                case (MR_Integer) 95:
                                  switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31), 10)) {
                                    case (MR_Integer) 100:
                                      if (MR_offset_streq(11, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31, (MR_String) ".analysis_date"))
                                        case_num_0 = (MR_Integer) 4;
                                      break;
                                    case (MR_Integer) 115:
                                      if (MR_offset_streq(11, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31, (MR_String) ".analysis_status"))
                                        case_num_0 = (MR_Integer) 5;
                                      break;
                                  }
                                  break;
                              }
                            break;
                        }
                        break;
                      case (MR_Integer) 98:
                        if (MR_offset_streq(2, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31, (MR_String) ".bat"))
                          case_num_0 = (MR_Integer) 6;
                        break;
                      case (MR_Integer) 99:
                        switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31), 2)) {
                          case (MR_Integer) 0:
                            case_num_0 = (MR_Integer) 7;
                            break;
                          case (MR_Integer) 95:
                            if (MR_offset_streq(3, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31, (MR_String) ".c_date"))
                              case_num_0 = (MR_Integer) 8;
                            break;
                          case (MR_Integer) 108:
                            if (MR_offset_streq(3, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31, (MR_String) ".class"))
                              case_num_0 = (MR_Integer) 9;
                            break;
                          case (MR_Integer) 115:
                            switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31), 3)) {
                              case (MR_Integer) 0:
                                case_num_0 = (MR_Integer) 10;
                                break;
                              case (MR_Integer) 95:
                                if (MR_offset_streq(4, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31, (MR_String) ".cs_date"))
                                  case_num_0 = (MR_Integer) 11;
                                break;
                            }
                            break;
                        }
                        break;
                      case (MR_Integer) 100:
                        switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31), 2)) {
                          case (MR_Integer) 105:
                            if (MR_offset_streq(3, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31, (MR_String) ".dir"))
                              case_num_0 = (MR_Integer) 12;
                            break;
                          case (MR_Integer) 108:
                            if (MR_offset_streq(3, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31, (MR_String) ".dll"))
                              case_num_0 = (MR_Integer) 13;
                            break;
                        }
                        break;
                      case (MR_Integer) 105:
                        switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31), 2)) {
                          case (MR_Integer) 108:
                            switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31), 3)) {
                              case (MR_Integer) 0:
                                case_num_0 = (MR_Integer) 14;
                                break;
                              case (MR_Integer) 95:
                                if (MR_offset_streq(4, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31, (MR_String) ".il_date"))
                                  case_num_0 = (MR_Integer) 15;
                                break;
                            }
                            break;
                          case (MR_Integer) 109:
                            if (MR_offset_streq(3, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31, (MR_String) ".imdg"))
                              case_num_0 = (MR_Integer) 16;
                            break;
                          case (MR_Integer) 110:
                            if (MR_offset_streq(3, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31, (MR_String) ".init"))
                              case_num_0 = (MR_Integer) 17;
                            break;
                        }
                        break;
                      case (MR_Integer) 106:
                        if (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31), 2)) == (MR_Integer) 97))
                          switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31), 3)) {
                            case (MR_Integer) 114:
                              if (MR_offset_streq(4, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31, (MR_String) ".jar"))
                                case_num_0 = (MR_Integer) 18;
                              break;
                            case (MR_Integer) 118:
                              if (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31), 4)) == (MR_Integer) 97))
                                switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31), 5)) {
                                  case (MR_Integer) 0:
                                    case_num_0 = (MR_Integer) 19;
                                    break;
                                  case (MR_Integer) 95:
                                    if (MR_offset_streq(6, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31, (MR_String) ".java_date"))
                                      case_num_0 = (MR_Integer) 20;
                                    break;
                                }
                              break;
                          }
                        break;
                      case (MR_Integer) 109:
                        if (MR_offset_streq(2, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31, (MR_String) ".mih"))
                          case_num_0 = (MR_Integer) 21;
                        break;
                      case (MR_Integer) 111:
                        if (((((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31), 2)) == (MR_Integer) 112)) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31), 3)) == (MR_Integer) 116))))
                          switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31), 4)) {
                            case (MR_Integer) 0:
                              case_num_0 = (MR_Integer) 22;
                              break;
                            case (MR_Integer) 100:
                              if (MR_offset_streq(5, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31, (MR_String) ".optdate"))
                                case_num_0 = (MR_Integer) 23;
                              break;
                          }
                        break;
                      case (MR_Integer) 112:
                        if (((((((((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31), 2)) == (MR_Integer) 105)) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31), 3)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31), 4)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31), 5)) == (MR_Integer) 115))))
                          switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31), 6)) {
                            case (MR_Integer) 0:
                              case_num_0 = (MR_Integer) 24;
                              break;
                            case (MR_Integer) 95:
                              if (MR_offset_streq(7, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31, (MR_String) ".pic_s_date"))
                                case_num_0 = (MR_Integer) 25;
                              break;
                          }
                        break;
                      case (MR_Integer) 114:
                        if (MR_offset_streq(2, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31, (MR_String) ".request"))
                          case_num_0 = (MR_Integer) 26;
                        break;
                      case (MR_Integer) 115:
                        switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31), 2)) {
                          case (MR_Integer) 0:
                            case_num_0 = (MR_Integer) 27;
                            break;
                          case (MR_Integer) 95:
                            if (MR_offset_streq(3, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31, (MR_String) ".s_date"))
                              case_num_0 = (MR_Integer) 28;
                            break;
                        }
                        break;
                      case (MR_Integer) 116:
                        if (((((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31), 2)) == (MR_Integer) 114)) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31), 3)) == (MR_Integer) 97))))
                          switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31), 4)) {
                            case (MR_Integer) 99:
                              if (MR_offset_streq(5, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31, (MR_String) ".track_flags"))
                                case_num_0 = (MR_Integer) 29;
                              break;
                            case (MR_Integer) 110:
                              if (((((((((((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31), 5)) == (MR_Integer) 115)) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31), 6)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31), 7)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31), 8)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31), 9)) == (MR_Integer) 116))))
                                switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31), 10)) {
                                  case (MR_Integer) 0:
                                    case_num_0 = (MR_Integer) 30;
                                    break;
                                  case (MR_Integer) 95:
                                    if (MR_offset_streq(11, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31, (MR_String) ".trans_opt_date"))
                                      case_num_0 = (MR_Integer) 31;
                                    break;
                                }
                              break;
                          }
                        break;
                      case (MR_Integer) 117:
                        if (MR_offset_streq(2, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31, (MR_String) ".used"))
                          case_num_0 = (MR_Integer) 32;
                        break;
                    }
                    break;
                  case (MR_Integer) 95:
                    if (((((((((((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31), 1)) == (MR_Integer) 105)) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31), 2)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31), 3)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31), 4)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31), 5)) == (MR_Integer) 46))))
                      switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31), 6)) {
                        case (MR_Integer) 36:
                          if (MR_offset_streq(7, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31, (MR_String) "_init.\044O"))
                            case_num_0 = (MR_Integer) 33;
                          break;
                        case (MR_Integer) 99:
                          if (MR_offset_streq(7, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31, (MR_String) "_init.c"))
                            case_num_0 = (MR_Integer) 34;
                          break;
                      }
                    break;
                }
                if ((case_num_0 < (MR_Integer) 0))
                  (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
                else
                {
                  // we found a match; look up the results
                  ;
                  (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
                }
              }
              if (!((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded))
              {
                {
                  MR_String Var_39;

                  libs__globals__lookup_string_option_3_p_0((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Globals_9, (MR_Integer) 611, &Var_39);
                  (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = (strcmp((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31, Var_39) == 0);
                }
                if (!((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded))
                {
                  {
                    MR_String Var_40;

                    libs__globals__lookup_string_option_3_p_0((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Globals_9, (MR_Integer) 610, &Var_40);
                    (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = (strcmp((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31, Var_40) == 0);
                  }
                  if (!((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded))
                  {
                    {
                      MR_String Var_41;

                      libs__globals__lookup_string_option_3_p_0((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Globals_9, (MR_Integer) 609, &Var_41);
                      (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = (strcmp((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_31, Var_41) == 0);
                    }
                    if (!((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded))
                      parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_8_p_0_3(&env);
                  }
                }
              }
            }
            (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = !((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded);
            if ((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
            {
              MR_Integer case_num_2 = (MR_Integer) -1;

              switch (MR_nth_code_unit(ExtStr_18, 0)) {
                case (MR_Integer) 0:
                  case_num_2 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 46:
                  switch (MR_nth_code_unit(ExtStr_18, 1)) {
                    case (MR_Integer) 36:
                      switch (MR_nth_code_unit(ExtStr_18, 2)) {
                        case (MR_Integer) 40:
                          if (MR_offset_streq(3, ExtStr_18, (MR_String) ".\044(EXT_FOR_SHARED_LIB)"))
                            case_num_2 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 65:
                          if (MR_offset_streq(3, ExtStr_18, (MR_String) ".\044A"))
                            case_num_2 = (MR_Integer) 2;
                          break;
                      }
                      break;
                    case (MR_Integer) 97:
                      switch (MR_nth_code_unit(ExtStr_18, 2)) {
                        case (MR_Integer) 0:
                          case_num_2 = (MR_Integer) 3;
                          break;
                        case (MR_Integer) 108:
                          if (((((MR_nth_code_unit(ExtStr_18, 3)) == (MR_Integer) 108)) && (((MR_nth_code_unit(ExtStr_18, 4)) == (MR_Integer) 95))))
                            switch (MR_nth_code_unit(ExtStr_18, 5)) {
                              case (MR_Integer) 105:
                                if (((((MR_nth_code_unit(ExtStr_18, 6)) == (MR_Integer) 110)) && (((MR_nth_code_unit(ExtStr_18, 7)) == (MR_Integer) 116))))
                                  switch (MR_nth_code_unit(ExtStr_18, 8)) {
                                    case (MR_Integer) 51:
                                      if (MR_offset_streq(9, ExtStr_18, (MR_String) ".all_int3s"))
                                        case_num_2 = (MR_Integer) 4;
                                      break;
                                    case (MR_Integer) 115:
                                      if (MR_offset_streq(9, ExtStr_18, (MR_String) ".all_ints"))
                                        case_num_2 = (MR_Integer) 5;
                                      break;
                                  }
                                break;
                              case (MR_Integer) 111:
                                if (MR_offset_streq(6, ExtStr_18, (MR_String) ".all_opts"))
                                  case_num_2 = (MR_Integer) 6;
                                break;
                              case (MR_Integer) 116:
                                if (MR_offset_streq(6, ExtStr_18, (MR_String) ".all_trans_opts"))
                                  case_num_2 = (MR_Integer) 7;
                                break;
                            }
                          break;
                      }
                      break;
                    case (MR_Integer) 98:
                      if (MR_offset_streq(2, ExtStr_18, (MR_String) ".bat"))
                        case_num_2 = (MR_Integer) 8;
                      break;
                    case (MR_Integer) 99:
                      switch (MR_nth_code_unit(ExtStr_18, 2)) {
                        case (MR_Integer) 104:
                          if (MR_offset_streq(3, ExtStr_18, (MR_String) ".check"))
                            case_num_2 = (MR_Integer) 9;
                          break;
                        case (MR_Integer) 108:
                          switch (MR_nth_code_unit(ExtStr_18, 3)) {
                            case (MR_Integer) 97:
                              if (MR_offset_streq(4, ExtStr_18, (MR_String) ".classes"))
                                case_num_2 = (MR_Integer) 10;
                              break;
                            case (MR_Integer) 101:
                              if (MR_offset_streq(4, ExtStr_18, (MR_String) ".clean"))
                                case_num_2 = (MR_Integer) 11;
                              break;
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 100:
                      switch (MR_nth_code_unit(ExtStr_18, 2)) {
                        case (MR_Integer) 101:
                          if (((((((((MR_nth_code_unit(ExtStr_18, 3)) == (MR_Integer) 112)) && (((MR_nth_code_unit(ExtStr_18, 4)) == (MR_Integer) 101)))) && (((MR_nth_code_unit(ExtStr_18, 5)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(ExtStr_18, 6)) == (MR_Integer) 100))))
                            switch (MR_nth_code_unit(ExtStr_18, 7)) {
                              case (MR_Integer) 0:
                                case_num_2 = (MR_Integer) 12;
                                break;
                              case (MR_Integer) 101:
                                if (MR_offset_streq(8, ExtStr_18, (MR_String) ".dependency_graph"))
                                  case_num_2 = (MR_Integer) 13;
                                break;
                            }
                          break;
                        case (MR_Integer) 108:
                          if (MR_offset_streq(3, ExtStr_18, (MR_String) ".dll"))
                            case_num_2 = (MR_Integer) 14;
                          break;
                        case (MR_Integer) 121:
                          if (MR_offset_streq(3, ExtStr_18, (MR_String) ".dylib"))
                            case_num_2 = (MR_Integer) 15;
                          break;
                      }
                      break;
                    case (MR_Integer) 101:
                      switch (MR_nth_code_unit(ExtStr_18, 2)) {
                        case (MR_Integer) 114:
                          if (MR_offset_streq(3, ExtStr_18, (MR_String) ".err"))
                            case_num_2 = (MR_Integer) 16;
                          break;
                        case (MR_Integer) 120:
                          if (MR_offset_streq(3, ExtStr_18, (MR_String) ".exe"))
                            case_num_2 = (MR_Integer) 17;
                          break;
                      }
                      break;
                    case (MR_Integer) 104:
                      if (MR_offset_streq(2, ExtStr_18, (MR_String) ".hlds_dump"))
                        case_num_2 = (MR_Integer) 18;
                      break;
                    case (MR_Integer) 105:
                      switch (MR_nth_code_unit(ExtStr_18, 2)) {
                        case (MR_Integer) 108:
                          if (MR_offset_streq(3, ExtStr_18, (MR_String) ".ils"))
                            case_num_2 = (MR_Integer) 19;
                          break;
                        case (MR_Integer) 110:
                          switch (MR_nth_code_unit(ExtStr_18, 3)) {
                            case (MR_Integer) 105:
                              if (MR_offset_streq(4, ExtStr_18, (MR_String) ".init"))
                                case_num_2 = (MR_Integer) 20;
                              break;
                            case (MR_Integer) 115:
                              if (((((((((((MR_nth_code_unit(ExtStr_18, 4)) == (MR_Integer) 116)) && (((MR_nth_code_unit(ExtStr_18, 5)) == (MR_Integer) 97)))) && (((MR_nth_code_unit(ExtStr_18, 6)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(ExtStr_18, 7)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(ExtStr_18, 8)) == (MR_Integer) 95))))
                                switch (MR_nth_code_unit(ExtStr_18, 9)) {
                                  case (MR_Integer) 103:
                                    if (MR_offset_streq(10, ExtStr_18, (MR_String) ".install_grade_hdrs"))
                                      case_num_2 = (MR_Integer) 21;
                                    break;
                                  case (MR_Integer) 104:
                                    if (MR_offset_streq(10, ExtStr_18, (MR_String) ".install_hdrs"))
                                      case_num_2 = (MR_Integer) 22;
                                    break;
                                  case (MR_Integer) 105:
                                    if (MR_offset_streq(10, ExtStr_18, (MR_String) ".install_ints"))
                                      case_num_2 = (MR_Integer) 23;
                                    break;
                                  case (MR_Integer) 111:
                                    if (MR_offset_streq(10, ExtStr_18, (MR_String) ".install_opts"))
                                      case_num_2 = (MR_Integer) 24;
                                    break;
                                }
                              break;
                            case (MR_Integer) 116:
                              switch (MR_nth_code_unit(ExtStr_18, 4)) {
                                case (MR_Integer) 51:
                                  if (MR_offset_streq(5, ExtStr_18, (MR_String) ".int3s"))
                                    case_num_2 = (MR_Integer) 25;
                                  break;
                                case (MR_Integer) 115:
                                  if (MR_offset_streq(5, ExtStr_18, (MR_String) ".ints"))
                                    case_num_2 = (MR_Integer) 26;
                                  break;
                              }
                              break;
                          }
                          break;
                      }
                      break;
                    case (MR_Integer) 106:
                      if (((MR_nth_code_unit(ExtStr_18, 2)) == (MR_Integer) 97))
                        switch (MR_nth_code_unit(ExtStr_18, 3)) {
                          case (MR_Integer) 114:
                            if (MR_offset_streq(4, ExtStr_18, (MR_String) ".jar"))
                              case_num_2 = (MR_Integer) 27;
                            break;
                          case (MR_Integer) 118:
                            if (MR_offset_streq(4, ExtStr_18, (MR_String) ".javas"))
                              case_num_2 = (MR_Integer) 28;
                            break;
                        }
                      break;
                    case (MR_Integer) 108:
                      if (MR_offset_streq(2, ExtStr_18, (MR_String) ".lib"))
                        case_num_2 = (MR_Integer) 29;
                      break;
                    case (MR_Integer) 109:
                      switch (MR_nth_code_unit(ExtStr_18, 2)) {
                        case (MR_Integer) 104:
                          if (MR_offset_streq(3, ExtStr_18, (MR_String) ".mh"))
                            case_num_2 = (MR_Integer) 30;
                          break;
                        case (MR_Integer) 108:
                          if (MR_offset_streq(3, ExtStr_18, (MR_String) ".mlds_dump"))
                            case_num_2 = (MR_Integer) 31;
                          break;
                      }
                      break;
                    case (MR_Integer) 111:
                      switch (MR_nth_code_unit(ExtStr_18, 2)) {
                        case (MR_Integer) 112:
                          if (MR_offset_streq(3, ExtStr_18, (MR_String) ".opts"))
                            case_num_2 = (MR_Integer) 32;
                          break;
                        case (MR_Integer) 114:
                          if (MR_offset_streq(3, ExtStr_18, (MR_String) ".order"))
                            case_num_2 = (MR_Integer) 33;
                          break;
                      }
                      break;
                    case (MR_Integer) 114:
                      if (MR_offset_streq(2, ExtStr_18, (MR_String) ".realclean"))
                        case_num_2 = (MR_Integer) 34;
                      break;
                    case (MR_Integer) 115:
                      if (MR_offset_streq(2, ExtStr_18, (MR_String) ".so"))
                        case_num_2 = (MR_Integer) 35;
                      break;
                    case (MR_Integer) 116:
                      if (MR_offset_streq(2, ExtStr_18, (MR_String) ".trans_opts"))
                        case_num_2 = (MR_Integer) 36;
                      break;
                    case (MR_Integer) 117:
                      if (MR_offset_streq(2, ExtStr_18, (MR_String) ".ugly"))
                        case_num_2 = (MR_Integer) 37;
                      break;
                  }
                  break;
              }
              if ((case_num_2 < (MR_Integer) 0))
                (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
              else
              {
                // we found a match; look up the results
                ;
                (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
              }
            }
            if ((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
            {
              *DirComponents_15 = (MR_Word) ((MR_Unsigned) 0U);
              *FileName_16 = mercury__string__f_43_43_2_f_0(BaseNameNoExt_14, ExtStr_18);
            }
            else
            {
              MR_String SubDirName_20;
              MR_Word Var_23;
              MR_Word UseGradeSubdirs_60;
              MR_Word UseSubdirs_61;
              MR_String ExtStr_62;
              MR_Word Var_65;
              MR_Word Var_66;
              MR_String SubDirNamePrime_44;
              MR_Integer slot_3 = ((MR_hash_string4(ExtStr_18)) & (MR_Integer) 31);
              MR_String str_4;
              MR_Integer lo_7;
              MR_Integer hi_8;
              MR_Integer mid_9;
              MR_Integer result_10;

              // hashed string simple lookup switch
              ;
              // compute the hash value of the input string
              ;
              // hash chain loop
              ;
              do
              {
                // lookup the string for this hash slot
                ;
                str_4 = ((&parse_tree__file_names_vector_common_4[0 + slot_3]))->parse_tree__file_names__vector_common_type_4_0__vct_4_f_0;
                // did we find a match?
                ;
                if ((((str_4 != NULL)) && ((strcmp(str_4, ExtStr_18) == 0))))
                {
                  // we found a match; look up the results
                  ;
                  SubDirNamePrime_44 = ((&parse_tree__file_names_vector_common_4[0 + slot_3]))->parse_tree__file_names__vector_common_type_4_0__vct_4_f_2;
                  (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
                  // jump out of search loop
                  ;
                  goto label_0;
                }
                else
                {
                  // no match yet, so get next slot in hash chain
                  ;
                  slot_3 = ((&parse_tree__file_names_vector_common_4[0 + slot_3]))->parse_tree__file_names__vector_common_type_4_0__vct_4_f_1;
                }
              }
              while ((slot_3 >= (MR_Integer) 0));
              (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
            label_0:;
              if ((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
                SubDirName_20 = SubDirNamePrime_44;
              else
              {
                MR_String ExtName_45;

                (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) "_init.", ExtStr_18, &ExtName_45);
                if ((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
                  SubDirName_20 = mercury__string__f_43_43_2_f_0(ExtName_45, (MR_String) "s");
                else
                {
                  MR_String LibExt_46;
                  MR_String SharedLibExt_47;

                  libs__globals__lookup_string_option_3_p_0((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Globals_9, (MR_Integer) 610, &LibExt_46);
                  libs__globals__lookup_string_option_3_p_0((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Globals_9, (MR_Integer) 609, &SharedLibExt_47);
                  (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = (strcmp(ExtStr_18, LibExt_46) == 0);
                  if (!((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded))
                    (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = (strcmp(ExtStr_18, SharedLibExt_47) == 0);
                  if ((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
                    SubDirName_20 = (MR_String) "lib";
                  else
                  {
                    MR_String ExtName_59;

                    (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = mercury__string__remove_prefix_3_p_0((MR_String) ".", ExtStr_18, &ExtName_59);
                    if ((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
                      SubDirName_20 = mercury__string__f_43_43_2_f_0(ExtName_59, (MR_String) "s");
                    else
                    {
                      MR_String Var_55;
                      MR_String Var_57;

                      Var_57 = mercury__string__f_43_43_2_f_0(ExtStr_18, (MR_String) "\'");
                      Var_55 = mercury__string__f_43_43_2_f_0((MR_String) "unknown extension \140", Var_57);
                      {
                        mercury__require__unexpected_2_p_0((MR_String) "predicate \140parse_tree.file_names.choose_subdir_name\'/3", Var_55);
                        return;
                      }
                    }
                  }
                }
              }
              {
                Var_23 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(1, Var_23, 0) = ((MR_Box) (SubDirName_20));
                MR_hl_field(1, Var_23, 1) = ((MR_Box) (BaseParentDirs_13));
              }
              Var_65 = (MR_Integer) 684;
              libs__globals__lookup_bool_option_3_p_0((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Globals_9, Var_65, &UseGradeSubdirs_60);
              Var_66 = (MR_Integer) 683;
              libs__globals__lookup_bool_option_3_p_0((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Globals_9, Var_66, &UseSubdirs_61);
              ExtStr_62 = (MR_String) (OtherExt_12);
              (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = (UseGradeSubdirs_60 == (MR_Integer) 1);
              if ((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
              {
                (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74 = (MR_String) (OtherExt_12);
                {
                  MR_Integer case_num_5 = (MR_Integer) -1;

                  switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74), 0)) {
                    case (MR_Integer) 0:
                      case_num_5 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 46:
                      switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74), 1)) {
                        case (MR_Integer) 36:
                          if (MR_offset_streq(2, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74, (MR_String) ".\044A"))
                            case_num_5 = (MR_Integer) 1;
                          break;
                        case (MR_Integer) 97:
                          switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74), 2)) {
                            case (MR_Integer) 0:
                              case_num_5 = (MR_Integer) 2;
                              break;
                            case (MR_Integer) 110:
                              if (((((((((((((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74), 3)) == (MR_Integer) 97)) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74), 4)) == (MR_Integer) 108)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74), 5)) == (MR_Integer) 121)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74), 6)) == (MR_Integer) 115)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74), 7)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74), 8)) == (MR_Integer) 115))))
                                switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74), 9)) {
                                  case (MR_Integer) 0:
                                    case_num_5 = (MR_Integer) 3;
                                    break;
                                  case (MR_Integer) 95:
                                    switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74), 10)) {
                                      case (MR_Integer) 100:
                                        if (MR_offset_streq(11, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74, (MR_String) ".analysis_date"))
                                          case_num_5 = (MR_Integer) 4;
                                        break;
                                      case (MR_Integer) 115:
                                        if (MR_offset_streq(11, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74, (MR_String) ".analysis_status"))
                                          case_num_5 = (MR_Integer) 5;
                                        break;
                                    }
                                    break;
                                }
                              break;
                          }
                          break;
                        case (MR_Integer) 98:
                          if (MR_offset_streq(2, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74, (MR_String) ".bat"))
                            case_num_5 = (MR_Integer) 6;
                          break;
                        case (MR_Integer) 99:
                          switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74), 2)) {
                            case (MR_Integer) 0:
                              case_num_5 = (MR_Integer) 7;
                              break;
                            case (MR_Integer) 95:
                              if (MR_offset_streq(3, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74, (MR_String) ".c_date"))
                                case_num_5 = (MR_Integer) 8;
                              break;
                            case (MR_Integer) 108:
                              if (MR_offset_streq(3, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74, (MR_String) ".class"))
                                case_num_5 = (MR_Integer) 9;
                              break;
                            case (MR_Integer) 115:
                              switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74), 3)) {
                                case (MR_Integer) 0:
                                  case_num_5 = (MR_Integer) 10;
                                  break;
                                case (MR_Integer) 95:
                                  if (MR_offset_streq(4, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74, (MR_String) ".cs_date"))
                                    case_num_5 = (MR_Integer) 11;
                                  break;
                              }
                              break;
                          }
                          break;
                        case (MR_Integer) 100:
                          switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74), 2)) {
                            case (MR_Integer) 105:
                              if (MR_offset_streq(3, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74, (MR_String) ".dir"))
                                case_num_5 = (MR_Integer) 12;
                              break;
                            case (MR_Integer) 108:
                              if (MR_offset_streq(3, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74, (MR_String) ".dll"))
                                case_num_5 = (MR_Integer) 13;
                              break;
                          }
                          break;
                        case (MR_Integer) 105:
                          switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74), 2)) {
                            case (MR_Integer) 108:
                              switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74), 3)) {
                                case (MR_Integer) 0:
                                  case_num_5 = (MR_Integer) 14;
                                  break;
                                case (MR_Integer) 95:
                                  if (MR_offset_streq(4, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74, (MR_String) ".il_date"))
                                    case_num_5 = (MR_Integer) 15;
                                  break;
                              }
                              break;
                            case (MR_Integer) 109:
                              if (MR_offset_streq(3, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74, (MR_String) ".imdg"))
                                case_num_5 = (MR_Integer) 16;
                              break;
                            case (MR_Integer) 110:
                              if (MR_offset_streq(3, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74, (MR_String) ".init"))
                                case_num_5 = (MR_Integer) 17;
                              break;
                          }
                          break;
                        case (MR_Integer) 106:
                          if (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74), 2)) == (MR_Integer) 97))
                            switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74), 3)) {
                              case (MR_Integer) 114:
                                if (MR_offset_streq(4, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74, (MR_String) ".jar"))
                                  case_num_5 = (MR_Integer) 18;
                                break;
                              case (MR_Integer) 118:
                                if (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74), 4)) == (MR_Integer) 97))
                                  switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74), 5)) {
                                    case (MR_Integer) 0:
                                      case_num_5 = (MR_Integer) 19;
                                      break;
                                    case (MR_Integer) 95:
                                      if (MR_offset_streq(6, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74, (MR_String) ".java_date"))
                                        case_num_5 = (MR_Integer) 20;
                                      break;
                                  }
                                break;
                            }
                          break;
                        case (MR_Integer) 109:
                          if (MR_offset_streq(2, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74, (MR_String) ".mih"))
                            case_num_5 = (MR_Integer) 21;
                          break;
                        case (MR_Integer) 111:
                          if (((((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74), 2)) == (MR_Integer) 112)) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74), 3)) == (MR_Integer) 116))))
                            switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74), 4)) {
                              case (MR_Integer) 0:
                                case_num_5 = (MR_Integer) 22;
                                break;
                              case (MR_Integer) 100:
                                if (MR_offset_streq(5, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74, (MR_String) ".optdate"))
                                  case_num_5 = (MR_Integer) 23;
                                break;
                            }
                          break;
                        case (MR_Integer) 112:
                          if (((((((((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74), 2)) == (MR_Integer) 105)) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74), 3)) == (MR_Integer) 99)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74), 4)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74), 5)) == (MR_Integer) 115))))
                            switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74), 6)) {
                              case (MR_Integer) 0:
                                case_num_5 = (MR_Integer) 24;
                                break;
                              case (MR_Integer) 95:
                                if (MR_offset_streq(7, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74, (MR_String) ".pic_s_date"))
                                  case_num_5 = (MR_Integer) 25;
                                break;
                            }
                          break;
                        case (MR_Integer) 114:
                          if (MR_offset_streq(2, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74, (MR_String) ".request"))
                            case_num_5 = (MR_Integer) 26;
                          break;
                        case (MR_Integer) 115:
                          switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74), 2)) {
                            case (MR_Integer) 0:
                              case_num_5 = (MR_Integer) 27;
                              break;
                            case (MR_Integer) 95:
                              if (MR_offset_streq(3, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74, (MR_String) ".s_date"))
                                case_num_5 = (MR_Integer) 28;
                              break;
                          }
                          break;
                        case (MR_Integer) 116:
                          if (((((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74), 2)) == (MR_Integer) 114)) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74), 3)) == (MR_Integer) 97))))
                            switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74), 4)) {
                              case (MR_Integer) 99:
                                if (MR_offset_streq(5, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74, (MR_String) ".track_flags"))
                                  case_num_5 = (MR_Integer) 29;
                                break;
                              case (MR_Integer) 110:
                                if (((((((((((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74), 5)) == (MR_Integer) 115)) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74), 6)) == (MR_Integer) 95)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74), 7)) == (MR_Integer) 111)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74), 8)) == (MR_Integer) 112)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74), 9)) == (MR_Integer) 116))))
                                  switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74), 10)) {
                                    case (MR_Integer) 0:
                                      case_num_5 = (MR_Integer) 30;
                                      break;
                                    case (MR_Integer) 95:
                                      if (MR_offset_streq(11, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74, (MR_String) ".trans_opt_date"))
                                        case_num_5 = (MR_Integer) 31;
                                      break;
                                  }
                                break;
                            }
                          break;
                        case (MR_Integer) 117:
                          if (MR_offset_streq(2, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74, (MR_String) ".used"))
                            case_num_5 = (MR_Integer) 32;
                          break;
                      }
                      break;
                    case (MR_Integer) 95:
                      if (((((((((((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74), 1)) == (MR_Integer) 105)) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74), 2)) == (MR_Integer) 110)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74), 3)) == (MR_Integer) 105)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74), 4)) == (MR_Integer) 116)))) && (((MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74), 5)) == (MR_Integer) 46))))
                        switch (MR_nth_code_unit(((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74), 6)) {
                          case (MR_Integer) 36:
                            if (MR_offset_streq(7, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74, (MR_String) "_init.\044O"))
                              case_num_5 = (MR_Integer) 33;
                            break;
                          case (MR_Integer) 99:
                            if (MR_offset_streq(7, (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74, (MR_String) "_init.c"))
                              case_num_5 = (MR_Integer) 34;
                            break;
                        }
                      break;
                  }
                  if ((case_num_5 < (MR_Integer) 0))
                    (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
                  else
                  {
                    // we found a match; look up the results
                    ;
                    (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
                  }
                }
                if (!((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded))
                {
                  {
                    MR_String Var_82;

                    libs__globals__lookup_string_option_3_p_0((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Globals_9, (MR_Integer) 611, &Var_82);
                    (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = (strcmp((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74, Var_82) == 0);
                  }
                  if (!((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded))
                  {
                    {
                      MR_String Var_83;

                      libs__globals__lookup_string_option_3_p_0((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Globals_9, (MR_Integer) 610, &Var_83);
                      (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = (strcmp((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74, Var_83) == 0);
                    }
                    if (!((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded))
                    {
                      {
                        MR_String Var_84;

                        libs__globals__lookup_string_option_3_p_0((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Globals_9, (MR_Integer) 609, &Var_84);
                        (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = (strcmp((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__ExtStr_74, Var_84) == 0);
                      }
                      if (!((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded))
                        parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_8_p_0_6(&env);
                    }
                  }
                }
                if ((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
                {
                  (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = (Search_11 == (MR_Integer) 0);
                  if ((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
                  {
                    // binary string simple lookup switch
                    ;
                    lo_7 = (MR_Integer) 0;
                    hi_8 = (MR_Integer) 4;
                    do
                    {
                      mid_9 = (((MR_Integer) ((MR_Unsigned) lo_7 + (MR_Unsigned) hi_8)) / (MR_Integer) 2);
                      result_10 = MR_strcmp(ExtStr_62, ((&parse_tree__file_names_vector_common_5[0 + mid_9]))->parse_tree__file_names__vector_common_type_5_0__vct_5_f_0);
                      if ((result_10 == (MR_Integer) 0))
                      {
                        (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_TRUE;
                        // jump out of search loop
                        ;
                        goto label_1;
                      }
                      else
                      if ((result_10 < (MR_Integer) 0))
                        hi_8 = (MR_Integer) ((MR_Unsigned) mid_9 - (MR_Unsigned) 1);
                      else
                        lo_7 = (MR_Integer) ((MR_Unsigned) mid_9 + (MR_Unsigned) 1);
                    }
                    while ((lo_7 <= hi_8));
                    (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = MR_FALSE;
                  label_1:;
                  }
                  (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = !((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded);
                }
              }
              if ((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
              {
                MR_String Grade_63;
                MR_String TargetArch_64;
                MR_Word Var_69;
                MR_Word Var_70;
                MR_Word Var_71;

                libs__compute_grade__grade_directory_component_2_p_0((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Globals_9, &Grade_63);
                libs__globals__lookup_string_option_3_p_0((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__Globals_9, (MR_Integer) 702, &TargetArch_64);
                {
                  Var_71 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_71, 0) = ((MR_Box) ((MR_String) "Mercury"));
                  MR_hl_field(1, Var_71, 1) = ((MR_Box) (Var_23));
                }
                {
                  Var_70 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_70, 0) = ((MR_Box) (TargetArch_64));
                  MR_hl_field(1, Var_70, 1) = ((MR_Box) (Var_71));
                }
                {
                  Var_69 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_69, 0) = ((MR_Box) (Grade_63));
                  MR_hl_field(1, Var_69, 1) = ((MR_Box) (Var_70));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  *DirComponents_15 = base;
                  MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "Mercury"));
                  MR_hl_field(1, base, 1) = ((MR_Box) (Var_69));
                }
              }
              else
              {
                (env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded = (UseSubdirs_61 == (MR_Integer) 1);
                if ((env).parse_tree__file_names__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_99_104_111_111_115_101_95_102_105_108_101_95_110_97_109_101_95_95_91_50_93_95_48_95_56_95_112_95_48_95_101_110_118_95_48__succeeded)
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    *DirComponents_15 = base;
                    MR_hl_field(1, base, 0) = ((MR_Box) ((MR_String) "Mercury"));
                    MR_hl_field(1, base, 1) = ((MR_Box) (Var_23));
                  }
                else
                  *DirComponents_15 = Var_23;
              }
              if ((*DirComponents_15 == (MR_Word) ((MR_Unsigned) 0U)))
                *FileName_16 = mercury__string__f_43_43_2_f_0(BaseNameNoExt_14, ExtStr_62);
              else
              {
                MR_Word Components_89;
                MR_Word Var_90;
                MR_String Var_91;

                Var_91 = mercury__string__f_43_43_2_f_0(BaseNameNoExt_14, ExtStr_62);
                {
                  Var_90 = (MR_Word) MR_mkword(1, MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(1, Var_90, 0) = ((MR_Box) (Var_91));
                  MR_hl_field(1, Var_90, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                Components_89 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), *DirComponents_15, Var_90);
                *FileName_16 = mercury__dir__relative_path_name_from_components_1_f_0(Components_89);
              }
            }
          }
          break;
      }
  }
}

void MR_CALL 
parse_tree__file_names__module_name_to_source_file_name_4_p_0(
  MR_Word ModuleName_5,
  MR_String * SourceFileName_6)
{
  MR_Word MaybeFileName_8;

  parse_tree__source_file_map__lookup_module_source_file_4_p_0(ModuleName_5, &MaybeFileName_8);
  if ((MaybeFileName_8 == (MR_Word) ((MR_Unsigned) 0U)))
  {
    MR_String Var_13;

    Var_13 = parse_tree__source_file_map__default_source_file_name_1_f_0(ModuleName_5);
    *SourceFileName_6 = mercury__string__f_43_43_2_f_0((MR_String) "Mercury/.missing.", Var_13);
  }
  else
    *SourceFileName_6 = ((MR_String) ((MR_hl_field(1, MaybeFileName_8, (MR_Integer) 0))));
}

MR_Word MR_CALL 
parse_tree__file_names__make_module_dep_file_extension_0_f_0(void)
{
  return (MR_Word) (((MR_Box) ((MR_String) ".module_dep")));
}

MR_String MR_CALL 
parse_tree__file_names__other_extension_to_string_1_f_0(
  MR_Word OtherExt_3)
{
  MR_String ExtStr_4 = (MR_String) (OtherExt_3);

  return ExtStr_4;
}

MR_String MR_CALL 
parse_tree__file_names__extension_to_string_1_f_0(
  MR_Word Ext_3)
{
  MR_String ExtStr_4;

  if ((Ext_3 == (MR_Word) ((MR_Unsigned) 0U)))
    ExtStr_4 = (MR_String) ".m";
  else
  {
    MR_Word OtherExt_5 = ((MR_Word) ((MR_hl_field(1, Ext_3, (MR_Integer) 0))));

    ExtStr_4 = (MR_String) (OtherExt_5);
  }
  return ExtStr_4;
}

static MR_bool MR_CALL 
parse_tree__file_names____Unify____count_sum_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__file_names____Unify____count_sum_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__file_names____Compare____count_sum_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__file_names____Compare____count_sum_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__file_names____Unify____ext_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__file_names____Unify____ext_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__file_names____Compare____ext_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__file_names____Compare____ext_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__file_names____Unify____maybe_create_dirs_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__file_names____Unify____maybe_create_dirs_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__file_names____Compare____maybe_create_dirs_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__file_names____Compare____maybe_create_dirs_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__file_names____Unify____maybe_search_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__file_names____Unify____maybe_search_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__file_names____Compare____maybe_search_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__file_names____Compare____maybe_search_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__file_names____Unify____other_ext_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__file_names____Unify____other_ext_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__file_names____Compare____other_ext_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__file_names____Compare____other_ext_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__file_names____Unify____record_key_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__file_names____Unify____record_key_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__file_names____Compare____record_key_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__file_names____Compare____record_key_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
}

static MR_bool MR_CALL 
parse_tree__file_names____Unify____record_value_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  MR_bool succeeded;

  succeeded = parse_tree__file_names____Unify____record_value_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
  return succeeded;
}

static void MR_CALL 
parse_tree__file_names____Compare____record_value_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  MR_Word conv0_HeadVar__1_1;

  parse_tree__file_names____Compare____record_value_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
  *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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
	MR_register_type_ctor_info(&parse_tree__file_names__parse_tree__file_names__type_ctor_info_ext_0);
	MR_register_type_ctor_info(&parse_tree__file_names__parse_tree__file_names__type_ctor_info_maybe_create_dirs_0);
	MR_register_type_ctor_info(&parse_tree__file_names__parse_tree__file_names__type_ctor_info_maybe_search_0);
	MR_register_type_ctor_info(&parse_tree__file_names__parse_tree__file_names__type_ctor_info_other_ext_0);
	MR_register_type_ctor_info(&parse_tree__file_names__parse_tree__file_names__type_ctor_info_record_key_0);
	MR_register_type_ctor_info(&parse_tree__file_names__parse_tree__file_names__type_ctor_info_record_value_0);
}

void mercury__parse_tree__file_names__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

void mercury__parse_tree__file_names__required_init(void)
{
	parse_tree__file_names__user_init_pred_116_0();
	parse_tree__file_names__user_init_pred_119_0();
}

// Ensure everything is compiled with the same grade.
const char *mercury__parse_tree__file_names__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module parse_tree.file_names.
