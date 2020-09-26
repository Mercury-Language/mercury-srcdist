/*
** Automatically generated from `getopt.m'
** by the Mercury compiler,
** version rotd-2020-09-26
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


// :- module getopt.
// :- implementation.

/*
INIT mercury__getopt__init
ENDINIT
*/

#include "getopt.mih"


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



struct mercury__getopt__IntroducedFrom__pred__init_option_table_multi__678__1_3_p_0_env_0_s {
  MR_Word * mercury__getopt__IntroducedFrom__pred__init_option_table_multi__678__1_3_p_0_env_0__LambdaHeadVar__1_10;
  MR_Cont mercury__getopt__IntroducedFrom__pred__init_option_table_multi__678__1_3_p_0_env_0__cont;
  void * mercury__getopt__IntroducedFrom__pred__init_option_table_multi__678__1_3_p_0_env_0__cont_env_ptr;
  MR_Box mercury__getopt__IntroducedFrom__pred__init_option_table_multi__678__1_3_p_0_env_0__Option_6;
  MR_Word mercury__getopt__IntroducedFrom__pred__init_option_table_multi__678__1_3_p_0_env_0__OptionData_7;
  MR_Box mercury__getopt__IntroducedFrom__pred__init_option_table_multi__678__1_3_p_0_env_0__conv1_OptionData_7;
};

struct mercury__getopt__IntroducedFrom__pred__init_option_table__670__1_3_p_0_env_0_s {
  MR_Word * mercury__getopt__IntroducedFrom__pred__init_option_table__670__1_3_p_0_env_0__LambdaHeadVar__1_10;
  MR_Cont mercury__getopt__IntroducedFrom__pred__init_option_table__670__1_3_p_0_env_0__cont;
  void * mercury__getopt__IntroducedFrom__pred__init_option_table__670__1_3_p_0_env_0__cont_env_ptr;
  MR_Box mercury__getopt__IntroducedFrom__pred__init_option_table__670__1_3_p_0_env_0__Option_6;
  MR_Word mercury__getopt__IntroducedFrom__pred__init_option_table__670__1_3_p_0_env_0__OptionData_7;
  MR_Box mercury__getopt__IntroducedFrom__pred__init_option_table__670__1_3_p_0_env_0__conv1_OptionData_7;
};

struct mercury__getopt__init_option_table_multi_2_p_0_2_env_0_s {
  MR_Box * mercury__getopt__init_option_table_multi_2_p_0_2_env_0__wrapper_arg_1;
  MR_Cont mercury__getopt__init_option_table_multi_2_p_0_2_env_0__cont;
  void * mercury__getopt__init_option_table_multi_2_p_0_2_env_0__cont_env_ptr;
  MR_Word mercury__getopt__init_option_table_multi_2_p_0_2_env_0__conv0_LambdaHeadVar__1_10;
};

struct mercury__getopt__init_option_table_2_p_0_2_env_0_s {
  MR_Box * mercury__getopt__init_option_table_2_p_0_2_env_0__wrapper_arg_1;
  MR_Cont mercury__getopt__init_option_table_2_p_0_2_env_0__cont;
  void * mercury__getopt__init_option_table_2_p_0_2_env_0__cont_env_ptr;
  MR_Word mercury__getopt__init_option_table_2_p_0_2_env_0__conv0_LambdaHeadVar__1_10;
};


static const MR_VA_PseudoTypeInfo_Struct2 mercury__getopt____vpti_pred_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0;

static const MR_FA_PseudoTypeInfo_Struct2 mercury__getopt__pair__pti_pair_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt__list__pti_list_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 mercury__getopt__tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0;

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_maybe_option_table_1_0[1];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_maybe_option_table_1_0;

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_maybe_option_table_1_1[1];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_maybe_option_table_1_1;

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_maybe_option_table_1_0[1];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_maybe_option_table_1_1[1];

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_maybe_option_table_1[2];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_maybe_option_table_1[2];

static const MR_Integer mercury__getopt__getopt__functor_number_map_maybe_option_table_1[2];

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_maybe_option_table_se_1_0[1];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_maybe_option_table_se_1_0;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt__getopt__pti_option_error_1__pseudo_1;

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_maybe_option_table_se_1_1[1];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_maybe_option_table_se_1_1;

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_maybe_option_table_se_1_0[1];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_maybe_option_table_se_1_1[1];

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_maybe_option_table_se_1[2];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_maybe_option_table_se_1[2];

static const MR_Integer mercury__getopt__getopt__functor_number_map_maybe_option_table_se_1[2];

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_data_0_0[1];

static const MR_DuArgLocn mercury__getopt__getopt__field_locns_option_data_0_0[1];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_0;

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_data_0_1[1];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_1;

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_data_0_2[1];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_2;

static const MR_FA_TypeInfo_Struct1 mercury__getopt__maybe__ti_maybe_1builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_data_0_3[1];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_3;

static const MR_FA_TypeInfo_Struct1 mercury__getopt__maybe__ti_maybe_1builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_data_0_4[1];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_4;

static const MR_FA_TypeInfo_Struct1 mercury__getopt__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_data_0_5[1];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_5;

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_6;

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_7;

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_8;

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_9;

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_10;

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_data_0_0[5];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_data_0_1[1];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_data_0_2[1];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_data_0_3[4];

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_data_0[4];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_data_0[11];

static const MR_Integer mercury__getopt__getopt__functor_number_map_option_data_0[11];

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_error_1_0[1];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_1_0;

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_error_1_1[3];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_1_1;

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_error_1_0[1];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_error_1_1[1];

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_error_1[2];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_error_1[2];

static const MR_Integer mercury__getopt__getopt__functor_number_map_option_error_1[2];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_reason_0_0;

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_reason_0_1;

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_error_reason_0_2[1];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_reason_0_2;

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_reason_0_3;

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_reason_0_4;

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_reason_0_5;

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_error_reason_0_6[1];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_reason_0_6;

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_error_reason_0_7[1];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_reason_0_7;

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_error_reason_0_0[5];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_error_reason_0_1[1];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_error_reason_0_2[1];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_error_reason_0_3[1];

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_error_reason_0[4];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_error_reason_0[8];

static const MR_Integer mercury__getopt__getopt__functor_number_map_option_error_reason_0[8];

static const MR_VA_PseudoTypeInfo_Struct2 mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1;

static const MR_VA_PseudoTypeInfo_Struct2 mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1;

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_1_0[3];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_1_0;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt__getopt__pti_maybe_option_table_1__pseudo_1;

static const MR_VA_PseudoTypeInfo_Struct4 mercury__getopt____vpti_pred_4__pseudo_1__plain_getopt__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0__pseudo_getopt__pti_maybe_option_table_1__pseudo_1;

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_1_1[4];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_1_1;

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_1_2[3];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_1_2;

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_1_3[4];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_1_3;

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_1_0[1];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_1_1[1];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_1_2[1];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_1_3[1];

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_ops_1[4];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_ops_1[4];

static const MR_Integer mercury__getopt__getopt__functor_number_map_option_ops_1[4];

static const MR_FA_PseudoTypeInfo_Struct2 mercury__getopt__getopt__pti_option_ops_special_2__pseudo_1__pseudo_2;

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_internal_2_0[3];

static const MR_ConstString mercury__getopt__getopt__field_names_option_ops_internal_2_0[3];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_internal_2_0;

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_internal_2_0[1];

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_ops_internal_2[1];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_ops_internal_2[1];

static const MR_Integer mercury__getopt__getopt__functor_number_map_option_ops_internal_2[1];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_special_2_0;

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_special_2_1[1];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_special_2_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt__set_ordlist__pti_set_ordlist_1__pseudo_1;

static const MR_VA_PseudoTypeInfo_Struct5 mercury__getopt____vpti_pred_5__pseudo_1__plain_getopt__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0__pseudo_getopt__pti_maybe_option_table_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1;

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_special_2_2[1];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_special_2_2;

static const MR_VA_PseudoTypeInfo_Struct6 mercury__getopt____vpti_pred_6__pseudo_1__plain_getopt__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0__pseudo_getopt__pti_maybe_option_table_1__pseudo_1__pseudo_2__pseudo_2;

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_special_2_3[1];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_special_2_3;

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_special_2_0[1];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_special_2_1[1];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_special_2_2[1];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_special_2_3[1];

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_ops_special_2[4];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_ops_special_2[4];

static const MR_Integer mercury__getopt__getopt__functor_number_map_option_ops_special_2[4];

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_track_1_0[3];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_track_1_0;

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_track_1_0[1];

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_ops_track_1[1];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_ops_track_1[1];

static const MR_Integer mercury__getopt__getopt__functor_number_map_option_ops_track_1[1];

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_userdata_2_0[3];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_userdata_2_0;

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_userdata_2_0[1];

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_ops_userdata_2[1];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_ops_userdata_2[1];

static const MR_Integer mercury__getopt__getopt__functor_number_map_option_ops_userdata_2[1];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_special_data_0_0;

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_special_data_0_1[1];

static const MR_DuArgLocn mercury__getopt__getopt__field_locns_special_data_0_1[1];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_special_data_0_1;

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_special_data_0_2[1];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_special_data_0_2;

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_special_data_0_3[1];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_special_data_0_3;

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_special_data_0_4[1];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_special_data_0_4;

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_special_data_0_0[1];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_special_data_0_1[1];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_special_data_0_2[1];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_special_data_0_3[2];

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_special_data_0[4];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_special_data_0[5];

static const MR_Integer mercury__getopt__getopt__functor_number_map_special_data_0[5];

static MR_Integer MR_CALL 
mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table_multi__678__1_3_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table_multi__678__1_3_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table_multi__678__1_3_p_0(
  MR_Word TypeInfo_for_OptionType_12,
  MR_Word OptionDefaultsPred_3,
  MR_Word * LambdaHeadVar__1_10,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table__670__1_3_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table__670__1_3_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table__670__1_3_p_0(
  MR_Word TypeInfo_for_OptionType_12,
  MR_Word OptionDefaultsPred_3,
  MR_Word * LambdaHeadVar__1_10,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
mercury__getopt__handle_long_option_16_p_0(
  MR_Word tscc_proc_2_input_1_TypeInfo_for_OptionType_62,
  MR_Word tscc_proc_2_input_2_TypeInfo_for_UserDataType_63,
  MR_Word tscc_proc_2_input_3_OptionOps_17,
  MR_String tscc_proc_2_input_4_Option_18,
  MR_Box tscc_proc_2_input_5_Flag_19,
  MR_Word tscc_proc_2_input_6_OptionData_20,
  MR_Word tscc_proc_2_input_7_MaybeOptionArg0_21,
  MR_Word tscc_proc_2_input_8_Args0_22,
  MR_Word * tscc_output_ptr_1_HeadVar__3_3,
  MR_Word tscc_proc_2_input_9_STATE_VARIABLE_OptionArgs_0_39,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_OptionArgs_5,
  MR_Word * tscc_output_ptr_3_HeadVar__6_6,
  MR_Word tscc_proc_2_input_10_STATE_VARIABLE_OptionTable_0_41,
  MR_Word * tscc_output_ptr_4_STATE_VARIABLE_OptionTable_8,
  MR_Word tscc_proc_2_input_11_STATE_VARIABLE_OptionsSet_0_43,
  MR_Word * tscc_output_ptr_5_STATE_VARIABLE_OptionsSet_10,
  MR_Box tscc_proc_2_input_12_STATE_VARIABLE_UserData_0_45,
  MR_Box * tscc_output_ptr_6_STATE_VARIABLE_UserData_12);

static void MR_CALL 
mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_110_101_103_97_116_101_100_95_111_112_116_105_111_110_95_95_91_50_93_95_48_10_p_0(
  MR_Word TypeInfo_for_OptionType_63,
  MR_Word OptionOps_11,
  MR_String Option_12,
  MR_Box Flag_13,
  MR_Word * MaybeError_14,
  MR_Word STATE_VARIABLE_OptionTable_0_26,
  MR_Word * STATE_VARIABLE_OptionTable_27,
  MR_Word STATE_VARIABLE_OptionsSet_0_28,
  MR_Word * STATE_VARIABLE_OptionsSet_29,
  MR_Box STATE_VARIABLE_UserData_0_30,
  MR_Box * STATE_VARIABLE_UserData_31);

static void MR_CALL 
mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_115_104_111_114_116_95_111_112_116_105_111_110_115_95_95_91_50_93_95_48_13_p_0(
  MR_Word TypeInfo_for_OptionType_81,
  MR_Word OptionOps_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * Args_4,
  MR_Word STATE_VARIABLE_OptionArgs_0_5,
  MR_Word * STATE_VARIABLE_OptionArgs_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_OptionTable_0_8,
  MR_Word * STATE_VARIABLE_OptionTable_9,
  MR_Word STATE_VARIABLE_OptionsSet_0_10,
  MR_Word * STATE_VARIABLE_OptionsSet_11,
  MR_Box STATE_VARIABLE_UserData_0_12,
  MR_Box * STATE_VARIABLE_UserData_13);

static void MR_CALL 
mercury__getopt__get_short_option_arg_6_p_0(
  MR_Word Opts_7,
  MR_String * Arg_8,
  MR_Word Args0_9,
  MR_Word * Args_10,
  MR_Word STATE_VARIABLE_OptionArgs_0_14,
  MR_Word * STATE_VARIABLE_OptionArgs_15);

static void MR_CALL 
mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_111_112_116_105_111_110_95_95_91_50_93_95_48_12_p_0(
  MR_Word TypeInfo_for_OptionType_145,
  MR_Word OptionOps_13,
  MR_Word OptionData_14,
  MR_String Option_15,
  MR_Box Flag_16,
  MR_Word MaybeArg_17,
  MR_Word * MaybeError_18,
  MR_Word STATE_VARIABLE_OptionTable_0_32,
  MR_Word * STATE_VARIABLE_OptionTable_33,
  MR_Word STATE_VARIABLE_OptionsSet_0_34,
  MR_Word * STATE_VARIABLE_OptionsSet_35,
  MR_Box STATE_VARIABLE_UserData_0_36,
  MR_Box * STATE_VARIABLE_UserData_37);

static void MR_CALL 
mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_101_114_114_111_114_95_95_91_49_93_95_48_4_p_0(
  MR_Box Flag_5,
  MR_String Option_6,
  MR_String Arg_7,
  MR_Word * MaybeError_8);

static void MR_CALL 
mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_115_112_101_99_105_97_108_95_111_112_116_105_111_110_95_95_91_50_93_95_48_11_p_0(
  MR_Word TypeInfo_for_OptionType_88,
  MR_Word OptionOps_12,
  MR_String Option_13,
  MR_Box Flag_14,
  MR_Word OptionData_15,
  MR_Word * MaybeError_16,
  MR_Word STATE_VARIABLE_OptionTable_0_33,
  MR_Word * STATE_VARIABLE_OptionTable_34,
  MR_Word STATE_VARIABLE_OptionsSet_0_35,
  MR_Word * STATE_VARIABLE_OptionsSet_36,
  MR_Box STATE_VARIABLE_UserData_0_37,
  MR_Box * STATE_VARIABLE_UserData_38);

static void MR_CALL 
mercury__getopt__init_option_table_multi_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mercury__getopt__init_option_table_multi_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__getopt__init_option_table_multi_2_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
mercury__getopt__init_option_table_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mercury__getopt__init_option_table_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__getopt__init_option_table_2_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
mercury__getopt____Unify____maybe_option_table_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__getopt____Compare____maybe_option_table_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__getopt____Unify____maybe_option_table_se_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__getopt____Compare____maybe_option_table_se_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__getopt____Unify____option_data_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__getopt____Compare____option_data_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__getopt____Unify____option_error_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__getopt____Compare____option_error_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__getopt____Unify____option_error_reason_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__getopt____Compare____option_error_reason_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__getopt____Compare____option_ops_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_internal_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
mercury__getopt____Compare____option_ops_internal_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_special_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
mercury__getopt____Compare____option_ops_special_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_track_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__getopt____Compare____option_ops_track_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_userdata_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static void MR_CALL 
mercury__getopt____Compare____option_ops_userdata_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5);

static MR_bool MR_CALL 
mercury__getopt____Unify____option_table_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__getopt____Compare____option_table_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__getopt____Unify____special_data_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__getopt____Compare____special_data_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mercury__getopt_scalar_common_1[7][2];

static /* final */ const MR_Box mercury__getopt_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__getopt_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__getopt_scalar_common_4[2][5];

static /* final */ const MR_Integer mercury__getopt_scalar_common_5[1][2];

static /* final */ const MR_Box mercury__getopt_scalar_common_6[1][6];

static /* final */ const MR_Box mercury__getopt_scalar_common_7[1][7];

static /* final */ const MR_Box mercury__getopt_scalar_common_8[2][1];




static /* final */ const MR_Box mercury__getopt_scalar_common_1[7][2] = {
  /* row 0 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 1 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 3 */
  {
    ((MR_Box) ((MR_Unsigned) 3U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 4 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Unsigned) 2U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
};

static /* final */ const MR_Box mercury__getopt_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__getopt_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__getopt_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__getopt_scalar_common_4[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__getopt_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__getopt_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Integer mercury__getopt_scalar_common_5[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box mercury__getopt_scalar_common_6[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mercury__getopt_scalar_common_5[0])),
    ((MR_Box) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__getopt____vpti_pred_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0)),
    ((MR_Box) (&mercury__getopt__pair__pti_pair_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0))
  },
};

static /* final */ const MR_Box mercury__getopt_scalar_common_7[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mercury__getopt_scalar_common_5[0])),
    ((MR_Box) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__getopt__list__pti_list_1__pseudo_1)),
    ((MR_Box) (&mercury__getopt__list__pti_list_1__pseudo_1))
  },
};

static /* final */ const MR_Box mercury__getopt_scalar_common_8[2][1] = {
  /* row 0 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
  },
  /* row 1 */
  {
    (MR_Box) ((MR_Unsigned) 0U)
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



static const MR_VA_PseudoTypeInfo_Struct2 mercury__getopt____vpti_pred_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&mercury__getopt__getopt__type_ctor_info_option_data_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__getopt__pair__pti_pair_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&mercury__getopt__getopt__type_ctor_info_option_data_0)
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__getopt__tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&mercury__getopt__getopt__type_ctor_info_option_data_0)
  }
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_maybe_option_table_1_0[1] = {
  (MR_PseudoTypeInfo) (&mercury__getopt__tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0)
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_maybe_option_table_1_0 = {
  (MR_String) "ok",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__getopt__getopt__field_types_maybe_option_table_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_maybe_option_table_1_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_maybe_option_table_1_1 = {
  (MR_String) "error",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__getopt__getopt__field_types_maybe_option_table_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_maybe_option_table_1_0[1] = {
  &mercury__getopt__getopt__du_functor_desc_maybe_option_table_1_0
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_maybe_option_table_1_1[1] = {
  &mercury__getopt__getopt__du_functor_desc_maybe_option_table_1_1
};

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_maybe_option_table_1[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_maybe_option_table_1_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_maybe_option_table_1_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_maybe_option_table_1[2] = {
  &mercury__getopt__getopt__du_functor_desc_maybe_option_table_1_1,
  &mercury__getopt__getopt__du_functor_desc_maybe_option_table_1_0
};

static const MR_Integer mercury__getopt__getopt__functor_number_map_maybe_option_table_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__getopt__getopt__type_ctor_info_maybe_option_table_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt____Unify____maybe_option_table_1_0_10001)),
  ((MR_Box) (mercury__getopt____Compare____maybe_option_table_1_0_10001)),
  (MR_String) "getopt",
  (MR_String) "maybe_option_table",
  {     mercury__getopt__getopt__du_name_ordered_maybe_option_table_1 },
  {     mercury__getopt__getopt__du_ptag_ordered_maybe_option_table_1 },
  (MR_Integer) 2,
  UINT16_C(4),
  mercury__getopt__getopt__functor_number_map_maybe_option_table_1
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_maybe_option_table_se_1_0[1] = {
  (MR_PseudoTypeInfo) (&mercury__getopt__tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0)
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_maybe_option_table_se_1_0 = {
  (MR_String) "ok",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__getopt__getopt__field_types_maybe_option_table_se_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt__getopt__pti_option_error_1__pseudo_1 = {
  &mercury__getopt__getopt__type_ctor_info_option_error_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_maybe_option_table_se_1_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__getopt__getopt__pti_option_error_1__pseudo_1)
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_maybe_option_table_se_1_1 = {
  (MR_String) "error",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__getopt__getopt__field_types_maybe_option_table_se_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_maybe_option_table_se_1_0[1] = {
  &mercury__getopt__getopt__du_functor_desc_maybe_option_table_se_1_0
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_maybe_option_table_se_1_1[1] = {
  &mercury__getopt__getopt__du_functor_desc_maybe_option_table_se_1_1
};

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_maybe_option_table_se_1[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_maybe_option_table_se_1_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_maybe_option_table_se_1_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_maybe_option_table_se_1[2] = {
  &mercury__getopt__getopt__du_functor_desc_maybe_option_table_se_1_1,
  &mercury__getopt__getopt__du_functor_desc_maybe_option_table_se_1_0
};

static const MR_Integer mercury__getopt__getopt__functor_number_map_maybe_option_table_se_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__getopt__getopt__type_ctor_info_maybe_option_table_se_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt____Unify____maybe_option_table_se_1_0_10001)),
  ((MR_Box) (mercury__getopt____Compare____maybe_option_table_se_1_0_10001)),
  (MR_String) "getopt",
  (MR_String) "maybe_option_table_se",
  {     mercury__getopt__getopt__du_name_ordered_maybe_option_table_se_1 },
  {     mercury__getopt__getopt__du_ptag_ordered_maybe_option_table_se_1 },
  (MR_Integer) 2,
  UINT16_C(4),
  mercury__getopt__getopt__functor_number_map_maybe_option_table_se_1
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_data_0_0[1] = {
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
};

static const MR_DuArgLocn mercury__getopt__getopt__field_locns_option_data_0_0[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_0 = {
  (MR_String) "bool",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__getopt__getopt__field_types_option_data_0_0,
  NULL,
  mercury__getopt__getopt__field_locns_option_data_0_0,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_data_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_1 = {
  (MR_String) "int",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__getopt__getopt__field_types_option_data_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_data_0_2[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_2 = {
  (MR_String) "string",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(2),
  mercury__getopt__getopt__field_types_option_data_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 mercury__getopt__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
  }
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_data_0_3[1] = {
  (MR_PseudoTypeInfo) (&mercury__getopt__maybe__ti_maybe_1builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_3 = {
  (MR_String) "maybe_int",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(3),
  mercury__getopt__getopt__field_types_option_data_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 mercury__getopt__maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_data_0_4[1] = {
  (MR_PseudoTypeInfo) (&mercury__getopt__maybe__ti_maybe_1builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_4 = {
  (MR_String) "maybe_string",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(4),
  mercury__getopt__getopt__field_types_option_data_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_TypeInfo_Struct1 mercury__getopt__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
  }
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_data_0_5[1] = {
  (MR_PseudoTypeInfo) (&mercury__getopt__list__ti_list_1builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_5 = {
  (MR_String) "accumulating",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 3,
  INT32_C(5),
  mercury__getopt__getopt__field_types_option_data_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_6 = {
  (MR_String) "special",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(6),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_7 = {
  (MR_String) "bool_special",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(7),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_8 = {
  (MR_String) "int_special",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(8),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_9 = {
  (MR_String) "string_special",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 3,
  INT32_C(9),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_10 = {
  (MR_String) "maybe_string_special",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 4,
  INT32_C(10),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_data_0_0[5] = {
  &mercury__getopt__getopt__du_functor_desc_option_data_0_6,
  &mercury__getopt__getopt__du_functor_desc_option_data_0_7,
  &mercury__getopt__getopt__du_functor_desc_option_data_0_8,
  &mercury__getopt__getopt__du_functor_desc_option_data_0_9,
  &mercury__getopt__getopt__du_functor_desc_option_data_0_10
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_data_0_1[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_data_0_0
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_data_0_2[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_data_0_1
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_data_0_3[4] = {
  &mercury__getopt__getopt__du_functor_desc_option_data_0_2,
  &mercury__getopt__getopt__du_functor_desc_option_data_0_3,
  &mercury__getopt__getopt__du_functor_desc_option_data_0_4,
  &mercury__getopt__getopt__du_functor_desc_option_data_0_5
};

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_data_0[4] = {
  {
    UINT32_C(5),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__getopt__getopt__du_stag_ordered_option_data_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_data_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_data_0_2,
    INT8_C(-1)
  },
  {
    UINT32_C(4),
    MR_SECTAG_REMOTE_FULL_WORD,
    mercury__getopt__getopt__du_stag_ordered_option_data_0_3,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_data_0[11] = {
  &mercury__getopt__getopt__du_functor_desc_option_data_0_5,
  &mercury__getopt__getopt__du_functor_desc_option_data_0_0,
  &mercury__getopt__getopt__du_functor_desc_option_data_0_7,
  &mercury__getopt__getopt__du_functor_desc_option_data_0_1,
  &mercury__getopt__getopt__du_functor_desc_option_data_0_8,
  &mercury__getopt__getopt__du_functor_desc_option_data_0_3,
  &mercury__getopt__getopt__du_functor_desc_option_data_0_4,
  &mercury__getopt__getopt__du_functor_desc_option_data_0_10,
  &mercury__getopt__getopt__du_functor_desc_option_data_0_6,
  &mercury__getopt__getopt__du_functor_desc_option_data_0_2,
  &mercury__getopt__getopt__du_functor_desc_option_data_0_9
};

static const MR_Integer mercury__getopt__getopt__functor_number_map_option_data_0[11] = {
  (MR_Integer) 1,
  (MR_Integer) 3,
  (MR_Integer) 9,
  (MR_Integer) 5,
  (MR_Integer) 6,
  (MR_Integer) 0,
  (MR_Integer) 8,
  (MR_Integer) 2,
  (MR_Integer) 4,
  (MR_Integer) 10,
  (MR_Integer) 7
};

const MR_TypeCtorInfo_Struct mercury__getopt__getopt__type_ctor_info_option_data_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt____Unify____option_data_0_0_10001)),
  ((MR_Box) (mercury__getopt____Compare____option_data_0_0_10001)),
  (MR_String) "getopt",
  (MR_String) "option_data",
  {     mercury__getopt__getopt__du_name_ordered_option_data_0 },
  {     mercury__getopt__getopt__du_ptag_ordered_option_data_0 },
  (MR_Integer) 11,
  UINT16_C(4),
  mercury__getopt__getopt__functor_number_map_option_data_0
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_error_1_0[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_1_0 = {
  (MR_String) "unrecognized_option",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__getopt__getopt__field_types_option_error_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_error_1_1[3] = {
  (MR_PseudoTypeInfo) ((MR_Integer) 1),
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__getopt__getopt__type_ctor_info_option_error_reason_0)
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_1_1 = {
  (MR_String) "option_error",
  INT16_C(3),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__getopt__getopt__field_types_option_error_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_error_1_0[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_error_1_0
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_error_1_1[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_error_1_1
};

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_error_1[2] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_error_1_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_error_1_1,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_error_1[2] = {
  &mercury__getopt__getopt__du_functor_desc_option_error_1_1,
  &mercury__getopt__getopt__du_functor_desc_option_error_1_0
};

static const MR_Integer mercury__getopt__getopt__functor_number_map_option_error_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__getopt__getopt__type_ctor_info_option_error_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(2),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt____Unify____option_error_1_0_10001)),
  ((MR_Box) (mercury__getopt____Compare____option_error_1_0_10001)),
  (MR_String) "getopt",
  (MR_String) "option_error",
  {     mercury__getopt__getopt__du_name_ordered_option_error_1 },
  {     mercury__getopt__getopt__du_ptag_ordered_option_error_1 },
  (MR_Integer) 2,
  UINT16_C(4),
  mercury__getopt__getopt__functor_number_map_option_error_1
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_reason_0_0 = {
  (MR_String) "unknown_type",
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

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_reason_0_1 = {
  (MR_String) "requires_argument",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 1,
  INT32_C(1),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_error_reason_0_2[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_reason_0_2 = {
  (MR_String) "does_not_allow_argument",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(2),
  mercury__getopt__getopt__field_types_option_error_reason_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_reason_0_3 = {
  (MR_String) "cannot_negate",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 2,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_reason_0_4 = {
  (MR_String) "special_handler_failed",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 3,
  INT32_C(4),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_reason_0_5 = {
  (MR_String) "special_handler_missing",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 4,
  INT32_C(5),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_error_reason_0_6[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_reason_0_6 = {
  (MR_String) "special_handler_error",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(6),
  mercury__getopt__getopt__field_types_option_error_reason_0_6,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_error_reason_0_7[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_reason_0_7 = {
  (MR_String) "requires_numeric_argument",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(3),
  (MR_Integer) -1,
  INT32_C(7),
  mercury__getopt__getopt__field_types_option_error_reason_0_7,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_error_reason_0_0[5] = {
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_0,
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_1,
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_3,
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_4,
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_5
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_error_reason_0_1[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_2
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_error_reason_0_2[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_6
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_error_reason_0_3[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_7
};

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_error_reason_0[4] = {
  {
    UINT32_C(5),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__getopt__getopt__du_stag_ordered_option_error_reason_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_error_reason_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_error_reason_0_2,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_error_reason_0_3,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_error_reason_0[8] = {
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_3,
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_2,
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_1,
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_7,
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_6,
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_4,
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_5,
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_0
};

static const MR_Integer mercury__getopt__getopt__functor_number_map_option_error_reason_0[8] = {
  (MR_Integer) 7,
  (MR_Integer) 2,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 5,
  (MR_Integer) 6,
  (MR_Integer) 4,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct mercury__getopt__getopt__type_ctor_info_option_error_reason_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt____Unify____option_error_reason_0_0_10001)),
  ((MR_Box) (mercury__getopt____Compare____option_error_reason_0_0_10001)),
  (MR_String) "getopt",
  (MR_String) "option_error_reason",
  {     mercury__getopt__getopt__du_name_ordered_option_error_reason_0 },
  {     mercury__getopt__getopt__du_ptag_ordered_option_error_reason_0 },
  (MR_Integer) 8,
  UINT16_C(4),
  mercury__getopt__getopt__functor_number_map_option_error_reason_0
};

static const MR_VA_PseudoTypeInfo_Struct2 mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_character_0),
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_1_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__getopt____vpti_pred_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0)
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_1_0 = {
  (MR_String) "option_ops",
  INT16_C(3),
  UINT16_C(7),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__getopt__getopt__field_types_option_ops_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt__getopt__pti_maybe_option_table_1__pseudo_1 = {
  &mercury__getopt__getopt__type_ctor_info_maybe_option_table_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_VA_PseudoTypeInfo_Struct4 mercury__getopt____vpti_pred_4__pseudo_1__plain_getopt__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0__pseudo_getopt__pti_maybe_option_table_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&mercury__getopt__getopt__type_ctor_info_special_data_0),
    (MR_PseudoTypeInfo) (&mercury__getopt__tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0),
    (MR_PseudoTypeInfo) (&mercury__getopt__getopt__pti_maybe_option_table_1__pseudo_1)
  }
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_1_1[4] = {
  (MR_PseudoTypeInfo) (&mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__getopt____vpti_pred_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0),
  (MR_PseudoTypeInfo) (&mercury__getopt____vpti_pred_4__pseudo_1__plain_getopt__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0__pseudo_getopt__pti_maybe_option_table_1__pseudo_1)
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_1_1 = {
  (MR_String) "option_ops",
  INT16_C(4),
  UINT16_C(15),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__getopt__getopt__field_types_option_ops_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_1_2[3] = {
  (MR_PseudoTypeInfo) (&mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__getopt____vpti_pred_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0)
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_1_2 = {
  (MR_String) "option_ops_multi",
  INT16_C(3),
  UINT16_C(7),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  mercury__getopt__getopt__field_types_option_ops_1_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_1_3[4] = {
  (MR_PseudoTypeInfo) (&mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__getopt____vpti_pred_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0),
  (MR_PseudoTypeInfo) (&mercury__getopt____vpti_pred_4__pseudo_1__plain_getopt__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0__pseudo_getopt__pti_maybe_option_table_1__pseudo_1)
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_1_3 = {
  (MR_String) "option_ops_multi",
  INT16_C(4),
  UINT16_C(15),
  MR_SECTAG_NONE,
  UINT8_C(3),
  (MR_Integer) -1,
  INT32_C(3),
  mercury__getopt__getopt__field_types_option_ops_1_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_1_0[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_1_0
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_1_1[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_1_1
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_1_2[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_1_2
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_1_3[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_1_3
};

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_ops_1[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_ops_1_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_ops_1_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_ops_1_2,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_ops_1_3,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_ops_1[4] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_1_0,
  &mercury__getopt__getopt__du_functor_desc_option_ops_1_1,
  &mercury__getopt__getopt__du_functor_desc_option_ops_1_2,
  &mercury__getopt__getopt__du_functor_desc_option_ops_1_3
};

static const MR_Integer mercury__getopt__getopt__functor_number_map_option_ops_1[4] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct mercury__getopt__getopt__type_ctor_info_option_ops_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt____Unify____option_ops_1_0_10001)),
  ((MR_Box) (mercury__getopt____Compare____option_ops_1_0_10001)),
  (MR_String) "getopt",
  (MR_String) "option_ops",
  {     mercury__getopt__getopt__du_name_ordered_option_ops_1 },
  {     mercury__getopt__getopt__du_ptag_ordered_option_ops_1 },
  (MR_Integer) 4,
  UINT16_C(4),
  mercury__getopt__getopt__functor_number_map_option_ops_1
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__getopt__getopt__pti_option_ops_special_2__pseudo_1__pseudo_2 = {
  &mercury__getopt__getopt__type_ctor_info_option_ops_special_2,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_internal_2_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__getopt__getopt__pti_option_ops_special_2__pseudo_1__pseudo_2)
};

static const MR_ConstString mercury__getopt__getopt__field_names_option_ops_internal_2_0[3] = {
  (MR_String) "short_option",
  (MR_String) "long_option",
  (MR_String) "special_handler"
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_internal_2_0 = {
  (MR_String) "option_ops_internal",
  INT16_C(3),
  UINT16_C(7),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__getopt__getopt__field_types_option_ops_internal_2_0,
  mercury__getopt__getopt__field_names_option_ops_internal_2_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_internal_2_0[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_internal_2_0
};

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_ops_internal_2[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_ops_internal_2_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_ops_internal_2[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_internal_2_0
};

static const MR_Integer mercury__getopt__getopt__functor_number_map_option_ops_internal_2[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__getopt__getopt__type_ctor_info_option_ops_internal_2 = {
  (MR_Integer) 2,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt____Unify____option_ops_internal_2_0_10001)),
  ((MR_Box) (mercury__getopt____Compare____option_ops_internal_2_0_10001)),
  (MR_String) "getopt",
  (MR_String) "option_ops_internal",
  {     mercury__getopt__getopt__du_name_ordered_option_ops_internal_2 },
  {     mercury__getopt__getopt__du_ptag_ordered_option_ops_internal_2 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__getopt__getopt__functor_number_map_option_ops_internal_2
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_special_2_0 = {
  (MR_String) "none",
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

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_special_2_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__getopt____vpti_pred_4__pseudo_1__plain_getopt__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0__pseudo_getopt__pti_maybe_option_table_1__pseudo_1)
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_special_2_1 = {
  (MR_String) "notrack",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__getopt__getopt__field_types_option_ops_special_2_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt__set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1)
  }
};

static const MR_VA_PseudoTypeInfo_Struct5 mercury__getopt____vpti_pred_5__pseudo_1__plain_getopt__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0__pseudo_getopt__pti_maybe_option_table_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 5,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&mercury__getopt__getopt__type_ctor_info_special_data_0),
    (MR_PseudoTypeInfo) (&mercury__getopt__tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0),
    (MR_PseudoTypeInfo) (&mercury__getopt__getopt__pti_maybe_option_table_1__pseudo_1),
    (MR_PseudoTypeInfo) (&mercury__getopt__set_ordlist__pti_set_ordlist_1__pseudo_1)
  }
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_special_2_2[1] = {
  (MR_PseudoTypeInfo) (&mercury__getopt____vpti_pred_5__pseudo_1__plain_getopt__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0__pseudo_getopt__pti_maybe_option_table_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1)
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_special_2_2 = {
  (MR_String) "track",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  mercury__getopt__getopt__field_types_option_ops_special_2_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_VA_PseudoTypeInfo_Struct6 mercury__getopt____vpti_pred_6__pseudo_1__plain_getopt__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0__pseudo_getopt__pti_maybe_option_table_1__pseudo_1__pseudo_2__pseudo_2 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 6,
  {
    (MR_PseudoTypeInfo) ((MR_Integer) 1),
    (MR_PseudoTypeInfo) (&mercury__getopt__getopt__type_ctor_info_special_data_0),
    (MR_PseudoTypeInfo) (&mercury__getopt__tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0),
    (MR_PseudoTypeInfo) (&mercury__getopt__getopt__pti_maybe_option_table_1__pseudo_1),
    (MR_PseudoTypeInfo) ((MR_Integer) 2),
    (MR_PseudoTypeInfo) ((MR_Integer) 2)
  }
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_special_2_3[1] = {
  (MR_PseudoTypeInfo) (&mercury__getopt____vpti_pred_6__pseudo_1__plain_getopt__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0__pseudo_getopt__pti_maybe_option_table_1__pseudo_1__pseudo_2__pseudo_2)
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_special_2_3 = {
  (MR_String) "userdata",
  INT16_C(1),
  UINT16_C(1),
  MR_SECTAG_NONE,
  UINT8_C(3),
  (MR_Integer) -1,
  INT32_C(3),
  mercury__getopt__getopt__field_types_option_ops_special_2_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_special_2_0[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_special_2_0
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_special_2_1[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_special_2_1
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_special_2_2[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_special_2_2
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_special_2_3[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_special_2_3
};

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_ops_special_2[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__getopt__getopt__du_stag_ordered_option_ops_special_2_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_ops_special_2_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_ops_special_2_2,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_ops_special_2_3,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_ops_special_2[4] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_special_2_0,
  &mercury__getopt__getopt__du_functor_desc_option_ops_special_2_1,
  &mercury__getopt__getopt__du_functor_desc_option_ops_special_2_2,
  &mercury__getopt__getopt__du_functor_desc_option_ops_special_2_3
};

static const MR_Integer mercury__getopt__getopt__functor_number_map_option_ops_special_2[4] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct mercury__getopt__getopt__type_ctor_info_option_ops_special_2 = {
  (MR_Integer) 2,
  UINT8_C(17),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt____Unify____option_ops_special_2_0_10001)),
  ((MR_Box) (mercury__getopt____Compare____option_ops_special_2_0_10001)),
  (MR_String) "getopt",
  (MR_String) "option_ops_special",
  {     mercury__getopt__getopt__du_name_ordered_option_ops_special_2 },
  {     mercury__getopt__getopt__du_ptag_ordered_option_ops_special_2 },
  (MR_Integer) 4,
  UINT16_C(4),
  mercury__getopt__getopt__functor_number_map_option_ops_special_2
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_track_1_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__getopt____vpti_pred_5__pseudo_1__plain_getopt__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0__pseudo_getopt__pti_maybe_option_table_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1)
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_track_1_0 = {
  (MR_String) "option_ops_track",
  INT16_C(3),
  UINT16_C(7),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__getopt__getopt__field_types_option_ops_track_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_track_1_0[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_track_1_0
};

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_ops_track_1[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_ops_track_1_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_ops_track_1[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_track_1_0
};

static const MR_Integer mercury__getopt__getopt__functor_number_map_option_ops_track_1[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__getopt__getopt__type_ctor_info_option_ops_track_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt____Unify____option_ops_track_1_0_10001)),
  ((MR_Box) (mercury__getopt____Compare____option_ops_track_1_0_10001)),
  (MR_String) "getopt",
  (MR_String) "option_ops_track",
  {     mercury__getopt__getopt__du_name_ordered_option_ops_track_1 },
  {     mercury__getopt__getopt__du_ptag_ordered_option_ops_track_1 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__getopt__getopt__functor_number_map_option_ops_track_1
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_userdata_2_0[3] = {
  (MR_PseudoTypeInfo) (&mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1),
  (MR_PseudoTypeInfo) (&mercury__getopt____vpti_pred_6__pseudo_1__plain_getopt__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0__pseudo_getopt__pti_maybe_option_table_1__pseudo_1__pseudo_2__pseudo_2)
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_userdata_2_0 = {
  (MR_String) "option_ops_userdata",
  INT16_C(3),
  UINT16_C(7),
  MR_SECTAG_NONE,
  UINT8_C(0),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__getopt__getopt__field_types_option_ops_userdata_2_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_userdata_2_0[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_userdata_2_0
};

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_ops_userdata_2[1] = {
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_ops_userdata_2_0,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_ops_userdata_2[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_userdata_2_0
};

static const MR_Integer mercury__getopt__getopt__functor_number_map_option_ops_userdata_2[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__getopt__getopt__type_ctor_info_option_ops_userdata_2 = {
  (MR_Integer) 2,
  UINT8_C(17),
  INT8_C(1),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt____Unify____option_ops_userdata_2_0_10001)),
  ((MR_Box) (mercury__getopt____Compare____option_ops_userdata_2_0_10001)),
  (MR_String) "getopt",
  (MR_String) "option_ops_userdata",
  {     mercury__getopt__getopt__du_name_ordered_option_ops_userdata_2 },
  {     mercury__getopt__getopt__du_ptag_ordered_option_ops_userdata_2 },
  (MR_Integer) 1,
  UINT16_C(4),
  mercury__getopt__getopt__functor_number_map_option_ops_userdata_2
};

const MR_TypeCtorInfo_Struct mercury__getopt__getopt__type_ctor_info_option_table_1 = {
  (MR_Integer) 1,
  UINT8_C(17),
  INT8_C(-1),
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__getopt____Unify____option_table_1_0_10001)),
  ((MR_Box) (mercury__getopt____Compare____option_table_1_0_10001)),
  (MR_String) "getopt",
  (MR_String) "option_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) (&mercury__getopt__tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0) },
  (MR_Integer) -1,
  UINT16_C(0),
  NULL
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_special_data_0_0 = {
  (MR_String) "none",
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

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_special_data_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__bool__bool__type_ctor_info_bool_0)
};

static const MR_DuArgLocn mercury__getopt__getopt__field_locns_special_data_0_1[1] = {
  {
    (MR_Integer) 0,
    (MR_Integer) 0,
    (MR_Integer) 1
  }
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_special_data_0_1 = {
  (MR_String) "bool",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__getopt__getopt__field_types_special_data_0_1,
  NULL,
  mercury__getopt__getopt__field_locns_special_data_0_1,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_special_data_0_2[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_int_0)
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_special_data_0_2 = {
  (MR_String) "int",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(2),
  mercury__getopt__getopt__field_types_special_data_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_special_data_0_3[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_special_data_0_3 = {
  (MR_String) "string",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(3),
  mercury__getopt__getopt__field_types_special_data_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_special_data_0_4[1] = {
  (MR_PseudoTypeInfo) (&mercury__getopt__maybe__ti_maybe_1builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_special_data_0_4 = {
  (MR_String) "maybe_string",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(4),
  mercury__getopt__getopt__field_types_special_data_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_special_data_0_0[1] = {
  &mercury__getopt__getopt__du_functor_desc_special_data_0_0
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_special_data_0_1[1] = {
  &mercury__getopt__getopt__du_functor_desc_special_data_0_1
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_special_data_0_2[1] = {
  &mercury__getopt__getopt__du_functor_desc_special_data_0_2
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_special_data_0_3[2] = {
  &mercury__getopt__getopt__du_functor_desc_special_data_0_3,
  &mercury__getopt__getopt__du_functor_desc_special_data_0_4
};

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_special_data_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__getopt__getopt__du_stag_ordered_special_data_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_special_data_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_special_data_0_2,
    INT8_C(-1)
  },
  {
    UINT32_C(2),
    MR_SECTAG_REMOTE_FULL_WORD,
    mercury__getopt__getopt__du_stag_ordered_special_data_0_3,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_special_data_0[5] = {
  &mercury__getopt__getopt__du_functor_desc_special_data_0_1,
  &mercury__getopt__getopt__du_functor_desc_special_data_0_2,
  &mercury__getopt__getopt__du_functor_desc_special_data_0_4,
  &mercury__getopt__getopt__du_functor_desc_special_data_0_0,
  &mercury__getopt__getopt__du_functor_desc_special_data_0_3
};

static const MR_Integer mercury__getopt__getopt__functor_number_map_special_data_0[5] = {
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct mercury__getopt__getopt__type_ctor_info_special_data_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt____Unify____special_data_0_0_10001)),
  ((MR_Box) (mercury__getopt____Compare____special_data_0_0_10001)),
  (MR_String) "getopt",
  (MR_String) "special_data",
  {     mercury__getopt__getopt__du_name_ordered_special_data_0 },
  {     mercury__getopt__getopt__du_ptag_ordered_special_data_0 },
  (MR_Integer) 5,
  UINT16_C(4),
  mercury__getopt__getopt__functor_number_map_special_data_0
};

static MR_Integer MR_CALL 
mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  return (MR_Integer) 1200;
}

static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table_multi__678__1_3_p_0_2(
  void * env_ptr_arg)
{
  {
    struct mercury__getopt__IntroducedFrom__pred__init_option_table_multi__678__1_3_p_0_env_0_s * env_ptr = (struct mercury__getopt__IntroducedFrom__pred__init_option_table_multi__678__1_3_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table_multi__678__1_3_p_0_env_0__OptionData_7 = ((MR_Word) ((env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table_multi__678__1_3_p_0_env_0__conv1_OptionData_7));
    mercury__getopt__IntroducedFrom__pred__init_option_table_multi__678__1_3_p_0_1(env_ptr);
  }
}

static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table_multi__678__1_3_p_0_1(
  void * env_ptr_arg)
{
  {
    struct mercury__getopt__IntroducedFrom__pred__init_option_table_multi__678__1_3_p_0_env_0_s * env_ptr = (struct mercury__getopt__IntroducedFrom__pred__init_option_table_multi__678__1_3_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *((env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table_multi__678__1_3_p_0_env_0__LambdaHeadVar__1_10) = base;
      MR_hl_field(MR_mktag(0), base, 0) = (env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table_multi__678__1_3_p_0_env_0__Option_6;
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table_multi__678__1_3_p_0_env_0__OptionData_7));
    }
    ((env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table_multi__678__1_3_p_0_env_0__cont)((env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table_multi__678__1_3_p_0_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table_multi__678__1_3_p_0(
  MR_Word TypeInfo_for_OptionType_12,
  MR_Word OptionDefaultsPred_3,
  MR_Word * LambdaHeadVar__1_10,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mercury__getopt__IntroducedFrom__pred__init_option_table_multi__678__1_3_p_0_env_0_s env;

    (env).mercury__getopt__IntroducedFrom__pred__init_option_table_multi__678__1_3_p_0_env_0__LambdaHeadVar__1_10 = LambdaHeadVar__1_10;
    (env).mercury__getopt__IntroducedFrom__pred__init_option_table_multi__678__1_3_p_0_env_0__cont = cont;
    (env).mercury__getopt__IntroducedFrom__pred__init_option_table_multi__678__1_3_p_0_env_0__cont_env_ptr = cont_env_ptr;
    {
      void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), OptionDefaultsPred_3, (MR_Integer) 1))));

      func_0(((MR_Box) (OptionDefaultsPred_3)), &(env).mercury__getopt__IntroducedFrom__pred__init_option_table_multi__678__1_3_p_0_env_0__Option_6, &(env).mercury__getopt__IntroducedFrom__pred__init_option_table_multi__678__1_3_p_0_env_0__conv1_OptionData_7, mercury__getopt__IntroducedFrom__pred__init_option_table_multi__678__1_3_p_0_2, &env);
    }
  }
}

static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table__670__1_3_p_0_2(
  void * env_ptr_arg)
{
  {
    struct mercury__getopt__IntroducedFrom__pred__init_option_table__670__1_3_p_0_env_0_s * env_ptr = (struct mercury__getopt__IntroducedFrom__pred__init_option_table__670__1_3_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table__670__1_3_p_0_env_0__OptionData_7 = ((MR_Word) ((env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table__670__1_3_p_0_env_0__conv1_OptionData_7));
    mercury__getopt__IntroducedFrom__pred__init_option_table__670__1_3_p_0_1(env_ptr);
  }
}

static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table__670__1_3_p_0_1(
  void * env_ptr_arg)
{
  {
    struct mercury__getopt__IntroducedFrom__pred__init_option_table__670__1_3_p_0_env_0_s * env_ptr = (struct mercury__getopt__IntroducedFrom__pred__init_option_table__670__1_3_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *((env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table__670__1_3_p_0_env_0__LambdaHeadVar__1_10) = base;
      MR_hl_field(MR_mktag(0), base, 0) = (env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table__670__1_3_p_0_env_0__Option_6;
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table__670__1_3_p_0_env_0__OptionData_7));
    }
    ((env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table__670__1_3_p_0_env_0__cont)((env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table__670__1_3_p_0_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table__670__1_3_p_0(
  MR_Word TypeInfo_for_OptionType_12,
  MR_Word OptionDefaultsPred_3,
  MR_Word * LambdaHeadVar__1_10,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mercury__getopt__IntroducedFrom__pred__init_option_table__670__1_3_p_0_env_0_s env;

    (env).mercury__getopt__IntroducedFrom__pred__init_option_table__670__1_3_p_0_env_0__LambdaHeadVar__1_10 = LambdaHeadVar__1_10;
    (env).mercury__getopt__IntroducedFrom__pred__init_option_table__670__1_3_p_0_env_0__cont = cont;
    (env).mercury__getopt__IntroducedFrom__pred__init_option_table__670__1_3_p_0_env_0__cont_env_ptr = cont_env_ptr;
    {
      void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), OptionDefaultsPred_3, (MR_Integer) 1))));

      func_0(((MR_Box) (OptionDefaultsPred_3)), &(env).mercury__getopt__IntroducedFrom__pred__init_option_table__670__1_3_p_0_env_0__Option_6, &(env).mercury__getopt__IntroducedFrom__pred__init_option_table__670__1_3_p_0_env_0__conv1_OptionData_7, mercury__getopt__IntroducedFrom__pred__init_option_table__670__1_3_p_0_2, &env);
    }
  }
}

void MR_CALL 
mercury__getopt____Compare____special_data_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_44 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_45 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_44 == CastY_45);
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
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_50 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_10 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
                  MR_Integer Var_54 = (MR_Integer) (Var_50);
                  MR_Integer Var_55 = (MR_Integer) (ArgY1_10);

                  succeeded = (Var_54 < Var_55);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_54 == Var_55);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 0;
                    else
                      *HeadVar__1_1 = (MR_Integer) 2;
                  }
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer Var_51 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Integer ArgY1_21 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                  succeeded = (Var_51 < ArgY1_21);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_51 == ArgY1_21);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 0;
                    else
                      *HeadVar__1_1 = (MR_Integer) 2;
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String Var_53 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_String ArgY1_32 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_Integer V_7_65;

{
#define MR_PROC_LABEL mercury__getopt____Compare____special_data_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_53 ;
	S2 = ArgY1_32 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_65  = Res;
}
                          succeeded = (V_7_65 < (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (V_7_65 == (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 0;
                            else
                              *HeadVar__1_1 = (MR_Integer) 2;
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_52 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word ArgY1_43 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

                          mercury__builtin__compare_3_p_0((MR_Word) (&mercury__getopt_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Var_52)), ((MR_Box) (ArgY1_43)));
                        }
                        break;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
  }
}

MR_bool MR_CALL 
mercury__getopt____Unify____special_data_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
            MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

            succeeded = (CastY_4 == CastX_3);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
              succeeded = (ArgX1_5 == ArgY1_6);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer ArgX1_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Integer ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (ArgX1_7 == ArgY1_8);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String ArgX1_9 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_String ArgY1_10;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_10 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = (strcmp(ArgX1_9, ArgY1_10) == 0);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word TypeInfo_15_15;
                MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_12;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  TypeInfo_15_15 = (MR_Word) (&mercury__getopt_scalar_common_1[1]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_15_15, ((MR_Box) (ArgX1_11)), ((MR_Box) (ArgY1_12)));
                }
              }
              break;
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
mercury__getopt____Compare____option_table_1_0(
  MR_Word TypeInfo_for_OptionType_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__tree234____Compare____tree234_2_0(TypeInfo_for_OptionType_6, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
mercury__getopt____Unify____option_table_1_0(
  MR_Word TypeInfo_for_OptionType_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__tree234____Unify____tree234_2_0(TypeInfo_for_OptionType_5, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
mercury__getopt____Compare____option_ops_userdata_2_0(
  MR_Word TypeInfo_for_OptionType_14,
  MR_Word TypeInfo_for_UserDataType_15,
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
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;

      mercury__private_builtin__builtin_compare_pred_3_p_0(&SubResult1_6, (MR_Word) (ArgX1_4), (MR_Word) (ArgY1_5));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__private_builtin__builtin_compare_pred_3_p_0(&SubResult2_9, (MR_Word) (ArgX2_7), (MR_Word) (ArgY2_8));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
          mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (ArgX3_10), (MR_Word) (ArgY3_11));
      }
    }
  }
}

MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_userdata_2_0(
  MR_Word TypeInfo_for_OptionType_11,
  MR_Word TypeInfo_for_UserDataType_12,
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
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (ArgX1_3), (MR_Word) (ArgY1_4));
      if (succeeded)
      {
        succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (ArgX2_5), (MR_Word) (ArgY2_6));
        if (succeeded)
          succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (ArgX3_7), (MR_Word) (ArgY3_8));
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__getopt____Compare____option_ops_track_1_0(
  MR_Word TypeInfo_for_OptionType_14,
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
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;

      mercury__private_builtin__builtin_compare_pred_3_p_0(&SubResult1_6, (MR_Word) (ArgX1_4), (MR_Word) (ArgY1_5));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__private_builtin__builtin_compare_pred_3_p_0(&SubResult2_9, (MR_Word) (ArgX2_7), (MR_Word) (ArgY2_8));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
          mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (ArgX3_10), (MR_Word) (ArgY3_11));
      }
    }
  }
}

MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_track_1_0(
  MR_Word TypeInfo_for_OptionType_11,
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
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (ArgX1_3), (MR_Word) (ArgY1_4));
      if (succeeded)
      {
        succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (ArgX2_5), (MR_Word) (ArgY2_6));
        if (succeeded)
          succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (ArgX3_7), (MR_Word) (ArgY3_8));
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__getopt____Compare____option_ops_internal_2_0(
  MR_Word TypeInfo_for_OptionType_14,
  MR_Word TypeInfo_for_UserDataType_15,
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
      MR_Word ArgX1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
      MR_Word ArgX2_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
      MR_Word ArgX3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
      MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
      MR_Word SubResult1_6;

      mercury__private_builtin__builtin_compare_pred_3_p_0(&SubResult1_6, (MR_Word) (ArgX1_4), (MR_Word) (ArgY1_5));
      succeeded = (SubResult1_6 != (MR_Integer) 0);
      if (succeeded)
        *HeadVar__1_1 = SubResult1_6;
      else
      {
        MR_Word SubResult2_9;

        mercury__private_builtin__builtin_compare_pred_3_p_0(&SubResult2_9, (MR_Word) (ArgX2_7), (MR_Word) (ArgY2_8));
        succeeded = (SubResult2_9 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult2_9;
        else
          mercury__getopt____Compare____option_ops_special_2_0(TypeInfo_for_OptionType_14, TypeInfo_for_UserDataType_15, HeadVar__1_1, ArgX3_10, ArgY3_11);
      }
    }
  }
}

void MR_CALL 
mercury__getopt____Compare____option_ops_special_2_0(
  MR_Word TypeInfo_for_OptionType_30,
  MR_Word TypeInfo_for_UserDataType_31,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_28 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_29 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_28 == CastY_29);
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
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              *HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_61 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

                  mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (Var_61), (MR_Word) (ArgY1_9));
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_62 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgY1_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                  mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (Var_62), (MR_Word) (ArgY1_18));
                }
                break;
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Var_63 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ArgY1_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))));

                  mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (Var_63), (MR_Word) (ArgY1_27));
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_internal_2_0(
  MR_Word TypeInfo_for_OptionType_11,
  MR_Word TypeInfo_for_UserDataType_12,
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
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
      MR_Word ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));

      succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (ArgX1_3), (MR_Word) (ArgY1_4));
      if (succeeded)
      {
        succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (ArgX2_5), (MR_Word) (ArgY2_6));
        if (succeeded)
          succeeded = mercury__getopt____Unify____option_ops_special_2_0(TypeInfo_for_OptionType_11, TypeInfo_for_UserDataType_12, ArgX3_7, ArgY3_8);
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_special_2_0(
  MR_Word TypeInfo_for_OptionType_13,
  MR_Word TypeInfo_for_UserDataType_14,
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
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
            MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

            succeeded = (CastY_4 == CastX_3);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (ArgX1_5), (MR_Word) (ArgY1_6));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (ArgX1_7), (MR_Word) (ArgY1_8));
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_10;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
            if (succeeded)
            {
              ArgY1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (ArgX1_9), (MR_Word) (ArgY1_10));
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
mercury__getopt____Compare____option_ops_1_0(
  MR_Word TypeInfo_for_OptionType_128,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_126 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_127 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_126 == CastY_127);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_195 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
            MR_Word Var_196 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_197 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word ArgY3_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2))));
                  MR_Word SubResult1_6;

                  mercury__private_builtin__builtin_compare_pred_3_p_0(&SubResult1_6, (MR_Word) (Var_197), (MR_Word) (ArgY1_5));
                  succeeded = (SubResult1_6 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_6;
                  else
                  {
                    MR_Word SubResult2_9;

                    mercury__private_builtin__builtin_compare_pred_3_p_0(&SubResult2_9, (MR_Word) (Var_196), (MR_Word) (ArgY2_8));
                    succeeded = (SubResult2_9 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult2_9;
                    else
                      mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (Var_195), (MR_Word) (ArgY3_11));
                  }
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_198 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
            MR_Word Var_199 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
            MR_Word Var_200 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_201 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_43 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word ArgY3_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
                  MR_Word ArgY4_49 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 3))));
                  MR_Word SubResult1_41;

                  mercury__private_builtin__builtin_compare_pred_3_p_0(&SubResult1_41, (MR_Word) (Var_201), (MR_Word) (ArgY1_40));
                  succeeded = (SubResult1_41 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_41;
                  else
                  {
                    MR_Word SubResult2_44;

                    mercury__private_builtin__builtin_compare_pred_3_p_0(&SubResult2_44, (MR_Word) (Var_200), (MR_Word) (ArgY2_43));
                    succeeded = (SubResult2_44 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult2_44;
                    else
                    {
                      MR_Word SubResult3_47;

                      mercury__private_builtin__builtin_compare_pred_3_p_0(&SubResult3_47, (MR_Word) (Var_199), (MR_Word) (ArgY3_46));
                      succeeded = (SubResult3_47 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult3_47;
                      else
                        mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (Var_198), (MR_Word) (ArgY4_49));
                    }
                  }
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_202 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
            MR_Word Var_203 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_204 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgY1_79 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_82 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word ArgY3_85 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 2))));
                  MR_Word SubResult1_80;

                  mercury__private_builtin__builtin_compare_pred_3_p_0(&SubResult1_80, (MR_Word) (Var_204), (MR_Word) (ArgY1_79));
                  succeeded = (SubResult1_80 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_80;
                  else
                  {
                    MR_Word SubResult2_83;

                    mercury__private_builtin__builtin_compare_pred_3_p_0(&SubResult2_83, (MR_Word) (Var_203), (MR_Word) (ArgY2_82));
                    succeeded = (SubResult2_83 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult2_83;
                    else
                      mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (Var_202), (MR_Word) (ArgY3_85));
                  }
                }
                break;
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word Var_205 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
            MR_Word Var_206 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
            MR_Word Var_207 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
            MR_Word Var_208 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ArgY1_116 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Word ArgY2_119 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                  MR_Word ArgY3_122 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                  MR_Word ArgY4_125 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3))));
                  MR_Word SubResult1_117;

                  mercury__private_builtin__builtin_compare_pred_3_p_0(&SubResult1_117, (MR_Word) (Var_208), (MR_Word) (ArgY1_116));
                  succeeded = (SubResult1_117 != (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = SubResult1_117;
                  else
                  {
                    MR_Word SubResult2_120;

                    mercury__private_builtin__builtin_compare_pred_3_p_0(&SubResult2_120, (MR_Word) (Var_207), (MR_Word) (ArgY2_119));
                    succeeded = (SubResult2_120 != (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = SubResult2_120;
                    else
                    {
                      MR_Word SubResult3_123;

                      mercury__private_builtin__builtin_compare_pred_3_p_0(&SubResult3_123, (MR_Word) (Var_206), (MR_Word) (ArgY3_122));
                      succeeded = (SubResult3_123 != (MR_Integer) 0);
                      if (succeeded)
                        *HeadVar__1_1 = SubResult3_123;
                      else
                        mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) (Var_205), (MR_Word) (ArgY4_125));
                    }
                  }
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_1_0(
  MR_Word TypeInfo_for_OptionType_33,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_31 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_32 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_31 == CastY_32);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_4;
            MR_Word ArgX2_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_6;
            MR_Word ArgX3_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2))));
            MR_Word ArgY3_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_6 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1))));
              ArgY3_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2))));
              succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (ArgX1_3), (MR_Word) (ArgY1_4));
              if (succeeded)
              {
                succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (ArgX2_5), (MR_Word) (ArgY2_6));
                if (succeeded)
                  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (ArgX3_7), (MR_Word) (ArgY3_8));
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_10;
            MR_Word ArgX2_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_12;
            MR_Word ArgX3_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
            MR_Word ArgY3_14;
            MR_Word ArgX4_15 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3))));
            MR_Word ArgY4_16;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
              ArgY3_14 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
              ArgY4_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3))));
              succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (ArgX1_9), (MR_Word) (ArgY1_10));
              if (succeeded)
              {
                succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (ArgX2_11), (MR_Word) (ArgY2_12));
                if (succeeded)
                {
                  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (ArgX3_13), (MR_Word) (ArgY3_14));
                  if (succeeded)
                    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (ArgX4_15), (MR_Word) (ArgY4_16));
                }
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgX1_17 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_18;
            MR_Word ArgX2_19 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_20;
            MR_Word ArgX3_21 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2))));
            MR_Word ArgY3_22;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_18 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_20 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1))));
              ArgY3_22 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2))));
              succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (ArgX1_17), (MR_Word) (ArgY1_18));
              if (succeeded)
              {
                succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (ArgX2_19), (MR_Word) (ArgY2_20));
                if (succeeded)
                  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (ArgX3_21), (MR_Word) (ArgY3_22));
              }
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word ArgX1_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_24;
            MR_Word ArgX2_25 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
            MR_Word ArgY2_26;
            MR_Word ArgX3_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
            MR_Word ArgY3_28;
            MR_Word ArgX4_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3))));
            MR_Word ArgY4_30;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
            if (succeeded)
            {
              ArgY1_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))));
              ArgY2_26 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
              ArgY3_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
              ArgY4_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3))));
              succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (ArgX1_23), (MR_Word) (ArgY1_24));
              if (succeeded)
              {
                succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (ArgX2_25), (MR_Word) (ArgY2_26));
                if (succeeded)
                {
                  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (ArgX3_27), (MR_Word) (ArgY3_28));
                  if (succeeded)
                    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) (ArgX4_29), (MR_Word) (ArgY4_30));
                }
              }
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
mercury__getopt____Compare____option_data_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_136 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_137 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_136 == CastY_137);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 2:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 3:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 4:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                  }
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_145 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
                  MR_Integer Var_150 = (MR_Integer) (Var_145);
                  MR_Integer Var_151 = (MR_Integer) (ArgY1_5);

                  succeeded = (Var_150 < Var_151);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_150 == Var_151);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 0;
                    else
                      *HeadVar__1_1 = (MR_Integer) 2;
                  }
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer Var_146 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Integer ArgY1_24 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                  succeeded = (Var_146 < ArgY1_24);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_146 == ArgY1_24);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 0;
                    else
                      *HeadVar__1_1 = (MR_Integer) 2;
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String Var_149 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 4:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_String ArgY1_43 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_Integer V_7_161;

{
#define MR_PROC_LABEL mercury__getopt____Compare____option_data_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_149 ;
	S2 = ArgY1_43 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_161  = Res;
}
                          succeeded = (V_7_161 < (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (V_7_161 == (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 0;
                            else
                              *HeadVar__1_1 = (MR_Integer) 2;
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word Var_147 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 4:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word ArgY1_62 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

                          mercury__builtin__compare_3_p_0((MR_Word) (&mercury__getopt_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Var_147)), ((MR_Box) (ArgY1_62)));
                        }
                        break;
                      case (MR_Integer) 2:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Var_148 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 4:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word ArgY1_81 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

                          mercury__builtin__compare_3_p_0((MR_Word) (&mercury__getopt_scalar_common_1[1]), HeadVar__1_1, ((MR_Box) (Var_148)), ((MR_Box) (ArgY1_81)));
                        }
                        break;
                      case (MR_Integer) 3:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Var_144 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

                switch (MR_tag((MR_Word) HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 4:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_Word ArgY1_100 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

                          mercury__builtin__compare_3_p_0((MR_Word) (&mercury__getopt_scalar_common_1[0]), HeadVar__1_1, ((MR_Box) (Var_144)), ((MR_Box) (ArgY1_100)));
                        }
                        break;
                    }
                    break;
                }
              }
              break;
          }
          break;
      }
  }
}

MR_bool MR_CALL 
mercury__getopt____Unify____option_data_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_25 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_26 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_25 == CastY_26);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer CastX_15 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_16 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_16 == CastX_15);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer CastX_17 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_18 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_18 == CastX_17);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer CastX_19 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_20 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_20 == CastX_19);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer CastX_21 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_22 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_22 == CastX_21);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Integer CastX_23 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_24 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_24 == CastX_23);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_3 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))) & (MR_Integer) 1);
            MR_Word ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_4 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);
              succeeded = (ArgX1_3 == ArgY1_4);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer ArgX1_5 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Integer ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (ArgX1_5 == ArgY1_6);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String ArgX1_7 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_String ArgY1_8;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_8 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = (strcmp(ArgX1_7, ArgY1_8) == 0);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word TypeInfo_28_28;
                MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_10;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  TypeInfo_28_28 = (MR_Word) (&mercury__getopt_scalar_common_1[2]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_28, ((MR_Box) (ArgX1_9)), ((MR_Box) (ArgY1_10)));
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word TypeInfo_29_29;
                MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_12;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  ArgY1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  TypeInfo_29_29 = (MR_Word) (&mercury__getopt_scalar_common_1[1]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_29_29, ((MR_Box) (ArgX1_11)), ((MR_Box) (ArgY1_12)));
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word TypeInfo_27_27;
                MR_Word ArgX1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_14;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  ArgY1_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  TypeInfo_27_27 = (MR_Word) (&mercury__getopt_scalar_common_1[0]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_27_27, ((MR_Box) (ArgX1_13)), ((MR_Box) (ArgY1_14)));
                }
              }
              break;
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
mercury__getopt____Compare____maybe_option_table_se_1_0(
  MR_Word TypeInfo_for_OptionType_14,
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
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    {
      MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      {
        MR_Word ArgY1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));

        mercury__getopt____Compare____option_error_1_0(TypeInfo_for_OptionType_14, HeadVar__1_1, Var_20, ArgY1_11);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
    else
    {
      MR_Word Var_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

        mercury__tree234____Compare____tree234_2_0(TypeInfo_for_OptionType_14, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), HeadVar__1_1, Var_21, ArgY1_5);
      }
    }
  }
}

void MR_CALL 
mercury__getopt____Compare____option_error_1_0(
  MR_Word TypeInfo_for_OptionType_24,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_22 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_23 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_22 == CastY_23);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    {
      MR_Word Var_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
      MR_String Var_29 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Box Var_30 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      {
        MR_Box ArgY1_15 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));
        MR_String ArgY2_18 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1))));
        MR_Word ArgY3_21 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2))));
        MR_Word SubResult1_16;

        mercury__builtin__compare_3_p_0(TypeInfo_for_OptionType_24, &SubResult1_16, Var_30, ArgY1_15);
        succeeded = (SubResult1_16 != (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = SubResult1_16;
        else
        {
          MR_Word SubResult2_19;
          MR_Integer V_7_35;

{
#define MR_PROC_LABEL mercury__getopt____Compare____option_error_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_29 ;
	S2 = ArgY2_18 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_35  = Res;
}
          succeeded = (V_7_35 < (MR_Integer) 0);
          if (succeeded)
            SubResult2_19 = (MR_Integer) 1;
          else
          {
            succeeded = (V_7_35 == (MR_Integer) 0);
            if (succeeded)
              SubResult2_19 = (MR_Integer) 0;
            else
              SubResult2_19 = (MR_Integer) 2;
          }
          succeeded = (SubResult2_19 != (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = SubResult2_19;
          else
            mercury__getopt____Compare____option_error_reason_0_0(HeadVar__1_1, Var_28, ArgY3_21);
        }
      }
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
    else
    {
      MR_String Var_31 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));
        MR_Integer V_7_40;

{
#define MR_PROC_LABEL mercury__getopt____Compare____option_error_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_31 ;
	S2 = ArgY1_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_40  = Res;
}
        succeeded = (V_7_40 < (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (V_7_40 == (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 0;
          else
            *HeadVar__1_1 = (MR_Integer) 2;
        }
      }
    }
  }
}

void MR_CALL 
mercury__getopt____Compare____option_error_reason_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_52 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_53 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_52 == CastY_53);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 2:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 3:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 4:
              switch (MR_tag((MR_Word) HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  *HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Var_57 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String ArgY1_13 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Integer V_7_63;

{
#define MR_PROC_LABEL mercury__getopt____Compare____option_error_reason_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_57 ;
	S2 = ArgY1_13 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_63  = Res;
}
                  succeeded = (V_7_63 < (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (V_7_63 == (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 0;
                    else
                      *HeadVar__1_1 = (MR_Integer) 2;
                  }
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String Var_59 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_String ArgY1_38 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Integer V_7_73;

{
#define MR_PROC_LABEL mercury__getopt____Compare____option_error_reason_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_59 ;
	S2 = ArgY1_38 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_73  = Res;
}
                  succeeded = (V_7_73 < (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (V_7_73 == (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 0;
                    else
                      *HeadVar__1_1 = (MR_Integer) 2;
                  }
                }
                break;
              case (MR_Integer) 3:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_String Var_58 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                {
                  MR_String ArgY1_51 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Integer V_7_68;

{
#define MR_PROC_LABEL mercury__getopt____Compare____option_error_reason_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_58 ;
	S2 = ArgY1_51 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_68  = Res;
}
                  succeeded = (V_7_68 < (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (V_7_68 == (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 0;
                    else
                      *HeadVar__1_1 = (MR_Integer) 2;
                  }
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
mercury__getopt____Unify____maybe_option_table_se_1_0(
  MR_Word TypeInfo_for_OptionType_9,
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
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    {
      MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = mercury__getopt____Unify____option_error_1_0(TypeInfo_for_OptionType_9, ArgX1_5, ArgY1_6);
      }
    }
    else
    {
      MR_Word TypeCtorInfo_10_10;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
        TypeCtorInfo_10_10 = (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0);
        succeeded = mercury__tree234____Unify____tree234_2_0(TypeInfo_for_OptionType_9, TypeCtorInfo_10_10, ArgX1_3, ArgY1_4);
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__getopt____Unify____option_error_1_0(
  MR_Word TypeInfo_for_OptionType_13,
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
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    {
      MR_Box ArgX1_5 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      MR_Box ArgY1_6;
      MR_String ArgX2_7 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1))));
      MR_String ArgY2_8;
      MR_Word ArgX3_9 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2))));
      MR_Word ArgY3_10;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
        ArgY2_8 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
        ArgY3_10 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2))));
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_OptionType_13, ArgX1_5, ArgY1_6);
        if (succeeded)
        {
          succeeded = (strcmp(ArgX2_7, ArgY2_8) == 0);
          if (succeeded)
            succeeded = mercury__getopt____Unify____option_error_reason_0_0(ArgX3_9, ArgY3_10);
        }
      }
    }
    else
    {
      MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__getopt____Unify____option_error_reason_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_19 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_20 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_19 == CastY_20);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer CastX_3 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_4 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_4 == CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer CastX_5 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_6 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_6 == CastX_5);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_10 == CastX_9);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer CastX_11 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_12 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_12 == CastX_11);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Integer CastX_13 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_14 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_14 == CastX_13);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String ArgX1_7 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_String ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_8 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (strcmp(ArgX1_7, ArgY1_8) == 0);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String ArgX1_15 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_String ArgY1_16;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_16 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (strcmp(ArgX1_15, ArgY1_16) == 0);
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_String ArgX1_17 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))));
            MR_String ArgY1_18;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
            if (succeeded)
            {
              ArgY1_18 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (strcmp(ArgX1_17, ArgY1_18) == 0);
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
mercury__getopt____Compare____maybe_option_table_1_0(
  MR_Word TypeInfo_for_OptionType_14,
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
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1))
    {
      MR_String Var_19 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
      {
        MR_String ArgY1_11 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
        MR_Integer V_7_24;

{
#define MR_PROC_LABEL mercury__getopt____Compare____maybe_option_table_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_19 ;
	S2 = ArgY1_11 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_24  = Res;
}
        succeeded = (V_7_24 < (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (V_7_24 == (MR_Integer) 0);
          if (succeeded)
            *HeadVar__1_1 = (MR_Integer) 0;
          else
            *HeadVar__1_1 = (MR_Integer) 2;
        }
      }
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
    else
    {
      MR_Word Var_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_Integer) 1))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word ArgY1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0))));

        mercury__tree234____Compare____tree234_2_0(TypeInfo_for_OptionType_14, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), HeadVar__1_1, Var_20, ArgY1_5);
      }
    }
  }
}

MR_bool MR_CALL 
mercury__getopt____Unify____maybe_option_table_1_0(
  MR_Word TypeInfo_for_OptionType_9,
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
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_Integer) 1))
    {
      MR_String ArgX1_5 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
      MR_String ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
      if (succeeded)
      {
        ArgY1_6 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
      }
    }
    else
    {
      MR_Word TypeCtorInfo_10_10;
      MR_Word ArgX1_3 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0))));
      MR_Word ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 0);
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) ((MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0))));
        TypeCtorInfo_10_10 = (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0);
        succeeded = mercury__tree234____Unify____tree234_2_0(TypeInfo_for_OptionType_9, TypeCtorInfo_10_10, ArgX1_3, ArgY1_4);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__getopt__lookup_accumulating_option_3_p_0(
  MR_Word TypeInfo_for_Option_10,
  MR_Word OptionTable_4,
  MR_Box Opt_5,
  MR_Word * Acc_6)
{
  {
    MR_bool succeeded;
    MR_Word AccPrime_7;
    MR_Word Var_8;
    MR_Box conv0_Var_8;

    mercury__map__lookup_3_p_0(TypeInfo_for_Option_10, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionTable_4, Opt_5, &conv0_Var_8);
    Var_8 = ((MR_Word) (conv0_Var_8));
    succeeded = ((((MR_tag((MR_Word) Var_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_8, (MR_Integer) 0)))) == (MR_Integer) 3)));
    if (succeeded)
    {
      AccPrime_7 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_8, (MR_Integer) 1))));
      *Acc_6 = AccPrime_7;
    }
    else
      {
        mercury__require__error_1_p_0((MR_String) "Expected accumulating option and didn\'t get one.");
        return;
      }
  }
}

MR_Word MR_CALL 
mercury__getopt__lookup_accumulating_option_2_f_0(
  MR_Word TypeInfo_for_Option_7,
  MR_Word OptionTable_4,
  MR_Box Opt_5)
{
  {
    MR_bool succeeded;
    MR_Word Acc_6;
    MR_Word AccPrime_11;
    MR_Word Var_12;
    MR_Box conv0_Var_12;

    mercury__map__lookup_3_p_0(TypeInfo_for_Option_7, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionTable_4, Opt_5, &conv0_Var_12);
    Var_12 = ((MR_Word) (conv0_Var_12));
    succeeded = ((((MR_tag((MR_Word) Var_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_12, (MR_Integer) 0)))) == (MR_Integer) 3)));
    if (succeeded)
    {
      AccPrime_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_12, (MR_Integer) 1))));
      Acc_6 = AccPrime_11;
    }
    else
      mercury__require__error_1_p_0((MR_String) "Expected accumulating option and didn\'t get one.");
    return Acc_6;
  }
}

void MR_CALL 
mercury__getopt__lookup_maybe_string_option_3_p_0(
  MR_Word TypeInfo_for_Option_10,
  MR_Word OptionTable_4,
  MR_Box Opt_5,
  MR_Word * MaybeString_6)
{
  {
    MR_bool succeeded;
    MR_Word MaybeStringPrime_7;
    MR_Word Var_8;
    MR_Box conv0_Var_8;

    mercury__map__lookup_3_p_0(TypeInfo_for_Option_10, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionTable_4, Opt_5, &conv0_Var_8);
    Var_8 = ((MR_Word) (conv0_Var_8));
    succeeded = ((((MR_tag((MR_Word) Var_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      MaybeStringPrime_7 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_8, (MR_Integer) 1))));
      *MaybeString_6 = MaybeStringPrime_7;
    }
    else
      {
        mercury__require__error_1_p_0((MR_String) "Expected maybe_string option and didn\'t get one.");
        return;
      }
  }
}

MR_Word MR_CALL 
mercury__getopt__lookup_maybe_string_option_2_f_0(
  MR_Word TypeInfo_for_Option_7,
  MR_Word OptionTable_4,
  MR_Box Opt_5)
{
  {
    MR_bool succeeded;
    MR_Word MaybeString_6;
    MR_Word MaybeStringPrime_11;
    MR_Word Var_12;
    MR_Box conv0_Var_12;

    mercury__map__lookup_3_p_0(TypeInfo_for_Option_7, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionTable_4, Opt_5, &conv0_Var_12);
    Var_12 = ((MR_Word) (conv0_Var_12));
    succeeded = ((((MR_tag((MR_Word) Var_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_12, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      MaybeStringPrime_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_12, (MR_Integer) 1))));
      MaybeString_6 = MaybeStringPrime_11;
    }
    else
      mercury__require__error_1_p_0((MR_String) "Expected maybe_string option and didn\'t get one.");
    return MaybeString_6;
  }
}

void MR_CALL 
mercury__getopt__lookup_maybe_int_option_3_p_0(
  MR_Word TypeInfo_for_Option_10,
  MR_Word OptionTable_4,
  MR_Box Opt_5,
  MR_Word * MaybeInt_6)
{
  {
    MR_bool succeeded;
    MR_Word MaybeIntPrime_7;
    MR_Word Var_8;
    MR_Box conv0_Var_8;

    mercury__map__lookup_3_p_0(TypeInfo_for_Option_10, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionTable_4, Opt_5, &conv0_Var_8);
    Var_8 = ((MR_Word) (conv0_Var_8));
    succeeded = ((((MR_tag((MR_Word) Var_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_8, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      MaybeIntPrime_7 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_8, (MR_Integer) 1))));
      *MaybeInt_6 = MaybeIntPrime_7;
    }
    else
      {
        mercury__require__error_1_p_0((MR_String) "Expected maybe_int option and didn\'t get one.");
        return;
      }
  }
}

MR_Word MR_CALL 
mercury__getopt__lookup_maybe_int_option_2_f_0(
  MR_Word TypeInfo_for_Option_7,
  MR_Word OptionTable_4,
  MR_Box Opt_5)
{
  {
    MR_bool succeeded;
    MR_Word MaybeInt_6;
    MR_Word MaybeIntPrime_11;
    MR_Word Var_12;
    MR_Box conv0_Var_12;

    mercury__map__lookup_3_p_0(TypeInfo_for_Option_7, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionTable_4, Opt_5, &conv0_Var_12);
    Var_12 = ((MR_Word) (conv0_Var_12));
    succeeded = ((((MR_tag((MR_Word) Var_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_12, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      MaybeIntPrime_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Var_12, (MR_Integer) 1))));
      MaybeInt_6 = MaybeIntPrime_11;
    }
    else
      mercury__require__error_1_p_0((MR_String) "Expected maybe_int option and didn\'t get one.");
    return MaybeInt_6;
  }
}

void MR_CALL 
mercury__getopt__lookup_string_option_3_p_0(
  MR_Word TypeInfo_for_Option_10,
  MR_Word OptionTable_4,
  MR_Box Opt_5,
  MR_String * Str_6)
{
  {
    MR_bool succeeded;
    MR_String StrPrime_7;
    MR_Word Var_8;
    MR_Box conv0_Var_8;

    mercury__map__lookup_3_p_0(TypeInfo_for_Option_10, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionTable_4, Opt_5, &conv0_Var_8);
    Var_8 = ((MR_Word) (conv0_Var_8));
    succeeded = ((((MR_tag((MR_Word) Var_8)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_8, (MR_Integer) 0)))) == (MR_Integer) 0)));
    if (succeeded)
    {
      StrPrime_7 = ((MR_String) ((MR_hl_field(MR_mktag(3), Var_8, (MR_Integer) 1))));
      *Str_6 = StrPrime_7;
    }
    else
      {
        mercury__require__error_1_p_0((MR_String) "Expected string option and didn\'t get one.");
        return;
      }
  }
}

MR_String MR_CALL 
mercury__getopt__lookup_string_option_2_f_0(
  MR_Word TypeInfo_for_Option_7,
  MR_Word OptionTable_4,
  MR_Box Opt_5)
{
  {
    MR_bool succeeded;
    MR_String Str_6;
    MR_String StrPrime_11;
    MR_Word Var_12;
    MR_Box conv0_Var_12;

    mercury__map__lookup_3_p_0(TypeInfo_for_Option_7, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionTable_4, Opt_5, &conv0_Var_12);
    Var_12 = ((MR_Word) (conv0_Var_12));
    succeeded = ((((MR_tag((MR_Word) Var_12)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), Var_12, (MR_Integer) 0)))) == (MR_Integer) 0)));
    if (succeeded)
    {
      StrPrime_11 = ((MR_String) ((MR_hl_field(MR_mktag(3), Var_12, (MR_Integer) 1))));
      Str_6 = StrPrime_11;
    }
    else
      mercury__require__error_1_p_0((MR_String) "Expected string option and didn\'t get one.");
    return Str_6;
  }
}

void MR_CALL 
mercury__getopt__lookup_int_option_3_p_0(
  MR_Word TypeInfo_for_Option_10,
  MR_Word OptionTable_4,
  MR_Box Opt_5,
  MR_Integer * Int_6)
{
  {
    MR_bool succeeded;
    MR_Integer IntPrime_7;
    MR_Word Var_8;
    MR_Box conv0_Var_8;

    mercury__map__lookup_3_p_0(TypeInfo_for_Option_10, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionTable_4, Opt_5, &conv0_Var_8);
    Var_8 = ((MR_Word) (conv0_Var_8));
    succeeded = ((MR_tag((MR_Word) Var_8)) == (MR_Integer) 2);
    if (succeeded)
    {
      IntPrime_7 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Var_8, (MR_Integer) 0))));
      *Int_6 = IntPrime_7;
    }
    else
      {
        mercury__require__error_1_p_0((MR_String) "Expected int option and didn\'t get one.");
        return;
      }
  }
}

MR_Integer MR_CALL 
mercury__getopt__lookup_int_option_2_f_0(
  MR_Word TypeInfo_for_Option_7,
  MR_Word OptionTable_4,
  MR_Box Opt_5)
{
  {
    MR_bool succeeded;
    MR_Integer Int_6;
    MR_Integer IntPrime_11;
    MR_Word Var_12;
    MR_Box conv0_Var_12;

    mercury__map__lookup_3_p_0(TypeInfo_for_Option_7, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionTable_4, Opt_5, &conv0_Var_12);
    Var_12 = ((MR_Word) (conv0_Var_12));
    succeeded = ((MR_tag((MR_Word) Var_12)) == (MR_Integer) 2);
    if (succeeded)
    {
      IntPrime_11 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), Var_12, (MR_Integer) 0))));
      Int_6 = IntPrime_11;
    }
    else
      mercury__require__error_1_p_0((MR_String) "Expected int option and didn\'t get one.");
    return Int_6;
  }
}

void MR_CALL 
mercury__getopt__lookup_bool_option_3_p_0(
  MR_Word TypeInfo_for_Option_10,
  MR_Word OptionTable_4,
  MR_Box Opt_5,
  MR_Word * Bool_6)
{
  {
    MR_bool succeeded;
    MR_Word BoolPrime_7;
    MR_Word Var_8;
    MR_Box conv0_Var_8;

    mercury__map__lookup_3_p_0(TypeInfo_for_Option_10, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionTable_4, Opt_5, &conv0_Var_8);
    Var_8 = ((MR_Word) (conv0_Var_8));
    succeeded = ((MR_tag((MR_Word) Var_8)) == (MR_Integer) 1);
    if (succeeded)
    {
      BoolPrime_7 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_8, (MR_Integer) 0))) & (MR_Integer) 1);
      *Bool_6 = BoolPrime_7;
    }
    else
      {
        mercury__require__error_1_p_0((MR_String) "Expected bool option and didn\'t get one.");
        return;
      }
  }
}

MR_Word MR_CALL 
mercury__getopt__lookup_bool_option_2_f_0(
  MR_Word TypeInfo_for_Option_7,
  MR_Word OptionTable_4,
  MR_Box Opt_5)
{
  {
    MR_bool succeeded;
    MR_Word Bool_6;
    MR_Word BoolPrime_11;
    MR_Word Var_12;
    MR_Box conv0_Var_12;

    mercury__map__lookup_3_p_0(TypeInfo_for_Option_7, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionTable_4, Opt_5, &conv0_Var_12);
    Var_12 = ((MR_Word) (conv0_Var_12));
    succeeded = ((MR_tag((MR_Word) Var_12)) == (MR_Integer) 1);
    if (succeeded)
    {
      BoolPrime_11 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), Var_12, (MR_Integer) 0))) & (MR_Integer) 1);
      Bool_6 = BoolPrime_11;
    }
    else
      mercury__require__error_1_p_0((MR_String) "Expected bool option and didn\'t get one.");
    return Bool_6;
  }
}

void MR_CALL 
mercury__getopt__process_options_se_4_p_0(
  MR_Word TypeInfo_for_OptionType_10,
  MR_Word OptionOps_5,
  MR_Word Args0_6,
  MR_Word * NonOptionArgs_7,
  MR_Word * Result_8)
{
  {
    MR_Word _OptionArgs_9;

    mercury__getopt__process_options_se_5_p_0(TypeInfo_for_OptionType_10, OptionOps_5, Args0_6, &_OptionArgs_9, NonOptionArgs_7, Result_8);
  }
}

void MR_CALL 
mercury__getopt__process_options_userdata_10_p_0(
  MR_Word TypeInfo_for_OptionType_28,
  MR_Word TypeInfo_for_UserDataType_29,
  MR_Word OptionOps_11,
  MR_Word Args0_12,
  MR_Word * OptionArgs_13,
  MR_Word * NonOptionArgs_14,
  MR_Word * MaybeError_15,
  MR_Word * OptionsSet_16,
  MR_Word STATE_VARIABLE_OptionTable_0_22,
  MR_Word * STATE_VARIABLE_OptionTable_23,
  MR_Box STATE_VARIABLE_UserData_0_24,
  MR_Box * STATE_VARIABLE_UserData_25)
{
  {
    MR_Word MaybeErrorSE_19;

    mercury__getopt__process_options_userdata_se_10_p_0(TypeInfo_for_OptionType_28, TypeInfo_for_UserDataType_29, OptionOps_11, Args0_12, OptionArgs_13, NonOptionArgs_14, &MaybeErrorSE_19, OptionsSet_16, STATE_VARIABLE_OptionTable_0_22, STATE_VARIABLE_OptionTable_23, STATE_VARIABLE_UserData_0_24, STATE_VARIABLE_UserData_25);
    if ((MaybeErrorSE_19 == (MR_Word) ((MR_Unsigned) 0U)))
      *MaybeError_15 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_Word Error_20 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeErrorSE_19, (MR_Integer) 0))));
      MR_String Msg_21;

      Msg_21 = mercury__getopt__option_error_to_string_1_f_0(TypeInfo_for_OptionType_28, Error_20);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeError_15 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Msg_21));
      }
    }
  }
}

void MR_CALL 
mercury__getopt__process_options_userdata_se_10_p_0(
  MR_Word TypeInfo_for_OptionType_33,
  MR_Word TypeInfo_for_UserDataType_34,
  MR_Word OptionOps_11,
  MR_Word Args0_12,
  MR_Word * OptionArgs_13,
  MR_Word * NonOptionArgs_14,
  MR_Word * MaybeError_15,
  MR_Word * OptionsSet_16,
  MR_Word STATE_VARIABLE_OptionTable_0_24,
  MR_Word * STATE_VARIABLE_OptionTable_25,
  MR_Box STATE_VARIABLE_UserData_0_26,
  MR_Box * STATE_VARIABLE_UserData_27)
{
  {
    MR_Word Short_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OptionOps_11, (MR_Integer) 0))));
    MR_Word Long_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OptionOps_11, (MR_Integer) 1))));
    MR_Word Special_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OptionOps_11, (MR_Integer) 2))));
    MR_Word Internal_22;
    MR_Word RevOptionArgs_23;
    MR_Word Var_28;

    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_28, 0) = ((MR_Box) (Special_21));
    }
    {
      Internal_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Internal_22, 0) = ((MR_Box) (Short_19));
      MR_hl_field(MR_mktag(0), Internal_22, 1) = ((MR_Box) (Long_20));
      MR_hl_field(MR_mktag(0), Internal_22, 2) = ((MR_Box) (Var_28));
    }
    mercury__getopt__process_arguments_12_p_0(TypeInfo_for_OptionType_33, TypeInfo_for_UserDataType_34, Internal_22, Args0_12, NonOptionArgs_14, (MR_Word) ((MR_Unsigned) 0U), &RevOptionArgs_23, MaybeError_15, STATE_VARIABLE_OptionTable_0_24, STATE_VARIABLE_OptionTable_25, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), OptionsSet_16, STATE_VARIABLE_UserData_0_26, STATE_VARIABLE_UserData_27);
    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RevOptionArgs_23, OptionArgs_13);
  }
}

void MR_CALL 
mercury__getopt__process_options_track_7_p_0(
  MR_Word TypeInfo_for_OptionType_19,
  MR_Word OptionOps_8,
  MR_Word Args0_9,
  MR_Word * OptionArgs_10,
  MR_Word * NonOptionArgs_11,
  MR_Word OptionTable0_12,
  MR_Word * Result_13,
  MR_Word * OptionsSet_14)
{
  {
    MR_Word Result0_15;

    mercury__getopt__process_options_track_se_7_p_0(TypeInfo_for_OptionType_19, OptionOps_8, Args0_9, OptionArgs_10, NonOptionArgs_11, OptionTable0_12, &Result0_15, OptionsSet_14);
    if (((MR_tag((MR_Word) Result0_15)) == (MR_Integer) 1))
    {
      MR_Word Error_17 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Result0_15, (MR_Integer) 0))));
      MR_String Msg_18;

      Msg_18 = mercury__getopt__option_error_to_string_1_f_0(TypeInfo_for_OptionType_19, Error_17);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_13 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Msg_18));
      }
    }
    else
    {
      MR_Word OptionTable_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Result0_15, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *Result_13 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (OptionTable_16));
      }
    }
  }
}

void MR_CALL 
mercury__getopt__process_options_track_se_7_p_0(
  MR_Word TypeInfo_for_OptionType_28,
  MR_Word OptionOps_8,
  MR_Word Args0_9,
  MR_Word * OptionArgs_10,
  MR_Word * NonOptionArgs_11,
  MR_Word OptionTable0_12,
  MR_Word * Result_13,
  MR_Word * OptionsSet_14)
{
  {
    MR_Word Short_15 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OptionOps_8, (MR_Integer) 0))));
    MR_Word Long_16 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OptionOps_8, (MR_Integer) 1))));
    MR_Word Special_17 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OptionOps_8, (MR_Integer) 2))));
    MR_Word Internal_18;
    MR_Word RevOptionArgs_19;
    MR_Word MaybeError_20;
    MR_Word OptionTable_21;
    MR_Word Var_24;
    MR_Box conv0_Var_22;

    {
      Var_24 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_24, 0) = ((MR_Box) (Special_17));
    }
    {
      Internal_18 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Internal_18, 0) = ((MR_Box) (Short_15));
      MR_hl_field(MR_mktag(0), Internal_18, 1) = ((MR_Box) (Long_16));
      MR_hl_field(MR_mktag(0), Internal_18, 2) = ((MR_Box) (Var_24));
    }
    mercury__getopt__process_arguments_12_p_0(TypeInfo_for_OptionType_28, (MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), Internal_18, Args0_9, NonOptionArgs_11, (MR_Word) ((MR_Unsigned) 0U), &RevOptionArgs_19, &MaybeError_20, OptionTable0_12, &OptionTable_21, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), OptionsSet_14, ((MR_Box) ((MR_Integer) 0)), &conv0_Var_22);
    if ((MaybeError_20 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *Result_13 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (OptionTable_21));
      }
    else
    {
      MR_Word Error_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeError_20, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_13 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_23));
      }
    }
    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RevOptionArgs_19, OptionArgs_10);
  }
}

void MR_CALL 
mercury__getopt__process_options_5_p_0(
  MR_Word TypeInfo_for_OptionType_15,
  MR_Word OptionOps_6,
  MR_Word Args0_7,
  MR_Word * OptionArgs_8,
  MR_Word * NonOptionArgs_9,
  MR_Word * Result_10)
{
  {
    MR_Word Result0_11;

    mercury__getopt__process_options_se_5_p_0(TypeInfo_for_OptionType_15, OptionOps_6, Args0_7, OptionArgs_8, NonOptionArgs_9, &Result0_11);
    if (((MR_tag((MR_Word) Result0_11)) == (MR_Integer) 1))
    {
      MR_Word Error_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Result0_11, (MR_Integer) 0))));
      MR_String Msg_14;

      Msg_14 = mercury__getopt__option_error_to_string_1_f_0(TypeInfo_for_OptionType_15, Error_13);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Msg_14));
      }
    }
    else
    {
      MR_Word OptionTable_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Result0_11, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *Result_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (OptionTable_12));
      }
    }
  }
}

void MR_CALL 
mercury__getopt__process_options_4_p_0(
  MR_Word TypeInfo_for_OptionType_13,
  MR_Word OptionOps_5,
  MR_Word Args0_6,
  MR_Word * NonOptionArgs_7,
  MR_Word * Result_8)
{
  {
    MR_Word Result0_9;
    MR_Word _OptionArgs_18;

    mercury__getopt__process_options_se_5_p_0(TypeInfo_for_OptionType_13, OptionOps_5, Args0_6, &_OptionArgs_18, NonOptionArgs_7, &Result0_9);
    if (((MR_tag((MR_Word) Result0_9)) == (MR_Integer) 1))
    {
      MR_Word Error_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Result0_9, (MR_Integer) 0))));
      MR_String Msg_12;

      Msg_12 = mercury__getopt__option_error_to_string_1_f_0(TypeInfo_for_OptionType_13, Error_11);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Msg_12));
      }
    }
    else
    {
      MR_Word OptionTable_10 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Result0_9, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *Result_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (OptionTable_10));
      }
    }
  }
}

MR_String MR_CALL 
mercury__getopt__option_error_to_string_1_f_0(
  MR_Word TypeInfo_for_OptionType_47,
  MR_Word Error_3)
{
  {
    MR_String String_4;

    if (((MR_tag((MR_Word) Error_3)) == (MR_Integer) 1))
    {
      MR_Word Reason_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Error_3, (MR_Integer) 2))));
      MR_String OptionName_46 = ((MR_String) ((MR_hl_field(MR_mktag(1), Error_3, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) Reason_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(Reason_7)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String Var_52;

                Var_52 = mercury__string__f_43_43_2_f_0(OptionName_46, (MR_String) "\'");
                String_4 = mercury__string__f_43_43_2_f_0((MR_String) "unknown type for option \140", Var_52);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String Var_67;

                Var_67 = mercury__string__f_43_43_2_f_0(OptionName_46, (MR_String) "\' needs an argument");
                String_4 = mercury__string__f_43_43_2_f_0((MR_String) "option \140", Var_67);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_String Var_73;

                mercury__string__append_3_p_2(OptionName_46, (MR_String) "\' -- only boolean, maybe and accumulating options can be negated", &Var_73);
                mercury__string__append_3_p_2((MR_String) "cannot negate option \140", Var_73, &String_4);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_String Var_58;

                Var_58 = mercury__string__f_43_43_2_f_0(OptionName_46, (MR_String) "\' failed");
                String_4 = mercury__string__f_43_43_2_f_0((MR_String) "the handler of option \140", Var_58);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_String Var_55;

                Var_55 = mercury__string__f_43_43_2_f_0(OptionName_46, (MR_String) "\' has no handler");
                String_4 = mercury__string__f_43_43_2_f_0((MR_String) "option \140", Var_55);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Var_70;

            mercury__string__append_3_p_2(OptionName_46, (MR_String) "\' does not allow an argument", &Var_70);
            String_4 = mercury__string__f_43_43_2_f_0((MR_String) "option \140", Var_70);
          }
          break;
        case (MR_Integer) 2:
          String_4 = ((MR_String) ((MR_hl_field(MR_mktag(2), Reason_7, (MR_Integer) 0))));
          break;
        case (MR_Integer) 3:
          {
            MR_String Arg_9 = ((MR_String) ((MR_hl_field(MR_mktag(3), Reason_7, (MR_Integer) 0))));
            MR_String Var_61;
            MR_String Var_63;
            MR_String Var_64;

            Var_61 = mercury__string__f_43_43_2_f_0(Arg_9, (MR_String) "\' is not numeric");
            Var_63 = mercury__string__f_43_43_2_f_0((MR_String) "\' requires a numeric argument; \140", Var_61);
            Var_64 = mercury__string__f_43_43_2_f_0(OptionName_46, Var_63);
            String_4 = mercury__string__f_43_43_2_f_0((MR_String) "option \140", Var_64);
          }
          break;
      }
    }
    else
    {
      MR_String OptionName_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), Error_3, (MR_Integer) 0))));
      MR_String Var_49;

      Var_49 = mercury__string__f_43_43_2_f_0(OptionName_5, (MR_String) "\'");
      String_4 = mercury__string__f_43_43_2_f_0((MR_String) "unrecognized option \140", Var_49);
    }
    return String_4;
  }
}

void MR_CALL 
mercury__getopt__process_options_se_5_p_0(
  MR_Word TypeInfo_for_OptionType_31,
  MR_Word OptionOps_6,
  MR_Word Args0_7,
  MR_Word * OptionArgs_8,
  MR_Word * NonOptionArgs_9,
  MR_Word * Result_10)
{
  {
    MR_Word Short_11;
    MR_Word Long_12;
    MR_Word MaybeSpecial_14;
    MR_Word OptionTable0_15;
    MR_Word Internal_17;
    MR_Word RevOptionArgs_18;
    MR_Word MaybeError_19;
    MR_Word OptionTable_20;
    MR_Word _OptionsSet_21;
    MR_Box conv0_Var_22;

    switch (MR_tag((MR_Word) OptionOps_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Defaults_13;

          Short_11 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OptionOps_6, (MR_Integer) 0))));
          Long_12 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OptionOps_6, (MR_Integer) 1))));
          Defaults_13 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OptionOps_6, (MR_Integer) 2))));
          MaybeSpecial_14 = (MR_Word) ((MR_Unsigned) 0U);
          mercury__getopt__init_option_table_2_p_0(TypeInfo_for_OptionType_31, Defaults_13, &OptionTable0_15);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Special_16;
          MR_Word Defaults_27;

          Short_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OptionOps_6, (MR_Integer) 0))));
          Long_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OptionOps_6, (MR_Integer) 1))));
          Defaults_27 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OptionOps_6, (MR_Integer) 2))));
          Special_16 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OptionOps_6, (MR_Integer) 3))));
          {
            MaybeSpecial_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeSpecial_14, 0) = ((MR_Box) (Special_16));
          }
          mercury__getopt__init_option_table_2_p_0(TypeInfo_for_OptionType_31, Defaults_27, &OptionTable0_15);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Defaults_28;

          Short_11 = ((MR_Word) ((MR_hl_field(MR_mktag(2), OptionOps_6, (MR_Integer) 0))));
          Long_12 = ((MR_Word) ((MR_hl_field(MR_mktag(2), OptionOps_6, (MR_Integer) 1))));
          Defaults_28 = ((MR_Word) ((MR_hl_field(MR_mktag(2), OptionOps_6, (MR_Integer) 2))));
          MaybeSpecial_14 = (MR_Word) ((MR_Unsigned) 0U);
          mercury__getopt__init_option_table_multi_2_p_0(TypeInfo_for_OptionType_31, Defaults_28, &OptionTable0_15);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word Defaults_29;
          MR_Word Special_30;

          Short_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OptionOps_6, (MR_Integer) 0))));
          Long_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OptionOps_6, (MR_Integer) 1))));
          Defaults_29 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OptionOps_6, (MR_Integer) 2))));
          Special_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OptionOps_6, (MR_Integer) 3))));
          {
            MaybeSpecial_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeSpecial_14, 0) = ((MR_Box) (Special_30));
          }
          mercury__getopt__init_option_table_multi_2_p_0(TypeInfo_for_OptionType_31, Defaults_29, &OptionTable0_15);
        }
        break;
    }
    {
      Internal_17 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Internal_17, 0) = ((MR_Box) (Short_11));
      MR_hl_field(MR_mktag(0), Internal_17, 1) = ((MR_Box) (Long_12));
      MR_hl_field(MR_mktag(0), Internal_17, 2) = ((MR_Box) (MaybeSpecial_14));
    }
    mercury__getopt__process_arguments_12_p_0(TypeInfo_for_OptionType_31, (MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), Internal_17, Args0_7, NonOptionArgs_9, (MR_Word) ((MR_Unsigned) 0U), &RevOptionArgs_18, &MaybeError_19, OptionTable0_15, &OptionTable_20, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), &_OptionsSet_21, ((MR_Box) ((MR_Integer) 0)), &conv0_Var_22);
    if ((MaybeError_19 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *Result_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (OptionTable_20));
      }
    else
    {
      MR_Word Error_23 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeError_19, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_23));
      }
    }
    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RevOptionArgs_18, OptionArgs_8);
  }
}

void MR_CALL 
mercury__getopt__process_arguments_12_p_0(
  MR_Word tscc_proc_1_input_1_TypeInfo_for_OptionType_171,
  MR_Word tscc_proc_1_input_2_TypeInfo_for_UserDataType_172,
  MR_Word tscc_proc_1_input_3_OptionOps_1,
  MR_Word tscc_proc_1_input_4_HeadVar__2_2,
  MR_Word * tscc_output_ptr_1_HeadVar__3_3,
  MR_Word tscc_proc_1_input_5_STATE_VARIABLE_OptionArgs_0_4,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_OptionArgs_5,
  MR_Word * tscc_output_ptr_3_HeadVar__6_6,
  MR_Word tscc_proc_1_input_6_STATE_VARIABLE_OptionTable_0_7,
  MR_Word * tscc_output_ptr_4_STATE_VARIABLE_OptionTable_8,
  MR_Word tscc_proc_1_input_7_STATE_VARIABLE_OptionsSet_0_9,
  MR_Word * tscc_output_ptr_5_STATE_VARIABLE_OptionsSet_10,
  MR_Box tscc_proc_1_input_8_STATE_VARIABLE_UserData_0_11,
  MR_Box * tscc_output_ptr_6_STATE_VARIABLE_UserData_12)
{
  {
    MR_Word tscc_proc_2_input_1_TypeInfo_for_OptionType_62;
    MR_Word tscc_proc_2_input_2_TypeInfo_for_UserDataType_63;
    MR_Word tscc_proc_2_input_3_OptionOps_17;
    MR_String tscc_proc_2_input_4_Option_18;
    MR_Box tscc_proc_2_input_5_Flag_19;
    MR_Word tscc_proc_2_input_6_OptionData_20;
    MR_Word tscc_proc_2_input_7_MaybeOptionArg0_21;
    MR_Word tscc_proc_2_input_8_Args0_22;
    MR_Word tscc_proc_2_input_9_STATE_VARIABLE_OptionArgs_0_39;
    MR_Word tscc_proc_2_input_10_STATE_VARIABLE_OptionTable_0_41;
    MR_Word tscc_proc_2_input_11_STATE_VARIABLE_OptionsSet_0_43;
    MR_Box tscc_proc_2_input_12_STATE_VARIABLE_UserData_0_45;
    MR_Word tscc_output_1_HeadVar__3_3;
    MR_Word tscc_output_2_STATE_VARIABLE_OptionArgs_5;
    MR_Word tscc_output_3_HeadVar__6_6;
    MR_Word tscc_output_4_STATE_VARIABLE_OptionTable_8;
    MR_Word tscc_output_5_STATE_VARIABLE_OptionsSet_10;
    MR_Box tscc_output_6_STATE_VARIABLE_UserData_12;

    // The code for TSCC PROC 1: pred getopt.process_arguments/12-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred getopt.process_arguments/12-0
    ;
    // proc 2 in TSCC: pred getopt.handle_long_option/16-0
    ;
    ;
    goto top_of_proc_1;
  top_of_proc_1:;
    {
      MR_Word TypeInfo_for_OptionType_171 = tscc_proc_1_input_1_TypeInfo_for_OptionType_171;
      MR_Word TypeInfo_for_UserDataType_172 = tscc_proc_1_input_2_TypeInfo_for_UserDataType_172;
      MR_Word OptionOps_1 = tscc_proc_1_input_3_OptionOps_1;
      MR_Word HeadVar__2_2 = tscc_proc_1_input_4_HeadVar__2_2;
      MR_Word HeadVar__3_3;
      MR_Word STATE_VARIABLE_OptionArgs_0_4 = tscc_proc_1_input_5_STATE_VARIABLE_OptionArgs_0_4;
      MR_Word STATE_VARIABLE_OptionArgs_5;
      MR_Word HeadVar__6_6;
      MR_Word STATE_VARIABLE_OptionTable_0_7 = tscc_proc_1_input_6_STATE_VARIABLE_OptionTable_0_7;
      MR_Word STATE_VARIABLE_OptionTable_8;
      MR_Word STATE_VARIABLE_OptionsSet_0_9 = tscc_proc_1_input_7_STATE_VARIABLE_OptionsSet_0_9;
      MR_Word STATE_VARIABLE_OptionsSet_10;
      MR_Box STATE_VARIABLE_UserData_0_11 = tscc_proc_1_input_8_STATE_VARIABLE_UserData_0_11;
      MR_Box STATE_VARIABLE_UserData_12;
      MR_bool succeeded;

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
        HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_UserData_12 = STATE_VARIABLE_UserData_0_11;
        STATE_VARIABLE_OptionsSet_10 = STATE_VARIABLE_OptionsSet_0_9;
        STATE_VARIABLE_OptionTable_8 = STATE_VARIABLE_OptionTable_0_7;
        STATE_VARIABLE_OptionArgs_5 = STATE_VARIABLE_OptionArgs_0_4;
      }
      else
      {
        MR_String Arg0_27 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word Args0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));

        succeeded = (strcmp(Arg0_27, (MR_String) "--") == 0);
        if (succeeded)
        {
          HeadVar__3_3 = Args0_28;
          HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_UserData_12 = STATE_VARIABLE_UserData_0_11;
          STATE_VARIABLE_OptionsSet_10 = STATE_VARIABLE_OptionsSet_0_9;
          STATE_VARIABLE_OptionTable_8 = STATE_VARIABLE_OptionTable_0_7;
          STATE_VARIABLE_OptionArgs_5 = STATE_VARIABLE_OptionArgs_0_4;
        }
        else
        {
          MR_String LongOption_35;

          succeeded = mercury__string__append_3_p_1((MR_String) "--no-", &LongOption_35, Arg0_27);
          if (succeeded)
          {
            MR_Word LongOptionPred_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OptionOps_1, (MR_Integer) 1))));
            MR_Box Flag_37;
            MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), LongOptionPred_36, (MR_Integer) 1))));

            succeeded = func_0(((MR_Box) (LongOptionPred_36)), ((MR_Box) (LongOption_35)), &Flag_37);
            if (succeeded)
            {
              MR_String OptName_38;
              MR_Word NegMaybeError_39;
              MR_Word NewOptionTable_40;
              MR_Word STATE_VARIABLE_OptionsSet_69_69;
              MR_Box STATE_VARIABLE_UserData_70_70;

              OptName_38 = mercury__string__f_43_43_2_f_0((MR_String) "--", LongOption_35);
              mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_110_101_103_97_116_101_100_95_111_112_116_105_111_110_95_95_91_50_93_95_48_10_p_0(TypeInfo_for_OptionType_171, OptionOps_1, OptName_38, Flag_37, &NegMaybeError_39, STATE_VARIABLE_OptionTable_0_7, &NewOptionTable_40, STATE_VARIABLE_OptionsSet_0_9, &STATE_VARIABLE_OptionsSet_69_69, STATE_VARIABLE_UserData_0_11, &STATE_VARIABLE_UserData_70_70);
              if ((NegMaybeError_39 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word STATE_VARIABLE_OptionArgs_72_72;
                MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_OptionType_171;
                MR_Word next_value_of_tscc_proc_1_input_2_TypeInfo_for_UserDataType_172;
                MR_Word next_value_of_tscc_proc_1_input_3_OptionOps_1;
                MR_Word next_value_of_tscc_proc_1_input_4_HeadVar__2_2;
                MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_OptionArgs_0_4;
                MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_OptionTable_0_7;
                MR_Word next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_OptionsSet_0_9;
                MR_Box next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_UserData_0_11;

                {
                  STATE_VARIABLE_OptionArgs_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_OptionArgs_72_72, 0) = ((MR_Box) (Arg0_27));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_OptionArgs_72_72, 1) = ((MR_Box) (STATE_VARIABLE_OptionArgs_0_4));
                }
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_TypeInfo_for_OptionType_171 = TypeInfo_for_OptionType_171;
                next_value_of_tscc_proc_1_input_2_TypeInfo_for_UserDataType_172 = TypeInfo_for_UserDataType_172;
                next_value_of_tscc_proc_1_input_3_OptionOps_1 = OptionOps_1;
                next_value_of_tscc_proc_1_input_4_HeadVar__2_2 = Args0_28;
                next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_OptionArgs_0_4 = STATE_VARIABLE_OptionArgs_72_72;
                next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_OptionTable_0_7 = NewOptionTable_40;
                next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_OptionsSet_0_9 = STATE_VARIABLE_OptionsSet_69_69;
                next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_UserData_0_11 = STATE_VARIABLE_UserData_70_70;
                tscc_proc_1_input_1_TypeInfo_for_OptionType_171 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_OptionType_171;
                tscc_proc_1_input_2_TypeInfo_for_UserDataType_172 = next_value_of_tscc_proc_1_input_2_TypeInfo_for_UserDataType_172;
                tscc_proc_1_input_3_OptionOps_1 = next_value_of_tscc_proc_1_input_3_OptionOps_1;
                tscc_proc_1_input_4_HeadVar__2_2 = next_value_of_tscc_proc_1_input_4_HeadVar__2_2;
                tscc_proc_1_input_5_STATE_VARIABLE_OptionArgs_0_4 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_OptionArgs_0_4;
                tscc_proc_1_input_6_STATE_VARIABLE_OptionTable_0_7 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_OptionTable_0_7;
                tscc_proc_1_input_7_STATE_VARIABLE_OptionsSet_0_9 = next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_OptionsSet_0_9;
                tscc_proc_1_input_8_STATE_VARIABLE_UserData_0_11 = next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_UserData_0_11;
                goto top_of_proc_1;
              }
              else
              {
                HeadVar__6_6 = NegMaybeError_39;
                HeadVar__3_3 = Args0_28;
                STATE_VARIABLE_OptionArgs_5 = STATE_VARIABLE_OptionArgs_0_4;
                STATE_VARIABLE_OptionTable_8 = STATE_VARIABLE_OptionTable_0_7;
                STATE_VARIABLE_OptionsSet_10 = STATE_VARIABLE_OptionsSet_69_69;
                STATE_VARIABLE_UserData_12 = STATE_VARIABLE_UserData_70_70;
              }
            }
            else
            {
              MR_Word Error_42;

              {
                Error_42 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Error_42, 0) = ((MR_Box) (Arg0_27));
              }
              {
                HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), HeadVar__6_6, 0) = ((MR_Box) (Error_42));
              }
              HeadVar__3_3 = Args0_28;
              STATE_VARIABLE_UserData_12 = STATE_VARIABLE_UserData_0_11;
              STATE_VARIABLE_OptionsSet_10 = STATE_VARIABLE_OptionsSet_0_9;
              STATE_VARIABLE_OptionTable_8 = STATE_VARIABLE_OptionTable_0_7;
              STATE_VARIABLE_OptionArgs_5 = STATE_VARIABLE_OptionArgs_0_4;
            }
          }
          else
          {
            MR_String LongOptionStr_43;

            succeeded = mercury__string__append_3_p_1((MR_String) "--", &LongOptionStr_43, Arg0_27);
            if (succeeded)
            {
              MR_Word MaybeArg_47;
              MR_String OptionName_48;
              MR_String LongOption_124;
              MR_Word LongOptionPred_125 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OptionOps_1, (MR_Integer) 1))));
              MR_Integer OptionLen_44;
              MR_Box Flag_122;
              MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *);

              succeeded = mercury__string__sub_string_search_3_p_0(LongOptionStr_43, (MR_String) "=", &OptionLen_44);
              if (succeeded)
              {
                MR_String EqualOptionArg_45;
                MR_String OptionArg_46;

                mercury__string__split_4_p_0(LongOptionStr_43, OptionLen_44, &LongOption_124, &EqualOptionArg_45);
                succeeded = mercury__string__first_char_3_p_2(EqualOptionArg_45, (MR_Char) 61, &OptionArg_46);
                if (succeeded)
                  {
                    MaybeArg_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), MaybeArg_47, 0) = ((MR_Box) (OptionArg_46));
                  }
                else
                  {
                    mercury__require__error_1_p_0((MR_String) "bad split of --longoption=arg");
                    return;
                  }
              }
              else
              {
                LongOption_124 = LongOptionStr_43;
                MaybeArg_47 = (MR_Word) ((MR_Unsigned) 0U);
              }
              OptionName_48 = mercury__string__f_43_43_2_f_0((MR_String) "--", LongOption_124);
              func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), LongOptionPred_125, (MR_Integer) 1))));
              succeeded = func_1(((MR_Box) (LongOptionPred_125)), ((MR_Box) (LongOption_124)), &Flag_122);
              if (succeeded)
              {
                MR_Word OptionData_49;
                MR_Box conv2_OptionData_49;

                succeeded = mercury__map__search_3_p_0(TypeInfo_for_OptionType_171, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), STATE_VARIABLE_OptionTable_0_7, Flag_122, &conv2_OptionData_49);
                if (succeeded)
                {
                  OptionData_49 = ((MR_Word) (conv2_OptionData_49));
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  MR_Word STATE_VARIABLE_OptionArgs_82_82;
                  MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_OptionType_62;
                  MR_Word next_value_of_tscc_proc_2_input_2_TypeInfo_for_UserDataType_63;
                  MR_Word next_value_of_tscc_proc_2_input_3_OptionOps_17;
                  MR_String next_value_of_tscc_proc_2_input_4_Option_18;
                  MR_Box next_value_of_tscc_proc_2_input_5_Flag_19;
                  MR_Word next_value_of_tscc_proc_2_input_6_OptionData_20;
                  MR_Word next_value_of_tscc_proc_2_input_7_MaybeOptionArg0_21;
                  MR_Word next_value_of_tscc_proc_2_input_8_Args0_22;
                  MR_Word next_value_of_tscc_proc_2_input_9_STATE_VARIABLE_OptionArgs_0_39;
                  MR_Word next_value_of_tscc_proc_2_input_10_STATE_VARIABLE_OptionTable_0_41;
                  MR_Word next_value_of_tscc_proc_2_input_11_STATE_VARIABLE_OptionsSet_0_43;
                  MR_Box next_value_of_tscc_proc_2_input_12_STATE_VARIABLE_UserData_0_45;

                  {
                    STATE_VARIABLE_OptionArgs_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_OptionArgs_82_82, 0) = ((MR_Box) (Arg0_27));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_OptionArgs_82_82, 1) = ((MR_Box) (STATE_VARIABLE_OptionArgs_0_4));
                  }
                  // direct tailcall eliminated
                  ;
                  next_value_of_tscc_proc_2_input_1_TypeInfo_for_OptionType_62 = TypeInfo_for_OptionType_171;
                  next_value_of_tscc_proc_2_input_2_TypeInfo_for_UserDataType_63 = TypeInfo_for_UserDataType_172;
                  next_value_of_tscc_proc_2_input_3_OptionOps_17 = OptionOps_1;
                  next_value_of_tscc_proc_2_input_4_Option_18 = OptionName_48;
                  next_value_of_tscc_proc_2_input_5_Flag_19 = Flag_122;
                  next_value_of_tscc_proc_2_input_6_OptionData_20 = OptionData_49;
                  next_value_of_tscc_proc_2_input_7_MaybeOptionArg0_21 = MaybeArg_47;
                  next_value_of_tscc_proc_2_input_8_Args0_22 = Args0_28;
                  next_value_of_tscc_proc_2_input_9_STATE_VARIABLE_OptionArgs_0_39 = STATE_VARIABLE_OptionArgs_82_82;
                  next_value_of_tscc_proc_2_input_10_STATE_VARIABLE_OptionTable_0_41 = STATE_VARIABLE_OptionTable_0_7;
                  next_value_of_tscc_proc_2_input_11_STATE_VARIABLE_OptionsSet_0_43 = STATE_VARIABLE_OptionsSet_0_9;
                  next_value_of_tscc_proc_2_input_12_STATE_VARIABLE_UserData_0_45 = STATE_VARIABLE_UserData_0_11;
                  tscc_proc_2_input_1_TypeInfo_for_OptionType_62 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_OptionType_62;
                  tscc_proc_2_input_2_TypeInfo_for_UserDataType_63 = next_value_of_tscc_proc_2_input_2_TypeInfo_for_UserDataType_63;
                  tscc_proc_2_input_3_OptionOps_17 = next_value_of_tscc_proc_2_input_3_OptionOps_17;
                  tscc_proc_2_input_4_Option_18 = next_value_of_tscc_proc_2_input_4_Option_18;
                  tscc_proc_2_input_5_Flag_19 = next_value_of_tscc_proc_2_input_5_Flag_19;
                  tscc_proc_2_input_6_OptionData_20 = next_value_of_tscc_proc_2_input_6_OptionData_20;
                  tscc_proc_2_input_7_MaybeOptionArg0_21 = next_value_of_tscc_proc_2_input_7_MaybeOptionArg0_21;
                  tscc_proc_2_input_8_Args0_22 = next_value_of_tscc_proc_2_input_8_Args0_22;
                  tscc_proc_2_input_9_STATE_VARIABLE_OptionArgs_0_39 = next_value_of_tscc_proc_2_input_9_STATE_VARIABLE_OptionArgs_0_39;
                  tscc_proc_2_input_10_STATE_VARIABLE_OptionTable_0_41 = next_value_of_tscc_proc_2_input_10_STATE_VARIABLE_OptionTable_0_41;
                  tscc_proc_2_input_11_STATE_VARIABLE_OptionsSet_0_43 = next_value_of_tscc_proc_2_input_11_STATE_VARIABLE_OptionsSet_0_43;
                  tscc_proc_2_input_12_STATE_VARIABLE_UserData_0_45 = next_value_of_tscc_proc_2_input_12_STATE_VARIABLE_UserData_0_45;
                  goto top_of_proc_2;
                }
                else
                {
                  MR_Word Error_119;

                  {
                    Error_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Error_119, 0) = Flag_122;
                    MR_hl_field(MR_mktag(1), Error_119, 1) = ((MR_Box) (Arg0_27));
                    MR_hl_field(MR_mktag(1), Error_119, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), HeadVar__6_6, 0) = ((MR_Box) (Error_119));
                  }
                  HeadVar__3_3 = Args0_28;
                  STATE_VARIABLE_UserData_12 = STATE_VARIABLE_UserData_0_11;
                  STATE_VARIABLE_OptionsSet_10 = STATE_VARIABLE_OptionsSet_0_9;
                  STATE_VARIABLE_OptionTable_8 = STATE_VARIABLE_OptionTable_0_7;
                  STATE_VARIABLE_OptionArgs_5 = STATE_VARIABLE_OptionArgs_0_4;
                }
              }
              else
              {
                MR_Word Error_121;

                {
                  Error_121 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Error_121, 0) = ((MR_Box) (OptionName_48));
                }
                {
                  HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), HeadVar__6_6, 0) = ((MR_Box) (Error_121));
                }
                HeadVar__3_3 = Args0_28;
                STATE_VARIABLE_UserData_12 = STATE_VARIABLE_UserData_0_11;
                STATE_VARIABLE_OptionsSet_10 = STATE_VARIABLE_OptionsSet_0_9;
                STATE_VARIABLE_OptionTable_8 = STATE_VARIABLE_OptionTable_0_7;
                STATE_VARIABLE_OptionArgs_5 = STATE_VARIABLE_OptionArgs_0_4;
              }
            }
            else
            {
              MR_String ShortOptions_50;

              succeeded = mercury__string__first_char_3_p_2(Arg0_27, (MR_Char) 45, &ShortOptions_50);
              if (succeeded)
              {
                succeeded = (strcmp(ShortOptions_50, (MR_String) "") == 0);
                succeeded = !(succeeded);
              }
              if (succeeded)
              {
                MR_Word ShortOptionsList_51;
                MR_Char SingleShortOpt_52;
                MR_Word Var_89;
                MR_Char Var_90;
                MR_Word Var_91;

                mercury__string__to_char_list_2_p_0(ShortOptions_50, &ShortOptionsList_51);
                succeeded = (ShortOptionsList_51 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SingleShortOpt_52 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), ShortOptionsList_51, (MR_Integer) 0)));
                  Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortOptionsList_51, (MR_Integer) 1))));
                  succeeded = (Var_89 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_90 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Var_89, (MR_Integer) 0)));
                    Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_89, (MR_Integer) 1))));
                    succeeded = (Var_90 == (MR_Char) 45);
                    if (succeeded)
                      succeeded = (Var_91 == (MR_Word) ((MR_Unsigned) 0U));
                  }
                }
                if (succeeded)
                {
                  MR_Word ShortOptionPred_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OptionOps_1, (MR_Integer) 0))));
                  MR_Box Flag_132;
                  MR_bool MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), ShortOptionPred_53, (MR_Integer) 1))));

                  succeeded = func_3(((MR_Box) (ShortOptionPred_53)), ((MR_Box) (MR_Word) (SingleShortOpt_52)), &Flag_132);
                  if (succeeded)
                  {
                    MR_Word Var_92;
                    MR_Word Var_94;
                    MR_Word STATE_VARIABLE_OptionsSet_96_96;
                    MR_Box STATE_VARIABLE_UserData_97_97;
                    MR_String OptName_128;
                    MR_Word NegMaybeError_129;
                    MR_Word NewOptionTable_130;

                    {
                      Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (MR_Word) (SingleShortOpt_52));
                      MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (MR_Word) ((MR_Char) 45));
                      MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) (Var_94));
                    }
                    mercury__string__from_char_list_2_p_0(Var_92, &OptName_128);
                    mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_110_101_103_97_116_101_100_95_111_112_116_105_111_110_95_95_91_50_93_95_48_10_p_0(TypeInfo_for_OptionType_171, OptionOps_1, OptName_128, Flag_132, &NegMaybeError_129, STATE_VARIABLE_OptionTable_0_7, &NewOptionTable_130, STATE_VARIABLE_OptionsSet_0_9, &STATE_VARIABLE_OptionsSet_96_96, STATE_VARIABLE_UserData_0_11, &STATE_VARIABLE_UserData_97_97);
                    if ((NegMaybeError_129 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      MR_Word STATE_VARIABLE_OptionArgs_99_99;
                      MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_OptionType_171;
                      MR_Word next_value_of_tscc_proc_1_input_2_TypeInfo_for_UserDataType_172;
                      MR_Word next_value_of_tscc_proc_1_input_3_OptionOps_1;
                      MR_Word next_value_of_tscc_proc_1_input_4_HeadVar__2_2;
                      MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_OptionArgs_0_4;
                      MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_OptionTable_0_7;
                      MR_Word next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_OptionsSet_0_9;
                      MR_Box next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_UserData_0_11;

                      {
                        STATE_VARIABLE_OptionArgs_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_OptionArgs_99_99, 0) = ((MR_Box) (Arg0_27));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_OptionArgs_99_99, 1) = ((MR_Box) (STATE_VARIABLE_OptionArgs_0_4));
                      }
                      // direct tailcall eliminated
                      ;
                      next_value_of_tscc_proc_1_input_1_TypeInfo_for_OptionType_171 = TypeInfo_for_OptionType_171;
                      next_value_of_tscc_proc_1_input_2_TypeInfo_for_UserDataType_172 = TypeInfo_for_UserDataType_172;
                      next_value_of_tscc_proc_1_input_3_OptionOps_1 = OptionOps_1;
                      next_value_of_tscc_proc_1_input_4_HeadVar__2_2 = Args0_28;
                      next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_OptionArgs_0_4 = STATE_VARIABLE_OptionArgs_99_99;
                      next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_OptionTable_0_7 = NewOptionTable_130;
                      next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_OptionsSet_0_9 = STATE_VARIABLE_OptionsSet_96_96;
                      next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_UserData_0_11 = STATE_VARIABLE_UserData_97_97;
                      tscc_proc_1_input_1_TypeInfo_for_OptionType_171 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_OptionType_171;
                      tscc_proc_1_input_2_TypeInfo_for_UserDataType_172 = next_value_of_tscc_proc_1_input_2_TypeInfo_for_UserDataType_172;
                      tscc_proc_1_input_3_OptionOps_1 = next_value_of_tscc_proc_1_input_3_OptionOps_1;
                      tscc_proc_1_input_4_HeadVar__2_2 = next_value_of_tscc_proc_1_input_4_HeadVar__2_2;
                      tscc_proc_1_input_5_STATE_VARIABLE_OptionArgs_0_4 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_OptionArgs_0_4;
                      tscc_proc_1_input_6_STATE_VARIABLE_OptionTable_0_7 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_OptionTable_0_7;
                      tscc_proc_1_input_7_STATE_VARIABLE_OptionsSet_0_9 = next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_OptionsSet_0_9;
                      tscc_proc_1_input_8_STATE_VARIABLE_UserData_0_11 = next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_UserData_0_11;
                      goto top_of_proc_1;
                    }
                    else
                    {
                      HeadVar__6_6 = NegMaybeError_129;
                      HeadVar__3_3 = Args0_28;
                      STATE_VARIABLE_OptionArgs_5 = STATE_VARIABLE_OptionArgs_0_4;
                      STATE_VARIABLE_OptionTable_8 = STATE_VARIABLE_OptionTable_0_7;
                      STATE_VARIABLE_OptionsSet_10 = STATE_VARIABLE_OptionsSet_96_96;
                      STATE_VARIABLE_UserData_12 = STATE_VARIABLE_UserData_97_97;
                    }
                  }
                  else
                  {
                    MR_String Var_104;
                    MR_Word Error_131;

                    Var_104 = mercury__string__f_43_43_2_f_0((MR_String) "-", ShortOptions_50);
                    {
                      Error_131 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Error_131, 0) = ((MR_Box) (Var_104));
                    }
                    {
                      HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), HeadVar__6_6, 0) = ((MR_Box) (Error_131));
                    }
                    HeadVar__3_3 = Args0_28;
                    STATE_VARIABLE_UserData_12 = STATE_VARIABLE_UserData_0_11;
                    STATE_VARIABLE_OptionsSet_10 = STATE_VARIABLE_OptionsSet_0_9;
                    STATE_VARIABLE_OptionTable_8 = STATE_VARIABLE_OptionTable_0_7;
                    STATE_VARIABLE_OptionArgs_5 = STATE_VARIABLE_OptionArgs_0_4;
                  }
                }
                else
                {
                  MR_Word Args1_55;
                  MR_Word ShortMaybeError_56;
                  MR_Word STATE_VARIABLE_OptionArgs_106_106;
                  MR_Word STATE_VARIABLE_OptionArgs_107_107;
                  MR_Word STATE_VARIABLE_OptionsSet_108_108;
                  MR_Box STATE_VARIABLE_UserData_109_109;
                  MR_Word NewOptionTable_142;

                  {
                    STATE_VARIABLE_OptionArgs_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_OptionArgs_106_106, 0) = ((MR_Box) (Arg0_27));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_OptionArgs_106_106, 1) = ((MR_Box) (STATE_VARIABLE_OptionArgs_0_4));
                  }
                  mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_115_104_111_114_116_95_111_112_116_105_111_110_115_95_95_91_50_93_95_48_13_p_0(TypeInfo_for_OptionType_171, OptionOps_1, ShortOptionsList_51, Args0_28, &Args1_55, STATE_VARIABLE_OptionArgs_106_106, &STATE_VARIABLE_OptionArgs_107_107, &ShortMaybeError_56, STATE_VARIABLE_OptionTable_0_7, &NewOptionTable_142, STATE_VARIABLE_OptionsSet_0_9, &STATE_VARIABLE_OptionsSet_108_108, STATE_VARIABLE_UserData_0_11, &STATE_VARIABLE_UserData_109_109);
                  if ((ShortMaybeError_56 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_OptionType_171 = TypeInfo_for_OptionType_171;
                    MR_Word next_value_of_tscc_proc_1_input_2_TypeInfo_for_UserDataType_172 = TypeInfo_for_UserDataType_172;
                    MR_Word next_value_of_tscc_proc_1_input_3_OptionOps_1 = OptionOps_1;
                    MR_Word next_value_of_tscc_proc_1_input_4_HeadVar__2_2 = Args1_55;
                    MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_OptionArgs_0_4 = STATE_VARIABLE_OptionArgs_107_107;
                    MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_OptionTable_0_7 = NewOptionTable_142;
                    MR_Word next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_OptionsSet_0_9 = STATE_VARIABLE_OptionsSet_108_108;
                    MR_Box next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_UserData_0_11 = STATE_VARIABLE_UserData_109_109;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_TypeInfo_for_OptionType_171 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_OptionType_171;
                    tscc_proc_1_input_2_TypeInfo_for_UserDataType_172 = next_value_of_tscc_proc_1_input_2_TypeInfo_for_UserDataType_172;
                    tscc_proc_1_input_3_OptionOps_1 = next_value_of_tscc_proc_1_input_3_OptionOps_1;
                    tscc_proc_1_input_4_HeadVar__2_2 = next_value_of_tscc_proc_1_input_4_HeadVar__2_2;
                    tscc_proc_1_input_5_STATE_VARIABLE_OptionArgs_0_4 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_OptionArgs_0_4;
                    tscc_proc_1_input_6_STATE_VARIABLE_OptionTable_0_7 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_OptionTable_0_7;
                    tscc_proc_1_input_7_STATE_VARIABLE_OptionsSet_0_9 = next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_OptionsSet_0_9;
                    tscc_proc_1_input_8_STATE_VARIABLE_UserData_0_11 = next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_UserData_0_11;
                    goto top_of_proc_1;
                  }
                  else
                  {
                    HeadVar__6_6 = ShortMaybeError_56;
                    HeadVar__3_3 = Args0_28;
                    STATE_VARIABLE_OptionArgs_5 = STATE_VARIABLE_OptionArgs_107_107;
                    STATE_VARIABLE_OptionTable_8 = STATE_VARIABLE_OptionTable_0_7;
                    STATE_VARIABLE_OptionsSet_10 = STATE_VARIABLE_OptionsSet_108_108;
                    STATE_VARIABLE_UserData_12 = STATE_VARIABLE_UserData_109_109;
                  }
                }
              }
              else
              {
                MR_Word NonOptionArgsTail_58;

                mercury__getopt__process_arguments_12_p_0(TypeInfo_for_OptionType_171, TypeInfo_for_UserDataType_172, OptionOps_1, Args0_28, &NonOptionArgsTail_58, STATE_VARIABLE_OptionArgs_0_4, &STATE_VARIABLE_OptionArgs_5, &HeadVar__6_6, STATE_VARIABLE_OptionTable_0_7, &STATE_VARIABLE_OptionTable_8, STATE_VARIABLE_OptionsSet_0_9, &STATE_VARIABLE_OptionsSet_10, STATE_VARIABLE_UserData_0_11, &STATE_VARIABLE_UserData_12);
                {
                  HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (Arg0_27));
                  MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (NonOptionArgsTail_58));
                }
              }
            }
          }
        }
      }
      tscc_output_1_HeadVar__3_3 = HeadVar__3_3;
      tscc_output_2_STATE_VARIABLE_OptionArgs_5 = STATE_VARIABLE_OptionArgs_5;
      tscc_output_3_HeadVar__6_6 = HeadVar__6_6;
      tscc_output_4_STATE_VARIABLE_OptionTable_8 = STATE_VARIABLE_OptionTable_8;
      tscc_output_5_STATE_VARIABLE_OptionsSet_10 = STATE_VARIABLE_OptionsSet_10;
      tscc_output_6_STATE_VARIABLE_UserData_12 = STATE_VARIABLE_UserData_12;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word TypeInfo_for_OptionType_62 = tscc_proc_2_input_1_TypeInfo_for_OptionType_62;
      MR_Word TypeInfo_for_UserDataType_63 = tscc_proc_2_input_2_TypeInfo_for_UserDataType_63;
      MR_Word OptionOps_17 = tscc_proc_2_input_3_OptionOps_17;
      MR_String Option_18 = tscc_proc_2_input_4_Option_18;
      MR_Box Flag_19 = tscc_proc_2_input_5_Flag_19;
      MR_Word OptionData_20 = tscc_proc_2_input_6_OptionData_20;
      MR_Word MaybeOptionArg0_21 = tscc_proc_2_input_7_MaybeOptionArg0_21;
      MR_Word Args0_22 = tscc_proc_2_input_8_Args0_22;
      MR_Word Args_23;
      MR_Word STATE_VARIABLE_OptionArgs_0_39 = tscc_proc_2_input_9_STATE_VARIABLE_OptionArgs_0_39;
      MR_Word STATE_VARIABLE_OptionArgs_40;
      MR_Word MaybeError_25;
      MR_Word STATE_VARIABLE_OptionTable_0_41 = tscc_proc_2_input_10_STATE_VARIABLE_OptionTable_0_41;
      MR_Word STATE_VARIABLE_OptionTable_42;
      MR_Word STATE_VARIABLE_OptionsSet_0_43 = tscc_proc_2_input_11_STATE_VARIABLE_OptionsSet_0_43;
      MR_Word STATE_VARIABLE_OptionsSet_44;
      MR_Box STATE_VARIABLE_UserData_0_45 = tscc_proc_2_input_12_STATE_VARIABLE_UserData_0_45;
      MR_Box STATE_VARIABLE_UserData_46;
      MR_bool succeeded;
      MR_Word MaybeOptionArg_31;
      MR_Word Args1_32;
      MR_Word MissingArg_33;
      MR_Word STATE_VARIABLE_OptionArgs_48_48;
      MR_Word Var_64;

      switch (MR_tag((MR_Word) OptionData_20)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(OptionData_20)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Var_64 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              Var_64 = (MR_Integer) 0;
              break;
            case (MR_Integer) 2:
              Var_64 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              Var_64 = (MR_Integer) 1;
              break;
            case (MR_Integer) 4:
              Var_64 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          Var_64 = (MR_Integer) 0;
          break;
        case (MR_Integer) 2:
          Var_64 = (MR_Integer) 1;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), OptionData_20, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Var_64 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              Var_64 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              Var_64 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              Var_64 = (MR_Integer) 1;
              break;
          }
          break;
      }
      succeeded = ((MR_Integer) 1 == Var_64);
      if (succeeded)
        succeeded = (MaybeOptionArg0_21 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        if ((Args0_22 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MaybeOptionArg_31 = (MR_Word) ((MR_Unsigned) 0U);
          Args1_32 = Args0_22;
          MissingArg_33 = (MR_Integer) 1;
          STATE_VARIABLE_OptionArgs_48_48 = STATE_VARIABLE_OptionArgs_0_39;
        }
        else
        {
          MR_String Arg_29 = ((MR_String) ((MR_hl_field(MR_mktag(1), Args0_22, (MR_Integer) 0))));

          Args1_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args0_22, (MR_Integer) 1))));
          {
            MaybeOptionArg_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeOptionArg_31, 0) = ((MR_Box) (Arg_29));
          }
          MissingArg_33 = (MR_Integer) 0;
          {
            STATE_VARIABLE_OptionArgs_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_OptionArgs_48_48, 0) = ((MR_Box) (Arg_29));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_OptionArgs_48_48, 1) = ((MR_Box) (STATE_VARIABLE_OptionArgs_0_39));
          }
        }
      else
      {
        MaybeOptionArg_31 = MaybeOptionArg0_21;
        Args1_32 = Args0_22;
        MissingArg_33 = (MR_Integer) 0;
        STATE_VARIABLE_OptionArgs_48_48 = STATE_VARIABLE_OptionArgs_0_39;
      }
      switch (MissingArg_33) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String ArgVal_35;
            MR_Word Var_65;

            switch (MR_tag((MR_Word) OptionData_20)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(OptionData_20)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    Var_65 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    Var_65 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 2:
                    Var_65 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    Var_65 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    Var_65 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                Var_65 = (MR_Integer) 0;
                break;
              case (MR_Integer) 2:
                Var_65 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), OptionData_20, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    Var_65 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    Var_65 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    Var_65 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    Var_65 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            succeeded = ((MR_Integer) 0 == Var_65);
            if (succeeded)
            {
              succeeded = (MaybeOptionArg_31 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
                ArgVal_35 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeOptionArg_31, (MR_Integer) 0))));
            }
            if (succeeded)
            {
              MR_Word Var_50;
              MR_Word Error_59;

              Args_23 = Args0_22;
              {
                Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (ArgVal_35));
              }
              {
                Error_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Error_59, 0) = Flag_19;
                MR_hl_field(MR_mktag(1), Error_59, 1) = ((MR_Box) (Option_18));
                MR_hl_field(MR_mktag(1), Error_59, 2) = ((MR_Box) (Var_50));
              }
              {
                MaybeError_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeError_25, 0) = ((MR_Box) (Error_59));
              }
              STATE_VARIABLE_UserData_46 = STATE_VARIABLE_UserData_0_45;
              STATE_VARIABLE_OptionsSet_44 = STATE_VARIABLE_OptionsSet_0_43;
              STATE_VARIABLE_OptionTable_42 = STATE_VARIABLE_OptionTable_0_41;
              STATE_VARIABLE_OptionArgs_40 = STATE_VARIABLE_OptionArgs_48_48;
            }
            else
            {
              MR_Word OptionMaybeError_36;
              MR_Word NewOptionTable_37;
              MR_Word STATE_VARIABLE_OptionsSet_51_51;
              MR_Box STATE_VARIABLE_UserData_52_52;

              mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_111_112_116_105_111_110_95_95_91_50_93_95_48_12_p_0(TypeInfo_for_OptionType_62, OptionOps_17, OptionData_20, Option_18, Flag_19, MaybeOptionArg_31, &OptionMaybeError_36, STATE_VARIABLE_OptionTable_0_41, &NewOptionTable_37, STATE_VARIABLE_OptionsSet_0_43, &STATE_VARIABLE_OptionsSet_51_51, STATE_VARIABLE_UserData_0_45, &STATE_VARIABLE_UserData_52_52);
              if ((OptionMaybeError_36 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_OptionType_171 = TypeInfo_for_OptionType_62;
                MR_Word next_value_of_tscc_proc_1_input_2_TypeInfo_for_UserDataType_172 = TypeInfo_for_UserDataType_63;
                MR_Word next_value_of_tscc_proc_1_input_3_OptionOps_1 = OptionOps_17;
                MR_Word next_value_of_tscc_proc_1_input_4_HeadVar__2_2 = Args1_32;
                MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_OptionArgs_0_4 = STATE_VARIABLE_OptionArgs_48_48;
                MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_OptionTable_0_7 = NewOptionTable_37;
                MR_Word next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_OptionsSet_0_9 = STATE_VARIABLE_OptionsSet_51_51;
                MR_Box next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_UserData_0_11 = STATE_VARIABLE_UserData_52_52;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_TypeInfo_for_OptionType_171 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_OptionType_171;
                tscc_proc_1_input_2_TypeInfo_for_UserDataType_172 = next_value_of_tscc_proc_1_input_2_TypeInfo_for_UserDataType_172;
                tscc_proc_1_input_3_OptionOps_1 = next_value_of_tscc_proc_1_input_3_OptionOps_1;
                tscc_proc_1_input_4_HeadVar__2_2 = next_value_of_tscc_proc_1_input_4_HeadVar__2_2;
                tscc_proc_1_input_5_STATE_VARIABLE_OptionArgs_0_4 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_OptionArgs_0_4;
                tscc_proc_1_input_6_STATE_VARIABLE_OptionTable_0_7 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_OptionTable_0_7;
                tscc_proc_1_input_7_STATE_VARIABLE_OptionsSet_0_9 = next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_OptionsSet_0_9;
                tscc_proc_1_input_8_STATE_VARIABLE_UserData_0_11 = next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_UserData_0_11;
                goto top_of_proc_1;
              }
              else
              {
                Args_23 = Args1_32;
                MaybeError_25 = OptionMaybeError_36;
                STATE_VARIABLE_OptionArgs_40 = STATE_VARIABLE_OptionArgs_48_48;
                STATE_VARIABLE_OptionTable_42 = STATE_VARIABLE_OptionTable_0_41;
                STATE_VARIABLE_OptionsSet_44 = STATE_VARIABLE_OptionsSet_51_51;
                STATE_VARIABLE_UserData_46 = STATE_VARIABLE_UserData_52_52;
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Error_34;

            Args_23 = Args0_22;
            {
              Error_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Error_34, 0) = Flag_19;
              MR_hl_field(MR_mktag(1), Error_34, 1) = ((MR_Box) (Option_18));
              MR_hl_field(MR_mktag(1), Error_34, 2) = ((MR_Box) ((MR_Unsigned) 4U));
            }
            {
              MaybeError_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeError_25, 0) = ((MR_Box) (Error_34));
            }
            STATE_VARIABLE_OptionArgs_40 = STATE_VARIABLE_OptionArgs_48_48;
            STATE_VARIABLE_OptionTable_42 = STATE_VARIABLE_OptionTable_0_41;
            STATE_VARIABLE_OptionsSet_44 = STATE_VARIABLE_OptionsSet_0_43;
            STATE_VARIABLE_UserData_46 = STATE_VARIABLE_UserData_0_45;
          }
          break;
      }
      tscc_output_1_HeadVar__3_3 = Args_23;
      tscc_output_2_STATE_VARIABLE_OptionArgs_5 = STATE_VARIABLE_OptionArgs_40;
      tscc_output_3_HeadVar__6_6 = MaybeError_25;
      tscc_output_4_STATE_VARIABLE_OptionTable_8 = STATE_VARIABLE_OptionTable_42;
      tscc_output_5_STATE_VARIABLE_OptionsSet_10 = STATE_VARIABLE_OptionsSet_44;
      tscc_output_6_STATE_VARIABLE_UserData_12 = STATE_VARIABLE_UserData_46;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_HeadVar__3_3 = tscc_output_1_HeadVar__3_3;
    *tscc_output_ptr_2_STATE_VARIABLE_OptionArgs_5 = tscc_output_2_STATE_VARIABLE_OptionArgs_5;
    *tscc_output_ptr_3_HeadVar__6_6 = tscc_output_3_HeadVar__6_6;
    *tscc_output_ptr_4_STATE_VARIABLE_OptionTable_8 = tscc_output_4_STATE_VARIABLE_OptionTable_8;
    *tscc_output_ptr_5_STATE_VARIABLE_OptionsSet_10 = tscc_output_5_STATE_VARIABLE_OptionsSet_10;
    *tscc_output_ptr_6_STATE_VARIABLE_UserData_12 = tscc_output_6_STATE_VARIABLE_UserData_12;
    return;
  }
}

static void MR_CALL 
mercury__getopt__handle_long_option_16_p_0(
  MR_Word tscc_proc_2_input_1_TypeInfo_for_OptionType_62,
  MR_Word tscc_proc_2_input_2_TypeInfo_for_UserDataType_63,
  MR_Word tscc_proc_2_input_3_OptionOps_17,
  MR_String tscc_proc_2_input_4_Option_18,
  MR_Box tscc_proc_2_input_5_Flag_19,
  MR_Word tscc_proc_2_input_6_OptionData_20,
  MR_Word tscc_proc_2_input_7_MaybeOptionArg0_21,
  MR_Word tscc_proc_2_input_8_Args0_22,
  MR_Word * tscc_output_ptr_1_HeadVar__3_3,
  MR_Word tscc_proc_2_input_9_STATE_VARIABLE_OptionArgs_0_39,
  MR_Word * tscc_output_ptr_2_STATE_VARIABLE_OptionArgs_5,
  MR_Word * tscc_output_ptr_3_HeadVar__6_6,
  MR_Word tscc_proc_2_input_10_STATE_VARIABLE_OptionTable_0_41,
  MR_Word * tscc_output_ptr_4_STATE_VARIABLE_OptionTable_8,
  MR_Word tscc_proc_2_input_11_STATE_VARIABLE_OptionsSet_0_43,
  MR_Word * tscc_output_ptr_5_STATE_VARIABLE_OptionsSet_10,
  MR_Box tscc_proc_2_input_12_STATE_VARIABLE_UserData_0_45,
  MR_Box * tscc_output_ptr_6_STATE_VARIABLE_UserData_12)
{
  {
    MR_Word tscc_proc_1_input_1_TypeInfo_for_OptionType_171;
    MR_Word tscc_proc_1_input_2_TypeInfo_for_UserDataType_172;
    MR_Word tscc_proc_1_input_3_OptionOps_1;
    MR_Word tscc_proc_1_input_4_HeadVar__2_2;
    MR_Word tscc_proc_1_input_5_STATE_VARIABLE_OptionArgs_0_4;
    MR_Word tscc_proc_1_input_6_STATE_VARIABLE_OptionTable_0_7;
    MR_Word tscc_proc_1_input_7_STATE_VARIABLE_OptionsSet_0_9;
    MR_Box tscc_proc_1_input_8_STATE_VARIABLE_UserData_0_11;
    MR_Word tscc_output_1_HeadVar__3_3;
    MR_Word tscc_output_2_STATE_VARIABLE_OptionArgs_5;
    MR_Word tscc_output_3_HeadVar__6_6;
    MR_Word tscc_output_4_STATE_VARIABLE_OptionTable_8;
    MR_Word tscc_output_5_STATE_VARIABLE_OptionsSet_10;
    MR_Box tscc_output_6_STATE_VARIABLE_UserData_12;

    // The code for TSCC PROC 2: pred getopt.handle_long_option/16-0.
    ;
    // Setup for mutual tailcalls optimized into a loop.
    ;
    // The mutually recursive procedures are:
    ;
    ;
    // proc 1 in TSCC: pred getopt.process_arguments/12-0
    ;
    // proc 2 in TSCC: pred getopt.handle_long_option/16-0
    ;
    ;
    goto top_of_proc_2;
  top_of_proc_1:;
    {
      MR_Word TypeInfo_for_OptionType_171 = tscc_proc_1_input_1_TypeInfo_for_OptionType_171;
      MR_Word TypeInfo_for_UserDataType_172 = tscc_proc_1_input_2_TypeInfo_for_UserDataType_172;
      MR_Word OptionOps_1 = tscc_proc_1_input_3_OptionOps_1;
      MR_Word HeadVar__2_2 = tscc_proc_1_input_4_HeadVar__2_2;
      MR_Word HeadVar__3_3;
      MR_Word STATE_VARIABLE_OptionArgs_0_4 = tscc_proc_1_input_5_STATE_VARIABLE_OptionArgs_0_4;
      MR_Word STATE_VARIABLE_OptionArgs_5;
      MR_Word HeadVar__6_6;
      MR_Word STATE_VARIABLE_OptionTable_0_7 = tscc_proc_1_input_6_STATE_VARIABLE_OptionTable_0_7;
      MR_Word STATE_VARIABLE_OptionTable_8;
      MR_Word STATE_VARIABLE_OptionsSet_0_9 = tscc_proc_1_input_7_STATE_VARIABLE_OptionsSet_0_9;
      MR_Word STATE_VARIABLE_OptionsSet_10;
      MR_Box STATE_VARIABLE_UserData_0_11 = tscc_proc_1_input_8_STATE_VARIABLE_UserData_0_11;
      MR_Box STATE_VARIABLE_UserData_12;
      MR_bool succeeded;

      if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
        HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
        STATE_VARIABLE_UserData_12 = STATE_VARIABLE_UserData_0_11;
        STATE_VARIABLE_OptionsSet_10 = STATE_VARIABLE_OptionsSet_0_9;
        STATE_VARIABLE_OptionTable_8 = STATE_VARIABLE_OptionTable_0_7;
        STATE_VARIABLE_OptionArgs_5 = STATE_VARIABLE_OptionArgs_0_4;
      }
      else
      {
        MR_String Arg0_27 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
        MR_Word Args0_28 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));

        succeeded = (strcmp(Arg0_27, (MR_String) "--") == 0);
        if (succeeded)
        {
          HeadVar__3_3 = Args0_28;
          HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
          STATE_VARIABLE_UserData_12 = STATE_VARIABLE_UserData_0_11;
          STATE_VARIABLE_OptionsSet_10 = STATE_VARIABLE_OptionsSet_0_9;
          STATE_VARIABLE_OptionTable_8 = STATE_VARIABLE_OptionTable_0_7;
          STATE_VARIABLE_OptionArgs_5 = STATE_VARIABLE_OptionArgs_0_4;
        }
        else
        {
          MR_String LongOption_35;

          succeeded = mercury__string__append_3_p_1((MR_String) "--no-", &LongOption_35, Arg0_27);
          if (succeeded)
          {
            MR_Word LongOptionPred_36 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OptionOps_1, (MR_Integer) 1))));
            MR_Box Flag_37;
            MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), LongOptionPred_36, (MR_Integer) 1))));

            succeeded = func_0(((MR_Box) (LongOptionPred_36)), ((MR_Box) (LongOption_35)), &Flag_37);
            if (succeeded)
            {
              MR_String OptName_38;
              MR_Word NegMaybeError_39;
              MR_Word NewOptionTable_40;
              MR_Word STATE_VARIABLE_OptionsSet_69_69;
              MR_Box STATE_VARIABLE_UserData_70_70;

              OptName_38 = mercury__string__f_43_43_2_f_0((MR_String) "--", LongOption_35);
              mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_110_101_103_97_116_101_100_95_111_112_116_105_111_110_95_95_91_50_93_95_48_10_p_0(TypeInfo_for_OptionType_171, OptionOps_1, OptName_38, Flag_37, &NegMaybeError_39, STATE_VARIABLE_OptionTable_0_7, &NewOptionTable_40, STATE_VARIABLE_OptionsSet_0_9, &STATE_VARIABLE_OptionsSet_69_69, STATE_VARIABLE_UserData_0_11, &STATE_VARIABLE_UserData_70_70);
              if ((NegMaybeError_39 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word STATE_VARIABLE_OptionArgs_72_72;
                MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_OptionType_171;
                MR_Word next_value_of_tscc_proc_1_input_2_TypeInfo_for_UserDataType_172;
                MR_Word next_value_of_tscc_proc_1_input_3_OptionOps_1;
                MR_Word next_value_of_tscc_proc_1_input_4_HeadVar__2_2;
                MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_OptionArgs_0_4;
                MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_OptionTable_0_7;
                MR_Word next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_OptionsSet_0_9;
                MR_Box next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_UserData_0_11;

                {
                  STATE_VARIABLE_OptionArgs_72_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_OptionArgs_72_72, 0) = ((MR_Box) (Arg0_27));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_OptionArgs_72_72, 1) = ((MR_Box) (STATE_VARIABLE_OptionArgs_0_4));
                }
                // direct tailcall eliminated
                ;
                next_value_of_tscc_proc_1_input_1_TypeInfo_for_OptionType_171 = TypeInfo_for_OptionType_171;
                next_value_of_tscc_proc_1_input_2_TypeInfo_for_UserDataType_172 = TypeInfo_for_UserDataType_172;
                next_value_of_tscc_proc_1_input_3_OptionOps_1 = OptionOps_1;
                next_value_of_tscc_proc_1_input_4_HeadVar__2_2 = Args0_28;
                next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_OptionArgs_0_4 = STATE_VARIABLE_OptionArgs_72_72;
                next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_OptionTable_0_7 = NewOptionTable_40;
                next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_OptionsSet_0_9 = STATE_VARIABLE_OptionsSet_69_69;
                next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_UserData_0_11 = STATE_VARIABLE_UserData_70_70;
                tscc_proc_1_input_1_TypeInfo_for_OptionType_171 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_OptionType_171;
                tscc_proc_1_input_2_TypeInfo_for_UserDataType_172 = next_value_of_tscc_proc_1_input_2_TypeInfo_for_UserDataType_172;
                tscc_proc_1_input_3_OptionOps_1 = next_value_of_tscc_proc_1_input_3_OptionOps_1;
                tscc_proc_1_input_4_HeadVar__2_2 = next_value_of_tscc_proc_1_input_4_HeadVar__2_2;
                tscc_proc_1_input_5_STATE_VARIABLE_OptionArgs_0_4 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_OptionArgs_0_4;
                tscc_proc_1_input_6_STATE_VARIABLE_OptionTable_0_7 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_OptionTable_0_7;
                tscc_proc_1_input_7_STATE_VARIABLE_OptionsSet_0_9 = next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_OptionsSet_0_9;
                tscc_proc_1_input_8_STATE_VARIABLE_UserData_0_11 = next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_UserData_0_11;
                goto top_of_proc_1;
              }
              else
              {
                HeadVar__6_6 = NegMaybeError_39;
                HeadVar__3_3 = Args0_28;
                STATE_VARIABLE_OptionArgs_5 = STATE_VARIABLE_OptionArgs_0_4;
                STATE_VARIABLE_OptionTable_8 = STATE_VARIABLE_OptionTable_0_7;
                STATE_VARIABLE_OptionsSet_10 = STATE_VARIABLE_OptionsSet_69_69;
                STATE_VARIABLE_UserData_12 = STATE_VARIABLE_UserData_70_70;
              }
            }
            else
            {
              MR_Word Error_42;

              {
                Error_42 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Error_42, 0) = ((MR_Box) (Arg0_27));
              }
              {
                HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), HeadVar__6_6, 0) = ((MR_Box) (Error_42));
              }
              HeadVar__3_3 = Args0_28;
              STATE_VARIABLE_UserData_12 = STATE_VARIABLE_UserData_0_11;
              STATE_VARIABLE_OptionsSet_10 = STATE_VARIABLE_OptionsSet_0_9;
              STATE_VARIABLE_OptionTable_8 = STATE_VARIABLE_OptionTable_0_7;
              STATE_VARIABLE_OptionArgs_5 = STATE_VARIABLE_OptionArgs_0_4;
            }
          }
          else
          {
            MR_String LongOptionStr_43;

            succeeded = mercury__string__append_3_p_1((MR_String) "--", &LongOptionStr_43, Arg0_27);
            if (succeeded)
            {
              MR_Word MaybeArg_47;
              MR_String OptionName_48;
              MR_String LongOption_124;
              MR_Word LongOptionPred_125 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OptionOps_1, (MR_Integer) 1))));
              MR_Integer OptionLen_44;
              MR_Box Flag_122;
              MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *);

              succeeded = mercury__string__sub_string_search_3_p_0(LongOptionStr_43, (MR_String) "=", &OptionLen_44);
              if (succeeded)
              {
                MR_String EqualOptionArg_45;
                MR_String OptionArg_46;

                mercury__string__split_4_p_0(LongOptionStr_43, OptionLen_44, &LongOption_124, &EqualOptionArg_45);
                succeeded = mercury__string__first_char_3_p_2(EqualOptionArg_45, (MR_Char) 61, &OptionArg_46);
                if (succeeded)
                  {
                    MaybeArg_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), MaybeArg_47, 0) = ((MR_Box) (OptionArg_46));
                  }
                else
                  {
                    mercury__require__error_1_p_0((MR_String) "bad split of --longoption=arg");
                    return;
                  }
              }
              else
              {
                LongOption_124 = LongOptionStr_43;
                MaybeArg_47 = (MR_Word) ((MR_Unsigned) 0U);
              }
              OptionName_48 = mercury__string__f_43_43_2_f_0((MR_String) "--", LongOption_124);
              func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), LongOptionPred_125, (MR_Integer) 1))));
              succeeded = func_1(((MR_Box) (LongOptionPred_125)), ((MR_Box) (LongOption_124)), &Flag_122);
              if (succeeded)
              {
                MR_Word OptionData_49;
                MR_Box conv2_OptionData_49;

                succeeded = mercury__map__search_3_p_0(TypeInfo_for_OptionType_171, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), STATE_VARIABLE_OptionTable_0_7, Flag_122, &conv2_OptionData_49);
                if (succeeded)
                {
                  OptionData_49 = ((MR_Word) (conv2_OptionData_49));
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  MR_Word STATE_VARIABLE_OptionArgs_82_82;
                  MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_OptionType_62;
                  MR_Word next_value_of_tscc_proc_2_input_2_TypeInfo_for_UserDataType_63;
                  MR_Word next_value_of_tscc_proc_2_input_3_OptionOps_17;
                  MR_String next_value_of_tscc_proc_2_input_4_Option_18;
                  MR_Box next_value_of_tscc_proc_2_input_5_Flag_19;
                  MR_Word next_value_of_tscc_proc_2_input_6_OptionData_20;
                  MR_Word next_value_of_tscc_proc_2_input_7_MaybeOptionArg0_21;
                  MR_Word next_value_of_tscc_proc_2_input_8_Args0_22;
                  MR_Word next_value_of_tscc_proc_2_input_9_STATE_VARIABLE_OptionArgs_0_39;
                  MR_Word next_value_of_tscc_proc_2_input_10_STATE_VARIABLE_OptionTable_0_41;
                  MR_Word next_value_of_tscc_proc_2_input_11_STATE_VARIABLE_OptionsSet_0_43;
                  MR_Box next_value_of_tscc_proc_2_input_12_STATE_VARIABLE_UserData_0_45;

                  {
                    STATE_VARIABLE_OptionArgs_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_OptionArgs_82_82, 0) = ((MR_Box) (Arg0_27));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_OptionArgs_82_82, 1) = ((MR_Box) (STATE_VARIABLE_OptionArgs_0_4));
                  }
                  // direct tailcall eliminated
                  ;
                  next_value_of_tscc_proc_2_input_1_TypeInfo_for_OptionType_62 = TypeInfo_for_OptionType_171;
                  next_value_of_tscc_proc_2_input_2_TypeInfo_for_UserDataType_63 = TypeInfo_for_UserDataType_172;
                  next_value_of_tscc_proc_2_input_3_OptionOps_17 = OptionOps_1;
                  next_value_of_tscc_proc_2_input_4_Option_18 = OptionName_48;
                  next_value_of_tscc_proc_2_input_5_Flag_19 = Flag_122;
                  next_value_of_tscc_proc_2_input_6_OptionData_20 = OptionData_49;
                  next_value_of_tscc_proc_2_input_7_MaybeOptionArg0_21 = MaybeArg_47;
                  next_value_of_tscc_proc_2_input_8_Args0_22 = Args0_28;
                  next_value_of_tscc_proc_2_input_9_STATE_VARIABLE_OptionArgs_0_39 = STATE_VARIABLE_OptionArgs_82_82;
                  next_value_of_tscc_proc_2_input_10_STATE_VARIABLE_OptionTable_0_41 = STATE_VARIABLE_OptionTable_0_7;
                  next_value_of_tscc_proc_2_input_11_STATE_VARIABLE_OptionsSet_0_43 = STATE_VARIABLE_OptionsSet_0_9;
                  next_value_of_tscc_proc_2_input_12_STATE_VARIABLE_UserData_0_45 = STATE_VARIABLE_UserData_0_11;
                  tscc_proc_2_input_1_TypeInfo_for_OptionType_62 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_OptionType_62;
                  tscc_proc_2_input_2_TypeInfo_for_UserDataType_63 = next_value_of_tscc_proc_2_input_2_TypeInfo_for_UserDataType_63;
                  tscc_proc_2_input_3_OptionOps_17 = next_value_of_tscc_proc_2_input_3_OptionOps_17;
                  tscc_proc_2_input_4_Option_18 = next_value_of_tscc_proc_2_input_4_Option_18;
                  tscc_proc_2_input_5_Flag_19 = next_value_of_tscc_proc_2_input_5_Flag_19;
                  tscc_proc_2_input_6_OptionData_20 = next_value_of_tscc_proc_2_input_6_OptionData_20;
                  tscc_proc_2_input_7_MaybeOptionArg0_21 = next_value_of_tscc_proc_2_input_7_MaybeOptionArg0_21;
                  tscc_proc_2_input_8_Args0_22 = next_value_of_tscc_proc_2_input_8_Args0_22;
                  tscc_proc_2_input_9_STATE_VARIABLE_OptionArgs_0_39 = next_value_of_tscc_proc_2_input_9_STATE_VARIABLE_OptionArgs_0_39;
                  tscc_proc_2_input_10_STATE_VARIABLE_OptionTable_0_41 = next_value_of_tscc_proc_2_input_10_STATE_VARIABLE_OptionTable_0_41;
                  tscc_proc_2_input_11_STATE_VARIABLE_OptionsSet_0_43 = next_value_of_tscc_proc_2_input_11_STATE_VARIABLE_OptionsSet_0_43;
                  tscc_proc_2_input_12_STATE_VARIABLE_UserData_0_45 = next_value_of_tscc_proc_2_input_12_STATE_VARIABLE_UserData_0_45;
                  goto top_of_proc_2;
                }
                else
                {
                  MR_Word Error_119;

                  {
                    Error_119 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Error_119, 0) = Flag_122;
                    MR_hl_field(MR_mktag(1), Error_119, 1) = ((MR_Box) (Arg0_27));
                    MR_hl_field(MR_mktag(1), Error_119, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), HeadVar__6_6, 0) = ((MR_Box) (Error_119));
                  }
                  HeadVar__3_3 = Args0_28;
                  STATE_VARIABLE_UserData_12 = STATE_VARIABLE_UserData_0_11;
                  STATE_VARIABLE_OptionsSet_10 = STATE_VARIABLE_OptionsSet_0_9;
                  STATE_VARIABLE_OptionTable_8 = STATE_VARIABLE_OptionTable_0_7;
                  STATE_VARIABLE_OptionArgs_5 = STATE_VARIABLE_OptionArgs_0_4;
                }
              }
              else
              {
                MR_Word Error_121;

                {
                  Error_121 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Error_121, 0) = ((MR_Box) (OptionName_48));
                }
                {
                  HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), HeadVar__6_6, 0) = ((MR_Box) (Error_121));
                }
                HeadVar__3_3 = Args0_28;
                STATE_VARIABLE_UserData_12 = STATE_VARIABLE_UserData_0_11;
                STATE_VARIABLE_OptionsSet_10 = STATE_VARIABLE_OptionsSet_0_9;
                STATE_VARIABLE_OptionTable_8 = STATE_VARIABLE_OptionTable_0_7;
                STATE_VARIABLE_OptionArgs_5 = STATE_VARIABLE_OptionArgs_0_4;
              }
            }
            else
            {
              MR_String ShortOptions_50;

              succeeded = mercury__string__first_char_3_p_2(Arg0_27, (MR_Char) 45, &ShortOptions_50);
              if (succeeded)
              {
                succeeded = (strcmp(ShortOptions_50, (MR_String) "") == 0);
                succeeded = !(succeeded);
              }
              if (succeeded)
              {
                MR_Word ShortOptionsList_51;
                MR_Char SingleShortOpt_52;
                MR_Word Var_89;
                MR_Char Var_90;
                MR_Word Var_91;

                mercury__string__to_char_list_2_p_0(ShortOptions_50, &ShortOptionsList_51);
                succeeded = (ShortOptionsList_51 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  SingleShortOpt_52 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), ShortOptionsList_51, (MR_Integer) 0)));
                  Var_89 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortOptionsList_51, (MR_Integer) 1))));
                  succeeded = (Var_89 != (MR_Word) ((MR_Unsigned) 0U));
                  if (succeeded)
                  {
                    Var_90 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Var_89, (MR_Integer) 0)));
                    Var_91 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_89, (MR_Integer) 1))));
                    succeeded = (Var_90 == (MR_Char) 45);
                    if (succeeded)
                      succeeded = (Var_91 == (MR_Word) ((MR_Unsigned) 0U));
                  }
                }
                if (succeeded)
                {
                  MR_Word ShortOptionPred_53 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OptionOps_1, (MR_Integer) 0))));
                  MR_Box Flag_132;
                  MR_bool MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), ShortOptionPred_53, (MR_Integer) 1))));

                  succeeded = func_3(((MR_Box) (ShortOptionPred_53)), ((MR_Box) (MR_Word) (SingleShortOpt_52)), &Flag_132);
                  if (succeeded)
                  {
                    MR_Word Var_92;
                    MR_Word Var_94;
                    MR_Word STATE_VARIABLE_OptionsSet_96_96;
                    MR_Box STATE_VARIABLE_UserData_97_97;
                    MR_String OptName_128;
                    MR_Word NegMaybeError_129;
                    MR_Word NewOptionTable_130;

                    {
                      Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (MR_Word) (SingleShortOpt_52));
                      MR_hl_field(MR_mktag(1), Var_94, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                    }
                    {
                      Var_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_92, 0) = ((MR_Box) (MR_Word) ((MR_Char) 45));
                      MR_hl_field(MR_mktag(1), Var_92, 1) = ((MR_Box) (Var_94));
                    }
                    mercury__string__from_char_list_2_p_0(Var_92, &OptName_128);
                    mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_110_101_103_97_116_101_100_95_111_112_116_105_111_110_95_95_91_50_93_95_48_10_p_0(TypeInfo_for_OptionType_171, OptionOps_1, OptName_128, Flag_132, &NegMaybeError_129, STATE_VARIABLE_OptionTable_0_7, &NewOptionTable_130, STATE_VARIABLE_OptionsSet_0_9, &STATE_VARIABLE_OptionsSet_96_96, STATE_VARIABLE_UserData_0_11, &STATE_VARIABLE_UserData_97_97);
                    if ((NegMaybeError_129 == (MR_Word) ((MR_Unsigned) 0U)))
                    {
                      MR_Word STATE_VARIABLE_OptionArgs_99_99;
                      MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_OptionType_171;
                      MR_Word next_value_of_tscc_proc_1_input_2_TypeInfo_for_UserDataType_172;
                      MR_Word next_value_of_tscc_proc_1_input_3_OptionOps_1;
                      MR_Word next_value_of_tscc_proc_1_input_4_HeadVar__2_2;
                      MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_OptionArgs_0_4;
                      MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_OptionTable_0_7;
                      MR_Word next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_OptionsSet_0_9;
                      MR_Box next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_UserData_0_11;

                      {
                        STATE_VARIABLE_OptionArgs_99_99 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_OptionArgs_99_99, 0) = ((MR_Box) (Arg0_27));
                        MR_hl_field(MR_mktag(1), STATE_VARIABLE_OptionArgs_99_99, 1) = ((MR_Box) (STATE_VARIABLE_OptionArgs_0_4));
                      }
                      // direct tailcall eliminated
                      ;
                      next_value_of_tscc_proc_1_input_1_TypeInfo_for_OptionType_171 = TypeInfo_for_OptionType_171;
                      next_value_of_tscc_proc_1_input_2_TypeInfo_for_UserDataType_172 = TypeInfo_for_UserDataType_172;
                      next_value_of_tscc_proc_1_input_3_OptionOps_1 = OptionOps_1;
                      next_value_of_tscc_proc_1_input_4_HeadVar__2_2 = Args0_28;
                      next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_OptionArgs_0_4 = STATE_VARIABLE_OptionArgs_99_99;
                      next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_OptionTable_0_7 = NewOptionTable_130;
                      next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_OptionsSet_0_9 = STATE_VARIABLE_OptionsSet_96_96;
                      next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_UserData_0_11 = STATE_VARIABLE_UserData_97_97;
                      tscc_proc_1_input_1_TypeInfo_for_OptionType_171 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_OptionType_171;
                      tscc_proc_1_input_2_TypeInfo_for_UserDataType_172 = next_value_of_tscc_proc_1_input_2_TypeInfo_for_UserDataType_172;
                      tscc_proc_1_input_3_OptionOps_1 = next_value_of_tscc_proc_1_input_3_OptionOps_1;
                      tscc_proc_1_input_4_HeadVar__2_2 = next_value_of_tscc_proc_1_input_4_HeadVar__2_2;
                      tscc_proc_1_input_5_STATE_VARIABLE_OptionArgs_0_4 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_OptionArgs_0_4;
                      tscc_proc_1_input_6_STATE_VARIABLE_OptionTable_0_7 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_OptionTable_0_7;
                      tscc_proc_1_input_7_STATE_VARIABLE_OptionsSet_0_9 = next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_OptionsSet_0_9;
                      tscc_proc_1_input_8_STATE_VARIABLE_UserData_0_11 = next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_UserData_0_11;
                      goto top_of_proc_1;
                    }
                    else
                    {
                      HeadVar__6_6 = NegMaybeError_129;
                      HeadVar__3_3 = Args0_28;
                      STATE_VARIABLE_OptionArgs_5 = STATE_VARIABLE_OptionArgs_0_4;
                      STATE_VARIABLE_OptionTable_8 = STATE_VARIABLE_OptionTable_0_7;
                      STATE_VARIABLE_OptionsSet_10 = STATE_VARIABLE_OptionsSet_96_96;
                      STATE_VARIABLE_UserData_12 = STATE_VARIABLE_UserData_97_97;
                    }
                  }
                  else
                  {
                    MR_String Var_104;
                    MR_Word Error_131;

                    Var_104 = mercury__string__f_43_43_2_f_0((MR_String) "-", ShortOptions_50);
                    {
                      Error_131 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Error_131, 0) = ((MR_Box) (Var_104));
                    }
                    {
                      HeadVar__6_6 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), HeadVar__6_6, 0) = ((MR_Box) (Error_131));
                    }
                    HeadVar__3_3 = Args0_28;
                    STATE_VARIABLE_UserData_12 = STATE_VARIABLE_UserData_0_11;
                    STATE_VARIABLE_OptionsSet_10 = STATE_VARIABLE_OptionsSet_0_9;
                    STATE_VARIABLE_OptionTable_8 = STATE_VARIABLE_OptionTable_0_7;
                    STATE_VARIABLE_OptionArgs_5 = STATE_VARIABLE_OptionArgs_0_4;
                  }
                }
                else
                {
                  MR_Word Args1_55;
                  MR_Word ShortMaybeError_56;
                  MR_Word STATE_VARIABLE_OptionArgs_106_106;
                  MR_Word STATE_VARIABLE_OptionArgs_107_107;
                  MR_Word STATE_VARIABLE_OptionsSet_108_108;
                  MR_Box STATE_VARIABLE_UserData_109_109;
                  MR_Word NewOptionTable_142;

                  {
                    STATE_VARIABLE_OptionArgs_106_106 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_OptionArgs_106_106, 0) = ((MR_Box) (Arg0_27));
                    MR_hl_field(MR_mktag(1), STATE_VARIABLE_OptionArgs_106_106, 1) = ((MR_Box) (STATE_VARIABLE_OptionArgs_0_4));
                  }
                  mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_115_104_111_114_116_95_111_112_116_105_111_110_115_95_95_91_50_93_95_48_13_p_0(TypeInfo_for_OptionType_171, OptionOps_1, ShortOptionsList_51, Args0_28, &Args1_55, STATE_VARIABLE_OptionArgs_106_106, &STATE_VARIABLE_OptionArgs_107_107, &ShortMaybeError_56, STATE_VARIABLE_OptionTable_0_7, &NewOptionTable_142, STATE_VARIABLE_OptionsSet_0_9, &STATE_VARIABLE_OptionsSet_108_108, STATE_VARIABLE_UserData_0_11, &STATE_VARIABLE_UserData_109_109);
                  if ((ShortMaybeError_56 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_OptionType_171 = TypeInfo_for_OptionType_171;
                    MR_Word next_value_of_tscc_proc_1_input_2_TypeInfo_for_UserDataType_172 = TypeInfo_for_UserDataType_172;
                    MR_Word next_value_of_tscc_proc_1_input_3_OptionOps_1 = OptionOps_1;
                    MR_Word next_value_of_tscc_proc_1_input_4_HeadVar__2_2 = Args1_55;
                    MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_OptionArgs_0_4 = STATE_VARIABLE_OptionArgs_107_107;
                    MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_OptionTable_0_7 = NewOptionTable_142;
                    MR_Word next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_OptionsSet_0_9 = STATE_VARIABLE_OptionsSet_108_108;
                    MR_Box next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_UserData_0_11 = STATE_VARIABLE_UserData_109_109;

                    // direct tailcall eliminated
                    ;
                    tscc_proc_1_input_1_TypeInfo_for_OptionType_171 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_OptionType_171;
                    tscc_proc_1_input_2_TypeInfo_for_UserDataType_172 = next_value_of_tscc_proc_1_input_2_TypeInfo_for_UserDataType_172;
                    tscc_proc_1_input_3_OptionOps_1 = next_value_of_tscc_proc_1_input_3_OptionOps_1;
                    tscc_proc_1_input_4_HeadVar__2_2 = next_value_of_tscc_proc_1_input_4_HeadVar__2_2;
                    tscc_proc_1_input_5_STATE_VARIABLE_OptionArgs_0_4 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_OptionArgs_0_4;
                    tscc_proc_1_input_6_STATE_VARIABLE_OptionTable_0_7 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_OptionTable_0_7;
                    tscc_proc_1_input_7_STATE_VARIABLE_OptionsSet_0_9 = next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_OptionsSet_0_9;
                    tscc_proc_1_input_8_STATE_VARIABLE_UserData_0_11 = next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_UserData_0_11;
                    goto top_of_proc_1;
                  }
                  else
                  {
                    HeadVar__6_6 = ShortMaybeError_56;
                    HeadVar__3_3 = Args0_28;
                    STATE_VARIABLE_OptionArgs_5 = STATE_VARIABLE_OptionArgs_107_107;
                    STATE_VARIABLE_OptionTable_8 = STATE_VARIABLE_OptionTable_0_7;
                    STATE_VARIABLE_OptionsSet_10 = STATE_VARIABLE_OptionsSet_108_108;
                    STATE_VARIABLE_UserData_12 = STATE_VARIABLE_UserData_109_109;
                  }
                }
              }
              else
              {
                MR_Word NonOptionArgsTail_58;

                mercury__getopt__process_arguments_12_p_0(TypeInfo_for_OptionType_171, TypeInfo_for_UserDataType_172, OptionOps_1, Args0_28, &NonOptionArgsTail_58, STATE_VARIABLE_OptionArgs_0_4, &STATE_VARIABLE_OptionArgs_5, &HeadVar__6_6, STATE_VARIABLE_OptionTable_0_7, &STATE_VARIABLE_OptionTable_8, STATE_VARIABLE_OptionsSet_0_9, &STATE_VARIABLE_OptionsSet_10, STATE_VARIABLE_UserData_0_11, &STATE_VARIABLE_UserData_12);
                {
                  HeadVar__3_3 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), HeadVar__3_3, 0) = ((MR_Box) (Arg0_27));
                  MR_hl_field(MR_mktag(1), HeadVar__3_3, 1) = ((MR_Box) (NonOptionArgsTail_58));
                }
              }
            }
          }
        }
      }
      tscc_output_1_HeadVar__3_3 = HeadVar__3_3;
      tscc_output_2_STATE_VARIABLE_OptionArgs_5 = STATE_VARIABLE_OptionArgs_5;
      tscc_output_3_HeadVar__6_6 = HeadVar__6_6;
      tscc_output_4_STATE_VARIABLE_OptionTable_8 = STATE_VARIABLE_OptionTable_8;
      tscc_output_5_STATE_VARIABLE_OptionsSet_10 = STATE_VARIABLE_OptionsSet_10;
      tscc_output_6_STATE_VARIABLE_UserData_12 = STATE_VARIABLE_UserData_12;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word TypeInfo_for_OptionType_62 = tscc_proc_2_input_1_TypeInfo_for_OptionType_62;
      MR_Word TypeInfo_for_UserDataType_63 = tscc_proc_2_input_2_TypeInfo_for_UserDataType_63;
      MR_Word OptionOps_17 = tscc_proc_2_input_3_OptionOps_17;
      MR_String Option_18 = tscc_proc_2_input_4_Option_18;
      MR_Box Flag_19 = tscc_proc_2_input_5_Flag_19;
      MR_Word OptionData_20 = tscc_proc_2_input_6_OptionData_20;
      MR_Word MaybeOptionArg0_21 = tscc_proc_2_input_7_MaybeOptionArg0_21;
      MR_Word Args0_22 = tscc_proc_2_input_8_Args0_22;
      MR_Word Args_23;
      MR_Word STATE_VARIABLE_OptionArgs_0_39 = tscc_proc_2_input_9_STATE_VARIABLE_OptionArgs_0_39;
      MR_Word STATE_VARIABLE_OptionArgs_40;
      MR_Word MaybeError_25;
      MR_Word STATE_VARIABLE_OptionTable_0_41 = tscc_proc_2_input_10_STATE_VARIABLE_OptionTable_0_41;
      MR_Word STATE_VARIABLE_OptionTable_42;
      MR_Word STATE_VARIABLE_OptionsSet_0_43 = tscc_proc_2_input_11_STATE_VARIABLE_OptionsSet_0_43;
      MR_Word STATE_VARIABLE_OptionsSet_44;
      MR_Box STATE_VARIABLE_UserData_0_45 = tscc_proc_2_input_12_STATE_VARIABLE_UserData_0_45;
      MR_Box STATE_VARIABLE_UserData_46;
      MR_bool succeeded;
      MR_Word MaybeOptionArg_31;
      MR_Word Args1_32;
      MR_Word MissingArg_33;
      MR_Word STATE_VARIABLE_OptionArgs_48_48;
      MR_Word Var_64;

      switch (MR_tag((MR_Word) OptionData_20)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(OptionData_20)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Var_64 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              Var_64 = (MR_Integer) 0;
              break;
            case (MR_Integer) 2:
              Var_64 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              Var_64 = (MR_Integer) 1;
              break;
            case (MR_Integer) 4:
              Var_64 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          Var_64 = (MR_Integer) 0;
          break;
        case (MR_Integer) 2:
          Var_64 = (MR_Integer) 1;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), OptionData_20, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Var_64 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              Var_64 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              Var_64 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              Var_64 = (MR_Integer) 1;
              break;
          }
          break;
      }
      succeeded = ((MR_Integer) 1 == Var_64);
      if (succeeded)
        succeeded = (MaybeOptionArg0_21 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        if ((Args0_22 == (MR_Word) ((MR_Unsigned) 0U)))
        {
          MaybeOptionArg_31 = (MR_Word) ((MR_Unsigned) 0U);
          Args1_32 = Args0_22;
          MissingArg_33 = (MR_Integer) 1;
          STATE_VARIABLE_OptionArgs_48_48 = STATE_VARIABLE_OptionArgs_0_39;
        }
        else
        {
          MR_String Arg_29 = ((MR_String) ((MR_hl_field(MR_mktag(1), Args0_22, (MR_Integer) 0))));

          Args1_32 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args0_22, (MR_Integer) 1))));
          {
            MaybeOptionArg_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeOptionArg_31, 0) = ((MR_Box) (Arg_29));
          }
          MissingArg_33 = (MR_Integer) 0;
          {
            STATE_VARIABLE_OptionArgs_48_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_OptionArgs_48_48, 0) = ((MR_Box) (Arg_29));
            MR_hl_field(MR_mktag(1), STATE_VARIABLE_OptionArgs_48_48, 1) = ((MR_Box) (STATE_VARIABLE_OptionArgs_0_39));
          }
        }
      else
      {
        MaybeOptionArg_31 = MaybeOptionArg0_21;
        Args1_32 = Args0_22;
        MissingArg_33 = (MR_Integer) 0;
        STATE_VARIABLE_OptionArgs_48_48 = STATE_VARIABLE_OptionArgs_0_39;
      }
      switch (MissingArg_33) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String ArgVal_35;
            MR_Word Var_65;

            switch (MR_tag((MR_Word) OptionData_20)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(OptionData_20)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    Var_65 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    Var_65 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 2:
                    Var_65 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    Var_65 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    Var_65 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                Var_65 = (MR_Integer) 0;
                break;
              case (MR_Integer) 2:
                Var_65 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), OptionData_20, (MR_Integer) 0))))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    Var_65 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    Var_65 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    Var_65 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    Var_65 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            succeeded = ((MR_Integer) 0 == Var_65);
            if (succeeded)
            {
              succeeded = (MaybeOptionArg_31 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
                ArgVal_35 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeOptionArg_31, (MR_Integer) 0))));
            }
            if (succeeded)
            {
              MR_Word Var_50;
              MR_Word Error_59;

              Args_23 = Args0_22;
              {
                Var_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_50, 0) = ((MR_Box) (ArgVal_35));
              }
              {
                Error_59 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Error_59, 0) = Flag_19;
                MR_hl_field(MR_mktag(1), Error_59, 1) = ((MR_Box) (Option_18));
                MR_hl_field(MR_mktag(1), Error_59, 2) = ((MR_Box) (Var_50));
              }
              {
                MaybeError_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), MaybeError_25, 0) = ((MR_Box) (Error_59));
              }
              STATE_VARIABLE_UserData_46 = STATE_VARIABLE_UserData_0_45;
              STATE_VARIABLE_OptionsSet_44 = STATE_VARIABLE_OptionsSet_0_43;
              STATE_VARIABLE_OptionTable_42 = STATE_VARIABLE_OptionTable_0_41;
              STATE_VARIABLE_OptionArgs_40 = STATE_VARIABLE_OptionArgs_48_48;
            }
            else
            {
              MR_Word OptionMaybeError_36;
              MR_Word NewOptionTable_37;
              MR_Word STATE_VARIABLE_OptionsSet_51_51;
              MR_Box STATE_VARIABLE_UserData_52_52;

              mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_111_112_116_105_111_110_95_95_91_50_93_95_48_12_p_0(TypeInfo_for_OptionType_62, OptionOps_17, OptionData_20, Option_18, Flag_19, MaybeOptionArg_31, &OptionMaybeError_36, STATE_VARIABLE_OptionTable_0_41, &NewOptionTable_37, STATE_VARIABLE_OptionsSet_0_43, &STATE_VARIABLE_OptionsSet_51_51, STATE_VARIABLE_UserData_0_45, &STATE_VARIABLE_UserData_52_52);
              if ((OptionMaybeError_36 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_OptionType_171 = TypeInfo_for_OptionType_62;
                MR_Word next_value_of_tscc_proc_1_input_2_TypeInfo_for_UserDataType_172 = TypeInfo_for_UserDataType_63;
                MR_Word next_value_of_tscc_proc_1_input_3_OptionOps_1 = OptionOps_17;
                MR_Word next_value_of_tscc_proc_1_input_4_HeadVar__2_2 = Args1_32;
                MR_Word next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_OptionArgs_0_4 = STATE_VARIABLE_OptionArgs_48_48;
                MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_OptionTable_0_7 = NewOptionTable_37;
                MR_Word next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_OptionsSet_0_9 = STATE_VARIABLE_OptionsSet_51_51;
                MR_Box next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_UserData_0_11 = STATE_VARIABLE_UserData_52_52;

                // direct tailcall eliminated
                ;
                tscc_proc_1_input_1_TypeInfo_for_OptionType_171 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_OptionType_171;
                tscc_proc_1_input_2_TypeInfo_for_UserDataType_172 = next_value_of_tscc_proc_1_input_2_TypeInfo_for_UserDataType_172;
                tscc_proc_1_input_3_OptionOps_1 = next_value_of_tscc_proc_1_input_3_OptionOps_1;
                tscc_proc_1_input_4_HeadVar__2_2 = next_value_of_tscc_proc_1_input_4_HeadVar__2_2;
                tscc_proc_1_input_5_STATE_VARIABLE_OptionArgs_0_4 = next_value_of_tscc_proc_1_input_5_STATE_VARIABLE_OptionArgs_0_4;
                tscc_proc_1_input_6_STATE_VARIABLE_OptionTable_0_7 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_OptionTable_0_7;
                tscc_proc_1_input_7_STATE_VARIABLE_OptionsSet_0_9 = next_value_of_tscc_proc_1_input_7_STATE_VARIABLE_OptionsSet_0_9;
                tscc_proc_1_input_8_STATE_VARIABLE_UserData_0_11 = next_value_of_tscc_proc_1_input_8_STATE_VARIABLE_UserData_0_11;
                goto top_of_proc_1;
              }
              else
              {
                Args_23 = Args1_32;
                MaybeError_25 = OptionMaybeError_36;
                STATE_VARIABLE_OptionArgs_40 = STATE_VARIABLE_OptionArgs_48_48;
                STATE_VARIABLE_OptionTable_42 = STATE_VARIABLE_OptionTable_0_41;
                STATE_VARIABLE_OptionsSet_44 = STATE_VARIABLE_OptionsSet_51_51;
                STATE_VARIABLE_UserData_46 = STATE_VARIABLE_UserData_52_52;
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Error_34;

            Args_23 = Args0_22;
            {
              Error_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Error_34, 0) = Flag_19;
              MR_hl_field(MR_mktag(1), Error_34, 1) = ((MR_Box) (Option_18));
              MR_hl_field(MR_mktag(1), Error_34, 2) = ((MR_Box) ((MR_Unsigned) 4U));
            }
            {
              MaybeError_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeError_25, 0) = ((MR_Box) (Error_34));
            }
            STATE_VARIABLE_OptionArgs_40 = STATE_VARIABLE_OptionArgs_48_48;
            STATE_VARIABLE_OptionTable_42 = STATE_VARIABLE_OptionTable_0_41;
            STATE_VARIABLE_OptionsSet_44 = STATE_VARIABLE_OptionsSet_0_43;
            STATE_VARIABLE_UserData_46 = STATE_VARIABLE_UserData_0_45;
          }
          break;
      }
      tscc_output_1_HeadVar__3_3 = Args_23;
      tscc_output_2_STATE_VARIABLE_OptionArgs_5 = STATE_VARIABLE_OptionArgs_40;
      tscc_output_3_HeadVar__6_6 = MaybeError_25;
      tscc_output_4_STATE_VARIABLE_OptionTable_8 = STATE_VARIABLE_OptionTable_42;
      tscc_output_5_STATE_VARIABLE_OptionsSet_10 = STATE_VARIABLE_OptionsSet_44;
      tscc_output_6_STATE_VARIABLE_UserData_12 = STATE_VARIABLE_UserData_46;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_HeadVar__3_3 = tscc_output_1_HeadVar__3_3;
    *tscc_output_ptr_2_STATE_VARIABLE_OptionArgs_5 = tscc_output_2_STATE_VARIABLE_OptionArgs_5;
    *tscc_output_ptr_3_HeadVar__6_6 = tscc_output_3_HeadVar__6_6;
    *tscc_output_ptr_4_STATE_VARIABLE_OptionTable_8 = tscc_output_4_STATE_VARIABLE_OptionTable_8;
    *tscc_output_ptr_5_STATE_VARIABLE_OptionsSet_10 = tscc_output_5_STATE_VARIABLE_OptionsSet_10;
    *tscc_output_ptr_6_STATE_VARIABLE_UserData_12 = tscc_output_6_STATE_VARIABLE_UserData_12;
    return;
  }
}

static void MR_CALL 
mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_110_101_103_97_116_101_100_95_111_112_116_105_111_110_95_95_91_50_93_95_48_10_p_0(
  MR_Word TypeInfo_for_OptionType_63,
  MR_Word OptionOps_11,
  MR_String Option_12,
  MR_Box Flag_13,
  MR_Word * MaybeError_14,
  MR_Word STATE_VARIABLE_OptionTable_0_26,
  MR_Word * STATE_VARIABLE_OptionTable_27,
  MR_Word STATE_VARIABLE_OptionsSet_0_28,
  MR_Word * STATE_VARIABLE_OptionsSet_29,
  MR_Box STATE_VARIABLE_UserData_0_30,
  MR_Box * STATE_VARIABLE_UserData_31)
{
  {
    MR_bool succeeded;
    MR_Word OptionData_18;
    MR_Box conv0_OptionData_18;

    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_OptionType_63, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), STATE_VARIABLE_OptionTable_0_26, Flag_13, &conv0_OptionData_18);
    if (succeeded)
    {
      OptionData_18 = ((MR_Word) (conv0_OptionData_18));
      succeeded = MR_TRUE;
    }
    if (succeeded)
      switch (MR_tag((MR_Word) OptionData_18)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(OptionData_18)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 2:
            case (MR_Integer) 3:
              {
                MR_Word Error_25;

                {
                  Error_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Error_25, 0) = Flag_13;
                  MR_hl_field(MR_mktag(1), Error_25, 1) = ((MR_Box) (Option_12));
                  MR_hl_field(MR_mktag(1), Error_25, 2) = ((MR_Box) ((MR_Unsigned) 8U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeError_14 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_25));
                }
                *STATE_VARIABLE_OptionTable_27 = STATE_VARIABLE_OptionTable_0_26;
                *STATE_VARIABLE_OptionsSet_29 = STATE_VARIABLE_OptionsSet_0_28;
                *STATE_VARIABLE_UserData_31 = STATE_VARIABLE_UserData_0_30;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word STATE_VARIABLE_OptionsSet_39_39;

                mercury__set__insert_3_p_0(TypeInfo_for_OptionType_63, Flag_13, STATE_VARIABLE_OptionsSet_0_28, &STATE_VARIABLE_OptionsSet_39_39);
                mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_115_112_101_99_105_97_108_95_111_112_116_105_111_110_95_95_91_50_93_95_48_11_p_0(TypeInfo_for_OptionType_63, OptionOps_11, Option_12, Flag_13, (MR_Word) (MR_mkword(MR_mktag(1), &mercury__getopt_scalar_common_8[1])), MaybeError_14, STATE_VARIABLE_OptionTable_0_26, STATE_VARIABLE_OptionTable_27, STATE_VARIABLE_OptionsSet_39_39, STATE_VARIABLE_OptionsSet_29, STATE_VARIABLE_UserData_0_30, STATE_VARIABLE_UserData_31);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word STATE_VARIABLE_OptionsSet_33_33;

                mercury__set__insert_3_p_0(TypeInfo_for_OptionType_63, Flag_13, STATE_VARIABLE_OptionsSet_0_28, &STATE_VARIABLE_OptionsSet_33_33);
                mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_115_112_101_99_105_97_108_95_111_112_116_105_111_110_95_95_91_50_93_95_48_11_p_0(TypeInfo_for_OptionType_63, OptionOps_11, Option_12, Flag_13, (MR_Word) (MR_mkword(MR_mktag(3), &mercury__getopt_scalar_common_1[6])), MaybeError_14, STATE_VARIABLE_OptionTable_0_26, STATE_VARIABLE_OptionTable_27, STATE_VARIABLE_OptionsSet_33_33, STATE_VARIABLE_OptionsSet_29, STATE_VARIABLE_UserData_0_30, STATE_VARIABLE_UserData_31);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word V_5_87 = (MR_Word) (STATE_VARIABLE_OptionsSet_0_28);
            MR_Word V_6_88;

            mercury__set_ordlist__insert_loop_3_p_0(TypeInfo_for_OptionType_63, V_5_87, Flag_13, &V_6_88);
            *STATE_VARIABLE_OptionsSet_29 = (MR_Word) (V_6_88);
            mercury__tree234__set_4_p_0(TypeInfo_for_OptionType_63, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), Flag_13, ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__getopt_scalar_common_8[1]))), STATE_VARIABLE_OptionTable_0_26, STATE_VARIABLE_OptionTable_27);
            *MaybeError_14 = (MR_Word) ((MR_Unsigned) 0U);
            *STATE_VARIABLE_UserData_31 = STATE_VARIABLE_UserData_0_30;
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Error_25;

            {
              Error_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Error_25, 0) = Flag_13;
              MR_hl_field(MR_mktag(1), Error_25, 1) = ((MR_Box) (Option_12));
              MR_hl_field(MR_mktag(1), Error_25, 2) = ((MR_Box) ((MR_Unsigned) 8U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeError_14 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_25));
            }
            *STATE_VARIABLE_OptionTable_27 = STATE_VARIABLE_OptionTable_0_26;
            *STATE_VARIABLE_OptionsSet_29 = STATE_VARIABLE_OptionsSet_0_28;
            *STATE_VARIABLE_UserData_31 = STATE_VARIABLE_UserData_0_30;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), OptionData_18, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Error_25;

                {
                  Error_25 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Error_25, 0) = Flag_13;
                  MR_hl_field(MR_mktag(1), Error_25, 1) = ((MR_Box) (Option_12));
                  MR_hl_field(MR_mktag(1), Error_25, 2) = ((MR_Box) ((MR_Unsigned) 8U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *MaybeError_14 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_25));
                }
                *STATE_VARIABLE_OptionTable_27 = STATE_VARIABLE_OptionTable_0_26;
                *STATE_VARIABLE_OptionsSet_29 = STATE_VARIABLE_OptionsSet_0_28;
                *STATE_VARIABLE_UserData_31 = STATE_VARIABLE_UserData_0_30;
              }
              break;
            case (MR_Integer) 1:
              {
                mercury__set__insert_3_p_0(TypeInfo_for_OptionType_63, Flag_13, STATE_VARIABLE_OptionsSet_0_28, STATE_VARIABLE_OptionsSet_29);
                mercury__map__set_4_p_0(TypeInfo_for_OptionType_63, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), Flag_13, ((MR_Box) (MR_mkword(MR_mktag(3), &mercury__getopt_scalar_common_1[4]))), STATE_VARIABLE_OptionTable_0_26, STATE_VARIABLE_OptionTable_27);
                *MaybeError_14 = (MR_Word) ((MR_Unsigned) 0U);
                *STATE_VARIABLE_UserData_31 = STATE_VARIABLE_UserData_0_30;
              }
              break;
            case (MR_Integer) 2:
              {
                mercury__set__insert_3_p_0(TypeInfo_for_OptionType_63, Flag_13, STATE_VARIABLE_OptionsSet_0_28, STATE_VARIABLE_OptionsSet_29);
                mercury__map__set_4_p_0(TypeInfo_for_OptionType_63, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), Flag_13, ((MR_Box) (MR_mkword(MR_mktag(3), &mercury__getopt_scalar_common_1[5]))), STATE_VARIABLE_OptionTable_0_26, STATE_VARIABLE_OptionTable_27);
                *MaybeError_14 = (MR_Word) ((MR_Unsigned) 0U);
                *STATE_VARIABLE_UserData_31 = STATE_VARIABLE_UserData_0_30;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word V_5_77 = (MR_Word) (STATE_VARIABLE_OptionsSet_0_28);
                MR_Word V_6_78;

                mercury__set_ordlist__insert_loop_3_p_0(TypeInfo_for_OptionType_63, V_5_77, Flag_13, &V_6_78);
                *STATE_VARIABLE_OptionsSet_29 = (MR_Word) (V_6_78);
                mercury__tree234__set_4_p_0(TypeInfo_for_OptionType_63, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), Flag_13, ((MR_Box) (MR_mkword(MR_mktag(3), &mercury__getopt_scalar_common_1[3]))), STATE_VARIABLE_OptionTable_0_26, STATE_VARIABLE_OptionTable_27);
                *MaybeError_14 = (MR_Word) ((MR_Unsigned) 0U);
                *STATE_VARIABLE_UserData_31 = STATE_VARIABLE_UserData_0_30;
              }
              break;
          }
          break;
      }
    else
    {
      MR_Word Error_62;

      {
        Error_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Error_62, 0) = Flag_13;
        MR_hl_field(MR_mktag(1), Error_62, 1) = ((MR_Box) (Option_12));
        MR_hl_field(MR_mktag(1), Error_62, 2) = ((MR_Box) ((MR_Unsigned) 0U));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *MaybeError_14 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_62));
      }
      *STATE_VARIABLE_UserData_31 = STATE_VARIABLE_UserData_0_30;
      *STATE_VARIABLE_OptionsSet_29 = STATE_VARIABLE_OptionsSet_0_28;
      *STATE_VARIABLE_OptionTable_27 = STATE_VARIABLE_OptionTable_0_26;
    }
  }
}

static void MR_CALL 
mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_104_97_110_100_108_101_95_115_104_111_114_116_95_111_112_116_105_111_110_115_95_95_91_50_93_95_48_13_p_0(
  MR_Word TypeInfo_for_OptionType_81,
  MR_Word OptionOps_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3,
  MR_Word * Args_4,
  MR_Word STATE_VARIABLE_OptionArgs_0_5,
  MR_Word * STATE_VARIABLE_OptionArgs_6,
  MR_Word * HeadVar__7_7,
  MR_Word STATE_VARIABLE_OptionTable_0_8,
  MR_Word * STATE_VARIABLE_OptionTable_9,
  MR_Word STATE_VARIABLE_OptionsSet_0_10,
  MR_Word * STATE_VARIABLE_OptionsSet_11,
  MR_Box STATE_VARIABLE_UserData_0_12,
  MR_Box * STATE_VARIABLE_UserData_13)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *Args_4 = HeadVar__3_3;
      *HeadVar__7_7 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_UserData_13 = STATE_VARIABLE_UserData_0_12;
      *STATE_VARIABLE_OptionsSet_11 = STATE_VARIABLE_OptionsSet_0_10;
      *STATE_VARIABLE_OptionTable_9 = STATE_VARIABLE_OptionTable_0_8;
      *STATE_VARIABLE_OptionArgs_6 = STATE_VARIABLE_OptionArgs_0_5;
    }
    else
    {
      MR_Char Opt_29 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Opts0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ShortOptionPred_38 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OptionOps_1, (MR_Integer) 0))));
      MR_Box Flag_39;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), ShortOptionPred_38, (MR_Integer) 1))));

      succeeded = func_0(((MR_Box) (ShortOptionPred_38)), ((MR_Box) (MR_Word) (Opt_29)), &Flag_39);
      if (succeeded)
      {
        MR_Word OptionData_40;
        MR_Box conv1_OptionData_40;

        succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_OptionType_81, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), STATE_VARIABLE_OptionTable_0_8, Flag_39, &conv1_OptionData_40);
        if (succeeded)
        {
          OptionData_40 = ((MR_Word) (conv1_OptionData_40));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word Args1_42;
          MR_Word MaybeOptionArg_43;
          MR_Word Opts1_44;
          MR_String Option_45;
          MR_Word OptionMaybeError_46;
          MR_Word NewOptionTable_47;
          MR_Word STATE_VARIABLE_OptionArgs_60_60;
          MR_Word Var_61;
          MR_Word Var_63;
          MR_Word STATE_VARIABLE_OptionsSet_65_65;
          MR_Box STATE_VARIABLE_UserData_66_66;
          MR_Word Var_84;

          switch (MR_tag((MR_Word) OptionData_40)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(OptionData_40)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  Var_84 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 1:
                  Var_84 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 2:
                  Var_84 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  Var_84 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 4:
                  Var_84 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              Var_84 = (MR_Integer) 0;
              break;
            case (MR_Integer) 2:
              Var_84 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), OptionData_40, (MR_Integer) 0))))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  Var_84 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  Var_84 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  Var_84 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  Var_84 = (MR_Integer) 1;
                  break;
              }
              break;
          }
          succeeded = ((MR_Integer) 1 == Var_84);
          if (succeeded)
          {
            MR_String Arg_41;

            mercury__getopt__get_short_option_arg_6_p_0(Opts0_30, &Arg_41, HeadVar__3_3, &Args1_42, STATE_VARIABLE_OptionArgs_0_5, &STATE_VARIABLE_OptionArgs_60_60);
            {
              MaybeOptionArg_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeOptionArg_43, 0) = ((MR_Box) (Arg_41));
            }
            Opts1_44 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MaybeOptionArg_43 = (MR_Word) ((MR_Unsigned) 0U);
            Opts1_44 = Opts0_30;
            Args1_42 = HeadVar__3_3;
            STATE_VARIABLE_OptionArgs_60_60 = STATE_VARIABLE_OptionArgs_0_5;
          }
          {
            Var_63 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_63, 0) = ((MR_Box) (MR_Word) (Opt_29));
            MR_hl_field(MR_mktag(1), Var_63, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (MR_Word) ((MR_Char) 45));
            MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (Var_63));
          }
          mercury__string__from_char_list_2_p_0(Var_61, &Option_45);
          mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_111_112_116_105_111_110_95_95_91_50_93_95_48_12_p_0(TypeInfo_for_OptionType_81, OptionOps_1, OptionData_40, Option_45, Flag_39, MaybeOptionArg_43, &OptionMaybeError_46, STATE_VARIABLE_OptionTable_0_8, &NewOptionTable_47, STATE_VARIABLE_OptionsSet_0_10, &STATE_VARIABLE_OptionsSet_65_65, STATE_VARIABLE_UserData_0_12, &STATE_VARIABLE_UserData_66_66);
          if ((OptionMaybeError_46 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word next_value_of_HeadVar__2_2 = Opts1_44;
            MR_Word next_value_of_HeadVar__3_3 = Args1_42;
            MR_Word next_value_of_STATE_VARIABLE_OptionArgs_0_5 = STATE_VARIABLE_OptionArgs_60_60;
            MR_Word next_value_of_STATE_VARIABLE_OptionTable_0_8 = NewOptionTable_47;
            MR_Word next_value_of_STATE_VARIABLE_OptionsSet_0_10 = STATE_VARIABLE_OptionsSet_65_65;
            MR_Box next_value_of_STATE_VARIABLE_UserData_0_12 = STATE_VARIABLE_UserData_66_66;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            HeadVar__3_3 = next_value_of_HeadVar__3_3;
            STATE_VARIABLE_OptionArgs_0_5 = next_value_of_STATE_VARIABLE_OptionArgs_0_5;
            STATE_VARIABLE_OptionTable_0_8 = next_value_of_STATE_VARIABLE_OptionTable_0_8;
            STATE_VARIABLE_OptionsSet_0_10 = next_value_of_STATE_VARIABLE_OptionsSet_0_10;
            STATE_VARIABLE_UserData_0_12 = next_value_of_STATE_VARIABLE_UserData_0_12;
            continue;
          }
          else
          {
            *Args_4 = Args1_42;
            *HeadVar__7_7 = OptionMaybeError_46;
            *STATE_VARIABLE_OptionArgs_6 = STATE_VARIABLE_OptionArgs_60_60;
            *STATE_VARIABLE_OptionTable_9 = STATE_VARIABLE_OptionTable_0_8;
            *STATE_VARIABLE_OptionsSet_11 = STATE_VARIABLE_OptionsSet_65_65;
            *STATE_VARIABLE_UserData_13 = STATE_VARIABLE_UserData_66_66;
          }
        }
        else
        {
          MR_String OptString_49;
          MR_Word Error_50;
          MR_String Var_72;

          mercury__string__char_to_string_2_p_0(Opt_29, &OptString_49);
          *Args_4 = HeadVar__3_3;
          Var_72 = mercury__string__f_43_43_2_f_0((MR_String) "-", OptString_49);
          {
            Error_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Error_50, 0) = Flag_39;
            MR_hl_field(MR_mktag(1), Error_50, 1) = ((MR_Box) (Var_72));
            MR_hl_field(MR_mktag(1), Error_50, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__7_7 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_50));
          }
          *STATE_VARIABLE_UserData_13 = STATE_VARIABLE_UserData_0_12;
          *STATE_VARIABLE_OptionsSet_11 = STATE_VARIABLE_OptionsSet_0_10;
          *STATE_VARIABLE_OptionTable_9 = STATE_VARIABLE_OptionTable_0_8;
          *STATE_VARIABLE_OptionArgs_6 = STATE_VARIABLE_OptionArgs_0_5;
        }
      }
      else
      {
        MR_String Var_75;
        MR_String OptString_77;
        MR_Word Error_78;

        *Args_4 = HeadVar__3_3;
        mercury__string__char_to_string_2_p_0(Opt_29, &OptString_77);
        Var_75 = mercury__string__f_43_43_2_f_0((MR_String) "-", OptString_77);
        {
          Error_78 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Error_78, 0) = ((MR_Box) (Var_75));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__7_7 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_78));
        }
        *STATE_VARIABLE_UserData_13 = STATE_VARIABLE_UserData_0_12;
        *STATE_VARIABLE_OptionsSet_11 = STATE_VARIABLE_OptionsSet_0_10;
        *STATE_VARIABLE_OptionTable_9 = STATE_VARIABLE_OptionTable_0_8;
        *STATE_VARIABLE_OptionArgs_6 = STATE_VARIABLE_OptionArgs_0_5;
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__getopt__get_short_option_arg_6_p_0(
  MR_Word Opts_7,
  MR_String * Arg_8,
  MR_Word Args0_9,
  MR_Word * Args_10,
  MR_Word STATE_VARIABLE_OptionArgs_0_14,
  MR_Word * STATE_VARIABLE_OptionArgs_15)
{
  {
    MR_bool succeeded = (Opts_7 == (MR_Word) ((MR_Unsigned) 0U));
    MR_String ArgPrime_12;
    MR_Word ArgsPrime_13;

    if (succeeded)
    {
      succeeded = (Args0_9 != (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
      {
        ArgPrime_12 = ((MR_String) ((MR_hl_field(MR_mktag(1), Args0_9, (MR_Integer) 0))));
        ArgsPrime_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args0_9, (MR_Integer) 1))));
      }
    }
    if (succeeded)
    {
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
        *STATE_VARIABLE_OptionArgs_15 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (ArgPrime_12));
        MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_OptionArgs_0_14));
      }
      *Arg_8 = ArgPrime_12;
      *Args_10 = ArgsPrime_13;
    }
    else
    {
      mercury__string__from_char_list_2_p_0(Opts_7, Arg_8);
      *Args_10 = Args0_9;
      *STATE_VARIABLE_OptionArgs_15 = STATE_VARIABLE_OptionArgs_0_14;
    }
  }
}

static void MR_CALL 
mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_111_112_116_105_111_110_95_95_91_50_93_95_48_12_p_0(
  MR_Word TypeInfo_for_OptionType_145,
  MR_Word OptionOps_13,
  MR_Word OptionData_14,
  MR_String Option_15,
  MR_Box Flag_16,
  MR_Word MaybeArg_17,
  MR_Word * MaybeError_18,
  MR_Word STATE_VARIABLE_OptionTable_0_32,
  MR_Word * STATE_VARIABLE_OptionTable_33,
  MR_Word STATE_VARIABLE_OptionsSet_0_34,
  MR_Word * STATE_VARIABLE_OptionsSet_35,
  MR_Box STATE_VARIABLE_UserData_0_36,
  MR_Box * STATE_VARIABLE_UserData_37)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) OptionData_14)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(OptionData_14)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word STATE_VARIABLE_OptionsSet_70_70;

              mercury__set__insert_3_p_0(TypeInfo_for_OptionType_145, Flag_16, STATE_VARIABLE_OptionsSet_0_34, &STATE_VARIABLE_OptionsSet_70_70);
              if ((MaybeArg_17 == (MR_Word) ((MR_Unsigned) 0U)))
                mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_115_112_101_99_105_97_108_95_111_112_116_105_111_110_95_95_91_50_93_95_48_11_p_0(TypeInfo_for_OptionType_145, OptionOps_13, Option_15, Flag_16, (MR_Word) ((MR_Unsigned) 0U), MaybeError_18, STATE_VARIABLE_OptionTable_0_32, STATE_VARIABLE_OptionTable_33, STATE_VARIABLE_OptionsSet_70_70, STATE_VARIABLE_OptionsSet_35, STATE_VARIABLE_UserData_0_36, STATE_VARIABLE_UserData_37);
              else
                {
                  mercury__require__error_1_p_0((MR_String) "no special argument expected in getopt.process_option");
                  return;
                }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word STATE_VARIABLE_OptionsSet_59_59;

              mercury__set__insert_3_p_0(TypeInfo_for_OptionType_145, Flag_16, STATE_VARIABLE_OptionsSet_0_34, &STATE_VARIABLE_OptionsSet_59_59);
              if ((MaybeArg_17 == (MR_Word) ((MR_Unsigned) 0U)))
                mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_115_112_101_99_105_97_108_95_111_112_116_105_111_110_95_95_91_50_93_95_48_11_p_0(TypeInfo_for_OptionType_145, OptionOps_13, Option_15, Flag_16, (MR_Word) (MR_mkword(MR_mktag(1), &mercury__getopt_scalar_common_8[0])), MaybeError_18, STATE_VARIABLE_OptionTable_0_32, STATE_VARIABLE_OptionTable_33, STATE_VARIABLE_OptionsSet_59_59, STATE_VARIABLE_OptionsSet_35, STATE_VARIABLE_UserData_0_36, STATE_VARIABLE_UserData_37);
              else
                mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_115_112_101_99_105_97_108_95_111_112_116_105_111_110_95_95_91_50_93_95_48_11_p_0(TypeInfo_for_OptionType_145, OptionOps_13, Option_15, Flag_16, (MR_Word) (MR_mkword(MR_mktag(1), &mercury__getopt_scalar_common_8[1])), MaybeError_18, STATE_VARIABLE_OptionTable_0_32, STATE_VARIABLE_OptionTable_33, STATE_VARIABLE_OptionsSet_59_59, STATE_VARIABLE_OptionsSet_35, STATE_VARIABLE_UserData_0_36, STATE_VARIABLE_UserData_37);
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word STATE_VARIABLE_OptionsSet_53_53;

              mercury__set__insert_3_p_0(TypeInfo_for_OptionType_145, Flag_16, STATE_VARIABLE_OptionsSet_0_34, &STATE_VARIABLE_OptionsSet_53_53);
              if ((MaybeArg_17 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  mercury__require__error_1_p_0((MR_String) "int_special argument expected in getopt.process_option");
                  return;
                }
              else
              {
                MR_String Arg_132 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeArg_17, (MR_Integer) 0))));
                MR_Integer IntArg_131;

                succeeded = mercury__string__to_int_2_p_0(Arg_132, &IntArg_131);
                if (succeeded)
                {
                  MR_Word Var_55;

                  {
                    Var_55 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Var_55, 0) = ((MR_Box) (IntArg_131));
                  }
                  mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_115_112_101_99_105_97_108_95_111_112_116_105_111_110_95_95_91_50_93_95_48_11_p_0(TypeInfo_for_OptionType_145, OptionOps_13, Option_15, Flag_16, Var_55, MaybeError_18, STATE_VARIABLE_OptionTable_0_32, STATE_VARIABLE_OptionTable_33, STATE_VARIABLE_OptionsSet_53_53, STATE_VARIABLE_OptionsSet_35, STATE_VARIABLE_UserData_0_36, STATE_VARIABLE_UserData_37);
                }
                else
                {
                  mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_101_114_114_111_114_95_95_91_49_93_95_48_4_p_0(Flag_16, Option_15, Arg_132, MaybeError_18);
                  *STATE_VARIABLE_UserData_37 = STATE_VARIABLE_UserData_0_36;
                  *STATE_VARIABLE_OptionsSet_35 = STATE_VARIABLE_OptionsSet_53_53;
                  *STATE_VARIABLE_OptionTable_33 = STATE_VARIABLE_OptionTable_0_32;
                }
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word STATE_VARIABLE_OptionsSet_45_45;

              mercury__set__insert_3_p_0(TypeInfo_for_OptionType_145, Flag_16, STATE_VARIABLE_OptionsSet_0_34, &STATE_VARIABLE_OptionsSet_45_45);
              if ((MaybeArg_17 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  mercury__require__error_1_p_0((MR_String) "string_special argument expected in getopt.process_option");
                  return;
                }
              else
              {
                MR_Word Var_49;
                MR_String Arg_138 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeArg_17, (MR_Integer) 0))));

                {
                  Var_49 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_49, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), Var_49, 1) = ((MR_Box) (Arg_138));
                }
                mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_115_112_101_99_105_97_108_95_111_112_116_105_111_110_95_95_91_50_93_95_48_11_p_0(TypeInfo_for_OptionType_145, OptionOps_13, Option_15, Flag_16, Var_49, MaybeError_18, STATE_VARIABLE_OptionTable_0_32, STATE_VARIABLE_OptionTable_33, STATE_VARIABLE_OptionsSet_45_45, STATE_VARIABLE_OptionsSet_35, STATE_VARIABLE_UserData_0_36, STATE_VARIABLE_UserData_37);
              }
            }
            break;
          case (MR_Integer) 4:
            if ((MaybeArg_17 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__require__error_1_p_0((MR_String) "maybe_string_special argument expected in getopt.process_option");
                return;
              }
            else
            {
              MR_Word Var_41;

              {
                Var_41 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_41, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                MR_hl_field(MR_mktag(3), Var_41, 1) = ((MR_Box) (MaybeArg_17));
              }
              mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_115_112_101_99_105_97_108_95_111_112_116_105_111_110_95_95_91_50_93_95_48_11_p_0(TypeInfo_for_OptionType_145, OptionOps_13, Option_15, Flag_16, Var_41, MaybeError_18, STATE_VARIABLE_OptionTable_0_32, STATE_VARIABLE_OptionTable_33, STATE_VARIABLE_OptionsSet_0_34, STATE_VARIABLE_OptionsSet_35, STATE_VARIABLE_UserData_0_36, STATE_VARIABLE_UserData_37);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__set__insert_3_p_0(TypeInfo_for_OptionType_145, Flag_16, STATE_VARIABLE_OptionsSet_0_34, STATE_VARIABLE_OptionsSet_35);
          if ((MaybeArg_17 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            mercury__map__set_4_p_0(TypeInfo_for_OptionType_145, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), Flag_16, ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__getopt_scalar_common_8[0]))), STATE_VARIABLE_OptionTable_0_32, STATE_VARIABLE_OptionTable_33);
            *MaybeError_18 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            mercury__map__set_4_p_0(TypeInfo_for_OptionType_145, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), Flag_16, ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__getopt_scalar_common_8[1]))), STATE_VARIABLE_OptionTable_0_32, STATE_VARIABLE_OptionTable_33);
            *MaybeError_18 = (MR_Word) ((MR_Unsigned) 0U);
          }
          *STATE_VARIABLE_UserData_37 = STATE_VARIABLE_UserData_0_36;
        }
        break;
      case (MR_Integer) 2:
        {
          mercury__set__insert_3_p_0(TypeInfo_for_OptionType_145, Flag_16, STATE_VARIABLE_OptionsSet_0_34, STATE_VARIABLE_OptionsSet_35);
          if ((MaybeArg_17 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              mercury__require__error_1_p_0((MR_String) "integer argument expected in getopt.process_option");
              return;
            }
          else
          {
            MR_String Arg_25 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeArg_17, (MR_Integer) 0))));
            MR_Integer IntArg_26;

            succeeded = mercury__string__to_int_2_p_0(Arg_25, &IntArg_26);
            if (succeeded)
            {
              MR_Word Var_98;

              {
                Var_98 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_98, 0) = ((MR_Box) (IntArg_26));
              }
              mercury__map__set_4_p_0(TypeInfo_for_OptionType_145, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), Flag_16, ((MR_Box) (Var_98)), STATE_VARIABLE_OptionTable_0_32, STATE_VARIABLE_OptionTable_33);
              *MaybeError_18 = (MR_Word) ((MR_Unsigned) 0U);
            }
            else
            {
              mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_101_114_114_111_114_95_95_91_49_93_95_48_4_p_0(Flag_16, Option_15, Arg_25, MaybeError_18);
              *STATE_VARIABLE_OptionTable_33 = STATE_VARIABLE_OptionTable_0_32;
            }
          }
          *STATE_VARIABLE_UserData_37 = STATE_VARIABLE_UserData_0_36;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), OptionData_14, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__set__insert_3_p_0(TypeInfo_for_OptionType_145, Flag_16, STATE_VARIABLE_OptionsSet_0_34, STATE_VARIABLE_OptionsSet_35);
              if ((MaybeArg_17 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  mercury__require__error_1_p_0((MR_String) "string argument expected in getopt.process_option");
                  return;
                }
              else
              {
                MR_Word Var_94;
                MR_String Arg_107 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeArg_17, (MR_Integer) 0))));

                {
                  Var_94 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_94, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), Var_94, 1) = ((MR_Box) (Arg_107));
                }
                mercury__map__set_4_p_0(TypeInfo_for_OptionType_145, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), Flag_16, ((MR_Box) (Var_94)), STATE_VARIABLE_OptionTable_0_32, STATE_VARIABLE_OptionTable_33);
                *MaybeError_18 = (MR_Word) ((MR_Unsigned) 0U);
              }
              *STATE_VARIABLE_UserData_37 = STATE_VARIABLE_UserData_0_36;
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__set__insert_3_p_0(TypeInfo_for_OptionType_145, Flag_16, STATE_VARIABLE_OptionsSet_0_34, STATE_VARIABLE_OptionsSet_35);
              if ((MaybeArg_17 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  mercury__require__error_1_p_0((MR_String) "integer argument expected in getopt.process_option");
                  return;
                }
              else
              {
                MR_String Arg_111 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeArg_17, (MR_Integer) 0))));
                MR_Integer IntArg_110;

                succeeded = mercury__string__to_int_2_p_0(Arg_111, &IntArg_110);
                if (succeeded)
                {
                  MR_Word Var_89;
                  MR_Word Var_91;

                  {
                    Var_91 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_91, 0) = ((MR_Box) (IntArg_110));
                  }
                  {
                    Var_89 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_89, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(MR_mktag(3), Var_89, 1) = ((MR_Box) (Var_91));
                  }
                  mercury__map__set_4_p_0(TypeInfo_for_OptionType_145, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), Flag_16, ((MR_Box) (Var_89)), STATE_VARIABLE_OptionTable_0_32, STATE_VARIABLE_OptionTable_33);
                  *MaybeError_18 = (MR_Word) ((MR_Unsigned) 0U);
                }
                else
                {
                  mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_101_114_114_111_114_95_95_91_49_93_95_48_4_p_0(Flag_16, Option_15, Arg_111, MaybeError_18);
                  *STATE_VARIABLE_OptionTable_33 = STATE_VARIABLE_OptionTable_0_32;
                }
              }
              *STATE_VARIABLE_UserData_37 = STATE_VARIABLE_UserData_0_36;
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__set__insert_3_p_0(TypeInfo_for_OptionType_145, Flag_16, STATE_VARIABLE_OptionsSet_0_34, STATE_VARIABLE_OptionsSet_35);
              if ((MaybeArg_17 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  mercury__require__error_1_p_0((MR_String) "string argument expected in getopt.process_option");
                  return;
                }
              else
              {
                MR_Word Var_84;

                {
                  Var_84 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_84, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                  MR_hl_field(MR_mktag(3), Var_84, 1) = ((MR_Box) (MaybeArg_17));
                }
                mercury__map__set_4_p_0(TypeInfo_for_OptionType_145, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), Flag_16, ((MR_Box) (Var_84)), STATE_VARIABLE_OptionTable_0_32, STATE_VARIABLE_OptionTable_33);
                *MaybeError_18 = (MR_Word) ((MR_Unsigned) 0U);
              }
              *STATE_VARIABLE_UserData_37 = STATE_VARIABLE_UserData_0_36;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word List0_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OptionData_14, (MR_Integer) 1))));

              mercury__set__insert_3_p_0(TypeInfo_for_OptionType_145, Flag_16, STATE_VARIABLE_OptionsSet_0_34, STATE_VARIABLE_OptionsSet_35);
              if ((MaybeArg_17 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  mercury__require__error_1_p_0((MR_String) "acumulating argument expected in getopt.process_option");
                  return;
                }
              else
              {
                MR_Word List_31;
                MR_Word Var_78;
                MR_Word Var_80;
                MR_String Arg_120 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeArg_17, (MR_Integer) 0))));

                {
                  Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (Arg_120));
                  MR_hl_field(MR_mktag(1), Var_78, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                List_31 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), List0_30, Var_78);
                {
                  Var_80 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_80, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                  MR_hl_field(MR_mktag(3), Var_80, 1) = ((MR_Box) (List_31));
                }
                mercury__map__set_4_p_0(TypeInfo_for_OptionType_145, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), Flag_16, ((MR_Box) (Var_80)), STATE_VARIABLE_OptionTable_0_32, STATE_VARIABLE_OptionTable_33);
                *MaybeError_18 = (MR_Word) ((MR_Unsigned) 0U);
              }
              *STATE_VARIABLE_UserData_37 = STATE_VARIABLE_UserData_0_36;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_101_114_114_111_114_95_95_91_49_93_95_48_4_p_0(
  MR_Box Flag_5,
  MR_String Option_6,
  MR_String Arg_7,
  MR_Word * MaybeError_8)
{
  {
    MR_Word Reason_9;
    MR_Word Error_10;

    {
      Reason_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Reason_9, 0) = ((MR_Box) (Arg_7));
    }
    {
      Error_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Error_10, 0) = Flag_5;
      MR_hl_field(MR_mktag(1), Error_10, 1) = ((MR_Box) (Option_6));
      MR_hl_field(MR_mktag(1), Error_10, 2) = ((MR_Box) (Reason_9));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *MaybeError_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_10));
    }
  }
}

static void MR_CALL 
mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_115_112_101_99_105_97_108_95_111_112_116_105_111_110_95_95_91_50_93_95_48_11_p_0(
  MR_Word TypeInfo_for_OptionType_88,
  MR_Word OptionOps_12,
  MR_String Option_13,
  MR_Box Flag_14,
  MR_Word OptionData_15,
  MR_Word * MaybeError_16,
  MR_Word STATE_VARIABLE_OptionTable_0_33,
  MR_Word * STATE_VARIABLE_OptionTable_34,
  MR_Word STATE_VARIABLE_OptionsSet_0_35,
  MR_Word * STATE_VARIABLE_OptionsSet_36,
  MR_Box STATE_VARIABLE_UserData_0_37,
  MR_Box * STATE_VARIABLE_UserData_38)
{
  {
    MR_bool succeeded;
    MR_Word MaybeHandler_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OptionOps_12, (MR_Integer) 2))));

    switch (MR_tag((MR_Word) MaybeHandler_20)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Error_21;

          {
            Error_21 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Error_21, 0) = Flag_14;
            MR_hl_field(MR_mktag(1), Error_21, 1) = ((MR_Box) (Option_13));
            MR_hl_field(MR_mktag(1), Error_21, 2) = ((MR_Box) ((MR_Unsigned) 16U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeError_16 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_21));
          }
          *STATE_VARIABLE_OptionTable_34 = STATE_VARIABLE_OptionTable_0_33;
          *STATE_VARIABLE_OptionsSet_36 = STATE_VARIABLE_OptionsSet_0_35;
          *STATE_VARIABLE_UserData_38 = STATE_VARIABLE_UserData_0_37;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Handler_22 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeHandler_20, (MR_Integer) 0))));
          MR_Word Result0_23;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), Handler_22, (MR_Integer) 1))));
          MR_Box conv1_Result0_23;

          succeeded = func_0(((MR_Box) (Handler_22)), Flag_14, ((MR_Box) (OptionData_15)), ((MR_Box) (STATE_VARIABLE_OptionTable_0_33)), &conv1_Result0_23);
          if (succeeded)
          {
            Result0_23 = ((MR_Word) (conv1_Result0_23));
            succeeded = MR_TRUE;
          }
          if (succeeded)
            if (((MR_tag((MR_Word) Result0_23)) == (MR_Integer) 1))
            {
              MR_String HandlerMsg_25 = ((MR_String) ((MR_hl_field(MR_mktag(1), Result0_23, (MR_Integer) 0))));
              MR_Word Reason_26;
              MR_Word Error_48;

              {
                Reason_26 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Reason_26, 0) = ((MR_Box) (HandlerMsg_25));
              }
              {
                Error_48 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Error_48, 0) = Flag_14;
                MR_hl_field(MR_mktag(1), Error_48, 1) = ((MR_Box) (Option_13));
                MR_hl_field(MR_mktag(1), Error_48, 2) = ((MR_Box) (Reason_26));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeError_16 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_48));
              }
              *STATE_VARIABLE_OptionTable_34 = STATE_VARIABLE_OptionTable_0_33;
            }
            else
            {
              *STATE_VARIABLE_OptionTable_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Result0_23, (MR_Integer) 0))));
              *MaybeError_16 = (MR_Word) ((MR_Unsigned) 0U);
            }
          else
          {
            MR_Word Error_50;

            {
              Error_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Error_50, 0) = Flag_14;
              MR_hl_field(MR_mktag(1), Error_50, 1) = ((MR_Box) (Option_13));
              MR_hl_field(MR_mktag(1), Error_50, 2) = ((MR_Box) ((MR_Unsigned) 12U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeError_16 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_50));
            }
            *STATE_VARIABLE_OptionTable_34 = STATE_VARIABLE_OptionTable_0_33;
          }
          *STATE_VARIABLE_OptionsSet_36 = STATE_VARIABLE_OptionsSet_0_35;
          *STATE_VARIABLE_UserData_38 = STATE_VARIABLE_UserData_0_37;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TrackHandler_27 = ((MR_Word) ((MR_hl_field(MR_mktag(2), MaybeHandler_20, (MR_Integer) 0))));
          MR_Word NewOptionsSet_28;
          MR_Word Result0_64;
          MR_bool MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) ((MR_hl_field(MR_mktag(0), TrackHandler_27, (MR_Integer) 1))));
          MR_Box conv4_Result0_64;
          MR_Box conv3_NewOptionsSet_28;

          succeeded = func_2(((MR_Box) (TrackHandler_27)), Flag_14, ((MR_Box) (OptionData_15)), ((MR_Box) (STATE_VARIABLE_OptionTable_0_33)), &conv4_Result0_64, &conv3_NewOptionsSet_28);
          if (succeeded)
          {
            Result0_64 = ((MR_Word) (conv4_Result0_64));
            NewOptionsSet_28 = ((MR_Word) (conv3_NewOptionsSet_28));
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word V_4_93 = (MR_Word) (NewOptionsSet_28);
            MR_Word V_5_94 = (MR_Word) (STATE_VARIABLE_OptionsSet_0_35);
            MR_Word V_6_95;

            mercury__list__merge_and_remove_dups_3_p_0(TypeInfo_for_OptionType_88, V_4_93, V_5_94, &V_6_95);
            *STATE_VARIABLE_OptionsSet_36 = (MR_Word) (V_6_95);
            if (((MR_tag((MR_Word) Result0_64)) == (MR_Integer) 1))
            {
              MR_String TrackHandlerMsg_29 = ((MR_String) ((MR_hl_field(MR_mktag(1), Result0_64, (MR_Integer) 0))));
              MR_Word Error_54;
              MR_Word Reason_55;

              {
                Reason_55 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Reason_55, 0) = ((MR_Box) (TrackHandlerMsg_29));
              }
              {
                Error_54 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Error_54, 0) = Flag_14;
                MR_hl_field(MR_mktag(1), Error_54, 1) = ((MR_Box) (Option_13));
                MR_hl_field(MR_mktag(1), Error_54, 2) = ((MR_Box) (Reason_55));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeError_16 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_54));
              }
              *STATE_VARIABLE_OptionTable_34 = STATE_VARIABLE_OptionTable_0_33;
            }
            else
            {
              *STATE_VARIABLE_OptionTable_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Result0_64, (MR_Integer) 0))));
              *MaybeError_16 = (MR_Word) ((MR_Unsigned) 0U);
            }
          }
          else
          {
            MR_Word Error_62;

            {
              Error_62 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Error_62, 0) = Flag_14;
              MR_hl_field(MR_mktag(1), Error_62, 1) = ((MR_Box) (Option_13));
              MR_hl_field(MR_mktag(1), Error_62, 2) = ((MR_Box) ((MR_Unsigned) 12U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeError_16 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_62));
            }
            *STATE_VARIABLE_OptionsSet_36 = STATE_VARIABLE_OptionsSet_0_35;
            *STATE_VARIABLE_OptionTable_34 = STATE_VARIABLE_OptionTable_0_33;
          }
          *STATE_VARIABLE_UserData_38 = STATE_VARIABLE_UserData_0_37;
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word UserDataHandler_30 = ((MR_Word) ((MR_hl_field(MR_mktag(3), MaybeHandler_20, (MR_Integer) 0))));
          MR_Box NewUserData_31;
          MR_Word Result0_79;
          MR_bool MR_CALL (* func_5)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), UserDataHandler_30, (MR_Integer) 1))));
          MR_Box conv6_Result0_79;

          succeeded = func_5(((MR_Box) (UserDataHandler_30)), Flag_14, ((MR_Box) (OptionData_15)), ((MR_Box) (STATE_VARIABLE_OptionTable_0_33)), &conv6_Result0_79, STATE_VARIABLE_UserData_0_37, &NewUserData_31);
          if (succeeded)
          {
            Result0_79 = ((MR_Word) (conv6_Result0_79));
            succeeded = MR_TRUE;
          }
          if (succeeded)
            if (((MR_tag((MR_Word) Result0_79)) == (MR_Integer) 1))
            {
              MR_String UserDataHandlerMsg_32 = ((MR_String) ((MR_hl_field(MR_mktag(1), Result0_79, (MR_Integer) 0))));
              MR_Word Error_72;
              MR_Word Reason_73;

              {
                Reason_73 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Reason_73, 0) = ((MR_Box) (UserDataHandlerMsg_32));
              }
              {
                Error_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Error_72, 0) = Flag_14;
                MR_hl_field(MR_mktag(1), Error_72, 1) = ((MR_Box) (Option_13));
                MR_hl_field(MR_mktag(1), Error_72, 2) = ((MR_Box) (Reason_73));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *MaybeError_16 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_72));
              }
              *STATE_VARIABLE_OptionTable_34 = STATE_VARIABLE_OptionTable_0_33;
              *STATE_VARIABLE_UserData_38 = STATE_VARIABLE_UserData_0_37;
            }
            else
            {
              *STATE_VARIABLE_OptionTable_34 = ((MR_Word) ((MR_hl_field(MR_mktag(0), Result0_79, (MR_Integer) 0))));
              *MaybeError_16 = (MR_Word) ((MR_Unsigned) 0U);
              *STATE_VARIABLE_UserData_38 = NewUserData_31;
            }
          else
          {
            MR_Word Error_77;

            {
              Error_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Error_77, 0) = Flag_14;
              MR_hl_field(MR_mktag(1), Error_77, 1) = ((MR_Box) (Option_13));
              MR_hl_field(MR_mktag(1), Error_77, 2) = ((MR_Box) ((MR_Unsigned) 12U));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeError_16 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_77));
            }
            *STATE_VARIABLE_UserData_38 = STATE_VARIABLE_UserData_0_37;
            *STATE_VARIABLE_OptionTable_34 = STATE_VARIABLE_OptionTable_0_33;
          }
          *STATE_VARIABLE_OptionsSet_36 = STATE_VARIABLE_OptionsSet_0_35;
        }
        break;
    }
  }
}

static void MR_CALL 
mercury__getopt__init_option_table_multi_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;

    mercury__list__cons_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), wrapper_arg_1, ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
  }
}

static void MR_CALL 
mercury__getopt__init_option_table_multi_2_p_0_1(
  void * env_ptr_arg)
{
  {
    struct mercury__getopt__init_option_table_multi_2_p_0_2_env_0_s * env_ptr = (struct mercury__getopt__init_option_table_multi_2_p_0_2_env_0_s *) (env_ptr_arg);

    *((env_ptr)->mercury__getopt__init_option_table_multi_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->mercury__getopt__init_option_table_multi_2_p_0_2_env_0__conv0_LambdaHeadVar__1_10));
    ((env_ptr)->mercury__getopt__init_option_table_multi_2_p_0_2_env_0__cont)((env_ptr)->mercury__getopt__init_option_table_multi_2_p_0_2_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
mercury__getopt__init_option_table_multi_2_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mercury__getopt__init_option_table_multi_2_p_0_2_env_0_s env;

    (env).mercury__getopt__init_option_table_multi_2_p_0_2_env_0__wrapper_arg_1 = wrapper_arg_1;
    (env).mercury__getopt__init_option_table_multi_2_p_0_2_env_0__cont = cont;
    (env).mercury__getopt__init_option_table_multi_2_p_0_2_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Box closure = closure_arg;

      mercury__getopt__IntroducedFrom__pred__init_option_table_multi__678__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), &(env).mercury__getopt__init_option_table_multi_2_p_0_2_env_0__conv0_LambdaHeadVar__1_10, mercury__getopt__init_option_table_multi_2_p_0_1, &env);
    }
  }
}

void MR_CALL 
mercury__getopt__init_option_table_multi_2_p_0(
  MR_Word TypeInfo_for_OptionType_12,
  MR_Word OptionDefaultsPred_3,
  MR_Word * OptionTable_4)
{
  {
    MR_Word TypeInfo_15_15;
    MR_Word OptionDefaultsList_8;
    MR_Word Var_9;
    MR_Word V_5_18;
    MR_Word TypeInfo_14_32;
    MR_Word V_6_19;
    MR_Word V_6_24;
    MR_Word V_5_27;
    MR_Integer V_5_49;
    MR_Box conv2_V_5_27;
    MR_Word conv3_V_5_18;

    {
      Var_9 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_9, 0) = ((MR_Box) (&mercury__getopt_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_9, 1) = ((MR_Box) (mercury__getopt__init_option_table_multi_2_p_0_2));
      MR_hl_field(MR_mktag(0), Var_9, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_9, 3) = ((MR_Box) (TypeInfo_for_OptionType_12));
      MR_hl_field(MR_mktag(0), Var_9, 4) = ((MR_Box) (OptionDefaultsPred_3));
    }
    {
      TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_15_15, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
      MR_hl_field(MR_mktag(0), TypeInfo_15_15, 1) = ((MR_Box) (TypeInfo_for_OptionType_12));
      MR_hl_field(MR_mktag(0), TypeInfo_15_15, 2) = ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0));
    }
    {
      V_6_24 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), V_6_24, 0) = ((MR_Box) (&mercury__getopt_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), V_6_24, 1) = ((MR_Box) (mercury__getopt__init_option_table_multi_2_p_0_3));
      MR_hl_field(MR_mktag(0), V_6_24, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), V_6_24, 3) = ((MR_Box) (TypeInfo_15_15));
    }
    {
      TypeInfo_14_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_14_32, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_14_32, 1) = ((MR_Box) (TypeInfo_15_15));
    }
    mercury__solutions__builtin_aggregate_4_p_0(TypeInfo_15_15, TypeInfo_14_32, (MR_Word) (Var_9), (MR_Word) (V_6_24), ((MR_Box) ((MR_Unsigned) 0U)), &conv2_V_5_27);
    V_5_27 = ((MR_Word) (conv2_V_5_27));
    if ((V_5_27 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140solutions.assert_num_solutions\'/3", (MR_String) "no solutions");
        return;
      }
    else
      V_6_19 = V_5_27;
    mercury__list__length_acc_3_p_0(TypeInfo_15_15, (MR_Word) (V_6_19), (MR_Integer) 0, &V_5_49);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_15_15, V_5_49, (MR_Word) (V_6_19), &conv3_V_5_18);
    V_5_18 = (MR_Word) (conv3_V_5_18);
    if ((V_5_18 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140solutions.assert_num_solutions\'/3", (MR_String) "no solutions");
        return;
      }
    else
      OptionDefaultsList_8 = V_5_18;
    mercury__tree234__from_sorted_assoc_list_2_p_0(TypeInfo_for_OptionType_12, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionDefaultsList_8, OptionTable_4);
  }
}

static void MR_CALL 
mercury__getopt__init_option_table_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;

    mercury__list__cons_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), wrapper_arg_1, ((MR_Word) (wrapper_arg_2)), &conv1_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
  }
}

static void MR_CALL 
mercury__getopt__init_option_table_2_p_0_1(
  void * env_ptr_arg)
{
  {
    struct mercury__getopt__init_option_table_2_p_0_2_env_0_s * env_ptr = (struct mercury__getopt__init_option_table_2_p_0_2_env_0_s *) (env_ptr_arg);

    *((env_ptr)->mercury__getopt__init_option_table_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->mercury__getopt__init_option_table_2_p_0_2_env_0__conv0_LambdaHeadVar__1_10));
    ((env_ptr)->mercury__getopt__init_option_table_2_p_0_2_env_0__cont)((env_ptr)->mercury__getopt__init_option_table_2_p_0_2_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
mercury__getopt__init_option_table_2_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mercury__getopt__init_option_table_2_p_0_2_env_0_s env;

    (env).mercury__getopt__init_option_table_2_p_0_2_env_0__wrapper_arg_1 = wrapper_arg_1;
    (env).mercury__getopt__init_option_table_2_p_0_2_env_0__cont = cont;
    (env).mercury__getopt__init_option_table_2_p_0_2_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Box closure = closure_arg;

      mercury__getopt__IntroducedFrom__pred__init_option_table__670__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), &(env).mercury__getopt__init_option_table_2_p_0_2_env_0__conv0_LambdaHeadVar__1_10, mercury__getopt__init_option_table_2_p_0_1, &env);
    }
  }
}

void MR_CALL 
mercury__getopt__init_option_table_2_p_0(
  MR_Word TypeInfo_for_OptionType_12,
  MR_Word OptionDefaultsPred_3,
  MR_Word * OptionTable_4)
{
  {
    MR_Word TypeInfo_15_15;
    MR_Word OptionDefaultsList_8;
    MR_Word Var_9;
    MR_Word TypeInfo_14_32;
    MR_Word V_6_19;
    MR_Word V_6_24;
    MR_Integer V_5_49;
    MR_Box conv2_V_6_19;
    MR_Word conv3_OptionDefaultsList_8;

    {
      Var_9 = (MR_Word) MR_new_object(MR_Word, (5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_9, 0) = ((MR_Box) (&mercury__getopt_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_9, 1) = ((MR_Box) (mercury__getopt__init_option_table_2_p_0_2));
      MR_hl_field(MR_mktag(0), Var_9, 2) = ((MR_Box) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_9, 3) = ((MR_Box) (TypeInfo_for_OptionType_12));
      MR_hl_field(MR_mktag(0), Var_9, 4) = ((MR_Box) (OptionDefaultsPred_3));
    }
    {
      TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_15_15, 0) = ((MR_Box) (&mercury__pair__pair__type_ctor_info_pair_2));
      MR_hl_field(MR_mktag(0), TypeInfo_15_15, 1) = ((MR_Box) (TypeInfo_for_OptionType_12));
      MR_hl_field(MR_mktag(0), TypeInfo_15_15, 2) = ((MR_Box) (&mercury__getopt__getopt__type_ctor_info_option_data_0));
    }
    {
      V_6_24 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), V_6_24, 0) = ((MR_Box) (&mercury__getopt_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), V_6_24, 1) = ((MR_Box) (mercury__getopt__init_option_table_2_p_0_3));
      MR_hl_field(MR_mktag(0), V_6_24, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), V_6_24, 3) = ((MR_Box) (TypeInfo_15_15));
    }
    {
      TypeInfo_14_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_14_32, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_14_32, 1) = ((MR_Box) (TypeInfo_15_15));
    }
    mercury__solutions__builtin_aggregate_4_p_7(TypeInfo_15_15, TypeInfo_14_32, (MR_Word) (Var_9), (MR_Word) (V_6_24), ((MR_Box) ((MR_Unsigned) 0U)), &conv2_V_6_19);
    V_6_19 = ((MR_Word) (conv2_V_6_19));
    mercury__list__length_acc_3_p_0(TypeInfo_15_15, (MR_Word) (V_6_19), (MR_Integer) 0, &V_5_49);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_15_15, V_5_49, (MR_Word) (V_6_19), &conv3_OptionDefaultsList_8);
    OptionDefaultsList_8 = (MR_Word) (conv3_OptionDefaultsList_8);
    mercury__tree234__from_sorted_assoc_list_2_p_0(TypeInfo_for_OptionType_12, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), OptionDefaultsList_8, OptionTable_4);
  }
}

static MR_bool MR_CALL 
mercury__getopt____Unify____maybe_option_table_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__getopt____Unify____maybe_option_table_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__getopt____Compare____maybe_option_table_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__getopt____Compare____maybe_option_table_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__getopt____Unify____maybe_option_table_se_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__getopt____Unify____maybe_option_table_se_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__getopt____Compare____maybe_option_table_se_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__getopt____Compare____maybe_option_table_se_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__getopt____Unify____option_data_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__getopt____Unify____option_data_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__getopt____Compare____option_data_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__getopt____Compare____option_data_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__getopt____Unify____option_error_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__getopt____Unify____option_error_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__getopt____Compare____option_error_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__getopt____Compare____option_error_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__getopt____Unify____option_error_reason_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__getopt____Unify____option_error_reason_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__getopt____Compare____option_error_reason_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__getopt____Compare____option_error_reason_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__getopt____Unify____option_ops_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__getopt____Compare____option_ops_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__getopt____Compare____option_ops_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_internal_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__getopt____Unify____option_ops_internal_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__getopt____Compare____option_ops_internal_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__getopt____Compare____option_ops_internal_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_special_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__getopt____Unify____option_ops_special_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__getopt____Compare____option_ops_special_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__getopt____Compare____option_ops_special_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_track_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__getopt____Unify____option_ops_track_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__getopt____Compare____option_ops_track_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__getopt____Compare____option_ops_track_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_userdata_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_bool succeeded;

    succeeded = mercury__getopt____Unify____option_ops_userdata_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__getopt____Compare____option_ops_userdata_2_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3,
  MR_Box wrapper_arg_4,
  MR_Box wrapper_arg_5)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__getopt____Compare____option_ops_userdata_2_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_4)), ((MR_Word) (wrapper_arg_5)));
    *wrapper_arg_3 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__getopt____Unify____option_table_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__getopt____Unify____option_table_1_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__getopt____Compare____option_table_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__getopt____Compare____option_table_1_0(((MR_Word) (wrapper_arg_1)), &conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_3)), ((MR_Word) (wrapper_arg_4)));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__getopt____Unify____special_data_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__getopt____Unify____special_data_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__getopt____Compare____special_data_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__getopt____Compare____special_data_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__getopt__init(void)
{
}

void mercury__getopt__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__getopt__getopt__type_ctor_info_maybe_option_table_1);
	MR_register_type_ctor_info(&mercury__getopt__getopt__type_ctor_info_maybe_option_table_se_1);
	MR_register_type_ctor_info(&mercury__getopt__getopt__type_ctor_info_option_data_0);
	MR_register_type_ctor_info(&mercury__getopt__getopt__type_ctor_info_option_error_1);
	MR_register_type_ctor_info(&mercury__getopt__getopt__type_ctor_info_option_error_reason_0);
	MR_register_type_ctor_info(&mercury__getopt__getopt__type_ctor_info_option_ops_1);
	MR_register_type_ctor_info(&mercury__getopt__getopt__type_ctor_info_option_ops_internal_2);
	MR_register_type_ctor_info(&mercury__getopt__getopt__type_ctor_info_option_ops_special_2);
	MR_register_type_ctor_info(&mercury__getopt__getopt__type_ctor_info_option_ops_track_1);
	MR_register_type_ctor_info(&mercury__getopt__getopt__type_ctor_info_option_ops_userdata_2);
	MR_register_type_ctor_info(&mercury__getopt__getopt__type_ctor_info_option_table_1);
	MR_register_type_ctor_info(&mercury__getopt__getopt__type_ctor_info_special_data_0);
}

void mercury__getopt__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__getopt__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module getopt.
