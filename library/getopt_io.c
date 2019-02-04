/*
** Automatically generated from `getopt_io.m'
** by the Mercury compiler,
** version 2018-05-12
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


// :- module getopt_io.
// :- implementation.

/*
INIT mercury__getopt_io__init
ENDINIT
*/

#include "getopt_io.mih"


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



struct mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0_s {
  MR_Word * mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0__LambdaHeadVar__1_10;
  MR_Cont mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0__cont;
  void * mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0__cont_env_ptr;
  MR_Box mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0__Option_6;
  MR_Word mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0__OptionData_7;
  MR_Box mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0__conv1_OptionData_7;
};

struct mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0_s {
  MR_Word * mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0__LambdaHeadVar__1_10;
  MR_Cont mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0__cont;
  void * mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0__cont_env_ptr;
  MR_Box mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0__Option_6;
  MR_Word mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0__OptionData_7;
  MR_Box mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0__conv1_OptionData_7;
};

struct mercury__getopt_io__init_option_table_multi_2_p_0_2_env_0_s {
  MR_Box * mercury__getopt_io__init_option_table_multi_2_p_0_2_env_0__wrapper_arg_1;
  MR_Cont mercury__getopt_io__init_option_table_multi_2_p_0_2_env_0__cont;
  void * mercury__getopt_io__init_option_table_multi_2_p_0_2_env_0__cont_env_ptr;
  MR_Word mercury__getopt_io__init_option_table_multi_2_p_0_2_env_0__conv0_LambdaHeadVar__1_10;
};

struct mercury__getopt_io__init_option_table_2_p_0_2_env_0_s {
  MR_Box * mercury__getopt_io__init_option_table_2_p_0_2_env_0__wrapper_arg_1;
  MR_Cont mercury__getopt_io__init_option_table_2_p_0_2_env_0__cont;
  void * mercury__getopt_io__init_option_table_2_p_0_2_env_0__cont_env_ptr;
  MR_Word mercury__getopt_io__init_option_table_2_p_0_2_env_0__conv0_LambdaHeadVar__1_10;
};


static const MR_VA_PseudoTypeInfo_Struct2 mercury__getopt_io____vpti_pred_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0;

static const MR_FA_PseudoTypeInfo_Struct2 mercury__getopt_io__pair__pti_pair_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt_io__list__pti_list_1__pseudo_1;

static const MR_FA_PseudoTypeInfo_Struct2 mercury__getopt_io__tree234__pti_tree234_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0;

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_maybe_option_table_1_0[1];

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_maybe_option_table_1_0;

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_maybe_option_table_1_1[1];

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_maybe_option_table_1_1;

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_maybe_option_table_1_0[1];

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_maybe_option_table_1_1[1];

static const MR_DuPtagLayout mercury__getopt_io__getopt_io__du_ptag_ordered_maybe_option_table_1[2];

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_name_ordered_maybe_option_table_1[2];

static const MR_Integer mercury__getopt_io__getopt_io__functor_number_map_maybe_option_table_1[2];

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_maybe_option_table_se_1_0[1];

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_maybe_option_table_se_1_0;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt_io__getopt_io__pti_option_error_1__pseudo_1;

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_maybe_option_table_se_1_1[1];

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_maybe_option_table_se_1_1;

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_maybe_option_table_se_1_0[1];

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_maybe_option_table_se_1_1[1];

static const MR_DuPtagLayout mercury__getopt_io__getopt_io__du_ptag_ordered_maybe_option_table_se_1[2];

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_name_ordered_maybe_option_table_se_1[2];

static const MR_Integer mercury__getopt_io__getopt_io__functor_number_map_maybe_option_table_se_1[2];

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_data_0_0[1];

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_0;

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_data_0_1[1];

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_1;

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_data_0_2[1];

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_2;

static const MR_FA_TypeInfo_Struct1 mercury__getopt_io__maybe__ti_maybe_1builtin__type_ctor_info_int_0;

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_data_0_3[1];

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_3;

static const MR_FA_TypeInfo_Struct1 mercury__getopt_io__maybe__ti_maybe_1builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_data_0_4[1];

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_4;

static const MR_FA_TypeInfo_Struct1 mercury__getopt_io__list__ti_list_1builtin__type_ctor_info_string_0;

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_data_0_5[1];

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_5;

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_6;

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_7;

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_8;

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_9;

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_10;

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_11;

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_data_0_0[6];

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_data_0_1[1];

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_data_0_2[1];

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_data_0_3[4];

static const MR_DuPtagLayout mercury__getopt_io__getopt_io__du_ptag_ordered_option_data_0[4];

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_name_ordered_option_data_0[12];

static const MR_Integer mercury__getopt_io__getopt_io__functor_number_map_option_data_0[12];

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_error_1_0[1];

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_error_1_0;

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_error_1_1[3];

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_error_1_1;

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_error_1_0[1];

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_error_1_1[1];

static const MR_DuPtagLayout mercury__getopt_io__getopt_io__du_ptag_ordered_option_error_1[2];

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_name_ordered_option_error_1[2];

static const MR_Integer mercury__getopt_io__getopt_io__functor_number_map_option_error_1[2];

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_0;

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_1;

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_error_reason_0_2[1];

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_2;

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_3;

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_4;

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_5;

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_error_reason_0_6[1];

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_6;

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_error_reason_0_7[1];

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_7;

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_error_reason_0_8[2];

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_8;

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_error_reason_0_9[2];

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_9;

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_error_reason_0_10[1];

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_10;

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_error_reason_0_0[5];

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_error_reason_0_1[1];

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_error_reason_0_2[1];

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_error_reason_0_3[4];

static const MR_DuPtagLayout mercury__getopt_io__getopt_io__du_ptag_ordered_option_error_reason_0[4];

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_name_ordered_option_error_reason_0[11];

static const MR_Integer mercury__getopt_io__getopt_io__functor_number_map_option_error_reason_0[11];

static const MR_VA_PseudoTypeInfo_Struct2 mercury__getopt_io____vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1;

static const MR_VA_PseudoTypeInfo_Struct2 mercury__getopt_io____vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1;

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_ops_1_0[3];

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_ops_1_0;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt_io__getopt_io__pti_maybe_option_table_1__pseudo_1;

static const MR_VA_PseudoTypeInfo_Struct4 mercury__getopt_io____vpti_pred_4__pseudo_1__plain_getopt_io__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0__pseudo_getopt_io__pti_maybe_option_table_1__pseudo_1;

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_ops_1_1[4];

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_ops_1_1;

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_ops_1_2[3];

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_ops_1_2;

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_ops_1_3[4];

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_ops_1_3;

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_ops_1_0[1];

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_ops_1_1[1];

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_ops_1_2[1];

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_ops_1_3[1];

static const MR_DuPtagLayout mercury__getopt_io__getopt_io__du_ptag_ordered_option_ops_1[4];

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_name_ordered_option_ops_1[4];

static const MR_Integer mercury__getopt_io__getopt_io__functor_number_map_option_ops_1[4];

static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt_io__getopt_io__pti_option_ops_special_1__pseudo_1;

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_ops_internal_1_0[3];

static const MR_ConstString mercury__getopt_io__getopt_io__field_names_option_ops_internal_1_0[3];

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_ops_internal_1_0;

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_ops_internal_1_0[1];

static const MR_DuPtagLayout mercury__getopt_io__getopt_io__du_ptag_ordered_option_ops_internal_1[1];

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_name_ordered_option_ops_internal_1[1];

static const MR_Integer mercury__getopt_io__getopt_io__functor_number_map_option_ops_internal_1[1];

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_ops_special_1_0;

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_ops_special_1_1[1];

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_ops_special_1_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt_io__set_ordlist__pti_set_ordlist_1__pseudo_1;

static const MR_VA_PseudoTypeInfo_Struct5 mercury__getopt_io____vpti_pred_5__pseudo_1__plain_getopt_io__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0__pseudo_getopt_io__pti_maybe_option_table_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1;

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_ops_special_1_2[1];

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_ops_special_1_2;

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_ops_special_1_0[1];

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_ops_special_1_1[1];

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_ops_special_1_2[1];

static const MR_DuPtagLayout mercury__getopt_io__getopt_io__du_ptag_ordered_option_ops_special_1[3];

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_name_ordered_option_ops_special_1[3];

static const MR_Integer mercury__getopt_io__getopt_io__functor_number_map_option_ops_special_1[3];

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_ops_track_1_0[3];

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_ops_track_1_0;

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_ops_track_1_0[1];

static const MR_DuPtagLayout mercury__getopt_io__getopt_io__du_ptag_ordered_option_ops_track_1[1];

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_name_ordered_option_ops_track_1[1];

static const MR_Integer mercury__getopt_io__getopt_io__functor_number_map_option_ops_track_1[1];

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_special_data_0_0;

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_special_data_0_1[1];

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_special_data_0_1;

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_special_data_0_2[1];

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_special_data_0_2;

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_special_data_0_3[1];

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_special_data_0_3;

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_special_data_0_4[1];

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_special_data_0_4;

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_special_data_0_0[1];

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_special_data_0_1[1];

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_special_data_0_2[1];

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_special_data_0_3[2];

static const MR_DuPtagLayout mercury__getopt_io__getopt_io__du_ptag_ordered_special_data_0[4];

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_name_ordered_special_data_0[5];

static const MR_Integer mercury__getopt_io__getopt_io__functor_number_map_special_data_0[5];

static MR_Integer MR_CALL 
mercury__getopt_io__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void);

static void MR_CALL 
mercury__getopt_io__words_loop__ho16_4_p_in__string_0(
  MR_String V_6_6,
  MR_Integer V_7_7,
  MR_Word * V_8_8);

static void MR_CALL 
mercury__getopt_io__skip_to_word_end__ho18_4_p_in__string_0(
  MR_String V_6_6,
  MR_Integer V_7_7,
  MR_Integer * V_8_8);

static void MR_CALL 
mercury__getopt_io__skip_to_next_word_start__ho17_4_p_in__string_0(
  MR_String V_6_6,
  MR_Integer V_7_7,
  MR_Integer * V_8_8);

static void MR_CALL 
mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0(
  MR_Word TypeInfo_for_OptionType_12,
  MR_Word OptionDefaultsPred_3,
  MR_Word * LambdaHeadVar__1_10,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0(
  MR_Word TypeInfo_for_OptionType_12,
  MR_Word OptionDefaultsPred_3,
  MR_Word * LambdaHeadVar__1_10,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
mercury__getopt_io__handle_long_option_15_p_0(
  MR_Word tscc_proc_2_input_1_TypeInfo_for_OptionType_55,
  MR_String tscc_proc_2_input_2_Option_16,
  MR_Box tscc_proc_2_input_3_Flag_17,
  MR_Word tscc_proc_2_input_4_OptionData_18,
  MR_Word tscc_proc_2_input_5_MaybeOptionArg0_19,
  MR_Word tscc_proc_2_input_6_Args0_20,
  MR_Word * tscc_output_ptr_1_HeadVar__2_2,
  MR_Word tscc_proc_2_input_7_OptionOps_22,
  MR_Word tscc_proc_2_input_8_OptionArgs0_23,
  MR_Word * tscc_output_ptr_2_OptionArgs_5,
  MR_Word tscc_proc_2_input_9_OptionTable0_25,
  MR_Word * tscc_output_ptr_3_HeadVar__7_7,
  MR_Word tscc_proc_2_input_10_STATE_VARIABLE_OptionsSet_0_40,
  MR_Word * tscc_output_ptr_4_STATE_VARIABLE_OptionsSet_9);

static void MR_CALL 
mercury__getopt_io__handle_short_options_12_p_0(
  MR_Word TypeInfo_for_OptionType_70,
  MR_Word HeadVar__1_1,
  MR_Word OptionOps_2,
  MR_Word HeadVar__3_3,
  MR_Word * Args_4,
  MR_Word HeadVar__5_5,
  MR_Word * OptionArgs_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_OptionsSet_0_9,
  MR_Word * STATE_VARIABLE_OptionsSet_10);

static void MR_CALL 
mercury__getopt_io__process_option_11_p_0(
  MR_Word TypeInfo_for_OptionType_266,
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Box Flag_3,
  MR_Word MaybeArg_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * Result_7,
  MR_Word STATE_VARIABLE_OptionsSet_0_8,
  MR_Word * STATE_VARIABLE_OptionsSet_9);

static void MR_CALL 
mercury__getopt_io__process_negated_option_7_p_0(
  MR_Word TypeInfo_for_OptionType_51,
  MR_String Option_8,
  MR_Box Flag_9,
  MR_Word OptionOps_10,
  MR_Word OptionTable0_11,
  MR_Word * Result_12,
  MR_Word STATE_VARIABLE_OptionsSet_0_23,
  MR_Word * STATE_VARIABLE_OptionsSet_24);

static void MR_CALL 
mercury__getopt_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_4_p_0(
  MR_Box Flag_5,
  MR_String Option_6,
  MR_String Arg_7,
  MR_Word * Result_8);

static void MR_CALL 
mercury__getopt_io__process_special_8_p_0(
  MR_Word TypeInfo_for_OptionType_54,
  MR_String Option_9,
  MR_Box Flag_10,
  MR_Word OptionData_11,
  MR_Word OptionOps_12,
  MR_Word OptionTable0_13,
  MR_Word * Result_14,
  MR_Word STATE_VARIABLE_OptionsSet_0_26,
  MR_Word * STATE_VARIABLE_OptionsSet_27);

static void MR_CALL 
mercury__getopt_io__init_option_table_multi_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mercury__getopt_io__init_option_table_multi_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__getopt_io__init_option_table_multi_2_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
mercury__getopt_io__init_option_table_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3);

static void MR_CALL 
mercury__getopt_io__init_option_table_2_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__getopt_io__init_option_table_2_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr);

static MR_bool MR_CALL 
mercury__getopt_io____Unify____maybe_option_table_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__getopt_io____Compare____maybe_option_table_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__getopt_io____Unify____maybe_option_table_se_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__getopt_io____Compare____maybe_option_table_se_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__getopt_io____Unify____option_data_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__getopt_io____Compare____option_data_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__getopt_io____Unify____option_error_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__getopt_io____Compare____option_error_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__getopt_io____Unify____option_error_reason_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__getopt_io____Compare____option_error_reason_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static MR_bool MR_CALL 
mercury__getopt_io____Unify____option_ops_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__getopt_io____Compare____option_ops_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__getopt_io____Unify____option_ops_internal_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__getopt_io____Compare____option_ops_internal_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__getopt_io____Unify____option_ops_special_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__getopt_io____Compare____option_ops_special_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__getopt_io____Unify____option_ops_track_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__getopt_io____Compare____option_ops_track_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__getopt_io____Unify____option_table_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__getopt_io____Compare____option_table_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__getopt_io____Unify____special_data_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2);

static void MR_CALL 
mercury__getopt_io____Compare____special_data_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);


static /* final */ const MR_Box mercury__getopt_io_scalar_common_1[7][2];

static /* final */ const MR_Box mercury__getopt_io_scalar_common_2[1][3];

static /* final */ const MR_Box mercury__getopt_io_scalar_common_3[1][4];

static /* final */ const MR_Box mercury__getopt_io_scalar_common_4[2][5];

static /* final */ const MR_Integer mercury__getopt_io_scalar_common_5[1][2];

static /* final */ const MR_Box mercury__getopt_io_scalar_common_6[1][6];

static /* final */ const MR_Box mercury__getopt_io_scalar_common_7[1][7];

static /* final */ const MR_Box mercury__getopt_io_scalar_common_8[2][1];




static /* final */ const MR_Box mercury__getopt_io_scalar_common_1[7][2] = {
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
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 4 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 5 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 2)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
  /* row 6 */
  {
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))))
  },
};

static /* final */ const MR_Box mercury__getopt_io_scalar_common_2[1][3] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__stream__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__getopt_io_scalar_common_3[1][4] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__output__arity2__io__output_stream__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__getopt_io_scalar_common_2[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Box mercury__getopt_io_scalar_common_4[2][5] = {
  /* row 0 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__string__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__getopt_io_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_string_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
  /* row 1 */
  {
    ((MR_Box) (base_typeclass_info_stream__writer__arity3__io__output_stream__arity0__character__arity0__io__state__arity0__)),
    ((MR_Box) (&mercury__getopt_io_scalar_common_3[0])),
    ((MR_Box) (&mercury__io__io__type_ctor_info_output_stream_0)),
    ((MR_Box) (&mercury__builtin__builtin__type_ctor_info_character_0)),
    ((MR_Box) (&mercury__io__io__type_ctor_info_state_0))
  },
};

static /* final */ const MR_Integer mercury__getopt_io_scalar_common_5[1][2] = {
  /* row 0 */
  {
    (MR_Integer) 1,
    (MR_Integer) 33
  },
};

static /* final */ const MR_Box mercury__getopt_io_scalar_common_6[1][6] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mercury__getopt_io_scalar_common_5[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (&mercury__getopt_io____vpti_pred_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0)),
    ((MR_Box) (&mercury__getopt_io__pair__pti_pair_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0))
  },
};

static /* final */ const MR_Box mercury__getopt_io_scalar_common_7[1][7] = {
  /* row 0 */
  {
    NULL,
    ((MR_Box) (&mercury__getopt_io_scalar_common_5[0])),
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__getopt_io__list__pti_list_1__pseudo_1)),
    ((MR_Box) (&mercury__getopt_io__list__pti_list_1__pseudo_1))
  },
};

static /* final */ const MR_Box mercury__getopt_io_scalar_common_8[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 0))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 1))
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



static const MR_VA_PseudoTypeInfo_Struct2 mercury__getopt_io____vpti_pred_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__getopt_io__pair__pti_pair_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt_io__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__getopt_io__tree234__pti_tree234_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0
  }
};

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_maybe_option_table_1_0[1] = {
  (MR_PseudoTypeInfo) &mercury__getopt_io__tree234__pti_tree234_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_maybe_option_table_1_0 = {
  (MR_String) "ok",
  (MR_Integer) 1,
  (MR_Integer) 1,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__getopt_io__getopt_io__field_types_maybe_option_table_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_maybe_option_table_1_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_maybe_option_table_1_1 = {
  (MR_String) "error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__getopt_io__getopt_io__field_types_maybe_option_table_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_maybe_option_table_1_0[1] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_maybe_option_table_1_0
};

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_maybe_option_table_1_1[1] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_maybe_option_table_1_1
};

static const MR_DuPtagLayout mercury__getopt_io__getopt_io__du_ptag_ordered_maybe_option_table_1[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__getopt_io__getopt_io__du_stag_ordered_maybe_option_table_1_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__getopt_io__getopt_io__du_stag_ordered_maybe_option_table_1_1
  }
};

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_name_ordered_maybe_option_table_1[2] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_maybe_option_table_1_1,
  &mercury__getopt_io__getopt_io__du_functor_desc_maybe_option_table_1_0
};

static const MR_Integer mercury__getopt_io__getopt_io__functor_number_map_maybe_option_table_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__getopt_io__getopt_io__type_ctor_info_maybe_option_table_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt_io____Unify____maybe_option_table_1_0_10001)),
  ((MR_Box) (mercury__getopt_io____Compare____maybe_option_table_1_0_10001)),
  (MR_String) "getopt_io",
  (MR_String) "maybe_option_table",
  {     mercury__getopt_io__getopt_io__du_name_ordered_maybe_option_table_1 },
  {     mercury__getopt_io__getopt_io__du_ptag_ordered_maybe_option_table_1 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__getopt_io__getopt_io__functor_number_map_maybe_option_table_1
};

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_maybe_option_table_se_1_0[1] = {
  (MR_PseudoTypeInfo) &mercury__getopt_io__tree234__pti_tree234_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_maybe_option_table_se_1_0 = {
  (MR_String) "ok",
  (MR_Integer) 1,
  (MR_Integer) 1,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__getopt_io__getopt_io__field_types_maybe_option_table_se_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt_io__getopt_io__pti_option_error_1__pseudo_1 = {
  &mercury__getopt_io__getopt_io__type_ctor_info_option_error_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_maybe_option_table_se_1_1[1] = {
  (MR_PseudoTypeInfo) &mercury__getopt_io__getopt_io__pti_option_error_1__pseudo_1
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_maybe_option_table_se_1_1 = {
  (MR_String) "error",
  (MR_Integer) 1,
  (MR_Integer) 1,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__getopt_io__getopt_io__field_types_maybe_option_table_se_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_maybe_option_table_se_1_0[1] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_maybe_option_table_se_1_0
};

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_maybe_option_table_se_1_1[1] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_maybe_option_table_se_1_1
};

static const MR_DuPtagLayout mercury__getopt_io__getopt_io__du_ptag_ordered_maybe_option_table_se_1[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__getopt_io__getopt_io__du_stag_ordered_maybe_option_table_se_1_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__getopt_io__getopt_io__du_stag_ordered_maybe_option_table_se_1_1
  }
};

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_name_ordered_maybe_option_table_se_1[2] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_maybe_option_table_se_1_1,
  &mercury__getopt_io__getopt_io__du_functor_desc_maybe_option_table_se_1_0
};

static const MR_Integer mercury__getopt_io__getopt_io__functor_number_map_maybe_option_table_se_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__getopt_io__getopt_io__type_ctor_info_maybe_option_table_se_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt_io____Unify____maybe_option_table_se_1_0_10001)),
  ((MR_Box) (mercury__getopt_io____Compare____maybe_option_table_se_1_0_10001)),
  (MR_String) "getopt_io",
  (MR_String) "maybe_option_table_se",
  {     mercury__getopt_io__getopt_io__du_name_ordered_maybe_option_table_se_1 },
  {     mercury__getopt_io__getopt_io__du_ptag_ordered_maybe_option_table_se_1 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__getopt_io__getopt_io__functor_number_map_maybe_option_table_se_1
};

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_data_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_0 = {
  (MR_String) "bool",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__getopt_io__getopt_io__field_types_option_data_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_data_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_1 = {
  (MR_String) "int",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__getopt_io__getopt_io__field_types_option_data_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_data_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_2 = {
  (MR_String) "string",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2,
  mercury__getopt_io__getopt_io__field_types_option_data_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 mercury__getopt_io__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_data_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__getopt_io__maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_3 = {
  (MR_String) "maybe_int",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 3,
  mercury__getopt_io__getopt_io__field_types_option_data_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 mercury__getopt_io__maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_data_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__getopt_io__maybe__ti_maybe_1builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_4 = {
  (MR_String) "maybe_string",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__getopt_io__getopt_io__field_types_option_data_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 mercury__getopt_io__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_data_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__getopt_io__list__ti_list_1builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_5 = {
  (MR_String) "accumulating",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 5,
  mercury__getopt_io__getopt_io__field_types_option_data_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_6 = {
  (MR_String) "special",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 6,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_7 = {
  (MR_String) "bool_special",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 7,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_8 = {
  (MR_String) "int_special",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 8,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_9 = {
  (MR_String) "string_special",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 9,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_10 = {
  (MR_String) "maybe_string_special",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 10,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_11 = {
  (MR_String) "file_special",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 5,
  (MR_Integer) 11,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_data_0_0[6] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_6,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_7,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_8,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_9,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_10,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_11
};

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_data_0_1[1] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_0
};

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_data_0_2[1] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_1
};

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_data_0_3[4] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_2,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_3,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_4,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_5
};

static const MR_DuPtagLayout mercury__getopt_io__getopt_io__du_ptag_ordered_option_data_0[4] = {
  {
    (MR_Integer) 6,
    MR_SECTAG_LOCAL,
    mercury__getopt_io__getopt_io__du_stag_ordered_option_data_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__getopt_io__getopt_io__du_stag_ordered_option_data_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__getopt_io__getopt_io__du_stag_ordered_option_data_0_2
  },
  {
    (MR_Integer) 4,
    MR_SECTAG_REMOTE,
    mercury__getopt_io__getopt_io__du_stag_ordered_option_data_0_3
  }
};

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_name_ordered_option_data_0[12] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_5,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_0,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_7,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_11,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_1,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_8,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_3,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_4,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_10,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_6,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_2,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_data_0_9
};

static const MR_Integer mercury__getopt_io__getopt_io__functor_number_map_option_data_0[12] = {
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

const MR_TypeCtorInfo_Struct mercury__getopt_io__getopt_io__type_ctor_info_option_data_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 4,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt_io____Unify____option_data_0_0_10001)),
  ((MR_Box) (mercury__getopt_io____Compare____option_data_0_0_10001)),
  (MR_String) "getopt_io",
  (MR_String) "option_data",
  {     mercury__getopt_io__getopt_io__du_name_ordered_option_data_0 },
  {     mercury__getopt_io__getopt_io__du_ptag_ordered_option_data_0 },
  (MR_Integer) 12,
  (MR_Integer) 4,
  mercury__getopt_io__getopt_io__functor_number_map_option_data_0
};

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_error_1_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_error_1_0 = {
  (MR_String) "unrecognized_option",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__getopt_io__getopt_io__field_types_option_error_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_error_1_1[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__getopt_io__getopt_io__type_ctor_info_option_error_reason_0
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_error_1_1 = {
  (MR_String) "option_error",
  (MR_Integer) 3,
  (MR_Integer) 1,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__getopt_io__getopt_io__field_types_option_error_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_error_1_0[1] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_option_error_1_0
};

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_error_1_1[1] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_option_error_1_1
};

static const MR_DuPtagLayout mercury__getopt_io__getopt_io__du_ptag_ordered_option_error_1[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__getopt_io__getopt_io__du_stag_ordered_option_error_1_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__getopt_io__getopt_io__du_stag_ordered_option_error_1_1
  }
};

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_name_ordered_option_error_1[2] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_option_error_1_1,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_error_1_0
};

static const MR_Integer mercury__getopt_io__getopt_io__functor_number_map_option_error_1[2] = {
  (MR_Integer) 1,
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__getopt_io__getopt_io__type_ctor_info_option_error_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt_io____Unify____option_error_1_0_10001)),
  ((MR_Box) (mercury__getopt_io____Compare____option_error_1_0_10001)),
  (MR_String) "getopt_io",
  (MR_String) "option_error",
  {     mercury__getopt_io__getopt_io__du_name_ordered_option_error_1 },
  {     mercury__getopt_io__getopt_io__du_ptag_ordered_option_error_1 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__getopt_io__getopt_io__functor_number_map_option_error_1
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_0 = {
  (MR_String) "unknown_type",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_1 = {
  (MR_String) "requires_argument",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 1,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_error_reason_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_2 = {
  (MR_String) "does_not_allow_argument",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__getopt_io__getopt_io__field_types_option_error_reason_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_3 = {
  (MR_String) "cannot_negate",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 2,
  (MR_Integer) 3,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_4 = {
  (MR_String) "special_handler_failed",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 3,
  (MR_Integer) 4,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_5 = {
  (MR_String) "special_handler_missing",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 4,
  (MR_Integer) 5,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_error_reason_0_6[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_6 = {
  (MR_String) "special_handler_error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 6,
  mercury__getopt_io__getopt_io__field_types_option_error_reason_0_6,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_error_reason_0_7[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_7 = {
  (MR_String) "requires_numeric_argument",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 7,
  mercury__getopt_io__getopt_io__field_types_option_error_reason_0_7,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_error_reason_0_8[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_error_0
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_8 = {
  (MR_String) "file_special_cannot_open",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 8,
  mercury__getopt_io__getopt_io__field_types_option_error_reason_0_8,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_error_reason_0_9[2] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__io__io__type_ctor_info_error_0
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_9 = {
  (MR_String) "file_special_cannot_read",
  (MR_Integer) 2,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 9,
  mercury__getopt_io__getopt_io__field_types_option_error_reason_0_9,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_error_reason_0_10[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_10 = {
  (MR_String) "file_special_contains_non_option_args",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 10,
  mercury__getopt_io__getopt_io__field_types_option_error_reason_0_10,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_error_reason_0_0[5] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_0,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_1,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_3,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_4,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_5
};

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_error_reason_0_1[1] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_2
};

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_error_reason_0_2[1] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_6
};

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_error_reason_0_3[4] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_7,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_8,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_9,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_10
};

static const MR_DuPtagLayout mercury__getopt_io__getopt_io__du_ptag_ordered_option_error_reason_0[4] = {
  {
    (MR_Integer) 5,
    MR_SECTAG_LOCAL,
    mercury__getopt_io__getopt_io__du_stag_ordered_option_error_reason_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__getopt_io__getopt_io__du_stag_ordered_option_error_reason_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__getopt_io__getopt_io__du_stag_ordered_option_error_reason_0_2
  },
  {
    (MR_Integer) 4,
    MR_SECTAG_REMOTE,
    mercury__getopt_io__getopt_io__du_stag_ordered_option_error_reason_0_3
  }
};

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_name_ordered_option_error_reason_0[11] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_3,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_2,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_8,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_9,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_10,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_1,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_7,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_6,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_4,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_5,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_error_reason_0_0
};

static const MR_Integer mercury__getopt_io__getopt_io__functor_number_map_option_error_reason_0[11] = {
  (MR_Integer) 10,
  (MR_Integer) 5,
  (MR_Integer) 1,
  (MR_Integer) 0,
  (MR_Integer) 8,
  (MR_Integer) 9,
  (MR_Integer) 7,
  (MR_Integer) 6,
  (MR_Integer) 2,
  (MR_Integer) 3,
  (MR_Integer) 4
};

const MR_TypeCtorInfo_Struct mercury__getopt_io__getopt_io__type_ctor_info_option_error_reason_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 4,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt_io____Unify____option_error_reason_0_0_10001)),
  ((MR_Box) (mercury__getopt_io____Compare____option_error_reason_0_0_10001)),
  (MR_String) "getopt_io",
  (MR_String) "option_error_reason",
  {     mercury__getopt_io__getopt_io__du_name_ordered_option_error_reason_0 },
  {     mercury__getopt_io__getopt_io__du_ptag_ordered_option_error_reason_0 },
  (MR_Integer) 11,
  (MR_Integer) 4,
  mercury__getopt_io__getopt_io__functor_number_map_option_error_reason_0
};

static const MR_VA_PseudoTypeInfo_Struct2 mercury__getopt_io____vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 mercury__getopt_io____vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_ops_1_0[3] = {
  (MR_PseudoTypeInfo) &mercury__getopt_io____vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt_io____vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt_io____vpti_pred_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_ops_1_0 = {
  (MR_String) "option_ops",
  (MR_Integer) 3,
  (MR_Integer) 7,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__getopt_io__getopt_io__field_types_option_ops_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt_io__getopt_io__pti_maybe_option_table_1__pseudo_1 = {
  &mercury__getopt_io__getopt_io__type_ctor_info_maybe_option_table_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_VA_PseudoTypeInfo_Struct4 mercury__getopt_io____vpti_pred_4__pseudo_1__plain_getopt_io__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0__pseudo_getopt_io__pti_maybe_option_table_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__getopt_io__getopt_io__type_ctor_info_special_data_0,
    (MR_PseudoTypeInfo) &mercury__getopt_io__tree234__pti_tree234_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0,
    (MR_PseudoTypeInfo) &mercury__getopt_io__getopt_io__pti_maybe_option_table_1__pseudo_1
  }
};

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_ops_1_1[4] = {
  (MR_PseudoTypeInfo) &mercury__getopt_io____vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt_io____vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt_io____vpti_pred_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0,
  (MR_PseudoTypeInfo) &mercury__getopt_io____vpti_pred_4__pseudo_1__plain_getopt_io__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0__pseudo_getopt_io__pti_maybe_option_table_1__pseudo_1
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_ops_1_1 = {
  (MR_String) "option_ops",
  (MR_Integer) 4,
  (MR_Integer) 15,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__getopt_io__getopt_io__field_types_option_ops_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_ops_1_2[3] = {
  (MR_PseudoTypeInfo) &mercury__getopt_io____vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt_io____vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt_io____vpti_pred_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_ops_1_2 = {
  (MR_String) "option_ops_multi",
  (MR_Integer) 3,
  (MR_Integer) 7,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__getopt_io__getopt_io__field_types_option_ops_1_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_ops_1_3[4] = {
  (MR_PseudoTypeInfo) &mercury__getopt_io____vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt_io____vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt_io____vpti_pred_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0,
  (MR_PseudoTypeInfo) &mercury__getopt_io____vpti_pred_4__pseudo_1__plain_getopt_io__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0__pseudo_getopt_io__pti_maybe_option_table_1__pseudo_1
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_ops_1_3 = {
  (MR_String) "option_ops_multi",
  (MR_Integer) 4,
  (MR_Integer) 15,
  MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 3,
  mercury__getopt_io__getopt_io__field_types_option_ops_1_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_ops_1_0[1] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_option_ops_1_0
};

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_ops_1_1[1] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_option_ops_1_1
};

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_ops_1_2[1] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_option_ops_1_2
};

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_ops_1_3[1] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_option_ops_1_3
};

static const MR_DuPtagLayout mercury__getopt_io__getopt_io__du_ptag_ordered_option_ops_1[4] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__getopt_io__getopt_io__du_stag_ordered_option_ops_1_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__getopt_io__getopt_io__du_stag_ordered_option_ops_1_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__getopt_io__getopt_io__du_stag_ordered_option_ops_1_2
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__getopt_io__getopt_io__du_stag_ordered_option_ops_1_3
  }
};

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_name_ordered_option_ops_1[4] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_option_ops_1_0,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_ops_1_1,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_ops_1_2,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_ops_1_3
};

static const MR_Integer mercury__getopt_io__getopt_io__functor_number_map_option_ops_1[4] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2,
  (MR_Integer) 3
};

const MR_TypeCtorInfo_Struct mercury__getopt_io__getopt_io__type_ctor_info_option_ops_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) 4,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt_io____Unify____option_ops_1_0_10001)),
  ((MR_Box) (mercury__getopt_io____Compare____option_ops_1_0_10001)),
  (MR_String) "getopt_io",
  (MR_String) "option_ops",
  {     mercury__getopt_io__getopt_io__du_name_ordered_option_ops_1 },
  {     mercury__getopt_io__getopt_io__du_ptag_ordered_option_ops_1 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  mercury__getopt_io__getopt_io__functor_number_map_option_ops_1
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt_io__getopt_io__pti_option_ops_special_1__pseudo_1 = {
  &mercury__getopt_io__getopt_io__type_ctor_info_option_ops_special_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_ops_internal_1_0[3] = {
  (MR_PseudoTypeInfo) &mercury__getopt_io____vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt_io____vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt_io__getopt_io__pti_option_ops_special_1__pseudo_1
};

static const MR_ConstString mercury__getopt_io__getopt_io__field_names_option_ops_internal_1_0[3] = {
  (MR_String) "short_option",
  (MR_String) "long_option",
  (MR_String) "special_handler"
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_ops_internal_1_0 = {
  (MR_String) "option_ops_internal",
  (MR_Integer) 3,
  (MR_Integer) 7,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__getopt_io__getopt_io__field_types_option_ops_internal_1_0,
  mercury__getopt_io__getopt_io__field_names_option_ops_internal_1_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_ops_internal_1_0[1] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_option_ops_internal_1_0
};

static const MR_DuPtagLayout mercury__getopt_io__getopt_io__du_ptag_ordered_option_ops_internal_1[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__getopt_io__getopt_io__du_stag_ordered_option_ops_internal_1_0
  }
};

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_name_ordered_option_ops_internal_1[1] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_option_ops_internal_1_0
};

static const MR_Integer mercury__getopt_io__getopt_io__functor_number_map_option_ops_internal_1[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__getopt_io__getopt_io__type_ctor_info_option_ops_internal_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt_io____Unify____option_ops_internal_1_0_10001)),
  ((MR_Box) (mercury__getopt_io____Compare____option_ops_internal_1_0_10001)),
  (MR_String) "getopt_io",
  (MR_String) "option_ops_internal",
  {     mercury__getopt_io__getopt_io__du_name_ordered_option_ops_internal_1 },
  {     mercury__getopt_io__getopt_io__du_ptag_ordered_option_ops_internal_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__getopt_io__getopt_io__functor_number_map_option_ops_internal_1
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_ops_special_1_0 = {
  (MR_String) "none",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_ops_special_1_1[1] = {
  (MR_PseudoTypeInfo) &mercury__getopt_io____vpti_pred_4__pseudo_1__plain_getopt_io__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0__pseudo_getopt_io__pti_maybe_option_table_1__pseudo_1
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_ops_special_1_1 = {
  (MR_String) "notrack",
  (MR_Integer) 1,
  (MR_Integer) 1,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__getopt_io__getopt_io__field_types_option_ops_special_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt_io__set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_VA_PseudoTypeInfo_Struct5 mercury__getopt_io____vpti_pred_5__pseudo_1__plain_getopt_io__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0__pseudo_getopt_io__pti_maybe_option_table_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 5,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__getopt_io__getopt_io__type_ctor_info_special_data_0,
    (MR_PseudoTypeInfo) &mercury__getopt_io__tree234__pti_tree234_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0,
    (MR_PseudoTypeInfo) &mercury__getopt_io__getopt_io__pti_maybe_option_table_1__pseudo_1,
    (MR_PseudoTypeInfo) &mercury__getopt_io__set_ordlist__pti_set_ordlist_1__pseudo_1
  }
};

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_ops_special_1_2[1] = {
  (MR_PseudoTypeInfo) &mercury__getopt_io____vpti_pred_5__pseudo_1__plain_getopt_io__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0__pseudo_getopt_io__pti_maybe_option_table_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_ops_special_1_2 = {
  (MR_String) "track",
  (MR_Integer) 1,
  (MR_Integer) 1,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__getopt_io__getopt_io__field_types_option_ops_special_1_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_ops_special_1_0[1] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_option_ops_special_1_0
};

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_ops_special_1_1[1] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_option_ops_special_1_1
};

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_ops_special_1_2[1] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_option_ops_special_1_2
};

static const MR_DuPtagLayout mercury__getopt_io__getopt_io__du_ptag_ordered_option_ops_special_1[3] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    mercury__getopt_io__getopt_io__du_stag_ordered_option_ops_special_1_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__getopt_io__getopt_io__du_stag_ordered_option_ops_special_1_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__getopt_io__getopt_io__du_stag_ordered_option_ops_special_1_2
  }
};

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_name_ordered_option_ops_special_1[3] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_option_ops_special_1_0,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_ops_special_1_1,
  &mercury__getopt_io__getopt_io__du_functor_desc_option_ops_special_1_2
};

static const MR_Integer mercury__getopt_io__getopt_io__functor_number_map_option_ops_special_1[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct mercury__getopt_io__getopt_io__type_ctor_info_option_ops_special_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) 3,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt_io____Unify____option_ops_special_1_0_10001)),
  ((MR_Box) (mercury__getopt_io____Compare____option_ops_special_1_0_10001)),
  (MR_String) "getopt_io",
  (MR_String) "option_ops_special",
  {     mercury__getopt_io__getopt_io__du_name_ordered_option_ops_special_1 },
  {     mercury__getopt_io__getopt_io__du_ptag_ordered_option_ops_special_1 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__getopt_io__getopt_io__functor_number_map_option_ops_special_1
};

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_option_ops_track_1_0[3] = {
  (MR_PseudoTypeInfo) &mercury__getopt_io____vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt_io____vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt_io____vpti_pred_5__pseudo_1__plain_getopt_io__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0__pseudo_getopt_io__pti_maybe_option_table_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_option_ops_track_1_0 = {
  (MR_String) "option_ops_track",
  (MR_Integer) 3,
  (MR_Integer) 7,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__getopt_io__getopt_io__field_types_option_ops_track_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_option_ops_track_1_0[1] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_option_ops_track_1_0
};

static const MR_DuPtagLayout mercury__getopt_io__getopt_io__du_ptag_ordered_option_ops_track_1[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__getopt_io__getopt_io__du_stag_ordered_option_ops_track_1_0
  }
};

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_name_ordered_option_ops_track_1[1] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_option_ops_track_1_0
};

static const MR_Integer mercury__getopt_io__getopt_io__functor_number_map_option_ops_track_1[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__getopt_io__getopt_io__type_ctor_info_option_ops_track_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt_io____Unify____option_ops_track_1_0_10001)),
  ((MR_Box) (mercury__getopt_io____Compare____option_ops_track_1_0_10001)),
  (MR_String) "getopt_io",
  (MR_String) "option_ops_track",
  {     mercury__getopt_io__getopt_io__du_name_ordered_option_ops_track_1 },
  {     mercury__getopt_io__getopt_io__du_ptag_ordered_option_ops_track_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__getopt_io__getopt_io__functor_number_map_option_ops_track_1
};

const MR_TypeCtorInfo_Struct mercury__getopt_io__getopt_io__type_ctor_info_option_table_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__getopt_io____Unify____option_table_1_0_10001)),
  ((MR_Box) (mercury__getopt_io____Compare____option_table_1_0_10001)),
  (MR_String) "getopt_io",
  (MR_String) "option_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__getopt_io__tree234__pti_tree234_2__pseudo_1__plain_getopt_io__type_ctor_info_option_data_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_special_data_0_0 = {
  (MR_String) "none",
  (MR_Integer) 0,
  (MR_Integer) 0,
  MR_SECTAG_LOCAL,
  (MR_Integer) 0,
  (MR_Integer) 0,
  (MR_Integer) 0,
  NULL,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_special_data_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_special_data_0_1 = {
  (MR_String) "bool",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__getopt_io__getopt_io__field_types_special_data_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_special_data_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_special_data_0_2 = {
  (MR_String) "int",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__getopt_io__getopt_io__field_types_special_data_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_special_data_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_special_data_0_3 = {
  (MR_String) "string",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  mercury__getopt_io__getopt_io__field_types_special_data_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__getopt_io__getopt_io__field_types_special_data_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__getopt_io__maybe__ti_maybe_1builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury__getopt_io__getopt_io__du_functor_desc_special_data_0_4 = {
  (MR_String) "maybe_string",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__getopt_io__getopt_io__field_types_special_data_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_special_data_0_0[1] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_special_data_0_0
};

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_special_data_0_1[1] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_special_data_0_1
};

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_special_data_0_2[1] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_special_data_0_2
};

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_stag_ordered_special_data_0_3[2] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_special_data_0_3,
  &mercury__getopt_io__getopt_io__du_functor_desc_special_data_0_4
};

static const MR_DuPtagLayout mercury__getopt_io__getopt_io__du_ptag_ordered_special_data_0[4] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    mercury__getopt_io__getopt_io__du_stag_ordered_special_data_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__getopt_io__getopt_io__du_stag_ordered_special_data_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__getopt_io__getopt_io__du_stag_ordered_special_data_0_2
  },
  {
    (MR_Integer) 2,
    MR_SECTAG_REMOTE,
    mercury__getopt_io__getopt_io__du_stag_ordered_special_data_0_3
  }
};

static const MR_DuFunctorDescPtr mercury__getopt_io__getopt_io__du_name_ordered_special_data_0[5] = {
  &mercury__getopt_io__getopt_io__du_functor_desc_special_data_0_1,
  &mercury__getopt_io__getopt_io__du_functor_desc_special_data_0_2,
  &mercury__getopt_io__getopt_io__du_functor_desc_special_data_0_4,
  &mercury__getopt_io__getopt_io__du_functor_desc_special_data_0_0,
  &mercury__getopt_io__getopt_io__du_functor_desc_special_data_0_3
};

static const MR_Integer mercury__getopt_io__getopt_io__functor_number_map_special_data_0[5] = {
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 4,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct mercury__getopt_io__getopt_io__type_ctor_info_special_data_0 = {
  (MR_Integer) 0,
  (MR_Integer) 17,
  (MR_Integer) 4,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt_io____Unify____special_data_0_0_10001)),
  ((MR_Box) (mercury__getopt_io____Compare____special_data_0_0_10001)),
  (MR_String) "getopt_io",
  (MR_String) "special_data",
  {     mercury__getopt_io__getopt_io__du_name_ordered_special_data_0 },
  {     mercury__getopt_io__getopt_io__du_ptag_ordered_special_data_0 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  mercury__getopt_io__getopt_io__functor_number_map_special_data_0
};

static MR_Integer MR_CALL 
mercury__getopt_io__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    return (MR_Integer) 1200;
  }
}

static void MR_CALL 
mercury__getopt_io__words_loop__ho16_4_p_in__string_0(
  MR_String V_6_6,
  MR_Integer V_7_7,
  MR_Word * V_8_8)
{
  {
    MR_bool succeeded;
    MR_Integer V_9_9;

    mercury__getopt_io__skip_to_word_end__ho18_4_p_in__string_0(V_6_6, V_7_7, &V_9_9);
    succeeded = (V_9_9 == V_7_7);
    if (succeeded)
      *V_8_8 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    else
    {
      MR_String V_10_10;
      MR_Integer V_11_11;

{
#define MR_PROC_LABEL mercury__getopt_io__words_loop__ho16_4_p_in__string_0

	MR_String Str;
	MR_Integer Start;
	MR_Integer End;
	MR_String SubString;

	Str =  V_6_6 ;
	Start =  V_7_7 ;
	End =  V_9_9 ;
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
	 V_10_10  = SubString;
}
      mercury__getopt_io__skip_to_next_word_start__ho17_4_p_in__string_0(V_6_6, V_9_9, &V_11_11);
      succeeded = (V_9_9 == V_11_11);
      if (succeeded)
      {
        MR_Word V_13_12 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *V_8_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (V_10_10));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (V_13_12));
        }
      }
      else
      {
        MR_Word V_12_13;

        mercury__getopt_io__words_loop__ho16_4_p_in__string_0(V_6_6, V_11_11, &V_12_13);
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          *V_8_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (V_10_10));
          MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (V_12_13));
        }
      }
    }
  }
}

static void MR_CALL 
mercury__getopt_io__skip_to_word_end__ho18_4_p_in__string_0(
  MR_String V_6_6,
  MR_Integer V_7_7,
  MR_Integer * V_8_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer V_9_9;
    MR_Char V_10_10;

    // setup for model_det tailcalls optimized into a loop
{
#define MR_PROC_LABEL mercury__getopt_io__skip_to_word_end__ho18_4_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  V_6_6 ;
	Index =  V_7_7 ;
		{

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 V_9_9  = NextIndex;
	 V_10_10  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
    {
      succeeded = mercury__char__is_whitespace_1_p_0(V_10_10);
      if (succeeded)
        *V_8_8 = V_7_7;
      else
      {
        MR_Integer next_value_of_V_7_7 = V_9_9;

        // direct tailcall eliminated
        V_7_7 = next_value_of_V_7_7;
        continue;
      }
    }
    else
      *V_8_8 = V_7_7;
    break;
  }
}

static void MR_CALL 
mercury__getopt_io__skip_to_next_word_start__ho17_4_p_in__string_0(
  MR_String V_6_6,
  MR_Integer V_7_7,
  MR_Integer * V_8_8)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;
    MR_Integer V_9_9;
    MR_Char V_10_10;

    // setup for model_det tailcalls optimized into a loop
{
#define MR_PROC_LABEL mercury__getopt_io__skip_to_next_word_start__ho17_4_p_in__string_0

	MR_String Str;
	MR_Integer Index;
	MR_Integer NextIndex;
	MR_Char Ch;
	MR_bool SUCCESS_INDICATOR;

	Str =  V_6_6 ;
	Index =  V_7_7 ;
		{

    Ch = Str[Index];
    if (MR_is_ascii(Ch)) {
        NextIndex = Index + 1;
        SUCCESS_INDICATOR = (Ch != 0);
    } else {
        NextIndex = Index;
        Ch = MR_utf8_get_next_mb(Str, &NextIndex);
        SUCCESS_INDICATOR = (Ch > 0);
    }


		;}
#undef MR_PROC_LABEL
	if (SUCCESS_INDICATOR) {
	 V_9_9  = NextIndex;
	 V_10_10  = Ch;
	}
succeeded  = SUCCESS_INDICATOR;
}
    if (succeeded)
      succeeded = mercury__char__is_whitespace_1_p_0(V_10_10);
    if (succeeded)
    {
      MR_Integer next_value_of_V_7_7 = V_9_9;

      // direct tailcall eliminated
      V_7_7 = next_value_of_V_7_7;
      continue;
    }
    else
      *V_8_8 = V_7_7;
    break;
  }
}

static void MR_CALL 
mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_2(
  void * env_ptr_arg)
{
  {
    struct mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0_s * env_ptr = (struct mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0_s *) env_ptr_arg;

    (env_ptr)->mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0__OptionData_7 = ((MR_Word) (env_ptr)->mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0__conv1_OptionData_7);
    mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_1(env_ptr);
  }
}

static void MR_CALL 
mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_1(
  void * env_ptr_arg)
{
  {
    struct mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0_s * env_ptr = (struct mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0_s *) env_ptr_arg;

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *((env_ptr)->mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0__LambdaHeadVar__1_10) = base;
      MR_hl_field(MR_mktag(0), base, 0) = (env_ptr)->mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0__Option_6;
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((env_ptr)->mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0__OptionData_7));
    }
    ((env_ptr)->mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0__cont)((env_ptr)->mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0(
  MR_Word TypeInfo_for_OptionType_12,
  MR_Word OptionDefaultsPred_3,
  MR_Word * LambdaHeadVar__1_10,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0_s env;

    (env).mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0__LambdaHeadVar__1_10 = LambdaHeadVar__1_10;
    (env).mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0__cont = cont;
    (env).mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0__cont_env_ptr = cont_env_ptr;
    {
      void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), OptionDefaultsPred_3, (MR_Integer) 1)));

      func_0(((MR_Box) OptionDefaultsPred_3), &(env).mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0__Option_6, &(env).mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_env_0__conv1_OptionData_7, mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0_2, &env);
    }
  }
}

static void MR_CALL 
mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_2(
  void * env_ptr_arg)
{
  {
    struct mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0_s * env_ptr = (struct mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0_s *) env_ptr_arg;

    (env_ptr)->mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0__OptionData_7 = ((MR_Word) (env_ptr)->mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0__conv1_OptionData_7);
    mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_1(env_ptr);
  }
}

static void MR_CALL 
mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_1(
  void * env_ptr_arg)
{
  {
    struct mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0_s * env_ptr = (struct mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0_s *) env_ptr_arg;

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *((env_ptr)->mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0__LambdaHeadVar__1_10) = base;
      MR_hl_field(MR_mktag(0), base, 0) = (env_ptr)->mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0__Option_6;
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((env_ptr)->mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0__OptionData_7));
    }
    ((env_ptr)->mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0__cont)((env_ptr)->mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0(
  MR_Word TypeInfo_for_OptionType_12,
  MR_Word OptionDefaultsPred_3,
  MR_Word * LambdaHeadVar__1_10,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0_s env;

    (env).mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0__LambdaHeadVar__1_10 = LambdaHeadVar__1_10;
    (env).mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0__cont = cont;
    (env).mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0__cont_env_ptr = cont_env_ptr;
    {
      void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), OptionDefaultsPred_3, (MR_Integer) 1)));

      func_0(((MR_Box) OptionDefaultsPred_3), &(env).mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0__Option_6, &(env).mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_env_0__conv1_OptionData_7, mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0_2, &env);
    }
  }
}

void MR_CALL 
mercury__getopt_io____Compare____special_data_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_44 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_45 = (MR_Integer) HeadVar__3_3;

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
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
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
            MR_Word Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer Var_54 = (MR_Integer) Var_50;
                  MR_Integer Var_55 = (MR_Integer) ArgY1_10;

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
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
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
            MR_Integer Var_51 = ((MR_Integer) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));

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
                  MR_Integer ArgY1_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0)));

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
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
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
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String Var_53 = ((MR_String) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));

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
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_String ArgY1_32 = ((MR_String) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));
                          MR_Integer V_7_65;

{
#define MR_PROC_LABEL mercury__getopt_io____Compare____special_data_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  Var_53 ;
	S2 =  ArgY1_32 ;
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
                MR_Word Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));

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
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word TypeInfo_46_46 = (MR_Word) &mercury__getopt_io_scalar_common_1[1];
                          MR_Word ArgY1_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));

                          mercury__builtin__compare_3_p_0(TypeInfo_46_46, HeadVar__1_1, ((MR_Box) (Var_52)), ((MR_Box) (ArgY1_43)));
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
mercury__getopt_io____Unify____special_data_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_13 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_14 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_13 == CastY_14);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer CastX_3 = (MR_Integer) HeadVar__1_1;
            MR_Integer CastY_4 = (MR_Integer) HeadVar__2_2;

            succeeded = (CastY_4 == CastX_3);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
              succeeded = (ArgX1_5 == ArgY1_6);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer ArgX1_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (succeeded)
            {
              ArgY1_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));
              succeeded = (ArgX1_7 == ArgY1_8);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String ArgX1_9 = ((MR_String) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                MR_String ArgY1_10;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_10 = ((MR_String) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                  succeeded = (strcmp(ArgX1_9, ArgY1_10) == 0);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word TypeInfo_15_15;
                MR_Word ArgX1_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                MR_Word ArgY1_12;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                  TypeInfo_15_15 = (MR_Word) &mercury__getopt_io_scalar_common_1[1];
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
mercury__getopt_io____Compare____option_table_1_0(
  MR_Word TypeInfo_for_OptionType_6,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_Word TypeCtorInfo_7_7 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__tree234____Compare____tree234_2_0(TypeInfo_for_OptionType_6, TypeCtorInfo_7_7, HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
mercury__getopt_io____Unify____option_table_1_0(
  MR_Word TypeInfo_for_OptionType_5,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Word TypeCtorInfo_6_6 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__tree234____Unify____tree234_2_0(TypeInfo_for_OptionType_5, TypeCtorInfo_6_6, Cast_HeadVar1_3, Cast_HeadVar2_4);
    return succeeded;
  }
}

void MR_CALL 
mercury__getopt_io____Compare____option_ops_track_1_0(
  MR_Word TypeInfo_for_OptionType_14,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_13 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word Var_10;

      mercury__private_builtin__builtin_compare_pred_3_p_0(&Var_10, (MR_Word) ArgX1_4, (MR_Word) ArgY1_5);
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;

        mercury__private_builtin__builtin_compare_pred_3_p_0(&Var_11, (MR_Word) ArgX2_6, (MR_Word) ArgY2_7);
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
          mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) ArgX3_8, (MR_Word) ArgY3_9);
      }
    }
  }
}

MR_bool MR_CALL 
mercury__getopt_io____Unify____option_ops_track_1_0(
  MR_Word TypeInfo_for_OptionType_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));

      succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) ArgX1_3, (MR_Word) ArgY1_4);
      if (succeeded)
      {
        succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) ArgX2_5, (MR_Word) ArgY2_6);
        if (succeeded)
          succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) ArgX3_7, (MR_Word) ArgY3_8);
      }
    }
    return succeeded;
  }
}

void MR_CALL 
mercury__getopt_io____Compare____option_ops_internal_1_0(
  MR_Word TypeInfo_for_OptionType_14,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_13 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
      MR_Word ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
      MR_Word ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
      MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
      MR_Word Var_10;

      mercury__private_builtin__builtin_compare_pred_3_p_0(&Var_10, (MR_Word) ArgX1_4, (MR_Word) ArgY1_5);
      succeeded = (Var_10 == (MR_Integer) 0);
      succeeded = !(succeeded);
      if (succeeded)
        *HeadVar__1_1 = Var_10;
      else
      {
        MR_Word Var_11;

        mercury__private_builtin__builtin_compare_pred_3_p_0(&Var_11, (MR_Word) ArgX2_6, (MR_Word) ArgY2_7);
        succeeded = (Var_11 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_11;
        else
          mercury__getopt_io____Compare____option_ops_special_1_0(TypeInfo_for_OptionType_14, HeadVar__1_1, ArgX3_8, ArgY3_9);
      }
    }
  }
}

void MR_CALL 
mercury__getopt_io____Compare____option_ops_special_1_0(
  MR_Word TypeInfo_for_OptionType_18,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_16 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_17 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_16 == CastY_17);
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
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

                  mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) Var_39, (MR_Word) ArgY1_8);
                }
                break;
              case (MR_Integer) 2:
                *HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));

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
                  MR_Word ArgY1_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0)));

                  mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) Var_40, (MR_Word) ArgY1_15);
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
mercury__getopt_io____Unify____option_ops_internal_1_0(
  MR_Word TypeInfo_for_OptionType_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    {
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
      MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
      MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));

      succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) ArgX1_3, (MR_Word) ArgY1_4);
      if (succeeded)
      {
        succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) ArgX2_5, (MR_Word) ArgY2_6);
        if (succeeded)
          succeeded = mercury__getopt_io____Unify____option_ops_special_1_0(TypeInfo_for_OptionType_11, ArgX3_7, ArgY3_8);
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__getopt_io____Unify____option_ops_special_1_0(
  MR_Word TypeInfo_for_OptionType_11,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_9 == CastY_10);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer CastX_3 = (MR_Integer) HeadVar__1_1;
            MR_Integer CastY_4 = (MR_Integer) HeadVar__2_2;

            succeeded = (CastY_4 == CastX_3);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
              succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) ArgX1_5, (MR_Word) ArgY1_6);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgX1_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (succeeded)
            {
              ArgY1_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));
              succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) ArgX1_7, (MR_Word) ArgY1_8);
            }
          }
          break;
      }
    return succeeded;
  }
}

void MR_CALL 
mercury__getopt_io____Compare____option_ops_1_0(
  MR_Word TypeInfo_for_OptionType_128,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_126 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_127 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_126 == CastY_127);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word Var_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
            MR_Word Var_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
            MR_Word Var_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word Var_10;

                  mercury__private_builtin__builtin_compare_pred_3_p_0(&Var_10, (MR_Word) Var_197, (MR_Word) ArgY1_5);
                  succeeded = (Var_10 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_10;
                  else
                  {
                    MR_Word Var_11;

                    mercury__private_builtin__builtin_compare_pred_3_p_0(&Var_11, (MR_Word) Var_196, (MR_Word) ArgY2_7);
                    succeeded = (Var_11 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                      *HeadVar__1_1 = Var_11;
                    else
                      mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) Var_195, (MR_Word) ArgY3_9);
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
            MR_Word Var_198 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3)));
            MR_Word Var_199 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2)));
            MR_Word Var_200 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
            MR_Word Var_201 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word ArgY1_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word ArgY2_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word ArgY3_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word ArgY4_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 3)));
                  MR_Word Var_47;

                  mercury__private_builtin__builtin_compare_pred_3_p_0(&Var_47, (MR_Word) Var_201, (MR_Word) ArgY1_40);
                  succeeded = (Var_47 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_47;
                  else
                  {
                    MR_Word Var_48;

                    mercury__private_builtin__builtin_compare_pred_3_p_0(&Var_48, (MR_Word) Var_200, (MR_Word) ArgY2_42);
                    succeeded = (Var_48 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                      *HeadVar__1_1 = Var_48;
                    else
                    {
                      MR_Word Var_49;

                      mercury__private_builtin__builtin_compare_pred_3_p_0(&Var_49, (MR_Word) Var_199, (MR_Word) ArgY3_44);
                      succeeded = (Var_49 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                      if (succeeded)
                        *HeadVar__1_1 = Var_49;
                      else
                        mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) Var_198, (MR_Word) ArgY4_46);
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
            MR_Word Var_202 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2)));
            MR_Word Var_203 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1)));
            MR_Word Var_204 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));

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
                  MR_Word ArgY1_79 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word ArgY2_81 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word ArgY3_83 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word Var_84;

                  mercury__private_builtin__builtin_compare_pred_3_p_0(&Var_84, (MR_Word) Var_204, (MR_Word) ArgY1_79);
                  succeeded = (Var_84 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_84;
                  else
                  {
                    MR_Word Var_85;

                    mercury__private_builtin__builtin_compare_pred_3_p_0(&Var_85, (MR_Word) Var_203, (MR_Word) ArgY2_81);
                    succeeded = (Var_85 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                      *HeadVar__1_1 = Var_85;
                    else
                      mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) Var_202, (MR_Word) ArgY3_83);
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
            MR_Word Var_205 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3)));
            MR_Word Var_206 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
            MR_Word Var_207 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
            MR_Word Var_208 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)));

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
                  MR_Word ArgY1_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word ArgY2_118 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word ArgY3_120 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word ArgY4_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 3)));
                  MR_Word Var_123;

                  mercury__private_builtin__builtin_compare_pred_3_p_0(&Var_123, (MR_Word) Var_208, (MR_Word) ArgY1_116);
                  succeeded = (Var_123 == (MR_Integer) 0);
                  succeeded = !(succeeded);
                  if (succeeded)
                    *HeadVar__1_1 = Var_123;
                  else
                  {
                    MR_Word Var_124;

                    mercury__private_builtin__builtin_compare_pred_3_p_0(&Var_124, (MR_Word) Var_207, (MR_Word) ArgY2_118);
                    succeeded = (Var_124 == (MR_Integer) 0);
                    succeeded = !(succeeded);
                    if (succeeded)
                      *HeadVar__1_1 = Var_124;
                    else
                    {
                      MR_Word Var_125;

                      mercury__private_builtin__builtin_compare_pred_3_p_0(&Var_125, (MR_Word) Var_206, (MR_Word) ArgY3_120);
                      succeeded = (Var_125 == (MR_Integer) 0);
                      succeeded = !(succeeded);
                      if (succeeded)
                        *HeadVar__1_1 = Var_125;
                      else
                        mercury__private_builtin__builtin_compare_pred_3_p_0(HeadVar__1_1, (MR_Word) Var_205, (MR_Word) ArgY4_122);
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
mercury__getopt_io____Unify____option_ops_1_0(
  MR_Word TypeInfo_for_OptionType_33,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_31 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_32 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_31 == CastY_32);
    if (succeeded)
      succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ArgY1_4;
            MR_Word ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ArgY2_6;
            MR_Word ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 2)));
            MR_Word ArgY3_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
              ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 1)));
              ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 2)));
              succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) ArgX1_3, (MR_Word) ArgY1_4);
              if (succeeded)
              {
                succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) ArgX2_5, (MR_Word) ArgY2_6);
                if (succeeded)
                  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) ArgX3_7, (MR_Word) ArgY3_8);
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ArgY1_10;
            MR_Word ArgX2_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ArgY2_12;
            MR_Word ArgX3_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2)));
            MR_Word ArgY3_14;
            MR_Word ArgX4_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 3)));
            MR_Word ArgY4_16;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              ArgY1_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
              ArgY2_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
              ArgY3_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2)));
              ArgY4_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 3)));
              succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) ArgX1_9, (MR_Word) ArgY1_10);
              if (succeeded)
              {
                succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) ArgX2_11, (MR_Word) ArgY2_12);
                if (succeeded)
                {
                  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) ArgX3_13, (MR_Word) ArgY3_14);
                  if (succeeded)
                    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) ArgX4_15, (MR_Word) ArgY4_16);
                }
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word ArgX1_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ArgY1_18;
            MR_Word ArgX2_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ArgY2_20;
            MR_Word ArgX3_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 2)));
            MR_Word ArgY3_22;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (succeeded)
            {
              ArgY1_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));
              ArgY2_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 1)));
              ArgY3_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 2)));
              succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) ArgX1_17, (MR_Word) ArgY1_18);
              if (succeeded)
              {
                succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) ArgX2_19, (MR_Word) ArgY2_20);
                if (succeeded)
                  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) ArgX3_21, (MR_Word) ArgY3_22);
              }
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word ArgX1_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ArgY1_24;
            MR_Word ArgX2_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
            MR_Word ArgY2_26;
            MR_Word ArgX3_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2)));
            MR_Word ArgY3_28;
            MR_Word ArgX4_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 3)));
            MR_Word ArgY4_30;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
            if (succeeded)
            {
              ArgY1_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)));
              ArgY2_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
              ArgY3_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
              ArgY4_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 3)));
              succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) ArgX1_23, (MR_Word) ArgY1_24);
              if (succeeded)
              {
                succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) ArgX2_25, (MR_Word) ArgY2_26);
                if (succeeded)
                {
                  succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) ArgX3_27, (MR_Word) ArgY3_28);
                  if (succeeded)
                    succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) ArgX4_29, (MR_Word) ArgY4_30);
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
mercury__getopt_io____Compare____option_data_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_148 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_149 = (MR_Integer) HeadVar__3_3;

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
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
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
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
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
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
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
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
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
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
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
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
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
            MR_Word Var_157 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

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
                  MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer Var_162 = (MR_Integer) Var_157;
                  MR_Integer Var_163 = (MR_Integer) ArgY1_5;

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
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
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
            MR_Integer Var_158 = ((MR_Integer) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));

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
                  MR_Integer ArgY1_25 = ((MR_Integer) (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0)));

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
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
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
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String Var_161 = ((MR_String) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));

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
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_String ArgY1_45 = ((MR_String) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));
                          MR_Integer V_7_173;

{
#define MR_PROC_LABEL mercury__getopt_io____Compare____option_data_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  Var_161 ;
	S2 =  ArgY1_45 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_173  = Res;
}
                          succeeded = (V_7_173 < (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (V_7_173 == (MR_Integer) 0);
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
                MR_Word Var_159 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));

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
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word TypeInfo_152_152 = (MR_Word) &mercury__getopt_io_scalar_common_1[2];
                          MR_Word ArgY1_65 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));

                          mercury__builtin__compare_3_p_0(TypeInfo_152_152, HeadVar__1_1, ((MR_Box) (Var_159)), ((MR_Box) (ArgY1_65)));
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
                MR_Word Var_160 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));

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
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word TypeInfo_151_151 = (MR_Word) &mercury__getopt_io_scalar_common_1[1];
                          MR_Word ArgY1_85 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));

                          mercury__builtin__compare_3_p_0(TypeInfo_151_151, HeadVar__1_1, ((MR_Box) (Var_160)), ((MR_Box) (ArgY1_85)));
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
                MR_Word Var_156 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));

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
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
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
                          MR_Word TypeInfo_150_150 = (MR_Word) &mercury__getopt_io_scalar_common_1[0];
                          MR_Word ArgY1_105 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));

                          mercury__builtin__compare_3_p_0(TypeInfo_150_150, HeadVar__1_1, ((MR_Box) (Var_156)), ((MR_Box) (ArgY1_105)));
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
mercury__getopt_io____Unify____option_data_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_27 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_28 = (MR_Integer) HeadVar__2_2;

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
                MR_Integer CastX_15 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_16 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_16 == CastX_15);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer CastX_17 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_18 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_18 == CastX_17);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer CastX_19 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_20 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_20 == CastX_19);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer CastX_21 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_22 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_22 == CastX_21);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Integer CastX_23 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_24 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_24 == CastX_23);
              }
              break;
            case (MR_Integer) 5:
              {
                MR_Integer CastX_25 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_26 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_26 == CastX_25);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
            MR_Word ArgY1_4;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
              succeeded = (ArgX1_3 == ArgY1_4);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer ArgX1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer ArgY1_6;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (succeeded)
            {
              ArgY1_6 = ((MR_Integer) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));
              succeeded = (ArgX1_5 == ArgY1_6);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String ArgX1_7 = ((MR_String) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                MR_String ArgY1_8;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_8 = ((MR_String) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                  succeeded = (strcmp(ArgX1_7, ArgY1_8) == 0);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word TypeInfo_30_30;
                MR_Word ArgX1_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                MR_Word ArgY1_10;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                  TypeInfo_30_30 = (MR_Word) &mercury__getopt_io_scalar_common_1[2];
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_30_30, ((MR_Box) (ArgX1_9)), ((MR_Box) (ArgY1_10)));
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word TypeInfo_31_31;
                MR_Word ArgX1_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                MR_Word ArgY1_12;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  ArgY1_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                  TypeInfo_31_31 = (MR_Word) &mercury__getopt_io_scalar_common_1[1];
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_31_31, ((MR_Box) (ArgX1_11)), ((MR_Box) (ArgY1_12)));
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word TypeInfo_29_29;
                MR_Word ArgX1_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                MR_Word ArgY1_14;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  ArgY1_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                  TypeInfo_29_29 = (MR_Word) &mercury__getopt_io_scalar_common_1[0];
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
mercury__getopt_io____Compare____maybe_option_table_se_1_0(
  MR_Word TypeInfo_for_OptionType_14,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_13 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word ArgY1_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));

        mercury__getopt_io____Compare____option_error_1_0(TypeInfo_for_OptionType_14, HeadVar__1_1, Var_20, ArgY1_11);
      }
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
    else
    {
      MR_Word Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word TypeCtorInfo_17_17 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
        MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));

        mercury__tree234____Compare____tree234_2_0(TypeInfo_for_OptionType_14, TypeCtorInfo_17_17, HeadVar__1_1, Var_21, ArgY1_5);
      }
    }
  }
}

void MR_CALL 
mercury__getopt_io____Compare____option_error_1_0(
  MR_Word TypeInfo_for_OptionType_24,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_22 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_23 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_22 == CastY_23);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2)));
      MR_String Var_29 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
      MR_Box Var_30 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Box ArgY1_15 = (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0));
        MR_String ArgY2_17 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
        MR_Word ArgY3_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 2)));
        MR_Word Var_20;

        mercury__builtin__compare_3_p_0(TypeInfo_for_OptionType_24, &Var_20, Var_30, ArgY1_15);
        succeeded = (Var_20 == (MR_Integer) 0);
        succeeded = !(succeeded);
        if (succeeded)
          *HeadVar__1_1 = Var_20;
        else
        {
          MR_Word Var_21;
          MR_Integer V_7_35;

{
#define MR_PROC_LABEL mercury__getopt_io____Compare____option_error_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  Var_29 ;
	S2 =  ArgY2_17 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_35  = Res;
}
          succeeded = (V_7_35 < (MR_Integer) 0);
          if (succeeded)
            Var_21 = (MR_Integer) 1;
          else
          {
            succeeded = (V_7_35 == (MR_Integer) 0);
            if (succeeded)
              Var_21 = (MR_Integer) 0;
            else
              Var_21 = (MR_Integer) 2;
          }
          succeeded = (Var_21 == (MR_Integer) 0);
          succeeded = !(succeeded);
          if (succeeded)
            *HeadVar__1_1 = Var_21;
          else
            mercury__getopt_io____Compare____option_error_reason_0_0(HeadVar__1_1, Var_28, ArgY3_19);
        }
      }
      else
        *HeadVar__1_1 = (MR_Integer) 2;
    }
    else
    {
      MR_String Var_31 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_String ArgY1_5 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer V_7_40;

{
#define MR_PROC_LABEL mercury__getopt_io____Compare____option_error_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  Var_31 ;
	S2 =  ArgY1_5 ;
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
mercury__getopt_io____Compare____option_error_reason_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_182 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_183 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_182 == CastY_183);
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
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
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
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
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
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
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
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
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
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
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
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Var_192 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

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
                  MR_String ArgY1_23 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer V_7_207;

{
#define MR_PROC_LABEL mercury__getopt_io____Compare____option_error_reason_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  Var_192 ;
	S2 =  ArgY1_23 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_207  = Res;
}
                  succeeded = (V_7_207 < (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (V_7_207 == (MR_Integer) 0);
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
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
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
            MR_String Var_199 = ((MR_String) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));

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
                  MR_String ArgY1_71 = ((MR_String) (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer V_7_242;

{
#define MR_PROC_LABEL mercury__getopt_io____Compare____option_error_reason_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  Var_199 ;
	S2 =  ArgY1_71 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_242  = Res;
}
                  succeeded = (V_7_242 < (MR_Integer) 0);
                  if (succeeded)
                    *HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    succeeded = (V_7_242 == (MR_Integer) 0);
                    if (succeeded)
                      *HeadVar__1_1 = (MR_Integer) 0;
                    else
                      *HeadVar__1_1 = (MR_Integer) 2;
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
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
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String Var_198 = ((MR_String) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));

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
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_String ArgY1_92 = ((MR_String) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));
                          MR_Integer V_7_237;

{
#define MR_PROC_LABEL mercury__getopt_io____Compare____option_error_reason_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  Var_198 ;
	S2 =  ArgY1_92 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_237  = Res;
}
                          succeeded = (V_7_237 < (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (V_7_237 == (MR_Integer) 0);
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
                MR_Word Var_193 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
                MR_String Var_194 = ((MR_String) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));

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
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_String ArgY1_121 = ((MR_String) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));
                          MR_Word ArgY2_123 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2)));
                          MR_Word Var_124;
                          MR_Integer V_7_212;

{
#define MR_PROC_LABEL mercury__getopt_io____Compare____option_error_reason_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  Var_194 ;
	S2 =  ArgY1_121 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_212  = Res;
}
                          succeeded = (V_7_212 < (MR_Integer) 0);
                          if (succeeded)
                            Var_124 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (V_7_212 == (MR_Integer) 0);
                            if (succeeded)
                              Var_124 = (MR_Integer) 0;
                            else
                              Var_124 = (MR_Integer) 2;
                          }
                          succeeded = (Var_124 == (MR_Integer) 0);
                          succeeded = !(succeeded);
                          if (succeeded)
                            *HeadVar__1_1 = Var_124;
                          else
                          {
                            MR_String Var_200 = (MR_String) Var_193;
                            MR_String Var_201 = (MR_String) ArgY2_123;
                            MR_Integer V_7_217;

{
#define MR_PROC_LABEL mercury__getopt_io____Compare____option_error_reason_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  Var_200 ;
	S2 =  Var_201 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_217  = Res;
}
                            succeeded = (V_7_217 < (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 1;
                            else
                            {
                              succeeded = (V_7_217 == (MR_Integer) 0);
                              if (succeeded)
                                *HeadVar__1_1 = (MR_Integer) 0;
                              else
                                *HeadVar__1_1 = (MR_Integer) 2;
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
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word Var_195 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
                MR_String Var_196 = ((MR_String) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));

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
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_String ArgY1_156 = ((MR_String) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));
                          MR_Word ArgY2_158 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 2)));
                          MR_Word Var_159;
                          MR_Integer V_7_222;

{
#define MR_PROC_LABEL mercury__getopt_io____Compare____option_error_reason_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  Var_196 ;
	S2 =  ArgY1_156 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_222  = Res;
}
                          succeeded = (V_7_222 < (MR_Integer) 0);
                          if (succeeded)
                            Var_159 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (V_7_222 == (MR_Integer) 0);
                            if (succeeded)
                              Var_159 = (MR_Integer) 0;
                            else
                              Var_159 = (MR_Integer) 2;
                          }
                          succeeded = (Var_159 == (MR_Integer) 0);
                          succeeded = !(succeeded);
                          if (succeeded)
                            *HeadVar__1_1 = Var_159;
                          else
                          {
                            MR_String Var_202 = (MR_String) Var_195;
                            MR_String Var_203 = (MR_String) ArgY2_158;
                            MR_Integer V_7_227;

{
#define MR_PROC_LABEL mercury__getopt_io____Compare____option_error_reason_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  Var_202 ;
	S2 =  Var_203 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_227  = Res;
}
                            succeeded = (V_7_227 < (MR_Integer) 0);
                            if (succeeded)
                              *HeadVar__1_1 = (MR_Integer) 1;
                            else
                            {
                              succeeded = (V_7_227 == (MR_Integer) 0);
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
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_String Var_197 = ((MR_String) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));

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
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
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
                          MR_String ArgY1_181 = ((MR_String) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));
                          MR_Integer V_7_232;

{
#define MR_PROC_LABEL mercury__getopt_io____Compare____option_error_reason_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  Var_197 ;
	S2 =  ArgY1_181 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 V_7_232  = Res;
}
                          succeeded = (V_7_232 < (MR_Integer) 0);
                          if (succeeded)
                            *HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            succeeded = (V_7_232 == (MR_Integer) 0);
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
mercury__getopt_io____Unify____maybe_option_table_se_1_0(
  MR_Word TypeInfo_for_OptionType_9,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        succeeded = mercury__getopt_io____Unify____option_error_1_0(TypeInfo_for_OptionType_9, ArgX1_5, ArgY1_6);
      }
    }
    else
    {
      MR_Word TypeCtorInfo_10_10;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
        TypeCtorInfo_10_10 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
        succeeded = mercury__tree234____Unify____tree234_2_0(TypeInfo_for_OptionType_9, TypeCtorInfo_10_10, ArgX1_3, ArgY1_4);
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__getopt_io____Unify____option_error_1_0(
  MR_Word TypeInfo_for_OptionType_13,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_11 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_12 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_11 == CastY_12);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Box ArgX1_5 = (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0));
      MR_Box ArgY1_6;
      MR_String ArgX2_7 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_String ArgY2_8;
      MR_Word ArgX3_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 2)));
      MR_Word ArgY3_10;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_6 = (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0));
        ArgY2_8 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 1)));
        ArgY3_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 2)));
        succeeded = mercury__builtin__unify_2_p_0(TypeInfo_for_OptionType_13, ArgX1_5, ArgY1_6);
        if (succeeded)
        {
          succeeded = (strcmp(ArgX2_7, ArgY2_8) == 0);
          if (succeeded)
            succeeded = mercury__getopt_io____Unify____option_error_reason_0_0(ArgX3_9, ArgY3_10);
        }
      }
    }
    else
    {
      MR_String ArgX1_3 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_String ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        ArgY1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
        succeeded = (strcmp(ArgX1_3, ArgY1_4) == 0);
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__getopt_io____Unify____option_error_reason_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_29 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_30 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_29 == CastY_30);
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
                MR_Integer CastX_3 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_4 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_4 == CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer CastX_5 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_6 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_6 == CastX_5);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer CastX_9 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_10 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_10 == CastX_9);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer CastX_11 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_12 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_12 == CastX_11);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Integer CastX_13 = (MR_Integer) HeadVar__1_1;
                MR_Integer CastY_14 = (MR_Integer) HeadVar__2_2;

                succeeded = (CastY_14 == CastX_13);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String ArgX1_7 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
            MR_String ArgY1_8;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (succeeded)
            {
              ArgY1_8 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
              succeeded = (strcmp(ArgX1_7, ArgY1_8) == 0);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String ArgX1_15 = ((MR_String) (MR_hl_field(MR_mktag(2), HeadVar__1_1, (MR_Integer) 0)));
            MR_String ArgY1_16;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (succeeded)
            {
              ArgY1_16 = ((MR_String) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));
              succeeded = (strcmp(ArgX1_15, ArgY1_16) == 0);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String ArgX1_17 = ((MR_String) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                MR_String ArgY1_18;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (succeeded)
                {
                  ArgY1_18 = ((MR_String) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                  succeeded = (strcmp(ArgX1_17, ArgY1_18) == 0);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String ArgX1_19 = ((MR_String) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                MR_String ArgY1_20;
                MR_Word ArgX2_21 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2)));
                MR_Word ArgY2_22;
                MR_String Var_33;
                MR_String Var_34;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_20 = ((MR_String) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                  ArgY2_22 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
                  succeeded = (strcmp(ArgX1_19, ArgY1_20) == 0);
                  if (succeeded)
                  {
                    Var_33 = (MR_String) ArgX2_21;
                    Var_34 = (MR_String) ArgY2_22;
                    succeeded = (strcmp(Var_33, Var_34) == 0);
                  }
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_String ArgX1_23 = ((MR_String) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                MR_String ArgY1_24;
                MR_Word ArgX2_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 2)));
                MR_Word ArgY2_26;
                MR_String Var_35;
                MR_String Var_36;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  ArgY1_24 = ((MR_String) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                  ArgY2_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 2)));
                  succeeded = (strcmp(ArgX1_23, ArgY1_24) == 0);
                  if (succeeded)
                  {
                    Var_35 = (MR_String) ArgX2_25;
                    Var_36 = (MR_String) ArgY2_26;
                    succeeded = (strcmp(Var_35, Var_36) == 0);
                  }
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_String ArgX1_27 = ((MR_String) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                MR_String ArgY1_28;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  ArgY1_28 = ((MR_String) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                  succeeded = (strcmp(ArgX1_27, ArgY1_28) == 0);
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
mercury__getopt_io____Compare____maybe_option_table_1_0(
  MR_Word TypeInfo_for_OptionType_14,
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_12 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_13 = (MR_Integer) HeadVar__3_3;

    succeeded = (CastX_12 == CastY_13);
    if (succeeded)
      *HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_String Var_19 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String ArgY1_11 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer V_7_24;

{
#define MR_PROC_LABEL mercury__getopt_io____Compare____maybe_option_table_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  Var_19 ;
	S2 =  ArgY1_11 ;
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
      MR_Word Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
        *HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word TypeCtorInfo_16_16 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
        MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));

        mercury__tree234____Compare____tree234_2_0(TypeInfo_for_OptionType_14, TypeCtorInfo_16_16, HeadVar__1_1, Var_20, ArgY1_5);
      }
    }
  }
}

MR_bool MR_CALL 
mercury__getopt_io____Unify____maybe_option_table_1_0(
  MR_Word TypeInfo_for_OptionType_9,
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_7 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_8 = (MR_Integer) HeadVar__2_2;

    succeeded = (CastX_7 == CastY_8);
    if (succeeded)
      succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_String ArgX1_5 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_String ArgY1_6;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (succeeded)
      {
        ArgY1_6 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));
        succeeded = (strcmp(ArgX1_5, ArgY1_6) == 0);
      }
    }
    else
    {
      MR_Word TypeCtorInfo_10_10;
      MR_Word ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word ArgY1_4;

      succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
      if (succeeded)
      {
        ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__2_2, (MR_Integer) 0)));
        TypeCtorInfo_10_10 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
        succeeded = mercury__tree234____Unify____tree234_2_0(TypeInfo_for_OptionType_9, TypeCtorInfo_10_10, ArgX1_3, ArgY1_4);
      }
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
mercury__getopt_io__lookup_accumulating_option_2_f_0(
  MR_Word TypeInfo_for_Option_7,
  MR_Word OT_4,
  MR_Box Opt_5)
{
  {
    MR_bool succeeded;
    MR_Word Ss_6;
    MR_Word Val0_11;
    MR_Word TypeCtorInfo_11_14 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
    MR_Word Var_12;
    MR_Box conv0_Var_12;

    mercury__map__lookup_3_p_0(TypeInfo_for_Option_7, TypeCtorInfo_11_14, OT_4, Opt_5, &conv0_Var_12);
    Var_12 = ((MR_Word) conv0_Var_12);
    succeeded = ((((MR_tag((MR_Word) Var_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_12, (MR_Integer) 0)))) == (MR_Integer) 3)));
    if (succeeded)
    {
      Val0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_12, (MR_Integer) 1)));
      Ss_6 = Val0_11;
    }
    else
    {
      mercury__require__error_1_p_0((MR_String) "Expected accumulating option and didn\'t get one.");
    }
    return Ss_6;
  }
}

void MR_CALL 
mercury__getopt_io__lookup_accumulating_option_3_p_0(
  MR_Word TypeInfo_for_Option_10,
  MR_Word OptionTable_4,
  MR_Box Opt_5,
  MR_Word * Val_6)
{
  {
    MR_bool succeeded;
    MR_Word Val0_7;
    MR_Word TypeCtorInfo_11_11 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
    MR_Word Var_8;
    MR_Box conv0_Var_8;

    mercury__map__lookup_3_p_0(TypeInfo_for_Option_10, TypeCtorInfo_11_11, OptionTable_4, Opt_5, &conv0_Var_8);
    Var_8 = ((MR_Word) conv0_Var_8);
    succeeded = ((((MR_tag((MR_Word) Var_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_8, (MR_Integer) 0)))) == (MR_Integer) 3)));
    if (succeeded)
    {
      Val0_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_8, (MR_Integer) 1)));
      *Val_6 = Val0_7;
    }
    else
    {
      {
        mercury__require__error_1_p_0((MR_String) "Expected accumulating option and didn\'t get one.");
        return;
      }
    }
  }
}

MR_Word MR_CALL 
mercury__getopt_io__lookup_maybe_string_option_2_f_0(
  MR_Word TypeInfo_for_Option_7,
  MR_Word OT_4,
  MR_Box Opt_5)
{
  {
    MR_bool succeeded;
    MR_Word MS_6;
    MR_Word Val0_11;
    MR_Word TypeCtorInfo_11_14 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
    MR_Word Var_12;
    MR_Box conv0_Var_12;

    mercury__map__lookup_3_p_0(TypeInfo_for_Option_7, TypeCtorInfo_11_14, OT_4, Opt_5, &conv0_Var_12);
    Var_12 = ((MR_Word) conv0_Var_12);
    succeeded = ((((MR_tag((MR_Word) Var_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_12, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      Val0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_12, (MR_Integer) 1)));
      MS_6 = Val0_11;
    }
    else
    {
      mercury__require__error_1_p_0((MR_String) "Expected maybe_string option and didn\'t get one.");
    }
    return MS_6;
  }
}

void MR_CALL 
mercury__getopt_io__lookup_maybe_string_option_3_p_0(
  MR_Word TypeInfo_for_Option_10,
  MR_Word OptionTable_4,
  MR_Box Opt_5,
  MR_Word * Val_6)
{
  {
    MR_bool succeeded;
    MR_Word Val0_7;
    MR_Word TypeCtorInfo_11_11 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
    MR_Word Var_8;
    MR_Box conv0_Var_8;

    mercury__map__lookup_3_p_0(TypeInfo_for_Option_10, TypeCtorInfo_11_11, OptionTable_4, Opt_5, &conv0_Var_8);
    Var_8 = ((MR_Word) conv0_Var_8);
    succeeded = ((((MR_tag((MR_Word) Var_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (succeeded)
    {
      Val0_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_8, (MR_Integer) 1)));
      *Val_6 = Val0_7;
    }
    else
    {
      {
        mercury__require__error_1_p_0((MR_String) "Expected maybe_string option and didn\'t get one.");
        return;
      }
    }
  }
}

MR_Word MR_CALL 
mercury__getopt_io__lookup_maybe_int_option_2_f_0(
  MR_Word TypeInfo_for_Option_7,
  MR_Word OT_4,
  MR_Box Opt_5)
{
  {
    MR_bool succeeded;
    MR_Word MN_6;
    MR_Word Val0_11;
    MR_Word TypeCtorInfo_11_14 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
    MR_Word Var_12;
    MR_Box conv0_Var_12;

    mercury__map__lookup_3_p_0(TypeInfo_for_Option_7, TypeCtorInfo_11_14, OT_4, Opt_5, &conv0_Var_12);
    Var_12 = ((MR_Word) conv0_Var_12);
    succeeded = ((((MR_tag((MR_Word) Var_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_12, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      Val0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_12, (MR_Integer) 1)));
      MN_6 = Val0_11;
    }
    else
    {
      mercury__require__error_1_p_0((MR_String) "Expected maybe_int option and didn\'t get one.");
    }
    return MN_6;
  }
}

void MR_CALL 
mercury__getopt_io__lookup_maybe_int_option_3_p_0(
  MR_Word TypeInfo_for_Option_10,
  MR_Word OptionTable_4,
  MR_Box Opt_5,
  MR_Word * Val_6)
{
  {
    MR_bool succeeded;
    MR_Word Val0_7;
    MR_Word TypeCtorInfo_11_11 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
    MR_Word Var_8;
    MR_Box conv0_Var_8;

    mercury__map__lookup_3_p_0(TypeInfo_for_Option_10, TypeCtorInfo_11_11, OptionTable_4, Opt_5, &conv0_Var_8);
    Var_8 = ((MR_Word) conv0_Var_8);
    succeeded = ((((MR_tag((MR_Word) Var_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_8, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (succeeded)
    {
      Val0_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), Var_8, (MR_Integer) 1)));
      *Val_6 = Val0_7;
    }
    else
    {
      {
        mercury__require__error_1_p_0((MR_String) "Expected maybe_int option and didn\'t get one.");
        return;
      }
    }
  }
}

MR_String MR_CALL 
mercury__getopt_io__lookup_string_option_2_f_0(
  MR_Word TypeInfo_for_Option_7,
  MR_Word OT_4,
  MR_Box Opt_5)
{
  {
    MR_bool succeeded;
    MR_String S_6;
    MR_String Val0_11;
    MR_Word TypeCtorInfo_11_14 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
    MR_Word Var_12;
    MR_Box conv0_Var_12;

    mercury__map__lookup_3_p_0(TypeInfo_for_Option_7, TypeCtorInfo_11_14, OT_4, Opt_5, &conv0_Var_12);
    Var_12 = ((MR_Word) conv0_Var_12);
    succeeded = ((((MR_tag((MR_Word) Var_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_12, (MR_Integer) 0)))) == (MR_Integer) 0)));
    if (succeeded)
    {
      Val0_11 = ((MR_String) (MR_hl_field(MR_mktag(3), Var_12, (MR_Integer) 1)));
      S_6 = Val0_11;
    }
    else
    {
      mercury__require__error_1_p_0((MR_String) "Expected string option and didn\'t get one.");
    }
    return S_6;
  }
}

void MR_CALL 
mercury__getopt_io__lookup_string_option_3_p_0(
  MR_Word TypeInfo_for_Option_10,
  MR_Word OptionTable_4,
  MR_Box Opt_5,
  MR_String * Val_6)
{
  {
    MR_bool succeeded;
    MR_String Val0_7;
    MR_Word TypeCtorInfo_11_11 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
    MR_Word Var_8;
    MR_Box conv0_Var_8;

    mercury__map__lookup_3_p_0(TypeInfo_for_Option_10, TypeCtorInfo_11_11, OptionTable_4, Opt_5, &conv0_Var_8);
    Var_8 = ((MR_Word) conv0_Var_8);
    succeeded = ((((MR_tag((MR_Word) Var_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Var_8, (MR_Integer) 0)))) == (MR_Integer) 0)));
    if (succeeded)
    {
      Val0_7 = ((MR_String) (MR_hl_field(MR_mktag(3), Var_8, (MR_Integer) 1)));
      *Val_6 = Val0_7;
    }
    else
    {
      {
        mercury__require__error_1_p_0((MR_String) "Expected string option and didn\'t get one.");
        return;
      }
    }
  }
}

MR_Integer MR_CALL 
mercury__getopt_io__lookup_int_option_2_f_0(
  MR_Word TypeInfo_for_Option_7,
  MR_Word OT_4,
  MR_Box Opt_5)
{
  {
    MR_bool succeeded;
    MR_Integer N_6;
    MR_Integer Val0_11;
    MR_Word TypeCtorInfo_11_14 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
    MR_Word Var_12;
    MR_Box conv0_Var_12;

    mercury__map__lookup_3_p_0(TypeInfo_for_Option_7, TypeCtorInfo_11_14, OT_4, Opt_5, &conv0_Var_12);
    Var_12 = ((MR_Word) conv0_Var_12);
    succeeded = ((MR_tag((MR_Word) Var_12)) == (MR_mktag((MR_Integer) 2)));
    if (succeeded)
    {
      Val0_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Var_12, (MR_Integer) 0)));
      N_6 = Val0_11;
    }
    else
    {
      mercury__require__error_1_p_0((MR_String) "Expected int option and didn\'t get one.");
    }
    return N_6;
  }
}

void MR_CALL 
mercury__getopt_io__lookup_int_option_3_p_0(
  MR_Word TypeInfo_for_Option_10,
  MR_Word OptionTable_4,
  MR_Box Opt_5,
  MR_Integer * Val_6)
{
  {
    MR_bool succeeded;
    MR_Integer Val0_7;
    MR_Word TypeCtorInfo_11_11 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
    MR_Word Var_8;
    MR_Box conv0_Var_8;

    mercury__map__lookup_3_p_0(TypeInfo_for_Option_10, TypeCtorInfo_11_11, OptionTable_4, Opt_5, &conv0_Var_8);
    Var_8 = ((MR_Word) conv0_Var_8);
    succeeded = ((MR_tag((MR_Word) Var_8)) == (MR_mktag((MR_Integer) 2)));
    if (succeeded)
    {
      Val0_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), Var_8, (MR_Integer) 0)));
      *Val_6 = Val0_7;
    }
    else
    {
      {
        mercury__require__error_1_p_0((MR_String) "Expected int option and didn\'t get one.");
        return;
      }
    }
  }
}

MR_Word MR_CALL 
mercury__getopt_io__lookup_bool_option_2_f_0(
  MR_Word TypeInfo_for_Option_7,
  MR_Word OT_4,
  MR_Box Opt_5)
{
  {
    MR_bool succeeded;
    MR_Word B_6;
    MR_Word Val0_11;
    MR_Word TypeCtorInfo_11_14 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
    MR_Word Var_12;
    MR_Box conv0_Var_12;

    mercury__map__lookup_3_p_0(TypeInfo_for_Option_7, TypeCtorInfo_11_14, OT_4, Opt_5, &conv0_Var_12);
    Var_12 = ((MR_Word) conv0_Var_12);
    succeeded = ((MR_tag((MR_Word) Var_12)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Val0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_12, (MR_Integer) 0)));
      B_6 = Val0_11;
    }
    else
    {
      mercury__require__error_1_p_0((MR_String) "Expected bool option and didn\'t get one.");
    }
    return B_6;
  }
}

void MR_CALL 
mercury__getopt_io__lookup_bool_option_3_p_0(
  MR_Word TypeInfo_for_Option_10,
  MR_Word OptionTable_4,
  MR_Box Opt_5,
  MR_Word * Val_6)
{
  {
    MR_bool succeeded;
    MR_Word Val0_7;
    MR_Word TypeCtorInfo_11_11 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
    MR_Word Var_8;
    MR_Box conv0_Var_8;

    mercury__map__lookup_3_p_0(TypeInfo_for_Option_10, TypeCtorInfo_11_11, OptionTable_4, Opt_5, &conv0_Var_8);
    Var_8 = ((MR_Word) conv0_Var_8);
    succeeded = ((MR_tag((MR_Word) Var_8)) == (MR_mktag((MR_Integer) 1)));
    if (succeeded)
    {
      Val0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_8, (MR_Integer) 0)));
      *Val_6 = Val0_7;
    }
    else
    {
      {
        mercury__require__error_1_p_0((MR_String) "Expected bool option and didn\'t get one.");
        return;
      }
    }
  }
}

void MR_CALL 
mercury__getopt_io__process_options_se_6_p_0(
  MR_Word TypeInfo_for_OptionType_16,
  MR_Word OptionOps_7,
  MR_Word Args0_8,
  MR_Word * NonOptionArgs_9,
  MR_Word * Result_10)
{
  {
    MR_Word _OptionArgs_12;

    mercury__getopt_io__process_options_se_7_p_0(TypeInfo_for_OptionType_16, OptionOps_7, Args0_8, &_OptionArgs_12, NonOptionArgs_9, Result_10);
  }
}

void MR_CALL 
mercury__getopt_io__process_options_track_9_p_0(
  MR_Word TypeInfo_for_OptionType_25,
  MR_Word OptionOps_10,
  MR_Word Args0_11,
  MR_Word * OptionArgs_12,
  MR_Word * NonOptionArgs_13,
  MR_Word OptionTable0_14,
  MR_Word * Result_15,
  MR_Word * OptionsSet_16)
{
  {
    MR_Word Result0_18;

    mercury__getopt_io__process_options_track_se_9_p_0(TypeInfo_for_OptionType_25, OptionOps_10, Args0_11, OptionArgs_12, NonOptionArgs_13, OptionTable0_14, &Result0_18, OptionsSet_16);
    if (((MR_tag((MR_Word) Result0_18)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word Error_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), Result0_18, (MR_Integer) 0)));
      MR_String Msg_21;

      Msg_21 = mercury__getopt_io__option_error_to_string_1_f_0(TypeInfo_for_OptionType_25, Error_20);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *Result_15 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Msg_21));
      }
    }
    else
    {
      MR_Word OptionTable_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Result0_18, (MR_Integer) 0)));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *Result_15 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (OptionTable_19));
      }
    }
  }
}

void MR_CALL 
mercury__getopt_io__process_options_track_se_9_p_0(
  MR_Word TypeInfo_for_OptionType_29,
  MR_Word OptionOps_10,
  MR_Word Args0_11,
  MR_Word * OptionArgs_12,
  MR_Word * NonOptionArgs_13,
  MR_Word OptionTable0_14,
  MR_Word * Result_15,
  MR_Word * OptionsSet_16)
{
  {
    MR_Word TypeCtorInfo_30_30;
    MR_Word Short_18 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptionOps_10, (MR_Integer) 0)));
    MR_Word Long_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptionOps_10, (MR_Integer) 1)));
    MR_Word Special_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptionOps_10, (MR_Integer) 2)));
    MR_Word Internal_21;
    MR_Word RevOptionArgs_22;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word Var_27;
    MR_Word V_2_33;

    {
      Var_25 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_25, 0) = ((MR_Box) (Special_20));
    }
    {
      Internal_21 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Internal_21, 0) = ((MR_Box) (Short_18));
      MR_hl_field(MR_mktag(0), Internal_21, 1) = ((MR_Box) (Long_19));
      MR_hl_field(MR_mktag(0), Internal_21, 2) = ((MR_Box) (Var_25));
    }
    Var_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    V_2_33 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    Var_27 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    mercury__getopt_io__process_arguments_11_p_0(TypeInfo_for_OptionType_29, Args0_11, NonOptionArgs_13, Internal_21, Var_26, &RevOptionArgs_22, OptionTable0_14, Result_15, Var_27, OptionsSet_16);
    TypeCtorInfo_30_30 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    mercury__list__reverse_2_p_0(TypeCtorInfo_30_30, RevOptionArgs_22, OptionArgs_12);
  }
}

void MR_CALL 
mercury__getopt_io__process_options_7_p_0(
  MR_Word TypeInfo_for_OptionType_21,
  MR_Word OptionOps_8,
  MR_Word Args0_9,
  MR_Word * OptionArgs_10,
  MR_Word * NonOptionArgs_11,
  MR_Word * Result_12)
{
  {
    MR_Word Result0_14;

    mercury__getopt_io__process_options_se_7_p_0(TypeInfo_for_OptionType_21, OptionOps_8, Args0_9, OptionArgs_10, NonOptionArgs_11, &Result0_14);
    if (((MR_tag((MR_Word) Result0_14)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word Error_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), Result0_14, (MR_Integer) 0)));
      MR_String Msg_17;

      Msg_17 = mercury__getopt_io__option_error_to_string_1_f_0(TypeInfo_for_OptionType_21, Error_16);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *Result_12 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Msg_17));
      }
    }
    else
    {
      MR_Word OptionTable_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), Result0_14, (MR_Integer) 0)));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *Result_12 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (OptionTable_15));
      }
    }
  }
}

void MR_CALL 
mercury__getopt_io__process_options_6_p_0(
  MR_Word TypeInfo_for_OptionType_19,
  MR_Word OptionOps_7,
  MR_Word Args0_8,
  MR_Word * NonOptionArgs_9,
  MR_Word * Result_10)
{
  {
    MR_Word Result0_12;
    MR_Word _OptionArgs_27;

    mercury__getopt_io__process_options_se_7_p_0(TypeInfo_for_OptionType_19, OptionOps_7, Args0_8, &_OptionArgs_27, NonOptionArgs_9, &Result0_12);
    if (((MR_tag((MR_Word) Result0_12)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word Error_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), Result0_12, (MR_Integer) 0)));
      MR_String Msg_15;

      Msg_15 = mercury__getopt_io__option_error_to_string_1_f_0(TypeInfo_for_OptionType_19, Error_14);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *Result_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Msg_15));
      }
    }
    else
    {
      MR_Word OptionTable_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), Result0_12, (MR_Integer) 0)));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *Result_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (OptionTable_13));
      }
    }
  }
}

MR_String MR_CALL 
mercury__getopt_io__option_error_to_string_1_f_0(
  MR_Word TypeInfo_for_OptionType_70,
  MR_Word Error_3)
{
  {
    MR_String String_4;

    if (((MR_tag((MR_Word) Error_3)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word Reason_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), Error_3, (MR_Integer) 2)));
      MR_String OptionName_69 = ((MR_String) (MR_hl_field(MR_mktag(1), Error_3, (MR_Integer) 1)));
      MR_Box Var_6 = (MR_hl_field(MR_mktag(1), Error_3, (MR_Integer) 0));

      switch (MR_tag((MR_Word) Reason_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(Reason_7)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String Var_75;

                Var_75 = mercury__string__f_43_43_2_f_0(OptionName_69, (MR_String) "\'");
                String_4 = mercury__string__f_43_43_2_f_0((MR_String) "unknown type for option \140", Var_75);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String Var_90;

                Var_90 = mercury__string__f_43_43_2_f_0(OptionName_69, (MR_String) "\' needs an argument");
                String_4 = mercury__string__f_43_43_2_f_0((MR_String) "option \140", Var_90);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_String Var_105;

                Var_105 = mercury__string__f_43_43_2_f_0(OptionName_69, (MR_String) "\' -- only boolean, maybe and accumulating options can be negated");
                String_4 = mercury__string__f_43_43_2_f_0((MR_String) "cannot negate option \140", Var_105);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_String Var_81;

                Var_81 = mercury__string__f_43_43_2_f_0(OptionName_69, (MR_String) "\' failed");
                String_4 = mercury__string__f_43_43_2_f_0((MR_String) "the handler of option \140", Var_81);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_String Var_78;

                Var_78 = mercury__string__f_43_43_2_f_0(OptionName_69, (MR_String) "\' has no handler");
                String_4 = mercury__string__f_43_43_2_f_0((MR_String) "option \140", Var_78);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String Var_102;

            Var_102 = mercury__string__f_43_43_2_f_0(OptionName_69, (MR_String) "\' does not allow an argument");
            String_4 = mercury__string__f_43_43_2_f_0((MR_String) "option \140", Var_102);
          }
          break;
        case (MR_Integer) 2:
          String_4 = ((MR_String) (MR_hl_field(MR_mktag(2), Reason_7, (MR_Integer) 0)));
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), Reason_7, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String Arg_9 = ((MR_String) (MR_hl_field(MR_mktag(3), Reason_7, (MR_Integer) 1)));
                MR_String Var_84;
                MR_String Var_86;
                MR_String Var_87;

                Var_84 = mercury__string__f_43_43_2_f_0(Arg_9, (MR_String) "\' is not numeric");
                Var_86 = mercury__string__f_43_43_2_f_0((MR_String) "\' requires a numeric argument; \140", Var_84);
                Var_87 = mercury__string__f_43_43_2_f_0(OptionName_69, Var_86);
                String_4 = mercury__string__f_43_43_2_f_0((MR_String) "option \140", Var_87);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String FileName_10 = ((MR_String) (MR_hl_field(MR_mktag(3), Reason_7, (MR_Integer) 1)));
                MR_Word IO_Error_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_7, (MR_Integer) 2)));
                MR_String Msg_12;
                MR_String Var_98;
                MR_String Var_99;

                mercury__io__error_message_2_p_0(IO_Error_11, &Msg_12);
                Var_98 = mercury__string__f_43_43_2_f_0((MR_String) ": ", Msg_12);
                Var_99 = mercury__string__f_43_43_2_f_0(FileName_10, Var_98);
                String_4 = mercury__string__f_43_43_2_f_0((MR_String) "cannot open ", Var_99);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_String FileName_65 = ((MR_String) (MR_hl_field(MR_mktag(3), Reason_7, (MR_Integer) 1)));
                MR_Word IO_Error_66 = ((MR_Word) (MR_hl_field(MR_mktag(3), Reason_7, (MR_Integer) 2)));
                MR_String Msg_67;
                MR_String Var_94;
                MR_String Var_95;

                mercury__io__error_message_2_p_0(IO_Error_66, &Msg_67);
                Var_94 = mercury__string__f_43_43_2_f_0((MR_String) ": ", Msg_67);
                Var_95 = mercury__string__f_43_43_2_f_0(FileName_65, Var_94);
                String_4 = mercury__string__f_43_43_2_f_0((MR_String) "cannot read ", Var_95);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_String FileName_68 = ((MR_String) (MR_hl_field(MR_mktag(3), Reason_7, (MR_Integer) 1)));

                String_4 = mercury__string__f_43_43_2_f_0(FileName_68, (MR_String) " contains non-option arguments");
              }
              break;
          }
          break;
      }
    }
    else
    {
      MR_String OptionName_5 = ((MR_String) (MR_hl_field(MR_mktag(0), Error_3, (MR_Integer) 0)));
      MR_String Var_72;

      Var_72 = mercury__string__f_43_43_2_f_0(OptionName_5, (MR_String) "\'");
      String_4 = mercury__string__f_43_43_2_f_0((MR_String) "unrecognized option \140", Var_72);
    }
    return String_4;
  }
}

void MR_CALL 
mercury__getopt_io__process_options_se_7_p_0(
  MR_Word TypeInfo_for_OptionType_32,
  MR_Word OptionOps_8,
  MR_Word Args0_9,
  MR_Word * OptionArgs_10,
  MR_Word * NonOptionArgs_11,
  MR_Word * Result_12)
{
  {
    MR_Word TypeCtorInfo_33_33;
    MR_Word Short_14;
    MR_Word Long_15;
    MR_Word MaybeSpecial_17;
    MR_Word OptionTable0_18;
    MR_Word Internal_20;
    MR_Word RevOptionArgs_21;
    MR_Word Var_25;
    MR_Word Var_26;
    MR_Word V_2_36;
    MR_Word _OptionsSet_22;

    switch (MR_tag((MR_Word) OptionOps_8)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Defaults_16;

          Short_14 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptionOps_8, (MR_Integer) 0)));
          Long_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptionOps_8, (MR_Integer) 1)));
          Defaults_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptionOps_8, (MR_Integer) 2)));
          MaybeSpecial_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          mercury__getopt_io__init_option_table_2_p_0(TypeInfo_for_OptionType_32, Defaults_16, &OptionTable0_18);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Special_19;
          MR_Word Defaults_28;

          Short_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), OptionOps_8, (MR_Integer) 0)));
          Long_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), OptionOps_8, (MR_Integer) 1)));
          Defaults_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), OptionOps_8, (MR_Integer) 2)));
          Special_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), OptionOps_8, (MR_Integer) 3)));
          {
            MaybeSpecial_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeSpecial_17, 0) = ((MR_Box) (Special_19));
          }
          mercury__getopt_io__init_option_table_2_p_0(TypeInfo_for_OptionType_32, Defaults_28, &OptionTable0_18);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Defaults_29;

          Short_14 = ((MR_Word) (MR_hl_field(MR_mktag(2), OptionOps_8, (MR_Integer) 0)));
          Long_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), OptionOps_8, (MR_Integer) 1)));
          Defaults_29 = ((MR_Word) (MR_hl_field(MR_mktag(2), OptionOps_8, (MR_Integer) 2)));
          MaybeSpecial_17 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          mercury__getopt_io__init_option_table_multi_2_p_0(TypeInfo_for_OptionType_32, Defaults_29, &OptionTable0_18);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word Defaults_30;
          MR_Word Special_31;

          Short_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), OptionOps_8, (MR_Integer) 0)));
          Long_15 = ((MR_Word) (MR_hl_field(MR_mktag(3), OptionOps_8, (MR_Integer) 1)));
          Defaults_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), OptionOps_8, (MR_Integer) 2)));
          Special_31 = ((MR_Word) (MR_hl_field(MR_mktag(3), OptionOps_8, (MR_Integer) 3)));
          {
            MaybeSpecial_17 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeSpecial_17, 0) = ((MR_Box) (Special_31));
          }
          mercury__getopt_io__init_option_table_multi_2_p_0(TypeInfo_for_OptionType_32, Defaults_30, &OptionTable0_18);
        }
        break;
    }
    {
      Internal_20 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Internal_20, 0) = ((MR_Box) (Short_14));
      MR_hl_field(MR_mktag(0), Internal_20, 1) = ((MR_Box) (Long_15));
      MR_hl_field(MR_mktag(0), Internal_20, 2) = ((MR_Box) (MaybeSpecial_17));
    }
    Var_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    V_2_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    Var_26 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    mercury__getopt_io__process_arguments_11_p_0(TypeInfo_for_OptionType_32, Args0_9, NonOptionArgs_11, Internal_20, Var_25, &RevOptionArgs_21, OptionTable0_18, Result_12, Var_26, &_OptionsSet_22);
    TypeCtorInfo_33_33 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    mercury__list__reverse_2_p_0(TypeCtorInfo_33_33, RevOptionArgs_21, OptionArgs_10);
  }
}

void MR_CALL 
mercury__getopt_io__process_arguments_11_p_0(
  MR_Word tscc_proc_1_input_1_TypeInfo_for_OptionType_152,
  MR_Word tscc_proc_1_input_2_HeadVar__1_1,
  MR_Word * tscc_output_ptr_1_HeadVar__2_2,
  MR_Word tscc_proc_1_input_3_OptionOps_3,
  MR_Word tscc_proc_1_input_4_HeadVar__4_4,
  MR_Word * tscc_output_ptr_2_OptionArgs_5,
  MR_Word tscc_proc_1_input_5_HeadVar__6_6,
  MR_Word * tscc_output_ptr_3_HeadVar__7_7,
  MR_Word tscc_proc_1_input_6_STATE_VARIABLE_OptionsSet_0_8,
  MR_Word * tscc_output_ptr_4_STATE_VARIABLE_OptionsSet_9)
{
  {
    MR_Word tscc_proc_2_input_1_TypeInfo_for_OptionType_55;
    MR_String tscc_proc_2_input_2_Option_16;
    MR_Box tscc_proc_2_input_3_Flag_17;
    MR_Word tscc_proc_2_input_4_OptionData_18;
    MR_Word tscc_proc_2_input_5_MaybeOptionArg0_19;
    MR_Word tscc_proc_2_input_6_Args0_20;
    MR_Word tscc_proc_2_input_7_OptionOps_22;
    MR_Word tscc_proc_2_input_8_OptionArgs0_23;
    MR_Word tscc_proc_2_input_9_OptionTable0_25;
    MR_Word tscc_proc_2_input_10_STATE_VARIABLE_OptionsSet_0_40;
    MR_Word tscc_output_1_HeadVar__2_2;
    MR_Word tscc_output_2_OptionArgs_5;
    MR_Word tscc_output_3_HeadVar__7_7;
    MR_Word tscc_output_4_STATE_VARIABLE_OptionsSet_9;

    // The code for TSCC PROC 1: pred getopt_io.process_arguments/11-0.
    // Setup for mutual tailcalls optimized into a loop.
    // The mutually recursive procedures are:

    // proc 1 in TSCC: pred getopt_io.process_arguments/11-0
    // proc 2 in TSCC: pred getopt_io.handle_long_option/15-0

    goto top_of_proc_1;
  top_of_proc_1:;
    {
      MR_Word TypeInfo_for_OptionType_152 = tscc_proc_1_input_1_TypeInfo_for_OptionType_152;
      MR_Word HeadVar__1_1 = tscc_proc_1_input_2_HeadVar__1_1;
      MR_Word HeadVar__2_2;
      MR_Word OptionOps_3 = tscc_proc_1_input_3_OptionOps_3;
      MR_Word HeadVar__4_4 = tscc_proc_1_input_4_HeadVar__4_4;
      MR_Word OptionArgs_5;
      MR_Word HeadVar__6_6 = tscc_proc_1_input_5_HeadVar__6_6;
      MR_Word HeadVar__7_7;
      MR_Word STATE_VARIABLE_OptionsSet_0_8 = tscc_proc_1_input_6_STATE_VARIABLE_OptionsSet_0_8;
      MR_Word STATE_VARIABLE_OptionsSet_9;
      MR_bool succeeded;

      if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        OptionArgs_5 = HeadVar__4_4;
        {
          HeadVar__7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), HeadVar__7_7, 0) = ((MR_Box) (HeadVar__6_6));
        }
        STATE_VARIABLE_OptionsSet_9 = STATE_VARIABLE_OptionsSet_0_8;
      }
      else
      {
        MR_String Option_21 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
        MR_Word Args0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));

        succeeded = (strcmp(Option_21, (MR_String) "--") == 0);
        if (succeeded)
        {
          OptionArgs_5 = HeadVar__4_4;
          HeadVar__2_2 = Args0_22;
          {
            HeadVar__7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), HeadVar__7_7, 0) = ((MR_Box) (HeadVar__6_6));
          }
          STATE_VARIABLE_OptionsSet_9 = STATE_VARIABLE_OptionsSet_0_8;
        }
        else
        {
          MR_String LongOption_31;

          succeeded = mercury__string__append_3_p_1((MR_String) "--no-", &LongOption_31, Option_21);
          if (succeeded)
          {
            MR_Word LongOptionPred_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptionOps_3, (MR_Integer) 1)));
            MR_Word Var_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptionOps_3, (MR_Integer) 0)));
            MR_Word Var_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptionOps_3, (MR_Integer) 2)));
            MR_Box Flag_33;
            MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), LongOptionPred_32, (MR_Integer) 1)));

            succeeded = func_0(((MR_Box) LongOptionPred_32), ((MR_Box) (LongOption_31)), &Flag_33);
            if (succeeded)
            {
              MR_String OptName_34;
              MR_Word Result1_35;
              MR_Word STATE_VARIABLE_OptionsSet_60_60;

              mercury__string__append_3_p_2((MR_String) "--", LongOption_31, &OptName_34);
              mercury__getopt_io__process_negated_option_7_p_0(TypeInfo_for_OptionType_152, OptName_34, Flag_33, OptionOps_3, HeadVar__6_6, &Result1_35, STATE_VARIABLE_OptionsSet_0_8, &STATE_VARIABLE_OptionsSet_60_60);
              if (((MR_tag((MR_Word) Result1_35)) == (MR_mktag((MR_Integer) 1))))
              {
                HeadVar__7_7 = Result1_35;
                OptionArgs_5 = HeadVar__4_4;
                HeadVar__2_2 = Args0_22;
                STATE_VARIABLE_OptionsSet_9 = STATE_VARIABLE_OptionsSet_60_60;
              }
              else
              {
                MR_Word OptionTable1_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Result1_35, (MR_Integer) 0)));
                MR_Word Var_61;
                MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_OptionType_152;
                MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__1_1;
                MR_Word next_value_of_tscc_proc_1_input_3_OptionOps_3;
                MR_Word next_value_of_tscc_proc_1_input_4_HeadVar__4_4;
                MR_Word next_value_of_tscc_proc_1_input_5_HeadVar__6_6;
                MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_OptionsSet_0_8;

                {
                  Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Option_21));
                  MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (HeadVar__4_4));
                }
                // direct tailcall eliminated
                next_value_of_tscc_proc_1_input_1_TypeInfo_for_OptionType_152 = TypeInfo_for_OptionType_152;
                next_value_of_tscc_proc_1_input_2_HeadVar__1_1 = Args0_22;
                next_value_of_tscc_proc_1_input_3_OptionOps_3 = OptionOps_3;
                next_value_of_tscc_proc_1_input_4_HeadVar__4_4 = Var_61;
                next_value_of_tscc_proc_1_input_5_HeadVar__6_6 = OptionTable1_36;
                next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_OptionsSet_0_8 = STATE_VARIABLE_OptionsSet_60_60;
                tscc_proc_1_input_1_TypeInfo_for_OptionType_152 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_OptionType_152;
                tscc_proc_1_input_2_HeadVar__1_1 = next_value_of_tscc_proc_1_input_2_HeadVar__1_1;
                tscc_proc_1_input_3_OptionOps_3 = next_value_of_tscc_proc_1_input_3_OptionOps_3;
                tscc_proc_1_input_4_HeadVar__4_4 = next_value_of_tscc_proc_1_input_4_HeadVar__4_4;
                tscc_proc_1_input_5_HeadVar__6_6 = next_value_of_tscc_proc_1_input_5_HeadVar__6_6;
                tscc_proc_1_input_6_STATE_VARIABLE_OptionsSet_0_8 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_OptionsSet_0_8;
                goto top_of_proc_1;
              }
            }
            else
            {
              MR_Word Error_38;

              {
                Error_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Error_38, 0) = ((MR_Box) (Option_21));
              }
              {
                HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), HeadVar__7_7, 0) = ((MR_Box) (Error_38));
              }
              OptionArgs_5 = HeadVar__4_4;
              HeadVar__2_2 = Args0_22;
              STATE_VARIABLE_OptionsSet_9 = STATE_VARIABLE_OptionsSet_0_8;
            }
          }
          else
          {
            MR_String LongOptionStr_39;

            succeeded = mercury__string__append_3_p_1((MR_String) "--", &LongOptionStr_39, Option_21);
            if (succeeded)
            {
              MR_Word MaybeArg_43;
              MR_String OptionName_44;
              MR_String LongOption_99;
              MR_Word LongOptionPred_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptionOps_3, (MR_Integer) 1)));
              MR_Word Var_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptionOps_3, (MR_Integer) 0)));
              MR_Word Var_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptionOps_3, (MR_Integer) 2)));
              MR_Integer OptionLen_40;
              MR_Box Flag_97;
              MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *);

              succeeded = mercury__string__sub_string_search_3_p_0(LongOptionStr_39, (MR_String) "=", &OptionLen_40);
              if (succeeded)
              {
                MR_String EqualOptionArg_41;
                MR_String OptionArg_42;

                mercury__string__split_4_p_0(LongOptionStr_39, OptionLen_40, &LongOption_99, &EqualOptionArg_41);
                succeeded = mercury__string__first_char_3_p_2(EqualOptionArg_41, (MR_Char) 61, &OptionArg_42);
                if (succeeded)
                  {
                    MaybeArg_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), MaybeArg_43, 0) = ((MR_Box) (OptionArg_42));
                  }
                else
                {
                  {
                    mercury__require__error_1_p_0((MR_String) "bad split of --longoption=arg");
                    return;
                  }
                }
              }
              else
              {
                LongOption_99 = LongOptionStr_39;
                MaybeArg_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
              OptionName_44 = mercury__string__f_43_43_2_f_0((MR_String) "--", LongOption_99);
              func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), LongOptionPred_100, (MR_Integer) 1)));
              succeeded = func_1(((MR_Box) LongOptionPred_100), ((MR_Box) (LongOption_99)), &Flag_97);
              if (succeeded)
              {
                MR_Word OptionData_45;
                MR_Word TypeCtorInfo_153_153 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
                MR_Box conv2_OptionData_45;

                succeeded = mercury__map__search_3_p_0(TypeInfo_for_OptionType_152, TypeCtorInfo_153_153, HeadVar__6_6, Flag_97, &conv2_OptionData_45);
                if (succeeded)
                {
                  OptionData_45 = ((MR_Word) conv2_OptionData_45);
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  MR_Word Var_69;
                  MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_OptionType_55;
                  MR_String next_value_of_tscc_proc_2_input_2_Option_16;
                  MR_Box next_value_of_tscc_proc_2_input_3_Flag_17;
                  MR_Word next_value_of_tscc_proc_2_input_4_OptionData_18;
                  MR_Word next_value_of_tscc_proc_2_input_5_MaybeOptionArg0_19;
                  MR_Word next_value_of_tscc_proc_2_input_6_Args0_20;
                  MR_Word next_value_of_tscc_proc_2_input_7_OptionOps_22;
                  MR_Word next_value_of_tscc_proc_2_input_8_OptionArgs0_23;
                  MR_Word next_value_of_tscc_proc_2_input_9_OptionTable0_25;
                  MR_Word next_value_of_tscc_proc_2_input_10_STATE_VARIABLE_OptionsSet_0_40;

                  {
                    Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Option_21));
                    MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (HeadVar__4_4));
                  }
                  // direct tailcall eliminated
                  next_value_of_tscc_proc_2_input_1_TypeInfo_for_OptionType_55 = TypeInfo_for_OptionType_152;
                  next_value_of_tscc_proc_2_input_2_Option_16 = OptionName_44;
                  next_value_of_tscc_proc_2_input_3_Flag_17 = Flag_97;
                  next_value_of_tscc_proc_2_input_4_OptionData_18 = OptionData_45;
                  next_value_of_tscc_proc_2_input_5_MaybeOptionArg0_19 = MaybeArg_43;
                  next_value_of_tscc_proc_2_input_6_Args0_20 = Args0_22;
                  next_value_of_tscc_proc_2_input_7_OptionOps_22 = OptionOps_3;
                  next_value_of_tscc_proc_2_input_8_OptionArgs0_23 = Var_69;
                  next_value_of_tscc_proc_2_input_9_OptionTable0_25 = HeadVar__6_6;
                  next_value_of_tscc_proc_2_input_10_STATE_VARIABLE_OptionsSet_0_40 = STATE_VARIABLE_OptionsSet_0_8;
                  tscc_proc_2_input_1_TypeInfo_for_OptionType_55 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_OptionType_55;
                  tscc_proc_2_input_2_Option_16 = next_value_of_tscc_proc_2_input_2_Option_16;
                  tscc_proc_2_input_3_Flag_17 = next_value_of_tscc_proc_2_input_3_Flag_17;
                  tscc_proc_2_input_4_OptionData_18 = next_value_of_tscc_proc_2_input_4_OptionData_18;
                  tscc_proc_2_input_5_MaybeOptionArg0_19 = next_value_of_tscc_proc_2_input_5_MaybeOptionArg0_19;
                  tscc_proc_2_input_6_Args0_20 = next_value_of_tscc_proc_2_input_6_Args0_20;
                  tscc_proc_2_input_7_OptionOps_22 = next_value_of_tscc_proc_2_input_7_OptionOps_22;
                  tscc_proc_2_input_8_OptionArgs0_23 = next_value_of_tscc_proc_2_input_8_OptionArgs0_23;
                  tscc_proc_2_input_9_OptionTable0_25 = next_value_of_tscc_proc_2_input_9_OptionTable0_25;
                  tscc_proc_2_input_10_STATE_VARIABLE_OptionsSet_0_40 = next_value_of_tscc_proc_2_input_10_STATE_VARIABLE_OptionsSet_0_40;
                  goto top_of_proc_2;
                }
                else
                {
                  MR_Word Var_72 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  MR_Word Error_94;

                  {
                    Error_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Error_94, 0) = Flag_97;
                    MR_hl_field(MR_mktag(1), Error_94, 1) = ((MR_Box) (Option_21));
                    MR_hl_field(MR_mktag(1), Error_94, 2) = ((MR_Box) (Var_72));
                  }
                  {
                    HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), HeadVar__7_7, 0) = ((MR_Box) (Error_94));
                  }
                  OptionArgs_5 = HeadVar__4_4;
                  HeadVar__2_2 = Args0_22;
                  STATE_VARIABLE_OptionsSet_9 = STATE_VARIABLE_OptionsSet_0_8;
                }
              }
              else
              {
                MR_Word Error_96;

                {
                  Error_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Error_96, 0) = ((MR_Box) (OptionName_44));
                }
                {
                  HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), HeadVar__7_7, 0) = ((MR_Box) (Error_96));
                }
                OptionArgs_5 = HeadVar__4_4;
                HeadVar__2_2 = Args0_22;
                STATE_VARIABLE_OptionsSet_9 = STATE_VARIABLE_OptionsSet_0_8;
              }
            }
            else
            {
              MR_String ShortOptions_46;

              succeeded = mercury__string__first_char_3_p_2(Option_21, (MR_Char) 45, &ShortOptions_46);
              if (succeeded)
              {
                succeeded = (strcmp(ShortOptions_46, (MR_String) "") == 0);
                succeeded = !(succeeded);
              }
              if (succeeded)
              {
                MR_Word ShortOptionsList_47;
                MR_Char SingleShortOpt_48;
                MR_Word Var_74;
                MR_Char Var_75;
                MR_Word Var_76;

                mercury__string__to_char_list_2_p_0(ShortOptions_46, &ShortOptionsList_47);
                succeeded = ((MR_tag((MR_Word) ShortOptionsList_47)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                {
                  SingleShortOpt_48 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), ShortOptionsList_47, (MR_Integer) 0)));
                  Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortOptionsList_47, (MR_Integer) 1)));
                  succeeded = ((MR_tag((MR_Word) Var_74)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_75 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Var_74, (MR_Integer) 0)));
                    Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_74, (MR_Integer) 1)));
                    succeeded = (Var_75 == (MR_Char) 45);
                    if (succeeded)
                      succeeded = (Var_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
                if (succeeded)
                {
                  MR_Word ShortOptionPred_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptionOps_3, (MR_Integer) 0)));
                  MR_Word Var_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptionOps_3, (MR_Integer) 1)));
                  MR_Word Var_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptionOps_3, (MR_Integer) 2)));
                  MR_Box Flag_109;
                  MR_bool MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ShortOptionPred_49, (MR_Integer) 1)));

                  succeeded = func_3(((MR_Box) ShortOptionPred_49), ((MR_Box) (MR_Word) (SingleShortOpt_48)), &Flag_109);
                  if (succeeded)
                  {
                    MR_Word Var_77;
                    MR_Word Var_79;
                    MR_Word Var_80 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    MR_Word STATE_VARIABLE_OptionsSet_81_81;
                    MR_String OptName_105;
                    MR_Word Result1_106;

                    {
                      Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (MR_Word) (SingleShortOpt_48));
                      MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (Var_80));
                    }
                    {
                      Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (MR_Word) ((MR_Char) 45));
                      MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Var_79));
                    }
                    mercury__string__from_char_list_2_p_0(Var_77, &OptName_105);
                    mercury__getopt_io__process_negated_option_7_p_0(TypeInfo_for_OptionType_152, OptName_105, Flag_109, OptionOps_3, HeadVar__6_6, &Result1_106, STATE_VARIABLE_OptionsSet_0_8, &STATE_VARIABLE_OptionsSet_81_81);
                    if (((MR_tag((MR_Word) Result1_106)) == (MR_mktag((MR_Integer) 1))))
                    {
                      HeadVar__7_7 = Result1_106;
                      OptionArgs_5 = HeadVar__4_4;
                      HeadVar__2_2 = Args0_22;
                      STATE_VARIABLE_OptionsSet_9 = STATE_VARIABLE_OptionsSet_81_81;
                    }
                    else
                    {
                      MR_Word Var_82;
                      MR_Word OptionTable1_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), Result1_106, (MR_Integer) 0)));
                      MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_OptionType_152;
                      MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__1_1;
                      MR_Word next_value_of_tscc_proc_1_input_3_OptionOps_3;
                      MR_Word next_value_of_tscc_proc_1_input_4_HeadVar__4_4;
                      MR_Word next_value_of_tscc_proc_1_input_5_HeadVar__6_6;
                      MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_OptionsSet_0_8;

                      {
                        Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (Option_21));
                        MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (HeadVar__4_4));
                      }
                      // direct tailcall eliminated
                      next_value_of_tscc_proc_1_input_1_TypeInfo_for_OptionType_152 = TypeInfo_for_OptionType_152;
                      next_value_of_tscc_proc_1_input_2_HeadVar__1_1 = Args0_22;
                      next_value_of_tscc_proc_1_input_3_OptionOps_3 = OptionOps_3;
                      next_value_of_tscc_proc_1_input_4_HeadVar__4_4 = Var_82;
                      next_value_of_tscc_proc_1_input_5_HeadVar__6_6 = OptionTable1_103;
                      next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_OptionsSet_0_8 = STATE_VARIABLE_OptionsSet_81_81;
                      tscc_proc_1_input_1_TypeInfo_for_OptionType_152 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_OptionType_152;
                      tscc_proc_1_input_2_HeadVar__1_1 = next_value_of_tscc_proc_1_input_2_HeadVar__1_1;
                      tscc_proc_1_input_3_OptionOps_3 = next_value_of_tscc_proc_1_input_3_OptionOps_3;
                      tscc_proc_1_input_4_HeadVar__4_4 = next_value_of_tscc_proc_1_input_4_HeadVar__4_4;
                      tscc_proc_1_input_5_HeadVar__6_6 = next_value_of_tscc_proc_1_input_5_HeadVar__6_6;
                      tscc_proc_1_input_6_STATE_VARIABLE_OptionsSet_0_8 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_OptionsSet_0_8;
                      goto top_of_proc_1;
                    }
                  }
                  else
                  {
                    MR_String Var_85;
                    MR_Word Error_108;

                    Var_85 = mercury__string__f_43_43_2_f_0((MR_String) "-", ShortOptions_46);
                    {
                      Error_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Error_108, 0) = ((MR_Box) (Var_85));
                    }
                    {
                      HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), HeadVar__7_7, 0) = ((MR_Box) (Error_108));
                    }
                    OptionArgs_5 = HeadVar__4_4;
                    HeadVar__2_2 = Args0_22;
                    STATE_VARIABLE_OptionsSet_9 = STATE_VARIABLE_OptionsSet_0_8;
                  }
                }
                else
                {
                  MR_Word Args1_51;
                  MR_Word OptionArgs1_52;
                  MR_Word Var_87;
                  MR_Word STATE_VARIABLE_OptionsSet_88_88;
                  MR_Word Result1_121;

                  {
                    Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (Option_21));
                    MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) (HeadVar__4_4));
                  }
                  mercury__getopt_io__handle_short_options_12_p_0(TypeInfo_for_OptionType_152, ShortOptionsList_47, OptionOps_3, Args0_22, &Args1_51, Var_87, &OptionArgs1_52, HeadVar__6_6, &Result1_121, STATE_VARIABLE_OptionsSet_0_8, &STATE_VARIABLE_OptionsSet_88_88);
                  if (((MR_tag((MR_Word) Result1_121)) == (MR_mktag((MR_Integer) 1))))
                  {
                    HeadVar__7_7 = Result1_121;
                    OptionArgs_5 = OptionArgs1_52;
                    HeadVar__2_2 = Args0_22;
                    STATE_VARIABLE_OptionsSet_9 = STATE_VARIABLE_OptionsSet_88_88;
                  }
                  else
                  {
                    MR_Word OptionTable1_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), Result1_121, (MR_Integer) 0)));
                    MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_OptionType_152 = TypeInfo_for_OptionType_152;
                    MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__1_1 = Args1_51;
                    MR_Word next_value_of_tscc_proc_1_input_3_OptionOps_3 = OptionOps_3;
                    MR_Word next_value_of_tscc_proc_1_input_4_HeadVar__4_4 = OptionArgs1_52;
                    MR_Word next_value_of_tscc_proc_1_input_5_HeadVar__6_6 = OptionTable1_119;
                    MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_OptionsSet_0_8 = STATE_VARIABLE_OptionsSet_88_88;

                    // direct tailcall eliminated
                    tscc_proc_1_input_1_TypeInfo_for_OptionType_152 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_OptionType_152;
                    tscc_proc_1_input_2_HeadVar__1_1 = next_value_of_tscc_proc_1_input_2_HeadVar__1_1;
                    tscc_proc_1_input_3_OptionOps_3 = next_value_of_tscc_proc_1_input_3_OptionOps_3;
                    tscc_proc_1_input_4_HeadVar__4_4 = next_value_of_tscc_proc_1_input_4_HeadVar__4_4;
                    tscc_proc_1_input_5_HeadVar__6_6 = next_value_of_tscc_proc_1_input_5_HeadVar__6_6;
                    tscc_proc_1_input_6_STATE_VARIABLE_OptionsSet_0_8 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_OptionsSet_0_8;
                    goto top_of_proc_1;
                  }
                }
              }
              else
              {
                MR_Word Args1_133;

                mercury__getopt_io__process_arguments_11_p_0(TypeInfo_for_OptionType_152, Args0_22, &Args1_133, OptionOps_3, HeadVar__4_4, &OptionArgs_5, HeadVar__6_6, &HeadVar__7_7, STATE_VARIABLE_OptionsSet_0_8, &STATE_VARIABLE_OptionsSet_9);
                {
                  HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Option_21));
                  MR_hl_field(MR_mktag(1), HeadVar__2_2, 1) = ((MR_Box) (Args1_133));
                }
              }
            }
          }
        }
      }
      tscc_output_1_HeadVar__2_2 = HeadVar__2_2;
      tscc_output_2_OptionArgs_5 = OptionArgs_5;
      tscc_output_3_HeadVar__7_7 = HeadVar__7_7;
      tscc_output_4_STATE_VARIABLE_OptionsSet_9 = STATE_VARIABLE_OptionsSet_9;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word TypeInfo_for_OptionType_55 = tscc_proc_2_input_1_TypeInfo_for_OptionType_55;
      MR_String Option_16 = tscc_proc_2_input_2_Option_16;
      MR_Box Flag_17 = tscc_proc_2_input_3_Flag_17;
      MR_Word OptionData_18 = tscc_proc_2_input_4_OptionData_18;
      MR_Word MaybeOptionArg0_19 = tscc_proc_2_input_5_MaybeOptionArg0_19;
      MR_Word Args0_20 = tscc_proc_2_input_6_Args0_20;
      MR_Word Args_21;
      MR_Word OptionOps_22 = tscc_proc_2_input_7_OptionOps_22;
      MR_Word OptionArgs0_23 = tscc_proc_2_input_8_OptionArgs0_23;
      MR_Word OptionArgs_24;
      MR_Word OptionTable0_25 = tscc_proc_2_input_9_OptionTable0_25;
      MR_Word Result_26;
      MR_Word STATE_VARIABLE_OptionsSet_0_40 = tscc_proc_2_input_10_STATE_VARIABLE_OptionsSet_0_40;
      MR_Word STATE_VARIABLE_OptionsSet_41;
      MR_bool succeeded;
      MR_Word MaybeOptionArg_31;
      MR_Word Args1_32;
      MR_Word MissingArg_33;
      MR_Word OptionArgs1_34;
      MR_Word Var_56;

      switch (MR_tag((MR_Word) OptionData_18)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(OptionData_18)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Var_56 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              Var_56 = (MR_Integer) 0;
              break;
            case (MR_Integer) 2:
              Var_56 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              Var_56 = (MR_Integer) 1;
              break;
            case (MR_Integer) 4:
              Var_56 = (MR_Integer) 1;
              break;
            case (MR_Integer) 5:
              Var_56 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          Var_56 = (MR_Integer) 0;
          break;
        case (MR_Integer) 2:
          Var_56 = (MR_Integer) 1;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), OptionData_18, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Var_56 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              Var_56 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              Var_56 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              Var_56 = (MR_Integer) 1;
              break;
          }
          break;
      }
      succeeded = ((MR_Integer) 1 == Var_56);
      if (succeeded)
        succeeded = (MaybeOptionArg0_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
        if ((Args0_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MaybeOptionArg_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          Args1_32 = Args0_20;
          OptionArgs1_34 = OptionArgs0_23;
          MissingArg_33 = (MR_Integer) 1;
        }
        else
        {
          MR_String Arg_29 = ((MR_String) (MR_hl_field(MR_mktag(1), Args0_20, (MR_Integer) 0)));

          Args1_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args0_20, (MR_Integer) 1)));
          {
            MaybeOptionArg_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeOptionArg_31, 0) = ((MR_Box) (Arg_29));
          }
          MissingArg_33 = (MR_Integer) 0;
          {
            OptionArgs1_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), OptionArgs1_34, 0) = ((MR_Box) (Arg_29));
            MR_hl_field(MR_mktag(1), OptionArgs1_34, 1) = ((MR_Box) (OptionArgs0_23));
          }
        }
      else
      {
        MaybeOptionArg_31 = MaybeOptionArg0_19;
        Args1_32 = Args0_20;
        OptionArgs1_34 = OptionArgs0_23;
        MissingArg_33 = (MR_Integer) 0;
      }
      switch (MissingArg_33) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String ArgVal_36;
            MR_Word Var_57;

            switch (MR_tag((MR_Word) OptionData_18)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(OptionData_18)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    Var_57 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    Var_57 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 2:
                    Var_57 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    Var_57 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    Var_57 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 5:
                    Var_57 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                Var_57 = (MR_Integer) 0;
                break;
              case (MR_Integer) 2:
                Var_57 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), OptionData_18, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    Var_57 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    Var_57 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    Var_57 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    Var_57 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            succeeded = ((MR_Integer) 0 == Var_57);
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) MaybeOptionArg_31)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
                ArgVal_36 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeOptionArg_31, (MR_Integer) 0)));
            }
            if (succeeded)
            {
              MR_Word Var_46;
              MR_Word Error_52;

              Args_21 = Args0_20;
              OptionArgs_24 = OptionArgs1_34;
              {
                Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (ArgVal_36));
              }
              {
                Error_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Error_52, 0) = Flag_17;
                MR_hl_field(MR_mktag(1), Error_52, 1) = ((MR_Box) (Option_16));
                MR_hl_field(MR_mktag(1), Error_52, 2) = ((MR_Box) (Var_46));
              }
              {
                Result_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Result_26, 0) = ((MR_Box) (Error_52));
              }
              STATE_VARIABLE_OptionsSet_41 = STATE_VARIABLE_OptionsSet_0_40;
            }
            else
            {
              MR_Word Result1_37;
              MR_Word STATE_VARIABLE_OptionsSet_47_47;

              mercury__getopt_io__process_option_11_p_0(TypeInfo_for_OptionType_55, OptionData_18, Option_16, Flag_17, MaybeOptionArg_31, OptionOps_22, OptionTable0_25, &Result1_37, STATE_VARIABLE_OptionsSet_0_40, &STATE_VARIABLE_OptionsSet_47_47);
              if (((MR_tag((MR_Word) Result1_37)) == (MR_mktag((MR_Integer) 1))))
              {
                Result_26 = Result1_37;
                OptionArgs_24 = OptionArgs1_34;
                Args_21 = Args1_32;
                STATE_VARIABLE_OptionsSet_41 = STATE_VARIABLE_OptionsSet_47_47;
              }
              else
              {
                MR_Word OptionTable1_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), Result1_37, (MR_Integer) 0)));
                MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_OptionType_152 = TypeInfo_for_OptionType_55;
                MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__1_1 = Args1_32;
                MR_Word next_value_of_tscc_proc_1_input_3_OptionOps_3 = OptionOps_22;
                MR_Word next_value_of_tscc_proc_1_input_4_HeadVar__4_4 = OptionArgs1_34;
                MR_Word next_value_of_tscc_proc_1_input_5_HeadVar__6_6 = OptionTable1_38;
                MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_OptionsSet_0_8 = STATE_VARIABLE_OptionsSet_47_47;

                // direct tailcall eliminated
                tscc_proc_1_input_1_TypeInfo_for_OptionType_152 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_OptionType_152;
                tscc_proc_1_input_2_HeadVar__1_1 = next_value_of_tscc_proc_1_input_2_HeadVar__1_1;
                tscc_proc_1_input_3_OptionOps_3 = next_value_of_tscc_proc_1_input_3_OptionOps_3;
                tscc_proc_1_input_4_HeadVar__4_4 = next_value_of_tscc_proc_1_input_4_HeadVar__4_4;
                tscc_proc_1_input_5_HeadVar__6_6 = next_value_of_tscc_proc_1_input_5_HeadVar__6_6;
                tscc_proc_1_input_6_STATE_VARIABLE_OptionsSet_0_8 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_OptionsSet_0_8;
                goto top_of_proc_1;
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Error_35;
            MR_Word Var_51;

            Args_21 = Args0_20;
            OptionArgs_24 = OptionArgs1_34;
            Var_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
            {
              Error_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Error_35, 0) = Flag_17;
              MR_hl_field(MR_mktag(1), Error_35, 1) = ((MR_Box) (Option_16));
              MR_hl_field(MR_mktag(1), Error_35, 2) = ((MR_Box) (Var_51));
            }
            {
              Result_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Result_26, 0) = ((MR_Box) (Error_35));
            }
            STATE_VARIABLE_OptionsSet_41 = STATE_VARIABLE_OptionsSet_0_40;
          }
          break;
      }
      tscc_output_1_HeadVar__2_2 = Args_21;
      tscc_output_2_OptionArgs_5 = OptionArgs_24;
      tscc_output_3_HeadVar__7_7 = Result_26;
      tscc_output_4_STATE_VARIABLE_OptionsSet_9 = STATE_VARIABLE_OptionsSet_41;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_HeadVar__2_2 = tscc_output_1_HeadVar__2_2;
    *tscc_output_ptr_2_OptionArgs_5 = tscc_output_2_OptionArgs_5;
    *tscc_output_ptr_3_HeadVar__7_7 = tscc_output_3_HeadVar__7_7;
    *tscc_output_ptr_4_STATE_VARIABLE_OptionsSet_9 = tscc_output_4_STATE_VARIABLE_OptionsSet_9;
    return;
  }
}

static void MR_CALL 
mercury__getopt_io__handle_long_option_15_p_0(
  MR_Word tscc_proc_2_input_1_TypeInfo_for_OptionType_55,
  MR_String tscc_proc_2_input_2_Option_16,
  MR_Box tscc_proc_2_input_3_Flag_17,
  MR_Word tscc_proc_2_input_4_OptionData_18,
  MR_Word tscc_proc_2_input_5_MaybeOptionArg0_19,
  MR_Word tscc_proc_2_input_6_Args0_20,
  MR_Word * tscc_output_ptr_1_HeadVar__2_2,
  MR_Word tscc_proc_2_input_7_OptionOps_22,
  MR_Word tscc_proc_2_input_8_OptionArgs0_23,
  MR_Word * tscc_output_ptr_2_OptionArgs_5,
  MR_Word tscc_proc_2_input_9_OptionTable0_25,
  MR_Word * tscc_output_ptr_3_HeadVar__7_7,
  MR_Word tscc_proc_2_input_10_STATE_VARIABLE_OptionsSet_0_40,
  MR_Word * tscc_output_ptr_4_STATE_VARIABLE_OptionsSet_9)
{
  {
    MR_Word tscc_proc_1_input_1_TypeInfo_for_OptionType_152;
    MR_Word tscc_proc_1_input_2_HeadVar__1_1;
    MR_Word tscc_proc_1_input_3_OptionOps_3;
    MR_Word tscc_proc_1_input_4_HeadVar__4_4;
    MR_Word tscc_proc_1_input_5_HeadVar__6_6;
    MR_Word tscc_proc_1_input_6_STATE_VARIABLE_OptionsSet_0_8;
    MR_Word tscc_output_1_HeadVar__2_2;
    MR_Word tscc_output_2_OptionArgs_5;
    MR_Word tscc_output_3_HeadVar__7_7;
    MR_Word tscc_output_4_STATE_VARIABLE_OptionsSet_9;

    // The code for TSCC PROC 2: pred getopt_io.handle_long_option/15-0.
    // Setup for mutual tailcalls optimized into a loop.
    // The mutually recursive procedures are:

    // proc 1 in TSCC: pred getopt_io.process_arguments/11-0
    // proc 2 in TSCC: pred getopt_io.handle_long_option/15-0

    goto top_of_proc_2;
  top_of_proc_1:;
    {
      MR_Word TypeInfo_for_OptionType_152 = tscc_proc_1_input_1_TypeInfo_for_OptionType_152;
      MR_Word HeadVar__1_1 = tscc_proc_1_input_2_HeadVar__1_1;
      MR_Word HeadVar__2_2;
      MR_Word OptionOps_3 = tscc_proc_1_input_3_OptionOps_3;
      MR_Word HeadVar__4_4 = tscc_proc_1_input_4_HeadVar__4_4;
      MR_Word OptionArgs_5;
      MR_Word HeadVar__6_6 = tscc_proc_1_input_5_HeadVar__6_6;
      MR_Word HeadVar__7_7;
      MR_Word STATE_VARIABLE_OptionsSet_0_8 = tscc_proc_1_input_6_STATE_VARIABLE_OptionsSet_0_8;
      MR_Word STATE_VARIABLE_OptionsSet_9;
      MR_bool succeeded;

      if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        OptionArgs_5 = HeadVar__4_4;
        {
          HeadVar__7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), HeadVar__7_7, 0) = ((MR_Box) (HeadVar__6_6));
        }
        STATE_VARIABLE_OptionsSet_9 = STATE_VARIABLE_OptionsSet_0_8;
      }
      else
      {
        MR_String Option_21 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
        MR_Word Args0_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));

        succeeded = (strcmp(Option_21, (MR_String) "--") == 0);
        if (succeeded)
        {
          OptionArgs_5 = HeadVar__4_4;
          HeadVar__2_2 = Args0_22;
          {
            HeadVar__7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), HeadVar__7_7, 0) = ((MR_Box) (HeadVar__6_6));
          }
          STATE_VARIABLE_OptionsSet_9 = STATE_VARIABLE_OptionsSet_0_8;
        }
        else
        {
          MR_String LongOption_31;

          succeeded = mercury__string__append_3_p_1((MR_String) "--no-", &LongOption_31, Option_21);
          if (succeeded)
          {
            MR_Word LongOptionPred_32 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptionOps_3, (MR_Integer) 1)));
            MR_Word Var_146 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptionOps_3, (MR_Integer) 0)));
            MR_Word Var_147 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptionOps_3, (MR_Integer) 2)));
            MR_Box Flag_33;
            MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), LongOptionPred_32, (MR_Integer) 1)));

            succeeded = func_0(((MR_Box) LongOptionPred_32), ((MR_Box) (LongOption_31)), &Flag_33);
            if (succeeded)
            {
              MR_String OptName_34;
              MR_Word Result1_35;
              MR_Word STATE_VARIABLE_OptionsSet_60_60;

              mercury__string__append_3_p_2((MR_String) "--", LongOption_31, &OptName_34);
              mercury__getopt_io__process_negated_option_7_p_0(TypeInfo_for_OptionType_152, OptName_34, Flag_33, OptionOps_3, HeadVar__6_6, &Result1_35, STATE_VARIABLE_OptionsSet_0_8, &STATE_VARIABLE_OptionsSet_60_60);
              if (((MR_tag((MR_Word) Result1_35)) == (MR_mktag((MR_Integer) 1))))
              {
                HeadVar__7_7 = Result1_35;
                OptionArgs_5 = HeadVar__4_4;
                HeadVar__2_2 = Args0_22;
                STATE_VARIABLE_OptionsSet_9 = STATE_VARIABLE_OptionsSet_60_60;
              }
              else
              {
                MR_Word OptionTable1_36 = ((MR_Word) (MR_hl_field(MR_mktag(0), Result1_35, (MR_Integer) 0)));
                MR_Word Var_61;
                MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_OptionType_152;
                MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__1_1;
                MR_Word next_value_of_tscc_proc_1_input_3_OptionOps_3;
                MR_Word next_value_of_tscc_proc_1_input_4_HeadVar__4_4;
                MR_Word next_value_of_tscc_proc_1_input_5_HeadVar__6_6;
                MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_OptionsSet_0_8;

                {
                  Var_61 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_61, 0) = ((MR_Box) (Option_21));
                  MR_hl_field(MR_mktag(1), Var_61, 1) = ((MR_Box) (HeadVar__4_4));
                }
                // direct tailcall eliminated
                next_value_of_tscc_proc_1_input_1_TypeInfo_for_OptionType_152 = TypeInfo_for_OptionType_152;
                next_value_of_tscc_proc_1_input_2_HeadVar__1_1 = Args0_22;
                next_value_of_tscc_proc_1_input_3_OptionOps_3 = OptionOps_3;
                next_value_of_tscc_proc_1_input_4_HeadVar__4_4 = Var_61;
                next_value_of_tscc_proc_1_input_5_HeadVar__6_6 = OptionTable1_36;
                next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_OptionsSet_0_8 = STATE_VARIABLE_OptionsSet_60_60;
                tscc_proc_1_input_1_TypeInfo_for_OptionType_152 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_OptionType_152;
                tscc_proc_1_input_2_HeadVar__1_1 = next_value_of_tscc_proc_1_input_2_HeadVar__1_1;
                tscc_proc_1_input_3_OptionOps_3 = next_value_of_tscc_proc_1_input_3_OptionOps_3;
                tscc_proc_1_input_4_HeadVar__4_4 = next_value_of_tscc_proc_1_input_4_HeadVar__4_4;
                tscc_proc_1_input_5_HeadVar__6_6 = next_value_of_tscc_proc_1_input_5_HeadVar__6_6;
                tscc_proc_1_input_6_STATE_VARIABLE_OptionsSet_0_8 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_OptionsSet_0_8;
                goto top_of_proc_1;
              }
            }
            else
            {
              MR_Word Error_38;

              {
                Error_38 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Error_38, 0) = ((MR_Box) (Option_21));
              }
              {
                HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), HeadVar__7_7, 0) = ((MR_Box) (Error_38));
              }
              OptionArgs_5 = HeadVar__4_4;
              HeadVar__2_2 = Args0_22;
              STATE_VARIABLE_OptionsSet_9 = STATE_VARIABLE_OptionsSet_0_8;
            }
          }
          else
          {
            MR_String LongOptionStr_39;

            succeeded = mercury__string__append_3_p_1((MR_String) "--", &LongOptionStr_39, Option_21);
            if (succeeded)
            {
              MR_Word MaybeArg_43;
              MR_String OptionName_44;
              MR_String LongOption_99;
              MR_Word LongOptionPred_100 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptionOps_3, (MR_Integer) 1)));
              MR_Word Var_148 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptionOps_3, (MR_Integer) 0)));
              MR_Word Var_149 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptionOps_3, (MR_Integer) 2)));
              MR_Integer OptionLen_40;
              MR_Box Flag_97;
              MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *);

              succeeded = mercury__string__sub_string_search_3_p_0(LongOptionStr_39, (MR_String) "=", &OptionLen_40);
              if (succeeded)
              {
                MR_String EqualOptionArg_41;
                MR_String OptionArg_42;

                mercury__string__split_4_p_0(LongOptionStr_39, OptionLen_40, &LongOption_99, &EqualOptionArg_41);
                succeeded = mercury__string__first_char_3_p_2(EqualOptionArg_41, (MR_Char) 61, &OptionArg_42);
                if (succeeded)
                  {
                    MaybeArg_43 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), MaybeArg_43, 0) = ((MR_Box) (OptionArg_42));
                  }
                else
                {
                  {
                    mercury__require__error_1_p_0((MR_String) "bad split of --longoption=arg");
                    return;
                  }
                }
              }
              else
              {
                LongOption_99 = LongOptionStr_39;
                MaybeArg_43 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
              OptionName_44 = mercury__string__f_43_43_2_f_0((MR_String) "--", LongOption_99);
              func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), LongOptionPred_100, (MR_Integer) 1)));
              succeeded = func_1(((MR_Box) LongOptionPred_100), ((MR_Box) (LongOption_99)), &Flag_97);
              if (succeeded)
              {
                MR_Word OptionData_45;
                MR_Word TypeCtorInfo_153_153 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
                MR_Box conv2_OptionData_45;

                succeeded = mercury__map__search_3_p_0(TypeInfo_for_OptionType_152, TypeCtorInfo_153_153, HeadVar__6_6, Flag_97, &conv2_OptionData_45);
                if (succeeded)
                {
                  OptionData_45 = ((MR_Word) conv2_OptionData_45);
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  MR_Word Var_69;
                  MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_OptionType_55;
                  MR_String next_value_of_tscc_proc_2_input_2_Option_16;
                  MR_Box next_value_of_tscc_proc_2_input_3_Flag_17;
                  MR_Word next_value_of_tscc_proc_2_input_4_OptionData_18;
                  MR_Word next_value_of_tscc_proc_2_input_5_MaybeOptionArg0_19;
                  MR_Word next_value_of_tscc_proc_2_input_6_Args0_20;
                  MR_Word next_value_of_tscc_proc_2_input_7_OptionOps_22;
                  MR_Word next_value_of_tscc_proc_2_input_8_OptionArgs0_23;
                  MR_Word next_value_of_tscc_proc_2_input_9_OptionTable0_25;
                  MR_Word next_value_of_tscc_proc_2_input_10_STATE_VARIABLE_OptionsSet_0_40;

                  {
                    Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (Option_21));
                    MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (HeadVar__4_4));
                  }
                  // direct tailcall eliminated
                  next_value_of_tscc_proc_2_input_1_TypeInfo_for_OptionType_55 = TypeInfo_for_OptionType_152;
                  next_value_of_tscc_proc_2_input_2_Option_16 = OptionName_44;
                  next_value_of_tscc_proc_2_input_3_Flag_17 = Flag_97;
                  next_value_of_tscc_proc_2_input_4_OptionData_18 = OptionData_45;
                  next_value_of_tscc_proc_2_input_5_MaybeOptionArg0_19 = MaybeArg_43;
                  next_value_of_tscc_proc_2_input_6_Args0_20 = Args0_22;
                  next_value_of_tscc_proc_2_input_7_OptionOps_22 = OptionOps_3;
                  next_value_of_tscc_proc_2_input_8_OptionArgs0_23 = Var_69;
                  next_value_of_tscc_proc_2_input_9_OptionTable0_25 = HeadVar__6_6;
                  next_value_of_tscc_proc_2_input_10_STATE_VARIABLE_OptionsSet_0_40 = STATE_VARIABLE_OptionsSet_0_8;
                  tscc_proc_2_input_1_TypeInfo_for_OptionType_55 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_OptionType_55;
                  tscc_proc_2_input_2_Option_16 = next_value_of_tscc_proc_2_input_2_Option_16;
                  tscc_proc_2_input_3_Flag_17 = next_value_of_tscc_proc_2_input_3_Flag_17;
                  tscc_proc_2_input_4_OptionData_18 = next_value_of_tscc_proc_2_input_4_OptionData_18;
                  tscc_proc_2_input_5_MaybeOptionArg0_19 = next_value_of_tscc_proc_2_input_5_MaybeOptionArg0_19;
                  tscc_proc_2_input_6_Args0_20 = next_value_of_tscc_proc_2_input_6_Args0_20;
                  tscc_proc_2_input_7_OptionOps_22 = next_value_of_tscc_proc_2_input_7_OptionOps_22;
                  tscc_proc_2_input_8_OptionArgs0_23 = next_value_of_tscc_proc_2_input_8_OptionArgs0_23;
                  tscc_proc_2_input_9_OptionTable0_25 = next_value_of_tscc_proc_2_input_9_OptionTable0_25;
                  tscc_proc_2_input_10_STATE_VARIABLE_OptionsSet_0_40 = next_value_of_tscc_proc_2_input_10_STATE_VARIABLE_OptionsSet_0_40;
                  goto top_of_proc_2;
                }
                else
                {
                  MR_Word Var_72 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  MR_Word Error_94;

                  {
                    Error_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Error_94, 0) = Flag_97;
                    MR_hl_field(MR_mktag(1), Error_94, 1) = ((MR_Box) (Option_21));
                    MR_hl_field(MR_mktag(1), Error_94, 2) = ((MR_Box) (Var_72));
                  }
                  {
                    HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), HeadVar__7_7, 0) = ((MR_Box) (Error_94));
                  }
                  OptionArgs_5 = HeadVar__4_4;
                  HeadVar__2_2 = Args0_22;
                  STATE_VARIABLE_OptionsSet_9 = STATE_VARIABLE_OptionsSet_0_8;
                }
              }
              else
              {
                MR_Word Error_96;

                {
                  Error_96 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Error_96, 0) = ((MR_Box) (OptionName_44));
                }
                {
                  HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), HeadVar__7_7, 0) = ((MR_Box) (Error_96));
                }
                OptionArgs_5 = HeadVar__4_4;
                HeadVar__2_2 = Args0_22;
                STATE_VARIABLE_OptionsSet_9 = STATE_VARIABLE_OptionsSet_0_8;
              }
            }
            else
            {
              MR_String ShortOptions_46;

              succeeded = mercury__string__first_char_3_p_2(Option_21, (MR_Char) 45, &ShortOptions_46);
              if (succeeded)
              {
                succeeded = (strcmp(ShortOptions_46, (MR_String) "") == 0);
                succeeded = !(succeeded);
              }
              if (succeeded)
              {
                MR_Word ShortOptionsList_47;
                MR_Char SingleShortOpt_48;
                MR_Word Var_74;
                MR_Char Var_75;
                MR_Word Var_76;

                mercury__string__to_char_list_2_p_0(ShortOptions_46, &ShortOptionsList_47);
                succeeded = ((MR_tag((MR_Word) ShortOptionsList_47)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                {
                  SingleShortOpt_48 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), ShortOptionsList_47, (MR_Integer) 0)));
                  Var_74 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortOptionsList_47, (MR_Integer) 1)));
                  succeeded = ((MR_tag((MR_Word) Var_74)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_75 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Var_74, (MR_Integer) 0)));
                    Var_76 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_74, (MR_Integer) 1)));
                    succeeded = (Var_75 == (MR_Char) 45);
                    if (succeeded)
                      succeeded = (Var_76 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
                if (succeeded)
                {
                  MR_Word ShortOptionPred_49 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptionOps_3, (MR_Integer) 0)));
                  MR_Word Var_150 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptionOps_3, (MR_Integer) 1)));
                  MR_Word Var_151 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptionOps_3, (MR_Integer) 2)));
                  MR_Box Flag_109;
                  MR_bool MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ShortOptionPred_49, (MR_Integer) 1)));

                  succeeded = func_3(((MR_Box) ShortOptionPred_49), ((MR_Box) (MR_Word) (SingleShortOpt_48)), &Flag_109);
                  if (succeeded)
                  {
                    MR_Word Var_77;
                    MR_Word Var_79;
                    MR_Word Var_80 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    MR_Word STATE_VARIABLE_OptionsSet_81_81;
                    MR_String OptName_105;
                    MR_Word Result1_106;

                    {
                      Var_79 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_79, 0) = ((MR_Box) (MR_Word) (SingleShortOpt_48));
                      MR_hl_field(MR_mktag(1), Var_79, 1) = ((MR_Box) (Var_80));
                    }
                    {
                      Var_77 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_77, 0) = ((MR_Box) (MR_Word) ((MR_Char) 45));
                      MR_hl_field(MR_mktag(1), Var_77, 1) = ((MR_Box) (Var_79));
                    }
                    mercury__string__from_char_list_2_p_0(Var_77, &OptName_105);
                    mercury__getopt_io__process_negated_option_7_p_0(TypeInfo_for_OptionType_152, OptName_105, Flag_109, OptionOps_3, HeadVar__6_6, &Result1_106, STATE_VARIABLE_OptionsSet_0_8, &STATE_VARIABLE_OptionsSet_81_81);
                    if (((MR_tag((MR_Word) Result1_106)) == (MR_mktag((MR_Integer) 1))))
                    {
                      HeadVar__7_7 = Result1_106;
                      OptionArgs_5 = HeadVar__4_4;
                      HeadVar__2_2 = Args0_22;
                      STATE_VARIABLE_OptionsSet_9 = STATE_VARIABLE_OptionsSet_81_81;
                    }
                    else
                    {
                      MR_Word Var_82;
                      MR_Word OptionTable1_103 = ((MR_Word) (MR_hl_field(MR_mktag(0), Result1_106, (MR_Integer) 0)));
                      MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_OptionType_152;
                      MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__1_1;
                      MR_Word next_value_of_tscc_proc_1_input_3_OptionOps_3;
                      MR_Word next_value_of_tscc_proc_1_input_4_HeadVar__4_4;
                      MR_Word next_value_of_tscc_proc_1_input_5_HeadVar__6_6;
                      MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_OptionsSet_0_8;

                      {
                        Var_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_82, 0) = ((MR_Box) (Option_21));
                        MR_hl_field(MR_mktag(1), Var_82, 1) = ((MR_Box) (HeadVar__4_4));
                      }
                      // direct tailcall eliminated
                      next_value_of_tscc_proc_1_input_1_TypeInfo_for_OptionType_152 = TypeInfo_for_OptionType_152;
                      next_value_of_tscc_proc_1_input_2_HeadVar__1_1 = Args0_22;
                      next_value_of_tscc_proc_1_input_3_OptionOps_3 = OptionOps_3;
                      next_value_of_tscc_proc_1_input_4_HeadVar__4_4 = Var_82;
                      next_value_of_tscc_proc_1_input_5_HeadVar__6_6 = OptionTable1_103;
                      next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_OptionsSet_0_8 = STATE_VARIABLE_OptionsSet_81_81;
                      tscc_proc_1_input_1_TypeInfo_for_OptionType_152 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_OptionType_152;
                      tscc_proc_1_input_2_HeadVar__1_1 = next_value_of_tscc_proc_1_input_2_HeadVar__1_1;
                      tscc_proc_1_input_3_OptionOps_3 = next_value_of_tscc_proc_1_input_3_OptionOps_3;
                      tscc_proc_1_input_4_HeadVar__4_4 = next_value_of_tscc_proc_1_input_4_HeadVar__4_4;
                      tscc_proc_1_input_5_HeadVar__6_6 = next_value_of_tscc_proc_1_input_5_HeadVar__6_6;
                      tscc_proc_1_input_6_STATE_VARIABLE_OptionsSet_0_8 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_OptionsSet_0_8;
                      goto top_of_proc_1;
                    }
                  }
                  else
                  {
                    MR_String Var_85;
                    MR_Word Error_108;

                    Var_85 = mercury__string__f_43_43_2_f_0((MR_String) "-", ShortOptions_46);
                    {
                      Error_108 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Error_108, 0) = ((MR_Box) (Var_85));
                    }
                    {
                      HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), HeadVar__7_7, 0) = ((MR_Box) (Error_108));
                    }
                    OptionArgs_5 = HeadVar__4_4;
                    HeadVar__2_2 = Args0_22;
                    STATE_VARIABLE_OptionsSet_9 = STATE_VARIABLE_OptionsSet_0_8;
                  }
                }
                else
                {
                  MR_Word Args1_51;
                  MR_Word OptionArgs1_52;
                  MR_Word Var_87;
                  MR_Word STATE_VARIABLE_OptionsSet_88_88;
                  MR_Word Result1_121;

                  {
                    Var_87 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_87, 0) = ((MR_Box) (Option_21));
                    MR_hl_field(MR_mktag(1), Var_87, 1) = ((MR_Box) (HeadVar__4_4));
                  }
                  mercury__getopt_io__handle_short_options_12_p_0(TypeInfo_for_OptionType_152, ShortOptionsList_47, OptionOps_3, Args0_22, &Args1_51, Var_87, &OptionArgs1_52, HeadVar__6_6, &Result1_121, STATE_VARIABLE_OptionsSet_0_8, &STATE_VARIABLE_OptionsSet_88_88);
                  if (((MR_tag((MR_Word) Result1_121)) == (MR_mktag((MR_Integer) 1))))
                  {
                    HeadVar__7_7 = Result1_121;
                    OptionArgs_5 = OptionArgs1_52;
                    HeadVar__2_2 = Args0_22;
                    STATE_VARIABLE_OptionsSet_9 = STATE_VARIABLE_OptionsSet_88_88;
                  }
                  else
                  {
                    MR_Word OptionTable1_119 = ((MR_Word) (MR_hl_field(MR_mktag(0), Result1_121, (MR_Integer) 0)));
                    MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_OptionType_152 = TypeInfo_for_OptionType_152;
                    MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__1_1 = Args1_51;
                    MR_Word next_value_of_tscc_proc_1_input_3_OptionOps_3 = OptionOps_3;
                    MR_Word next_value_of_tscc_proc_1_input_4_HeadVar__4_4 = OptionArgs1_52;
                    MR_Word next_value_of_tscc_proc_1_input_5_HeadVar__6_6 = OptionTable1_119;
                    MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_OptionsSet_0_8 = STATE_VARIABLE_OptionsSet_88_88;

                    // direct tailcall eliminated
                    tscc_proc_1_input_1_TypeInfo_for_OptionType_152 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_OptionType_152;
                    tscc_proc_1_input_2_HeadVar__1_1 = next_value_of_tscc_proc_1_input_2_HeadVar__1_1;
                    tscc_proc_1_input_3_OptionOps_3 = next_value_of_tscc_proc_1_input_3_OptionOps_3;
                    tscc_proc_1_input_4_HeadVar__4_4 = next_value_of_tscc_proc_1_input_4_HeadVar__4_4;
                    tscc_proc_1_input_5_HeadVar__6_6 = next_value_of_tscc_proc_1_input_5_HeadVar__6_6;
                    tscc_proc_1_input_6_STATE_VARIABLE_OptionsSet_0_8 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_OptionsSet_0_8;
                    goto top_of_proc_1;
                  }
                }
              }
              else
              {
                MR_Word Args1_133;

                mercury__getopt_io__process_arguments_11_p_0(TypeInfo_for_OptionType_152, Args0_22, &Args1_133, OptionOps_3, HeadVar__4_4, &OptionArgs_5, HeadVar__6_6, &HeadVar__7_7, STATE_VARIABLE_OptionsSet_0_8, &STATE_VARIABLE_OptionsSet_9);
                {
                  HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Option_21));
                  MR_hl_field(MR_mktag(1), HeadVar__2_2, 1) = ((MR_Box) (Args1_133));
                }
              }
            }
          }
        }
      }
      tscc_output_1_HeadVar__2_2 = HeadVar__2_2;
      tscc_output_2_OptionArgs_5 = OptionArgs_5;
      tscc_output_3_HeadVar__7_7 = HeadVar__7_7;
      tscc_output_4_STATE_VARIABLE_OptionsSet_9 = STATE_VARIABLE_OptionsSet_9;
      goto tscc_end;
    }
  top_of_proc_2:;
    {
      MR_Word TypeInfo_for_OptionType_55 = tscc_proc_2_input_1_TypeInfo_for_OptionType_55;
      MR_String Option_16 = tscc_proc_2_input_2_Option_16;
      MR_Box Flag_17 = tscc_proc_2_input_3_Flag_17;
      MR_Word OptionData_18 = tscc_proc_2_input_4_OptionData_18;
      MR_Word MaybeOptionArg0_19 = tscc_proc_2_input_5_MaybeOptionArg0_19;
      MR_Word Args0_20 = tscc_proc_2_input_6_Args0_20;
      MR_Word Args_21;
      MR_Word OptionOps_22 = tscc_proc_2_input_7_OptionOps_22;
      MR_Word OptionArgs0_23 = tscc_proc_2_input_8_OptionArgs0_23;
      MR_Word OptionArgs_24;
      MR_Word OptionTable0_25 = tscc_proc_2_input_9_OptionTable0_25;
      MR_Word Result_26;
      MR_Word STATE_VARIABLE_OptionsSet_0_40 = tscc_proc_2_input_10_STATE_VARIABLE_OptionsSet_0_40;
      MR_Word STATE_VARIABLE_OptionsSet_41;
      MR_bool succeeded;
      MR_Word MaybeOptionArg_31;
      MR_Word Args1_32;
      MR_Word MissingArg_33;
      MR_Word OptionArgs1_34;
      MR_Word Var_56;

      switch (MR_tag((MR_Word) OptionData_18)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(OptionData_18)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Var_56 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              Var_56 = (MR_Integer) 0;
              break;
            case (MR_Integer) 2:
              Var_56 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              Var_56 = (MR_Integer) 1;
              break;
            case (MR_Integer) 4:
              Var_56 = (MR_Integer) 1;
              break;
            case (MR_Integer) 5:
              Var_56 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          Var_56 = (MR_Integer) 0;
          break;
        case (MR_Integer) 2:
          Var_56 = (MR_Integer) 1;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), OptionData_18, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Var_56 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              Var_56 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              Var_56 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              Var_56 = (MR_Integer) 1;
              break;
          }
          break;
      }
      succeeded = ((MR_Integer) 1 == Var_56);
      if (succeeded)
        succeeded = (MaybeOptionArg0_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
        if ((Args0_20 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MaybeOptionArg_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          Args1_32 = Args0_20;
          OptionArgs1_34 = OptionArgs0_23;
          MissingArg_33 = (MR_Integer) 1;
        }
        else
        {
          MR_String Arg_29 = ((MR_String) (MR_hl_field(MR_mktag(1), Args0_20, (MR_Integer) 0)));

          Args1_32 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args0_20, (MR_Integer) 1)));
          {
            MaybeOptionArg_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeOptionArg_31, 0) = ((MR_Box) (Arg_29));
          }
          MissingArg_33 = (MR_Integer) 0;
          {
            OptionArgs1_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), OptionArgs1_34, 0) = ((MR_Box) (Arg_29));
            MR_hl_field(MR_mktag(1), OptionArgs1_34, 1) = ((MR_Box) (OptionArgs0_23));
          }
        }
      else
      {
        MaybeOptionArg_31 = MaybeOptionArg0_19;
        Args1_32 = Args0_20;
        OptionArgs1_34 = OptionArgs0_23;
        MissingArg_33 = (MR_Integer) 0;
      }
      switch (MissingArg_33) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String ArgVal_36;
            MR_Word Var_57;

            switch (MR_tag((MR_Word) OptionData_18)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(OptionData_18)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    Var_57 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    Var_57 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 2:
                    Var_57 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    Var_57 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    Var_57 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 5:
                    Var_57 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                Var_57 = (MR_Integer) 0;
                break;
              case (MR_Integer) 2:
                Var_57 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), OptionData_18, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    Var_57 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    Var_57 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    Var_57 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    Var_57 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            succeeded = ((MR_Integer) 0 == Var_57);
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) MaybeOptionArg_31)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
                ArgVal_36 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeOptionArg_31, (MR_Integer) 0)));
            }
            if (succeeded)
            {
              MR_Word Var_46;
              MR_Word Error_52;

              Args_21 = Args0_20;
              OptionArgs_24 = OptionArgs1_34;
              {
                Var_46 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_46, 0) = ((MR_Box) (ArgVal_36));
              }
              {
                Error_52 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Error_52, 0) = Flag_17;
                MR_hl_field(MR_mktag(1), Error_52, 1) = ((MR_Box) (Option_16));
                MR_hl_field(MR_mktag(1), Error_52, 2) = ((MR_Box) (Var_46));
              }
              {
                Result_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Result_26, 0) = ((MR_Box) (Error_52));
              }
              STATE_VARIABLE_OptionsSet_41 = STATE_VARIABLE_OptionsSet_0_40;
            }
            else
            {
              MR_Word Result1_37;
              MR_Word STATE_VARIABLE_OptionsSet_47_47;

              mercury__getopt_io__process_option_11_p_0(TypeInfo_for_OptionType_55, OptionData_18, Option_16, Flag_17, MaybeOptionArg_31, OptionOps_22, OptionTable0_25, &Result1_37, STATE_VARIABLE_OptionsSet_0_40, &STATE_VARIABLE_OptionsSet_47_47);
              if (((MR_tag((MR_Word) Result1_37)) == (MR_mktag((MR_Integer) 1))))
              {
                Result_26 = Result1_37;
                OptionArgs_24 = OptionArgs1_34;
                Args_21 = Args1_32;
                STATE_VARIABLE_OptionsSet_41 = STATE_VARIABLE_OptionsSet_47_47;
              }
              else
              {
                MR_Word OptionTable1_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), Result1_37, (MR_Integer) 0)));
                MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_OptionType_152 = TypeInfo_for_OptionType_55;
                MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__1_1 = Args1_32;
                MR_Word next_value_of_tscc_proc_1_input_3_OptionOps_3 = OptionOps_22;
                MR_Word next_value_of_tscc_proc_1_input_4_HeadVar__4_4 = OptionArgs1_34;
                MR_Word next_value_of_tscc_proc_1_input_5_HeadVar__6_6 = OptionTable1_38;
                MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_OptionsSet_0_8 = STATE_VARIABLE_OptionsSet_47_47;

                // direct tailcall eliminated
                tscc_proc_1_input_1_TypeInfo_for_OptionType_152 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_OptionType_152;
                tscc_proc_1_input_2_HeadVar__1_1 = next_value_of_tscc_proc_1_input_2_HeadVar__1_1;
                tscc_proc_1_input_3_OptionOps_3 = next_value_of_tscc_proc_1_input_3_OptionOps_3;
                tscc_proc_1_input_4_HeadVar__4_4 = next_value_of_tscc_proc_1_input_4_HeadVar__4_4;
                tscc_proc_1_input_5_HeadVar__6_6 = next_value_of_tscc_proc_1_input_5_HeadVar__6_6;
                tscc_proc_1_input_6_STATE_VARIABLE_OptionsSet_0_8 = next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_OptionsSet_0_8;
                goto top_of_proc_1;
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word Error_35;
            MR_Word Var_51;

            Args_21 = Args0_20;
            OptionArgs_24 = OptionArgs1_34;
            Var_51 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
            {
              Error_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Error_35, 0) = Flag_17;
              MR_hl_field(MR_mktag(1), Error_35, 1) = ((MR_Box) (Option_16));
              MR_hl_field(MR_mktag(1), Error_35, 2) = ((MR_Box) (Var_51));
            }
            {
              Result_26 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Result_26, 0) = ((MR_Box) (Error_35));
            }
            STATE_VARIABLE_OptionsSet_41 = STATE_VARIABLE_OptionsSet_0_40;
          }
          break;
      }
      tscc_output_1_HeadVar__2_2 = Args_21;
      tscc_output_2_OptionArgs_5 = OptionArgs_24;
      tscc_output_3_HeadVar__7_7 = Result_26;
      tscc_output_4_STATE_VARIABLE_OptionsSet_9 = STATE_VARIABLE_OptionsSet_41;
      goto tscc_end;
    }
  tscc_end:;
    *tscc_output_ptr_1_HeadVar__2_2 = tscc_output_1_HeadVar__2_2;
    *tscc_output_ptr_2_OptionArgs_5 = tscc_output_2_OptionArgs_5;
    *tscc_output_ptr_3_HeadVar__7_7 = tscc_output_3_HeadVar__7_7;
    *tscc_output_ptr_4_STATE_VARIABLE_OptionsSet_9 = tscc_output_4_STATE_VARIABLE_OptionsSet_9;
    return;
  }
}

static void MR_CALL 
mercury__getopt_io__handle_short_options_12_p_0(
  MR_Word TypeInfo_for_OptionType_70,
  MR_Word HeadVar__1_1,
  MR_Word OptionOps_2,
  MR_Word HeadVar__3_3,
  MR_Word * Args_4,
  MR_Word HeadVar__5_5,
  MR_Word * OptionArgs_6,
  MR_Word HeadVar__7_7,
  MR_Word * HeadVar__8_8,
  MR_Word STATE_VARIABLE_OptionsSet_0_9,
  MR_Word * STATE_VARIABLE_OptionsSet_10)
{
  while (MR_TRUE)
  {
    MR_bool succeeded;

    // setup for model_det tailcalls optimized into a loop
    if ((HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      *Args_4 = HeadVar__3_3;
      *OptionArgs_6 = HeadVar__5_5;
      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *HeadVar__8_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (HeadVar__7_7));
      }
      *STATE_VARIABLE_OptionsSet_10 = STATE_VARIABLE_OptionsSet_0_9;
    }
    else
    {
      MR_Char Opt_23 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Opts0_24 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ShortOptionPred_34 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptionOps_2, (MR_Integer) 0)));
      MR_Word Var_68 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptionOps_2, (MR_Integer) 1)));
      MR_Word Var_69 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptionOps_2, (MR_Integer) 2)));
      MR_Box Flag_35;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ShortOptionPred_34, (MR_Integer) 1)));

      succeeded = func_0(((MR_Box) ShortOptionPred_34), ((MR_Box) (MR_Word) (Opt_23)), &Flag_35);
      if (succeeded)
      {
        MR_Word OptionData_36;
        MR_Word TypeCtorInfo_71_71 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
        MR_Box conv1_OptionData_36;

        succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_OptionType_70, TypeCtorInfo_71_71, HeadVar__7_7, Flag_35, &conv1_OptionData_36);
        if (succeeded)
        {
          OptionData_36 = ((MR_Word) conv1_OptionData_36);
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word Args1_38;
          MR_Word OptionArgs1_39;
          MR_Word MaybeOptionArg_40;
          MR_Word Opts1_41;
          MR_String Option_42;
          MR_Word Result1_43;
          MR_Word Var_53;
          MR_Word Var_55;
          MR_Word Var_56;
          MR_Word STATE_VARIABLE_OptionsSet_57_57;
          MR_Word Var_72;

          switch (MR_tag((MR_Word) OptionData_36)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(OptionData_36)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  Var_72 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 1:
                  Var_72 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 2:
                  Var_72 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  Var_72 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 4:
                  Var_72 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 5:
                  Var_72 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              Var_72 = (MR_Integer) 0;
              break;
            case (MR_Integer) 2:
              Var_72 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), OptionData_36, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  Var_72 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  Var_72 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  Var_72 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  Var_72 = (MR_Integer) 1;
                  break;
              }
              break;
          }
          succeeded = ((MR_Integer) 1 == Var_72);
          if (succeeded)
          {
            MR_String Arg_37;
            MR_String ArgPrime_88;
            MR_Word ArgsPrime_89;

            succeeded = (Opts0_24 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                ArgPrime_88 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
                ArgsPrime_89 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
              }
            }
            if (succeeded)
            {
              {
                OptionArgs1_39 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), OptionArgs1_39, 0) = ((MR_Box) (ArgPrime_88));
                MR_hl_field(MR_mktag(1), OptionArgs1_39, 1) = ((MR_Box) (HeadVar__5_5));
              }
              Arg_37 = ArgPrime_88;
              Args1_38 = ArgsPrime_89;
            }
            else
            {
              mercury__string__from_char_list_2_p_0(Opts0_24, &Arg_37);
              OptionArgs1_39 = HeadVar__5_5;
              Args1_38 = HeadVar__3_3;
            }
            {
              MaybeOptionArg_40 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeOptionArg_40, 0) = ((MR_Box) (Arg_37));
            }
            Opts1_41 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
          else
          {
            MaybeOptionArg_40 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            Opts1_41 = Opts0_24;
            OptionArgs1_39 = HeadVar__5_5;
            Args1_38 = HeadVar__3_3;
          }
          Var_56 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          {
            Var_55 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_55, 0) = ((MR_Box) (MR_Word) (Opt_23));
            MR_hl_field(MR_mktag(1), Var_55, 1) = ((MR_Box) (Var_56));
          }
          {
            Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (MR_Word) ((MR_Char) 45));
            MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (Var_55));
          }
          mercury__string__from_char_list_2_p_0(Var_53, &Option_42);
          mercury__getopt_io__process_option_11_p_0(TypeInfo_for_OptionType_70, OptionData_36, Option_42, Flag_35, MaybeOptionArg_40, OptionOps_2, HeadVar__7_7, &Result1_43, STATE_VARIABLE_OptionsSet_0_9, &STATE_VARIABLE_OptionsSet_57_57);
          if (((MR_tag((MR_Word) Result1_43)) == (MR_mktag((MR_Integer) 1))))
          {
            *HeadVar__8_8 = Result1_43;
            *OptionArgs_6 = OptionArgs1_39;
            *Args_4 = Args1_38;
            *STATE_VARIABLE_OptionsSet_10 = STATE_VARIABLE_OptionsSet_57_57;
          }
          else
          {
            MR_Word OptionTable1_44 = ((MR_Word) (MR_hl_field(MR_mktag(0), Result1_43, (MR_Integer) 0)));
            MR_Word next_value_of_HeadVar__1_1 = Opts1_41;
            MR_Word next_value_of_HeadVar__3_3 = Args1_38;
            MR_Word next_value_of_HeadVar__5_5 = OptionArgs1_39;
            MR_Word next_value_of_HeadVar__7_7 = OptionTable1_44;
            MR_Word next_value_of_STATE_VARIABLE_OptionsSet_0_9 = STATE_VARIABLE_OptionsSet_57_57;

            // direct tailcall eliminated
            HeadVar__1_1 = next_value_of_HeadVar__1_1;
            HeadVar__3_3 = next_value_of_HeadVar__3_3;
            HeadVar__5_5 = next_value_of_HeadVar__5_5;
            HeadVar__7_7 = next_value_of_HeadVar__7_7;
            STATE_VARIABLE_OptionsSet_0_9 = next_value_of_STATE_VARIABLE_OptionsSet_0_9;
            continue;
          }
        }
        else
        {
          MR_String OptString_46;
          MR_Word Error_47;
          MR_String Var_61;
          MR_Word Var_63;
          MR_Word V_5_92;
          MR_Word V_6_93 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

          {
            V_5_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), V_5_92, 0) = ((MR_Box) (MR_Word) (Opt_23));
            MR_hl_field(MR_mktag(1), V_5_92, 1) = ((MR_Box) (V_6_93));
          }
          mercury__string__to_char_list_2_p_1(&OptString_46, V_5_92);
          Var_61 = mercury__string__f_43_43_2_f_0((MR_String) "-", OptString_46);
          Var_63 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          {
            Error_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Error_47, 0) = Flag_35;
            MR_hl_field(MR_mktag(1), Error_47, 1) = ((MR_Box) (Var_61));
            MR_hl_field(MR_mktag(1), Error_47, 2) = ((MR_Box) (Var_63));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__8_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_47));
          }
          *OptionArgs_6 = HeadVar__5_5;
          *Args_4 = HeadVar__3_3;
          *STATE_VARIABLE_OptionsSet_10 = STATE_VARIABLE_OptionsSet_0_9;
        }
      }
      else
      {
        MR_String Var_64;
        MR_String OptString_66;
        MR_Word Error_67;
        MR_Word V_5_96;
        MR_Word V_6_97 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        {
          V_5_96 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), V_5_96, 0) = ((MR_Box) (MR_Word) (Opt_23));
          MR_hl_field(MR_mktag(1), V_5_96, 1) = ((MR_Box) (V_6_97));
        }
        mercury__string__to_char_list_2_p_1(&OptString_66, V_5_96);
        Var_64 = mercury__string__f_43_43_2_f_0((MR_String) "-", OptString_66);
        {
          Error_67 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Error_67, 0) = ((MR_Box) (Var_64));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__8_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_67));
        }
        *OptionArgs_6 = HeadVar__5_5;
        *Args_4 = HeadVar__3_3;
        *STATE_VARIABLE_OptionsSet_10 = STATE_VARIABLE_OptionsSet_0_9;
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__getopt_io__process_option_11_p_0(
  MR_Word TypeInfo_for_OptionType_266,
  MR_Word HeadVar__1_1,
  MR_String HeadVar__2_2,
  MR_Box Flag_3,
  MR_Word MaybeArg_4,
  MR_Word HeadVar__5_5,
  MR_Word HeadVar__6_6,
  MR_Word * Result_7,
  MR_Word STATE_VARIABLE_OptionsSet_0_8,
  MR_Word * STATE_VARIABLE_OptionsSet_9)
{
  {
    MR_bool succeeded;

    switch (MR_tag((MR_Word) HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word STATE_VARIABLE_OptionsSet_150_150;

              mercury__set__insert_3_p_0(TypeInfo_for_OptionType_266, Flag_3, STATE_VARIABLE_OptionsSet_0_8, &STATE_VARIABLE_OptionsSet_150_150);
              if ((MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word Var_151 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                mercury__getopt_io__process_special_8_p_0(TypeInfo_for_OptionType_266, HeadVar__2_2, Flag_3, Var_151, HeadVar__5_5, HeadVar__6_6, Result_7, STATE_VARIABLE_OptionsSet_150_150, STATE_VARIABLE_OptionsSet_9);
              }
              else
              {
                {
                  mercury__require__error_1_p_0((MR_String) "no special argument expected in getopt_io.process_option");
                  return;
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word STATE_VARIABLE_OptionsSet_167_167;

              mercury__set__insert_3_p_0(TypeInfo_for_OptionType_266, Flag_3, STATE_VARIABLE_OptionsSet_0_8, &STATE_VARIABLE_OptionsSet_167_167);
              if ((MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word Var_168 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__getopt_io_scalar_common_8[1]);

                mercury__getopt_io__process_special_8_p_0(TypeInfo_for_OptionType_266, HeadVar__2_2, Flag_3, Var_168, HeadVar__5_5, HeadVar__6_6, Result_7, STATE_VARIABLE_OptionsSet_167_167, STATE_VARIABLE_OptionsSet_9);
              }
              else
              {
                MR_Word Var_171 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__getopt_io_scalar_common_8[0]);

                mercury__getopt_io__process_special_8_p_0(TypeInfo_for_OptionType_266, HeadVar__2_2, Flag_3, Var_171, HeadVar__5_5, HeadVar__6_6, Result_7, STATE_VARIABLE_OptionsSet_167_167, STATE_VARIABLE_OptionsSet_9);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word STATE_VARIABLE_OptionsSet_188_188;

              mercury__set__insert_3_p_0(TypeInfo_for_OptionType_266, Flag_3, STATE_VARIABLE_OptionsSet_0_8, &STATE_VARIABLE_OptionsSet_188_188);
              if ((MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__error_1_p_0((MR_String) "int_special argument expected in getopt_io.process_option");
                  return;
                }
              }
              else
              {
                MR_String Arg_182 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeArg_4, (MR_Integer) 0)));
                MR_Integer IntArg_183;

                succeeded = mercury__string__to_int_2_p_0(Arg_182, &IntArg_183);
                if (succeeded)
                {
                  MR_Word Var_190;

                  {
                    Var_190 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Var_190, 0) = ((MR_Box) (IntArg_183));
                  }
                  mercury__getopt_io__process_special_8_p_0(TypeInfo_for_OptionType_266, HeadVar__2_2, Flag_3, Var_190, HeadVar__5_5, HeadVar__6_6, Result_7, STATE_VARIABLE_OptionsSet_188_188, STATE_VARIABLE_OptionsSet_9);
                }
                else
                {
                  mercury__getopt_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_4_p_0(Flag_3, HeadVar__2_2, Arg_182, Result_7);
                  *STATE_VARIABLE_OptionsSet_9 = STATE_VARIABLE_OptionsSet_188_188;
                }
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word STATE_VARIABLE_OptionsSet_205_205;

              mercury__set__insert_3_p_0(TypeInfo_for_OptionType_266, Flag_3, STATE_VARIABLE_OptionsSet_0_8, &STATE_VARIABLE_OptionsSet_205_205);
              if ((MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__error_1_p_0((MR_String) "string_special argument expected in getopt_io.process_option");
                  return;
                }
              }
              else
              {
                MR_String Arg_200 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeArg_4, (MR_Integer) 0)));
                MR_Word Var_207;

                {
                  Var_207 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_207, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), Var_207, 1) = ((MR_Box) (Arg_200));
                }
                mercury__getopt_io__process_special_8_p_0(TypeInfo_for_OptionType_266, HeadVar__2_2, Flag_3, Var_207, HeadVar__5_5, HeadVar__6_6, Result_7, STATE_VARIABLE_OptionsSet_205_205, STATE_VARIABLE_OptionsSet_9);
              }
            }
            break;
          case (MR_Integer) 4:
            if ((MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                mercury__require__error_1_p_0((MR_String) "maybe_string_special argument expected in getopt_io.process_option");
                return;
              }
            }
            else
            {
              MR_Word Var_225;

              {
                Var_225 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_225, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_225, 1) = ((MR_Box) (MaybeArg_4));
              }
              mercury__getopt_io__process_special_8_p_0(TypeInfo_for_OptionType_266, HeadVar__2_2, Flag_3, Var_225, HeadVar__5_5, HeadVar__6_6, Result_7, STATE_VARIABLE_OptionsSet_0_8, STATE_VARIABLE_OptionsSet_9);
            }
            break;
          case (MR_Integer) 5:
            if ((MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                mercury__require__error_1_p_0((MR_String) "file_special argument expected in getopt_io.process_option");
                return;
              }
            }
            else
            {
              MR_String FileName_235 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeArg_4, (MR_Integer) 0)));
              MR_Word OpenRes_236;

              mercury__io__open_input_4_p_0(FileName_235, &OpenRes_236);
              if (((MR_tag((MR_Word) OpenRes_236)) == (MR_mktag((MR_Integer) 1))))
              {
                MR_Word Reason_263;
                MR_Word Error_264;
                MR_Word IO_Error_265 = ((MR_Word) (MR_hl_field(MR_mktag(1), OpenRes_236, (MR_Integer) 0)));

                {
                  Reason_263 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Reason_263, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                  MR_hl_field(MR_mktag(3), Reason_263, 1) = ((MR_Box) (FileName_235));
                  MR_hl_field(MR_mktag(3), Reason_263, 2) = ((MR_Box) (IO_Error_265));
                }
                {
                  Error_264 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Error_264, 0) = Flag_3;
                  MR_hl_field(MR_mktag(1), Error_264, 1) = ((MR_Box) (HeadVar__2_2));
                  MR_hl_field(MR_mktag(1), Error_264, 2) = ((MR_Box) (Reason_263));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *Result_7 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_264));
                }
                *STATE_VARIABLE_OptionsSet_9 = STATE_VARIABLE_OptionsSet_0_8;
              }
              else
              {
                MR_Word FileStream_237 = ((MR_Word) (MR_hl_field(MR_mktag(0), OpenRes_236, (MR_Integer) 0)));
                MR_Word ReadRes_238;

                mercury__io__read_file_as_string_4_p_0(FileStream_237, &ReadRes_238);
                if (((MR_tag((MR_Word) ReadRes_238)) == (MR_mktag((MR_Integer) 1))))
                {
                  MR_Word IO_Error_249 = ((MR_Word) (MR_hl_field(MR_mktag(1), ReadRes_238, (MR_Integer) 1)));
                  MR_Word Reason_261;
                  MR_Word Error_262;
                  MR_String Var_248 = ((MR_String) (MR_hl_field(MR_mktag(1), ReadRes_238, (MR_Integer) 0)));

                  {
                    Reason_261 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Reason_261, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                    MR_hl_field(MR_mktag(3), Reason_261, 1) = ((MR_Box) (FileName_235));
                    MR_hl_field(MR_mktag(3), Reason_261, 2) = ((MR_Box) (IO_Error_249));
                  }
                  {
                    Error_262 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Error_262, 0) = Flag_3;
                    MR_hl_field(MR_mktag(1), Error_262, 1) = ((MR_Box) (HeadVar__2_2));
                    MR_hl_field(MR_mktag(1), Error_262, 2) = ((MR_Box) (Reason_261));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *Result_7 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_262));
                  }
                  *STATE_VARIABLE_OptionsSet_9 = STATE_VARIABLE_OptionsSet_0_8;
                }
                else
                {
                  MR_String Contents_239 = ((MR_String) (MR_hl_field(MR_mktag(0), ReadRes_238, (MR_Integer) 0)));
                  MR_Word Words_240;
                  MR_Word Args_241;
                  MR_Word Result0_243;
                  MR_Word Var_257;
                  MR_Word _OptionArgs_242;

                  Words_240 = mercury__string__words_1_f_0(Contents_239);
                  Var_257 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  mercury__getopt_io__process_arguments_11_p_0(TypeInfo_for_OptionType_266, Words_240, &Args_241, HeadVar__5_5, Var_257, &_OptionArgs_242, HeadVar__6_6, &Result0_243, STATE_VARIABLE_OptionsSet_0_8, STATE_VARIABLE_OptionsSet_9);
                  if ((Args_241 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
                    *Result_7 = Result0_243;
                  else
                  {
                    MR_Word Reason_246;
                    MR_Word Error_247;

                    {
                      Reason_246 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(3), Reason_246, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                      MR_hl_field(MR_mktag(3), Reason_246, 1) = ((MR_Box) (FileName_235));
                    }
                    {
                      Error_247 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Error_247, 0) = Flag_3;
                      MR_hl_field(MR_mktag(1), Error_247, 1) = ((MR_Box) (HeadVar__2_2));
                      MR_hl_field(MR_mktag(1), Error_247, 2) = ((MR_Box) (Reason_246));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *Result_7 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_247));
                    }
                  }
                }
                mercury__io__close_input_3_p_0(FileStream_237);
              }
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__set__insert_3_p_0(TypeInfo_for_OptionType_266, Flag_3, STATE_VARIABLE_OptionsSet_0_8, STATE_VARIABLE_OptionsSet_9);
          if ((MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word TypeCtorInfo_268_268 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
            MR_Word Var_28 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__getopt_io_scalar_common_8[1]);
            MR_Word STATE_VARIABLE_OptionTable_32_34;

            mercury__map__set_4_p_0(TypeInfo_for_OptionType_266, TypeCtorInfo_268_268, Flag_3, ((MR_Box) (Var_28)), HeadVar__6_6, &STATE_VARIABLE_OptionTable_32_34);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *Result_7 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (STATE_VARIABLE_OptionTable_32_34));
            }
          }
          else
          {
            MR_Word TypeCtorInfo_267_267 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
            MR_Word Var_31 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__getopt_io_scalar_common_8[0]);
            MR_Word STATE_VARIABLE_OptionTable_32_32;

            mercury__map__set_4_p_0(TypeInfo_for_OptionType_266, TypeCtorInfo_267_267, Flag_3, ((MR_Box) (Var_31)), HeadVar__6_6, &STATE_VARIABLE_OptionTable_32_32);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *Result_7 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (STATE_VARIABLE_OptionTable_32_32));
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          mercury__set__insert_3_p_0(TypeInfo_for_OptionType_266, Flag_3, STATE_VARIABLE_OptionsSet_0_8, STATE_VARIABLE_OptionsSet_9);
          if ((MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__error_1_p_0((MR_String) "integer argument expected in getopt_io.process_option");
              return;
            }
          }
          else
          {
            MR_String Arg_44 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeArg_4, (MR_Integer) 0)));
            MR_Integer IntArg_45;

            succeeded = mercury__string__to_int_2_p_0(Arg_44, &IntArg_45);
            if (succeeded)
            {
              MR_Word TypeCtorInfo_269_269;
              MR_Word Var_53;
              MR_Word STATE_VARIABLE_OptionTable_54_54;

              {
                Var_53 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_53, 0) = ((MR_Box) (IntArg_45));
              }
              TypeCtorInfo_269_269 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
              mercury__map__set_4_p_0(TypeInfo_for_OptionType_266, TypeCtorInfo_269_269, Flag_3, ((MR_Box) (Var_53)), HeadVar__6_6, &STATE_VARIABLE_OptionTable_54_54);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *Result_7 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (STATE_VARIABLE_OptionTable_54_54));
              }
            }
            else
              mercury__getopt_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_4_p_0(Flag_3, HeadVar__2_2, Arg_44, Result_7);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__set__insert_3_p_0(TypeInfo_for_OptionType_266, Flag_3, STATE_VARIABLE_OptionsSet_0_8, STATE_VARIABLE_OptionsSet_9);
              if ((MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__error_1_p_0((MR_String) "string argument expected in getopt_io.process_option");
                  return;
                }
              }
              else
              {
                MR_Word TypeCtorInfo_270_270;
                MR_String Arg_64 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeArg_4, (MR_Integer) 0)));
                MR_Word Var_72;
                MR_Word STATE_VARIABLE_OptionTable_73_73;

                {
                  Var_72 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_72, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), Var_72, 1) = ((MR_Box) (Arg_64));
                }
                TypeCtorInfo_270_270 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
                mercury__map__set_4_p_0(TypeInfo_for_OptionType_266, TypeCtorInfo_270_270, Flag_3, ((MR_Box) (Var_72)), HeadVar__6_6, &STATE_VARIABLE_OptionTable_73_73);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *Result_7 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (STATE_VARIABLE_OptionTable_73_73));
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__set__insert_3_p_0(TypeInfo_for_OptionType_266, Flag_3, STATE_VARIABLE_OptionsSet_0_8, STATE_VARIABLE_OptionsSet_9);
              if ((MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__error_1_p_0((MR_String) "integer argument expected in getopt_io.process_option");
                  return;
                }
              }
              else
              {
                MR_String Arg_83 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeArg_4, (MR_Integer) 0)));
                MR_Integer IntArg_84;

                succeeded = mercury__string__to_int_2_p_0(Arg_83, &IntArg_84);
                if (succeeded)
                {
                  MR_Word TypeCtorInfo_271_271;
                  MR_Word Var_92;
                  MR_Word STATE_VARIABLE_OptionTable_93_93;
                  MR_Word Var_94;

                  {
                    Var_94 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_94, 0) = ((MR_Box) (IntArg_84));
                  }
                  {
                    Var_92 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_92, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), Var_92, 1) = ((MR_Box) (Var_94));
                  }
                  TypeCtorInfo_271_271 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
                  mercury__map__set_4_p_0(TypeInfo_for_OptionType_266, TypeCtorInfo_271_271, Flag_3, ((MR_Box) (Var_92)), HeadVar__6_6, &STATE_VARIABLE_OptionTable_93_93);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *Result_7 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (STATE_VARIABLE_OptionTable_93_93));
                  }
                }
                else
                  mercury__getopt_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_4_p_0(Flag_3, HeadVar__2_2, Arg_83, Result_7);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__set__insert_3_p_0(TypeInfo_for_OptionType_266, Flag_3, STATE_VARIABLE_OptionsSet_0_8, STATE_VARIABLE_OptionsSet_9);
              if ((MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__error_1_p_0((MR_String) "string argument expected in getopt_io.process_option");
                  return;
                }
              }
              else
              {
                MR_Word TypeCtorInfo_272_272;
                MR_Word Var_112;
                MR_Word STATE_VARIABLE_OptionTable_113_113;

                {
                  Var_112 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_112, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), Var_112, 1) = ((MR_Box) (MaybeArg_4));
                }
                TypeCtorInfo_272_272 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
                mercury__map__set_4_p_0(TypeInfo_for_OptionType_266, TypeCtorInfo_272_272, Flag_3, ((MR_Box) (Var_112)), HeadVar__6_6, &STATE_VARIABLE_OptionTable_113_113);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *Result_7 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (STATE_VARIABLE_OptionTable_113_113));
                }
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word List0_115 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));

              mercury__set__insert_3_p_0(TypeInfo_for_OptionType_266, Flag_3, STATE_VARIABLE_OptionsSet_0_8, STATE_VARIABLE_OptionsSet_9);
              if ((MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__error_1_p_0((MR_String) "acumulating argument expected in getopt_io.process_option");
                  return;
                }
              }
              else
              {
                MR_Word TypeCtorInfo_273_273;
                MR_Word TypeCtorInfo_274_274;
                MR_String Arg_124 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeArg_4, (MR_Integer) 0)));
                MR_Word List_125;
                MR_Word Var_133;
                MR_Word Var_134 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                MR_Word Var_135;
                MR_Word STATE_VARIABLE_OptionTable_136_136;

                {
                  Var_133 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_133, 0) = ((MR_Box) (Arg_124));
                  MR_hl_field(MR_mktag(1), Var_133, 1) = ((MR_Box) (Var_134));
                }
                TypeCtorInfo_273_273 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
                mercury__list__append_3_p_1(TypeCtorInfo_273_273, List0_115, Var_133, &List_125);
                {
                  Var_135 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_135, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(3), Var_135, 1) = ((MR_Box) (List_125));
                }
                TypeCtorInfo_274_274 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
                mercury__map__set_4_p_0(TypeInfo_for_OptionType_266, TypeCtorInfo_274_274, Flag_3, ((MR_Box) (Var_135)), HeadVar__6_6, &STATE_VARIABLE_OptionTable_136_136);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *Result_7 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (STATE_VARIABLE_OptionTable_136_136));
                }
              }
            }
            break;
        }
        break;
    }
  }
}

static void MR_CALL 
mercury__getopt_io__process_negated_option_7_p_0(
  MR_Word TypeInfo_for_OptionType_51,
  MR_String Option_8,
  MR_Box Flag_9,
  MR_Word OptionOps_10,
  MR_Word OptionTable0_11,
  MR_Word * Result_12,
  MR_Word STATE_VARIABLE_OptionsSet_0_23,
  MR_Word * STATE_VARIABLE_OptionsSet_24)
{
  {
    MR_bool succeeded;
    MR_Word OptionData_14;
    MR_Word TypeCtorInfo_52_52 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
    MR_Box conv0_OptionData_14;

    succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_OptionType_51, TypeCtorInfo_52_52, OptionTable0_11, Flag_9, &conv0_OptionData_14);
    if (succeeded)
    {
      OptionData_14 = ((MR_Word) conv0_OptionData_14);
      succeeded = MR_TRUE;
    }
    if (succeeded)
      switch (MR_tag((MR_Word) OptionData_14)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(OptionData_14)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 2:
            case (MR_Integer) 3:
            case (MR_Integer) 5:
              {
                MR_Word Error_22;
                MR_Word Var_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));

                {
                  Error_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Error_22, 0) = Flag_9;
                  MR_hl_field(MR_mktag(1), Error_22, 1) = ((MR_Box) (Option_8));
                  MR_hl_field(MR_mktag(1), Error_22, 2) = ((MR_Box) (Var_25));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *Result_12 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_22));
                }
                *STATE_VARIABLE_OptionsSet_24 = STATE_VARIABLE_OptionsSet_0_23;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word STATE_VARIABLE_OptionsSet_30_30;
                MR_Word Var_31;
                MR_Word V_5_84 = (MR_Word) STATE_VARIABLE_OptionsSet_0_23;
                MR_Word V_6_85;

                mercury__set_ordlist__insert_loop_3_p_0(TypeInfo_for_OptionType_51, V_5_84, Flag_9, &V_6_85);
                STATE_VARIABLE_OptionsSet_30_30 = (MR_Word) V_6_85;
                Var_31 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__getopt_io_scalar_common_8[0]);
                mercury__getopt_io__process_special_8_p_0(TypeInfo_for_OptionType_51, Option_8, Flag_9, Var_31, OptionOps_10, OptionTable0_11, Result_12, STATE_VARIABLE_OptionsSet_30_30, STATE_VARIABLE_OptionsSet_24);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word STATE_VARIABLE_OptionsSet_26_26;
                MR_Word Var_27;
                MR_Word Var_29;

                mercury__set__insert_3_p_0(TypeInfo_for_OptionType_51, Flag_9, STATE_VARIABLE_OptionsSet_0_23, &STATE_VARIABLE_OptionsSet_26_26);
                Var_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                Var_27 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__getopt_io_scalar_common_1[6]);
                mercury__getopt_io__process_special_8_p_0(TypeInfo_for_OptionType_51, Option_8, Flag_9, Var_27, OptionOps_10, OptionTable0_11, Result_12, STATE_VARIABLE_OptionsSet_26_26, STATE_VARIABLE_OptionsSet_24);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word TypeCtorInfo_53_53;
            MR_Word OptionTable_16;
            MR_Word Var_44;
            MR_Word V_5_74 = (MR_Word) STATE_VARIABLE_OptionsSet_0_23;
            MR_Word V_6_75;

            mercury__set_ordlist__insert_loop_3_p_0(TypeInfo_for_OptionType_51, V_5_74, Flag_9, &V_6_75);
            *STATE_VARIABLE_OptionsSet_24 = (MR_Word) V_6_75;
            Var_44 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__getopt_io_scalar_common_8[0]);
            TypeCtorInfo_53_53 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
            mercury__tree234__set_4_p_0(TypeInfo_for_OptionType_51, TypeCtorInfo_53_53, Flag_9, ((MR_Box) (Var_44)), OptionTable0_11, &OptionTable_16);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *Result_12 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (OptionTable_16));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word Error_22;
            MR_Word Var_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));

            {
              Error_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Error_22, 0) = Flag_9;
              MR_hl_field(MR_mktag(1), Error_22, 1) = ((MR_Box) (Option_8));
              MR_hl_field(MR_mktag(1), Error_22, 2) = ((MR_Box) (Var_25));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *Result_12 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_22));
            }
            *STATE_VARIABLE_OptionsSet_24 = STATE_VARIABLE_OptionsSet_0_23;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), OptionData_14, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word Error_22;
                MR_Word Var_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));

                {
                  Error_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Error_22, 0) = Flag_9;
                  MR_hl_field(MR_mktag(1), Error_22, 1) = ((MR_Box) (Option_8));
                  MR_hl_field(MR_mktag(1), Error_22, 2) = ((MR_Box) (Var_25));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *Result_12 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_22));
                }
                *STATE_VARIABLE_OptionsSet_24 = STATE_VARIABLE_OptionsSet_0_23;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word TypeCtorInfo_54_54;
                MR_Word Var_41;
                MR_Word Var_42;
                MR_Word OptionTable_47;
                MR_Word V_5_90 = (MR_Word) STATE_VARIABLE_OptionsSet_0_23;
                MR_Word V_6_91;

                mercury__set_ordlist__insert_loop_3_p_0(TypeInfo_for_OptionType_51, V_5_90, Flag_9, &V_6_91);
                *STATE_VARIABLE_OptionsSet_24 = (MR_Word) V_6_91;
                Var_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                Var_41 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__getopt_io_scalar_common_1[4]);
                TypeCtorInfo_54_54 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
                mercury__map__set_4_p_0(TypeInfo_for_OptionType_51, TypeCtorInfo_54_54, Flag_9, ((MR_Box) (Var_41)), OptionTable0_11, &OptionTable_47);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *Result_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (OptionTable_47));
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word TypeCtorInfo_55_55;
                MR_Word Var_38;
                MR_Word Var_39;
                MR_Word OptionTable_48;

                mercury__set__insert_3_p_0(TypeInfo_for_OptionType_51, Flag_9, STATE_VARIABLE_OptionsSet_0_23, STATE_VARIABLE_OptionsSet_24);
                Var_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                Var_38 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__getopt_io_scalar_common_1[5]);
                TypeCtorInfo_55_55 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
                mercury__map__set_4_p_0(TypeInfo_for_OptionType_51, TypeCtorInfo_55_55, Flag_9, ((MR_Box) (Var_38)), OptionTable0_11, &OptionTable_48);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *Result_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (OptionTable_48));
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word TypeCtorInfo_56_56;
                MR_Word Var_35;
                MR_Word Var_36;
                MR_Word OptionTable_49;
                MR_Word V_5_64 = (MR_Word) STATE_VARIABLE_OptionsSet_0_23;
                MR_Word V_6_65;

                mercury__set_ordlist__insert_loop_3_p_0(TypeInfo_for_OptionType_51, V_5_64, Flag_9, &V_6_65);
                *STATE_VARIABLE_OptionsSet_24 = (MR_Word) V_6_65;
                Var_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                Var_35 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__getopt_io_scalar_common_1[3]);
                TypeCtorInfo_56_56 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
                mercury__tree234__set_4_p_0(TypeInfo_for_OptionType_51, TypeCtorInfo_56_56, Flag_9, ((MR_Box) (Var_35)), OptionTable0_11, &OptionTable_49);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *Result_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (OptionTable_49));
                }
              }
              break;
          }
          break;
      }
    else
    {
      MR_Word Var_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      MR_Word Error_50;

      {
        Error_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), Error_50, 0) = Flag_9;
        MR_hl_field(MR_mktag(1), Error_50, 1) = ((MR_Box) (Option_8));
        MR_hl_field(MR_mktag(1), Error_50, 2) = ((MR_Box) (Var_46));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *Result_12 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_50));
      }
      *STATE_VARIABLE_OptionsSet_24 = STATE_VARIABLE_OptionsSet_0_23;
    }
  }
}

static void MR_CALL 
mercury__getopt_io__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_4_p_0(
  MR_Box Flag_5,
  MR_String Option_6,
  MR_String Arg_7,
  MR_Word * Result_8)
{
  {
    MR_Word Reason_9;
    MR_Word Error_10;

    {
      Reason_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Reason_9, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
      MR_hl_field(MR_mktag(3), Reason_9, 1) = ((MR_Box) (Arg_7));
    }
    {
      Error_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), Error_10, 0) = Flag_5;
      MR_hl_field(MR_mktag(1), Error_10, 1) = ((MR_Box) (Option_6));
      MR_hl_field(MR_mktag(1), Error_10, 2) = ((MR_Box) (Reason_9));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      *Result_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_10));
    }
  }
}

static void MR_CALL 
mercury__getopt_io__process_special_8_p_0(
  MR_Word TypeInfo_for_OptionType_54,
  MR_String Option_9,
  MR_Box Flag_10,
  MR_Word OptionData_11,
  MR_Word OptionOps_12,
  MR_Word OptionTable0_13,
  MR_Word * Result_14,
  MR_Word STATE_VARIABLE_OptionsSet_0_26,
  MR_Word * STATE_VARIABLE_OptionsSet_27)
{
  {
    MR_bool succeeded;
    MR_Word MaybeHandler_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptionOps_12, (MR_Integer) 2)));
    MR_Word Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptionOps_12, (MR_Integer) 0)));
    MR_Word Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptionOps_12, (MR_Integer) 1)));

    switch (MR_tag((MR_Word) MaybeHandler_16)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Var_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
          MR_Word Error_51;

          {
            Error_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Error_51, 0) = Flag_10;
            MR_hl_field(MR_mktag(1), Error_51, 1) = ((MR_Box) (Option_9));
            MR_hl_field(MR_mktag(1), Error_51, 2) = ((MR_Box) (Var_28));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *Result_14 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_51));
          }
          *STATE_VARIABLE_OptionsSet_27 = STATE_VARIABLE_OptionsSet_0_26;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Handler_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), MaybeHandler_16, (MR_Integer) 0)));
          MR_Word Result0_18;
          MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), Handler_17, (MR_Integer) 1)));
          MR_Box conv1_Result0_18;

          succeeded = func_0(((MR_Box) Handler_17), Flag_10, ((MR_Box) (OptionData_11)), ((MR_Box) (OptionTable0_13)), &conv1_Result0_18);
          if (succeeded)
          {
            Result0_18 = ((MR_Word) conv1_Result0_18);
            succeeded = MR_TRUE;
          }
          if (succeeded)
            if (((MR_tag((MR_Word) Result0_18)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_String HandlerMsg_20 = ((MR_String) (MR_hl_field(MR_mktag(1), Result0_18, (MR_Integer) 0)));
              MR_Word Reason_21;
              MR_Word Error_22;

              {
                Reason_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Reason_21, 0) = ((MR_Box) (HandlerMsg_20));
              }
              {
                Error_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Error_22, 0) = Flag_10;
                MR_hl_field(MR_mktag(1), Error_22, 1) = ((MR_Box) (Option_9));
                MR_hl_field(MR_mktag(1), Error_22, 2) = ((MR_Box) (Reason_21));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *Result_14 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_22));
              }
            }
            else
            {
              MR_Word OptionTable_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), Result0_18, (MR_Integer) 0)));

              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *Result_14 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (OptionTable_19));
              }
            }
          else
          {
            MR_Word Var_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
            MR_Word Error_32;

            {
              Error_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Error_32, 0) = Flag_10;
              MR_hl_field(MR_mktag(1), Error_32, 1) = ((MR_Box) (Option_9));
              MR_hl_field(MR_mktag(1), Error_32, 2) = ((MR_Box) (Var_31));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *Result_14 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_32));
            }
          }
          *STATE_VARIABLE_OptionsSet_27 = STATE_VARIABLE_OptionsSet_0_26;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word TrackHandler_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), MaybeHandler_16, (MR_Integer) 0)));
          MR_Word NewOptionsSet_24;
          MR_Word Result0_43;
          MR_bool MR_CALL (* func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), TrackHandler_23, (MR_Integer) 1)));
          MR_Box conv4_Result0_43;
          MR_Box conv3_NewOptionsSet_24;

          succeeded = func_2(((MR_Box) TrackHandler_23), Flag_10, ((MR_Box) (OptionData_11)), ((MR_Box) (OptionTable0_13)), &conv4_Result0_43, &conv3_NewOptionsSet_24);
          if (succeeded)
          {
            Result0_43 = ((MR_Word) conv4_Result0_43);
            NewOptionsSet_24 = ((MR_Word) conv3_NewOptionsSet_24);
            succeeded = MR_TRUE;
          }
          if (succeeded)
          {
            MR_Word V_4_58 = (MR_Word) NewOptionsSet_24;
            MR_Word V_5_59 = (MR_Word) STATE_VARIABLE_OptionsSet_0_26;
            MR_Word V_6_60;

            mercury__list__merge_and_remove_dups_3_p_0(TypeInfo_for_OptionType_54, V_4_58, V_5_59, &V_6_60);
            *STATE_VARIABLE_OptionsSet_27 = (MR_Word) V_6_60;
            if (((MR_tag((MR_Word) Result0_43)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_String TrackHandlerMsg_25 = ((MR_String) (MR_hl_field(MR_mktag(1), Result0_43, (MR_Integer) 0)));
              MR_Word Reason_34;
              MR_Word Error_35;

              {
                Reason_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Reason_34, 0) = ((MR_Box) (TrackHandlerMsg_25));
              }
              {
                Error_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Error_35, 0) = Flag_10;
                MR_hl_field(MR_mktag(1), Error_35, 1) = ((MR_Box) (Option_9));
                MR_hl_field(MR_mktag(1), Error_35, 2) = ((MR_Box) (Reason_34));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *Result_14 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_35));
              }
            }
            else
            {
              MR_Word OptionTable_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), Result0_43, (MR_Integer) 0)));

              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *Result_14 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (OptionTable_33));
              }
            }
          }
          else
          {
            MR_Word Var_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
            MR_Word Error_42;

            {
              Error_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Error_42, 0) = Flag_10;
              MR_hl_field(MR_mktag(1), Error_42, 1) = ((MR_Box) (Option_9));
              MR_hl_field(MR_mktag(1), Error_42, 2) = ((MR_Box) (Var_30));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *Result_14 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_42));
            }
            *STATE_VARIABLE_OptionsSet_27 = STATE_VARIABLE_OptionsSet_0_26;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
mercury__getopt_io__init_option_table_multi_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;

    mercury__list__cons_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), wrapper_arg_1, ((MR_Word) wrapper_arg_2), &conv1_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
  }
}

static void MR_CALL 
mercury__getopt_io__init_option_table_multi_2_p_0_1(
  void * env_ptr_arg)
{
  {
    struct mercury__getopt_io__init_option_table_multi_2_p_0_2_env_0_s * env_ptr = (struct mercury__getopt_io__init_option_table_multi_2_p_0_2_env_0_s *) env_ptr_arg;

    *((env_ptr)->mercury__getopt_io__init_option_table_multi_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->mercury__getopt_io__init_option_table_multi_2_p_0_2_env_0__conv0_LambdaHeadVar__1_10));
    ((env_ptr)->mercury__getopt_io__init_option_table_multi_2_p_0_2_env_0__cont)((env_ptr)->mercury__getopt_io__init_option_table_multi_2_p_0_2_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
mercury__getopt_io__init_option_table_multi_2_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mercury__getopt_io__init_option_table_multi_2_p_0_2_env_0_s env;

    (env).mercury__getopt_io__init_option_table_multi_2_p_0_2_env_0__wrapper_arg_1 = wrapper_arg_1;
    (env).mercury__getopt_io__init_option_table_multi_2_p_0_2_env_0__cont = cont;
    (env).mercury__getopt_io__init_option_table_multi_2_p_0_2_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Box closure = closure_arg;

      mercury__getopt_io__IntroducedFrom__pred__init_option_table_multi__443__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), &(env).mercury__getopt_io__init_option_table_multi_2_p_0_2_env_0__conv0_LambdaHeadVar__1_10, mercury__getopt_io__init_option_table_multi_2_p_0_1, &env);
    }
  }
}

void MR_CALL 
mercury__getopt_io__init_option_table_multi_2_p_0(
  MR_Word TypeInfo_for_OptionType_12,
  MR_Word OptionDefaultsPred_3,
  MR_Word * OptionTable_4)
{
  {
    MR_Word TypeCtorInfo_13_13;
    MR_Word TypeCtorInfo_14_14;
    MR_Word TypeInfo_15_15;
    MR_Word OptionDefaultsList_8;
    MR_Word Var_9;
    MR_Word V_5_18;
    MR_Word V_5_73;
    MR_Word TypeCtorInfo_13_31;
    MR_Word TypeInfo_14_32;
    MR_Word V_6_19;
    MR_Word V_6_24;
    MR_Word V_7_26;
    MR_Word V_5_27;
    MR_Integer V_5_50;
    MR_Box conv2_V_5_27;
    MR_Word conv3_V_5_18;

    {
      Var_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_9, 0) = ((MR_Box) (&mercury__getopt_io_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_9, 1) = ((MR_Box) (mercury__getopt_io__init_option_table_multi_2_p_0_2));
      MR_hl_field(MR_mktag(0), Var_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_9, 3) = ((MR_Box) (TypeInfo_for_OptionType_12));
      MR_hl_field(MR_mktag(0), Var_9, 4) = ((MR_Box) (OptionDefaultsPred_3));
    }
    TypeCtorInfo_14_14 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
    TypeCtorInfo_13_13 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
    {
      TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_15_15, 0) = ((MR_Box) (TypeCtorInfo_14_14));
      MR_hl_field(MR_mktag(0), TypeInfo_15_15, 1) = ((MR_Box) (TypeInfo_for_OptionType_12));
      MR_hl_field(MR_mktag(0), TypeInfo_15_15, 2) = ((MR_Box) (TypeCtorInfo_13_13));
    }
    {
      V_6_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), V_6_24, 0) = ((MR_Box) (&mercury__getopt_io_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), V_6_24, 1) = ((MR_Box) (mercury__getopt_io__init_option_table_multi_2_p_0_3));
      MR_hl_field(MR_mktag(0), V_6_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), V_6_24, 3) = ((MR_Box) (TypeInfo_15_15));
    }
    V_7_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    TypeCtorInfo_13_31 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    {
      TypeInfo_14_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_14_32, 0) = ((MR_Box) (TypeCtorInfo_13_31));
      MR_hl_field(MR_mktag(0), TypeInfo_14_32, 1) = ((MR_Box) (TypeInfo_15_15));
    }
    mercury__solutions__builtin_aggregate_4_p_0(TypeInfo_15_15, TypeInfo_14_32, (MR_Word) Var_9, (MR_Word) V_6_24, ((MR_Box) (V_7_26)), &conv2_V_5_27);
    V_5_27 = ((MR_Word) conv2_V_5_27);
    if ((V_5_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "solutions", (MR_String) "predicate \140solutions.assert_num_solutions\'/3", (MR_String) "no solutions");
        return;
      }
    }
    else
      V_6_19 = V_5_27;
    mercury__list__length_acc_3_p_0(TypeInfo_15_15, (MR_Word) V_6_19, (MR_Integer) 0, &V_5_50);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_15_15, V_5_50, (MR_Word) V_6_19, &conv3_V_5_18);
    V_5_18 = (MR_Word) conv3_V_5_18;
    if ((V_5_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "solutions", (MR_String) "predicate \140solutions.assert_num_solutions\'/3", (MR_String) "no solutions");
        return;
      }
    }
    else
      OptionDefaultsList_8 = V_5_18;
    V_5_73 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__tree234__assoc_list_to_tree234_acc_3_p_0(TypeInfo_for_OptionType_12, TypeCtorInfo_13_13, OptionDefaultsList_8, V_5_73, OptionTable_4);
  }
}

static void MR_CALL 
mercury__getopt_io__init_option_table_2_p_0_3(
  MR_Box closure_arg,
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box * wrapper_arg_3)
{
  {
    MR_Box closure = closure_arg;
    MR_Word conv1_HeadVar__3_3;

    mercury__list__cons_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), wrapper_arg_1, ((MR_Word) wrapper_arg_2), &conv1_HeadVar__3_3);
    *wrapper_arg_3 = ((MR_Box) (conv1_HeadVar__3_3));
  }
}

static void MR_CALL 
mercury__getopt_io__init_option_table_2_p_0_1(
  void * env_ptr_arg)
{
  {
    struct mercury__getopt_io__init_option_table_2_p_0_2_env_0_s * env_ptr = (struct mercury__getopt_io__init_option_table_2_p_0_2_env_0_s *) env_ptr_arg;

    *((env_ptr)->mercury__getopt_io__init_option_table_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((env_ptr)->mercury__getopt_io__init_option_table_2_p_0_2_env_0__conv0_LambdaHeadVar__1_10));
    ((env_ptr)->mercury__getopt_io__init_option_table_2_p_0_2_env_0__cont)((env_ptr)->mercury__getopt_io__init_option_table_2_p_0_2_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
mercury__getopt_io__init_option_table_2_p_0_2(
  MR_Box closure_arg,
  MR_Box * wrapper_arg_1,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mercury__getopt_io__init_option_table_2_p_0_2_env_0_s env;

    (env).mercury__getopt_io__init_option_table_2_p_0_2_env_0__wrapper_arg_1 = wrapper_arg_1;
    (env).mercury__getopt_io__init_option_table_2_p_0_2_env_0__cont = cont;
    (env).mercury__getopt_io__init_option_table_2_p_0_2_env_0__cont_env_ptr = cont_env_ptr;
    {
      MR_Box closure = closure_arg;

      mercury__getopt_io__IntroducedFrom__pred__init_option_table__436__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), &(env).mercury__getopt_io__init_option_table_2_p_0_2_env_0__conv0_LambdaHeadVar__1_10, mercury__getopt_io__init_option_table_2_p_0_1, &env);
    }
  }
}

void MR_CALL 
mercury__getopt_io__init_option_table_2_p_0(
  MR_Word TypeInfo_for_OptionType_12,
  MR_Word OptionDefaultsPred_3,
  MR_Word * OptionTable_4)
{
  {
    MR_Word TypeCtorInfo_13_13;
    MR_Word TypeCtorInfo_14_14;
    MR_Word TypeInfo_15_15;
    MR_Word OptionDefaultsList_8;
    MR_Word Var_9;
    MR_Word V_5_73;
    MR_Word TypeCtorInfo_13_31;
    MR_Word TypeInfo_14_32;
    MR_Word V_6_19;
    MR_Word V_6_24;
    MR_Word V_7_26;
    MR_Integer V_5_50;
    MR_Box conv2_V_6_19;
    MR_Word conv3_OptionDefaultsList_8;

    {
      Var_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Var_9, 0) = ((MR_Box) (&mercury__getopt_io_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_9, 1) = ((MR_Box) (mercury__getopt_io__init_option_table_2_p_0_2));
      MR_hl_field(MR_mktag(0), Var_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_9, 3) = ((MR_Box) (TypeInfo_for_OptionType_12));
      MR_hl_field(MR_mktag(0), Var_9, 4) = ((MR_Box) (OptionDefaultsPred_3));
    }
    TypeCtorInfo_14_14 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
    TypeCtorInfo_13_13 = (MR_Word) &mercury__getopt_io__getopt_io__type_ctor_info_option_data_0;
    {
      TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_15_15, 0) = ((MR_Box) (TypeCtorInfo_14_14));
      MR_hl_field(MR_mktag(0), TypeInfo_15_15, 1) = ((MR_Box) (TypeInfo_for_OptionType_12));
      MR_hl_field(MR_mktag(0), TypeInfo_15_15, 2) = ((MR_Box) (TypeCtorInfo_13_13));
    }
    {
      V_6_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), V_6_24, 0) = ((MR_Box) (&mercury__getopt_io_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), V_6_24, 1) = ((MR_Box) (mercury__getopt_io__init_option_table_2_p_0_3));
      MR_hl_field(MR_mktag(0), V_6_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), V_6_24, 3) = ((MR_Box) (TypeInfo_15_15));
    }
    V_7_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    TypeCtorInfo_13_31 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    {
      TypeInfo_14_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_14_32, 0) = ((MR_Box) (TypeCtorInfo_13_31));
      MR_hl_field(MR_mktag(0), TypeInfo_14_32, 1) = ((MR_Box) (TypeInfo_15_15));
    }
    mercury__solutions__builtin_aggregate_4_p_7(TypeInfo_15_15, TypeInfo_14_32, (MR_Word) Var_9, (MR_Word) V_6_24, ((MR_Box) (V_7_26)), &conv2_V_6_19);
    V_6_19 = ((MR_Word) conv2_V_6_19);
    mercury__list__length_acc_3_p_0(TypeInfo_15_15, (MR_Word) V_6_19, (MR_Integer) 0, &V_5_50);
    mercury__list__merge_sort_and_remove_dups_3_p_0(TypeInfo_15_15, V_5_50, (MR_Word) V_6_19, &conv3_OptionDefaultsList_8);
    OptionDefaultsList_8 = (MR_Word) conv3_OptionDefaultsList_8;
    V_5_73 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__tree234__assoc_list_to_tree234_acc_3_p_0(TypeInfo_for_OptionType_12, TypeCtorInfo_13_13, OptionDefaultsList_8, V_5_73, OptionTable_4);
  }
}

static MR_bool MR_CALL 
mercury__getopt_io____Unify____maybe_option_table_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__getopt_io____Unify____maybe_option_table_1_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    return succeeded;
  }
}

static void MR_CALL 
mercury__getopt_io____Compare____maybe_option_table_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__getopt_io____Compare____maybe_option_table_1_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__getopt_io____Unify____maybe_option_table_se_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__getopt_io____Unify____maybe_option_table_se_1_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    return succeeded;
  }
}

static void MR_CALL 
mercury__getopt_io____Compare____maybe_option_table_se_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__getopt_io____Compare____maybe_option_table_se_1_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__getopt_io____Unify____option_data_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__getopt_io____Unify____option_data_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mercury__getopt_io____Compare____option_data_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__getopt_io____Compare____option_data_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__getopt_io____Unify____option_error_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__getopt_io____Unify____option_error_1_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    return succeeded;
  }
}

static void MR_CALL 
mercury__getopt_io____Compare____option_error_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__getopt_io____Compare____option_error_1_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__getopt_io____Unify____option_error_reason_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__getopt_io____Unify____option_error_reason_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mercury__getopt_io____Compare____option_error_reason_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__getopt_io____Compare____option_error_reason_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__getopt_io____Unify____option_ops_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__getopt_io____Unify____option_ops_1_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    return succeeded;
  }
}

static void MR_CALL 
mercury__getopt_io____Compare____option_ops_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__getopt_io____Compare____option_ops_1_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__getopt_io____Unify____option_ops_internal_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__getopt_io____Unify____option_ops_internal_1_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    return succeeded;
  }
}

static void MR_CALL 
mercury__getopt_io____Compare____option_ops_internal_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__getopt_io____Compare____option_ops_internal_1_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__getopt_io____Unify____option_ops_special_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__getopt_io____Unify____option_ops_special_1_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    return succeeded;
  }
}

static void MR_CALL 
mercury__getopt_io____Compare____option_ops_special_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__getopt_io____Compare____option_ops_special_1_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__getopt_io____Unify____option_ops_track_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__getopt_io____Unify____option_ops_track_1_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    return succeeded;
  }
}

static void MR_CALL 
mercury__getopt_io____Compare____option_ops_track_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__getopt_io____Compare____option_ops_track_1_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__getopt_io____Unify____option_table_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__getopt_io____Unify____option_table_1_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    return succeeded;
  }
}

static void MR_CALL 
mercury__getopt_io____Compare____option_table_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__getopt_io____Compare____option_table_1_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__getopt_io____Unify____special_data_0_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2)
{
  {
    MR_bool succeeded;

    succeeded = mercury__getopt_io____Unify____special_data_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
    return succeeded;
  }
}

static void MR_CALL 
mercury__getopt_io____Compare____special_data_0_0_10001(
  MR_Box * wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__getopt_io____Compare____special_data_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    *wrapper_arg_1 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

void mercury__getopt_io__init(void)
{
}

void mercury__getopt_io__init_type_tables(void)
{
	static MR_bool initialised = MR_FALSE;
	if (initialised) return;
	initialised = MR_TRUE;

	MR_register_type_ctor_info(&mercury__getopt_io__getopt_io__type_ctor_info_maybe_option_table_1);
	MR_register_type_ctor_info(&mercury__getopt_io__getopt_io__type_ctor_info_maybe_option_table_se_1);
	MR_register_type_ctor_info(&mercury__getopt_io__getopt_io__type_ctor_info_option_data_0);
	MR_register_type_ctor_info(&mercury__getopt_io__getopt_io__type_ctor_info_option_error_1);
	MR_register_type_ctor_info(&mercury__getopt_io__getopt_io__type_ctor_info_option_error_reason_0);
	MR_register_type_ctor_info(&mercury__getopt_io__getopt_io__type_ctor_info_option_ops_1);
	MR_register_type_ctor_info(&mercury__getopt_io__getopt_io__type_ctor_info_option_ops_internal_1);
	MR_register_type_ctor_info(&mercury__getopt_io__getopt_io__type_ctor_info_option_ops_special_1);
	MR_register_type_ctor_info(&mercury__getopt_io__getopt_io__type_ctor_info_option_ops_track_1);
	MR_register_type_ctor_info(&mercury__getopt_io__getopt_io__type_ctor_info_option_table_1);
	MR_register_type_ctor_info(&mercury__getopt_io__getopt_io__type_ctor_info_special_data_0);
}

void mercury__getopt_io__init_debugger(void)
{
	MR_fatal_error("debugger initialization in MLDS grade");
}

// Ensure everything is compiled with the same grade.
const char *mercury__getopt_io__grade_check(void)
{
    return &MR_GRADE_VAR;
}

// :- end_module getopt_io.
