/*
** Automatically generated from `getopt.m'
** by the Mercury compiler,
** version rotd-2021-02-06
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



struct mercury__getopt__IntroducedFrom__pred__init_option_table_multi__792__1_3_p_0_env_0_s {
  MR_Word * mercury__getopt__IntroducedFrom__pred__init_option_table_multi__792__1_3_p_0_env_0__LambdaHeadVar__1_10;
  MR_Cont mercury__getopt__IntroducedFrom__pred__init_option_table_multi__792__1_3_p_0_env_0__cont;
  void * mercury__getopt__IntroducedFrom__pred__init_option_table_multi__792__1_3_p_0_env_0__cont_env_ptr;
  MR_Box mercury__getopt__IntroducedFrom__pred__init_option_table_multi__792__1_3_p_0_env_0__Option_6;
  MR_Word mercury__getopt__IntroducedFrom__pred__init_option_table_multi__792__1_3_p_0_env_0__OptionData_7;
  MR_Box mercury__getopt__IntroducedFrom__pred__init_option_table_multi__792__1_3_p_0_env_0__conv1_OptionData_7;
};

struct mercury__getopt__IntroducedFrom__pred__init_option_table__784__1_3_p_0_env_0_s {
  MR_Word * mercury__getopt__IntroducedFrom__pred__init_option_table__784__1_3_p_0_env_0__LambdaHeadVar__1_10;
  MR_Cont mercury__getopt__IntroducedFrom__pred__init_option_table__784__1_3_p_0_env_0__cont;
  void * mercury__getopt__IntroducedFrom__pred__init_option_table__784__1_3_p_0_env_0__cont_env_ptr;
  MR_Box mercury__getopt__IntroducedFrom__pred__init_option_table__784__1_3_p_0_env_0__Option_6;
  MR_Word mercury__getopt__IntroducedFrom__pred__init_option_table__784__1_3_p_0_env_0__OptionData_7;
  MR_Box mercury__getopt__IntroducedFrom__pred__init_option_table__784__1_3_p_0_env_0__conv1_OptionData_7;
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

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_11;

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_data_0_0[6];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_data_0_1[1];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_data_0_2[1];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_data_0_3[4];

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_data_0[4];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_data_0[12];

static const MR_Integer mercury__getopt__getopt__functor_number_map_option_data_0[12];

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

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_error_reason_0_8[1];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_reason_0_8;

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_error_reason_0_9[2];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_reason_0_9;

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_error_reason_0_10[2];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_reason_0_10;

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_error_reason_0_11[1];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_reason_0_11;

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_error_reason_0_0[5];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_error_reason_0_1[1];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_error_reason_0_2[1];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_error_reason_0_3[5];

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_error_reason_0[4];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_error_reason_0[12];

static const MR_Integer mercury__getopt__getopt__functor_number_map_option_error_reason_0[12];

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

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_read_file_contents_result_0_0[1];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_read_file_contents_result_0_0;

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_read_file_contents_result_0_1[1];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_read_file_contents_result_0_1;

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_read_file_contents_result_0_2[1];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_read_file_contents_result_0_2;

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_read_file_contents_result_0_3;

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_read_file_contents_result_0_0[1];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_read_file_contents_result_0_1[1];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_read_file_contents_result_0_2[1];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_read_file_contents_result_0_3[1];

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_read_file_contents_result_0[4];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_read_file_contents_result_0[4];

static const MR_Integer mercury__getopt__getopt__functor_number_map_read_file_contents_result_0[4];

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

static const MR_ConstString mercury__getopt__getopt__type_class_id_var_names_read_file_contents_1[1];

static const MR_TypeClassMethod mercury__getopt__getopt__type_class_id_method_ids_read_file_contents_1[1];

static const MR_TypeClassId mercury__getopt__getopt__type_class_id_read_file_contents_1;

static MR_Integer MR_CALL 
mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__getopt__words_loop__ho16_4_p_in__string_0(
  MR_String HeadVar__2_6,
  MR_Integer HeadVar__3_7,
  MR_Word * HeadVar__4_8);

static void MR_CALL 
mercury__getopt__LCMCpr_words_loop__ho16_1_4_p_in__string_0(
  MR_String HeadVar__2_6,
  MR_Integer HeadVar__3_7,
  MR_Word * AddrOfHeadVar__4_15);

static void MR_CALL 
mercury__getopt__skip_to_word_end__ho20_4_p_in__string_0(
  MR_String HeadVar__2_6,
  MR_Integer HeadVar__3_7,
  MR_Integer * HeadVar__4_8);

static void MR_CALL 
mercury__getopt__skip_to_next_word_start__ho17_4_p_in__string_0(
  MR_String HeadVar__2_6,
  MR_Integer HeadVar__3_7,
  MR_Integer * HeadVar__4_8);

static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table_multi__792__1_3_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table_multi__792__1_3_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table_multi__792__1_3_p_0(
  MR_Word TypeInfo_for_OptionType_12,
  MR_Word OptionDefaultsPred_3,
  MR_Word * LambdaHeadVar__1_10,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table__784__1_3_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table__784__1_3_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table__784__1_3_p_0(
  MR_Word TypeInfo_for_OptionType_12,
  MR_Word OptionDefaultsPred_3,
  MR_Word * LambdaHeadVar__1_10,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
mercury__getopt__handle_short_options_15_p_0(
  MR_Word TypeInfo_for_OptionType_92,
  MR_Word TypeInfo_for_UserDataType_93,
  MR_Word TypeClassInfo_for_read_file_contents_91,
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
  MR_Box * STATE_VARIABLE_UserData_13,
  MR_Box STATE_VARIABLE_MaybeIO_0_14,
  MR_Box * STATE_VARIABLE_MaybeIO_15);

static void MR_CALL 
mercury__getopt__process_option_14_p_0(
  MR_Word TypeInfo_for_OptionType_175,
  MR_Word TypeInfo_for_UserDataType_176,
  MR_Word TypeClassInfo_for_read_file_contents_174,
  MR_Word OptionOps_15,
  MR_Word OptionData_16,
  MR_String Option_17,
  MR_Box Flag_18,
  MR_Word MaybeArg_19,
  MR_Word * MaybeError_20,
  MR_Word STATE_VARIABLE_OptionTable_0_49,
  MR_Word * STATE_VARIABLE_OptionTable_50,
  MR_Word STATE_VARIABLE_OptionsSet_0_51,
  MR_Word * STATE_VARIABLE_OptionsSet_52,
  MR_Box STATE_VARIABLE_UserData_0_53,
  MR_Box * STATE_VARIABLE_UserData_54,
  MR_Box STATE_VARIABLE_MaybeIO_0_55,
  MR_Box * STATE_VARIABLE_MaybeIO_56);

static void MR_CALL 
mercury__getopt__handle_long_option_18_p_0(
  MR_Word TypeInfo_for_OptionType_60,
  MR_Word TypeInfo_for_UserDataType_61,
  MR_Word TypeClassInfo_for_read_file_contents_59,
  MR_Word OptionOps_19,
  MR_String Option_20,
  MR_Box Flag_21,
  MR_Word OptionData_22,
  MR_Word MaybeOptionArg0_23,
  MR_Word Args0_24,
  MR_Word * Args1_25,
  MR_Word STATE_VARIABLE_OptionArgs_0_40,
  MR_Word * STATE_VARIABLE_OptionArgs_41,
  MR_Word * MaybeError_27,
  MR_Word STATE_VARIABLE_OptionTable_0_42,
  MR_Word * STATE_VARIABLE_OptionTable_43,
  MR_Word STATE_VARIABLE_OptionsSet_0_44,
  MR_Word * STATE_VARIABLE_OptionsSet_45,
  MR_Box STATE_VARIABLE_UserData_0_46,
  MR_Box * STATE_VARIABLE_UserData_47,
  MR_Box STATE_VARIABLE_MaybeIO_0_48,
  MR_Box * STATE_VARIABLE_MaybeIO_49);

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
mercury__getopt__need_arg_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2);

static void MR_CALL 
mercury__getopt__get_short_option_arg_6_p_0(
  MR_Word Opts_7,
  MR_String * Arg_8,
  MR_Word Args0_9,
  MR_Word * Args_10,
  MR_Word STATE_VARIABLE_OptionArgs_0_14,
  MR_Word * STATE_VARIABLE_OptionArgs_15);

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
mercury__getopt____Unify____read_file_contents_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__getopt____Compare____read_file_contents_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__getopt____Unify____special_data_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__getopt____Compare____special_data_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__getopt__ClassMethod_for_getopt__read_file_contents____unit__unit__arity0______getopt__read_file_contents_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);

static void MR_CALL 
mercury__getopt__ClassMethod_for_getopt__read_file_contents____io__state__arity0______getopt__read_file_contents_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4);


static /* final */ const MR_Box mercury__getopt_scalar_common_1[9][2];

static /* final */ const MR_Box mercury__getopt_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__getopt_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__getopt_scalar_common_4[2][5];

static /* final */ const MR_Integer mercury__getopt_scalar_common_5[1][2];

static /* final */ const MR_Box mercury__getopt_scalar_common_6[1][6];

static /* final */ const MR_Box mercury__getopt_scalar_common_7[1][7];

static /* final */ const MR_Box mercury__getopt_scalar_common_8[2][1];




static /* final */ const MR_Box mercury__getopt_scalar_common_1[9][2] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_getopt__read_file_contents__arity1__unit__unit__arity0__)),
    ((MR_Box) (&mercury__unit__unit__type_ctor_info_unit_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_getopt__read_file_contents__arity1__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 2 */
  {
    ((MR_Box) (&mercury__list__list__type_ctor_info_list_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 3 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0))
  },
  /* row 4 */
  {
    ((MR_Box) (&mercury__maybe__maybe__type_ctor_info_maybe_1)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_int_0))
  },
  /* row 5 */
  {
    ((MR_Box) ((MR_Unsigned) 3U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 6 */
  {
    ((MR_Box) ((MR_Unsigned) 1U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 7 */
  {
    ((MR_Box) ((MR_Unsigned) 2U)),
    ((MR_Box) ((MR_Unsigned) 0U))
  },
  /* row 8 */
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
    (MR_Box) ((MR_Unsigned) 0U)
  },
  /* row 1 */
  {
    (MR_Box) ((MR_Unsigned) 1U)
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

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_11 = {
  (MR_String) "file_special",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 5,
  INT32_C(11),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_data_0_0[6] = {
  &mercury__getopt__getopt__du_functor_desc_option_data_0_6,
  &mercury__getopt__getopt__du_functor_desc_option_data_0_7,
  &mercury__getopt__getopt__du_functor_desc_option_data_0_8,
  &mercury__getopt__getopt__du_functor_desc_option_data_0_9,
  &mercury__getopt__getopt__du_functor_desc_option_data_0_10,
  &mercury__getopt__getopt__du_functor_desc_option_data_0_11
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
    UINT32_C(6),
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

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_data_0[12] = {
  &mercury__getopt__getopt__du_functor_desc_option_data_0_5,
  &mercury__getopt__getopt__du_functor_desc_option_data_0_0,
  &mercury__getopt__getopt__du_functor_desc_option_data_0_7,
  &mercury__getopt__getopt__du_functor_desc_option_data_0_11,
  &mercury__getopt__getopt__du_functor_desc_option_data_0_1,
  &mercury__getopt__getopt__du_functor_desc_option_data_0_8,
  &mercury__getopt__getopt__du_functor_desc_option_data_0_3,
  &mercury__getopt__getopt__du_functor_desc_option_data_0_4,
  &mercury__getopt__getopt__du_functor_desc_option_data_0_10,
  &mercury__getopt__getopt__du_functor_desc_option_data_0_6,
  &mercury__getopt__getopt__du_functor_desc_option_data_0_2,
  &mercury__getopt__getopt__du_functor_desc_option_data_0_9
};

static const MR_Integer mercury__getopt__getopt__functor_number_map_option_data_0[12] = {
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 10,
  (MR_Integer) 6,
  (MR_Integer) 7,
  (MR_Integer) 0,
  (MR_Integer) 9,
  (MR_Integer) 2,
  (MR_Integer) 5,
  (MR_Integer) 11,
  (MR_Integer) 8,
  (MR_Integer) 3
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
  (MR_Integer) 12,
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
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 0,
  INT32_C(7),
  mercury__getopt__getopt__field_types_option_error_reason_0_7,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_error_reason_0_8[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_reason_0_8 = {
  (MR_String) "file_special_but_no_io",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 1,
  INT32_C(8),
  mercury__getopt__getopt__field_types_option_error_reason_0_8,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_error_reason_0_9[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_error_0)
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_reason_0_9 = {
  (MR_String) "file_special_cannot_open",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 2,
  INT32_C(9),
  mercury__getopt__getopt__field_types_option_error_reason_0_9,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_error_reason_0_10[2] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0),
  (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_error_0)
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_reason_0_10 = {
  (MR_String) "file_special_cannot_read",
  INT16_C(2),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 3,
  INT32_C(10),
  mercury__getopt__getopt__field_types_option_error_reason_0_10,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_error_reason_0_11[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_reason_0_11 = {
  (MR_String) "file_special_contains_non_option_args",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_REMOTE_FULL_WORD,
  UINT8_C(3),
  (MR_Integer) 4,
  INT32_C(11),
  mercury__getopt__getopt__field_types_option_error_reason_0_11,
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

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_error_reason_0_3[5] = {
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_7,
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_8,
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_9,
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_10,
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_11
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
    UINT32_C(5),
    MR_SECTAG_REMOTE_FULL_WORD,
    mercury__getopt__getopt__du_stag_ordered_option_error_reason_0_3,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_error_reason_0[12] = {
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_3,
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_2,
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_8,
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_9,
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_10,
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_11,
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_1,
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_7,
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_6,
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_4,
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_5,
  &mercury__getopt__getopt__du_functor_desc_option_error_reason_0_0
};

static const MR_Integer mercury__getopt__getopt__functor_number_map_option_error_reason_0[12] = {
  (MR_Integer) 11,
  (MR_Integer) 6,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 9,
  (MR_Integer) 10,
  (MR_Integer) 8,
  (MR_Integer) 7,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 4,
  (MR_Integer) 5
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
  (MR_Integer) 12,
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

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_read_file_contents_result_0_0[1] = {
  (MR_PseudoTypeInfo) (&mercury__builtin__builtin__type_ctor_info_string_0)
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_read_file_contents_result_0_0 = {
  (MR_String) "read_success",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(1),
  (MR_Integer) -1,
  INT32_C(0),
  mercury__getopt__getopt__field_types_read_file_contents_result_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_read_file_contents_result_0_1[1] = {
  (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_error_0)
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_read_file_contents_result_0_1 = {
  (MR_String) "read_failure_open",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(2),
  (MR_Integer) -1,
  INT32_C(1),
  mercury__getopt__getopt__field_types_read_file_contents_result_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_read_file_contents_result_0_2[1] = {
  (MR_PseudoTypeInfo) (&mercury__io__io__type_ctor_info_error_0)
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_read_file_contents_result_0_2 = {
  (MR_String) "read_failure_read",
  INT16_C(1),
  UINT16_C(0),
  MR_SECTAG_NONE,
  UINT8_C(3),
  (MR_Integer) -1,
  INT32_C(2),
  mercury__getopt__getopt__field_types_read_file_contents_result_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_read_file_contents_result_0_3 = {
  (MR_String) "read_failure_no_io",
  INT16_C(0),
  UINT16_C(0),
  MR_SECTAG_LOCAL_REST_OF_WORD,
  UINT8_C(0),
  (MR_Integer) 0,
  INT32_C(3),
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE,
  UINT8_C(0)
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_read_file_contents_result_0_0[1] = {
  &mercury__getopt__getopt__du_functor_desc_read_file_contents_result_0_3
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_read_file_contents_result_0_1[1] = {
  &mercury__getopt__getopt__du_functor_desc_read_file_contents_result_0_0
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_read_file_contents_result_0_2[1] = {
  &mercury__getopt__getopt__du_functor_desc_read_file_contents_result_0_1
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_read_file_contents_result_0_3[1] = {
  &mercury__getopt__getopt__du_functor_desc_read_file_contents_result_0_2
};

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_read_file_contents_result_0[4] = {
  {
    UINT32_C(1),
    MR_SECTAG_LOCAL_REST_OF_WORD,
    mercury__getopt__getopt__du_stag_ordered_read_file_contents_result_0_0,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_read_file_contents_result_0_1,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_read_file_contents_result_0_2,
    INT8_C(-1)
  },
  {
    UINT32_C(1),
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_read_file_contents_result_0_3,
    INT8_C(-1)
  }
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_read_file_contents_result_0[4] = {
  &mercury__getopt__getopt__du_functor_desc_read_file_contents_result_0_3,
  &mercury__getopt__getopt__du_functor_desc_read_file_contents_result_0_1,
  &mercury__getopt__getopt__du_functor_desc_read_file_contents_result_0_2,
  &mercury__getopt__getopt__du_functor_desc_read_file_contents_result_0_0
};

static const MR_Integer mercury__getopt__getopt__functor_number_map_read_file_contents_result_0[4] = {
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__getopt__getopt__type_ctor_info_read_file_contents_result_0 = {
  (MR_Integer) 0,
  UINT8_C(17),
  INT8_C(4),
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt____Unify____read_file_contents_result_0_0_10001)),
  ((MR_Box) (mercury__getopt____Compare____read_file_contents_result_0_0_10001)),
  (MR_String) "getopt",
  (MR_String) "read_file_contents_result",
  {     mercury__getopt__getopt__du_name_ordered_read_file_contents_result_0 },
  {     mercury__getopt__getopt__du_ptag_ordered_read_file_contents_result_0 },
  (MR_Integer) 4,
  UINT16_C(4),
  mercury__getopt__getopt__functor_number_map_read_file_contents_result_0
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

const MR_BaseTypeclassInfo base_typeclass_info_getopt__read_file_contents__arity1__unit__unit__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__getopt__ClassMethod_for_getopt__read_file_contents____unit__unit__arity0______getopt__read_file_contents_4_4_p_0_10001))
};

const MR_BaseTypeclassInfo base_typeclass_info_getopt__read_file_contents__arity1__io__state__arity0__[6] = {
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 0)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) ((MR_Integer) 1)),
  ((MR_Box) (mercury__getopt__ClassMethod_for_getopt__read_file_contents____io__state__arity0______getopt__read_file_contents_4_4_p_0_10001))
};

static const MR_ConstString mercury__getopt__getopt__type_class_id_var_names_read_file_contents_1[1] = {
  (MR_String) "MaybeIO"
};

static const MR_TypeClassMethod mercury__getopt__getopt__type_class_id_method_ids_read_file_contents_1[1] = {
  {
    (MR_String) "read_file_contents",
    (MR_Integer) 4,
    MR_PREDICATE
  }
};

static const MR_TypeClassId mercury__getopt__getopt__type_class_id_read_file_contents_1 = {
  (MR_String) "getopt",
  (MR_String) "read_file_contents",
  (MR_Integer) 1,
  (MR_Integer) 1,
  (MR_Integer) 1,
  mercury__getopt__getopt__type_class_id_var_names_read_file_contents_1,
  mercury__getopt__getopt__type_class_id_method_ids_read_file_contents_1
};

const MR_TypeClassDeclStruct mercury__getopt__getopt__type_class_decl_read_file_contents_1 = {
  &mercury__getopt__getopt__type_class_id_read_file_contents_1,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL
};

static MR_Integer MR_CALL 
mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  return (MR_Integer) 1200;
}

static void MR_CALL 
mercury__getopt__words_loop__ho16_4_p_in__string_0(
  MR_String HeadVar__2_6,
  MR_Integer HeadVar__3_7,
  MR_Word * HeadVar__4_8)
{
  {
    MR_bool succeeded;
    MR_Integer Var_9;

    mercury__getopt__skip_to_word_end__ho20_4_p_in__string_0(HeadVar__2_6, HeadVar__3_7, &Var_9);
    succeeded = (Var_9 == HeadVar__3_7);
    if (succeeded)
      *HeadVar__4_8 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String Var_10;
      MR_Integer Var_11;

{
#define MR_PROC_LABEL mercury__getopt__words_loop__ho16_4_p_in__string_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str = HeadVar__2_6 ;
	Start = HeadVar__3_7 ;
	End = Var_9 ;
		{
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}

		;}
#undef MR_PROC_LABEL
	 Var_10  = SubString;
}
      mercury__getopt__skip_to_next_word_start__ho17_4_p_in__string_0(HeadVar__2_6, Var_9, &Var_11);
      succeeded = (Var_9 == Var_11);
      if (succeeded)
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_10));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
      else
      {
        MR_Word * AddrSCCcallarg13_14;

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__4_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Var_10));
          MR_hl_field(MR_mktag(1), base, 1) = NULL;
        }
        AddrSCCcallarg13_14 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__4_8, (MR_Integer) 1)));
        mercury__getopt__LCMCpr_words_loop__ho16_1_4_p_in__string_0(HeadVar__2_6, Var_11, AddrSCCcallarg13_14);
      }
    }
  }
}

static void MR_CALL 
mercury__getopt__LCMCpr_words_loop__ho16_1_4_p_in__string_0(
  MR_String HeadVar__2_6,
  MR_Integer HeadVar__3_7,
  MR_Word * AddrOfHeadVar__4_15)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Var_9;

    // setup for model_det tailcalls optimized into a loop
    ;
    mercury__getopt__skip_to_word_end__ho20_4_p_in__string_0(HeadVar__2_6, HeadVar__3_7, &Var_9);
    succeeded = (Var_9 == HeadVar__3_7);
    if (succeeded)
      *AddrOfHeadVar__4_15 = (MR_Word) ((MR_Unsigned) 0U);
    else
    {
      MR_String Var_10;
      MR_Integer Var_11;

{
#define MR_PROC_LABEL mercury__getopt__LCMCpr_words_loop__ho16_1_4_p_in__string_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str = HeadVar__2_6 ;
	Start = HeadVar__3_7 ;
	End = Var_9 ;
		{
{
    MR_Integer Count;

    Count = End - Start;
    MR_allocate_aligned_string_msg(SubString, Count, MR_ALLOC_ID);
    MR_memcpy(SubString, Str + Start, Count);
    SubString[Count] = '\0';
}

		;}
#undef MR_PROC_LABEL
	 Var_10  = SubString;
}
      mercury__getopt__skip_to_next_word_start__ho17_4_p_in__string_0(HeadVar__2_6, Var_9, &Var_11);
      succeeded = (Var_9 == Var_11);
      if (succeeded)
      {
        MR_Word HeadVar__4_16;

        {
          HeadVar__4_16 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), HeadVar__4_16, 0) = ((MR_Box) (Var_10));
          MR_hl_field(MR_mktag(1), HeadVar__4_16, 1) = ((MR_Box) ((MR_Unsigned) 0U));
        }
        *AddrOfHeadVar__4_15 = HeadVar__4_16;
      }
      else
      {
        MR_Word * AddrSCCcallarg13_14;
        MR_Word HeadVar__4_17;
        MR_Integer next_value_of_HeadVar__3_7;
        MR_Word * next_value_of_AddrOfHeadVar__4_15;

        {
          HeadVar__4_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), HeadVar__4_17, 0) = ((MR_Box) (Var_10));
          MR_hl_field(MR_mktag(1), HeadVar__4_17, 1) = NULL;
        }
        AddrSCCcallarg13_14 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__4_17, (MR_Integer) 1)));
        *AddrOfHeadVar__4_15 = HeadVar__4_17;
        // direct tailcall eliminated
        ;
        next_value_of_HeadVar__3_7 = Var_11;
        next_value_of_AddrOfHeadVar__4_15 = AddrSCCcallarg13_14;
        HeadVar__3_7 = next_value_of_HeadVar__3_7;
        AddrOfHeadVar__4_15 = next_value_of_AddrOfHeadVar__4_15;
        continue;
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__getopt__skip_to_word_end__ho20_4_p_in__string_0(
  MR_String HeadVar__2_6,
  MR_Integer HeadVar__3_7,
  MR_Integer * HeadVar__4_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Var_9;
    MR_Char Var_10;
    MR_Word Var_11;
    MR_Integer Var_17;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__getopt__skip_to_word_end__ho20_4_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = HeadVar__2_6 ;
	Index = HeadVar__3_7 ;
		{

    Ch = Str[Index];
    ReplacedCodeUnit = -1;
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        if (Ch < 0) {
            Ch = 0xfffd;
            ReplacedCodeUnit = Str[Index];
            NextIndex = Index + 1;
        }
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 Var_9  = NextIndex;
	 Var_10  = Ch;
	 Var_17  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      succeeded = (Var_17 == (MR_Integer) -1);
      if (succeeded)
        Var_11 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        uint8_t Var_18;

{
#define MR_PROC_LABEL mercury__getopt__skip_to_word_end__ho20_4_p_in__string_0

	MR_Integer I;
	uint8_t U8;

	I = Var_17 ;
		{

    U8 = (uint8_t) I;


		;}
#undef MR_PROC_LABEL
	 Var_18  = U8;
}
        {
          Var_11 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_11, 0) = ((MR_Box) (MR_Word) (Var_18));
        }
      }
      succeeded = MR_TRUE;
    }
    if (succeeded)
    {
      succeeded = (Var_11 == (MR_Word) ((MR_Unsigned) 0U));
      if (succeeded)
        succeeded = mercury__char__is_whitespace_1_p_0(Var_10);
      if (succeeded)
        *HeadVar__4_8 = HeadVar__3_7;
      else
      {
        MR_Integer next_value_of_HeadVar__3_7 = Var_9;

        // direct tailcall eliminated
        ;
        HeadVar__3_7 = next_value_of_HeadVar__3_7;
        continue;
      }
    }
    else
      *HeadVar__4_8 = HeadVar__3_7;
    break;
  }
}

static void MR_CALL 
mercury__getopt__skip_to_next_word_start__ho17_4_p_in__string_0(
  MR_String HeadVar__2_6,
  MR_Integer HeadVar__3_7,
  MR_Integer * HeadVar__4_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer Var_10;
    MR_Char Var_11;
    MR_Word Var_12;
    MR_Integer Var_19;

    // setup for model_det tailcalls optimized into a loop
    ;
{
#define MR_PROC_LABEL mercury__getopt__skip_to_next_word_start__ho17_4_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_Integer ReplacedCodeUnit;
	MR_bool SUCCESS_INDICATOR;

	Str = HeadVar__2_6 ;
	Index = HeadVar__3_7 ;
		{

    Ch = Str[Index];
    ReplacedCodeUnit = -1;
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        if (Ch < 0) {
            Ch = 0xfffd;
            ReplacedCodeUnit = Str[Index];
            NextIndex = Index + 1;
        }
        SUCCESS_INDICATOR = MR_TRUE;
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 Var_10  = NextIndex;
	 Var_11  = Ch;
	 Var_19  = ReplacedCodeUnit;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      succeeded = (Var_19 == (MR_Integer) -1);
      if (succeeded)
        Var_12 = (MR_Word) ((MR_Unsigned) 0U);
      else
      {
        uint8_t Var_20;

{
#define MR_PROC_LABEL mercury__getopt__skip_to_next_word_start__ho17_4_p_in__string_0

	MR_Integer I;
	uint8_t U8;

	I = Var_19 ;
		{

    U8 = (uint8_t) I;


		;}
#undef MR_PROC_LABEL
	 Var_20  = U8;
}
        {
          Var_12 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), Var_12, 0) = ((MR_Box) (MR_Word) (Var_20));
        }
      }
      succeeded = mercury__string____Unify____maybe_replaced_0_0((MR_Word) ((MR_Unsigned) 0U), Var_12);
      if (succeeded)
        succeeded = mercury__char__is_whitespace_1_p_0(Var_11);
    }
    if (succeeded)
    {
      MR_Integer next_value_of_HeadVar__3_7 = Var_10;

      // direct tailcall eliminated
      ;
      HeadVar__3_7 = next_value_of_HeadVar__3_7;
      continue;
    }
    else
      *HeadVar__4_8 = HeadVar__3_7;
    break;
  }
}

static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table_multi__792__1_3_p_0_2(
  void * env_ptr_arg)
{
  {
    struct mercury__getopt__IntroducedFrom__pred__init_option_table_multi__792__1_3_p_0_env_0_s * env_ptr = (struct mercury__getopt__IntroducedFrom__pred__init_option_table_multi__792__1_3_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table_multi__792__1_3_p_0_env_0__OptionData_7 = ((MR_Word) ((env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table_multi__792__1_3_p_0_env_0__conv1_OptionData_7));
    mercury__getopt__IntroducedFrom__pred__init_option_table_multi__792__1_3_p_0_1(env_ptr);
  }
}

static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table_multi__792__1_3_p_0_1(
  void * env_ptr_arg)
{
  {
    struct mercury__getopt__IntroducedFrom__pred__init_option_table_multi__792__1_3_p_0_env_0_s * env_ptr = (struct mercury__getopt__IntroducedFrom__pred__init_option_table_multi__792__1_3_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *((env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table_multi__792__1_3_p_0_env_0__LambdaHeadVar__1_10) = base;
      MR_hl_field(MR_mktag(0), base, 0) = (env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table_multi__792__1_3_p_0_env_0__Option_6;
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table_multi__792__1_3_p_0_env_0__OptionData_7));
    }
    ((env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table_multi__792__1_3_p_0_env_0__cont)((env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table_multi__792__1_3_p_0_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table_multi__792__1_3_p_0(
  MR_Word TypeInfo_for_OptionType_12,
  MR_Word OptionDefaultsPred_3,
  MR_Word * LambdaHeadVar__1_10,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mercury__getopt__IntroducedFrom__pred__init_option_table_multi__792__1_3_p_0_env_0_s env;

    (env).mercury__getopt__IntroducedFrom__pred__init_option_table_multi__792__1_3_p_0_env_0__LambdaHeadVar__1_10 = LambdaHeadVar__1_10;
    (env).mercury__getopt__IntroducedFrom__pred__init_option_table_multi__792__1_3_p_0_env_0__cont = cont;
    (env).mercury__getopt__IntroducedFrom__pred__init_option_table_multi__792__1_3_p_0_env_0__cont_env_ptr = cont_env_ptr;
    {
      void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), OptionDefaultsPred_3, (MR_Integer) 1))));

      func_0(((MR_Box) (OptionDefaultsPred_3)), &(env).mercury__getopt__IntroducedFrom__pred__init_option_table_multi__792__1_3_p_0_env_0__Option_6, &(env).mercury__getopt__IntroducedFrom__pred__init_option_table_multi__792__1_3_p_0_env_0__conv1_OptionData_7, mercury__getopt__IntroducedFrom__pred__init_option_table_multi__792__1_3_p_0_2, &env);
    }
  }
}

static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table__784__1_3_p_0_2(
  void * env_ptr_arg)
{
  {
    struct mercury__getopt__IntroducedFrom__pred__init_option_table__784__1_3_p_0_env_0_s * env_ptr = (struct mercury__getopt__IntroducedFrom__pred__init_option_table__784__1_3_p_0_env_0_s *) (env_ptr_arg);

    (env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table__784__1_3_p_0_env_0__OptionData_7 = ((MR_Word) ((env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table__784__1_3_p_0_env_0__conv1_OptionData_7));
    mercury__getopt__IntroducedFrom__pred__init_option_table__784__1_3_p_0_1(env_ptr);
  }
}

static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table__784__1_3_p_0_1(
  void * env_ptr_arg)
{
  {
    struct mercury__getopt__IntroducedFrom__pred__init_option_table__784__1_3_p_0_env_0_s * env_ptr = (struct mercury__getopt__IntroducedFrom__pred__init_option_table__784__1_3_p_0_env_0_s *) (env_ptr_arg);

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      *((env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table__784__1_3_p_0_env_0__LambdaHeadVar__1_10) = base;
      MR_hl_field(MR_mktag(0), base, 0) = (env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table__784__1_3_p_0_env_0__Option_6;
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table__784__1_3_p_0_env_0__OptionData_7));
    }
    ((env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table__784__1_3_p_0_env_0__cont)((env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table__784__1_3_p_0_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table__784__1_3_p_0(
  MR_Word TypeInfo_for_OptionType_12,
  MR_Word OptionDefaultsPred_3,
  MR_Word * LambdaHeadVar__1_10,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mercury__getopt__IntroducedFrom__pred__init_option_table__784__1_3_p_0_env_0_s env;

    (env).mercury__getopt__IntroducedFrom__pred__init_option_table__784__1_3_p_0_env_0__LambdaHeadVar__1_10 = LambdaHeadVar__1_10;
    (env).mercury__getopt__IntroducedFrom__pred__init_option_table__784__1_3_p_0_env_0__cont = cont;
    (env).mercury__getopt__IntroducedFrom__pred__init_option_table__784__1_3_p_0_env_0__cont_env_ptr = cont_env_ptr;
    {
      void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box *, MR_Cont, void *)) ((MR_hl_field(MR_mktag(0), OptionDefaultsPred_3, (MR_Integer) 1))));

      func_0(((MR_Box) (OptionDefaultsPred_3)), &(env).mercury__getopt__IntroducedFrom__pred__init_option_table__784__1_3_p_0_env_0__Option_6, &(env).mercury__getopt__IntroducedFrom__pred__init_option_table__784__1_3_p_0_env_0__conv1_OptionData_7, mercury__getopt__IntroducedFrom__pred__init_option_table__784__1_3_p_0_2, &env);
    }
  }
}

void MR_CALL 
mercury__getopt__ClassMethod_for_getopt__read_file_contents____io__state__arity0______getopt__read_file_contents_4_4_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  mercury__getopt__do_read_file_contents_4_p_0(HeadVar__1_1, HeadVar__2_2);
}

void MR_CALL 
mercury__getopt__ClassMethod_for_getopt__read_file_contents____unit__unit__arity0______getopt__read_file_contents_4_4_p_0(
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_103_101_116_111_112_116_95_95_114_101_97_100_95_102_105_108_101_95_99_111_110_116_101_110_116_115_95_95_95_95_117_110_105_116_95_95_117_110_105_116_95_95_97_114_105_116_121_48_95_95_95_95_95_95_103_101_116_111_112_116_95_95_114_101_97_100_95_102_105_108_101_95_99_111_110_116_101_110_116_115_95_52_95_95_91_49_93_95_48_4_p_0(HeadVar__2_2);
}

void MR_CALL 
mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_103_101_116_111_112_116_95_95_114_101_97_100_95_102_105_108_101_95_99_111_110_116_101_110_116_115_95_95_95_95_117_110_105_116_95_95_117_110_105_116_95_95_97_114_105_116_121_48_95_95_95_95_95_95_103_101_116_111_112_116_95_95_114_101_97_100_95_102_105_108_101_95_99_111_110_116_101_110_116_115_95_52_95_95_91_49_93_95_48_4_p_0(
  MR_Word * HeadVar__2_2)
{
  *HeadVar__2_2 = (MR_Word) ((MR_Unsigned) 0U);
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
                          MR_Integer Var_65;

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
	 Var_65  = Res;
}
                          succeeded = (Var_65 < (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_65 == (MR_Integer) 0);
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

                          mercury__builtin__compare_3_p_0((MR_Word) (&mercury__getopt_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Var_52)), ((MR_Box) (ArgY1_43)));
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
                  TypeInfo_15_15 = (MR_Word) (&mercury__getopt_scalar_common_1[3]);
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
mercury__getopt____Compare____read_file_contents_result_0_0(
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
        case (MR_Integer) 1:
          {
            MR_String Var_35 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                {
                  MR_String ArgY1_5 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Integer Var_53;

{
#define MR_PROC_LABEL mercury__getopt____Compare____read_file_contents_result_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_35 ;
	S2 = ArgY1_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 Var_53  = Res;
}
                  succeeded = (Var_53 < (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_53 == (MR_Integer) 0);
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
            MR_Word Var_33 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word ArgY1_14 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                  MR_String Var_36 = (MR_String) (Var_33);
                  MR_String Var_37 = (MR_String) (ArgY1_14);
                  MR_Integer Var_43;

{
#define MR_PROC_LABEL mercury__getopt____Compare____read_file_contents_result_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_36 ;
	S2 = Var_37 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 Var_43  = Res;
}
                  succeeded = (Var_43 < (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_43 == (MR_Integer) 0);
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
            MR_Word Var_34 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                {
                  MR_Word ArgY1_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))));
                  MR_String Var_38 = (MR_String) (Var_34);
                  MR_String Var_39 = (MR_String) (ArgY1_23);
                  MR_Integer Var_48;

{
#define MR_PROC_LABEL mercury__getopt____Compare____read_file_contents_result_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_38 ;
	S2 = Var_39 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 Var_48  = Res;
}
                  succeeded = (Var_48 < (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_48 == (MR_Integer) 0);
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
mercury__getopt____Unify____read_file_contents_result_0_0(
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
            MR_Integer CastX_9 = (MR_Integer) (HeadVar__1_1);
            MR_Integer CastY_10 = (MR_Integer) (HeadVar__2_2);

            succeeded = (CastY_10 == CastX_9);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String ArgX1_3 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0))));
            MR_String ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 1);
            if (succeeded)
            {
              ArgY1_4 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
              succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgX1_5 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_6;
            MR_String Var_15;
            MR_String Var_16;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 2);
            if (succeeded)
            {
              ArgY1_6 = ((MR_Word) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));
              Var_15 = (MR_String) (ArgX1_5);
              Var_16 = (MR_String) (ArgY1_6);
              succeeded = (strcmp(Var_15, Var_16) == 0);
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word ArgX1_7 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))));
            MR_Word ArgY1_8;
            MR_String Var_17;
            MR_String Var_18;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3);
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0))));
              Var_17 = (MR_String) (ArgX1_7);
              Var_18 = (MR_String) (ArgY1_8);
              succeeded = (strcmp(Var_17, Var_18) == 0);
            }
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
    MR_Integer CastX_148 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_149 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_148 == CastY_149);
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
                    case (MR_Integer) 5:
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
                    case (MR_Integer) 5:
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
                    case (MR_Integer) 5:
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
                    case (MR_Integer) 5:
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
                    case (MR_Integer) 5:
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
            case (MR_Integer) 5:
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
                    case (MR_Integer) 5:
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
            MR_Word Var_157 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))) & (MR_Integer) 1);

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
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_5 = ((MR_Unsigned) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))) & (MR_Integer) 1);
                  MR_Integer Var_162 = (MR_Integer) (Var_157);
                  MR_Integer Var_163 = (MR_Integer) (ArgY1_5);

                  succeeded = (Var_162 < Var_163);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_162 == Var_163);
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
            MR_Integer Var_158 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  case (MR_Integer) 5:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Integer ArgY1_25 = ((MR_Integer) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));

                  succeeded = (Var_158 < ArgY1_25);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_158 == ArgY1_25);
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
                MR_String Var_161 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                      case (MR_Integer) 5:
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
                          MR_String ArgY1_45 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_Integer Var_173;

{
#define MR_PROC_LABEL mercury__getopt____Compare____option_data_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_161 ;
	S2 = ArgY1_45 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 Var_173  = Res;
}
                          succeeded = (Var_173 < (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_173 == (MR_Integer) 0);
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
                MR_Word Var_159 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                      case (MR_Integer) 5:
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
                          MR_Word ArgY1_65 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

                          mercury__builtin__compare_3_p_0((MR_Word) (&mercury__getopt_scalar_common_1[4]), HeadVar__1_1, ((MR_Box) (Var_159)), ((MR_Box) (ArgY1_65)));
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
                MR_Word Var_160 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                      case (MR_Integer) 5:
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
                          MR_Word ArgY1_85 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

                          mercury__builtin__compare_3_p_0((MR_Word) (&mercury__getopt_scalar_common_1[3]), HeadVar__1_1, ((MR_Box) (Var_160)), ((MR_Box) (ArgY1_85)));
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
                MR_Word Var_156 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                      case (MR_Integer) 5:
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
                          MR_Word ArgY1_105 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));

                          mercury__builtin__compare_3_p_0((MR_Word) (&mercury__getopt_scalar_common_1[2]), HeadVar__1_1, ((MR_Box) (Var_156)), ((MR_Box) (ArgY1_105)));
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
    MR_Integer CastX_27 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_28 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_27 == CastY_28);
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
            case (MR_Integer) 5:
              {
                MR_Integer CastX_25 = (MR_Integer) (HeadVar__1_1);
                MR_Integer CastY_26 = (MR_Integer) (HeadVar__2_2);

                succeeded = (CastY_26 == CastX_25);
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
                MR_Word TypeInfo_30_30;
                MR_Word ArgX1_9 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_10;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_10 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  TypeInfo_30_30 = (MR_Word) (&mercury__getopt_scalar_common_1[4]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_30_30, ((MR_Box) (ArgX1_9)), ((MR_Box) (ArgY1_10)));
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word TypeInfo_31_31;
                MR_Word ArgX1_11 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_12;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  ArgY1_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  TypeInfo_31_31 = (MR_Word) (&mercury__getopt_scalar_common_1[3]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_31_31, ((MR_Box) (ArgX1_11)), ((MR_Box) (ArgY1_12)));
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word TypeInfo_29_29;
                MR_Word ArgX1_13 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_Word ArgY1_14;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  ArgY1_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  TypeInfo_29_29 = (MR_Word) (&mercury__getopt_scalar_common_1[2]);
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_29_29, ((MR_Box) (ArgX1_13)), ((MR_Box) (ArgY1_14)));
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
          MR_Integer Var_35;

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
	 Var_35  = Res;
}
          succeeded = (Var_35 < (MR_Integer) 0);
          if (succeeded)
            SubResult2_19 = (MR_Integer) 1;
          else
          {
            succeeded = (Var_35 == (MR_Integer) 0);
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
        MR_Integer Var_40;

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
	 Var_40  = Res;
}
        succeeded = (Var_40 < (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_40 == (MR_Integer) 0);
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
    MR_Integer CastX_222 = (MR_Integer) (HeadVar__2_2);
    MR_Integer CastY_223 = (MR_Integer) (HeadVar__3_3);

    succeeded = (CastX_222 == CastY_223);
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
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
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
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
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
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
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
                    case (MR_Integer) 4:
                      *HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Var_233 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_String ArgY1_25 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Integer Var_249;

{
#define MR_PROC_LABEL mercury__getopt____Compare____option_error_reason_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_233 ;
	S2 = ArgY1_25 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 Var_249  = Res;
}
                  succeeded = (Var_249 < (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_249 == (MR_Integer) 0);
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
                  case (MR_Integer) 4:
                    *HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String Var_241 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0))));

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
                  MR_String ArgY1_78 = ((MR_String) ((MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0))));
                  MR_Integer Var_289;

{
#define MR_PROC_LABEL mercury__getopt____Compare____option_error_reason_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_241 ;
	S2 = ArgY1_78 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 Var_289  = Res;
}
                  succeeded = (Var_289 < (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (Var_289 == (MR_Integer) 0);
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
                  case (MR_Integer) 4:
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
                MR_String Var_240 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_String ArgY1_101 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_Integer Var_284;

{
#define MR_PROC_LABEL mercury__getopt____Compare____option_error_reason_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_240 ;
	S2 = ArgY1_101 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 Var_284  = Res;
}
                          succeeded = (Var_284 < (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_284 == (MR_Integer) 0);
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
                      case (MR_Integer) 4:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String Var_234 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                    switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0))))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_String ArgY1_124 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_Integer Var_254;

{
#define MR_PROC_LABEL mercury__getopt____Compare____option_error_reason_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_234 ;
	S2 = ArgY1_124 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 Var_254  = Res;
}
                          succeeded = (Var_254 < (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_254 == (MR_Integer) 0);
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
                      case (MR_Integer) 4:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Var_235 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                MR_String Var_236 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                          MR_String ArgY1_156 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_Word ArgY2_159 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                          MR_Word SubResult1_157;
                          MR_Integer Var_259;

{
#define MR_PROC_LABEL mercury__getopt____Compare____option_error_reason_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_236 ;
	S2 = ArgY1_156 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 Var_259  = Res;
}
                          succeeded = (Var_259 < (MR_Integer) 0);
                          if (succeeded)
                            SubResult1_157 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_259 == (MR_Integer) 0);
                            if (succeeded)
                              SubResult1_157 = (MR_Integer) 0;
                            else
                              SubResult1_157 = (MR_Integer) 2;
                          }
                          succeeded = (SubResult1_157 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult1_157;
                          else
                          {
                            MR_String Var_242 = (MR_String) (Var_235);
                            MR_String Var_243 = (MR_String) (ArgY2_159);
                            MR_Integer Var_264;

{
#define MR_PROC_LABEL mercury__getopt____Compare____option_error_reason_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_242 ;
	S2 = Var_243 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 Var_264  = Res;
}
                            succeeded = (Var_264 < (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 1;
                            else
                            {
                              succeeded = (Var_264 == (MR_Integer) 0);
                              if (succeeded)
                                *HeadVar__1_1 = (MR_Integer) 0;
                              else
                                *HeadVar__1_1 = (MR_Integer) 2;
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 3:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 4:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Var_237 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                MR_String Var_238 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                          MR_String ArgY1_194 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_Word ArgY2_197 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2))));
                          MR_Word SubResult1_195;
                          MR_Integer Var_269;

{
#define MR_PROC_LABEL mercury__getopt____Compare____option_error_reason_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_238 ;
	S2 = ArgY1_194 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 Var_269  = Res;
}
                          succeeded = (Var_269 < (MR_Integer) 0);
                          if (succeeded)
                            SubResult1_195 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_269 == (MR_Integer) 0);
                            if (succeeded)
                              SubResult1_195 = (MR_Integer) 0;
                            else
                              SubResult1_195 = (MR_Integer) 2;
                          }
                          succeeded = (SubResult1_195 != (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = SubResult1_195;
                          else
                          {
                            MR_String Var_244 = (MR_String) (Var_237);
                            MR_String Var_245 = (MR_String) (ArgY2_197);
                            MR_Integer Var_274;

{
#define MR_PROC_LABEL mercury__getopt____Compare____option_error_reason_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_244 ;
	S2 = Var_245 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 Var_274  = Res;
}
                            succeeded = (Var_274 < (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 1;
                            else
                            {
                              succeeded = (Var_274 == (MR_Integer) 0);
                              if (succeeded)
                                *HeadVar__1_1 = (MR_Integer) 0;
                              else
                                *HeadVar__1_1 = (MR_Integer) 2;
                            }
                          }
                        }
                        break;
                      case (MR_Integer) 4:
                        *HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_String Var_239 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));

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
                      case (MR_Integer) 4:
                        {
                          MR_String ArgY1_221 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1))));
                          MR_Integer Var_279;

{
#define MR_PROC_LABEL mercury__getopt____Compare____option_error_reason_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 = Var_239 ;
	S2 = ArgY1_221 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 Var_279  = Res;
}
                          succeeded = (Var_279 < (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (Var_279 == (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 0;
                            else
                              *HeadVar__1_1 = (MR_Integer) 2;
                          }
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
    MR_Integer CastX_31 = (MR_Integer) (HeadVar__1_1);
    MR_Integer CastY_32 = (MR_Integer) (HeadVar__2_2);

    succeeded = (CastX_31 == CastY_32);
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
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String ArgX1_17 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_String ArgY1_18;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_18 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = (strcmp(ArgX1_17, ArgY1_18) == 0);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String ArgX1_19 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_String ArgY1_20;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_20 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = (strcmp(ArgX1_19, ArgY1_20) == 0);
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_String ArgX1_21 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_String ArgY1_22;
                MR_Word ArgX2_23 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_24;
                MR_String Var_35;
                MR_String Var_36;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  ArgY1_22 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_24 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  succeeded = (strcmp(ArgX1_21, ArgY1_22) == 0);
                  if (succeeded)
                  {
                    Var_35 = (MR_String) (ArgX2_23);
                    Var_36 = (MR_String) (ArgY2_24);
                    succeeded = (strcmp(Var_35, Var_36) == 0);
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_String ArgX1_25 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_String ArgY1_26;
                MR_Word ArgX2_27 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2))));
                MR_Word ArgY2_28;
                MR_String Var_37;
                MR_String Var_38;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  ArgY1_26 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  ArgY2_28 = ((MR_Word) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2))));
                  succeeded = (strcmp(ArgX1_25, ArgY1_26) == 0);
                  if (succeeded)
                  {
                    Var_37 = (MR_String) (ArgX2_27);
                    Var_38 = (MR_String) (ArgY2_28);
                    succeeded = (strcmp(Var_37, Var_38) == 0);
                  }
                }
              }
              break;
            case (MR_Integer) 4:
              {
                MR_String ArgX1_29 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1))));
                MR_String ArgY1_30;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_Integer) 3)) && ((((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 4)));
                if (succeeded)
                {
                  ArgY1_30 = ((MR_String) ((MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1))));
                  succeeded = (strcmp(ArgX1_29, ArgY1_30) == 0);
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
        MR_Integer Var_24;

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
	 Var_24  = Res;
}
        succeeded = (Var_24 < (MR_Integer) 0);
        if (succeeded)
          *HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          succeeded = (Var_24 == (MR_Integer) 0);
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
mercury__getopt__return_option_table_if_ok_3_p_0(
  MR_Word TypeInfo_for_OptionType_8,
  MR_Word MaybeError_4,
  MR_Word OptionTable_5,
  MR_Word * Result_6)
{
  if ((MaybeError_4 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
      *Result_6 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (OptionTable_5));
    }
  else
  {
    MR_Word Error_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeError_4, (MR_Integer) 0))));

    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      *Result_6 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_7));
    }
  }
}

void MR_CALL 
mercury__getopt__read_file_contents_no_io_4_p_0(
  MR_String _FileName_5,
  MR_Word * Result_6)
{
  mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_102_105_108_101_95_99_111_110_116_101_110_116_115_95_110_111_95_105_111_95_95_91_49_93_95_48_4_p_0(Result_6);
}

void MR_CALL 
mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_114_101_97_100_95_102_105_108_101_95_99_111_110_116_101_110_116_115_95_110_111_95_105_111_95_95_91_49_93_95_48_4_p_0(
  MR_Word * Result_6)
{
  *Result_6 = (MR_Word) ((MR_Unsigned) 0U);
}

void MR_CALL 
mercury__getopt__do_read_file_contents_4_p_0(
  MR_String FileName_5,
  MR_Word * Result_6)
{
  {
    MR_Word OpenResult_8;

    mercury__io__open_input_4_p_0(FileName_5, &OpenResult_8);
    if (((MR_tag((MR_Word) OpenResult_8)) == (MR_Integer) 1))
    {
      MR_Word IO_Error_19 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OpenResult_8, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_6 = base;
        MR_hl_field(MR_mktag(2), base, 0) = ((MR_Box) (IO_Error_19));
      }
    }
    else
    {
      MR_Word FileStream_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OpenResult_8, (MR_Integer) 0))));
      MR_Word ReadResult_10;
      MR_Box Var_22;
      MR_Box Var_24;

      mercury__io__read_file_as_string_4_p_0(FileStream_9, &ReadResult_10);
      if (((MR_tag((MR_Word) ReadResult_10)) == (MR_Integer) 1))
      {
        MR_Word IO_Error_13 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ReadResult_10, (MR_Integer) 1))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(MR_mktag(3), base, 0) = ((MR_Box) (IO_Error_13));
        }
      }
      else
      {
        MR_String Contents_11 = ((MR_String) ((MR_hl_field(MR_mktag(0), ReadResult_10, (MR_Integer) 0))));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *Result_6 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Contents_11));
        }
      }
      Var_22 = (MR_Box) (FileStream_9);
      mercury__io__maybe_delete_stream_info_3_p_0(Var_22);
{
#define MR_PROC_LABEL mercury__getopt__do_read_file_contents_4_p_0

	MercuryFilePtr Stream;
	MR_Integer Error;

	Stream = (MercuryFilePtr)Var_22 ;
		{

    if (mercury_close(Stream) < 0) {
        Error = errno;
    } else {
        Error = 0;
    }


		;}
#undef MR_PROC_LABEL
	MR_MAYBE_BOX_FOREIGN_TYPE(MR_Integer, Error, Var_24 );
}
      mercury__io__throw_on_error_4_p_0(Var_24, (MR_String) "error closing file: ");
    }
  }
}

MR_Word MR_CALL 
mercury__getopt__convert_to_maybe_option_table_1_f_0(
  MR_Word TypeInfo_for_OptionType_8,
  MR_Word MaybeStructuredError_3)
{
  {
    MR_Word MaybeError_4;

    if (((MR_tag((MR_Word) MaybeStructuredError_3)) == (MR_Integer) 1))
    {
      MR_Word Error_6 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeStructuredError_3, (MR_Integer) 0))));
      MR_String Var_7;

      Var_7 = mercury__getopt__option_error_to_string_1_f_0(TypeInfo_for_OptionType_8, Error_6);
      {
        MaybeError_4 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), MaybeError_4, 0) = ((MR_Box) (Var_7));
      }
    }
    else
    {
      MR_Word OptionTable_5 = ((MR_Word) ((MR_hl_field(MR_mktag(0), MaybeStructuredError_3, (MR_Integer) 0))));

      {
        MaybeError_4 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        MR_hl_field(MR_mktag(0), MaybeError_4, 0) = ((MR_Box) (OptionTable_5));
      }
    }
    return MaybeError_4;
  }
}

MR_String MR_CALL 
mercury__getopt__option_error_to_string_1_f_0(
  MR_Word TypeInfo_for_OptionType_78,
  MR_Word Error_3)
{
  {
    MR_String String_4;

    if (((MR_tag((MR_Word) Error_3)) == (MR_Integer) 1))
    {
      MR_Word Reason_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Error_3, (MR_Integer) 2))));
      MR_String OptionName_77 = ((MR_String) ((MR_hl_field(MR_mktag(1), Error_3, (MR_Integer) 1))));

      switch (MR_tag((MR_Word) Reason_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(Reason_7)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String Var_83;

                Var_83 = mercury__string__f_43_43_2_f_0(OptionName_77, (MR_String) "\'");
                String_4 = mercury__string__f_43_43_2_f_0((MR_String) "unknown type for option \140", Var_83);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String Var_98;

                Var_98 = mercury__string__f_43_43_2_f_0(OptionName_77, (MR_String) "\' needs an argument");
                String_4 = mercury__string__f_43_43_2_f_0((MR_String) "option \140", Var_98);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_String Var_117;

                Var_117 = mercury__string__f_43_43_2_f_0(OptionName_77, (MR_String) "\' -- only boolean, maybe and accumulating options can be negated");
                String_4 = mercury__string__f_43_43_2_f_0((MR_String) "cannot negate option \140", Var_117);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_String Var_89;

                Var_89 = mercury__string__f_43_43_2_f_0(OptionName_77, (MR_String) "\' failed");
                String_4 = mercury__string__f_43_43_2_f_0((MR_String) "the handler of option \140", Var_89);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_String Var_86;

                Var_86 = mercury__string__f_43_43_2_f_0(OptionName_77, (MR_String) "\' has no handler");
                String_4 = mercury__string__f_43_43_2_f_0((MR_String) "option \140", Var_86);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Var_114;

            Var_114 = mercury__string__f_43_43_2_f_0(OptionName_77, (MR_String) "\' does not allow an argument");
            String_4 = mercury__string__f_43_43_2_f_0((MR_String) "option \140", Var_114);
          }
          break;
        case (MR_Integer) 2:
          String_4 = ((MR_String) ((MR_hl_field(MR_mktag(2), Reason_7, (MR_Integer) 0))));
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), Reason_7, (MR_Integer) 0))))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String Arg_9 = ((MR_String) ((MR_hl_field(MR_mktag(3), Reason_7, (MR_Integer) 1))));
                MR_String Var_92;
                MR_String Var_94;
                MR_String Var_95;

                Var_92 = mercury__string__f_43_43_2_f_0(Arg_9, (MR_String) "\' is not numeric");
                Var_94 = mercury__string__f_43_43_2_f_0((MR_String) "\' requires a numeric argument; \140", Var_92);
                Var_95 = mercury__string__f_43_43_2_f_0(OptionName_77, Var_94);
                String_4 = mercury__string__f_43_43_2_f_0((MR_String) "option \140", Var_95);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String FileName_10 = ((MR_String) ((MR_hl_field(MR_mktag(3), Reason_7, (MR_Integer) 1))));
                MR_String Var_110;
                MR_String Var_111;

                Var_110 = mercury__string__f_43_43_2_f_0((MR_String) ": ", (MR_String) "the option processing predicate has no access to I/O");
                Var_111 = mercury__string__f_43_43_2_f_0(FileName_10, Var_110);
                String_4 = mercury__string__f_43_43_2_f_0((MR_String) "cannot open ", Var_111);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word IO_Error_12 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_7, (MR_Integer) 2))));
                MR_String FileName_71 = ((MR_String) ((MR_hl_field(MR_mktag(3), Reason_7, (MR_Integer) 1))));
                MR_String Msg_72;
                MR_String Var_106;
                MR_String Var_107;

                mercury__io__error_message_2_p_0(IO_Error_12, &Msg_72);
                Var_106 = mercury__string__f_43_43_2_f_0((MR_String) ": ", Msg_72);
                Var_107 = mercury__string__f_43_43_2_f_0(FileName_71, Var_106);
                String_4 = mercury__string__f_43_43_2_f_0((MR_String) "cannot open ", Var_107);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_String FileName_73 = ((MR_String) ((MR_hl_field(MR_mktag(3), Reason_7, (MR_Integer) 1))));
                MR_String Msg_74;
                MR_Word IO_Error_75 = ((MR_Word) ((MR_hl_field(MR_mktag(3), Reason_7, (MR_Integer) 2))));
                MR_String Var_102;
                MR_String Var_103;

                mercury__io__error_message_2_p_0(IO_Error_75, &Msg_74);
                Var_102 = mercury__string__f_43_43_2_f_0((MR_String) ": ", Msg_74);
                Var_103 = mercury__string__f_43_43_2_f_0(FileName_73, Var_102);
                String_4 = mercury__string__f_43_43_2_f_0((MR_String) "cannot read ", Var_103);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_String FileName_76 = ((MR_String) ((MR_hl_field(MR_mktag(3), Reason_7, (MR_Integer) 1))));

                String_4 = mercury__string__f_43_43_2_f_0(FileName_76, (MR_String) " contains non-option arguments");
              }
              break;
          }
          break;
      }
    }
    else
    {
      MR_String OptionName_5 = ((MR_String) ((MR_hl_field(MR_mktag(0), Error_3, (MR_Integer) 0))));
      MR_String Var_80;

      Var_80 = mercury__string__f_43_43_2_f_0(OptionName_5, (MR_String) "\'");
      String_4 = mercury__string__f_43_43_2_f_0((MR_String) "unrecognized option \140", Var_80);
    }
    return String_4;
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
mercury__getopt__process_options_userdata_io_12_p_0(
  MR_Word TypeInfo_for_OptionType_39,
  MR_Word TypeInfo_for_UserDataType_40,
  MR_Word OptionOps_13,
  MR_Word Args0_14,
  MR_Word * OptionArgs_15,
  MR_Word * NonOptionArgs_16,
  MR_Word * MaybeError_17,
  MR_Word * OptionsSet_18,
  MR_Word STATE_VARIABLE_OptionTable_0_27,
  MR_Word * STATE_VARIABLE_OptionTable_28,
  MR_Box STATE_VARIABLE_UserData_0_29,
  MR_Box * STATE_VARIABLE_UserData_30)
{
  {
    MR_Word Short_22 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OptionOps_13, (MR_Integer) 0))));
    MR_Word Long_23 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OptionOps_13, (MR_Integer) 1))));
    MR_Word Special_24 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OptionOps_13, (MR_Integer) 2))));
    MR_Word Internal_25;
    MR_Word RevOptionArgs_26;
    MR_Word Var_33;
    MR_Box conv0_STATE_VARIABLE_IO_32;

    {
      Var_33 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_33, 0) = ((MR_Box) (Special_24));
    }
    {
      Internal_25 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Internal_25, 0) = ((MR_Box) (Short_22));
      MR_hl_field(MR_mktag(0), Internal_25, 1) = ((MR_Box) (Long_23));
      MR_hl_field(MR_mktag(0), Internal_25, 2) = ((MR_Box) (Var_33));
    }
    mercury__getopt__process_arguments_14_p_0(TypeInfo_for_OptionType_39, TypeInfo_for_UserDataType_40, (MR_Word) (&mercury__getopt_scalar_common_1[1]), Internal_25, Args0_14, NonOptionArgs_16, (MR_Word) ((MR_Unsigned) 0U), &RevOptionArgs_26, MaybeError_17, STATE_VARIABLE_OptionTable_0_27, STATE_VARIABLE_OptionTable_28, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), OptionsSet_18, STATE_VARIABLE_UserData_0_29, STATE_VARIABLE_UserData_30, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_32);
    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RevOptionArgs_26, OptionArgs_15);
  }
}

void MR_CALL 
mercury__getopt__process_options_userdata_10_p_0(
  MR_Word TypeInfo_for_OptionType_35,
  MR_Word TypeInfo_for_UserDataType_36,
  MR_Word OptionOps_11,
  MR_Word Args0_12,
  MR_Word * OptionArgs_13,
  MR_Word * NonOptionArgs_14,
  MR_Word * MaybeError_15,
  MR_Word * OptionsSet_16,
  MR_Word STATE_VARIABLE_OptionTable_0_25,
  MR_Word * STATE_VARIABLE_OptionTable_26,
  MR_Box STATE_VARIABLE_UserData_0_27,
  MR_Box * STATE_VARIABLE_UserData_28)
{
  {
    MR_Word Short_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OptionOps_11, (MR_Integer) 0))));
    MR_Word Long_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OptionOps_11, (MR_Integer) 1))));
    MR_Word Special_21 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OptionOps_11, (MR_Integer) 2))));
    MR_Word Internal_22;
    MR_Word RevOptionArgs_23;
    MR_Word Var_29;
    MR_Box conv0_Var_24;

    {
      Var_29 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Var_29, 0) = ((MR_Box) (Special_21));
    }
    {
      Internal_22 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Internal_22, 0) = ((MR_Box) (Short_19));
      MR_hl_field(MR_mktag(0), Internal_22, 1) = ((MR_Box) (Long_20));
      MR_hl_field(MR_mktag(0), Internal_22, 2) = ((MR_Box) (Var_29));
    }
    mercury__getopt__process_arguments_14_p_0(TypeInfo_for_OptionType_35, TypeInfo_for_UserDataType_36, (MR_Word) (&mercury__getopt_scalar_common_1[0]), Internal_22, Args0_12, NonOptionArgs_14, (MR_Word) ((MR_Unsigned) 0U), &RevOptionArgs_23, MaybeError_15, STATE_VARIABLE_OptionTable_0_25, STATE_VARIABLE_OptionTable_26, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), OptionsSet_16, STATE_VARIABLE_UserData_0_27, STATE_VARIABLE_UserData_28, ((MR_Box) ((MR_Integer) 0)), &conv0_Var_24);
    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RevOptionArgs_23, OptionArgs_13);
  }
}

void MR_CALL 
mercury__getopt__process_options_track_io_9_p_0(
  MR_Word TypeInfo_for_OptionType_33,
  MR_Word OptionOps_10,
  MR_Word Args0_11,
  MR_Word * OptionArgs_12,
  MR_Word * NonOptionArgs_13,
  MR_Word OptionTable0_14,
  MR_Word * Result_15,
  MR_Word * OptionsSet_16)
{
  {
    MR_Word Short_18 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OptionOps_10, (MR_Integer) 0))));
    MR_Word Long_19 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OptionOps_10, (MR_Integer) 1))));
    MR_Word Special_20 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OptionOps_10, (MR_Integer) 2))));
    MR_Word Internal_21;
    MR_Word RevOptionArgs_22;
    MR_Word MaybeError_23;
    MR_Word OptionTable_24;
    MR_Word Var_28;
    MR_Box conv1_Var_25;
    MR_Box conv0_STATE_VARIABLE_IO_27;

    {
      Var_28 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_28, 0) = ((MR_Box) (Special_20));
    }
    {
      Internal_21 = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Internal_21, 0) = ((MR_Box) (Short_18));
      MR_hl_field(MR_mktag(0), Internal_21, 1) = ((MR_Box) (Long_19));
      MR_hl_field(MR_mktag(0), Internal_21, 2) = ((MR_Box) (Var_28));
    }
    mercury__getopt__process_arguments_14_p_0(TypeInfo_for_OptionType_33, (MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), (MR_Word) (&mercury__getopt_scalar_common_1[1]), Internal_21, Args0_11, NonOptionArgs_13, (MR_Word) ((MR_Unsigned) 0U), &RevOptionArgs_22, &MaybeError_23, OptionTable0_14, &OptionTable_24, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), OptionsSet_16, ((MR_Box) ((MR_Integer) 0)), &conv1_Var_25, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_27);
    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RevOptionArgs_22, OptionArgs_12);
    if ((MaybeError_23 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *Result_15 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (OptionTable_24));
      }
    else
    {
      MR_Word Error_46 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeError_23, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_15 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_46));
      }
    }
  }
}

void MR_CALL 
mercury__getopt__process_options_track_7_p_0(
  MR_Word TypeInfo_for_OptionType_29,
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
    MR_Box conv1_Var_22;
    MR_Box conv0_Var_23;

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
    mercury__getopt__process_arguments_14_p_0(TypeInfo_for_OptionType_29, (MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), (MR_Word) (&mercury__getopt_scalar_common_1[0]), Internal_18, Args0_9, NonOptionArgs_11, (MR_Word) ((MR_Unsigned) 0U), &RevOptionArgs_19, &MaybeError_20, OptionTable0_12, &OptionTable_21, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), OptionsSet_14, ((MR_Box) ((MR_Integer) 0)), &conv1_Var_22, ((MR_Box) ((MR_Integer) 0)), &conv0_Var_23);
    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RevOptionArgs_19, OptionArgs_10);
    if ((MaybeError_20 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *Result_13 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (OptionTable_21));
      }
    else
    {
      MR_Word Error_42 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeError_20, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_13 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_42));
      }
    }
  }
}

void MR_CALL 
mercury__getopt__process_options_io_6_p_0(
  MR_Word TypeInfo_for_OptionType_16,
  MR_Word OptionOps_7,
  MR_Word Args0_8,
  MR_Word * NonOptionArgs_9,
  MR_Word * Result_10)
{
  {
    MR_Word _OptionArgs_12;

    mercury__getopt__process_options_io_7_p_0(TypeInfo_for_OptionType_16, OptionOps_7, Args0_8, &_OptionArgs_12, NonOptionArgs_9, Result_10);
  }
}

void MR_CALL 
mercury__getopt__process_options_io_7_p_0(
  MR_Word TypeInfo_for_OptionType_27,
  MR_Word OptionOps_8,
  MR_Word Args0_9,
  MR_Word * OptionArgs_10,
  MR_Word * NonOptionArgs_11,
  MR_Word * Result_12)
{
  {
    MR_Word Internal_14;
    MR_Word OptionTable0_15;
    MR_Word RevOptionArgs_16;
    MR_Word MaybeError_17;
    MR_Word OptionTable_18;
    MR_Word _OptionsSet_19;
    MR_Box conv1_Var_20;
    MR_Box conv0_STATE_VARIABLE_IO_22;

    mercury__getopt__option_ops_to_internal_and_option_table_3_p_0(TypeInfo_for_OptionType_27, (MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), OptionOps_8, &Internal_14, &OptionTable0_15);
    mercury__getopt__process_arguments_14_p_0(TypeInfo_for_OptionType_27, (MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), (MR_Word) (&mercury__getopt_scalar_common_1[1]), Internal_14, Args0_9, NonOptionArgs_11, (MR_Word) ((MR_Unsigned) 0U), &RevOptionArgs_16, &MaybeError_17, OptionTable0_15, &OptionTable_18, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), &_OptionsSet_19, ((MR_Box) ((MR_Integer) 0)), &conv1_Var_20, ((MR_Box) ((MR_Integer) 0)), &conv0_STATE_VARIABLE_IO_22);
    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RevOptionArgs_16, OptionArgs_10);
    if ((MaybeError_17 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *Result_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (OptionTable_18));
      }
    else
    {
      MR_Word Error_40 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeError_17, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_12 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_40));
      }
    }
  }
}

void MR_CALL 
mercury__getopt__process_options_4_p_0(
  MR_Word TypeInfo_for_OptionType_10,
  MR_Word OptionOps_5,
  MR_Word Args0_6,
  MR_Word * NonOptionArgs_7,
  MR_Word * Result_8)
{
  {
    MR_Word _OptionArgs_9;

    mercury__getopt__process_options_5_p_0(TypeInfo_for_OptionType_10, OptionOps_5, Args0_6, &_OptionArgs_9, NonOptionArgs_7, Result_8);
  }
}

void MR_CALL 
mercury__getopt__process_options_5_p_0(
  MR_Word TypeInfo_for_OptionType_23,
  MR_Word OptionOps_6,
  MR_Word Args0_7,
  MR_Word * OptionArgs_8,
  MR_Word * NonOptionArgs_9,
  MR_Word * Result_10)
{
  {
    MR_Word Internal_11;
    MR_Word OptionTable0_12;
    MR_Word RevOptionArgs_13;
    MR_Word MaybeError_14;
    MR_Word OptionTable_15;
    MR_Word _OptionsSet_16;
    MR_Box conv1_Var_17;
    MR_Box conv0_Var_18;

    mercury__getopt__option_ops_to_internal_and_option_table_3_p_0(TypeInfo_for_OptionType_23, (MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), OptionOps_6, &Internal_11, &OptionTable0_12);
    mercury__getopt__process_arguments_14_p_0(TypeInfo_for_OptionType_23, (MR_Word) (&mercury__unit__unit__type_ctor_info_unit_0), (MR_Word) (&mercury__getopt_scalar_common_1[0]), Internal_11, Args0_7, NonOptionArgs_9, (MR_Word) ((MR_Unsigned) 0U), &RevOptionArgs_13, &MaybeError_14, OptionTable0_12, &OptionTable_15, (MR_Word) (((MR_Box) ((MR_Unsigned) 0U))), &_OptionsSet_16, ((MR_Box) ((MR_Integer) 0)), &conv1_Var_17, ((MR_Box) ((MR_Integer) 0)), &conv0_Var_18);
    mercury__list__reverse_2_p_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), RevOptionArgs_13, OptionArgs_8);
    if ((MaybeError_14 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
        *Result_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (OptionTable_15));
      }
    else
    {
      MR_Word Error_36 = ((MR_Word) ((MR_hl_field(MR_mktag(1), MaybeError_14, (MR_Integer) 0))));

      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
        *Result_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_36));
      }
    }
  }
}

void MR_CALL 
mercury__getopt__LCMCpr_process_arguments_1_14_p_0(
  MR_Word TypeInfo_for_OptionType_201,
  MR_Word TypeInfo_for_UserDataType_202,
  MR_Word TypeClassInfo_for_read_file_contents_200,
  MR_Word OptionOps_1,
  MR_Word HeadVar__2_2,
  MR_Word * AddrOfHeadVar__3_205,
  MR_Word STATE_VARIABLE_OptionArgs_0_4,
  MR_Word * STATE_VARIABLE_OptionArgs_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_OptionTable_0_7,
  MR_Word * STATE_VARIABLE_OptionTable_8,
  MR_Word STATE_VARIABLE_OptionsSet_0_9,
  MR_Word * STATE_VARIABLE_OptionsSet_10,
  MR_Box STATE_VARIABLE_UserData_0_11,
  MR_Box * STATE_VARIABLE_UserData_12,
  MR_Box STATE_VARIABLE_MaybeIO_0_13,
  MR_Box * STATE_VARIABLE_MaybeIO_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *AddrOfHeadVar__3_205 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_MaybeIO_14 = STATE_VARIABLE_MaybeIO_0_13;
      *STATE_VARIABLE_UserData_12 = STATE_VARIABLE_UserData_0_11;
      *STATE_VARIABLE_OptionsSet_10 = STATE_VARIABLE_OptionsSet_0_9;
      *STATE_VARIABLE_OptionTable_8 = STATE_VARIABLE_OptionTable_0_7;
      *STATE_VARIABLE_OptionArgs_5 = STATE_VARIABLE_OptionArgs_0_4;
    }
    else
    {
      MR_String Arg0_32 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Args0_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = (strcmp(Arg0_32, (MR_String) "--") == 0);
      if (succeeded)
      {
        *AddrOfHeadVar__3_205 = Args0_33;
        *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_MaybeIO_14 = STATE_VARIABLE_MaybeIO_0_13;
        *STATE_VARIABLE_UserData_12 = STATE_VARIABLE_UserData_0_11;
        *STATE_VARIABLE_OptionsSet_10 = STATE_VARIABLE_OptionsSet_0_9;
        *STATE_VARIABLE_OptionTable_8 = STATE_VARIABLE_OptionTable_0_7;
        *STATE_VARIABLE_OptionArgs_5 = STATE_VARIABLE_OptionArgs_0_4;
      }
      else
      {
        MR_String LongOption_41;

        succeeded = mercury__string__append_3_p_1((MR_String) "--no-", &LongOption_41, Arg0_32);
        if (succeeded)
        {
          MR_Word LongOptionPred_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OptionOps_1, (MR_Integer) 1))));
          MR_Box Flag_43;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), LongOptionPred_42, (MR_Integer) 1))));

          succeeded = func_0(((MR_Box) (LongOptionPred_42)), ((MR_Box) (LongOption_41)), &Flag_43);
          if (succeeded)
          {
            MR_String OptName_44;
            MR_Word NegMaybeError_45;
            MR_Word NewOptionTable_46;
            MR_Word STATE_VARIABLE_OptionsSet_79_79;
            MR_Box STATE_VARIABLE_UserData_80_80;

            OptName_44 = mercury__string__f_43_43_2_f_0((MR_String) "--", LongOption_41);
            mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_110_101_103_97_116_101_100_95_111_112_116_105_111_110_95_95_91_50_93_95_48_10_p_0(TypeInfo_for_OptionType_201, OptionOps_1, OptName_44, Flag_43, &NegMaybeError_45, STATE_VARIABLE_OptionTable_0_7, &NewOptionTable_46, STATE_VARIABLE_OptionsSet_0_9, &STATE_VARIABLE_OptionsSet_79_79, STATE_VARIABLE_UserData_0_11, &STATE_VARIABLE_UserData_80_80);
            if ((NegMaybeError_45 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word STATE_VARIABLE_OptionArgs_82_82;
              MR_Word next_value_of_HeadVar__2_2;
              MR_Word next_value_of_STATE_VARIABLE_OptionArgs_0_4;
              MR_Word next_value_of_STATE_VARIABLE_OptionTable_0_7;
              MR_Word next_value_of_STATE_VARIABLE_OptionsSet_0_9;
              MR_Box next_value_of_STATE_VARIABLE_UserData_0_11;

              {
                STATE_VARIABLE_OptionArgs_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_OptionArgs_82_82, 0) = ((MR_Box) (Arg0_32));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_OptionArgs_82_82, 1) = ((MR_Box) (STATE_VARIABLE_OptionArgs_0_4));
              }
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__2_2 = Args0_33;
              next_value_of_STATE_VARIABLE_OptionArgs_0_4 = STATE_VARIABLE_OptionArgs_82_82;
              next_value_of_STATE_VARIABLE_OptionTable_0_7 = NewOptionTable_46;
              next_value_of_STATE_VARIABLE_OptionsSet_0_9 = STATE_VARIABLE_OptionsSet_79_79;
              next_value_of_STATE_VARIABLE_UserData_0_11 = STATE_VARIABLE_UserData_80_80;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              STATE_VARIABLE_OptionArgs_0_4 = next_value_of_STATE_VARIABLE_OptionArgs_0_4;
              STATE_VARIABLE_OptionTable_0_7 = next_value_of_STATE_VARIABLE_OptionTable_0_7;
              STATE_VARIABLE_OptionsSet_0_9 = next_value_of_STATE_VARIABLE_OptionsSet_0_9;
              STATE_VARIABLE_UserData_0_11 = next_value_of_STATE_VARIABLE_UserData_0_11;
              continue;
            }
            else
            {
              *HeadVar__6_6 = NegMaybeError_45;
              *AddrOfHeadVar__3_205 = Args0_33;
              *STATE_VARIABLE_OptionArgs_5 = STATE_VARIABLE_OptionArgs_0_4;
              *STATE_VARIABLE_OptionTable_8 = STATE_VARIABLE_OptionTable_0_7;
              *STATE_VARIABLE_OptionsSet_10 = STATE_VARIABLE_OptionsSet_79_79;
              *STATE_VARIABLE_UserData_12 = STATE_VARIABLE_UserData_80_80;
              *STATE_VARIABLE_MaybeIO_14 = STATE_VARIABLE_MaybeIO_0_13;
            }
          }
          else
          {
            MR_Word Error_48;

            {
              Error_48 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Error_48, 0) = ((MR_Box) (Arg0_32));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__6_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_48));
            }
            *AddrOfHeadVar__3_205 = Args0_33;
            *STATE_VARIABLE_MaybeIO_14 = STATE_VARIABLE_MaybeIO_0_13;
            *STATE_VARIABLE_UserData_12 = STATE_VARIABLE_UserData_0_11;
            *STATE_VARIABLE_OptionsSet_10 = STATE_VARIABLE_OptionsSet_0_9;
            *STATE_VARIABLE_OptionTable_8 = STATE_VARIABLE_OptionTable_0_7;
            *STATE_VARIABLE_OptionArgs_5 = STATE_VARIABLE_OptionArgs_0_4;
          }
        }
        else
        {
          MR_String LongOptionStr_49;

          succeeded = mercury__string__append_3_p_1((MR_String) "--", &LongOptionStr_49, Arg0_32);
          if (succeeded)
          {
            MR_Word MaybeArg_53;
            MR_String OptionName_54;
            MR_String LongOption_148;
            MR_Word LongOptionPred_149 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OptionOps_1, (MR_Integer) 1))));
            MR_Integer OptionLen_50;
            MR_Box Flag_145;
            MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *);

            succeeded = mercury__string__sub_string_search_3_p_0(LongOptionStr_49, (MR_String) "=", &OptionLen_50);
            if (succeeded)
            {
              MR_String EqualOptionArg_51;
              MR_String OptionArg_52;

              mercury__string__split_4_p_0(LongOptionStr_49, OptionLen_50, &LongOption_148, &EqualOptionArg_51);
              succeeded = mercury__string__first_char_3_p_2(EqualOptionArg_51, (MR_Char) 61, &OptionArg_52);
              if (succeeded)
                {
                  MaybeArg_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), MaybeArg_53, 0) = ((MR_Box) (OptionArg_52));
                }
              else
                {
                  mercury__require__error_1_p_0((MR_String) "bad split of --longoption=arg");
                  return;
                }
            }
            else
            {
              LongOption_148 = LongOptionStr_49;
              MaybeArg_53 = (MR_Word) ((MR_Unsigned) 0U);
            }
            OptionName_54 = mercury__string__f_43_43_2_f_0((MR_String) "--", LongOption_148);
            func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), LongOptionPred_149, (MR_Integer) 1))));
            succeeded = func_1(((MR_Box) (LongOptionPred_149)), ((MR_Box) (LongOption_148)), &Flag_145);
            if (succeeded)
            {
              MR_Word OptionData_55;
              MR_Box conv2_OptionData_55;

              succeeded = mercury__map__search_3_p_0(TypeInfo_for_OptionType_201, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), STATE_VARIABLE_OptionTable_0_7, Flag_145, &conv2_OptionData_55);
              if (succeeded)
              {
                OptionData_55 = ((MR_Word) (conv2_OptionData_55));
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_Word Args1_56;
                MR_Word LongMaybeError_57;
                MR_Word STATE_VARIABLE_OptionArgs_93_93;
                MR_Word STATE_VARIABLE_OptionArgs_94_94;
                MR_Word STATE_VARIABLE_OptionsSet_95_95;
                MR_Box STATE_VARIABLE_UserData_96_96;
                MR_Box STATE_VARIABLE_MaybeIO_97_97;
                MR_Word NewOptionTable_140;

                {
                  STATE_VARIABLE_OptionArgs_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_OptionArgs_93_93, 0) = ((MR_Box) (Arg0_32));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_OptionArgs_93_93, 1) = ((MR_Box) (STATE_VARIABLE_OptionArgs_0_4));
                }
                mercury__getopt__handle_long_option_18_p_0(TypeInfo_for_OptionType_201, TypeInfo_for_UserDataType_202, TypeClassInfo_for_read_file_contents_200, OptionOps_1, OptionName_54, Flag_145, OptionData_55, MaybeArg_53, Args0_33, &Args1_56, STATE_VARIABLE_OptionArgs_93_93, &STATE_VARIABLE_OptionArgs_94_94, &LongMaybeError_57, STATE_VARIABLE_OptionTable_0_7, &NewOptionTable_140, STATE_VARIABLE_OptionsSet_0_9, &STATE_VARIABLE_OptionsSet_95_95, STATE_VARIABLE_UserData_0_11, &STATE_VARIABLE_UserData_96_96, STATE_VARIABLE_MaybeIO_0_13, &STATE_VARIABLE_MaybeIO_97_97);
                if ((LongMaybeError_57 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word next_value_of_HeadVar__2_2 = Args1_56;
                  MR_Word next_value_of_STATE_VARIABLE_OptionArgs_0_4 = STATE_VARIABLE_OptionArgs_94_94;
                  MR_Word next_value_of_STATE_VARIABLE_OptionTable_0_7 = NewOptionTable_140;
                  MR_Word next_value_of_STATE_VARIABLE_OptionsSet_0_9 = STATE_VARIABLE_OptionsSet_95_95;
                  MR_Box next_value_of_STATE_VARIABLE_UserData_0_11 = STATE_VARIABLE_UserData_96_96;
                  MR_Box next_value_of_STATE_VARIABLE_MaybeIO_0_13 = STATE_VARIABLE_MaybeIO_97_97;

                  // direct tailcall eliminated
                  ;
                  HeadVar__2_2 = next_value_of_HeadVar__2_2;
                  STATE_VARIABLE_OptionArgs_0_4 = next_value_of_STATE_VARIABLE_OptionArgs_0_4;
                  STATE_VARIABLE_OptionTable_0_7 = next_value_of_STATE_VARIABLE_OptionTable_0_7;
                  STATE_VARIABLE_OptionsSet_0_9 = next_value_of_STATE_VARIABLE_OptionsSet_0_9;
                  STATE_VARIABLE_UserData_0_11 = next_value_of_STATE_VARIABLE_UserData_0_11;
                  STATE_VARIABLE_MaybeIO_0_13 = next_value_of_STATE_VARIABLE_MaybeIO_0_13;
                  continue;
                }
                else
                {
                  *HeadVar__6_6 = LongMaybeError_57;
                  *AddrOfHeadVar__3_205 = Args0_33;
                  *STATE_VARIABLE_OptionArgs_5 = STATE_VARIABLE_OptionArgs_94_94;
                  *STATE_VARIABLE_OptionTable_8 = STATE_VARIABLE_OptionTable_0_7;
                  *STATE_VARIABLE_OptionsSet_10 = STATE_VARIABLE_OptionsSet_95_95;
                  *STATE_VARIABLE_UserData_12 = STATE_VARIABLE_UserData_96_96;
                  *STATE_VARIABLE_MaybeIO_14 = STATE_VARIABLE_MaybeIO_97_97;
                }
              }
              else
              {
                MR_Word Error_141;

                {
                  Error_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Error_141, 0) = Flag_145;
                  MR_hl_field(MR_mktag(1), Error_141, 1) = ((MR_Box) (Arg0_32));
                  MR_hl_field(MR_mktag(1), Error_141, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__6_6 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_141));
                }
                *AddrOfHeadVar__3_205 = Args0_33;
                *STATE_VARIABLE_MaybeIO_14 = STATE_VARIABLE_MaybeIO_0_13;
                *STATE_VARIABLE_UserData_12 = STATE_VARIABLE_UserData_0_11;
                *STATE_VARIABLE_OptionsSet_10 = STATE_VARIABLE_OptionsSet_0_9;
                *STATE_VARIABLE_OptionTable_8 = STATE_VARIABLE_OptionTable_0_7;
                *STATE_VARIABLE_OptionArgs_5 = STATE_VARIABLE_OptionArgs_0_4;
              }
            }
            else
            {
              MR_Word Error_144;

              {
                Error_144 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Error_144, 0) = ((MR_Box) (OptionName_54));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__6_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_144));
              }
              *AddrOfHeadVar__3_205 = Args0_33;
              *STATE_VARIABLE_MaybeIO_14 = STATE_VARIABLE_MaybeIO_0_13;
              *STATE_VARIABLE_UserData_12 = STATE_VARIABLE_UserData_0_11;
              *STATE_VARIABLE_OptionsSet_10 = STATE_VARIABLE_OptionsSet_0_9;
              *STATE_VARIABLE_OptionTable_8 = STATE_VARIABLE_OptionTable_0_7;
              *STATE_VARIABLE_OptionArgs_5 = STATE_VARIABLE_OptionArgs_0_4;
            }
          }
          else
          {
            MR_String ShortOptions_59;

            succeeded = mercury__string__first_char_3_p_2(Arg0_32, (MR_Char) 45, &ShortOptions_59);
            if (succeeded)
            {
              succeeded = (strcmp(ShortOptions_59, (MR_String) "") == 0);
              succeeded = !(succeeded);
            }
            if (succeeded)
            {
              MR_Word ShortOptionsList_60;
              MR_Char SingleShortOpt_61;
              MR_Word Var_106;
              MR_Char Var_107;
              MR_Word Var_108;

              mercury__string__to_char_list_2_p_0(ShortOptions_59, &ShortOptionsList_60);
              succeeded = (ShortOptionsList_60 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SingleShortOpt_61 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), ShortOptionsList_60, (MR_Integer) 0)));
                Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortOptionsList_60, (MR_Integer) 1))));
                succeeded = (Var_106 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_107 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Var_106, (MR_Integer) 0)));
                  Var_108 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_106, (MR_Integer) 1))));
                  succeeded = (Var_107 == (MR_Char) 45);
                  if (succeeded)
                    succeeded = (Var_108 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word ShortOptionPred_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OptionOps_1, (MR_Integer) 0))));
                MR_Box Flag_157;
                MR_bool MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), ShortOptionPred_62, (MR_Integer) 1))));

                succeeded = func_3(((MR_Box) (ShortOptionPred_62)), ((MR_Box) (MR_Word) (SingleShortOpt_61)), &Flag_157);
                if (succeeded)
                {
                  MR_Word Var_109;
                  MR_Word Var_111;
                  MR_Word STATE_VARIABLE_OptionsSet_113_113;
                  MR_Box STATE_VARIABLE_UserData_114_114;
                  MR_String OptName_153;
                  MR_Word NegMaybeError_154;
                  MR_Word NewOptionTable_155;

                  {
                    Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (MR_Word) (SingleShortOpt_61));
                    MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (MR_Word) ((MR_Char) 45));
                    MR_hl_field(MR_mktag(1), Var_109, 1) = ((MR_Box) (Var_111));
                  }
                  mercury__string__from_char_list_2_p_0(Var_109, &OptName_153);
                  mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_110_101_103_97_116_101_100_95_111_112_116_105_111_110_95_95_91_50_93_95_48_10_p_0(TypeInfo_for_OptionType_201, OptionOps_1, OptName_153, Flag_157, &NegMaybeError_154, STATE_VARIABLE_OptionTable_0_7, &NewOptionTable_155, STATE_VARIABLE_OptionsSet_0_9, &STATE_VARIABLE_OptionsSet_113_113, STATE_VARIABLE_UserData_0_11, &STATE_VARIABLE_UserData_114_114);
                  if ((NegMaybeError_154 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word STATE_VARIABLE_OptionArgs_116_116;
                    MR_Word next_value_of_HeadVar__2_2;
                    MR_Word next_value_of_STATE_VARIABLE_OptionArgs_0_4;
                    MR_Word next_value_of_STATE_VARIABLE_OptionTable_0_7;
                    MR_Word next_value_of_STATE_VARIABLE_OptionsSet_0_9;
                    MR_Box next_value_of_STATE_VARIABLE_UserData_0_11;

                    {
                      STATE_VARIABLE_OptionArgs_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), STATE_VARIABLE_OptionArgs_116_116, 0) = ((MR_Box) (Arg0_32));
                      MR_hl_field(MR_mktag(1), STATE_VARIABLE_OptionArgs_116_116, 1) = ((MR_Box) (STATE_VARIABLE_OptionArgs_0_4));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_HeadVar__2_2 = Args0_33;
                    next_value_of_STATE_VARIABLE_OptionArgs_0_4 = STATE_VARIABLE_OptionArgs_116_116;
                    next_value_of_STATE_VARIABLE_OptionTable_0_7 = NewOptionTable_155;
                    next_value_of_STATE_VARIABLE_OptionsSet_0_9 = STATE_VARIABLE_OptionsSet_113_113;
                    next_value_of_STATE_VARIABLE_UserData_0_11 = STATE_VARIABLE_UserData_114_114;
                    HeadVar__2_2 = next_value_of_HeadVar__2_2;
                    STATE_VARIABLE_OptionArgs_0_4 = next_value_of_STATE_VARIABLE_OptionArgs_0_4;
                    STATE_VARIABLE_OptionTable_0_7 = next_value_of_STATE_VARIABLE_OptionTable_0_7;
                    STATE_VARIABLE_OptionsSet_0_9 = next_value_of_STATE_VARIABLE_OptionsSet_0_9;
                    STATE_VARIABLE_UserData_0_11 = next_value_of_STATE_VARIABLE_UserData_0_11;
                    continue;
                  }
                  else
                  {
                    *HeadVar__6_6 = NegMaybeError_154;
                    *AddrOfHeadVar__3_205 = Args0_33;
                    *STATE_VARIABLE_OptionArgs_5 = STATE_VARIABLE_OptionArgs_0_4;
                    *STATE_VARIABLE_OptionTable_8 = STATE_VARIABLE_OptionTable_0_7;
                    *STATE_VARIABLE_OptionsSet_10 = STATE_VARIABLE_OptionsSet_113_113;
                    *STATE_VARIABLE_UserData_12 = STATE_VARIABLE_UserData_114_114;
                    *STATE_VARIABLE_MaybeIO_14 = STATE_VARIABLE_MaybeIO_0_13;
                  }
                }
                else
                {
                  MR_String Var_122;
                  MR_Word Error_156;

                  Var_122 = mercury__string__f_43_43_2_f_0((MR_String) "-", ShortOptions_59);
                  {
                    Error_156 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Error_156, 0) = ((MR_Box) (Var_122));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__6_6 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_156));
                  }
                  *AddrOfHeadVar__3_205 = Args0_33;
                  *STATE_VARIABLE_MaybeIO_14 = STATE_VARIABLE_MaybeIO_0_13;
                  *STATE_VARIABLE_UserData_12 = STATE_VARIABLE_UserData_0_11;
                  *STATE_VARIABLE_OptionsSet_10 = STATE_VARIABLE_OptionsSet_0_9;
                  *STATE_VARIABLE_OptionTable_8 = STATE_VARIABLE_OptionTable_0_7;
                  *STATE_VARIABLE_OptionArgs_5 = STATE_VARIABLE_OptionArgs_0_4;
                }
              }
              else
              {
                MR_Word ShortMaybeError_64;
                MR_Word STATE_VARIABLE_OptionArgs_124_124;
                MR_Word STATE_VARIABLE_OptionArgs_125_125;
                MR_Word STATE_VARIABLE_OptionsSet_126_126;
                MR_Box STATE_VARIABLE_UserData_127_127;
                MR_Box STATE_VARIABLE_MaybeIO_128_128;
                MR_Word NewOptionTable_167;
                MR_Word Args1_168;

                {
                  STATE_VARIABLE_OptionArgs_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_OptionArgs_124_124, 0) = ((MR_Box) (Arg0_32));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_OptionArgs_124_124, 1) = ((MR_Box) (STATE_VARIABLE_OptionArgs_0_4));
                }
                mercury__getopt__handle_short_options_15_p_0(TypeInfo_for_OptionType_201, TypeInfo_for_UserDataType_202, TypeClassInfo_for_read_file_contents_200, OptionOps_1, ShortOptionsList_60, Args0_33, &Args1_168, STATE_VARIABLE_OptionArgs_124_124, &STATE_VARIABLE_OptionArgs_125_125, &ShortMaybeError_64, STATE_VARIABLE_OptionTable_0_7, &NewOptionTable_167, STATE_VARIABLE_OptionsSet_0_9, &STATE_VARIABLE_OptionsSet_126_126, STATE_VARIABLE_UserData_0_11, &STATE_VARIABLE_UserData_127_127, STATE_VARIABLE_MaybeIO_0_13, &STATE_VARIABLE_MaybeIO_128_128);
                if ((ShortMaybeError_64 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word next_value_of_HeadVar__2_2 = Args1_168;
                  MR_Word next_value_of_STATE_VARIABLE_OptionArgs_0_4 = STATE_VARIABLE_OptionArgs_125_125;
                  MR_Word next_value_of_STATE_VARIABLE_OptionTable_0_7 = NewOptionTable_167;
                  MR_Word next_value_of_STATE_VARIABLE_OptionsSet_0_9 = STATE_VARIABLE_OptionsSet_126_126;
                  MR_Box next_value_of_STATE_VARIABLE_UserData_0_11 = STATE_VARIABLE_UserData_127_127;
                  MR_Box next_value_of_STATE_VARIABLE_MaybeIO_0_13 = STATE_VARIABLE_MaybeIO_128_128;

                  // direct tailcall eliminated
                  ;
                  HeadVar__2_2 = next_value_of_HeadVar__2_2;
                  STATE_VARIABLE_OptionArgs_0_4 = next_value_of_STATE_VARIABLE_OptionArgs_0_4;
                  STATE_VARIABLE_OptionTable_0_7 = next_value_of_STATE_VARIABLE_OptionTable_0_7;
                  STATE_VARIABLE_OptionsSet_0_9 = next_value_of_STATE_VARIABLE_OptionsSet_0_9;
                  STATE_VARIABLE_UserData_0_11 = next_value_of_STATE_VARIABLE_UserData_0_11;
                  STATE_VARIABLE_MaybeIO_0_13 = next_value_of_STATE_VARIABLE_MaybeIO_0_13;
                  continue;
                }
                else
                {
                  *HeadVar__6_6 = ShortMaybeError_64;
                  *AddrOfHeadVar__3_205 = Args0_33;
                  *STATE_VARIABLE_OptionArgs_5 = STATE_VARIABLE_OptionArgs_125_125;
                  *STATE_VARIABLE_OptionTable_8 = STATE_VARIABLE_OptionTable_0_7;
                  *STATE_VARIABLE_OptionsSet_10 = STATE_VARIABLE_OptionsSet_126_126;
                  *STATE_VARIABLE_UserData_12 = STATE_VARIABLE_UserData_127_127;
                  *STATE_VARIABLE_MaybeIO_14 = STATE_VARIABLE_MaybeIO_128_128;
                }
              }
            }
            else
            {
              MR_Word * AddrNonOptionArgsTail_204;
              MR_Word HeadVar__3_232;
              MR_Word next_value_of_HeadVar__2_2;
              MR_Word * next_value_of_AddrOfHeadVar__3_205;

              {
                HeadVar__3_232 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), HeadVar__3_232, 0) = ((MR_Box) (Arg0_32));
                MR_hl_field(MR_mktag(1), HeadVar__3_232, 1) = NULL;
              }
              AddrNonOptionArgsTail_204 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), HeadVar__3_232, (MR_Integer) 1)));
              *AddrOfHeadVar__3_205 = HeadVar__3_232;
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__2_2 = Args0_33;
              next_value_of_AddrOfHeadVar__3_205 = AddrNonOptionArgsTail_204;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              AddrOfHeadVar__3_205 = next_value_of_AddrOfHeadVar__3_205;
              continue;
            }
          }
        }
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__getopt__handle_short_options_15_p_0(
  MR_Word TypeInfo_for_OptionType_92,
  MR_Word TypeInfo_for_UserDataType_93,
  MR_Word TypeClassInfo_for_read_file_contents_91,
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
  MR_Box * STATE_VARIABLE_UserData_13,
  MR_Box STATE_VARIABLE_MaybeIO_0_14,
  MR_Box * STATE_VARIABLE_MaybeIO_15)
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
      *STATE_VARIABLE_MaybeIO_15 = STATE_VARIABLE_MaybeIO_0_14;
      *STATE_VARIABLE_UserData_13 = STATE_VARIABLE_UserData_0_12;
      *STATE_VARIABLE_OptionsSet_11 = STATE_VARIABLE_OptionsSet_0_10;
      *STATE_VARIABLE_OptionTable_9 = STATE_VARIABLE_OptionTable_0_8;
      *STATE_VARIABLE_OptionArgs_6 = STATE_VARIABLE_OptionArgs_0_5;
    }
    else
    {
      MR_Char Opt_34 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word Opts0_35 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));
      MR_Word ShortOptionPred_44 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OptionOps_1, (MR_Integer) 0))));
      MR_Box Flag_45;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), ShortOptionPred_44, (MR_Integer) 1))));

      succeeded = func_0(((MR_Box) (ShortOptionPred_44)), ((MR_Box) (MR_Word) (Opt_34)), &Flag_45);
      if (succeeded)
      {
        MR_Word OptionData_46;
        MR_Box conv1_OptionData_46;

        succeeded = mercury__map__search_3_p_0(TypeInfo_for_OptionType_92, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), STATE_VARIABLE_OptionTable_0_8, Flag_45, &conv1_OptionData_46);
        if (succeeded)
        {
          OptionData_46 = ((MR_Word) (conv1_OptionData_46));
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word Args1_48;
          MR_Word MaybeOptionArg_49;
          MR_Word Opts1_50;
          MR_String Option_51;
          MR_Word OptionMaybeError_52;
          MR_Word NewOptionTable_53;
          MR_Word STATE_VARIABLE_OptionArgs_68_68;
          MR_Word Var_69;
          MR_Word Var_71;
          MR_Word STATE_VARIABLE_OptionsSet_73_73;
          MR_Box STATE_VARIABLE_UserData_74_74;
          MR_Box STATE_VARIABLE_MaybeIO_75_75;
          MR_Word Var_95;

          mercury__getopt__need_arg_2_p_0(OptionData_46, &Var_95);
          succeeded = ((MR_Integer) 1 == Var_95);
          if (succeeded)
          {
            MR_String Arg_47;

            mercury__getopt__get_short_option_arg_6_p_0(Opts0_35, &Arg_47, HeadVar__3_3, &Args1_48, STATE_VARIABLE_OptionArgs_0_5, &STATE_VARIABLE_OptionArgs_68_68);
            {
              MaybeOptionArg_49 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeOptionArg_49, 0) = ((MR_Box) (Arg_47));
            }
            Opts1_50 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            MaybeOptionArg_49 = (MR_Word) ((MR_Unsigned) 0U);
            Opts1_50 = Opts0_35;
            Args1_48 = HeadVar__3_3;
            STATE_VARIABLE_OptionArgs_68_68 = STATE_VARIABLE_OptionArgs_0_5;
          }
          {
            Var_71 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_71, 0) = ((MR_Box) (MR_Word) (Opt_34));
            MR_hl_field(MR_mktag(1), Var_71, 1) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (MR_Word) ((MR_Char) 45));
            MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_71));
          }
          mercury__string__from_char_list_2_p_0(Var_69, &Option_51);
          mercury__getopt__process_option_14_p_0(TypeInfo_for_OptionType_92, TypeInfo_for_UserDataType_93, TypeClassInfo_for_read_file_contents_91, OptionOps_1, OptionData_46, Option_51, Flag_45, MaybeOptionArg_49, &OptionMaybeError_52, STATE_VARIABLE_OptionTable_0_8, &NewOptionTable_53, STATE_VARIABLE_OptionsSet_0_10, &STATE_VARIABLE_OptionsSet_73_73, STATE_VARIABLE_UserData_0_12, &STATE_VARIABLE_UserData_74_74, STATE_VARIABLE_MaybeIO_0_14, &STATE_VARIABLE_MaybeIO_75_75);
          if ((OptionMaybeError_52 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            MR_Word next_value_of_HeadVar__2_2 = Opts1_50;
            MR_Word next_value_of_HeadVar__3_3 = Args1_48;
            MR_Word next_value_of_STATE_VARIABLE_OptionArgs_0_5 = STATE_VARIABLE_OptionArgs_68_68;
            MR_Word next_value_of_STATE_VARIABLE_OptionTable_0_8 = NewOptionTable_53;
            MR_Word next_value_of_STATE_VARIABLE_OptionsSet_0_10 = STATE_VARIABLE_OptionsSet_73_73;
            MR_Box next_value_of_STATE_VARIABLE_UserData_0_12 = STATE_VARIABLE_UserData_74_74;
            MR_Box next_value_of_STATE_VARIABLE_MaybeIO_0_14 = STATE_VARIABLE_MaybeIO_75_75;

            // direct tailcall eliminated
            ;
            HeadVar__2_2 = next_value_of_HeadVar__2_2;
            HeadVar__3_3 = next_value_of_HeadVar__3_3;
            STATE_VARIABLE_OptionArgs_0_5 = next_value_of_STATE_VARIABLE_OptionArgs_0_5;
            STATE_VARIABLE_OptionTable_0_8 = next_value_of_STATE_VARIABLE_OptionTable_0_8;
            STATE_VARIABLE_OptionsSet_0_10 = next_value_of_STATE_VARIABLE_OptionsSet_0_10;
            STATE_VARIABLE_UserData_0_12 = next_value_of_STATE_VARIABLE_UserData_0_12;
            STATE_VARIABLE_MaybeIO_0_14 = next_value_of_STATE_VARIABLE_MaybeIO_0_14;
            continue;
          }
          else
          {
            *Args_4 = Args1_48;
            *HeadVar__7_7 = OptionMaybeError_52;
            *STATE_VARIABLE_OptionArgs_6 = STATE_VARIABLE_OptionArgs_68_68;
            *STATE_VARIABLE_OptionTable_9 = STATE_VARIABLE_OptionTable_0_8;
            *STATE_VARIABLE_OptionsSet_11 = STATE_VARIABLE_OptionsSet_73_73;
            *STATE_VARIABLE_UserData_13 = STATE_VARIABLE_UserData_74_74;
            *STATE_VARIABLE_MaybeIO_15 = STATE_VARIABLE_MaybeIO_75_75;
          }
        }
        else
        {
          MR_String OptString_55;
          MR_Word Error_56;
          MR_String Var_82;

          mercury__string__char_to_string_2_p_0(Opt_34, &OptString_55);
          *Args_4 = HeadVar__3_3;
          Var_82 = mercury__string__f_43_43_2_f_0((MR_String) "-", OptString_55);
          {
            Error_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Error_56, 0) = Flag_45;
            MR_hl_field(MR_mktag(1), Error_56, 1) = ((MR_Box) (Var_82));
            MR_hl_field(MR_mktag(1), Error_56, 2) = ((MR_Box) ((MR_Unsigned) 0U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__7_7 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_56));
          }
          *STATE_VARIABLE_MaybeIO_15 = STATE_VARIABLE_MaybeIO_0_14;
          *STATE_VARIABLE_UserData_13 = STATE_VARIABLE_UserData_0_12;
          *STATE_VARIABLE_OptionsSet_11 = STATE_VARIABLE_OptionsSet_0_10;
          *STATE_VARIABLE_OptionTable_9 = STATE_VARIABLE_OptionTable_0_8;
          *STATE_VARIABLE_OptionArgs_6 = STATE_VARIABLE_OptionArgs_0_5;
        }
      }
      else
      {
        MR_String Var_85;
        MR_String OptString_87;
        MR_Word Error_88;

        *Args_4 = HeadVar__3_3;
        mercury__string__char_to_string_2_p_0(Opt_34, &OptString_87);
        Var_85 = mercury__string__f_43_43_2_f_0((MR_String) "-", OptString_87);
        {
          Error_88 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Error_88, 0) = ((MR_Box) (Var_85));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__7_7 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_88));
        }
        *STATE_VARIABLE_MaybeIO_15 = STATE_VARIABLE_MaybeIO_0_14;
        *STATE_VARIABLE_UserData_13 = STATE_VARIABLE_UserData_0_12;
        *STATE_VARIABLE_OptionsSet_11 = STATE_VARIABLE_OptionsSet_0_10;
        *STATE_VARIABLE_OptionTable_9 = STATE_VARIABLE_OptionTable_0_8;
        *STATE_VARIABLE_OptionArgs_6 = STATE_VARIABLE_OptionArgs_0_5;
      }
    }
    break;
  }
}

void MR_CALL 
mercury__getopt__process_arguments_14_p_0(
  MR_Word TypeInfo_for_OptionType_201,
  MR_Word TypeInfo_for_UserDataType_202,
  MR_Word TypeClassInfo_for_read_file_contents_200,
  MR_Word OptionOps_1,
  MR_Word HeadVar__2_2,
  MR_Word * HeadVar__3_3,
  MR_Word STATE_VARIABLE_OptionArgs_0_4,
  MR_Word * STATE_VARIABLE_OptionArgs_5,
  MR_Word * HeadVar__6_6,
  MR_Word STATE_VARIABLE_OptionTable_0_7,
  MR_Word * STATE_VARIABLE_OptionTable_8,
  MR_Word STATE_VARIABLE_OptionsSet_0_9,
  MR_Word * STATE_VARIABLE_OptionsSet_10,
  MR_Box STATE_VARIABLE_UserData_0_11,
  MR_Box * STATE_VARIABLE_UserData_12,
  MR_Box STATE_VARIABLE_MaybeIO_0_13,
  MR_Box * STATE_VARIABLE_MaybeIO_14)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    ;
    if ((HeadVar__2_2 == (MR_Word) ((MR_Unsigned) 0U)))
    {
      *HeadVar__3_3 = (MR_Word) ((MR_Unsigned) 0U);
      *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
      *STATE_VARIABLE_MaybeIO_14 = STATE_VARIABLE_MaybeIO_0_13;
      *STATE_VARIABLE_UserData_12 = STATE_VARIABLE_UserData_0_11;
      *STATE_VARIABLE_OptionsSet_10 = STATE_VARIABLE_OptionsSet_0_9;
      *STATE_VARIABLE_OptionTable_8 = STATE_VARIABLE_OptionTable_0_7;
      *STATE_VARIABLE_OptionArgs_5 = STATE_VARIABLE_OptionArgs_0_4;
    }
    else
    {
      MR_String Arg0_32 = ((MR_String) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0))));
      MR_Word Args0_33 = ((MR_Word) ((MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1))));

      succeeded = (strcmp(Arg0_32, (MR_String) "--") == 0);
      if (succeeded)
      {
        *HeadVar__3_3 = Args0_33;
        *HeadVar__6_6 = (MR_Word) ((MR_Unsigned) 0U);
        *STATE_VARIABLE_MaybeIO_14 = STATE_VARIABLE_MaybeIO_0_13;
        *STATE_VARIABLE_UserData_12 = STATE_VARIABLE_UserData_0_11;
        *STATE_VARIABLE_OptionsSet_10 = STATE_VARIABLE_OptionsSet_0_9;
        *STATE_VARIABLE_OptionTable_8 = STATE_VARIABLE_OptionTable_0_7;
        *STATE_VARIABLE_OptionArgs_5 = STATE_VARIABLE_OptionArgs_0_4;
      }
      else
      {
        MR_String LongOption_41;

        succeeded = mercury__string__append_3_p_1((MR_String) "--no-", &LongOption_41, Arg0_32);
        if (succeeded)
        {
          MR_Word LongOptionPred_42 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OptionOps_1, (MR_Integer) 1))));
          MR_Box Flag_43;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), LongOptionPred_42, (MR_Integer) 1))));

          succeeded = func_0(((MR_Box) (LongOptionPred_42)), ((MR_Box) (LongOption_41)), &Flag_43);
          if (succeeded)
          {
            MR_String OptName_44;
            MR_Word NegMaybeError_45;
            MR_Word NewOptionTable_46;
            MR_Word STATE_VARIABLE_OptionsSet_79_79;
            MR_Box STATE_VARIABLE_UserData_80_80;

            OptName_44 = mercury__string__f_43_43_2_f_0((MR_String) "--", LongOption_41);
            mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_110_101_103_97_116_101_100_95_111_112_116_105_111_110_95_95_91_50_93_95_48_10_p_0(TypeInfo_for_OptionType_201, OptionOps_1, OptName_44, Flag_43, &NegMaybeError_45, STATE_VARIABLE_OptionTable_0_7, &NewOptionTable_46, STATE_VARIABLE_OptionsSet_0_9, &STATE_VARIABLE_OptionsSet_79_79, STATE_VARIABLE_UserData_0_11, &STATE_VARIABLE_UserData_80_80);
            if ((NegMaybeError_45 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              MR_Word STATE_VARIABLE_OptionArgs_82_82;
              MR_Word next_value_of_HeadVar__2_2;
              MR_Word next_value_of_STATE_VARIABLE_OptionArgs_0_4;
              MR_Word next_value_of_STATE_VARIABLE_OptionTable_0_7;
              MR_Word next_value_of_STATE_VARIABLE_OptionsSet_0_9;
              MR_Box next_value_of_STATE_VARIABLE_UserData_0_11;

              {
                STATE_VARIABLE_OptionArgs_82_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_OptionArgs_82_82, 0) = ((MR_Box) (Arg0_32));
                MR_hl_field(MR_mktag(1), STATE_VARIABLE_OptionArgs_82_82, 1) = ((MR_Box) (STATE_VARIABLE_OptionArgs_0_4));
              }
              // direct tailcall eliminated
              ;
              next_value_of_HeadVar__2_2 = Args0_33;
              next_value_of_STATE_VARIABLE_OptionArgs_0_4 = STATE_VARIABLE_OptionArgs_82_82;
              next_value_of_STATE_VARIABLE_OptionTable_0_7 = NewOptionTable_46;
              next_value_of_STATE_VARIABLE_OptionsSet_0_9 = STATE_VARIABLE_OptionsSet_79_79;
              next_value_of_STATE_VARIABLE_UserData_0_11 = STATE_VARIABLE_UserData_80_80;
              HeadVar__2_2 = next_value_of_HeadVar__2_2;
              STATE_VARIABLE_OptionArgs_0_4 = next_value_of_STATE_VARIABLE_OptionArgs_0_4;
              STATE_VARIABLE_OptionTable_0_7 = next_value_of_STATE_VARIABLE_OptionTable_0_7;
              STATE_VARIABLE_OptionsSet_0_9 = next_value_of_STATE_VARIABLE_OptionsSet_0_9;
              STATE_VARIABLE_UserData_0_11 = next_value_of_STATE_VARIABLE_UserData_0_11;
              continue;
            }
            else
            {
              *HeadVar__6_6 = NegMaybeError_45;
              *HeadVar__3_3 = Args0_33;
              *STATE_VARIABLE_OptionArgs_5 = STATE_VARIABLE_OptionArgs_0_4;
              *STATE_VARIABLE_OptionTable_8 = STATE_VARIABLE_OptionTable_0_7;
              *STATE_VARIABLE_OptionsSet_10 = STATE_VARIABLE_OptionsSet_79_79;
              *STATE_VARIABLE_UserData_12 = STATE_VARIABLE_UserData_80_80;
              *STATE_VARIABLE_MaybeIO_14 = STATE_VARIABLE_MaybeIO_0_13;
            }
          }
          else
          {
            MR_Word Error_48;

            {
              Error_48 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
              MR_hl_field(MR_mktag(0), Error_48, 0) = ((MR_Box) (Arg0_32));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *HeadVar__6_6 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_48));
            }
            *HeadVar__3_3 = Args0_33;
            *STATE_VARIABLE_MaybeIO_14 = STATE_VARIABLE_MaybeIO_0_13;
            *STATE_VARIABLE_UserData_12 = STATE_VARIABLE_UserData_0_11;
            *STATE_VARIABLE_OptionsSet_10 = STATE_VARIABLE_OptionsSet_0_9;
            *STATE_VARIABLE_OptionTable_8 = STATE_VARIABLE_OptionTable_0_7;
            *STATE_VARIABLE_OptionArgs_5 = STATE_VARIABLE_OptionArgs_0_4;
          }
        }
        else
        {
          MR_String LongOptionStr_49;

          succeeded = mercury__string__append_3_p_1((MR_String) "--", &LongOptionStr_49, Arg0_32);
          if (succeeded)
          {
            MR_Word MaybeArg_53;
            MR_String OptionName_54;
            MR_String LongOption_148;
            MR_Word LongOptionPred_149 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OptionOps_1, (MR_Integer) 1))));
            MR_Integer OptionLen_50;
            MR_Box Flag_145;
            MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *);

            succeeded = mercury__string__sub_string_search_3_p_0(LongOptionStr_49, (MR_String) "=", &OptionLen_50);
            if (succeeded)
            {
              MR_String EqualOptionArg_51;
              MR_String OptionArg_52;

              mercury__string__split_4_p_0(LongOptionStr_49, OptionLen_50, &LongOption_148, &EqualOptionArg_51);
              succeeded = mercury__string__first_char_3_p_2(EqualOptionArg_51, (MR_Char) 61, &OptionArg_52);
              if (succeeded)
                {
                  MaybeArg_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), MaybeArg_53, 0) = ((MR_Box) (OptionArg_52));
                }
              else
                {
                  mercury__require__error_1_p_0((MR_String) "bad split of --longoption=arg");
                  return;
                }
            }
            else
            {
              LongOption_148 = LongOptionStr_49;
              MaybeArg_53 = (MR_Word) ((MR_Unsigned) 0U);
            }
            OptionName_54 = mercury__string__f_43_43_2_f_0((MR_String) "--", LongOption_148);
            func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), LongOptionPred_149, (MR_Integer) 1))));
            succeeded = func_1(((MR_Box) (LongOptionPred_149)), ((MR_Box) (LongOption_148)), &Flag_145);
            if (succeeded)
            {
              MR_Word OptionData_55;
              MR_Box conv2_OptionData_55;

              succeeded = mercury__map__search_3_p_0(TypeInfo_for_OptionType_201, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), STATE_VARIABLE_OptionTable_0_7, Flag_145, &conv2_OptionData_55);
              if (succeeded)
              {
                OptionData_55 = ((MR_Word) (conv2_OptionData_55));
                succeeded = MR_TRUE;
              }
              if (succeeded)
              {
                MR_Word Args1_56;
                MR_Word LongMaybeError_57;
                MR_Word STATE_VARIABLE_OptionArgs_93_93;
                MR_Word STATE_VARIABLE_OptionArgs_94_94;
                MR_Word STATE_VARIABLE_OptionsSet_95_95;
                MR_Box STATE_VARIABLE_UserData_96_96;
                MR_Box STATE_VARIABLE_MaybeIO_97_97;
                MR_Word NewOptionTable_140;

                {
                  STATE_VARIABLE_OptionArgs_93_93 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_OptionArgs_93_93, 0) = ((MR_Box) (Arg0_32));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_OptionArgs_93_93, 1) = ((MR_Box) (STATE_VARIABLE_OptionArgs_0_4));
                }
                mercury__getopt__handle_long_option_18_p_0(TypeInfo_for_OptionType_201, TypeInfo_for_UserDataType_202, TypeClassInfo_for_read_file_contents_200, OptionOps_1, OptionName_54, Flag_145, OptionData_55, MaybeArg_53, Args0_33, &Args1_56, STATE_VARIABLE_OptionArgs_93_93, &STATE_VARIABLE_OptionArgs_94_94, &LongMaybeError_57, STATE_VARIABLE_OptionTable_0_7, &NewOptionTable_140, STATE_VARIABLE_OptionsSet_0_9, &STATE_VARIABLE_OptionsSet_95_95, STATE_VARIABLE_UserData_0_11, &STATE_VARIABLE_UserData_96_96, STATE_VARIABLE_MaybeIO_0_13, &STATE_VARIABLE_MaybeIO_97_97);
                if ((LongMaybeError_57 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word next_value_of_HeadVar__2_2 = Args1_56;
                  MR_Word next_value_of_STATE_VARIABLE_OptionArgs_0_4 = STATE_VARIABLE_OptionArgs_94_94;
                  MR_Word next_value_of_STATE_VARIABLE_OptionTable_0_7 = NewOptionTable_140;
                  MR_Word next_value_of_STATE_VARIABLE_OptionsSet_0_9 = STATE_VARIABLE_OptionsSet_95_95;
                  MR_Box next_value_of_STATE_VARIABLE_UserData_0_11 = STATE_VARIABLE_UserData_96_96;
                  MR_Box next_value_of_STATE_VARIABLE_MaybeIO_0_13 = STATE_VARIABLE_MaybeIO_97_97;

                  // direct tailcall eliminated
                  ;
                  HeadVar__2_2 = next_value_of_HeadVar__2_2;
                  STATE_VARIABLE_OptionArgs_0_4 = next_value_of_STATE_VARIABLE_OptionArgs_0_4;
                  STATE_VARIABLE_OptionTable_0_7 = next_value_of_STATE_VARIABLE_OptionTable_0_7;
                  STATE_VARIABLE_OptionsSet_0_9 = next_value_of_STATE_VARIABLE_OptionsSet_0_9;
                  STATE_VARIABLE_UserData_0_11 = next_value_of_STATE_VARIABLE_UserData_0_11;
                  STATE_VARIABLE_MaybeIO_0_13 = next_value_of_STATE_VARIABLE_MaybeIO_0_13;
                  continue;
                }
                else
                {
                  *HeadVar__6_6 = LongMaybeError_57;
                  *HeadVar__3_3 = Args0_33;
                  *STATE_VARIABLE_OptionArgs_5 = STATE_VARIABLE_OptionArgs_94_94;
                  *STATE_VARIABLE_OptionTable_8 = STATE_VARIABLE_OptionTable_0_7;
                  *STATE_VARIABLE_OptionsSet_10 = STATE_VARIABLE_OptionsSet_95_95;
                  *STATE_VARIABLE_UserData_12 = STATE_VARIABLE_UserData_96_96;
                  *STATE_VARIABLE_MaybeIO_14 = STATE_VARIABLE_MaybeIO_97_97;
                }
              }
              else
              {
                MR_Word Error_141;

                {
                  Error_141 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Error_141, 0) = Flag_145;
                  MR_hl_field(MR_mktag(1), Error_141, 1) = ((MR_Box) (Arg0_32));
                  MR_hl_field(MR_mktag(1), Error_141, 2) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                  *HeadVar__6_6 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_141));
                }
                *HeadVar__3_3 = Args0_33;
                *STATE_VARIABLE_MaybeIO_14 = STATE_VARIABLE_MaybeIO_0_13;
                *STATE_VARIABLE_UserData_12 = STATE_VARIABLE_UserData_0_11;
                *STATE_VARIABLE_OptionsSet_10 = STATE_VARIABLE_OptionsSet_0_9;
                *STATE_VARIABLE_OptionTable_8 = STATE_VARIABLE_OptionTable_0_7;
                *STATE_VARIABLE_OptionArgs_5 = STATE_VARIABLE_OptionArgs_0_4;
              }
            }
            else
            {
              MR_Word Error_144;

              {
                Error_144 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Error_144, 0) = ((MR_Box) (OptionName_54));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__6_6 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_144));
              }
              *HeadVar__3_3 = Args0_33;
              *STATE_VARIABLE_MaybeIO_14 = STATE_VARIABLE_MaybeIO_0_13;
              *STATE_VARIABLE_UserData_12 = STATE_VARIABLE_UserData_0_11;
              *STATE_VARIABLE_OptionsSet_10 = STATE_VARIABLE_OptionsSet_0_9;
              *STATE_VARIABLE_OptionTable_8 = STATE_VARIABLE_OptionTable_0_7;
              *STATE_VARIABLE_OptionArgs_5 = STATE_VARIABLE_OptionArgs_0_4;
            }
          }
          else
          {
            MR_String ShortOptions_59;

            succeeded = mercury__string__first_char_3_p_2(Arg0_32, (MR_Char) 45, &ShortOptions_59);
            if (succeeded)
            {
              succeeded = (strcmp(ShortOptions_59, (MR_String) "") == 0);
              succeeded = !(succeeded);
            }
            if (succeeded)
            {
              MR_Word ShortOptionsList_60;
              MR_Char SingleShortOpt_61;
              MR_Word Var_106;
              MR_Char Var_107;
              MR_Word Var_108;

              mercury__string__to_char_list_2_p_0(ShortOptions_59, &ShortOptionsList_60);
              succeeded = (ShortOptionsList_60 != (MR_Word) ((MR_Unsigned) 0U));
              if (succeeded)
              {
                SingleShortOpt_61 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), ShortOptionsList_60, (MR_Integer) 0)));
                Var_106 = ((MR_Word) ((MR_hl_field(MR_mktag(1), ShortOptionsList_60, (MR_Integer) 1))));
                succeeded = (Var_106 != (MR_Word) ((MR_Unsigned) 0U));
                if (succeeded)
                {
                  Var_107 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Var_106, (MR_Integer) 0)));
                  Var_108 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Var_106, (MR_Integer) 1))));
                  succeeded = (Var_107 == (MR_Char) 45);
                  if (succeeded)
                    succeeded = (Var_108 == (MR_Word) ((MR_Unsigned) 0U));
                }
              }
              if (succeeded)
              {
                MR_Word ShortOptionPred_62 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OptionOps_1, (MR_Integer) 0))));
                MR_Box Flag_157;
                MR_bool MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), ShortOptionPred_62, (MR_Integer) 1))));

                succeeded = func_3(((MR_Box) (ShortOptionPred_62)), ((MR_Box) (MR_Word) (SingleShortOpt_61)), &Flag_157);
                if (succeeded)
                {
                  MR_Word Var_109;
                  MR_Word Var_111;
                  MR_Word STATE_VARIABLE_OptionsSet_113_113;
                  MR_Box STATE_VARIABLE_UserData_114_114;
                  MR_String OptName_153;
                  MR_Word NegMaybeError_154;
                  MR_Word NewOptionTable_155;

                  {
                    Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (MR_Word) (SingleShortOpt_61));
                    MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                  }
                  {
                    Var_109 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_109, 0) = ((MR_Box) (MR_Word) ((MR_Char) 45));
                    MR_hl_field(MR_mktag(1), Var_109, 1) = ((MR_Box) (Var_111));
                  }
                  mercury__string__from_char_list_2_p_0(Var_109, &OptName_153);
                  mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_110_101_103_97_116_101_100_95_111_112_116_105_111_110_95_95_91_50_93_95_48_10_p_0(TypeInfo_for_OptionType_201, OptionOps_1, OptName_153, Flag_157, &NegMaybeError_154, STATE_VARIABLE_OptionTable_0_7, &NewOptionTable_155, STATE_VARIABLE_OptionsSet_0_9, &STATE_VARIABLE_OptionsSet_113_113, STATE_VARIABLE_UserData_0_11, &STATE_VARIABLE_UserData_114_114);
                  if ((NegMaybeError_154 == (MR_Word) ((MR_Unsigned) 0U)))
                  {
                    MR_Word STATE_VARIABLE_OptionArgs_116_116;
                    MR_Word next_value_of_HeadVar__2_2;
                    MR_Word next_value_of_STATE_VARIABLE_OptionArgs_0_4;
                    MR_Word next_value_of_STATE_VARIABLE_OptionTable_0_7;
                    MR_Word next_value_of_STATE_VARIABLE_OptionsSet_0_9;
                    MR_Box next_value_of_STATE_VARIABLE_UserData_0_11;

                    {
                      STATE_VARIABLE_OptionArgs_116_116 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), STATE_VARIABLE_OptionArgs_116_116, 0) = ((MR_Box) (Arg0_32));
                      MR_hl_field(MR_mktag(1), STATE_VARIABLE_OptionArgs_116_116, 1) = ((MR_Box) (STATE_VARIABLE_OptionArgs_0_4));
                    }
                    // direct tailcall eliminated
                    ;
                    next_value_of_HeadVar__2_2 = Args0_33;
                    next_value_of_STATE_VARIABLE_OptionArgs_0_4 = STATE_VARIABLE_OptionArgs_116_116;
                    next_value_of_STATE_VARIABLE_OptionTable_0_7 = NewOptionTable_155;
                    next_value_of_STATE_VARIABLE_OptionsSet_0_9 = STATE_VARIABLE_OptionsSet_113_113;
                    next_value_of_STATE_VARIABLE_UserData_0_11 = STATE_VARIABLE_UserData_114_114;
                    HeadVar__2_2 = next_value_of_HeadVar__2_2;
                    STATE_VARIABLE_OptionArgs_0_4 = next_value_of_STATE_VARIABLE_OptionArgs_0_4;
                    STATE_VARIABLE_OptionTable_0_7 = next_value_of_STATE_VARIABLE_OptionTable_0_7;
                    STATE_VARIABLE_OptionsSet_0_9 = next_value_of_STATE_VARIABLE_OptionsSet_0_9;
                    STATE_VARIABLE_UserData_0_11 = next_value_of_STATE_VARIABLE_UserData_0_11;
                    continue;
                  }
                  else
                  {
                    *HeadVar__6_6 = NegMaybeError_154;
                    *HeadVar__3_3 = Args0_33;
                    *STATE_VARIABLE_OptionArgs_5 = STATE_VARIABLE_OptionArgs_0_4;
                    *STATE_VARIABLE_OptionTable_8 = STATE_VARIABLE_OptionTable_0_7;
                    *STATE_VARIABLE_OptionsSet_10 = STATE_VARIABLE_OptionsSet_113_113;
                    *STATE_VARIABLE_UserData_12 = STATE_VARIABLE_UserData_114_114;
                    *STATE_VARIABLE_MaybeIO_14 = STATE_VARIABLE_MaybeIO_0_13;
                  }
                }
                else
                {
                  MR_String Var_122;
                  MR_Word Error_156;

                  Var_122 = mercury__string__f_43_43_2_f_0((MR_String) "-", ShortOptions_59);
                  {
                    Error_156 = (MR_Word) MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL);
                    MR_hl_field(MR_mktag(0), Error_156, 0) = ((MR_Box) (Var_122));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    *HeadVar__6_6 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_156));
                  }
                  *HeadVar__3_3 = Args0_33;
                  *STATE_VARIABLE_MaybeIO_14 = STATE_VARIABLE_MaybeIO_0_13;
                  *STATE_VARIABLE_UserData_12 = STATE_VARIABLE_UserData_0_11;
                  *STATE_VARIABLE_OptionsSet_10 = STATE_VARIABLE_OptionsSet_0_9;
                  *STATE_VARIABLE_OptionTable_8 = STATE_VARIABLE_OptionTable_0_7;
                  *STATE_VARIABLE_OptionArgs_5 = STATE_VARIABLE_OptionArgs_0_4;
                }
              }
              else
              {
                MR_Word ShortMaybeError_64;
                MR_Word STATE_VARIABLE_OptionArgs_124_124;
                MR_Word STATE_VARIABLE_OptionArgs_125_125;
                MR_Word STATE_VARIABLE_OptionsSet_126_126;
                MR_Box STATE_VARIABLE_UserData_127_127;
                MR_Box STATE_VARIABLE_MaybeIO_128_128;
                MR_Word NewOptionTable_167;
                MR_Word Args1_168;

                {
                  STATE_VARIABLE_OptionArgs_124_124 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_OptionArgs_124_124, 0) = ((MR_Box) (Arg0_32));
                  MR_hl_field(MR_mktag(1), STATE_VARIABLE_OptionArgs_124_124, 1) = ((MR_Box) (STATE_VARIABLE_OptionArgs_0_4));
                }
                mercury__getopt__handle_short_options_15_p_0(TypeInfo_for_OptionType_201, TypeInfo_for_UserDataType_202, TypeClassInfo_for_read_file_contents_200, OptionOps_1, ShortOptionsList_60, Args0_33, &Args1_168, STATE_VARIABLE_OptionArgs_124_124, &STATE_VARIABLE_OptionArgs_125_125, &ShortMaybeError_64, STATE_VARIABLE_OptionTable_0_7, &NewOptionTable_167, STATE_VARIABLE_OptionsSet_0_9, &STATE_VARIABLE_OptionsSet_126_126, STATE_VARIABLE_UserData_0_11, &STATE_VARIABLE_UserData_127_127, STATE_VARIABLE_MaybeIO_0_13, &STATE_VARIABLE_MaybeIO_128_128);
                if ((ShortMaybeError_64 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  MR_Word next_value_of_HeadVar__2_2 = Args1_168;
                  MR_Word next_value_of_STATE_VARIABLE_OptionArgs_0_4 = STATE_VARIABLE_OptionArgs_125_125;
                  MR_Word next_value_of_STATE_VARIABLE_OptionTable_0_7 = NewOptionTable_167;
                  MR_Word next_value_of_STATE_VARIABLE_OptionsSet_0_9 = STATE_VARIABLE_OptionsSet_126_126;
                  MR_Box next_value_of_STATE_VARIABLE_UserData_0_11 = STATE_VARIABLE_UserData_127_127;
                  MR_Box next_value_of_STATE_VARIABLE_MaybeIO_0_13 = STATE_VARIABLE_MaybeIO_128_128;

                  // direct tailcall eliminated
                  ;
                  HeadVar__2_2 = next_value_of_HeadVar__2_2;
                  STATE_VARIABLE_OptionArgs_0_4 = next_value_of_STATE_VARIABLE_OptionArgs_0_4;
                  STATE_VARIABLE_OptionTable_0_7 = next_value_of_STATE_VARIABLE_OptionTable_0_7;
                  STATE_VARIABLE_OptionsSet_0_9 = next_value_of_STATE_VARIABLE_OptionsSet_0_9;
                  STATE_VARIABLE_UserData_0_11 = next_value_of_STATE_VARIABLE_UserData_0_11;
                  STATE_VARIABLE_MaybeIO_0_13 = next_value_of_STATE_VARIABLE_MaybeIO_0_13;
                  continue;
                }
                else
                {
                  *HeadVar__6_6 = ShortMaybeError_64;
                  *HeadVar__3_3 = Args0_33;
                  *STATE_VARIABLE_OptionArgs_5 = STATE_VARIABLE_OptionArgs_125_125;
                  *STATE_VARIABLE_OptionTable_8 = STATE_VARIABLE_OptionTable_0_7;
                  *STATE_VARIABLE_OptionsSet_10 = STATE_VARIABLE_OptionsSet_126_126;
                  *STATE_VARIABLE_UserData_12 = STATE_VARIABLE_UserData_127_127;
                  *STATE_VARIABLE_MaybeIO_14 = STATE_VARIABLE_MaybeIO_128_128;
                }
              }
            }
            else
            {
              MR_Word * AddrNonOptionArgsTail_204;

              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                *HeadVar__3_3 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Arg0_32));
                MR_hl_field(MR_mktag(1), base, 1) = NULL;
              }
              AddrNonOptionArgsTail_204 = (MR_Word *) (&(MR_hl_field(MR_mktag(1), *HeadVar__3_3, (MR_Integer) 1)));
              mercury__getopt__LCMCpr_process_arguments_1_14_p_0(TypeInfo_for_OptionType_201, TypeInfo_for_UserDataType_202, TypeClassInfo_for_read_file_contents_200, OptionOps_1, Args0_33, AddrNonOptionArgsTail_204, STATE_VARIABLE_OptionArgs_0_4, STATE_VARIABLE_OptionArgs_5, HeadVar__6_6, STATE_VARIABLE_OptionTable_0_7, STATE_VARIABLE_OptionTable_8, STATE_VARIABLE_OptionsSet_0_9, STATE_VARIABLE_OptionsSet_10, STATE_VARIABLE_UserData_0_11, STATE_VARIABLE_UserData_12, STATE_VARIABLE_MaybeIO_0_13, STATE_VARIABLE_MaybeIO_14);
            }
          }
        }
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__getopt__process_option_14_p_0(
  MR_Word TypeInfo_for_OptionType_175,
  MR_Word TypeInfo_for_UserDataType_176,
  MR_Word TypeClassInfo_for_read_file_contents_174,
  MR_Word OptionOps_15,
  MR_Word OptionData_16,
  MR_String Option_17,
  MR_Box Flag_18,
  MR_Word MaybeArg_19,
  MR_Word * MaybeError_20,
  MR_Word STATE_VARIABLE_OptionTable_0_49,
  MR_Word * STATE_VARIABLE_OptionTable_50,
  MR_Word STATE_VARIABLE_OptionsSet_0_51,
  MR_Word * STATE_VARIABLE_OptionsSet_52,
  MR_Box STATE_VARIABLE_UserData_0_53,
  MR_Box * STATE_VARIABLE_UserData_54,
  MR_Box STATE_VARIABLE_MaybeIO_0_55,
  MR_Box * STATE_VARIABLE_MaybeIO_56)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) OptionData_16)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(OptionData_16)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word STATE_VARIABLE_OptionsSet_96_96;

              mercury__set__insert_3_p_0(TypeInfo_for_OptionType_175, Flag_18, STATE_VARIABLE_OptionsSet_0_51, &STATE_VARIABLE_OptionsSet_96_96);
              if ((MaybeArg_19 == (MR_Word) ((MR_Unsigned) 0U)))
                mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_115_112_101_99_105_97_108_95_111_112_116_105_111_110_95_95_91_50_93_95_48_11_p_0(TypeInfo_for_OptionType_175, OptionOps_15, Option_17, Flag_18, (MR_Word) ((MR_Unsigned) 0U), MaybeError_20, STATE_VARIABLE_OptionTable_0_49, STATE_VARIABLE_OptionTable_50, STATE_VARIABLE_OptionsSet_96_96, STATE_VARIABLE_OptionsSet_52, STATE_VARIABLE_UserData_0_53, STATE_VARIABLE_UserData_54);
              else
                {
                  mercury__require__error_1_p_0((MR_String) "no special argument expected in getopt.process_option");
                  return;
                }
              *STATE_VARIABLE_MaybeIO_56 = STATE_VARIABLE_MaybeIO_0_55;
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word STATE_VARIABLE_OptionsSet_85_85;

              mercury__set__insert_3_p_0(TypeInfo_for_OptionType_175, Flag_18, STATE_VARIABLE_OptionsSet_0_51, &STATE_VARIABLE_OptionsSet_85_85);
              if ((MaybeArg_19 == (MR_Word) ((MR_Unsigned) 0U)))
                mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_115_112_101_99_105_97_108_95_111_112_116_105_111_110_95_95_91_50_93_95_48_11_p_0(TypeInfo_for_OptionType_175, OptionOps_15, Option_17, Flag_18, (MR_Word) (MR_mkword(MR_mktag(1), &mercury__getopt_scalar_common_8[1])), MaybeError_20, STATE_VARIABLE_OptionTable_0_49, STATE_VARIABLE_OptionTable_50, STATE_VARIABLE_OptionsSet_85_85, STATE_VARIABLE_OptionsSet_52, STATE_VARIABLE_UserData_0_53, STATE_VARIABLE_UserData_54);
              else
                mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_115_112_101_99_105_97_108_95_111_112_116_105_111_110_95_95_91_50_93_95_48_11_p_0(TypeInfo_for_OptionType_175, OptionOps_15, Option_17, Flag_18, (MR_Word) (MR_mkword(MR_mktag(1), &mercury__getopt_scalar_common_8[0])), MaybeError_20, STATE_VARIABLE_OptionTable_0_49, STATE_VARIABLE_OptionTable_50, STATE_VARIABLE_OptionsSet_85_85, STATE_VARIABLE_OptionsSet_52, STATE_VARIABLE_UserData_0_53, STATE_VARIABLE_UserData_54);
              *STATE_VARIABLE_MaybeIO_56 = STATE_VARIABLE_MaybeIO_0_55;
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word STATE_VARIABLE_OptionsSet_79_79;

              mercury__set__insert_3_p_0(TypeInfo_for_OptionType_175, Flag_18, STATE_VARIABLE_OptionsSet_0_51, &STATE_VARIABLE_OptionsSet_79_79);
              if ((MaybeArg_19 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  mercury__require__error_1_p_0((MR_String) "int_special argument expected in getopt.process_option");
                  return;
                }
              else
              {
                MR_String Arg_158 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeArg_19, (MR_Integer) 0))));
                MR_Integer IntArg_157;

                succeeded = mercury__string__to_int_2_p_0(Arg_158, &IntArg_157);
                if (succeeded)
                {
                  MR_Word Var_81;

                  {
                    Var_81 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Var_81, 0) = ((MR_Box) (IntArg_157));
                  }
                  mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_115_112_101_99_105_97_108_95_111_112_116_105_111_110_95_95_91_50_93_95_48_11_p_0(TypeInfo_for_OptionType_175, OptionOps_15, Option_17, Flag_18, Var_81, MaybeError_20, STATE_VARIABLE_OptionTable_0_49, STATE_VARIABLE_OptionTable_50, STATE_VARIABLE_OptionsSet_79_79, STATE_VARIABLE_OptionsSet_52, STATE_VARIABLE_UserData_0_53, STATE_VARIABLE_UserData_54);
                }
                else
                {
                  mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_101_114_114_111_114_95_95_91_49_93_95_48_4_p_0(Flag_18, Option_17, Arg_158, MaybeError_20);
                  *STATE_VARIABLE_UserData_54 = STATE_VARIABLE_UserData_0_53;
                  *STATE_VARIABLE_OptionsSet_52 = STATE_VARIABLE_OptionsSet_79_79;
                  *STATE_VARIABLE_OptionTable_50 = STATE_VARIABLE_OptionTable_0_49;
                }
              }
              *STATE_VARIABLE_MaybeIO_56 = STATE_VARIABLE_MaybeIO_0_55;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word STATE_VARIABLE_OptionsSet_71_71;

              mercury__set__insert_3_p_0(TypeInfo_for_OptionType_175, Flag_18, STATE_VARIABLE_OptionsSet_0_51, &STATE_VARIABLE_OptionsSet_71_71);
              if ((MaybeArg_19 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_String Var_72;

                Var_72 = mercury__string__f_43_43_2_f_0((MR_String) "string_special argument expected ", (MR_String) "in getopt.process_option");
                {
                  mercury__require__error_1_p_0(Var_72);
                  return;
                }
              }
              else
              {
                MR_Word Var_75;
                MR_String Arg_164 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeArg_19, (MR_Integer) 0))));

                {
                  Var_75 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_75, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), Var_75, 1) = ((MR_Box) (Arg_164));
                }
                mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_115_112_101_99_105_97_108_95_111_112_116_105_111_110_95_95_91_50_93_95_48_11_p_0(TypeInfo_for_OptionType_175, OptionOps_15, Option_17, Flag_18, Var_75, MaybeError_20, STATE_VARIABLE_OptionTable_0_49, STATE_VARIABLE_OptionTable_50, STATE_VARIABLE_OptionsSet_71_71, STATE_VARIABLE_OptionsSet_52, STATE_VARIABLE_UserData_0_53, STATE_VARIABLE_UserData_54);
              }
              *STATE_VARIABLE_MaybeIO_56 = STATE_VARIABLE_MaybeIO_0_55;
            }
            break;
          case (MR_Integer) 4:
            {
              if ((MaybeArg_19 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                MR_String Var_64;

                Var_64 = mercury__string__f_43_43_2_f_0((MR_String) "maybe_string_special argument expected ", (MR_String) "in getopt.process_option");
                {
                  mercury__require__error_1_p_0(Var_64);
                  return;
                }
              }
              else
              {
                MR_Word Var_67;

                {
                  Var_67 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_67, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                  MR_hl_field(MR_mktag(3), Var_67, 1) = ((MR_Box) (MaybeArg_19));
                }
                mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_115_112_101_99_105_97_108_95_111_112_116_105_111_110_95_95_91_50_93_95_48_11_p_0(TypeInfo_for_OptionType_175, OptionOps_15, Option_17, Flag_18, Var_67, MaybeError_20, STATE_VARIABLE_OptionTable_0_49, STATE_VARIABLE_OptionTable_50, STATE_VARIABLE_OptionsSet_0_51, STATE_VARIABLE_OptionsSet_52, STATE_VARIABLE_UserData_0_53, STATE_VARIABLE_UserData_54);
              }
              *STATE_VARIABLE_MaybeIO_56 = STATE_VARIABLE_MaybeIO_0_55;
            }
            break;
          case (MR_Integer) 5:
            if ((MaybeArg_19 == (MR_Word) ((MR_Unsigned) 0U)))
              {
                mercury__require__error_1_p_0((MR_String) "file_special argument expected in getopt.process_option");
                return;
              }
            else
            {
              MR_String FileName_35 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeArg_19, (MR_Integer) 0))));
              MR_Word ReadFromFileResult_36;
              MR_Box STATE_VARIABLE_MaybeIO_58_58;

              mercury__getopt__read_file_contents_4_p_0(TypeClassInfo_for_read_file_contents_174, FileName_35, &ReadFromFileResult_36, STATE_VARIABLE_MaybeIO_0_55, &STATE_VARIABLE_MaybeIO_58_58);
              switch (MR_tag((MR_Word) ReadFromFileResult_36)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  {
                    MR_Word Reason_172;
                    MR_Word Error_173;

                    {
                      Reason_172 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Reason_172, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                      MR_hl_field(MR_mktag(3), Reason_172, 1) = ((MR_Box) (FileName_35));
                    }
                    {
                      Error_173 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Error_173, 0) = Flag_18;
                      MR_hl_field(MR_mktag(1), Error_173, 1) = ((MR_Box) (Option_17));
                      MR_hl_field(MR_mktag(1), Error_173, 2) = ((MR_Box) (Reason_172));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeError_20 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_173));
                    }
                    *STATE_VARIABLE_OptionTable_50 = STATE_VARIABLE_OptionTable_0_49;
                    *STATE_VARIABLE_OptionsSet_52 = STATE_VARIABLE_OptionsSet_0_51;
                    *STATE_VARIABLE_UserData_54 = STATE_VARIABLE_UserData_0_53;
                    *STATE_VARIABLE_MaybeIO_56 = STATE_VARIABLE_MaybeIO_58_58;
                  }
                  break;
                case (MR_Integer) 1:
                  {
                    MR_String Contents_37 = ((MR_String) ((MR_hl_field(MR_mktag(1), ReadFromFileResult_36, (MR_Integer) 0))));
                    MR_Word Words_38;
                    MR_Word Args_39;
                    MR_Word FileMaybeError_41;
                    MR_Word NewOptionTable_42;
                    MR_Word _OptionArgs_40;

                    Words_38 = mercury__string__words_1_f_0(Contents_37);
                    mercury__getopt__process_arguments_14_p_0(TypeInfo_for_OptionType_175, TypeInfo_for_UserDataType_176, TypeClassInfo_for_read_file_contents_174, OptionOps_15, Words_38, &Args_39, (MR_Word) ((MR_Unsigned) 0U), &_OptionArgs_40, &FileMaybeError_41, STATE_VARIABLE_OptionTable_0_49, &NewOptionTable_42, STATE_VARIABLE_OptionsSet_0_51, STATE_VARIABLE_OptionsSet_52, STATE_VARIABLE_UserData_0_53, STATE_VARIABLE_UserData_54, STATE_VARIABLE_MaybeIO_58_58, STATE_VARIABLE_MaybeIO_56);
                    if ((FileMaybeError_41 == (MR_Word) ((MR_Unsigned) 0U)))
                      if ((Args_39 == (MR_Word) ((MR_Unsigned) 0U)))
                      {
                        *STATE_VARIABLE_OptionTable_50 = NewOptionTable_42;
                        *MaybeError_20 = (MR_Word) ((MR_Unsigned) 0U);
                      }
                      else
                      {
                        MR_Word Reason_45;
                        MR_Word Error_46;

                        {
                          Reason_45 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(3), Reason_45, 0) = ((MR_Box) ((MR_Unsigned) 4U));
                          MR_hl_field(MR_mktag(3), Reason_45, 1) = ((MR_Box) (FileName_35));
                        }
                        {
                          Error_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                          MR_hl_field(MR_mktag(1), Error_46, 0) = Flag_18;
                          MR_hl_field(MR_mktag(1), Error_46, 1) = ((MR_Box) (Option_17));
                          MR_hl_field(MR_mktag(1), Error_46, 2) = ((MR_Box) (Reason_45));
                        }
                        {
                          MR_Word base;
                          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                          *MaybeError_20 = base;
                          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_46));
                        }
                        *STATE_VARIABLE_OptionTable_50 = STATE_VARIABLE_OptionTable_0_49;
                      }
                    else
                    {
                      *MaybeError_20 = FileMaybeError_41;
                      *STATE_VARIABLE_OptionTable_50 = STATE_VARIABLE_OptionTable_0_49;
                    }
                  }
                  break;
                case (MR_Integer) 2:
                  {
                    MR_Word IO_Error_48 = ((MR_Word) ((MR_hl_field(MR_mktag(2), ReadFromFileResult_36, (MR_Integer) 0))));
                    MR_Word Reason_185;
                    MR_Word Error_186;

                    {
                      Reason_185 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Reason_185, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                      MR_hl_field(MR_mktag(3), Reason_185, 1) = ((MR_Box) (FileName_35));
                      MR_hl_field(MR_mktag(3), Reason_185, 2) = ((MR_Box) (IO_Error_48));
                    }
                    {
                      Error_186 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Error_186, 0) = Flag_18;
                      MR_hl_field(MR_mktag(1), Error_186, 1) = ((MR_Box) (Option_17));
                      MR_hl_field(MR_mktag(1), Error_186, 2) = ((MR_Box) (Reason_185));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeError_20 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_186));
                    }
                    *STATE_VARIABLE_OptionTable_50 = STATE_VARIABLE_OptionTable_0_49;
                    *STATE_VARIABLE_OptionsSet_52 = STATE_VARIABLE_OptionsSet_0_51;
                    *STATE_VARIABLE_UserData_54 = STATE_VARIABLE_UserData_0_53;
                    *STATE_VARIABLE_MaybeIO_56 = STATE_VARIABLE_MaybeIO_58_58;
                  }
                  break;
                case (MR_Integer) 3:
                  {
                    MR_Word IO_Error_171 = ((MR_Word) ((MR_hl_field(MR_mktag(3), ReadFromFileResult_36, (MR_Integer) 0))));
                    MR_Word Reason_187;
                    MR_Word Error_188;

                    {
                      Reason_187 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Reason_187, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                      MR_hl_field(MR_mktag(3), Reason_187, 1) = ((MR_Box) (FileName_35));
                      MR_hl_field(MR_mktag(3), Reason_187, 2) = ((MR_Box) (IO_Error_171));
                    }
                    {
                      Error_188 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Error_188, 0) = Flag_18;
                      MR_hl_field(MR_mktag(1), Error_188, 1) = ((MR_Box) (Option_17));
                      MR_hl_field(MR_mktag(1), Error_188, 2) = ((MR_Box) (Reason_187));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                      *MaybeError_20 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_188));
                    }
                    *STATE_VARIABLE_OptionTable_50 = STATE_VARIABLE_OptionTable_0_49;
                    *STATE_VARIABLE_OptionsSet_52 = STATE_VARIABLE_OptionsSet_0_51;
                    *STATE_VARIABLE_UserData_54 = STATE_VARIABLE_UserData_0_53;
                    *STATE_VARIABLE_MaybeIO_56 = STATE_VARIABLE_MaybeIO_58_58;
                  }
                  break;
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__set__insert_3_p_0(TypeInfo_for_OptionType_175, Flag_18, STATE_VARIABLE_OptionsSet_0_51, STATE_VARIABLE_OptionsSet_52);
          if ((MaybeArg_19 == (MR_Word) ((MR_Unsigned) 0U)))
          {
            mercury__map__set_4_p_0(TypeInfo_for_OptionType_175, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), Flag_18, ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__getopt_scalar_common_8[1]))), STATE_VARIABLE_OptionTable_0_49, STATE_VARIABLE_OptionTable_50);
            *MaybeError_20 = (MR_Word) ((MR_Unsigned) 0U);
          }
          else
          {
            mercury__map__set_4_p_0(TypeInfo_for_OptionType_175, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), Flag_18, ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__getopt_scalar_common_8[0]))), STATE_VARIABLE_OptionTable_0_49, STATE_VARIABLE_OptionTable_50);
            *MaybeError_20 = (MR_Word) ((MR_Unsigned) 0U);
          }
          *STATE_VARIABLE_UserData_54 = STATE_VARIABLE_UserData_0_53;
          *STATE_VARIABLE_MaybeIO_56 = STATE_VARIABLE_MaybeIO_0_55;
        }
        break;
      case (MR_Integer) 2:
        {
          mercury__set__insert_3_p_0(TypeInfo_for_OptionType_175, Flag_18, STATE_VARIABLE_OptionsSet_0_51, STATE_VARIABLE_OptionsSet_52);
          if ((MaybeArg_19 == (MR_Word) ((MR_Unsigned) 0U)))
            {
              mercury__require__error_1_p_0((MR_String) "integer argument expected in getopt.process_option");
              return;
            }
          else
          {
            MR_String Arg_28 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeArg_19, (MR_Integer) 0))));
            MR_Integer IntArg_29;

            succeeded = mercury__string__to_int_2_p_0(Arg_28, &IntArg_29);
            if (succeeded)
            {
              MR_Word Var_124;

              {
                Var_124 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_124, 0) = ((MR_Box) (IntArg_29));
              }
              mercury__map__set_4_p_0(TypeInfo_for_OptionType_175, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), Flag_18, ((MR_Box) (Var_124)), STATE_VARIABLE_OptionTable_0_49, STATE_VARIABLE_OptionTable_50);
              *MaybeError_20 = (MR_Word) ((MR_Unsigned) 0U);
            }
            else
            {
              mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_101_114_114_111_114_95_95_91_49_93_95_48_4_p_0(Flag_18, Option_17, Arg_28, MaybeError_20);
              *STATE_VARIABLE_OptionTable_50 = STATE_VARIABLE_OptionTable_0_49;
            }
          }
          *STATE_VARIABLE_UserData_54 = STATE_VARIABLE_UserData_0_53;
          *STATE_VARIABLE_MaybeIO_56 = STATE_VARIABLE_MaybeIO_0_55;
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), OptionData_16, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__set__insert_3_p_0(TypeInfo_for_OptionType_175, Flag_18, STATE_VARIABLE_OptionsSet_0_51, STATE_VARIABLE_OptionsSet_52);
              if ((MaybeArg_19 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  mercury__require__error_1_p_0((MR_String) "string argument expected in getopt.process_option");
                  return;
                }
              else
              {
                MR_Word Var_120;
                MR_String Arg_133 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeArg_19, (MR_Integer) 0))));

                {
                  Var_120 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_120, 0) = ((MR_Box) ((MR_Unsigned) 0U));
                  MR_hl_field(MR_mktag(3), Var_120, 1) = ((MR_Box) (Arg_133));
                }
                mercury__map__set_4_p_0(TypeInfo_for_OptionType_175, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), Flag_18, ((MR_Box) (Var_120)), STATE_VARIABLE_OptionTable_0_49, STATE_VARIABLE_OptionTable_50);
                *MaybeError_20 = (MR_Word) ((MR_Unsigned) 0U);
              }
              *STATE_VARIABLE_UserData_54 = STATE_VARIABLE_UserData_0_53;
              *STATE_VARIABLE_MaybeIO_56 = STATE_VARIABLE_MaybeIO_0_55;
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__set__insert_3_p_0(TypeInfo_for_OptionType_175, Flag_18, STATE_VARIABLE_OptionsSet_0_51, STATE_VARIABLE_OptionsSet_52);
              if ((MaybeArg_19 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  mercury__require__error_1_p_0((MR_String) "integer argument expected in getopt.process_option");
                  return;
                }
              else
              {
                MR_String Arg_137 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeArg_19, (MR_Integer) 0))));
                MR_Integer IntArg_136;

                succeeded = mercury__string__to_int_2_p_0(Arg_137, &IntArg_136);
                if (succeeded)
                {
                  MR_Word Var_115;
                  MR_Word Var_117;

                  {
                    Var_117 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_117, 0) = ((MR_Box) (IntArg_136));
                  }
                  {
                    Var_115 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_115, 0) = ((MR_Box) ((MR_Unsigned) 1U));
                    MR_hl_field(MR_mktag(3), Var_115, 1) = ((MR_Box) (Var_117));
                  }
                  mercury__map__set_4_p_0(TypeInfo_for_OptionType_175, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), Flag_18, ((MR_Box) (Var_115)), STATE_VARIABLE_OptionTable_0_49, STATE_VARIABLE_OptionTable_50);
                  *MaybeError_20 = (MR_Word) ((MR_Unsigned) 0U);
                }
                else
                {
                  mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_101_114_114_111_114_95_95_91_49_93_95_48_4_p_0(Flag_18, Option_17, Arg_137, MaybeError_20);
                  *STATE_VARIABLE_OptionTable_50 = STATE_VARIABLE_OptionTable_0_49;
                }
              }
              *STATE_VARIABLE_UserData_54 = STATE_VARIABLE_UserData_0_53;
              *STATE_VARIABLE_MaybeIO_56 = STATE_VARIABLE_MaybeIO_0_55;
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__set__insert_3_p_0(TypeInfo_for_OptionType_175, Flag_18, STATE_VARIABLE_OptionsSet_0_51, STATE_VARIABLE_OptionsSet_52);
              if ((MaybeArg_19 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  mercury__require__error_1_p_0((MR_String) "string argument expected in getopt.process_option");
                  return;
                }
              else
              {
                MR_Word Var_110;

                {
                  Var_110 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_110, 0) = ((MR_Box) ((MR_Unsigned) 2U));
                  MR_hl_field(MR_mktag(3), Var_110, 1) = ((MR_Box) (MaybeArg_19));
                }
                mercury__map__set_4_p_0(TypeInfo_for_OptionType_175, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), Flag_18, ((MR_Box) (Var_110)), STATE_VARIABLE_OptionTable_0_49, STATE_VARIABLE_OptionTable_50);
                *MaybeError_20 = (MR_Word) ((MR_Unsigned) 0U);
              }
              *STATE_VARIABLE_UserData_54 = STATE_VARIABLE_UserData_0_53;
              *STATE_VARIABLE_MaybeIO_56 = STATE_VARIABLE_MaybeIO_0_55;
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word List0_33 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OptionData_16, (MR_Integer) 1))));

              mercury__set__insert_3_p_0(TypeInfo_for_OptionType_175, Flag_18, STATE_VARIABLE_OptionsSet_0_51, STATE_VARIABLE_OptionsSet_52);
              if ((MaybeArg_19 == (MR_Word) ((MR_Unsigned) 0U)))
                {
                  mercury__require__error_1_p_0((MR_String) "acumulating argument expected in getopt.process_option");
                  return;
                }
              else
              {
                MR_Word List_34;
                MR_Word Var_104;
                MR_Word Var_106;
                MR_String Arg_146 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeArg_19, (MR_Integer) 0))));

                {
                  Var_104 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_104, 0) = ((MR_Box) (Arg_146));
                  MR_hl_field(MR_mktag(1), Var_104, 1) = ((MR_Box) ((MR_Unsigned) 0U));
                }
                List_34 = mercury__list__f_43_43_2_f_0((MR_Word) (&mercury__builtin__builtin__type_ctor_info_string_0), List0_33, Var_104);
                {
                  Var_106 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_106, 0) = ((MR_Box) ((MR_Unsigned) 3U));
                  MR_hl_field(MR_mktag(3), Var_106, 1) = ((MR_Box) (List_34));
                }
                mercury__map__set_4_p_0(TypeInfo_for_OptionType_175, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), Flag_18, ((MR_Box) (Var_106)), STATE_VARIABLE_OptionTable_0_49, STATE_VARIABLE_OptionTable_50);
                *MaybeError_20 = (MR_Word) ((MR_Unsigned) 0U);
              }
              *STATE_VARIABLE_UserData_54 = STATE_VARIABLE_UserData_0_53;
              *STATE_VARIABLE_MaybeIO_56 = STATE_VARIABLE_MaybeIO_0_55;
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
mercury__getopt__handle_long_option_18_p_0(
  MR_Word TypeInfo_for_OptionType_60,
  MR_Word TypeInfo_for_UserDataType_61,
  MR_Word TypeClassInfo_for_read_file_contents_59,
  MR_Word OptionOps_19,
  MR_String Option_20,
  MR_Box Flag_21,
  MR_Word OptionData_22,
  MR_Word MaybeOptionArg0_23,
  MR_Word Args0_24,
  MR_Word * Args1_25,
  MR_Word STATE_VARIABLE_OptionArgs_0_40,
  MR_Word * STATE_VARIABLE_OptionArgs_41,
  MR_Word * MaybeError_27,
  MR_Word STATE_VARIABLE_OptionTable_0_42,
  MR_Word * STATE_VARIABLE_OptionTable_43,
  MR_Word STATE_VARIABLE_OptionsSet_0_44,
  MR_Word * STATE_VARIABLE_OptionsSet_45,
  MR_Box STATE_VARIABLE_UserData_0_46,
  MR_Box * STATE_VARIABLE_UserData_47,
  MR_Box STATE_VARIABLE_MaybeIO_0_48,
  MR_Box * STATE_VARIABLE_MaybeIO_49)
{
  {
    MR_bool succeeded;
    MR_Word NeedArg_32;
    MR_Word MaybeOptionArg_35;
    MR_Word MissingArg_36;

    switch (MR_tag((MR_Word) OptionData_22)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(OptionData_22)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            NeedArg_32 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            NeedArg_32 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            NeedArg_32 = (MR_Integer) 1;
            break;
          case (MR_Integer) 3:
            NeedArg_32 = (MR_Integer) 1;
            break;
          case (MR_Integer) 4:
            NeedArg_32 = (MR_Integer) 1;
            break;
          case (MR_Integer) 5:
            NeedArg_32 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        NeedArg_32 = (MR_Integer) 0;
        break;
      case (MR_Integer) 2:
        NeedArg_32 = (MR_Integer) 1;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), OptionData_22, (MR_Integer) 0))))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            NeedArg_32 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            NeedArg_32 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            NeedArg_32 = (MR_Integer) 1;
            break;
          case (MR_Integer) 3:
            NeedArg_32 = (MR_Integer) 1;
            break;
        }
        break;
    }
    succeeded = (NeedArg_32 == (MR_Integer) 1);
    if (succeeded)
      succeeded = (MaybeOptionArg0_23 == (MR_Word) ((MR_Unsigned) 0U));
    if (succeeded)
      if ((Args0_24 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        MaybeOptionArg_35 = (MR_Word) ((MR_Unsigned) 0U);
        *Args1_25 = Args0_24;
        MissingArg_36 = (MR_Integer) 1;
        *STATE_VARIABLE_OptionArgs_41 = STATE_VARIABLE_OptionArgs_0_40;
      }
      else
      {
        MR_String Arg_33 = ((MR_String) ((MR_hl_field(MR_mktag(1), Args0_24, (MR_Integer) 0))));

        *Args1_25 = ((MR_Word) ((MR_hl_field(MR_mktag(1), Args0_24, (MR_Integer) 1))));
        {
          MaybeOptionArg_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), MaybeOptionArg_35, 0) = ((MR_Box) (Arg_33));
        }
        MissingArg_36 = (MR_Integer) 0;
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
          *STATE_VARIABLE_OptionArgs_41 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Arg_33));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (STATE_VARIABLE_OptionArgs_0_40));
        }
      }
    else
    {
      MaybeOptionArg_35 = MaybeOptionArg0_23;
      *Args1_25 = Args0_24;
      MissingArg_36 = (MR_Integer) 0;
      *STATE_VARIABLE_OptionArgs_41 = STATE_VARIABLE_OptionArgs_0_40;
    }
    switch (MissingArg_36) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String ArgVal_38;

          succeeded = (NeedArg_32 == (MR_Integer) 0);
          if (succeeded)
          {
            succeeded = (MaybeOptionArg_35 != (MR_Word) ((MR_Unsigned) 0U));
            if (succeeded)
              ArgVal_38 = ((MR_String) ((MR_hl_field(MR_mktag(1), MaybeOptionArg_35, (MR_Integer) 0))));
          }
          if (succeeded)
          {
            MR_Word ErrorReason_39;
            MR_Word Error_56;

            {
              ErrorReason_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), ErrorReason_39, 0) = ((MR_Box) (ArgVal_38));
            }
            {
              Error_56 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Error_56, 0) = Flag_21;
              MR_hl_field(MR_mktag(1), Error_56, 1) = ((MR_Box) (Option_20));
              MR_hl_field(MR_mktag(1), Error_56, 2) = ((MR_Box) (ErrorReason_39));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
              *MaybeError_27 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_56));
            }
            *STATE_VARIABLE_MaybeIO_49 = STATE_VARIABLE_MaybeIO_0_48;
            *STATE_VARIABLE_UserData_47 = STATE_VARIABLE_UserData_0_46;
            *STATE_VARIABLE_OptionsSet_45 = STATE_VARIABLE_OptionsSet_0_44;
            *STATE_VARIABLE_OptionTable_43 = STATE_VARIABLE_OptionTable_0_42;
          }
          else
            mercury__getopt__process_option_14_p_0(TypeInfo_for_OptionType_60, TypeInfo_for_UserDataType_61, TypeClassInfo_for_read_file_contents_59, OptionOps_19, OptionData_22, Option_20, Flag_21, MaybeOptionArg_35, MaybeError_27, STATE_VARIABLE_OptionTable_0_42, STATE_VARIABLE_OptionTable_43, STATE_VARIABLE_OptionsSet_0_44, STATE_VARIABLE_OptionsSet_45, STATE_VARIABLE_UserData_0_46, STATE_VARIABLE_UserData_47, STATE_VARIABLE_MaybeIO_0_48, STATE_VARIABLE_MaybeIO_49);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Error_37;

          {
            Error_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Error_37, 0) = Flag_21;
            MR_hl_field(MR_mktag(1), Error_37, 1) = ((MR_Box) (Option_20));
            MR_hl_field(MR_mktag(1), Error_37, 2) = ((MR_Box) ((MR_Unsigned) 4U));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            *MaybeError_27 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_37));
          }
          *STATE_VARIABLE_OptionTable_43 = STATE_VARIABLE_OptionTable_0_42;
          *STATE_VARIABLE_OptionsSet_45 = STATE_VARIABLE_OptionsSet_0_44;
          *STATE_VARIABLE_UserData_47 = STATE_VARIABLE_UserData_0_46;
          *STATE_VARIABLE_MaybeIO_49 = STATE_VARIABLE_MaybeIO_0_48;
        }
        break;
    }
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
            case (MR_Integer) 5:
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
                mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_115_112_101_99_105_97_108_95_111_112_116_105_111_110_95_95_91_50_93_95_48_11_p_0(TypeInfo_for_OptionType_63, OptionOps_11, Option_12, Flag_13, (MR_Word) (MR_mkword(MR_mktag(1), &mercury__getopt_scalar_common_8[0])), MaybeError_14, STATE_VARIABLE_OptionTable_0_26, STATE_VARIABLE_OptionTable_27, STATE_VARIABLE_OptionsSet_39_39, STATE_VARIABLE_OptionsSet_29, STATE_VARIABLE_UserData_0_30, STATE_VARIABLE_UserData_31);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word STATE_VARIABLE_OptionsSet_33_33;

                mercury__set__insert_3_p_0(TypeInfo_for_OptionType_63, Flag_13, STATE_VARIABLE_OptionsSet_0_28, &STATE_VARIABLE_OptionsSet_33_33);
                mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_112_114_111_99_101_115_115_95_115_112_101_99_105_97_108_95_111_112_116_105_111_110_95_95_91_50_93_95_48_11_p_0(TypeInfo_for_OptionType_63, OptionOps_11, Option_12, Flag_13, (MR_Word) (MR_mkword(MR_mktag(3), &mercury__getopt_scalar_common_1[8])), MaybeError_14, STATE_VARIABLE_OptionTable_0_26, STATE_VARIABLE_OptionTable_27, STATE_VARIABLE_OptionsSet_33_33, STATE_VARIABLE_OptionsSet_29, STATE_VARIABLE_UserData_0_30, STATE_VARIABLE_UserData_31);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_87 = (MR_Word) (STATE_VARIABLE_OptionsSet_0_28);
            MR_Word Var_88;

            mercury__set_ordlist__insert_loop_3_p_0(TypeInfo_for_OptionType_63, Var_87, Flag_13, &Var_88);
            *STATE_VARIABLE_OptionsSet_29 = (MR_Word) (Var_88);
            mercury__tree234__set_4_p_0(TypeInfo_for_OptionType_63, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), Flag_13, ((MR_Box) (MR_mkword(MR_mktag(1), &mercury__getopt_scalar_common_8[0]))), STATE_VARIABLE_OptionTable_0_26, STATE_VARIABLE_OptionTable_27);
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
                mercury__map__set_4_p_0(TypeInfo_for_OptionType_63, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), Flag_13, ((MR_Box) (MR_mkword(MR_mktag(3), &mercury__getopt_scalar_common_1[6]))), STATE_VARIABLE_OptionTable_0_26, STATE_VARIABLE_OptionTable_27);
                *MaybeError_14 = (MR_Word) ((MR_Unsigned) 0U);
                *STATE_VARIABLE_UserData_31 = STATE_VARIABLE_UserData_0_30;
              }
              break;
            case (MR_Integer) 2:
              {
                mercury__set__insert_3_p_0(TypeInfo_for_OptionType_63, Flag_13, STATE_VARIABLE_OptionsSet_0_28, STATE_VARIABLE_OptionsSet_29);
                mercury__map__set_4_p_0(TypeInfo_for_OptionType_63, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), Flag_13, ((MR_Box) (MR_mkword(MR_mktag(3), &mercury__getopt_scalar_common_1[7]))), STATE_VARIABLE_OptionTable_0_26, STATE_VARIABLE_OptionTable_27);
                *MaybeError_14 = (MR_Word) ((MR_Unsigned) 0U);
                *STATE_VARIABLE_UserData_31 = STATE_VARIABLE_UserData_0_30;
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word Var_77 = (MR_Word) (STATE_VARIABLE_OptionsSet_0_28);
                MR_Word Var_78;

                mercury__set_ordlist__insert_loop_3_p_0(TypeInfo_for_OptionType_63, Var_77, Flag_13, &Var_78);
                *STATE_VARIABLE_OptionsSet_29 = (MR_Word) (Var_78);
                mercury__tree234__set_4_p_0(TypeInfo_for_OptionType_63, (MR_Word) (&mercury__getopt__getopt__type_ctor_info_option_data_0), Flag_13, ((MR_Box) (MR_mkword(MR_mktag(3), &mercury__getopt_scalar_common_1[5]))), STATE_VARIABLE_OptionTable_0_26, STATE_VARIABLE_OptionTable_27);
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
mercury__getopt__need_arg_2_p_0(
  MR_Word HeadVar__1_1,
  MR_Word * HeadVar__2_2)
{
  switch (MR_tag((MR_Word) HeadVar__1_1)) {
    default: /*NOTREACHED*/ MR_assert(0);
    case (MR_Integer) 0:
      switch (MR_unmkbody(HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Integer) 0;
          break;
        case (MR_Integer) 2:
          *HeadVar__2_2 = (MR_Integer) 1;
          break;
        case (MR_Integer) 3:
          *HeadVar__2_2 = (MR_Integer) 1;
          break;
        case (MR_Integer) 4:
          *HeadVar__2_2 = (MR_Integer) 1;
          break;
        case (MR_Integer) 5:
          *HeadVar__2_2 = (MR_Integer) 1;
          break;
      }
      break;
    case (MR_Integer) 1:
      *HeadVar__2_2 = (MR_Integer) 0;
      break;
    case (MR_Integer) 2:
      *HeadVar__2_2 = (MR_Integer) 1;
      break;
    case (MR_Integer) 3:
      switch (((MR_Integer) ((MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0))))) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          *HeadVar__2_2 = (MR_Integer) 1;
          break;
        case (MR_Integer) 1:
          *HeadVar__2_2 = (MR_Integer) 1;
          break;
        case (MR_Integer) 2:
          *HeadVar__2_2 = (MR_Integer) 1;
          break;
        case (MR_Integer) 3:
          *HeadVar__2_2 = (MR_Integer) 1;
          break;
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
      Reason_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Reason_9, 0) = ((MR_Box) ((MR_Unsigned) 0U));
      MR_hl_field(MR_mktag(3), Reason_9, 1) = ((MR_Box) (Arg_7));
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
            MR_Word Var_93 = (MR_Word) (NewOptionsSet_28);
            MR_Word Var_94 = (MR_Word) (STATE_VARIABLE_OptionsSet_0_35);
            MR_Word Var_95;

            mercury__list__merge_and_remove_dups_3_p_0(TypeInfo_for_OptionType_88, Var_93, Var_94, &Var_95);
            *STATE_VARIABLE_OptionsSet_36 = (MR_Word) (Var_95);
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

void MR_CALL 
mercury__getopt__read_file_contents_4_p_0(
  MR_Word TypeClassInfo_for_read_file_contents_5,
  MR_String HeadVar__1_1,
  MR_Word * HeadVar__2_2,
  MR_Box HeadVar__3_3,
  MR_Box * HeadVar__4_4)
{
  {
    void MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *) = ((void MR_CALL (*)(MR_Box, MR_Box, MR_Box *, MR_Box, MR_Box *)) ((MR_hl_field(MR_mktag(0), (MR_hl_field(MR_mktag(0), TypeClassInfo_for_read_file_contents_5, (MR_Integer) 0)), (MR_Integer) 5))));
    MR_Box conv1_HeadVar__2_2;

    func_0(((MR_Box) (TypeClassInfo_for_read_file_contents_5)), ((MR_Box) (HeadVar__1_1)), &conv1_HeadVar__2_2, HeadVar__3_3, HeadVar__4_4);
    *HeadVar__2_2 = ((MR_Word) (conv1_HeadVar__2_2));
  }
}

void MR_CALL 
mercury__getopt__option_ops_to_internal_and_option_table_3_p_0(
  MR_Word TypeInfo_for_OptionType_16,
  MR_Word TypeInfo_for_UserDataType_17,
  MR_Word OptionOps_4,
  MR_Word * Internal_5,
  MR_Word * OptionTable0_6)
{
  {
    MR_Word Short_7;
    MR_Word Long_8;
    MR_Word MaybeSpecial_10;

    switch (MR_tag((MR_Word) OptionOps_4)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Defaults_9;

          Short_7 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OptionOps_4, (MR_Integer) 0))));
          Long_8 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OptionOps_4, (MR_Integer) 1))));
          Defaults_9 = ((MR_Word) ((MR_hl_field(MR_mktag(0), OptionOps_4, (MR_Integer) 2))));
          MaybeSpecial_10 = (MR_Word) ((MR_Unsigned) 0U);
          mercury__getopt__init_option_table_2_p_0(TypeInfo_for_OptionType_16, Defaults_9, OptionTable0_6);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Special_11;
          MR_Word Defaults_12;

          Short_7 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OptionOps_4, (MR_Integer) 0))));
          Long_8 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OptionOps_4, (MR_Integer) 1))));
          Defaults_12 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OptionOps_4, (MR_Integer) 2))));
          Special_11 = ((MR_Word) ((MR_hl_field(MR_mktag(1), OptionOps_4, (MR_Integer) 3))));
          {
            MaybeSpecial_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeSpecial_10, 0) = ((MR_Box) (Special_11));
          }
          mercury__getopt__init_option_table_2_p_0(TypeInfo_for_OptionType_16, Defaults_12, OptionTable0_6);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Defaults_13;

          Short_7 = ((MR_Word) ((MR_hl_field(MR_mktag(2), OptionOps_4, (MR_Integer) 0))));
          Long_8 = ((MR_Word) ((MR_hl_field(MR_mktag(2), OptionOps_4, (MR_Integer) 1))));
          Defaults_13 = ((MR_Word) ((MR_hl_field(MR_mktag(2), OptionOps_4, (MR_Integer) 2))));
          MaybeSpecial_10 = (MR_Word) ((MR_Unsigned) 0U);
          mercury__getopt__init_option_table_multi_2_p_0(TypeInfo_for_OptionType_16, Defaults_13, OptionTable0_6);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word Defaults_14;
          MR_Word Special_15;

          Short_7 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OptionOps_4, (MR_Integer) 0))));
          Long_8 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OptionOps_4, (MR_Integer) 1))));
          Defaults_14 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OptionOps_4, (MR_Integer) 2))));
          Special_15 = ((MR_Word) ((MR_hl_field(MR_mktag(3), OptionOps_4, (MR_Integer) 3))));
          {
            MaybeSpecial_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, (1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeSpecial_10, 0) = ((MR_Box) (Special_15));
          }
          mercury__getopt__init_option_table_multi_2_p_0(TypeInfo_for_OptionType_16, Defaults_14, OptionTable0_6);
        }
        break;
    }
    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, (3 * sizeof(MR_Word)), NULL, NULL);
      *Internal_5 = base;
      MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (Short_7));
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) (Long_8));
      MR_hl_field(MR_mktag(0), base, 2) = ((MR_Box) (MaybeSpecial_10));
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

      mercury__getopt__IntroducedFrom__pred__init_option_table_multi__792__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), &(env).mercury__getopt__init_option_table_multi_2_p_0_2_env_0__conv0_LambdaHeadVar__1_10, mercury__getopt__init_option_table_multi_2_p_0_1, &env);
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
    MR_Word Var_18;
    MR_Word TypeInfo_14_32;
    MR_Word Var_19;
    MR_Word Var_24;
    MR_Word Var_27;
    MR_Integer Var_49;
    MR_Box conv2_Var_27;
    MR_Word conv3_Var_18;

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
      Var_24 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&mercury__getopt_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (mercury__getopt__init_option_table_multi_2_p_0_3));
      MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (TypeInfo_15_15));
    }
    {
      TypeInfo_14_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_14_32, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_14_32, 1) = ((MR_Box) (TypeInfo_15_15));
    }
    mercury__solutions__builtin_aggregate_4_p_0(TypeInfo_15_15, TypeInfo_14_32, (MR_Word) (Var_9), (MR_Word) (Var_24), ((MR_Box) ((MR_Unsigned) 0U)), &conv2_Var_27);
    Var_27 = ((MR_Word) (conv2_Var_27));
    if ((Var_27 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140solutions.assert_num_solutions\'/3", (MR_String) "no solutions");
        return;
      }
    else
      Var_19 = Var_27;
    mercury__list__length_acc_3_p_0(TypeInfo_15_15, (MR_Word) (Var_19), (MR_Integer) 0, &Var_49);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_15_15, Var_49, (MR_Word) (Var_19), &conv3_Var_18);
    Var_18 = (MR_Word) (conv3_Var_18);
    if ((Var_18 == (MR_Word) ((MR_Unsigned) 0U)))
      {
        mercury__require__unexpected_2_p_0((MR_String) "predicate \140solutions.assert_num_solutions\'/3", (MR_String) "no solutions");
        return;
      }
    else
      OptionDefaultsList_8 = Var_18;
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

      mercury__getopt__IntroducedFrom__pred__init_option_table__784__1_3_p_0(((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3)))), ((MR_Word) ((MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4)))), &(env).mercury__getopt__init_option_table_2_p_0_2_env_0__conv0_LambdaHeadVar__1_10, mercury__getopt__init_option_table_2_p_0_1, &env);
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
    MR_Word Var_24;
    MR_Word Var_27;
    MR_Integer Var_49;
    MR_Box conv2_Var_27;
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
      Var_24 = (MR_Word) MR_new_object(MR_Word, (4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_24, 0) = ((MR_Box) (&mercury__getopt_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), Var_24, 1) = ((MR_Box) (mercury__getopt__init_option_table_2_p_0_3));
      MR_hl_field(MR_mktag(0), Var_24, 2) = ((MR_Box) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), Var_24, 3) = ((MR_Box) (TypeInfo_15_15));
    }
    {
      TypeInfo_14_32 = (MR_Word) MR_new_object(MR_Word, (2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_14_32, 0) = ((MR_Box) (&mercury__list__list__type_ctor_info_list_1));
      MR_hl_field(MR_mktag(0), TypeInfo_14_32, 1) = ((MR_Box) (TypeInfo_15_15));
    }
    mercury__solutions__builtin_aggregate_4_p_7(TypeInfo_15_15, TypeInfo_14_32, (MR_Word) (Var_9), (MR_Word) (Var_24), ((MR_Box) ((MR_Unsigned) 0U)), &conv2_Var_27);
    Var_27 = ((MR_Word) (conv2_Var_27));
    mercury__list__length_acc_3_p_0(TypeInfo_15_15, (MR_Word) (Var_27), (MR_Integer) 0, &Var_49);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_15_15, Var_49, (MR_Word) (Var_27), &conv3_OptionDefaultsList_8);
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
mercury__getopt____Unify____read_file_contents_result_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__getopt____Unify____read_file_contents_result_0_0(((MR_Word) (wrapper_arg_1)), ((MR_Word) (wrapper_arg_2)));
    return succeeded;
  }
}

static void MR_CALL 
mercury__getopt____Compare____read_file_contents_result_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__getopt____Compare____read_file_contents_result_0_0(&conv0_HeadVar__1_1, ((MR_Word) (wrapper_arg_2)), ((MR_Word) (wrapper_arg_3)));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
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

static void MR_CALL 
mercury__getopt__ClassMethod_for_getopt__read_file_contents____unit__unit__arity0______getopt__read_file_contents_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    mercury__getopt__ClassMethod_for_getopt__read_file_contents____unit__unit__arity0______getopt__read_file_contents_4_4_p_0(((MR_String) (wrapper_arg_1)), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
  }
}

static void MR_CALL 
mercury__getopt__ClassMethod_for_getopt__read_file_contents____io__state__arity0______getopt__read_file_contents_4_4_p_0_10001(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box * wrapper_arg_4)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv0_HeadVar__2_2;

    mercury__getopt__ClassMethod_for_getopt__read_file_contents____io__state__arity0______getopt__read_file_contents_4_4_p_0(((MR_String) (wrapper_arg_1)), &conv0_HeadVar__2_2);
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__2_2));
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
	MR_register_type_ctor_info(&mercury__getopt__getopt__type_ctor_info_read_file_contents_result_0);
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
