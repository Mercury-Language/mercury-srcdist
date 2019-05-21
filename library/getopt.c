/*
** Automatically generated from `getopt.m'
** by the Mercury compiler,
** version 2018-03-30
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
  void * env_ptr_arg);

static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0(
  MR_Word TypeInfo_for_OptionType_12,
  MR_Word OptionDefaultsPred_3,
  MR_Word * LambdaHeadVar__1_10,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_2(
  void * env_ptr_arg);

static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_1(
  void * env_ptr_arg);

static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0(
  MR_Word TypeInfo_for_OptionType_12,
  MR_Word OptionDefaultsPred_3,
  MR_Word * LambdaHeadVar__1_10,
  MR_Cont cont,
  void * cont_env_ptr);

static void MR_CALL 
mercury__getopt__handle_long_option_13_p_0(
  MR_Word tscc_proc_2_input_1_TypeInfo_for_OptionType_48,
  MR_String tscc_proc_2_input_2_Option_14,
  MR_Box tscc_proc_2_input_3_Flag_15,
  MR_Word tscc_proc_2_input_4_OptionData_16,
  MR_Word tscc_proc_2_input_5_MaybeOptionArg0_17,
  MR_Word tscc_proc_2_input_6_Args0_18,
  MR_Word * tscc_output_ptr_1_HeadVar__2_2,
  MR_Word tscc_proc_2_input_7_OptionOps_20,
  MR_Word tscc_proc_2_input_8_OptionArgs0_21,
  MR_Word * tscc_output_ptr_2_OptionArgs_5,
  MR_Word tscc_proc_2_input_9_OptionTable0_23,
  MR_Word * tscc_output_ptr_3_HeadVar__7_7,
  MR_Word tscc_proc_2_input_10_STATE_VARIABLE_OptionsSet_0_37,
  MR_Word * tscc_output_ptr_4_STATE_VARIABLE_OptionsSet_9);

static void MR_CALL 
mercury__getopt__process_negated_option_7_p_0(
  MR_Word TypeInfo_for_OptionType_51,
  MR_String Option_8,
  MR_Box Flag_9,
  MR_Word OptionOps_10,
  MR_Word OptionTable0_11,
  MR_Word * Result_12,
  MR_Word STATE_VARIABLE_OptionsSet_0_23,
  MR_Word * STATE_VARIABLE_OptionsSet_24);

static void MR_CALL 
mercury__getopt__handle_short_options_10_p_0(
  MR_Word TypeInfo_for_OptionType_60,
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
mercury__getopt__process_option_9_p_0(
  MR_Word TypeInfo_for_OptionType_190,
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
mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_4_p_0(
  MR_Box Flag_5,
  MR_String Option_6,
  MR_String Arg_7,
  MR_Word * Result_8);

static void MR_CALL 
mercury__getopt__process_special_8_p_0(
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
mercury__getopt____Unify____option_ops_internal_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__getopt____Compare____option_ops_internal_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

static MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_special_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3);

static void MR_CALL 
mercury__getopt____Compare____option_ops_special_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4);

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
  void * env_ptr_arg)
{
  {
    struct mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0_s * env_ptr = (struct mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0_s *) env_ptr_arg;

    (env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0__OptionData_7 = ((MR_Word) (env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0__conv1_OptionData_7);
    mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_1(env_ptr);
  }
}

static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_1(
  void * env_ptr_arg)
{
  {
    struct mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0_s * env_ptr = (struct mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0_s *) env_ptr_arg;

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *((env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0__LambdaHeadVar__1_10) = base;
      MR_hl_field(MR_mktag(0), base, 0) = (env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0__Option_6;
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0__OptionData_7));
    }
    ((env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0__cont)((env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0(
  MR_Word TypeInfo_for_OptionType_12,
  MR_Word OptionDefaultsPred_3,
  MR_Word * LambdaHeadVar__1_10,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0_s env;

    (env).mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0__LambdaHeadVar__1_10 = LambdaHeadVar__1_10;
    (env).mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0__cont = cont;
    (env).mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0__cont_env_ptr = cont_env_ptr;
    {
      void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), OptionDefaultsPred_3, (MR_Integer) 1)));

      func_0(((MR_Box) OptionDefaultsPred_3), &(env).mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0__Option_6, &(env).mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_env_0__conv1_OptionData_7, mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0_2, &env);
    }
  }
}

static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_2(
  void * env_ptr_arg)
{
  {
    struct mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0_s * env_ptr = (struct mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0_s *) env_ptr_arg;

    (env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0__OptionData_7 = ((MR_Word) (env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0__conv1_OptionData_7);
    mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_1(env_ptr);
  }
}

static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_1(
  void * env_ptr_arg)
{
  {
    struct mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0_s * env_ptr = (struct mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0_s *) env_ptr_arg;

    {
      MR_Word base;
      base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL);
      *((env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0__LambdaHeadVar__1_10) = base;
      MR_hl_field(MR_mktag(0), base, 0) = (env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0__Option_6;
      MR_hl_field(MR_mktag(0), base, 1) = ((MR_Box) ((env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0__OptionData_7));
    }
    ((env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0__cont)((env_ptr)->mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0__cont_env_ptr);
  }
}

static void MR_CALL 
mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0(
  MR_Word TypeInfo_for_OptionType_12,
  MR_Word OptionDefaultsPred_3,
  MR_Word * LambdaHeadVar__1_10,
  MR_Cont cont,
  void * cont_env_ptr)
{
  {
    struct mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0_s env;

    (env).mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0__LambdaHeadVar__1_10 = LambdaHeadVar__1_10;
    (env).mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0__cont = cont;
    (env).mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0__cont_env_ptr = cont_env_ptr;
    {
      void MR_CALL (* func_0)(MR_Box, MR_Box *, MR_Box *, MR_Cont, void *) = ((void MR_CALL (*)(MR_Box, MR_Box *, MR_Box *, MR_Cont, void *)) (MR_hl_field(MR_mktag(0), OptionDefaultsPred_3, (MR_Integer) 1)));

      func_0(((MR_Box) OptionDefaultsPred_3), &(env).mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0__Option_6, &(env).mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_env_0__conv1_OptionData_7, mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0_2, &env);
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
#define MR_PROC_LABEL mercury__getopt____Compare____special_data_0_0

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
                          MR_Word TypeInfo_46_46 = (MR_Word) &mercury__getopt_scalar_common_1[1];
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
mercury__getopt____Unify____special_data_0_0(
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
                  TypeInfo_15_15 = (MR_Word) &mercury__getopt_scalar_common_1[1];
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
    MR_Word TypeCtorInfo_7_7 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
    MR_Word Cast_HeadVar1_4 = HeadVar__2_2;
    MR_Word Cast_HeadVar2_5 = HeadVar__3_3;

    mercury__tree234____Compare____tree234_2_0(TypeInfo_for_OptionType_6, TypeCtorInfo_7_7, HeadVar__1_1, Cast_HeadVar1_4, Cast_HeadVar2_5);
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
    MR_Word TypeCtorInfo_6_6 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
    MR_Word Cast_HeadVar1_3 = HeadVar__1_1;
    MR_Word Cast_HeadVar2_4 = HeadVar__2_2;

    succeeded = mercury__tree234____Unify____tree234_2_0(TypeInfo_for_OptionType_5, TypeCtorInfo_6_6, Cast_HeadVar1_3, Cast_HeadVar2_4);
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
mercury__getopt____Unify____option_ops_track_1_0(
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
mercury__getopt____Compare____option_ops_internal_1_0(
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
          mercury__getopt____Compare____option_ops_special_1_0(TypeInfo_for_OptionType_14, HeadVar__1_1, ArgX3_8, ArgY3_9);
      }
    }
  }
}

void MR_CALL 
mercury__getopt____Compare____option_ops_special_1_0(
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
mercury__getopt____Unify____option_ops_internal_1_0(
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
          succeeded = mercury__getopt____Unify____option_ops_special_1_0(TypeInfo_for_OptionType_11, ArgX3_7, ArgY3_8);
      }
    }
    return succeeded;
  }
}

MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_special_1_0(
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
mercury__getopt____Compare____option_ops_1_0(
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
mercury__getopt____Unify____option_ops_1_0(
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
mercury__getopt____Compare____option_data_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_136 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_137 = (MR_Integer) HeadVar__3_3;

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
            MR_Word Var_145 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

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
                  MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer Var_150 = (MR_Integer) Var_145;
                  MR_Integer Var_151 = (MR_Integer) ArgY1_5;

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
            MR_Integer Var_146 = ((MR_Integer) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));

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
                  MR_Integer ArgY1_24 = ((MR_Integer) (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0)));

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
                MR_String Var_149 = ((MR_String) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));

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
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        {
                          MR_String ArgY1_43 = ((MR_String) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));
                          MR_Integer V_7_161;

{
#define MR_PROC_LABEL mercury__getopt____Compare____option_data_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  Var_149 ;
	S2 =  ArgY1_43 ;
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
                MR_Word Var_147 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));

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
                    switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)))) {
                      default: /*NOTREACHED*/ MR_assert(0);
                      case (MR_Integer) 0:
                        *HeadVar__1_1 = (MR_Integer) 2;
                        break;
                      case (MR_Integer) 1:
                        {
                          MR_Word TypeInfo_140_140 = (MR_Word) &mercury__getopt_scalar_common_1[2];
                          MR_Word ArgY1_62 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));

                          mercury__builtin__compare_3_p_0(TypeInfo_140_140, HeadVar__1_1, ((MR_Box) (Var_147)), ((MR_Box) (ArgY1_62)));
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
                MR_Word Var_148 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));

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
                          MR_Word TypeInfo_139_139 = (MR_Word) &mercury__getopt_scalar_common_1[1];
                          MR_Word ArgY1_81 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));

                          mercury__builtin__compare_3_p_0(TypeInfo_139_139, HeadVar__1_1, ((MR_Box) (Var_148)), ((MR_Box) (ArgY1_81)));
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
                MR_Word Var_144 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));

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
                          MR_Word TypeInfo_138_138 = (MR_Word) &mercury__getopt_scalar_common_1[0];
                          MR_Word ArgY1_100 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 1)));

                          mercury__builtin__compare_3_p_0(TypeInfo_138_138, HeadVar__1_1, ((MR_Box) (Var_144)), ((MR_Box) (ArgY1_100)));
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
    MR_Integer CastX_25 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_26 = (MR_Integer) HeadVar__2_2;

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
                MR_Word TypeInfo_28_28;
                MR_Word ArgX1_9 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                MR_Word ArgY1_10;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 1)));
                if (succeeded)
                {
                  ArgY1_10 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                  TypeInfo_28_28 = (MR_Word) &mercury__getopt_scalar_common_1[2];
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_28_28, ((MR_Box) (ArgX1_9)), ((MR_Box) (ArgY1_10)));
                }
              }
              break;
            case (MR_Integer) 2:
              {
                MR_Word TypeInfo_29_29;
                MR_Word ArgX1_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                MR_Word ArgY1_12;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 2)));
                if (succeeded)
                {
                  ArgY1_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                  TypeInfo_29_29 = (MR_Word) &mercury__getopt_scalar_common_1[1];
                  succeeded = mercury__builtin__unify_2_p_0(TypeInfo_29_29, ((MR_Box) (ArgX1_11)), ((MR_Box) (ArgY1_12)));
                }
              }
              break;
            case (MR_Integer) 3:
              {
                MR_Word TypeInfo_27_27;
                MR_Word ArgX1_13 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));
                MR_Word ArgY1_14;

                succeeded = ((((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)))) && (((((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)))) == (MR_Integer) 3)));
                if (succeeded)
                {
                  ArgY1_14 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 1)));
                  TypeInfo_27_27 = (MR_Word) &mercury__getopt_scalar_common_1[0];
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

        mercury__getopt____Compare____option_error_1_0(TypeInfo_for_OptionType_14, HeadVar__1_1, Var_20, ArgY1_11);
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
        MR_Word TypeCtorInfo_17_17 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
        MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));

        mercury__tree234____Compare____tree234_2_0(TypeInfo_for_OptionType_14, TypeCtorInfo_17_17, HeadVar__1_1, Var_21, ArgY1_5);
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
#define MR_PROC_LABEL mercury__getopt____Compare____option_error_1_0

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
            mercury__getopt____Compare____option_error_reason_0_0(HeadVar__1_1, Var_28, ArgY3_19);
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
#define MR_PROC_LABEL mercury__getopt____Compare____option_error_1_0

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
mercury__getopt____Compare____option_error_reason_0_0(
  MR_Word * HeadVar__1_1,
  MR_Word HeadVar__2_2,
  MR_Word HeadVar__3_3)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_52 = (MR_Integer) HeadVar__2_2;
    MR_Integer CastY_53 = (MR_Integer) HeadVar__3_3;

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
            MR_String Var_57 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__2_2, (MR_Integer) 0)));

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
                  MR_String ArgY1_13 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer V_7_63;

{
#define MR_PROC_LABEL mercury__getopt____Compare____option_error_reason_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  Var_57 ;
	S2 =  ArgY1_13 ;
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
            MR_String Var_59 = ((MR_String) (MR_hl_field(MR_mktag(2), HeadVar__2_2, (MR_Integer) 0)));

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
                  MR_String ArgY1_38 = ((MR_String) (MR_hl_field(MR_mktag(2), HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer V_7_73;

{
#define MR_PROC_LABEL mercury__getopt____Compare____option_error_reason_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  Var_59 ;
	S2 =  ArgY1_38 ;
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
            MR_String Var_58 = ((MR_String) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)));

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
                  MR_String ArgY1_51 = ((MR_String) (MR_hl_field(MR_mktag(3), HeadVar__3_3, (MR_Integer) 0)));
                  MR_Integer V_7_68;

{
#define MR_PROC_LABEL mercury__getopt____Compare____option_error_reason_0_0

	MR_Integer Res;
	MR_String S1;
	MR_String S2;

	S1 =  Var_58 ;
	S2 =  ArgY1_51 ;
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
        succeeded = mercury__getopt____Unify____option_error_1_0(TypeInfo_for_OptionType_9, ArgX1_5, ArgY1_6);
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
        TypeCtorInfo_10_10 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
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
            succeeded = mercury__getopt____Unify____option_error_reason_0_0(ArgX3_9, ArgY3_10);
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
mercury__getopt____Unify____option_error_reason_0_0(
  MR_Word HeadVar__1_1,
  MR_Word HeadVar__2_2)
{
  {
    MR_bool succeeded;
    MR_Integer CastX_19 = (MR_Integer) HeadVar__1_1;
    MR_Integer CastY_20 = (MR_Integer) HeadVar__2_2;

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
          {
            MR_String ArgX1_17 = ((MR_String) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0)));
            MR_String ArgY1_18;

            succeeded = ((MR_tag((MR_Word) HeadVar__2_2)) == (MR_mktag((MR_Integer) 3)));
            if (succeeded)
            {
              ArgY1_18 = ((MR_String) (MR_hl_field(MR_mktag(3), HeadVar__2_2, (MR_Integer) 0)));
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
#define MR_PROC_LABEL mercury__getopt____Compare____maybe_option_table_1_0

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
        MR_Word TypeCtorInfo_16_16 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
        MR_Word ArgY1_5 = ((MR_Word) (MR_hl_field(MR_mktag(0), HeadVar__3_3, (MR_Integer) 0)));

        mercury__tree234____Compare____tree234_2_0(TypeInfo_for_OptionType_14, TypeCtorInfo_16_16, HeadVar__1_1, Var_20, ArgY1_5);
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
        TypeCtorInfo_10_10 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
        succeeded = mercury__tree234____Unify____tree234_2_0(TypeInfo_for_OptionType_9, TypeCtorInfo_10_10, ArgX1_3, ArgY1_4);
      }
    }
    return succeeded;
  }
}

MR_Word MR_CALL 
mercury__getopt__lookup_accumulating_option_2_f_0(
  MR_Word TypeInfo_for_Option_7,
  MR_Word OT_4,
  MR_Box Opt_5)
{
  {
    MR_bool succeeded;
    MR_Word Ss_6;
    MR_Word Val0_11;
    MR_Word TypeCtorInfo_11_14 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
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
mercury__getopt__lookup_accumulating_option_3_p_0(
  MR_Word TypeInfo_for_Option_10,
  MR_Word OptionTable_4,
  MR_Box Opt_5,
  MR_Word * Val_6)
{
  {
    MR_bool succeeded;
    MR_Word Val0_7;
    MR_Word TypeCtorInfo_11_11 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
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
mercury__getopt__lookup_maybe_string_option_2_f_0(
  MR_Word TypeInfo_for_Option_7,
  MR_Word OT_4,
  MR_Box Opt_5)
{
  {
    MR_bool succeeded;
    MR_Word MS_6;
    MR_Word Val0_11;
    MR_Word TypeCtorInfo_11_14 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
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
mercury__getopt__lookup_maybe_string_option_3_p_0(
  MR_Word TypeInfo_for_Option_10,
  MR_Word OptionTable_4,
  MR_Box Opt_5,
  MR_Word * Val_6)
{
  {
    MR_bool succeeded;
    MR_Word Val0_7;
    MR_Word TypeCtorInfo_11_11 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
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
mercury__getopt__lookup_maybe_int_option_2_f_0(
  MR_Word TypeInfo_for_Option_7,
  MR_Word OT_4,
  MR_Box Opt_5)
{
  {
    MR_bool succeeded;
    MR_Word MN_6;
    MR_Word Val0_11;
    MR_Word TypeCtorInfo_11_14 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
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
mercury__getopt__lookup_maybe_int_option_3_p_0(
  MR_Word TypeInfo_for_Option_10,
  MR_Word OptionTable_4,
  MR_Box Opt_5,
  MR_Word * Val_6)
{
  {
    MR_bool succeeded;
    MR_Word Val0_7;
    MR_Word TypeCtorInfo_11_11 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
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
mercury__getopt__lookup_string_option_2_f_0(
  MR_Word TypeInfo_for_Option_7,
  MR_Word OT_4,
  MR_Box Opt_5)
{
  {
    MR_bool succeeded;
    MR_String S_6;
    MR_String Val0_11;
    MR_Word TypeCtorInfo_11_14 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
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
mercury__getopt__lookup_string_option_3_p_0(
  MR_Word TypeInfo_for_Option_10,
  MR_Word OptionTable_4,
  MR_Box Opt_5,
  MR_String * Val_6)
{
  {
    MR_bool succeeded;
    MR_String Val0_7;
    MR_Word TypeCtorInfo_11_11 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
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
mercury__getopt__lookup_int_option_2_f_0(
  MR_Word TypeInfo_for_Option_7,
  MR_Word OT_4,
  MR_Box Opt_5)
{
  {
    MR_bool succeeded;
    MR_Integer N_6;
    MR_Integer Val0_11;
    MR_Word TypeCtorInfo_11_14 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
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
mercury__getopt__lookup_int_option_3_p_0(
  MR_Word TypeInfo_for_Option_10,
  MR_Word OptionTable_4,
  MR_Box Opt_5,
  MR_Integer * Val_6)
{
  {
    MR_bool succeeded;
    MR_Integer Val0_7;
    MR_Word TypeCtorInfo_11_11 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
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
mercury__getopt__lookup_bool_option_2_f_0(
  MR_Word TypeInfo_for_Option_7,
  MR_Word OT_4,
  MR_Box Opt_5)
{
  {
    MR_bool succeeded;
    MR_Word B_6;
    MR_Word Val0_11;
    MR_Word TypeCtorInfo_11_14 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
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
mercury__getopt__lookup_bool_option_3_p_0(
  MR_Word TypeInfo_for_Option_10,
  MR_Word OptionTable_4,
  MR_Box Opt_5,
  MR_Word * Val_6)
{
  {
    MR_bool succeeded;
    MR_Word Val0_7;
    MR_Word TypeCtorInfo_11_11 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
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
    if (((MR_tag((MR_Word) Result0_15)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word Error_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), Result0_15, (MR_Integer) 0)));
      MR_String Msg_18;

      Msg_18 = mercury__getopt__option_error_to_string_1_f_0(TypeInfo_for_OptionType_19, Error_17);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *Result_13 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Msg_18));
      }
    }
    else
    {
      MR_Word OptionTable_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), Result0_15, (MR_Integer) 0)));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
        *Result_13 = base;
        MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (OptionTable_16));
      }
    }
  }
}

void MR_CALL 
mercury__getopt__process_options_track_se_7_p_0(
  MR_Word TypeInfo_for_OptionType_23,
  MR_Word OptionOps_8,
  MR_Word Args0_9,
  MR_Word * OptionArgs_10,
  MR_Word * NonOptionArgs_11,
  MR_Word OptionTable0_12,
  MR_Word * Result_13,
  MR_Word * OptionsSet_14)
{
  {
    MR_Word TypeCtorInfo_24_24;
    MR_Word Short_15 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptionOps_8, (MR_Integer) 0)));
    MR_Word Long_16 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptionOps_8, (MR_Integer) 1)));
    MR_Word Special_17 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptionOps_8, (MR_Integer) 2)));
    MR_Word Internal_18;
    MR_Word RevOptionArgs_19;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word Var_22;
    MR_Word V_2_27;

    {
      Var_20 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(2), Var_20, 0) = ((MR_Box) (Special_17));
    }
    {
      Internal_18 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Internal_18, 0) = ((MR_Box) (Short_15));
      MR_hl_field(MR_mktag(0), Internal_18, 1) = ((MR_Box) (Long_16));
      MR_hl_field(MR_mktag(0), Internal_18, 2) = ((MR_Box) (Var_20));
    }
    Var_21 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    V_2_27 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    Var_22 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    mercury__getopt__process_arguments_9_p_0(TypeInfo_for_OptionType_23, Args0_9, NonOptionArgs_11, Internal_18, Var_21, &RevOptionArgs_19, OptionTable0_12, Result_13, Var_22, OptionsSet_14);
    TypeCtorInfo_24_24 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    mercury__list__reverse_2_p_0(TypeCtorInfo_24_24, RevOptionArgs_19, OptionArgs_10);
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
    if (((MR_tag((MR_Word) Result0_11)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word Error_13 = ((MR_Word) (MR_hl_field(MR_mktag(1), Result0_11, (MR_Integer) 0)));
      MR_String Msg_14;

      Msg_14 = mercury__getopt__option_error_to_string_1_f_0(TypeInfo_for_OptionType_15, Error_13);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *Result_10 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Msg_14));
      }
    }
    else
    {
      MR_Word OptionTable_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), Result0_11, (MR_Integer) 0)));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
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
    if (((MR_tag((MR_Word) Result0_9)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word Error_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), Result0_9, (MR_Integer) 0)));
      MR_String Msg_12;

      Msg_12 = mercury__getopt__option_error_to_string_1_f_0(TypeInfo_for_OptionType_13, Error_11);
      {
        MR_Word base;
        base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
        *Result_8 = base;
        MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Msg_12));
      }
    }
    else
    {
      MR_Word OptionTable_10 = ((MR_Word) (MR_hl_field(MR_mktag(0), Result0_9, (MR_Integer) 0)));

      {
        MR_Word base;
        base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
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

    if (((MR_tag((MR_Word) Error_3)) == (MR_mktag((MR_Integer) 1))))
    {
      MR_Word Reason_7 = ((MR_Word) (MR_hl_field(MR_mktag(1), Error_3, (MR_Integer) 2)));
      MR_String OptionName_46 = ((MR_String) (MR_hl_field(MR_mktag(1), Error_3, (MR_Integer) 1)));
      MR_Box Var_6 = (MR_hl_field(MR_mktag(1), Error_3, (MR_Integer) 0));

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
          String_4 = ((MR_String) (MR_hl_field(MR_mktag(2), Reason_7, (MR_Integer) 0)));
          break;
        case (MR_Integer) 3:
          {
            MR_String Arg_9 = ((MR_String) (MR_hl_field(MR_mktag(3), Reason_7, (MR_Integer) 0)));
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
      MR_String OptionName_5 = ((MR_String) (MR_hl_field(MR_mktag(0), Error_3, (MR_Integer) 0)));
      MR_String Var_49;

      Var_49 = mercury__string__f_43_43_2_f_0(OptionName_5, (MR_String) "\'");
      String_4 = mercury__string__f_43_43_2_f_0((MR_String) "unrecognized option \140", Var_49);
    }
    return String_4;
  }
}

void MR_CALL 
mercury__getopt__process_options_se_5_p_0(
  MR_Word TypeInfo_for_OptionType_26,
  MR_Word OptionOps_6,
  MR_Word Args0_7,
  MR_Word * OptionArgs_8,
  MR_Word * NonOptionArgs_9,
  MR_Word * Result_10)
{
  {
    MR_Word TypeCtorInfo_27_27;
    MR_Word Short_11;
    MR_Word Long_12;
    MR_Word MaybeSpecial_14;
    MR_Word OptionTable0_15;
    MR_Word Internal_17;
    MR_Word RevOptionArgs_18;
    MR_Word Var_20;
    MR_Word Var_21;
    MR_Word V_2_30;
    MR_Word _OptionsSet_19;

    switch (MR_tag((MR_Word) OptionOps_6)) {
      default: /*NOTREACHED*/ MR_assert(0);
      case (MR_Integer) 0:
        {
          MR_Word Defaults_13;

          Short_11 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptionOps_6, (MR_Integer) 0)));
          Long_12 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptionOps_6, (MR_Integer) 1)));
          Defaults_13 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptionOps_6, (MR_Integer) 2)));
          MaybeSpecial_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          mercury__getopt__init_option_table_2_p_0(TypeInfo_for_OptionType_26, Defaults_13, &OptionTable0_15);
        }
        break;
      case (MR_Integer) 1:
        {
          MR_Word Special_16;
          MR_Word Defaults_22;

          Short_11 = ((MR_Word) (MR_hl_field(MR_mktag(1), OptionOps_6, (MR_Integer) 0)));
          Long_12 = ((MR_Word) (MR_hl_field(MR_mktag(1), OptionOps_6, (MR_Integer) 1)));
          Defaults_22 = ((MR_Word) (MR_hl_field(MR_mktag(1), OptionOps_6, (MR_Integer) 2)));
          Special_16 = ((MR_Word) (MR_hl_field(MR_mktag(1), OptionOps_6, (MR_Integer) 3)));
          {
            MaybeSpecial_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeSpecial_14, 0) = ((MR_Box) (Special_16));
          }
          mercury__getopt__init_option_table_2_p_0(TypeInfo_for_OptionType_26, Defaults_22, &OptionTable0_15);
        }
        break;
      case (MR_Integer) 2:
        {
          MR_Word Defaults_23;

          Short_11 = ((MR_Word) (MR_hl_field(MR_mktag(2), OptionOps_6, (MR_Integer) 0)));
          Long_12 = ((MR_Word) (MR_hl_field(MR_mktag(2), OptionOps_6, (MR_Integer) 1)));
          Defaults_23 = ((MR_Word) (MR_hl_field(MR_mktag(2), OptionOps_6, (MR_Integer) 2)));
          MaybeSpecial_14 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          mercury__getopt__init_option_table_multi_2_p_0(TypeInfo_for_OptionType_26, Defaults_23, &OptionTable0_15);
        }
        break;
      case (MR_Integer) 3:
        {
          MR_Word Defaults_24;
          MR_Word Special_25;

          Short_11 = ((MR_Word) (MR_hl_field(MR_mktag(3), OptionOps_6, (MR_Integer) 0)));
          Long_12 = ((MR_Word) (MR_hl_field(MR_mktag(3), OptionOps_6, (MR_Integer) 1)));
          Defaults_24 = ((MR_Word) (MR_hl_field(MR_mktag(3), OptionOps_6, (MR_Integer) 2)));
          Special_25 = ((MR_Word) (MR_hl_field(MR_mktag(3), OptionOps_6, (MR_Integer) 3)));
          {
            MaybeSpecial_14 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeSpecial_14, 0) = ((MR_Box) (Special_25));
          }
          mercury__getopt__init_option_table_multi_2_p_0(TypeInfo_for_OptionType_26, Defaults_24, &OptionTable0_15);
        }
        break;
    }
    {
      Internal_17 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), Internal_17, 0) = ((MR_Box) (Short_11));
      MR_hl_field(MR_mktag(0), Internal_17, 1) = ((MR_Box) (Long_12));
      MR_hl_field(MR_mktag(0), Internal_17, 2) = ((MR_Box) (MaybeSpecial_14));
    }
    Var_20 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    V_2_30 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
    Var_21 = (MR_Word) ((MR_Box) (MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
    mercury__getopt__process_arguments_9_p_0(TypeInfo_for_OptionType_26, Args0_7, NonOptionArgs_9, Internal_17, Var_20, &RevOptionArgs_18, OptionTable0_15, Result_10, Var_21, &_OptionsSet_19);
    TypeCtorInfo_27_27 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
    mercury__list__reverse_2_p_0(TypeCtorInfo_27_27, RevOptionArgs_18, OptionArgs_8);
  }
}

void MR_CALL 
mercury__getopt__process_arguments_9_p_0(
  MR_Word tscc_proc_1_input_1_TypeInfo_for_OptionType_138,
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
    MR_Word tscc_proc_2_input_1_TypeInfo_for_OptionType_48;
    MR_String tscc_proc_2_input_2_Option_14;
    MR_Box tscc_proc_2_input_3_Flag_15;
    MR_Word tscc_proc_2_input_4_OptionData_16;
    MR_Word tscc_proc_2_input_5_MaybeOptionArg0_17;
    MR_Word tscc_proc_2_input_6_Args0_18;
    MR_Word tscc_proc_2_input_7_OptionOps_20;
    MR_Word tscc_proc_2_input_8_OptionArgs0_21;
    MR_Word tscc_proc_2_input_9_OptionTable0_23;
    MR_Word tscc_proc_2_input_10_STATE_VARIABLE_OptionsSet_0_37;
    MR_Word tscc_output_1_HeadVar__2_2;
    MR_Word tscc_output_2_OptionArgs_5;
    MR_Word tscc_output_3_HeadVar__7_7;
    MR_Word tscc_output_4_STATE_VARIABLE_OptionsSet_9;

    // The code for TSCC PROC 1: pred getopt.process_arguments/9-0.
    // Setup for mutual tailcalls optimized into a loop.
    // The mutually recursive procedures are:

    // proc 1 in TSCC: pred getopt.process_arguments/9-0
    // proc 2 in TSCC: pred getopt.handle_long_option/13-0

    goto top_of_proc_1;
  top_of_proc_1:;
    {
      MR_Word TypeInfo_for_OptionType_138 = tscc_proc_1_input_1_TypeInfo_for_OptionType_138;
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
        MR_String Option_16 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
        MR_Word Args0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));

        succeeded = (strcmp(Option_16, (MR_String) "--") == 0);
        if (succeeded)
        {
          OptionArgs_5 = HeadVar__4_4;
          HeadVar__2_2 = Args0_17;
          {
            HeadVar__7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), HeadVar__7_7, 0) = ((MR_Box) (HeadVar__6_6));
          }
          STATE_VARIABLE_OptionsSet_9 = STATE_VARIABLE_OptionsSet_0_8;
        }
        else
        {
          MR_String LongOption_25;

          succeeded = mercury__string__append_3_p_1((MR_String) "--no-", &LongOption_25, Option_16);
          if (succeeded)
          {
            MR_Word LongOptionPred_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptionOps_3, (MR_Integer) 1)));
            MR_Word Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptionOps_3, (MR_Integer) 0)));
            MR_Word Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptionOps_3, (MR_Integer) 2)));
            MR_Box Flag_27;
            MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), LongOptionPred_26, (MR_Integer) 1)));

            succeeded = func_0(((MR_Box) LongOptionPred_26), ((MR_Box) (LongOption_25)), &Flag_27);
            if (succeeded)
            {
              MR_String OptName_28;
              MR_Word Result1_29;
              MR_Word STATE_VARIABLE_OptionsSet_52_52;

              OptName_28 = mercury__string__f_43_43_2_f_0((MR_String) "--", LongOption_25);
              mercury__getopt__process_negated_option_7_p_0(TypeInfo_for_OptionType_138, OptName_28, Flag_27, OptionOps_3, HeadVar__6_6, &Result1_29, STATE_VARIABLE_OptionsSet_0_8, &STATE_VARIABLE_OptionsSet_52_52);
              if (((MR_tag((MR_Word) Result1_29)) == (MR_mktag((MR_Integer) 1))))
              {
                HeadVar__7_7 = Result1_29;
                OptionArgs_5 = HeadVar__4_4;
                HeadVar__2_2 = Args0_17;
                STATE_VARIABLE_OptionsSet_9 = STATE_VARIABLE_OptionsSet_52_52;
              }
              else
              {
                MR_Word OptionTable1_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Result1_29, (MR_Integer) 0)));
                MR_Word Var_53;
                MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_OptionType_138;
                MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__1_1;
                MR_Word next_value_of_tscc_proc_1_input_3_OptionOps_3;
                MR_Word next_value_of_tscc_proc_1_input_4_HeadVar__4_4;
                MR_Word next_value_of_tscc_proc_1_input_5_HeadVar__6_6;
                MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_OptionsSet_0_8;

                {
                  Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Option_16));
                  MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (HeadVar__4_4));
                }
                // direct tailcall eliminated
                next_value_of_tscc_proc_1_input_1_TypeInfo_for_OptionType_138 = TypeInfo_for_OptionType_138;
                next_value_of_tscc_proc_1_input_2_HeadVar__1_1 = Args0_17;
                next_value_of_tscc_proc_1_input_3_OptionOps_3 = OptionOps_3;
                next_value_of_tscc_proc_1_input_4_HeadVar__4_4 = Var_53;
                next_value_of_tscc_proc_1_input_5_HeadVar__6_6 = OptionTable1_30;
                next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_OptionsSet_0_8 = STATE_VARIABLE_OptionsSet_52_52;
                tscc_proc_1_input_1_TypeInfo_for_OptionType_138 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_OptionType_138;
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
              MR_Word Error_32;

              {
                Error_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Error_32, 0) = ((MR_Box) (Option_16));
              }
              {
                HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), HeadVar__7_7, 0) = ((MR_Box) (Error_32));
              }
              OptionArgs_5 = HeadVar__4_4;
              HeadVar__2_2 = Args0_17;
              STATE_VARIABLE_OptionsSet_9 = STATE_VARIABLE_OptionsSet_0_8;
            }
          }
          else
          {
            MR_String LongOptionStr_33;

            succeeded = mercury__string__append_3_p_1((MR_String) "--", &LongOptionStr_33, Option_16);
            if (succeeded)
            {
              MR_Word MaybeArg_37;
              MR_String OptionName_38;
              MR_String LongOption_85;
              MR_Word LongOptionPred_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptionOps_3, (MR_Integer) 1)));
              MR_Word Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptionOps_3, (MR_Integer) 0)));
              MR_Word Var_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptionOps_3, (MR_Integer) 2)));
              MR_Integer OptionLen_34;
              MR_Box Flag_83;
              MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *);

              succeeded = mercury__string__sub_string_search_3_p_0(LongOptionStr_33, (MR_String) "=", &OptionLen_34);
              if (succeeded)
              {
                MR_String EqualOptionArg_35;
                MR_String OptionArg_36;

                mercury__string__split_4_p_0(LongOptionStr_33, OptionLen_34, &LongOption_85, &EqualOptionArg_35);
                succeeded = mercury__string__first_char_3_p_2(EqualOptionArg_35, (MR_Char) 61, &OptionArg_36);
                if (succeeded)
                  {
                    MaybeArg_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), MaybeArg_37, 0) = ((MR_Box) (OptionArg_36));
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
                LongOption_85 = LongOptionStr_33;
                MaybeArg_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
              OptionName_38 = mercury__string__f_43_43_2_f_0((MR_String) "--", LongOption_85);
              func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), LongOptionPred_86, (MR_Integer) 1)));
              succeeded = func_1(((MR_Box) LongOptionPred_86), ((MR_Box) (LongOption_85)), &Flag_83);
              if (succeeded)
              {
                MR_Word OptionData_39;
                MR_Word TypeCtorInfo_139_139 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
                MR_Box conv2_OptionData_39;

                succeeded = mercury__map__search_3_p_0(TypeInfo_for_OptionType_138, TypeCtorInfo_139_139, HeadVar__6_6, Flag_83, &conv2_OptionData_39);
                if (succeeded)
                {
                  OptionData_39 = ((MR_Word) conv2_OptionData_39);
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  MR_Word Var_60;
                  MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_OptionType_48;
                  MR_String next_value_of_tscc_proc_2_input_2_Option_14;
                  MR_Box next_value_of_tscc_proc_2_input_3_Flag_15;
                  MR_Word next_value_of_tscc_proc_2_input_4_OptionData_16;
                  MR_Word next_value_of_tscc_proc_2_input_5_MaybeOptionArg0_17;
                  MR_Word next_value_of_tscc_proc_2_input_6_Args0_18;
                  MR_Word next_value_of_tscc_proc_2_input_7_OptionOps_20;
                  MR_Word next_value_of_tscc_proc_2_input_8_OptionArgs0_21;
                  MR_Word next_value_of_tscc_proc_2_input_9_OptionTable0_23;
                  MR_Word next_value_of_tscc_proc_2_input_10_STATE_VARIABLE_OptionsSet_0_37;

                  {
                    Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Option_16));
                    MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (HeadVar__4_4));
                  }
                  // direct tailcall eliminated
                  next_value_of_tscc_proc_2_input_1_TypeInfo_for_OptionType_48 = TypeInfo_for_OptionType_138;
                  next_value_of_tscc_proc_2_input_2_Option_14 = OptionName_38;
                  next_value_of_tscc_proc_2_input_3_Flag_15 = Flag_83;
                  next_value_of_tscc_proc_2_input_4_OptionData_16 = OptionData_39;
                  next_value_of_tscc_proc_2_input_5_MaybeOptionArg0_17 = MaybeArg_37;
                  next_value_of_tscc_proc_2_input_6_Args0_18 = Args0_17;
                  next_value_of_tscc_proc_2_input_7_OptionOps_20 = OptionOps_3;
                  next_value_of_tscc_proc_2_input_8_OptionArgs0_21 = Var_60;
                  next_value_of_tscc_proc_2_input_9_OptionTable0_23 = HeadVar__6_6;
                  next_value_of_tscc_proc_2_input_10_STATE_VARIABLE_OptionsSet_0_37 = STATE_VARIABLE_OptionsSet_0_8;
                  tscc_proc_2_input_1_TypeInfo_for_OptionType_48 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_OptionType_48;
                  tscc_proc_2_input_2_Option_14 = next_value_of_tscc_proc_2_input_2_Option_14;
                  tscc_proc_2_input_3_Flag_15 = next_value_of_tscc_proc_2_input_3_Flag_15;
                  tscc_proc_2_input_4_OptionData_16 = next_value_of_tscc_proc_2_input_4_OptionData_16;
                  tscc_proc_2_input_5_MaybeOptionArg0_17 = next_value_of_tscc_proc_2_input_5_MaybeOptionArg0_17;
                  tscc_proc_2_input_6_Args0_18 = next_value_of_tscc_proc_2_input_6_Args0_18;
                  tscc_proc_2_input_7_OptionOps_20 = next_value_of_tscc_proc_2_input_7_OptionOps_20;
                  tscc_proc_2_input_8_OptionArgs0_21 = next_value_of_tscc_proc_2_input_8_OptionArgs0_21;
                  tscc_proc_2_input_9_OptionTable0_23 = next_value_of_tscc_proc_2_input_9_OptionTable0_23;
                  tscc_proc_2_input_10_STATE_VARIABLE_OptionsSet_0_37 = next_value_of_tscc_proc_2_input_10_STATE_VARIABLE_OptionsSet_0_37;
                  goto top_of_proc_2;
                }
                else
                {
                  MR_Word Var_62 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  MR_Word Error_80;

                  {
                    Error_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Error_80, 0) = Flag_83;
                    MR_hl_field(MR_mktag(1), Error_80, 1) = ((MR_Box) (Option_16));
                    MR_hl_field(MR_mktag(1), Error_80, 2) = ((MR_Box) (Var_62));
                  }
                  {
                    HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), HeadVar__7_7, 0) = ((MR_Box) (Error_80));
                  }
                  OptionArgs_5 = HeadVar__4_4;
                  HeadVar__2_2 = Args0_17;
                  STATE_VARIABLE_OptionsSet_9 = STATE_VARIABLE_OptionsSet_0_8;
                }
              }
              else
              {
                MR_Word Error_82;

                {
                  Error_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Error_82, 0) = ((MR_Box) (OptionName_38));
                }
                {
                  HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), HeadVar__7_7, 0) = ((MR_Box) (Error_82));
                }
                OptionArgs_5 = HeadVar__4_4;
                HeadVar__2_2 = Args0_17;
                STATE_VARIABLE_OptionsSet_9 = STATE_VARIABLE_OptionsSet_0_8;
              }
            }
            else
            {
              MR_String ShortOptions_40;

              succeeded = mercury__string__first_char_3_p_2(Option_16, (MR_Char) 45, &ShortOptions_40);
              if (succeeded)
              {
                succeeded = (strcmp(ShortOptions_40, (MR_String) "") == 0);
                succeeded = !(succeeded);
              }
              if (succeeded)
              {
                MR_Word ShortOptionsList_41;
                MR_Char SingleShortOpt_42;
                MR_Word Var_64;
                MR_Char Var_65;
                MR_Word Var_66;

                mercury__string__to_char_list_2_p_0(ShortOptions_40, &ShortOptionsList_41);
                succeeded = ((MR_tag((MR_Word) ShortOptionsList_41)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                {
                  SingleShortOpt_42 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), ShortOptionsList_41, (MR_Integer) 0)));
                  Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortOptionsList_41, (MR_Integer) 1)));
                  succeeded = ((MR_tag((MR_Word) Var_64)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_65 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Var_64, (MR_Integer) 0)));
                    Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_64, (MR_Integer) 1)));
                    succeeded = (Var_65 == (MR_Char) 45);
                    if (succeeded)
                      succeeded = (Var_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
                if (succeeded)
                {
                  MR_Word ShortOptionPred_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptionOps_3, (MR_Integer) 0)));
                  MR_Word Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptionOps_3, (MR_Integer) 1)));
                  MR_Word Var_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptionOps_3, (MR_Integer) 2)));
                  MR_Box Flag_95;
                  MR_bool MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ShortOptionPred_43, (MR_Integer) 1)));

                  succeeded = func_3(((MR_Box) ShortOptionPred_43), ((MR_Box) (MR_Word) (SingleShortOpt_42)), &Flag_95);
                  if (succeeded)
                  {
                    MR_Word Var_67;
                    MR_Word Var_69;
                    MR_Word Var_70 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    MR_Word STATE_VARIABLE_OptionsSet_71_71;
                    MR_String OptName_91;
                    MR_Word Result1_92;

                    {
                      Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (MR_Word) (SingleShortOpt_42));
                      MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_70));
                    }
                    {
                      Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (MR_Word) ((MR_Char) 45));
                      MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (Var_69));
                    }
                    mercury__string__from_char_list_2_p_0(Var_67, &OptName_91);
                    mercury__getopt__process_negated_option_7_p_0(TypeInfo_for_OptionType_138, OptName_91, Flag_95, OptionOps_3, HeadVar__6_6, &Result1_92, STATE_VARIABLE_OptionsSet_0_8, &STATE_VARIABLE_OptionsSet_71_71);
                    if (((MR_tag((MR_Word) Result1_92)) == (MR_mktag((MR_Integer) 1))))
                    {
                      HeadVar__7_7 = Result1_92;
                      OptionArgs_5 = HeadVar__4_4;
                      HeadVar__2_2 = Args0_17;
                      STATE_VARIABLE_OptionsSet_9 = STATE_VARIABLE_OptionsSet_71_71;
                    }
                    else
                    {
                      MR_Word Var_72;
                      MR_Word OptionTable1_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), Result1_92, (MR_Integer) 0)));
                      MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_OptionType_138;
                      MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__1_1;
                      MR_Word next_value_of_tscc_proc_1_input_3_OptionOps_3;
                      MR_Word next_value_of_tscc_proc_1_input_4_HeadVar__4_4;
                      MR_Word next_value_of_tscc_proc_1_input_5_HeadVar__6_6;
                      MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_OptionsSet_0_8;

                      {
                        Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Option_16));
                        MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (HeadVar__4_4));
                      }
                      // direct tailcall eliminated
                      next_value_of_tscc_proc_1_input_1_TypeInfo_for_OptionType_138 = TypeInfo_for_OptionType_138;
                      next_value_of_tscc_proc_1_input_2_HeadVar__1_1 = Args0_17;
                      next_value_of_tscc_proc_1_input_3_OptionOps_3 = OptionOps_3;
                      next_value_of_tscc_proc_1_input_4_HeadVar__4_4 = Var_72;
                      next_value_of_tscc_proc_1_input_5_HeadVar__6_6 = OptionTable1_89;
                      next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_OptionsSet_0_8 = STATE_VARIABLE_OptionsSet_71_71;
                      tscc_proc_1_input_1_TypeInfo_for_OptionType_138 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_OptionType_138;
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
                    MR_String Var_74;
                    MR_Word Error_94;

                    Var_74 = mercury__string__f_43_43_2_f_0((MR_String) "-", ShortOptions_40);
                    {
                      Error_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Error_94, 0) = ((MR_Box) (Var_74));
                    }
                    {
                      HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), HeadVar__7_7, 0) = ((MR_Box) (Error_94));
                    }
                    OptionArgs_5 = HeadVar__4_4;
                    HeadVar__2_2 = Args0_17;
                    STATE_VARIABLE_OptionsSet_9 = STATE_VARIABLE_OptionsSet_0_8;
                  }
                }
                else
                {
                  MR_Word Args1_45;
                  MR_Word OptionArgs1_46;
                  MR_Word Var_76;
                  MR_Word STATE_VARIABLE_OptionsSet_77_77;
                  MR_Word Result1_107;

                  {
                    Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Option_16));
                    MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (HeadVar__4_4));
                  }
                  mercury__getopt__handle_short_options_10_p_0(TypeInfo_for_OptionType_138, ShortOptionsList_41, OptionOps_3, Args0_17, &Args1_45, Var_76, &OptionArgs1_46, HeadVar__6_6, &Result1_107, STATE_VARIABLE_OptionsSet_0_8, &STATE_VARIABLE_OptionsSet_77_77);
                  if (((MR_tag((MR_Word) Result1_107)) == (MR_mktag((MR_Integer) 1))))
                  {
                    HeadVar__7_7 = Result1_107;
                    OptionArgs_5 = OptionArgs1_46;
                    HeadVar__2_2 = Args0_17;
                    STATE_VARIABLE_OptionsSet_9 = STATE_VARIABLE_OptionsSet_77_77;
                  }
                  else
                  {
                    MR_Word OptionTable1_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), Result1_107, (MR_Integer) 0)));
                    MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_OptionType_138 = TypeInfo_for_OptionType_138;
                    MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__1_1 = Args1_45;
                    MR_Word next_value_of_tscc_proc_1_input_3_OptionOps_3 = OptionOps_3;
                    MR_Word next_value_of_tscc_proc_1_input_4_HeadVar__4_4 = OptionArgs1_46;
                    MR_Word next_value_of_tscc_proc_1_input_5_HeadVar__6_6 = OptionTable1_105;
                    MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_OptionsSet_0_8 = STATE_VARIABLE_OptionsSet_77_77;

                    // direct tailcall eliminated
                    tscc_proc_1_input_1_TypeInfo_for_OptionType_138 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_OptionType_138;
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
                MR_Word Args1_119;

                mercury__getopt__process_arguments_9_p_0(TypeInfo_for_OptionType_138, Args0_17, &Args1_119, OptionOps_3, HeadVar__4_4, &OptionArgs_5, HeadVar__6_6, &HeadVar__7_7, STATE_VARIABLE_OptionsSet_0_8, &STATE_VARIABLE_OptionsSet_9);
                {
                  HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Option_16));
                  MR_hl_field(MR_mktag(1), HeadVar__2_2, 1) = ((MR_Box) (Args1_119));
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
      MR_Word TypeInfo_for_OptionType_48 = tscc_proc_2_input_1_TypeInfo_for_OptionType_48;
      MR_String Option_14 = tscc_proc_2_input_2_Option_14;
      MR_Box Flag_15 = tscc_proc_2_input_3_Flag_15;
      MR_Word OptionData_16 = tscc_proc_2_input_4_OptionData_16;
      MR_Word MaybeOptionArg0_17 = tscc_proc_2_input_5_MaybeOptionArg0_17;
      MR_Word Args0_18 = tscc_proc_2_input_6_Args0_18;
      MR_Word Args_19;
      MR_Word OptionOps_20 = tscc_proc_2_input_7_OptionOps_20;
      MR_Word OptionArgs0_21 = tscc_proc_2_input_8_OptionArgs0_21;
      MR_Word OptionArgs_22;
      MR_Word OptionTable0_23 = tscc_proc_2_input_9_OptionTable0_23;
      MR_Word Result_24;
      MR_Word STATE_VARIABLE_OptionsSet_0_37 = tscc_proc_2_input_10_STATE_VARIABLE_OptionsSet_0_37;
      MR_Word STATE_VARIABLE_OptionsSet_38;
      MR_bool succeeded;
      MR_Word MaybeOptionArg_28;
      MR_Word Args1_29;
      MR_Word MissingArg_30;
      MR_Word OptionArgs1_31;
      MR_Word Var_49;

      switch (MR_tag((MR_Word) OptionData_16)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(OptionData_16)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Var_49 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              Var_49 = (MR_Integer) 0;
              break;
            case (MR_Integer) 2:
              Var_49 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              Var_49 = (MR_Integer) 1;
              break;
            case (MR_Integer) 4:
              Var_49 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          Var_49 = (MR_Integer) 0;
          break;
        case (MR_Integer) 2:
          Var_49 = (MR_Integer) 1;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), OptionData_16, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Var_49 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              Var_49 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              Var_49 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              Var_49 = (MR_Integer) 1;
              break;
          }
          break;
      }
      succeeded = ((MR_Integer) 1 == Var_49);
      if (succeeded)
        succeeded = (MaybeOptionArg0_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
        if ((Args0_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MaybeOptionArg_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          Args1_29 = Args0_18;
          OptionArgs1_31 = OptionArgs0_21;
          MissingArg_30 = (MR_Integer) 1;
        }
        else
        {
          MR_String Arg_26 = ((MR_String) (MR_hl_field(MR_mktag(1), Args0_18, (MR_Integer) 0)));

          Args1_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args0_18, (MR_Integer) 1)));
          {
            MaybeOptionArg_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeOptionArg_28, 0) = ((MR_Box) (Arg_26));
          }
          MissingArg_30 = (MR_Integer) 0;
          {
            OptionArgs1_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), OptionArgs1_31, 0) = ((MR_Box) (Arg_26));
            MR_hl_field(MR_mktag(1), OptionArgs1_31, 1) = ((MR_Box) (OptionArgs0_21));
          }
        }
      else
      {
        MaybeOptionArg_28 = MaybeOptionArg0_17;
        Args1_29 = Args0_18;
        OptionArgs1_31 = OptionArgs0_21;
        MissingArg_30 = (MR_Integer) 0;
      }
      switch (MissingArg_30) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String ArgVal_33;
            MR_Word Var_50;

            switch (MR_tag((MR_Word) OptionData_16)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(OptionData_16)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    Var_50 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    Var_50 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 2:
                    Var_50 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    Var_50 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    Var_50 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                Var_50 = (MR_Integer) 0;
                break;
              case (MR_Integer) 2:
                Var_50 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), OptionData_16, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    Var_50 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    Var_50 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    Var_50 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    Var_50 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            succeeded = ((MR_Integer) 0 == Var_50);
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) MaybeOptionArg_28)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
                ArgVal_33 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeOptionArg_28, (MR_Integer) 0)));
            }
            if (succeeded)
            {
              MR_Word Var_41;
              MR_Word Error_45;

              Args_19 = Args0_18;
              OptionArgs_22 = OptionArgs1_31;
              {
                Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (ArgVal_33));
              }
              {
                Error_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Error_45, 0) = Flag_15;
                MR_hl_field(MR_mktag(1), Error_45, 1) = ((MR_Box) (Option_14));
                MR_hl_field(MR_mktag(1), Error_45, 2) = ((MR_Box) (Var_41));
              }
              {
                Result_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Result_24, 0) = ((MR_Box) (Error_45));
              }
              STATE_VARIABLE_OptionsSet_38 = STATE_VARIABLE_OptionsSet_0_37;
            }
            else
            {
              MR_Word Result1_34;
              MR_Word STATE_VARIABLE_OptionsSet_42_42;

              mercury__getopt__process_option_9_p_0(TypeInfo_for_OptionType_48, OptionData_16, Option_14, Flag_15, MaybeOptionArg_28, OptionOps_20, OptionTable0_23, &Result1_34, STATE_VARIABLE_OptionsSet_0_37, &STATE_VARIABLE_OptionsSet_42_42);
              if (((MR_tag((MR_Word) Result1_34)) == (MR_mktag((MR_Integer) 1))))
              {
                Result_24 = Result1_34;
                OptionArgs_22 = OptionArgs1_31;
                Args_19 = Args1_29;
                STATE_VARIABLE_OptionsSet_38 = STATE_VARIABLE_OptionsSet_42_42;
              }
              else
              {
                MR_Word OptionTable1_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Result1_34, (MR_Integer) 0)));
                MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_OptionType_138 = TypeInfo_for_OptionType_48;
                MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__1_1 = Args1_29;
                MR_Word next_value_of_tscc_proc_1_input_3_OptionOps_3 = OptionOps_20;
                MR_Word next_value_of_tscc_proc_1_input_4_HeadVar__4_4 = OptionArgs1_31;
                MR_Word next_value_of_tscc_proc_1_input_5_HeadVar__6_6 = OptionTable1_35;
                MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_OptionsSet_0_8 = STATE_VARIABLE_OptionsSet_42_42;

                // direct tailcall eliminated
                tscc_proc_1_input_1_TypeInfo_for_OptionType_138 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_OptionType_138;
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
            MR_Word Error_32;
            MR_Word Var_44;

            Args_19 = Args0_18;
            OptionArgs_22 = OptionArgs1_31;
            Var_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
            {
              Error_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Error_32, 0) = Flag_15;
              MR_hl_field(MR_mktag(1), Error_32, 1) = ((MR_Box) (Option_14));
              MR_hl_field(MR_mktag(1), Error_32, 2) = ((MR_Box) (Var_44));
            }
            {
              Result_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Result_24, 0) = ((MR_Box) (Error_32));
            }
            STATE_VARIABLE_OptionsSet_38 = STATE_VARIABLE_OptionsSet_0_37;
          }
          break;
      }
      tscc_output_1_HeadVar__2_2 = Args_19;
      tscc_output_2_OptionArgs_5 = OptionArgs_22;
      tscc_output_3_HeadVar__7_7 = Result_24;
      tscc_output_4_STATE_VARIABLE_OptionsSet_9 = STATE_VARIABLE_OptionsSet_38;
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
mercury__getopt__handle_long_option_13_p_0(
  MR_Word tscc_proc_2_input_1_TypeInfo_for_OptionType_48,
  MR_String tscc_proc_2_input_2_Option_14,
  MR_Box tscc_proc_2_input_3_Flag_15,
  MR_Word tscc_proc_2_input_4_OptionData_16,
  MR_Word tscc_proc_2_input_5_MaybeOptionArg0_17,
  MR_Word tscc_proc_2_input_6_Args0_18,
  MR_Word * tscc_output_ptr_1_HeadVar__2_2,
  MR_Word tscc_proc_2_input_7_OptionOps_20,
  MR_Word tscc_proc_2_input_8_OptionArgs0_21,
  MR_Word * tscc_output_ptr_2_OptionArgs_5,
  MR_Word tscc_proc_2_input_9_OptionTable0_23,
  MR_Word * tscc_output_ptr_3_HeadVar__7_7,
  MR_Word tscc_proc_2_input_10_STATE_VARIABLE_OptionsSet_0_37,
  MR_Word * tscc_output_ptr_4_STATE_VARIABLE_OptionsSet_9)
{
  {
    MR_Word tscc_proc_1_input_1_TypeInfo_for_OptionType_138;
    MR_Word tscc_proc_1_input_2_HeadVar__1_1;
    MR_Word tscc_proc_1_input_3_OptionOps_3;
    MR_Word tscc_proc_1_input_4_HeadVar__4_4;
    MR_Word tscc_proc_1_input_5_HeadVar__6_6;
    MR_Word tscc_proc_1_input_6_STATE_VARIABLE_OptionsSet_0_8;
    MR_Word tscc_output_1_HeadVar__2_2;
    MR_Word tscc_output_2_OptionArgs_5;
    MR_Word tscc_output_3_HeadVar__7_7;
    MR_Word tscc_output_4_STATE_VARIABLE_OptionsSet_9;

    // The code for TSCC PROC 2: pred getopt.handle_long_option/13-0.
    // Setup for mutual tailcalls optimized into a loop.
    // The mutually recursive procedures are:

    // proc 1 in TSCC: pred getopt.process_arguments/9-0
    // proc 2 in TSCC: pred getopt.handle_long_option/13-0

    goto top_of_proc_2;
  top_of_proc_1:;
    {
      MR_Word TypeInfo_for_OptionType_138 = tscc_proc_1_input_1_TypeInfo_for_OptionType_138;
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
        MR_String Option_16 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
        MR_Word Args0_17 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));

        succeeded = (strcmp(Option_16, (MR_String) "--") == 0);
        if (succeeded)
        {
          OptionArgs_5 = HeadVar__4_4;
          HeadVar__2_2 = Args0_17;
          {
            HeadVar__7_7 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
            MR_hl_field(MR_mktag(0), HeadVar__7_7, 0) = ((MR_Box) (HeadVar__6_6));
          }
          STATE_VARIABLE_OptionsSet_9 = STATE_VARIABLE_OptionsSet_0_8;
        }
        else
        {
          MR_String LongOption_25;

          succeeded = mercury__string__append_3_p_1((MR_String) "--no-", &LongOption_25, Option_16);
          if (succeeded)
          {
            MR_Word LongOptionPred_26 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptionOps_3, (MR_Integer) 1)));
            MR_Word Var_132 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptionOps_3, (MR_Integer) 0)));
            MR_Word Var_133 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptionOps_3, (MR_Integer) 2)));
            MR_Box Flag_27;
            MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), LongOptionPred_26, (MR_Integer) 1)));

            succeeded = func_0(((MR_Box) LongOptionPred_26), ((MR_Box) (LongOption_25)), &Flag_27);
            if (succeeded)
            {
              MR_String OptName_28;
              MR_Word Result1_29;
              MR_Word STATE_VARIABLE_OptionsSet_52_52;

              OptName_28 = mercury__string__f_43_43_2_f_0((MR_String) "--", LongOption_25);
              mercury__getopt__process_negated_option_7_p_0(TypeInfo_for_OptionType_138, OptName_28, Flag_27, OptionOps_3, HeadVar__6_6, &Result1_29, STATE_VARIABLE_OptionsSet_0_8, &STATE_VARIABLE_OptionsSet_52_52);
              if (((MR_tag((MR_Word) Result1_29)) == (MR_mktag((MR_Integer) 1))))
              {
                HeadVar__7_7 = Result1_29;
                OptionArgs_5 = HeadVar__4_4;
                HeadVar__2_2 = Args0_17;
                STATE_VARIABLE_OptionsSet_9 = STATE_VARIABLE_OptionsSet_52_52;
              }
              else
              {
                MR_Word OptionTable1_30 = ((MR_Word) (MR_hl_field(MR_mktag(0), Result1_29, (MR_Integer) 0)));
                MR_Word Var_53;
                MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_OptionType_138;
                MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__1_1;
                MR_Word next_value_of_tscc_proc_1_input_3_OptionOps_3;
                MR_Word next_value_of_tscc_proc_1_input_4_HeadVar__4_4;
                MR_Word next_value_of_tscc_proc_1_input_5_HeadVar__6_6;
                MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_OptionsSet_0_8;

                {
                  Var_53 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_53, 0) = ((MR_Box) (Option_16));
                  MR_hl_field(MR_mktag(1), Var_53, 1) = ((MR_Box) (HeadVar__4_4));
                }
                // direct tailcall eliminated
                next_value_of_tscc_proc_1_input_1_TypeInfo_for_OptionType_138 = TypeInfo_for_OptionType_138;
                next_value_of_tscc_proc_1_input_2_HeadVar__1_1 = Args0_17;
                next_value_of_tscc_proc_1_input_3_OptionOps_3 = OptionOps_3;
                next_value_of_tscc_proc_1_input_4_HeadVar__4_4 = Var_53;
                next_value_of_tscc_proc_1_input_5_HeadVar__6_6 = OptionTable1_30;
                next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_OptionsSet_0_8 = STATE_VARIABLE_OptionsSet_52_52;
                tscc_proc_1_input_1_TypeInfo_for_OptionType_138 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_OptionType_138;
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
              MR_Word Error_32;

              {
                Error_32 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                MR_hl_field(MR_mktag(0), Error_32, 0) = ((MR_Box) (Option_16));
              }
              {
                HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), HeadVar__7_7, 0) = ((MR_Box) (Error_32));
              }
              OptionArgs_5 = HeadVar__4_4;
              HeadVar__2_2 = Args0_17;
              STATE_VARIABLE_OptionsSet_9 = STATE_VARIABLE_OptionsSet_0_8;
            }
          }
          else
          {
            MR_String LongOptionStr_33;

            succeeded = mercury__string__append_3_p_1((MR_String) "--", &LongOptionStr_33, Option_16);
            if (succeeded)
            {
              MR_Word MaybeArg_37;
              MR_String OptionName_38;
              MR_String LongOption_85;
              MR_Word LongOptionPred_86 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptionOps_3, (MR_Integer) 1)));
              MR_Word Var_134 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptionOps_3, (MR_Integer) 0)));
              MR_Word Var_135 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptionOps_3, (MR_Integer) 2)));
              MR_Integer OptionLen_34;
              MR_Box Flag_83;
              MR_bool MR_CALL (* func_1)(MR_Box, MR_Box, MR_Box *);

              succeeded = mercury__string__sub_string_search_3_p_0(LongOptionStr_33, (MR_String) "=", &OptionLen_34);
              if (succeeded)
              {
                MR_String EqualOptionArg_35;
                MR_String OptionArg_36;

                mercury__string__split_4_p_0(LongOptionStr_33, OptionLen_34, &LongOption_85, &EqualOptionArg_35);
                succeeded = mercury__string__first_char_3_p_2(EqualOptionArg_35, (MR_Char) 61, &OptionArg_36);
                if (succeeded)
                  {
                    MaybeArg_37 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), MaybeArg_37, 0) = ((MR_Box) (OptionArg_36));
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
                LongOption_85 = LongOptionStr_33;
                MaybeArg_37 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
              }
              OptionName_38 = mercury__string__f_43_43_2_f_0((MR_String) "--", LongOption_85);
              func_1 = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), LongOptionPred_86, (MR_Integer) 1)));
              succeeded = func_1(((MR_Box) LongOptionPred_86), ((MR_Box) (LongOption_85)), &Flag_83);
              if (succeeded)
              {
                MR_Word OptionData_39;
                MR_Word TypeCtorInfo_139_139 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
                MR_Box conv2_OptionData_39;

                succeeded = mercury__map__search_3_p_0(TypeInfo_for_OptionType_138, TypeCtorInfo_139_139, HeadVar__6_6, Flag_83, &conv2_OptionData_39);
                if (succeeded)
                {
                  OptionData_39 = ((MR_Word) conv2_OptionData_39);
                  succeeded = MR_TRUE;
                }
                if (succeeded)
                {
                  MR_Word Var_60;
                  MR_Word next_value_of_tscc_proc_2_input_1_TypeInfo_for_OptionType_48;
                  MR_String next_value_of_tscc_proc_2_input_2_Option_14;
                  MR_Box next_value_of_tscc_proc_2_input_3_Flag_15;
                  MR_Word next_value_of_tscc_proc_2_input_4_OptionData_16;
                  MR_Word next_value_of_tscc_proc_2_input_5_MaybeOptionArg0_17;
                  MR_Word next_value_of_tscc_proc_2_input_6_Args0_18;
                  MR_Word next_value_of_tscc_proc_2_input_7_OptionOps_20;
                  MR_Word next_value_of_tscc_proc_2_input_8_OptionArgs0_21;
                  MR_Word next_value_of_tscc_proc_2_input_9_OptionTable0_23;
                  MR_Word next_value_of_tscc_proc_2_input_10_STATE_VARIABLE_OptionsSet_0_37;

                  {
                    Var_60 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_60, 0) = ((MR_Box) (Option_16));
                    MR_hl_field(MR_mktag(1), Var_60, 1) = ((MR_Box) (HeadVar__4_4));
                  }
                  // direct tailcall eliminated
                  next_value_of_tscc_proc_2_input_1_TypeInfo_for_OptionType_48 = TypeInfo_for_OptionType_138;
                  next_value_of_tscc_proc_2_input_2_Option_14 = OptionName_38;
                  next_value_of_tscc_proc_2_input_3_Flag_15 = Flag_83;
                  next_value_of_tscc_proc_2_input_4_OptionData_16 = OptionData_39;
                  next_value_of_tscc_proc_2_input_5_MaybeOptionArg0_17 = MaybeArg_37;
                  next_value_of_tscc_proc_2_input_6_Args0_18 = Args0_17;
                  next_value_of_tscc_proc_2_input_7_OptionOps_20 = OptionOps_3;
                  next_value_of_tscc_proc_2_input_8_OptionArgs0_21 = Var_60;
                  next_value_of_tscc_proc_2_input_9_OptionTable0_23 = HeadVar__6_6;
                  next_value_of_tscc_proc_2_input_10_STATE_VARIABLE_OptionsSet_0_37 = STATE_VARIABLE_OptionsSet_0_8;
                  tscc_proc_2_input_1_TypeInfo_for_OptionType_48 = next_value_of_tscc_proc_2_input_1_TypeInfo_for_OptionType_48;
                  tscc_proc_2_input_2_Option_14 = next_value_of_tscc_proc_2_input_2_Option_14;
                  tscc_proc_2_input_3_Flag_15 = next_value_of_tscc_proc_2_input_3_Flag_15;
                  tscc_proc_2_input_4_OptionData_16 = next_value_of_tscc_proc_2_input_4_OptionData_16;
                  tscc_proc_2_input_5_MaybeOptionArg0_17 = next_value_of_tscc_proc_2_input_5_MaybeOptionArg0_17;
                  tscc_proc_2_input_6_Args0_18 = next_value_of_tscc_proc_2_input_6_Args0_18;
                  tscc_proc_2_input_7_OptionOps_20 = next_value_of_tscc_proc_2_input_7_OptionOps_20;
                  tscc_proc_2_input_8_OptionArgs0_21 = next_value_of_tscc_proc_2_input_8_OptionArgs0_21;
                  tscc_proc_2_input_9_OptionTable0_23 = next_value_of_tscc_proc_2_input_9_OptionTable0_23;
                  tscc_proc_2_input_10_STATE_VARIABLE_OptionsSet_0_37 = next_value_of_tscc_proc_2_input_10_STATE_VARIABLE_OptionsSet_0_37;
                  goto top_of_proc_2;
                }
                else
                {
                  MR_Word Var_62 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                  MR_Word Error_80;

                  {
                    Error_80 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Error_80, 0) = Flag_83;
                    MR_hl_field(MR_mktag(1), Error_80, 1) = ((MR_Box) (Option_16));
                    MR_hl_field(MR_mktag(1), Error_80, 2) = ((MR_Box) (Var_62));
                  }
                  {
                    HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), HeadVar__7_7, 0) = ((MR_Box) (Error_80));
                  }
                  OptionArgs_5 = HeadVar__4_4;
                  HeadVar__2_2 = Args0_17;
                  STATE_VARIABLE_OptionsSet_9 = STATE_VARIABLE_OptionsSet_0_8;
                }
              }
              else
              {
                MR_Word Error_82;

                {
                  Error_82 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  MR_hl_field(MR_mktag(0), Error_82, 0) = ((MR_Box) (OptionName_38));
                }
                {
                  HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), HeadVar__7_7, 0) = ((MR_Box) (Error_82));
                }
                OptionArgs_5 = HeadVar__4_4;
                HeadVar__2_2 = Args0_17;
                STATE_VARIABLE_OptionsSet_9 = STATE_VARIABLE_OptionsSet_0_8;
              }
            }
            else
            {
              MR_String ShortOptions_40;

              succeeded = mercury__string__first_char_3_p_2(Option_16, (MR_Char) 45, &ShortOptions_40);
              if (succeeded)
              {
                succeeded = (strcmp(ShortOptions_40, (MR_String) "") == 0);
                succeeded = !(succeeded);
              }
              if (succeeded)
              {
                MR_Word ShortOptionsList_41;
                MR_Char SingleShortOpt_42;
                MR_Word Var_64;
                MR_Char Var_65;
                MR_Word Var_66;

                mercury__string__to_char_list_2_p_0(ShortOptions_40, &ShortOptionsList_41);
                succeeded = ((MR_tag((MR_Word) ShortOptionsList_41)) == (MR_mktag((MR_Integer) 1)));
                if (succeeded)
                {
                  SingleShortOpt_42 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), ShortOptionsList_41, (MR_Integer) 0)));
                  Var_64 = ((MR_Word) (MR_hl_field(MR_mktag(1), ShortOptionsList_41, (MR_Integer) 1)));
                  succeeded = ((MR_tag((MR_Word) Var_64)) == (MR_mktag((MR_Integer) 1)));
                  if (succeeded)
                  {
                    Var_65 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), Var_64, (MR_Integer) 0)));
                    Var_66 = ((MR_Word) (MR_hl_field(MR_mktag(1), Var_64, (MR_Integer) 1)));
                    succeeded = (Var_65 == (MR_Char) 45);
                    if (succeeded)
                      succeeded = (Var_66 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
                  }
                }
                if (succeeded)
                {
                  MR_Word ShortOptionPred_43 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptionOps_3, (MR_Integer) 0)));
                  MR_Word Var_136 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptionOps_3, (MR_Integer) 1)));
                  MR_Word Var_137 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptionOps_3, (MR_Integer) 2)));
                  MR_Box Flag_95;
                  MR_bool MR_CALL (* func_3)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ShortOptionPred_43, (MR_Integer) 1)));

                  succeeded = func_3(((MR_Box) ShortOptionPred_43), ((MR_Box) (MR_Word) (SingleShortOpt_42)), &Flag_95);
                  if (succeeded)
                  {
                    MR_Word Var_67;
                    MR_Word Var_69;
                    MR_Word Var_70 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                    MR_Word STATE_VARIABLE_OptionsSet_71_71;
                    MR_String OptName_91;
                    MR_Word Result1_92;

                    {
                      Var_69 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_69, 0) = ((MR_Box) (MR_Word) (SingleShortOpt_42));
                      MR_hl_field(MR_mktag(1), Var_69, 1) = ((MR_Box) (Var_70));
                    }
                    {
                      Var_67 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), Var_67, 0) = ((MR_Box) (MR_Word) ((MR_Char) 45));
                      MR_hl_field(MR_mktag(1), Var_67, 1) = ((MR_Box) (Var_69));
                    }
                    mercury__string__from_char_list_2_p_0(Var_67, &OptName_91);
                    mercury__getopt__process_negated_option_7_p_0(TypeInfo_for_OptionType_138, OptName_91, Flag_95, OptionOps_3, HeadVar__6_6, &Result1_92, STATE_VARIABLE_OptionsSet_0_8, &STATE_VARIABLE_OptionsSet_71_71);
                    if (((MR_tag((MR_Word) Result1_92)) == (MR_mktag((MR_Integer) 1))))
                    {
                      HeadVar__7_7 = Result1_92;
                      OptionArgs_5 = HeadVar__4_4;
                      HeadVar__2_2 = Args0_17;
                      STATE_VARIABLE_OptionsSet_9 = STATE_VARIABLE_OptionsSet_71_71;
                    }
                    else
                    {
                      MR_Word Var_72;
                      MR_Word OptionTable1_89 = ((MR_Word) (MR_hl_field(MR_mktag(0), Result1_92, (MR_Integer) 0)));
                      MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_OptionType_138;
                      MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__1_1;
                      MR_Word next_value_of_tscc_proc_1_input_3_OptionOps_3;
                      MR_Word next_value_of_tscc_proc_1_input_4_HeadVar__4_4;
                      MR_Word next_value_of_tscc_proc_1_input_5_HeadVar__6_6;
                      MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_OptionsSet_0_8;

                      {
                        Var_72 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                        MR_hl_field(MR_mktag(1), Var_72, 0) = ((MR_Box) (Option_16));
                        MR_hl_field(MR_mktag(1), Var_72, 1) = ((MR_Box) (HeadVar__4_4));
                      }
                      // direct tailcall eliminated
                      next_value_of_tscc_proc_1_input_1_TypeInfo_for_OptionType_138 = TypeInfo_for_OptionType_138;
                      next_value_of_tscc_proc_1_input_2_HeadVar__1_1 = Args0_17;
                      next_value_of_tscc_proc_1_input_3_OptionOps_3 = OptionOps_3;
                      next_value_of_tscc_proc_1_input_4_HeadVar__4_4 = Var_72;
                      next_value_of_tscc_proc_1_input_5_HeadVar__6_6 = OptionTable1_89;
                      next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_OptionsSet_0_8 = STATE_VARIABLE_OptionsSet_71_71;
                      tscc_proc_1_input_1_TypeInfo_for_OptionType_138 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_OptionType_138;
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
                    MR_String Var_74;
                    MR_Word Error_94;

                    Var_74 = mercury__string__f_43_43_2_f_0((MR_String) "-", ShortOptions_40);
                    {
                      Error_94 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                      MR_hl_field(MR_mktag(0), Error_94, 0) = ((MR_Box) (Var_74));
                    }
                    {
                      HeadVar__7_7 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                      MR_hl_field(MR_mktag(1), HeadVar__7_7, 0) = ((MR_Box) (Error_94));
                    }
                    OptionArgs_5 = HeadVar__4_4;
                    HeadVar__2_2 = Args0_17;
                    STATE_VARIABLE_OptionsSet_9 = STATE_VARIABLE_OptionsSet_0_8;
                  }
                }
                else
                {
                  MR_Word Args1_45;
                  MR_Word OptionArgs1_46;
                  MR_Word Var_76;
                  MR_Word STATE_VARIABLE_OptionsSet_77_77;
                  MR_Word Result1_107;

                  {
                    Var_76 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_76, 0) = ((MR_Box) (Option_16));
                    MR_hl_field(MR_mktag(1), Var_76, 1) = ((MR_Box) (HeadVar__4_4));
                  }
                  mercury__getopt__handle_short_options_10_p_0(TypeInfo_for_OptionType_138, ShortOptionsList_41, OptionOps_3, Args0_17, &Args1_45, Var_76, &OptionArgs1_46, HeadVar__6_6, &Result1_107, STATE_VARIABLE_OptionsSet_0_8, &STATE_VARIABLE_OptionsSet_77_77);
                  if (((MR_tag((MR_Word) Result1_107)) == (MR_mktag((MR_Integer) 1))))
                  {
                    HeadVar__7_7 = Result1_107;
                    OptionArgs_5 = OptionArgs1_46;
                    HeadVar__2_2 = Args0_17;
                    STATE_VARIABLE_OptionsSet_9 = STATE_VARIABLE_OptionsSet_77_77;
                  }
                  else
                  {
                    MR_Word OptionTable1_105 = ((MR_Word) (MR_hl_field(MR_mktag(0), Result1_107, (MR_Integer) 0)));
                    MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_OptionType_138 = TypeInfo_for_OptionType_138;
                    MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__1_1 = Args1_45;
                    MR_Word next_value_of_tscc_proc_1_input_3_OptionOps_3 = OptionOps_3;
                    MR_Word next_value_of_tscc_proc_1_input_4_HeadVar__4_4 = OptionArgs1_46;
                    MR_Word next_value_of_tscc_proc_1_input_5_HeadVar__6_6 = OptionTable1_105;
                    MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_OptionsSet_0_8 = STATE_VARIABLE_OptionsSet_77_77;

                    // direct tailcall eliminated
                    tscc_proc_1_input_1_TypeInfo_for_OptionType_138 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_OptionType_138;
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
                MR_Word Args1_119;

                mercury__getopt__process_arguments_9_p_0(TypeInfo_for_OptionType_138, Args0_17, &Args1_119, OptionOps_3, HeadVar__4_4, &OptionArgs_5, HeadVar__6_6, &HeadVar__7_7, STATE_VARIABLE_OptionsSet_0_8, &STATE_VARIABLE_OptionsSet_9);
                {
                  HeadVar__2_2 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), HeadVar__2_2, 0) = ((MR_Box) (Option_16));
                  MR_hl_field(MR_mktag(1), HeadVar__2_2, 1) = ((MR_Box) (Args1_119));
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
      MR_Word TypeInfo_for_OptionType_48 = tscc_proc_2_input_1_TypeInfo_for_OptionType_48;
      MR_String Option_14 = tscc_proc_2_input_2_Option_14;
      MR_Box Flag_15 = tscc_proc_2_input_3_Flag_15;
      MR_Word OptionData_16 = tscc_proc_2_input_4_OptionData_16;
      MR_Word MaybeOptionArg0_17 = tscc_proc_2_input_5_MaybeOptionArg0_17;
      MR_Word Args0_18 = tscc_proc_2_input_6_Args0_18;
      MR_Word Args_19;
      MR_Word OptionOps_20 = tscc_proc_2_input_7_OptionOps_20;
      MR_Word OptionArgs0_21 = tscc_proc_2_input_8_OptionArgs0_21;
      MR_Word OptionArgs_22;
      MR_Word OptionTable0_23 = tscc_proc_2_input_9_OptionTable0_23;
      MR_Word Result_24;
      MR_Word STATE_VARIABLE_OptionsSet_0_37 = tscc_proc_2_input_10_STATE_VARIABLE_OptionsSet_0_37;
      MR_Word STATE_VARIABLE_OptionsSet_38;
      MR_bool succeeded;
      MR_Word MaybeOptionArg_28;
      MR_Word Args1_29;
      MR_Word MissingArg_30;
      MR_Word OptionArgs1_31;
      MR_Word Var_49;

      switch (MR_tag((MR_Word) OptionData_16)) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          switch (MR_unmkbody(OptionData_16)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Var_49 = (MR_Integer) 0;
              break;
            case (MR_Integer) 1:
              Var_49 = (MR_Integer) 0;
              break;
            case (MR_Integer) 2:
              Var_49 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              Var_49 = (MR_Integer) 1;
              break;
            case (MR_Integer) 4:
              Var_49 = (MR_Integer) 1;
              break;
          }
          break;
        case (MR_Integer) 1:
          Var_49 = (MR_Integer) 0;
          break;
        case (MR_Integer) 2:
          Var_49 = (MR_Integer) 1;
          break;
        case (MR_Integer) 3:
          switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), OptionData_16, (MR_Integer) 0)))) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              Var_49 = (MR_Integer) 1;
              break;
            case (MR_Integer) 1:
              Var_49 = (MR_Integer) 1;
              break;
            case (MR_Integer) 2:
              Var_49 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              Var_49 = (MR_Integer) 1;
              break;
          }
          break;
      }
      succeeded = ((MR_Integer) 1 == Var_49);
      if (succeeded)
        succeeded = (MaybeOptionArg0_17 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
      if (succeeded)
        if ((Args0_18 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
        {
          MaybeOptionArg_28 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          Args1_29 = Args0_18;
          OptionArgs1_31 = OptionArgs0_21;
          MissingArg_30 = (MR_Integer) 1;
        }
        else
        {
          MR_String Arg_26 = ((MR_String) (MR_hl_field(MR_mktag(1), Args0_18, (MR_Integer) 0)));

          Args1_29 = ((MR_Word) (MR_hl_field(MR_mktag(1), Args0_18, (MR_Integer) 1)));
          {
            MaybeOptionArg_28 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), MaybeOptionArg_28, 0) = ((MR_Box) (Arg_26));
          }
          MissingArg_30 = (MR_Integer) 0;
          {
            OptionArgs1_31 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), OptionArgs1_31, 0) = ((MR_Box) (Arg_26));
            MR_hl_field(MR_mktag(1), OptionArgs1_31, 1) = ((MR_Box) (OptionArgs0_21));
          }
        }
      else
      {
        MaybeOptionArg_28 = MaybeOptionArg0_17;
        Args1_29 = Args0_18;
        OptionArgs1_31 = OptionArgs0_21;
        MissingArg_30 = (MR_Integer) 0;
      }
      switch (MissingArg_30) {
        default: /*NOTREACHED*/ MR_assert(0);
        case (MR_Integer) 0:
          {
            MR_String ArgVal_33;
            MR_Word Var_50;

            switch (MR_tag((MR_Word) OptionData_16)) {
              default: /*NOTREACHED*/ MR_assert(0);
              case (MR_Integer) 0:
                switch (MR_unmkbody(OptionData_16)) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    Var_50 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 1:
                    Var_50 = (MR_Integer) 0;
                    break;
                  case (MR_Integer) 2:
                    Var_50 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    Var_50 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 4:
                    Var_50 = (MR_Integer) 1;
                    break;
                }
                break;
              case (MR_Integer) 1:
                Var_50 = (MR_Integer) 0;
                break;
              case (MR_Integer) 2:
                Var_50 = (MR_Integer) 1;
                break;
              case (MR_Integer) 3:
                switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), OptionData_16, (MR_Integer) 0)))) {
                  default: /*NOTREACHED*/ MR_assert(0);
                  case (MR_Integer) 0:
                    Var_50 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 1:
                    Var_50 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 2:
                    Var_50 = (MR_Integer) 1;
                    break;
                  case (MR_Integer) 3:
                    Var_50 = (MR_Integer) 1;
                    break;
                }
                break;
            }
            succeeded = ((MR_Integer) 0 == Var_50);
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) MaybeOptionArg_28)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
                ArgVal_33 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeOptionArg_28, (MR_Integer) 0)));
            }
            if (succeeded)
            {
              MR_Word Var_41;
              MR_Word Error_45;

              Args_19 = Args0_18;
              OptionArgs_22 = OptionArgs1_31;
              {
                Var_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Var_41, 0) = ((MR_Box) (ArgVal_33));
              }
              {
                Error_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Error_45, 0) = Flag_15;
                MR_hl_field(MR_mktag(1), Error_45, 1) = ((MR_Box) (Option_14));
                MR_hl_field(MR_mktag(1), Error_45, 2) = ((MR_Box) (Var_41));
              }
              {
                Result_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), Result_24, 0) = ((MR_Box) (Error_45));
              }
              STATE_VARIABLE_OptionsSet_38 = STATE_VARIABLE_OptionsSet_0_37;
            }
            else
            {
              MR_Word Result1_34;
              MR_Word STATE_VARIABLE_OptionsSet_42_42;

              mercury__getopt__process_option_9_p_0(TypeInfo_for_OptionType_48, OptionData_16, Option_14, Flag_15, MaybeOptionArg_28, OptionOps_20, OptionTable0_23, &Result1_34, STATE_VARIABLE_OptionsSet_0_37, &STATE_VARIABLE_OptionsSet_42_42);
              if (((MR_tag((MR_Word) Result1_34)) == (MR_mktag((MR_Integer) 1))))
              {
                Result_24 = Result1_34;
                OptionArgs_22 = OptionArgs1_31;
                Args_19 = Args1_29;
                STATE_VARIABLE_OptionsSet_38 = STATE_VARIABLE_OptionsSet_42_42;
              }
              else
              {
                MR_Word OptionTable1_35 = ((MR_Word) (MR_hl_field(MR_mktag(0), Result1_34, (MR_Integer) 0)));
                MR_Word next_value_of_tscc_proc_1_input_1_TypeInfo_for_OptionType_138 = TypeInfo_for_OptionType_48;
                MR_Word next_value_of_tscc_proc_1_input_2_HeadVar__1_1 = Args1_29;
                MR_Word next_value_of_tscc_proc_1_input_3_OptionOps_3 = OptionOps_20;
                MR_Word next_value_of_tscc_proc_1_input_4_HeadVar__4_4 = OptionArgs1_31;
                MR_Word next_value_of_tscc_proc_1_input_5_HeadVar__6_6 = OptionTable1_35;
                MR_Word next_value_of_tscc_proc_1_input_6_STATE_VARIABLE_OptionsSet_0_8 = STATE_VARIABLE_OptionsSet_42_42;

                // direct tailcall eliminated
                tscc_proc_1_input_1_TypeInfo_for_OptionType_138 = next_value_of_tscc_proc_1_input_1_TypeInfo_for_OptionType_138;
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
            MR_Word Error_32;
            MR_Word Var_44;

            Args_19 = Args0_18;
            OptionArgs_22 = OptionArgs1_31;
            Var_44 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 1));
            {
              Error_32 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Error_32, 0) = Flag_15;
              MR_hl_field(MR_mktag(1), Error_32, 1) = ((MR_Box) (Option_14));
              MR_hl_field(MR_mktag(1), Error_32, 2) = ((MR_Box) (Var_44));
            }
            {
              Result_24 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), Result_24, 0) = ((MR_Box) (Error_32));
            }
            STATE_VARIABLE_OptionsSet_38 = STATE_VARIABLE_OptionsSet_0_37;
          }
          break;
      }
      tscc_output_1_HeadVar__2_2 = Args_19;
      tscc_output_2_OptionArgs_5 = OptionArgs_22;
      tscc_output_3_HeadVar__7_7 = Result_24;
      tscc_output_4_STATE_VARIABLE_OptionsSet_9 = STATE_VARIABLE_OptionsSet_38;
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
mercury__getopt__process_negated_option_7_p_0(
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
    MR_Word TypeCtorInfo_52_52 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
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
                Var_31 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__getopt_scalar_common_8[1]);
                mercury__getopt__process_special_8_p_0(TypeInfo_for_OptionType_51, Option_8, Flag_9, Var_31, OptionOps_10, OptionTable0_11, Result_12, STATE_VARIABLE_OptionsSet_30_30, STATE_VARIABLE_OptionsSet_24);
              }
              break;
            case (MR_Integer) 4:
              {
                MR_Word STATE_VARIABLE_OptionsSet_26_26;
                MR_Word Var_27;
                MR_Word Var_29;

                mercury__set__insert_3_p_0(TypeInfo_for_OptionType_51, Flag_9, STATE_VARIABLE_OptionsSet_0_23, &STATE_VARIABLE_OptionsSet_26_26);
                Var_29 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                Var_27 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__getopt_scalar_common_1[6]);
                mercury__getopt__process_special_8_p_0(TypeInfo_for_OptionType_51, Option_8, Flag_9, Var_27, OptionOps_10, OptionTable0_11, Result_12, STATE_VARIABLE_OptionsSet_26_26, STATE_VARIABLE_OptionsSet_24);
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
            Var_44 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__getopt_scalar_common_8[1]);
            TypeCtorInfo_53_53 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
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
                Var_41 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__getopt_scalar_common_1[4]);
                TypeCtorInfo_54_54 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
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
                Var_38 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__getopt_scalar_common_1[5]);
                TypeCtorInfo_55_55 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
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
                Var_35 = (MR_Word) MR_mkword(MR_mktag(3), &mercury__getopt_scalar_common_1[3]);
                TypeCtorInfo_56_56 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
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
mercury__getopt__handle_short_options_10_p_0(
  MR_Word TypeInfo_for_OptionType_60,
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
      MR_Char Opt_18 = ((MR_Char) (MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 0)));
      MR_Word Opts0_19 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__1_1, (MR_Integer) 1)));
      MR_Word ShortOptionPred_28 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptionOps_2, (MR_Integer) 0)));
      MR_Word Var_58 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptionOps_2, (MR_Integer) 1)));
      MR_Word Var_59 = ((MR_Word) (MR_hl_field(MR_mktag(0), OptionOps_2, (MR_Integer) 2)));
      MR_Box Flag_29;
      MR_bool MR_CALL (* func_0)(MR_Box, MR_Box, MR_Box *) = ((MR_bool MR_CALL (*)(MR_Box, MR_Box, MR_Box *)) (MR_hl_field(MR_mktag(0), ShortOptionPred_28, (MR_Integer) 1)));

      succeeded = func_0(((MR_Box) ShortOptionPred_28), ((MR_Box) (MR_Word) (Opt_18)), &Flag_29);
      if (succeeded)
      {
        MR_Word OptionData_30;
        MR_Word TypeCtorInfo_61_61 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
        MR_Box conv1_OptionData_30;

        succeeded = mercury__tree234__search_3_p_0(TypeInfo_for_OptionType_60, TypeCtorInfo_61_61, HeadVar__7_7, Flag_29, &conv1_OptionData_30);
        if (succeeded)
        {
          OptionData_30 = ((MR_Word) conv1_OptionData_30);
          succeeded = MR_TRUE;
        }
        if (succeeded)
        {
          MR_Word Args1_32;
          MR_Word OptionArgs1_33;
          MR_Word MaybeOptionArg_34;
          MR_Word Opts1_35;
          MR_String Option_36;
          MR_Word Result1_37;
          MR_Word Var_45;
          MR_Word Var_47;
          MR_Word Var_48;
          MR_Word STATE_VARIABLE_OptionsSet_49_49;
          MR_Word Var_62;

          switch (MR_tag((MR_Word) OptionData_30)) {
            default: /*NOTREACHED*/ MR_assert(0);
            case (MR_Integer) 0:
              switch (MR_unmkbody(OptionData_30)) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  Var_62 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 1:
                  Var_62 = (MR_Integer) 0;
                  break;
                case (MR_Integer) 2:
                  Var_62 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  Var_62 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 4:
                  Var_62 = (MR_Integer) 1;
                  break;
              }
              break;
            case (MR_Integer) 1:
              Var_62 = (MR_Integer) 0;
              break;
            case (MR_Integer) 2:
              Var_62 = (MR_Integer) 1;
              break;
            case (MR_Integer) 3:
              switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), OptionData_30, (MR_Integer) 0)))) {
                default: /*NOTREACHED*/ MR_assert(0);
                case (MR_Integer) 0:
                  Var_62 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 1:
                  Var_62 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 2:
                  Var_62 = (MR_Integer) 1;
                  break;
                case (MR_Integer) 3:
                  Var_62 = (MR_Integer) 1;
                  break;
              }
              break;
          }
          succeeded = ((MR_Integer) 1 == Var_62);
          if (succeeded)
          {
            MR_String Arg_31;
            MR_String ArgPrime_78;
            MR_Word ArgsPrime_79;

            succeeded = (Opts0_19 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0))));
            if (succeeded)
            {
              succeeded = ((MR_tag((MR_Word) HeadVar__3_3)) == (MR_mktag((MR_Integer) 1)));
              if (succeeded)
              {
                ArgPrime_78 = ((MR_String) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 0)));
                ArgsPrime_79 = ((MR_Word) (MR_hl_field(MR_mktag(1), HeadVar__3_3, (MR_Integer) 1)));
              }
            }
            if (succeeded)
            {
              {
                OptionArgs1_33 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(1), OptionArgs1_33, 0) = ((MR_Box) (ArgPrime_78));
                MR_hl_field(MR_mktag(1), OptionArgs1_33, 1) = ((MR_Box) (HeadVar__5_5));
              }
              Arg_31 = ArgPrime_78;
              Args1_32 = ArgsPrime_79;
            }
            else
            {
              mercury__string__from_char_list_2_p_0(Opts0_19, &Arg_31);
              OptionArgs1_33 = HeadVar__5_5;
              Args1_32 = HeadVar__3_3;
            }
            {
              MaybeOptionArg_34 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
              MR_hl_field(MR_mktag(1), MaybeOptionArg_34, 0) = ((MR_Box) (Arg_31));
            }
            Opts1_35 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          }
          else
          {
            MaybeOptionArg_34 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
            Opts1_35 = Opts0_19;
            OptionArgs1_33 = HeadVar__5_5;
            Args1_32 = HeadVar__3_3;
          }
          Var_48 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          {
            Var_47 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_47, 0) = ((MR_Box) (MR_Word) (Opt_18));
            MR_hl_field(MR_mktag(1), Var_47, 1) = ((MR_Box) (Var_48));
          }
          {
            Var_45 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Var_45, 0) = ((MR_Box) (MR_Word) ((MR_Char) 45));
            MR_hl_field(MR_mktag(1), Var_45, 1) = ((MR_Box) (Var_47));
          }
          mercury__string__from_char_list_2_p_0(Var_45, &Option_36);
          mercury__getopt__process_option_9_p_0(TypeInfo_for_OptionType_60, OptionData_30, Option_36, Flag_29, MaybeOptionArg_34, OptionOps_2, HeadVar__7_7, &Result1_37, STATE_VARIABLE_OptionsSet_0_9, &STATE_VARIABLE_OptionsSet_49_49);
          if (((MR_tag((MR_Word) Result1_37)) == (MR_mktag((MR_Integer) 1))))
          {
            *HeadVar__8_8 = Result1_37;
            *OptionArgs_6 = OptionArgs1_33;
            *Args_4 = Args1_32;
            *STATE_VARIABLE_OptionsSet_10 = STATE_VARIABLE_OptionsSet_49_49;
          }
          else
          {
            MR_Word OptionTable1_38 = ((MR_Word) (MR_hl_field(MR_mktag(0), Result1_37, (MR_Integer) 0)));
            MR_Word next_value_of_HeadVar__1_1 = Opts1_35;
            MR_Word next_value_of_HeadVar__3_3 = Args1_32;
            MR_Word next_value_of_HeadVar__5_5 = OptionArgs1_33;
            MR_Word next_value_of_HeadVar__7_7 = OptionTable1_38;
            MR_Word next_value_of_STATE_VARIABLE_OptionsSet_0_9 = STATE_VARIABLE_OptionsSet_49_49;

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
          MR_String OptString_40;
          MR_Word Error_41;
          MR_String Var_51;
          MR_Word Var_53;
          MR_Word V_5_82;
          MR_Word V_6_83 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

          {
            V_5_82 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), V_5_82, 0) = ((MR_Box) (MR_Word) (Opt_18));
            MR_hl_field(MR_mktag(1), V_5_82, 1) = ((MR_Box) (V_6_83));
          }
          mercury__string__to_char_list_2_p_1(&OptString_40, V_5_82);
          mercury__string__append_3_p_2((MR_String) "-", OptString_40, &Var_51);
          Var_53 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
          {
            Error_41 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL));
            MR_hl_field(MR_mktag(1), Error_41, 0) = Flag_29;
            MR_hl_field(MR_mktag(1), Error_41, 1) = ((MR_Box) (Var_51));
            MR_hl_field(MR_mktag(1), Error_41, 2) = ((MR_Box) (Var_53));
          }
          {
            MR_Word base;
            base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
            *HeadVar__8_8 = base;
            MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_41));
          }
          *OptionArgs_6 = HeadVar__5_5;
          *Args_4 = HeadVar__3_3;
          *STATE_VARIABLE_OptionsSet_10 = STATE_VARIABLE_OptionsSet_0_9;
        }
      }
      else
      {
        MR_String Var_54;
        MR_String OptString_56;
        MR_Word Error_57;
        MR_Word V_5_92;
        MR_Word V_6_93 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

        {
          V_5_92 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
          MR_hl_field(MR_mktag(1), V_5_92, 0) = ((MR_Box) (MR_Word) (Opt_18));
          MR_hl_field(MR_mktag(1), V_5_92, 1) = ((MR_Box) (V_6_93));
        }
        mercury__string__to_char_list_2_p_1(&OptString_56, V_5_92);
        Var_54 = mercury__string__f_43_43_2_f_0((MR_String) "-", OptString_56);
        {
          Error_57 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
          MR_hl_field(MR_mktag(0), Error_57, 0) = ((MR_Box) (Var_54));
        }
        {
          MR_Word base;
          base = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
          *HeadVar__8_8 = base;
          MR_hl_field(MR_mktag(1), base, 0) = ((MR_Box) (Error_57));
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
mercury__getopt__process_option_9_p_0(
  MR_Word TypeInfo_for_OptionType_190,
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
              MR_Word STATE_VARIABLE_OptionsSet_125_125;

              mercury__set__insert_3_p_0(TypeInfo_for_OptionType_190, Flag_3, STATE_VARIABLE_OptionsSet_0_8, &STATE_VARIABLE_OptionsSet_125_125);
              if ((MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word Var_126 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));

                mercury__getopt__process_special_8_p_0(TypeInfo_for_OptionType_190, HeadVar__2_2, Flag_3, Var_126, HeadVar__5_5, HeadVar__6_6, Result_7, STATE_VARIABLE_OptionsSet_125_125, STATE_VARIABLE_OptionsSet_9);
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
              MR_Word STATE_VARIABLE_OptionsSet_139_139;

              mercury__set__insert_3_p_0(TypeInfo_for_OptionType_190, Flag_3, STATE_VARIABLE_OptionsSet_0_8, &STATE_VARIABLE_OptionsSet_139_139);
              if ((MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                MR_Word Var_140 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__getopt_scalar_common_8[0]);

                mercury__getopt__process_special_8_p_0(TypeInfo_for_OptionType_190, HeadVar__2_2, Flag_3, Var_140, HeadVar__5_5, HeadVar__6_6, Result_7, STATE_VARIABLE_OptionsSet_139_139, STATE_VARIABLE_OptionsSet_9);
              }
              else
              {
                MR_Word Var_143 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__getopt_scalar_common_8[1]);

                mercury__getopt__process_special_8_p_0(TypeInfo_for_OptionType_190, HeadVar__2_2, Flag_3, Var_143, HeadVar__5_5, HeadVar__6_6, Result_7, STATE_VARIABLE_OptionsSet_139_139, STATE_VARIABLE_OptionsSet_9);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              MR_Word STATE_VARIABLE_OptionsSet_157_157;

              mercury__set__insert_3_p_0(TypeInfo_for_OptionType_190, Flag_3, STATE_VARIABLE_OptionsSet_0_8, &STATE_VARIABLE_OptionsSet_157_157);
              if ((MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__error_1_p_0((MR_String) "int_special argument expected in getopt.process_option");
                  return;
                }
              }
              else
              {
                MR_String Arg_153 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeArg_4, (MR_Integer) 0)));
                MR_Integer IntArg_154;

                succeeded = mercury__string__to_int_2_p_0(Arg_153, &IntArg_154);
                if (succeeded)
                {
                  MR_Word Var_159;

                  {
                    Var_159 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(2), Var_159, 0) = ((MR_Box) (IntArg_154));
                  }
                  mercury__getopt__process_special_8_p_0(TypeInfo_for_OptionType_190, HeadVar__2_2, Flag_3, Var_159, HeadVar__5_5, HeadVar__6_6, Result_7, STATE_VARIABLE_OptionsSet_157_157, STATE_VARIABLE_OptionsSet_9);
                }
                else
                {
                  mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_4_p_0(Flag_3, HeadVar__2_2, Arg_153, Result_7);
                  *STATE_VARIABLE_OptionsSet_9 = STATE_VARIABLE_OptionsSet_157_157;
                }
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word STATE_VARIABLE_OptionsSet_171_171;

              mercury__set__insert_3_p_0(TypeInfo_for_OptionType_190, Flag_3, STATE_VARIABLE_OptionsSet_0_8, &STATE_VARIABLE_OptionsSet_171_171);
              if ((MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__error_1_p_0((MR_String) "string_special argument expected in getopt.process_option");
                  return;
                }
              }
              else
              {
                MR_String Arg_168 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeArg_4, (MR_Integer) 0)));
                MR_Word Var_173;

                {
                  Var_173 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_173, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), Var_173, 1) = ((MR_Box) (Arg_168));
                }
                mercury__getopt__process_special_8_p_0(TypeInfo_for_OptionType_190, HeadVar__2_2, Flag_3, Var_173, HeadVar__5_5, HeadVar__6_6, Result_7, STATE_VARIABLE_OptionsSet_171_171, STATE_VARIABLE_OptionsSet_9);
              }
            }
            break;
          case (MR_Integer) 4:
            if ((MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
            {
              {
                mercury__require__error_1_p_0((MR_String) "maybe_string_special argument expected in getopt.process_option");
                return;
              }
            }
            else
            {
              MR_Word Var_188;

              {
                Var_188 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(3), Var_188, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                MR_hl_field(MR_mktag(3), Var_188, 1) = ((MR_Box) (MaybeArg_4));
              }
              mercury__getopt__process_special_8_p_0(TypeInfo_for_OptionType_190, HeadVar__2_2, Flag_3, Var_188, HeadVar__5_5, HeadVar__6_6, Result_7, STATE_VARIABLE_OptionsSet_0_8, STATE_VARIABLE_OptionsSet_9);
            }
            break;
        }
        break;
      case (MR_Integer) 1:
        {
          mercury__set__insert_3_p_0(TypeInfo_for_OptionType_190, Flag_3, STATE_VARIABLE_OptionsSet_0_8, STATE_VARIABLE_OptionsSet_9);
          if ((MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            MR_Word TypeCtorInfo_192_192 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
            MR_Word Var_23 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__getopt_scalar_common_8[0]);
            MR_Word OptionTable_27;

            mercury__map__set_4_p_0(TypeInfo_for_OptionType_190, TypeCtorInfo_192_192, Flag_3, ((MR_Box) (Var_23)), HeadVar__6_6, &OptionTable_27);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *Result_7 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (OptionTable_27));
            }
          }
          else
          {
            MR_Word TypeCtorInfo_191_191 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
            MR_Word OptionTable_19;
            MR_Word Var_25 = (MR_Word) MR_mkword(MR_mktag(1), &mercury__getopt_scalar_common_8[1]);

            mercury__map__set_4_p_0(TypeInfo_for_OptionType_190, TypeCtorInfo_191_191, Flag_3, ((MR_Box) (Var_25)), HeadVar__6_6, &OptionTable_19);
            {
              MR_Word base;
              base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
              *Result_7 = base;
              MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (OptionTable_19));
            }
          }
        }
        break;
      case (MR_Integer) 2:
        {
          mercury__set__insert_3_p_0(TypeInfo_for_OptionType_190, Flag_3, STATE_VARIABLE_OptionsSet_0_8, STATE_VARIABLE_OptionsSet_9);
          if ((MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
          {
            {
              mercury__require__error_1_p_0((MR_String) "integer argument expected in getopt.process_option");
              return;
            }
          }
          else
          {
            MR_String Arg_36 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeArg_4, (MR_Integer) 0)));
            MR_Integer IntArg_37;

            succeeded = mercury__string__to_int_2_p_0(Arg_36, &IntArg_37);
            if (succeeded)
            {
              MR_Word TypeCtorInfo_193_193;
              MR_Word Var_43;
              MR_Word STATE_VARIABLE_OptionTable_44_44;

              {
                Var_43 = (MR_Word) MR_mkword(MR_mktag(2), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                MR_hl_field(MR_mktag(2), Var_43, 0) = ((MR_Box) (IntArg_37));
              }
              TypeCtorInfo_193_193 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
              mercury__map__set_4_p_0(TypeInfo_for_OptionType_190, TypeCtorInfo_193_193, Flag_3, ((MR_Box) (Var_43)), HeadVar__6_6, &STATE_VARIABLE_OptionTable_44_44);
              {
                MR_Word base;
                base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                *Result_7 = base;
                MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (STATE_VARIABLE_OptionTable_44_44));
              }
            }
            else
              mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_4_p_0(Flag_3, HeadVar__2_2, Arg_36, Result_7);
          }
        }
        break;
      case (MR_Integer) 3:
        switch (((MR_Integer) (MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 0)))) {
          default: /*NOTREACHED*/ MR_assert(0);
          case (MR_Integer) 0:
            {
              mercury__set__insert_3_p_0(TypeInfo_for_OptionType_190, Flag_3, STATE_VARIABLE_OptionsSet_0_8, STATE_VARIABLE_OptionsSet_9);
              if ((MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__error_1_p_0((MR_String) "string argument expected in getopt.process_option");
                  return;
                }
              }
              else
              {
                MR_Word TypeCtorInfo_194_194;
                MR_String Arg_53 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeArg_4, (MR_Integer) 0)));
                MR_Word Var_59;
                MR_Word STATE_VARIABLE_OptionTable_60_60;

                {
                  Var_59 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_59, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 0));
                  MR_hl_field(MR_mktag(3), Var_59, 1) = ((MR_Box) (Arg_53));
                }
                TypeCtorInfo_194_194 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
                mercury__map__set_4_p_0(TypeInfo_for_OptionType_190, TypeCtorInfo_194_194, Flag_3, ((MR_Box) (Var_59)), HeadVar__6_6, &STATE_VARIABLE_OptionTable_60_60);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *Result_7 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (STATE_VARIABLE_OptionTable_60_60));
                }
              }
            }
            break;
          case (MR_Integer) 1:
            {
              mercury__set__insert_3_p_0(TypeInfo_for_OptionType_190, Flag_3, STATE_VARIABLE_OptionsSet_0_8, STATE_VARIABLE_OptionsSet_9);
              if ((MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__error_1_p_0((MR_String) "integer argument expected in getopt.process_option");
                  return;
                }
              }
              else
              {
                MR_String Arg_69 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeArg_4, (MR_Integer) 0)));
                MR_Integer IntArg_70;

                succeeded = mercury__string__to_int_2_p_0(Arg_69, &IntArg_70);
                if (succeeded)
                {
                  MR_Word TypeCtorInfo_195_195;
                  MR_Word Var_76;
                  MR_Word STATE_VARIABLE_OptionTable_77_77;
                  MR_Word Var_78;

                  {
                    Var_78 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(1), Var_78, 0) = ((MR_Box) (IntArg_70));
                  }
                  {
                    Var_76 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                    MR_hl_field(MR_mktag(3), Var_76, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 1));
                    MR_hl_field(MR_mktag(3), Var_76, 1) = ((MR_Box) (Var_78));
                  }
                  TypeCtorInfo_195_195 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
                  mercury__map__set_4_p_0(TypeInfo_for_OptionType_190, TypeCtorInfo_195_195, Flag_3, ((MR_Box) (Var_76)), HeadVar__6_6, &STATE_VARIABLE_OptionTable_77_77);
                  {
                    MR_Word base;
                    base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                    *Result_7 = base;
                    MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (STATE_VARIABLE_OptionTable_77_77));
                  }
                }
                else
                  mercury__getopt__f_85_110_117_115_101_100_65_114_103_115_95_95_112_114_101_100_95_95_110_117_109_101_114_105_99_95_97_114_103_117_109_101_110_116_95_95_91_49_93_95_48_4_p_0(Flag_3, HeadVar__2_2, Arg_69, Result_7);
              }
            }
            break;
          case (MR_Integer) 2:
            {
              mercury__set__insert_3_p_0(TypeInfo_for_OptionType_190, Flag_3, STATE_VARIABLE_OptionsSet_0_8, STATE_VARIABLE_OptionsSet_9);
              if ((MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__error_1_p_0((MR_String) "string argument expected in getopt.process_option");
                  return;
                }
              }
              else
              {
                MR_Word TypeCtorInfo_196_196;
                MR_Word Var_93;
                MR_Word STATE_VARIABLE_OptionTable_94_94;

                {
                  Var_93 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_93, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
                  MR_hl_field(MR_mktag(3), Var_93, 1) = ((MR_Box) (MaybeArg_4));
                }
                TypeCtorInfo_196_196 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
                mercury__map__set_4_p_0(TypeInfo_for_OptionType_190, TypeCtorInfo_196_196, Flag_3, ((MR_Box) (Var_93)), HeadVar__6_6, &STATE_VARIABLE_OptionTable_94_94);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *Result_7 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (STATE_VARIABLE_OptionTable_94_94));
                }
              }
            }
            break;
          case (MR_Integer) 3:
            {
              MR_Word List0_96 = ((MR_Word) (MR_hl_field(MR_mktag(3), HeadVar__1_1, (MR_Integer) 1)));

              mercury__set__insert_3_p_0(TypeInfo_for_OptionType_190, Flag_3, STATE_VARIABLE_OptionsSet_0_8, STATE_VARIABLE_OptionsSet_9);
              if ((MaybeArg_4 == ((MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0)))))
              {
                {
                  mercury__require__error_1_p_0((MR_String) "acumulating argument expected in getopt.process_option");
                  return;
                }
              }
              else
              {
                MR_Word TypeCtorInfo_197_197;
                MR_Word TypeCtorInfo_198_198;
                MR_String Arg_104 = ((MR_String) (MR_hl_field(MR_mktag(1), MaybeArg_4, (MR_Integer) 0)));
                MR_Word List_105;
                MR_Word Var_111;
                MR_Word Var_112 = (MR_Word) MR_mkword(MR_mktag(0), MR_mkbody((MR_Integer) 0));
                MR_Word Var_113;
                MR_Word STATE_VARIABLE_OptionTable_114_114;

                {
                  Var_111 = (MR_Word) MR_mkword(MR_mktag(1), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(1), Var_111, 0) = ((MR_Box) (Arg_104));
                  MR_hl_field(MR_mktag(1), Var_111, 1) = ((MR_Box) (Var_112));
                }
                TypeCtorInfo_197_197 = (MR_Word) &mercury__builtin__builtin__type_ctor_info_string_0;
                mercury__list__append_3_p_1(TypeCtorInfo_197_197, List0_96, Var_111, &List_105);
                {
                  Var_113 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 2 * sizeof(MR_Word)), NULL, NULL));
                  MR_hl_field(MR_mktag(3), Var_113, 0) = ((MR_Box) (MR_Word) ((MR_Integer) 3));
                  MR_hl_field(MR_mktag(3), Var_113, 1) = ((MR_Box) (List_105));
                }
                TypeCtorInfo_198_198 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
                mercury__map__set_4_p_0(TypeInfo_for_OptionType_190, TypeCtorInfo_198_198, Flag_3, ((MR_Box) (Var_113)), HeadVar__6_6, &STATE_VARIABLE_OptionTable_114_114);
                {
                  MR_Word base;
                  base = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL);
                  *Result_7 = base;
                  MR_hl_field(MR_mktag(0), base, 0) = ((MR_Box) (STATE_VARIABLE_OptionTable_114_114));
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
  MR_Box Flag_5,
  MR_String Option_6,
  MR_String Arg_7,
  MR_Word * Result_8)
{
  {
    MR_Word Reason_9;
    MR_Word Error_10;

    {
      Reason_9 = (MR_Word) MR_mkword(MR_mktag(3), MR_new_object(MR_Word, ((MR_Integer) 1 * sizeof(MR_Word)), NULL, NULL));
      MR_hl_field(MR_mktag(3), Reason_9, 0) = ((MR_Box) (Arg_7));
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
mercury__getopt__process_special_8_p_0(
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
mercury__getopt__init_option_table_multi_2_p_0_3(
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
mercury__getopt__init_option_table_multi_2_p_0_1(
  void * env_ptr_arg)
{
  {
    struct mercury__getopt__init_option_table_multi_2_p_0_2_env_0_s * env_ptr = (struct mercury__getopt__init_option_table_multi_2_p_0_2_env_0_s *) env_ptr_arg;

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

      mercury__getopt__IntroducedFrom__pred__init_option_table_multi__421__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), &(env).mercury__getopt__init_option_table_multi_2_p_0_2_env_0__conv0_LambdaHeadVar__1_10, mercury__getopt__init_option_table_multi_2_p_0_1, &env);
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
      MR_hl_field(MR_mktag(0), Var_9, 0) = ((MR_Box) (&mercury__getopt_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_9, 1) = ((MR_Box) (mercury__getopt__init_option_table_multi_2_p_0_2));
      MR_hl_field(MR_mktag(0), Var_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_9, 3) = ((MR_Box) (TypeInfo_for_OptionType_12));
      MR_hl_field(MR_mktag(0), Var_9, 4) = ((MR_Box) (OptionDefaultsPred_3));
    }
    TypeCtorInfo_14_14 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
    TypeCtorInfo_13_13 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
    {
      TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_15_15, 0) = ((MR_Box) (TypeCtorInfo_14_14));
      MR_hl_field(MR_mktag(0), TypeInfo_15_15, 1) = ((MR_Box) (TypeInfo_for_OptionType_12));
      MR_hl_field(MR_mktag(0), TypeInfo_15_15, 2) = ((MR_Box) (TypeCtorInfo_13_13));
    }
    {
      V_6_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), V_6_24, 0) = ((MR_Box) (&mercury__getopt_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), V_6_24, 1) = ((MR_Box) (mercury__getopt__init_option_table_multi_2_p_0_3));
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
mercury__getopt__init_option_table_2_p_0_3(
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
mercury__getopt__init_option_table_2_p_0_1(
  void * env_ptr_arg)
{
  {
    struct mercury__getopt__init_option_table_2_p_0_2_env_0_s * env_ptr = (struct mercury__getopt__init_option_table_2_p_0_2_env_0_s *) env_ptr_arg;

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

      mercury__getopt__IntroducedFrom__pred__init_option_table__414__1_3_p_0(((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 3))), ((MR_Word) (MR_hl_field(MR_mktag(0), closure, (MR_Integer) 4))), &(env).mercury__getopt__init_option_table_2_p_0_2_env_0__conv0_LambdaHeadVar__1_10, mercury__getopt__init_option_table_2_p_0_1, &env);
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
      MR_hl_field(MR_mktag(0), Var_9, 0) = ((MR_Box) (&mercury__getopt_scalar_common_6[0]));
      MR_hl_field(MR_mktag(0), Var_9, 1) = ((MR_Box) (mercury__getopt__init_option_table_2_p_0_2));
      MR_hl_field(MR_mktag(0), Var_9, 2) = ((MR_Box) (MR_Word) ((MR_Integer) 2));
      MR_hl_field(MR_mktag(0), Var_9, 3) = ((MR_Box) (TypeInfo_for_OptionType_12));
      MR_hl_field(MR_mktag(0), Var_9, 4) = ((MR_Box) (OptionDefaultsPred_3));
    }
    TypeCtorInfo_14_14 = (MR_Word) &mercury__pair__pair__type_ctor_info_pair_2;
    TypeCtorInfo_13_13 = (MR_Word) &mercury__getopt__getopt__type_ctor_info_option_data_0;
    {
      TypeInfo_15_15 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 3 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), TypeInfo_15_15, 0) = ((MR_Box) (TypeCtorInfo_14_14));
      MR_hl_field(MR_mktag(0), TypeInfo_15_15, 1) = ((MR_Box) (TypeInfo_for_OptionType_12));
      MR_hl_field(MR_mktag(0), TypeInfo_15_15, 2) = ((MR_Box) (TypeCtorInfo_13_13));
    }
    {
      V_6_24 = (MR_Word) MR_new_object(MR_Word, ((MR_Integer) 4 * sizeof(MR_Word)), NULL, NULL);
      MR_hl_field(MR_mktag(0), V_6_24, 0) = ((MR_Box) (&mercury__getopt_scalar_common_7[0]));
      MR_hl_field(MR_mktag(0), V_6_24, 1) = ((MR_Box) (mercury__getopt__init_option_table_2_p_0_3));
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
mercury__getopt____Unify____maybe_option_table_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__getopt____Unify____maybe_option_table_1_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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

    mercury__getopt____Compare____maybe_option_table_1_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
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

    succeeded = mercury__getopt____Unify____maybe_option_table_se_1_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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

    mercury__getopt____Compare____maybe_option_table_se_1_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
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

    succeeded = mercury__getopt____Unify____option_data_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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

    mercury__getopt____Compare____option_data_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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

    succeeded = mercury__getopt____Unify____option_error_1_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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

    mercury__getopt____Compare____option_error_1_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
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

    succeeded = mercury__getopt____Unify____option_error_reason_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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

    mercury__getopt____Compare____option_error_reason_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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

    succeeded = mercury__getopt____Unify____option_ops_1_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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

    mercury__getopt____Compare____option_ops_1_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_internal_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__getopt____Unify____option_ops_internal_1_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    return succeeded;
  }
}

static void MR_CALL 
mercury__getopt____Compare____option_ops_internal_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__getopt____Compare____option_ops_internal_1_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
  }
}

static MR_bool MR_CALL 
mercury__getopt____Unify____option_ops_special_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box wrapper_arg_2,
  MR_Box wrapper_arg_3)
{
  {
    MR_bool succeeded;

    succeeded = mercury__getopt____Unify____option_ops_special_1_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
    return succeeded;
  }
}

static void MR_CALL 
mercury__getopt____Compare____option_ops_special_1_0_10001(
  MR_Box wrapper_arg_1,
  MR_Box * wrapper_arg_2,
  MR_Box wrapper_arg_3,
  MR_Box wrapper_arg_4)
{
  {
    MR_Word conv0_HeadVar__1_1;

    mercury__getopt____Compare____option_ops_special_1_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
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

    succeeded = mercury__getopt____Unify____option_ops_track_1_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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

    mercury__getopt____Compare____option_ops_track_1_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
    *wrapper_arg_2 = ((MR_Box) (conv0_HeadVar__1_1));
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

    succeeded = mercury__getopt____Unify____option_table_1_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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

    mercury__getopt____Compare____option_table_1_0(((MR_Word) wrapper_arg_1), &conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_3), ((MR_Word) wrapper_arg_4));
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

    succeeded = mercury__getopt____Unify____special_data_0_0(((MR_Word) wrapper_arg_1), ((MR_Word) wrapper_arg_2));
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

    mercury__getopt____Compare____special_data_0_0(&conv0_HeadVar__1_1, ((MR_Word) wrapper_arg_2), ((MR_Word) wrapper_arg_3));
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

// :- end_module getopt.
