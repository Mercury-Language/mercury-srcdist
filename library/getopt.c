/*
** Automatically generated from `getopt.m'
** by the Mercury compiler,
** version rotd-2017-08-08
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


/* :- module getopt. */
/* :- implementation. */

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



struct mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0_s {
  MR_Word * mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0__LambdaHeadVar__1_10;
  MR_Cont mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0__cont;
  void * mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0__cont_env_ptr;
  MR_Box mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0__Option_6;
  MR_Word mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0__OptionData_7;
  MR_Box mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0__conv1_OptionData_7;
};

struct mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0_s {
  MR_Word * mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0__LambdaHeadVar__1_10;
  MR_Cont mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0__cont;
  void * mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0__cont_env_ptr;
  MR_Box mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0__Option_6;
  MR_Word mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0__OptionData_7;
  MR_Box mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0__conv1_OptionData_7;
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

static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt__getopt__pti_option_ops_special_1__pseudo_1;

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_internal_1_0[3];

static const MR_ConstString mercury__getopt__getopt__field_names_option_ops_internal_1_0[3];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_internal_1_0;

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_internal_1_0[1];

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_ops_internal_1[1];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_ops_internal_1[1];

static const MR_Integer mercury__getopt__getopt__functor_number_map_option_ops_internal_1[1];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_special_1_0;

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_special_1_1[1];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_special_1_1;

static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt__set_ordlist__pti_set_ordlist_1__pseudo_1;

static const MR_VA_PseudoTypeInfo_Struct5 mercury__getopt____vpti_pred_5__pseudo_1__plain_getopt__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0__pseudo_getopt__pti_maybe_option_table_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1;

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_special_1_2[1];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_special_1_2;

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_special_1_0[1];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_special_1_1[1];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_special_1_2[1];

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_ops_special_1[3];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_ops_special_1[3];

static const MR_Integer mercury__getopt__getopt__functor_number_map_option_ops_special_1[3];

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_track_1_0[3];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_track_1_0;

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_track_1_0[1];

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_ops_track_1[1];

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_ops_track_1[1];

static const MR_Integer mercury__getopt__getopt__functor_number_map_option_ops_track_1[1];

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_special_data_0_0;

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_special_data_0_1[1];

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
mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_2(
  void * mercury__getopt__env_ptr_arg);

static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_1(
  void * mercury__getopt__env_ptr_arg);

static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0(
  MR_Word mercury__getopt__TypeInfo_for_OptionType_12,
  MR_Word mercury__getopt__OptionDefaultsPred_3,
  MR_Word * mercury__getopt__LambdaHeadVar__1_10,
  MR_Cont mercury__getopt__cont,
  void * mercury__getopt__cont_env_ptr);

static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_2(
  void * mercury__getopt__env_ptr_arg);

static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_1(
  void * mercury__getopt__env_ptr_arg);

static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0(
  MR_Word mercury__getopt__TypeInfo_for_OptionType_12,
  MR_Word mercury__getopt__OptionDefaultsPred_3,
  MR_Word * mercury__getopt__LambdaHeadVar__1_10,
  MR_Cont mercury__getopt__cont,
  void * mercury__getopt__cont_env_ptr);

static void MR_CALL 
mercury__getopt__handle_long_option_13_p_0(
  MR_Word mercury__getopt__TypeInfo_for_OptionType_48,
  MR_String mercury__getopt__Option_14,
  MR_Box mercury__getopt__Flag_15,
  MR_Word mercury__getopt__OptionData_16,
  MR_Word mercury__getopt__MaybeOptionArg0_17,
  MR_Word mercury__getopt__Args0_18,
  MR_Word * mercury__getopt__Args_19,
  MR_Word mercury__getopt__OptionOps_20,
  MR_Word mercury__getopt__OptionArgs0_21,
  MR_Word * mercury__getopt__OptionArgs_22,
  MR_Word mercury__getopt__OptionTable0_23,
  MR_Word * mercury__getopt__Result_24,
  MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_0_37,
  MR_Word * mercury__getopt__STATE_VARIABLE_OptionsSet_38);

static void MR_CALL 
mercury__getopt__process_negated_option_7_p_0(
  MR_Word mercury__getopt__TypeInfo_for_OptionType_51,
  MR_String mercury__getopt__Option_8,
  MR_Box mercury__getopt__Flag_9,
  MR_Word mercury__getopt__OptionOps_10,
  MR_Word mercury__getopt__OptionTable0_11,
  MR_Word * mercury__getopt__Result_12,
  MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_0_23,
  MR_Word * mercury__getopt__STATE_VARIABLE_OptionsSet_24);

static void MR_CALL 
mercury__getopt__handle_short_options_10_p_0(
  MR_Word mercury__getopt__TypeInfo_for_OptionType_60,
  MR_Word mercury__getopt__HeadVar__1_1,
  MR_Word mercury__getopt__OptionOps_2,
  MR_Word mercury__getopt__HeadVar__3_3,
  MR_Word * mercury__getopt__Args_4,
  MR_Word mercury__getopt__HeadVar__5_5,
  MR_Word * mercury__getopt__OptionArgs_6,
  MR_Word mercury__getopt__HeadVar__7_7,
  MR_Word * mercury__getopt__HeadVar__8_8,
  MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_0_9,
  MR_Word * mercury__getopt__STATE_VARIABLE_OptionsSet_10);

static void MR_CALL 
mercury__getopt__process_option_9_p_0(
  MR_Word mercury__getopt__TypeInfo_for_OptionType_204,
  MR_Word mercury__getopt__HeadVar__1_1,
  MR_String mercury__getopt__HeadVar__2_2,
  MR_Box mercury__getopt__Flag_3,
  MR_Word mercury__getopt__MaybeArg_4,
  MR_Word mercury__getopt__HeadVar__5_5,
  MR_Word mercury__getopt__HeadVar__6_6,
  MR_Word * mercury__getopt__Result_7,
  MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_0_8,
  MR_Word * mercury__getopt__STATE_VARIABLE_OptionsSet_9);

static void MR_CALL 
mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_4_p_0(
  MR_Box mercury__getopt__Flag_5,
  MR_String mercury__getopt__Option_6,
  MR_String mercury__getopt__Arg_7,
  MR_Word * mercury__getopt__Result_8);

static void MR_CALL 
mercury__getopt__process_special_8_p_0(
  MR_Word mercury__getopt__TypeInfo_for_OptionType_54,
  MR_String mercury__getopt__Option_9,
  MR_Box mercury__getopt__Flag_10,
  MR_Word mercury__getopt__OptionData_11,
  MR_Word mercury__getopt__OptionOps_12,
  MR_Word mercury__getopt__OptionTable0_13,
  MR_Word * mercury__getopt__Result_14,
  MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_0_26,
  MR_Word * mercury__getopt__STATE_VARIABLE_OptionsSet_27);

static void MR_CALL 
mercury__getopt__init_option_table_multi_2_p_0_3(
  MR_Box mercury__getopt__closure_arg,
  MR_Box mercury__getopt__wrapper_arg_1,
  MR_Box mercury__getopt__wrapper_arg_2,
  MR_Box * mercury__getopt__wrapper_arg_3);

static void MR_CALL 
mercury__getopt__init_option_table_multi_2_p_0_1(
  void * mercury__getopt__env_ptr_arg);

static void MR_CALL 
mercury__getopt__init_option_table_multi_2_p_0_2(
  MR_Box mercury__getopt__closure_arg,
  MR_Box * mercury__getopt__wrapper_arg_1,
  MR_Cont mercury__getopt__cont,
  void * mercury__getopt__cont_env_ptr);

static void MR_CALL 
mercury__getopt__init_option_table_2_p_0_3(
  MR_Box mercury__getopt__closure_arg,
  MR_Box mercury__getopt__wrapper_arg_1,
  MR_Box mercury__getopt__wrapper_arg_2,
  MR_Box * mercury__getopt__wrapper_arg_3);

static void MR_CALL 
mercury__getopt__init_option_table_2_p_0_1(
  void * mercury__getopt__env_ptr_arg);

static void MR_CALL 
mercury__getopt__init_option_table_2_p_0_2(
  MR_Box mercury__getopt__closure_arg,
  MR_Box * mercury__getopt__wrapper_arg_1,
  MR_Cont mercury__getopt__cont,
  void * mercury__getopt__cont_env_ptr);

static MR_bool MR_CALL 
mercury__getopt____Unify____maybe_option_table_1_0_10001(
  MR_Box mercury__getopt__wrapper_arg_1,
  MR_Box mercury__getopt__wrapper_arg_2,
  MR_Box mercury__getopt__wrapper_arg_3);

static void MR_CALL 
mercury__getopt____Compare____maybe_option_table_1_0_10001(
  MR_Box mercury__getopt__wrapper_arg_1,
  MR_Box * mercury__getopt__wrapper_arg_2,
  MR_Box mercury__getopt__wrapper_arg_3,
  MR_Box mercury__getopt__wrapper_arg_4);

static MR_bool MR_CALL 
mercury__getopt____Unify____maybe_option_table_se_1_0_10001(
  MR_Box mercury__getopt__wrapper_arg_1,
  MR_Box mercury__getopt__wrapper_arg_2,
  MR_Box mercury__getopt__wrapper_arg_3);

static void MR_CALL 
mercury__getopt____Compare____maybe_option_table_se_1_0_10001(
  MR_Box mercury__getopt__wrapper_arg_1,
  MR_Box * mercury__getopt__wrapper_arg_2,
  MR_Box mercury__getopt__wrapper_arg_3,
  MR_Box mercury__getopt__wrapper_arg_4);

static MR_bool MR_CALL 
mercury__getopt____Unify____option_data_0_0_10001(
  MR_Box mercury__getopt__wrapper_arg_1,
  MR_Box mercury__getopt__wrapper_arg_2);

static void MR_CALL 
mercury__getopt____Compare____option_data_0_0_10001(
  MR_Box * mercury__getopt__wrapper_arg_1,
  MR_Box mercury__getopt__wrapper_arg_2,
  MR_Box mercury__getopt__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__getopt____Unify____option_error_1_0_10001(
  MR_Box mercury__getopt__wrapper_arg_1,
  MR_Box mercury__getopt__wrapper_arg_2,
  MR_Box mercury__getopt__wrapper_arg_3);

static void MR_CALL 
mercury__getopt____Compare____option_error_1_0_10001(
  MR_Box mercury__getopt__wrapper_arg_1,
  MR_Box * mercury__getopt__wrapper_arg_2,
  MR_Box mercury__getopt__wrapper_arg_3,
  MR_Box mercury__getopt__wrapper_arg_4);

static MR_bool MR_CALL 
mercury__getopt____Unify____option_error_reason_0_0_10001(
  MR_Box mercury__getopt__wrapper_arg_1,
  MR_Box mercury__getopt__wrapper_arg_2);

static void MR_CALL 
mercury__getopt____Compare____option_error_reason_0_0_10001(
  MR_Box * mercury__getopt__wrapper_arg_1,
  MR_Box mercury__getopt__wrapper_arg_2,
  MR_Box mercury__getopt__wrapper_arg_3);

static MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_1_0_10001(
  MR_Box mercury__getopt__wrapper_arg_1,
  MR_Box mercury__getopt__wrapper_arg_2,
  MR_Box mercury__getopt__wrapper_arg_3);

static void MR_CALL 
mercury__getopt____Compare____option_ops_1_0_10001(
  MR_Box mercury__getopt__wrapper_arg_1,
  MR_Box * mercury__getopt__wrapper_arg_2,
  MR_Box mercury__getopt__wrapper_arg_3,
  MR_Box mercury__getopt__wrapper_arg_4);

static MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_internal_1_0_10001(
  MR_Box mercury__getopt__wrapper_arg_1,
  MR_Box mercury__getopt__wrapper_arg_2,
  MR_Box mercury__getopt__wrapper_arg_3);

static void MR_CALL 
mercury__getopt____Compare____option_ops_internal_1_0_10001(
  MR_Box mercury__getopt__wrapper_arg_1,
  MR_Box * mercury__getopt__wrapper_arg_2,
  MR_Box mercury__getopt__wrapper_arg_3,
  MR_Box mercury__getopt__wrapper_arg_4);

static MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_special_1_0_10001(
  MR_Box mercury__getopt__wrapper_arg_1,
  MR_Box mercury__getopt__wrapper_arg_2,
  MR_Box mercury__getopt__wrapper_arg_3);

static void MR_CALL 
mercury__getopt____Compare____option_ops_special_1_0_10001(
  MR_Box mercury__getopt__wrapper_arg_1,
  MR_Box * mercury__getopt__wrapper_arg_2,
  MR_Box mercury__getopt__wrapper_arg_3,
  MR_Box mercury__getopt__wrapper_arg_4);

static MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_track_1_0_10001(
  MR_Box mercury__getopt__wrapper_arg_1,
  MR_Box mercury__getopt__wrapper_arg_2,
  MR_Box mercury__getopt__wrapper_arg_3);

static void MR_CALL 
mercury__getopt____Compare____option_ops_track_1_0_10001(
  MR_Box mercury__getopt__wrapper_arg_1,
  MR_Box * mercury__getopt__wrapper_arg_2,
  MR_Box mercury__getopt__wrapper_arg_3,
  MR_Box mercury__getopt__wrapper_arg_4);

static MR_bool MR_CALL 
mercury__getopt____Unify____option_table_1_0_10001(
  MR_Box mercury__getopt__wrapper_arg_1,
  MR_Box mercury__getopt__wrapper_arg_2,
  MR_Box mercury__getopt__wrapper_arg_3);

static void MR_CALL 
mercury__getopt____Compare____option_table_1_0_10001(
  MR_Box mercury__getopt__wrapper_arg_1,
  MR_Box * mercury__getopt__wrapper_arg_2,
  MR_Box mercury__getopt__wrapper_arg_3,
  MR_Box mercury__getopt__wrapper_arg_4);

static MR_bool MR_CALL 
mercury__getopt____Unify____special_data_0_0_10001(
  MR_Box mercury__getopt__wrapper_arg_1,
  MR_Box mercury__getopt__wrapper_arg_2);

static void MR_CALL 
mercury__getopt____Compare____special_data_0_0_10001(
  MR_Box * mercury__getopt__wrapper_arg_1,
  MR_Box mercury__getopt__wrapper_arg_2,
  MR_Box mercury__getopt__wrapper_arg_3);


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
    ((MR_Box) (MR_Word) ((MR_Integer) 3)),
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
    ((MR_Box) (MR_Word) ((MR_Integer) 4)),
    ((MR_Box) (&mercury__private_builtin__private_builtin__type_ctor_info_type_info_0)),
    ((MR_Box) (MR_Word) ((MR_Integer) 1)),
    ((MR_Box) (&mercury__getopt__list__pti_list_1__pseudo_1)),
    ((MR_Box) (&mercury__getopt__list__pti_list_1__pseudo_1))
  },
};

static /* final */ const MR_Box mercury__getopt_scalar_common_8[2][1] = {
  /* row 0 */
  {
    ((MR_Box) ((MR_Integer) 1))
  },
  /* row 1 */
  {
    ((MR_Box) ((MR_Integer) 0))
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



static const MR_VA_PseudoTypeInfo_Struct2 mercury__getopt____vpti_pred_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__getopt__getopt__type_ctor_info_option_data_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__getopt__pair__pti_pair_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0 = {
  &mercury__pair__pair__type_ctor_info_pair_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__getopt__getopt__type_ctor_info_option_data_0
  }
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt__list__pti_list_1__pseudo_1 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_FA_PseudoTypeInfo_Struct2 mercury__getopt__tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0 = {
  &mercury__tree234__tree234__type_ctor_info_tree234_2,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__getopt__getopt__type_ctor_info_option_data_0
  }
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_maybe_option_table_1_0[1] = {
  (MR_PseudoTypeInfo) &mercury__getopt__tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_maybe_option_table_1_0 = {
  (MR_String) "ok",
  (MR_Integer) 1,
  (MR_Integer) 1,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__getopt__getopt__field_types_maybe_option_table_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_maybe_option_table_1_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_maybe_option_table_1_1 = {
  (MR_String) "error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__getopt__getopt__field_types_maybe_option_table_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_maybe_option_table_1_0[1] = {
  &mercury__getopt__getopt__du_functor_desc_maybe_option_table_1_0
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_maybe_option_table_1_1[1] = {
  &mercury__getopt__getopt__du_functor_desc_maybe_option_table_1_1
};

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_maybe_option_table_1[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_maybe_option_table_1_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_maybe_option_table_1_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt____Unify____maybe_option_table_1_0_10001)),
  ((MR_Box) (mercury__getopt____Compare____maybe_option_table_1_0_10001)),
  (MR_String) "getopt",
  (MR_String) "maybe_option_table",
  {     mercury__getopt__getopt__du_name_ordered_maybe_option_table_1 },
  {     mercury__getopt__getopt__du_ptag_ordered_maybe_option_table_1 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__getopt__getopt__functor_number_map_maybe_option_table_1
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_maybe_option_table_se_1_0[1] = {
  (MR_PseudoTypeInfo) &mercury__getopt__tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_maybe_option_table_se_1_0 = {
  (MR_String) "ok",
  (MR_Integer) 1,
  (MR_Integer) 1,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__getopt__getopt__field_types_maybe_option_table_se_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt__getopt__pti_option_error_1__pseudo_1 = {
  &mercury__getopt__getopt__type_ctor_info_option_error_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_maybe_option_table_se_1_1[1] = {
  (MR_PseudoTypeInfo) &mercury__getopt__getopt__pti_option_error_1__pseudo_1
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_maybe_option_table_se_1_1 = {
  (MR_String) "error",
  (MR_Integer) 1,
  (MR_Integer) 1,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__getopt__getopt__field_types_maybe_option_table_se_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_maybe_option_table_se_1_0[1] = {
  &mercury__getopt__getopt__du_functor_desc_maybe_option_table_se_1_0
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_maybe_option_table_se_1_1[1] = {
  &mercury__getopt__getopt__du_functor_desc_maybe_option_table_se_1_1
};

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_maybe_option_table_se_1[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_maybe_option_table_se_1_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_maybe_option_table_se_1_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt____Unify____maybe_option_table_se_1_0_10001)),
  ((MR_Box) (mercury__getopt____Compare____maybe_option_table_se_1_0_10001)),
  (MR_String) "getopt",
  (MR_String) "maybe_option_table_se",
  {     mercury__getopt__getopt__du_name_ordered_maybe_option_table_se_1 },
  {     mercury__getopt__getopt__du_ptag_ordered_maybe_option_table_se_1 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__getopt__getopt__functor_number_map_maybe_option_table_se_1
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_data_0_0[1] = {
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_0 = {
  (MR_String) "bool",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__getopt__getopt__field_types_option_data_0_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_data_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_1 = {
  (MR_String) "int",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__getopt__getopt__field_types_option_data_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_data_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_2 = {
  (MR_String) "string",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 2,
  mercury__getopt__getopt__field_types_option_data_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 mercury__getopt__maybe__ti_maybe_1builtin__type_ctor_info_int_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
  }
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_data_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__getopt__maybe__ti_maybe_1builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_3 = {
  (MR_String) "maybe_int",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 3,
  mercury__getopt__getopt__field_types_option_data_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 mercury__getopt__maybe__ti_maybe_1builtin__type_ctor_info_string_0 = {
  &mercury__maybe__maybe__type_ctor_info_maybe_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_data_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__getopt__maybe__ti_maybe_1builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_4 = {
  (MR_String) "maybe_string",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__getopt__getopt__field_types_option_data_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_TypeInfo_Struct1 mercury__getopt__list__ti_list_1builtin__type_ctor_info_string_0 = {
  &mercury__list__list__type_ctor_info_list_1,
  {
    (MR_TypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
  }
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_data_0_5[1] = {
  (MR_PseudoTypeInfo) &mercury__getopt__list__ti_list_1builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_5 = {
  (MR_String) "accumulating",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 3,
  (MR_Integer) 5,
  mercury__getopt__getopt__field_types_option_data_0_5,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_6 = {
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

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_7 = {
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

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_8 = {
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

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_9 = {
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

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_data_0_10 = {
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
    (MR_Integer) 5,
    MR_SECTAG_LOCAL,
    mercury__getopt__getopt__du_stag_ordered_option_data_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_data_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_data_0_2
  },
  {
    (MR_Integer) 4,
    MR_SECTAG_REMOTE,
    mercury__getopt__getopt__du_stag_ordered_option_data_0_3
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
  (MR_Integer) 17,
  (MR_Integer) 4,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt____Unify____option_data_0_0_10001)),
  ((MR_Box) (mercury__getopt____Compare____option_data_0_0_10001)),
  (MR_String) "getopt",
  (MR_String) "option_data",
  {     mercury__getopt__getopt__du_name_ordered_option_data_0 },
  {     mercury__getopt__getopt__du_ptag_ordered_option_data_0 },
  (MR_Integer) 11,
  (MR_Integer) 4,
  mercury__getopt__getopt__functor_number_map_option_data_0
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_error_1_0[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_1_0 = {
  (MR_String) "unrecognized_option",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__getopt__getopt__field_types_option_error_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_error_1_1[3] = {
  (MR_PseudoTypeInfo) (MR_Integer) 1,
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
  (MR_PseudoTypeInfo) &mercury__getopt__getopt__type_ctor_info_option_error_reason_0
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_1_1 = {
  (MR_String) "option_error",
  (MR_Integer) 3,
  (MR_Integer) 1,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__getopt__getopt__field_types_option_error_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_error_1_0[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_error_1_0
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_error_1_1[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_error_1_1
};

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_error_1[2] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_error_1_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_error_1_1
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
  (MR_Integer) 17,
  (MR_Integer) 2,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt____Unify____option_error_1_0_10001)),
  ((MR_Box) (mercury__getopt____Compare____option_error_1_0_10001)),
  (MR_String) "getopt",
  (MR_String) "option_error",
  {     mercury__getopt__getopt__du_name_ordered_option_error_1 },
  {     mercury__getopt__getopt__du_ptag_ordered_option_error_1 },
  (MR_Integer) 2,
  (MR_Integer) 4,
  mercury__getopt__getopt__functor_number_map_option_error_1
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_reason_0_0 = {
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

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_reason_0_1 = {
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

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_error_reason_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_reason_0_2 = {
  (MR_String) "does_not_allow_argument",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__getopt__getopt__field_types_option_error_reason_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_reason_0_3 = {
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

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_reason_0_4 = {
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

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_reason_0_5 = {
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

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_error_reason_0_6[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_reason_0_6 = {
  (MR_String) "special_handler_error",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 6,
  mercury__getopt__getopt__field_types_option_error_reason_0_6,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_error_reason_0_7[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_error_reason_0_7 = {
  (MR_String) "requires_numeric_argument",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 7,
  mercury__getopt__getopt__field_types_option_error_reason_0_7,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
    (MR_Integer) 5,
    MR_SECTAG_LOCAL,
    mercury__getopt__getopt__du_stag_ordered_option_error_reason_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_error_reason_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_error_reason_0_2
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_error_reason_0_3
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
  (MR_Integer) 17,
  (MR_Integer) 4,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt____Unify____option_error_reason_0_0_10001)),
  ((MR_Box) (mercury__getopt____Compare____option_error_reason_0_0_10001)),
  (MR_String) "getopt",
  (MR_String) "option_error_reason",
  {     mercury__getopt__getopt__du_name_ordered_option_error_reason_0 },
  {     mercury__getopt__getopt__du_ptag_ordered_option_error_reason_0 },
  (MR_Integer) 8,
  (MR_Integer) 4,
  mercury__getopt__getopt__functor_number_map_option_error_reason_0
};

static const MR_VA_PseudoTypeInfo_Struct2 mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_character_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_VA_PseudoTypeInfo_Struct2 mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 2,
  {
    (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0,
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_1_0[3] = {
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_1_0 = {
  (MR_String) "option_ops",
  (MR_Integer) 3,
  (MR_Integer) 7,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__getopt__getopt__field_types_option_ops_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt__getopt__pti_maybe_option_table_1__pseudo_1 = {
  &mercury__getopt__getopt__type_ctor_info_maybe_option_table_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_VA_PseudoTypeInfo_Struct4 mercury__getopt____vpti_pred_4__pseudo_1__plain_getopt__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0__pseudo_getopt__pti_maybe_option_table_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 4,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__getopt__getopt__type_ctor_info_special_data_0,
    (MR_PseudoTypeInfo) &mercury__getopt__tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0,
    (MR_PseudoTypeInfo) &mercury__getopt__getopt__pti_maybe_option_table_1__pseudo_1
  }
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_1_1[4] = {
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0,
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_4__pseudo_1__plain_getopt__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0__pseudo_getopt__pti_maybe_option_table_1__pseudo_1
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_1_1 = {
  (MR_String) "option_ops",
  (MR_Integer) 4,
  (MR_Integer) 15,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__getopt__getopt__field_types_option_ops_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_1_2[3] = {
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_1_2 = {
  (MR_String) "option_ops_multi",
  (MR_Integer) 3,
  (MR_Integer) 7,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__getopt__getopt__field_types_option_ops_1_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_1_3[4] = {
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0,
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_4__pseudo_1__plain_getopt__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0__pseudo_getopt__pti_maybe_option_table_1__pseudo_1
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_1_3 = {
  (MR_String) "option_ops_multi",
  (MR_Integer) 4,
  (MR_Integer) 15,
  MR_SECTAG_NONE,
  (MR_Integer) 3,
  (MR_Integer) -1,
  (MR_Integer) 3,
  mercury__getopt__getopt__field_types_option_ops_1_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_ops_1_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_ops_1_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_ops_1_2
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_ops_1_3
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
  (MR_Integer) 17,
  (MR_Integer) 4,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt____Unify____option_ops_1_0_10001)),
  ((MR_Box) (mercury__getopt____Compare____option_ops_1_0_10001)),
  (MR_String) "getopt",
  (MR_String) "option_ops",
  {     mercury__getopt__getopt__du_name_ordered_option_ops_1 },
  {     mercury__getopt__getopt__du_ptag_ordered_option_ops_1 },
  (MR_Integer) 4,
  (MR_Integer) 4,
  mercury__getopt__getopt__functor_number_map_option_ops_1
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt__getopt__pti_option_ops_special_1__pseudo_1 = {
  &mercury__getopt__getopt__type_ctor_info_option_ops_special_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_internal_1_0[3] = {
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt__getopt__pti_option_ops_special_1__pseudo_1
};

static const MR_ConstString mercury__getopt__getopt__field_names_option_ops_internal_1_0[3] = {
  (MR_String) "short_option",
  (MR_String) "long_option",
  (MR_String) "special_handler"
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_internal_1_0 = {
  (MR_String) "option_ops_internal",
  (MR_Integer) 3,
  (MR_Integer) 7,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__getopt__getopt__field_types_option_ops_internal_1_0,
  mercury__getopt__getopt__field_names_option_ops_internal_1_0,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_internal_1_0[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_internal_1_0
};

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_ops_internal_1[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_ops_internal_1_0
  }
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_ops_internal_1[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_internal_1_0
};

static const MR_Integer mercury__getopt__getopt__functor_number_map_option_ops_internal_1[1] = {
  (MR_Integer) 0
};

const MR_TypeCtorInfo_Struct mercury__getopt__getopt__type_ctor_info_option_ops_internal_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt____Unify____option_ops_internal_1_0_10001)),
  ((MR_Box) (mercury__getopt____Compare____option_ops_internal_1_0_10001)),
  (MR_String) "getopt",
  (MR_String) "option_ops_internal",
  {     mercury__getopt__getopt__du_name_ordered_option_ops_internal_1 },
  {     mercury__getopt__getopt__du_ptag_ordered_option_ops_internal_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__getopt__getopt__functor_number_map_option_ops_internal_1
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_special_1_0 = {
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

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_special_1_1[1] = {
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_4__pseudo_1__plain_getopt__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0__pseudo_getopt__pti_maybe_option_table_1__pseudo_1
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_special_1_1 = {
  (MR_String) "notrack",
  (MR_Integer) 1,
  (MR_Integer) 1,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__getopt__getopt__field_types_option_ops_special_1_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_FA_PseudoTypeInfo_Struct1 mercury__getopt__set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__set_ordlist__set_ordlist__type_ctor_info_set_ordlist_1,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1
  }
};

static const MR_VA_PseudoTypeInfo_Struct5 mercury__getopt____vpti_pred_5__pseudo_1__plain_getopt__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0__pseudo_getopt__pti_maybe_option_table_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1 = {
  &mercury__builtin__builtin__type_ctor_info_pred_0,
  (MR_Integer) 5,
  {
    (MR_PseudoTypeInfo) (MR_Integer) 1,
    (MR_PseudoTypeInfo) &mercury__getopt__getopt__type_ctor_info_special_data_0,
    (MR_PseudoTypeInfo) &mercury__getopt__tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0,
    (MR_PseudoTypeInfo) &mercury__getopt__getopt__pti_maybe_option_table_1__pseudo_1,
    (MR_PseudoTypeInfo) &mercury__getopt__set_ordlist__pti_set_ordlist_1__pseudo_1
  }
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_special_1_2[1] = {
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_5__pseudo_1__plain_getopt__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0__pseudo_getopt__pti_maybe_option_table_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_special_1_2 = {
  (MR_String) "track",
  (MR_Integer) 1,
  (MR_Integer) 1,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__getopt__getopt__field_types_option_ops_special_1_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_special_1_0[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_special_1_0
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_special_1_1[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_special_1_1
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_special_1_2[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_special_1_2
};

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_ops_special_1[3] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    mercury__getopt__getopt__du_stag_ordered_option_ops_special_1_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_ops_special_1_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_ops_special_1_2
  }
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_name_ordered_option_ops_special_1[3] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_special_1_0,
  &mercury__getopt__getopt__du_functor_desc_option_ops_special_1_1,
  &mercury__getopt__getopt__du_functor_desc_option_ops_special_1_2
};

static const MR_Integer mercury__getopt__getopt__functor_number_map_option_ops_special_1[3] = {
  (MR_Integer) 0,
  (MR_Integer) 1,
  (MR_Integer) 2
};

const MR_TypeCtorInfo_Struct mercury__getopt__getopt__type_ctor_info_option_ops_special_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) 3,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt____Unify____option_ops_special_1_0_10001)),
  ((MR_Box) (mercury__getopt____Compare____option_ops_special_1_0_10001)),
  (MR_String) "getopt",
  (MR_String) "option_ops_special",
  {     mercury__getopt__getopt__du_name_ordered_option_ops_special_1 },
  {     mercury__getopt__getopt__du_ptag_ordered_option_ops_special_1 },
  (MR_Integer) 3,
  (MR_Integer) 4,
  mercury__getopt__getopt__functor_number_map_option_ops_special_1
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_option_ops_track_1_0[3] = {
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_character_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_2__plain_builtin__type_ctor_info_string_0__pseudo_1,
  (MR_PseudoTypeInfo) &mercury__getopt____vpti_pred_5__pseudo_1__plain_getopt__type_ctor_info_special_data_0__pseudo_tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0__pseudo_getopt__pti_maybe_option_table_1__pseudo_1__pseudo_set_ordlist__pti_set_ordlist_1__pseudo_1
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_option_ops_track_1_0 = {
  (MR_String) "option_ops_track",
  (MR_Integer) 3,
  (MR_Integer) 7,
  MR_SECTAG_NONE,
  (MR_Integer) 0,
  (MR_Integer) -1,
  (MR_Integer) 0,
  mercury__getopt__getopt__field_types_option_ops_track_1_0,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_DuFunctorDescPtr mercury__getopt__getopt__du_stag_ordered_option_ops_track_1_0[1] = {
  &mercury__getopt__getopt__du_functor_desc_option_ops_track_1_0
};

static const MR_DuPtagLayout mercury__getopt__getopt__du_ptag_ordered_option_ops_track_1[1] = {
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_option_ops_track_1_0
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
  (MR_Integer) 17,
  (MR_Integer) 1,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt____Unify____option_ops_track_1_0_10001)),
  ((MR_Box) (mercury__getopt____Compare____option_ops_track_1_0_10001)),
  (MR_String) "getopt",
  (MR_String) "option_ops_track",
  {     mercury__getopt__getopt__du_name_ordered_option_ops_track_1 },
  {     mercury__getopt__getopt__du_ptag_ordered_option_ops_track_1 },
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__getopt__getopt__functor_number_map_option_ops_track_1
};

const MR_TypeCtorInfo_Struct mercury__getopt__getopt__type_ctor_info_option_table_1 = {
  (MR_Integer) 1,
  (MR_Integer) 17,
  (MR_Integer) -1,
  MR_TYPECTOR_REP_EQUIV,
  ((MR_Box) (mercury__getopt____Unify____option_table_1_0_10001)),
  ((MR_Box) (mercury__getopt____Compare____option_table_1_0_10001)),
  (MR_String) "getopt",
  (MR_String) "option_table",
  {     NULL },
  {     (MR_PseudoTypeInfo) &mercury__getopt__tree234__pti_tree234_2__pseudo_1__plain_getopt__type_ctor_info_option_data_0 },
  (MR_Integer) -1,
  (MR_Integer) 0,
  NULL
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_special_data_0_0 = {
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

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_special_data_0_1[1] = {
  (MR_PseudoTypeInfo) &mercury__bool__bool__type_ctor_info_bool_0
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_special_data_0_1 = {
  (MR_String) "bool",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 1,
  (MR_Integer) -1,
  (MR_Integer) 1,
  mercury__getopt__getopt__field_types_special_data_0_1,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_special_data_0_2[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_int_0
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_special_data_0_2 = {
  (MR_String) "int",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_NONE,
  (MR_Integer) 2,
  (MR_Integer) -1,
  (MR_Integer) 2,
  mercury__getopt__getopt__field_types_special_data_0_2,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_special_data_0_3[1] = {
  (MR_PseudoTypeInfo) &mercury__builtin__builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_special_data_0_3 = {
  (MR_String) "string",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 0,
  (MR_Integer) 3,
  mercury__getopt__getopt__field_types_special_data_0_3,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
};

static const MR_PseudoTypeInfo mercury__getopt__getopt__field_types_special_data_0_4[1] = {
  (MR_PseudoTypeInfo) &mercury__getopt__maybe__ti_maybe_1builtin__type_ctor_info_string_0
};

static const MR_DuFunctorDesc mercury__getopt__getopt__du_functor_desc_special_data_0_4 = {
  (MR_String) "maybe_string",
  (MR_Integer) 1,
  (MR_Integer) 0,
  MR_SECTAG_REMOTE,
  (MR_Integer) 3,
  (MR_Integer) 1,
  (MR_Integer) 4,
  mercury__getopt__getopt__field_types_special_data_0_4,
  NULL,
  NULL,
  NULL,
  MR_FUNCTOR_SUBTYPE_NONE
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
    (MR_Integer) 1,
    MR_SECTAG_LOCAL,
    mercury__getopt__getopt__du_stag_ordered_special_data_0_0
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_special_data_0_1
  },
  {
    (MR_Integer) 1,
    MR_SECTAG_NONE,
    mercury__getopt__getopt__du_stag_ordered_special_data_0_2
  },
  {
    (MR_Integer) 2,
    MR_SECTAG_REMOTE,
    mercury__getopt__getopt__du_stag_ordered_special_data_0_3
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
  (MR_Integer) 17,
  (MR_Integer) 4,
  MR_TYPECTOR_REP_DU,
  ((MR_Box) (mercury__getopt____Unify____special_data_0_0_10001)),
  ((MR_Box) (mercury__getopt____Compare____special_data_0_0_10001)),
  (MR_String) "getopt",
  (MR_String) "special_data",
  {     mercury__getopt__getopt__du_name_ordered_special_data_0 },
  {     mercury__getopt__getopt__du_ptag_ordered_special_data_0 },
  (MR_Integer) 5,
  (MR_Integer) 4,
  mercury__getopt__getopt__functor_number_map_special_data_0
};

static MR_Integer MR_CALL 
mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_102_117_110_99_95_95_67_108_97_115_115_77_101_116_104_111_100_95_102_111_114_95_111_112_115_95_95_111_112_95_116_97_98_108_101_95_95_95_95_111_112_115_95_95_109_101_114_99_117_114_121_95_111_112_95_116_97_98_108_101_95_95_97_114_105_116_121_48_95_95_95_95_95_95_111_112_115_95_95_109_97_120_95_112_114_105_111_114_105_116_121_95_49_95_95_91_49_93_95_48_1_f_in__ops_0(void)
{
  {
    return (MR_Integer) 1200;
  }
}

static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_2(
  void * mercury__getopt__env_ptr_arg)
{
  {
    struct mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0_s * mercury__getopt__env_ptr = (struct mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0_s *) mercury__getopt__env_ptr_arg;

    (mercury__getopt__env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0__OptionData_7 = ((MR_Word) (mercury__getopt__env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0__conv1_OptionData_7);
    mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_1(mercury__getopt__env_ptr);
  }
}

static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_1(
  void * mercury__getopt__env_ptr_arg)
{
  {
    struct mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0_s * mercury__getopt__env_ptr = (struct mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0_s *) mercury__getopt__env_ptr_arg;

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *((mercury__getopt__env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0__LambdaHeadVar__1_10) = base;
      MR_hl_field(MR_mktag(0), base, 0) = (mercury__getopt__env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0__Option_6;
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((mercury__getopt__env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0__OptionData_7));
    }
    ((mercury__getopt__env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0__cont)((mercury__getopt__env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0(
  MR_Word mercury__getopt__TypeInfo_for_OptionType_12,
  MR_Word mercury__getopt__OptionDefaultsPred_3,
  MR_Word * mercury__getopt__LambdaHeadVar__1_10,
  MR_Cont mercury__getopt__cont,
  void * mercury__getopt__cont_env_ptr)
{
  {
    struct mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0_s mercury__getopt__env;

    (mercury__getopt__env).mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0__LambdaHeadVar__1_10 = mercury__getopt__LambdaHeadVar__1_10;
    (mercury__getopt__env).mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0__cont = mercury__getopt__cont;
    (mercury__getopt__env).mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0__cont_env_ptr = mercury__getopt__cont_env_ptr;
    {
      void MR_CALL (* mercury__getopt__func_0)(MR_Box, MR_Box *, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionDefaultsPred_3, (MR_Integer) 1)));

      mercury__getopt__func_0(((MR_Box) mercury__getopt__OptionDefaultsPred_3), &(mercury__getopt__env).mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0__Option_6, &(mercury__getopt__env).mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0__conv1_OptionData_7, mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_2, &mercury__getopt__env);
    }
  }
}

static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_2(
  void * mercury__getopt__env_ptr_arg)
{
  {
    struct mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0_s * mercury__getopt__env_ptr = (struct mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0_s *) mercury__getopt__env_ptr_arg;

    (mercury__getopt__env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0__OptionData_7 = ((MR_Word) (mercury__getopt__env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0__conv1_OptionData_7);
    mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_1(mercury__getopt__env_ptr);
  }
}

static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_1(
  void * mercury__getopt__env_ptr_arg)
{
  {
    struct mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0_s * mercury__getopt__env_ptr = (struct mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0_s *) mercury__getopt__env_ptr_arg;

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *((mercury__getopt__env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0__LambdaHeadVar__1_10) = base;
      MR_hl_field(MR_mktag(0), base, 0) = (mercury__getopt__env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0__Option_6;
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((mercury__getopt__env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0__OptionData_7));
    }
    ((mercury__getopt__env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0__cont)((mercury__getopt__env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0(
  MR_Word mercury__getopt__TypeInfo_for_OptionType_12,
  MR_Word mercury__getopt__OptionDefaultsPred_3,
  MR_Word * mercury__getopt__LambdaHeadVar__1_10,
  MR_Cont mercury__getopt__cont,
  void * mercury__getopt__cont_env_ptr)
{
  {
    struct mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0_s mercury__getopt__env;

    (mercury__getopt__env).mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0__LambdaHeadVar__1_10 = mercury__getopt__LambdaHeadVar__1_10;
    (mercury__getopt__env).mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0__cont = mercury__getopt__cont;
    (mercury__getopt__env).mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0__cont_env_ptr = mercury__getopt__cont_env_ptr;
    {
      void MR_CALL (* mercury__getopt__func_0)(MR_Box, MR_Box *, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionDefaultsPred_3, (MR_Integer) 1)));

      mercury__getopt__func_0(((MR_Box) mercury__getopt__OptionDefaultsPred_3), &(mercury__getopt__env).mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0__Option_6, &(mercury__getopt__env).mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0__conv1_OptionData_7, mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_2, &mercury__getopt__env);
    }
  }
}

void MR_CALL 
mercury__getopt____Compare____special_data_0_0(
  MR_Word * mercury__getopt__HeadVar__1_1,
  MR_Word mercury__getopt__HeadVar__2_2,
  MR_Word mercury__getopt__HeadVar__3_3)
{
  {
    MR_bool mercury__getopt__succeeded;
    MR_Integer mercury__getopt__CastX_44 = (MR_Integer) mercury__getopt__HeadVar__2_2;
    MR_Integer mercury__getopt__CastY_45 = (MR_Integer) mercury__getopt__HeadVar__3_3;

    mercury__getopt__succeeded = (mercury__getopt__CastX_44 == mercury__getopt__CastY_45);
    if (mercury__getopt__succeeded)
      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mercury__getopt__Var_50 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word mercury__getopt__ArgY1_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer mercury__getopt__Var_54 = (MR_Integer) mercury__getopt__Var_50;
                  MR_Integer mercury__getopt__Var_55 = (MR_Integer) mercury__getopt__ArgY1_10;

                  mercury__getopt__succeeded = (mercury__getopt__Var_54 < mercury__getopt__Var_55);
                  if (mercury__getopt__succeeded)
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    mercury__getopt__succeeded = (mercury__getopt__Var_54 == mercury__getopt__Var_55);
                    if (mercury__getopt__succeeded)
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
                    else
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                  }
                }
                break;
              case (MR_Integer) 2:
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer mercury__getopt__Var_51 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Integer mercury__getopt__ArgY1_21 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)));

                  mercury__getopt__succeeded = (mercury__getopt__Var_51 < mercury__getopt__ArgY1_21);
                  if (mercury__getopt__succeeded)
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    mercury__getopt__succeeded = (mercury__getopt__Var_51 == mercury__getopt__ArgY1_21);
                    if (mercury__getopt__succeeded)
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
                    else
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String mercury__getopt__Var_53 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_String mercury__getopt__ArgY1_32 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Integer mercury__getopt__V_7_65;

{
#define MR_PROC_LABEL mercury__getopt____Compare____special_data_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__getopt__Var_53 ;
	S2 =  mercury__getopt__ArgY1_32 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__getopt__V_7_65  = Res;
}
                          mercury__getopt__succeeded = (mercury__getopt__V_7_65 < (MR_Integer) 0);
                          if (mercury__getopt__succeeded)
                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            mercury__getopt__succeeded = (mercury__getopt__V_7_65 == (MR_Integer) 0);
                            if (mercury__getopt__succeeded)
                              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
                            else
                              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word mercury__getopt__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word mercury__getopt__TypeInfo_46_46 = (MR_Word) &mercury__getopt_scalar_common_1[1];
                          MR_Word mercury__getopt__ArgY1_43 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 1)));

                          mercury__builtin__compare_3_p_0(mercury__getopt__TypeInfo_46_46, mercury__getopt__HeadVar__1_1, ((MR_Box) (mercury__getopt__Var_52)), ((MR_Box) (mercury__getopt__ArgY1_43)));
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
  MR_Word mercury__getopt__HeadVar__1_1,
  MR_Word mercury__getopt__HeadVar__2_2)
{
  {
    MR_bool mercury__getopt__succeeded;
    MR_Integer mercury__getopt__CastX_13 = (MR_Integer) mercury__getopt__HeadVar__1_1;
    MR_Integer mercury__getopt__CastY_14 = (MR_Integer) mercury__getopt__HeadVar__2_2;

    mercury__getopt__succeeded = (mercury__getopt__CastX_13 == mercury__getopt__CastY_14);
    if (mercury__getopt__succeeded)
      mercury__getopt__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mercury__getopt__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer mercury__getopt__CastX_3 = (MR_Integer) mercury__getopt__HeadVar__1_1;
            MR_Integer mercury__getopt__CastY_4 = (MR_Integer) mercury__getopt__HeadVar__2_2;

            mercury__getopt__succeeded = (mercury__getopt__CastY_4 == mercury__getopt__CastX_3);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mercury__getopt__ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__getopt__ArgY1_6;

            mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__getopt__succeeded)
            {
              mercury__getopt__ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
              mercury__getopt__succeeded = (mercury__getopt__ArgX1_5 == mercury__getopt__ArgY1_6);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer mercury__getopt__ArgX1_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer mercury__getopt__ArgY1_8;

            mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mercury__getopt__succeeded)
            {
              mercury__getopt__ArgY1_8 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
              mercury__getopt__succeeded = (mercury__getopt__ArgX1_7 == mercury__getopt__ArgY1_8);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String mercury__getopt__ArgX1_9 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__1_1, (MR_Integer) 1)));
                MR_String mercury__getopt__ArgY1_10;

                mercury__getopt__succeeded = ((((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (mercury__getopt__succeeded)
                {
                  mercury__getopt__ArgY1_10 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));
                  mercury__getopt__succeeded = (strcmp(mercury__getopt__ArgX1_9, mercury__getopt__ArgY1_10) == 0);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word mercury__getopt__TypeInfo_15_15;
                MR_Word mercury__getopt__ArgX1_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word mercury__getopt__ArgY1_12;

                mercury__getopt__succeeded = ((((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (mercury__getopt__succeeded)
                {
                  mercury__getopt__ArgY1_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));
                  mercury__getopt__TypeInfo_15_15 = (MR_Word) &mercury__getopt_scalar_common_1[1];
                  mercury__getopt__succeeded = mercury__builtin__unify_2_p_0(mercury__getopt__TypeInfo_15_15, ((MR_Box) (mercury__getopt__ArgX1_11)), ((MR_Box) (mercury__getopt__ArgY1_12)));
                }
              }
              break;
          }
          break;
      }
    return mercury__getopt__succeeded;
  }
}

void MR_CALL 
mercury__getopt____Compare____option_table_1_0(
  MR_Word mercury__getopt__TypeInfo_for_OptionType_6,
  MR_Word * mercury__getopt__HeadVar__1_1,
  MR_Word mercury__getopt__HeadVar__2_2,
  MR_Word mercury__getopt__HeadVar__3_3)
{
  {
    MR_Word mercury__getopt__TypeCtorInfo_7_7 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
    MR_Word mercury__getopt__Cast_HeadVar1_4 = mercury__getopt__HeadVar__2_2;
    MR_Word mercury__getopt__Cast_HeadVar2_5 = mercury__getopt__HeadVar__3_3;

    mercury__tree234____Compare____tree234_2_0(mercury__getopt__TypeInfo_for_OptionType_6, mercury__getopt__TypeCtorInfo_7_7, mercury__getopt__HeadVar__1_1, mercury__getopt__Cast_HeadVar1_4, mercury__getopt__Cast_HeadVar2_5);
  }
}

MR_bool MR_CALL 
mercury__getopt____Unify____option_table_1_0(
  MR_Word mercury__getopt__TypeInfo_for_OptionType_5,
  MR_Word mercury__getopt__HeadVar__1_1,
  MR_Word mercury__getopt__HeadVar__2_2)
{
  {
    MR_bool mercury__getopt__succeeded;
    MR_Word mercury__getopt__TypeCtorInfo_6_6 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
    MR_Word mercury__getopt__Cast_HeadVar1_3 = mercury__getopt__HeadVar__1_1;
    MR_Word mercury__getopt__Cast_HeadVar2_4 = mercury__getopt__HeadVar__2_2;

    mercury__getopt__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__getopt__TypeInfo_for_OptionType_5, mercury__getopt__TypeCtorInfo_6_6, mercury__getopt__Cast_HeadVar1_3, mercury__getopt__Cast_HeadVar2_4);
    return mercury__getopt__succeeded;
  }
}

void MR_CALL 
mercury__getopt____Compare____option_ops_track_1_0(
  MR_Word mercury__getopt__TypeInfo_for_OptionType_14,
  MR_Word * mercury__getopt__HeadVar__1_1,
  MR_Word mercury__getopt__HeadVar__2_2,
  MR_Word mercury__getopt__HeadVar__3_3)
{
  {
    MR_bool mercury__getopt__succeeded;
    MR_Integer mercury__getopt__CastX_12 = (MR_Integer) mercury__getopt__HeadVar__2_2;
    MR_Integer mercury__getopt__CastY_13 = (MR_Integer) mercury__getopt__HeadVar__3_3;

    mercury__getopt__succeeded = (mercury__getopt__CastX_12 == mercury__getopt__CastY_13);
    if (mercury__getopt__succeeded)
      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word mercury__getopt__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word mercury__getopt__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word mercury__getopt__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word mercury__getopt__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word mercury__getopt__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word mercury__getopt__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__3_3, (MR_Integer) 2)));
      MR_Word mercury__getopt__Var_10;

      mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt__Var_10, (MR_Word) mercury__getopt__ArgX1_4, (MR_Word) mercury__getopt__ArgY1_5);
      mercury__getopt__succeeded = (mercury__getopt__Var_10 == (MR_Integer) 0);
      mercury__getopt__succeeded = !(mercury__getopt__succeeded);
      if (mercury__getopt__succeeded)
        *mercury__getopt__HeadVar__1_1 = mercury__getopt__Var_10;
      else
      {
        MR_Word mercury__getopt__Var_11;

        mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt__Var_11, (MR_Word) mercury__getopt__ArgX2_6, (MR_Word) mercury__getopt__ArgY2_7);
        mercury__getopt__succeeded = (mercury__getopt__Var_11 == (MR_Integer) 0);
        mercury__getopt__succeeded = !(mercury__getopt__succeeded);
        if (mercury__getopt__succeeded)
          *mercury__getopt__HeadVar__1_1 = mercury__getopt__Var_11;
        else
          mercury__private_builtin__builtin_compare_pred_3_p_0(mercury__getopt__HeadVar__1_1, (MR_Word) mercury__getopt__ArgX3_8, (MR_Word) mercury__getopt__ArgY3_9);
      }
    }
  }
}

MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_track_1_0(
  MR_Word mercury__getopt__TypeInfo_for_OptionType_11,
  MR_Word mercury__getopt__HeadVar__1_1,
  MR_Word mercury__getopt__HeadVar__2_2)
{
  {
    MR_bool mercury__getopt__succeeded;
    MR_Integer mercury__getopt__CastX_9 = (MR_Integer) mercury__getopt__HeadVar__1_1;
    MR_Integer mercury__getopt__CastY_10 = (MR_Integer) mercury__getopt__HeadVar__2_2;

    mercury__getopt__succeeded = (mercury__getopt__CastX_9 == mercury__getopt__CastY_10);
    if (mercury__getopt__succeeded)
      mercury__getopt__succeeded = MR_TRUE;
    else
    {
      MR_Word mercury__getopt__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word mercury__getopt__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word mercury__getopt__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word mercury__getopt__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word mercury__getopt__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__1_1, (MR_Integer) 2)));
      MR_Word mercury__getopt__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 2)));

      mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__ArgX1_3, (MR_Word) mercury__getopt__ArgY1_4);
      if (mercury__getopt__succeeded)
      {
        mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__ArgX2_5, (MR_Word) mercury__getopt__ArgY2_6);
        if (mercury__getopt__succeeded)
          mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__ArgX3_7, (MR_Word) mercury__getopt__ArgY3_8);
      }
    }
    return mercury__getopt__succeeded;
  }
}

void MR_CALL 
mercury__getopt____Compare____option_ops_internal_1_0(
  MR_Word mercury__getopt__TypeInfo_for_OptionType_14,
  MR_Word * mercury__getopt__HeadVar__1_1,
  MR_Word mercury__getopt__HeadVar__2_2,
  MR_Word mercury__getopt__HeadVar__3_3)
{
  {
    MR_bool mercury__getopt__succeeded;
    MR_Integer mercury__getopt__CastX_12 = (MR_Integer) mercury__getopt__HeadVar__2_2;
    MR_Integer mercury__getopt__CastY_13 = (MR_Integer) mercury__getopt__HeadVar__3_3;

    mercury__getopt__succeeded = (mercury__getopt__CastX_12 == mercury__getopt__CastY_13);
    if (mercury__getopt__succeeded)
      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
    else
    {
      MR_Word mercury__getopt__ArgX1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word mercury__getopt__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)));
      MR_Word mercury__getopt__ArgX2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word mercury__getopt__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__3_3, (MR_Integer) 1)));
      MR_Word mercury__getopt__ArgX3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 2)));
      MR_Word mercury__getopt__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__3_3, (MR_Integer) 2)));
      MR_Word mercury__getopt__Var_10;

      mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt__Var_10, (MR_Word) mercury__getopt__ArgX1_4, (MR_Word) mercury__getopt__ArgY1_5);
      mercury__getopt__succeeded = (mercury__getopt__Var_10 == (MR_Integer) 0);
      mercury__getopt__succeeded = !(mercury__getopt__succeeded);
      if (mercury__getopt__succeeded)
        *mercury__getopt__HeadVar__1_1 = mercury__getopt__Var_10;
      else
      {
        MR_Word mercury__getopt__Var_11;

        mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt__Var_11, (MR_Word) mercury__getopt__ArgX2_6, (MR_Word) mercury__getopt__ArgY2_7);
        mercury__getopt__succeeded = (mercury__getopt__Var_11 == (MR_Integer) 0);
        mercury__getopt__succeeded = !(mercury__getopt__succeeded);
        if (mercury__getopt__succeeded)
          *mercury__getopt__HeadVar__1_1 = mercury__getopt__Var_11;
        else
          mercury__getopt____Compare____option_ops_special_1_0(mercury__getopt__TypeInfo_for_OptionType_14, mercury__getopt__HeadVar__1_1, mercury__getopt__ArgX3_8, mercury__getopt__ArgY3_9);
      }
    }
  }
}

void MR_CALL 
mercury__getopt____Compare____option_ops_special_1_0(
  MR_Word mercury__getopt__TypeInfo_for_OptionType_18,
  MR_Word * mercury__getopt__HeadVar__1_1,
  MR_Word mercury__getopt__HeadVar__2_2,
  MR_Word mercury__getopt__HeadVar__3_3)
{
  {
    MR_bool mercury__getopt__succeeded;
    MR_Integer mercury__getopt__CastX_16 = (MR_Integer) mercury__getopt__HeadVar__2_2;
    MR_Integer mercury__getopt__CastY_17 = (MR_Integer) mercury__getopt__HeadVar__3_3;

    mercury__getopt__succeeded = (mercury__getopt__CastX_16 == mercury__getopt__CastY_17);
    if (mercury__getopt__succeeded)
      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mercury__getopt__Var_39 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word mercury__getopt__ArgY1_8 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)));

                  mercury__private_builtin__builtin_compare_pred_3_p_0(mercury__getopt__HeadVar__1_1, (MR_Word) mercury__getopt__Var_39, (MR_Word) mercury__getopt__ArgY1_8);
                }
                break;
              case (MR_Integer) 2:
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mercury__getopt__Var_40 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word mercury__getopt__ArgY1_15 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)));

                  mercury__private_builtin__builtin_compare_pred_3_p_0(mercury__getopt__HeadVar__1_1, (MR_Word) mercury__getopt__Var_40, (MR_Word) mercury__getopt__ArgY1_15);
                }
                break;
            }
          }
          break;
      }
  }
}

MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_internal_1_0(
  MR_Word mercury__getopt__TypeInfo_for_OptionType_11,
  MR_Word mercury__getopt__HeadVar__1_1,
  MR_Word mercury__getopt__HeadVar__2_2)
{
  {
    MR_bool mercury__getopt__succeeded;
    MR_Integer mercury__getopt__CastX_9 = (MR_Integer) mercury__getopt__HeadVar__1_1;
    MR_Integer mercury__getopt__CastY_10 = (MR_Integer) mercury__getopt__HeadVar__2_2;

    mercury__getopt__succeeded = (mercury__getopt__CastX_9 == mercury__getopt__CastY_10);
    if (mercury__getopt__succeeded)
      mercury__getopt__succeeded = MR_TRUE;
    else
    {
      MR_Word mercury__getopt__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word mercury__getopt__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
      MR_Word mercury__getopt__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__1_1, (MR_Integer) 1)));
      MR_Word mercury__getopt__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));
      MR_Word mercury__getopt__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__1_1, (MR_Integer) 2)));
      MR_Word mercury__getopt__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 2)));

      mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__ArgX1_3, (MR_Word) mercury__getopt__ArgY1_4);
      if (mercury__getopt__succeeded)
      {
        mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__ArgX2_5, (MR_Word) mercury__getopt__ArgY2_6);
        if (mercury__getopt__succeeded)
          mercury__getopt__succeeded = mercury__getopt____Unify____option_ops_special_1_0(mercury__getopt__TypeInfo_for_OptionType_11, mercury__getopt__ArgX3_7, mercury__getopt__ArgY3_8);
      }
    }
    return mercury__getopt__succeeded;
  }
}

MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_special_1_0(
  MR_Word mercury__getopt__TypeInfo_for_OptionType_11,
  MR_Word mercury__getopt__HeadVar__1_1,
  MR_Word mercury__getopt__HeadVar__2_2)
{
  {
    MR_bool mercury__getopt__succeeded;
    MR_Integer mercury__getopt__CastX_9 = (MR_Integer) mercury__getopt__HeadVar__1_1;
    MR_Integer mercury__getopt__CastY_10 = (MR_Integer) mercury__getopt__HeadVar__2_2;

    mercury__getopt__succeeded = (mercury__getopt__CastX_9 == mercury__getopt__CastY_10);
    if (mercury__getopt__succeeded)
      mercury__getopt__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mercury__getopt__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Integer mercury__getopt__CastX_3 = (MR_Integer) mercury__getopt__HeadVar__1_1;
            MR_Integer mercury__getopt__CastY_4 = (MR_Integer) mercury__getopt__HeadVar__2_2;

            mercury__getopt__succeeded = (mercury__getopt__CastY_4 == mercury__getopt__CastX_3);
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mercury__getopt__ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__getopt__ArgY1_6;

            mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__getopt__succeeded)
            {
              mercury__getopt__ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
              mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__ArgX1_5, (MR_Word) mercury__getopt__ArgY1_6);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mercury__getopt__ArgX1_7 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__getopt__ArgY1_8;

            mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mercury__getopt__succeeded)
            {
              mercury__getopt__ArgY1_8 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
              mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__ArgX1_7, (MR_Word) mercury__getopt__ArgY1_8);
            }
          }
          break;
      }
    return mercury__getopt__succeeded;
  }
}

void MR_CALL 
mercury__getopt____Compare____option_ops_1_0(
  MR_Word mercury__getopt__TypeInfo_for_OptionType_128,
  MR_Word * mercury__getopt__HeadVar__1_1,
  MR_Word mercury__getopt__HeadVar__2_2,
  MR_Word mercury__getopt__HeadVar__3_3)
{
  {
    MR_bool mercury__getopt__succeeded;
    MR_Integer mercury__getopt__CastX_126 = (MR_Integer) mercury__getopt__HeadVar__2_2;
    MR_Integer mercury__getopt__CastY_127 = (MR_Integer) mercury__getopt__HeadVar__3_3;

    mercury__getopt__succeeded = (mercury__getopt__CastX_126 == mercury__getopt__CastY_127);
    if (mercury__getopt__succeeded)
      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word mercury__getopt__Var_195 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 2)));
            MR_Word mercury__getopt__Var_196 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mercury__getopt__Var_197 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                {
                  MR_Word mercury__getopt__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word mercury__getopt__ArgY2_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word mercury__getopt__ArgY3_9 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word mercury__getopt__Var_10;

                  mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt__Var_10, (MR_Word) mercury__getopt__Var_197, (MR_Word) mercury__getopt__ArgY1_5);
                  mercury__getopt__succeeded = (mercury__getopt__Var_10 == (MR_Integer) 0);
                  mercury__getopt__succeeded = !(mercury__getopt__succeeded);
                  if (mercury__getopt__succeeded)
                    *mercury__getopt__HeadVar__1_1 = mercury__getopt__Var_10;
                  else
                  {
                    MR_Word mercury__getopt__Var_11;

                    mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt__Var_11, (MR_Word) mercury__getopt__Var_196, (MR_Word) mercury__getopt__ArgY2_7);
                    mercury__getopt__succeeded = (mercury__getopt__Var_11 == (MR_Integer) 0);
                    mercury__getopt__succeeded = !(mercury__getopt__succeeded);
                    if (mercury__getopt__succeeded)
                      *mercury__getopt__HeadVar__1_1 = mercury__getopt__Var_11;
                    else
                      mercury__private_builtin__builtin_compare_pred_3_p_0(mercury__getopt__HeadVar__1_1, (MR_Word) mercury__getopt__Var_195, (MR_Word) mercury__getopt__ArgY3_9);
                  }
                }
                break;
              case (MR_Integer) 1:
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 2:
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mercury__getopt__Var_198 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 3)));
            MR_Word mercury__getopt__Var_199 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 2)));
            MR_Word mercury__getopt__Var_200 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mercury__getopt__Var_201 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                {
                  MR_Word mercury__getopt__ArgY1_40 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word mercury__getopt__ArgY2_42 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word mercury__getopt__ArgY3_44 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word mercury__getopt__ArgY4_46 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__3_3, (MR_Integer) 3)));
                  MR_Word mercury__getopt__Var_47;

                  mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt__Var_47, (MR_Word) mercury__getopt__Var_201, (MR_Word) mercury__getopt__ArgY1_40);
                  mercury__getopt__succeeded = (mercury__getopt__Var_47 == (MR_Integer) 0);
                  mercury__getopt__succeeded = !(mercury__getopt__succeeded);
                  if (mercury__getopt__succeeded)
                    *mercury__getopt__HeadVar__1_1 = mercury__getopt__Var_47;
                  else
                  {
                    MR_Word mercury__getopt__Var_48;

                    mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt__Var_48, (MR_Word) mercury__getopt__Var_200, (MR_Word) mercury__getopt__ArgY2_42);
                    mercury__getopt__succeeded = (mercury__getopt__Var_48 == (MR_Integer) 0);
                    mercury__getopt__succeeded = !(mercury__getopt__succeeded);
                    if (mercury__getopt__succeeded)
                      *mercury__getopt__HeadVar__1_1 = mercury__getopt__Var_48;
                    else
                    {
                      MR_Word mercury__getopt__Var_49;

                      mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt__Var_49, (MR_Word) mercury__getopt__Var_199, (MR_Word) mercury__getopt__ArgY3_44);
                      mercury__getopt__succeeded = (mercury__getopt__Var_49 == (MR_Integer) 0);
                      mercury__getopt__succeeded = !(mercury__getopt__succeeded);
                      if (mercury__getopt__succeeded)
                        *mercury__getopt__HeadVar__1_1 = mercury__getopt__Var_49;
                      else
                        mercury__private_builtin__builtin_compare_pred_3_p_0(mercury__getopt__HeadVar__1_1, (MR_Word) mercury__getopt__Var_198, (MR_Word) mercury__getopt__ArgY4_46);
                    }
                  }
                }
                break;
              case (MR_Integer) 2:
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mercury__getopt__Var_202 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__2_2, (MR_Integer) 2)));
            MR_Word mercury__getopt__Var_203 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mercury__getopt__Var_204 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Word mercury__getopt__ArgY1_79 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word mercury__getopt__ArgY2_81 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word mercury__getopt__ArgY3_83 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word mercury__getopt__Var_84;

                  mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt__Var_84, (MR_Word) mercury__getopt__Var_204, (MR_Word) mercury__getopt__ArgY1_79);
                  mercury__getopt__succeeded = (mercury__getopt__Var_84 == (MR_Integer) 0);
                  mercury__getopt__succeeded = !(mercury__getopt__succeeded);
                  if (mercury__getopt__succeeded)
                    *mercury__getopt__HeadVar__1_1 = mercury__getopt__Var_84;
                  else
                  {
                    MR_Word mercury__getopt__Var_85;

                    mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt__Var_85, (MR_Word) mercury__getopt__Var_203, (MR_Word) mercury__getopt__ArgY2_81);
                    mercury__getopt__succeeded = (mercury__getopt__Var_85 == (MR_Integer) 0);
                    mercury__getopt__succeeded = !(mercury__getopt__succeeded);
                    if (mercury__getopt__succeeded)
                      *mercury__getopt__HeadVar__1_1 = mercury__getopt__Var_85;
                    else
                      mercury__private_builtin__builtin_compare_pred_3_p_0(mercury__getopt__HeadVar__1_1, (MR_Word) mercury__getopt__Var_202, (MR_Word) mercury__getopt__ArgY3_83);
                  }
                }
                break;
              case (MR_Integer) 3:
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word mercury__getopt__Var_205 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 3)));
            MR_Word mercury__getopt__Var_206 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 2)));
            MR_Word mercury__getopt__Var_207 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));
            MR_Word mercury__getopt__Var_208 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 1:
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                {
                  MR_Word mercury__getopt__ArgY1_116 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Word mercury__getopt__ArgY2_118 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 1)));
                  MR_Word mercury__getopt__ArgY3_120 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 2)));
                  MR_Word mercury__getopt__ArgY4_122 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 3)));
                  MR_Word mercury__getopt__Var_123;

                  mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt__Var_123, (MR_Word) mercury__getopt__Var_208, (MR_Word) mercury__getopt__ArgY1_116);
                  mercury__getopt__succeeded = (mercury__getopt__Var_123 == (MR_Integer) 0);
                  mercury__getopt__succeeded = !(mercury__getopt__succeeded);
                  if (mercury__getopt__succeeded)
                    *mercury__getopt__HeadVar__1_1 = mercury__getopt__Var_123;
                  else
                  {
                    MR_Word mercury__getopt__Var_124;

                    mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt__Var_124, (MR_Word) mercury__getopt__Var_207, (MR_Word) mercury__getopt__ArgY2_118);
                    mercury__getopt__succeeded = (mercury__getopt__Var_124 == (MR_Integer) 0);
                    mercury__getopt__succeeded = !(mercury__getopt__succeeded);
                    if (mercury__getopt__succeeded)
                      *mercury__getopt__HeadVar__1_1 = mercury__getopt__Var_124;
                    else
                    {
                      MR_Word mercury__getopt__Var_125;

                      mercury__private_builtin__builtin_compare_pred_3_p_0(&mercury__getopt__Var_125, (MR_Word) mercury__getopt__Var_206, (MR_Word) mercury__getopt__ArgY3_120);
                      mercury__getopt__succeeded = (mercury__getopt__Var_125 == (MR_Integer) 0);
                      mercury__getopt__succeeded = !(mercury__getopt__succeeded);
                      if (mercury__getopt__succeeded)
                        *mercury__getopt__HeadVar__1_1 = mercury__getopt__Var_125;
                      else
                        mercury__private_builtin__builtin_compare_pred_3_p_0(mercury__getopt__HeadVar__1_1, (MR_Word) mercury__getopt__Var_205, (MR_Word) mercury__getopt__ArgY4_122);
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
  MR_Word mercury__getopt__TypeInfo_for_OptionType_33,
  MR_Word mercury__getopt__HeadVar__1_1,
  MR_Word mercury__getopt__HeadVar__2_2)
{
  {
    MR_bool mercury__getopt__succeeded;
    MR_Integer mercury__getopt__CastX_31 = (MR_Integer) mercury__getopt__HeadVar__1_1;
    MR_Integer mercury__getopt__CastY_32 = (MR_Integer) mercury__getopt__HeadVar__2_2;

    mercury__getopt__succeeded = (mercury__getopt__CastX_31 == mercury__getopt__CastY_32);
    if (mercury__getopt__succeeded)
      mercury__getopt__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mercury__getopt__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_Word mercury__getopt__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__getopt__ArgY1_4;
            MR_Word mercury__getopt__ArgX2_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mercury__getopt__ArgY2_6;
            MR_Word mercury__getopt__ArgX3_7 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__1_1, (MR_Integer) 2)));
            MR_Word mercury__getopt__ArgY3_8;

            mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
            if (mercury__getopt__succeeded)
            {
              mercury__getopt__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
              mercury__getopt__ArgY2_6 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));
              mercury__getopt__ArgY3_8 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 2)));
              mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__ArgX1_3, (MR_Word) mercury__getopt__ArgY1_4);
              if (mercury__getopt__succeeded)
              {
                mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__ArgX2_5, (MR_Word) mercury__getopt__ArgY2_6);
                if (mercury__getopt__succeeded)
                  mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__ArgX3_7, (MR_Word) mercury__getopt__ArgY3_8);
              }
            }
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mercury__getopt__ArgX1_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__getopt__ArgY1_10;
            MR_Word mercury__getopt__ArgX2_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mercury__getopt__ArgY2_12;
            MR_Word mercury__getopt__ArgX3_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__1_1, (MR_Integer) 2)));
            MR_Word mercury__getopt__ArgY3_14;
            MR_Word mercury__getopt__ArgX4_15 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__1_1, (MR_Integer) 3)));
            MR_Word mercury__getopt__ArgY4_16;

            mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__getopt__succeeded)
            {
              mercury__getopt__ArgY1_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
              mercury__getopt__ArgY2_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));
              mercury__getopt__ArgY3_14 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 2)));
              mercury__getopt__ArgY4_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 3)));
              mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__ArgX1_9, (MR_Word) mercury__getopt__ArgY1_10);
              if (mercury__getopt__succeeded)
              {
                mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__ArgX2_11, (MR_Word) mercury__getopt__ArgY2_12);
                if (mercury__getopt__succeeded)
                {
                  mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__ArgX3_13, (MR_Word) mercury__getopt__ArgY3_14);
                  if (mercury__getopt__succeeded)
                    mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__ArgX4_15, (MR_Word) mercury__getopt__ArgY4_16);
                }
              }
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mercury__getopt__ArgX1_17 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__getopt__ArgY1_18;
            MR_Word mercury__getopt__ArgX2_19 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mercury__getopt__ArgY2_20;
            MR_Word mercury__getopt__ArgX3_21 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__1_1, (MR_Integer) 2)));
            MR_Word mercury__getopt__ArgY3_22;

            mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mercury__getopt__succeeded)
            {
              mercury__getopt__ArgY1_18 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
              mercury__getopt__ArgY2_20 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));
              mercury__getopt__ArgY3_22 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__2_2, (MR_Integer) 2)));
              mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__ArgX1_17, (MR_Word) mercury__getopt__ArgY1_18);
              if (mercury__getopt__succeeded)
              {
                mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__ArgX2_19, (MR_Word) mercury__getopt__ArgY2_20);
                if (mercury__getopt__succeeded)
                  mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__ArgX3_21, (MR_Word) mercury__getopt__ArgY3_22);
              }
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_Word mercury__getopt__ArgX1_23 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__getopt__ArgY1_24;
            MR_Word mercury__getopt__ArgX2_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__1_1, (MR_Integer) 1)));
            MR_Word mercury__getopt__ArgY2_26;
            MR_Word mercury__getopt__ArgX3_27 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__1_1, (MR_Integer) 2)));
            MR_Word mercury__getopt__ArgY3_28;
            MR_Word mercury__getopt__ArgX4_29 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__1_1, (MR_Integer) 3)));
            MR_Word mercury__getopt__ArgY4_30;

            mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
            if (mercury__getopt__succeeded)
            {
              mercury__getopt__ArgY1_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
              mercury__getopt__ArgY2_26 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));
              mercury__getopt__ArgY3_28 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 2)));
              mercury__getopt__ArgY4_30 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 3)));
              mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__ArgX1_23, (MR_Word) mercury__getopt__ArgY1_24);
              if (mercury__getopt__succeeded)
              {
                mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__ArgX2_25, (MR_Word) mercury__getopt__ArgY2_26);
                if (mercury__getopt__succeeded)
                {
                  mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__ArgX3_27, (MR_Word) mercury__getopt__ArgY3_28);
                  if (mercury__getopt__succeeded)
                    mercury__getopt__succeeded = mercury__private_builtin__builtin_unify_pred_2_p_0((MR_Word) mercury__getopt__ArgX4_29, (MR_Word) mercury__getopt__ArgY4_30);
                }
              }
            }
          }
          break;
      }
    return mercury__getopt__succeeded;
  }
}

void MR_CALL 
mercury__getopt____Compare____option_data_0_0(
  MR_Word * mercury__getopt__HeadVar__1_1,
  MR_Word mercury__getopt__HeadVar__2_2,
  MR_Word mercury__getopt__HeadVar__3_3)
{
  {
    MR_bool mercury__getopt__succeeded;
    MR_Integer mercury__getopt__CastX_136 = (MR_Integer) mercury__getopt__HeadVar__2_2;
    MR_Integer mercury__getopt__CastY_137 = (MR_Integer) mercury__getopt__HeadVar__3_3;

    mercury__getopt__succeeded = (mercury__getopt__CastX_136 == mercury__getopt__CastY_137);
    if (mercury__getopt__succeeded)
      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mercury__getopt__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mercury__getopt__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mercury__getopt__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 2:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 2:
              switch (MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mercury__getopt__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 3:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 3:
              switch (MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mercury__getopt__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 4:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                  }
                  break;
              }
              break;
            case (MR_Integer) 4:
              switch (MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mercury__getopt__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 3:
                  switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                  }
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mercury__getopt__Var_145 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(mercury__getopt__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_Word mercury__getopt__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer mercury__getopt__Var_150 = (MR_Integer) mercury__getopt__Var_145;
                  MR_Integer mercury__getopt__Var_151 = (MR_Integer) mercury__getopt__ArgY1_5;

                  mercury__getopt__succeeded = (mercury__getopt__Var_150 < mercury__getopt__Var_151);
                  if (mercury__getopt__succeeded)
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    mercury__getopt__succeeded = (mercury__getopt__Var_150 == mercury__getopt__Var_151);
                    if (mercury__getopt__succeeded)
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
                    else
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                  }
                }
                break;
              case (MR_Integer) 2:
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer mercury__getopt__Var_146 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(mercury__getopt__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_Integer mercury__getopt__ArgY1_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)));

                  mercury__getopt__succeeded = (mercury__getopt__Var_146 < mercury__getopt__ArgY1_24);
                  if (mercury__getopt__succeeded)
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    mercury__getopt__succeeded = (mercury__getopt__Var_146 == mercury__getopt__ArgY1_24);
                    if (mercury__getopt__succeeded)
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
                    else
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                  }
                }
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String mercury__getopt__Var_149 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(mercury__getopt__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 1:
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 4:
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_String mercury__getopt__ArgY1_43 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 1)));
                          MR_Integer mercury__getopt__V_7_161;

{
#define MR_PROC_LABEL mercury__getopt____Compare____option_data_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__getopt__Var_149 ;
	S2 =  mercury__getopt__ArgY1_43 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__getopt__V_7_161  = Res;
}
                          mercury__getopt__succeeded = (mercury__getopt__V_7_161 < (MR_Integer) 0);
                          if (mercury__getopt__succeeded)
                            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                          else
                          {
                            mercury__getopt__succeeded = (mercury__getopt__V_7_161 == (MR_Integer) 0);
                            if (mercury__getopt__succeeded)
                              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
                            else
                              *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                          }
                        }
                        break;
                      case (MR_Integer) 1:
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word mercury__getopt__Var_147 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(mercury__getopt__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 1:
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 4:
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word mercury__getopt__TypeInfo_140_140 = (MR_Word) &mercury__getopt_scalar_common_1[2];
                          MR_Word mercury__getopt__ArgY1_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 1)));

                          mercury__builtin__compare_3_p_0(mercury__getopt__TypeInfo_140_140, mercury__getopt__HeadVar__1_1, ((MR_Box) (mercury__getopt__Var_147)), ((MR_Box) (mercury__getopt__ArgY1_62)));
                        }
                        break;
                      case (MR_Integer) 2:
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word mercury__getopt__Var_148 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(mercury__getopt__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 1:
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 4:
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        {
                          MR_Word mercury__getopt__TypeInfo_139_139 = (MR_Word) &mercury__getopt_scalar_common_1[1];
                          MR_Word mercury__getopt__ArgY1_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 1)));

                          mercury__builtin__compare_3_p_0(mercury__getopt__TypeInfo_139_139, mercury__getopt__HeadVar__1_1, ((MR_Box) (mercury__getopt__Var_148)), ((MR_Box) (mercury__getopt__ArgY1_81)));
                        }
                        break;
                      case (MR_Integer) 3:
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word mercury__getopt__Var_144 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));

                switch (MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    switch (MR_unmkbody(mercury__getopt__HeadVar__3_3)) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 1:
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 2:
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 3:
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                      case (MR_Integer) 4:
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                        break;
                    }
                    break;
                  case (MR_Integer) 1:
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 2:
                        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 3:
                        {
                          MR_Word mercury__getopt__TypeInfo_138_138 = (MR_Word) &mercury__getopt_scalar_common_1[0];
                          MR_Word mercury__getopt__ArgY1_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 1)));

                          mercury__builtin__compare_3_p_0(mercury__getopt__TypeInfo_138_138, mercury__getopt__HeadVar__1_1, ((MR_Box) (mercury__getopt__Var_144)), ((MR_Box) (mercury__getopt__ArgY1_100)));
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
  MR_Word mercury__getopt__HeadVar__1_1,
  MR_Word mercury__getopt__HeadVar__2_2)
{
  {
    MR_bool mercury__getopt__succeeded;
    MR_Integer mercury__getopt__CastX_25 = (MR_Integer) mercury__getopt__HeadVar__1_1;
    MR_Integer mercury__getopt__CastY_26 = (MR_Integer) mercury__getopt__HeadVar__2_2;

    mercury__getopt__succeeded = (mercury__getopt__CastX_25 == mercury__getopt__CastY_26);
    if (mercury__getopt__succeeded)
      mercury__getopt__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mercury__getopt__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mercury__getopt__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer mercury__getopt__CastX_15 = (MR_Integer) mercury__getopt__HeadVar__1_1;
                MR_Integer mercury__getopt__CastY_16 = (MR_Integer) mercury__getopt__HeadVar__2_2;

                mercury__getopt__succeeded = (mercury__getopt__CastY_16 == mercury__getopt__CastX_15);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer mercury__getopt__CastX_17 = (MR_Integer) mercury__getopt__HeadVar__1_1;
                MR_Integer mercury__getopt__CastY_18 = (MR_Integer) mercury__getopt__HeadVar__2_2;

                mercury__getopt__succeeded = (mercury__getopt__CastY_18 == mercury__getopt__CastX_17);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer mercury__getopt__CastX_19 = (MR_Integer) mercury__getopt__HeadVar__1_1;
                MR_Integer mercury__getopt__CastY_20 = (MR_Integer) mercury__getopt__HeadVar__2_2;

                mercury__getopt__succeeded = (mercury__getopt__CastY_20 == mercury__getopt__CastX_19);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer mercury__getopt__CastX_21 = (MR_Integer) mercury__getopt__HeadVar__1_1;
                MR_Integer mercury__getopt__CastY_22 = (MR_Integer) mercury__getopt__HeadVar__2_2;

                mercury__getopt__succeeded = (mercury__getopt__CastY_22 == mercury__getopt__CastX_21);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Integer mercury__getopt__CastX_23 = (MR_Integer) mercury__getopt__HeadVar__1_1;
                MR_Integer mercury__getopt__CastY_24 = (MR_Integer) mercury__getopt__HeadVar__2_2;

                mercury__getopt__succeeded = (mercury__getopt__CastY_24 == mercury__getopt__CastX_23);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mercury__getopt__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
            MR_Word mercury__getopt__ArgY1_4;

            mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__getopt__succeeded)
            {
              mercury__getopt__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
              mercury__getopt__succeeded = (mercury__getopt__ArgX1_3 == mercury__getopt__ArgY1_4);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Integer mercury__getopt__ArgX1_5 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
            MR_Integer mercury__getopt__ArgY1_6;

            mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mercury__getopt__succeeded)
            {
              mercury__getopt__ArgY1_6 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
              mercury__getopt__succeeded = (mercury__getopt__ArgX1_5 == mercury__getopt__ArgY1_6);
            }
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String mercury__getopt__ArgX1_7 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__1_1, (MR_Integer) 1)));
                MR_String mercury__getopt__ArgY1_8;

                mercury__getopt__succeeded = ((((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 0)));
                if (mercury__getopt__succeeded)
                {
                  mercury__getopt__ArgY1_8 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));
                  mercury__getopt__succeeded = (strcmp(mercury__getopt__ArgX1_7, mercury__getopt__ArgY1_8) == 0);
                }
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word mercury__getopt__TypeInfo_28_28;
                MR_Word mercury__getopt__ArgX1_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word mercury__getopt__ArgY1_10;

                mercury__getopt__succeeded = ((((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (mercury__getopt__succeeded)
                {
                  mercury__getopt__ArgY1_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));
                  mercury__getopt__TypeInfo_28_28 = (MR_Word) &mercury__getopt_scalar_common_1[2];
                  mercury__getopt__succeeded = mercury__builtin__unify_2_p_0(mercury__getopt__TypeInfo_28_28, ((MR_Box) (mercury__getopt__ArgX1_9)), ((MR_Box) (mercury__getopt__ArgY1_10)));
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word mercury__getopt__TypeInfo_29_29;
                MR_Word mercury__getopt__ArgX1_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word mercury__getopt__ArgY1_12;

                mercury__getopt__succeeded = ((((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (mercury__getopt__succeeded)
                {
                  mercury__getopt__ArgY1_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));
                  mercury__getopt__TypeInfo_29_29 = (MR_Word) &mercury__getopt_scalar_common_1[1];
                  mercury__getopt__succeeded = mercury__builtin__unify_2_p_0(mercury__getopt__TypeInfo_29_29, ((MR_Box) (mercury__getopt__ArgX1_11)), ((MR_Box) (mercury__getopt__ArgY1_12)));
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word mercury__getopt__TypeInfo_27_27;
                MR_Word mercury__getopt__ArgX1_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__1_1, (MR_Integer) 1)));
                MR_Word mercury__getopt__ArgY1_14;

                mercury__getopt__succeeded = ((((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (mercury__getopt__succeeded)
                {
                  mercury__getopt__ArgY1_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));
                  mercury__getopt__TypeInfo_27_27 = (MR_Word) &mercury__getopt_scalar_common_1[0];
                  mercury__getopt__succeeded = mercury__builtin__unify_2_p_0(mercury__getopt__TypeInfo_27_27, ((MR_Box) (mercury__getopt__ArgX1_13)), ((MR_Box) (mercury__getopt__ArgY1_14)));
                }
              }
              break;
          }
          break;
      }
    return mercury__getopt__succeeded;
  }
}

void MR_CALL 
mercury__getopt____Compare____maybe_option_table_se_1_0(
  MR_Word mercury__getopt__TypeInfo_for_OptionType_14,
  MR_Word * mercury__getopt__HeadVar__1_1,
  MR_Word mercury__getopt__HeadVar__2_2,
  MR_Word mercury__getopt__HeadVar__3_3)
{
  {
    MR_bool mercury__getopt__succeeded;
    MR_Integer mercury__getopt__CastX_12 = (MR_Integer) mercury__getopt__HeadVar__2_2;
    MR_Integer mercury__getopt__CastY_13 = (MR_Integer) mercury__getopt__HeadVar__3_3;

    mercury__getopt__succeeded = (mercury__getopt__CastX_12 == mercury__getopt__CastY_13);
    if (mercury__getopt__succeeded)
      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word mercury__getopt__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Word mercury__getopt__ArgY1_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)));

        mercury__getopt____Compare____option_error_1_0(mercury__getopt__TypeInfo_for_OptionType_14, mercury__getopt__HeadVar__1_1, mercury__getopt__Var_20, mercury__getopt__ArgY1_11);
      }
      else
        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
    }
    else
    {
      MR_Word mercury__getopt__Var_21 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word mercury__getopt__TypeCtorInfo_17_17 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
        MR_Word mercury__getopt__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)));

        mercury__tree234____Compare____tree234_2_0(mercury__getopt__TypeInfo_for_OptionType_14, mercury__getopt__TypeCtorInfo_17_17, mercury__getopt__HeadVar__1_1, mercury__getopt__Var_21, mercury__getopt__ArgY1_5);
      }
    }
  }
}

void MR_CALL 
mercury__getopt____Compare____option_error_1_0(
  MR_Word mercury__getopt__TypeInfo_for_OptionType_24,
  MR_Word * mercury__getopt__HeadVar__1_1,
  MR_Word mercury__getopt__HeadVar__2_2,
  MR_Word mercury__getopt__HeadVar__3_3)
{
  {
    MR_bool mercury__getopt__succeeded;
    MR_Integer mercury__getopt__CastX_22 = (MR_Integer) mercury__getopt__HeadVar__2_2;
    MR_Integer mercury__getopt__CastY_23 = (MR_Integer) mercury__getopt__HeadVar__3_3;

    mercury__getopt__succeeded = (mercury__getopt__CastX_22 == mercury__getopt__CastY_23);
    if (mercury__getopt__succeeded)
      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word mercury__getopt__Var_28 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 2)));
      MR_String mercury__getopt__Var_29 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));
      MR_Box mercury__getopt__Var_30 = (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 0));

      if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_Box mercury__getopt__ArgY1_15 = (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__3_3, (MR_Integer) 0));
        MR_String mercury__getopt__ArgY2_17 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__3_3, (MR_Integer) 1)));
        MR_Word mercury__getopt__ArgY3_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__3_3, (MR_Integer) 2)));
        MR_Word mercury__getopt__Var_20;

        mercury__builtin__compare_3_p_0(mercury__getopt__TypeInfo_for_OptionType_24, &mercury__getopt__Var_20, mercury__getopt__Var_30, mercury__getopt__ArgY1_15);
        mercury__getopt__succeeded = (mercury__getopt__Var_20 == (MR_Integer) 0);
        mercury__getopt__succeeded = !(mercury__getopt__succeeded);
        if (mercury__getopt__succeeded)
          *mercury__getopt__HeadVar__1_1 = mercury__getopt__Var_20;
        else
        {
          MR_Word mercury__getopt__Var_21;
          MR_Integer mercury__getopt__V_7_35;

{
#define MR_PROC_LABEL mercury__getopt____Compare____option_error_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__getopt__Var_29 ;
	S2 =  mercury__getopt__ArgY2_17 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__getopt__V_7_35  = Res;
}
          mercury__getopt__succeeded = (mercury__getopt__V_7_35 < (MR_Integer) 0);
          if (mercury__getopt__succeeded)
            mercury__getopt__Var_21 = (MR_Integer) 1;
          else
          {
            mercury__getopt__succeeded = (mercury__getopt__V_7_35 == (MR_Integer) 0);
            if (mercury__getopt__succeeded)
              mercury__getopt__Var_21 = (MR_Integer) 0;
            else
              mercury__getopt__Var_21 = (MR_Integer) 2;
          }
          mercury__getopt__succeeded = (mercury__getopt__Var_21 == (MR_Integer) 0);
          mercury__getopt__succeeded = !(mercury__getopt__succeeded);
          if (mercury__getopt__succeeded)
            *mercury__getopt__HeadVar__1_1 = mercury__getopt__Var_21;
          else
            mercury__getopt____Compare____option_error_reason_0_0(mercury__getopt__HeadVar__1_1, mercury__getopt__Var_28, mercury__getopt__ArgY3_19);
        }
      }
      else
        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
    }
    else
    {
      MR_String mercury__getopt__Var_31 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_String mercury__getopt__ArgY1_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer mercury__getopt__V_7_40;

{
#define MR_PROC_LABEL mercury__getopt____Compare____option_error_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__getopt__Var_31 ;
	S2 =  mercury__getopt__ArgY1_5 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__getopt__V_7_40  = Res;
}
        mercury__getopt__succeeded = (mercury__getopt__V_7_40 < (MR_Integer) 0);
        if (mercury__getopt__succeeded)
          *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          mercury__getopt__succeeded = (mercury__getopt__V_7_40 == (MR_Integer) 0);
          if (mercury__getopt__succeeded)
            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
          else
            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
        }
      }
    }
  }
}

void MR_CALL 
mercury__getopt____Compare____option_error_reason_0_0(
  MR_Word * mercury__getopt__HeadVar__1_1,
  MR_Word mercury__getopt__HeadVar__2_2,
  MR_Word mercury__getopt__HeadVar__3_3)
{
  {
    MR_bool mercury__getopt__succeeded;
    MR_Integer mercury__getopt__CastX_52 = (MR_Integer) mercury__getopt__HeadVar__2_2;
    MR_Integer mercury__getopt__CastY_53 = (MR_Integer) mercury__getopt__HeadVar__3_3;

    mercury__getopt__succeeded = (mercury__getopt__CastX_52 == mercury__getopt__CastY_53);
    if (mercury__getopt__succeeded)
      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
    else
      switch (MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mercury__getopt__HeadVar__2_2)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mercury__getopt__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 1:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 2:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              switch (MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mercury__getopt__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 2:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 3:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 2:
              switch (MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mercury__getopt__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 3:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                    case (MR_Integer) 4:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 3:
              switch (MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mercury__getopt__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                    case (MR_Integer) 4:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 4:
              switch (MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  switch (MR_unmkbody(mercury__getopt__HeadVar__3_3)) {
                    default: /*NOTREACHED*/ MR_assert(0);
                    case (MR_Integer) 0:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 1:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 2:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 3:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                      break;
                    case (MR_Integer) 4:
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
                      break;
                  }
                  break;
                case (MR_Integer) 1:
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                  break;
                case (MR_Integer) 2:
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                  break;
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String mercury__getopt__Var_57 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(mercury__getopt__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                {
                  MR_String mercury__getopt__ArgY1_13 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer mercury__getopt__V_7_63;

{
#define MR_PROC_LABEL mercury__getopt____Compare____option_error_reason_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__getopt__Var_57 ;
	S2 =  mercury__getopt__ArgY1_13 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__getopt__V_7_63  = Res;
}
                  mercury__getopt__succeeded = (mercury__getopt__V_7_63 < (MR_Integer) 0);
                  if (mercury__getopt__succeeded)
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    mercury__getopt__succeeded = (mercury__getopt__V_7_63 == (MR_Integer) 0);
                    if (mercury__getopt__succeeded)
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
                    else
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                  }
                }
                break;
              case (MR_Integer) 2:
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String mercury__getopt__Var_59 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(mercury__getopt__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 4:
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                {
                  MR_String mercury__getopt__ArgY1_38 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer mercury__getopt__V_7_73;

{
#define MR_PROC_LABEL mercury__getopt____Compare____option_error_reason_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__getopt__Var_59 ;
	S2 =  mercury__getopt__ArgY1_38 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__getopt__V_7_73  = Res;
}
                  mercury__getopt__succeeded = (mercury__getopt__V_7_73 < (MR_Integer) 0);
                  if (mercury__getopt__succeeded)
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    mercury__getopt__succeeded = (mercury__getopt__V_7_73 == (MR_Integer) 0);
                    if (mercury__getopt__succeeded)
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
                    else
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                  }
                }
                break;
              case (MR_Integer) 3:
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                break;
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_String mercury__getopt__Var_58 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));

            switch (MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(mercury__getopt__HeadVar__3_3)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 1:
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 2:
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 3:
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                  case (MR_Integer) 4:
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                    break;
                }
                break;
              case (MR_Integer) 1:
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 2:
                *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
                break;
              case (MR_Integer) 3:
                {
                  MR_String mercury__getopt__ArgY1_51 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer mercury__getopt__V_7_68;

{
#define MR_PROC_LABEL mercury__getopt____Compare____option_error_reason_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__getopt__Var_58 ;
	S2 =  mercury__getopt__ArgY1_51 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__getopt__V_7_68  = Res;
}
                  mercury__getopt__succeeded = (mercury__getopt__V_7_68 < (MR_Integer) 0);
                  if (mercury__getopt__succeeded)
                    *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
                  else
                  {
                    mercury__getopt__succeeded = (mercury__getopt__V_7_68 == (MR_Integer) 0);
                    if (mercury__getopt__succeeded)
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
                    else
                      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
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
  MR_Word mercury__getopt__TypeInfo_for_OptionType_9,
  MR_Word mercury__getopt__HeadVar__1_1,
  MR_Word mercury__getopt__HeadVar__2_2)
{
  {
    MR_bool mercury__getopt__succeeded;
    MR_Integer mercury__getopt__CastX_7 = (MR_Integer) mercury__getopt__HeadVar__1_1;
    MR_Integer mercury__getopt__CastY_8 = (MR_Integer) mercury__getopt__HeadVar__2_2;

    mercury__getopt__succeeded = (mercury__getopt__CastX_7 == mercury__getopt__CastY_8);
    if (mercury__getopt__succeeded)
      mercury__getopt__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) mercury__getopt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word mercury__getopt__ArgX1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word mercury__getopt__ArgY1_6;

      mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (mercury__getopt__succeeded)
      {
        mercury__getopt__ArgY1_6 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
        mercury__getopt__succeeded = mercury__getopt____Unify____option_error_1_0(mercury__getopt__TypeInfo_for_OptionType_9, mercury__getopt__ArgX1_5, mercury__getopt__ArgY1_6);
      }
    }
    else
    {
      MR_Word mercury__getopt__TypeCtorInfo_10_10;
      MR_Word mercury__getopt__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word mercury__getopt__ArgY1_4;

      mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
      if (mercury__getopt__succeeded)
      {
        mercury__getopt__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
        mercury__getopt__TypeCtorInfo_10_10 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
        mercury__getopt__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__getopt__TypeInfo_for_OptionType_9, mercury__getopt__TypeCtorInfo_10_10, mercury__getopt__ArgX1_3, mercury__getopt__ArgY1_4);
      }
    }
    return mercury__getopt__succeeded;
  }
}

MR_bool MR_CALL 
mercury__getopt____Unify____option_error_1_0(
  MR_Word mercury__getopt__TypeInfo_for_OptionType_13,
  MR_Word mercury__getopt__HeadVar__1_1,
  MR_Word mercury__getopt__HeadVar__2_2)
{
  {
    MR_bool mercury__getopt__succeeded;
    MR_Integer mercury__getopt__CastX_11 = (MR_Integer) mercury__getopt__HeadVar__1_1;
    MR_Integer mercury__getopt__CastY_12 = (MR_Integer) mercury__getopt__HeadVar__2_2;

    mercury__getopt__succeeded = (mercury__getopt__CastX_11 == mercury__getopt__CastY_12);
    if (mercury__getopt__succeeded)
      mercury__getopt__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) mercury__getopt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Box mercury__getopt__ArgX1_5 = (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__1_1, (MR_Integer) 0));
      MR_Box mercury__getopt__ArgY1_6;
      MR_String mercury__getopt__ArgX2_7 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__1_1, (MR_Integer) 1)));
      MR_String mercury__getopt__ArgY2_8;
      MR_Word mercury__getopt__ArgX3_9 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__1_1, (MR_Integer) 2)));
      MR_Word mercury__getopt__ArgY3_10;

      mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (mercury__getopt__succeeded)
      {
        mercury__getopt__ArgY1_6 = (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 0));
        mercury__getopt__ArgY2_8 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 1)));
        mercury__getopt__ArgY3_10 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 2)));
        mercury__getopt__succeeded = mercury__builtin__unify_2_p_0(mercury__getopt__TypeInfo_for_OptionType_13, mercury__getopt__ArgX1_5, mercury__getopt__ArgY1_6);
        if (mercury__getopt__succeeded)
        {
          mercury__getopt__succeeded = (strcmp(mercury__getopt__ArgX2_7, mercury__getopt__ArgY2_8) == 0);
          if (mercury__getopt__succeeded)
            mercury__getopt__succeeded = mercury__getopt____Unify____option_error_reason_0_0(mercury__getopt__ArgX3_9, mercury__getopt__ArgY3_10);
        }
      }
    }
    else
    {
      MR_String mercury__getopt__ArgX1_3 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
      MR_String mercury__getopt__ArgY1_4;

      mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
      if (mercury__getopt__succeeded)
      {
        mercury__getopt__ArgY1_4 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
        mercury__getopt__succeeded = (strcmp(mercury__getopt__ArgX1_3, mercury__getopt__ArgY1_4) == 0);
      }
    }
    return mercury__getopt__succeeded;
  }
}

MR_bool MR_CALL 
mercury__getopt____Unify____option_error_reason_0_0(
  MR_Word mercury__getopt__HeadVar__1_1,
  MR_Word mercury__getopt__HeadVar__2_2)
{
  {
    MR_bool mercury__getopt__succeeded;
    MR_Integer mercury__getopt__CastX_19 = (MR_Integer) mercury__getopt__HeadVar__1_1;
    MR_Integer mercury__getopt__CastY_20 = (MR_Integer) mercury__getopt__HeadVar__2_2;

    mercury__getopt__succeeded = (mercury__getopt__CastX_19 == mercury__getopt__CastY_20);
    if (mercury__getopt__succeeded)
      mercury__getopt__succeeded = MR_TRUE;
    else
      switch (MR_tag((MR_Word) mercury__getopt__HeadVar__1_1)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mercury__getopt__HeadVar__1_1)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Integer mercury__getopt__CastX_3 = (MR_Integer) mercury__getopt__HeadVar__1_1;
                MR_Integer mercury__getopt__CastY_4 = (MR_Integer) mercury__getopt__HeadVar__2_2;

                mercury__getopt__succeeded = (mercury__getopt__CastY_4 == mercury__getopt__CastX_3);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Integer mercury__getopt__CastX_5 = (MR_Integer) mercury__getopt__HeadVar__1_1;
                MR_Integer mercury__getopt__CastY_6 = (MR_Integer) mercury__getopt__HeadVar__2_2;

                mercury__getopt__succeeded = (mercury__getopt__CastY_6 == mercury__getopt__CastX_5);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Integer mercury__getopt__CastX_9 = (MR_Integer) mercury__getopt__HeadVar__1_1;
                MR_Integer mercury__getopt__CastY_10 = (MR_Integer) mercury__getopt__HeadVar__2_2;

                mercury__getopt__succeeded = (mercury__getopt__CastY_10 == mercury__getopt__CastX_9);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Integer mercury__getopt__CastX_11 = (MR_Integer) mercury__getopt__HeadVar__1_1;
                MR_Integer mercury__getopt__CastY_12 = (MR_Integer) mercury__getopt__HeadVar__2_2;

                mercury__getopt__succeeded = (mercury__getopt__CastY_12 == mercury__getopt__CastX_11);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Integer mercury__getopt__CastX_13 = (MR_Integer) mercury__getopt__HeadVar__1_1;
                MR_Integer mercury__getopt__CastY_14 = (MR_Integer) mercury__getopt__HeadVar__2_2;

                mercury__getopt__succeeded = (mercury__getopt__CastY_14 == mercury__getopt__CastX_13);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String mercury__getopt__ArgX1_7 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
            MR_String mercury__getopt__ArgY1_8;

            mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__getopt__succeeded)
            {
              mercury__getopt__ArgY1_8 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
              mercury__getopt__succeeded = (strcmp(mercury__getopt__ArgX1_7, mercury__getopt__ArgY1_8) == 0);
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_String mercury__getopt__ArgX1_15 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
            MR_String mercury__getopt__ArgY1_16;

            mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 2)));
            if (mercury__getopt__succeeded)
            {
              mercury__getopt__ArgY1_16 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
              mercury__getopt__succeeded = (strcmp(mercury__getopt__ArgX1_15, mercury__getopt__ArgY1_16) == 0);
            }
          }
          break;
        case (MR_Integer) 3:
          {
            MR_String mercury__getopt__ArgX1_17 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
            MR_String mercury__getopt__ArgY1_18;

            mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
            if (mercury__getopt__succeeded)
            {
              mercury__getopt__ArgY1_18 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
              mercury__getopt__succeeded = (strcmp(mercury__getopt__ArgX1_17, mercury__getopt__ArgY1_18) == 0);
            }
          }
          break;
      }
    return mercury__getopt__succeeded;
  }
}

void MR_CALL 
mercury__getopt____Compare____maybe_option_table_1_0(
  MR_Word mercury__getopt__TypeInfo_for_OptionType_14,
  MR_Word * mercury__getopt__HeadVar__1_1,
  MR_Word mercury__getopt__HeadVar__2_2,
  MR_Word mercury__getopt__HeadVar__3_3)
{
  {
    MR_bool mercury__getopt__succeeded;
    MR_Integer mercury__getopt__CastX_12 = (MR_Integer) mercury__getopt__HeadVar__2_2;
    MR_Integer mercury__getopt__CastY_13 = (MR_Integer) mercury__getopt__HeadVar__3_3;

    mercury__getopt__succeeded = (mercury__getopt__CastX_12 == mercury__getopt__CastY_13);
    if (mercury__getopt__succeeded)
      *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
    else
    if (((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_String mercury__getopt__Var_19 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
      {
        MR_String mercury__getopt__ArgY1_11 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)));
        MR_Integer mercury__getopt__V_7_24;

{
#define MR_PROC_LABEL mercury__getopt____Compare____maybe_option_table_1_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  mercury__getopt__Var_19 ;
	S2 =  mercury__getopt__ArgY1_11 ;
		{

    Res = strcmp(S1, S2);


		;}
#undef MR_PROC_LABEL
	 mercury__getopt__V_7_24  = Res;
}
        mercury__getopt__succeeded = (mercury__getopt__V_7_24 < (MR_Integer) 0);
        if (mercury__getopt__succeeded)
          *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
        else
        {
          mercury__getopt__succeeded = (mercury__getopt__V_7_24 == (MR_Integer) 0);
          if (mercury__getopt__succeeded)
            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 0;
          else
            *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
        }
      }
      else
        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 2;
    }
    else
    {
      MR_Word mercury__getopt__Var_20 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));

      if (((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1))))
        *mercury__getopt__HeadVar__1_1 = (MR_Integer) 1;
      else
      {
        MR_Word mercury__getopt__TypeCtorInfo_16_16 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
        MR_Word mercury__getopt__ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)));

        mercury__tree234____Compare____tree234_2_0(mercury__getopt__TypeInfo_for_OptionType_14, mercury__getopt__TypeCtorInfo_16_16, mercury__getopt__HeadVar__1_1, mercury__getopt__Var_20, mercury__getopt__ArgY1_5);
      }
    }
  }
}

MR_bool MR_CALL 
mercury__getopt____Unify____maybe_option_table_1_0(
  MR_Word mercury__getopt__TypeInfo_for_OptionType_9,
  MR_Word mercury__getopt__HeadVar__1_1,
  MR_Word mercury__getopt__HeadVar__2_2)
{
  {
    MR_bool mercury__getopt__succeeded;
    MR_Integer mercury__getopt__CastX_7 = (MR_Integer) mercury__getopt__HeadVar__1_1;
    MR_Integer mercury__getopt__CastY_8 = (MR_Integer) mercury__getopt__HeadVar__2_2;

    mercury__getopt__succeeded = (mercury__getopt__CastX_7 == mercury__getopt__CastY_8);
    if (mercury__getopt__succeeded)
      mercury__getopt__succeeded = MR_TRUE;
    else
    if (((MR_tag((MR_Word) mercury__getopt__HeadVar__1_1)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_String mercury__getopt__ArgX1_5 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
      MR_String mercury__getopt__ArgY1_6;

      mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 1)));
      if (mercury__getopt__succeeded)
      {
        mercury__getopt__ArgY1_6 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
        mercury__getopt__succeeded = (strcmp(mercury__getopt__ArgX1_5, mercury__getopt__ArgY1_6) == 0);
      }
    }
    else
    {
      MR_Word mercury__getopt__TypeCtorInfo_10_10;
      MR_Word mercury__getopt__ArgX1_3 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
      MR_Word mercury__getopt__ArgY1_4;

      mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__HeadVar__2_2)) == (MR_mktag((MR_Integer) 0)));
      if (mercury__getopt__succeeded)
      {
        mercury__getopt__ArgY1_4 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__HeadVar__2_2, (MR_Integer) 0)));
        mercury__getopt__TypeCtorInfo_10_10 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
        mercury__getopt__succeeded = mercury__tree234____Unify____tree234_2_0(mercury__getopt__TypeInfo_for_OptionType_9, mercury__getopt__TypeCtorInfo_10_10, mercury__getopt__ArgX1_3, mercury__getopt__ArgY1_4);
      }
    }
    return mercury__getopt__succeeded;
  }
}

MR_Word MR_CALL 
mercury__getopt__lookup_accumulating_option_2_f_0(
  MR_Word mercury__getopt__TypeInfo_for_Option_7,
  MR_Word mercury__getopt__OT_4,
  MR_Box mercury__getopt__Opt_5)
{
  {
    MR_bool mercury__getopt__succeeded;
    MR_Word mercury__getopt__Ss_6;
    MR_Word mercury__getopt__Val0_11;
    MR_Word mercury__getopt__TypeCtorInfo_11_14 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
    MR_Word mercury__getopt__Var_12;
    MR_Box mercury__getopt__conv0_Var_12;

    mercury__map__lookup_3_p_0(mercury__getopt__TypeInfo_for_Option_7, mercury__getopt__TypeCtorInfo_11_14, mercury__getopt__OT_4, mercury__getopt__Opt_5, &mercury__getopt__conv0_Var_12);
    mercury__getopt__Var_12 = ((MR_Word) mercury__getopt__conv0_Var_12);
    mercury__getopt__succeeded = ((((MR_tag((MR_Word) mercury__getopt__Var_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__Var_12, (MR_Integer) 0)))) == (MR_Integer) 3)));
    if (mercury__getopt__succeeded)
    {
      mercury__getopt__Val0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__Var_12, (MR_Integer) 1)));
      mercury__getopt__Ss_6 = mercury__getopt__Val0_11;
    }
    else
    {
      mercury__require__error_1_p_0((MR_String) "Expected accumulating option and didn\'t get one.");
    }
    return mercury__getopt__Ss_6;
  }
}

void MR_CALL 
mercury__getopt__lookup_accumulating_option_3_p_0(
  MR_Word mercury__getopt__TypeInfo_for_Option_10,
  MR_Word mercury__getopt__OptionTable_4,
  MR_Box mercury__getopt__Opt_5,
  MR_Word * mercury__getopt__Val_6)
{
  {
    MR_bool mercury__getopt__succeeded;
    MR_Word mercury__getopt__Val0_7;
    MR_Word mercury__getopt__TypeCtorInfo_11_11 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
    MR_Word mercury__getopt__Var_8;
    MR_Box mercury__getopt__conv0_Var_8;

    mercury__map__lookup_3_p_0(mercury__getopt__TypeInfo_for_Option_10, mercury__getopt__TypeCtorInfo_11_11, mercury__getopt__OptionTable_4, mercury__getopt__Opt_5, &mercury__getopt__conv0_Var_8);
    mercury__getopt__Var_8 = ((MR_Word) mercury__getopt__conv0_Var_8);
    mercury__getopt__succeeded = ((((MR_tag((MR_Word) mercury__getopt__Var_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__Var_8, (MR_Integer) 0)))) == (MR_Integer) 3)));
    if (mercury__getopt__succeeded)
    {
      mercury__getopt__Val0_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__Var_8, (MR_Integer) 1)));
      *mercury__getopt__Val_6 = mercury__getopt__Val0_7;
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
mercury__getopt__lookup_maybe_string_option_2_f_0(
  MR_Word mercury__getopt__TypeInfo_for_Option_7,
  MR_Word mercury__getopt__OT_4,
  MR_Box mercury__getopt__Opt_5)
{
  {
    MR_bool mercury__getopt__succeeded;
    MR_Word mercury__getopt__MS_6;
    MR_Word mercury__getopt__Val0_11;
    MR_Word mercury__getopt__TypeCtorInfo_11_14 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
    MR_Word mercury__getopt__Var_12;
    MR_Box mercury__getopt__conv0_Var_12;

    mercury__map__lookup_3_p_0(mercury__getopt__TypeInfo_for_Option_7, mercury__getopt__TypeCtorInfo_11_14, mercury__getopt__OT_4, mercury__getopt__Opt_5, &mercury__getopt__conv0_Var_12);
    mercury__getopt__Var_12 = ((MR_Word) mercury__getopt__conv0_Var_12);
    mercury__getopt__succeeded = ((((MR_tag((MR_Word) mercury__getopt__Var_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__Var_12, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (mercury__getopt__succeeded)
    {
      mercury__getopt__Val0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__Var_12, (MR_Integer) 1)));
      mercury__getopt__MS_6 = mercury__getopt__Val0_11;
    }
    else
    {
      mercury__require__error_1_p_0((MR_String) "Expected maybe_string option and didn\'t get one.");
    }
    return mercury__getopt__MS_6;
  }
}

void MR_CALL 
mercury__getopt__lookup_maybe_string_option_3_p_0(
  MR_Word mercury__getopt__TypeInfo_for_Option_10,
  MR_Word mercury__getopt__OptionTable_4,
  MR_Box mercury__getopt__Opt_5,
  MR_Word * mercury__getopt__Val_6)
{
  {
    MR_bool mercury__getopt__succeeded;
    MR_Word mercury__getopt__Val0_7;
    MR_Word mercury__getopt__TypeCtorInfo_11_11 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
    MR_Word mercury__getopt__Var_8;
    MR_Box mercury__getopt__conv0_Var_8;

    mercury__map__lookup_3_p_0(mercury__getopt__TypeInfo_for_Option_10, mercury__getopt__TypeCtorInfo_11_11, mercury__getopt__OptionTable_4, mercury__getopt__Opt_5, &mercury__getopt__conv0_Var_8);
    mercury__getopt__Var_8 = ((MR_Word) mercury__getopt__conv0_Var_8);
    mercury__getopt__succeeded = ((((MR_tag((MR_Word) mercury__getopt__Var_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__Var_8, (MR_Integer) 0)))) == (MR_Integer) 2)));
    if (mercury__getopt__succeeded)
    {
      mercury__getopt__Val0_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__Var_8, (MR_Integer) 1)));
      *mercury__getopt__Val_6 = mercury__getopt__Val0_7;
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
mercury__getopt__lookup_maybe_int_option_2_f_0(
  MR_Word mercury__getopt__TypeInfo_for_Option_7,
  MR_Word mercury__getopt__OT_4,
  MR_Box mercury__getopt__Opt_5)
{
  {
    MR_bool mercury__getopt__succeeded;
    MR_Word mercury__getopt__MN_6;
    MR_Word mercury__getopt__Val0_11;
    MR_Word mercury__getopt__TypeCtorInfo_11_14 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
    MR_Word mercury__getopt__Var_12;
    MR_Box mercury__getopt__conv0_Var_12;

    mercury__map__lookup_3_p_0(mercury__getopt__TypeInfo_for_Option_7, mercury__getopt__TypeCtorInfo_11_14, mercury__getopt__OT_4, mercury__getopt__Opt_5, &mercury__getopt__conv0_Var_12);
    mercury__getopt__Var_12 = ((MR_Word) mercury__getopt__conv0_Var_12);
    mercury__getopt__succeeded = ((((MR_tag((MR_Word) mercury__getopt__Var_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__Var_12, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (mercury__getopt__succeeded)
    {
      mercury__getopt__Val0_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__Var_12, (MR_Integer) 1)));
      mercury__getopt__MN_6 = mercury__getopt__Val0_11;
    }
    else
    {
      mercury__require__error_1_p_0((MR_String) "Expected maybe_int option and didn\'t get one.");
    }
    return mercury__getopt__MN_6;
  }
}

void MR_CALL 
mercury__getopt__lookup_maybe_int_option_3_p_0(
  MR_Word mercury__getopt__TypeInfo_for_Option_10,
  MR_Word mercury__getopt__OptionTable_4,
  MR_Box mercury__getopt__Opt_5,
  MR_Word * mercury__getopt__Val_6)
{
  {
    MR_bool mercury__getopt__succeeded;
    MR_Word mercury__getopt__Val0_7;
    MR_Word mercury__getopt__TypeCtorInfo_11_11 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
    MR_Word mercury__getopt__Var_8;
    MR_Box mercury__getopt__conv0_Var_8;

    mercury__map__lookup_3_p_0(mercury__getopt__TypeInfo_for_Option_10, mercury__getopt__TypeCtorInfo_11_11, mercury__getopt__OptionTable_4, mercury__getopt__Opt_5, &mercury__getopt__conv0_Var_8);
    mercury__getopt__Var_8 = ((MR_Word) mercury__getopt__conv0_Var_8);
    mercury__getopt__succeeded = ((((MR_tag((MR_Word) mercury__getopt__Var_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__Var_8, (MR_Integer) 0)))) == (MR_Integer) 1)));
    if (mercury__getopt__succeeded)
    {
      mercury__getopt__Val0_7 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__Var_8, (MR_Integer) 1)));
      *mercury__getopt__Val_6 = mercury__getopt__Val0_7;
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
mercury__getopt__lookup_string_option_2_f_0(
  MR_Word mercury__getopt__TypeInfo_for_Option_7,
  MR_Word mercury__getopt__OT_4,
  MR_Box mercury__getopt__Opt_5)
{
  {
    MR_bool mercury__getopt__succeeded;
    MR_String mercury__getopt__S_6;
    MR_String mercury__getopt__Val0_11;
    MR_Word mercury__getopt__TypeCtorInfo_11_14 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
    MR_Word mercury__getopt__Var_12;
    MR_Box mercury__getopt__conv0_Var_12;

    mercury__map__lookup_3_p_0(mercury__getopt__TypeInfo_for_Option_7, mercury__getopt__TypeCtorInfo_11_14, mercury__getopt__OT_4, mercury__getopt__Opt_5, &mercury__getopt__conv0_Var_12);
    mercury__getopt__Var_12 = ((MR_Word) mercury__getopt__conv0_Var_12);
    mercury__getopt__succeeded = ((((MR_tag((MR_Word) mercury__getopt__Var_12)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__Var_12, (MR_Integer) 0)))) == (MR_Integer) 0)));
    if (mercury__getopt__succeeded)
    {
      mercury__getopt__Val0_11 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt__Var_12, (MR_Integer) 1)));
      mercury__getopt__S_6 = mercury__getopt__Val0_11;
    }
    else
    {
      mercury__require__error_1_p_0((MR_String) "Expected string option and didn\'t get one.");
    }
    return mercury__getopt__S_6;
  }
}

void MR_CALL 
mercury__getopt__lookup_string_option_3_p_0(
  MR_Word mercury__getopt__TypeInfo_for_Option_10,
  MR_Word mercury__getopt__OptionTable_4,
  MR_Box mercury__getopt__Opt_5,
  MR_String * mercury__getopt__Val_6)
{
  {
    MR_bool mercury__getopt__succeeded;
    MR_String mercury__getopt__Val0_7;
    MR_Word mercury__getopt__TypeCtorInfo_11_11 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
    MR_Word mercury__getopt__Var_8;
    MR_Box mercury__getopt__conv0_Var_8;

    mercury__map__lookup_3_p_0(mercury__getopt__TypeInfo_for_Option_10, mercury__getopt__TypeCtorInfo_11_11, mercury__getopt__OptionTable_4, mercury__getopt__Opt_5, &mercury__getopt__conv0_Var_8);
    mercury__getopt__Var_8 = ((MR_Word) mercury__getopt__conv0_Var_8);
    mercury__getopt__succeeded = ((((MR_tag((MR_Word) mercury__getopt__Var_8)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__Var_8, (MR_Integer) 0)))) == (MR_Integer) 0)));
    if (mercury__getopt__succeeded)
    {
      mercury__getopt__Val0_7 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt__Var_8, (MR_Integer) 1)));
      *mercury__getopt__Val_6 = mercury__getopt__Val0_7;
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
mercury__getopt__lookup_int_option_2_f_0(
  MR_Word mercury__getopt__TypeInfo_for_Option_7,
  MR_Word mercury__getopt__OT_4,
  MR_Box mercury__getopt__Opt_5)
{
  {
    MR_bool mercury__getopt__succeeded;
    MR_Integer mercury__getopt__N_6;
    MR_Integer mercury__getopt__Val0_11;
    MR_Word mercury__getopt__TypeCtorInfo_11_14 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
    MR_Word mercury__getopt__Var_12;
    MR_Box mercury__getopt__conv0_Var_12;

    mercury__map__lookup_3_p_0(mercury__getopt__TypeInfo_for_Option_7, mercury__getopt__TypeCtorInfo_11_14, mercury__getopt__OT_4, mercury__getopt__Opt_5, &mercury__getopt__conv0_Var_12);
    mercury__getopt__Var_12 = ((MR_Word) mercury__getopt__conv0_Var_12);
    mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__Var_12)) == (MR_mktag((MR_Integer) 2)));
    if (mercury__getopt__succeeded)
    {
      mercury__getopt__Val0_11 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__getopt__Var_12, (MR_Integer) 0)));
      mercury__getopt__N_6 = mercury__getopt__Val0_11;
    }
    else
    {
      mercury__require__error_1_p_0((MR_String) "Expected int option and didn\'t get one.");
    }
    return mercury__getopt__N_6;
  }
}

void MR_CALL 
mercury__getopt__lookup_int_option_3_p_0(
  MR_Word mercury__getopt__TypeInfo_for_Option_10,
  MR_Word mercury__getopt__OptionTable_4,
  MR_Box mercury__getopt__Opt_5,
  MR_Integer * mercury__getopt__Val_6)
{
  {
    MR_bool mercury__getopt__succeeded;
    MR_Integer mercury__getopt__Val0_7;
    MR_Word mercury__getopt__TypeCtorInfo_11_11 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
    MR_Word mercury__getopt__Var_8;
    MR_Box mercury__getopt__conv0_Var_8;

    mercury__map__lookup_3_p_0(mercury__getopt__TypeInfo_for_Option_10, mercury__getopt__TypeCtorInfo_11_11, mercury__getopt__OptionTable_4, mercury__getopt__Opt_5, &mercury__getopt__conv0_Var_8);
    mercury__getopt__Var_8 = ((MR_Word) mercury__getopt__conv0_Var_8);
    mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__Var_8)) == (MR_mktag((MR_Integer) 2)));
    if (mercury__getopt__succeeded)
    {
      mercury__getopt__Val0_7 = ((MR_Integer) (MR_hl_field(MR_mktag(2), mercury__getopt__Var_8, (MR_Integer) 0)));
      *mercury__getopt__Val_6 = mercury__getopt__Val0_7;
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
mercury__getopt__lookup_bool_option_2_f_0(
  MR_Word mercury__getopt__TypeInfo_for_Option_7,
  MR_Word mercury__getopt__OT_4,
  MR_Box mercury__getopt__Opt_5)
{
  {
    MR_bool mercury__getopt__succeeded;
    MR_Word mercury__getopt__B_6;
    MR_Word mercury__getopt__Val0_11;
    MR_Word mercury__getopt__TypeCtorInfo_11_14 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
    MR_Word mercury__getopt__Var_12;
    MR_Box mercury__getopt__conv0_Var_12;

    mercury__map__lookup_3_p_0(mercury__getopt__TypeInfo_for_Option_7, mercury__getopt__TypeCtorInfo_11_14, mercury__getopt__OT_4, mercury__getopt__Opt_5, &mercury__getopt__conv0_Var_12);
    mercury__getopt__Var_12 = ((MR_Word) mercury__getopt__conv0_Var_12);
    mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__Var_12)) == (MR_mktag((MR_Integer) 1)));
    if (mercury__getopt__succeeded)
    {
      mercury__getopt__Val0_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__Var_12, (MR_Integer) 0)));
      mercury__getopt__B_6 = mercury__getopt__Val0_11;
    }
    else
    {
      mercury__require__error_1_p_0((MR_String) "Expected bool option and didn\'t get one.");
    }
    return mercury__getopt__B_6;
  }
}

void MR_CALL 
mercury__getopt__lookup_bool_option_3_p_0(
  MR_Word mercury__getopt__TypeInfo_for_Option_10,
  MR_Word mercury__getopt__OptionTable_4,
  MR_Box mercury__getopt__Opt_5,
  MR_Word * mercury__getopt__Val_6)
{
  {
    MR_bool mercury__getopt__succeeded;
    MR_Word mercury__getopt__Val0_7;
    MR_Word mercury__getopt__TypeCtorInfo_11_11 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
    MR_Word mercury__getopt__Var_8;
    MR_Box mercury__getopt__conv0_Var_8;

    mercury__map__lookup_3_p_0(mercury__getopt__TypeInfo_for_Option_10, mercury__getopt__TypeCtorInfo_11_11, mercury__getopt__OptionTable_4, mercury__getopt__Opt_5, &mercury__getopt__conv0_Var_8);
    mercury__getopt__Var_8 = ((MR_Word) mercury__getopt__conv0_Var_8);
    mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__Var_8)) == (MR_mktag((MR_Integer) 1)));
    if (mercury__getopt__succeeded)
    {
      mercury__getopt__Val0_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__Var_8, (MR_Integer) 0)));
      *mercury__getopt__Val_6 = mercury__getopt__Val0_7;
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
mercury__getopt__process_options_se_4_p_0(
  MR_Word mercury__getopt__TypeInfo_for_OptionType_10,
  MR_Word mercury__getopt__OptionOps_5,
  MR_Word mercury__getopt__Args0_6,
  MR_Word * mercury__getopt__NonOptionArgs_7,
  MR_Word * mercury__getopt__Result_8)
{
  {
    MR_Word mercury__getopt___OptionArgs_9;

    mercury__getopt__process_options_se_5_p_0(mercury__getopt__TypeInfo_for_OptionType_10, mercury__getopt__OptionOps_5, mercury__getopt__Args0_6, &mercury__getopt___OptionArgs_9, mercury__getopt__NonOptionArgs_7, mercury__getopt__Result_8);
  }
}

void MR_CALL 
mercury__getopt__process_options_track_7_p_0(
  MR_Word mercury__getopt__TypeInfo_for_OptionType_19,
  MR_Word mercury__getopt__OptionOps_8,
  MR_Word mercury__getopt__Args0_9,
  MR_Word * mercury__getopt__OptionArgs_10,
  MR_Word * mercury__getopt__NonOptionArgs_11,
  MR_Word mercury__getopt__OptionTable0_12,
  MR_Word * mercury__getopt__Result_13,
  MR_Word * mercury__getopt__OptionsSet_14)
{
  {
    MR_Word mercury__getopt__Result0_15;

    mercury__getopt__process_options_track_se_7_p_0(mercury__getopt__TypeInfo_for_OptionType_19, mercury__getopt__OptionOps_8, mercury__getopt__Args0_9, mercury__getopt__OptionArgs_10, mercury__getopt__NonOptionArgs_11, mercury__getopt__OptionTable0_12, &mercury__getopt__Result0_15, mercury__getopt__OptionsSet_14);
    if (((MR_tag((MR_Word) mercury__getopt__Result0_15)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word mercury__getopt__Error_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__Result0_15, (MR_Integer) 0)));
      MR_String mercury__getopt__Msg_18;

      mercury__getopt__Msg_18 = mercury__getopt__option_error_to_string_1_f_0(mercury__getopt__TypeInfo_for_OptionType_19, mercury__getopt__Error_17);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *mercury__getopt__Result_13 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Msg_18));
      }
    }
    else
    {
      MR_Word mercury__getopt__OptionTable_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__Result0_15, (MR_Integer) 0)));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *mercury__getopt__Result_13 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__OptionTable_16));
      }
    }
  }
}

void MR_CALL 
mercury__getopt__process_options_track_se_7_p_0(
  MR_Word mercury__getopt__TypeInfo_for_OptionType_23,
  MR_Word mercury__getopt__OptionOps_8,
  MR_Word mercury__getopt__Args0_9,
  MR_Word * mercury__getopt__OptionArgs_10,
  MR_Word * mercury__getopt__NonOptionArgs_11,
  MR_Word mercury__getopt__OptionTable0_12,
  MR_Word * mercury__getopt__Result_13,
  MR_Word * mercury__getopt__OptionsSet_14)
{
  {
    MR_Word mercury__getopt__TypeCtorInfo_24_24;
    MR_Word mercury__getopt__Short_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_8, (MR_Integer) 0)));
    MR_Word mercury__getopt__Long_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_8, (MR_Integer) 1)));
    MR_Word mercury__getopt__Special_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_8, (MR_Integer) 2)));
    MR_Word mercury__getopt__Internal_18;
    MR_Word mercury__getopt__RevOptionArgs_19;
    MR_Word mercury__getopt__Var_20;
    MR_Word mercury__getopt__Var_21;
    MR_Word mercury__getopt__Var_22;
    MR_Word mercury__getopt__V_2_27;

    {
      mercury__getopt__Var_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), mercury__getopt__Var_20, 0) = ((MR_Box) (mercury__getopt__Special_17));
    }
    {
      mercury__getopt__Internal_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__getopt__Internal_18, 0) = ((MR_Box) (mercury__getopt__Short_15));
      MR_hl_field(MR_mktag(0), mercury__getopt__Internal_18, 1) = ((MR_Box) (mercury__getopt__Long_16));
      MR_hl_field(MR_mktag(0), mercury__getopt__Internal_18, 2) = ((MR_Box) (mercury__getopt__Var_20));
    }
    mercury__getopt__Var_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__getopt__V_2_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__getopt__Var_22 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    mercury__getopt__process_arguments_9_p_0(mercury__getopt__TypeInfo_for_OptionType_23, mercury__getopt__Args0_9, mercury__getopt__NonOptionArgs_11, mercury__getopt__Internal_18, mercury__getopt__Var_21, &mercury__getopt__RevOptionArgs_19, mercury__getopt__OptionTable0_12, mercury__getopt__Result_13, mercury__getopt__Var_22, mercury__getopt__OptionsSet_14);
    mercury__getopt__TypeCtorInfo_24_24 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    mercury__list__reverse_2_p_0(mercury__getopt__TypeCtorInfo_24_24, mercury__getopt__RevOptionArgs_19, mercury__getopt__OptionArgs_10);
  }
}

void MR_CALL 
mercury__getopt__process_options_5_p_0(
  MR_Word mercury__getopt__TypeInfo_for_OptionType_15,
  MR_Word mercury__getopt__OptionOps_6,
  MR_Word mercury__getopt__Args0_7,
  MR_Word * mercury__getopt__OptionArgs_8,
  MR_Word * mercury__getopt__NonOptionArgs_9,
  MR_Word * mercury__getopt__Result_10)
{
  {
    MR_Word mercury__getopt__Result0_11;

    mercury__getopt__process_options_se_5_p_0(mercury__getopt__TypeInfo_for_OptionType_15, mercury__getopt__OptionOps_6, mercury__getopt__Args0_7, mercury__getopt__OptionArgs_8, mercury__getopt__NonOptionArgs_9, &mercury__getopt__Result0_11);
    if (((MR_tag((MR_Word) mercury__getopt__Result0_11)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word mercury__getopt__Error_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__Result0_11, (MR_Integer) 0)));
      MR_String mercury__getopt__Msg_14;

      mercury__getopt__Msg_14 = mercury__getopt__option_error_to_string_1_f_0(mercury__getopt__TypeInfo_for_OptionType_15, mercury__getopt__Error_13);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *mercury__getopt__Result_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Msg_14));
      }
    }
    else
    {
      MR_Word mercury__getopt__OptionTable_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__Result0_11, (MR_Integer) 0)));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *mercury__getopt__Result_10 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__OptionTable_12));
      }
    }
  }
}

void MR_CALL 
mercury__getopt__process_options_4_p_0(
  MR_Word mercury__getopt__TypeInfo_for_OptionType_13,
  MR_Word mercury__getopt__OptionOps_5,
  MR_Word mercury__getopt__Args0_6,
  MR_Word * mercury__getopt__NonOptionArgs_7,
  MR_Word * mercury__getopt__Result_8)
{
  {
    MR_Word mercury__getopt__Result0_9;
    MR_Word mercury__getopt___OptionArgs_18;

    mercury__getopt__process_options_se_5_p_0(mercury__getopt__TypeInfo_for_OptionType_13, mercury__getopt__OptionOps_5, mercury__getopt__Args0_6, &mercury__getopt___OptionArgs_18, mercury__getopt__NonOptionArgs_7, &mercury__getopt__Result0_9);
    if (((MR_tag((MR_Word) mercury__getopt__Result0_9)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word mercury__getopt__Error_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__Result0_9, (MR_Integer) 0)));
      MR_String mercury__getopt__Msg_12;

      mercury__getopt__Msg_12 = mercury__getopt__option_error_to_string_1_f_0(mercury__getopt__TypeInfo_for_OptionType_13, mercury__getopt__Error_11);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *mercury__getopt__Result_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Msg_12));
      }
    }
    else
    {
      MR_Word mercury__getopt__OptionTable_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__Result0_9, (MR_Integer) 0)));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *mercury__getopt__Result_8 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__OptionTable_10));
      }
    }
  }
}

MR_String MR_CALL 
mercury__getopt__option_error_to_string_1_f_0(
  MR_Word mercury__getopt__TypeInfo_for_OptionType_47,
  MR_Word mercury__getopt__Error_3)
{
  {
    MR_String mercury__getopt__String_4;

    if (((MR_tag((MR_Word) mercury__getopt__Error_3)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word mercury__getopt__Reason_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__Error_3, (MR_Integer) 2)));
      MR_String mercury__getopt__OptionName_46 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__Error_3, (MR_Integer) 1)));
      MR_Box mercury__getopt__Var_6 = (MR_hl_field(MR_mktag(1), mercury__getopt__Error_3, (MR_Integer) 0));

      switch (MR_tag((MR_Word) mercury__getopt__Reason_7)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mercury__getopt__Reason_7)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_String mercury__getopt__Var_52;

                mercury__getopt__Var_52 = mercury__string__f_43_43_2_f_0(mercury__getopt__OptionName_46, (MR_String) "\'");
                mercury__getopt__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "unknown type for option \140", mercury__getopt__Var_52);
              }
              break;
            case (MR_Integer) 1:
              {
                MR_String mercury__getopt__Var_67;

                mercury__getopt__Var_67 = mercury__string__f_43_43_2_f_0(mercury__getopt__OptionName_46, (MR_String) "\' needs an argument");
                mercury__getopt__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "option \140", mercury__getopt__Var_67);
              }
              break;
            case (MR_Integer) 2:
              {
                MR_String mercury__getopt__Var_73;

                mercury__string__append_3_p_2(mercury__getopt__OptionName_46, (MR_String) "\' -- only boolean, maybe and accumulating options can be negated", &mercury__getopt__Var_73);
                mercury__string__append_3_p_2((MR_String) "cannot negate option \140", mercury__getopt__Var_73, &mercury__getopt__String_4);
              }
              break;
            case (MR_Integer) 3:
              {
                MR_String mercury__getopt__Var_58;

                mercury__getopt__Var_58 = mercury__string__f_43_43_2_f_0(mercury__getopt__OptionName_46, (MR_String) "\' failed");
                mercury__getopt__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "the handler of option \140", mercury__getopt__Var_58);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_String mercury__getopt__Var_55;

                mercury__getopt__Var_55 = mercury__string__f_43_43_2_f_0(mercury__getopt__OptionName_46, (MR_String) "\' has no handler");
                mercury__getopt__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "option \140", mercury__getopt__Var_55);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_String mercury__getopt__Var_70;

            mercury__string__append_3_p_2(mercury__getopt__OptionName_46, (MR_String) "\' does not allow an argument", &mercury__getopt__Var_70);
            mercury__getopt__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "option \140", mercury__getopt__Var_70);
          }
          break;
        case (MR_Integer) 2:
          mercury__getopt__String_4 = ((MR_String) (MR_hl_field(MR_mktag(2), mercury__getopt__Reason_7, (MR_Integer) 0)));
          break;
        case (MR_Integer) 3:
          {
            MR_String mercury__getopt__Arg_9 = ((MR_String) (MR_hl_field(MR_mktag(3), mercury__getopt__Reason_7, (MR_Integer) 0)));
            MR_String mercury__getopt__Var_61;
            MR_String mercury__getopt__Var_63;
            MR_String mercury__getopt__Var_64;

            mercury__getopt__Var_61 = mercury__string__f_43_43_2_f_0(mercury__getopt__Arg_9, (MR_String) "\' is not numeric");
            mercury__getopt__Var_63 = mercury__string__f_43_43_2_f_0((MR_String) "\' requires a numeric argument; \140", mercury__getopt__Var_61);
            mercury__getopt__Var_64 = mercury__string__f_43_43_2_f_0(mercury__getopt__OptionName_46, mercury__getopt__Var_63);
            mercury__getopt__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "option \140", mercury__getopt__Var_64);
          }
          break;
      }
    }
    else
    {
      MR_String mercury__getopt__OptionName_5 = ((MR_String) (MR_hl_field(MR_mktag(0), mercury__getopt__Error_3, (MR_Integer) 0)));
      MR_String mercury__getopt__Var_49;

      mercury__getopt__Var_49 = mercury__string__f_43_43_2_f_0(mercury__getopt__OptionName_5, (MR_String) "\'");
      mercury__getopt__String_4 = mercury__string__f_43_43_2_f_0((MR_String) "unrecognized option \140", mercury__getopt__Var_49);
    }
    return mercury__getopt__String_4;
  }
}

void MR_CALL 
mercury__getopt__process_options_se_5_p_0(
  MR_Word mercury__getopt__TypeInfo_for_OptionType_26,
  MR_Word mercury__getopt__OptionOps_6,
  MR_Word mercury__getopt__Args0_7,
  MR_Word * mercury__getopt__OptionArgs_8,
  MR_Word * mercury__getopt__NonOptionArgs_9,
  MR_Word * mercury__getopt__Result_10)
{
  {
    MR_Word mercury__getopt__TypeCtorInfo_27_27;
    MR_Word mercury__getopt__Short_11;
    MR_Word mercury__getopt__Long_12;
    MR_Word mercury__getopt__MaybeSpecial_14;
    MR_Word mercury__getopt__OptionTable0_15;
    MR_Word mercury__getopt__Internal_17;
    MR_Word mercury__getopt__RevOptionArgs_18;
    MR_Word mercury__getopt__Var_20;
    MR_Word mercury__getopt__Var_21;
    MR_Word mercury__getopt__V_2_30;
    MR_Word mercury__getopt___OptionsSet_19;

    switch (MR_tag((MR_Word) mercury__getopt__OptionOps_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word mercury__getopt__Defaults_13;

          mercury__getopt__Short_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_6, (MR_Integer) 0)));
          mercury__getopt__Long_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_6, (MR_Integer) 1)));
          mercury__getopt__Defaults_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_6, (MR_Integer) 2)));
          mercury__getopt__MaybeSpecial_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          mercury__getopt__init_option_table_2_p_0(mercury__getopt__TypeInfo_for_OptionType_26, mercury__getopt__Defaults_13, &mercury__getopt__OptionTable0_15);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mercury__getopt__Special_16;
          MR_Word mercury__getopt__Defaults_22;

          mercury__getopt__Short_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__OptionOps_6, (MR_Integer) 0)));
          mercury__getopt__Long_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__OptionOps_6, (MR_Integer) 1)));
          mercury__getopt__Defaults_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__OptionOps_6, (MR_Integer) 2)));
          mercury__getopt__Special_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__OptionOps_6, (MR_Integer) 3)));
          {
            mercury__getopt__MaybeSpecial_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__getopt__MaybeSpecial_14, 0) = ((MR_Box) (mercury__getopt__Special_16));
          }
          mercury__getopt__init_option_table_2_p_0(mercury__getopt__TypeInfo_for_OptionType_26, mercury__getopt__Defaults_22, &mercury__getopt__OptionTable0_15);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mercury__getopt__Defaults_23;

          mercury__getopt__Short_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__OptionOps_6, (MR_Integer) 0)));
          mercury__getopt__Long_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__OptionOps_6, (MR_Integer) 1)));
          mercury__getopt__Defaults_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__OptionOps_6, (MR_Integer) 2)));
          mercury__getopt__MaybeSpecial_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          mercury__getopt__init_option_table_multi_2_p_0(mercury__getopt__TypeInfo_for_OptionType_26, mercury__getopt__Defaults_23, &mercury__getopt__OptionTable0_15);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word mercury__getopt__Defaults_24;
          MR_Word mercury__getopt__Special_25;

          mercury__getopt__Short_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__OptionOps_6, (MR_Integer) 0)));
          mercury__getopt__Long_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__OptionOps_6, (MR_Integer) 1)));
          mercury__getopt__Defaults_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__OptionOps_6, (MR_Integer) 2)));
          mercury__getopt__Special_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__OptionOps_6, (MR_Integer) 3)));
          {
            mercury__getopt__MaybeSpecial_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__getopt__MaybeSpecial_14, 0) = ((MR_Box) (mercury__getopt__Special_25));
          }
          mercury__getopt__init_option_table_multi_2_p_0(mercury__getopt__TypeInfo_for_OptionType_26, mercury__getopt__Defaults_24, &mercury__getopt__OptionTable0_15);
        }
        break;
    }
    {
      mercury__getopt__Internal_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__getopt__Internal_17, 0) = ((MR_Box) (mercury__getopt__Short_11));
      MR_hl_field(MR_mktag(0), mercury__getopt__Internal_17, 1) = ((MR_Box) (mercury__getopt__Long_12));
      MR_hl_field(MR_mktag(0), mercury__getopt__Internal_17, 2) = ((MR_Box) (mercury__getopt__MaybeSpecial_14));
    }
    mercury__getopt__Var_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__getopt__V_2_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__getopt__Var_21 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    mercury__getopt__process_arguments_9_p_0(mercury__getopt__TypeInfo_for_OptionType_26, mercury__getopt__Args0_7, mercury__getopt__NonOptionArgs_9, mercury__getopt__Internal_17, mercury__getopt__Var_20, &mercury__getopt__RevOptionArgs_18, mercury__getopt__OptionTable0_15, mercury__getopt__Result_10, mercury__getopt__Var_21, &mercury__getopt___OptionsSet_19);
    mercury__getopt__TypeCtorInfo_27_27 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    mercury__list__reverse_2_p_0(mercury__getopt__TypeCtorInfo_27_27, mercury__getopt__RevOptionArgs_18, mercury__getopt__OptionArgs_8);
  }
}

static void MR_CALL 
mercury__getopt__handle_long_option_13_p_0(
  MR_Word mercury__getopt__TypeInfo_for_OptionType_48,
  MR_String mercury__getopt__Option_14,
  MR_Box mercury__getopt__Flag_15,
  MR_Word mercury__getopt__OptionData_16,
  MR_Word mercury__getopt__MaybeOptionArg0_17,
  MR_Word mercury__getopt__Args0_18,
  MR_Word * mercury__getopt__Args_19,
  MR_Word mercury__getopt__OptionOps_20,
  MR_Word mercury__getopt__OptionArgs0_21,
  MR_Word * mercury__getopt__OptionArgs_22,
  MR_Word mercury__getopt__OptionTable0_23,
  MR_Word * mercury__getopt__Result_24,
  MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_0_37,
  MR_Word * mercury__getopt__STATE_VARIABLE_OptionsSet_38)
{
  {
    MR_bool mercury__getopt__succeeded;
    MR_Word mercury__getopt__MaybeOptionArg_28;
    MR_Word mercury__getopt__Args1_29;
    MR_Word mercury__getopt__MissingArg_30;
    MR_Word mercury__getopt__OptionArgs1_31;
    MR_Word mercury__getopt__Var_49;

    switch (MR_tag((MR_Word) mercury__getopt__OptionData_16)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(mercury__getopt__OptionData_16)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mercury__getopt__Var_49 = (MR_Integer) 0;
            break;
          case (MR_Integer) 1:
            mercury__getopt__Var_49 = (MR_Integer) 0;
            break;
          case (MR_Integer) 2:
            mercury__getopt__Var_49 = (MR_Integer) 1;
            break;
          case (MR_Integer) 3:
            mercury__getopt__Var_49 = (MR_Integer) 1;
            break;
          case (MR_Integer) 4:
            mercury__getopt__Var_49 = (MR_Integer) 1;
            break;
        }
        break;
      case (MR_Integer) 1:
        mercury__getopt__Var_49 = (MR_Integer) 0;
        break;
      case (MR_Integer) 2:
        mercury__getopt__Var_49 = (MR_Integer) 1;
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__OptionData_16, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            mercury__getopt__Var_49 = (MR_Integer) 1;
            break;
          case (MR_Integer) 1:
            mercury__getopt__Var_49 = (MR_Integer) 1;
            break;
          case (MR_Integer) 2:
            mercury__getopt__Var_49 = (MR_Integer) 1;
            break;
          case (MR_Integer) 3:
            mercury__getopt__Var_49 = (MR_Integer) 1;
            break;
        }
        break;
    }
    mercury__getopt__succeeded = ((MR_Integer) 1 == mercury__getopt__Var_49);
    if (mercury__getopt__succeeded)
      mercury__getopt__succeeded = (mercury__getopt__MaybeOptionArg0_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    if (mercury__getopt__succeeded)
      if ((mercury__getopt__Args0_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        mercury__getopt__MaybeOptionArg_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        mercury__getopt__Args1_29 = mercury__getopt__Args0_18;
        mercury__getopt__OptionArgs1_31 = mercury__getopt__OptionArgs0_21;
        mercury__getopt__MissingArg_30 = (MR_Integer) 1;
      }
      else
      {
        MR_String mercury__getopt__Arg_26 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__Args0_18, (MR_Integer) 0)));

        mercury__getopt__Args1_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__Args0_18, (MR_Integer) 1)));
        {
          mercury__getopt__MaybeOptionArg_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__getopt__MaybeOptionArg_28, 0) = ((MR_Box) (mercury__getopt__Arg_26));
        }
        mercury__getopt__MissingArg_30 = (MR_Integer) 0;
        {
          mercury__getopt__OptionArgs1_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), mercury__getopt__OptionArgs1_31, 0) = ((MR_Box) (mercury__getopt__Arg_26));
          MR_hl_field(MR_mktag(1), mercury__getopt__OptionArgs1_31, 1) = ((MR_Box) (mercury__getopt__OptionArgs0_21));
        }
      }
    else
    {
      mercury__getopt__MaybeOptionArg_28 = mercury__getopt__MaybeOptionArg0_17;
      mercury__getopt__Args1_29 = mercury__getopt__Args0_18;
      mercury__getopt__OptionArgs1_31 = mercury__getopt__OptionArgs0_21;
      mercury__getopt__MissingArg_30 = (MR_Integer) 0;
    }
    switch (mercury__getopt__MissingArg_30) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_String mercury__getopt__ArgVal_33;
          MR_Word mercury__getopt__Var_50;

          switch (MR_tag((MR_Word) mercury__getopt__OptionData_16)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(mercury__getopt__OptionData_16)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  mercury__getopt__Var_50 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 1:
                  mercury__getopt__Var_50 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 2:
                  mercury__getopt__Var_50 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  mercury__getopt__Var_50 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 4:
                  mercury__getopt__Var_50 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              mercury__getopt__Var_50 = (MR_Integer) 0;
              break;
            case (MR_Integer) 2:
              mercury__getopt__Var_50 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__OptionData_16, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  mercury__getopt__Var_50 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  mercury__getopt__Var_50 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  mercury__getopt__Var_50 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  mercury__getopt__Var_50 = (MR_Integer) 1;
                  break;
              }
              break;
          }
          mercury__getopt__succeeded = ((MR_Integer) 0 == mercury__getopt__Var_50);
          if (mercury__getopt__succeeded)
          {
            mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__MaybeOptionArg_28)) == (MR_mktag((MR_Integer) 1)));
            if (mercury__getopt__succeeded)
              mercury__getopt__ArgVal_33 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__MaybeOptionArg_28, (MR_Integer) 0)));
          }
          if (mercury__getopt__succeeded)
          {
            MR_Word mercury__getopt__Var_41;
            MR_Word mercury__getopt__Error_45;

            *mercury__getopt__Args_19 = mercury__getopt__Args0_18;
            *mercury__getopt__OptionArgs_22 = mercury__getopt__OptionArgs1_31;
            {
              mercury__getopt__Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__getopt__Var_41, 0) = ((MR_Box) (mercury__getopt__ArgVal_33));
            }
            {
              mercury__getopt__Error_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__getopt__Error_45, 0) = mercury__getopt__Flag_15;
              MR_hl_field(MR_mktag(1), mercury__getopt__Error_45, 1) = ((MR_Box) (mercury__getopt__Option_14));
              MR_hl_field(MR_mktag(1), mercury__getopt__Error_45, 2) = ((MR_Box) (mercury__getopt__Var_41));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mercury__getopt__Result_24 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Error_45));
            }
            *mercury__getopt__STATE_VARIABLE_OptionsSet_38 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_37;
          }
          else
          {
            MR_Word mercury__getopt__Result1_34;
            MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_42_42;

            mercury__getopt__process_option_9_p_0(mercury__getopt__TypeInfo_for_OptionType_48, mercury__getopt__OptionData_16, mercury__getopt__Option_14, mercury__getopt__Flag_15, mercury__getopt__MaybeOptionArg_28, mercury__getopt__OptionOps_20, mercury__getopt__OptionTable0_23, &mercury__getopt__Result1_34, mercury__getopt__STATE_VARIABLE_OptionsSet_0_37, &mercury__getopt__STATE_VARIABLE_OptionsSet_42_42);
            if (((MR_tag((MR_Word) mercury__getopt__Result1_34)) == (MR_mktag((MR_Integer) 1))))
            {
              *mercury__getopt__Result_24 = mercury__getopt__Result1_34;
              *mercury__getopt__OptionArgs_22 = mercury__getopt__OptionArgs1_31;
              *mercury__getopt__Args_19 = mercury__getopt__Args1_29;
              *mercury__getopt__STATE_VARIABLE_OptionsSet_38 = mercury__getopt__STATE_VARIABLE_OptionsSet_42_42;
            }
            else
            {
              MR_Word mercury__getopt__OptionTable1_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__Result1_34, (MR_Integer) 0)));

              mercury__getopt__process_arguments_9_p_0(mercury__getopt__TypeInfo_for_OptionType_48, mercury__getopt__Args1_29, mercury__getopt__Args_19, mercury__getopt__OptionOps_20, mercury__getopt__OptionArgs1_31, mercury__getopt__OptionArgs_22, mercury__getopt__OptionTable1_35, mercury__getopt__Result_24, mercury__getopt__STATE_VARIABLE_OptionsSet_42_42, mercury__getopt__STATE_VARIABLE_OptionsSet_38);
            }
          }
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mercury__getopt__Error_32;
          MR_Word mercury__getopt__Var_44;

          *mercury__getopt__Args_19 = mercury__getopt__Args0_18;
          *mercury__getopt__OptionArgs_22 = mercury__getopt__OptionArgs1_31;
          mercury__getopt__Var_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
          {
            mercury__getopt__Error_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__getopt__Error_32, 0) = mercury__getopt__Flag_15;
            MR_hl_field(MR_mktag(1), mercury__getopt__Error_32, 1) = ((MR_Box) (mercury__getopt__Option_14));
            MR_hl_field(MR_mktag(1), mercury__getopt__Error_32, 2) = ((MR_Box) (mercury__getopt__Var_44));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *mercury__getopt__Result_24 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Error_32));
          }
          *mercury__getopt__STATE_VARIABLE_OptionsSet_38 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_37;
        }
        break;
    }
  }
}

void MR_CALL 
mercury__getopt__process_arguments_9_p_0(
  MR_Word mercury__getopt__TypeInfo_for_OptionType_138,
  MR_Word mercury__getopt__HeadVar__1_1,
  MR_Word * mercury__getopt__HeadVar__2_2,
  MR_Word mercury__getopt__OptionOps_3,
  MR_Word mercury__getopt__HeadVar__4_4,
  MR_Word * mercury__getopt__OptionArgs_5,
  MR_Word mercury__getopt__HeadVar__6_6,
  MR_Word * mercury__getopt__HeadVar__7_7,
  MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_0_8,
  MR_Word * mercury__getopt__STATE_VARIABLE_OptionsSet_9)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__getopt__succeeded;

      if ((mercury__getopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__getopt__HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
        *mercury__getopt__OptionArgs_5 = mercury__getopt__HeadVar__4_4;
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *mercury__getopt__HeadVar__7_7 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__HeadVar__6_6));
        }
        *mercury__getopt__STATE_VARIABLE_OptionsSet_9 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_8;
      }
      else
      {
        MR_String mercury__getopt__Option_16 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__getopt__Args0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__1_1, (MR_Integer) 1)));

        mercury__getopt__succeeded = (strcmp(mercury__getopt__Option_16, (MR_String) "--") == 0);
        if (mercury__getopt__succeeded)
        {
          *mercury__getopt__OptionArgs_5 = mercury__getopt__HeadVar__4_4;
          *mercury__getopt__HeadVar__2_2 = mercury__getopt__Args0_17;
          {
            MR_Word base;
            base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            *mercury__getopt__HeadVar__7_7 = base;
            MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__HeadVar__6_6));
          }
          *mercury__getopt__STATE_VARIABLE_OptionsSet_9 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_8;
        }
        else
        {
          MR_String mercury__getopt__LongOption_25;

          mercury__getopt__succeeded = mercury__string__append_3_p_1((MR_String) "--no-", &mercury__getopt__LongOption_25, mercury__getopt__Option_16);
          if (mercury__getopt__succeeded)
          {
            MR_Word mercury__getopt__LongOptionPred_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_3, (MR_Integer) 1)));
            MR_Word mercury__getopt__Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_3, (MR_Integer) 0)));
            MR_Word mercury__getopt__Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_3, (MR_Integer) 2)));
            MR_Box mercury__getopt__Flag_27;
            MR_bool MR_CALL (* mercury__getopt__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__getopt__LongOptionPred_26, (MR_Integer) 1)));

            mercury__getopt__succeeded = mercury__getopt__func_0(((MR_Box) mercury__getopt__LongOptionPred_26), ((MR_Box) (mercury__getopt__LongOption_25)), &mercury__getopt__Flag_27);
            if (mercury__getopt__succeeded)
            {
              MR_String mercury__getopt__OptName_28;
              MR_Word mercury__getopt__Result1_29;
              MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_52_52;

              mercury__getopt__OptName_28 = mercury__string__f_43_43_2_f_0((MR_String) "--", mercury__getopt__LongOption_25);
              mercury__getopt__process_negated_option_7_p_0(mercury__getopt__TypeInfo_for_OptionType_138, mercury__getopt__OptName_28, mercury__getopt__Flag_27, mercury__getopt__OptionOps_3, mercury__getopt__HeadVar__6_6, &mercury__getopt__Result1_29, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, &mercury__getopt__STATE_VARIABLE_OptionsSet_52_52);
              if (((MR_tag((MR_Word) mercury__getopt__Result1_29)) == (MR_mktag((MR_Integer) 1))))
              {
                *mercury__getopt__HeadVar__7_7 = mercury__getopt__Result1_29;
                *mercury__getopt__OptionArgs_5 = mercury__getopt__HeadVar__4_4;
                *mercury__getopt__HeadVar__2_2 = mercury__getopt__Args0_17;
                *mercury__getopt__STATE_VARIABLE_OptionsSet_9 = mercury__getopt__STATE_VARIABLE_OptionsSet_52_52;
              }
              else
              {
                MR_Word mercury__getopt__OptionTable1_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__Result1_29, (MR_Integer) 0)));
                MR_Word mercury__getopt__Var_53;

                {
                  mercury__getopt__Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__getopt__Var_53, 0) = ((MR_Box) (mercury__getopt__Option_16));
                  MR_hl_field(MR_mktag(1), mercury__getopt__Var_53, 1) = ((MR_Box) (mercury__getopt__HeadVar__4_4));
                }
                /* direct tailcall eliminated */
                {
                  MR_Word mercury__getopt__next_value_of_HeadVar__1_1 = mercury__getopt__Args0_17;
                  MR_Word mercury__getopt__next_value_of_HeadVar__4_4 = mercury__getopt__Var_53;
                  MR_Word mercury__getopt__next_value_of_HeadVar__6_6 = mercury__getopt__OptionTable1_30;
                  MR_Word mercury__getopt__next_value_of_STATE_VARIABLE_OptionsSet_0_8 = mercury__getopt__STATE_VARIABLE_OptionsSet_52_52;

                  mercury__getopt__HeadVar__1_1 = mercury__getopt__next_value_of_HeadVar__1_1;
                  mercury__getopt__HeadVar__4_4 = mercury__getopt__next_value_of_HeadVar__4_4;
                  mercury__getopt__HeadVar__6_6 = mercury__getopt__next_value_of_HeadVar__6_6;
                  mercury__getopt__STATE_VARIABLE_OptionsSet_0_8 = mercury__getopt__next_value_of_STATE_VARIABLE_OptionsSet_0_8;
                }
                continue;
              }
            }
            else
            {
              MR_Word mercury__getopt__Error_32;

              {
                mercury__getopt__Error_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), mercury__getopt__Error_32, 0) = ((MR_Box) (mercury__getopt__Option_16));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *mercury__getopt__HeadVar__7_7 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Error_32));
              }
              *mercury__getopt__OptionArgs_5 = mercury__getopt__HeadVar__4_4;
              *mercury__getopt__HeadVar__2_2 = mercury__getopt__Args0_17;
              *mercury__getopt__STATE_VARIABLE_OptionsSet_9 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_8;
            }
          }
          else
          {
            MR_String mercury__getopt__LongOptionStr_33;

            mercury__getopt__succeeded = mercury__string__append_3_p_1((MR_String) "--", &mercury__getopt__LongOptionStr_33, mercury__getopt__Option_16);
            if (mercury__getopt__succeeded)
            {
              MR_Word mercury__getopt__MaybeArg_37;
              MR_String mercury__getopt__OptionName_38;
              MR_String mercury__getopt__LongOption_85;
              MR_Word mercury__getopt__LongOptionPred_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_3, (MR_Integer) 1)));
              MR_Word mercury__getopt__Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_3, (MR_Integer) 0)));
              MR_Word mercury__getopt__Var_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_3, (MR_Integer) 2)));
              MR_Integer mercury__getopt__OptionLen_34;
              MR_Box mercury__getopt__Flag_83;
              MR_bool MR_CALL (* mercury__getopt__func_1)(MR_Box, MR_Box, MR_Box *);

              mercury__getopt__succeeded = mercury__string__sub_string_search_3_p_0(mercury__getopt__LongOptionStr_33, (MR_String) "=", &mercury__getopt__OptionLen_34);
              if (mercury__getopt__succeeded)
              {
                MR_String mercury__getopt__EqualOptionArg_35;
                MR_String mercury__getopt__OptionArg_36;

                mercury__string__split_4_p_0(mercury__getopt__LongOptionStr_33, mercury__getopt__OptionLen_34, &mercury__getopt__LongOption_85, &mercury__getopt__EqualOptionArg_35);
                mercury__getopt__succeeded = mercury__string__first_char_3_p_2(mercury__getopt__EqualOptionArg_35, (MR_Char) 61, &mercury__getopt__OptionArg_36);
                if (mercury__getopt__succeeded)
                  {
                    mercury__getopt__MaybeArg_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__getopt__MaybeArg_37, 0) = ((MR_Box) (mercury__getopt__OptionArg_36));
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
                mercury__getopt__LongOption_85 = mercury__getopt__LongOptionStr_33;
                mercury__getopt__MaybeArg_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
              mercury__getopt__OptionName_38 = mercury__string__f_43_43_2_f_0((MR_String) "--", mercury__getopt__LongOption_85);
              mercury__getopt__func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__getopt__LongOptionPred_86, (MR_Integer) 1)));
              mercury__getopt__succeeded = mercury__getopt__func_1(((MR_Box) mercury__getopt__LongOptionPred_86), ((MR_Box) (mercury__getopt__LongOption_85)), &mercury__getopt__Flag_83);
              if (mercury__getopt__succeeded)
              {
                MR_Word mercury__getopt__OptionData_39;
                MR_Word mercury__getopt__TypeCtorInfo_139_139 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
                MR_Box mercury__getopt__conv2_OptionData_39;

                mercury__getopt__succeeded = mercury__map__search_3_p_0(mercury__getopt__TypeInfo_for_OptionType_138, mercury__getopt__TypeCtorInfo_139_139, mercury__getopt__HeadVar__6_6, mercury__getopt__Flag_83, &mercury__getopt__conv2_OptionData_39);
                if (mercury__getopt__succeeded)
                {
                  mercury__getopt__OptionData_39 = ((MR_Word) mercury__getopt__conv2_OptionData_39);
                  mercury__getopt__succeeded = MR_TRUE;
                }
                if (mercury__getopt__succeeded)
                {
                  MR_Word mercury__getopt__Var_60;

                  {
                    mercury__getopt__Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__getopt__Var_60, 0) = ((MR_Box) (mercury__getopt__Option_16));
                    MR_hl_field(MR_mktag(1), mercury__getopt__Var_60, 1) = ((MR_Box) (mercury__getopt__HeadVar__4_4));
                  }
                  mercury__getopt__handle_long_option_13_p_0(mercury__getopt__TypeInfo_for_OptionType_138, mercury__getopt__OptionName_38, mercury__getopt__Flag_83, mercury__getopt__OptionData_39, mercury__getopt__MaybeArg_37, mercury__getopt__Args0_17, mercury__getopt__HeadVar__2_2, mercury__getopt__OptionOps_3, mercury__getopt__Var_60, mercury__getopt__OptionArgs_5, mercury__getopt__HeadVar__6_6, mercury__getopt__HeadVar__7_7, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, mercury__getopt__STATE_VARIABLE_OptionsSet_9);
                }
                else
                {
                  MR_Word mercury__getopt__Var_62 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  MR_Word mercury__getopt__Error_80;

                  {
                    mercury__getopt__Error_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__getopt__Error_80, 0) = mercury__getopt__Flag_83;
                    MR_hl_field(MR_mktag(1), mercury__getopt__Error_80, 1) = ((MR_Box) (mercury__getopt__Option_16));
                    MR_hl_field(MR_mktag(1), mercury__getopt__Error_80, 2) = ((MR_Box) (mercury__getopt__Var_62));
                  }
                  {
                    MR_Word base;
                    base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    *mercury__getopt__HeadVar__7_7 = base;
                    MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Error_80));
                  }
                  *mercury__getopt__OptionArgs_5 = mercury__getopt__HeadVar__4_4;
                  *mercury__getopt__HeadVar__2_2 = mercury__getopt__Args0_17;
                  *mercury__getopt__STATE_VARIABLE_OptionsSet_9 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_8;
                }
              }
              else
              {
                MR_Word mercury__getopt__Error_82;

                {
                  mercury__getopt__Error_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), mercury__getopt__Error_82, 0) = ((MR_Box) (mercury__getopt__OptionName_38));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__getopt__HeadVar__7_7 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Error_82));
                }
                *mercury__getopt__OptionArgs_5 = mercury__getopt__HeadVar__4_4;
                *mercury__getopt__HeadVar__2_2 = mercury__getopt__Args0_17;
                *mercury__getopt__STATE_VARIABLE_OptionsSet_9 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_8;
              }
            }
            else
            {
              MR_String mercury__getopt__ShortOptions_40;

              mercury__getopt__succeeded = mercury__string__first_char_3_p_2(mercury__getopt__Option_16, (MR_Char) 45, &mercury__getopt__ShortOptions_40);
              if (mercury__getopt__succeeded)
              {
                mercury__getopt__succeeded = (strcmp(mercury__getopt__ShortOptions_40, (MR_String) "") == 0);
                mercury__getopt__succeeded = !(mercury__getopt__succeeded);
              }
              if (mercury__getopt__succeeded)
              {
                MR_Word mercury__getopt__ShortOptionsList_41;
                MR_Char mercury__getopt__SingleShortOpt_42;
                MR_Word mercury__getopt__Var_64;
                MR_Char mercury__getopt__Var_65;
                MR_Word mercury__getopt__Var_66;

                mercury__string__to_char_list_2_p_0(mercury__getopt__ShortOptions_40, &mercury__getopt__ShortOptionsList_41);
                mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__ShortOptionsList_41)) == (MR_mktag((MR_Integer) 1)));
                if (mercury__getopt__succeeded)
                {
                  mercury__getopt__SingleShortOpt_42 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__ShortOptionsList_41, (MR_Integer) 0)));
                  mercury__getopt__Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__ShortOptionsList_41, (MR_Integer) 1)));
                  mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__Var_64)) == (MR_mktag((MR_Integer) 1)));
                  if (mercury__getopt__succeeded)
                  {
                    mercury__getopt__Var_65 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__Var_64, (MR_Integer) 0)));
                    mercury__getopt__Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__Var_64, (MR_Integer) 1)));
                    mercury__getopt__succeeded = (mercury__getopt__Var_65 == (MR_Char) 45);
                    if (mercury__getopt__succeeded)
                      mercury__getopt__succeeded = (mercury__getopt__Var_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
                if (mercury__getopt__succeeded)
                {
                  MR_Word mercury__getopt__ShortOptionPred_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_3, (MR_Integer) 0)));
                  MR_Word mercury__getopt__Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_3, (MR_Integer) 1)));
                  MR_Word mercury__getopt__Var_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_3, (MR_Integer) 2)));
                  MR_Box mercury__getopt__Flag_95;
                  MR_bool MR_CALL (* mercury__getopt__func_3)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__getopt__ShortOptionPred_43, (MR_Integer) 1)));

                  mercury__getopt__succeeded = mercury__getopt__func_3(((MR_Box) mercury__getopt__ShortOptionPred_43), ((MR_Box) (MR_Word) (mercury__getopt__SingleShortOpt_42)), &mercury__getopt__Flag_95);
                  if (mercury__getopt__succeeded)
                  {
                    MR_Word mercury__getopt__Var_67;
                    MR_Word mercury__getopt__Var_69;
                    MR_Word mercury__getopt__Var_70 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_71_71;
                    MR_String mercury__getopt__OptName_91;
                    MR_Word mercury__getopt__Result1_92;

                    {
                      mercury__getopt__Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__getopt__Var_69, 0) = ((MR_Box) (MR_Word) (mercury__getopt__SingleShortOpt_42));
                      MR_hl_field(MR_mktag(1), mercury__getopt__Var_69, 1) = ((MR_Box) (mercury__getopt__Var_70));
                    }
                    {
                      mercury__getopt__Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), mercury__getopt__Var_67, 0) = ((MR_Box) (MR_Word) ((MR_Char) 45));
                      MR_hl_field(MR_mktag(1), mercury__getopt__Var_67, 1) = ((MR_Box) (mercury__getopt__Var_69));
                    }
                    mercury__string__from_char_list_2_p_0(mercury__getopt__Var_67, &mercury__getopt__OptName_91);
                    mercury__getopt__process_negated_option_7_p_0(mercury__getopt__TypeInfo_for_OptionType_138, mercury__getopt__OptName_91, mercury__getopt__Flag_95, mercury__getopt__OptionOps_3, mercury__getopt__HeadVar__6_6, &mercury__getopt__Result1_92, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, &mercury__getopt__STATE_VARIABLE_OptionsSet_71_71);
                    if (((MR_tag((MR_Word) mercury__getopt__Result1_92)) == (MR_mktag((MR_Integer) 1))))
                    {
                      *mercury__getopt__HeadVar__7_7 = mercury__getopt__Result1_92;
                      *mercury__getopt__OptionArgs_5 = mercury__getopt__HeadVar__4_4;
                      *mercury__getopt__HeadVar__2_2 = mercury__getopt__Args0_17;
                      *mercury__getopt__STATE_VARIABLE_OptionsSet_9 = mercury__getopt__STATE_VARIABLE_OptionsSet_71_71;
                    }
                    else
                    {
                      MR_Word mercury__getopt__Var_72;
                      MR_Word mercury__getopt__OptionTable1_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__Result1_92, (MR_Integer) 0)));

                      {
                        mercury__getopt__Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), mercury__getopt__Var_72, 0) = ((MR_Box) (mercury__getopt__Option_16));
                        MR_hl_field(MR_mktag(1), mercury__getopt__Var_72, 1) = ((MR_Box) (mercury__getopt__HeadVar__4_4));
                      }
                      /* direct tailcall eliminated */
                      {
                        MR_Word mercury__getopt__next_value_of_HeadVar__1_1 = mercury__getopt__Args0_17;
                        MR_Word mercury__getopt__next_value_of_HeadVar__4_4 = mercury__getopt__Var_72;
                        MR_Word mercury__getopt__next_value_of_HeadVar__6_6 = mercury__getopt__OptionTable1_89;
                        MR_Word mercury__getopt__next_value_of_STATE_VARIABLE_OptionsSet_0_8 = mercury__getopt__STATE_VARIABLE_OptionsSet_71_71;

                        mercury__getopt__HeadVar__1_1 = mercury__getopt__next_value_of_HeadVar__1_1;
                        mercury__getopt__HeadVar__4_4 = mercury__getopt__next_value_of_HeadVar__4_4;
                        mercury__getopt__HeadVar__6_6 = mercury__getopt__next_value_of_HeadVar__6_6;
                        mercury__getopt__STATE_VARIABLE_OptionsSet_0_8 = mercury__getopt__next_value_of_STATE_VARIABLE_OptionsSet_0_8;
                      }
                      continue;
                    }
                  }
                  else
                  {
                    MR_String mercury__getopt__Var_74;
                    MR_Word mercury__getopt__Error_94;

                    mercury__getopt__Var_74 = mercury__string__f_43_43_2_f_0((MR_String) "-", mercury__getopt__ShortOptions_40);
                    {
                      mercury__getopt__Error_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), mercury__getopt__Error_94, 0) = ((MR_Box) (mercury__getopt__Var_74));
                    }
                    {
                      MR_Word base;
                      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      *mercury__getopt__HeadVar__7_7 = base;
                      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Error_94));
                    }
                    *mercury__getopt__OptionArgs_5 = mercury__getopt__HeadVar__4_4;
                    *mercury__getopt__HeadVar__2_2 = mercury__getopt__Args0_17;
                    *mercury__getopt__STATE_VARIABLE_OptionsSet_9 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_8;
                  }
                }
                else
                {
                  MR_Word mercury__getopt__Args1_45;
                  MR_Word mercury__getopt__OptionArgs1_46;
                  MR_Word mercury__getopt__Var_76;
                  MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_77_77;
                  MR_Word mercury__getopt__Result1_107;

                  {
                    mercury__getopt__Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__getopt__Var_76, 0) = ((MR_Box) (mercury__getopt__Option_16));
                    MR_hl_field(MR_mktag(1), mercury__getopt__Var_76, 1) = ((MR_Box) (mercury__getopt__HeadVar__4_4));
                  }
                  mercury__getopt__handle_short_options_10_p_0(mercury__getopt__TypeInfo_for_OptionType_138, mercury__getopt__ShortOptionsList_41, mercury__getopt__OptionOps_3, mercury__getopt__Args0_17, &mercury__getopt__Args1_45, mercury__getopt__Var_76, &mercury__getopt__OptionArgs1_46, mercury__getopt__HeadVar__6_6, &mercury__getopt__Result1_107, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, &mercury__getopt__STATE_VARIABLE_OptionsSet_77_77);
                  if (((MR_tag((MR_Word) mercury__getopt__Result1_107)) == (MR_mktag((MR_Integer) 1))))
                  {
                    *mercury__getopt__HeadVar__7_7 = mercury__getopt__Result1_107;
                    *mercury__getopt__OptionArgs_5 = mercury__getopt__OptionArgs1_46;
                    *mercury__getopt__HeadVar__2_2 = mercury__getopt__Args0_17;
                    *mercury__getopt__STATE_VARIABLE_OptionsSet_9 = mercury__getopt__STATE_VARIABLE_OptionsSet_77_77;
                  }
                  else
                  {
                    MR_Word mercury__getopt__OptionTable1_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__Result1_107, (MR_Integer) 0)));

                    /* direct tailcall eliminated */
                    {
                      MR_Word mercury__getopt__next_value_of_HeadVar__1_1 = mercury__getopt__Args1_45;
                      MR_Word mercury__getopt__next_value_of_HeadVar__4_4 = mercury__getopt__OptionArgs1_46;
                      MR_Word mercury__getopt__next_value_of_HeadVar__6_6 = mercury__getopt__OptionTable1_105;
                      MR_Word mercury__getopt__next_value_of_STATE_VARIABLE_OptionsSet_0_8 = mercury__getopt__STATE_VARIABLE_OptionsSet_77_77;

                      mercury__getopt__HeadVar__1_1 = mercury__getopt__next_value_of_HeadVar__1_1;
                      mercury__getopt__HeadVar__4_4 = mercury__getopt__next_value_of_HeadVar__4_4;
                      mercury__getopt__HeadVar__6_6 = mercury__getopt__next_value_of_HeadVar__6_6;
                      mercury__getopt__STATE_VARIABLE_OptionsSet_0_8 = mercury__getopt__next_value_of_STATE_VARIABLE_OptionsSet_0_8;
                    }
                    continue;
                  }
                }
              }
              else
              {
                MR_Word mercury__getopt__Args1_119;

                mercury__getopt__process_arguments_9_p_0(mercury__getopt__TypeInfo_for_OptionType_138, mercury__getopt__Args0_17, &mercury__getopt__Args1_119, mercury__getopt__OptionOps_3, mercury__getopt__HeadVar__4_4, mercury__getopt__OptionArgs_5, mercury__getopt__HeadVar__6_6, mercury__getopt__HeadVar__7_7, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, mercury__getopt__STATE_VARIABLE_OptionsSet_9);
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__getopt__HeadVar__2_2 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Option_16));
                  MR_hl_field(MR_mktag(1), base, 1) = ((MR_Box) (mercury__getopt__Args1_119));
                }
              }
            }
          }
        }
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__getopt__process_negated_option_7_p_0(
  MR_Word mercury__getopt__TypeInfo_for_OptionType_51,
  MR_String mercury__getopt__Option_8,
  MR_Box mercury__getopt__Flag_9,
  MR_Word mercury__getopt__OptionOps_10,
  MR_Word mercury__getopt__OptionTable0_11,
  MR_Word * mercury__getopt__Result_12,
  MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_0_23,
  MR_Word * mercury__getopt__STATE_VARIABLE_OptionsSet_24)
{
  {
    MR_bool mercury__getopt__succeeded;
    MR_Word mercury__getopt__OptionData_14;
    MR_Word mercury__getopt__TypeCtorInfo_52_52 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
    MR_Box mercury__getopt__conv0_OptionData_14;

    mercury__getopt__succeeded = mercury__tree234__search_3_p_0(mercury__getopt__TypeInfo_for_OptionType_51, mercury__getopt__TypeCtorInfo_52_52, mercury__getopt__OptionTable0_11, mercury__getopt__Flag_9, &mercury__getopt__conv0_OptionData_14);
    if (mercury__getopt__succeeded)
    {
      mercury__getopt__OptionData_14 = ((MR_Word) mercury__getopt__conv0_OptionData_14);
      mercury__getopt__succeeded = MR_TRUE;
    }
    if (mercury__getopt__succeeded)
      switch (MR_tag((MR_Word) mercury__getopt__OptionData_14)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(mercury__getopt__OptionData_14)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
            case (MR_Integer) 2:
            case (MR_Integer) 3:
              {
                MR_Word mercury__getopt__Error_22;
                MR_Word mercury__getopt__Var_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));

                {
                  mercury__getopt__Error_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__getopt__Error_22, 0) = mercury__getopt__Flag_9;
                  MR_hl_field(MR_mktag(1), mercury__getopt__Error_22, 1) = ((MR_Box) (mercury__getopt__Option_8));
                  MR_hl_field(MR_mktag(1), mercury__getopt__Error_22, 2) = ((MR_Box) (mercury__getopt__Var_25));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__getopt__Result_12 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Error_22));
                }
                *mercury__getopt__STATE_VARIABLE_OptionsSet_24 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_23;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_30_30;
                MR_Word mercury__getopt__Var_31;
                MR_Word mercury__getopt__V_5_84 = (MR_Word) mercury__getopt__STATE_VARIABLE_OptionsSet_0_23;
                MR_Word mercury__getopt__V_6_85;

                mercury__set_ordlist__insert_loop_3_p_0(mercury__getopt__TypeInfo_for_OptionType_51, mercury__getopt__V_5_84, mercury__getopt__Flag_9, &mercury__getopt__V_6_85);
                mercury__getopt__STATE_VARIABLE_OptionsSet_30_30 = (MR_Word) mercury__getopt__V_6_85;
                mercury__getopt__Var_31 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__getopt_scalar_common_8[1]);
                mercury__getopt__process_special_8_p_0(mercury__getopt__TypeInfo_for_OptionType_51, mercury__getopt__Option_8, mercury__getopt__Flag_9, mercury__getopt__Var_31, mercury__getopt__OptionOps_10, mercury__getopt__OptionTable0_11, mercury__getopt__Result_12, mercury__getopt__STATE_VARIABLE_OptionsSet_30_30, mercury__getopt__STATE_VARIABLE_OptionsSet_24);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_26_26;
                MR_Word mercury__getopt__Var_27;
                MR_Word mercury__getopt__Var_29;

                mercury__set__insert_3_p_0(mercury__getopt__TypeInfo_for_OptionType_51, mercury__getopt__Flag_9, mercury__getopt__STATE_VARIABLE_OptionsSet_0_23, &mercury__getopt__STATE_VARIABLE_OptionsSet_26_26);
                mercury__getopt__Var_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                mercury__getopt__Var_27 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__getopt_scalar_common_1[6]);
                mercury__getopt__process_special_8_p_0(mercury__getopt__TypeInfo_for_OptionType_51, mercury__getopt__Option_8, mercury__getopt__Flag_9, mercury__getopt__Var_27, mercury__getopt__OptionOps_10, mercury__getopt__OptionTable0_11, mercury__getopt__Result_12, mercury__getopt__STATE_VARIABLE_OptionsSet_26_26, mercury__getopt__STATE_VARIABLE_OptionsSet_24);
              }
              break;
          }
          break;
        case (MR_Integer) 1:
          {
            MR_Word mercury__getopt__TypeCtorInfo_53_53;
            MR_Word mercury__getopt__OptionTable_16;
            MR_Word mercury__getopt__Var_44;
            MR_Word mercury__getopt__V_5_74 = (MR_Word) mercury__getopt__STATE_VARIABLE_OptionsSet_0_23;
            MR_Word mercury__getopt__V_6_75;

            mercury__set_ordlist__insert_loop_3_p_0(mercury__getopt__TypeInfo_for_OptionType_51, mercury__getopt__V_5_74, mercury__getopt__Flag_9, &mercury__getopt__V_6_75);
            *mercury__getopt__STATE_VARIABLE_OptionsSet_24 = (MR_Word) mercury__getopt__V_6_75;
            mercury__getopt__Var_44 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__getopt_scalar_common_8[1]);
            mercury__getopt__TypeCtorInfo_53_53 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
            mercury__tree234__set_4_p_0(mercury__getopt__TypeInfo_for_OptionType_51, mercury__getopt__TypeCtorInfo_53_53, mercury__getopt__Flag_9, ((MR_Box) (mercury__getopt__Var_44)), mercury__getopt__OptionTable0_11, &mercury__getopt__OptionTable_16);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *mercury__getopt__Result_12 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__OptionTable_16));
            }
          }
          break;
        case (MR_Integer) 2:
          {
            MR_Word mercury__getopt__Error_22;
            MR_Word mercury__getopt__Var_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));

            {
              mercury__getopt__Error_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__getopt__Error_22, 0) = mercury__getopt__Flag_9;
              MR_hl_field(MR_mktag(1), mercury__getopt__Error_22, 1) = ((MR_Box) (mercury__getopt__Option_8));
              MR_hl_field(MR_mktag(1), mercury__getopt__Error_22, 2) = ((MR_Box) (mercury__getopt__Var_25));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mercury__getopt__Result_12 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Error_22));
            }
            *mercury__getopt__STATE_VARIABLE_OptionsSet_24 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_23;
          }
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__OptionData_14, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              {
                MR_Word mercury__getopt__Error_22;
                MR_Word mercury__getopt__Var_25 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 2));

                {
                  mercury__getopt__Error_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__getopt__Error_22, 0) = mercury__getopt__Flag_9;
                  MR_hl_field(MR_mktag(1), mercury__getopt__Error_22, 1) = ((MR_Box) (mercury__getopt__Option_8));
                  MR_hl_field(MR_mktag(1), mercury__getopt__Error_22, 2) = ((MR_Box) (mercury__getopt__Var_25));
                }
                {
                  MR_Word base;
                  base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  *mercury__getopt__Result_12 = base;
                  MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Error_22));
                }
                *mercury__getopt__STATE_VARIABLE_OptionsSet_24 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_23;
              }
              break;
            case (MR_Integer) 1:
              {
                MR_Word mercury__getopt__TypeCtorInfo_54_54;
                MR_Word mercury__getopt__Var_41;
                MR_Word mercury__getopt__Var_42;
                MR_Word mercury__getopt__OptionTable_47;
                MR_Word mercury__getopt__V_5_90 = (MR_Word) mercury__getopt__STATE_VARIABLE_OptionsSet_0_23;
                MR_Word mercury__getopt__V_6_91;

                mercury__set_ordlist__insert_loop_3_p_0(mercury__getopt__TypeInfo_for_OptionType_51, mercury__getopt__V_5_90, mercury__getopt__Flag_9, &mercury__getopt__V_6_91);
                *mercury__getopt__STATE_VARIABLE_OptionsSet_24 = (MR_Word) mercury__getopt__V_6_91;
                mercury__getopt__Var_42 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                mercury__getopt__Var_41 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__getopt_scalar_common_1[4]);
                mercury__getopt__TypeCtorInfo_54_54 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
                mercury__map__set_4_p_0(mercury__getopt__TypeInfo_for_OptionType_51, mercury__getopt__TypeCtorInfo_54_54, mercury__getopt__Flag_9, ((MR_Box) (mercury__getopt__Var_41)), mercury__getopt__OptionTable0_11, &mercury__getopt__OptionTable_47);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *mercury__getopt__Result_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__OptionTable_47));
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word mercury__getopt__TypeCtorInfo_55_55;
                MR_Word mercury__getopt__Var_38;
                MR_Word mercury__getopt__Var_39;
                MR_Word mercury__getopt__OptionTable_48;

                mercury__set__insert_3_p_0(mercury__getopt__TypeInfo_for_OptionType_51, mercury__getopt__Flag_9, mercury__getopt__STATE_VARIABLE_OptionsSet_0_23, mercury__getopt__STATE_VARIABLE_OptionsSet_24);
                mercury__getopt__Var_39 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                mercury__getopt__Var_38 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__getopt_scalar_common_1[5]);
                mercury__getopt__TypeCtorInfo_55_55 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
                mercury__map__set_4_p_0(mercury__getopt__TypeInfo_for_OptionType_51, mercury__getopt__TypeCtorInfo_55_55, mercury__getopt__Flag_9, ((MR_Box) (mercury__getopt__Var_38)), mercury__getopt__OptionTable0_11, &mercury__getopt__OptionTable_48);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *mercury__getopt__Result_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__OptionTable_48));
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word mercury__getopt__TypeCtorInfo_56_56;
                MR_Word mercury__getopt__Var_35;
                MR_Word mercury__getopt__Var_36;
                MR_Word mercury__getopt__OptionTable_49;
                MR_Word mercury__getopt__V_5_64 = (MR_Word) mercury__getopt__STATE_VARIABLE_OptionsSet_0_23;
                MR_Word mercury__getopt__V_6_65;

                mercury__set_ordlist__insert_loop_3_p_0(mercury__getopt__TypeInfo_for_OptionType_51, mercury__getopt__V_5_64, mercury__getopt__Flag_9, &mercury__getopt__V_6_65);
                *mercury__getopt__STATE_VARIABLE_OptionsSet_24 = (MR_Word) mercury__getopt__V_6_65;
                mercury__getopt__Var_36 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                mercury__getopt__Var_35 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__getopt_scalar_common_1[3]);
                mercury__getopt__TypeCtorInfo_56_56 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
                mercury__tree234__set_4_p_0(mercury__getopt__TypeInfo_for_OptionType_51, mercury__getopt__TypeCtorInfo_56_56, mercury__getopt__Flag_9, ((MR_Box) (mercury__getopt__Var_35)), mercury__getopt__OptionTable0_11, &mercury__getopt__OptionTable_49);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *mercury__getopt__Result_12 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__OptionTable_49));
                }
              }
              break;
          }
          break;
      }
    else
    {
      MR_Word mercury__getopt__Var_46 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
      MR_Word mercury__getopt__Error_50;

      {
        mercury__getopt__Error_50 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
        MR_hl_field(MR_mktag(1), mercury__getopt__Error_50, 0) = mercury__getopt__Flag_9;
        MR_hl_field(MR_mktag(1), mercury__getopt__Error_50, 1) = ((MR_Box) (mercury__getopt__Option_8));
        MR_hl_field(MR_mktag(1), mercury__getopt__Error_50, 2) = ((MR_Box) (mercury__getopt__Var_46));
      }
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *mercury__getopt__Result_12 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Error_50));
      }
      *mercury__getopt__STATE_VARIABLE_OptionsSet_24 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_23;
    }
  }
}

static void MR_CALL 
mercury__getopt__handle_short_options_10_p_0(
  MR_Word mercury__getopt__TypeInfo_for_OptionType_60,
  MR_Word mercury__getopt__HeadVar__1_1,
  MR_Word mercury__getopt__OptionOps_2,
  MR_Word mercury__getopt__HeadVar__3_3,
  MR_Word * mercury__getopt__Args_4,
  MR_Word mercury__getopt__HeadVar__5_5,
  MR_Word * mercury__getopt__OptionArgs_6,
  MR_Word mercury__getopt__HeadVar__7_7,
  MR_Word * mercury__getopt__HeadVar__8_8,
  MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_0_9,
  MR_Word * mercury__getopt__STATE_VARIABLE_OptionsSet_10)
{
  while (MR_TRUE)
  {
    /* tailcall optimized into a loop */
    {
      MR_bool mercury__getopt__succeeded;

      if ((mercury__getopt__HeadVar__1_1 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
      {
        *mercury__getopt__Args_4 = mercury__getopt__HeadVar__3_3;
        *mercury__getopt__OptionArgs_6 = mercury__getopt__HeadVar__5_5;
        {
          MR_Word base;
          base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          *mercury__getopt__HeadVar__8_8 = base;
          MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__HeadVar__7_7));
        }
        *mercury__getopt__STATE_VARIABLE_OptionsSet_10 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_9;
      }
      else
      {
        MR_Char mercury__getopt__Opt_18 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)));
        MR_Word mercury__getopt__Opts0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__1_1, (MR_Integer) 1)));
        MR_Word mercury__getopt__ShortOptionPred_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_2, (MR_Integer) 0)));
        MR_Word mercury__getopt__Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_2, (MR_Integer) 1)));
        MR_Word mercury__getopt__Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_2, (MR_Integer) 2)));
        MR_Box mercury__getopt__Flag_29;
        MR_bool MR_CALL (* mercury__getopt__func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__getopt__ShortOptionPred_28, (MR_Integer) 1)));

        mercury__getopt__succeeded = mercury__getopt__func_0(((MR_Box) mercury__getopt__ShortOptionPred_28), ((MR_Box) (MR_Word) (mercury__getopt__Opt_18)), &mercury__getopt__Flag_29);
        if (mercury__getopt__succeeded)
        {
          MR_Word mercury__getopt__OptionData_30;
          MR_Word mercury__getopt__TypeCtorInfo_61_61 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
          MR_Box mercury__getopt__conv1_OptionData_30;

          mercury__getopt__succeeded = mercury__tree234__search_3_p_0(mercury__getopt__TypeInfo_for_OptionType_60, mercury__getopt__TypeCtorInfo_61_61, mercury__getopt__HeadVar__7_7, mercury__getopt__Flag_29, &mercury__getopt__conv1_OptionData_30);
          if (mercury__getopt__succeeded)
          {
            mercury__getopt__OptionData_30 = ((MR_Word) mercury__getopt__conv1_OptionData_30);
            mercury__getopt__succeeded = MR_TRUE;
          }
          if (mercury__getopt__succeeded)
          {
            MR_Word mercury__getopt__Args1_32;
            MR_Word mercury__getopt__OptionArgs1_33;
            MR_Word mercury__getopt__MaybeOptionArg_34;
            MR_Word mercury__getopt__Opts1_35;
            MR_String mercury__getopt__Option_36;
            MR_Word mercury__getopt__Result1_37;
            MR_Word mercury__getopt__Var_45;
            MR_Word mercury__getopt__Var_47;
            MR_Word mercury__getopt__Var_48;
            MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_49_49;
            MR_Word mercury__getopt__Var_62;

            switch (MR_tag((MR_Word) mercury__getopt__OptionData_30)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(mercury__getopt__OptionData_30)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    mercury__getopt__Var_62 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    mercury__getopt__Var_62 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 2:
                    mercury__getopt__Var_62 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    mercury__getopt__Var_62 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    mercury__getopt__Var_62 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                mercury__getopt__Var_62 = (MR_Integer) 0;
                break;
              case (MR_Integer) 2:
                mercury__getopt__Var_62 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__OptionData_30, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    mercury__getopt__Var_62 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    mercury__getopt__Var_62 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    mercury__getopt__Var_62 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    mercury__getopt__Var_62 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            mercury__getopt__succeeded = ((MR_Integer) 1 == mercury__getopt__Var_62);
            if (mercury__getopt__succeeded)
            {
              MR_String mercury__getopt__Arg_31;
              MR_String mercury__getopt__ArgPrime_78;
              MR_Word mercury__getopt__ArgsPrime_79;

              mercury__getopt__succeeded = (mercury__getopt__Opts0_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
              if (mercury__getopt__succeeded)
              {
                mercury__getopt__succeeded = ((MR_tag((MR_Word) mercury__getopt__HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
                if (mercury__getopt__succeeded)
                {
                  mercury__getopt__ArgPrime_78 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__3_3, (MR_Integer) 0)));
                  mercury__getopt__ArgsPrime_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__HeadVar__3_3, (MR_Integer) 1)));
                }
              }
              if (mercury__getopt__succeeded)
              {
                {
                  mercury__getopt__OptionArgs1_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__getopt__OptionArgs1_33, 0) = ((MR_Box) (mercury__getopt__ArgPrime_78));
                  MR_hl_field(MR_mktag(1), mercury__getopt__OptionArgs1_33, 1) = ((MR_Box) (mercury__getopt__HeadVar__5_5));
                }
                mercury__getopt__Arg_31 = mercury__getopt__ArgPrime_78;
                mercury__getopt__Args1_32 = mercury__getopt__ArgsPrime_79;
              }
              else
              {
                mercury__string__from_char_list_2_p_0(mercury__getopt__Opts0_19, &mercury__getopt__Arg_31);
                mercury__getopt__OptionArgs1_33 = mercury__getopt__HeadVar__5_5;
                mercury__getopt__Args1_32 = mercury__getopt__HeadVar__3_3;
              }
              {
                mercury__getopt__MaybeOptionArg_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__getopt__MaybeOptionArg_34, 0) = ((MR_Box) (mercury__getopt__Arg_31));
              }
              mercury__getopt__Opts1_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            }
            else
            {
              mercury__getopt__MaybeOptionArg_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              mercury__getopt__Opts1_35 = mercury__getopt__Opts0_19;
              mercury__getopt__OptionArgs1_33 = mercury__getopt__HeadVar__5_5;
              mercury__getopt__Args1_32 = mercury__getopt__HeadVar__3_3;
            }
            mercury__getopt__Var_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              mercury__getopt__Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__getopt__Var_47, 0) = ((MR_Box) (MR_Word) (mercury__getopt__Opt_18));
              MR_hl_field(MR_mktag(1), mercury__getopt__Var_47, 1) = ((MR_Box) (mercury__getopt__Var_48));
            }
            {
              mercury__getopt__Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__getopt__Var_45, 0) = ((MR_Box) (MR_Word) ((MR_Char) 45));
              MR_hl_field(MR_mktag(1), mercury__getopt__Var_45, 1) = ((MR_Box) (mercury__getopt__Var_47));
            }
            mercury__string__from_char_list_2_p_0(mercury__getopt__Var_45, &mercury__getopt__Option_36);
            mercury__getopt__process_option_9_p_0(mercury__getopt__TypeInfo_for_OptionType_60, mercury__getopt__OptionData_30, mercury__getopt__Option_36, mercury__getopt__Flag_29, mercury__getopt__MaybeOptionArg_34, mercury__getopt__OptionOps_2, mercury__getopt__HeadVar__7_7, &mercury__getopt__Result1_37, mercury__getopt__STATE_VARIABLE_OptionsSet_0_9, &mercury__getopt__STATE_VARIABLE_OptionsSet_49_49);
            if (((MR_tag((MR_Word) mercury__getopt__Result1_37)) == (MR_mktag((MR_Integer) 1))))
            {
              *mercury__getopt__HeadVar__8_8 = mercury__getopt__Result1_37;
              *mercury__getopt__OptionArgs_6 = mercury__getopt__OptionArgs1_33;
              *mercury__getopt__Args_4 = mercury__getopt__Args1_32;
              *mercury__getopt__STATE_VARIABLE_OptionsSet_10 = mercury__getopt__STATE_VARIABLE_OptionsSet_49_49;
            }
            else
            {
              MR_Word mercury__getopt__OptionTable1_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__Result1_37, (MR_Integer) 0)));

              /* direct tailcall eliminated */
              {
                MR_Word mercury__getopt__next_value_of_HeadVar__1_1 = mercury__getopt__Opts1_35;
                MR_Word mercury__getopt__next_value_of_HeadVar__3_3 = mercury__getopt__Args1_32;
                MR_Word mercury__getopt__next_value_of_HeadVar__5_5 = mercury__getopt__OptionArgs1_33;
                MR_Word mercury__getopt__next_value_of_HeadVar__7_7 = mercury__getopt__OptionTable1_38;
                MR_Word mercury__getopt__next_value_of_STATE_VARIABLE_OptionsSet_0_9 = mercury__getopt__STATE_VARIABLE_OptionsSet_49_49;

                mercury__getopt__HeadVar__1_1 = mercury__getopt__next_value_of_HeadVar__1_1;
                mercury__getopt__HeadVar__3_3 = mercury__getopt__next_value_of_HeadVar__3_3;
                mercury__getopt__HeadVar__5_5 = mercury__getopt__next_value_of_HeadVar__5_5;
                mercury__getopt__HeadVar__7_7 = mercury__getopt__next_value_of_HeadVar__7_7;
                mercury__getopt__STATE_VARIABLE_OptionsSet_0_9 = mercury__getopt__next_value_of_STATE_VARIABLE_OptionsSet_0_9;
              }
              continue;
            }
          }
          else
          {
            MR_String mercury__getopt__OptString_40;
            MR_Word mercury__getopt__Error_41;
            MR_String mercury__getopt__Var_51;
            MR_Word mercury__getopt__Var_53;
            MR_Word mercury__getopt__V_5_82;
            MR_Word mercury__getopt__V_6_83 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

            {
              mercury__getopt__V_5_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__getopt__V_5_82, 0) = ((MR_Box) (MR_Word) (mercury__getopt__Opt_18));
              MR_hl_field(MR_mktag(1), mercury__getopt__V_5_82, 1) = ((MR_Box) (mercury__getopt__V_6_83));
            }
            mercury__string__to_char_list_2_p_1(&mercury__getopt__OptString_40, mercury__getopt__V_5_82);
            mercury__string__append_3_p_2((MR_String) "-", mercury__getopt__OptString_40, &mercury__getopt__Var_51);
            mercury__getopt__Var_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            {
              mercury__getopt__Error_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__getopt__Error_41, 0) = mercury__getopt__Flag_29;
              MR_hl_field(MR_mktag(1), mercury__getopt__Error_41, 1) = ((MR_Box) (mercury__getopt__Var_51));
              MR_hl_field(MR_mktag(1), mercury__getopt__Error_41, 2) = ((MR_Box) (mercury__getopt__Var_53));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mercury__getopt__HeadVar__8_8 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Error_41));
            }
            *mercury__getopt__OptionArgs_6 = mercury__getopt__HeadVar__5_5;
            *mercury__getopt__Args_4 = mercury__getopt__HeadVar__3_3;
            *mercury__getopt__STATE_VARIABLE_OptionsSet_10 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_9;
          }
        }
        else
        {
          MR_String mercury__getopt__Var_54;
          MR_String mercury__getopt__OptString_56;
          MR_Word mercury__getopt__Error_57;
          MR_Word mercury__getopt__V_5_92;
          MR_Word mercury__getopt__V_6_93 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

          {
            mercury__getopt__V_5_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__getopt__V_5_92, 0) = ((MR_Box) (MR_Word) (mercury__getopt__Opt_18));
            MR_hl_field(MR_mktag(1), mercury__getopt__V_5_92, 1) = ((MR_Box) (mercury__getopt__V_6_93));
          }
          mercury__string__to_char_list_2_p_1(&mercury__getopt__OptString_56, mercury__getopt__V_5_92);
          mercury__getopt__Var_54 = mercury__string__f_43_43_2_f_0((MR_String) "-", mercury__getopt__OptString_56);
          {
            mercury__getopt__Error_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), mercury__getopt__Error_57, 0) = ((MR_Box) (mercury__getopt__Var_54));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *mercury__getopt__HeadVar__8_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Error_57));
          }
          *mercury__getopt__OptionArgs_6 = mercury__getopt__HeadVar__5_5;
          *mercury__getopt__Args_4 = mercury__getopt__HeadVar__3_3;
          *mercury__getopt__STATE_VARIABLE_OptionsSet_10 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_9;
        }
      }
    }
    break;
  }
}

static void MR_CALL 
mercury__getopt__process_option_9_p_0(
  MR_Word mercury__getopt__TypeInfo_for_OptionType_204,
  MR_Word mercury__getopt__HeadVar__1_1,
  MR_String mercury__getopt__HeadVar__2_2,
  MR_Box mercury__getopt__Flag_3,
  MR_Word mercury__getopt__MaybeArg_4,
  MR_Word mercury__getopt__HeadVar__5_5,
  MR_Word mercury__getopt__HeadVar__6_6,
  MR_Word * mercury__getopt__Result_7,
  MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_0_8,
  MR_Word * mercury__getopt__STATE_VARIABLE_OptionsSet_9)
{
  {
    MR_bool mercury__getopt__succeeded;

    switch (MR_tag((MR_Word) mercury__getopt__HeadVar__1_1)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        switch (MR_unmkbody(mercury__getopt__HeadVar__1_1)) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_139_139;

              mercury__set__insert_3_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__Flag_3, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, &mercury__getopt__STATE_VARIABLE_OptionsSet_139_139);
              if ((mercury__getopt__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word mercury__getopt__Var_140 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                mercury__getopt__process_special_8_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__HeadVar__2_2, mercury__getopt__Flag_3, mercury__getopt__Var_140, mercury__getopt__HeadVar__5_5, mercury__getopt__HeadVar__6_6, mercury__getopt__Result_7, mercury__getopt__STATE_VARIABLE_OptionsSet_139_139, mercury__getopt__STATE_VARIABLE_OptionsSet_9);
              }
              else
              {
                {
                  mercury__require__error_1_p_0((MR_String) "no special argument expected in getopt.process_option");
                  return;
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_153_153;

              mercury__set__insert_3_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__Flag_3, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, &mercury__getopt__STATE_VARIABLE_OptionsSet_153_153);
              if ((mercury__getopt__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word mercury__getopt__Var_154 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__getopt_scalar_common_8[0]);

                mercury__getopt__process_special_8_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__HeadVar__2_2, mercury__getopt__Flag_3, mercury__getopt__Var_154, mercury__getopt__HeadVar__5_5, mercury__getopt__HeadVar__6_6, mercury__getopt__Result_7, mercury__getopt__STATE_VARIABLE_OptionsSet_153_153, mercury__getopt__STATE_VARIABLE_OptionsSet_9);
              }
              else
              {
                MR_Word mercury__getopt__Var_157 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__getopt_scalar_common_8[1]);

                mercury__getopt__process_special_8_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__HeadVar__2_2, mercury__getopt__Flag_3, mercury__getopt__Var_157, mercury__getopt__HeadVar__5_5, mercury__getopt__HeadVar__6_6, mercury__getopt__Result_7, mercury__getopt__STATE_VARIABLE_OptionsSet_153_153, mercury__getopt__STATE_VARIABLE_OptionsSet_9);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_171_171;

              mercury__set__insert_3_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__Flag_3, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, &mercury__getopt__STATE_VARIABLE_OptionsSet_171_171);
              if ((mercury__getopt__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__error_1_p_0((MR_String) "int_special argument expected in getopt.process_option");
                  return;
                }
              }
              else
              {
                MR_String mercury__getopt__Arg_167 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__MaybeArg_4, (MR_Integer) 0)));
                MR_Integer mercury__getopt__IntArg_168;

                mercury__getopt__succeeded = mercury__string__to_int_2_p_0(mercury__getopt__Arg_167, &mercury__getopt__IntArg_168);
                if (mercury__getopt__succeeded)
                {
                  MR_Word mercury__getopt__Var_173;

                  {
                    mercury__getopt__Var_173 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), mercury__getopt__Var_173, 0) = ((MR_Box) (mercury__getopt__IntArg_168));
                  }
                  mercury__getopt__process_special_8_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__HeadVar__2_2, mercury__getopt__Flag_3, mercury__getopt__Var_173, mercury__getopt__HeadVar__5_5, mercury__getopt__HeadVar__6_6, mercury__getopt__Result_7, mercury__getopt__STATE_VARIABLE_OptionsSet_171_171, mercury__getopt__STATE_VARIABLE_OptionsSet_9);
                }
                else
                {
                  mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_4_p_0(mercury__getopt__Flag_3, mercury__getopt__HeadVar__2_2, mercury__getopt__Arg_167, mercury__getopt__Result_7);
                  *mercury__getopt__STATE_VARIABLE_OptionsSet_9 = mercury__getopt__STATE_VARIABLE_OptionsSet_171_171;
                }
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_185_185;

              mercury__set__insert_3_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__Flag_3, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, &mercury__getopt__STATE_VARIABLE_OptionsSet_185_185);
              if ((mercury__getopt__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__error_1_p_0((MR_String) "string_special argument expected in getopt.process_option");
                  return;
                }
              }
              else
              {
                MR_String mercury__getopt__Arg_182 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__MaybeArg_4, (MR_Integer) 0)));
                MR_Word mercury__getopt__Var_187;

                {
                  mercury__getopt__Var_187 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), mercury__getopt__Var_187, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), mercury__getopt__Var_187, 1) = ((MR_Box) (mercury__getopt__Arg_182));
                }
                mercury__getopt__process_special_8_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__HeadVar__2_2, mercury__getopt__Flag_3, mercury__getopt__Var_187, mercury__getopt__HeadVar__5_5, mercury__getopt__HeadVar__6_6, mercury__getopt__Result_7, mercury__getopt__STATE_VARIABLE_OptionsSet_185_185, mercury__getopt__STATE_VARIABLE_OptionsSet_9);
              }
            }
            break;
          case (MR_Integer) 4:
            if ((mercury__getopt__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                mercury__require__error_1_p_0((MR_String) "maybe_string_special argument expected in getopt.process_option");
                return;
              }
            }
            else
            {
              MR_Word mercury__getopt__Var_202;

              {
                mercury__getopt__Var_202 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), mercury__getopt__Var_202, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), mercury__getopt__Var_202, 1) = ((MR_Box) (mercury__getopt__MaybeArg_4));
              }
              mercury__getopt__process_special_8_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__HeadVar__2_2, mercury__getopt__Flag_3, mercury__getopt__Var_202, mercury__getopt__HeadVar__5_5, mercury__getopt__HeadVar__6_6, mercury__getopt__Result_7, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, mercury__getopt__STATE_VARIABLE_OptionsSet_9);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__set__insert_3_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__Flag_3, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, mercury__getopt__STATE_VARIABLE_OptionsSet_9);
          if ((mercury__getopt__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word mercury__getopt__TypeCtorInfo_206_206 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
            MR_Word mercury__getopt__Var_23 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__getopt_scalar_common_8[0]);
            MR_Word mercury__getopt__OptionTable_27;

            mercury__map__set_4_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__TypeCtorInfo_206_206, mercury__getopt__Flag_3, ((MR_Box) (mercury__getopt__Var_23)), mercury__getopt__HeadVar__6_6, &mercury__getopt__OptionTable_27);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *mercury__getopt__Result_7 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__OptionTable_27));
            }
          }
          else
          {
            MR_Word mercury__getopt__TypeCtorInfo_205_205 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
            MR_Word mercury__getopt__OptionTable_19;
            MR_Word mercury__getopt__Var_25 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__getopt_scalar_common_8[1]);

            mercury__map__set_4_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__TypeCtorInfo_205_205, mercury__getopt__Flag_3, ((MR_Box) (mercury__getopt__Var_25)), mercury__getopt__HeadVar__6_6, &mercury__getopt__OptionTable_19);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *mercury__getopt__Result_7 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__OptionTable_19));
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          mercury__set__insert_3_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__Flag_3, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, mercury__getopt__STATE_VARIABLE_OptionsSet_9);
          if ((mercury__getopt__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__error_1_p_0((MR_String) "integer argument expected in getopt.process_option");
              return;
            }
          }
          else
          {
            MR_String mercury__getopt__Arg_36 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__MaybeArg_4, (MR_Integer) 0)));
            MR_Integer mercury__getopt__IntArg_37;

            mercury__getopt__succeeded = mercury__string__to_int_2_p_0(mercury__getopt__Arg_36, &mercury__getopt__IntArg_37);
            if (mercury__getopt__succeeded)
            {
              MR_Word mercury__getopt__TypeCtorInfo_207_207;
              MR_Word mercury__getopt__Var_43;
              MR_Word mercury__getopt__STATE_VARIABLE_OptionTable_44_44;

              {
                mercury__getopt__Var_43 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), mercury__getopt__Var_43, 0) = ((MR_Box) (mercury__getopt__IntArg_37));
              }
              mercury__getopt__TypeCtorInfo_207_207 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
              mercury__map__set_4_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__TypeCtorInfo_207_207, mercury__getopt__Flag_3, ((MR_Box) (mercury__getopt__Var_43)), mercury__getopt__HeadVar__6_6, &mercury__getopt__STATE_VARIABLE_OptionTable_44_44);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *mercury__getopt__Result_7 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__STATE_VARIABLE_OptionTable_44_44));
              }
            }
            else
              mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_4_p_0(mercury__getopt__Flag_3, mercury__getopt__HeadVar__2_2, mercury__getopt__Arg_36, mercury__getopt__Result_7);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__1_1, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__set__insert_3_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__Flag_3, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, mercury__getopt__STATE_VARIABLE_OptionsSet_9);
              if ((mercury__getopt__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__error_1_p_0((MR_String) "string argument expected in getopt.process_option");
                  return;
                }
              }
              else
              {
                MR_Word mercury__getopt__TypeCtorInfo_208_208;
                MR_String mercury__getopt__Arg_57 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__MaybeArg_4, (MR_Integer) 0)));
                MR_Word mercury__getopt__Var_63;
                MR_Word mercury__getopt__STATE_VARIABLE_OptionTable_64_64;

                {
                  mercury__getopt__Var_63 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), mercury__getopt__Var_63, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), mercury__getopt__Var_63, 1) = ((MR_Box) (mercury__getopt__Arg_57));
                }
                mercury__getopt__TypeCtorInfo_208_208 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
                mercury__map__set_4_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__TypeCtorInfo_208_208, mercury__getopt__Flag_3, ((MR_Box) (mercury__getopt__Var_63)), mercury__getopt__HeadVar__6_6, &mercury__getopt__STATE_VARIABLE_OptionTable_64_64);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *mercury__getopt__Result_7 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__STATE_VARIABLE_OptionTable_64_64));
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__set__insert_3_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__Flag_3, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, mercury__getopt__STATE_VARIABLE_OptionsSet_9);
              if ((mercury__getopt__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__error_1_p_0((MR_String) "integer argument expected in getopt.process_option");
                  return;
                }
              }
              else
              {
                MR_String mercury__getopt__Arg_75 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__MaybeArg_4, (MR_Integer) 0)));
                MR_Integer mercury__getopt__IntArg_76;

                mercury__getopt__succeeded = mercury__string__to_int_2_p_0(mercury__getopt__Arg_75, &mercury__getopt__IntArg_76);
                if (mercury__getopt__succeeded)
                {
                  MR_Word mercury__getopt__TypeCtorInfo_209_209;
                  MR_Word mercury__getopt__Var_82;
                  MR_Word mercury__getopt__STATE_VARIABLE_OptionTable_83_83;
                  MR_Word mercury__getopt__Var_84;

                  {
                    mercury__getopt__Var_84 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), mercury__getopt__Var_84, 0) = ((MR_Box) (mercury__getopt__IntArg_76));
                  }
                  {
                    mercury__getopt__Var_82 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), mercury__getopt__Var_82, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), mercury__getopt__Var_82, 1) = ((MR_Box) (mercury__getopt__Var_84));
                  }
                  mercury__getopt__TypeCtorInfo_209_209 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
                  mercury__map__set_4_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__TypeCtorInfo_209_209, mercury__getopt__Flag_3, ((MR_Box) (mercury__getopt__Var_82)), mercury__getopt__HeadVar__6_6, &mercury__getopt__STATE_VARIABLE_OptionTable_83_83);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *mercury__getopt__Result_7 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__STATE_VARIABLE_OptionTable_83_83));
                  }
                }
                else
                  mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_4_p_0(mercury__getopt__Flag_3, mercury__getopt__HeadVar__2_2, mercury__getopt__Arg_75, mercury__getopt__Result_7);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__set__insert_3_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__Flag_3, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, mercury__getopt__STATE_VARIABLE_OptionsSet_9);
              if ((mercury__getopt__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__error_1_p_0((MR_String) "string argument expected in getopt.process_option");
                  return;
                }
              }
              else
              {
                MR_Word mercury__getopt__TypeCtorInfo_210_210;
                MR_Word mercury__getopt__Var_103;
                MR_Word mercury__getopt__STATE_VARIABLE_OptionTable_104_104;

                {
                  mercury__getopt__Var_103 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), mercury__getopt__Var_103, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), mercury__getopt__Var_103, 1) = ((MR_Box) (mercury__getopt__MaybeArg_4));
                }
                mercury__getopt__TypeCtorInfo_210_210 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
                mercury__map__set_4_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__TypeCtorInfo_210_210, mercury__getopt__Flag_3, ((MR_Box) (mercury__getopt__Var_103)), mercury__getopt__HeadVar__6_6, &mercury__getopt__STATE_VARIABLE_OptionTable_104_104);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *mercury__getopt__Result_7 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__STATE_VARIABLE_OptionTable_104_104));
                }
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word mercury__getopt__List0_108 = ((MR_Word) (MR_hl_field(MR_mktag(3), mercury__getopt__HeadVar__1_1, (MR_Integer) 1)));

              mercury__set__insert_3_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__Flag_3, mercury__getopt__STATE_VARIABLE_OptionsSet_0_8, mercury__getopt__STATE_VARIABLE_OptionsSet_9);
              if ((mercury__getopt__MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__error_1_p_0((MR_String) "acumulating argument expected in getopt.process_option");
                  return;
                }
              }
              else
              {
                MR_Word mercury__getopt__TypeCtorInfo_211_211;
                MR_Word mercury__getopt__TypeCtorInfo_212_212;
                MR_String mercury__getopt__Arg_116 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__MaybeArg_4, (MR_Integer) 0)));
                MR_Word mercury__getopt__List_117;
                MR_Word mercury__getopt__Var_123;
                MR_Word mercury__getopt__Var_124 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                MR_Word mercury__getopt__Var_125;
                MR_Word mercury__getopt__STATE_VARIABLE_OptionTable_126_126;

                {
                  mercury__getopt__Var_123 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), mercury__getopt__Var_123, 0) = ((MR_Box) (mercury__getopt__Arg_116));
                  MR_hl_field(MR_mktag(1), mercury__getopt__Var_123, 1) = ((MR_Box) (mercury__getopt__Var_124));
                }
                mercury__getopt__TypeCtorInfo_211_211 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
                mercury__list__append_3_p_1(mercury__getopt__TypeCtorInfo_211_211, mercury__getopt__List0_108, mercury__getopt__Var_123, &mercury__getopt__List_117);
                {
                  mercury__getopt__Var_125 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), mercury__getopt__Var_125, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(3), mercury__getopt__Var_125, 1) = ((MR_Box) (mercury__getopt__List_117));
                }
                mercury__getopt__TypeCtorInfo_212_212 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
                mercury__map__set_4_p_0(mercury__getopt__TypeInfo_for_OptionType_204, mercury__getopt__TypeCtorInfo_212_212, mercury__getopt__Flag_3, ((MR_Box) (mercury__getopt__Var_125)), mercury__getopt__HeadVar__6_6, &mercury__getopt__STATE_VARIABLE_OptionTable_126_126);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *mercury__getopt__Result_7 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__STATE_VARIABLE_OptionTable_126_126));
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
mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_4_p_0(
  MR_Box mercury__getopt__Flag_5,
  MR_String mercury__getopt__Option_6,
  MR_String mercury__getopt__Arg_7,
  MR_Word * mercury__getopt__Result_8)
{
  {
    MR_Word mercury__getopt__Reason_9;
    MR_Word mercury__getopt__Error_10;

    {
      mercury__getopt__Reason_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), mercury__getopt__Reason_9, 0) = ((MR_Box) (mercury__getopt__Arg_7));
    }
    {
      mercury__getopt__Error_10 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(1), mercury__getopt__Error_10, 0) = mercury__getopt__Flag_5;
      MR_hl_field(MR_mktag(1), mercury__getopt__Error_10, 1) = ((MR_Box) (mercury__getopt__Option_6));
      MR_hl_field(MR_mktag(1), mercury__getopt__Error_10, 2) = ((MR_Box) (mercury__getopt__Reason_9));
    }
    {
      MR_Word base;
      base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      *mercury__getopt__Result_8 = base;
      MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Error_10));
    }
  }
}

static void MR_CALL 
mercury__getopt__process_special_8_p_0(
  MR_Word mercury__getopt__TypeInfo_for_OptionType_54,
  MR_String mercury__getopt__Option_9,
  MR_Box mercury__getopt__Flag_10,
  MR_Word mercury__getopt__OptionData_11,
  MR_Word mercury__getopt__OptionOps_12,
  MR_Word mercury__getopt__OptionTable0_13,
  MR_Word * mercury__getopt__Result_14,
  MR_Word mercury__getopt__STATE_VARIABLE_OptionsSet_0_26,
  MR_Word * mercury__getopt__STATE_VARIABLE_OptionsSet_27)
{
  {
    MR_bool mercury__getopt__succeeded;
    MR_Word mercury__getopt__MaybeHandler_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_12, (MR_Integer) 2)));
    MR_Word mercury__getopt__Var_52 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_12, (MR_Integer) 0)));
    MR_Word mercury__getopt__Var_53 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__OptionOps_12, (MR_Integer) 1)));

    switch (MR_tag((MR_Word) mercury__getopt__MaybeHandler_16)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word mercury__getopt__Var_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 4));
          MR_Word mercury__getopt__Error_51;

          {
            mercury__getopt__Error_51 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), mercury__getopt__Error_51, 0) = mercury__getopt__Flag_10;
            MR_hl_field(MR_mktag(1), mercury__getopt__Error_51, 1) = ((MR_Box) (mercury__getopt__Option_9));
            MR_hl_field(MR_mktag(1), mercury__getopt__Error_51, 2) = ((MR_Box) (mercury__getopt__Var_28));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *mercury__getopt__Result_14 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Error_51));
          }
          *mercury__getopt__STATE_VARIABLE_OptionsSet_27 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_26;
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word mercury__getopt__Handler_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), mercury__getopt__MaybeHandler_16, (MR_Integer) 0)));
          MR_Word mercury__getopt__Result0_18;
          MR_bool MR_CALL (* mercury__getopt__func_0)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__getopt__Handler_17, (MR_Integer) 1)));
          MR_Box mercury__getopt__conv1_Result0_18;

          mercury__getopt__succeeded = mercury__getopt__func_0(((MR_Box) mercury__getopt__Handler_17), mercury__getopt__Flag_10, ((MR_Box) (mercury__getopt__OptionData_11)), ((MR_Box) (mercury__getopt__OptionTable0_13)), &mercury__getopt__conv1_Result0_18);
          if (mercury__getopt__succeeded)
          {
            mercury__getopt__Result0_18 = ((MR_Word) mercury__getopt__conv1_Result0_18);
            mercury__getopt__succeeded = MR_TRUE;
          }
          if (mercury__getopt__succeeded)
            if (((MR_tag((MR_Word) mercury__getopt__Result0_18)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_String mercury__getopt__HandlerMsg_20 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__Result0_18, (MR_Integer) 0)));
              MR_Word mercury__getopt__Reason_21;
              MR_Word mercury__getopt__Error_22;

              {
                mercury__getopt__Reason_21 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), mercury__getopt__Reason_21, 0) = ((MR_Box) (mercury__getopt__HandlerMsg_20));
              }
              {
                mercury__getopt__Error_22 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__getopt__Error_22, 0) = mercury__getopt__Flag_10;
                MR_hl_field(MR_mktag(1), mercury__getopt__Error_22, 1) = ((MR_Box) (mercury__getopt__Option_9));
                MR_hl_field(MR_mktag(1), mercury__getopt__Error_22, 2) = ((MR_Box) (mercury__getopt__Reason_21));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *mercury__getopt__Result_14 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Error_22));
              }
            }
            else
            {
              MR_Word mercury__getopt__OptionTable_19 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__Result0_18, (MR_Integer) 0)));

              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *mercury__getopt__Result_14 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__OptionTable_19));
              }
            }
          else
          {
            MR_Word mercury__getopt__Var_31 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
            MR_Word mercury__getopt__Error_32;

            {
              mercury__getopt__Error_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__getopt__Error_32, 0) = mercury__getopt__Flag_10;
              MR_hl_field(MR_mktag(1), mercury__getopt__Error_32, 1) = ((MR_Box) (mercury__getopt__Option_9));
              MR_hl_field(MR_mktag(1), mercury__getopt__Error_32, 2) = ((MR_Box) (mercury__getopt__Var_31));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mercury__getopt__Result_14 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Error_32));
            }
          }
          *mercury__getopt__STATE_VARIABLE_OptionsSet_27 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_26;
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word mercury__getopt__TrackHandler_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), mercury__getopt__MaybeHandler_16, (MR_Integer) 0)));
          MR_Word mercury__getopt__NewOptionsSet_24;
          MR_Word mercury__getopt__Result0_43;
          MR_bool MR_CALL (* mercury__getopt__func_2)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box, MR_Box, MR_Box *, MR_Box *)) (MR_hl_field(MR_mktag(0), mercury__getopt__TrackHandler_23, (MR_Integer) 1)));
          MR_Box mercury__getopt__conv4_Result0_43;
          MR_Box mercury__getopt__conv3_NewOptionsSet_24;

          mercury__getopt__succeeded = mercury__getopt__func_2(((MR_Box) mercury__getopt__TrackHandler_23), mercury__getopt__Flag_10, ((MR_Box) (mercury__getopt__OptionData_11)), ((MR_Box) (mercury__getopt__OptionTable0_13)), &mercury__getopt__conv4_Result0_43, &mercury__getopt__conv3_NewOptionsSet_24);
          if (mercury__getopt__succeeded)
          {
            mercury__getopt__Result0_43 = ((MR_Word) mercury__getopt__conv4_Result0_43);
            mercury__getopt__NewOptionsSet_24 = ((MR_Word) mercury__getopt__conv3_NewOptionsSet_24);
            mercury__getopt__succeeded = MR_TRUE;
          }
          if (mercury__getopt__succeeded)
          {
            MR_Word mercury__getopt__V_4_58 = (MR_Word) mercury__getopt__NewOptionsSet_24;
            MR_Word mercury__getopt__V_5_59 = (MR_Word) mercury__getopt__STATE_VARIABLE_OptionsSet_0_26;
            MR_Word mercury__getopt__V_6_60;

            mercury__list__merge_and_remove_dups_3_p_0(mercury__getopt__TypeInfo_for_OptionType_54, mercury__getopt__V_4_58, mercury__getopt__V_5_59, &mercury__getopt__V_6_60);
            *mercury__getopt__STATE_VARIABLE_OptionsSet_27 = (MR_Word) mercury__getopt__V_6_60;
            if (((MR_tag((MR_Word) mercury__getopt__Result0_43)) == (MR_mktag((MR_Integer) 1))))
            {
              MR_String mercury__getopt__TrackHandlerMsg_25 = ((MR_String) (MR_hl_field(MR_mktag(1), mercury__getopt__Result0_43, (MR_Integer) 0)));
              MR_Word mercury__getopt__Reason_34;
              MR_Word mercury__getopt__Error_35;

              {
                mercury__getopt__Reason_34 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), mercury__getopt__Reason_34, 0) = ((MR_Box) (mercury__getopt__TrackHandlerMsg_25));
              }
              {
                mercury__getopt__Error_35 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), mercury__getopt__Error_35, 0) = mercury__getopt__Flag_10;
                MR_hl_field(MR_mktag(1), mercury__getopt__Error_35, 1) = ((MR_Box) (mercury__getopt__Option_9));
                MR_hl_field(MR_mktag(1), mercury__getopt__Error_35, 2) = ((MR_Box) (mercury__getopt__Reason_34));
              }
              {
                MR_Word base;
                base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                *mercury__getopt__Result_14 = base;
                MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Error_35));
              }
            }
            else
            {
              MR_Word mercury__getopt__OptionTable_33 = ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__Result0_43, (MR_Integer) 0)));

              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *mercury__getopt__Result_14 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (mercury__getopt__OptionTable_33));
              }
            }
          }
          else
          {
            MR_Word mercury__getopt__Var_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 3));
            MR_Word mercury__getopt__Error_42;

            {
              mercury__getopt__Error_42 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), mercury__getopt__Error_42, 0) = mercury__getopt__Flag_10;
              MR_hl_field(MR_mktag(1), mercury__getopt__Error_42, 1) = ((MR_Box) (mercury__getopt__Option_9));
              MR_hl_field(MR_mktag(1), mercury__getopt__Error_42, 2) = ((MR_Box) (mercury__getopt__Var_30));
            }
            {
              MR_Word base;
              base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              *mercury__getopt__Result_14 = base;
              MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (mercury__getopt__Error_42));
            }
            *mercury__getopt__STATE_VARIABLE_OptionsSet_27 = mercury__getopt__STATE_VARIABLE_OptionsSet_0_26;
          }
        }
        break;
    }
  }
}

static void MR_CALL 
mercury__getopt__init_option_table_multi_2_p_0_3(
  MR_Box mercury__getopt__closure_arg,
  MR_Box mercury__getopt__wrapper_arg_1,
  MR_Box mercury__getopt__wrapper_arg_2,
  MR_Box * mercury__getopt__wrapper_arg_3)
{
  {
    MR_Box mercury__getopt__closure = mercury__getopt__closure_arg;
    MR_Word mercury__getopt__conv1_HeadVar__3_3;

    mercury__list__cons_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__closure, (MR_Integer) 3))), mercury__getopt__wrapper_arg_1, ((MR_Word) mercury__getopt__wrapper_arg_2), &mercury__getopt__conv1_HeadVar__3_3);
    *mercury__getopt__wrapper_arg_3 = ((MR_Box) (mercury__getopt__conv1_HeadVar__3_3));
  }
}

static void MR_CALL 
mercury__getopt__init_option_table_multi_2_p_0_1(
  void * mercury__getopt__env_ptr_arg)
{
  {
    struct mercury__getopt__init_option_table_multi_2_p_0_2_env_0_s * mercury__getopt__env_ptr = (struct mercury__getopt__init_option_table_multi_2_p_0_2_env_0_s *) mercury__getopt__env_ptr_arg;

    *((mercury__getopt__env_ptr)->mercury__getopt__init_option_table_multi_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((mercury__getopt__env_ptr)->mercury__getopt__init_option_table_multi_2_p_0_2_env_0__conv0_LambdaHeadVar__1_10));
    ((mercury__getopt__env_ptr)->mercury__getopt__init_option_table_multi_2_p_0_2_env_0__cont)((mercury__getopt__env_ptr)->mercury__getopt__init_option_table_multi_2_p_0_2_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
mercury__getopt__init_option_table_multi_2_p_0_2(
  MR_Box mercury__getopt__closure_arg,
  MR_Box * mercury__getopt__wrapper_arg_1,
  MR_Cont mercury__getopt__cont,
  void * mercury__getopt__cont_env_ptr)
{
  {
    struct mercury__getopt__init_option_table_multi_2_p_0_2_env_0_s mercury__getopt__env;

    (mercury__getopt__env).mercury__getopt__init_option_table_multi_2_p_0_2_env_0__wrapper_arg_1 = mercury__getopt__wrapper_arg_1;
    (mercury__getopt__env).mercury__getopt__init_option_table_multi_2_p_0_2_env_0__cont = mercury__getopt__cont;
    (mercury__getopt__env).mercury__getopt__init_option_table_multi_2_p_0_2_env_0__cont_env_ptr = mercury__getopt__cont_env_ptr;
    {
      MR_Box mercury__getopt__closure = mercury__getopt__closure_arg;

      mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__closure, (MR_Integer) 4))), &(mercury__getopt__env).mercury__getopt__init_option_table_multi_2_p_0_2_env_0__conv0_LambdaHeadVar__1_10, mercury__getopt__init_option_table_multi_2_p_0_1, &mercury__getopt__env);
    }
  }
}

void MR_CALL 
mercury__getopt__init_option_table_multi_2_p_0(
  MR_Word mercury__getopt__TypeInfo_for_OptionType_12,
  MR_Word mercury__getopt__OptionDefaultsPred_3,
  MR_Word * mercury__getopt__OptionTable_4)
{
  {
    MR_Word mercury__getopt__TypeCtorInfo_13_13;
    MR_Word mercury__getopt__TypeCtorInfo_14_14;
    MR_Word mercury__getopt__TypeInfo_15_15;
    MR_Word mercury__getopt__OptionDefaultsList_8;
    MR_Word mercury__getopt__Var_9;
    MR_Word mercury__getopt__V_5_18;
    MR_Word mercury__getopt__V_5_73;
    MR_Word mercury__getopt__TypeCtorInfo_13_31;
    MR_Word mercury__getopt__TypeInfo_14_32;
    MR_Word mercury__getopt__V_6_19;
    MR_Word mercury__getopt__V_6_24;
    MR_Word mercury__getopt__V_7_26;
    MR_Word mercury__getopt__V_5_27;
    MR_Integer mercury__getopt__V_5_50;
    MR_Box mercury__getopt__conv2_V_5_27;
    MR_Word mercury__getopt__conv3_V_5_18;

    {
      mercury__getopt__Var_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__getopt__Var_9, 0) = ((MR_Box) (&mercury__getopt_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), mercury__getopt__Var_9, 1) = ((MR_Box) (mercury__getopt__init_option_table_multi_2_p_0_2));
      MR_hl_field(MR_mktag(0), mercury__getopt__Var_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), mercury__getopt__Var_9, 3) = ((MR_Box) (mercury__getopt__TypeInfo_for_OptionType_12));
      MR_hl_field(MR_mktag(0), mercury__getopt__Var_9, 4) = ((MR_Box) (mercury__getopt__OptionDefaultsPred_3));
    }
    mercury__getopt__TypeCtorInfo_14_14 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
    mercury__getopt__TypeCtorInfo_13_13 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
    {
      mercury__getopt__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__getopt__TypeInfo_15_15, 0) = ((MR_Box) (mercury__getopt__TypeCtorInfo_14_14));
      MR_hl_field(MR_mktag(0), mercury__getopt__TypeInfo_15_15, 1) = ((MR_Box) (mercury__getopt__TypeInfo_for_OptionType_12));
      MR_hl_field(MR_mktag(0), mercury__getopt__TypeInfo_15_15, 2) = ((MR_Box) (mercury__getopt__TypeCtorInfo_13_13));
    }
    {
      mercury__getopt__V_6_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__getopt__V_6_24, 0) = ((MR_Box) (&mercury__getopt_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), mercury__getopt__V_6_24, 1) = ((MR_Box) (mercury__getopt__init_option_table_multi_2_p_0_3));
      MR_hl_field(MR_mktag(0), mercury__getopt__V_6_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), mercury__getopt__V_6_24, 3) = ((MR_Box) (mercury__getopt__TypeInfo_15_15));
    }
    mercury__getopt__V_7_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__getopt__TypeCtorInfo_13_31 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    {
      mercury__getopt__TypeInfo_14_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__getopt__TypeInfo_14_32, 0) = ((MR_Box) (mercury__getopt__TypeCtorInfo_13_31));
      MR_hl_field(MR_mktag(0), mercury__getopt__TypeInfo_14_32, 1) = ((MR_Box) (mercury__getopt__TypeInfo_15_15));
    }
    mercury__solutions__builtin_aggregate_4_p_0(mercury__getopt__TypeInfo_15_15, mercury__getopt__TypeInfo_14_32, (MR_Word) mercury__getopt__Var_9, (MR_Word) mercury__getopt__V_6_24, ((MR_Box) (mercury__getopt__V_7_26)), &mercury__getopt__conv2_V_5_27);
    mercury__getopt__V_5_27 = ((MR_Word) mercury__getopt__conv2_V_5_27);
    if ((mercury__getopt__V_5_27 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "solutions", (MR_String) "predicate \140solutions.assert_num_solutions\'/3", (MR_String) "no solutions");
        return;
      }
    }
    else
      mercury__getopt__V_6_19 = mercury__getopt__V_5_27;
    mercury__list__length_acc_3_p_0(mercury__getopt__TypeInfo_15_15, (MR_Word) mercury__getopt__V_6_19, (MR_Integer) 0, &mercury__getopt__V_5_50);
    mercury__list__merge_sort_and_remove_dups_3_p_0(mercury__getopt__TypeInfo_15_15, mercury__getopt__V_5_50, (MR_Word) mercury__getopt__V_6_19, &mercury__getopt__conv3_V_5_18);
    mercury__getopt__V_5_18 = (MR_Word) mercury__getopt__conv3_V_5_18;
    if ((mercury__getopt__V_5_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
    {
      {
        mercury__require__unexpected_3_p_0((MR_String) "solutions", (MR_String) "predicate \140solutions.assert_num_solutions\'/3", (MR_String) "no solutions");
        return;
      }
    }
    else
      mercury__getopt__OptionDefaultsList_8 = mercury__getopt__V_5_18;
    mercury__getopt__V_5_73 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__tree234__assoc_list_to_tree234_acc_3_p_0(mercury__getopt__TypeInfo_for_OptionType_12, mercury__getopt__TypeCtorInfo_13_13, mercury__getopt__OptionDefaultsList_8, mercury__getopt__V_5_73, mercury__getopt__OptionTable_4);
  }
}

static void MR_CALL 
mercury__getopt__init_option_table_2_p_0_3(
  MR_Box mercury__getopt__closure_arg,
  MR_Box mercury__getopt__wrapper_arg_1,
  MR_Box mercury__getopt__wrapper_arg_2,
  MR_Box * mercury__getopt__wrapper_arg_3)
{
  {
    MR_Box mercury__getopt__closure = mercury__getopt__closure_arg;
    MR_Word mercury__getopt__conv1_HeadVar__3_3;

    mercury__list__cons_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__closure, (MR_Integer) 3))), mercury__getopt__wrapper_arg_1, ((MR_Word) mercury__getopt__wrapper_arg_2), &mercury__getopt__conv1_HeadVar__3_3);
    *mercury__getopt__wrapper_arg_3 = ((MR_Box) (mercury__getopt__conv1_HeadVar__3_3));
  }
}

static void MR_CALL 
mercury__getopt__init_option_table_2_p_0_1(
  void * mercury__getopt__env_ptr_arg)
{
  {
    struct mercury__getopt__init_option_table_2_p_0_2_env_0_s * mercury__getopt__env_ptr = (struct mercury__getopt__init_option_table_2_p_0_2_env_0_s *) mercury__getopt__env_ptr_arg;

    *((mercury__getopt__env_ptr)->mercury__getopt__init_option_table_2_p_0_2_env_0__wrapper_arg_1) = ((MR_Box) ((mercury__getopt__env_ptr)->mercury__getopt__init_option_table_2_p_0_2_env_0__conv0_LambdaHeadVar__1_10));
    ((mercury__getopt__env_ptr)->mercury__getopt__init_option_table_2_p_0_2_env_0__cont)((mercury__getopt__env_ptr)->mercury__getopt__init_option_table_2_p_0_2_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
mercury__getopt__init_option_table_2_p_0_2(
  MR_Box mercury__getopt__closure_arg,
  MR_Box * mercury__getopt__wrapper_arg_1,
  MR_Cont mercury__getopt__cont,
  void * mercury__getopt__cont_env_ptr)
{
  {
    struct mercury__getopt__init_option_table_2_p_0_2_env_0_s mercury__getopt__env;

    (mercury__getopt__env).mercury__getopt__init_option_table_2_p_0_2_env_0__wrapper_arg_1 = mercury__getopt__wrapper_arg_1;
    (mercury__getopt__env).mercury__getopt__init_option_table_2_p_0_2_env_0__cont = mercury__getopt__cont;
    (mercury__getopt__env).mercury__getopt__init_option_table_2_p_0_2_env_0__cont_env_ptr = mercury__getopt__cont_env_ptr;
    {
      MR_Box mercury__getopt__closure = mercury__getopt__closure_arg;

      mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), mercury__getopt__closure, (MR_Integer) 4))), &(mercury__getopt__env).mercury__getopt__init_option_table_2_p_0_2_env_0__conv0_LambdaHeadVar__1_10, mercury__getopt__init_option_table_2_p_0_1, &mercury__getopt__env);
    }
  }
}

void MR_CALL 
mercury__getopt__init_option_table_2_p_0(
  MR_Word mercury__getopt__TypeInfo_for_OptionType_12,
  MR_Word mercury__getopt__OptionDefaultsPred_3,
  MR_Word * mercury__getopt__OptionTable_4)
{
  {
    MR_Word mercury__getopt__TypeCtorInfo_13_13;
    MR_Word mercury__getopt__TypeCtorInfo_14_14;
    MR_Word mercury__getopt__TypeInfo_15_15;
    MR_Word mercury__getopt__OptionDefaultsList_8;
    MR_Word mercury__getopt__Var_9;
    MR_Word mercury__getopt__V_5_73;
    MR_Word mercury__getopt__TypeCtorInfo_13_31;
    MR_Word mercury__getopt__TypeInfo_14_32;
    MR_Word mercury__getopt__V_6_19;
    MR_Word mercury__getopt__V_6_24;
    MR_Word mercury__getopt__V_7_26;
    MR_Integer mercury__getopt__V_5_50;
    MR_Box mercury__getopt__conv2_V_6_19;
    MR_Word mercury__getopt__conv3_OptionDefaultsList_8;

    {
      mercury__getopt__Var_9 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 5 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__getopt__Var_9, 0) = ((MR_Box) (&mercury__getopt_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), mercury__getopt__Var_9, 1) = ((MR_Box) (mercury__getopt__init_option_table_2_p_0_2));
      MR_hl_field(MR_mktag(0), mercury__getopt__Var_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), mercury__getopt__Var_9, 3) = ((MR_Box) (mercury__getopt__TypeInfo_for_OptionType_12));
      MR_hl_field(MR_mktag(0), mercury__getopt__Var_9, 4) = ((MR_Box) (mercury__getopt__OptionDefaultsPred_3));
    }
    mercury__getopt__TypeCtorInfo_14_14 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
    mercury__getopt__TypeCtorInfo_13_13 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
    {
      mercury__getopt__TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__getopt__TypeInfo_15_15, 0) = ((MR_Box) (mercury__getopt__TypeCtorInfo_14_14));
      MR_hl_field(MR_mktag(0), mercury__getopt__TypeInfo_15_15, 1) = ((MR_Box) (mercury__getopt__TypeInfo_for_OptionType_12));
      MR_hl_field(MR_mktag(0), mercury__getopt__TypeInfo_15_15, 2) = ((MR_Box) (mercury__getopt__TypeCtorInfo_13_13));
    }
    {
      mercury__getopt__V_6_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__getopt__V_6_24, 0) = ((MR_Box) (&mercury__getopt_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), mercury__getopt__V_6_24, 1) = ((MR_Box) (mercury__getopt__init_option_table_2_p_0_3));
      MR_hl_field(MR_mktag(0), mercury__getopt__V_6_24, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
      MR_hl_field(MR_mktag(0), mercury__getopt__V_6_24, 3) = ((MR_Box) (mercury__getopt__TypeInfo_15_15));
    }
    mercury__getopt__V_7_26 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__getopt__TypeCtorInfo_13_31 = (MR_Word) &mercury__list__list__type_ctor_info_list_1;
    {
      mercury__getopt__TypeInfo_14_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), mercury__getopt__TypeInfo_14_32, 0) = ((MR_Box) (mercury__getopt__TypeCtorInfo_13_31));
      MR_hl_field(MR_mktag(0), mercury__getopt__TypeInfo_14_32, 1) = ((MR_Box) (mercury__getopt__TypeInfo_15_15));
    }
    mercury__solutions__builtin_aggregate_4_p_7(mercury__getopt__TypeInfo_15_15, mercury__getopt__TypeInfo_14_32, (MR_Word) mercury__getopt__Var_9, (MR_Word) mercury__getopt__V_6_24, ((MR_Box) (mercury__getopt__V_7_26)), &mercury__getopt__conv2_V_6_19);
    mercury__getopt__V_6_19 = ((MR_Word) mercury__getopt__conv2_V_6_19);
    mercury__list__length_acc_3_p_0(mercury__getopt__TypeInfo_15_15, (MR_Word) mercury__getopt__V_6_19, (MR_Integer) 0, &mercury__getopt__V_5_50);
    mercury__list__merge_sort_and_remove_dups_3_p_0(mercury__getopt__TypeInfo_15_15, mercury__getopt__V_5_50, (MR_Word) mercury__getopt__V_6_19, &mercury__getopt__conv3_OptionDefaultsList_8);
    mercury__getopt__OptionDefaultsList_8 = (MR_Word) mercury__getopt__conv3_OptionDefaultsList_8;
    mercury__getopt__V_5_73 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    mercury__tree234__assoc_list_to_tree234_acc_3_p_0(mercury__getopt__TypeInfo_for_OptionType_12, mercury__getopt__TypeCtorInfo_13_13, mercury__getopt__OptionDefaultsList_8, mercury__getopt__V_5_73, mercury__getopt__OptionTable_4);
  }
}

static MR_bool MR_CALL 
mercury__getopt____Unify____maybe_option_table_1_0_10001(
  MR_Box mercury__getopt__wrapper_arg_1,
  MR_Box mercury__getopt__wrapper_arg_2,
  MR_Box mercury__getopt__wrapper_arg_3)
{
  {
    MR_bool mercury__getopt__succeeded;

    mercury__getopt__succeeded = mercury__getopt____Unify____maybe_option_table_1_0(((MR_Word) mercury__getopt__wrapper_arg_1), ((MR_Word) mercury__getopt__wrapper_arg_2), ((MR_Word) mercury__getopt__wrapper_arg_3));
    return mercury__getopt__succeeded;
  }
}

static void MR_CALL 
mercury__getopt____Compare____maybe_option_table_1_0_10001(
  MR_Box mercury__getopt__wrapper_arg_1,
  MR_Box * mercury__getopt__wrapper_arg_2,
  MR_Box mercury__getopt__wrapper_arg_3,
  MR_Box mercury__getopt__wrapper_arg_4)
{
  {
    MR_Word mercury__getopt__conv0_HeadVar__1_1;

    mercury__getopt____Compare____maybe_option_table_1_0(((MR_Word) mercury__getopt__wrapper_arg_1), &mercury__getopt__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt__wrapper_arg_3), ((MR_Word) mercury__getopt__wrapper_arg_4));
    *mercury__getopt__wrapper_arg_2 = ((MR_Box) (mercury__getopt__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__getopt____Unify____maybe_option_table_se_1_0_10001(
  MR_Box mercury__getopt__wrapper_arg_1,
  MR_Box mercury__getopt__wrapper_arg_2,
  MR_Box mercury__getopt__wrapper_arg_3)
{
  {
    MR_bool mercury__getopt__succeeded;

    mercury__getopt__succeeded = mercury__getopt____Unify____maybe_option_table_se_1_0(((MR_Word) mercury__getopt__wrapper_arg_1), ((MR_Word) mercury__getopt__wrapper_arg_2), ((MR_Word) mercury__getopt__wrapper_arg_3));
    return mercury__getopt__succeeded;
  }
}

static void MR_CALL 
mercury__getopt____Compare____maybe_option_table_se_1_0_10001(
  MR_Box mercury__getopt__wrapper_arg_1,
  MR_Box * mercury__getopt__wrapper_arg_2,
  MR_Box mercury__getopt__wrapper_arg_3,
  MR_Box mercury__getopt__wrapper_arg_4)
{
  {
    MR_Word mercury__getopt__conv0_HeadVar__1_1;

    mercury__getopt____Compare____maybe_option_table_se_1_0(((MR_Word) mercury__getopt__wrapper_arg_1), &mercury__getopt__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt__wrapper_arg_3), ((MR_Word) mercury__getopt__wrapper_arg_4));
    *mercury__getopt__wrapper_arg_2 = ((MR_Box) (mercury__getopt__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__getopt____Unify____option_data_0_0_10001(
  MR_Box mercury__getopt__wrapper_arg_1,
  MR_Box mercury__getopt__wrapper_arg_2)
{
  {
    MR_bool mercury__getopt__succeeded;

    mercury__getopt__succeeded = mercury__getopt____Unify____option_data_0_0(((MR_Word) mercury__getopt__wrapper_arg_1), ((MR_Word) mercury__getopt__wrapper_arg_2));
    return mercury__getopt__succeeded;
  }
}

static void MR_CALL 
mercury__getopt____Compare____option_data_0_0_10001(
  MR_Box * mercury__getopt__wrapper_arg_1,
  MR_Box mercury__getopt__wrapper_arg_2,
  MR_Box mercury__getopt__wrapper_arg_3)
{
  {
    MR_Word mercury__getopt__conv0_HeadVar__1_1;

    mercury__getopt____Compare____option_data_0_0(&mercury__getopt__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt__wrapper_arg_2), ((MR_Word) mercury__getopt__wrapper_arg_3));
    *mercury__getopt__wrapper_arg_1 = ((MR_Box) (mercury__getopt__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__getopt____Unify____option_error_1_0_10001(
  MR_Box mercury__getopt__wrapper_arg_1,
  MR_Box mercury__getopt__wrapper_arg_2,
  MR_Box mercury__getopt__wrapper_arg_3)
{
  {
    MR_bool mercury__getopt__succeeded;

    mercury__getopt__succeeded = mercury__getopt____Unify____option_error_1_0(((MR_Word) mercury__getopt__wrapper_arg_1), ((MR_Word) mercury__getopt__wrapper_arg_2), ((MR_Word) mercury__getopt__wrapper_arg_3));
    return mercury__getopt__succeeded;
  }
}

static void MR_CALL 
mercury__getopt____Compare____option_error_1_0_10001(
  MR_Box mercury__getopt__wrapper_arg_1,
  MR_Box * mercury__getopt__wrapper_arg_2,
  MR_Box mercury__getopt__wrapper_arg_3,
  MR_Box mercury__getopt__wrapper_arg_4)
{
  {
    MR_Word mercury__getopt__conv0_HeadVar__1_1;

    mercury__getopt____Compare____option_error_1_0(((MR_Word) mercury__getopt__wrapper_arg_1), &mercury__getopt__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt__wrapper_arg_3), ((MR_Word) mercury__getopt__wrapper_arg_4));
    *mercury__getopt__wrapper_arg_2 = ((MR_Box) (mercury__getopt__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__getopt____Unify____option_error_reason_0_0_10001(
  MR_Box mercury__getopt__wrapper_arg_1,
  MR_Box mercury__getopt__wrapper_arg_2)
{
  {
    MR_bool mercury__getopt__succeeded;

    mercury__getopt__succeeded = mercury__getopt____Unify____option_error_reason_0_0(((MR_Word) mercury__getopt__wrapper_arg_1), ((MR_Word) mercury__getopt__wrapper_arg_2));
    return mercury__getopt__succeeded;
  }
}

static void MR_CALL 
mercury__getopt____Compare____option_error_reason_0_0_10001(
  MR_Box * mercury__getopt__wrapper_arg_1,
  MR_Box mercury__getopt__wrapper_arg_2,
  MR_Box mercury__getopt__wrapper_arg_3)
{
  {
    MR_Word mercury__getopt__conv0_HeadVar__1_1;

    mercury__getopt____Compare____option_error_reason_0_0(&mercury__getopt__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt__wrapper_arg_2), ((MR_Word) mercury__getopt__wrapper_arg_3));
    *mercury__getopt__wrapper_arg_1 = ((MR_Box) (mercury__getopt__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_1_0_10001(
  MR_Box mercury__getopt__wrapper_arg_1,
  MR_Box mercury__getopt__wrapper_arg_2,
  MR_Box mercury__getopt__wrapper_arg_3)
{
  {
    MR_bool mercury__getopt__succeeded;

    mercury__getopt__succeeded = mercury__getopt____Unify____option_ops_1_0(((MR_Word) mercury__getopt__wrapper_arg_1), ((MR_Word) mercury__getopt__wrapper_arg_2), ((MR_Word) mercury__getopt__wrapper_arg_3));
    return mercury__getopt__succeeded;
  }
}

static void MR_CALL 
mercury__getopt____Compare____option_ops_1_0_10001(
  MR_Box mercury__getopt__wrapper_arg_1,
  MR_Box * mercury__getopt__wrapper_arg_2,
  MR_Box mercury__getopt__wrapper_arg_3,
  MR_Box mercury__getopt__wrapper_arg_4)
{
  {
    MR_Word mercury__getopt__conv0_HeadVar__1_1;

    mercury__getopt____Compare____option_ops_1_0(((MR_Word) mercury__getopt__wrapper_arg_1), &mercury__getopt__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt__wrapper_arg_3), ((MR_Word) mercury__getopt__wrapper_arg_4));
    *mercury__getopt__wrapper_arg_2 = ((MR_Box) (mercury__getopt__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_internal_1_0_10001(
  MR_Box mercury__getopt__wrapper_arg_1,
  MR_Box mercury__getopt__wrapper_arg_2,
  MR_Box mercury__getopt__wrapper_arg_3)
{
  {
    MR_bool mercury__getopt__succeeded;

    mercury__getopt__succeeded = mercury__getopt____Unify____option_ops_internal_1_0(((MR_Word) mercury__getopt__wrapper_arg_1), ((MR_Word) mercury__getopt__wrapper_arg_2), ((MR_Word) mercury__getopt__wrapper_arg_3));
    return mercury__getopt__succeeded;
  }
}

static void MR_CALL 
mercury__getopt____Compare____option_ops_internal_1_0_10001(
  MR_Box mercury__getopt__wrapper_arg_1,
  MR_Box * mercury__getopt__wrapper_arg_2,
  MR_Box mercury__getopt__wrapper_arg_3,
  MR_Box mercury__getopt__wrapper_arg_4)
{
  {
    MR_Word mercury__getopt__conv0_HeadVar__1_1;

    mercury__getopt____Compare____option_ops_internal_1_0(((MR_Word) mercury__getopt__wrapper_arg_1), &mercury__getopt__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt__wrapper_arg_3), ((MR_Word) mercury__getopt__wrapper_arg_4));
    *mercury__getopt__wrapper_arg_2 = ((MR_Box) (mercury__getopt__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_special_1_0_10001(
  MR_Box mercury__getopt__wrapper_arg_1,
  MR_Box mercury__getopt__wrapper_arg_2,
  MR_Box mercury__getopt__wrapper_arg_3)
{
  {
    MR_bool mercury__getopt__succeeded;

    mercury__getopt__succeeded = mercury__getopt____Unify____option_ops_special_1_0(((MR_Word) mercury__getopt__wrapper_arg_1), ((MR_Word) mercury__getopt__wrapper_arg_2), ((MR_Word) mercury__getopt__wrapper_arg_3));
    return mercury__getopt__succeeded;
  }
}

static void MR_CALL 
mercury__getopt____Compare____option_ops_special_1_0_10001(
  MR_Box mercury__getopt__wrapper_arg_1,
  MR_Box * mercury__getopt__wrapper_arg_2,
  MR_Box mercury__getopt__wrapper_arg_3,
  MR_Box mercury__getopt__wrapper_arg_4)
{
  {
    MR_Word mercury__getopt__conv0_HeadVar__1_1;

    mercury__getopt____Compare____option_ops_special_1_0(((MR_Word) mercury__getopt__wrapper_arg_1), &mercury__getopt__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt__wrapper_arg_3), ((MR_Word) mercury__getopt__wrapper_arg_4));
    *mercury__getopt__wrapper_arg_2 = ((MR_Box) (mercury__getopt__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_track_1_0_10001(
  MR_Box mercury__getopt__wrapper_arg_1,
  MR_Box mercury__getopt__wrapper_arg_2,
  MR_Box mercury__getopt__wrapper_arg_3)
{
  {
    MR_bool mercury__getopt__succeeded;

    mercury__getopt__succeeded = mercury__getopt____Unify____option_ops_track_1_0(((MR_Word) mercury__getopt__wrapper_arg_1), ((MR_Word) mercury__getopt__wrapper_arg_2), ((MR_Word) mercury__getopt__wrapper_arg_3));
    return mercury__getopt__succeeded;
  }
}

static void MR_CALL 
mercury__getopt____Compare____option_ops_track_1_0_10001(
  MR_Box mercury__getopt__wrapper_arg_1,
  MR_Box * mercury__getopt__wrapper_arg_2,
  MR_Box mercury__getopt__wrapper_arg_3,
  MR_Box mercury__getopt__wrapper_arg_4)
{
  {
    MR_Word mercury__getopt__conv0_HeadVar__1_1;

    mercury__getopt____Compare____option_ops_track_1_0(((MR_Word) mercury__getopt__wrapper_arg_1), &mercury__getopt__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt__wrapper_arg_3), ((MR_Word) mercury__getopt__wrapper_arg_4));
    *mercury__getopt__wrapper_arg_2 = ((MR_Box) (mercury__getopt__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__getopt____Unify____option_table_1_0_10001(
  MR_Box mercury__getopt__wrapper_arg_1,
  MR_Box mercury__getopt__wrapper_arg_2,
  MR_Box mercury__getopt__wrapper_arg_3)
{
  {
    MR_bool mercury__getopt__succeeded;

    mercury__getopt__succeeded = mercury__getopt____Unify____option_table_1_0(((MR_Word) mercury__getopt__wrapper_arg_1), ((MR_Word) mercury__getopt__wrapper_arg_2), ((MR_Word) mercury__getopt__wrapper_arg_3));
    return mercury__getopt__succeeded;
  }
}

static void MR_CALL 
mercury__getopt____Compare____option_table_1_0_10001(
  MR_Box mercury__getopt__wrapper_arg_1,
  MR_Box * mercury__getopt__wrapper_arg_2,
  MR_Box mercury__getopt__wrapper_arg_3,
  MR_Box mercury__getopt__wrapper_arg_4)
{
  {
    MR_Word mercury__getopt__conv0_HeadVar__1_1;

    mercury__getopt____Compare____option_table_1_0(((MR_Word) mercury__getopt__wrapper_arg_1), &mercury__getopt__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt__wrapper_arg_3), ((MR_Word) mercury__getopt__wrapper_arg_4));
    *mercury__getopt__wrapper_arg_2 = ((MR_Box) (mercury__getopt__conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__getopt____Unify____special_data_0_0_10001(
  MR_Box mercury__getopt__wrapper_arg_1,
  MR_Box mercury__getopt__wrapper_arg_2)
{
  {
    MR_bool mercury__getopt__succeeded;

    mercury__getopt__succeeded = mercury__getopt____Unify____special_data_0_0(((MR_Word) mercury__getopt__wrapper_arg_1), ((MR_Word) mercury__getopt__wrapper_arg_2));
    return mercury__getopt__succeeded;
  }
}

static void MR_CALL 
mercury__getopt____Compare____special_data_0_0_10001(
  MR_Box * mercury__getopt__wrapper_arg_1,
  MR_Box mercury__getopt__wrapper_arg_2,
  MR_Box mercury__getopt__wrapper_arg_3)
{
  {
    MR_Word mercury__getopt__conv0_HeadVar__1_1;

    mercury__getopt____Compare____special_data_0_0(&mercury__getopt__conv0_HeadVar__1_1, ((MR_Word) mercury__getopt__wrapper_arg_2), ((MR_Word) mercury__getopt__wrapper_arg_3));
    *mercury__getopt__wrapper_arg_1 = ((MR_Box) (mercury__getopt__conv0_HeadVar__1_1));
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
	MR_register_type_ctor_info(&mercury__getopt__getopt__type_ctor_info_option_ops_internal_1);
	MR_register_type_ctor_info(&mercury__getopt__getopt__type_ctor_info_option_ops_special_1);
	MR_register_type_ctor_info(&mercury__getopt__getopt__type_ctor_info_option_ops_track_1);
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

/* :- end_module getopt. */
